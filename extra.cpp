#include "extra.h"

double myPow(double x, int n) {

    if (x == 0) {
        if (n < 0) throw -1;
        if (!n) throw - 2;
        return 0;
    }

    double res = 1;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    if (n) {
        for (int i = 0; i < n; ++i) {
            res *= x;
        }
    }

    return res;
}
