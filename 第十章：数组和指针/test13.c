/*
利用变长数组做为函数参量重做练习12.
*/
#include <stdio.h>
void input(int n, int m, double arr[n][m]);
void show(int n, int m, double arr[n][m]);
double average(int n, double arr[n]);
double total_average(int n, int m, double arr[n][m]);
double max(int n, int m, double arr[n][m]);

int main(){
        int i;
        double arr[3][5];

        input(3, 5, arr);
        show(3, 5, arr);
        for(i = 0; i < 3; i++){
                printf("THe average of array %d is %.2lf.\n", i+1, average(5, arr[i]));
        }
        printf("The total average of array is %.2lf.\n", total_average(3, 5, arr));
        printf("The max value of array is %.2lf.\n", max(3, 5, arr));
        return 0;
}

void input(int n, int m, double arr[n][m]){
        int i, j;
        for(i = 0; i < n; i++){ 
                printf("Please input number array %d:\n", i + 1);
                for(j = 0; j < m; j++){
                        scanf("%lf", &arr[i][j]);
                }
        }
}

void show(int n, int m, double arr[n][m]){
        int i, j;
        for(i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                        printf("%5.2lf ", arr[i][j]);
                }
                printf("\n");
        }
}

double average(int n, double arr[n]){
        double total = 0;
        int i;
        for(i = 0; i < n; i++){
                total += arr[i];
        }
        return total/n;
}

double total_average(int n, int m, double arr[n][m]){
        int i,j;
        double total_all = 0;
        for(i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                        total_all += arr[i][j];
                }
        }
        return total_all/(n*m);
}

double max(int n, int m, double arr[n][m]){
        int i, j;
        double max = arr[0][0];
        for(i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                        if(max < arr[i][j])
                                max = arr[i][j];
                }
        }
        return max;
}
