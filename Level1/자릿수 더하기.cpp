#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
* �ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
* ������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.
*/

int solution(int n)
{
    int answer = 0;

    string input = to_string(n);

    for (int i = 0; i < input.size(); i++)
    {
        answer += (int)input[i] - 48;
    }

    return answer;
}