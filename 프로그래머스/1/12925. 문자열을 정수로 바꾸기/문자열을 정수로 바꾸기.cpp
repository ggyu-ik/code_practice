#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    int num = 0;
    
    if(s[0] == '-') // 첫 문자가 - 일때
    {
        for(int i = 1 ; i < s.size() ; ++i) // 두번째 문자부터 시작
        {
            num = num * 10 + (s[i] - '0'); // 문자형 숫자에 '0' = 48을 빼면 정수형 숫자가 됨.
        }
        answer = num * -1;
    }
    else if(s[0] == '+')
    {
        for(int i = 1 ; i <s.size() ; ++i)
        {
            num = num * 10 + (s[i] - '0');
        }
        answer = num;
    }
    else
    {
        for(int i = 0 ; i < s.size() ; ++i)
        {
            num = num * 10 + (s[i] - '0');
        }
        answer = num;
    }
    
    return answer;
}