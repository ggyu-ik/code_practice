#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2)
{
    int answer = 0;
    double a = 0;
    
    a = (double)num1 / num2;
    answer = a * 1000;
    
    return answer;
}