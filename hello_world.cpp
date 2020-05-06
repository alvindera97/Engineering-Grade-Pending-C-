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
#include <map>
#include <unordered_map>
#include <iterator>

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

    ID_CALCULATE_100_LEVEL_GP = 100,
    ID_CALCULATE_200_LEVEL_GP = 200,
    ID_CALCULATE_300_LEVEL_GP = 300,
    ID_CALCULATE_400_LEVEL_GP = 400,
    ID_CALCULATE_500_LEVEL_GP = 500,

    ID_CALCULATE_CGPA = 12345,
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
        void OnOneHundredLevelDisplayGpButtonClicked(wxCommandEvent &event);
        void OnTwoHundredLevelDisplayGpButtonClicked(wxCommandEvent &event);
        void OnThreeHundredLevelDisplayGpButtonClicked(wxCommandEvent &event);
        void OnFourHundredLevelDisplayGpButtonClicked(wxCommandEvent &event);
        void OnFiveHundredLevelDisplayGpButtonClicked(wxCommandEvent &event);

        void OnDisplayCgpaButtonClicked(wxCommandEvent &event);

        // all courses map
            
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

        // display GP buttons
        wxButton *calculate_gp;
        wxButton *calculate_gp_2;
        wxButton *calculate_gp_3;
        wxButton *calculate_gp_4;
        wxButton *calculate_gp_5;

        // calculate CGPA button
        wxButton *calculate_cgpa;

        wxDECLARE_EVENT_TABLE();
};

wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
    // EVT_TEXT(ID_COURSE_ONE, MyFrame::OnCourseTextBoxClicked)
    EVT_BUTTON(ID_CALCULATE_100_LEVEL_GP, MyFrame::OnOneHundredLevelDisplayGpButtonClicked)
wxEND_EVENT_TABLE()


wxIMPLEMENT_APP(GpCalculator);   // initiate main()

bool GpCalculator::OnInit() {  // append the OnInit() function
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;  // this is just to show successfull initialisation
}


MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "Engineering Grade Pending Calculator", wxPoint(100, 100), wxSize(820, 950)) {  // Frame of the program
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
    SetStatusText("Faculty of Engineering, University of Benin, Grade Pending Calculator");

// add course add buttons and list box

    // 100 Level
    wxString level_text = wxT("100 LEVEL");
    wxStaticText *st = new wxStaticText(this, wxID_ANY, level_text, wxPoint(52, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one = new wxTextCtrl(this, ID_COURSE_ONE, "", wxPoint(5, 44), wxSize(57, 30));
    course_one_grade = new wxTextCtrl(this, ID_COURSE_ONE_GRADE, "", wxPoint(110, 44), wxSize(20, 30));
    course_one->SetMaxLength(6);
    course_one_grade->SetMaxLength(1);
    course_one->SetHint("COURSE");
    course_one_grade->SetHint("A");

    course_two = new wxTextCtrl(this, ID_COURSE_TWO, "", wxPoint(5, 76), wxSize(57, 30));
    course_two_grade = new wxTextCtrl(this, ID_COURSE_TWO_GRADE, "", wxPoint(110, 76), wxSize(20, 30));
    course_two->SetMaxLength(6);
    course_two_grade->SetMaxLength(1);
    course_two->SetHint("COURSE");
    course_two_grade->SetHint("A");

    course_three = new wxTextCtrl(this, ID_COURSE_THREE, "", wxPoint(5, 108), wxSize(57, 30));
    course_three_grade = new wxTextCtrl(this, ID_COURSE_THREE_GRADE, "", wxPoint(110, 108), wxSize(20, 30));
    course_three->SetMaxLength(6);
    course_three_grade->SetMaxLength(1);
    course_three->SetHint("COURSE");
    course_three_grade->SetHint("A");

    course_four = new wxTextCtrl(this, ID_COURSE_FOUR, "", wxPoint(5, 140), wxSize(57, 30));
    course_four_grade = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE, "", wxPoint(110, 140), wxSize(20, 30));
    course_four->SetMaxLength(6);
    course_four_grade->SetMaxLength(1);
    course_four->SetHint("COURSE");
    course_four_grade->SetHint("A");

    course_five = new wxTextCtrl(this, ID_COURSE_FIVE, "", wxPoint(5, 172), wxSize(57, 30));
    course_five_grade = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE, "", wxPoint(110, 172), wxSize(20, 30));
    course_five->SetMaxLength(6);
    course_five_grade->SetMaxLength(1);
    course_five->SetHint("COURSE");
    course_five_grade->SetHint("A");

    course_six = new wxTextCtrl(this, ID_COURSE_SIX, "", wxPoint(5, 204), wxSize(57, 30));
    course_six_grade = new wxTextCtrl(this, ID_COURSE_SIX_GRADE, "", wxPoint(110, 204), wxSize(20, 30));
    course_six->SetMaxLength(6);
    course_six_grade->SetMaxLength(1);
    course_six->SetHint("COURSE");
    course_six_grade->SetHint("A");

    course_seven = new wxTextCtrl(this, ID_COURSE_SEVEN, "", wxPoint(5, 236), wxSize(57, 30));
    course_seven_grade = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE, "", wxPoint(110, 236), wxSize(20, 30));
    course_seven->SetMaxLength(6);
    course_seven_grade->SetMaxLength(1);
    course_seven->SetHint("COURSE");
    course_seven_grade->SetHint("A");

    course_eight = new wxTextCtrl(this, ID_COURSE_EIGHT, "", wxPoint(5, 268), wxSize(57, 30));
    course_eight_grade = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE, "", wxPoint(110, 268), wxSize(20, 30));
    course_eight->SetMaxLength(6);
    course_eight_grade->SetMaxLength(1);
    course_eight->SetHint("COURSE");
    course_eight_grade->SetHint("A");

    course_nine = new wxTextCtrl(this, ID_COURSE_NINE, "", wxPoint(5, 300), wxSize(57, 30));
    course_nine_grade = new wxTextCtrl(this, ID_COURSE_NINE_GRADE, "", wxPoint(110, 300), wxSize(20, 30));
    course_nine->SetMaxLength(6);
    course_nine_grade->SetMaxLength(1);
    course_nine->SetHint("COURSE");
    course_nine_grade->SetHint("A");

    course_ten = new wxTextCtrl(this, ID_COURSE_TEN, "", wxPoint(5, 332), wxSize(57, 30));
    course_ten_grade = new wxTextCtrl(this, ID_COURSE_TEN_GRADE, "", wxPoint(110, 332), wxSize(20, 30));
    course_ten->SetMaxLength(6);
    course_ten_grade->SetMaxLength(1);
    course_ten->SetHint("COURSE");
    course_ten_grade->SetHint("A");

    course_eleven = new wxTextCtrl(this, ID_COURSE_ELEVEN, "", wxPoint(5, 364), wxSize(57, 30));
    course_eleven_grade = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE, "", wxPoint(110, 364), wxSize(20, 30));
    course_eleven->SetMaxLength(6);
    course_eleven_grade->SetMaxLength(1);
    course_eleven->SetHint("COURSE");
    course_eleven_grade->SetHint("A");

    course_twelve = new wxTextCtrl(this, ID_COURSE_TWELVE, "", wxPoint(5, 396), wxSize(57, 30));
    course_twelve_grade = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE, "", wxPoint(110, 396), wxSize(20, 30));
    course_twelve->SetMaxLength(6);
    course_twelve_grade->SetMaxLength(1);
    course_twelve->SetHint("COURSE");
    course_twelve_grade->SetHint("A");

    calculate_gp = new wxButton(this, ID_CALCULATE_100_LEVEL_GP, "Display GP", wxPoint(42.5, 445), wxSize(75, 50));

    // 200 Level
    wxString level_text_2 = wxT("200 LEVEL");
    wxStaticText *st_2 = new wxStaticText(this, wxID_ANY, level_text_2, wxPoint(217, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_2 = new wxTextCtrl(this, ID_COURSE_ONE_2, "", wxPoint(170, 44), wxSize(57, 30));
    course_one_grade_2 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_2, "", wxPoint(275, 44), wxSize(20, 30));
    course_one_2->SetMaxLength(6);
    course_one_grade_2->SetMaxLength(1);
    course_one_2->SetHint("COURSE");
    course_one_grade_2->SetHint("A");

    course_two_2 = new wxTextCtrl(this, ID_COURSE_TWO_2, "", wxPoint(170, 76), wxSize(57, 30));
    course_two_grade_2 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_2, "", wxPoint(275, 76), wxSize(20, 30));
    course_two_2->SetMaxLength(6);
    course_two_grade_2->SetMaxLength(1);
    course_two_2->SetHint("COURSE");
    course_two_grade_2->SetHint("A");

    course_three_2 = new wxTextCtrl(this, ID_COURSE_THREE_2, "", wxPoint(170, 108), wxSize(57, 30));
    course_three_grade_2 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_2, "", wxPoint(275, 108), wxSize(20, 30));
    course_three_2->SetMaxLength(6);
    course_three_grade_2->SetMaxLength(1);
    course_three_2->SetHint("COURSE");
    course_three_grade_2->SetHint("A");

    course_four_2 = new wxTextCtrl(this, ID_COURSE_FOUR_2, "", wxPoint(170, 140), wxSize(57, 30));
    course_four_grade_2 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_2, "", wxPoint(275, 140), wxSize(20, 30));
    course_four_2->SetMaxLength(6);
    course_four_grade_2->SetMaxLength(1);
    course_four_2->SetHint("COURSE");
    course_four_grade_2->SetHint("A");

    course_five_2 = new wxTextCtrl(this, ID_COURSE_FIVE_2, "", wxPoint(170, 172), wxSize(57, 30));
    course_five_grade_2 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_2, "", wxPoint(275, 172), wxSize(20, 30));
    course_five_2->SetMaxLength(6);
    course_five_grade_2->SetMaxLength(1);
    course_five_2->SetHint("COURSE");
    course_five_grade_2->SetHint("A");

    course_six_2 = new wxTextCtrl(this, ID_COURSE_SIX_2, "", wxPoint(170, 204), wxSize(57, 30));
    course_six_grade_2 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_2, "", wxPoint(275, 204), wxSize(20, 30));
    course_six_2->SetMaxLength(6);
    course_six_grade_2->SetMaxLength(1);
    course_six_2->SetHint("COURSE");
    course_six_grade_2->SetHint("A");

    course_seven_2 = new wxTextCtrl(this, ID_COURSE_SEVEN_2, "", wxPoint(170, 236), wxSize(57, 30));
    course_seven_grade_2 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_2, "", wxPoint(275, 236), wxSize(20, 30));
    course_seven_2->SetMaxLength(6);
    course_seven_grade_2->SetMaxLength(1);
    course_seven_2->SetHint("COURSE");
    course_seven_grade_2->SetHint("A");

    course_eight_2 = new wxTextCtrl(this, ID_COURSE_EIGHT_2, "", wxPoint(170, 268), wxSize(57, 30));
    course_eight_grade_2 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_2, "", wxPoint(275, 268), wxSize(20, 30));
    course_eight_2->SetMaxLength(6);
    course_eight_grade_2->SetMaxLength(1);
    course_eight_2->SetHint("COURSE");
    course_eight_grade_2->SetHint("A");

    course_nine_2 = new wxTextCtrl(this, ID_COURSE_NINE_2, "", wxPoint(170, 300), wxSize(57, 30));
    course_nine_grade_2 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_2, "", wxPoint(275, 300), wxSize(20, 30));
    course_nine_2->SetMaxLength(6);
    course_nine_grade_2->SetMaxLength(1);
    course_nine_2->SetHint("COURSE");
    course_nine_grade_2->SetHint("A");

    course_ten_2 = new wxTextCtrl(this, ID_COURSE_TEN_2, "", wxPoint(170, 332), wxSize(57, 30));
    course_ten_grade_2 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_2, "", wxPoint(275, 332), wxSize(20, 30));
    course_ten_2->SetMaxLength(6);
    course_ten_grade_2->SetMaxLength(1);
    course_ten_2->SetHint("COURSE");
    course_ten_grade_2->SetHint("A");

    course_eleven_2 = new wxTextCtrl(this, ID_COURSE_ELEVEN_2, "", wxPoint(170, 364), wxSize(57, 30));
    course_eleven_grade_2 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_2, "", wxPoint(275, 364), wxSize(20, 30));
    course_eleven_2->SetMaxLength(6);
    course_eleven_grade_2->SetMaxLength(1);
    course_eleven_2->SetHint("COURSE");
    course_eleven_grade_2->SetHint("A");

    course_twelve_2 = new wxTextCtrl(this, ID_COURSE_TWELVE_2, "", wxPoint(170, 396), wxSize(57, 30));
    course_twelve_grade_2 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_2, "", wxPoint(275, 396), wxSize(20, 30));
    course_twelve_2->SetMaxLength(6);
    course_twelve_grade_2->SetMaxLength(1);
    course_twelve_2->SetHint("COURSE");
    course_twelve_grade_2->SetHint("A");

    calculate_gp_2 = new wxButton(this, ID_CALCULATE_200_LEVEL_GP, "Display GP", wxPoint(207.5, 445), wxSize(75, 50));

    // 300 Level
    wxString level_text_3 = wxT("300 LEVEL");
    wxStaticText *st_3 = new wxStaticText(this, wxID_ANY, level_text_3, wxPoint(382, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_3 = new wxTextCtrl(this, ID_COURSE_ONE_3, "", wxPoint(335, 44), wxSize(57, 30));
    course_one_grade_3 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_3, "", wxPoint(440, 44), wxSize(20, 30));
    course_one_3->SetMaxLength(6);
    course_one_grade_3->SetMaxLength(1);
    course_one_3->SetHint("COURSE");
    course_one_grade_3->SetHint("A");

    course_two_3 = new wxTextCtrl(this, ID_COURSE_TWO_3, "", wxPoint(335, 76), wxSize(57, 30));
    course_two_grade_3 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_3, "", wxPoint(440, 76), wxSize(20, 30));
    course_two_3->SetMaxLength(6);
    course_two_grade_3->SetMaxLength(1);
    course_two_3->SetHint("COURSE");
    course_two_grade_3->SetHint("A");

    course_three_3 = new wxTextCtrl(this, ID_COURSE_THREE_3, "", wxPoint(335, 108), wxSize(57, 30));
    course_three_grade_3 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_3, "", wxPoint(440, 108), wxSize(20, 30));
    course_three_3->SetMaxLength(6);
    course_three_grade_3->SetMaxLength(1);
    course_three_3->SetHint("COURSE");
    course_three_grade_3->SetHint("A");

    course_four_3 = new wxTextCtrl(this, ID_COURSE_FOUR_3, "", wxPoint(335, 140), wxSize(57, 30));
    course_four_grade_3 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_3, "", wxPoint(440, 140), wxSize(20, 30));
    course_four_3->SetMaxLength(6);
    course_four_grade_3->SetMaxLength(1);
    course_four_3->SetHint("COURSE");
    course_four_grade_3->SetHint("A");

    course_five_3 = new wxTextCtrl(this, ID_COURSE_FIVE_3, "", wxPoint(335, 172), wxSize(57, 30));
    course_five_grade_3 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_3, "", wxPoint(440, 172), wxSize(20, 30));
    course_five_3->SetMaxLength(6);
    course_five_grade_3->SetMaxLength(1);
    course_five_3->SetHint("COURSE");
    course_five_grade_3->SetHint("A");

    course_six_3 = new wxTextCtrl(this, ID_COURSE_SIX_3, "", wxPoint(335, 204), wxSize(57, 30));
    course_six_grade_3 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_3, "", wxPoint(440, 204), wxSize(20, 30));
    course_six_3->SetMaxLength(6);
    course_six_grade_3->SetMaxLength(1);
    course_six_3->SetHint("COURSE");
    course_six_grade_3->SetHint("A");

    course_seven_3 = new wxTextCtrl(this, ID_COURSE_SEVEN_3, "", wxPoint(335, 236), wxSize(57, 30));
    course_seven_grade_3 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_3, "", wxPoint(440, 236), wxSize(20, 30));
    course_seven_3->SetMaxLength(6);
    course_seven_grade_3->SetMaxLength(1);
    course_seven_3->SetHint("COURSE");
    course_seven_grade_3->SetHint("A");

    course_eight_3 = new wxTextCtrl(this, ID_COURSE_EIGHT_3, "", wxPoint(335, 268), wxSize(57, 30));
    course_eight_grade_3 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_3, "", wxPoint(440, 268), wxSize(20, 30));
    course_eight_3->SetMaxLength(6);
    course_eight_grade_3->SetMaxLength(1);
    course_eight_3->SetHint("COURSE");
    course_eight_grade_3->SetHint("A");

    course_nine_3 = new wxTextCtrl(this, ID_COURSE_NINE_3, "", wxPoint(335, 300), wxSize(57, 30));
    course_nine_grade_3 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_3, "", wxPoint(440, 300), wxSize(20, 30));
    course_nine_3->SetMaxLength(6);
    course_nine_grade_3->SetMaxLength(1);
    course_nine_3->SetHint("COURSE");
    course_nine_grade_3->SetHint("A");

    course_ten_3 = new wxTextCtrl(this, ID_COURSE_TEN_3, "", wxPoint(335, 332), wxSize(57, 30));
    course_ten_grade_3 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_3, "", wxPoint(440, 332), wxSize(20, 30));
    course_ten_3->SetMaxLength(6);
    course_ten_grade_3->SetMaxLength(1);
    course_ten_3->SetHint("COURSE");
    course_ten_grade_3->SetHint("A");

    course_eleven_3 = new wxTextCtrl(this, ID_COURSE_ELEVEN_3, "", wxPoint(335, 364), wxSize(57, 30));
    course_eleven_grade_3 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_3, "", wxPoint(440, 364), wxSize(20, 30));
    course_eleven_3->SetMaxLength(6);
    course_eleven_grade_3->SetMaxLength(1);
    course_eleven_3->SetHint("COURSE");
    course_eleven_grade_3->SetHint("A");

    course_twelve_3 = new wxTextCtrl(this, ID_COURSE_TWELVE_3, "", wxPoint(335, 396), wxSize(57, 30));
    course_twelve_grade_3 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_3, "", wxPoint(440, 396), wxSize(20, 30));
    course_twelve_3->SetMaxLength(6);
    course_twelve_grade_3->SetMaxLength(1);
    course_twelve_3->SetHint("COURSE");
    course_twelve_grade_3->SetHint("A");

    calculate_gp_3 = new wxButton(this, ID_CALCULATE_300_LEVEL_GP, "Display GP", wxPoint(372.5, 445), wxSize(75, 50));

    // 400 Level
    wxString level_text_4 = wxT("400 LEVEL");
    wxStaticText *st_4 = new wxStaticText(this, wxID_ANY, level_text_4, wxPoint(547, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_4 = new wxTextCtrl(this, ID_COURSE_ONE_4, "", wxPoint(500, 44), wxSize(57, 30));
    course_one_grade_4 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_4, "", wxPoint(605, 44), wxSize(20, 30));
    course_one_4->SetMaxLength(6);
    course_one_grade_4->SetMaxLength(1);
    course_one_4->SetHint("COURSE");
    course_one_grade_4->SetHint("A");

    course_two_4 = new wxTextCtrl(this, ID_COURSE_TWO_4, "", wxPoint(500, 76), wxSize(57, 30));
    course_two_grade_4 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_4, "", wxPoint(605, 76), wxSize(20, 30));
    course_two_4->SetMaxLength(6);
    course_two_grade_4->SetMaxLength(1);
    course_two_4->SetHint("COURSE");
    course_two_grade_4->SetHint("A");

    course_three_4 = new wxTextCtrl(this, ID_COURSE_THREE_4, "", wxPoint(500, 108), wxSize(57, 30));
    course_three_grade_4 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_4, "", wxPoint(605, 108), wxSize(20, 30));
    course_three_4->SetMaxLength(6);
    course_three_grade_4->SetMaxLength(1);
    course_three_4->SetHint("COURSE");
    course_three_grade_4->SetHint("A");

    course_four_4 = new wxTextCtrl(this, ID_COURSE_FOUR_4, "", wxPoint(500, 140), wxSize(57, 30));
    course_four_grade_4 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_4, "", wxPoint(605, 140), wxSize(20, 30));
    course_four_4->SetMaxLength(6);
    course_four_grade_4->SetMaxLength(1);
    course_four_4->SetHint("COURSE");
    course_four_grade_4->SetHint("A");

    course_five_4 = new wxTextCtrl(this, ID_COURSE_FIVE_4, "", wxPoint(500, 172), wxSize(57, 30));
    course_five_grade_4 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_4, "", wxPoint(605, 172), wxSize(20, 30));
    course_five_4->SetMaxLength(6);
    course_five_grade_4->SetMaxLength(1);
    course_five_4->SetHint("COURSE");
    course_five_grade_4->SetHint("A");

    course_six_4 = new wxTextCtrl(this, ID_COURSE_SIX_4, "", wxPoint(500, 204), wxSize(57, 30));
    course_six_grade_4 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_4, "", wxPoint(605, 204), wxSize(20, 30));
    course_six_4->SetMaxLength(6);
    course_six_grade_4->SetMaxLength(1);
    course_six_4->SetHint("COURSE");
    course_six_grade_4->SetHint("A");

    course_seven_4 = new wxTextCtrl(this, ID_COURSE_SEVEN_4, "", wxPoint(500, 236), wxSize(57, 30));
    course_seven_grade_4 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_4, "", wxPoint(605, 236), wxSize(20, 30));
    course_seven_4->SetMaxLength(6);
    course_seven_grade_4->SetMaxLength(1);
    course_seven_4->SetHint("COURSE");
    course_seven_grade_4->SetHint("A");

    course_eight_4 = new wxTextCtrl(this, ID_COURSE_EIGHT_4, "", wxPoint(500, 268), wxSize(57, 30));
    course_eight_grade_4 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_4, "", wxPoint(605, 268), wxSize(20, 30));
    course_eight_4->SetMaxLength(6);
    course_eight_grade_4->SetMaxLength(1);
    course_eight_4->SetHint("COURSE");
    course_eight_grade_4->SetHint("A");

    course_nine_4 = new wxTextCtrl(this, ID_COURSE_NINE_4, "", wxPoint(500, 300), wxSize(57, 30));
    course_nine_grade_4 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_4, "", wxPoint(605, 300), wxSize(20, 30));
    course_nine_4->SetMaxLength(6);
    course_nine_grade_4->SetMaxLength(1);
    course_nine_4->SetHint("COURSE");
    course_nine_grade_4->SetHint("A");

    course_ten_4 = new wxTextCtrl(this, ID_COURSE_TEN_4, "", wxPoint(500, 332), wxSize(57, 30));
    course_ten_grade_4 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_4, "", wxPoint(605, 332), wxSize(20, 30));
    course_ten_4->SetMaxLength(6);
    course_ten_grade_4->SetMaxLength(1);
    course_ten_4->SetHint("COURSE");
    course_ten_grade_4->SetHint("A");

    course_eleven_4 = new wxTextCtrl(this, ID_COURSE_ELEVEN_4, "", wxPoint(500, 364), wxSize(57, 30));
    course_eleven_grade_4 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_4, "", wxPoint(605, 364), wxSize(20, 30));
    course_eleven_4->SetMaxLength(6);
    course_eleven_grade_4->SetMaxLength(1);
    course_eleven_4->SetHint("COURSE");
    course_eleven_grade_4->SetHint("A");

    course_twelve_4 = new wxTextCtrl(this, ID_COURSE_TWELVE_4, "", wxPoint(500, 396), wxSize(57, 30));
    course_twelve_grade_4 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_4, "", wxPoint(605, 396), wxSize(20, 30));
    course_twelve_4->SetMaxLength(6);
    course_twelve_grade_4->SetMaxLength(1);
    course_twelve_4->SetHint("COURSE");
    course_twelve_grade_4->SetHint("A");

    calculate_gp_4 = new wxButton(this, ID_CALCULATE_400_LEVEL_GP, "Display GP", wxPoint(537.5, 445), wxSize(75, 50));

    // 500 Level
    wxString level_text_5 = wxT("500 LEVEL");
    wxStaticText *st_5 = new wxStaticText(this, wxID_ANY, level_text_5, wxPoint(712, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_5 = new wxTextCtrl(this, ID_COURSE_ONE_5, "", wxPoint(665, 44), wxSize(57, 30));
    course_one_grade_5 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_5, "", wxPoint(770, 44), wxSize(20, 30));
    course_one_5->SetMaxLength(6);
    course_one_grade_5->SetMaxLength(1);
    course_one_5->SetHint("COURSE");
    course_one_grade_5->SetHint("A");

    course_two_5 = new wxTextCtrl(this, ID_COURSE_TWO_5, "", wxPoint(665, 76), wxSize(57, 30));
    course_two_grade_5 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_5, "", wxPoint(770, 76), wxSize(20, 30));
    course_two_5->SetMaxLength(6);
    course_two_grade_5->SetMaxLength(1);
    course_two_5->SetHint("COURSE");
    course_two_grade_5->SetHint("A");

    course_three_5 = new wxTextCtrl(this, ID_COURSE_THREE_5, "", wxPoint(665, 108), wxSize(57, 30));
    course_three_grade_5 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_5, "", wxPoint(770, 108), wxSize(20, 30));
    course_three_5->SetMaxLength(6);
    course_three_grade_5->SetMaxLength(1);
    course_three_5->SetHint("COURSE");
    course_three_grade_5->SetHint("A");

    course_four_5 = new wxTextCtrl(this, ID_COURSE_FOUR_5, "", wxPoint(665, 140), wxSize(57, 30));
    course_four_grade_5 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_5, "", wxPoint(770, 140), wxSize(20, 30));
    course_four_5->SetMaxLength(6);
    course_four_grade_5->SetMaxLength(1);
    course_four_5->SetHint("COURSE");
    course_four_grade_5->SetHint("A");

    course_five_5 = new wxTextCtrl(this, ID_COURSE_FIVE_5, "", wxPoint(665, 172), wxSize(57, 30));
    course_five_grade_5 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_5, "", wxPoint(770, 172), wxSize(20, 30));
    course_five_5->SetMaxLength(6);
    course_five_grade_5->SetMaxLength(1);
    course_five_5->SetHint("COURSE");
    course_five_grade_5->SetHint("A");

    course_six_5 = new wxTextCtrl(this, ID_COURSE_SIX_5, "", wxPoint(665, 204), wxSize(57, 30));
    course_six_grade_5 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_5, "", wxPoint(770, 204), wxSize(20, 30));
    course_six_5->SetMaxLength(6);
    course_six_grade_5->SetMaxLength(1);
    course_six_5->SetHint("COURSE");
    course_six_grade_5->SetHint("A");

    course_seven_5 = new wxTextCtrl(this, ID_COURSE_SEVEN_5, "", wxPoint(665, 236), wxSize(57, 30));
    course_seven_grade_5 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_5, "", wxPoint(770, 236), wxSize(20, 30));
    course_seven_5->SetMaxLength(6);
    course_seven_grade_5->SetMaxLength(1);
    course_seven_5->SetHint("COURSE");
    course_seven_grade_5->SetHint("A");

    course_eight_5 = new wxTextCtrl(this, ID_COURSE_EIGHT_5, "", wxPoint(665, 268), wxSize(57, 30));
    course_eight_grade_5 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_5, "", wxPoint(770, 268), wxSize(20, 30));
    course_eight_5->SetMaxLength(6);
    course_eight_grade_5->SetMaxLength(1);
    course_eight_5->SetHint("COURSE");
    course_eight_grade_5->SetHint("A");

    course_nine_5 = new wxTextCtrl(this, ID_COURSE_NINE_5, "", wxPoint(665, 300), wxSize(57, 30));
    course_nine_grade_5 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_5, "", wxPoint(770, 300), wxSize(20, 30));
    course_nine_5->SetMaxLength(6);
    course_nine_grade_5->SetMaxLength(1);
    course_nine_5->SetHint("COURSE");
    course_nine_grade_5->SetHint("A");

    course_ten_5 = new wxTextCtrl(this, ID_COURSE_TEN_5, "", wxPoint(665, 332), wxSize(57, 30));
    course_ten_grade_5 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_5, "", wxPoint(770, 332), wxSize(20, 30));
    course_ten_5->SetMaxLength(6);
    course_ten_grade_5->SetMaxLength(1);
    course_ten_5->SetHint("COURSE");
    course_ten_grade_5->SetHint("A");

    course_eleven_5 = new wxTextCtrl(this, ID_COURSE_ELEVEN_5, "", wxPoint(665, 364), wxSize(57, 30));
    course_eleven_grade_5 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_5, "", wxPoint(770, 364), wxSize(20, 30));
    course_eleven_5->SetMaxLength(6);
    course_eleven_grade_5->SetMaxLength(1);
    course_eleven_5->SetHint("COURSE");
    course_eleven_grade_5->SetHint("A");

    course_twelve_5 = new wxTextCtrl(this, ID_COURSE_TWELVE_5, "", wxPoint(665, 396), wxSize(57, 30));
    course_twelve_grade_5 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_5, "", wxPoint(770, 396), wxSize(20, 30));
    course_twelve_5->SetMaxLength(6);
    course_twelve_grade_5->SetMaxLength(1);
    course_twelve_5->SetHint("COURSE");
    course_twelve_grade_5->SetHint("A");

    calculate_gp_5 = new wxButton(this, ID_CALCULATE_500_LEVEL_GP, "Display GP", wxPoint(702.5, 445), wxSize(75, 50));

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_MENU, &MyFrame::OnHelp, this, wxID_HELP);

    calculate_cgpa = new wxButton(this, ID_CALCULATE_CGPA, "Show CGPA", wxPoint(335, 510), wxSize(155, 50));

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

