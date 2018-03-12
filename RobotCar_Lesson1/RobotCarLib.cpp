/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
****************************************************/

#include "RobotCar_Constants.h"
#include "RobotCar_L298N.h"
#include "RobotCarLib.h"


void RobotCarLib::Init()
{
	_motorLeft.Init(pinIN2, pinIN1, pinENA);
	_motorRight.Init(pinIN3, pinIN4, pinENB);
}

void RobotCarLib::Stop() const
{
	_motorLeft.Stop();
	_motorRight.Stop();
}


void RobotCarLib::MoveForward() const
{
	_motorLeft.MoveForward();
	_motorRight.MoveForward();
}


void RobotCarLib::MoveForward(uint8_t speed) const
{
	_motorLeft.MoveForward(speed);
	_motorRight.MoveForward(speed);
}

void RobotCarLib::MoveBackward() const
{
	_motorLeft.MoveBackward();
	_motorRight.MoveBackward();
}

void RobotCarLib::MoveBackward(uint8_t speed) const
{
	_motorLeft.MoveBackward(speed);
	_motorRight.MoveBackward(speed);
}

void RobotCarLib::TurnLeft() const
{
	_motorLeft.MoveBackward();
	_motorRight.MoveForward();
}

void RobotCarLib::TurnLeft(uint8_t speed)
{
	_motorLeft.MoveBackward(speed);
	_motorRight.MoveForward(speed);
}

void RobotCarLib::TurnRight() const
{
	_motorLeft.MoveForward();
	_motorRight.MoveBackward();
}

void RobotCarLib::TurnRight(uint8_t speed) const
{
	_motorLeft.MoveForward(speed);
	_motorRight.MoveBackward(speed);
}

void RobotCarLib::SlowTurnLeft() const
{
	_motorLeft.Stop();
	_motorRight.MoveForward();
}

void RobotCarLib::SlowTurnLeft(uint8_t speed) const
{
	_motorLeft.Stop();
	_motorRight.MoveForward(speed);
}

void RobotCarLib::SlowTurnRight() const
{
	_motorLeft.MoveForward();
	_motorRight.Stop();
}

void RobotCarLib::SlowTurnRight(uint8_t speed) const
{
	_motorLeft.MoveForward(speed);
	_motorRight.Stop();
}


