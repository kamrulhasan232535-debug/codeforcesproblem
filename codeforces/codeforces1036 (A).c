#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
 
        int ans1 = 2 * a[0];
        int ans2 = a[0] + a[1];
        int result = (ans1 < ans2) ? ans1 : ans2;
 
        printf("%d\n", result);
    }
    return 0;
}