#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int test_num;
    string test_text;
    
    cin >> test_num;
    for(int i=0; i<test_num; i++) {
        cin >> test_text;
        
        string year = test_text.substr(0, 4);
        string month = test_text.substr(4, 2);
        string day = test_text.substr(6, 2);
        int m = stoi(month);
        if(m > 12 || m < 1) {
            cout << "#" << i+1 << " " << -1 << endl;
            continue;
        }
        int d = stoi(day);
        if((d > 31 || d < 1) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)){
            cout << "#" << i+1 << " " << -1 << endl;
           continue;
        }
        if((d > 28 || d < 1) && m == 2) {
            cout << "#" << i+1 << " " << -1 << endl;
            continue;
        }
        if( d < 1 || d > 30) {
            cout << "#" << i+1 << " " << -1 << endl;
            continue;
        }

        cout << "#" << i+1 << " " << year << "/" << month << "/" << day << endl;

    }

    return 0;
}