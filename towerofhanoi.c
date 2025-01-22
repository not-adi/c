#include <stdio.h>

void hanoi(int n, char rodfrom, char rodmiddle, char rodto) {
        if (n == 1) {
            printf("\n Move disk 1 from rod %c to rod %c", rodfrom, rodto);
            return;
        } else {
        hanoi(n-1,rodfrom,rodto,rodmiddle);
        printf("\n Move disk %d from rod %c to rod %c", n, rodfrom, rodto);
        hanoi(n-1,rodmiddle,rodfrom,rodto);
    }
}

int main() {
hanoi(3, 'A', 'B', 'C');
return 0; 
}
