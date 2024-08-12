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
    char result[100];
    int j=0;
    for(int i=0;i<n;i++){
        if(str[i]>='0' && str[i]<='9'){
            result[j++]=str[i];
        }
    }
    int sum=0;
    for(int i=0;i<j;i++){
        sum+=result[i]-'0';
    }
    int rev=0;
    while(sum!=0){
        int digit=sum%10;
        rev=rev*10+digit;
        sum/=10;
    }
    printf("%d",rev);
}