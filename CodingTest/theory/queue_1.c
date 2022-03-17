// queue
// 뒤쪽으로 들어가서 앞쪽으로 나오는 자료구조
// 스케줄링, 탐색 알고리즘 등에서 다방면으로 활용

// 배열을 이용한 구현
#include <stdio.h>
#define SIZE 10000
#define INF 9999999

int queue[SIZE];
int front = 0;
int rear = 0;

// 삽입함수
void push(int data){
    if (rear >= SIZE){
        printf("queue overflow");
        return;
    }
    queue[rear++] = data;
}

// 추출함수
int pop(){
    if(front == rear){
        printf("queue underflow");
        return -INF;
    }
    return queue[front++];
}

// 출력함수
void show(){
    printf("--- queue front---\n");
    for (int i=front; i<rear; i++){
        printf("%d\n", queue[i]);
    }
    printf("--- queue rear---\n");
}

int main(void){
    push(7);
    push(3);
    push(4);
    pop();
    show();
    push(5);
    push(1);
    show();

}