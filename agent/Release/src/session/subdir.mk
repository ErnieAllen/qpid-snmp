################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/session/SessionTable.c \
../src/session/SessionTable_data_access.c \
../src/session/SessionTable_data_get.c \
../src/session/SessionTable_data_set.c \
../src/session/SessionTable_interface.c 

OBJS += \
./src/session/SessionTable.o \
./src/session/SessionTable_data_access.o \
./src/session/SessionTable_data_get.o \
./src/session/SessionTable_data_set.o \
./src/session/SessionTable_interface.o 

C_DEPS += \
./src/session/SessionTable.d \
./src/session/SessionTable_data_access.d \
./src/session/SessionTable_data_get.d \
./src/session/SessionTable_data_set.d \
./src/session/SessionTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/session/%.o: ../src/session/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


