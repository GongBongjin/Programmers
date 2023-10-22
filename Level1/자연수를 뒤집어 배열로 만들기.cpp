#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
�ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �������ּ���. 
������� n�� 12345�̸� [5,4,3,2,1]�� �����մϴ�
*/

vector<int> solution(long long n)
{
    vector<int> answer;

    while (n > 0)
    {
        answer.push_back(n % 10);
        n = n / 10;
    }

    return answer;
}