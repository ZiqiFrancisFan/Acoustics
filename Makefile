objects_main = main.o

main : $(objects_main)
	nvcc -ccbin /usr/bin/gcc -arch=sm_50 -l=curand -l=cublas -I/opt/intel/compilers_and_libraries_2018.2.199/linux/mkl/include -lm /opt/intel/compilers_and_libraries_2018.2.199/linux/mkl\
/lib/intel64/libmkl_intel_lp64.a /opt/intel/compilers_and_libraries_2018.2.199/linux/mkl/lib/intel64/libmkl_sequential.a /opt/intel/compilers_and_libraries_2018.2.199/linux/mkl/lib/\
intel64/libmkl_core.a -lpthread -DMKL_ILP64 -m64 $(objects_main) -o main.out

main.o : main.cpp TestClass.h
	g++ -I/usr/local/cuda-9.1/include -std=c++11 -c main.cpp

clean :
	rm main.out $(objects_main)

