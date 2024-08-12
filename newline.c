#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    if(str[n-1]=='\n'){
        str[n-1]='\0';
        n--;
    }
    int found=0;
    int num=0;
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            num=num*10+str[i]-'0';
            found=1;
        }
        else if(found){
            printf("%d\n",num);
            found=0;
            num=0;
        }
    }
    if(found){
        printf("%d",num);
    }
}