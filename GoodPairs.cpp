//Number of good pairs
//complexity O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int > nums;
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        nums.push_back(element);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                if(nums[i]==nums[j]){
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
