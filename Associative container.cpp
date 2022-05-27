#include <iostream>
#include <set>
#include <map>
/* 关联容器的元素存储都是有序的
 * 关联容器可以用来实现平衡二叉树，即满足:
 * 每个元素都有一个父节点和两个子节点，
 * 左子树的所有元素都比自己小，右子树的所有元素都比自己大.
 * 关联容器中的每个元素有一个key(关键字),通过key来存储和读取元素,
 * 这些关键字可能与元素在容器中的位置无关*/

using namespace std;

void introduction_of_Association()
{
    /*--------------------------------------------------------------------------------------*/
    /*在快速检索，去重和排序操作情况下，可以考虑使用set容器
     * set存储的是一组有序的无重复的元素，即元素的关键字(key)是唯一的
     * 而multiset允许存储有重复的元素*/
    //定义set/multiset容器的常用方法
    set<int> s1;
    set<int,std::greater<int> > s2; // 定义一个顺序递减的set容器s2
    //set<DataType,operator<DataType> >   //operator为排序规则，默认为std::less<DataType>
    multiset<int> s3; // 定义一个默认递增的multiset，存储的元素的关键字可重复
    multiset<int,std::greater<int> >s4; // 定义一个顺序递减的multiset容器s4

    //set/multiset的添加方法
    s1.insert(1024);
    s3.insert(10); // set/multiset 插入元素方法

    //set/multiset的基本操作
    s1.find(1024); // 查找s1中值为1024的元素，若在容器中则返回该元素的迭代器，否则返回end()位置
    s1.erase(1024); // 删除s1中值为1024的元素，
    /*--------------------------------------------------------------------------------------*/
}