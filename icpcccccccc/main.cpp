#include<cstdio>
int main(){
	int n, m;
	while (scanf("%d%d", &n, &m) == 2){
		int S[100], ans = 0;
		for (int i = 0; i < n; i++)
			scanf("%d", S + i);
		for (int i = 0, cap = 0; i < n; cap = 0){
			while (i < n && cap + S[i] <= m)
				cap += S[i++];
			ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
