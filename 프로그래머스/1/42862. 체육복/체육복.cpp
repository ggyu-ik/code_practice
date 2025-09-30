#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;

    answer = n - lost.size();

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    for (int k = 0; k < lost.size(); ++k) // lost와 reserve 같은 학생 있으면 입고 지우기
    {
        auto it = find(reserve.begin(), reserve.end(), lost[k]);
        if (it != reserve.end())
        {
            ++answer;
            reserve.erase(it);
            lost.erase(lost.begin() + k);

            if (lost.empty() || reserve.empty()) // 모든 학생이 빌렸거나 빌려줬으면 return
            {
                return answer;
            }
            --k;
        }
    }

    for (size_t i = 0; i < lost.size(); ++i)
    {
        for (size_t j = 0; j < reserve.size(); ++j)
        {
            if (lost[i] - 1 == reserve[j] || lost[i] + 1 == reserve[j])
            {
                ++answer;
                reserve.erase(reserve.begin() + j);
                break;
            }
        }
    }
    return answer;
}