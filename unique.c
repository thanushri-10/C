#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    if(str[n-1]=='\n'){
        str[n-1]='\0';
        n--;
    }
    int count[256]={0};
    for(int i=0;i<n;i++)
        count[str[i]]++;
    for(int i=0;i<n;i++){
        if(count[str[i]]==1){
            printf("%c",str[i]);
        }
    }
    return 0;
}