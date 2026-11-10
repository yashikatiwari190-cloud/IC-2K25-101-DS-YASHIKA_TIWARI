
#include<iostream>
using namespace std;

#define max 5

class Bubble_s
{
    int a[max];

    public:

    void input();
    void BS();
    void display();
};

void Bubble_s::input()
{
    cout<<"Enter array elements: ";

    for(int i=0; i<max; i++)
    {
        cin>>a[i];
    }
}

void Bubble_s::BS()
{
    for(int i=0; i<max; i++)
    {
        for(int j=0; j<max-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

void Bubble_s::display()
{
    cout<<"\nSorted array is: ";

    for(int i=0; i<max; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    Bubble_s b;

    b.input();
    b.BS();
    b.display();

    return 0;
}