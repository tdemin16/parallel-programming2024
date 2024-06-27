#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int computeX(int i) {
    return i * 1;
}

// int main() {
//     int i;
//     int N = 100;
//     int my_sum = 0, my_x, sum = 0;

// #pragma omp parallel private(my_x) firstprivate(my_sum) shared(sum)  // TODO1 //TODO3
//     {
//         my_sum = 0;
// #pragma omp for
//         for (i = 0; i < N; i++) {
//             my_x = computeX(i);
//             my_sum += my_x;
//         }

//         // TODO 2
// #pragma omp critical
//         sum += my_sum;
//     }
//     printf("Sum is %d \n", sum);
//     printf("Sum should be %d \n", (99 * 100) / 2);

//     return 0;
// }

// TODO 4

int main() {
    int N = 100;
    int i = 0;
    int my_x, sum = 0;

#pragma omp parallel for reduction(+ : sum)
    for (i = 0; i < N; i++) {
        sum += computeX(i);
    }

    printf("Sum is %d \n", sum);
    printf("Sum should be %d \n", (99 * 100) / 2);

    return 0;
}
