#include<string>
#include <iostream>

using namespace std;

/*
* ��ȣ�� �ٸ��� ¦�������ٴ� ���� '(' ���ڷ� �������� �ݵ�� ¦��� ')' ���ڷ� ������ �Ѵٴ� ���Դϴ�.
���� ���
"()()" �Ǵ� "(())()" �� �ùٸ� ��ȣ�Դϴ�.
")()(" �Ǵ� "(()(" �� �ùٸ��� ���� ��ȣ�Դϴ�.
'(' �Ǵ� ')' �θ� �̷���� ���ڿ� s�� �־����� ��, ���ڿ� s�� �ùٸ� ��ȣ�̸� true�� return �ϰ�, 
�ùٸ��� ���� ��ȣ�̸� false�� return �ϴ� solution �Լ��� �ϼ��� �ּ���.
*/

bool solution(string s)
{
    bool answer = true;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            cnt1++;
        else
            cnt2++;

        if (cnt1 < cnt2)
            answer = false;

        if (s[0] == ')' || s[s.size() - 1] == '(')
            answer = false;
    }
    if (cnt1 == cnt2 && answer == true)
        answer = true;
    else if (cnt1 != cnt2)
        answer = false;

    return answer;
}