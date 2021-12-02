################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/comms.c \
../Core/Src/configuration.c \
../Core/Src/delay.c \
../Core/Src/fifo.c \
../Core/Src/flash.c \
../Core/Src/gpio.c \
../Core/Src/main.c \
../Core/Src/payload_camera.c \
../Core/Src/radio.c \
../Core/Src/sensorReadings.c \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/sx126x.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c \
../Core/Src/timer.c 

OBJS += \
./Core/Src/comms.o \
./Core/Src/configuration.o \
./Core/Src/delay.o \
./Core/Src/fifo.o \
./Core/Src/flash.o \
./Core/Src/gpio.o \
./Core/Src/main.o \
./Core/Src/payload_camera.o \
./Core/Src/radio.o \
./Core/Src/sensorReadings.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/sx126x.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o \
./Core/Src/timer.o 

C_DEPS += \
./Core/Src/comms.d \
./Core/Src/configuration.d \
./Core/Src/delay.d \
./Core/Src/fifo.d \
./Core/Src/flash.d \
./Core/Src/gpio.d \
./Core/Src/main.d \
./Core/Src/payload_camera.d \
./Core/Src/radio.d \
./Core/Src/sensorReadings.d \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/sx126x.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d \
./Core/Src/timer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

