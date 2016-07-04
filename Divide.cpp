////
//// Created by Macbook Pro on 16/7/4.
////
//
//#include <iostream>
//using namespace std;
////构造 判断是否相同的方法
//bool  nosame(int n){
//    int a[10];
//    memset(a,-1, sizeof(a));
////    for (int i = 0; i < 5; ++i) {
////        a[i] = n%10;
////        n = n/10;
////    }
////    for (int i = 0; i < 5; ++i) {
////        for (int j = i+1; j < 5 ; ++j) {
////            if(a[i]==a[j])
////                return false;
////        }
////    }                   //用哈西法来判断是否相同
//    for (int i = 0; i < 5; ++i) {
//        int temp  =  n % 10;
//        if(a[temp]!=-1)   return false;
//
//        n = n/10;
//        a[temp]=temp;
//
//    }
//    return true;
//
//}                               //运用哈西法 直接判断 是否又重复的数字
//bool nosame(int m ,int n){
//    int a[10];
//    memset(a,-1, sizeof(a));
//    for (int i = 0; i < 5; ++i) {
//        int temp = m % 10;
//        if(a[temp]!=-1) return false;
//
//        m=m/10;
//        a[temp] = temp;
//    }
//    for (int i = 0; i < 5; ++i) {
//        int temp  =  n % 10;
//        if(a[temp]!=-1)   return false;
//
//        n = n/10;
//        a[temp]=temp;
//
//    }
//    return true;
//
//}
//
//int main(){
//    int n;
//    cin>>n; //输入 要判断的数
//    int divisor =  1234;//最小的可能符合条件的数就是01234
//    int dividend;
//    while(divisor<50000){
//        if(nosame(divisor)){
//            dividend = n * divisor;
//            if(dividend<100000&&nosame(dividend,divisor)){
//                if(dividend<10000) cout<<"0"<<dividend;
//                else cout<<dividend;
//                cout<<"/";
//                if(divisor<10000) cout<<"0"<<divisor;
//                else cout<<divisor;
//                cout<<endl;
//
//            }
//        }
//        divisor++;
//    }
//    return 0;
//}