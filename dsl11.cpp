// Queues are frequently used in computer programming, and a typical example is the 
// creation of a job queue by an operating system. If the operating system does not use 
// priorities, then the jobs are processed in the order they enter the system. Write C++ 
// program for simulating job queue. Write functions to add job and delete job from queue
#include<iostream>
using namespace std;
//first we create node
class qnode
{
    int jobnumber;
    qnode *next;
    friend class queue;
};
class queue
{
    qnode *rear , *front;
    public:
    void enque(int val);
    int deque();
    int isempty();
    void display();
    queue()
    {
        front=rear=NULL;

    }

};
int queue :: isempty()
{
    if (front == NULL && rear==NULL)
    {
        return 1;
    }
    else
    {
    return 0;
    }
}
void queue :: enque(int val)
{
    qnode * temp;
    temp=new qnode;
    temp->jobnumber=val;
    temp->next=NULL;
// if queue is empty both rear or front is new node
    if(isempty())
    {
        front = temp;
        rear = temp;
    }
//if queue is not empty add node at end and increment the rear 
    else{
        rear->next=temp;
        rear = temp;
    }
}
int queue ::deque()
{
    qnode * temp;
    int val;
    if(isempty())
    {
        cout<<"queue is empty";
    }
    else{
        temp=front;
        front=front->next;
    if(front==NULL)
    rear=NULL;
    val=temp->jobnumber;
    delete temp;
    }
    return val;
}
void queue ::display()
{
    qnode*temp;
    if(isempty())
    {
        cout<<"queue is empty";
    }
    else{
        cout<<"queue job number";
        for(temp=front;temp!=NULL;temp=temp->next)
        {
            cout<<""<<temp->jobnumber;
        }
    }
}
int main()
{
    int ch , n ;
    queue obj;
    while (1)
    {
        cout<<"======MENU===="<<endl;
        cout<<"1.add job"<<endl;
        cout<<"2.delete job"<<endl;
        cout<<"3.display job"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter the choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
        cout<<"add jobnumber";
        cout<<"enter the job no"<<endl;
        cin>>n;
        obj.enque(n);
        break;
        case 2:
        cout<<"delete the job";
        obj.deque();
        break;
        case 3:
        cout<<"display the job";
        obj.display();
        break;
        case 4:
        exit(0);

        }
    }
    return 0;
    
}
