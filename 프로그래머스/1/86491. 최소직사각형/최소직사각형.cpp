#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;
    vector<vector<int>> sorting = {};
    int num1 = 0;
    int num2 = 0;
    
    for(size_t i = 0; i < sizes.size(); ++i)
    {
        if(sizes[i][0] > sizes[i][1])
        {
            sorting.push_back({sizes[i][0], sizes[i][1]});
        }
        else
        {
            sorting.push_back({sizes[i][1], sizes[i][0]});
        }
    }
    
    for(auto& vec : sorting)
    {
        if(num1 < vec[0])
        {
            num1 = vec[0];
        }
        if(num2 < vec[1])
        {
            num2 = vec[1];
        }
    }
    answer = num1 * num2;
    
    return answer;
}