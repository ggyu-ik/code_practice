#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    int zerocount = 0; // 알아볼 수 없는 번호 개수
    int count = 0; // 일치한 번호 개수
    
    for(size_t i = 0; i < lottos.size(); ++i)
    {
        if(lottos[i] == 0)
        {
            ++zerocount;
            continue;
        }
        for(size_t j = 0; j < win_nums.size(); ++j)
        {
            if(lottos[i] == win_nums[j])
            {
                ++count;
            }
        }
        
    }
    switch(count + zerocount) // 최고 순위
    {
        case 0:
            answer.push_back(6);
            break;
        case 1:
            answer.push_back(6);
            break;
        case 2:
            answer.push_back(5);
            break;
        case 3:
            answer.push_back(4);
            break;
        case 4:
            answer.push_back(3);
            break;
        case 5:
            answer.push_back(2);
            break;
        case 6:
            answer.push_back(1);
            break;
    }
    switch(count) // 최저 순위
    {
        case 0:
            answer.push_back(6);
            break;
        case 1:
            answer.push_back(6);
            break;
        case 2:
            answer.push_back(5);
            break;
        case 3:
            answer.push_back(4);
            break;
        case 4:
            answer.push_back(3);
            break;
        case 5:
            answer.push_back(2);
            break;
        case 6:
            answer.push_back(1);
            break;
    }
    return answer;
}