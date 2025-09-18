#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> temp; // 명예의 전당 담을 벡터

    if(k >= score.size())
    {
       for (size_t i = 0; i < score.size(); ++i) // k일차 전까지 모든 score 넣고 제일 작은 수 뽑기
        {
            temp.push_back(score[i]);
            sort(temp.begin(), temp.end(), compare);
            answer.push_back(temp[i]);
        } 
    }
    else
    {
        for (int i = 0; i < k; ++i) // k일차 전까지 모든 score 넣고 제일 작은 수 뽑기
        {
            temp.push_back(score[i]);
            sort(temp.begin(), temp.end(), compare);
            answer.push_back(temp[i]);
        }
        for (size_t j = k; j < score.size(); ++j) // k일차부터 제일 작은 수 삭제 후 새로운 score 넣고 제일 작은 수 뽑기
        {
            if (score[j] > temp[k - 1])
            {
                temp.pop_back();
                temp.push_back(score[j]);
            }
            sort(temp.begin(), temp.end(), compare);
            answer.push_back(temp[k - 1]);
        }
    }
    
    return answer;
}

