# CUDA Lab Vector Addition with UVM
In this version of vector addition we used the unified memory which simplifies a lot the code but results in lower performance.
Before accessing the result we need to wait all threads to finish, thus we need a `cudaDeviceSynchronize()`.