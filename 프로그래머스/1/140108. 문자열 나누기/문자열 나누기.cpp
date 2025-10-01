#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    char x = 0;
    int xcount = 0;
    int othercount = 0;
    
    for(size_t i = 0; i < s.size(); )
    {
        x = s[i];
        ++xcount;
        
        for(size_t j = i + 1; ; ++j)
        {
            if (j >= s.size())
            {
                ++answer;
                return answer;
            }
            
            if (x == s[j])
            {
                ++xcount;
            }
            else
            {
                ++othercount;
                
            }
            
            if(xcount == othercount)
            {
                ++answer;
                i = j + 1;
                break;
            }
        }
        xcount = 0;
        othercount = 0;
    }
    return answer;
}