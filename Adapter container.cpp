#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void introduction_of_Adapter()
{
    /*--------------------------------------------------------------------------------------*/
    /*stack容器
     * C++中的栈容器和数据结构中的栈一样，具有先进后出(FILO)的特点
     * stack容器只有一个出口，即栈顶
     * 可以在栈顶插入(进栈)和删除(出栈)元素，但不允许顺序遍历*/
    //定义stack容器的常用方法
    stack<int> s1;

    //stack容器的基本方法
    s1.push(1024); // 值为1024的元素进栈
    int stack_top = s1.top(); // 返回栈顶的元素，返回的类型是栈的元素类型
    s1.pop(); // 将栈顶元素出栈
    /*--------------------------------------------------------------------------------------*/
    /*queue容器
     * C++中的队列类模板，和数据结构中的队列一样，具有先进先出(FIFO)的特点
     * queue容器不允许顺序遍历
     * 因此没有begin()/end()和rbegin()/rend()这样的用于迭代器的成员函数*/
    //定义queue容器的方法
    queue<int> q1;

    //queue容器的基本方法
    q1.push(1024); // 值为1024的元素进队列，每一个新进元素将被放在队尾
    int queue_front = q1.front(); // 返回队列的头元素，返回的类型是队列的元素类型
    int queue_back = q1.back();// 返回队列的尾元素，返回的类型是队列的元素类型
    q1.pop(); // 将队列的头元素弹出队列
    /*--------------------------------------------------------------------------------------*/
}