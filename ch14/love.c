#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float in_heart(int size, double x, double y) {
    // 坐标偏移
    x -= size / 2;
    y -= size / 2;
    // 坐标轴伸缩
    //x = x / 1.6;
    //y = y * 1.2;
    float res = pow(pow(x,2)+pow(y,2)-1, 3) - pow(x,2) * pow(y,3);

    return -res;
}




int main(void) {
    int size;
    printf("Enter the size of picture: ");
    scanf("%d", &size);
    char *makelove = "love!";
    
    int i, j;
    for (i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            if(in_heart(size, (double)j, (double)i) > 0){
                putchar(makelove[(i+j) % 5]);
            } else {
                putchar(' ');
            }
        }
        printf("\n");
    }

    return 0;
}
