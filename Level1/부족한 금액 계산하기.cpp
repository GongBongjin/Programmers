using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;

    long long tmp = 0;
    //price : ��������
    //money : �����ݾ�
    //count : ���̱ⱸ ž�� Ƚ��
    //answer : ���ڶ� �ݾ� ��

    for (int i = 0; i < count; i++)
    {
        tmp += (price * (1 + i));
    }

    if (money - tmp >= 0)
        answer = 0;
    else
        answer = tmp - money;

    return answer;
}