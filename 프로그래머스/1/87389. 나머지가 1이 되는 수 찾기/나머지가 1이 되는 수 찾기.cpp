#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int x = 1;
    
    while(n % x != 1)
    {
        x += 1;
    }
    
    answer = x;
    return answer;
}