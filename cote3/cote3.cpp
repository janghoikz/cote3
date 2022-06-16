#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i = 0;
    for (i; i < phone_number.size() - 4; i++)
    {
        answer += '*';
    }
    for (i; i < phone_number.size(); i++)
    {
        answer += phone_number[i];
    }
    return answer;
}

int main()
{

}