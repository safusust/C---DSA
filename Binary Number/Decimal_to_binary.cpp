#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int i=1,ans=0;
    while(n>0){
        int r=n%2;
        n=n/2;
        int add=r*i;
        ans+=add;
        i=i*10;
    }
    cout<<ans<<endl;

}