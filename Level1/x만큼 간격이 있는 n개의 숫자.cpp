#include <string>
#include <vector>

using namespace std;
/*
* �Լ� solution�� ���� x�� �ڿ��� n�� �Է� �޾�, 
* x���� ������ x�� �����ϴ� ���ڸ� n�� ���ϴ� ����Ʈ�� �����ؾ� �մϴ�. 
* ���� ���� ������ ����, ������ �����ϴ� �Լ�, solution�� �ϼ����ּ���.
*/

vector<long long> solution(int x, int n)
{
    vector<long long> answer;

    answer.resize(n);

    for (int i = 0; i < n; i++)
    {
        answer[i] = x + (i * x);
    }

    return answer;
}