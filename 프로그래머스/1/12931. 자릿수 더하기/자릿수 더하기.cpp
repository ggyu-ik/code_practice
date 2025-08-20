#include <iostream>

int solution(int n)
{
    int answer = 0;
    int a = 0;
    int b = 0;
    int c = 1;
    
    for(int i = 1 ; i <= 8 ; i++)
    {
        c *= 10;
        a = n % c;
        b = a / (c / 10);
        
        answer += b;
    }
    if(n == 100000000)
    {
        answer = 1;
    }
    
    return answer;
}