#include<iostream>
#include <chrono>
#include<math.h>

using namespace std::chrono;
using namespace std;
 
 bool isPower(int n){
   return (n && !(n & (n-1)));
 }

 bool isPower2(int n){
     for(int i = 0 ; i <= sqrt(n) ; i++)
        if((int)pow(2,i) == n)
            return true;
    return false;
 }

 int main(){
     
    auto start = high_resolution_clock::now();
    
    cout << isPower(0) << endl;

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << duration.count() << endl;

 }
