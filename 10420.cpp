#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main(){
    map<string,int> data;
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string country, country_name;
        getline(cin, country);
        stringstream ss(country);
        ss >> country_name;
        data[country_name]++;
    }
    for(auto &d: data){
        cout << d.first << ' ' << d.second << endl;
    }
}