void MyFrame::OnOneHundredLevelDisplayGpButtonClicked(wxCommandEvent& event) {
    /*using namespace std;

    wxString course_check = wxT("MEE211");
    wxString course_check_2 = wxT("MEE212");
    wxString collected_value = course_one->GetValue();

    std::map<wxString, int> first_courses;
    first_courses["MEE211"] = 3;
    first_courses["MEE212"] = 2; */

    using namespace std;

    std::map<wxString, float> all_courses_dictionary;

    all_courses_dictionary["CHM111"] = 3.0;
    all_courses_dictionary["CHM113"] = 3.0;
    all_courses_dictionary["MTH111"] = 3.0;
    all_courses_dictionary["MTH112"] = 3.0;
    all_courses_dictionary["PHY111"] = 3.0;
    all_courses_dictionary["PHY113"] = 3.0;
    all_courses_dictionary["GST111"] = 2.0;
    all_courses_dictionary["GST112"] = 2.0;
    all_courses_dictionary["CHM122"] = 3.0;
    all_courses_dictionary["CHM124"] = 3.0;
    all_courses_dictionary["MTH123"] = 3.0;
    all_courses_dictionary["MTH125"] = 3.0;
    all_courses_dictionary["PHY109"] = 2.0;
    all_courses_dictionary["PHY124"] = 4.0;
    all_courses_dictionary["GST121"] = 2.0;
    all_courses_dictionary["GST122"] = 2.0;
    all_courses_dictionary["GST123"] = 2.0;
    all_courses_dictionary["ECP281"] = 2.0;
    all_courses_dictionary["ENS211"] = 2.0;
    all_courses_dictionary["EMA281"] = 3.0;
    all_courses_dictionary["EMA282"] = 4.0;
    all_courses_dictionary["EMA381"] = 3.0;
    all_courses_dictionary["EMA281"] = 4.0;
    all_courses_dictionary["EMA481"] = 3.0;
    all_courses_dictionary["MEE211"] = 3.0;
    all_courses_dictionary["MEE221"] = 3.0;
    all_courses_dictionary["EEE211"] = 3.0;
    all_courses_dictionary["CVE211"] = 3.0;
    all_courses_dictionary["PRE211"] = 2.0;
    all_courses_dictionary["PRE211"] = 2.0;
    all_courses_dictionary["CHE211"] = 2.0;
    all_courses_dictionary["ELA201"] = 2.0;
    all_courses_dictionary["MEE212"] = 3.0;
    all_courses_dictionary["EEE211"] = 3.0;
    all_courses_dictionary["MEE222"] = 3.0;
    all_courses_dictionary["CHE222"] = 3.0;
    all_courses_dictionary["CHE212"] = 2.0;
    all_courses_dictionary["PRE212"] = 2.0;
    all_courses_dictionary["ELA202"] = 2.0;
    all_courses_dictionary["CVE212"] = 3.0;
    all_courses_dictionary["EEE272"] = 2.0;
    all_courses_dictionary["MEE351"] = 2.0;
    all_courses_dictionary["MEE361"] = 2.0;
    all_courses_dictionary["CHE321"] = 3.0;
    all_courses_dictionary["CHE331"] = 2.0;
    all_courses_dictionary["CHE341"] = 3.0;
    all_courses_dictionary["CHE251"] = 3.0;
    all_courses_dictionary["CHE321"] = 3.0;
    all_courses_dictionary["CHE301"] = 2.0;
    all_courses_dictionary["PRE311"] = 2.0;
    all_courses_dictionary["CHE321"] = 3.0;
    all_courses_dictionary["CVE341"] = 3.0;
    all_courses_dictionary["CVE313"] = 3.0;
    all_courses_dictionary["CVE311"] = 3.0;
    all_courses_dictionary["STE311"] = 3.0;
    all_courses_dictionary["CPE381"] = 3.0;
    all_courses_dictionary["CPE375"] = 3.0;
    all_courses_dictionary["CPE371"] = 3.0;
    all_courses_dictionary["CPE311"] = 3.0;
    all_courses_dictionary["CPE381"] = 2.0;
    all_courses_dictionary["CPE377"] = 2.0;
    all_courses_dictionary["CPE301"] = 2.0;
    all_courses_dictionary["CHE312"] = 2.0;
    all_courses_dictionary["CHE322"] = 3.0;
    all_courses_dictionary["CHE332"] = 3.0;
    all_courses_dictionary["CHE352"] = 3.0;
    all_courses_dictionary["CHE362"] = 3.0;
    all_courses_dictionary["CHE372"] = 3.0;
    all_courses_dictionary["CHE302"] = 2.0;
    all_courses_dictionary["MEE362"] = 2.0;
    all_courses_dictionary["CVE312"] = 3.0;
    all_courses_dictionary["CVE314"] = 2.0;
    all_courses_dictionary["CVE342"] = 2.0;
    all_courses_dictionary["CVE344"] = 2.0;
    all_courses_dictionary["CVE352"] = 3.0;
    all_courses_dictionary["CVE316"] = 2.0;
    all_courses_dictionary["STE312"] = 3.0;
    all_courses_dictionary["CPE382"] = 3.0;
    all_courses_dictionary["CPE376"] = 3.0;
    all_courses_dictionary["CPE312"] = 3.0;
    all_courses_dictionary["CPE314"] = 3.0;
    all_courses_dictionary["CPE316"] = 3.0;
    all_courses_dictionary["CPE322"] = 3.0;
    all_courses_dictionary["CPE372"] = 3.0;
    all_courses_dictionary["CPE378"] = 3.0;
    all_courses_dictionary["EEE331"] = 3.0;
    all_courses_dictionary["EEE371"] = 3.0;
    all_courses_dictionary["EEE312"] = 3.0;
    all_courses_dictionary["EEE376"] = 3.0;
    all_courses_dictionary["EEE311"] = 3.0;
    all_courses_dictionary["EEE316"] = 3.0;
    all_courses_dictionary["EEE332"] = 3.0;
    all_courses_dictionary["EEE372"] = 2.0;
    all_courses_dictionary["MEE322"] = 3.0;
    all_courses_dictionary["MEE312"] = 3.0;
    all_courses_dictionary["MEE332"] = 2.0;
    all_courses_dictionary["MEE342"] = 2.0;
    all_courses_dictionary["MEE372"] = 1.0;
    all_courses_dictionary["PEE311"] = 3.0;
    all_courses_dictionary["PEE322"] = 4.0;
    all_courses_dictionary["PEE342"] = 3.0;
    all_courses_dictionary["PEE332"] = 3.0;
    all_courses_dictionary["PRE222"] = 2.0;
    all_courses_dictionary["PRE321"] = 3.0;
    all_courses_dictionary["PRE322"] = 2.0;
    all_courses_dictionary["PRE332"] = 2.0;
    all_courses_dictionary["PRE314"] = 2.0;
    all_courses_dictionary["ELA302"] = 2.0;
    all_courses_dictionary["CHE411"] = 2.0;
    all_courses_dictionary["CHE421"] = 3.0;
    all_courses_dictionary["CHE431"] = 3.0;
    all_courses_dictionary["CHE441"] = 3.0;
    all_courses_dictionary["CHE451"] = 3.0;
    all_courses_dictionary["CHE461"] = 3.0;
    all_courses_dictionary["CHE471"] = 2.0;
    all_courses_dictionary["CHE481"] = 2.0;
    all_courses_dictionary["CHE401"] = 2.0;
    all_courses_dictionary["CHE411"] = 2.0;
    all_courses_dictionary["CVE411"] = 2.0;
    all_courses_dictionary["CVE415"] = 2.0;
    all_courses_dictionary["CVE421"] = 2.0;
    all_courses_dictionary["CVE423"] = 3.0;
    all_courses_dictionary["CVE431"] = 3.0;
    all_courses_dictionary["CVE441"] = 2.0;
    all_courses_dictionary["CVE451"] = 3.0;
    all_courses_dictionary["CVE471"] = 2.0;
    all_courses_dictionary["CVE481"] = 3.0;
    all_courses_dictionary["ELA401"] = 2.0;
    all_courses_dictionary["STE411"] = 2.0;
    all_courses_dictionary["STE413"] = 2.0;
    all_courses_dictionary["STE415"] = 2.0;
    all_courses_dictionary["STE417"] = 2.0;
    all_courses_dictionary["STE425"] = 2.0;
    all_courses_dictionary["CPE481"] = 2.0;
    all_courses_dictionary["CPE481"] = 3.0;
    all_courses_dictionary["CPE475"] = 3.0;
    all_courses_dictionary["CPE423"] = 3.0;
    all_courses_dictionary["CPE451"] = 3.0;
    all_courses_dictionary["CPE477"] = 3.0;
    all_courses_dictionary["CPE471"] = 3.0;
    all_courses_dictionary["CPE473"] = 3.0;
    all_courses_dictionary["EEE431"] = 3.0;
    all_courses_dictionary["EEE433"] = 3.0;
    all_courses_dictionary["EEE451"] = 3.0;
    all_courses_dictionary["EEE471"] = 3.0;
    all_courses_dictionary["EEE473"] = 3.0;
    all_courses_dictionary["EEE453"] = 3.0;
    all_courses_dictionary["MEE411"] = 3.0;
    all_courses_dictionary["MEE421"] = 3.0;
    all_courses_dictionary["MEE431"] = 2.0;
    all_courses_dictionary["MEE441"] = 2.0;
    all_courses_dictionary["MEE451"] = 2.0;
    all_courses_dictionary["MEE461"] = 3.0;
    all_courses_dictionary["MEE471"] = 2.0;
    all_courses_dictionary["PEE431"] = 2.0;
    all_courses_dictionary["PEE441"] = 3.0;
    all_courses_dictionary["PEE451"] = 3.0;
    all_courses_dictionary["PEE461"] = 3.0;
    all_courses_dictionary["PEE471"] = 3.0;
    all_courses_dictionary["PEE401"] = 2.0;
    all_courses_dictionary["PRE411"] = 3.0;
    all_courses_dictionary["PRE441"] = 3.0;
    all_courses_dictionary["PRE431"] = 3.0;
    all_courses_dictionary["PRE421"] = 3.0;
    all_courses_dictionary["PRE451"] = 3.0;
    all_courses_dictionary["PRE461"] = 3.0;
    all_courses_dictionary["PRE401"] = 2.0;
    all_courses_dictionary["PRE473"] = 3.0;
    all_courses_dictionary["CED300"] = 2.0;
    all_courses_dictionary["CHE511"] = 2.0;
    all_courses_dictionary["CHE521"] = 2.0;
    all_courses_dictionary["CHE531"] = 3.0;
    all_courses_dictionary["CHE541"] = 3.0;
    all_courses_dictionary["CHE521"] = 2.0;
    all_courses_dictionary["CHE571"] = 3.0;
    all_courses_dictionary["CHE591"] = 3.0;
    all_courses_dictionary["CHE581"] = 3.0;
    all_courses_dictionary["CHE581"] = 2.0;
    all_courses_dictionary["CVE513"] = 2.0;
    all_courses_dictionary["CVE521"] = 2.0;
    all_courses_dictionary["CVE523"] = 2.0;
    all_courses_dictionary["CVE531"] = 3.0;
    all_courses_dictionary["CVE541"] = 2.0;
    all_courses_dictionary["CVE521"] = 3.0;
    all_courses_dictionary["CVE581"] = 2.0;
    all_courses_dictionary["STE511"] = 2.0;
    all_courses_dictionary["STE513"] = 2.0;
    all_courses_dictionary["STE515"] = 3.0;
    all_courses_dictionary["STE517"] = 2.0;
    all_courses_dictionary["STE501"] = 3.0;
    all_courses_dictionary["CPE591"] = 3.0;
    all_courses_dictionary["CPE571"] = 3.0;
    all_courses_dictionary["CPE553"] = 3.0;
    all_courses_dictionary["CPE573"] = 3.0;
    all_courses_dictionary["CPE575"] = 3.0;
    all_courses_dictionary["CPE590"] = 0.0;
    all_courses_dictionary["CPE590"] = 3.0;
    all_courses_dictionary["EEE531"] = 3.0;
    all_courses_dictionary["EEE533"] = 3.0;
    all_courses_dictionary["EEE591"] = 3.0;
    all_courses_dictionary["EEE571"] = 3.0;
    all_courses_dictionary["EEE573"] = 3.0;
    all_courses_dictionary["EEE522"] = 3.0;
    all_courses_dictionary["EEE562"] = 3.0;
    all_courses_dictionary["EEE516"] = 3.0;
    all_courses_dictionary["ECP576"] = 3.0;
    all_courses_dictionary["EEE524"] = 3.0;
    all_courses_dictionary["EEE532"] = 3.0;
    all_courses_dictionary["EEE534"] = 3.0;
    all_courses_dictionary["EEE536"] = 3.0;
    all_courses_dictionary["EEE538"] = 3.0;
    all_courses_dictionary["EEE552"] = 3.0;
    all_courses_dictionary["EEE572"] = 3.0;
    all_courses_dictionary["EEE574"] = 3.0;
    all_courses_dictionary["EEE576"] = 3.0;
    all_courses_dictionary["EEE578"] = 3.0;
    all_courses_dictionary["MEE501"] = 3.0;
    all_courses_dictionary["MEE505"] = 2.0;
    all_courses_dictionary["MEE511"] = 3.0;
    all_courses_dictionary["MEE521"] = 3.0;
    all_courses_dictionary["MEE531"] = 3.0;
    all_courses_dictionary["MEE541"] = 3.0;
    all_courses_dictionary["MEE551"] = 2.0;
    all_courses_dictionary["MEE561"] = 3.0;
    all_courses_dictionary["MEE571"] = 2.0;
    all_courses_dictionary["MEE591"] = 3.0;
    all_courses_dictionary["MEE502"] = 3.0;
    all_courses_dictionary["MEE506"] = 2.0;
    all_courses_dictionary["MEE512"] = 3.0;
    all_courses_dictionary["MEE522"] = 3.0;
    all_courses_dictionary["MEE532"] = 3.0;
    all_courses_dictionary["MEE542"] = 3.0;
    all_courses_dictionary["MEE552"] = 2.0;
    all_courses_dictionary["MEE562"] = 3.0;
    all_courses_dictionary["MEE572"] = 2.0;
    all_courses_dictionary["MEE582"] = 3.0;
    all_courses_dictionary["MEE592"] = 3.0;
    all_courses_dictionary["PEE531"] = 3.0;
    all_courses_dictionary["PEE561"] = 3.0;
    all_courses_dictionary["PEE571"] = 3.0;
    all_courses_dictionary["PEE581"] = 3.0;
    all_courses_dictionary["PEE591"] = 3.0;
    all_courses_dictionary["PEE500"] = 3.0;
    all_courses_dictionary["PEE572"] = 3.0;
    all_courses_dictionary["PEE582"] = 3.0;
    all_courses_dictionary["PEE562"] = 3.0;
    all_courses_dictionary["PEE532"] = 3.0;
    all_courses_dictionary["PEE592"] = 3.0;
    all_courses_dictionary["PRE541"] = 2.0;
    all_courses_dictionary["PRE572"] = 2.0;
    all_courses_dictionary["PRE571"] = 3.0;
    all_courses_dictionary["PRE531"] = 3.0;
    all_courses_dictionary["PRE581"] = 3.0;
    all_courses_dictionary["PRE521"] = 3.0;
    all_courses_dictionary["PRE561"] = 2.0;
    all_courses_dictionary["PRE551"] = 2.0;
    all_courses_dictionary["PRE501"] = 3.0;
    all_courses_dictionary["PRE592"] = 3.0;
    all_courses_dictionary["PRE522"] = 3.0;
    all_courses_dictionary["PRE541"] = 2.0;
    all_courses_dictionary["PRE572"] = 2.0;
    all_courses_dictionary["PRE571"] = 3.0;
    all_courses_dictionary["PRE531"] = 3.0;
    all_courses_dictionary["PRE581"] = 3.0;
    all_courses_dictionary["PRE521"] = 3.0;
    all_courses_dictionary["PRE561"] = 2.0;
    all_courses_dictionary["PRE551"] = 2.0;
    all_courses_dictionary["PRE501"] = 3.0;
    all_courses_dictionary["PRE592"] = 3.0;
    all_courses_dictionary["PRE522"] = 3.0;
    all_courses_dictionary["PRE532"] = 3.0;
    all_courses_dictionary["PRE562"] = 2.0;
    all_courses_dictionary["PRE564"] = 2.0;
    all_courses_dictionary["CVE515"] = 3.0;
    all_courses_dictionary["CVE525"] = 3.0;
    all_courses_dictionary["CVE535"] = 3.0;
    all_courses_dictionary["CVE545"] = 3.0;
    all_courses_dictionary["CVE565"] = 3.0;
    all_courses_dictionary["CVE567"] = 3.0;
    all_courses_dictionary["CHE512"] = 2.0;
    all_courses_dictionary["CHE522"] = 3.0;
    all_courses_dictionary["CHE532"] = 3.0;
    all_courses_dictionary["CHE542"] = 3.0;
    all_courses_dictionary["CHE552"] = 3.0;
    all_courses_dictionary["CHE562"] = 3.0;
    all_courses_dictionary["CHE500"] = 3.0;
    all_courses_dictionary["CVE572"] = 3.0;
    all_courses_dictionary["CVE512"] = 2.0;
    all_courses_dictionary["CVE514"] = 2.0;
    all_courses_dictionary["CVE522"] = 2.0;
    all_courses_dictionary["CVE542"] = 2.0;
    all_courses_dictionary["CVE502"] = 2.0;
    all_courses_dictionary["STE512"] = 2.0;
    all_courses_dictionary["STE514"] = 2.0;
    all_courses_dictionary["STE516"] = 2.0;
    all_courses_dictionary["STE518"] = 2.0;
    all_courses_dictionary["STE502"] = 3.0;
    all_courses_dictionary["EEE590"] = 0.0;
    all_courses_dictionary["EEE500"] = 3.0;
    all_courses_dictionary["CPE552"] = 3.0;
    all_courses_dictionary["CPE586"] = 3.0;
    all_courses_dictionary["CPE578"] = 3.0;
    all_courses_dictionary["CPE534"] = 3.0;
    all_courses_dictionary["CPE554"] = 3.0;
    all_courses_dictionary["CPE556"] = 3.0;
    all_courses_dictionary["CPE522"] = 3.0;
    all_courses_dictionary["CPE578"] = 3.0;
    all_courses_dictionary["CPE512"] = 3.0;
    all_courses_dictionary["STE532"] = 3.0;
    all_courses_dictionary["STE524"] = 3.0;
    all_courses_dictionary["STE536"] = 3.0;
    all_courses_dictionary["CVE516"] = 3.0;
    all_courses_dictionary["CVE526"] = 3.0;
    all_courses_dictionary["CVE536"] = 3.0;
    all_courses_dictionary["CVE546"] = 3.0;
    all_courses_dictionary["CVE566"] = 3.0;
    all_courses_dictionary["A"] = 5.0;
    all_courses_dictionary["B"] = 4.0;
    all_courses_dictionary["C"] = 3.0;
    all_courses_dictionary["D"] = 2.0;
    all_courses_dictionary["E"] = 1.0;
    all_courses_dictionary["F"] = 0.0;
    all_courses_dictionary[""] = 0.0;


    /*if (all_courses_dictionary.find(course_one->GetValue()) != all_courses_dictionary.end()) {
        wxMessageBox(course_one->GetValue());
        // wxMessageBox(first_courses[colllected_value]);
    }*/

    float first_course = all_courses_dictionary[course_one->GetValue()];
    float first_course_grade = all_courses_dictionary[course_one_grade->GetValue()];
    float second_course = all_courses_dictionary[course_two->GetValue()];
    float second_course_grade = all_courses_dictionary[course_two_grade->GetValue()];
    float third_course = all_courses_dictionary[course_three->GetValue()];
    float third_course_grade = all_courses_dictionary[course_three_grade->GetValue()];
    float fourth_course = all_courses_dictionary[course_four->GetValue()];
    float fourth_course_grade = all_courses_dictionary[course_four_grade->GetValue()];
    float fifth_course = all_courses_dictionary[course_five->GetValue()];
    float fifth_course_grade = all_courses_dictionary[course_five_grade->GetValue()];
    float sixth_course = all_courses_dictionary[course_six->GetValue()];
    float sixth_course_grade = all_courses_dictionary[course_six_grade->GetValue()];
    float seventh_course = all_courses_dictionary[course_seven->GetValue()];
    float seventh_course_grade = all_courses_dictionary[course_seven_grade->GetValue()];
    float eighth_course = all_courses_dictionary[course_eight->GetValue()];
    float eighth_course_grade = all_courses_dictionary[course_eight_grade->GetValue()];
    float nineth_course = all_courses_dictionary[course_nine->GetValue()];
    float nineth_course_grade = all_courses_dictionary[course_nine_grade->GetValue()];
    float tenth_course = all_courses_dictionary[course_ten->GetValue()];
    float tenth_course_grade = all_courses_dictionary[course_ten_grade->GetValue()];
    float eleventh_course = all_courses_dictionary[course_eleven->GetValue()];
    float eleventh_course_grade = all_courses_dictionary[course_eleven_grade->GetValue()];
    float twelveth_course = all_courses_dictionary[course_twelve->GetValue()];
    float twelveth_course_grade = all_courses_dictionary[course_twelve_grade->GetValue()];

    float first_year_course_credit_load_sum = (first_course * first_course_grade) + (second_course * second_course_grade) + (third_course * third_course_grade) + (fourth_course + fourth_course_grade) + (fifth_course * fifth_course_grade) + (sixth_course * sixth_course_grade) + (seventh_course * seventh_course_grade) + (eighth_course * eighth_course_grade) + (nineth_course * nineth_course_grade) + (tenth_course * tenth_course_grade) + (eleventh_course * eleventh_course_grade) + (twelveth_course * twelveth_course_grade);
    float first_year_credit_load_sum = first_course + second_course + third_course + fourth_course + fifth_course + sixth_course + seventh_course + eighth_course + nineth_course + tenth_course + eleventh_course + twelveth_course;

    float first_year_total_gp = first_year_course_credit_load_sum / first_year_credit_load_sum;

    // convert the gp to wxString 

    wxString first_year_total_gp_wxstring = wxString::Format(wxT("%f"), first_year_total_gp);

    wxMessageBox("100 Level Grade Pending: " + first_year_total_gp_wxstring);

    event.Skip();
}