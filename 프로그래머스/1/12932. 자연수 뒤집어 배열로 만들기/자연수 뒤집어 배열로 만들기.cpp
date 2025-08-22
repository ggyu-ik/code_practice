#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;
    long long ten = 1;
    long long a = 0;
    long long b = 0;
    string count = to_string(n);
    
    for(int i = 1; i <= count.length() ; ++i)
    {
        ten *= 10;
        a = n % ten;
        b = a / (ten / 10);
        
        answer.push_back(b);
    }
    return answer;
}