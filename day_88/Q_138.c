#include <stdio.h>

enum Signal { RED, YELLOW, GREEN };

int main() {
    for(int i = RED; i <= GREEN; i++) {
        if(i == RED) printf("RED=%d\n", i);
        if(i == YELLOW) printf("YELLOW=%d\n", i);
        if(i == GREEN) printf("GREEN=%d\n", i);
    }
    return 0;
}