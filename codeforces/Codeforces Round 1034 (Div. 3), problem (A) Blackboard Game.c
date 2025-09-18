#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%s\n",(n%4)?"Alice":"BOb");
    }
}