/*logic: Always at max two children in a gondola, total wt. of gondola must be either less or equal to x, 
first sort the array so that we easily use Two pointer approach; so that  both array stand with <=x*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,count=0;
    cin>>n>>x;
    int p[n];
    for(int i=0;i<n;i++)cin>>p[i];
    sort(p,p+n);///2,3,7,9
    int i=0,j=n-1;
    while(i<=j)
    {
        if(p[i]+p[j]<=x)
        {
            count++;
            i++;
            j--;
        }
        else {
            count++;
            j--;
        }
    }
    cout<<count;

}
