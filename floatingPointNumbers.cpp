#include<bits/stdc++.h>
using namespace std;
// ios::sync_with_stdio(0);
// cin.tie(0);


int main(){

    double a = (0.3*3)+0.1;
    double b = ((0.33*3)) + 0.1;

    if(abs(a-b) < 10e-9)
        printf("Equal");
    else    
        printf("Not equal");
    
}