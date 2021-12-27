# strnum (String to Number function)
You don't actually use this function, use stof, stod, stoi, stol, etc from 'string' library to convert a string to a number.




### Description
What this function does is like stod function, since the type of the function (strnum) or return value of the function is 'double' data type. There is no special about this code, but if you curious then go ahead and see how this code convert string to number.

The output of this function might be **inacurate** because the 'type or return value' of the function itself, it is a floating point/decimal number/double data type.
Computer can't always represent floating point accurately.

For example :
  - Computer might represent 3 as the number 2.99999999999999 or the number 3.000000000000001, due to limitation on number storage structure fractions on the computer.




### Input and output program
Maximum number given to the input is 2999999999 (10 digit number). You can input 2999999999.735554 if it's a Decimal Number. If more than that, it will give you a random number

Main code and input :
```
int main() {
  string s = "346234.332";
  double num1 = strnum(s);
  int num2 = strnum(s);
  cout << num1 << "\n" << num2 << endl;
  return 0;
}
```
Output :
```
346234.332
346234
```

Main code and input 2 :
```
int main() {
  string s;
  cin >> s; // given input -2999999999
  cout << strnum(s) << endl;
  s = "-542342.235321432454";
  cout << strnum(s) << endl;
  return 0;
}
```
Output 2 :
```
-2999999999
-542342.235321432352
```



### Closing
Regarding the above description, I may be giving wrong information, I am stil learning the basic programming and somehow built this function.

All credit goes to google translate, thanks google translate.
