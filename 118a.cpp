#include <iostream>
#include <string>
using namespace std;
bool proverka(char a)
{
    char sogl[] = {'A', 'O', 'E', 'U', 'Y', 'I', 'a', 'o', 'e', 'u', 'y', 'i'};
    bool result = false;
    for(char i : sogl)
    if(i == a) result = true;
    return result;
}
int main()
{
    string inp;
    cin >> inp;
    string result;
    for(char i : inp)
    {
        if(!proverka(i))
        {result += '.';
            result += tolower(i);}
    }
    cout << result;
}
