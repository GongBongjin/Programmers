#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = "";
    int ascii = 'a' - 'A';

    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] >= 'A' && myString[i] <= 'Z')
            myString[i] = myString[i] + ascii;

        if (myString[i] == 'a')
            myString[i] = 'A';
    }

    answer = myString;

    return answer;
}