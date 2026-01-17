#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "enter the frist no:";
    cin >> a;

    cout << "enter operator(+-*/)";
    cin >> op;

    cout << "enter second no:";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "result=" << a + b;
        break;
    case '-':
        cout << "result=" << a - b;
        break;
    case '*':
        cout << "result=" << a * b;
        break;
    case '/':
        cout << "result=" << a / b;
        break;
    default:
        cout << "invalid operator";
    }
    return 0;
}
