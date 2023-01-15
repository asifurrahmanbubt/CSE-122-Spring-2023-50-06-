
//Codeforce Problem No - 231A

// Problem Name - Team

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x;

    int count=0;

    cin>>x;

    for(int i=0; i<x; i++)
    {
        cin>>a>>b>>c;

        if(a+b+c >=2)
        {
            count++;
        }
    }
    cout<<count<<endl;

return 0;
}
