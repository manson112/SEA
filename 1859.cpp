#include <iostream>
using namespace std;
int main(void) {
    int test_num;
    int day_num;
    int *array;

    cin >> test_num;
    
    for(int i=0; i<test_num; i++) {
        cin >> day_num;
        array = new int[day_num];
        for(int j=0; j<day_num; j++) {
            cin >> array[j];
        }
        int max = array[day_num-1];
        long long money = 0;
        for(int k=day_num-2; k>=0; k--) {
            if(array[k] < max) money += max - array[k];
            else if(array[k] > max) max = array[k];
        }
        cout << "#" << i+1 << " " << money << endl;
    }

    return 0;
}