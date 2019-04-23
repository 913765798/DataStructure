//
// Created by 田孟孟 on 2019-04-22.
//

#ifndef DS_LINERLIST_H
#define DS_LINERLIST_H


template<class T> class LinerList {
public:
    /**
     * 销毁线性表
     * @return 成功返回true，失败返回false
     */
    virtual bool destroy() = 0;

    /**
     * 判断线性表是否为空
     * @return 为空返回true，不为空返回false
     */
    virtual bool isEmpty() = 0;

    /**
     * 返回线性表的长度
     * @return
     */
    virtual int length() = 0;

    /**
     * 输出线性表
     */
    virtual void display() = 0;

    /**
     * 获取线性表中某个元素的值
     * @param i 待求元素的序号
     * @param e 回传元素的值
     * @return 成功返回true，失败返回false
     */
    virtual bool getElem(int i, T &e) = 0;

    /**
     * 根据元素值求元素序号
     * @param e 待查找元素的值
     * @return 查找到返回对应元素的序号，否则返回0
     */
    virtual int locateElem(T e) = 0;

    /**
     * 插入元素
     * @param i 插入元素的位置
     * @param e 插入元素的值
     * @return 成功返回true，失败返回false
     */
    virtual bool insert(int i, T e) = 0;

    /**
     * 删除指定元素
     * @param i 待删除元素的序号
     * @param e 回传待删除元素的值
     * @return 成功返回true，失败返回false
     */
    virtual bool delElem(int i, T &e) = 0;
};


#endif //DS_LINERLIST_H
