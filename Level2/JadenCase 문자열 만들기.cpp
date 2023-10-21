#include <string>
#include <vector>

using namespace std;

/*
* JadenCase란 모든 단어의 첫 문자가 대문자이고, 그 외의 알파벳은 소문자인 문자열입니다. 
단, 첫 문자가 알파벳이 아닐 때에는 이어지는 알파벳은 소문자로 쓰면 됩니다. (첫 번째 입출력 예 참고)
문자열 s가 주어졌을 때, s를 JadenCase로 바꾼 문자열을 리턴하는 함수, solution을 완성해주세요.
*/

string solution(string s)
{
    string answer = "";

    //ascii 'A' = 41;
    //ascii 'a' = 61;

    int ascii = 'a' - 'A';
    bool isFirst = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
            isFirst = true;
        else if (s[i] >= 0 && s[i] <= 9)
            isFirst = true;
        else if (s[i] == ' ')
        {
            answer.push_back(s[i]);
            isFirst = true;
            continue;
        }

        if (isFirst == true)
        {
            if (s[i] >= 'a')
                answer.push_back(s[i] - ascii);
            else
                answer.push_back(s[i]);

            isFirst = false;
        }
        else
        {
            if (s[i] <= 'Z')
                answer.push_back(s[i] + ascii);
            else
                answer.push_back(s[i]);
        }

    }

    return answer;
}