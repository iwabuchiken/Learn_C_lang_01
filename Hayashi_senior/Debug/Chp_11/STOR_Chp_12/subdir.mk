################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Chp_11/STOR_Chp_12/sub10_p256_NestingStruct.c \
../Chp_11/STOR_Chp_12/sub11_p260_SelfReferenceStruct~v1u0.c \
../Chp_11/STOR_Chp_12/sub12_p261_ForStatementContinueCondition~v1u0.c \
../Chp_11/STOR_Chp_12/sub1_p216_address_call.c \
../Chp_11/STOR_Chp_12/sub1_p240_struct_declare.c \
../Chp_11/STOR_Chp_12/sub2_p220_multi-dimensional_array.c \
../Chp_11/STOR_Chp_12/sub2_p248_struct_reference.c \
../Chp_11/STOR_Chp_12/sub3_p221_string.c \
../Chp_11/STOR_Chp_12/sub3_p248_arrow_operator.c \
../Chp_11/STOR_Chp_12/sub4_p248_struct_pointer_instance.c \
../Chp_11/STOR_Chp_12/sub5_p250_struct_copy.c \
../Chp_11/STOR_Chp_12/sub6_p251_struct_array.c \
../Chp_11/STOR_Chp_12/sub7_p254_struct_parameter.c \
../Chp_11/STOR_Chp_12/sub8_p254_OnlyStructNameDeclared.c \
../Chp_11/STOR_Chp_12/sub9_p254_StructInstanceDeclareDefine.c 

OBJ_SRCS += \
../Chp_11/STOR_Chp_12/sub10_p256_NestingStruct.obj \
../Chp_11/STOR_Chp_12/sub1_p216_address_call.obj \
../Chp_11/STOR_Chp_12/sub1_p240_struct_declare.obj \
../Chp_11/STOR_Chp_12/sub2_p220_multi-dimensional_array.obj \
../Chp_11/STOR_Chp_12/sub2_p248_struct_reference.obj \
../Chp_11/STOR_Chp_12/sub3_p221_string.obj \
../Chp_11/STOR_Chp_12/sub3_p248_arrow_operator.obj \
../Chp_11/STOR_Chp_12/sub4_p248_struct_pointer_instance.obj \
../Chp_11/STOR_Chp_12/sub5_p250_struct_copy.obj \
../Chp_11/STOR_Chp_12/sub6_p251_struct_array.obj \
../Chp_11/STOR_Chp_12/sub7_p254_struct_parameter.obj \
../Chp_11/STOR_Chp_12/sub8_p254_OnlyStructNameDeclared.obj \
../Chp_11/STOR_Chp_12/sub9_p254_StructInstanceDeclareDefine.obj 

OBJS += \
./Chp_11/STOR_Chp_12/sub10_p256_NestingStruct.o \
./Chp_11/STOR_Chp_12/sub11_p260_SelfReferenceStruct~v1u0.o \
./Chp_11/STOR_Chp_12/sub12_p261_ForStatementContinueCondition~v1u0.o \
./Chp_11/STOR_Chp_12/sub1_p216_address_call.o \
./Chp_11/STOR_Chp_12/sub1_p240_struct_declare.o \
./Chp_11/STOR_Chp_12/sub2_p220_multi-dimensional_array.o \
./Chp_11/STOR_Chp_12/sub2_p248_struct_reference.o \
./Chp_11/STOR_Chp_12/sub3_p221_string.o \
./Chp_11/STOR_Chp_12/sub3_p248_arrow_operator.o \
./Chp_11/STOR_Chp_12/sub4_p248_struct_pointer_instance.o \
./Chp_11/STOR_Chp_12/sub5_p250_struct_copy.o \
./Chp_11/STOR_Chp_12/sub6_p251_struct_array.o \
./Chp_11/STOR_Chp_12/sub7_p254_struct_parameter.o \
./Chp_11/STOR_Chp_12/sub8_p254_OnlyStructNameDeclared.o \
./Chp_11/STOR_Chp_12/sub9_p254_StructInstanceDeclareDefine.o 

C_DEPS += \
./Chp_11/STOR_Chp_12/sub10_p256_NestingStruct.d \
./Chp_11/STOR_Chp_12/sub11_p260_SelfReferenceStruct~v1u0.d \
./Chp_11/STOR_Chp_12/sub12_p261_ForStatementContinueCondition~v1u0.d \
./Chp_11/STOR_Chp_12/sub1_p216_address_call.d \
./Chp_11/STOR_Chp_12/sub1_p240_struct_declare.d \
./Chp_11/STOR_Chp_12/sub2_p220_multi-dimensional_array.d \
./Chp_11/STOR_Chp_12/sub2_p248_struct_reference.d \
./Chp_11/STOR_Chp_12/sub3_p221_string.d \
./Chp_11/STOR_Chp_12/sub3_p248_arrow_operator.d \
./Chp_11/STOR_Chp_12/sub4_p248_struct_pointer_instance.d \
./Chp_11/STOR_Chp_12/sub5_p250_struct_copy.d \
./Chp_11/STOR_Chp_12/sub6_p251_struct_array.d \
./Chp_11/STOR_Chp_12/sub7_p254_struct_parameter.d \
./Chp_11/STOR_Chp_12/sub8_p254_OnlyStructNameDeclared.d \
./Chp_11/STOR_Chp_12/sub9_p254_StructInstanceDeclareDefine.d 


# Each subdirectory must supply rules for building sources it contributes
Chp_11/STOR_Chp_12/%.o: ../Chp_11/STOR_Chp_12/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


