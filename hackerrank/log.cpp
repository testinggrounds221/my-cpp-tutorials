#include <math.h>
using namespace std;

double logFunc(){
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    double log_a = log(a);
    double log_b = log(b);
    double log_sum = log_a + log_b;


    double alog1 = exp(log_sum);

    return(fmod(alog1, 10));


}
