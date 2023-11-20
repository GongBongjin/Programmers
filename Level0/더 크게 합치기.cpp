#include <string>
#include <vector>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;

    string aStr = to_string(a);
    string bStr = to_string(b);

    string temp1 = aStr + bStr;
    string temp2 = bStr + aStr;

    if (temp1 > temp2)
        answer = stoi(temp1);
    else
        answer = stoi(temp2);

    return answer;
}