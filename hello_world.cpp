// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wx.h>
#include <wx/textctrl.h>
#include <wx/wxprec.h>
#include <wx/button.h>
#include <wx/stattext.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <iostream>
#include <string>

//g++ hello_world.cpp `wx-config --cxxflags --libs` -o gpCalculator --verbose
//g++ hello_world.cpp `wx-config --cxxflags --libs` -o gpCalculator --verbose && ./gpCalculator

enum {
    ID_Hello = 1,
    ID_Course_list = 2,
    ID_New_Calculation = 3,
    ID_Save_Calculation = 4,
    ID_Add_Course_Button = 5,
    ID_Course_Text_Box = 6,
    ID_COURSE_ONE = 11,
    ID_COURSE_ONE_GRADE = 111,
    ID_COURSE_TWO = 12,
    ID_COURSE_TWO_GRADE = 121,
    ID_COURSE_THREE = 13,
    ID_COURSE_THREE_GRADE = 131,
    ID_COURSE_FOUR = 14,
    ID_COURSE_FOUR_GRADE = 141,
    ID_COURSE_FIVE = 15,
    ID_COURSE_FIVE_GRADE = 151,
    ID_COURSE_SIX = 16,
    ID_COURSE_SIX_GRADE = 161,
    ID_COURSE_SEVEN = 17,
    ID_COURSE_SEVEN_GRADE = 171,
    ID_COURSE_EIGHT = 18,
    ID_COURSE_EIGHT_GRADE = 181,
    ID_COURSE_NINE = 19,
    ID_COURSE_NINE_GRADE = 191,
    ID_COURSE_TEN = 110,
    ID_COURSE_TEN_GRADE = 1101,
    ID_COURSE_ELEVEN = 111,
    ID_COURSE_ELEVEN_GRADE = 1111,
    ID_COURSE_TWELVE = 12,
    ID_COURSE_TWELVE_GRADE = 1121,
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

        // void OnCourseTextBoxClicked(wxCommandEvent &event);

        wxTextCtrl *course_one;
        wxTextCtrl *course_one_grade;

        wxTextCtrl *course_two;
        wxTextCtrl *course_two_grade;

        wxTextCtrl *course_three;
        wxTextCtrl *course_three_grade;

        wxTextCtrl *course_four;
        wxTextCtrl *course_four_grade;

        wxTextCtrl *course_five;
        wxTextCtrl *course_five_grade;

        wxTextCtrl *course_six;
        wxTextCtrl *course_six_grade;

        wxTextCtrl *course_seven;
        wxTextCtrl *course_seven_grade;

        wxTextCtrl *course_eight;
        wxTextCtrl *course_eight_grade;

        wxTextCtrl *course_nine;
        wxTextCtrl *course_nine_grade;

        wxTextCtrl *course_ten;
        wxTextCtrl *course_ten_grade;

        wxTextCtrl *course_eleven;
        wxTextCtrl *course_eleven_grade;

        wxTextCtrl *course_twelve;
        wxTextCtrl *course_twelve_grade;


        wxDECLARE_EVENT_TABLE();
};

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    // EVT_TEXT(ID_COURSE_ONE, MyFrame::OnCourseTextBoxClicked)
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

