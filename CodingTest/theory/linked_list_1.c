// 배열 기반의 리스트
// 특정한 위치의 원소에 즉시 접근할 수 있음
// 데이터가 들어갈 공간을 미리 메모리에 할당해야함
// 원하는 위치로의 삽입이나 삭제가 비효율적

#include <stdio.h>
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int data){
    arr[count] = data;
    count++;
}

void addFirst(int data){
    for(int i=count; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = data;
    count++;
}

void show(){
    for(int i =0; i<count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 특정한 위치의 원소를 삭제
void removeAt(int index){
    for(int i=index; i < count-1; i++){
        arr[i] = arr[i+1];
    }
    count--;
}

int main(void) {
    addFirst(4);
    addFirst(5);
    addFirst(1);
    show();
    removeAt(1);
    show();
    addBack(7);
    addBack(6);
    addBack(8);
    show();
    removeAt(3);
    show();
    return 0;
}
