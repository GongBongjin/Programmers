#include <string>
#include <vector>

using namespace std;
//정수 배열 numbers가 매개변수로 주어집니다.
//numbers의 각 원소에 두배한 원소를 가진 배열을 return하도록 solution 함수를 완성해주세요.
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