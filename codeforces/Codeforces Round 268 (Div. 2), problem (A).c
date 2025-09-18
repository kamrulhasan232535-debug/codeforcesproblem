#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int array[n+1];
    int arra[n+1];
    int fre[n+1];
    for(int i=1; i<=n; i++){
        fre[i] = 0;
    }

    int p;
    scanf("%d", &p);
    for(int i=1; i<=p; i++){
        scanf("%d", &array[i]);
        fre[array[i]] = 1;
    }

    int q;
    scanf("%d", &q);
    for(int i=1; i<=q; i++){
        scanf("%d", &arra[i]);
        fre[arra[i]] = 1;
    }

    int c = 1;
    for(int i=1; i<=n; i++){
        if(fre[i] == 0){
            c = 0;
            break;
        }
    }

    printf("%s\n", (c) ? "I become the guy." : "Oh, my keyboard!");
}

