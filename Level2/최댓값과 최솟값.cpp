#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
* ���ڿ� s���� �������� ���е� ���ڵ��� ����Ǿ� �ֽ��ϴ�. 
str�� ��Ÿ���� ���� �� �ּҰ��� �ִ밪�� ã�� �̸� "(�ּҰ�) (�ִ밪)"������ ���ڿ��� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.
������� s�� "1 2 3 4"��� "1 4"�� �����ϰ�, "-1 -2 -3 -4"��� "-4 -1"�� �����ϸ� �˴ϴ�.
*/

string solution(string s)
{
    string answer = "";

    string tmp = "";

    vector<int> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            v.push_back(stoi(tmp));
            tmp = "";

        }
        else
            tmp += s[i];
    }

    if (tmp != "")
        v.push_back(stoi(tmp));

    sort(v.begin(), v.end());

    answer += to_string(v[0]) + ' ';
    answer += to_string(v[v.size() - 1]);

    return answer;
}