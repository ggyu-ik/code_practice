#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul)
{
    string answer = "";
    int a = 0;
    
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    
    if(it != seoul.end())
    {
        a = it - seoul.begin();
    }
    else
    {
        return 0;
    }
    
    answer = "김서방은 " + to_string(a) + "에 있다";
    
    return answer;
}