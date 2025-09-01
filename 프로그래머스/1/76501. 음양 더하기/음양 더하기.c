#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len)
{
    int answer = 0;
    
    for(size_t i = 0; i < absolutes_len; ++i)
    {
        for(size_t j = 0; j < signs_len; ++j)
        {
            if (i == j)
            {
                if(signs[i])
                {
                    answer += absolutes[i];
                }
                else
                {
                    answer -= absolutes[i];
                }
            }
        }
    }
    return answer;
}