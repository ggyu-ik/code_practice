#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//commands의 i부터 j 까지 array 배열에서 추출해서 정렬 후 k 번째 수 뽑기
vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    vector<int> toSort;
    
    for(size_t index = 0; index < commands.size(); ++index) // commands 순회하기
    {
        for(int i = commands[index][0] - 1; i < commands[index][1]; ++i) // i부터 j까지 수 뽑아내기
        {
            toSort.push_back(array[i]);
        }
        sort(toSort.begin(), toSort.end()); // 정렬
        answer.push_back(toSort[commands[index][2] - 1]);
        
        toSort.clear(); // toSort 초기화
    }
    
    return answer;
}