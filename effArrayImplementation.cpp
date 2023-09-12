#include <iostream>
using namespace std;

struct Deque
{
    int size, cap, front, *arr;

    Deque(int c)
    {
        arr = new int[c];
        size = 0;
        front = 0;
        cap = c;
    }

    bool isFull()
    {
        return (size == cap || front == 0 || front == size-1);
    }

    bool isEmpty()
    {
        return (size == 0 || front = 0);
    }

    void insertFront(int x)
    {
        if(isFull())
            return;
        
        front = (front + cap - 1)%cap;
        
        arr[front] = x;
        size++;
    }

    void insertRear(int x)
    {
        if(isFull())
            return;
        
        int rear = (front + size)%cap;
        arr[rear] = x;
        size++;
    }

    void deleteFront()
    {
        if(isEmpty())
            return;
        
        front = (front + 1)%cap;
        size--;
    }

    void deleteRear()
    {
        if(isEmpty())
            return;
        
        size--;
    }

    int getRear()
    {
        if(isEmpty())
            return -1;
        else
            return (front + size - 1)%cap;
    }

    int getFront()
    {
        if(isEmpty())
            return -1;
        
        return front;   
    }
    
};