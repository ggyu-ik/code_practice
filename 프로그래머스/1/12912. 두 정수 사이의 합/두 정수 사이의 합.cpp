#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    long long sum = 0;
    if(a <= b)
    {
        for(int i = a; i <= b; ++i)
            {
                sum += i;
            }
    }
    else if(a > b)
    {
        for(int i = a; i >= b; --i)
        {
            sum += i;
        }
    }
    
    answer = sum;       
    
    return answer;
}