// add course add buttons and list box

    // 100 Level
    wxString level_text = wxT("100 LEVEL");
    wxStaticText *st = new wxStaticText(this, wxID_ANY, level_text, wxPoint(60, 20), wxDefaultSize, wxALIGN_LEFT);
    // wxButton *add_course_button = new wxButton(this, ID_Add_Course_Button, "Add Course", wxPoint(20, 50), wxSize(120, 50));
    // wxTextCtrl *course_text_box = new wxTextCtrl(this, ID_Course_Text_Box, "", wxPoint(5, 105), wxSize(150, 30), wxTE_PROCESS_ENTER);
    // wxListBox *course_list_box = new wxListBox(this, wxID_ANY, wxPoint(5, 140), wxSize(150, 300));

    course_one = new wxTextCtrl(this, ID_COURSE_ONE, "", wxPoint(5, 44), wxSize(100, 30));
    course_one_grade = new wxTextCtrl(this, ID_COURSE_ONE_GRADE, "", wxPoint(110, 44), wxSize(45, 30));
    course_one->SetMaxLength(6);
    course_one_grade->SetMaxLength(1);
    course_one->SetHint("COURSE CODE");
    course_one_grade->SetHint("A");

    course_two = new wxTextCtrl(this, ID_COURSE_TWO, "", wxPoint(5, 76), wxSize(100, 30));
    course_two_grade = new wxTextCtrl(this, ID_COURSE_TWO_GRADE, "", wxPoint(110, 76), wxSize(45, 30));
    course_two->SetMaxLength(6);
    course_two_grade->SetMaxLength(1);
    course_two->SetHint("COURSE CODE");
    course_two_grade->SetHint("A");

    course_three = new wxTextCtrl(this, ID_COURSE_THREE, "", wxPoint(5, 108), wxSize(100, 30));
    course_three_grade = new wxTextCtrl(this, ID_COURSE_THREE_GRADE, "", wxPoint(110, 108), wxSize(45, 30));
    course_three->SetMaxLength(6);
    course_three_grade->SetMaxLength(1);
    course_three->SetHint("COURSE CODE");
    course_three_grade->SetHint("A");

    course_four = new wxTextCtrl(this, ID_COURSE_FOUR, "", wxPoint(5, 140), wxSize(100, 30));
    course_four_grade = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE, "", wxPoint(110, 140), wxSize(45, 30));
    course_four->SetMaxLength(6);
    course_four_grade->SetMaxLength(1);
    course_four->SetHint("COURSE CODE");
    course_four_grade->SetHint("A");

    course_five = new wxTextCtrl(this, ID_COURSE_FIVE, "", wxPoint(5, 172), wxSize(100, 30));
    course_five_grade = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE, "", wxPoint(110, 172), wxSize(45, 30));
    course_five->SetMaxLength(6);
    course_five_grade->SetMaxLength(1);
    course_five->SetHint("COURSE CODE");
    course_five_grade->SetHint("A");

    course_six = new wxTextCtrl(this, ID_COURSE_SIX, "", wxPoint(5, 204), wxSize(100, 30));
    course_six_grade = new wxTextCtrl(this, ID_COURSE_SIX_GRADE, "", wxPoint(110, 204), wxSize(45, 30));
    course_six->SetMaxLength(6);
    course_six_grade->SetMaxLength(1);
    course_six->SetHint("COURSE CODE");
    course_six_grade->SetHint("A");

    course_seven = new wxTextCtrl(this, ID_COURSE_SEVEN, "", wxPoint(5, 236), wxSize(100, 30));
    course_seven_grade = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE, "", wxPoint(110, 236), wxSize(45, 30));
    course_seven->SetMaxLength(6);
    course_seven_grade->SetMaxLength(1);
    course_seven->SetHint("COURSE CODE");
    course_seven_grade->SetHint("A");

    course_eight = new wxTextCtrl(this, ID_COURSE_EIGHT, "", wxPoint(5, 268), wxSize(100, 30));
    course_eight_grade = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE, "", wxPoint(110, 268), wxSize(45, 30));
    course_eight->SetMaxLength(6);
    course_eight_grade->SetMaxLength(1);
    course_eight->SetHint("COURSE CODE");
    course_eight_grade->SetHint("A");

    course_nine = new wxTextCtrl(this, ID_COURSE_NINE, "", wxPoint(5, 300), wxSize(100, 30));
    course_nine_grade = new wxTextCtrl(this, ID_COURSE_NINE_GRADE, "", wxPoint(110, 300), wxSize(45, 30));
    course_nine->SetMaxLength(6);
    course_nine_grade->SetMaxLength(1);
    course_nine->SetHint("COURSE CODE");
    course_nine_grade->SetHint("A");

    course_ten = new wxTextCtrl(this, ID_COURSE_TEN, "", wxPoint(5, 332), wxSize(100, 30));
    course_ten_grade = new wxTextCtrl(this, ID_COURSE_TEN_GRADE, "", wxPoint(110, 332), wxSize(45, 30));
    course_ten->SetMaxLength(6);
    course_ten_grade->SetMaxLength(1);
    course_ten->SetHint("COURSE CODE");
    course_ten_grade->SetHint("A");

    course_eleven = new wxTextCtrl(this, ID_COURSE_ELEVEN, "", wxPoint(5, 364), wxSize(100, 30));
    course_eleven_grade = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE, "", wxPoint(110, 364), wxSize(45, 30));
    course_eleven->SetMaxLength(6);
    course_eleven_grade->SetMaxLength(1);
    course_eleven->SetHint("COURSE CODE");
    course_eleven_grade->SetHint("A");

    course_twelve = new wxTextCtrl(this, ID_COURSE_TWELVE, "", wxPoint(5, 396), wxSize(100, 30));
    course_twelve_grade = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE, "", wxPoint(110, 396), wxSize(45, 30));
    course_twelve->SetMaxLength(6);
    course_twelve_grade->SetMaxLength(1);
    course_twelve->SetHint("COURSE CODE");
    course_twelve_grade->SetHint("A");

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

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_MENU, &MyFrame::OnHelp, this, wxID_HELP);

    // Bind(wxEVT_TEXT, &MyFrame::OnCourseTextBoxClicked, this, ID_COURSE_ONE);
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

/** void MyFrame::OnCourseTextBoxClicked(wxCommandEvent& event)
{
    course_one->SetMaxLength(6);
    course_one_grade->SetMaxLength(1);
};**/