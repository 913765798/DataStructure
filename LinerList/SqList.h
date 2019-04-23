//
// Created by 田孟孟 on 2019-04-21.
//

#ifndef DS_SQLIST_H
#define DS_SQLIST_H

#include "LinerList.h"

#define MaxSize 50

using namespace std;

template <class T>
class SqList: public LinerList<T>{
  public:
    SqList();

    virtual ~SqList();

    bool destroy() override;
    bool isEmpty() override;
    int length() override;
    void display() override;
    bool getElem(int i, T &e) override;
    int locateElem(T e) override;
    bool insert(int i, T e) override;
    bool delElem(int i, T &e) override;

  private:
    T data[MaxSize];
    int len;
};

/**
 * 销毁顺序表
 * @tparam T
 * @return 成功返回true，失败返回false
 */
template<class T>
bool SqList<T>::destroy() {
    len = 0;
    return true;
}

/**
 * 判断是否为空
 * @tparam T
 * @return 为空返回true，否则返回false
 */
template<class T>
bool SqList<T>::isEmpty() {
    return len == 0;
}

/**
 * 求顺序表长度
 * @tparam T
 * @return 返回长度
 */
template<class T>
int SqList<T>::length() {
    return len;
}

/**
 * 输出顺序表
 * @tparam T
 */
template<class T>
void SqList<T>::display() {
    for(int i = 0; i < len; i++){
        cout << data[i];
    }

}

/**
 * 获取指定元素的值
 * @tparam T
 * @param i
 * @param e
 * @return
 */
template<class T>
bool SqList<T>::getElem(int i, T &e) {
    if(i < 1 || i > len)//下标越界检查
        return false;
    e = data[i-1];
    return true;
}

/**
 * 求指定元素的序号
 * @tparam T
 * @param e
 * @return
 */
template<class T>
int SqList<T>::locateElem(T e) {
    for(int i = 0; i < len; i++){
        if(e == data[i])
            return i + 1;
    }
    return 0;
}

/**
 * 在指定位置插入元素
 * @tparam T
 * @param i
 * @param e
 * @return
 */
template<class T>
bool SqList<T>::insert(int i, T e) {
    if(i < 1 || i > len+1)
        return false;
    if(len == MaxSize)
        return false;
    i--;//逻辑地址转物理地址

    for(int j = len; j > i; j--){
        data[j] = data[j-1];
    }
    data[i] = e;
    len++;
    return true;
}

/**
 * 删除指定位置的元素，并回传该元素的值
 * @tparam T
 * @param i
 * @param e
 * @return
 */
template<class T>
bool SqList<T>::delElem(int i, T &e) {
    if(i < 1 || i > len)//越界检查
        return false;
    i--;

    e = data[i];//回传元素值
    while (i < len - 1){
        data[i] = data[i+1];//被删除元素后面的元素前移一位
        i++;
    }
    len--;//长度减1
    return true;
}

/**
 * 构造函数
 * @tparam T
 */
template<class T>
SqList<T>::SqList() {len = 0;}

template<class T>
SqList<T>::~SqList() {
    len = 0;
}

#endif //DS_SQLIST_H
