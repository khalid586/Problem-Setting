<img src = "assets/Banner2.PNG" align = "center" width = "800px" height = "450px">

## <img src = "https://cdn.dribbble.com/users/1138721/screenshots/10809828/media/478d32b2e65c8c3194b7f2154e179231.gif" align = "center" width = "60px" height = "45px"> Editorial

### Save Money
- **Bruteforce approach** 
    - You can simply run a loop from 1 to n and add all ODD numbers. Then print the sum.
    - The time complexity will be O(n). **But this will give you TLE.**
- **Optimized Approach**
    - If you observe you will notice a pattern.
    - The sum of first I ODD numbers is I<sup>2</sup>.
        - Example: 5 is the 3<sup>rd</sup> ODD number (Before that we have 1 and 3).So here I = 3.The sum of 1+3+5 = 9 which is equal to 3<sup>2</sup> or I<sup>2</sup>.
    - So you just have to identify which ODD number it is and square that to get the answer.(7 is 4<sup>th</sup> ODD number , 9 is 5<sup>th</sup> ODD number and so on) 
- [**Solution**]()

### Evenly Divisible
- **If we want to get a number which will be divisible by all the given N numbers then we just have to calculate the LCM (Least Common Multiple) (লসাগু) of those N numbers.**

- [**Solution**]()