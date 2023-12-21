#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0, b = A.size();
    string a = "";
    if (A == B) return 0;
    else
    {
        for (int i = 0; i < b; i++)
        {
            a = "";
            answer++;
            a += A[b - 1];
            for (int j = 0; j < b - 1; j++)
            {
                a += A[j];
            }
            if (a == B)
            {
                return answer;
            }
            else
            {
                A = a;
            }
        }
        return -1;
    }
}