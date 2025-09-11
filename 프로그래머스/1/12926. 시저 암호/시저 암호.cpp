#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";
    for(auto& c : s)
    {
        if(c == ' ')
        {
        }
        else if (c + n > 'z' && c >= 'a' && c <= 'z')
        {
            c = c - 26 + n;
        }
        else if (c + n > 'Z' && c >= 'A' && c <= 'Z')
        {
            c = c - 26 + n;
        }
        else
        {
            c += n;
        }
        answer += c;
    }
    return answer;
}