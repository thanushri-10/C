#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int n;
    
    scanf("%d",&n);
    char str[n][100];
    for(int i=0;i<n;i++) {
        scanf("%s",str[i]);
    }
    
    for(int i=0;i<n;i+=2){
        printf("%s",str[i]);
    }

}