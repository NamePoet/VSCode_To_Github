/*
tic-tac-toe��Ϸ
����һ��3X3�ľ��󣬾����е�����Ϊ1��
ʾ��λ������һ��X��Ϊ0��ʾΪO
�����ж�����������Ƿ��л�ʤ��һ����
�����ʾ��ʤһ�����ַ�X��O����������˻�ʤ
*/

#include <stdio.h>
int main() 
{
    const int size = 3;
    int board[size][size];
    int i,j;
    int numOfX;
    int numOfO;
    int result = -1; // -1:û��Ӯ�� 1��XӮ��0��OӮ

// �������, �������У���������
for (i=0; i<size; i++) {
    for (j=0; j<size; j++) {
        scanf("%d", &board[i][j]);
    }
}
//�����  
for (i=0; i<size && result ==-1; i++) {
    numOfO = numOfX = 0;
    for (j=0; j<size; j++) {
        if ( board[i][j] == 1 ) {
            numOfX ++;
        } else {
            numOfO ++;
        }
    }
    if ( numOfO == size ) {
        result = 0;
    } else if ( numOfX == size ) {
        result = 1;
    }
}
//�����
for (j=0; j<size && result == -1 ; j++) {
    numOfO = numOfX = 0;
    for (i=0; i<size; i++) {
        if (board[i][j] == 1) {
            numOfX ++;
        } else {
            numOfO ++;
        }
    } 
    
    if ( numOfO == size ) {
        result = 0;
    } else if ( numOfX == size ) {
        result = 1;
    }
}
//������Խ���
numOfO = numOfX = 0;
for ( i=0; i<size; i++ ) {
    if ( board[i][i] == 1 ) {
        numOfX ++;
    } else {
        numOfO ++;
    } 
}
if ( numOfO == size ) {
    result = 0;
} else if ( numOfX == size ) {
    result = 1;
}

//��鸱�Խ���
numOfO = numOfX = 0;
for ( i=0; i<size; i++) {
    if ( board[i][i+size-1] == 1 ) {
        numOfX = 1; 
    } else {
        numOfO = 0;
    }
}
if ( numOfO == size ) {
    result = 0;
} else if ( numOfX == size ) {
    result = 1;
}
//������
if ( result == -1 ) {
    printf("û��Ӯ��");
} else if (result == 0) {
    printf("Oʤ��");
} else {
    printf("Xʤ����");
}

}