#include <iostream>
using namespace std;
int main(void) {
    int test_num;
    
    cin >> test_num;

    for(int i=0; i<test_num; i++) {
        int a, b;
        cin >> a >> b;

        cout << "#" << i+1 << " " << a/b << " " << a%b << endl;
    }    

    return 0;
}