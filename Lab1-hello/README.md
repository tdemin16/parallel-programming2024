# Lab1 Hello
In this lab we first tried the `omp_get_thread_num()` and `omp_get_num_threads()` which they respectively return the thread number of the process and the world size.
By increasing `thread_count` we can create more threads (though it is not guaranteed).
If we move `omp_get_thread_num()` and `omp_get_num_threads()` outside the parallel region, they will respectively be 0 and 1.