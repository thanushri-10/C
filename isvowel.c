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
    for(int i=0;i<n;i++){
        char c=tolower(str[i]);
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
            printf("%c",str[i]);
        }
    }
}