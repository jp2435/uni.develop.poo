cmake_minimum_required(VERSION 3.23)
project(desafio)

set(CMAKE_CXX_STANDARD 14)

add_executable(desafio 114412.cpp libs/Device.cpp libs/Device.h libs/Sensor.cpp libs/Sensor.h libs/UltrassoundSensor.cpp libs/UltrassoundSensor.h libs/LuminanceSensor.cpp libs/LuminanceSensor.h libs/Actuator.cpp libs/Actuator.h libs/SmartLamp.cpp libs/SmartLamp.h libs/Message.cpp libs/Message.h libs/SensorMsg.cpp libs/SensorMsg.h libs/ActuatorMsg.cpp libs/ActuatorMsg.h)
