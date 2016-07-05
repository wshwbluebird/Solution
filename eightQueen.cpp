////
//// Created by Macbook Pro on 16/7/5.
////
////回溯法  递归函数 不再调用它本身  而是 调用它的上一层
//#include <iostream>
//using namespace std;
//
//int n ;  //控制台输入 说明这是 几皇后问题
//int tot = 0 ; //表明 有几种解法
//int c[100];// 皇后队列  c[x] = y 表示 第x行的皇后 在第y列
//
////递归函数
//void search(int cur){ //cur表示 当前是第几行
//     int i ,j;
//    if(cur == n) {
//        tot++;
//        for (int k = 0; k < n-1; ++k) {
//            cout<<c[k]<<" ";
//        }
//        cout<<c[n-1]<<endl;
//    } //若程序运行到这里 则必然不会产生冲突
//    else{
//        for (i = 0; i < n ; ++i) {
//               int ok = 1;
//               c[cur] = i ; //尝试把第 cur行的皇后 放在 第i列
//            for (j = 0; j< cur; ++j) {
//                if(c[cur]==c[j]||cur-c[cur]==j-c[j]||cur+c[cur]==j+c[j]){
//                    ok = 0;
//                    break;
//                }
//            }
//            if(ok){
//                search(cur+1);// 如果 当前不冲突  看看下一行放在哪里
//            }
//
//        }
//    }
//}
//
//int vis[2][100];
//void search2 (int cur){
//    if(cur == n) {
//        tot++;
//        for (int i = 0; i < n-1; ++i) {
//            cout<<c[i]<<" ";
//
//        }
//        cout<<c[n-1]<<endl;
//    }else{
//        for (int i = 0; i < n; ++i) {
//            if(!vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+n]){
//                // vis[0][x]  判断列
//                // vis[1][x+y] 判断 右上到左下 的对角线
//                // vis[2][x-y+n]  判断 左上到右下的对角线
//                c[cur]  = i;
//                vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 1; //表示这位 已经占上了
//                search2(cur+1);
//                vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 0; //搜不到或者搜完了 回溯!!!
//             }
//        }
//    }
//}
//
//int main(){
//    memset(vis,0, sizeof(vis));
//    cin>>n;
//    search2(0);//  real tracingback
//    cout<<"count: "<<tot<<endl;
//
//}