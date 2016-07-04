//
// Created by Macbook Pro on 16/7/4.
//

#include <iostream>
using namespace std;

void print_subset_addconstruct(int n,int a[],int cur){
    for (int i = 0; i < cur; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int s = cur ? a[cur-1]+1:0;
    for (int j = s; j < n ; ++j) {
        a[cur] = j;
        print_subset_addconstruct(n,a,cur+1);
        //若后面没有了 ,自然也就不需要便利了
    }
}
//位向量发 :  哈西映射 存储 判断该整数元素  是否被选取


//二进制选取  按照位的计算来选去元素
void print_subset_binary(int n,int s){  //n表示那个全局的输入量n  s表示 递归赠量
    for (int i = 0; i < n; ++i) {
        if(s&(1<<i)) cout<<i+1<<" ";  //利用c语言中 非为真的特点
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <(1<<n); ++i) {
        print_subset_binary(n,i);
    }
    return  0;
}