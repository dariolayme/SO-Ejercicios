################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Ejercicio1/Ejercicio1.c 

OBJS += \
./src/Ejercicio1/Ejercicio1.o 

C_DEPS += \
./src/Ejercicio1/Ejercicio1.d 


# Each subdirectory must supply rules for building sources it contributes
src/Ejercicio1/%.o: ../src/Ejercicio1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


