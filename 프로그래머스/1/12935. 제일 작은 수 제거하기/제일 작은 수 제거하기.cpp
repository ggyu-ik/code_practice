#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int min = arr[0];
    
    for(size_t i = 0; i < arr.size() - 1; ++i) // 제일 작은 수 찾기
    {
        if(min > arr[i+1])
        {
            min = arr[i+1];
        }
    }
    
    auto it = find(arr.begin(), arr.end(), min); // arr에서 제일 작은 수의 위치 찾기
    
    if(arr.size() == 1)
    {
        answer.push_back(-1);
    }
    else
    {
        arr.erase(it); // 제일 작은 수 제거
        
        for(auto num : arr)
        {
            answer.push_back(num);
        }
    }
    return answer;
}