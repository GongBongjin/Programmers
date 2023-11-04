#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code)
{
    string answer = "";
    int remainder = 0;

    for (int i = 0; i < cipher.size(); i++)
    {
        remainder = i % code;
        if (remainder == code - 1)
            answer.push_back(cipher[i]);
    }
    return answer;
}