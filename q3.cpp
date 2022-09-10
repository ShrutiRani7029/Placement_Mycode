/*logic: if any number in h1.. is smaller than t1,.. that h1 no. will be added in ans but that no. erased from the remaining no....so for that we use concept of upper bound.... 
!upperbound=+ans. & also use multiset( not be unique and in which they serve as the key values according to which the data is automatically ordered.)*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 multiset<int>h;
 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     h.insert(x);
 }
 for(int i=0;i<m;i++)
 {
     int t;
     cin>>t;
     auto it=h.upper_bound(t);
     //cout<<*it<<" ";
     if(it==h.begin())
        cout<<-1<<endl;
     else
     {
         --it;
         cout<<*it<<endl;
         h.erase(it);
 
     }
 }
}
 
