//
// Created by Macbook Pro on 16/7/6.
//

// 广度 优先搜索 队列

#include <iostream>
using namespace std;

int a,b,c;  //分别表示 三个杯子的容量  a>b>C
int aa;
int cap; //表示三杯水的总容量  这个条件 使得状态  数只用考虑 两个杯子的纬度
const int MAXCAP = 1000;
int vis[MAXCAP][MAXCAP];  //哈西表1 判断是否访问过
int fa[MAXCAP][MAXCAP]; //哈西表2 用来映射 队列节点数 //映射函数  y = 2ax + by + x-a-b;
int dist[MAXCAP][MAXCAP]; //用来 表明距离 距离初始跟节点的距离
int q[MAXCAP*MAXCAP];  //广度优先搜索队列
int front = 0;

void bfs(int x, int y ,int z){   //表示三个水杯的 状态
    //广度优先搜索  初始化

    int rear = 0;
    vis[x][y] = 1;
    int u = aa*x + y ;
    fa[x][y] = u;
    q[rear++] = u;
    //
    int fx ;
    int fy ;
    int fz ;
    while(front<rear){
       // cout<<front<<":"<<rear<<endl;
        u = q[front++];
        x = u/aa;
        y = u%aa;
        z = cap - x- y;
        //cout<<x<<":"<<y<<";"<<z<<endl;
        //12种倒水状态
        //x
        if(y!=b&&x>=b-y){
            //cout<<front<<endl;

            fx = x - (b-y);
            fy = b;
            fz = z;

            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }

        if(x!=0&&x<=b-y){
            fx = 0;
            fy = y+x;
            fz = z;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }



        if(z!=c&&x>=c-z){
            fx = x - (c-z);
            fy = y;
            fz = c;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }


        if(z!=0&&x<=c-z){
            fx = 0;
            fy = y;
            fz = z+x;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }


        //y
        if(x!=a&&y>=a-x){
            fx = a;
            fy = y-(a-x);
            fz = z;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }


        if(y!=0&&y<=a-x){
            fx = x+y;
            fy = 0;
            fz = z;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }

        if(z!=c&&y>=c-z){
            fx = x;
            fy = y-(c-z);
            fz = c;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }


        if(y!=0&&y<=c-z){
            fx = x;
            fy = 0;
            fz = z+y;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }


        //z
        if(x!=a&&z>=a-x){
            fx = a;
            fy = y;
            fz = z+(a-x);
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }


        if(z!=0&&z<=a-x){
            fx = x+z;
            fy = y;
            fz = 0;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }

        if(y!=b&&z>=b-y){
            fx = x;
            fy = b;
            fz = z-(b-y);
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }


        if(z!=0&&z<=b-y){
            fx = x;
            fy = z+y;
            fz = 0;
            if(!vis[fx][fy]){
                int v = aa*fx+fy;
                q[rear++] = v;
                vis[fx][fy] = 1;
                fa[fx][fy] = u;
                dist[fx][fy] = dist[x][y]+1;
            }
        }




    }

}

void print_rec(int pathu){
    int x = pathu/aa;
    int y = pathu%aa;
    int z = cap - x- y;
    if(fa[x][y]==pathu){
        cout<<"("<<x<<","<<y <<","<<z<<")"<<endl;
    }else{
        print_rec(fa[x][y]);
        cout<<"("<<x<<","<<y <<","<<z<<")"<<endl;
    }

}

int main(){
    a = 8;
    b = 7;
    c = 4;
    aa = b*b+1;
    cap = 9 ;
    bfs(8,0,1);
    cout<<"asd"<<endl;
    int aim = 6;

    for (int i = 0; i < front; ++i) {
        int u = q[i];
        int x = u/aa;
        int y = u%aa;
        int z = cap - x- y;
        if(x==aim || y ==aim || z == aim){
            print_rec(u);
            break;
        }
        //cout<<"("<<x<<","<<y <<","<<z<<")"<<endl;
    }


    return 0;
}