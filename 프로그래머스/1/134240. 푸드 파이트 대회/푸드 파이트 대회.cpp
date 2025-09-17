#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

string solution(vector<int> food)
{
    string answer = "";
    string str1 = "";
    
    for(int i = 1; i < food.size(); ++i)
    {
        
        int num = food[i] / 2;
        for(int j = 0; j < num; ++j)
        {
            str1 += to_string(i);
        }
    }
    answer = str1; 
    
    sort(str1.begin(), str1.end(), compare);
    
    answer += '0' + str1;
    
    
    return answer;
}