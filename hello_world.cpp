// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx-3.1/wx/wx.h>
#include <wx-3.1/wx/textctrl.h>
#include <wx-3.1/wx/wxprec.h>
#include <wx-3.1/wx/button.h>
#include <wx-3.1/wx/stattext.h>

#ifndef WX_PRECOMP
    #include <wx-3.1/wx/wx.h>
#endif

#include <iostream>
#include <string>

//g++ hello_world.cpp `wx-config --cxxflags --libs` -o gpCalculator --verbose
//g++ hello_world.cpp `wx-config --cxxflags --libs` -o gpCalculator --verbose && ./gpCalculator

enum {
    ID_Hello = 1,
    ID_Course_list = 2,
    ID_New_Calculation = 3,
    ID_Save_Calculation=4,
    ID_Add_Course_Button=5,
    ID_Course_Text_Box=6,
};

class GpCalculator : public wxApp {
    public:
        virtual bool OnInit();

};


class MyFrame : public wxFrame {  // defines the options on the top bar of the screen here we have:
    public:
        MyFrame();
    private:
        void OnHello(wxCommandEvent& event);  // hello option
        void OnExit(wxCommandEvent& event);  // exit option
        void OnAbout(wxCommandEvent& event);  // about option
        void OnHelp(wxCommandEvent& event); // event option

        void OnAddCourseButtonClicked(wxCommandEvent &event);
        void OnCourseTextBoxClicked(wxCommandEvent &event);

        wxDECLARE_EVENT_TABLE();

    // add course add buttons and list box

    // 100 Level
    wxString level_text = wxT("100 LEVEL");
    wxStaticText *st = new wxStaticText(this, wxID_ANY, level_text, wxPoint(60, 20), wxDefaultSize, wxALIGN_LEFT);
    wxButton *add_course_button = new wxButton(this, ID_Add_Course_Button, "Add Course", wxPoint(20, 50), wxSize(120, 50));
    wxTextCtrl *course_text_box = new wxTextCtrl(this, ID_Course_Text_Box, "", wxPoint(5, 105), wxSize(150, 30), wxTE_PROCESS_ENTER);
    wxListBox *course_list_box = new wxListBox(this, wxID_ANY, wxPoint(5, 140), wxSize(150, 300));
    wxButton *calculate_gp = new wxButton(this, wxID_ANY, "Display GP", wxPoint(42.5, 445), wxSize(75, 50));

    // 200 Level
    wxString level_text_2 = wxT("200 LEVEL");
    wxStaticText *st_2 = new wxStaticText(this, wxID_ANY, level_text_2, wxPoint(210, 20), wxDefaultSize, wxALIGN_LEFT);
    wxButton *add_course_button_2 = new wxButton(this, ID_Add_Course_Button, "Add Course", wxPoint(185, 50), wxSize(120, 50));
    wxTextCtrl *course_text_box_2 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(170, 105), wxSize(150, 30), wxTE_PROCESS_ENTER);
    wxListBox *course_list_box_2 = new wxListBox(this, wxID_ANY, wxPoint(170, 140), wxSize(150, 300));
    wxButton *calculate_gp_2 = new wxButton(this, wxID_ANY, "Display GP", wxPoint(207.5, 445), wxSize(75, 50));

    // 300 Level
    wxString level_text_3 = wxT("300 LEVEL");
    wxStaticText *st_3 = new wxStaticText(this, wxID_ANY, level_text_3, wxPoint(390, 20), wxDefaultSize, wxALIGN_LEFT);
    wxButton *add_course_button_3 = new wxButton(this, ID_Add_Course_Button, "Add Course", wxPoint(350, 50), wxSize(120, 50));
    wxTextCtrl *course_text_box_3 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(335, 105), wxSize(150, 30), wxTE_PROCESS_ENTER);
    wxListBox *course_list_box_3 = new wxListBox(this, wxID_ANY, wxPoint(335, 140), wxSize(150, 300));
    wxButton *calculate_gp_3 = new wxButton(this, wxID_ANY, "Display GP", wxPoint(372.5, 445), wxSize(75, 50));

    // 400 Level
    wxString level_text_4 = wxT("400 LEVEL");
    wxStaticText *st_4 = new wxStaticText(this, wxID_ANY, level_text_4, wxPoint(555, 20), wxDefaultSize, wxALIGN_LEFT);
    wxButton *add_course_button_4 = new wxButton(this, ID_Add_Course_Button, "Add Course", wxPoint(515, 50), wxSize(120, 50));
    wxTextCtrl *course_text_box_4 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(500, 105), wxSize(150, 30), wxTE_PROCESS_ENTER);
    wxListBox *course_list_box_4 = new wxListBox(this, wxID_ANY, wxPoint(500, 140), wxSize(150, 300));
    wxButton *calculate_gp_4 = new wxButton(this, wxID_ANY, "Display GP", wxPoint(537.5, 445), wxSize(75, 50));

    // 500 Level
    wxString level_text_5 = wxT("500 LEVEL");
    wxStaticText *st_5 = new wxStaticText(this, wxID_ANY, level_text_5, wxPoint(720, 20), wxDefaultSize, wxALIGN_LEFT);
    wxButton *add_course_button_5 = new wxButton(this, ID_Add_Course_Button, "Add Course", wxPoint(680, 50), wxSize(120, 50));
    wxTextCtrl *course_text_box_5 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(665, 105), wxSize(150, 30), wxTE_PROCESS_ENTER);
    wxListBox *course_list_box_5 = new wxListBox(this, wxID_ANY, wxPoint(665, 140), wxSize(150, 300));
    wxButton *calculate_gp_5 = new wxButton(this, wxID_ANY, "Display GP", wxPoint(702.5, 445), wxSize(75, 50));
};

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(5, MyFrame::OnAddCourseButtonClicked)
    EVT_TEXT(6, MyFrame::OnCourseTextBoxClicked)
    EVT_TEXT_ENTER(6, MyFrame::OnAddCourseButtonClicked)
