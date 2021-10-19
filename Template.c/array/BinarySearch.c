#include <stdio.h>
#define N 10
int main()
{
    int i, x , ind , head , tail, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    scanf("%d", &x);  // x:8    x:12
    ind = N/2;   //³õÖµÎª5
    head = 0;
    tail = N-1;
    while (x != a[ind] && head < tail) {
        if (a[ind] < x) {
            head = ind + 1;
        } else if (a[ind] > x) {
            tail = ind - 1;
        }

        ind = (head + tail) / 2;
    }
    if (x == a[ind]) {
        printf("Index is %d", ind);
    } else if (head >= tail) {
        printf("Not Found");
    }

    return 0;
}