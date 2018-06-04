#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string test_text;
    
    cin >> test_text;
    
    for(int i=0; i<test_text.length(); i++) {
        cout << (int)test_text.at(i)-64 << " ";
    }
        

    return 0;
}