################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_12/sub11_p260_SelfReferenceStruct.c \
../Chp_12/sub12_p261_ForStatementContinueCondition.c 

OBJ_SRCS += \
../Chp_12/sub11_p260_SelfReferenceStruct.obj \
../Chp_12/sub12_p261_ForStatementContinueCondition.obj 

OBJS += \
./Chp_12/sub11_p260_SelfReferenceStruct.o \
./Chp_12/sub12_p261_ForStatementContinueCondition.o 

C_DEPS += \
./Chp_12/sub11_p260_SelfReferenceStruct.d \
./Chp_12/sub12_p261_ForStatementContinueCondition.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_12/%.o: ../Chp_12/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


