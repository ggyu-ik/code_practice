#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    string answer = "";
    string day[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int index = 0;
    
    if(a == 2)
    {
        b += 31;
    }
    else if(a == 3)
    {
        b += 60;
    }
    else if(a == 4)
    {
        b += 91;
    }
    else if(a == 5)
    {
        b += 121;
    }
    else if(a == 6)
    {
        b += 152;
    }
    else if(a == 7)
    {
        b += 182;
    }
    else if(a == 8)
    {
        b += 213;
    }
    else if(a == 9)
    {
        b += 244;
    }
    else if(a == 10)
    {
        b += 274;
    }
    else if(a == 11)
    {
        b += 305;
    }
    else if(a == 12)
    {
        b += 335;
    }
    
    index = b % 7;
    answer = day[index];
    
    return answer;
}