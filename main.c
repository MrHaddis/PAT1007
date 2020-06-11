#include<stdio.h>
#include<math.h>

//注意这个array一定要在全局定义，局部定义的话最后一个会测试不过
//原因为：对于全局变量和局部变量，这两种变量存储的位置不一样。
//全局变量，是存储在内存中的静态区（static）
//而局部变量，则是存储在栈区（stack）。
//推测可能是PAT的栈比较小存不了这么多数据
int array[100000];

int main() {
    int number = 0;
    int count = 0;
    int index = 0;
    int j;
    scanf("%d", &number);
    //2开始算素数
    for (int i = 2; i <= number; i++) {
        //开根算素数
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                break;
        }
        //这里的大于 说明上面的循环没有被Break
        if (j > sqrt(i)) {
            //是素数的都放在数组里面
            array[index++] = i;
        }
    }
    //素数数组循环
    for (int k = 1; k <= number; k++) {
        //取相邻的两个数 相减 如果等于2 。则符合题目要求
        if (array[k + 1] - array[k] == 2) {
            //count则+1
            count++;
        }
    }
    //输出结果
    printf("%d", count);
    return 0;
}

