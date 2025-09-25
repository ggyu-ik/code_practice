#include <string>
#include <vector>

using namespace std;
// number 약수의 개수 구하기
// 약수 개수가 limit 넘는지 체크
// 넘으면 약수 개수를 power로 고정
int solution(int number, int limit, int power)
{
    int answer = 0;
    int count = 0; // 약수 개수
    vector<int> num;
    
    for(int n = 1; n <= number; ++n)
    {
        for(int i = 1; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                ++count;
                if (i * i != n)
                {
                    ++count;
                }
            }
        }
        if(count > limit)
        {
            count = power;
        }
        num.push_back(count);
        count = 0;
    }
    for(auto ad : num)
    {
        answer += ad;
    }
    
    return answer;
}