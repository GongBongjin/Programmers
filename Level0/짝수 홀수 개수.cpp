#include <string>
#include <vector>

using namespace std;
//������ ��� ����Ʈ num_list�� �־��� ��,
//num_list�� ���� �� ¦���� Ȧ���� ������ ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��غ�����.
vector<int> solution(vector<int> num_list)
{
    int result1 = 0, result2 = 0;

    vector<int> result = { result1, result2 };

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            result[0]++;
        }
        else
        {
            result[1]++;
        }

    }

    return result;
}