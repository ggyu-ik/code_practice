#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    
    for(int i = 0, a = 0, b = 0; b < s.size(); ++i, ++a, ++b)
    {
        if(s[i] == ' ')
        {
            answer += ' ';
            a = -1;
            continue;
        }
        if (a % 2 == 0 && s[i] <= 90) // 짝수번째 알파벳이고 대문자면
        {
            answer += s[i];
        }
        else if (a % 2 == 0 && s[i] > 90) // 짝수번째 알파벳이고 소문자면
        {
            answer += (s[i] - 32);
        }
        else if (a % 2 == 1 && s[i] <= 90) // 홀수번째 알파벳이고 대문자면
        {
            answer += (s[i] + 32);
        }
        else if (a % 2 == 1 && s[i] > 90) // 홀수번째 알파벳이고 소문자면
        {
            answer += s[i];
        }
    }
    return answer;
}