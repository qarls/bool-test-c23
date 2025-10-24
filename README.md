# Bool Test and Observations (C23)
This is a reproduction of an answer in stackoverflow originally in C++
[(Marshall, 2011)](#credits).

In needing to practice it, in addition to my knack
and nagging regard for C,
why not write a short article?

In Clang and GCC,
I test a range of integers, i.e.
$x \in [-1,2]$ 
in three test conditions:

1. Equality to true (1)
2. Equality to false (0)
3. Implicit conversion through `if`

|    | true | false | implicit |
|----|------|-------|----------|
| -1 | 0    | 0     | 1        |
| 0  | 0    | 1     | 0        |
| 1  | 1    | 0     | 1        |
| 2  | 0    | 0     | 1        |

As an aside,
my current gcc is solely able to compile without `<stdheader.h>`.
This apparently matches with C23 spec [(Seacord, 2024, pp. 99-100)](#credits).

## System Information
For reproduction purposes only.
Hostname is hidden.

``` sh
$uname -a \
&& pacman -Qs ^gcc$ | grep 1 \
&& pacman -Qs ^clang$ | grep 1
```

``` console
Linux [HOSTNAME] 6.17.4-arch2-1 #1 SMP PREEMPT_DYNAMIC Sun, 19 Oct 2025 19:21:18 +0000 x86_64 GNU/Linux
local/gcc 15.2.1+r22+gc4e96a094636-1
local/clang 21.1.4-2
```

## Credits
- Marshall, A. (March 4, 2011).
Answer to *Does true equal to 1 and false equal to 0?/*.
Stack Overflow.
[https://stackoverflow.com/a/5189081](https://stackoverflow.com/a/5189081)
- Seacord, R. C. (October 29, 2024). *Effective C, 2nd edition*. San Francisco, CA: No Starch Press.
