#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�. 
n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���.
������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.
*/

long long solution(long long n)
{
    long long answer = 0;

    string s = to_string(n);

    sort(s.begin(), s.end(), greater<char>());

    answer = stoll(s);

    return answer;
}