#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs)
{
    int answer = 0;
    
    for(size_t i = 0; i < absolutes.size(); ++i)
    {
        for(size_t j = 0; j < signs.size(); ++j)
        {
            if (i == j)
            {
                if(signs[i])
                {
                    answer += absolutes[i];
                }
                else
                {
                    answer -= absolutes[i];
                }
            }
        }
    }
    return answer;
}