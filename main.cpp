//#include <iostream>
//
//using namespace std;
//
//int main() {
//    cout << "Hello, World!" << endl;
//    return 0;
//}

//暴力求解法 本质 就是枚举  枚举所有可能的情况  进行优化   人工判断出  不可能的几类情况
// 用递归的思想 枚举排列所有的信息 生成全部的序列    next_permutation
// 主要是直接遍历  和递归  直接遍历 需要生成 所有情况一一检查  而在递归构造中生成和检查的过程可以有机的结合起来
//回溯法  本质:对解答数 的 深度优先遍历