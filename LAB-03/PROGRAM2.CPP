
#include<iostream>
using namespace std;

#define max 10

class Stack
{
    int a[max];
    int top1, top2;

    public:

    Stack()
    {
        top1=-1;
        top2=max;
    }

    void push1();
    void push2();
    void pop1();
    void pop2();
    void display1();
    void display2();
};

void Stack::push1()
{
    int value;

    if(top1+1==top2)
    {
        cout<<"Stack is full";
    }
    else
    {
        cout<<"Enter value: ";
        cin>>value;

        top1++;
        a[top1]=value;

        cout<<"Element inserted in Stack 1";
    }
}

void Stack::push2()
{
    int value;

    if(top1+1==top2)
    {
        cout<<"Stack is full";
    }
    else
    {
        cout<<"Enter value: ";
        cin>>value;

        top2--;
        a[top2]=value;

        cout<<"Element inserted in Stack 2";
    }
}

void Stack::pop1()
{
    if(top1==-1)
    {
        cout<<"Stack 1 is empty";
    }
    else
    {
        cout<<"Deleted element: "<<a[top1];
        top1--;
    }
}

void Stack::pop2()
{
    if(top2==max)
    {
        cout<<"Stack 2 is empty";
    }
    else
    {
        cout<<"Deleted element: "<<a[top2];
        top2++;
    }
}

void Stack::display1()
{
    if(top1==-1)
    {
        cout<<"Stack 1 is empty";
    }
    else
    {
        cout<<"\nStack 1 elements are: ";

        for(int i=top1; i>=0; i--)
        {
            cout<<a[i]<<" ";
        }
    }
}

void Stack::display2()
{
    if(top2==max)
    {
        cout<<"Stack 2 is empty";
    }
    else
    {
        cout<<"\nStack 2 elements are: ";

        for(int i=top2; i<max; i++)
        {
            cout<<a[i]<<" ";
        }
    }
}

int main()
{
    Stack s;
    int choice;

    do
    {
        cout<<"\n\n--- MULTIPLE STACK ---";
        cout<<"\n1. Push Stack 1";
        cout<<"\n2. Push Stack 2";
        cout<<"\n3. Pop Stack 1";
        cout<<"\n4. Pop Stack 2";
        cout<<"\n5. Display Stack 1";
        cout<<"\n6. Display Stack 2";
        cout<<"\n7. Exit";

        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                s.push1();
                break;

            case 2:
                s.push2();
                break;

            case 3:
                s.pop1();
                break;

            case 4:
                s.pop2();
                break;

            case 5:
                s.display1();
                break;

            case 6:
                s.display2();
                break;

            case 7:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid choice";
        }

    }while(choice!=7);

    return 0;
}