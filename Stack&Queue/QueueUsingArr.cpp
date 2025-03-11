#include <iostream>
using namespace std;

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;
    int currsize;
    static const int maxsize = 100005;

public:
    MyQueue() {
        front = -1;
        rear = -1;
        currsize = 0;
    }

    void push(int x);
    int pop();
};

// Function to push an element x in a queue.
void MyQueue::push(int x) {
    if (currsize == maxsize) {
        return; // Queue is full
    }

    if (currsize == 0) {
        front = rear = 0;  // First element, reset front & rear
    } else {
        rear = (rear + 1) % maxsize;
    }

    arr[rear] = x;
    currsize++;
}

// Function to pop an element from queue and return that element.
int MyQueue::pop() {
    if (currsize == 0) {
        return -1; // Queue is empty
    }

    int popped = arr[front];

    if (currsize == 1) {
        front = rear = -1; // Reset when last element is removed
    } else {
        front = (front + 1) % maxsize;
    }

    currsize--;
    return popped;
}

int main() {
    MyQueue q;
    int Q;
    cin >> Q;

    while (Q--) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            int x;
            cin >> x;
            q.push(x);
        } else if (queryType == 2) {
            cout << q.pop() << " ";
        }
    }
    return 0;
}