wxEND_EVENT_TABLE()


wxIMPLEMENT_APP(GpCalculator);   // initiate main()

bool GpCalculator::OnInit() {  // append the OnInit() function
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;  // this is just to show successfull initialisation
}


MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "Engineering Grade Pending Calculator", wxPoint(100, 100), wxSize(820, 600)) {  // Frame of the program
    wxMenu *menuFile = new wxMenu;
    menuFile->AppendSeparator();
    menuFile->Append(wxID_NEW);
    menuFile->AppendSeparator();
    menuFile->Append(wxID_SAVE);
    menuFile->AppendSeparator();
    menuFile->Append(wxID_SAVEAS);
    menuFile->AppendSeparator();
    menuFile->Append(wxID_UNDO);
    menuFile->AppendSeparator();
    menuFile->Append(wxID_REDO);
    menuFile->AppendSeparator();

    menuFile->Append(wxID_EXIT);

    wxMenu *menuCourses = new wxMenu;
    menuCourses->Append(ID_Course_list, "&All Courses");
    menuCourses->AppendSeparator();
    menuCourses->Append(wxID_ANY, "&New Course");

    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    menuHelp->AppendSeparator();
    menuHelp->Append(wxID_HELP);

    wxMenuBar *menuBar = new wxMenuBar;  // create the menubar where menus would live

    // append menus to the menubar
    menuBar->Append(menuFile, "&File");  
    menuBar->Append(menuCourses, "&Course");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_MENU, &MyFrame::OnHelp, this, wxID_HELP);

}

void MyFrame::OnExit(wxCommandEvent& event) {
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent& event) {
    wxMessageBox("This is a programme for calculating the GP of an Engineering student at the Univesity of Benin.",
                 "GP Calculator V0.0.1", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent& event) {
    wxLogMessage("Hello world from wxWidgets!");
}

void MyFrame::OnHelp(wxCommandEvent& event) {
    wxMessageBox("For help on how to use this programme, please use the manual");
}

void MyFrame::OnAddCourseButtonClicked(wxCommandEvent& event)
{
    if (course_text_box->GetValue() == "") {
        event.Skip();
    }

    else {
        course_list_box->AppendString(course_text_box->GetValue().Upper());  // record the courses in upper case
        event.Skip();
    };
}

void MyFrame::OnCourseTextBoxClicked(wxCommandEvent& event)
{
    course_text_box->SetMaxLength(6);
}
