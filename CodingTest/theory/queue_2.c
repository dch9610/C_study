// queue
// 뒤쪽으로 들어가서 앞쪽으로 나오는 자료구조
// 스케줄링, 탐색 알고리즘 등에서 다방면으로 활용

// 연결리스트를 이용한 구현
#include <stdio.h>
#include <stdlib.h>
#define INF 9999999

typedef struct {
    int data;
    struct Node *next;
}Node;

typedef struct {
    Node *front;
    Node *rear;
    int count;
}Queue;

// 삽입함수
// 삽입되는 데이터가 rear이 되어야함
void push(Queue *queue, int data){
    Node *node = (Node*) malloc(sizeof (Node));
    node->data = data;
    node->next = NULL;
    if(queue->count==0){
        queue->front = node;
    }
    else{
        queue->rear->next = node;
    };
    queue->rear = node;
    queue->count++;
}

// 추출함수
// front의 데이터가 추출되어야함
int pop(Queue *queue){
    if(queue->count==0){
        printf("queue underflow\n");
        return -INF;
    }
    Node *node = queue->front;
    int data = node->data;
    queue->front = node->next;
    free(node);
    queue->count--;
    return data;
}

// 출력함수
void show(Queue *queue){
    Node *cur = queue->front;
    printf("--- queue front---\n");
    while (cur != NULL){
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    printf("--- queue rear ---\n");
}

int main(void){
    Queue queue;
    queue.front = queue.rear = NULL;
    queue.count = 0;
    push(&queue, 7);
    push(&queue, 5);
    push(&queue, 2);
    push(&queue, 1);
    pop(&queue);
    pop(&queue);
    show(&queue);
    push(&queue,9);
    show(&queue);
}