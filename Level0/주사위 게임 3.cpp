#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> num{ a, b, c, d };
    sort(num.begin(), num.end());
    if (num[0] == num[3]) return 1111 * num[0];
    else if (num[0] == num[1] && num[2] == num[3]) return (num[0] + num[2]) * abs(num[0] - num[2]);
    else if (num[1] == num[2] && (num[0] == num[1] || num[2] == num[3])) return pow(10 * num[1] + (num[0] != num[1] ? num[0] : num[3]), 2);
    else if (num[0] != num[1] && num[1] != num[2] && num[2] != num[3]) return num[0];
    else return num[0] == num[1] ? num[2] * num[3] : (num[1] == num[2] ? num[0] * num[3] : num[0] * num[1]);
}