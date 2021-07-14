#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a = -10;
    long long b = 6;

    long long p = 1000000007;

    long long c  =  a % b;

    if ( c < 0)
        c += b;
        
    cout << c; 
}
