#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    unordered_map<string,int> mpp;
    int max = 0;
    string win;
    for(int i =0;i<n;i++){
        string a;
        cin>>a;
        mpp[a]++;
        if(mpp[a] > max){
            win = a;
            max = mpp[a];
        }

    }
    cout<<win;


}
