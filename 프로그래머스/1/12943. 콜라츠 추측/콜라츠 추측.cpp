#include <string>
#include <vector>

using namespace std;
/*
1. 주어진 num이 짝수인지 홀수인지 판단하기(num이 1이면 0반환)
2. 짝수면 2 나누기, 홀수면 3곱하고 1더하기
3. 반복문으로 위 작업을 반복하면서 카운트하기
4. 반복 카운트가 500넘어가면 -1 반환하기
*/
int solution(int num)
{
    int answer = 0;
    int count = 0;
    long long a = num; // num이 int여서 계산 오류가 발생하는거 같아서 long long 타입으로 바꿔서 계산해봄
    
    if(a == 1) // 1이면
    {
        return 0;
    }
    while(a > 1)
    {
        if(a % 2 == 0) // 짝수면
        {
            a /= 2;
            ++count;
        }
        else if(a % 2 == 1) // 홀수면
        {
            a = (a * 3) + 1;
            ++count;
        }
        
        if(count >= 500)
        {
            return -1;
        }
    }
    
    answer = count;
    
    return answer;
}