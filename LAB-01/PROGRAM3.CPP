
#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;

    public:

    void input();
    void addition();
    void subtraction();
    void multiplication();
    void transpose();
};

void Matrix::input()
{
    cout<<"Enter rows and columns of first matrix: ";
    cin>>r1>>c1;

    cout<<"Enter first matrix:\n";

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nEnter rows and columns of second matrix: ";
    cin>>r2>>c2;

    cout<<"Enter second matrix:\n";

    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>b[i][j];
        }
    }
}

void Matrix::addition()
{
    if(r1!=r2 || c1!=c2)
    {
        cout<<"Addition not possible";
        return;
    }

    cout<<"\nAddition result:\n";

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<a[i][j]+b[i][j]<<" ";
        }

        cout<<"\n";
    }
}

void Matrix::subtraction()
{
    if(r1!=r2 || c1!=c2)
    {
        cout<<"Subtraction not possible";
        return;
    }

    cout<<"\nSubtraction result:\n";

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<a[i][j]-b[i][j]<<" ";
        }

        cout<<"\n";
    }
}

void Matrix::multiplication()
{
    if(c1!=r2)
    {
        cout<<"Multiplication not possible";
        return;
    }

    cout<<"\nMultiplication result:\n";

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            int sum=0;

            for(int k=0; k<c1; k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }

            cout<<sum<<" ";
        }

        cout<<"\n";
    }
}

void Matrix::transpose()
{
    cout<<"\nTranspose of first matrix:\n";

    for(int i=0; i<c1; i++)
    {
        for(int j=0; j<r1; j++)
        {
            cout<<a[j][i]<<" ";
        }

        cout<<"\n";
    }
}

int main()
{
    Matrix m;
    int choice;

    m.input();

    do
    {
        cout<<"\n\n--- MATRIX CALCULATOR ---";
        cout<<"\n1. Addition";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Transpose";
        cout<<"\n5. Exit";

        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                m.addition();
                break;

            case 2:
                m.subtraction();
                break;

            case 3:
                m.multiplication();
                break;

            case 4:
                m.transpose();
                break;

            case 5:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid choice";
        }

    }while(choice!=5);

    return 0;
}