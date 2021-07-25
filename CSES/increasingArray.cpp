#include<iostream>
using namespace std;

int main(){
    int len ;
    cin >> len;

    int arr[len];

    for(int i = 0 ; i <  len  ; i++){
        cin >> arr[i];
    }

    int counter = 0;
    for(int i = 0 ; i < len - 1  ;){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
                counter++;
                i = 0;
                continue;
        }
        i++;
    }
    for(int j = 0 ; j < len ; j++)
                cout << arr[j] << " "; 
            cout << "\n";
    cout << counter;
}