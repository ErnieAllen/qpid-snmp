################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/bridge/rhm010BridgeTable.c \
../src/bridge/rhm010BridgeTable_data_access.c \
../src/bridge/rhm010BridgeTable_data_get.c \
../src/bridge/rhm010BridgeTable_data_set.c \
../src/bridge/rhm010BridgeTable_interface.c 

OBJS += \
./src/bridge/rhm010BridgeTable.o \
./src/bridge/rhm010BridgeTable_data_access.o \
./src/bridge/rhm010BridgeTable_data_get.o \
./src/bridge/rhm010BridgeTable_data_set.o \
./src/bridge/rhm010BridgeTable_interface.o 

C_DEPS += \
./src/bridge/rhm010BridgeTable.d \
./src/bridge/rhm010BridgeTable_data_access.d \
./src/bridge/rhm010BridgeTable_data_get.d \
./src/bridge/rhm010BridgeTable_data_set.d \
./src/bridge/rhm010BridgeTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/bridge/%.o: ../src/bridge/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

