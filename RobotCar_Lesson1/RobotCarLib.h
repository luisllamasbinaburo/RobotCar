/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
****************************************************/

#ifndef _ROBOTCARLIB_h
#define _ROBOTCARLIB_h

#include "Arduino.h"
#include "RobotCar_L298N.h"

class RobotCarLib
{
public:
	void Init();

	void Stop() const;

	void MoveForward() const;
	void MoveForward(uint8_t speed) const;
	void MoveBackward() const;
	void MoveBackward(uint8_t speed) const;

	void TurnLeft() const;
	void TurnLeft(uint8_t speed);
	void TurnRight() const;
	void TurnRight(uint8_t speed) const;

	void SlowTurnLeft() const;
	void SlowTurnLeft(uint8_t speed) const;
	void SlowTurnRight() const;
	void SlowTurnRight(uint8_t speed) const;


private:
	RobotCar_L298N _motorLeft;
	RobotCar_L298N _motorRight;
};

#endif

