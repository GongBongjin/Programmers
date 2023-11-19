#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr)
{
    string answer = "";

    for (string str : arr)
    {
        for (char c : str)
            answer += c;
    }


    return answer;
}