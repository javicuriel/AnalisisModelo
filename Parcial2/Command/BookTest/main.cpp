
#include "LightOnCommand.hpp"
#include "Remote.hpp"
#include "Light.hpp"

int main(){
  Light light;
  LightOnCommand lightOn(&light);
  Remote remote;

  remote.setCommand(&lightOn);
  remote.clickButton();
  remote.clickButton();
}
