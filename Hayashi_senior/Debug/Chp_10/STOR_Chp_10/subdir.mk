################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_10/STOR_Chp_10/sub1_p176_void_pointer_operation.c \
../Chp_10/STOR_Chp_10/sub2_p177_pointer_priority.c \
../Chp_10/STOR_Chp_10/sub3_p183_pointer_pointer.c 

OBJ_SRCS += \
../Chp_10/STOR_Chp_10/sub1_p176_void_pointer_operation.obj \
../Chp_10/STOR_Chp_10/sub2_p177_pointer_priority.obj \
../Chp_10/STOR_Chp_10/sub3_p183_pointer_pointer.obj 

OBJS += \
./Chp_10/STOR_Chp_10/sub1_p176_void_pointer_operation.o \
./Chp_10/STOR_Chp_10/sub2_p177_pointer_priority.o \
./Chp_10/STOR_Chp_10/sub3_p183_pointer_pointer.o 

C_DEPS += \
./Chp_10/STOR_Chp_10/sub1_p176_void_pointer_operation.d \
./Chp_10/STOR_Chp_10/sub2_p177_pointer_priority.d \
./Chp_10/STOR_Chp_10/sub3_p183_pointer_pointer.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_10/STOR_Chp_10/%.o: ../Chp_10/STOR_Chp_10/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


