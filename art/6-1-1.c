/*
  input:   7
  output:  1 3 5 7 4 2 6
  -----------------------
  input:   5
  output:  1 3 5 4 2
*/

#include <stdio.h>

const int MAXN=50;
int queue[MAXN];

int main()
{
    int n, front, rear;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        queue[i]=i;
    }

    front=0;
    rear=n;
    while( front<rear ){
        printf("%d ",queue[front++]);
        queue[rear++] = queue[front++];
        
    }
    return 0;
}
