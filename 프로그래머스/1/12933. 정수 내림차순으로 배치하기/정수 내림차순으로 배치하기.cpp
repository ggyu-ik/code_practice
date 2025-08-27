#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// 1. n의 각 자리 수를 구한다.
// 2. 구한 수를 벡터에 원소로 넣는다.
// 3. sort로 오름차순으로 정렬한다.
// 4. for문으로 원소를 왼쪽부터 꺼내서 수를 합친다.
long long solution(long long n)
{
    long long answer = 0;
    string size = to_string(n); // n이 몇자리인지 구하기 위함
    int a = 0;
    vector<int> num;
    
    
    for(size_t i = 0; i < size.size(); ++i) // 각 자리수 구해서 벡터에 원소로 넣기
    {
        a = n % 10;
        num.push_back(a);
        n /= 10;
    }
    
    sort(num.begin(), num.end()); // sort로 오름차순 정렬
    
    int b = 1;
    int c = 0;
    
    for(size_t i = 0; i < num.size(); ++i) // 원소 처음부터 꺼내서 합치기
    {
        c = num[i] * b;
        b *= 10;
        answer += c;
    }
    
    return answer;
}