
#include<iostream>
using namespace std;

#define max 5

class Insertion
{
    int a[max];

    public:

    void input();
    void IS();
    void display();
};

void Insertion::input()
{
    cout<<"Enter array elements: ";

    for(int i=0; i<max; i++)
    {
        cin>>a[i];
    }
}

void Insertion::IS()
{
    int key, j;

    for(int i=1; i<max; i++)
    {
        key=a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }
}

void Insertion::display()
{
    cout<<"\nSorted array is: ";

    for(int i=0; i<max; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    Insertion obj;

    obj.input();
    obj.IS();
    obj.display();

    return 0;
}