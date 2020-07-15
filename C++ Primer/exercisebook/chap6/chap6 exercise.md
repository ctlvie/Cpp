# Chap6 Exercise

### 6.2
a. 返回类型和return语句中的返回类型不相同
b. 没有定义返回类型
c. 两个形参名字和类型完全一致，且缺少一个括号
d. 缺少一个括号

### 6.16
最好增加const，设置为常量引用，防止出现问题

### 6.18
a. `bool compare(const matrix &A, const matrix &B);`
b. `vector<int>::iterator18 change_val(int A, vector<int>::iterator)`

### 6.19
a. 不合法，只可以传入一个参数
b. 合法
c. 合法
d. 合法

### 6.24
应该为`void print(const int (&ia)[10])`

### 6.36
`string (`

### 6.39
a. 第二条是非法的，因为顶层const会被忽略，无法和第一条区分开来
b. 非法，只有返回类型不同，无法写两个重载函数
c. 合法

### 6.40
a. 正确
b. 错误，默认实参只能写在最右边

### 6.41
a. 非法，ht没有默认实参
b. 合法的
c. 合法但是与原意不同

### 6.43
a. 是内联函数，应该放在头文件中
b. 是常规函数，声明放在头文件，定义放在源文件中

### 6.48
不合理

### 6.49
a. 调用两个double的函数
b. 调用一个int的函数
c. 调用两个int的函数
d. 调用两个double的函数

### 6.54
`int func(int, int);`
`vector<decltype(func)*> v;`