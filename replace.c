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
        if(str[i]=='e'){
            str[i]='f';
        }
        else if(str[i]=='h'){
            str[i]='j';
        }
        else if(str[i]>='0' && str[i]<='9'){
            str[i]='n';
        }
    }
    printf("%s",str);
}