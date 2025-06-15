#include<iostream>
#include<string>
using namespace std;

int main(){
    bool lie = false;
    int guess, right = 10, left = 1;
    string respon;

    while (true) {
        cin >> guess;
        if (guess == 0) break;
        cin.ignore();
        getline(cin, respon);

        if (respon == "too high") {
            right = min(right, guess - 1);
        } else if (respon == "too low") {
            left = max(left, guess + 1);
        } else if (respon == "right on") {
            if (lie || guess < left || guess > right) {
                cout << "Stan is dishonest" << endl;
            } else {
                cout << "Stan may be honest" << endl;
            }
  
            left = 1;
            right = 10;
            lie = false;
        }

        if (left > right) lie = true;
    }
}
