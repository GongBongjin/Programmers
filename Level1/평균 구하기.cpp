#include <string>
#include <vector>

using namespace std;

/*
* 정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.
*/
double solution(vector<int> arr) 
{
    double answer = 0;

    for (int i = 0; i<arr.size(); i++)
    {
        answer += arr[i];
    }

    return answer/arr.size();
}