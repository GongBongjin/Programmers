#include <string>
#include <vector>

using namespace std;
//���� n�� �־��� ��, n������ ¦���� ��� ���� ���� return �ϵ��� solution �Լ��� �ۼ����ּ���.
int solution(int n) 
{
    int a = n / 2;
    int b = 0;

    for (int i = 1; i <= a; i++)
    {
        b += 2 * i;
    }
    return b;
}