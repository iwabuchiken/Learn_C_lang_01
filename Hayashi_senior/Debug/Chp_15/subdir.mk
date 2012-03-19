################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_15/sub5_p294_DoubleSharpOperator.c \
../Chp_15/sub6_p292_SingleSharpOperator.c \
../Chp_15/sub7_p330_scanf_delimiter.c \
../Chp_15/sub8_p329_ScanConversionSignifier.c 

OBJ_SRCS += \
../Chp_15/sub5_p294_DoubleSharpOperator.obj \
../Chp_15/sub6_p292_SingleSharpOperator.obj \
../Chp_15/sub7_p330_scanf_delimiter.obj \
../Chp_15/sub8_p329_ScanConversionSignifier.obj 

OBJS += \
./Chp_15/sub5_p294_DoubleSharpOperator.o \
./Chp_15/sub6_p292_SingleSharpOperator.o \
./Chp_15/sub7_p330_scanf_delimiter.o \
./Chp_15/sub8_p329_ScanConversionSignifier.o 

C_DEPS += \
./Chp_15/sub5_p294_DoubleSharpOperator.d \
./Chp_15/sub6_p292_SingleSharpOperator.d \
./Chp_15/sub7_p330_scanf_delimiter.d \
./Chp_15/sub8_p329_ScanConversionSignifier.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_15/%.o: ../Chp_15/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


