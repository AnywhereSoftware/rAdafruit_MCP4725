#pragma once
#include "B4RDefines.h"
#include "Adafruit_MCP4725.h"
//~version: 1.00
namespace B4R {
	//~shortname: Adafruit_MCP4725
	class B4RAdafruit_MCP4725 {
		private:
			Adafruit_MCP4725 driver;
		public:
			void Begin(Byte Address);
			void SetVoltage(UInt Output, bool WriteEEPROM);
			
	};
}