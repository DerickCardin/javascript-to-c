#include<cs50.h>
#include<stdio.h>

// function factorialize(num) {
//   var value = 1;
//     if(num === 1 || num ===0) {
//       return value;
//     } else {
//       for(var i = 1; i<num; i++) {
//         value *= i;
//       }
//       return num * value;
//   }
// }
// factorialize(5);
int main(void){
    int num = get_int("Number: ");
    long long value = 1;
    if(num == 1 || num == 0){
        printf("%lli\n", value);
    } else {
        for(int i = 1; i < num; i++){
            value *= i;
        }
        printf("%lli\n", num * value);
    }

}