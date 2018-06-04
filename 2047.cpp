#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string test_text;
    
    cin >> test_text;
    
    for(int i=0; i<test_text.length(); i++) {
        int t = (int)test_text.at(i);
        if(t >= 97 && t <= 122) {
            cout << (char)(t-32);
        } else {
            cout << test_text.at(i);
        }
    }

    return 0;
}