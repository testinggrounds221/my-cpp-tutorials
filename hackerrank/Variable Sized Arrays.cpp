#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int VSA3(){
    int n,q;
    int k;

    cin >> n >> q;

    int** ref_arr = new int*[n];

    for(int i=0; i<n; i++){
        cin >> k;
        ref_arr[i] = new int[k];
        for(int j=0; j < k; j++){
            cin >> ref_arr[i][j];
        }
    }

    int** qr = new int*[q];
    for(int i=0; i<q; i++){
        qr[i] = new int[2];
        cin >> qr[i][0] >> qr[i][1];
    }

    for(int i=0; i<q; i++)
        cout << ref_arr[qr[i][0]][qr[i][1]] << endl;

    return 0;
}


int VSA2()
{
    int numSequence; // Number of arrays
    int numQueries; // Number of queries
    int size; // The size of each array k

    cin >> numSequence >> numQueries;

    int** arr = new int*[numSequence];

    int** dummy = new int*[numQueries];

    for(int i = 0 ; i < numQueries; i++)
        dummy[i] = new int[2];

    for(int i = 0; i < numSequence; i++)
    {
        cin >> size;
        arr[i] = new int[size];
        for(int j = 0; j < size; j++)
            cin >> arr[i][j];
    }

    for(int i = 0 ; i < numQueries; i++)
        cin >> dummy[i][0] >> dummy[i][1];

    for(int i = 0 ; i < numQueries; i++)
        cout << arr[dummy[i][0]][dummy[i][1]] << endl;

    return 0;
}
