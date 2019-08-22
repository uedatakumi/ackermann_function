# Ackermann function

## Mathematical definition

```
ack: N * N -> N

ack(0, n) = n + 1
ack(m, 0) = ack(m - 1, 1)
ack(m, n) = ack(m - 1, ack(m, n - 1))
```

## Haskell

```
$ ghci ackermann.hs
*Main> ack 1 1
3
```

## Ruby

```
$ irb
irb(main):001:0> load './ackermann.rb'
=> true
irb(main):002:0> ack(1, 1)
=> 3
```

## C

compile
```
$ gcc ackermann.c
```

execution
```
$ ./a.out
m = 1
n = 1
ack(1, 1) = 3
```
