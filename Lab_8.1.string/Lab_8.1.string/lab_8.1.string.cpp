#include <iostream>
#include <string>

using namespace std;
/*
a+bc-de+f-
 g+hi-j+k-l
abc+-def
*/

bool findStr(const string& str) {
    for (size_t i = 1; i < str.length() - 1; i++) {
        if (str[i - 1] == '+' && str[i + 1] == '-') {
            return true;
        }
    }
    return false;
}

string Change(string& str) {
    size_t pos = 1;
    while (pos < str.length() - 1) {
        if (str[pos - 1] == '+' && str[pos + 1] == '-') {
            str.replace(pos - 1, 3, "****");  
        }
        else {
            pos++;
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Original string: " << str << endl;

    if (findStr(str)) {
        Change(str);
        cout << "'+<char>-' pattern found and will be changed" << endl;
        cout << "Modified string: " << str << endl;
    }
    else {
        cout << "'+<char>-' pattern not found" << endl;
    }

    return 0;
}
