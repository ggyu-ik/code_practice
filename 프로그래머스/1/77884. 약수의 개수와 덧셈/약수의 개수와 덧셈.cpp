#include <string>
#include <vector>

using namespace std;
// 1. left부터 right까지의 수를 구함
// 2. 그 수들의 약수를 구함
// 3. 약수의 개수가 짝수면 더하고 홀수면 뺌
int solution(int left, int right)
{
    int answer = 0;
    vector<int> num = {};
    
    for(int i = left; i <= right; ++i) // i가 left부터 right까지의 수
    {
        for(int j = 1; j <= i; ++j)
        {
            if(i % j == 0) // 약수 구하기
            {
                num.push_back(j);
            }
        }
        if(num.size() % 2 == 0) // 약수의 개수가 짝수면 더하고 홀수면 뺌
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
        num = {};
    }
    return answer;
}