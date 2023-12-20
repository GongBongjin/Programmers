#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    numer1 *= denom2;
    numer2 *= denom1;

    int a = denom1 * denom2;
    int b = numer1 + numer2;

    int i = 2;
    while (i < 1000)
    {
        if (a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
        }
        else
            i++;
    }
    answer.push_back(b);
    answer.push_back(a);


    return answer;
}