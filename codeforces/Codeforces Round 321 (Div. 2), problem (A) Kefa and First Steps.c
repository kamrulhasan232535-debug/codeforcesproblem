#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
 
    int max_length = 1;
    int current_length = 1;
 
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            current_length++;
        } else {
            current_length = 1;
        }
 
        if (current_length > max_length) {
            max_length = current_length;
        }
    }
 
    printf("%d\n", max_length);
    return 0;
}