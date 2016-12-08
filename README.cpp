#include <iostream>

using namespace std;

int cmp_int(const void * p1, const void * p2){
    int x = *((int *)p1);
    int y = *((int *)p2);
    if (x == y)
        return 0;
    else if (x < y)
        return -1;
    else
        return 1;
}
