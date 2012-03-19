################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../C_basics/sub2_sizeof_long_short.o 

C_SRCS += \
../C_basics/sub1_fgets.c \
../C_basics/sub2_sizeof_long_short.c \
../C_basics/sub3_fgets_and_scanf.c 

OBJ_SRCS += \
../C_basics/sub1_fgets_cl.obj \
../C_basics/sub2_sizeof_long_short_cl.obj \
../C_basics/sub3_fgets_and_scanf.obj 

OBJS += \
./C_basics/sub1_fgets.o \
./C_basics/sub2_sizeof_long_short.o \
./C_basics/sub3_fgets_and_scanf.o 

C_DEPS += \
./C_basics/sub1_fgets.d \
./C_basics/sub2_sizeof_long_short.d \
./C_basics/sub3_fgets_and_scanf.d 


# Each subdirectory must supply rules for building sources it contributes
C_basics/%.o: ../C_basics/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


