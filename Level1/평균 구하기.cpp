#include <string>
#include <vector>

using namespace std;

/*
* ������ ��� �ִ� �迭 arr�� ��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.
*/
double solution(vector<int> arr) 
{
    double answer = 0;

    for (int i = 0; i<arr.size(); i++)
    {
        answer += arr[i];
    }

    return answer/arr.size();
}