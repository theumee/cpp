#include<iostream>
using namespace std;

int main(){

    int testCases;

    cin >> testCases;

    	while (testCases--){

            int m , n;
            cin >> m >> n;
            int  arr[m][n];

            for(int i = 0 ; i < m ; i++)
                for(int j = 0 ;  j < n; j++)
                    cin >> arr[i][j];
                
            for(int i = 0 ; i < m ; i++){
                bool flag = false;
                for(int j =0 ; j < n ; j++){
                    if(arr[i][j] == 1){
                        flag = true;
                        break;
                    }
                    
                }
				if(flag){
					for(int j = 0 ; j < n ; j++ ){
                        arr[i][j] = 1;
					}		
                }
            }


            for(int i = 0 ; i < m ; i++){
                for(int j = 0 ;  j < n; j++)
                    cout << arr[i][j] << " ";
                cout << "\n";
            }
        }
}
