#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int answer = 0;
    int bonus = 0;
    int rest = 0;
    
    while(true)
    {
        bonus = (n / a) * b;
        answer += bonus;
        
        if(n % a != 0)
        {
            rest = n % a;
        }
        
        n = bonus + rest;
        
        rest = 0;
        
        if(n < a)
        {
            break;
        }
    }
    
    return answer;
}