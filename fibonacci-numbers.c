#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Array.prototype.last = function(){
// return this[this.length-1];
// }

// Array.prototype.secondToLast = function() {
// return this[this.length-2];
// }

// function sumFibs(num) {
// var sequence = [1,1];
// while (sequence.secondToLast() + sequence.last() <= num){
// sequence.push(sequence.secondToLast() + sequence.last());
// }
// return sequence.filter(function(num) {
// return num % 2 !== 0;
// }).reduce(function(a,b) {
// return a + b;
// });
// }
// sumFibs(4);


int sumFibs(int num);

int main()
{
    printf("%i\n", sumFibs(6));
}

int sumFibs(int num)
{
  int first = 1;
  int second = 1;
  int third = 2;
  int sum = 2;
    for (;third <= num;)
    {
        if(third % 2 != 0)
            sum += third;

        third = first + second;
        first = second;
        second = third;
        // printf("%d\n" );
    }
    return sum;
}