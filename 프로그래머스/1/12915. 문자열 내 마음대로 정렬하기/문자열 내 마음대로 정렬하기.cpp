#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;
    answer.push_back(strings[0]);
    
    for(size_t i = 0; i < strings.size() - 1; ++i)
    {
        answer.push_back(strings[i + 1]);
        
        for(size_t j = answer.size() - 1; j > 0 ; --j)
        {
            if(answer[j - 1][n] > answer[j][n]  || (answer[j - 1] > answer[j] && answer[j][n] == answer[j - 1][n]))
            {
                swap(answer[j - 1], answer[j]);
            }
            else
            {
                break;
            }
        }
    }
    return answer;
}
