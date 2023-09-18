<img src = "assets/Banner2.PNG" align = "center">


![](https://img.shields.io/badge/Competitive-%20Programming-%23E60023.svg)
![](https://img.shields.io/badge/Programming-%20Contest-%20E60023.svg)

![GitHub stars](https://img.shields.io/github/stars/khalid586/Problem-Setting) 

## <img src = "https://cdn.dribbble.com/users/1138721/screenshots/10809828/media/478d32b2e65c8c3194b7f2154e179231.gif" align = "center" width = "60px" height = "45px"> Editorial

### Save Money
- **Bruteforce approach** 
    - You can simply run a loop from 1 to n and add all ODD numbers. Then print the sum.
    - The time complexity will be O(n). **But this will give you TLE.**
- **Optimized Approach**
    - If you observe you will notice a pattern.
    - The sum of first x ODD numbers is x<sup>2</sup>.
        - Example: 5 is the 3<sup>rd</sup> ODD number (Before that we have 1 and 3).So here x = 3.The sum of 1+3+5 = 9 which is equal to 3<sup>2</sup> or x<sup>2</sup>.
    - So you just have to identify which ODD number it is and square that to get the answer.
        - **(7 is 4<sup>th</sup> ODD number so square of 4 will give me the sum of all ODD numbers from 1 to 7, 9 is 5<sup>th</sup> ODD number so square of 5 will give me the sum of all ODD numbers from 1 to 9)** 
- [**Solution**](https://github.com/khalid586/Problem-Setting/blob/main/Solutions/Solution%5BSave%20Money%5D.cpp)

### Evenly Divisible
- If we want to get a number which will be divisible by all the given N numbers then **we just have to calculate the LCM (Least Common Multiple) (লসাগু) of those N numbers.**

- [**Solution**](https://github.com/khalid586/Problem-Setting/blob/main/Solutions/Solution%5BEvenly%20Divisible%5D.cpp)
