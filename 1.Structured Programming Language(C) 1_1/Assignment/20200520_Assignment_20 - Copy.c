#include<stdio.h>
#define sz 10
int adj[sz][sz],adj1[sz][sz][sz];
int main()
{
 int n,m,x,y,z,a,s;
 scanf("%d %d",&n,&m);
 for(int i=0;i<m;i++){
    scanf("%d%d%d",&x,&y,&z);
    adj[x][y]=z;
    adj[y][x]=z;


 }
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(adj[i][k]&&adj[k][j]) adj1[i][k][j]=adj[i][k]+adj[k][j];
        }
    }
  }
  int q;
 scanf("%d",&q);
 for(int i=0;i<q;i++){
scanf("%d%d",&a,&s);
if(adj[a][s]&&a!=s){
                printf("the shortest reachable path=%d  ",adj[a][s]);
puts("");
}

for(int k=0;k<n;k++){
    for(int j=0;j<n;j++){

        if(adj1[a][j][s]>=adj1[a][k][s]){
            if(adj1[a][k][s]&& a!=s){
                printf("the shortest reachable path=%d  ",adj1[a][k][s]);
                puts("");
                break;

            }

    }
}
}
 }



    return 0;
}
