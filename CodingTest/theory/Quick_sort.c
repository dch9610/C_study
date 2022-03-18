// 퀵정렬
// 피벗을 기준으로 큰 값과 작은 값을 서로 교체하는 정렬 기법
// 값을 교체하는데에 N번, 엇갈린 경우 교체 이후에 원소가 반으로 나누어지므로
// 전체 원소를 나누는데에 평균적으로 log N번이 소요되므로 O(N logN)의 시간복잡도를 가짐

// 원소를 절반씩 나눌떄 log N의 시간 복잡도가 나오는 완전 이진트리입니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000

int a[SIZE];

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 퀵정렬 구현하기
void quickSort(int start, int end){
    if (start >= end){
        return;
    }
    int key = start, i = start +1, j=end;

    // 엇갈릴 때까지 반복
    while (i<=j) {
        while (i <= end && a[i] <= a[key]) i++;
        while (j > start && a[j] >= a[key]) j--;
        if (i > j) {
            swap(&a[key], &a[j]);
        } else {
            swap(&a[i], &a[j]);
        }
    }

    quickSort(start, j-1);
    quickSort(j+1, end);

}

int main(void){
    int n;
    scanf("%d ", &n);
    for(int i =0; i < n; i++){
        scanf("%d ", &a[i]);
    }
    quickSort(0,n-1);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
}