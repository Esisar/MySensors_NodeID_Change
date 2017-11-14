#define MY_CORE_ONLY

#include <MySensors.h>
#define NEW_NODE_ID 42 // Change 42 to the new node ID you want

void setup()
{
  Serial.begin(MY_BAUD_RATE);
  Serial.print("Old node ID: ");
  uint8_t NODE_ID_ADDRESS= getNodeId();
  Serial.println(NODE_ID_ADDRESS);
  Serial.println("Writing new ID");
  hwWriteConfig(EEPROM_NODE_ID_ADDRESS, NEW_NODE_ID);
  Serial.print("New node ID: ");
  Serial.println(hwReadConfig(EEPROM_NODE_ID_ADDRESS));
}

void loop()
{
  // Nothing to do here...
}
