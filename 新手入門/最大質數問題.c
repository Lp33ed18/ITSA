    #include <stdio.h>
    #include <stdlib.h>
    int prime[1001];
    void func(){
        for(int i = 2; i <= 1000; i++){
            if(prime[i]){
                for(int j = 2; j * j <= i; j++){
                    if(i % j == 0){
                        prime[i] = 0;
                        for(int k = 1; i * k <= 1000; k++){
                            if(!prime[i * k]) break;
                            prime[i * k] = 0;
                        }
                        break;
                    }
                }
            }
        }
    }
    int main(int argc, char *argv[]) {
        for(int i = 2; i <= 1000; i++) prime[i] = 1;
        func();
        int a;
        scanf("%d", &a);
        if(a == 1) {
            printf("1\n");
            return 0 ;
        }
        a--;
        while(!prime[a]){
            a--;
        }
        printf("%d\n", a);


        return 0;
    }