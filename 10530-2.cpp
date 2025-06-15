#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> low;
    vector<int> high;
    int guess;
    bool lie = false;
    string respon;

    while(1){
        cin >> guess;
        if(guess == 0) break;
        cin.ignore();
        getline(cin,respon);

        if(respon == "too high") high.push_back(guess);
        else if(respon == "too low") low.push_back(guess);
        else if(respon == "right on"){
            for(auto &data: high){
                if(data <= guess) lie = true;
            }
            for(auto &data: low){
                if(data >= guess) lie = true;
            }
            if(!lie) cout << "Stan may be honest" << endl;
            else if(lie) cout << "Stan is dishonest" << endl;

            low.clear();
            high.clear();
            lie = false;
        }
    }
}