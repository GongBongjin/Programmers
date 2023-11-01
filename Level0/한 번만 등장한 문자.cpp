#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
1. int arr[26] ���ĺ� ������ �ǹ��ϴ� 1���� �迭 ����
2. �ݺ����� ������ �� ���ĺ��� ���� ���� arr[i] ���������� �ۼ�
3. �ݺ������� ������ �Ѱ��� ���� answer�� Ǫ������.
*/

string solution(string s)
{
    string answer = "";

    int arr[26] = {};

    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 1)
            answer.push_back(char(i + 97));
    }

    return answer;
}