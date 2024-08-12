#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char small[100],large[100],curr[100];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    if(str[n-1]=='\n'){
        str[n-1]='\0';
        n--;
    }
    int max=0;
    int min=n;
    int curr_len=0;
    int j=0;
    for(int i=0;i<=n;i++){
        if(str[i]=='\0' || str[i]==' '){
            curr[j]='\0';
        
        if(j>0){
            if(curr_len>max){
                max=curr_len;
                strcpy(large,curr);
            }
            if(curr_len<min){
                min=curr_len;
                strcpy(small,curr);
            }
        }
        j=0;
        curr_len=0;
        }
        else{
            curr[j++]=str[i];
            curr_len++;
        }
    }
    printf("%s %s",small,large);

}