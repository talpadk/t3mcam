#ifndef TASK_FACE_MILLING_H
#define TASK_FACE_MILLING_H

#include <wx/wx.h>
#include "Task.h"


class TaskFaceMilling : public Task{
 public:
  TaskFaceMilling(const wxString name);
  bool generateGCode(void);
  
 private:
  double x_, y_;
  double deltaX_, deltaY_;
  double startHeight_, endHeight_, stepDown_;
};

#endif //TASK_FACE_MILLING_H
