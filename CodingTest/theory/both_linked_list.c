// 구조체와 포인터를 함께 사용하여 구현
// 필요할때마다 메모리 공간을 할당
// 특정 인덱스로 즉시 접근하지 못함
// 데이터를 선형적으로 저장하고 처리하는 방법

#include <stdio.h>
#include <stdlib.h>

typedef  struct {
    int data;
    struct Node *prev;
    struct Node *next;
}Node;

Node *head;
Node *tail;

// 삽입 함수
void insert(int data){
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    Node*cur;
    cur = head->next;
    while (cur->data < data && cur != tail){
        cur = cur->next;
    }
    Node*prev = cur->prev;
    prev ->next = node;
    node -> prev = prev;
    cur -> prev = node;
    node->next = cur;
}

// 삭제함수
void removeFront(){
    Node *node = head->next;
    head->next = node->next;
    Node* next = node->next;
    next->prev;
    free(node);
}

// 출력함수
void show(){
    Node* cur = head->next;
    while(cur!=tail){
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main(void){
    head = (Node*) malloc(sizeof (Node));
    tail = (Node*) malloc(sizeof (Node));
    head->next = tail;
    head->prev = head;
    tail->next = tail;
    tail->prev = head;
    insert(2);
    insert(1);
    show();
    removeFront();

    show();
    return 0;

}

