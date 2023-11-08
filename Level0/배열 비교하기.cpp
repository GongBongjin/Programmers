#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2)
{
    int answer = 0;

    if (arr1.size() < arr2.size())
        answer = -1;
    else if (arr1.size() > arr2.size())
        answer = 1;
    else
    {
        int arr1Num = 0;
        int arr2Num = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            arr1Num += arr1[i];
            arr2Num += arr2[i];
        }

        if (arr1Num < arr2Num)
            answer = -1;
        else if (arr1Num > arr2Num)
            answer = 1;
        else
            answer = 0;

    }

    return answer;
}