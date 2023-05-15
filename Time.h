#include <iostream>
using namespace std;

int subtract(int h1,int m1,int h2,int m2);
int subtract(int m1,int m2);

void getTime(int &h,int &m){
  cin>>h>>m;
}

int subtract(int h1, int m1, int h2, int m2) {
    int diff1 = m2 - m1;
    if (diff1 < 0) {
        h2--;
    }
    int diffh = h2 - h1;
    if (diffh < 0) {
      diffh+= 24;
    }
    return diffh;
}

int subtract(int m1, int m2) {
    int diff = m2 - m1;
    if (diff < 0) {
        diff += 60;
    }
    return diff;
}