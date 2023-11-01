#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k)
{
    int answer = 0;

    string output = "";

    for (int index = i; index <= j; index++)
    {
        output += to_string(index);
    }

    for (int l = 0; l < output.size(); l++)
    {
        if (output[l] == k + '0')
            answer++;
    }

    return answer;
}