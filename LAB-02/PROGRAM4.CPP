#include<iostream>
using namespace std;

#define max 5

class Merge
{
    int a[max], temp[max];

    public:

    void input();
    void MS(int l, int r);
    void merge(int l, int m, int r);
    void display();
};

void Merge::input()
{
    cout<<"Enter array elements: ";

    for(int i=0; i<max; i++)
    {
        cin>>a[i];
    }
}

void Merge::MS(int l, int r)
{
    if(l<r)
    {
        int m=(l+r)/2;

        MS(l,m);
        MS(m+1,r);

        merge(l,m,r);
    }
}

void Merge::merge(int l, int m, int r)
{
    int i=l;
    int j=m+1;
    int k=l;

    while(i<=m && j<=r)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }

        k++;
    }

    while(i<=m)
    {
        temp[k]=a[i];
        i++;
        k++;
    }

    while(j<=r)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

    for(i=l; i<=r; i++)
    {
        a[i]=temp[i];
    }
}

void Merge::display()
{
    cout<<"\nSorted array is: ";

    for(int i=0; i<max; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    Merge obj;

    obj.input();
    obj.MS(0,max-1);
    obj.display();

    return 0;
}