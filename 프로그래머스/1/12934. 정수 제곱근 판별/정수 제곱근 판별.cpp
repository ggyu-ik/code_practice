#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    long long x = 0;
    
    for(long long i = 1 ; i * i <= n ; ++i)
    {
        if(i * i == n)
        {
            answer = (i + 1) * (i + 1);
        }
        else
        {
            answer = -1;
        }
    }
    
    return answer;
}