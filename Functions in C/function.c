#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int largest = a;

    if(largest < b) {
        largest = b;
    }

    if(largest < c) {
        largest = c;
    }

    if(largest < d) {
        largest = d;
    }

    return largest;
}
