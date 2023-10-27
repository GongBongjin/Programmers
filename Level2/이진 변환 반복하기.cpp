#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;

    string temp = "";

    int zero = 0, total = 0;

    while (s != "1")
    {
        total++;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                temp += s[i];
            }
            else
            {
                zero++;
            }
        }

        int tempSize = temp.size();
        temp.clear();
        s.clear();

        while (tempSize >= 1)
        {
            s.insert(0, to_string(tempSize % 2));
            tempSize /= 2;
        }
    }

    answer.push_back(total);
    answer.push_back(zero);

    return answer;
}