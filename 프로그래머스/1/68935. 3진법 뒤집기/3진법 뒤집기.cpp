#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int num = 0;
    int a = 1;
    vector<int> three;
    
    for(int i = 0; ; ++i)
    {
        num = n % 3;
        n /= 3;
        three.push_back(num);
        if(n == 0)
        {
            break;
        }
    }
    
    for(int i = three.size() - 1; i >= 0; --i)
    {
        answer += three[i] * a;
        a *= 3;
    }
    return answer;
}