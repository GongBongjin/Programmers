#include <string>
#include <vector>

using namespace std;
//���� �迭 numbers�� �Ű������� �־����ϴ�. numbers�� ������ ��հ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.
double solution(vector<int> numbers)
{

    double numbersSum = 0;
    double result = 0.0;

    for (int i = 0; i < numbers.size(); i++)
    {
        numbersSum += numbers[i];
    }
    result = numbersSum / numbers.size();
    return result;
}