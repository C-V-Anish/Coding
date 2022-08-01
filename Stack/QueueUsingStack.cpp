#include <iostream>
#include <stack>

using namespace std;

class Queue
{
    stack<int> s1,s2;

    public:

    void enqueue(int data)
    {

        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(data);

        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue()
    {
        if(s1.empty())
        return -1;
        else
        {
            int t = s1.top();
            s1.pop();
            return t;
        }
    }

};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
}