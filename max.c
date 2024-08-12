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
    int count[256]={0};
    for(int i=0;i<n;i++){
        count[str[i]]++;
    }
    int max=1;
    char index;
    for(int i=0;i<n;i++){
        if(count[str[i]]>max){
            max=count[str[i]];
            index=str[i];
        }
    }
    printf("%c %d",index,max);
}
