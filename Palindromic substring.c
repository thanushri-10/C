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
    int start=0;
    int maxlen=1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int flag=1;
            for(int k=0;k<(j-i+1)/2;k++){
                if(str[i+k]!=str[j-k]){
                    flag=0;
                    break;
                }
            }
            if(flag && j-i+1>maxlen){
                start=i;
                maxlen=j-i+1;
            }
        }
    }
    for(int i=start;i<start+maxlen;i++){
        printf("%c",str[i]);
    }

}