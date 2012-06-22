################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/link/LinkTable.c \
../src/link/LinkTable_data_access.c \
../src/link/LinkTable_data_get.c \
../src/link/LinkTable_data_set.c \
../src/link/LinkTable_interface.c 

OBJS += \
./src/link/LinkTable.o \
./src/link/LinkTable_data_access.o \
./src/link/LinkTable_data_get.o \
./src/link/LinkTable_data_set.o \
./src/link/LinkTable_interface.o 

C_DEPS += \
./src/link/LinkTable.d \
./src/link/LinkTable_data_access.d \
./src/link/LinkTable_data_get.d \
./src/link/LinkTable_data_set.d \
./src/link/LinkTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/link/%.o: ../src/link/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


