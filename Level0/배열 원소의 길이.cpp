#include <string>
#include <vector>

using namespace std;
//문자열 배열 strlist가 매개변수로 주어집니다.
//strlist 각 원소의 길이를 담은 배열을 retrun하도록 solution 함수를 완성해주세요.
vector<int> solution(vector<string> strlist)
{
    vector<int> output;

    output.resize(strlist.size());

    for (int i = 0; i < strlist.size(); i++)
    {
        output[i] = strlist[i].size();
    }

    return output;
}