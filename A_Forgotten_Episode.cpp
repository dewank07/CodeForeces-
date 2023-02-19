#include <iostream>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
        int arr[100005] = {0};
        int x;
        
        while(n--) {
            cin >> x;
            arr[x] = 1;
        }
        int i = 1;
     
        // arr = [0, 1,1,1,0,1,1,1,1,1,0,0,0.....];
        while(arr[i] == 1) {
            i += 1;
        }
        cout << i <<"\n";
    }