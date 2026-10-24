#include <stdio.h>
#include <stdlib.h>
char plateau[10][15];
char plateau(char T[10][15]) {
    for (int i=0;i<10;i++){
        T[i][0]='#';
        T[i][0]='#';

    }
    for (int i=1;i<14;i++) {
        T[0][i]='#';
        T[9][i]='#';
    }
    for (int i=0;i<5;i++) {
        T[i][4]='#';
    }
        for (int j = 7; j <= 10; j++) {
        T[4][j] = '#';
    }

    for (int i = 5; i <= 7; i++) {
        T[i][10] = '#';
    }

    for (int j = 7; j <= 9; j++) {
        T[7][j] = '#';
    }

    T[8][4] = '#';

    for (int i = 6; i <= 8; i++) {
        T[i][2] = '#';
    }
}