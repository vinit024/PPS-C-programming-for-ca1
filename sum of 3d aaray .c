
#include <stdio.h>

int main() {
    int array[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    int sum = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                sum += array[i][j][k];
            }
        }
    }
    printf("Sum = %d", sum);
    return 0;
}
```
