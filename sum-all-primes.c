#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

// function sumPrimes(num) {
//   var range = []
// for (var i = 2; i <= num; i++){
// if(isPrimeNumber(i)){
// range.push(i);
// }
//   }

// return range.reduce(function(a, b){
// return a + b;});
// }

// function isPrimeNumber(num) {
// for(var x =2; x < num; x++){
// if(num % x === 0){
// return false;
// }
// }
// return true;
// }

// sumPrimes(10);

int sumPrimes(int num);

int isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return num > 1;
}

    int sumPrimes(int num)
    {
        int sum = 0;
        for(int i = 2; i <= num; i++)
        {
            int curNum = i;
            if(isPrime(curNum)){
                sum += curNum;
            }
        }
        return sum;
    }

int main(void)
{
   int num = get_int();
   printf("%i\n", sumPrimes(num));
}