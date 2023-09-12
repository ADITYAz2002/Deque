#include <iostream>
#include <deque>
using namespace std;

struct MyDS
{
    deque<int> dq;

    void insertMin(int x)
    {
        dq.push_front(x);
    }

    void insertMax(int x)
    {
        dq.push_back(x);
    }

    int getMin()
    {
        return dq.front();
    }

    int getMax()
    {
        return dq.back();
    }

    int removeMax()
    {
        int x = dq.back();
        
        dq.pop_back();
            
        return x;
    }

    int removeMin()
    {
        int x = dq.front();
        
        dq.pop_front();
        
        return x;
    }
};

int main()
{
    struct MyDS ds;

    ds.insertMin(10);
	ds.insertMax(15);
	ds.insertMin(5);
	
	int x= ds.removeMin();
	cout << x << endl;
	
	x= ds.removeMax();
	cout << x << endl;
	
	ds.insertMin(8);
    
	return 0;
}