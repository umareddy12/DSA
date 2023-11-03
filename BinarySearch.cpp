//problem : Binary search

//time complexity : O(logn)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int key;
    cin>>key;
    int ans = -1;
    int st=0,en=n-1;//starting index,end index
    int mid = (st+en)/2;
    while(st<=en){
        mid = (st+en)/2;
        if(v[mid]==key){
            ans = mid;
            break;
        } else if(v[mid]>key){
            en = mid-1;
        } else {
            st = mid+1;
        }
    }
    cout<<ans;
    return 0;
}
