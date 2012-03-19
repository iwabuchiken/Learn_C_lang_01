################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Chp_18/STOR_Chp_18/subdir.mk
-include Chp_18/subdir.mk
-include Chp_17/STOR_Chp_17/subdir.mk
-include Chp_17/subdir.mk
-include Chp_16/STOR_Chp_15/subdir.mk
-include Chp_16/subdir.mk
-include Chp_15/STOR_Chp_15/subdir.mk
-include Chp_15/subdir.mk
-include Chp_12/STOR_Chp_12/subdir.mk
-include Chp_12/subdir.mk
-include Chp_11/STOR_Chp_12/subdir.mk
-include Chp_11/subdir.mk
-include Chp_10/STOR_Chp_10/subdir.mk
-include Chp_10/subdir.mk
-include Chp_05/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: libHayashi_senior.a

# Tool invocations
libHayashi_senior.a: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Archiver'
	ar -r  "libHayashi_senior.a" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ARCHIVES) libHayashi_senior.a
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
