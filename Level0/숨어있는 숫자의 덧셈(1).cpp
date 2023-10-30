#include <string>
#include <vector>

#define ASCIIZERO 48

using namespace std;

int solution(string my_string)
{
    int answer = 0;

    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] <= ASCIIZERO + 9 && my_string[i] >= ASCIIZERO)
            answer += (int)my_string[i] - ASCIIZERO;
    }

    return answer;
}