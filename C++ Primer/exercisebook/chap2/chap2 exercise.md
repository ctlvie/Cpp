# Chap2 Exercise

### 2.2
三种都应选择double

### 2.3
32, 4234905243;
32, -32, 0, 0

### 2.5
(a) char, wchar\_t, string, wstring
(b) int, usigned int, long, unsigned long, 八进制, 十六进制
(c) double, float, long double
(d) int, unsigned int, double, double

### 2.6
前者是十进制，后者是八进制

### 2.7 
a. string
b. long double
c. float
d. long double

### 2.9
a. 错误，应为 `int input_value; std::cin >> input_value;`
b. 引发警告，浮点数赋值给int
c. 错误，不可以连续赋值
d. 引发警告

### 2.10
global_str的初始值为空；global_int的初始值为零；local_int的初始值为空；local_str的初始值为空；

### 2.11
a. 只定义不声明
b. 声明并定义
c. 只声明不定义

### 2.12
a, c, d是非法的

### 2.13
j = 100

### 2.14
合法，输出100 45

### 2.15
bd不合法

### 2.16
a. 合法，改变d的值为3.14159
b. 合法，把i的值赋给d
c. 合法，把d的值转换为int后赋给i
d. 合法，同c

### 2.17
10 10

### 2.20
定义并声明i，赋初始值为42；
定义指向int的指针p1，指向i；
更改p1指向对象（即i）的值为42*42；

### 2.21
a. 非法，定义的是指向double的变量，却指向了int
b. 非法，不能把int变量直接赋给int指针
c. 合法

### 2.24
p指向了int变量i的地址，因此也是int指针；lp是long指针，应指向long变量，但是却指向了int变量，因此非法

### 2.25
a. ip是指向int的指针，i是整型数，r是i的别名
b. i是整型数，ip是空指针
c. ip是指向int的指针，ip2是整型数

### 2.26
abc合法，d非法

### 2.27
a. 非法，r是引用，不可以赋值整型数
b. 合法，是常量指针
c. ！！合法
d. 合法，指向常量的常量指针
e. 合法，指向常量的指针
f. ！！非法
g. 合法，前者是一个常量，后者是一个常量引用

### 2.28
a. int是整型数，cp是指向int的常量指针，但没有初始化
b. p1是指向int的指针，p2是指向int的常量指针，但没有初始化
c. ic是int常量，但没有初始化
d. p3是指向常量的常量指针，但没有初始化
e. 是指向常量的指针，可以不初始化

### 2.29
a. 正确
b. ??
c. ??
d. 错误，p3是指向常量的常量指针

### 2.35
i是int型的常量，为42
j是int型变量，k是i的别名，也是int型常量，p是指向i的地址，是int型指针
j2是int型常量，k2是int型变量

### 2.36
a: 整型数，为4
b: 整型数，为4
c: 整型数，为4
d: int的引用，为4