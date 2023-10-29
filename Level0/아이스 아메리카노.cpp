#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money)
{
    vector<int> answer;
    int price = 5500;
    int sum = money / price;
    int cash = money % price;

    answer.push_back(sum);
    answer.push_back(cash);

    return answer;
}