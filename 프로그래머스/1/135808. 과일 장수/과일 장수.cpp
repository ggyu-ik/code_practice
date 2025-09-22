#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int solution(int k, int m, vector<int> score)
{
    int answer = 0;
    vector<int> temp;
    
    sort(score.begin(), score.end(), compare);
    
    if(score.size() < m)
    {
        return 0;
    }
    
    for(int i = 0; ; i += m)
    {
        if(i > score.size() - m)
        {
            break;
        }
        
        for(int j = i; j < m + i; ++j)
        {
            temp.push_back(score[j]);
        }
        
        answer += temp[m - 1] * m;
        temp.clear();
    }
    
    return answer;
}