////
//// Created by Macbook Pro on 16/7/4.
////
////最小双基 会文数
//
//#include <iostream>
//#include <string.h>//C 字符串的头文件
//#include <string> //C++ 字符串的头文件
//using namespace std;
//
//// 得到一个数各种进制的数  应该用字符串表示
//string getNumber(int n, int base){
//    string ans = "";
//    while(n!=0){
//        int c = n% base;
//        char cc = c+'0';
//        ans += cc;
//        n = n/base;
//    }
//    return ans;
//}
//
////判断一个字符串是否为回文字符串
//bool isPalindrom(string m){
//    int len = m.length();
//    for (int i = 0; i < len/2 ; ++i) {
//        if(m.compare(i,1,m,len-1-i,1)!=0) return false;
//    }
//    return true;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    n++;
//    while(1){
//        n++;
//        int flag = 0;
//        for (int i = 2; i <= 10; ++i) {
//             string temp = getNumber(n,i);
//             if(isPalindrom(temp)) flag++;
//        }
//
//       if(flag>=2){
//           cout<<n;
//           break;
//       }
//
//    }
//
//
//    //以下对两种方法 进行测试
//
////     cout<< (isPalindrom("23432")? "yes":"no")<<endl;
////     cout<< (isPalindrom("234321")? "yes":"no");
////     cout<< getNumber(17,2);
//
//    return 0;
//}
