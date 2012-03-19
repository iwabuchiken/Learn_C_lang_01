################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_15/STOR_Chp_15/sub1_preprocess_line.c \
../Chp_15/STOR_Chp_15/sub2_line_assert.c \
../Chp_15/STOR_Chp_15/sub3_p309_error.c \
../Chp_15/STOR_Chp_15/sub4_p310_EmptyDirective.c 

OBJ_SRCS += \
../Chp_15/STOR_Chp_15/sub1_preprocess_line.obj \
../Chp_15/STOR_Chp_15/sub2_line_assert.obj \
../Chp_15/STOR_Chp_15/sub3_p309_error.obj \
../Chp_15/STOR_Chp_15/sub4_p310_EmptyDirective.obj 

OBJS += \
./Chp_15/STOR_Chp_15/sub1_preprocess_line.o \
./Chp_15/STOR_Chp_15/sub2_line_assert.o \
./Chp_15/STOR_Chp_15/sub3_p309_error.o \
./Chp_15/STOR_Chp_15/sub4_p310_EmptyDirective.o 

C_DEPS += \
./Chp_15/STOR_Chp_15/sub1_preprocess_line.d \
./Chp_15/STOR_Chp_15/sub2_line_assert.d \
./Chp_15/STOR_Chp_15/sub3_p309_error.d \
./Chp_15/STOR_Chp_15/sub4_p310_EmptyDirective.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_15/STOR_Chp_15/%.o: ../Chp_15/STOR_Chp_15/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


