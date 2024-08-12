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
        str[i]=tolower(str[i]);
    }
    
    char *word[100];
    int len=0;
    char *token;
    token=strtok(str," ");
    while(token!=NULL){
        word[len++]=token;
        token=strtok(NULL," ");
    }
    for(int i=0;i<len;i++){
        int dulplicate=1;
        for(int j=0;j<i;j++){
            if(strcmp(word[i],word[j])==0){
                dulplicate=0;
                break;
            }
        }
        if(dulplicate){
            printf("%s",word[i]);
            if(i<len-1){
                printf(" ");
            }
        }
    }
}