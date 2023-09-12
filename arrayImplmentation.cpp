#include <iostream>
using namespace std;

# define MAX 100

class Deque
{
    int size, cap, arr[MAX];

    public:
    Deque(int c)
    {
        cap = c;
        size = 0;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void insertFront(int x)
    {
        if(isFull())
            return;
        
        for(int i = size-1; i > 0; i--)
            arr[i+1] = arr[i];
        
        arr[0] = x;
        size++;
    }

    void insertRear(int x)
    {
        if(isFull())
            return;
        
        arr[size] = x;
        size++;
    }

    void deleteFront()
    {
        if(isEmpty())
            return;
        
        for(int i = 0; i < size; i++)
            arr[i] = arr[i+1];
        
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
        
        return size - 1;
    }

    int getFront()
    {
        if(isEmpty())
            return -1;
        
        return 0;   
    }
};

