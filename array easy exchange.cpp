#include<bits/stdc++.h>
using namespace std;
int main(){
int g;
int n;
int a[]={1,2,3,4,5};
n=sizeof(a)/sizeof(a[0]);
for (int i=0;i<n/2;i++){
    swap(a[i],a[n-i-1]);
}
for (int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}
