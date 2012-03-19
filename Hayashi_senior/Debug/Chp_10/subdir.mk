################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_10/main.c \
../Chp_10/sub4_p184_pointer_pointer_list_10-7.c 

OBJ_SRCS += \
../Chp_10/sub4_p184_pointer_pointer_list_10-7.obj 

OBJS += \
./Chp_10/main.o \
./Chp_10/sub4_p184_pointer_pointer_list_10-7.o 

C_DEPS += \
./Chp_10/main.d \
./Chp_10/sub4_p184_pointer_pointer_list_10-7.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_10/%.o: ../Chp_10/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


