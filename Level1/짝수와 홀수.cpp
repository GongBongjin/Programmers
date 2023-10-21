#include <string>
#include <vector>

using namespace std;

/*
* 정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.
*/

string solution(int num)
{
    string answer = "Even";

    if (num & 1)
        answer = "Odd";

    return answer;
}