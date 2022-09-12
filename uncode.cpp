#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cout<<"Enter t:";
    cin>>t;
    int temp=t;
    vector<int> v;
    while(temp--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>res;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[j]==v[i]/3)
                res.push_back(v[j]);
        }
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
return 0;
}