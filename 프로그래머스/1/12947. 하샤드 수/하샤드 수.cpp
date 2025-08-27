#include <string>
#include <vector>

using namespace std;
// 1. x의 각 자리수 나누기
// 2. 합 구하기
// 3. if문을 사용해서 x의 나머지가 0인지 확인하기
bool solution(int x)
{
    bool answer = true;
    int a = 0;
    int b = x;
    vector<int> num;
    
    while(b > 0) // 각 자리수 구하기
    {
        a = b % 10;
        num.push_back(a);
        b /= 10;
    }
    
    int sum = 0;
    
    for(size_t i = 0; i < num.size(); ++i) // 합 구하기
    {
        sum += num[i];
    }
    
    if(x % sum == 0) // x가 하샤드 수 인지 판단하기
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    
    return answer;
}