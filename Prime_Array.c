#include <stdio.h>
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);
int main(void) 
{
    const int number = 10;
    int Prime[10] = {2};
    int count = 1;
    int i = 3;

    {//Ϊ��������ÿ�����while���ǰ������һ����ͷ
        int i;
        printf("\t\t\t\t");
        for ( i=0; i<number; i++ ) {
            printf("%d\t", i);
        }
        printf("\n");
    }

    while ( count < number ) {
        if ( isPrime(i, Prime, count) ) {
            Prime[count++] = i;
        }

        {//��������ŵġ��顱�е�������������        ���е�i���ⲿ��i��û�й�ϵ��
            printf("i=%d \tcnt=%d\t",i, count);
            int i;
            for ( i=0; i<number; i++ ) {
                printf("%d\t", Prime[i]);
            }
            printf("\n");
        }

        i++;
    }
    for ( i=0; i<number; i++ ) {
        printf("%d", Prime[i]);
        if ( (i+1)%5 ) printf("\t");
        else printf("\n");
    }

    return 0;
}


int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) 
{
    int ret = 1;
    int i;
    for ( i=0; i<numberOfKnownPrimes; i++ ) {
        if ( x % knownPrimes[i] == 0 ) {
            ret = 0;
            break;
        }
    }
    return ret;
}