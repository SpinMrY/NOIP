#include <stdio.h>
int main(){
    int n,m;
    int r1,c1,r2,c2,e1,e2;
    int square=0,rect=0;
    scanf("%d%d",&n,&m);
    for(r1=0;r1<=n;r1++)
        for(c1=0;c1<=m;c1++)
            for(r2=r1+1;r2<=n;r2++)
                for(c2=c1+1;c2<=m;c2++){
                    e1=r2-r1;
                    e2=c2-c1;
                    if(e1>0&&e2>0)
                        if(e1==e2)
                            square++;
                        else
                            rect++;
                }
    printf("%d %d\n",square,rect);            
}
