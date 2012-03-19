################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_05/main.c \
../Chp_05/sub1_ex_5-3_p56.c \
../Chp_05/sub2_ex_5-4_p57.c 

OBJ_SRCS += \
../Chp_05/sub1_ex_5-3_p56.obj \
../Chp_05/sub2_ex_5-4_p57.obj 

OBJS += \
./Chp_05/main.o \
./Chp_05/sub1_ex_5-3_p56.o \
./Chp_05/sub2_ex_5-4_p57.o 

C_DEPS += \
./Chp_05/main.d \
./Chp_05/sub1_ex_5-3_p56.d \
./Chp_05/sub2_ex_5-4_p57.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_05/%.o: ../Chp_05/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


