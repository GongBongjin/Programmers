#include <string>
#include <vector>

using namespace std;

/*
* JadenCase�� ��� �ܾ��� ù ���ڰ� �빮���̰�, �� ���� ���ĺ��� �ҹ����� ���ڿ��Դϴ�. 
��, ù ���ڰ� ���ĺ��� �ƴ� ������ �̾����� ���ĺ��� �ҹ��ڷ� ���� �˴ϴ�. (ù ��° ����� �� ����)
���ڿ� s�� �־����� ��, s�� JadenCase�� �ٲ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
*/

string solution(string s)
{
    string answer = "";

    //ascii 'A' = 41;
    //ascii 'a' = 61;

    int ascii = 'a' - 'A';
    bool isFirst = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
            isFirst = true;
        else if (s[i] >= 0 && s[i] <= 9)
            isFirst = true;
        else if (s[i] == ' ')
        {
            answer.push_back(s[i]);
            isFirst = true;
            continue;
        }

        if (isFirst == true)
        {
            if (s[i] >= 'a')
                answer.push_back(s[i] - ascii);
            else
                answer.push_back(s[i]);

            isFirst = false;
        }
        else
        {
            if (s[i] <= 'Z')
                answer.push_back(s[i] + ascii);
            else
                answer.push_back(s[i]);
        }

    }

    return answer;
}