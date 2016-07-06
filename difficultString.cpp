////
//// Created by Macbook Pro on 16/7/6.
////
//////困难的串
//#include<iostream>
//using namespace std;
//
////int counts=0;//统计这个是第几个了
////int n,l;
////char c[1000];
////void my_dfs(int cur) { //继续运用回溯法  //cur表示当前的位置
////    if(counts==n){
////        for (int i = 0; i < cur; ++i) {
////              cout<<c[i];
////        }
////        cout<<endl;
////        return ;
////    }else{
////        for (int i = 0; i < l ; ++i) {
////            c[cur] = i + 'A';
////            int ok = 1;
////            for (int j = cur; j > cur/2; j--) {
////                int same = 1;
////                for (int k = 0; k <= cur-j ; ++k) {
////                    if(c[j+k]!=c[j-(cur-j+1)+k])  {
////                        same = 0;
////                        break;
////                   }
////                }
////                if(same){
////                    ok = 0;
////                    break;
////                }
////            }
////            if(ok) {
////                counts++;
////                my_dfs(cur+1);
////            };
////        }
////    }
////
////}
//int cnt = 0; //表示 进入队列的数量
//int n,l;
//int s[1000];
//int dfs(int cur){
//   if(cnt++ == n ){
//       for (int i = 0; i < cur; ++i) {
//          // cout<<"S";
//           cout<<char('A'+s[i]);
//       }
//       cout<<endl;
//       return 0;
//   }else{
//       for (int i = 0; i < l ; ++i) {
//           s[cur] = i;
//           int ok = 1;
//           for (int j = 1; j*2 <= cur+1  ; ++j) {
//               int equal = 1;
//               for (int k = 0; k < j; ++k) {
//                   if(s[cur-k]!=s[cur-k-j]){
//                       equal = 0;   //这种程度的循环比较是可以接受的   明白 每重循环的意义
//                       break;
//                   }
//               }
//               if(equal){
//                   ok = 0;
//                   break;
//               }
//           }
//           if(ok){
//               if(!dfs(cur+1)) return 0;
//           }
//       }
//       return 1 ;//  搜不到  需要回溯的时候  告诉 上一级的阶段  已经搜完了  需要上一阶段作出调整
//   }
//
//
//
//}
//int main(){
//    //cin>>n>>l;//n表示 要找到第几个 字典序的  l表示 改该串由字母表前几个的字母组成
//    // my_dfs(0);
//  cin>>n>>l;
//  dfs(0);
//    return 0;
//}