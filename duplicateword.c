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
    char rem[10];
    fgets(rem,sizeof(rem),stdin);
    int remLen = strlen(rem);
    if (rem[remLen-1] == '\n') {
        rem[remLen-1] = '\0';  // Remove newline from rem
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
        if(strcmp(word[i],rem)!=0){
            printf("%s",word[i]);
            if(i<len-1){
                
                    printf(" ");
                
            }
        }
    }
    
}
    
