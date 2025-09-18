#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b,max=0;
        scanf("%d %d %d",&n,&a,&b);
        int array[n+1];
        for(int i=1;i<=n;i++){
            scanf("%d",&array[i]);
            max=fmax(max,array[i]);
        }printf("%s\n",(b>1||array[a]==max)?"Yes":"No");
    }
}
