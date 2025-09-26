#include <string>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    int num = 0;
    int afterindex = 0;
    string Temp = "";
    array<char, 4> Nephew = { 'a','y','w','m' };

    for (size_t i = 0; i < babbling.size(); ++i)
    {
        int index = -1;
        while (true)
        {
            auto it = find(Nephew.begin(), Nephew.end(), babbling[i][num]);

            if (it == Nephew.end()) break;

            afterindex = it - Nephew.begin();

            if (afterindex == index) break; // 같은 발음 연속 방지

            index = afterindex;
            switch (afterindex)
            {
            case 0:
                Temp += "aya";
                num += 3;
                break;
            case 1:
                Temp += "ye";
                num += 2;
                break;
            case 2:
                Temp += "woo";
                num += 3;
                break;
            case 3:
                Temp += "ma";
                num += 2;
                break;
            }

            if (babbling[i].size() <= Temp.size())
            {
                break;
            }
        }

        if (Temp == babbling[i])
        {
            ++answer;
        }

        num = 0;
        Temp = "";
    }
    
    return answer;
}