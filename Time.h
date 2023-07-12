#include <iostream>
using namespace std;

void getTime(int &h,int &m);
int subtract(int h1,int m1,int h2,int m2);
int subtract(int m1,int m2);

void getTime(int &h,int &m){
  cin>>h>>m;
}

int subtract(int h1, int m1, int h2, int m2) {
int diffh = (h2 - h1 + 48 - (m2 < m1)) % 24;
    return diffh;
}

int subtract(int m1, int m2) {
    int diffm = (60 + m2 - m1) % 60;
    return diffm;
}