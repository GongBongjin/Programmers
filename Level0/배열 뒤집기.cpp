#include <string>
#include <vector>

using namespace std;
//������ ��� �ִ� �迭 num_list�� �Ű������� �־����ϴ�.
//num_list�� ������ ������ �Ųٷ� ������ �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.
vector<int> solution(vector<int> num_list)
{
    vector<int> output;
    int vectorSize = num_list.size();

    for (int i = vectorSize - 1; i >= 0; i--)
        output.push_back(num_list[i]);

    return output;
}