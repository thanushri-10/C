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
    int index=0;
    char count[26]={0};
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){
            index=str[i]-'a';
            count[index]=1;
    }
    else if(str[i]>='A' && str[i]<='Z'){
            index=str[i]-'A';
            count[index]=1;
    }
    }
    for(int i=0;i<26;i++){
        if(count[i]==0){
            printf("no");
            return 0;
        }
    }
    printf("pangram");
    return 0;
}