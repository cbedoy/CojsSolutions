#include<cstdio>
int N,R,C,K;
const int oo=-108; // - big prime -1
int T[102][102];
int T1[102][102];
int main(){
	while(scanf("%d%d%d%d",&N,&R,&C,&K)&&N){
		for(int i=0;i<=R;i++) T[i][C+1]=T[i][0]=oo;
		for(int i=0;i<=C;i++) T[R+1][i]=T[0][i]=oo;
		for(int i=1;i<=R;i++)
			for(int j=1;j<=C;j++)
				scanf("%d",&T[i][j]);
		for(int k=1;k<=K;k++)
		{
			for(int i=1;i<=R;i++)
				for(int j=1;j<=C;j++)
					if((T[i-1][j]+1)%N==T[i][j]||(T[i+1][j]+1)%N==T[i][j]||(T[i][j-1]+1)%N==T[i][j]||(T[i][j+1]+1)%N==T[i][j])
						T1[i][j]=(T[i][j]-1+N)%N;
					else T1[i][j]=T[i][j];
			for(int i=1;i<=R;i++)
				for(int j=1;j<=C;j++)
					T[i][j]=T1[i][j];
		}
		for(int i=1;i<=R;i++){
			printf("%d", T[i][1]);
			for(int j=2;j<=C;j++) printf(" %d",T[i][j]);
			printf("\n");
		}
	}
}