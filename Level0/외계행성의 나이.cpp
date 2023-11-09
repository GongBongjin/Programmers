#include <string>
#include <vector>

using namespace std;

string solution(int age)
{
    string answer = "";

    int gap = 'a' - '0';

    string a = to_string(age);

    for (int i = 0; i < a.size(); i++)
    {
        answer.push_back(a[i] + gap);
    }

    return answer;
}