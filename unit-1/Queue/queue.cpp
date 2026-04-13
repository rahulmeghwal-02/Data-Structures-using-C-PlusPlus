#include <iostream>
using namespace std;

#define MAX 5

class Queue
{
    int front, rear;
    int arr[MAX];

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == MAX - 1)
        {
            cout << "Queue is Full !" << endl;
            return;
        }
        arr[++rear] = x;
        cout << "Enqueued " << x << " into Queue." << endl;
    }

    void dequeue()
    {
        if (front > rear)
        {
            cout << "Queueu is Empty !" << endl;
            return;
        }
        cout << arr[front++] << " removed." << endl;
    }

    void display()
    {
        if (front > rear)
        {
            cout << "Queue is Empty!" << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(11);
    q.enqueue(22);
    q.enqueue(33);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}
