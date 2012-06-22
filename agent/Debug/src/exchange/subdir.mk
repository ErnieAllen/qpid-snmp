################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/exchange/ExchangeTable.c \
../src/exchange/ExchangeTable_data_access.c \
../src/exchange/ExchangeTable_data_get.c \
../src/exchange/ExchangeTable_data_set.c \
../src/exchange/ExchangeTable_interface.c 

OBJS += \
./src/exchange/ExchangeTable.o \
./src/exchange/ExchangeTable_data_access.o \
./src/exchange/ExchangeTable_data_get.o \
./src/exchange/ExchangeTable_data_set.o \
./src/exchange/ExchangeTable_interface.o 

C_DEPS += \
./src/exchange/ExchangeTable.d \
./src/exchange/ExchangeTable_data_access.d \
./src/exchange/ExchangeTable_data_get.d \
./src/exchange/ExchangeTable_data_set.d \
./src/exchange/ExchangeTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/exchange/%.o: ../src/exchange/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


