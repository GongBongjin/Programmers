#include <string>
#include <vector>

using namespace std;

/*
* ���� num�� ¦���� ��� "Even"�� ��ȯ�ϰ� Ȧ���� ��� "Odd"�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.
*/

string solution(int num)
{
    string answer = "Even";

    if (num & 1)
        answer = "Odd";

    return answer;
}