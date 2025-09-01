#include <string>
#include <vector>

using namespace std;

string solution(string phone_number)
{
    string answer = "";
    for(size_t i = 0; i < phone_number.size()-4; ++i)
    {
        phone_number[i] ='*';
    }
    answer = phone_number;
    return answer;
}