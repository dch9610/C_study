// 삽입정렬
// 각 숫자를 적절한 위치에 삽입하는 정렬기법
// 들어갈 위치를 선택하는데 N번, 선택하는 횟수로 N번이므로 O(N^2)의 시간복잡도를 가집니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000

int a[SIZE];

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n;i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n-1; i++){
        int j=i;
        while (j>=0 && a[j] > a[j+1]){
            swap(&a[j], &a[j+1]);
            j--;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }


}