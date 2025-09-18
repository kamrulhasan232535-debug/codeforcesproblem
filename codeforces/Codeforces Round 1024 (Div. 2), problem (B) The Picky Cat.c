#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct {
    int value;
    int index;
} Pair;
 
int compare(const void *a, const void *b) {
    Pair *pa = (Pair *)a;
    Pair *pb = (Pair *)b;
    return pa->value - pb->value;
}
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int a[n], ans[n];
        Pair pairs[n];
 
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            pairs[i].value = abs(a[i]);
            pairs[i].index = i;
            ans[i] = 0;
        }
 
        qsort(pairs, n, sizeof(Pair), compare);
 
        for (int i = 0; i <= n / 2; i++) {
            int idx = pairs[i].index;
            ans[idx] = 1;
        }
 
        if (ans[0] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
 
    return 0;
}