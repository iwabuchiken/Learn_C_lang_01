################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_17/sub4_list_17-5.c \
../Chp_17/sub4_tlib.c \
../Chp_17/sub5_p367_VariableLengthParameter.c \
../Chp_17/sub6_p369_VariableLengthParameter_VariableTypes.c 

OBJ_SRCS += \
../Chp_17/sub4_list_17-5.obj \
../Chp_17/sub5_p367_VariableLengthParameter.obj \
../Chp_17/sub6_p369_VariableLengthParameter_VariableTypes.obj 

OBJS += \
./Chp_17/sub4_list_17-5.o \
./Chp_17/sub4_tlib.o \
./Chp_17/sub5_p367_VariableLengthParameter.o \
./Chp_17/sub6_p369_VariableLengthParameter_VariableTypes.o 

C_DEPS += \
./Chp_17/sub4_list_17-5.d \
./Chp_17/sub4_tlib.d \
./Chp_17/sub5_p367_VariableLengthParameter.d \
./Chp_17/sub6_p369_VariableLengthParameter_VariableTypes.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_17/%.o: ../Chp_17/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


