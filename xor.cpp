#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,k;
    
        cin>>n>>x>>k;
    long long int s=(n+1)%k;
    if(x%k==0 || x%k==s)
       cout<<"YES"<<"\n";
    else  
       cout<<"NO"<<"\n";

}
return 0;
}