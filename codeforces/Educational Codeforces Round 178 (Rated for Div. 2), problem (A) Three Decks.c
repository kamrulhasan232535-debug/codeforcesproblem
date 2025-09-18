#include <stdio.h>
 
int main() {
  int t;
  scanf("%d",&t);
  while(t--){
      int a,b,c,sum;
      scanf("%d %d %d",&a,&b,&c);
      sum=a+b+c;
      if(sum%3==0 && (a>sum/3 || b>sum/3) ){
          printf("NO\n");
      }else if(sum%3!=0){
          printf("NO\n");
      }else{
          printf("YES\n");
      }
      
  }
 
}
 
 