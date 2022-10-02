#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number to show Multiplication Table : ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" X "<<n<<" = "<<i*n<<"\t"<<endl;
    }
    getch();
}
