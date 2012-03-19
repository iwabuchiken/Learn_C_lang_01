################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_16/STOR_Chp_15/sub1_p333_parameter_pointer.c \
../Chp_16/STOR_Chp_15/sub1_preprocess_line.c \
../Chp_16/STOR_Chp_15/sub2_line_assert.c \
../Chp_16/STOR_Chp_15/sub2_p334_InputWithSpace.c \
../Chp_16/STOR_Chp_15/sub3_p309_error.c \
../Chp_16/STOR_Chp_15/sub4_p310_EmptyDirective.c 

OBJ_SRCS += \
../Chp_16/STOR_Chp_15/sub1_p333_parameter_pointer.obj \
../Chp_16/STOR_Chp_15/sub1_preprocess_line.obj \
../Chp_16/STOR_Chp_15/sub2_line_assert.obj \
../Chp_16/STOR_Chp_15/sub2_p334_InputWithSpace.obj \
../Chp_16/STOR_Chp_15/sub3_p309_error.obj \
../Chp_16/STOR_Chp_15/sub4_p310_EmptyDirective.obj 

OBJS += \
./Chp_16/STOR_Chp_15/sub1_p333_parameter_pointer.o \
./Chp_16/STOR_Chp_15/sub1_preprocess_line.o \
./Chp_16/STOR_Chp_15/sub2_line_assert.o \
./Chp_16/STOR_Chp_15/sub2_p334_InputWithSpace.o \
./Chp_16/STOR_Chp_15/sub3_p309_error.o \
./Chp_16/STOR_Chp_15/sub4_p310_EmptyDirective.o 

C_DEPS += \
./Chp_16/STOR_Chp_15/sub1_p333_parameter_pointer.d \
./Chp_16/STOR_Chp_15/sub1_preprocess_line.d \
./Chp_16/STOR_Chp_15/sub2_line_assert.d \
./Chp_16/STOR_Chp_15/sub2_p334_InputWithSpace.d \
./Chp_16/STOR_Chp_15/sub3_p309_error.d \
./Chp_16/STOR_Chp_15/sub4_p310_EmptyDirective.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_16/STOR_Chp_15/%.o: ../Chp_16/STOR_Chp_15/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


