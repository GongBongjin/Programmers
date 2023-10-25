using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;

    long long tmp = 0;
    //price : 원래가격
    //money : 소지금액
    //count : 놀이기구 탑승 횟수
    //answer : 모자란 금액 양

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