#include <string>
#include <vector>

using namespace std;
//������ ��� �迭 array�� ���� n�� �Ű������� �־��� ��,
//array�� n�� �� �� �ִ� ���� return �ϵ��� solution �Լ��� �ϼ��غ�����.
int solution(vector<int> array, int n)
{
    int result = 0;

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == n)
        {
            result += 1;
        }
    }
    return result;
}