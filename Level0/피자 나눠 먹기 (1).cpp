#include <string>
#include <vector>

using namespace std;
//�Ӿ��̳� ���ڰ��Դ� ���ڸ� �ϰ� �������� �߶� �ݴϴ�.
//���ڸ� �������� ����� �� n�� �־��� ��,
//��� ����� ���ڸ� �� ���� �̻� �Ա� ���� �ʿ��� ������ ���� return �ϴ� solution �Լ��� �ϼ��غ�����.

int solution(int n) 
{

    int result = 0;

    result = n / 7;

    if (n % 7 != 0)
    {
        result += 1;
    }

    return result;
}