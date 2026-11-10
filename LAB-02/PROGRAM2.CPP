
#include<iostream>
using namespace std;

#define max 5

class Selection
{
    int a[max];

    public:

    void input();
    void SS();
    void display();
};

void Selection::input()
{
    cout<<"Enter array elements: ";

    for(int i=0; i<max; i++)
    {
        cin>>a[i];
    }
}

void Selection::SS()
{
    int min, t;

    for(int i=0; i<max-1; i++)
    {
        min=i;

        for(int j=i+1; j<max; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
}

void Selection::display()
{
    cout<<"\nSorted array is: ";

    for(int i=0; i<max; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    Selection obj;

    obj.input();
    obj.SS();
    obj.display();

    return 0;
}