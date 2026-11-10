

#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10], b[10][10];
    int r, col;

    public:

    void input();
    void display();
    void addition();
    void transpose();
};

void Matrix::input()
{
    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>col;

    cout<<"Enter matrix elements:\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
}

void Matrix::display()
{
    cout<<"\nMatrix is:\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<"\n";
    }
}

void Matrix::addition()
{
    cout<<"\nEnter second matrix:\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"\nAddition of matrices:\n";

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<a[i][j]+b[i][j]<<" ";
        }

        cout<<"\n";
    }
}

void Matrix::transpose()
{
    cout<<"\nTranspose of matrix:\n";

    for(int i=0; i<col; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<a[j][i]<<" ";
        }

        cout<<"\n";
    }
}

int main()
{
    Matrix obj;
    int choice;

    obj.input();

    do
    {
        cout<<"\n\n--- 2D ARRAY OPERATIONS ---";
        cout<<"\n1. Display";
        cout<<"\n2. Addition";
        cout<<"\n3. Transpose";
        cout<<"\n4. Exit";

        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                obj.display();
                break;

            case 2:
                obj.addition();
                break;

            case 3:
                obj.transpose();
                break;

            case 4:
                cout<<"Exit";
                break;

            default:
                cout<<"Wrong choice";
        }

    }while(choice!=4);

    return 0;
}
