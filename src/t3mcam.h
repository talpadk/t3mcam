#include <wx/wx.h>
#include "Task.h" 

class t3mcamApp: public wxApp {
 public:
  bool OnInit();
};

class AppFrame: public wxFrame {
 public:
  AppFrame(const wxString& title);
};
