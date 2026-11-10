#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int a[MAX];
    int top;

public:

    Stack()
    {
        top = -1;
    }

    void push()
    {
        int x;

        if(top == MAX - 1)
        {
            cout << "\nStack Overflow";
        }
        else
        {
            cout << "\nEnter element: ";
            cin >> x;

            top++;
            a[top] = x;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "\nStack Underflow";
        }
        else
        {
            cout << "\nDeleted element is: " << a[top];
            top--;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout << "\nStack is Empty";
        }
        else
        {
            cout << "\nStack elements are:\n";

            for(int i = top; i >= 0; i--)
            {
                cout << a[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s;
    int ch;

    do
    {
        cout << "\n\n1. PUSH";
        cout << "\n2. POP";
        cout << "\n3. DISPLAY";
        cout << "\n4. EXIT";

        cout << "\nEnter your choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                s.push();
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout << "\nExit";
                break;

            default:
                cout << "\nInvalid Choice";
        }

    } while(ch != 4);

    return 0;
}