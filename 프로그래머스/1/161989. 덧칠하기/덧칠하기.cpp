#include <string>
#include <vector>

using namespace std;
// section[0]부터 칠하고 section[i]가 section[0] + m - 1안에 있으면 section[i+1]부터 칠하기 
int solution(int n, int m, vector<int> section)
{
    int answer = 0;
    size_t size = section.size();
    
    for(int i = section[0]; i <= n; )
    {
        ++answer;
        if(i + m - 1 >= n)
        {
            break;
        }
        
        for(size_t j = 1; j < size; ++j) // 다음 칠하기 시작할 구역을 정하기
        {
            if(i + m - 1 >= section[size - 1])
            {
                return answer;
            }
            if(i + m - 1 < section[j])
            {
                i = section[j];
                break;
            }
        }
        
    }
    
    return answer;
}