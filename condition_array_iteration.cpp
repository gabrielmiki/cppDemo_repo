#include <iostream>
#include <string>

int main () {
    int for_arr[5];
    int while_arr[5];

    for (int i{0}; i < 5; i += 1) {
        for_arr[i] = i * 2;
    }

    int t = 0;

    while (t < 5) {
        while_arr[t] = t * 2;

        t += 1;
    }
    return 0;
}