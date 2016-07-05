////
//// Created by Macbook Pro on 16/7/5.
////
//
//#include <iostream>
//using namespace std;
//
//int isp[1000];
//int ans[1000];
//int tot;
//int n;
////可以设施 vis[i]  作为 哈西表
//
//int vis[1000];//设置判断是否 访问过的 哈西表
//int counti = 0; //统计现在 素数表内 个数
//int is_prime(int n){
//    for (int i = 2; i <= counti/2 ; ++i) {
//        if(n % i == 0)  return 0;
//    }
//
//    return 1;
//}
//
//void dfs(int cur){
//    if(cur == n){
//        if(isp[ans[0] +ans[n-1]]){
//            tot++;
//            for (int i = 0; i < n-1; ++i) {
//                cout<<ans[i]<<" ";
//            }
//            cout<<ans[n-1]<<endl;
//        }
//    }else{
////        for (int i = 2; i <= n ; ++i) {
////            int ok = 1;
////            for (int j = 1; j < cur; ++j) {
////                if(i == ans[j]){
////                    ok = 0;
////                    break;
////                }
////            }
////            if(ok&&isp[ans[cur-1] + i]){
////                ans[cur] = i;
////                dfs(cur+1);
////            }
////        }
//        for (int i = 2; i <= n; ++i) {
//            if(!vis[i]&&isp[i+ans[cur-1]]){
//                vis[i] = 1;  //哈西表 映射
//                ans[cur] = i;  //应该可以算是 一个打印的栈
//                dfs(cur+1);
//                vis[i] = 0; // 回溯
//            }
//        }
//    }
//}
//
//int main(){
//    cin>>n;
//    for (int i = 2; i < n*2; ++i) {
//        isp[i] = is_prime(i);
//        counti++;
//    }
//    ans[0]  =  1;
//    dfs(1);
//    cout<<tot<<endl;
//
//
//    return 0;
//
//
//}