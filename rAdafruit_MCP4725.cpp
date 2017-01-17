#include "B4RDefines.h"
namespace B4R {
	void B4RAdafruit_MCP4725::Begin(Byte Address) {
		driver.begin(Address);
	}
	void B4RAdafruit_MCP4725::SetVoltage(UInt Output, bool WriteEEPROM) {
		driver.setVoltage(Output, WriteEEPROM);
	}
}