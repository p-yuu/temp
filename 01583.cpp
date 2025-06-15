#include<iostream>
using namespace std;

int func(int N){
    int sum = N;
    while(N > 0){
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main(){
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        bool find = false;
        for(int i = N - 45; i < N; i++){
            if(func(i) == N){
                cout << i << endl;
                find = true;
                break;
            }
        }
        if(!find) cout << 0 << endl;
    }
}