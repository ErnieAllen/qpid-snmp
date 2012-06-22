################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/subscription/SubscriptionTable.c \
../src/subscription/SubscriptionTable_data_access.c \
../src/subscription/SubscriptionTable_data_get.c \
../src/subscription/SubscriptionTable_data_set.c \
../src/subscription/SubscriptionTable_interface.c 

OBJS += \
./src/subscription/SubscriptionTable.o \
./src/subscription/SubscriptionTable_data_access.o \
./src/subscription/SubscriptionTable_data_get.o \
./src/subscription/SubscriptionTable_data_set.o \
./src/subscription/SubscriptionTable_interface.o 

C_DEPS += \
./src/subscription/SubscriptionTable.d \
./src/subscription/SubscriptionTable_data_access.d \
./src/subscription/SubscriptionTable_data_get.d \
./src/subscription/SubscriptionTable_data_set.d \
./src/subscription/SubscriptionTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/subscription/%.o: ../src/subscription/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


