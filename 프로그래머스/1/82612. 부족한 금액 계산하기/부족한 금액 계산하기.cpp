using namespace std;

// 1. money에서 count가 오를때만큼 price * count만큼 빠져나감
long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum = 0; // 놀이기구 count번 탔을 때 이용 금액 합
    
    for(int i = 1; i <= count; ++i)
    {
        sum += price * i;
        if(money - sum < 0) // money가 부족하면
        {
            answer = (money - sum) * -1;
        }
        else
        {
            answer = 0;
        }
    }
    return answer;
}