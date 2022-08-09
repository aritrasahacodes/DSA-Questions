#include <iostream>
using namespace std;

int main() {
	int t,ans,n,m,mul;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(n%2==0 && m%2==0)
	    {
	        cout<<0<<endl;
	        break;
	    }
	    else if(n%2!=0 && m%2!=0)
	    {
	        ans=(m%2)*n+(n%2)*m-1;
	        cout<<ans<<endl;
	    }
	    else
	    {
	        ans=(m%2)*n+(n%2)*m;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}