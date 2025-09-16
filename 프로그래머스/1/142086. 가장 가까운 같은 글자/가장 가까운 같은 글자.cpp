#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    string str = "";
    
    for(size_t i = 0; i < s.size(); ++i)
    {
        auto index = str.rfind(s[i]);
        
        if(index == string::npos) // 없으면
        {
            answer.push_back(-1);
            str.push_back(s[i]);
        }
        else // 있으면
        {            
            answer.push_back(i - index);
            str.push_back(s[i]);
        }
    }
        
    return answer;
}