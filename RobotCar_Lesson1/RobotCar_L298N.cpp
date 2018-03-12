/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
****************************************************/

#include "RobotCar_L298N.h"
#include <Arduino.h>


void RobotCar_L298N::Init(int pinIN1, int pinIN2, int pinENA)
{
	this->_pinIN1 = pinIN1;
	this->_pinIN2 = pinIN2;
	this->_pinENA = pinENA;
	pinMode(_pinIN1, OUTPUT);
	pinMode(_pinIN2, OUTPUT);
	pinMode(_pinENA, OUTPUT);
}

void RobotCar_L298N::Stop() const
{
	digitalWrite(_pinIN1, LOW);
	digitalWrite(_pinIN2, LOW);
	digitalWrite(_pinENA, LOW);
}

void RobotCar_L298N::MoveForward() const
{
	digitalWrite(_pinIN1, HIGH);
	digitalWrite(_pinIN2, LOW);
	digitalWrite(_pinENA, HIGH);
}

void RobotCar_L298N::MoveForward(uint8_t speed) const
{
	digitalWrite(_pinIN1, HIGH);
	digitalWrite(_pinIN2, LOW);
	analogWrite(_pinENA, speed);
}

void RobotCar_L298N::MoveBackward() const
{
	digitalWrite(_pinIN1, LOW);
	digitalWrite(_pinIN2, HIGH);
	digitalWrite(_pinENA, HIGH);
}

void RobotCar_L298N::MoveBackward(uint8_t speed) const
{
	digitalWrite(_pinIN1, LOW);
	digitalWrite(_pinIN2, HIGH);
	analogWrite(_pinENA, speed);
}