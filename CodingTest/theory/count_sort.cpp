// 계수 정렬
// 크기를 기준으로 데이터의 개수를 세는 정렬 알고리즘
// 각 데이터를 바로 크기를 기준으로 분류하므로 O(N)의 시간 복잡도를 가집니다.
// 데이터의 크기가 한정적일 때 사용가능

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VALUE 10001

int n, m;
int a[MAX_VALUE];

int main(){
    scanf("%d", &n);


    for (int i=0; i<n; i++) {
        scanf("%d", &m);
        a[m]++; // 공간할당

    }
    for(int i=0; i<MAX_VALUE; i++){
        while (a[i] != 0){
            printf("%d ", i);
            a[i]--;
        }
    }
    printf("%d", a[2]++);
}