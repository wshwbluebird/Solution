//
// Created by Macbook Pro on 16/7/7.
//
//typedef memcmp memcpy memcmp
#include <iostream>
#include <String.h>
using namespace std;
typedef int State[9];//定义状态的类型
const int MAXSTATE = 1000000;
State  st[MAXSTATE],goal; //状态 数组 所有的状态 都保存在这里
int dist[MAXSTATE];  //存储距离根节点 移动此书的数组
int fa[MAXSTATE]; //存储当前状态下 上一状态的节点哈西码

const int dx[]={-1,1,0,0};
const int dy[]={0,0,-1,1};



//hash  构造链表储存******************************************************************
const int MAXHASHSIZE = 1000003;
int headhash[MAXHASHSIZE];
int nexthash[MAXHASHSIZE];
void init_lookup_table(){
    memset(headhash,0, sizeof(headhash));
}
int hashf(State &s){
   int v = 0;
    for (int i = 0; i < 9; ++i) {
        v= v*10 + s[i];
    }
    return v%MAXHASHSIZE;
}

int try_to_insert(int s){
    int h = hashf(st[s]); //通过hash 映射 找到对应的 映射序列
    int u = headhash[h];
    while(u){
        if(memcmp(st[u],st[s], sizeof(st[s]))==0) return 0;  //用链表寻找 所有映射到这个头上的 目标
        u = nexthash[u];
    }
    nexthash[s] = headhash[h];  //如果没有重复 则让这个新的状态成为 当前映射链表的头
    headhash[h] = s;
    return 1; //返回 已经成功搜索的信息


}
///******************************************************************
int bfs(){
    init_lookup_table();
    int front = 1 ; //在main函数中   初始状态已经在 1 中
    int rear = 2 ;  //不使用 0 ????

    while(front<rear){
        State &s = st[front]; //&表明的作用????
        if (memcmp(goal, s, sizeof(s)) == 0) return front; //如果 找到了 返回当前 的信号
        int z;
        for (z = 0; z < 9; ++z) {
            if(!s[z]) break;     //找到 0 的位置
        }
        int x = z/3; //获取行号
        int y = z%3; //获取 列号

        //标准 地图型广搜
        for (int i = 0; i < 4; ++i) {
            int newx = x + dx[i];
            int newy = y + dy[i];

            int newz = 3 * newx + newy;

            if(newx>=0&&newx<3&&newy>=0&&newy<3){  //判断移动是否合法 边界条件
                State &t = st[rear];//t是一个地址 //地址的传递 等于 绑定 双向互逆的传递
                memcpy(&t,&s, sizeof(s)); //扩展新的节点
                t[newz] = s[z];
                t[z] = s[newz];  //理解  进行移动s是上一状态的  t 是新扩展出来饿的状态
                                 // 两个的区别就是两个交换了空格 和它 四周一个格子的位置
                dist[rear] = dist[front]+1;  //距离也扩展了 一位
                if(try_to_insert(rear)) rear++;
            }
        }
        front++;

    }
    return  0; //如果 失败  返回0;
}



int main(){

    for (int i = 0; i <9 ; ++i) {
        cin>>st[1][i];
    }
    for (int j = 0; j < 9; ++j) {
        cin>>goal[j];
    }
    int ans = bfs();
    cout<<dist[ans]<<endl;

    return 0;
}