#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    public:

    queue<int> q1,q2;

    int size()
    {
        return q1.size();
    }

    int top()
    {
        if (q1.empty())
        return -1;
        else
        return q1.front();
    }

    void push(int data)
    {
        q2.push(data);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop()
    {
        if(q1.empty())
        return ;
        else
        q1.pop();
    } 
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    int size = s.size();
    int top = s.top();
    int i;
    
    cout<<"Size of Stack is: "<<size<<"\n";
    cout<<"Top of Stack is: "<<top<<"\n";
    cout<<"Stack Elements are:-\n";

    for(i = 0 ; i < size ; i ++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}