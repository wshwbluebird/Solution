////
//// Created by Macbook Pro on 16/7/4.
////尽管进行了 一定的优化 但是依然存在着一定的问题
//#include <iostream>
//using namespace std;
//int n;//将要输入的n设计为  全局变量
//void print_permtation(int a[],int num){
//    if(num==n) {
//        cout<<endl;
//        return;
//    }
//    for (int i = 1; i <= n; ++i) {
//         if(a[i]==0){
//             a[i] = i;
//             if(num==0)cout<<i;
//             else cout<<" "<<i;
//             print_permtation(a, num+1);
//             a[i]=0;
//         }
//    }
//}
//
//int main(){
//    cin>>n;
//    int a[n+1];
//    memset(a,0, sizeof(a));
//    print_permtation(a,0);
//
//    return 0;
//}
