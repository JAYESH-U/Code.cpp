#include <iostream>
using namespace std;

class queue
{
private:
    int size, front, rear, *Q;

public:
    queue()
    {
        front = rear = -1;
        size = 10;
        Q = new int[size];
    }
    queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
    void display();
};

void queue ::enqueue(int x)
{
    if (rear == size - 1)
        cout << "The queue is full.";
    else
        Q[++rear] = x;
}

int queue ::dequeue()
{
    if (rear == front)
    {
        cout << "The queue is empty.";
        return -1;
    }
    else
        return Q[++front];
}

void queue ::display()
{
    for (int i = front+1; i <= rear; i++)
        cout << Q[i] << " ";
    cout << endl;
}

int main()
{
    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    // q.enqueue(40);
    // q.enqueue(50);

    q.display();

    cout<<q.dequeue()<<" has been dequeued.";

    return 0;
}