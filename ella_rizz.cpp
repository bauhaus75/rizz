#include <iostream>
#include <string>

using namespace std;

int main() {
    string reply_ella;
    while (reply_ella.find("PLEASE TAKE MY NUMBER!! MY NUMBER IS ") == string::npos) {
        cout << "wow we love a woman in stem" << endl << "PLEASE ELLA PLEASE RESPOND (with rizz)" << endl;
        cin >> reply_ella;
        cout << endl;
    }
    cout << "yay" << endl;
    return 0;
}
