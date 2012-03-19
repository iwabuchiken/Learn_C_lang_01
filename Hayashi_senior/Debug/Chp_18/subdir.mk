################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_18/sub2_feof.c \
../Chp_18/sub3_p393_fgets_and_printf.c \
../Chp_18/sub4_ferror.c \
../Chp_18/sub5_p395_list--18-6_perror_strerror.c \
../Chp_18/sub6_p397_list--18-7_fread_fwrite.c 

OBJ_SRCS += \
../Chp_18/sub5_p395_list--18-6_perror_strerror.obj \
../Chp_18/sub6_p397_list--18-7_fread_fwrite.obj 

OBJS += \
./Chp_18/sub2_feof.o \
./Chp_18/sub3_p393_fgets_and_printf.o \
./Chp_18/sub4_ferror.o \
./Chp_18/sub5_p395_list--18-6_perror_strerror.o \
./Chp_18/sub6_p397_list--18-7_fread_fwrite.o 

C_DEPS += \
./Chp_18/sub2_feof.d \
./Chp_18/sub3_p393_fgets_and_printf.d \
./Chp_18/sub4_ferror.d \
./Chp_18/sub5_p395_list--18-6_perror_strerror.d \
./Chp_18/sub6_p397_list--18-7_fread_fwrite.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_18/%.o: ../Chp_18/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


