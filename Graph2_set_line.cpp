#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a[32001];
	int cnt[32001];
	memset(cnt,0,sizeof(cnt));
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		cnt[y]++;
	}
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(!cnt[i])q.push(i);
	}
	while(!q.empty()){
		int x = q.front();
		q.pop();
		printf("%d\n",x);
		for(int i=0;i<a[x].size();i++){
			int y = a[x][i];
			cnt[y]--;
			if(!cnt[y])q.push(y);
		}
		
	}	
	
	return 0;
}
