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
    for(int i = 0; i <= 1000; i++) prime[i] = 1;
    func();
    int k;
    scanf("%d", &k);
    int sum = 2;
    int cnt = 1;
    printf("2");
    if(k == 1) {
        printf("\n");
        printf("2\n");
    }
    else {
        for(int i = 3; cnt < k; i++){
            if(prime[i]){
                printf(",%d", i);
                cnt++;
                sum += i;
            }
        }
        printf("\n%d\n", sum);
    }


	return 0;
}