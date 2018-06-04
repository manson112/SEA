#include <iostream>
using namespace std;


int numOfThree(int num) {
    int count = 0;
    while(num != 0) {
        int n = num % 10;
        if(n == 3 || n == 6 || n == 9) {
            count++;
        }
        num /= 10;
    } 
    return count;
}

int main(void) {
    int test_num;
    
    cin >> test_num;

    for(int i=1; i<=test_num; i++) {
        int n = numOfThree(i);
        if(n == 0) {
            cout << i;
        } else {
            for(int j=0; j<n; j++) cout << "-";
        }
        cout << " ";
    }

    return 0;
}