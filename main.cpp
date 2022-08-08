#include <iostream>

using namespace std;

int main()
{
    int i,x,n,flag;
     cout << "Enter a positive integer: N= ";
    cin>>n;

    for(i=2;i<=n;i++)
    {
        flag=1;

         for(x=2;x<=i/2;x++)
        {
            if(i%x==0)
            {
                flag=0;
                break;
            }

        }
        if(flag==1)
            cout<<i<<",";
    }
    return 0;
}
