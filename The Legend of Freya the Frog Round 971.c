#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y, d;
        scanf("%d %d %d", &x, &y, &d);

        int moves_x = (x + d - 1) / d;
        int moves_y = (y + d - 1) / d;

        int min_moves = 0;
        if(moves_x > moves_y){
             min_moves = 2 * moves_x - 1;
        }else{
             min_moves = 2 * moves_y;
        }

        printf("%d\n", min_moves);
    }

    return 0;
}
