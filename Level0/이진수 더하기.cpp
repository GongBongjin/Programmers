#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string bin1, string bin2)
{
    string answer = "";

    int c = 0;

    reverse(bin1.begin(), bin1.end());
    reverse(bin2.begin(), bin2.end());

    if (bin1.size() > bin2.size())
    {
        int n = bin1.size() - bin2.size();
        for (int i = 0; i < n; i++)
            bin2 += '0';
    }
    else if (bin1.size() < bin2.size())
    {
        int n = bin2.size() - bin1.size();
        for (int i = 0; i < n; i++)
            bin1 += '0';
    }

    for (int i = 0; i < bin1.size(); i++)
    {
        int n = (bin1[i] - '0') + (bin2[i] - '0') + c;
        c = n / 2;
        answer += to_string(n % 2);
    }

    if (c != 0)
        answer += to_string(c);

    reverse(answer.begin(), answer.end());

    return answer;
}