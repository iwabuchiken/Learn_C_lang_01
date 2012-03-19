################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_18/STOR_Chp_18/sub1_stderr.c 

OBJ_SRCS += \
../Chp_18/STOR_Chp_18/sub1_stderr.obj \
../Chp_18/STOR_Chp_18/sub2_feof.obj 

OBJS += \
./Chp_18/STOR_Chp_18/sub1_stderr.o 

C_DEPS += \
./Chp_18/STOR_Chp_18/sub1_stderr.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_18/STOR_Chp_18/%.o: ../Chp_18/STOR_Chp_18/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


