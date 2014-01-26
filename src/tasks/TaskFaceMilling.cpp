#include "TaskFaceMilling.h"

TaskFaceMilling::TaskFaceMilling(const wxString name) :
  Task(name) {
  x_=0;
  y_=0;
  deltaX_=10;
  deltaY_=10;
  startHeight_ = 6;
  endHeight_ = 3;
  stepDown_ = 1;
}


bool TaskFaceMilling::generateGCode(){
  wxString *code = new wxString();

  *code += _("F100\n");

  setGCode(code);

  return true;
}
