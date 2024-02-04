#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"enter value\n";
    cin>>n;
    if(n<5)
    {
        switch(n)
        {
            case 1:
            if(n==1)
            {
                cout<<"one";
                break;

            }
             case 2:
            if(n==2)
            {
                cout<<"two";
                break;

            }
             case 3:
            if(n==3)
            {
                cout<<"three";
                break;

            } case 4:
            if(n==4)
            {
                cout<<"four";
                break;

            }
        }
    }
    else if(n>9&&(n%2==0))
    {
        cout<<"no is even";
    }
    else{
        cout<<"no is odd";
    }
    return 0;
}