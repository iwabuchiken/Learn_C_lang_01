################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_16/sub3_p335_scanf_percent_c.c \
../Chp_16/sub4_p335_scanf_getchar.c 

OBJ_SRCS += \
../Chp_16/sub3_p335_scanf_percent_c.obj \
../Chp_16/sub4_p335_scanf_getchar.obj 

OBJS += \
./Chp_16/sub3_p335_scanf_percent_c.o \
./Chp_16/sub4_p335_scanf_getchar.o 

C_DEPS += \
./Chp_16/sub3_p335_scanf_percent_c.d \
./Chp_16/sub4_p335_scanf_getchar.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_16/%.o: ../Chp_16/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


