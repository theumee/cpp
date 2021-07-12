#include<iostream>
#include<vector>
using namespace std;

// int phi[1000001]; 


// int getCount(int d , int N){
//     return phi[N/d];
// }
// int main(){
//     int q,N;
//     cin >> q;

//     while(q--){
//         cin >> N;
//         int res = 0;
//         for(int i = 0 ; i*i <= N ; i++ ){
//             if( N % i == 0){
//                 int d1 = i;
//                 int d2 = N / i;

//                 res += d1 * getCount(d1,N);

//                 if( d1 != d2){
//                     res += d2 * getCount(d2,N);
//                 }
//             }
//         }
//         cout << res << endl;
//     }
// }


int findGCD(int a , int b){
   vector<int> v;
    
}
int main(){
    int q, n;

    cin >> q;

    while(q--){
        cin >> n;
        int gcdSum = 0;
        for(int i = 1 ; i <= n ; i++ ){
            gcdSum += findGCD(i,n);
        }
        cout << gcdSum << endl;
    }
}