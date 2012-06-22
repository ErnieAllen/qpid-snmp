################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/connection/ConnectionTable.c \
../src/connection/ConnectionTable_data_access.c \
../src/connection/ConnectionTable_data_get.c \
../src/connection/ConnectionTable_data_set.c \
../src/connection/ConnectionTable_interface.c 

OBJS += \
./src/connection/ConnectionTable.o \
./src/connection/ConnectionTable_data_access.o \
./src/connection/ConnectionTable_data_get.o \
./src/connection/ConnectionTable_data_set.o \
./src/connection/ConnectionTable_interface.o 

C_DEPS += \
./src/connection/ConnectionTable.d \
./src/connection/ConnectionTable_data_access.d \
./src/connection/ConnectionTable_data_get.d \
./src/connection/ConnectionTable_data_set.d \
./src/connection/ConnectionTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/connection/%.o: ../src/connection/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


