#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = "";

    int ascii = 'a' - 'A';

    for (char c : myString)
    {
        if (c < 'Z')
            answer.push_back(c + ascii);
        else
            answer.push_back(c);
    }

    return answer;
}