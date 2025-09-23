#include <vector>
#include <iostream>
using namespace std;

bool sosu(int num)
{
    for(int n = 2; n * n <= num; ++n)
    {
        if(num % n == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums)
{
    int answer = 0;
    for(size_t i = 0; i < nums.size() - 2; ++i)
    {
        for(size_t j = i + 1; j < nums.size() - 1; ++j)
        {
            for(size_t k = j + 1; k < nums.size(); ++k)
            {
                int num = nums[i] + nums[j] + nums[k];
                if(sosu(num))
                {
                    ++answer;
                }
            }
        }
    }

    return answer;
}