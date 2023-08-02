#include<iostream>
using namespace std;
class MyQueue
{
    int *Queue;
    int Size;
    int Front=-1;
    int Rear=-1;
public:
    MyQueue(int x)
    {
        Size=x;
        Queue=new int [Size];
    }
    bool isEmpty()
    {
        if(Front==-1&&Rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if((Rear+1)%Size==Front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool enqueue(int x)
    {
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            Front=0;
            Rear=0;
            Queue[Rear]=x;
            return true;
        }
        else
        {
            Rear=(Rear+1)%Size;
            Queue[Rear]=x;
            return true;
        }
    }
    bool dequeue()
    {
        if(isEmpty())
        {
            return false;
        }
        else if(Front==Rear)
        {
            Front=-1;
            Rear=-1;
            return true;
        }
        else
        {
            Front=(Front+1)%Size;
            return true;
        }
    }
    int getFront()
    {
        if(isEmpty())
        {
            return -99999;
        }
        else
        {
            return Queue[Front];
        }
    }
    void show()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty."<<endl;
        }
        else
        {
            if(Front<=Rear)
            {
                for(int i=Front;i<=Rear;i++)
                {
                    cout<<Queue[i]<<"  ";
                }
            }
            else
            {
                for(int i=Front;i<=(Size-1);i++)
                {
                    cout<<Queue[i]<<"  ";
                }
                for(int i=0;i<=Rear;i++)
                {
                    cout<<Queue[i]<<"  ";
                }
            }
        }
    }
};
int main()
{
    MyQueue obj(5);
    obj.show();
    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.show();
    cout<<endl;
    obj.dequeue();
    obj.enqueue(40);
    obj.enqueue(50);
    obj.show();
    cout<<endl;
    obj.dequeue();
    obj.show();
    cout<<endl;
    obj.enqueue(10);
    obj.enqueue(20);
    obj.show();
    cout<<endl;

}

