#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string X, string Y)
{
    string answer = "";
    map<char, int> num;
    
    for (size_t i = 0; i < X.size(); ++i)
    {
        num[X[i]];
        
        size_t pos = Y.find(X[i], answer.find(X[i]) == string::npos ? 0 : num[X[i]] + 1);
        
        if (pos != string::npos)
        {
            num[X[i]] = pos;
            answer.push_back(Y[pos]);
        }
    }
    if (answer.empty())
    {
        return "-1";
    }
    
    sort(answer.begin(),answer.end(), greater<char>());
    
    if (!answer.empty() && answer[0] == '0')
    {
        return "0";
    }
    
    return answer;
}