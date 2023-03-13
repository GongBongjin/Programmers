#include <string>
#include <vector>

using namespace std;
//정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.
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