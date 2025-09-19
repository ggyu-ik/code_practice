#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    int goalindex = 0;
    int cards2index = 0;

    for (size_t i = 0;; )
    {
        if(goalindex == goal.size())
        {
            return "Yes";
        }
        
        if (cards1[i] != goal[goalindex])
        {
            if(cards2index == cards2.size())
            {
                return "No";
            }
            
            if (cards2[cards2index] != goal[goalindex])
            {
                return "No";
            }
            else
            {
                ++goalindex;
                ++cards2index;
                continue;
            }
        }
        else
        {
            ++goalindex;
            ++i;
            continue;
        }
    }       
}