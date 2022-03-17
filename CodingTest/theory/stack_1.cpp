// 스택
// 한 족으로 들어가서 한쪽으로 나오는 자료구조
// 배열을 이용한 구현방법과 연결리스트를 이용한 구현 방법으로 나누어짐

#include <stdio.h>
#define SIZE 10000
#define INF 9999999

int stack[SIZE];
int top = -1;

// 삽입함수
void push(int data){
    // stack의 크기가 SIZE를 넘어갔을 경우
    if (top == SIZE-1){
        printf("stack overflow: \n");
        return;
    }
    stack[++top] = data;
}

// 추출함수
int pop(){
    if (top==-1){
        printf("stack underflow: \n");
        return -INF;
    }
    return stack[top--];
}

// 출력함수
void show(){
    // 스택의 입구
    printf("--- stack top ---\n");
    for(int i=top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
    printf("--- stack under ---\n");
}

int main(){
    push(7);
    push(6);
    push(2);
    show();
    pop();
    push(1);
    push(5);
    pop();
    show();
}