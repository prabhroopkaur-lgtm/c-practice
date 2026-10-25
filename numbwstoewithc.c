#include <stdio.h>
int main(){
    int s,e;
    scanf("%d\n%d",&s,&e);
    if(s<e){
        for(int i=s;i<=e;i++){
            printf("%d\n",i);
        }
    }else{
        continue;
    }
        return 0;
}