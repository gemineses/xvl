#include <stdio.h>
#include <string.h>

int main(){
	int q = 1;
	char master_order[100];
	while(q==1){
		printf("Hey! \n");
		scanf("%s", master_order);
		if(strcmp(master_order,"exit")){
			printf("bye bye...");
			q=0;
		}
	}
}
