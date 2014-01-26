//#exe 

#include "t3mcam.h"
#include "TaskFaceMilling.h"


IMPLEMENT_APP(t3mcamApp)

bool t3mcamApp::OnInit()
{
  AppFrame *frame = new AppFrame(_("t3mcam"));
  frame->Show( true );
  return true;
}

AppFrame::AppFrame(const wxString& title)
: wxFrame(NULL, wxID_ANY, title, wxPoint(50, 50), wxSize(450, 340) ) {
}



