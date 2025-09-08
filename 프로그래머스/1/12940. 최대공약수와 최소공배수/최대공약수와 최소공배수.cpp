#include <string>
#include <vector>

using namespace std;
// 1. 공약수 구하기
// 2. 그중 최대값을 벡터에 넣기
// 3. 공배수 구하기
// 4. 그중 최소값을 벡터에 넣기
vector<int> solution(int n, int m)
{
    vector<int> answer;
    int num1 = 0;
    int num2 = 0;
    
    for(int i = 1; i <= m; ++i)
    {
        if(n % i == 0 && m % i == 0)
        {
            num1 = i;
        }
    }
    answer.push_back(num1);
    
    num2 = n * m / num1;
    answer.push_back(num2);
    
    return answer;
}