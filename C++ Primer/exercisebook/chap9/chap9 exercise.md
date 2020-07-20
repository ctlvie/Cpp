# Chap9 Exercise

### 9.1
1. list
2. deque
3. list

### 9.2
`list<deque>int>> l;`

### 9.5
list的迭代器只支持相等运算符的比较

### 9.6
vector<int>::iterator

### 9.10
1. 装有int的vector类型
2. 装有int的const vector类型
3. vector<int>::iterator
4. const vector<int>::iterator

### 9.12
前者将会拷贝整个容器，而后者可以仅仅拷贝这个容器的一部分

### 9.17
两个容器必须类型相同、元素相同且元素本身支持"<"运算符

### 9.22
插入之后将会使得迭代器失效

### 9.25
1. 什么也不会发生
2. 删除从elem1到末尾的所有元素，如果皆为尾后则什么也不会发生

### 9.29
1. 会在后面增加75个空元素
2. 会删除后面90个元素，仅保留前十个元素

### 9.32
是不合法的

### 9.35
capacity是预先分配的内存可以存放多少个元素而不需要扩大内存空间，size是实际存放的元素数目

### 9.36
不可能

### 9.37
因为list不是预先分配内存的，是每次增减之后都加减一块内存空间，分配的内存大小始终等于正在使用的元素的总占用内存大小
而array的内存是在定义时即分配好的，之后无法再改变

### 9.42
使用reverse函数先分配100个字符所需的内存空间

