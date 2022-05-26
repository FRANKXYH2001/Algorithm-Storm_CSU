#include <iostream>
#include <list>
#include <vector>
/* vector容器和list容器都是常用的顺序容器，
 * 当需要使用数组的情况下，可以考虑使用vector容器 */

using namespace std;

void introduction_of_Sequential() {
    /*-------------------------------------------------------------------------------------*/
    /*  STL容器常用方法(method)
     *  .empty()   // 判断当前容器是否为空
     *  .size()    // 返回当前容器实际元素个数
     *  .begin()   // 返回iterator(迭代器),引用容器的第一个元素
     *  .end()     // 返回iterator(迭代器),引用容器的最后一个元素的后一个位置(边界)*/
    /*-------------------------------------------------------------------------------------*/
    /*list是双链表类模板,它的每个结点之间通过指针链接,不能随机访问元素*/
    //定义list容器的几种常用方式
    list<int> L1; // 结构为 ContainerType<DataType> ContainerName;
    list<char> L2(10); // 定义链表L2为包含10个char类型元素的构造链表
    list<double> L3(3,1.024); // 定义L3包含的3个初始元素值为1.024

    //list容器也可以由数组直接赋值:
    int arry[5] = {1,2,3,4,5};
    list<int> L4(arry,arry+5); // list<DataType> ListName(First,Last)

    //list 添加方法
    L1.push_back(1); //在L1链表尾部插入元素-> (int x=1)
    L2.pop_back(); //在L2链表尾部弹出容器的最后一个元素
    /*-------------------------------------------------------------------------------------*/
    //定义vector容器的几种常用方式(一维)
    vector<int> v1;
    vector<int> v2(10); // 规定vector容器v2的容量为10
    int n;
    v2.resize(n); // 调整当前容器v2的容量大小，使v2可容纳n个元素
    //定义二维vector容器
    vector<vector<int> > v3;
    vector<vector<int> > v4(4,vector<int>(4)); // 定义4*4容量的二维vector容器

    //vector容器的基本操作
    vector<int>::iterator itv1,itv2; // itv1数据类型是由vector<int> 定义的iterator 类型
    itv1 = v2.begin(); //返回v2容器的第一个元素对应的地址
    itv2 = v2.end(); // 返回v2容器的最后一个元素的后一个位置

    v1.push_back(1); // 在v1容器的尾部添加一个int类型的元素，值为1
    v2.insert(itv1,1024); // 在iterator itv1指向的位置前插入一个元素，值为1024
    //对于 .insert(position,value)方法, position位置对应的数据类型为iterator类型
    v2.pop_back(); // 弹出v2容器尾端的第一个元素
    int first_of_v1 = v1.front(); // 获取当前v1容器的第一个元素，返回值为vector容器定义类型
    int last_of_v1 = v1.back(); // 获取当前v1容器的最后一个元素，返回值为vector容器定义类型
    /*-------------------------------------------------------------------------------------*/

}

