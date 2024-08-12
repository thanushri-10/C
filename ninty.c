#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char matrix[100][100];
    char rotate[100][100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf(" %c",&matrix[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            char temp=matrix[i][j];
            matrix[i][j]=matrix[i][n-j-1];
            matrix[i][n-j-1]=temp;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",matrix[i][j]);
        }
    }

}