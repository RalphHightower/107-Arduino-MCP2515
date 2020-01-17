/**
 * @brief   Arduino library for controlling the MCP2515 in order to receive/transmit CAN frames.
 * @author  Alexander Entinger, MSc / LXRobotics GmbH
 * @license LGPL 3.0
 */

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include "MCP2515_Event.h"

#include <Arduino.h>

/**************************************************************************************
 * CTOR/DTOR
 **************************************************************************************/

MCP2515_Event::MCP2515_Event(int const int_pin)
: _int_pin{int_pin}
{

}

/**************************************************************************************
 * PUBLIC MEMBER FUNCTIONS
 **************************************************************************************/

void MCP2515_Event::begin()
{
  pinMode(_int_pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(_int_pin), MCP2515_Event::onExternalEvent, FALLING);
}

void MCP2515_Event::onExternalEvent()
{
  /* TODO */
}