# TooManyArgs

 A assistant to free your hands



Usually installing a software from source need to clone from github.

Besides the code we need,it also clone changelog.

Example:

To clone the code only,we can use

```shell
git clone ....... --depth=1
```

But there are some disadvantages:

+ Sometimes we forget `--depth=1`

+ It's too much trouble to write so many words

That is why I created this repository.



## Warning:

`TooManyArgs`is coded in C++ and has only 72 lines of code now.

It is NOT usable at any time so don't run it with sudo.



You can customize `TooManyArgs` and configpath can be change in `TooManyArgs/src/TooManyArgs.cpp`

## Install:

~~(I do not know how to write MakeFile)~~

```shell
#Clone the repository.
git clone https://github.com/KazDelphi/TooManyArgs.git #--depth=1
#Change dictionary to TooManyArgs/src
cd TooManyArgs/src
#Build
g++ *.cpp -o tma
#If you use clang++ as complier you can:
clang++ *.cpp -o tma
#You can move  'tma' to /usr/bin/ so that you need not to write absolute path in shell. 
```

## Customize:

In `TooManyArgs/src/TooManyArgs.cpp` you can see

```c++
#define CONFIG_LIST "tma.list"
```

`tma.list` is the path of config.

You can change it as you like.

After preparing,create config file.

Config syntax:

```
NAME:
COMMAND
```

or

```
NAME:COMMAND
```

e.g.

```
clone:
/usr/bin/git clone $ --depth=1
```

`clone` is the first arg to call `tma`.`$`is the main content you want to do(`$`can be more than one).

# Use

```
tma clone https://github.com/KazDelphi/TooManyArgs.git
```

