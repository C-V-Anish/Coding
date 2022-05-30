#include <iostream>
using namespace std;
class QueueNode
{
    public:
    int data;
    QueueNode* next;
    QueueNode(int d)
    {
        data=d;
        next=NULL;
    }
};
class Queue
{
    public:
    QueueNode* front,*rear;
    Queue()
    {
        front = rear = NULL;
    }
void enqueue(int a)
{
    QueueNode* temp=new QueueNode(a);
    if(rear==NULL)
    front=rear=temp;
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void dequeue()
{
    if(front==NULL)
    {
        return;
    }
    front=front->next;
    if(front==NULL)
    rear=NULL;
}
};//end of class
int main()
{
    Queue q;
    char ch;
    int a;
    cout<<"Do you want to Enter Elements [y/n]\n";
    fflush(stdin);
    cin>>ch;
    while(ch == 'y')
    {
        cout<<"Enter element to be inserted:\n";
        cin>>a;
        fflush(stdin);
        q.enqueue(a);
        cout<<"Do you want to insert more?[y/n] \n";
        fflush(stdin);
        cin>>ch;
    }
    char ch1;
    cout<<"Do you want to remove elements?[y/n]\n";
    fflush(stdin);
    cin>>ch1;
    while(ch1=='y')
    {
        q.dequeue();
        cout<<"Do you want to remove more?[y/n]\n";
        fflush(stdin);
        cin>>ch1;
    }
    cout<<"Rear end of the Queue is "<<(q.rear)->data;
    cout<<"\nFront end of the Queue is "<<(q.front)->data;
}
 /* do
    {
        cout<<"Do you want to delete elements?[y/n]\n";
        cin>>ch1;
        q.dequeue();
        fflush(stdin);w
    }while(ch1 == 'y');
*/
