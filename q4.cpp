///code:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>customers;
    while(n--)
    {
        int a=0,l=0;
        cin>>a>>l;
        customers.insert(pair<int,int>(a,1));
        customers.insert(pair<int,int>(l,-1));

    }
    int ans=0,m=0;
    for(auto it=customers.begin();it!=customers.end();it++)
    {
        ans+=it->second;
        m=max(m,ans);
    }
    cout<<m;

}
