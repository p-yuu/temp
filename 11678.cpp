#include<iostream>
#include<set>
#include<cmath>
using namespace std;

int main(){
    int A, B;
    while(cin >> A >> B){
        if(A == 0 && B == 0) break;

        int Alice, Betty;
        set<int> c_Alice, c_Betty;
        int count = 0;
        for(int i = 0; i < A; i++){
            cin >> Alice;
            c_Alice.insert(Alice);
        }
        for(int i = 0; i < B; i++){
            cin >> Betty;
            c_Betty.insert(Betty);
        }
        for(auto &data: c_Betty){
            if(c_Alice.find(data) != c_Alice.end()) count++;
        }
        int countB = c_Betty.size() - count;
        int countA = c_Alice.size() - count;
        cout << min(countA, countB) << endl;
    }
}