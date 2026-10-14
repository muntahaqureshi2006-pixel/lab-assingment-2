#include<stdio.h>
int main (){
int n;
scanf("%d",&n);
int ok=1;
for(int i = 2;i<n;i++){
    if(n % i==0){
        ok=0;
        break ;
    }
}
if(ok==1){
    printf("prime");
}
else{
    printf("composite");
}
}
