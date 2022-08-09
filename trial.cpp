#include <iostream>
using namespace std;

int main() {
	int t,ans,n,m,mul;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
        int count=0;
        mul=m*n;
	    while(m!=0 && n!=0)
	    {
            if(m==n && m%2==0 && n%2==0)
            {
                count=(m*n)/4;
                break;
            }
	        else if(m>=2 && n>=2)
	        {
	            m-=2;
	            n-=2;
                if(m>n)
                {
                    count+=m;
                }
                else
                {
                    count+=n;
                }
	        }
            else
            {
                break;
            }
	    }
	    ans=mul-(count*4);
	    cout<<ans<<endl;
	}
	return 0;
}