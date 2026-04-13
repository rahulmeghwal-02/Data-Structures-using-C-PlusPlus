#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int top;
    int arr[MAX];

public:
    Stack()
    {
        top = -1;
    }

    // push
    void push(int x)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack Overflow!!!" << endl;
            return;
        }
        arr[++top] = x;
        cout << "Pushed " << x << " into Stack." << endl;
    }

    // Display Stack
    void display()
    {
        if (top < 0)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }

        cout << "Stack Elements : ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // pop operation
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow !" << endl;
            return;
        }
        cout << arr[top--] << " Popped from Stack." << endl;
    }

    // peek operation
    void peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty !!" << endl;
            return;
        }
        cout << "Top Element : " << arr[top] << endl;
    }

    // isEmpty ?
    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(99);
    s.push(100);

    s.display();

    s.peek();

    s.pop();

    s.peek();

    cout << s.isEmpty();

    return 0;
}