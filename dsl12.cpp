// A double-ended queue (deque) is a linear list in which additions and deletions may be 
// made at either end. Obtain a data representation mapping a deque into a onedimensional array. Write C++ program to simulate deque with functions to add and 
// delete elements from either end of the deque.

#include<iostream>
using namespace std;
#define SIZE 5
class dequeue
{
    int arr[10],front , rear , count;
    public:
    dequeue();
    void add_begin(int val);
    void add_end(int val);
    void delete_begin();
    void delete_end();
    void dispaly();

};
dequeue :: dequeue()
{
  front = -1 ;
  rear = -1;
  count=0;
}
void dequeue ::add_begin(int val)
{
    int i;
 if(front==-1)
 {
    front++;
    rear++;
    arr[rear]=val;
    count++;
 }
 else if(rear >=SIZE-1)
 {
    cout<<"overfull";
 }
 else{
    for(i=count;i<=0;i--)
    {
        arr[i]=arr[i-1];


    }
    arr[i]==val;
    count++;
    rear++;
 }

}
void dequeue ::add_end(int val)
{
   if(front==-1)
 {
    front++;
    rear++;
    arr[rear]=val;
    count++;
 }
 else if(rear >=SIZE-1)
 {
    cout<<"overfull";
 }
 else
 {
    arr[rear++]=val;
 }
}
void dequeue :: dispaly()
{
    for(int i=front;i<=rear;i++)
    {cout<<arr[i];}
}
void dequeue :: delete_begin()
{
    if(front==-1)
    {
        cout<<"dequeue is empty";
    }
    else{
       if(front==rear)
       {
        front=rear=-1;
       }
       cout<<"delete elemet is"<<arr[front];
       front++;
    }
}
void dequeue :: delete_end()
{
    if(front==-1)
    {
        cout<<"dequeue is empty";
    }
    else{
       if(front==rear)
       {
        front=rear=-1;
       }
       cout<<"delete elemet is"<<arr[rear];
       rear--;
    }
}
int main()
{
    int ch , val;
    dequeue obj;
    while(1)
    {
        cout<<"/n""====MENU====";
        cout<<"/n""1.add at begin";
        cout<<"/n""2.add at end";
        cout<<"/n""3.deltete at begin";
        cout<<"/n""4.delete at end";
        cout<<"/n""5.display";
        cout<<"/n""6.exit";
        cout<<"enter the choice";
        cin>>ch;
        switch(ch)
        {
        case 1:
        cout<<"add at began";
        cout<<"enter the value";
        cin>>val;
        obj.add_begin(val);
        break;
         case 2:
        cout<<"add at end";
        cout<<"enter the value";
        cin>>val;
        obj.add_end(val);
        break;
         case 3:
        cout<<"delete at began";
        obj.delete_begin();
        break;
         case 4:
        cout<<"delete at end";
        obj.delete_end();
        break;
          case 5:
        cout<<"dispalya";
        obj.dispaly();
        break;
          case 6:
        exit(0);
        break;
        
        }
    }
    return 0 ;
}

