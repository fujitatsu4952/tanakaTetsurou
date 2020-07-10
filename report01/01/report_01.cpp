#include <iostream>
#include <stack>
#include <string>
using namespace std;

void print(stack<string> S)
{
    while (!S.empty())
    {
        cout << S.top() << endl;
        S.pop();
    }
}

int main()
{
    stack<string> S;
    string input;
    while (getline(cin, input))
    {
        S.push(input);
    }
    print(S);
}