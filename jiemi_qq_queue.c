//队列是一种特殊的线性结构，它只允许在队列的首部（head）进行删除操作，这称为“出队”， 而在队列的尾部（tail）
//进行插入操作，这称为“入队”。当队列中没有元素时（即head==tail），称为空队列。
//先进先出  FIFO原则
#include <stdio.h>
int main()
{
    int q[102] = {0, 6, 3, 1, 7, 5, 8, 9, 2, 4}, head, tail;
    //初始化队列
    head= 1; 
    tail = 10;  //队列中已经有9个元素了，tail指向队尾最后一个位置
    while (head < tail) {      //当队列不为空的时候执行循环
        //打印队首并将队首出队
        printf("%d ",q[head]);
        head++;

        //先将新队首的数添加到队尾
        q[tail] = q[head];
        tail++;
        //再将队首出队
        head++;

    }

    getchar();    getchar();

    return 0;
}

/*
struct queue
{
    int data[100]; //队列的主体，用来存储内容
    int head; //队首
    int tail; //队尾
};
    通常将结构体的定义放在main函数的外面，结构体定义末尾有个;号

    q.head        .号是成员运算符

*/


