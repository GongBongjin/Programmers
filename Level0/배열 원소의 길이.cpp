#include <string>
#include <vector>

using namespace std;
//���ڿ� �迭 strlist�� �Ű������� �־����ϴ�.
//strlist �� ������ ���̸� ���� �迭�� retrun�ϵ��� solution �Լ��� �ϼ����ּ���.
vector<int> solution(vector<string> strlist)
{
    vector<int> output;

    output.resize(strlist.size());

    for (int i = 0; i < strlist.size(); i++)
    {
        output[i] = strlist[i].size();
    }

    return output;
}