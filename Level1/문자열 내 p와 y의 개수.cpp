#include <string>
#include <iostream>

using namespace std;

/*
�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�. 
s�� 'p'�� ������ 'y'�� ������ ���� ������ True, 
�ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 
'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�. 
��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.

���� ��� s�� "pPoooyY"�� true�� return�ϰ� "Pyy"��� false�� return�մϴ�.

*/

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p' || s[i] == 'P')
            pCount++;

        if (s[i] == 'y' || s[i] == 'Y')
            yCount++;

        if (pCount == yCount || pCount == 0 && yCount == 0)
            answer = true;
        else
            answer = false;
    }

    return answer;
}