//
// Created by 客人用户 on 2019-04-22.
//

#ifndef DS_LINKLIST_H
#define DS_LINKLIST_H

#include <iostream>
#include "LinerList.h"
using namespace std;

/**
 * 节点类
 * @tparam T
 */
template <class T>
class Node{
    public:
        T date;
        Node* next;
};

/**
 * 单向链表类
 * @tparam T
 */
template <class T>
class LinkList : LinerList<T>{

    public:
        LinkList();

        virtual ~LinkList();

        bool destroy() override;

        bool isEmpty() override;

        int length() override;

        void display() override;

        bool getElem(int i, T &e) override;

        int locateElem(T e) override;

        bool insert(int i, T e) override;

        bool delElem(int i, T &e) override;

    private:
        /**
         * 头结点，不用于存实际数据
         */
        Node<T>* header;
        /**
         * 链表长度
         */
         int len;
};

/**
 * 销毁链表（不删除头结点）
 * @tparam T
 * @return 
 */
template<class T>
bool LinkList<T>::destroy() {
    return false;
}

/**
 * 判断链表是否为空
 * @tparam T
 * @return
 */
template<class T>
bool LinkList<T>::isEmpty() {
    return len == 0;
}

/**
 * 返回链表长度
 * @tparam T
 * @return
 */
template<class T>
int LinkList<T>::length() {
    return len;
}

/**
 * 输出链表
 * @tparam T
 */
template<class T>
void LinkList<T>::display() {

}

/**
 * 获取指定序号的元素，并通过参数e回传元素值
 * @tparam T
 * @param i
 * @param e 用于回传元素值
 * @return
 */
template<class T>
bool LinkList<T>::getElem(int i, T &e) {
    return false;
}

/**
 * 获取指定元素值的元素序号
 * @tparam T
 * @param e 元素值
 * @return
 */
template<class T>
int LinkList<T>::locateElem(T e) {
    return 0;
}

/**
 * 在指定位置插入特定元素
 * @tparam T
 * @param i 待插入位置
 * @param e 待插入元素
 * @return
 */
template<class T>
bool LinkList<T>::insert(int i, T e) {
    return false;
}

/**
 * 删除指定位置的元素，并回传元素值
 * @tparam T
 * @param i 待删除元素的序号
 * @param e 用于回传元素值
 * @return
 */
template<class T>
bool LinkList<T>::delElem(int i, T &e) {
    return false;
}

/**
 * 构造函数，初始化头结点，头结点不用来存实际数据
 * @tparam T
 */
template<class T>
LinkList<T>::LinkList() {
    header = new Node<T>();
    //header->date = 0;
    header->next = NULL;
    len == 0;
}

/**
 * 析构函数，释放头结点
 * @tparam T
 */
template<class T>
LinkList<T>::~LinkList() {
    //如果用户没有主动销毁链表，则自动销毁
    if(!isEmpty()){
        destroy();
    }
    delete header;
}

#endif //DS_LINKLIST_H
