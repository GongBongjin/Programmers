#include <string>
#include <vector>

using namespace std;
//�Ӿ��̳� ���ڰ��Դ� ���ڸ� �� �������� �� �������� ���ϴ� ���� ���� �߶��ݴϴ�.
//���� ���� �� slice�� ���ڸ� �Դ� ����� �� n�� �Ű������� �־��� ��,
//n���� ����� �ּ� �� ���� �̻� ���ڸ� �������� �ּ� �� ���� ���ڸ� ���Ѿ� �ϴ����� return �ϵ��� solution �Լ��� �ϼ��غ�����.
int solution(int slice, int n)
{
    int answer = 0;

    if (n % slice != 0)
        answer = (n / slice) + 1;
    else
        answer = n / slice;

    return answer;
}