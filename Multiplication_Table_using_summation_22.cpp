#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number to show multiplication table : ";
    cin>>n;
    int m=0;
    for(int i=1;i<=10;i++)
    {
        m=m+n;
        cout<<i<<" X "<<n<<" = "<<m<<endl;
    }

    getch();
}
