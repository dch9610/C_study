// 구조체와 포인터를 함께 사용하여 구현
// 필요할때마다 메모리 공간을 할당
// 특정 인덱스로 즉시 접근하지 못함
// 데이터를 선형적으로 저장하고 처리하는 방법

#include <stdio.h>
#include <stdlib.h>

typedef  struct {
    int data;
    struct Node *next;
}Node;

Node *head;
Node *cur;

// 연결 리스트 맨앞 삽입함수
void addFront(Node *root, int data){
    Node *node = (Node*) malloc(sizeof (Node));
    node->data=data;
    node->next=root->next;
    root->next=node;
}

// 연결 리스트 삭제함수
void removeFront(Node *root){
    Node *front = root->next;
    root->next=front->next;
    free(front); //메모리 해제
}

// 연결 리스트 메모리 해제 함수
void freeAll(Node *root){
    Node *cur = head->next;
    while (cur != NULL){
        Node *next = cur->next;
        free(cur);
        cur=next;
    }
}

// 연결리스트 전체 출력함수
void showAll(Node *root){
    Node *cur = head->next;
    while (cur!=NULL){
        printf("%d ", cur->data);
        cur = cur-> next;
    }
}



int main(void){
    // 동적할당
    head = (Node*) malloc(sizeof(Node));
    head->next=NULL;
    addFront(head,2);
    addFront(head,1);
    addFront(head,7);
    addFront(head,9);
    removeFront(head);
    showAll(head);
    printf("\n");
    addFront(head,8);
    showAll(head);
    freeAll(head);
    return 0;


}

