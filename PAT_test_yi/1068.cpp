#include<cstdio>  
#include <algorithm>
	int p[1000][1000]= {{0}};
	int cnt[1 << 24] = {0};
	int m,n,t,x,y,num;

int main(){
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&t);
	for(int i=0 ; i < m; i ++) {
		for(int j = 0; j < n; j ++) {
			scanf("%d",&p[i][j]);
			cnt[p[i][j]] ++;
		}
	}
	int flag = 0;
	for(int i=0 ; i < m ; i ++) {
		for(int j = 0; j < n ; j ++) {
			if(cnt[p[i][j]] != 1) {
				continue;
			}
			if( i > 0 &&  abs(p[i][j] - p[i - 1][j] ) <= t) {
				continue;
			}
			if(j  > 0 && abs(p[i][j] - p[i][j - 1] ) <= t) {
				continue;
			}
			if(i  > 0 && j > 0 && abs(p[i][j] - p[i - 1][j - 1] ) <= t) {
				continue;
			}
			if(i  < m && abs(p[i][j] - p[i + 1][j] ) <= t) {
				continue;
			}
			if( j < n && abs(p[i][j] - p[i][j + 1] ) <= t) {
				continue;
			}
			if(  i < m && j < n && abs(p[i][j] - p[i + 1][j + 1] ) <= t) {
				continue;
			}
			if(i > 0 && j < n && abs(p[i][j] - p[i - 1][j + 1] ) <= t) {
				continue;
			}
			if(i < m && j > 0 && abs(p[i][j] - p[i + 1][j - 1] ) <= t) {
				continue;
			}
			x = j + 1;
			y = i + 1;
			num = p[i][j];
			flag ++;
		}
			if(flag > 1) {
			puts("Not Unique");
			return 0;
		}
	}
		if(flag == 0) {
			puts("Not Exist");
			return 0;
		}
		printf("(%d, %d): %d",x,y,num);
		return 0;
};

