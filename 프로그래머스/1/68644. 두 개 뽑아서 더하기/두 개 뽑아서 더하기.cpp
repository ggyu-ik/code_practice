#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    
    for(size_t i = 0; i < numbers.size() - 1; ++i)
    {
        for(size_t j = i + 1; j < numbers.size(); ++j)
        {
            int num = numbers[i] + numbers[j];
            
            // numbers[i] + numbers[j] 더한 수를 answer에서 찾기
            auto it = find(answer.begin(), answer.end(), num);
            
            if(it == answer.end()) // 없으면
            {
                answer.push_back(num);
            }
        }
    }
    
    sort(answer.begin(),answer.end());
    
    return answer;
}