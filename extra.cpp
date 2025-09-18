#include "./main.cpp"

int myPow(int x, int n = 2){

    int res = x;
    for(int i = 1; i < n; ++i){
	res *= x;
    }

    return res;
}
