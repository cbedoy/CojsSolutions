#include <string.h>
#include <stdio.h>
const int alp='z'-'a'+5;
const int MAX=1000010;
char cade[200];

struct {
	int state;
	int add[MAX][alp];
	int sum[MAX];
	void clear(){
		state=0;
		sum[0]=0;
		memset(add[0],0,sizeof(add[0]));
	}
	void insert(char *ca){
		int p=0;
		while(ca[0]){
			if(!(add[p][ca[0]-'a'])){
				add[p][ca[0]-'a']=++state;
				p=state;
				memset(add[p],0,sizeof(add[p]));
				sum[p]=0;
			}else p=add[p][ca[0]-'a'];
			
			sum[p]++;
			ca++;
		}
	}
	int dfs(int p, int ant){
		if(sum[p]==1) return 1;
		int tot=0;
		if(sum[p]!=ant) tot+=sum[p];
		for(int i=0; i<alp; i++)
			if(add[p][i]) tot+=dfs(add[p][i],sum[p]);
		return tot;
	}
} Trie;

int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		Trie.clear();
		for(int i=0; i<N; i++){
			scanf("%s",cade);
			Trie.insert(cade);
		}
		printf("%0.2lf\n",double(Trie.dfs(0,0))/N);
	}
	return 0;
}