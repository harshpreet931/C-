#include <iostream>
using namespace std;

int main(){
    int n, k; cin >> n >> k; int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
    if(k>=n) k%=n;

    for(int i=n-k;i<n;i++){
        cout << arr[i] << " ";
    }
    for(int i=0;i<n-k;i++){
        cout << arr[i] << " ";
    }
}