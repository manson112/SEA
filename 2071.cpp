#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int test_num;
    double sum = 0;
    cin >> test_num;

    for(int i=0; i<test_num; i++) {
        for(int j=0; j<10; j++) {
            int n;
            cin >> n;
            sum += n; 
        }
        cout << "#" << i+1 << " " << (int)floor(sum/10+0.5) << endl;
        sum = 0;
    }

    return 0;
}