################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/binding/rhm010BindingTable.c \
../src/binding/rhm010BindingTable_data_access.c \
../src/binding/rhm010BindingTable_data_get.c \
../src/binding/rhm010BindingTable_data_set.c \
../src/binding/rhm010BindingTable_interface.c 

OBJS += \
./src/binding/rhm010BindingTable.o \
./src/binding/rhm010BindingTable_data_access.o \
./src/binding/rhm010BindingTable_data_get.o \
./src/binding/rhm010BindingTable_data_set.o \
./src/binding/rhm010BindingTable_interface.o 

C_DEPS += \
./src/binding/rhm010BindingTable.d \
./src/binding/rhm010BindingTable_data_access.d \
./src/binding/rhm010BindingTable_data_get.d \
./src/binding/rhm010BindingTable_data_set.d \
./src/binding/rhm010BindingTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/binding/%.o: ../src/binding/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


