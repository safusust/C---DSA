#include<bits/stdc++.h>
using namespace std;

int binarToDecimal(int n){
    int ans=0, pow=1;
    while(n>0){
        int rem=n%10;
        ans+=(rem*pow);
        pow=pow*2;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;cin>>n;
    cout<<binarToDecimal(n)<<endl;
}