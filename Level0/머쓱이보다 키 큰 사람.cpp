#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height)
{
    int result = 0;

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] > height)
        {
            result += 1;
        }
    }
    return result;
}