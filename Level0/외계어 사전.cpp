#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic)
{
    int num = spell.size();
    bool check = false;
    for (int i = 0; i < dic.size(); i++)
    {
        if (dic[i].size() == num)
        {
            check = true;
            for (int j = 0; j < num; j++)
            {
                if (dic[i].find(spell[j]) == string::npos)
                {
                    check = false;
                    break;
                }
            }
        }
        if (check == true) return 1;
    }
    return 2;
}