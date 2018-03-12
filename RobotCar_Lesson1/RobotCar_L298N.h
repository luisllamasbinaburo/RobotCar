/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
****************************************************/

#ifndef _ROBOTCAR_L298N_h
#define _ROBOTCAR_L298N_h

#include <Arduino.h>

class RobotCar_L298N
{
public:
	void Init(int pinIN1, int pinIN2, int pinENA);
	void Stop() const;
	void MoveForward() const;
	void MoveForward(uint8_t speed) const;
	void MoveBackward() const;
	void MoveBackward(uint8_t speed) const;

private:
	int8_t _pinIN1;
	int8_t _pinIN2;
	int8_t _pinENA;
};

#endif

