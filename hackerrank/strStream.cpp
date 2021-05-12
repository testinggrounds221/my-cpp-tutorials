#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


int get_no_digits(int n){
    int c = 0;
    while(n>0){
        n = n/10;
        c++;
    }
    //cout << "Length is "<< c << endl;
    return c;
}


int strstr(){

    stringstream ss("-23,12,3,124,-234,0,121,1234");
    vector<int> num;

    int temp;
    char ch;
    int nd;
    int trun=0;

    while(ss.str().length() > 0){
        ss >> temp >> ch;
        num.push_back(temp);
        if (temp < 0){
            nd = get_no_digits(-1*temp);
            trun = nd+2;
        }
        else if (temp == 0){
            trun = 2;
        }
        else{
            nd = get_no_digits(temp);
            trun  = nd+1;
        }
        try{
            //cout << "Continuing \n";
            ss.str(ss.str().substr(trun));
            }

        catch(...){
            //cout << "Broke \n";
            break;
        }

    }
    cout << "Printing \n" ;
    for(int i = 0; i < num.size(); i++) {
      cout << num[i] << "\n";
    }
    return 0;
}
