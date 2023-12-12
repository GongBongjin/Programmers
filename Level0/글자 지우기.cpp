#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices)
{
    string answer = "";

    vector<bool> erase(my_string.size(), false);
    for (int i : indices)
    {
        erase[i] = true;
    }

    for (int i = 0; i < my_string.size(); i++)
    {
        if (erase[i] == false)
        {
            answer += my_string[i];
        }
    }

    return answer;
}