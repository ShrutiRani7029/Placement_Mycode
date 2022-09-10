///Difference Vector Method: arr[l]++, arr[r]--, cumulative frequency(prefix sum).
///MARKER FOR STARTING POINT OF A QUERY,
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);///Initializing a Vector {size,value}
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;///one L and one R
        cin>>l>>r;
        arr[l]++;
        if(r+1<n)arr[r+1]--;///o(1) task
    }
    ///cumulative sum;
    for(int i=1;i<n;i++)arr[i]+=arr[i-1];///o(q+n)
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
}
