#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
1. int arr[26] 알파벳 갯수를 의미하는 1차원 배열 생성
2. 반복문을 돌려서 각 알파벳에 따라 갯수 arr[i] 증가식으로 작성
3. 반복문으로 갯수가 한개인 값만 answer에 푸쉬백함.
*/

string solution(string s)
{
    string answer = "";

    int arr[26] = {};

    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 1)
            answer.push_back(char(i + 97));
    }

    return answer;
}