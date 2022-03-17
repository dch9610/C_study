// 구조체와 포인터를 함께 사용하여 구현
// 필요할때마다 메모리 공간을 할당
// 특정 인덱스로 즉시 접근하지 못함
// 데이터를 선형적으로 저장하고 처리하는 방법

#include <stdio.h>
#include <stdlib.h>
#define INF 9999999

typedef  struct {
    int data;
    struct Node *next;
}Node;

typedef struct {
    Node *top;
}Stack;

// 삽입 함수
void push(Stack *stack, int data){
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
}

// 추출함수
int pop(Stack *stack){
    if (stack->top ==NULL){
        printf("stack underflow. \n");
        return -INF;
    }

    Node *node = stack->top; // 삭제할 노드
    int data = node->data;
    stack->top = node->next; // node->next를 stack의 top으로 지정
    free(node);
    return data;
}

// 전체 출력함수
void show(Stack *stack){
    Node *cur = stack->top;
    printf("--- stack top---\n");
    while (cur != NULL){
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    printf("--- stack under---\n");
}

int main(){
    Stack stack;
    stack.top = NULL;
    push(&stack,7);
    push(&stack,3);
    push(&stack,5);
    pop(&stack);
    push(&stack,6);
    show(&stack);

}