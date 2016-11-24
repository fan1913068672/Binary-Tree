#include"stdio.h"
#define MAX_TREE_SIZE 100
#define TElemType int
typedef TElemType SqBiTree[MAX_TREE_SIZE];
SqBiTree a;
int main(){
    /*
              1
            /   \
           2     3
          /  \
         4    5
             / \
            6   7
    */
    a[0] = 1;
        a[1] = 2;
            a[3] = 4;
            a[4] = 5;
                a[9]=6;
                a[10]=7;
        a[2] = 3;
    for(int i=0;i<100;i++)
        printf("%d ",a[i]);
    printf("\n");



}
