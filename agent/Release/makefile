################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/vhost/subdir.mk
-include src/traps/subdir.mk
-include src/system/subdir.mk
-include src/subscription/subdir.mk
-include src/state/subdir.mk
-include src/session/subdir.mk
-include src/queue/subdir.mk
-include src/memory/subdir.mk
-include src/link/subdir.mk
-include src/exchange/subdir.mk
-include src/connection/subdir.mk
-include src/cluster/subdir.mk
-include src/broker/subdir.mk
-include src/bridge/subdir.mk
-include src/binding/subdir.mk
-include src/agent/subdir.mk
-include src/acl/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: qpid-snmp

# Tool invocations
qpid-snmp: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++  -o "qpid-snmp" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) qpid-snmp
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
