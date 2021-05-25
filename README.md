# design_patterns_cpp
* 设计模式范例整理

* 面向对象设计最大的优势在于：抵御变化，尽可能多的复用，把变化所带来的影响降为最小

* 设计原则是基础（根基），通过原则可以实现不同的模式，以原则为基础

* 设计模式中的改变和不改变（稳定和不稳定），具体体现在编译时复用（稳定），运行时变化（不稳定）

### 设计原则：
1. 依赖倒置原则（DIP）
    * 高层模块（稳定）不应该依赖于低层模块（变化），二者都应该依赖于抽象（稳定）
    * 抽象（稳定）不应该依赖于细节变化（变化），实现细节应该依赖于抽象（稳定）

2. 开放封闭原则（OCP）
    * 对扩展开放，对更改封闭
    * 类模块应该是可扩展的，但是不可修改

3. 单一职责原则（SRP）
    * 一个类应该仅有一个引起它变化的原因
    * 变化的方向隐含着类的责任

4. Liskov替换原则（LSP）
    * 子类必须能够替换它们的基类（IS-A）
    * 继承表达类型抽象

5. 接口隔离原则（ISP）
    * 不应该强迫客户程序依赖它们不用的方法
    * 接口应该小而完备

6. 优先使用对象组合，而不是类继承
    * 类继承通常为“白箱复用”，对象组合通常为“黑箱复用”
    * 继承在某种程度上破坏了封装性，子类父类偶尔度高
    * 而对象组合则只要求被组合的对象具有良好定义的接口，耦合度低

7. 封装变化点
    * 使用封装来创建对象之间的分界层，让设计者可以在分界层一侧进行修改，而不会对另一侧产生不良的影响，从而实现层次间的松耦合

8. 针对接口编程，而不是针对实现编程
    * 不将变量类型声明为某个特定的具体类，而是声明为某个接口
    * 客户程序无需获知对象的具体类型，只需要知道对象所具有的接口
    * 减少系统中各部分的依赖关系，从而实现“高内聚、松耦合”的类型设计方案

### 重构关键技法：
* 静态 -> 动态
* 早绑定 -> 晚绑定
* 继承 -> 组合
* 编译时依赖 -> 运行时依赖
* 紧耦合 -> 松耦合

----------------------
### 模式分类:
>**1. 组建协作模式：**
*现代软件专业分工之后的第一个结果是“框架与应用程序的划分”，“组件协作”模式通过晚期绑定，来实现框架与应用程序间的松耦合，是二者之间协作时常用的模式。*
* Template Method
* Strategy
* Observer

>**2. “单一职责”模式：**
*在软件组件的设计中，如果责任划分不清晰，使用继承得到的结果往往是随着需求的变化子类急剧膨胀，同时充斥着重复代码，这时候的关键是划清责任。*
* Decorator
* Bridge

>**3. “对象创建”模式：** 
*通过“对象创建”模式绕开new，来避免对象（new）过程中所导致的紧耦合（依赖具体类），从而支持对象创建的稳定。它是接口抽象之后的第一部工作。*
* Factory Method
* Abstract Factory
* Prototype
* Builder
