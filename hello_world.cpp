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

    // 100 level
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
    ID_COURSE_TWELVE = 112,
    ID_COURSE_TWELVE_GRADE = 1121,

    // 200 level
    ID_COURSE_ONE_2 = 21,
    ID_COURSE_ONE_GRADE_2 = 211,
    ID_COURSE_TWO_2 = 22,
    ID_COURSE_TWO_GRADE_2 = 221,
    ID_COURSE_THREE_2 = 23,
    ID_COURSE_THREE_GRADE_2 = 231,
    ID_COURSE_FOUR_2 = 24,
    ID_COURSE_FOUR_GRADE_2 = 241,
    ID_COURSE_FIVE_2 = 25,
    ID_COURSE_FIVE_GRADE_2 = 251,
    ID_COURSE_SIX_2 = 26,
    ID_COURSE_SIX_GRADE_2 = 261,
    ID_COURSE_SEVEN_2 = 27,
    ID_COURSE_SEVEN_GRADE_2 = 271,
    ID_COURSE_EIGHT_2 = 28,
    ID_COURSE_EIGHT_GRADE_2 = 281,
    ID_COURSE_NINE_2 = 29,
    ID_COURSE_NINE_GRADE_2 = 291,
    ID_COURSE_TEN_2 = 210,
    ID_COURSE_TEN_GRADE_2 = 2101,
    ID_COURSE_ELEVEN_2 = 211,
    ID_COURSE_ELEVEN_GRADE_2 = 2111,
    ID_COURSE_TWELVE_2 = 212,
    ID_COURSE_TWELVE_GRADE_2 = 2121,

    // 300 level
    ID_COURSE_ONE_3 = 31,
    ID_COURSE_ONE_GRADE_3 = 311,
    ID_COURSE_TWO_3 = 32,
    ID_COURSE_TWO_GRADE_3 = 321,
    ID_COURSE_THREE_3 = 33,
    ID_COURSE_THREE_GRADE_3 = 331,
    ID_COURSE_FOUR_3 = 34,
    ID_COURSE_FOUR_GRADE_3 = 341,
    ID_COURSE_FIVE_3 = 35,
    ID_COURSE_FIVE_GRADE_3 = 351,
    ID_COURSE_SIX_3 = 36,
    ID_COURSE_SIX_GRADE_3 = 361,
    ID_COURSE_SEVEN_3 = 37,
    ID_COURSE_SEVEN_GRADE_3 = 371,
    ID_COURSE_EIGHT_3 = 38,
    ID_COURSE_EIGHT_GRADE_3 = 381,
    ID_COURSE_NINE_3 = 39,
    ID_COURSE_NINE_GRADE_3 = 391,
    ID_COURSE_TEN_3 = 310,
    ID_COURSE_TEN_GRADE_3 = 3101,
    ID_COURSE_ELEVEN_3 = 311,
    ID_COURSE_ELEVEN_GRADE_3 = 3111,
    ID_COURSE_TWELVE_3 = 312,
    ID_COURSE_TWELVE_GRADE_3 = 3121,

    // 400 level
    ID_COURSE_ONE_4 = 41,
    ID_COURSE_ONE_GRADE_4 = 411,
    ID_COURSE_TWO_4 = 42,
    ID_COURSE_TWO_GRADE_4 = 421,
    ID_COURSE_THREE_4 = 43,
    ID_COURSE_THREE_GRADE_4 = 431,
    ID_COURSE_FOUR_4 = 44,
    ID_COURSE_FOUR_GRADE_4 = 441,
    ID_COURSE_FIVE_4 = 45,
    ID_COURSE_FIVE_GRADE_4 = 451,
    ID_COURSE_SIX_4 = 46,
    ID_COURSE_SIX_GRADE_4 = 461,
    ID_COURSE_SEVEN_4 = 47,
    ID_COURSE_SEVEN_GRADE_4 = 471,
    ID_COURSE_EIGHT_4 = 48,
    ID_COURSE_EIGHT_GRADE_4 = 481,
    ID_COURSE_NINE_4 = 49,
    ID_COURSE_NINE_GRADE_4 = 491,
    ID_COURSE_TEN_4 = 410,
    ID_COURSE_TEN_GRADE_4 = 4101,
    ID_COURSE_ELEVEN_4 = 411,
    ID_COURSE_ELEVEN_GRADE_4 = 4111,
    ID_COURSE_TWELVE_4 = 412,
    ID_COURSE_TWELVE_GRADE_4 = 4121,

    // 500 level
    ID_COURSE_ONE_5 = 51,
    ID_COURSE_ONE_GRADE_5 = 511,
    ID_COURSE_TWO_5 = 52,
    ID_COURSE_TWO_GRADE_5 = 521,
    ID_COURSE_THREE_5 = 53,
    ID_COURSE_THREE_GRADE_5 = 531,
    ID_COURSE_FOUR_5 = 54,
    ID_COURSE_FOUR_GRADE_5 = 541,
    ID_COURSE_FIVE_5 = 55,
    ID_COURSE_FIVE_GRADE_5 = 551,
    ID_COURSE_SIX_5 = 56,
    ID_COURSE_SIX_GRADE_5 = 561,
    ID_COURSE_SEVEN_5 = 57,
    ID_COURSE_SEVEN_GRADE_5 = 571,
    ID_COURSE_EIGHT_5 = 58,
    ID_COURSE_EIGHT_GRADE_5 = 581,
    ID_COURSE_NINE_5 = 59,
    ID_COURSE_NINE_GRADE_5 = 591,
    ID_COURSE_TEN_5 = 510,
    ID_COURSE_TEN_GRADE_5 = 5101,
    ID_COURSE_ELEVEN_5 = 511,
    ID_COURSE_ELEVEN_GRADE_5 = 5111,
    ID_COURSE_TWELVE_5 = 512,
    ID_COURSE_TWELVE_GRADE_5 = 5121,
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

        // 100 Level
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

        // 200 Level
        wxTextCtrl *course_one_2;
        wxTextCtrl *course_one_grade_2;

        wxTextCtrl *course_two_2;
        wxTextCtrl *course_two_grade_2;

        wxTextCtrl *course_three_2;
        wxTextCtrl *course_three_grade_2;

        wxTextCtrl *course_four_2;
        wxTextCtrl *course_four_grade_2;

        wxTextCtrl *course_five_2;
        wxTextCtrl *course_five_grade_2;

        wxTextCtrl *course_six_2;
        wxTextCtrl *course_six_grade_2;

        wxTextCtrl *course_seven_2;
        wxTextCtrl *course_seven_grade_2;

        wxTextCtrl *course_eight_2;
        wxTextCtrl *course_eight_grade_2;

        wxTextCtrl *course_nine_2;
        wxTextCtrl *course_nine_grade_2;

        wxTextCtrl *course_ten_2;
        wxTextCtrl *course_ten_grade_2;

        wxTextCtrl *course_eleven_2;
        wxTextCtrl *course_eleven_grade_2;

        wxTextCtrl *course_twelve_2;
        wxTextCtrl *course_twelve_grade_2;

        // 300 Level
        wxTextCtrl *course_one_3;
        wxTextCtrl *course_one_grade_3;

        wxTextCtrl *course_two_3;
        wxTextCtrl *course_two_grade_3;

        wxTextCtrl *course_three_3;
        wxTextCtrl *course_three_grade_3;

        wxTextCtrl *course_four_3;
        wxTextCtrl *course_four_grade_3;

        wxTextCtrl *course_five_3;
        wxTextCtrl *course_five_grade_3;

        wxTextCtrl *course_six_3;
        wxTextCtrl *course_six_grade_3;

        wxTextCtrl *course_seven_3;
        wxTextCtrl *course_seven_grade_3;

        wxTextCtrl *course_eight_3;
        wxTextCtrl *course_eight_grade_3;

        wxTextCtrl *course_nine_3;
        wxTextCtrl *course_nine_grade_3;

        wxTextCtrl *course_ten_3;
        wxTextCtrl *course_ten_grade_3;

        wxTextCtrl *course_eleven_3;
        wxTextCtrl *course_eleven_grade_3;

        wxTextCtrl *course_twelve_3;
        wxTextCtrl *course_twelve_grade_3;

        // 400 Level
        wxTextCtrl *course_one_4;
        wxTextCtrl *course_one_grade_4;

        wxTextCtrl *course_two_4;
        wxTextCtrl *course_two_grade_4;

        wxTextCtrl *course_three_4;
        wxTextCtrl *course_three_grade_4;

        wxTextCtrl *course_four_4;
        wxTextCtrl *course_four_grade_4;

        wxTextCtrl *course_five_4;
        wxTextCtrl *course_five_grade_4;

        wxTextCtrl *course_six_4;
        wxTextCtrl *course_six_grade_4;

        wxTextCtrl *course_seven_4;
        wxTextCtrl *course_seven_grade_4;

        wxTextCtrl *course_eight_4;
        wxTextCtrl *course_eight_grade_4;

        wxTextCtrl *course_nine_4;
        wxTextCtrl *course_nine_grade_4;

        wxTextCtrl *course_ten_4;
        wxTextCtrl *course_ten_grade_4;

        wxTextCtrl *course_eleven_4;
        wxTextCtrl *course_eleven_grade_4;

        wxTextCtrl *course_twelve_4;
        wxTextCtrl *course_twelve_grade_4;

        // 500 Level
        wxTextCtrl *course_one_5;
        wxTextCtrl *course_one_grade_5;

        wxTextCtrl *course_two_5;
        wxTextCtrl *course_two_grade_5;

        wxTextCtrl *course_three_5;
        wxTextCtrl *course_three_grade_5;

        wxTextCtrl *course_four_5;
        wxTextCtrl *course_four_grade_5;

        wxTextCtrl *course_five_5;
        wxTextCtrl *course_five_grade_5;

        wxTextCtrl *course_six_5;
        wxTextCtrl *course_six_grade_5;

        wxTextCtrl *course_seven_5;
        wxTextCtrl *course_seven_grade_5;

        wxTextCtrl *course_eight_5;
        wxTextCtrl *course_eight_grade_5;

        wxTextCtrl *course_nine_5;
        wxTextCtrl *course_nine_grade_5;

        wxTextCtrl *course_ten_5;
        wxTextCtrl *course_ten_grade_5;

        wxTextCtrl *course_eleven_5;
        wxTextCtrl *course_eleven_grade_5;

        wxTextCtrl *course_twelve_5;
        wxTextCtrl *course_twelve_grade_5;

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
    wxStaticText *st = new wxStaticText(this, wxID_ANY, level_text, wxPoint(52, 20), wxDefaultSize, wxALIGN_LEFT);

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
    wxStaticText *st_2 = new wxStaticText(this, wxID_ANY, level_text_2, wxPoint(217, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_2 = new wxTextCtrl(this, ID_COURSE_ONE_2, "", wxPoint(170, 44), wxSize(100, 30));
    course_one_grade_2 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_2, "", wxPoint(275, 44), wxSize(45, 30));
    course_one_2->SetMaxLength(6);
    course_one_grade_2->SetMaxLength(1);
    course_one_2->SetHint("COURSE CODE");
    course_one_grade_2->SetHint("A");

    course_two_2 = new wxTextCtrl(this, ID_COURSE_TWO_2, "", wxPoint(170, 76), wxSize(100, 30));
    course_two_grade_2 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_2, "", wxPoint(275, 76), wxSize(45, 30));
    course_two_2->SetMaxLength(6);
    course_two_grade_2->SetMaxLength(1);
    course_two_2->SetHint("COURSE CODE");
    course_two_grade_2->SetHint("A");

    course_three_2 = new wxTextCtrl(this, ID_COURSE_THREE_2, "", wxPoint(170, 108), wxSize(100, 30));
    course_three_grade_2 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_2, "", wxPoint(275, 108), wxSize(45, 30));
    course_three_2->SetMaxLength(6);
    course_three_grade_2->SetMaxLength(1);
    course_three_2->SetHint("COURSE CODE");
    course_three_grade_2->SetHint("A");

    course_four_2 = new wxTextCtrl(this, ID_COURSE_FOUR_2, "", wxPoint(170, 140), wxSize(100, 30));
    course_four_grade_2 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_2, "", wxPoint(275, 140), wxSize(45, 30));
    course_four_2->SetMaxLength(6);
    course_four_grade_2->SetMaxLength(1);
    course_four_2->SetHint("COURSE CODE");
    course_four_grade_2->SetHint("A");

    course_five_2 = new wxTextCtrl(this, ID_COURSE_FIVE_2, "", wxPoint(170, 172), wxSize(100, 30));
    course_five_grade_2 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_2, "", wxPoint(275, 172), wxSize(45, 30));
    course_five_2->SetMaxLength(6);
    course_five_grade_2->SetMaxLength(1);
    course_five_2->SetHint("COURSE CODE");
    course_five_grade_2->SetHint("A");

    course_six_2 = new wxTextCtrl(this, ID_COURSE_SIX_2, "", wxPoint(170, 204), wxSize(100, 30));
    course_six_grade_2 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_2, "", wxPoint(275, 204), wxSize(45, 30));
    course_six_2->SetMaxLength(6);
    course_six_grade_2->SetMaxLength(1);
    course_six_2->SetHint("COURSE CODE");
    course_six_grade_2->SetHint("A");

    course_seven_2 = new wxTextCtrl(this, ID_COURSE_SEVEN_2, "", wxPoint(170, 236), wxSize(100, 30));
    course_seven_grade_2 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_2, "", wxPoint(275, 236), wxSize(45, 30));
    course_seven_2->SetMaxLength(6);
    course_seven_grade_2->SetMaxLength(1);
    course_seven_2->SetHint("COURSE CODE");
    course_seven_grade_2->SetHint("A");

    course_eight_2 = new wxTextCtrl(this, ID_COURSE_EIGHT_2, "", wxPoint(170, 268), wxSize(100, 30));
    course_eight_grade_2 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_2, "", wxPoint(275, 268), wxSize(45, 30));
    course_eight_2->SetMaxLength(6);
    course_eight_grade_2->SetMaxLength(1);
    course_eight_2->SetHint("COURSE CODE");
    course_eight_grade_2->SetHint("A");

    course_nine_2 = new wxTextCtrl(this, ID_COURSE_NINE_2, "", wxPoint(170, 300), wxSize(100, 30));
    course_nine_grade_2 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_2, "", wxPoint(275, 300), wxSize(45, 30));
    course_nine_2->SetMaxLength(6);
    course_nine_grade_2->SetMaxLength(1);
    course_nine_2->SetHint("COURSE CODE");
    course_nine_grade_2->SetHint("A");

    course_ten_2 = new wxTextCtrl(this, ID_COURSE_TEN_2, "", wxPoint(170, 332), wxSize(100, 30));
    course_ten_grade_2 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_2, "", wxPoint(275, 332), wxSize(45, 30));
    course_ten_2->SetMaxLength(6);
    course_ten_grade_2->SetMaxLength(1);
    course_ten_2->SetHint("COURSE CODE");
    course_ten_grade_2->SetHint("A");

    course_eleven_2 = new wxTextCtrl(this, ID_COURSE_ELEVEN_2, "", wxPoint(170, 364), wxSize(100, 30));
    course_eleven_grade_2 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_2, "", wxPoint(275, 364), wxSize(45, 30));
    course_eleven_2->SetMaxLength(6);
    course_eleven_grade_2->SetMaxLength(1);
    course_eleven_2->SetHint("COURSE CODE");
    course_eleven_grade_2->SetHint("A");

    course_twelve_2 = new wxTextCtrl(this, ID_COURSE_TWELVE_2, "", wxPoint(170, 396), wxSize(100, 30));
    course_twelve_grade_2 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_2, "", wxPoint(275, 396), wxSize(45, 30));
    course_twelve_2->SetMaxLength(6);
    course_twelve_grade_2->SetMaxLength(1);
    course_twelve_2->SetHint("COURSE CODE");
    course_twelve_grade_2->SetHint("A");

    wxButton *calculate_gp_2 = new wxButton(this, wxID_ANY, "Display GP", wxPoint(207.5, 445), wxSize(75, 50));

    // 300 Level
    wxString level_text_3 = wxT("300 LEVEL");
    wxStaticText *st_3 = new wxStaticText(this, wxID_ANY, level_text_3, wxPoint(382, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_3 = new wxTextCtrl(this, ID_COURSE_ONE_3, "", wxPoint(335, 44), wxSize(100, 30));
    course_one_grade_3 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_3, "", wxPoint(440, 44), wxSize(45, 30));
    course_one_3->SetMaxLength(6);
    course_one_grade_3->SetMaxLength(1);
    course_one_3->SetHint("COURSE CODE");
    course_one_grade_3->SetHint("A");

    course_two_3 = new wxTextCtrl(this, ID_COURSE_TWO_3, "", wxPoint(335, 76), wxSize(100, 30));
    course_two_grade_3 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_3, "", wxPoint(440, 76), wxSize(45, 30));
    course_two_3->SetMaxLength(6);
    course_two_grade_3->SetMaxLength(1);
    course_two_3->SetHint("COURSE CODE");
    course_two_grade_3->SetHint("A");

    course_three_3 = new wxTextCtrl(this, ID_COURSE_THREE_3, "", wxPoint(335, 108), wxSize(100, 30));
    course_three_grade_3 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_3, "", wxPoint(440, 108), wxSize(45, 30));
    course_three_3->SetMaxLength(6);
    course_three_grade_3->SetMaxLength(1);
    course_three_3->SetHint("COURSE CODE");
    course_three_grade_3->SetHint("A");

    course_four_3 = new wxTextCtrl(this, ID_COURSE_FOUR_3, "", wxPoint(335, 140), wxSize(100, 30));
    course_four_grade_3 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_3, "", wxPoint(440, 140), wxSize(45, 30));
    course_four_3->SetMaxLength(6);
    course_four_grade_3->SetMaxLength(1);
    course_four_3->SetHint("COURSE CODE");
    course_four_grade_3->SetHint("A");

    course_five_3 = new wxTextCtrl(this, ID_COURSE_FIVE_3, "", wxPoint(335, 172), wxSize(100, 30));
    course_five_grade_3 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_3, "", wxPoint(440, 172), wxSize(45, 30));
    course_five_3->SetMaxLength(6);
    course_five_grade_3->SetMaxLength(1);
    course_five_3->SetHint("COURSE CODE");
    course_five_grade_3->SetHint("A");

    course_six_3 = new wxTextCtrl(this, ID_COURSE_SIX_3, "", wxPoint(335, 204), wxSize(100, 30));
    course_six_grade_3 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_3, "", wxPoint(440, 204), wxSize(45, 30));
    course_six_3->SetMaxLength(6);
    course_six_grade_3->SetMaxLength(1);
    course_six_3->SetHint("COURSE CODE");
    course_six_grade_3->SetHint("A");

    course_seven_3 = new wxTextCtrl(this, ID_COURSE_SEVEN_3, "", wxPoint(335, 236), wxSize(100, 30));
    course_seven_grade_3 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_3, "", wxPoint(440, 236), wxSize(45, 30));
    course_seven_3->SetMaxLength(6);
    course_seven_grade_3->SetMaxLength(1);
    course_seven_3->SetHint("COURSE CODE");
    course_seven_grade_3->SetHint("A");

    course_eight_3 = new wxTextCtrl(this, ID_COURSE_EIGHT_3, "", wxPoint(335, 268), wxSize(100, 30));
    course_eight_grade_3 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_3, "", wxPoint(440, 268), wxSize(45, 30));
    course_eight_3->SetMaxLength(6);
    course_eight_grade_3->SetMaxLength(1);
    course_eight_3->SetHint("COURSE CODE");
    course_eight_grade_3->SetHint("A");

    course_nine_3 = new wxTextCtrl(this, ID_COURSE_NINE_3, "", wxPoint(335, 300), wxSize(100, 30));
    course_nine_grade_3 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_3, "", wxPoint(440, 300), wxSize(45, 30));
    course_nine_3->SetMaxLength(6);
    course_nine_grade_3->SetMaxLength(1);
    course_nine_3->SetHint("COURSE CODE");
    course_nine_grade_3->SetHint("A");

    course_ten_3 = new wxTextCtrl(this, ID_COURSE_TEN_3, "", wxPoint(335, 332), wxSize(100, 30));
    course_ten_grade_3 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_3, "", wxPoint(440, 332), wxSize(45, 30));
    course_ten_3->SetMaxLength(6);
    course_ten_grade_3->SetMaxLength(1);
    course_ten_3->SetHint("COURSE CODE");
    course_ten_grade_3->SetHint("A");

    course_eleven_3 = new wxTextCtrl(this, ID_COURSE_ELEVEN_3, "", wxPoint(335, 364), wxSize(100, 30));
    course_eleven_grade_3 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_3, "", wxPoint(440, 364), wxSize(45, 30));
    course_eleven_3->SetMaxLength(6);
    course_eleven_grade_3->SetMaxLength(1);
    course_eleven_3->SetHint("COURSE CODE");
    course_eleven_grade_3->SetHint("A");

    course_twelve_3 = new wxTextCtrl(this, ID_COURSE_TWELVE_3, "", wxPoint(335, 396), wxSize(100, 30));
    course_twelve_grade_3 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_3, "", wxPoint(440, 396), wxSize(45, 30));
    course_twelve_3->SetMaxLength(6);
    course_twelve_grade_3->SetMaxLength(1);
    course_twelve_3->SetHint("COURSE CODE");
    course_twelve_grade_3->SetHint("A");

    wxButton *calculate_gp_3 = new wxButton(this, wxID_ANY, "Display GP", wxPoint(372.5, 445), wxSize(75, 50));

    // 400 Level
    wxString level_text_4 = wxT("400 LEVEL");
    wxStaticText *st_4 = new wxStaticText(this, wxID_ANY, level_text_4, wxPoint(547, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_4 = new wxTextCtrl(this, ID_COURSE_ONE_4, "", wxPoint(500, 44), wxSize(100, 30));
    course_one_grade_4 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_4, "", wxPoint(605, 44), wxSize(45, 30));
    course_one_4->SetMaxLength(6);
    course_one_grade_4->SetMaxLength(1);
    course_one_4->SetHint("COURSE CODE");
    course_one_grade_4->SetHint("A");

    course_two_4 = new wxTextCtrl(this, ID_COURSE_TWO_4, "", wxPoint(500, 76), wxSize(100, 30));
    course_two_grade_4 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_4, "", wxPoint(605, 76), wxSize(45, 30));
    course_two_4->SetMaxLength(6);
    course_two_grade_4->SetMaxLength(1);
    course_two_4->SetHint("COURSE CODE");
    course_two_grade_4->SetHint("A");

    course_three_4 = new wxTextCtrl(this, ID_COURSE_THREE_4, "", wxPoint(500, 108), wxSize(100, 30));
    course_three_grade_4 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_4, "", wxPoint(605, 108), wxSize(45, 30));
    course_three_4->SetMaxLength(6);
    course_three_grade_4->SetMaxLength(1);
    course_three_4->SetHint("COURSE CODE");
    course_three_grade_4->SetHint("A");

    course_four_4 = new wxTextCtrl(this, ID_COURSE_FOUR_4, "", wxPoint(500, 140), wxSize(100, 30));
    course_four_grade_4 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_4, "", wxPoint(605, 140), wxSize(45, 30));
    course_four_4->SetMaxLength(6);
    course_four_grade_4->SetMaxLength(1);
    course_four_4->SetHint("COURSE CODE");
    course_four_grade_4->SetHint("A");

    course_five_4 = new wxTextCtrl(this, ID_COURSE_FIVE_4, "", wxPoint(500, 172), wxSize(100, 30));
    course_five_grade_4 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_4, "", wxPoint(605, 172), wxSize(45, 30));
    course_five_4->SetMaxLength(6);
    course_five_grade_4->SetMaxLength(1);
    course_five_4->SetHint("COURSE CODE");
    course_five_grade_4->SetHint("A");

    course_six_4 = new wxTextCtrl(this, ID_COURSE_SIX_4, "", wxPoint(500, 204), wxSize(100, 30));
    course_six_grade_4 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_4, "", wxPoint(605, 204), wxSize(45, 30));
    course_six_4->SetMaxLength(6);
    course_six_grade_4->SetMaxLength(1);
    course_six_4->SetHint("COURSE CODE");
    course_six_grade_4->SetHint("A");

    course_seven_4 = new wxTextCtrl(this, ID_COURSE_SEVEN_4, "", wxPoint(500, 236), wxSize(100, 30));
    course_seven_grade_4 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_4, "", wxPoint(605, 236), wxSize(45, 30));
    course_seven_4->SetMaxLength(6);
    course_seven_grade_4->SetMaxLength(1);
    course_seven_4->SetHint("COURSE CODE");
    course_seven_grade_4->SetHint("A");

    course_eight_4 = new wxTextCtrl(this, ID_COURSE_EIGHT_4, "", wxPoint(500, 268), wxSize(100, 30));
    course_eight_grade_4 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_4, "", wxPoint(605, 268), wxSize(45, 30));
    course_eight_4->SetMaxLength(6);
    course_eight_grade_4->SetMaxLength(1);
    course_eight_4->SetHint("COURSE CODE");
    course_eight_grade_4->SetHint("A");

    course_nine_4 = new wxTextCtrl(this, ID_COURSE_NINE_4, "", wxPoint(500, 300), wxSize(100, 30));
    course_nine_grade_4 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_4, "", wxPoint(605, 300), wxSize(45, 30));
    course_nine_4->SetMaxLength(6);
    course_nine_grade_4->SetMaxLength(1);
    course_nine_4->SetHint("COURSE CODE");
    course_nine_grade_4->SetHint("A");

    course_ten_4 = new wxTextCtrl(this, ID_COURSE_TEN_4, "", wxPoint(500, 332), wxSize(100, 30));
    course_ten_grade_4 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_4, "", wxPoint(605, 332), wxSize(45, 30));
    course_ten_4->SetMaxLength(6);
    course_ten_grade_4->SetMaxLength(1);
    course_ten_4->SetHint("COURSE CODE");
    course_ten_grade_4->SetHint("A");

    course_eleven_4 = new wxTextCtrl(this, ID_COURSE_ELEVEN_4, "", wxPoint(500, 364), wxSize(100, 30));
    course_eleven_grade_4 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_4, "", wxPoint(605, 364), wxSize(45, 30));
    course_eleven_4->SetMaxLength(6);
    course_eleven_grade_4->SetMaxLength(1);
    course_eleven_4->SetHint("COURSE CODE");
    course_eleven_grade_4->SetHint("A");

    course_twelve_4 = new wxTextCtrl(this, ID_COURSE_TWELVE_4, "", wxPoint(500, 396), wxSize(100, 30));
    course_twelve_grade_4 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_4, "", wxPoint(605, 396), wxSize(45, 30));
    course_twelve_4->SetMaxLength(6);
    course_twelve_grade_4->SetMaxLength(1);
    course_twelve_4->SetHint("COURSE CODE");
    course_twelve_grade_4->SetHint("A");

    wxButton *calculate_gp_4 = new wxButton(this, wxID_ANY, "Display GP", wxPoint(537.5, 445), wxSize(75, 50));

    // 500 Level
    wxString level_text_5 = wxT("500 LEVEL");
    wxStaticText *st_5 = new wxStaticText(this, wxID_ANY, level_text_5, wxPoint(712, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_5 = new wxTextCtrl(this, ID_COURSE_ONE_5, "", wxPoint(665, 44), wxSize(100, 30));
    course_one_grade_5 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_5, "", wxPoint(770, 44), wxSize(45, 30));
    course_one_5->SetMaxLength(6);
    course_one_grade_5->SetMaxLength(1);
    course_one_5->SetHint("COURSE CODE");
    course_one_grade_5->SetHint("A");

    course_two_5 = new wxTextCtrl(this, ID_COURSE_TWO_5, "", wxPoint(665, 76), wxSize(100, 30));
    course_two_grade_5 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_5, "", wxPoint(770, 76), wxSize(45, 30));
    course_two_5->SetMaxLength(6);
    course_two_grade_5->SetMaxLength(1);
    course_two_5->SetHint("COURSE CODE");
    course_two_grade_5->SetHint("A");

    course_three_5 = new wxTextCtrl(this, ID_COURSE_THREE_5, "", wxPoint(665, 108), wxSize(100, 30));
    course_three_grade_5 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_5, "", wxPoint(770, 108), wxSize(45, 30));
    course_three_5->SetMaxLength(6);
    course_three_grade_5->SetMaxLength(1);
    course_three_5->SetHint("COURSE CODE");
    course_three_grade_5->SetHint("A");

    course_four_5 = new wxTextCtrl(this, ID_COURSE_FOUR_5, "", wxPoint(665, 140), wxSize(100, 30));
    course_four_grade_5 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_5, "", wxPoint(770, 140), wxSize(45, 30));
    course_four_5->SetMaxLength(6);
    course_four_grade_5->SetMaxLength(1);
    course_four_5->SetHint("COURSE CODE");
    course_four_grade_5->SetHint("A");

    course_five_5 = new wxTextCtrl(this, ID_COURSE_FIVE_5, "", wxPoint(665, 172), wxSize(100, 30));
    course_five_grade_5 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_5, "", wxPoint(770, 172), wxSize(45, 30));
    course_five_5->SetMaxLength(6);
    course_five_grade_5->SetMaxLength(1);
    course_five_5->SetHint("COURSE CODE");
    course_five_grade_5->SetHint("A");

    course_six_5 = new wxTextCtrl(this, ID_COURSE_SIX_5, "", wxPoint(665, 204), wxSize(100, 30));
    course_six_grade_5 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_5, "", wxPoint(770, 204), wxSize(45, 30));
    course_six_5->SetMaxLength(6);
    course_six_grade_5->SetMaxLength(1);
    course_six_5->SetHint("COURSE CODE");
    course_six_grade_5->SetHint("A");

    course_seven_5 = new wxTextCtrl(this, ID_COURSE_SEVEN_5, "", wxPoint(665, 236), wxSize(100, 30));
    course_seven_grade_5 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_5, "", wxPoint(770, 236), wxSize(45, 30));
    course_seven_5->SetMaxLength(6);
    course_seven_grade_5->SetMaxLength(1);
    course_seven_5->SetHint("COURSE CODE");
    course_seven_grade_5->SetHint("A");

    course_eight_5 = new wxTextCtrl(this, ID_COURSE_EIGHT_5, "", wxPoint(665, 268), wxSize(100, 30));
    course_eight_grade_5 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_5, "", wxPoint(770, 268), wxSize(45, 30));
    course_eight_5->SetMaxLength(6);
    course_eight_grade_5->SetMaxLength(1);
    course_eight_5->SetHint("COURSE CODE");
    course_eight_grade_5->SetHint("A");

    course_nine_5 = new wxTextCtrl(this, ID_COURSE_NINE_5, "", wxPoint(665, 300), wxSize(100, 30));
    course_nine_grade_5 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_5, "", wxPoint(770, 300), wxSize(45, 30));
    course_nine_5->SetMaxLength(6);
    course_nine_grade_5->SetMaxLength(1);
    course_nine_5->SetHint("COURSE CODE");
    course_nine_grade_5->SetHint("A");

    course_ten_5 = new wxTextCtrl(this, ID_COURSE_TEN_5, "", wxPoint(665, 332), wxSize(100, 30));
    course_ten_grade_5 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_5, "", wxPoint(770, 332), wxSize(45, 30));
    course_ten_5->SetMaxLength(6);
    course_ten_grade_5->SetMaxLength(1);
    course_ten_5->SetHint("COURSE CODE");
    course_ten_grade_5->SetHint("A");

    course_eleven_5 = new wxTextCtrl(this, ID_COURSE_ELEVEN_5, "", wxPoint(665, 364), wxSize(100, 30));
    course_eleven_grade_5 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_5, "", wxPoint(770, 364), wxSize(45, 30));
    course_eleven_5->SetMaxLength(6);
    course_eleven_grade_5->SetMaxLength(1);
    course_eleven_5->SetHint("COURSE CODE");
    course_eleven_grade_5->SetHint("A");

    course_twelve_5 = new wxTextCtrl(this, ID_COURSE_TWELVE_5, "", wxPoint(665, 396), wxSize(100, 30));
    course_twelve_grade_5 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_5, "", wxPoint(770, 396), wxSize(45, 30));
    course_twelve_5->SetMaxLength(6);
    course_twelve_grade_5->SetMaxLength(1);
    course_twelve_5->SetHint("COURSE CODE");
    course_twelve_grade_5->SetHint("A");

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