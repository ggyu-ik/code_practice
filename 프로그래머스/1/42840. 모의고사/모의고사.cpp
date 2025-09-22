#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    int su1[5] = {1, 2, 3, 4, 5};
    int su2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int su3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(size_t i = 0; i < answers.size(); ++i)
    {
        if (i >= 5 * (num1 + 1))
        {
            ++num1;
        }
        if (su1[i - (5 * num1)] == answers[i])
        {
            ++score1;
        }
        
        if (i >= 8 * (num2 + 1))
        {
            ++num2;
        }
        if (su2[i - (8 * num2)] == answers[i])
        {
            ++score2;
        }
        
        if (i >= 10 * (num3 + 1))
        {
            ++num3;
        }
        if (su3[i - (10 * num3)] == answers[i])
        {
            ++score3;
        }
    }
    
    int maxscore = max(score1, max(score2, score3));
    
    if(maxscore == score1)
    {
        answer.push_back(1);
    }
    if(maxscore == score2)
    {
        answer.push_back(2);
    }
    if(maxscore == score3)
    {
        answer.push_back(3);
    }
    
    return answer;
}