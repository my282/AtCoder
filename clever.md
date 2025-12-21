# 賢!って思った関数とか考え方をメモする場所
(こんなのも思いつかないのかよとか言わないでね)

## 整数nの各桁の和を求める関数
```cpp
int calc(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
```

https://drken1215.hatenablog.com/entry/2025/01/29/123022

##