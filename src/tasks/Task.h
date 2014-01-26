#ifndef TASK_H
#define TASK_H

#include <wx/wx.h>

class Task {
 public:
  virtual ~Task();
  const wxString getName(void);
  const wxString *getGCode(void);
  void deleteGCode(void);
  virtual bool generateGCode(void)=0;

 protected:
  Task(const wxString name);

  void setGCode(const wxString *gCode);

 private:
  wxString name_;
  const wxString *gCode_;
};

#endif //TASK_H
