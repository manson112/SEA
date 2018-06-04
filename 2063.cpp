#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int test_num;
    int max = 0;
    cin >> test_num;
    int *arr = new int[test_num];

    for(int i=0; i<test_num; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+test_num);
    cout << arr[test_num/2];

    return 0;
}