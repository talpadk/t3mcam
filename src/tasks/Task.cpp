#include "Task.h"


Task::Task(const wxString name){
  name_ = name;
  gCode_ = 0;
}

Task::~Task(){
  deleteGCode();
}

void Task::setGCode(const wxString *gCode){
  deleteGCode();
  gCode_ = gCode;
}

const wxString Task::getName(void){
  return name_;
}
const wxString *Task::getGCode(void){
  return gCode_;
}

void Task::deleteGCode(void){
  if (gCode_!=0){
    delete gCode_;
    gCode_ = 0;
  }
}

