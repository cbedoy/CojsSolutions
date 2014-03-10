#include <stdio.h>
#include <string.h>

char dict[10][10] = {".***..","*.....", "*.*...","**....","**.*..","*..*..","***...","****..","*.**..",".**..."};
char ch[2], str[105], nums[105][11];
int d, i, j;
int main(){
	while(scanf("%d", &d), d){
		scanf("%s", ch);
		if(ch[0] == 'S'){
			scanf("%s", str);

			for(i = 0; i < 6; i+=2){
				for(j = 0; j < d; ++j){
					printf("%c%c", dict[str[j]-48][i], dict[str[j]-48][i+1]);
					if(j < d-1) putchar(' ');
				}
				putchar('\n');
			}
		} else if(ch[0] == 'B'){
			for(i = 0; i < 6; i+=2){
				for(j = 0; j < d; ++j){
					scanf("%s", ch);
					nums[j][i] = ch[0];
					nums[j][i+1] = ch[1];
				}
			}

			for(i = 0; i < d; ++i){
				for(j = 0; j < 10; ++j){
					if(strcmp(nums[i], dict[j]) == 0){
						printf("%d", j);
					}
				}
			}
			putchar('\n');
		}
	}
}