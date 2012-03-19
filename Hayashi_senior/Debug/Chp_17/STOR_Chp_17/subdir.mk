################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_17/STOR_Chp_17/sub1_p360_wide_char.c \
../Chp_17/STOR_Chp_17/sub2_p362_MBLEN_MBMAX.c \
../Chp_17/STOR_Chp_17/sub3_struct_lconv.c 

OBJ_SRCS += \
../Chp_17/STOR_Chp_17/sub1_p360_wide_char.obj \
../Chp_17/STOR_Chp_17/sub2_p362_MBLEN_MBMAX.obj \
../Chp_17/STOR_Chp_17/sub3_struct_lconv.obj 

OBJS += \
./Chp_17/STOR_Chp_17/sub1_p360_wide_char.o \
./Chp_17/STOR_Chp_17/sub2_p362_MBLEN_MBMAX.o \
./Chp_17/STOR_Chp_17/sub3_struct_lconv.o 

C_DEPS += \
./Chp_17/STOR_Chp_17/sub1_p360_wide_char.d \
./Chp_17/STOR_Chp_17/sub2_p362_MBLEN_MBMAX.d \
./Chp_17/STOR_Chp_17/sub3_struct_lconv.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_17/STOR_Chp_17/%.o: ../Chp_17/STOR_Chp_17/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


