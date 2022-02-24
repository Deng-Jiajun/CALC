> 基于 Qt C++ 编写的一个计算器  
> 主要方向放在大数的实现上，比较早的项目，GUI 部分可能已经没办法还原了

## LargeNumber
主要是对 `LargeNumber` 类实现了运算符重载，以符合计算预期  
重载的运算符包括但不限于：`<<`、`>>`、`>`、`<`、`>=`、`<=`、`==`、`!=`、`+`、`-`、`*`、`/`、`+=`、`-=`、`*=`、`/=`、`前++`、`前--`、`后++`、`后--` ……
> 运算符重载好处在于标准计算器和大数计算器在表达式运算上逻辑保持了一致性，做好泛型可以共用一套运算逻辑

## 表达式求值
具体逻辑记不得了，具体反正肯定是转化为后缀表达式，通过逐位入栈出栈求值
> 根据代码看，应该是实现了普通小数的读取（非大数），不确定有没有实现 `LargeNumber` 的小数，不过小数部分只要读出数据，运算是和 `LargeNumber` 没关系的，直接当作数字计算就好了，所以实现上没什么难度
