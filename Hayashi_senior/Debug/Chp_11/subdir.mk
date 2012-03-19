################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_11/sub4_p225_return_string.c \
../Chp_11/sub5_p228_use_global_variable.c 

OBJ_SRCS += \
../Chp_11/sub4_p225_return_string.obj \
../Chp_11/sub4_p225_return_string_cl.obj \
../Chp_11/sub5_p228_use_global_variable_cl.obj 

OBJS += \
./Chp_11/sub4_p225_return_string.o \
./Chp_11/sub5_p228_use_global_variable.o 

C_DEPS += \
./Chp_11/sub4_p225_return_string.d \
./Chp_11/sub5_p228_use_global_variable.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_11/%.o: ../Chp_11/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


