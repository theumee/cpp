#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,5,3,5,2,5,5,6,3};
    int len = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> um;

    for(auto i : arr)
        um[i]++;
    for(auto val : um)
        cout << val.first << " --> " << val.second << "\n";
}