#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(11);
    s.push(22);
    s.push(44);

    // top element of stack
    cout << "Top Element: " << s.top() << endl;

    // popping the element from stack
    s.pop();
    cout << "After pop, Top Element: " << s.top() << endl;

    return 0;
}