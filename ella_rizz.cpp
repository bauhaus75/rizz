#include <iostream>
#include <string>

using namespace std;

int main() {
    string reply_ella = "";
    while (reply_ella.find("PLEASE TAKE MY NUMBER!! MY NUMBER IS ") == string::npos) {
        if (reply_ella == " ") {
            cout << "wow we love a woman in stem" << endl << "PLEASE ELLA PLEASE RESPOND (with rizz)" << endl;
            getline(cin, reply_ella);
            cout << endl;
        } else {
            cout << "i literally cannot comprehend or accept that as a response" << endl << "PLEASE ELLA PLEASE RESPOND (with rizz)" << endl;
            getline(cin, reply_ella);
            cout << endl;    
        }
    }
    cout << "yay" << endl;
    return 0;
}
