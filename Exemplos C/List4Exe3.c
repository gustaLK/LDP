#include <stdio.h>
int main(){
    int x=2, y=3, *px, *py;

    px=&x;
    py=&y;
    px=py;

    printf("%d  %d\n", x, y);
    printf("%d  %d\n", *px, *py);
    printf("%d  %d\n", px, py);
    printf("%d  %d\n", &x, &y);

    printf("%d  %p  %d  %d  %d  %d  %d  %d\n", x, &x, px, *px, y, &y, py, *py);

    return 0;
}
