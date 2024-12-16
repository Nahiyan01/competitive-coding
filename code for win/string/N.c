#include<stdio.h>
#include<math.h>
int  main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int sum = (n+1)*n/2;
        for(int i=1;i<=n;i++){
            sum -= 2*i;
            i = i*2;
    }
    printf("%lld",sum);
    }
return 0;}
