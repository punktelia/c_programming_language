#include <stdio.h>

int main(){
    int c;
    int is_no_eof;

    while ((c = getchar()) != EOF) {
        is_no_eof = (c != EOF);
    }
    printf("%d\t", is_no_eof);
    printf("%d.\n", c != EOF);

    return 0;
}
