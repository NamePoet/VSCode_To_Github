#include <stdio.h>
int main()
{
    int hh, mm, ss;
    int n;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    scanf("%d", &n);
    if ( ss+n >= 60) {
        ss = ss+n-60;
        mm++;
        if (mm == 60) {
            mm = 0;
            hh++;
            if (hh==24) {
                hh = 0;
            }
        }
    } else {
        ss = ss+n;
    }
    printf("%02d:%02d:%02d", hh,mm,ss);

}