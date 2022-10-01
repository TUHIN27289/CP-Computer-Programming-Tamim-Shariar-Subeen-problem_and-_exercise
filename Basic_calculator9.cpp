#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    char sign1;
    double n1,n2;
    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;
    cout<<"Enter Sign     : ";
    cin>>sign1;
    switch(sign1)
    {
      case '+':
         cout<<n1<<" "<<sign1<<" "<<n2<<" = "<<n1+n2;
         break;
      case '-':
         cout<<n1<<" "<<sign1<<" "<<n2<<" = "<<n1-n2;
         break;
      case '/':
          if(n1>n2)
        {
            cout<<n1<<" "<<sign1<<" "<<n2<<" = "<<(n1/n2);
            break;
        }
        else if(n2>n1)
        {
            cout<<n1<<" "<<sign1<<" "<<n2<<" = "<<(n2/n1);
            break;
        }
      case'*':
            cout<<n1<<" "<<sign1<<" "<<n2<<" = "<<n1*n2;
            break;

    }

   getch();
}
