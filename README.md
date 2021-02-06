# Light-MD5
A very fast, simple, and optimized md5 alghorithm in c++ with static libs.  
[Original code](https://gist.github.com/creationix/4710780)

**Do you like this project? Support it by donating**

- ![Paypal](https://raw.githubusercontent.com/reek/anti-adblock-killer/gh-pages/images/paypal.png) Paypal: [Donate](https://www.paypal.com/donate?hosted_button_id=XQ8QUEME5JZMN) or [paypal.me/michelerenzullo](https://paypal.me/michelerenzullo)
- ![btc](https://raw.githubusercontent.com/reek/anti-adblock-killer/gh-pages/images/bitcoin.png) Bitcoin: 1K9RF3s4aocmaRbh2Zu2FuHjrcg5BNeDxU


## FEATURES:
* input: char[] or uint8_t[] or string, see examples inside intmain.cpp
* output: string md5


## USAGE:
1) You can include the header, insert into your project lightmd5.cpp and compile together(see intmain.cpp) 

```Shell 
$ g++ intmain.cpp lightmd5.cpp -o lightmd5.exe -Os -s
```

2) Or you can include the header and use static libs: you have to copy "a" files inside lib folder of your compiler and add option "-llightmd5" (or "-llightmd5_32")

```Shell 
$ g++ intmain.cpp -llightmd5(or -llightmd5_32 -m32) -o lightmd5.exe -Os -s
```

