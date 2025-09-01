#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;
    
    for(auto num : numbers)
    {
        answer += num;
    }
    
    answer = 45 - answer;
        
    return answer;
}