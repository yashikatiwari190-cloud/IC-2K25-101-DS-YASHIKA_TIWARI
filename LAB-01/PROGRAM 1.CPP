

#include<iostream>
using namespace std;

class Array
{
    int a[100], n;

    public:

    void input();
    void display();
    void insert();
    void del();
    void search();
    void update();
};

void Array::input()
{
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter array elements: ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void Array::display()
{
    cout<<"\nArray elements are: ";

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void Array::insert()
{
    int pos, value;

    cout<<"\nEnter position: ";
    cin>>pos;

    cout<<"Enter value: ";
    cin>>value;

    if(pos<1 || pos>n+1 || n>=100)
    {
        cout<<"Invalid position";
    }
    else
    {
        for(int i=n; i>=pos; i--)
        {
            a[i]=a[i-1];
        }

        a[pos-1]=value;
        n++;

        cout<<"Element inserted";
    }
}

void Array::del()
{
    int pos;

    cout<<"\nEnter position to delete: ";
    cin>>pos;

    if(pos<1 || pos>n)
    {
        cout<<"Invalid position";
    }
    else
    {
        for(int i=pos-1; i<n-1; i++)
        {
            a[i]=a[i+1];
        }

        n--;

        cout<<"Element deleted";
    }
}

void Array::search()
{
    int value, i;

    cout<<"\nEnter value to search: ";
    cin>>value;

    for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
            cout<<"Element found at position "<<i+1;
            return;
        }
    }

    cout<<"Element not found";
}

void Array::update()
{
    int pos, value;

    cout<<"\nEnter position to update: ";
    cin>>pos;

    if(pos<1 || pos>n)
    {
        cout<<"Invalid position";
    }
    else
    {
        cout<<"Enter new value: ";
        cin>>value;

        a[pos-1]=value;

        cout<<"Element updated";
    }
}

int main()
{
    Array obj;
    int choice;

    obj.input();

    do
    {
        cout<<"\n\n--- ARRAY OPERATIONS ---";
        cout<<"\n1. Display";
        cout<<"\n2. Insertion";
        cout<<"\n3. Deletion";
        cout<<"\n4. Searching";
        cout<<"\n5. Updating";
        cout<<"\n6. Exit";

        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                obj.display();
                break;

            case 2:
                obj.insert();
                break;

            case 3:
                obj.del();
                break;

            case 4:
                obj.search();
                break;

            case 5:
                obj.update();
                break;

            case 6:
                cout<<"Exit";
                break;

            default:
                cout<<"Wrong choice";
        }

    }while(choice!=6);

    return 0;
}
