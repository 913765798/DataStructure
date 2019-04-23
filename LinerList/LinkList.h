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
        Node<T>* header;//头结点
};

template<class T>
bool LinkList<T>::destroy() {
    return false;
}

template<class T>
bool LinkList<T>::isEmpty() {
    return false;
}

template<class T>
int LinkList<T>::length() {
    return 0;
}

template<class T>
void LinkList<T>::display() {

}

template<class T>
bool LinkList<T>::getElem(int i, T &e) {
    return false;
}

template<class T>
int LinkList<T>::locateElem(T e) {
    return 0;
}

template<class T>
bool LinkList<T>::insert(int i, T e) {
    return false;
}

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
}

template<class T>
LinkList<T>::~LinkList() {
    delete header;
}

#endif //DS_LINKLIST_H
