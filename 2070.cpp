#include <iostream>

using namespace std;

int main(void) {
    int test_num;
    cin >> test_num;

    for(int i=0; i<test_num; i++) {
        int a, b;
        cin >> a >> b;
        if ( a > b ) {
            cout << "#" << i+1 << " >" << endl;
        } else if( a < b ){
            cout << "#" << i+1 << " <" << endl;
        } else {
            cout << "#" << i+1 << " =" << endl;
        }
    }

    return 0;
}