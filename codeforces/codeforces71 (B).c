#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int b, p, f, h, c;
        scanf("%d %d %d %d %d", &b, &p, &f, &h, &c);
        int ans = 0;
 
        if (h > c) {
            int beef= (b / 2 < p) ? b / 2 : p;
            ans += beef* h;
            b -= beef * 2;
 
            int chicken = (b / 2 < f) ? b / 2 : f;
            ans += chicken * c;
        } else {
            int chicken= (b / 2 < f) ? b / 2 : f;
            ans += chicken * c;
            b -= chicken * 2;
 
            int beef = (b / 2 < p) ? b / 2 : p;
            ans += beef * h;
        }
 
        printf("%d\n", ans);
    }
    return 0;
}