////
//// Created by Macbook Pro on 16/7/4.
////
////若是 重生型的 可以对每个数据出现的在标准数组 和 生成数组中已经出现的次数  生成数组中的出现次数 必须小于标准数组中的出现次数
//#include <iostream>
//using namespace std;
//
//void  print_permutation(int n,int a[], int cur){ //n代表 递归边界  即就是 要输入的n 可用全局数组代替
//    //cout<<"len: "<<sizeof(a)/ sizeof(a[0])<<endl;
//    if(cur==n){
//        //cout<< sizeof(a)<<endl;
//        cout<<a[0];
//
//        for (int i = 1; i < n; ++i) {
//            cout<<" "<<a[i];
//        }
//        cout<<endl;
//        return;
//    }
//    for (int i = 1; i <= n; ++i) {
//        bool flag = true;
//        for (int j = 0; j <cur ; ++j) {
//            if(a[j] == i) {
//                flag = false;
//                break;
//            }
//
//        }
//        if(flag){
//            a[cur]= i;
//            print_permutation(n,a,cur+1);
//        }
//    }
//
//
//}
//
//int main(){
//    int n;
//    cin>>n;
//    int a[n];
//    cout<< sizeof(a)/ sizeof(a[0])<<endl;
//    print_permutation(n,a,0);
//
//
//    return 0;
//}
