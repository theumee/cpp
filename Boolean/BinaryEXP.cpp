#include<iostream>
using namespace std;
#define ll unsigned long long

const ll MOD = 1000000007; 
ll QuickpowMOD(ll a ,ll b){
    a %= MOD;
    ll result = 1;
    while(b){
        if(b%2) 
            result = (result * a) % MOD;
        a =  (a * a) % MOD;
        b /= 2; 
    }
    return result;
}

int main(){
    cout << QuickpowMOD(2,100);
}