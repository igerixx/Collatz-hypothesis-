#include <iostream>

using namespace std;

int main() {
    int i = 0;
    long long max = -9223372036854775807;
    long long chis = 0;
    cout << "Write any positive number: ";
    while (chis < 1) {
        cin >> chis;
        puts("");
        if (chis > 0) {
            for (i; chis != 1; i++) {
                if (chis > max) {
                    max = chis;
                }
                if (chis % 2 == 0) {
                    chis /= 2;
                    cout << i + 1 << ". " << chis << endl;
                }
                else {
                    chis *= 3;
                    chis += 1;
                    cout << i + 1 << ". " << chis << endl;
                } 
                if (i > 1000) {
                    break;
                }
            }
            cout << endl << i << " moves has been made" << endl;
            cout << "Max number in there is " << max << endl;
        }
        else {
            cout << endl << "Write any number from 1" << endl << endl;
            cin >> chis;
        }
    }
    return 0;
}
