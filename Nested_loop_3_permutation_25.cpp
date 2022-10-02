#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=1;k<=3;k++)
            {
                if(j!=i&&k!=i&&k!=j)
                {
                    cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<endl;
                }
            }
        }
    }
    getch();
}
