#include <string>
#include <vector>

using namespace std;
//���� �迭 numbers�� �Ű������� �־����ϴ�.
//numbers�� �� ���ҿ� �ι��� ���Ҹ� ���� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.
vector<int> solution(vector<int> numbers)
{

    vector<int> results;

    results.resize(numbers.size());

    for (int i = 0; i < numbers.size(); i++)
    {
        results[i] = numbers[i] * 2;
    }

    return results;
}