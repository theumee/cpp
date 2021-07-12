#include<iostream>
using namespace std;

void GeneratePrimes(int n){
    bool prime[n];
    for(int i = 0 ; i <= n  ; i++){
        prime[i] = true;  
    }
    for(int i = 2 ; i*i <= n ; i++ ){
        if(prime[i]){
            for(int j = i*i ; j <= n ; j+=i){
                prime[j] = 0;
            }
        }
    }

    for(int i = 2  ; i <= n ; i++)
        if(prime[i])
            cout << i << " " ;
}

int main(){
    int n = 1000;
    GeneratePrimes(n);  
}

