#include <stdio.h>
int d[10];
char s[20];
int main(){
    int n, i;
    scanf("%d%s", &n, s);
    for (i = 0; s[i]; i++) {
        if (s[i] == '0' || s[i] == '1') continue;
        else if (s[i] == '2') d[2]++;
        else if (s[i] == '3') d[3]++;
        else if (s[i] == '4'){
            d[3]++; d[2] += 2;
        } else if (s[i] == '5') d[5]++;
        else if (s[i] == '6') {
            d[5]++; d[3]++;
        } else if (s[i] == '7') d[7]++;
        else if (s[i] == '8'){
            d[7]++; d[2] += 3;
        }else {
            d[7]++; d[3] += 2; d[2] += 1;
        }
    }
    for (i = 9; i >= 0; i--) {
        while (d[i]--) printf("%d", i);
    }
    printf("\n");
    return 0;
}
