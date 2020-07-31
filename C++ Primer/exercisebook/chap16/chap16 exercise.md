# Chap16 Exericse

### 16.11
ListItem是一个类模板，但因为没有实例化而不是一个类型，因此不能直接使用ListItem，而应该使用`ListItem<elemType>`

### 16.17
基本没有区别，但是class容易和类的定义混淆，因此更建议使用typename，在需要一个函数的成员返回类型而不是名字时必须使用typename关键字

### 16.18
1. 非法，U之前也需要写typename关键字
2. 合法
3. 函数定义时才可以指定inline
4. 缺少函数返回类型
5. 合法

### 16.25
1. 表示不在本文件中生成实例化代码
2. 表示用Sales_data显式实例化vector模板

### 16.27
1. 用char实例化
2. 用double实例化
3. 用int实例化

### 16.33
1. const转换
2. 数组或函数到指针的转换

### 16.35
1. 合法，T的类型是char
2. 合法，T的类型是double
3. 合法，T的类型是char
4. 不合法，两者不相同

### 16.55
会陷入死循环，而最后一步只剩下cout，无法匹配，产生编译错误
