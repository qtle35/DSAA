#include<bits/stdc++.h>
using namespace std;
char c[100][100];
int dx[4]= {-1,1,0,0};
int dy[4]= {0,0,1,-1};
int n, m, dd[100][100] = {0};

void dfs(int i, int j){
    for(int k = 0; k < 4; k++){
        int xm = i + dx[k];
        int ym = j + dy[k];
        if(xm >= 0 && ym >= 0 && xm < n && ym < m && dd[xm][ym] == 0 && c[xm][ym] == '#'){
            dd[xm][ym] = 1;
            dfs(xm, ym);
            c[xm][ym] = '.';
        }
    }
}

int main(){
    int dem = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(c[i][j] == '#'){
                dd[i][j] = 1;
                dem ++;
                dfs(i, j);
            }
        }
    }
    cout << dem;
}