#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int num = s.length();
    
    if(num % 2 == 0)
    {
        for(int i = (num/2)-1; i <= num/2; ++i)
        {
            answer += s[i];
        }
    }
    else
    {
        answer = s[num/2];
    }
    return answer;
}