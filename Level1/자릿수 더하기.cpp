#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
* 자연수 N이 주어지면, N의 각 자릿수의 합을 구해서 return 하는 solution 함수를 만들어 주세요.
* 예를들어 N = 123이면 1 + 2 + 3 = 6을 return 하면 됩니다.
*/

int solution(int n)
{
    int answer = 0;

    string input = to_string(n);

    for (int i = 0; i < input.size(); i++)
    {
        answer += (int)input[i] - 48;
    }

    return answer;
}