#include <string>
#include <vector>

using namespace std;

string solution(string my_string)
{
    string output = "";
    int stringSize = my_string.size();

    for (int i = stringSize - 1; i >= 0; i--)
        output.push_back((char)my_string[i]);

    return output;
}