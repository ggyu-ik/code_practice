#include <string>
#include <vector>

using namespace std;
// 1. 문자열 길이 4, 6 확인하기
// 2. 문자열이 숫자로만 구성돼있는지
bool solution(string s)
{
    bool answer = true;
    
    if(s.length() != 4 && s.length() != 6) // 문자열 길이 4, 6 아니면 false
    {
        return false;
    }
    
    for(auto str : s) // s 문자열 순회
    {
        if(str < '0' || str > '9') // ASCII 코드를 이용
        {
            return false;
        }
    }
    
    return answer;
}