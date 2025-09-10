#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    string str = "";
    
    for(int i = 0; i <= t.length() - p.length(); ++i)
    {
        for(int j = 0; j < p.length(); ++j)
        {
            str += t[i+j];
        }
        if(str <= p)
        {
            ++answer;
        }
        str = "";
    }
    
    return answer;
}