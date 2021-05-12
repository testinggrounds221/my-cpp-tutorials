#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int VSA_temp(){

    int arr1[4] = {0,1,2,3};
    int *p1 = arr1;
    int arr2[4] = {4,5,6,7};
    int *p2 = arr2;
    int arr3[4] = {345,234,10,11};
    int *p3 = arr3;

    cout << *p3 << "\n";
    cout << *(p3+1) << "\n";
    return 0;
}
