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
#include <cmath>
#include <math.h>

#include <string>

//g++ gp_and_cgpa_calculator.cpp `wx-config --cxxflags --libs` -o gpCalculator --verbose
//g++ gp_and_cgpa_calculator.cpp `wx-config --cxxflags --libs` -o gpCalculator --verbose && ./gpCalculator

enum
{
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
    ID_COURSE_THIRTEEN = 113,
    ID_COURSE_THIRTEEN_GRADE = 1131,
    ID_COURSE_FOURTEEN = 114,
    ID_COURSE_FOURTEEN_GRADE = 1141,
    ID_COURSE_FIFTEEN = 115,
    ID_COURSE_FIFTEEN_GRADE = 1151,
    ID_COURSE_SIXTEEN = 116,
    ID_COURSE_SIXTEEN_GRADE = 1161,
    ID_COURSE_SEVENTEEN = 117,
    ID_COURSE_SEVENTEEN_GRADE = 1171,
    ID_COURSE_EIGHTEEN = 118,
    ID_COURSE_EIGHTEEN_GRADE = 1181,
    ID_COURSE_NINETEEN = 119,
    ID_COURSE_NINETEEN_GRADE = 1191,
    ID_COURSE_TWENTY = 120,
    ID_COURSE_TWENTY_GRADE = 1201,
    ID_COURSE_TWENTY_ONE = 121,
    ID_COURSE_TWENTY_ONE_GRADE = 1211,
    ID_COURSE_TWENTY_TWO = 122,
    ID_COURSE_TWENTY_TWO_GRADE = 1221,
    ID_COURSE_TWENTY_THREE = 123,
    ID_COURSE_TWENTY_THREE_GRADE = 1231,
    ID_COURSE_TWENTY_FOUR = 124,
    ID_COURSE_TWENTY_FOUR_GRADE = 1241,

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
    ID_COURSE_THIRTEEN_2 = 213,
    ID_COURSE_THIRTEEN_GRADE_2 = 2131,
    ID_COURSE_FOURTEEN_2 = 214,
    ID_COURSE_FOURTEEN_GRADE_2 = 2141,
    ID_COURSE_FIFTEEN_2 = 215,
    ID_COURSE_FIFTEEN_GRADE_2 = 2151,
    ID_COURSE_SIXTEEN_2 = 216,
    ID_COURSE_SIXTEEN_GRADE_2 = 2161,
    ID_COURSE_SEVENTEEN_2 = 217,
    ID_COURSE_SEVENTEEN_GRADE_2 = 2171,
    ID_COURSE_EIGHTEEN_2 = 218,
    ID_COURSE_EIGHTEEN_GRADE_2 = 2181,
    ID_COURSE_NINETEEN_2 = 219,
    ID_COURSE_NINETEEN_GRADE_2 = 2191,
    ID_COURSE_TWENTY_2 = 220,
    ID_COURSE_TWENTY_GRADE_2 = 2201,
    ID_COURSE_TWENTY_ONE_2 = 221,
    ID_COURSE_TWENTY_ONE_GRADE_2 = 2211,
    ID_COURSE_TWENTY_TWO_2 = 222,
    ID_COURSE_TWENTY_TWO_GRADE_2 = 2221,
    ID_COURSE_TWENTY_THREE_2 = 223,
    ID_COURSE_TWENTY_THREE_GRADE_2 = 2231,
    ID_COURSE_TWENTY_FOUR_2 = 224,
    ID_COURSE_TWENTY_FOUR_GRADE_2 = 2241,

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
    ID_COURSE_THIRTEEN_3 = 313,
    ID_COURSE_THIRTEEN_GRADE_3 = 3131,
    ID_COURSE_FOURTEEN_3 = 314,
    ID_COURSE_FOURTEEN_GRADE_3 = 3141,
    ID_COURSE_FIFTEEN_3 = 315,
    ID_COURSE_FIFTEEN_GRADE_3 = 3151,
    ID_COURSE_SIXTEEN_3 = 316,
    ID_COURSE_SIXTEEN_GRADE_3 = 3161,
    ID_COURSE_SEVENTEEN_3 = 317,
    ID_COURSE_SEVENTEEN_GRADE_3 = 3171,
    ID_COURSE_EIGHTEEN_3 = 318,
    ID_COURSE_EIGHTEEN_GRADE_3 = 3181,
    ID_COURSE_NINETEEN_3 = 319,
    ID_COURSE_NINETEEN_GRADE_3 = 3191,
    ID_COURSE_TWENTY_3 = 320,
    ID_COURSE_TWENTY_GRADE_3 = 3201,
    ID_COURSE_TWENTY_ONE_3 = 321,
    ID_COURSE_TWENTY_ONE_GRADE_3 = 3211,
    ID_COURSE_TWENTY_TWO_3 = 322,
    ID_COURSE_TWENTY_TWO_GRADE_3 = 3221,
    ID_COURSE_TWENTY_THREE_3 = 323,
    ID_COURSE_TWENTY_THREE_GRADE_3 = 3231,
    ID_COURSE_TWENTY_FOUR_3 = 324,
    ID_COURSE_TWENTY_FOUR_GRADE_3 = 3241,

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
    ID_COURSE_THIRTEEN_4 = 413,
    ID_COURSE_THIRTEEN_GRADE_4 = 4131,
    ID_COURSE_FOURTEEN_4 = 414,
    ID_COURSE_FOURTEEN_GRADE_4 = 4141,
    ID_COURSE_FIFTEEN_4 = 415,
    ID_COURSE_FIFTEEN_GRADE_4 = 4151,
    ID_COURSE_SIXTEEN_4 = 416,
    ID_COURSE_SIXTEEN_GRADE_4 = 4161,
    ID_COURSE_SEVENTEEN_4 = 417,
    ID_COURSE_SEVENTEEN_GRADE_4 = 4171,
    ID_COURSE_EIGHTEEN_4 = 418,
    ID_COURSE_EIGHTEEN_GRADE_4 = 4181,
    ID_COURSE_NINETEEN_4 = 419,
    ID_COURSE_NINETEEN_GRADE_4 = 4191,
    ID_COURSE_TWENTY_4 = 420,
    ID_COURSE_TWENTY_GRADE_4 = 4201,
    ID_COURSE_TWENTY_ONE_4 = 421,
    ID_COURSE_TWENTY_ONE_GRADE_4 = 4211,
    ID_COURSE_TWENTY_TWO_4 = 422,
    ID_COURSE_TWENTY_TWO_GRADE_4 = 4221,
    ID_COURSE_TWENTY_THREE_4 = 423,
    ID_COURSE_TWENTY_THREE_GRADE_4 = 4231,
    ID_COURSE_TWENTY_FOUR_4 = 424,
    ID_COURSE_TWENTY_FOUR_GRADE_4 = 4241,

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
    ID_COURSE_THIRTEEN_5 = 513,
    ID_COURSE_THIRTEEN_GRADE_5 = 5131,
    ID_COURSE_FOURTEEN_5 = 514,
    ID_COURSE_FOURTEEN_GRADE_5 = 5141,
    ID_COURSE_FIFTEEN_5 = 515,
    ID_COURSE_FIFTEEN_GRADE_5 = 5151,
    ID_COURSE_SIXTEEN_5 = 516,
    ID_COURSE_SIXTEEN_GRADE_5 = 5161,
    ID_COURSE_SEVENTEEN_5 = 517,
    ID_COURSE_SEVENTEEN_GRADE_5 = 5171,
    ID_COURSE_EIGHTEEN_5 = 518,
    ID_COURSE_EIGHTEEN_GRADE_5 = 5181,
    ID_COURSE_NINETEEN_5 = 519,
    ID_COURSE_NINETEEN_GRADE_5 = 5191,
    ID_COURSE_TWENTY_5 = 520,
    ID_COURSE_TWENTY_GRADE_5 = 5201,
    ID_COURSE_TWENTY_ONE_5 = 521,
    ID_COURSE_TWENTY_ONE_GRADE_5 = 5211,
    ID_COURSE_TWENTY_TWO_5 = 522,
    ID_COURSE_TWENTY_TWO_GRADE_5 = 5221,
    ID_COURSE_TWENTY_THREE_5 = 523,
    ID_COURSE_TWENTY_THREE_GRADE_5 = 5231,
    ID_COURSE_TWENTY_FOUR_5 = 524,
    ID_COURSE_TWENTY_FOUR_GRADE_5 = 5241,

    ID_CALCULATE_100_LEVEL_GP = 100,
    ID_CALCULATE_200_LEVEL_GP = 200,
    ID_CALCULATE_300_LEVEL_GP = 300,
    ID_CALCULATE_400_LEVEL_GP = 400,
    ID_CALCULATE_500_LEVEL_GP = 500,

    ID_CALCULATE_CGPA = 12345,
};

class GpCalculator : public wxApp
{
public:
    virtual bool OnInit();
};

class MyFrame : public wxFrame
{ // defines the options on the top bar of the screen here we have:
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent &event); // hello option
    void OnExit(wxCommandEvent &event);  // exit option
    void OnAbout(wxCommandEvent &event); // about option
    void OnHelp(wxCommandEvent &event);  // event option

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

    wxTextCtrl *course_thirteen;
    wxTextCtrl *course_thirteen_grade;

    wxTextCtrl *course_fourteen;
    wxTextCtrl *course_fourteen_grade;

    wxTextCtrl *course_fifteen;
    wxTextCtrl *course_fifteen_grade;

    wxTextCtrl *course_sixteen;
    wxTextCtrl *course_sixteen_grade;

    wxTextCtrl *course_seventeen;
    wxTextCtrl *course_seventeen_grade;

    wxTextCtrl *course_eighteen;
    wxTextCtrl *course_eighteen_grade;

    wxTextCtrl *course_nineteen;
    wxTextCtrl *course_nineteen_grade;

    wxTextCtrl *course_twenty;
    wxTextCtrl *course_twenty_grade;

    wxTextCtrl *course_twenty_one;
    wxTextCtrl *course_twenty_one_grade;

    wxTextCtrl *course_twenty_two;
    wxTextCtrl *course_twenty_two_grade;

    wxTextCtrl *course_twenty_three;
    wxTextCtrl *course_twenty_three_grade;

    wxTextCtrl *course_twenty_four;
    wxTextCtrl *course_twenty_four_grade;

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

    wxTextCtrl *course_thirteen_2;
    wxTextCtrl *course_thirteen_grade_2;

    wxTextCtrl *course_fourteen_2;
    wxTextCtrl *course_fourteen_grade_2;

    wxTextCtrl *course_fifteen_2;
    wxTextCtrl *course_fifteen_grade_2;

    wxTextCtrl *course_sixteen_2;
    wxTextCtrl *course_sixteen_grade_2;

    wxTextCtrl *course_seventeen_2;
    wxTextCtrl *course_seventeen_grade_2;

    wxTextCtrl *course_eighteen_2;
    wxTextCtrl *course_eighteen_grade_2;

    wxTextCtrl *course_nineteen_2;
    wxTextCtrl *course_nineteen_grade_2;

    wxTextCtrl *course_twenty_2;
    wxTextCtrl *course_twenty_grade_2;

    wxTextCtrl *course_twenty_one_2;
    wxTextCtrl *course_twenty_one_grade_2;

    wxTextCtrl *course_twenty_two_2;
    wxTextCtrl *course_twenty_two_grade_2;

    wxTextCtrl *course_twenty_three_2;
    wxTextCtrl *course_twenty_three_grade_2;

    wxTextCtrl *course_twenty_four_2;
    wxTextCtrl *course_twenty_four_grade_2;

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

    wxTextCtrl *course_thirteen_3;
    wxTextCtrl *course_thirteen_grade_3;

    wxTextCtrl *course_fourteen_3;
    wxTextCtrl *course_fourteen_grade_3;

    wxTextCtrl *course_fifteen_3;
    wxTextCtrl *course_fifteen_grade_3;

    wxTextCtrl *course_sixteen_3;
    wxTextCtrl *course_sixteen_grade_3;

    wxTextCtrl *course_seventeen_3;
    wxTextCtrl *course_seventeen_grade_3;

    wxTextCtrl *course_eighteen_3;
    wxTextCtrl *course_eighteen_grade_3;

    wxTextCtrl *course_nineteen_3;
    wxTextCtrl *course_nineteen_grade_3;

    wxTextCtrl *course_twenty_3;
    wxTextCtrl *course_twenty_grade_3;

    wxTextCtrl *course_twenty_one_3;
    wxTextCtrl *course_twenty_one_grade_3;

    wxTextCtrl *course_twenty_two_3;
    wxTextCtrl *course_twenty_two_grade_3;

    wxTextCtrl *course_twenty_three_3;
    wxTextCtrl *course_twenty_three_grade_3;

    wxTextCtrl *course_twenty_four_3;
    wxTextCtrl *course_twenty_four_grade_3;

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

    wxTextCtrl *course_thirteen_4;
    wxTextCtrl *course_thirteen_grade_4;

    wxTextCtrl *course_fourteen_4;
    wxTextCtrl *course_fourteen_grade_4;

    wxTextCtrl *course_fifteen_4;
    wxTextCtrl *course_fifteen_grade_4;

    wxTextCtrl *course_sixteen_4;
    wxTextCtrl *course_sixteen_grade_4;

    wxTextCtrl *course_seventeen_4;
    wxTextCtrl *course_seventeen_grade_4;

    wxTextCtrl *course_eighteen_4;
    wxTextCtrl *course_eighteen_grade_4;

    wxTextCtrl *course_nineteen_4;
    wxTextCtrl *course_nineteen_grade_4;

    wxTextCtrl *course_twenty_4;
    wxTextCtrl *course_twenty_grade_4;

    wxTextCtrl *course_twenty_one_4;
    wxTextCtrl *course_twenty_one_grade_4;

    wxTextCtrl *course_twenty_two_4;
    wxTextCtrl *course_twenty_two_grade_4;

    wxTextCtrl *course_twenty_three_4;
    wxTextCtrl *course_twenty_three_grade_4;

    wxTextCtrl *course_twenty_four_4;
    wxTextCtrl *course_twenty_four_grade_4;

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

    wxTextCtrl *course_thirteen_5;
    wxTextCtrl *course_thirteen_grade_5;

    wxTextCtrl *course_fourteen_5;
    wxTextCtrl *course_fourteen_grade_5;

    wxTextCtrl *course_fifteen_5;
    wxTextCtrl *course_fifteen_grade_5;

    wxTextCtrl *course_sixteen_5;
    wxTextCtrl *course_sixteen_grade_5;

    wxTextCtrl *course_seventeen_5;
    wxTextCtrl *course_seventeen_grade_5;

    wxTextCtrl *course_eighteen_5;
    wxTextCtrl *course_eighteen_grade_5;

    wxTextCtrl *course_nineteen_5;
    wxTextCtrl *course_nineteen_grade_5;

    wxTextCtrl *course_twenty_5;
    wxTextCtrl *course_twenty_grade_5;

    wxTextCtrl *course_twenty_one_5;
    wxTextCtrl *course_twenty_one_grade_5;

    wxTextCtrl *course_twenty_two_5;
    wxTextCtrl *course_twenty_two_grade_5;

    wxTextCtrl *course_twenty_three_5;
    wxTextCtrl *course_twenty_three_grade_5;

    wxTextCtrl *course_twenty_four_5;
    wxTextCtrl *course_twenty_four_grade_5;

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
    EVT_BUTTON(ID_CALCULATE_100_LEVEL_GP, MyFrame::OnOneHundredLevelDisplayGpButtonClicked)
        EVT_BUTTON(ID_CALCULATE_200_LEVEL_GP, MyFrame::OnTwoHundredLevelDisplayGpButtonClicked)
            EVT_BUTTON(ID_CALCULATE_300_LEVEL_GP, MyFrame::OnThreeHundredLevelDisplayGpButtonClicked)
                EVT_BUTTON(ID_CALCULATE_400_LEVEL_GP, MyFrame::OnFourHundredLevelDisplayGpButtonClicked)
                    EVT_BUTTON(ID_CALCULATE_500_LEVEL_GP, MyFrame::OnFiveHundredLevelDisplayGpButtonClicked)
                        EVT_BUTTON(ID_CALCULATE_CGPA, MyFrame::OnDisplayCgpaButtonClicked)
                            wxEND_EVENT_TABLE()

                                wxIMPLEMENT_APP(GpCalculator); // initiate main()

bool GpCalculator::OnInit()
{ // append the OnInit() function
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    wxString capitals_and_caps_lock_and_hint_message = "Note that all courses codes and grades are to be entered in capital letters. A good practice would be to activate and leave the 'Caps Lock' ON throughout the course code and grade entries process.";
    wxMessageBox(capitals_and_caps_lock_and_hint_message);
    return true; // this is just to show successfull initialisation
}

MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "Faculty of Engineering Grade Pending Calculator", wxPoint(100, 100), wxSize(926, 650))
{ // Frame of the program
    wxMenu *menuFile = new wxMenu;
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    menuHelp->AppendSeparator();
    menuHelp->Append(wxID_HELP);

    wxMenuBar *menuBar = new wxMenuBar; // create the menubar where menus would live

    // append menus to the menubar
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("                                                                University of Benin, Ugbowo Campus, Ugbowo, Benin-City, Edo State, Nigeria.");

    // add course add buttons and list box

    // 100 Level
    wxString level_text = wxT("100 LEVEL");
    wxStaticText *st = new wxStaticText(this, wxID_ANY, level_text, wxPoint(65, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one = new wxTextCtrl(this, ID_COURSE_ONE, "", wxPoint(5, 44), wxSize(65, 30), wxTE_RIGHT);
    course_one_grade = new wxTextCtrl(this, ID_COURSE_ONE_GRADE, "", wxPoint(70, 44), wxSize(25, 30), wxTE_RIGHT);
    course_one->SetMaxLength(6);
    course_one_grade->SetMaxLength(1);
    course_one->SetHint("COURSE");
    course_one_grade->SetHint("A");

    course_two = new wxTextCtrl(this, ID_COURSE_TWO, "", wxPoint(5, 76), wxSize(65, 30), wxTE_RIGHT);
    course_two_grade = new wxTextCtrl(this, ID_COURSE_TWO_GRADE, "", wxPoint(70, 76), wxSize(25, 30), wxTE_RIGHT);
    course_two->SetMaxLength(6);
    course_two_grade->SetMaxLength(1);
    course_two->SetHint("COURSE");
    course_two_grade->SetHint("A");

    course_three = new wxTextCtrl(this, ID_COURSE_THREE, "", wxPoint(5, 108), wxSize(65, 30)), wxTE_RIGHT;
    course_three_grade = new wxTextCtrl(this, ID_COURSE_THREE_GRADE, "", wxPoint(70, 108), wxSize(25, 30)), wxTE_RIGHT;
    course_three->SetMaxLength(6);
    course_three_grade->SetMaxLength(1);
    course_three->SetHint("COURSE");
    course_three_grade->SetHint("A");

    course_four = new wxTextCtrl(this, ID_COURSE_FOUR, "", wxPoint(5, 140), wxSize(65, 30), wxTE_RIGHT);
    course_four_grade = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE, "", wxPoint(70, 140), wxSize(25, 30), wxTE_RIGHT);
    course_four->SetMaxLength(6);
    course_four_grade->SetMaxLength(1);
    course_four->SetHint("COURSE");
    course_four_grade->SetHint("A");

    course_five = new wxTextCtrl(this, ID_COURSE_FIVE, "", wxPoint(5, 172), wxSize(65, 30), wxTE_RIGHT);
    course_five_grade = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE, "", wxPoint(70, 172), wxSize(25, 30), wxTE_RIGHT);
    course_five->SetMaxLength(6);
    course_five_grade->SetMaxLength(1);
    course_five->SetHint("COURSE");
    course_five_grade->SetHint("A");

    course_six = new wxTextCtrl(this, ID_COURSE_SIX, "", wxPoint(5, 204), wxSize(65, 30), wxTE_RIGHT);
    course_six_grade = new wxTextCtrl(this, ID_COURSE_SIX_GRADE, "", wxPoint(70, 204), wxSize(25, 30)), wxTE_RIGHT;
    course_six->SetMaxLength(6);
    course_six_grade->SetMaxLength(1);
    course_six->SetHint("COURSE");
    course_six_grade->SetHint("A");

    course_seven = new wxTextCtrl(this, ID_COURSE_SEVEN, "", wxPoint(5, 236), wxSize(65, 30), wxTE_RIGHT);
    course_seven_grade = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE, "", wxPoint(70, 236), wxSize(25, 30), wxTE_RIGHT);
    course_seven->SetMaxLength(6);
    course_seven_grade->SetMaxLength(1);
    course_seven->SetHint("COURSE");
    course_seven_grade->SetHint("A");

    course_eight = new wxTextCtrl(this, ID_COURSE_EIGHT, "", wxPoint(5, 268), wxSize(65, 30), wxTE_RIGHT);
    course_eight_grade = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE, "", wxPoint(70, 268), wxSize(25, 30), wxTE_RIGHT);
    course_eight->SetMaxLength(6);
    course_eight_grade->SetMaxLength(1);
    course_eight->SetHint("COURSE");
    course_eight_grade->SetHint("A");

    course_nine = new wxTextCtrl(this, ID_COURSE_NINE, "", wxPoint(5, 300), wxSize(65, 30), wxTE_RIGHT);
    course_nine_grade = new wxTextCtrl(this, ID_COURSE_NINE_GRADE, "", wxPoint(70, 300), wxSize(25, 30), wxTE_RIGHT);
    course_nine->SetMaxLength(6);
    course_nine_grade->SetMaxLength(1);
    course_nine->SetHint("COURSE");
    course_nine_grade->SetHint("A");

    course_ten = new wxTextCtrl(this, ID_COURSE_TEN, "", wxPoint(5, 332), wxSize(65, 30), wxTE_RIGHT);
    course_ten_grade = new wxTextCtrl(this, ID_COURSE_TEN_GRADE, "", wxPoint(70, 332), wxSize(25, 30), wxTE_RIGHT);
    course_ten->SetMaxLength(6);
    course_ten_grade->SetMaxLength(1);
    course_ten->SetHint("COURSE");
    course_ten_grade->SetHint("A");

    course_eleven = new wxTextCtrl(this, ID_COURSE_ELEVEN, "", wxPoint(5, 364), wxSize(65, 30), wxTE_RIGHT);
    course_eleven_grade = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE, "", wxPoint(70, 364), wxSize(25, 30), wxTE_RIGHT);
    course_eleven->SetMaxLength(6);
    course_eleven_grade->SetMaxLength(1);
    course_eleven->SetHint("COURSE");
    course_eleven_grade->SetHint("A");

    course_twelve = new wxTextCtrl(this, ID_COURSE_TWELVE, "", wxPoint(5, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twelve_grade = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE, "", wxPoint(70, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twelve->SetMaxLength(6);
    course_twelve_grade->SetMaxLength(1);
    course_twelve->SetHint("COURSE");
    course_twelve_grade->SetHint("A");

    course_thirteen = new wxTextCtrl(this, ID_COURSE_THIRTEEN, "", wxPoint(95, 44), wxSize(65, 30), wxTE_RIGHT);
    course_thirteen_grade = new wxTextCtrl(this, ID_COURSE_THIRTEEN_GRADE, "", wxPoint(160, 44), wxSize(25, 30), wxTE_RIGHT);
    course_thirteen->SetMaxLength(6);
    course_thirteen_grade->SetMaxLength(1);
    course_thirteen->SetHint("COURSE");
    course_thirteen_grade->SetHint("A");

    course_fourteen = new wxTextCtrl(this, ID_COURSE_FOURTEEN, "", wxPoint(95, 76), wxSize(65, 30), wxTE_RIGHT);
    course_fourteen_grade = new wxTextCtrl(this, ID_COURSE_FOURTEEN_GRADE, "", wxPoint(160, 76), wxSize(25, 30), wxTE_RIGHT);
    course_fourteen->SetMaxLength(6);
    course_fourteen_grade->SetMaxLength(1);
    course_fourteen->SetHint("COURSE");
    course_fourteen_grade->SetHint("A");

    course_fifteen = new wxTextCtrl(this, ID_COURSE_FIFTEEN, "", wxPoint(95, 108), wxSize(65, 30), wxTE_RIGHT);
    course_fifteen_grade = new wxTextCtrl(this, ID_COURSE_FIFTEEN_GRADE, "", wxPoint(160, 108), wxSize(25, 30), wxTE_RIGHT);
    course_fifteen->SetMaxLength(6);
    course_fifteen_grade->SetMaxLength(1);
    course_fifteen->SetHint("COURSE");
    course_fifteen_grade->SetHint("A");

    course_sixteen = new wxTextCtrl(this, ID_COURSE_SIXTEEN, "", wxPoint(95, 140), wxSize(65, 30), wxTE_RIGHT);
    course_sixteen_grade = new wxTextCtrl(this, ID_COURSE_SIXTEEN_GRADE, "", wxPoint(160, 140), wxSize(25, 30), wxTE_RIGHT);
    course_sixteen->SetMaxLength(6);
    course_sixteen_grade->SetMaxLength(1);
    course_sixteen->SetHint("COURSE");
    course_sixteen_grade->SetHint("A");

    course_seventeen = new wxTextCtrl(this, ID_COURSE_SEVENTEEN, "", wxPoint(95, 172), wxSize(65, 30), wxTE_RIGHT);
    course_seventeen_grade = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_GRADE, "", wxPoint(160, 172), wxSize(25, 30), wxTE_RIGHT);
    course_seventeen->SetMaxLength(6);
    course_seventeen_grade->SetMaxLength(1);
    course_seventeen->SetHint("COURSE");
    course_seventeen_grade->SetHint("A");

    course_eighteen = new wxTextCtrl(this, ID_COURSE_EIGHTEEN, "", wxPoint(95, 204), wxSize(65, 30), wxTE_RIGHT);
    course_eighteen_grade = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_GRADE, "", wxPoint(160, 204), wxSize(25, 30), wxTE_RIGHT);
    course_eighteen->SetMaxLength(6);
    course_eighteen_grade->SetMaxLength(1);
    course_eighteen->SetHint("COURSE");
    course_eighteen_grade->SetHint("A");

    course_nineteen = new wxTextCtrl(this, ID_COURSE_NINETEEN, "", wxPoint(95, 236), wxSize(65, 30), wxTE_RIGHT);
    course_nineteen_grade = new wxTextCtrl(this, ID_COURSE_NINETEEN_GRADE, "", wxPoint(160, 236), wxSize(25, 30), wxTE_RIGHT);
    course_nineteen->SetMaxLength(6);
    course_nineteen_grade->SetMaxLength(1);
    course_nineteen->SetHint("COURSE");
    course_nineteen_grade->SetHint("A");

    course_twenty = new wxTextCtrl(this, ID_COURSE_TWENTY, "", wxPoint(95, 268), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_grade = new wxTextCtrl(this, ID_COURSE_TWENTY_GRADE, "", wxPoint(160, 268), wxSize(25, 30), wxTE_RIGHT);
    course_twenty->SetMaxLength(6);
    course_twenty_grade->SetMaxLength(1);
    course_twenty->SetHint("COURSE");
    course_twenty_grade->SetHint("A");

    course_twenty_one = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE, "", wxPoint(95, 300), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_one_grade = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_GRADE, "", wxPoint(160, 300), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_one->SetMaxLength(6);
    course_twenty_one_grade->SetMaxLength(1);
    course_twenty_one->SetHint("COURSE");
    course_twenty_one_grade->SetHint("A");

    course_twenty_two = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO, "", wxPoint(95, 332), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_two_grade = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_GRADE, "", wxPoint(160, 332), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_two->SetMaxLength(6);
    course_twenty_two_grade->SetMaxLength(1);
    course_twenty_two->SetHint("COURSE");
    course_twenty_two_grade->SetHint("A");

    course_twenty_three = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE, "", wxPoint(95, 364), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_three_grade = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_GRADE, "", wxPoint(160, 364), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_three->SetMaxLength(6);
    course_twenty_three_grade->SetMaxLength(1);
    course_twenty_three->SetHint("COURSE");
    course_twenty_three_grade->SetHint("A");

    course_twenty_four = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR, "", wxPoint(95, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_four_grade = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_GRADE, "", wxPoint(160, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_four->SetMaxLength(6);
    course_twenty_four_grade->SetMaxLength(1);
    course_twenty_four->SetHint("COURSE");
    course_twenty_four_grade->SetHint("A");

    calculate_gp = new wxButton(this, ID_CALCULATE_100_LEVEL_GP, "Display GP", wxPoint(60, 445), wxSize(75, 50));

    // 200 Level
    wxString level_text_2 = wxT("200 LEVEL");
    wxStaticText *st_2 = new wxStaticText(this, wxID_ANY, level_text_2, wxPoint(249, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_2 = new wxTextCtrl(this, ID_COURSE_ONE_2, "", wxPoint(189, 44), wxSize(65, 30), wxTE_RIGHT);
    course_one_grade_2 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_2, "", wxPoint(254, 44), wxSize(25, 30), wxTE_RIGHT);
    course_one_2->SetMaxLength(6);
    course_one_grade_2->SetMaxLength(1);
    course_one_2->SetHint("COURSE");
    course_one_grade_2->SetHint("A");

    course_two_2 = new wxTextCtrl(this, ID_COURSE_TWO_2, "", wxPoint(189, 76), wxSize(65, 30), wxTE_RIGHT);
    course_two_grade_2 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_2, "", wxPoint(254, 76), wxSize(25, 30), wxTE_RIGHT);
    course_two_2->SetMaxLength(6);
    course_two_grade_2->SetMaxLength(1);
    course_two_2->SetHint("COURSE");
    course_two_grade_2->SetHint("A");

    course_three_2 = new wxTextCtrl(this, ID_COURSE_THREE_2, "", wxPoint(189, 108), wxSize(65, 30), wxTE_RIGHT);
    course_three_grade_2 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_2, "", wxPoint(254, 108), wxSize(25, 30), wxTE_RIGHT);
    course_three_2->SetMaxLength(6);
    course_three_grade_2->SetMaxLength(1);
    course_three_2->SetHint("COURSE");
    course_three_grade_2->SetHint("A");

    course_four_2 = new wxTextCtrl(this, ID_COURSE_FOUR_2, "", wxPoint(189, 140), wxSize(65, 30), wxTE_RIGHT);
    course_four_grade_2 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_2, "", wxPoint(254, 140), wxSize(25, 30), wxTE_RIGHT);
    course_four_2->SetMaxLength(6);
    course_four_grade_2->SetMaxLength(1);
    course_four_2->SetHint("COURSE");
    course_four_grade_2->SetHint("A");

    course_five_2 = new wxTextCtrl(this, ID_COURSE_FIVE_2, "", wxPoint(189, 172), wxSize(65, 30), wxTE_RIGHT);
    course_five_grade_2 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_2, "", wxPoint(254, 172), wxSize(25, 30), wxTE_RIGHT);
    course_five_2->SetMaxLength(6);
    course_five_grade_2->SetMaxLength(1);
    course_five_2->SetHint("COURSE");
    course_five_grade_2->SetHint("A");

    course_six_2 = new wxTextCtrl(this, ID_COURSE_SIX_2, "", wxPoint(189, 204), wxSize(65, 30), wxTE_RIGHT);
    course_six_grade_2 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_2, "", wxPoint(254, 204), wxSize(25, 30), wxTE_RIGHT);
    course_six_2->SetMaxLength(6);
    course_six_grade_2->SetMaxLength(1);
    course_six_2->SetHint("COURSE");
    course_six_grade_2->SetHint("A");

    course_seven_2 = new wxTextCtrl(this, ID_COURSE_SEVEN_2, "", wxPoint(189, 236), wxSize(65, 30), wxTE_RIGHT);
    course_seven_grade_2 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_2, "", wxPoint(254, 236), wxSize(25, 30), wxTE_RIGHT);
    course_seven_2->SetMaxLength(6);
    course_seven_grade_2->SetMaxLength(1);
    course_seven_2->SetHint("COURSE");
    course_seven_grade_2->SetHint("A");

    course_eight_2 = new wxTextCtrl(this, ID_COURSE_EIGHT_2, "", wxPoint(189, 268), wxSize(65, 30), wxTE_RIGHT);
    course_eight_grade_2 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_2, "", wxPoint(254, 268), wxSize(25, 30), wxTE_RIGHT);
    course_eight_2->SetMaxLength(6);
    course_eight_grade_2->SetMaxLength(1);
    course_eight_2->SetHint("COURSE");
    course_eight_grade_2->SetHint("A");

    course_nine_2 = new wxTextCtrl(this, ID_COURSE_NINE_2, "", wxPoint(189, 300), wxSize(65, 30), wxTE_RIGHT);
    course_nine_grade_2 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_2, "", wxPoint(254, 300), wxSize(25, 30), wxTE_RIGHT);
    course_nine_2->SetMaxLength(6);
    course_nine_grade_2->SetMaxLength(1);
    course_nine_2->SetHint("COURSE");
    course_nine_grade_2->SetHint("A");

    course_ten_2 = new wxTextCtrl(this, ID_COURSE_TEN_2, "", wxPoint(189, 332), wxSize(65, 30), wxTE_RIGHT);
    course_ten_grade_2 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_2, "", wxPoint(254, 332), wxSize(25, 30), wxTE_RIGHT);
    course_ten_2->SetMaxLength(6);
    course_ten_grade_2->SetMaxLength(1);
    course_ten_2->SetHint("COURSE");
    course_ten_grade_2->SetHint("A");

    course_eleven_2 = new wxTextCtrl(this, ID_COURSE_ELEVEN_2, "", wxPoint(189, 364), wxSize(65, 30), wxTE_RIGHT);
    course_eleven_grade_2 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_2, "", wxPoint(254, 364), wxSize(25, 30), wxTE_RIGHT);
    course_eleven_2->SetMaxLength(6);
    course_eleven_grade_2->SetMaxLength(1);
    course_eleven_2->SetHint("COURSE");
    course_eleven_grade_2->SetHint("A");

    course_twelve_2 = new wxTextCtrl(this, ID_COURSE_TWELVE_2, "", wxPoint(189, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twelve_grade_2 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_2, "", wxPoint(254, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twelve_2->SetMaxLength(6);
    course_twelve_grade_2->SetMaxLength(1);
    course_twelve_2->SetHint("COURSE");
    course_twelve_grade_2->SetHint("A");

    course_thirteen_2 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_2, "", wxPoint(279, 44), wxSize(65, 30), wxTE_RIGHT);
    course_thirteen_grade_2 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_GRADE_2, "", wxPoint(344, 44), wxSize(25, 30), wxTE_RIGHT);
    course_thirteen_2->SetMaxLength(6);
    course_thirteen_grade_2->SetMaxLength(1);
    course_thirteen_2->SetHint("COURSE");
    course_thirteen_grade_2->SetHint("A");

    course_fourteen_2 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_2, "", wxPoint(279, 76), wxSize(65, 30), wxTE_RIGHT);
    course_fourteen_grade_2 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_GRADE_2, "", wxPoint(344, 76), wxSize(25, 30), wxTE_RIGHT);
    course_fourteen_2->SetMaxLength(6);
    course_fourteen_grade_2->SetMaxLength(1);
    course_fourteen_2->SetHint("COURSE");
    course_fourteen_grade_2->SetHint("A");

    course_fifteen_2 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_2, "", wxPoint(279, 108), wxSize(65, 30), wxTE_RIGHT);
    course_fifteen_grade_2 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_GRADE_2, "", wxPoint(344, 108), wxSize(25, 30), wxTE_RIGHT);
    course_fifteen_2->SetMaxLength(6);
    course_fifteen_grade_2->SetMaxLength(1);
    course_fifteen_2->SetHint("COURSE");
    course_fifteen_grade_2->SetHint("A");

    course_sixteen_2 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_2, "", wxPoint(279, 140), wxSize(65, 30), wxTE_RIGHT);
    course_sixteen_grade_2 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_GRADE_2, "", wxPoint(344, 140), wxSize(25, 30), wxTE_RIGHT);
    course_sixteen_2->SetMaxLength(6);
    course_sixteen_grade_2->SetMaxLength(1);
    course_sixteen_2->SetHint("COURSE");
    course_sixteen_grade_2->SetHint("A");

    course_seventeen_2 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_2, "", wxPoint(279, 172), wxSize(65, 30), wxTE_RIGHT);
    course_seventeen_grade_2 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_GRADE_2, "", wxPoint(344, 172), wxSize(25, 30), wxTE_RIGHT);
    course_seventeen_2->SetMaxLength(6);
    course_seventeen_grade_2->SetMaxLength(1);
    course_seventeen_2->SetHint("COURSE");
    course_seventeen_grade_2->SetHint("A");

    course_eighteen_2 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_2, "", wxPoint(279, 204), wxSize(65, 30), wxTE_RIGHT);
    course_eighteen_grade_2 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_GRADE_2, "", wxPoint(344, 204), wxSize(25, 30), wxTE_RIGHT);
    course_eighteen_2->SetMaxLength(6);
    course_eighteen_grade_2->SetMaxLength(1);
    course_eighteen_2->SetHint("COURSE");
    course_eighteen_grade_2->SetHint("A");

    course_nineteen_2 = new wxTextCtrl(this, ID_COURSE_NINETEEN_2, "", wxPoint(279, 236), wxSize(65, 30), wxTE_RIGHT);
    course_nineteen_grade_2 = new wxTextCtrl(this, ID_COURSE_NINETEEN_GRADE_2, "", wxPoint(344, 236), wxSize(25, 30), wxTE_RIGHT);
    course_nineteen_2->SetMaxLength(6);
    course_nineteen_grade_2->SetMaxLength(1);
    course_nineteen_2->SetHint("COURSE");
    course_nineteen_grade_2->SetHint("A");

    course_twenty_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_2, "", wxPoint(279, 268), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_grade_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_GRADE_2, "", wxPoint(344, 268), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_2->SetMaxLength(6);
    course_twenty_grade_2->SetMaxLength(1);
    course_twenty_2->SetHint("COURSE");
    course_twenty_grade_2->SetHint("A");

    course_twenty_one_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_2, "", wxPoint(279, 300), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_one_grade_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_GRADE_2, "", wxPoint(344, 300), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_one_2->SetMaxLength(6);
    course_twenty_one_grade_2->SetMaxLength(1);
    course_twenty_one_2->SetHint("COURSE");
    course_twenty_one_grade_2->SetHint("A");

    course_twenty_two_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_2, "", wxPoint(279, 332), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_two_grade_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_GRADE_2, "", wxPoint(344, 332), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_two_2->SetMaxLength(6);
    course_twenty_two_grade_2->SetMaxLength(1);
    course_twenty_two_2->SetHint("COURSE");
    course_twenty_two_grade_2->SetHint("A");

    course_twenty_three_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_2, "", wxPoint(279, 364), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_three_grade_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_GRADE_2, "", wxPoint(344, 364), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_three_2->SetMaxLength(6);
    course_twenty_three_grade_2->SetMaxLength(1);
    course_twenty_three_2->SetHint("COURSE");
    course_twenty_three_grade_2->SetHint("A");

    course_twenty_four_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_2, "", wxPoint(279, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_four_grade_2 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_GRADE_2, "", wxPoint(344, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_four_2->SetMaxLength(6);
    course_twenty_four_grade_2->SetMaxLength(1);
    course_twenty_four_2->SetHint("COURSE");
    course_twenty_four_grade_2->SetHint("A");

    calculate_gp_2 = new wxButton(this, ID_CALCULATE_200_LEVEL_GP, "Display GP", wxPoint(244, 445), wxSize(75, 50));

    // 300 Level
    wxString level_text_3 = wxT("300 LEVEL");
    wxStaticText *st_3 = new wxStaticText(this, wxID_ANY, level_text_3, wxPoint(433, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_3 = new wxTextCtrl(this, ID_COURSE_ONE_3, "", wxPoint(373, 44), wxSize(65, 30), wxTE_RIGHT);
    course_one_grade_3 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_3, "", wxPoint(438, 44), wxSize(25, 30), wxTE_RIGHT);
    course_one_3->SetMaxLength(6);
    course_one_grade_3->SetMaxLength(1);
    course_one_3->SetHint("COURSE");
    course_one_grade_3->SetHint("A");

    course_two_3 = new wxTextCtrl(this, ID_COURSE_TWO_3, "", wxPoint(373, 76), wxSize(65, 30), wxTE_RIGHT);
    course_two_grade_3 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_3, "", wxPoint(438, 76), wxSize(25, 30), wxTE_RIGHT);
    course_two_3->SetMaxLength(6);
    course_two_grade_3->SetMaxLength(1);
    course_two_3->SetHint("COURSE");
    course_two_grade_3->SetHint("A");

    course_three_3 = new wxTextCtrl(this, ID_COURSE_THREE_3, "", wxPoint(373, 108), wxSize(65, 30), wxTE_RIGHT);
    course_three_grade_3 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_3, "", wxPoint(438, 108), wxSize(25, 30), wxTE_RIGHT);
    course_three_3->SetMaxLength(6);
    course_three_grade_3->SetMaxLength(1);
    course_three_3->SetHint("COURSE");
    course_three_grade_3->SetHint("A");

    course_four_3 = new wxTextCtrl(this, ID_COURSE_FOUR_3, "", wxPoint(373, 140), wxSize(65, 30), wxTE_RIGHT);
    course_four_grade_3 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_3, "", wxPoint(438, 140), wxSize(25, 30), wxTE_RIGHT);
    course_four_3->SetMaxLength(6);
    course_four_grade_3->SetMaxLength(1);
    course_four_3->SetHint("COURSE");
    course_four_grade_3->SetHint("A");

    course_five_3 = new wxTextCtrl(this, ID_COURSE_FIVE_3, "", wxPoint(373, 172), wxSize(65, 30), wxTE_RIGHT);
    course_five_grade_3 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_3, "", wxPoint(438, 172), wxSize(25, 30), wxTE_RIGHT);
    course_five_3->SetMaxLength(6);
    course_five_grade_3->SetMaxLength(1);
    course_five_3->SetHint("COURSE");
    course_five_grade_3->SetHint("A");

    course_six_3 = new wxTextCtrl(this, ID_COURSE_SIX_3, "", wxPoint(373, 204), wxSize(65, 30), wxTE_RIGHT);
    course_six_grade_3 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_3, "", wxPoint(438, 204), wxSize(25, 30), wxTE_RIGHT);
    course_six_3->SetMaxLength(6);
    course_six_grade_3->SetMaxLength(1);
    course_six_3->SetHint("COURSE");
    course_six_grade_3->SetHint("A");

    course_seven_3 = new wxTextCtrl(this, ID_COURSE_SEVEN_3, "", wxPoint(373, 236), wxSize(65, 30), wxTE_RIGHT);
    course_seven_grade_3 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_3, "", wxPoint(438, 236), wxSize(25, 30), wxTE_RIGHT);
    course_seven_3->SetMaxLength(6);
    course_seven_grade_3->SetMaxLength(1);
    course_seven_3->SetHint("COURSE");
    course_seven_grade_3->SetHint("A");

    course_eight_3 = new wxTextCtrl(this, ID_COURSE_EIGHT_3, "", wxPoint(373, 268), wxSize(65, 30), wxTE_RIGHT);
    course_eight_grade_3 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_3, "", wxPoint(438, 268), wxSize(25, 30), wxTE_RIGHT);
    course_eight_3->SetMaxLength(6);
    course_eight_grade_3->SetMaxLength(1);
    course_eight_3->SetHint("COURSE");
    course_eight_grade_3->SetHint("A");

    course_nine_3 = new wxTextCtrl(this, ID_COURSE_NINE_3, "", wxPoint(373, 300), wxSize(65, 30), wxTE_RIGHT);
    course_nine_grade_3 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_3, "", wxPoint(438, 300), wxSize(25, 30), wxTE_RIGHT);
    course_nine_3->SetMaxLength(6);
    course_nine_grade_3->SetMaxLength(1);
    course_nine_3->SetHint("COURSE");
    course_nine_grade_3->SetHint("A");

    course_ten_3 = new wxTextCtrl(this, ID_COURSE_TEN_3, "", wxPoint(373, 332), wxSize(65, 30), wxTE_RIGHT);
    course_ten_grade_3 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_3, "", wxPoint(438, 332), wxSize(25, 30), wxTE_RIGHT);
    course_ten_3->SetMaxLength(6);
    course_ten_grade_3->SetMaxLength(1);
    course_ten_3->SetHint("COURSE");
    course_ten_grade_3->SetHint("A");

    course_eleven_3 = new wxTextCtrl(this, ID_COURSE_ELEVEN_3, "", wxPoint(373, 364), wxSize(65, 30), wxTE_RIGHT);
    course_eleven_grade_3 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_3, "", wxPoint(438, 364), wxSize(25, 30), wxTE_RIGHT);
    course_eleven_3->SetMaxLength(6);
    course_eleven_grade_3->SetMaxLength(1);
    course_eleven_3->SetHint("COURSE");
    course_eleven_grade_3->SetHint("A");

    course_twelve_3 = new wxTextCtrl(this, ID_COURSE_TWELVE_3, "", wxPoint(373, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twelve_grade_3 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_3, "", wxPoint(438, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twelve_3->SetMaxLength(6);
    course_twelve_grade_3->SetMaxLength(1);
    course_twelve_3->SetHint("COURSE");
    course_twelve_grade_3->SetHint("A");

    course_thirteen_3 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_3, "", wxPoint(463, 44), wxSize(65, 30), wxTE_RIGHT);
    course_thirteen_grade_3 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_GRADE_3, "", wxPoint(528, 44), wxSize(25, 30), wxTE_RIGHT);
    course_thirteen_3->SetMaxLength(6);
    course_thirteen_grade_3->SetMaxLength(1);
    course_thirteen_3->SetHint("COURSE");
    course_thirteen_grade_3->SetHint("A");

    course_fourteen_3 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_3, "", wxPoint(463, 76), wxSize(65, 30), wxTE_RIGHT);
    course_fourteen_grade_3 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_GRADE_3, "", wxPoint(528, 76), wxSize(25, 30), wxTE_RIGHT);
    course_fourteen_3->SetMaxLength(6);
    course_fourteen_grade_3->SetMaxLength(1);
    course_fourteen_3->SetHint("COURSE");
    course_fourteen_grade_3->SetHint("A");

    course_fifteen_3 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_3, "", wxPoint(463, 108), wxSize(65, 30), wxTE_RIGHT);
    course_fifteen_grade_3 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_GRADE_3, "", wxPoint(528, 108), wxSize(25, 30), wxTE_RIGHT);
    course_fifteen_3->SetMaxLength(6);
    course_fifteen_grade_3->SetMaxLength(1);
    course_fifteen_3->SetHint("COURSE");
    course_fifteen_grade_3->SetHint("A");

    course_sixteen_3 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_3, "", wxPoint(463, 140), wxSize(65, 30), wxTE_RIGHT);
    course_sixteen_grade_3 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_GRADE_3, "", wxPoint(528, 140), wxSize(25, 30), wxTE_RIGHT);
    course_sixteen_3->SetMaxLength(6);
    course_sixteen_grade_3->SetMaxLength(1);
    course_sixteen_3->SetHint("COURSE");
    course_sixteen_grade_3->SetHint("A");

    course_seventeen_3 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_3, "", wxPoint(463, 172), wxSize(65, 30), wxTE_RIGHT);
    course_seventeen_grade_3 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_GRADE_3, "", wxPoint(528, 172), wxSize(25, 30), wxTE_RIGHT);
    course_seventeen_3->SetMaxLength(6);
    course_seventeen_grade_3->SetMaxLength(1);
    course_seventeen_3->SetHint("COURSE");
    course_seventeen_grade_3->SetHint("A");

    course_eighteen_3 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_3, "", wxPoint(463, 204), wxSize(65, 30), wxTE_RIGHT);
    course_eighteen_grade_3 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_GRADE_3, "", wxPoint(528, 204), wxSize(25, 30), wxTE_RIGHT);
    course_eighteen_3->SetMaxLength(6);
    course_eighteen_grade_3->SetMaxLength(1);
    course_eighteen_3->SetHint("COURSE");
    course_eighteen_grade_3->SetHint("A");

    course_nineteen_3 = new wxTextCtrl(this, ID_COURSE_NINETEEN_3, "", wxPoint(463, 236), wxSize(65, 30), wxTE_RIGHT);
    course_nineteen_grade_3 = new wxTextCtrl(this, ID_COURSE_NINETEEN_GRADE_3, "", wxPoint(528, 236), wxSize(25, 30), wxTE_RIGHT);
    course_nineteen_3->SetMaxLength(6);
    course_nineteen_grade_3->SetMaxLength(1);
    course_nineteen_3->SetHint("COURSE");
    course_nineteen_grade_3->SetHint("A");

    course_twenty_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_3, "", wxPoint(463, 268), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_grade_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_GRADE_3, "", wxPoint(528, 268), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_3->SetMaxLength(6);
    course_twenty_grade_3->SetMaxLength(1);
    course_twenty_3->SetHint("COURSE");
    course_twenty_grade_3->SetHint("A");

    course_twenty_one_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_3, "", wxPoint(463, 300), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_one_grade_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_GRADE_3, "", wxPoint(528, 300), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_one_3->SetMaxLength(6);
    course_twenty_one_grade_3->SetMaxLength(1);
    course_twenty_one_3->SetHint("COURSE");
    course_twenty_one_grade_3->SetHint("A");

    course_twenty_two_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_3, "", wxPoint(463, 332), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_two_grade_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_GRADE_3, "", wxPoint(528, 332), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_two_3->SetMaxLength(6);
    course_twenty_two_grade_3->SetMaxLength(1);
    course_twenty_two_3->SetHint("COURSE");
    course_twenty_two_grade_3->SetHint("A");

    course_twenty_three_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_3, "", wxPoint(463, 364), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_three_grade_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_GRADE_3, "", wxPoint(528, 364), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_three_3->SetMaxLength(6);
    course_twenty_three_grade_3->SetMaxLength(1);
    course_twenty_three_3->SetHint("COURSE");
    course_twenty_three_grade_3->SetHint("A");

    course_twenty_four_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_3, "", wxPoint(463, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_four_grade_3 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_GRADE_3, "", wxPoint(528, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_four_3->SetMaxLength(6);
    course_twenty_four_grade_3->SetMaxLength(1);
    course_twenty_four_3->SetHint("COURSE");
    course_twenty_four_grade_3->SetHint("A");

    calculate_gp_3 = new wxButton(this, ID_CALCULATE_300_LEVEL_GP, "Display GP", wxPoint(428, 445), wxSize(75, 50));

    // 400 Level
    wxString level_text_4 = wxT("400 LEVEL");
    wxStaticText *st_4 = new wxStaticText(this, wxID_ANY, level_text_4, wxPoint(617, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_4 = new wxTextCtrl(this, ID_COURSE_ONE_4, "", wxPoint(557, 44), wxSize(65, 30), wxTE_RIGHT);
    course_one_grade_4 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_4, "", wxPoint(622, 44), wxSize(25, 30), wxTE_RIGHT);
    course_one_4->SetMaxLength(6);
    course_one_grade_4->SetMaxLength(1);
    course_one_4->SetHint("COURSE");
    course_one_grade_4->SetHint("A");

    course_two_4 = new wxTextCtrl(this, ID_COURSE_TWO_4, "", wxPoint(557, 76), wxSize(65, 30), wxTE_RIGHT);
    course_two_grade_4 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_4, "", wxPoint(622, 76), wxSize(25, 30), wxTE_RIGHT);
    course_two_4->SetMaxLength(6);
    course_two_grade_4->SetMaxLength(1);
    course_two_4->SetHint("COURSE");
    course_two_grade_4->SetHint("A");

    course_three_4 = new wxTextCtrl(this, ID_COURSE_THREE_4, "", wxPoint(557, 108), wxSize(65, 30), wxTE_RIGHT);
    course_three_grade_4 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_4, "", wxPoint(622, 108), wxSize(25, 30), wxTE_RIGHT);
    course_three_4->SetMaxLength(6);
    course_three_grade_4->SetMaxLength(1);
    course_three_4->SetHint("COURSE");
    course_three_grade_4->SetHint("A");

    course_four_4 = new wxTextCtrl(this, ID_COURSE_FOUR_4, "", wxPoint(557, 140), wxSize(65, 30), wxTE_RIGHT);
    course_four_grade_4 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_4, "", wxPoint(622, 140), wxSize(25, 30), wxTE_RIGHT);
    course_four_4->SetMaxLength(6);
    course_four_grade_4->SetMaxLength(1);
    course_four_4->SetHint("COURSE");
    course_four_grade_4->SetHint("A");

    course_five_4 = new wxTextCtrl(this, ID_COURSE_FIVE_4, "", wxPoint(557, 172), wxSize(65, 30), wxTE_RIGHT);
    course_five_grade_4 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_4, "", wxPoint(622, 172), wxSize(25, 30), wxTE_RIGHT);
    course_five_4->SetMaxLength(6);
    course_five_grade_4->SetMaxLength(1);
    course_five_4->SetHint("COURSE");
    course_five_grade_4->SetHint("A");

    course_six_4 = new wxTextCtrl(this, ID_COURSE_SIX_4, "", wxPoint(557, 204), wxSize(65, 30), wxTE_RIGHT);
    course_six_grade_4 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_4, "", wxPoint(622, 204), wxSize(25, 30), wxTE_RIGHT);
    course_six_4->SetMaxLength(6);
    course_six_grade_4->SetMaxLength(1);
    course_six_4->SetHint("COURSE");
    course_six_grade_4->SetHint("A");

    course_seven_4 = new wxTextCtrl(this, ID_COURSE_SEVEN_4, "", wxPoint(557, 236), wxSize(65, 30), wxTE_RIGHT);
    course_seven_grade_4 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_4, "", wxPoint(622, 236), wxSize(25, 30), wxTE_RIGHT);
    course_seven_4->SetMaxLength(6);
    course_seven_grade_4->SetMaxLength(1);
    course_seven_4->SetHint("COURSE");
    course_seven_grade_4->SetHint("A");

    course_eight_4 = new wxTextCtrl(this, ID_COURSE_EIGHT_4, "", wxPoint(557, 268), wxSize(65, 30), wxTE_RIGHT);
    course_eight_grade_4 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_4, "", wxPoint(622, 268), wxSize(25, 30), wxTE_RIGHT);
    course_eight_4->SetMaxLength(6);
    course_eight_grade_4->SetMaxLength(1);
    course_eight_4->SetHint("COURSE");
    course_eight_grade_4->SetHint("A");

    course_nine_4 = new wxTextCtrl(this, ID_COURSE_NINE_4, "", wxPoint(557, 300), wxSize(65, 30), wxTE_RIGHT);
    course_nine_grade_4 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_4, "", wxPoint(622, 300), wxSize(25, 30), wxTE_RIGHT);
    course_nine_4->SetMaxLength(6);
    course_nine_grade_4->SetMaxLength(1);
    course_nine_4->SetHint("COURSE");
    course_nine_grade_4->SetHint("A");

    course_ten_4 = new wxTextCtrl(this, ID_COURSE_TEN_4, "", wxPoint(557, 332), wxSize(65, 30), wxTE_RIGHT);
    course_ten_grade_4 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_4, "", wxPoint(622, 332), wxSize(25, 30), wxTE_RIGHT);
    course_ten_4->SetMaxLength(6);
    course_ten_grade_4->SetMaxLength(1);
    course_ten_4->SetHint("COURSE");
    course_ten_grade_4->SetHint("A");

    course_eleven_4 = new wxTextCtrl(this, ID_COURSE_ELEVEN_4, "", wxPoint(557, 364), wxSize(65, 30), wxTE_RIGHT);
    course_eleven_grade_4 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_4, "", wxPoint(622, 364), wxSize(25, 30), wxTE_RIGHT);
    course_eleven_4->SetMaxLength(6);
    course_eleven_grade_4->SetMaxLength(1);
    course_eleven_4->SetHint("COURSE");
    course_eleven_grade_4->SetHint("A");

    course_twelve_4 = new wxTextCtrl(this, ID_COURSE_TWELVE_4, "", wxPoint(557, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twelve_grade_4 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_4, "", wxPoint(622, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twelve_4->SetMaxLength(6);
    course_twelve_grade_4->SetMaxLength(1);
    course_twelve_4->SetHint("COURSE");
    course_twelve_grade_4->SetHint("A");

    course_thirteen_4 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_4, "", wxPoint(647, 44), wxSize(65, 30), wxTE_RIGHT);
    course_thirteen_grade_4 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_GRADE_4, "", wxPoint(712, 44), wxSize(25, 30), wxTE_RIGHT);
    course_thirteen_4->SetMaxLength(6);
    course_thirteen_grade_4->SetMaxLength(1);
    course_thirteen_4->SetHint("COURSE");
    course_thirteen_grade_4->SetHint("A");

    course_fourteen_4 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_4, "", wxPoint(647, 76), wxSize(65, 30), wxTE_RIGHT);
    course_fourteen_grade_4 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_GRADE_4, "", wxPoint(712, 76), wxSize(25, 30), wxTE_RIGHT);
    course_fourteen_4->SetMaxLength(6);
    course_fourteen_grade_4->SetMaxLength(1);
    course_fourteen_4->SetHint("COURSE");
    course_fourteen_grade_4->SetHint("A");

    course_fifteen_4 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_4, "", wxPoint(647, 108), wxSize(65, 30), wxTE_RIGHT);
    course_fifteen_grade_4 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_GRADE_4, "", wxPoint(712, 108), wxSize(25, 30), wxTE_RIGHT);
    course_fifteen_4->SetMaxLength(6);
    course_fifteen_grade_4->SetMaxLength(1);
    course_fifteen_4->SetHint("COURSE");
    course_fifteen_grade_4->SetHint("A");

    course_sixteen_4 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_4, "", wxPoint(647, 140), wxSize(65, 30), wxTE_RIGHT);
    course_sixteen_grade_4 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_GRADE_4, "", wxPoint(712, 140), wxSize(25, 30), wxTE_RIGHT);
    course_sixteen_4->SetMaxLength(6);
    course_sixteen_grade_4->SetMaxLength(1);
    course_sixteen_4->SetHint("COURSE");
    course_sixteen_grade_4->SetHint("A");

    course_seventeen_4 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_4, "", wxPoint(647, 172), wxSize(65, 30), wxTE_RIGHT);
    course_seventeen_grade_4 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_GRADE_4, "", wxPoint(712, 172), wxSize(25, 30), wxTE_RIGHT);
    course_seventeen_4->SetMaxLength(6);
    course_seventeen_grade_4->SetMaxLength(1);
    course_seventeen_4->SetHint("COURSE");
    course_seventeen_grade_4->SetHint("A");

    course_eighteen_4 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_4, "", wxPoint(647, 204), wxSize(65, 30), wxTE_RIGHT);
    course_eighteen_grade_4 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_GRADE_4, "", wxPoint(712, 204), wxSize(25, 30), wxTE_RIGHT);
    course_eighteen_4->SetMaxLength(6);
    course_eighteen_grade_4->SetMaxLength(1);
    course_eighteen_4->SetHint("COURSE");
    course_eighteen_grade_4->SetHint("A");

    course_nineteen_4 = new wxTextCtrl(this, ID_COURSE_NINETEEN_4, "", wxPoint(647, 236), wxSize(65, 30), wxTE_RIGHT);
    course_nineteen_grade_4 = new wxTextCtrl(this, ID_COURSE_NINETEEN_GRADE_4, "", wxPoint(712, 236), wxSize(25, 30), wxTE_RIGHT);
    course_nineteen_4->SetMaxLength(6);
    course_nineteen_grade_4->SetMaxLength(1);
    course_nineteen_4->SetHint("COURSE");
    course_nineteen_grade_4->SetHint("A");

    course_twenty_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_4, "", wxPoint(647, 268), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_grade_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_GRADE_4, "", wxPoint(712, 268), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_4->SetMaxLength(6);
    course_twenty_grade_4->SetMaxLength(1);
    course_twenty_4->SetHint("COURSE");
    course_twenty_grade_4->SetHint("A");

    course_twenty_one_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_4, "", wxPoint(647, 300), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_one_grade_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_GRADE_4, "", wxPoint(712, 300), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_one_4->SetMaxLength(6);
    course_twenty_one_grade_4->SetMaxLength(1);
    course_twenty_one_4->SetHint("COURSE");
    course_twenty_one_grade_4->SetHint("A");

    course_twenty_two_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_4, "", wxPoint(647, 332), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_two_grade_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_GRADE_4, "", wxPoint(712, 332), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_two_4->SetMaxLength(6);
    course_twenty_two_grade_4->SetMaxLength(1);
    course_twenty_two_4->SetHint("COURSE");
    course_twenty_two_grade_4->SetHint("A");

    course_twenty_three_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_4, "", wxPoint(647, 364), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_three_grade_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_GRADE_4, "", wxPoint(712, 364), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_three_4->SetMaxLength(6);
    course_twenty_three_grade_4->SetMaxLength(1);
    course_twenty_three_4->SetHint("COURSE");
    course_twenty_three_grade_4->SetHint("A");

    course_twenty_four_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_4, "", wxPoint(647, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_four_grade_4 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_GRADE_4, "", wxPoint(712, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_four_4->SetMaxLength(6);
    course_twenty_four_grade_4->SetMaxLength(1);
    course_twenty_four_4->SetHint("COURSE");
    course_twenty_four_grade_4->SetHint("A");

    calculate_gp_4 = new wxButton(this, ID_CALCULATE_400_LEVEL_GP, "Display GP", wxPoint(612, 445), wxSize(75, 50));

    // 500 Level
    wxString level_text_5 = wxT("500 LEVEL");
    wxStaticText *st_5 = new wxStaticText(this, wxID_ANY, level_text_5, wxPoint(801, 20), wxDefaultSize, wxALIGN_LEFT);

    course_one_5 = new wxTextCtrl(this, ID_COURSE_ONE_5, "", wxPoint(741, 44), wxSize(65, 30), wxTE_RIGHT);
    course_one_grade_5 = new wxTextCtrl(this, ID_COURSE_ONE_GRADE_5, "", wxPoint(806, 44), wxSize(25, 30), wxTE_RIGHT);
    course_one_5->SetMaxLength(6);
    course_one_grade_5->SetMaxLength(1);
    course_one_5->SetHint("COURSE");
    course_one_grade_5->SetHint("A");

    course_two_5 = new wxTextCtrl(this, ID_COURSE_TWO_5, "", wxPoint(741, 76), wxSize(65, 30), wxTE_RIGHT);
    course_two_grade_5 = new wxTextCtrl(this, ID_COURSE_TWO_GRADE_5, "", wxPoint(806, 76), wxSize(25, 30), wxTE_RIGHT);
    course_two_5->SetMaxLength(6);
    course_two_grade_5->SetMaxLength(1);
    course_two_5->SetHint("COURSE");
    course_two_grade_5->SetHint("A");

    course_three_5 = new wxTextCtrl(this, ID_COURSE_THREE_5, "", wxPoint(741, 108), wxSize(65, 30), wxTE_RIGHT);
    course_three_grade_5 = new wxTextCtrl(this, ID_COURSE_THREE_GRADE_5, "", wxPoint(806, 108), wxSize(25, 30), wxTE_RIGHT);
    course_three_5->SetMaxLength(6);
    course_three_grade_5->SetMaxLength(1);
    course_three_5->SetHint("COURSE");
    course_three_grade_5->SetHint("A");

    course_four_5 = new wxTextCtrl(this, ID_COURSE_FOUR_5, "", wxPoint(741, 140), wxSize(65, 30), wxTE_RIGHT);
    course_four_grade_5 = new wxTextCtrl(this, ID_COURSE_FOUR_GRADE_5, "", wxPoint(806, 140), wxSize(25, 30), wxTE_RIGHT);
    course_four_5->SetMaxLength(6);
    course_four_grade_5->SetMaxLength(1);
    course_four_5->SetHint("COURSE");
    course_four_grade_5->SetHint("A");

    course_five_5 = new wxTextCtrl(this, ID_COURSE_FIVE_5, "", wxPoint(741, 172), wxSize(65, 30), wxTE_RIGHT);
    course_five_grade_5 = new wxTextCtrl(this, ID_COURSE_FIVE_GRADE_5, "", wxPoint(806, 172), wxSize(25, 30), wxTE_RIGHT);
    course_five_5->SetMaxLength(6);
    course_five_grade_5->SetMaxLength(1);
    course_five_5->SetHint("COURSE");
    course_five_grade_5->SetHint("A");

    course_six_5 = new wxTextCtrl(this, ID_COURSE_SIX_5, "", wxPoint(741, 204), wxSize(65, 30), wxTE_RIGHT);
    course_six_grade_5 = new wxTextCtrl(this, ID_COURSE_SIX_GRADE_5, "", wxPoint(806, 204), wxSize(25, 30), wxTE_RIGHT);
    course_six_5->SetMaxLength(6);
    course_six_grade_5->SetMaxLength(1);
    course_six_5->SetHint("COURSE");
    course_six_grade_5->SetHint("A");

    course_seven_5 = new wxTextCtrl(this, ID_COURSE_SEVEN_5, "", wxPoint(741, 236), wxSize(65, 30), wxTE_RIGHT);
    course_seven_grade_5 = new wxTextCtrl(this, ID_COURSE_SEVEN_GRADE_5, "", wxPoint(806, 236), wxSize(25, 30), wxTE_RIGHT);
    course_seven_5->SetMaxLength(6);
    course_seven_grade_5->SetMaxLength(1);
    course_seven_5->SetHint("COURSE");
    course_seven_grade_5->SetHint("A");

    course_eight_5 = new wxTextCtrl(this, ID_COURSE_EIGHT_5, "", wxPoint(741, 268), wxSize(65, 30), wxTE_RIGHT);
    course_eight_grade_5 = new wxTextCtrl(this, ID_COURSE_EIGHT_GRADE_5, "", wxPoint(806, 268), wxSize(25, 30), wxTE_RIGHT);
    course_eight_5->SetMaxLength(6);
    course_eight_grade_5->SetMaxLength(1);
    course_eight_5->SetHint("COURSE");
    course_eight_grade_5->SetHint("A");

    course_nine_5 = new wxTextCtrl(this, ID_COURSE_NINE_5, "", wxPoint(741, 300), wxSize(65, 30), wxTE_RIGHT);
    course_nine_grade_5 = new wxTextCtrl(this, ID_COURSE_NINE_GRADE_5, "", wxPoint(806, 300), wxSize(25, 30), wxTE_RIGHT);
    course_nine_5->SetMaxLength(6);
    course_nine_grade_5->SetMaxLength(1);
    course_nine_5->SetHint("COURSE");
    course_nine_grade_5->SetHint("A");

    course_ten_5 = new wxTextCtrl(this, ID_COURSE_TEN_5, "", wxPoint(741, 332), wxSize(65, 30), wxTE_RIGHT);
    course_ten_grade_5 = new wxTextCtrl(this, ID_COURSE_TEN_GRADE_5, "", wxPoint(806, 332), wxSize(25, 30), wxTE_RIGHT);
    course_ten_5->SetMaxLength(6);
    course_ten_grade_5->SetMaxLength(1);
    course_ten_5->SetHint("COURSE");
    course_ten_grade_5->SetHint("A");

    course_eleven_5 = new wxTextCtrl(this, ID_COURSE_ELEVEN_5, "", wxPoint(741, 364), wxSize(65, 30), wxTE_RIGHT);
    course_eleven_grade_5 = new wxTextCtrl(this, ID_COURSE_ELEVEN_GRADE_5, "", wxPoint(806, 364), wxSize(25, 30), wxTE_RIGHT);
    course_eleven_5->SetMaxLength(6);
    course_eleven_grade_5->SetMaxLength(1);
    course_eleven_5->SetHint("COURSE");
    course_eleven_grade_5->SetHint("A");

    course_twelve_5 = new wxTextCtrl(this, ID_COURSE_TWELVE_5, "", wxPoint(741, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twelve_grade_5 = new wxTextCtrl(this, ID_COURSE_TWELVE_GRADE_5, "", wxPoint(806, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twelve_5->SetMaxLength(6);
    course_twelve_grade_5->SetMaxLength(1);
    course_twelve_5->SetHint("COURSE");
    course_twelve_grade_5->SetHint("A");

    course_thirteen_5 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_5, "", wxPoint(831, 44), wxSize(65, 30), wxTE_RIGHT);
    course_thirteen_grade_5 = new wxTextCtrl(this, ID_COURSE_THIRTEEN_GRADE_5, "", wxPoint(896, 44), wxSize(25, 30), wxTE_RIGHT);
    course_thirteen_5->SetMaxLength(6);
    course_thirteen_grade_5->SetMaxLength(1);
    course_thirteen_5->SetHint("COURSE");
    course_thirteen_grade_5->SetHint("A");

    course_fourteen_5 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_5, "", wxPoint(831, 76), wxSize(65, 30), wxTE_RIGHT);
    course_fourteen_grade_5 = new wxTextCtrl(this, ID_COURSE_FOURTEEN_GRADE_5, "", wxPoint(896, 76), wxSize(25, 30), wxTE_RIGHT);
    course_fourteen_5->SetMaxLength(6);
    course_fourteen_grade_5->SetMaxLength(1);
    course_fourteen_5->SetHint("COURSE");
    course_fourteen_grade_5->SetHint("A");

    course_fifteen_5 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_5, "", wxPoint(831, 108), wxSize(65, 30), wxTE_RIGHT);
    course_fifteen_grade_5 = new wxTextCtrl(this, ID_COURSE_FIFTEEN_GRADE_5, "", wxPoint(896, 108), wxSize(25, 30), wxTE_RIGHT);
    course_fifteen_5->SetMaxLength(6);
    course_fifteen_grade_5->SetMaxLength(1);
    course_fifteen_5->SetHint("COURSE");
    course_fifteen_grade_5->SetHint("A");

    course_sixteen_5 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_5, "", wxPoint(831, 140), wxSize(65, 30), wxTE_RIGHT);
    course_sixteen_grade_5 = new wxTextCtrl(this, ID_COURSE_SIXTEEN_GRADE_5, "", wxPoint(896, 140), wxSize(25, 30), wxTE_RIGHT);
    course_sixteen_5->SetMaxLength(6);
    course_sixteen_grade_5->SetMaxLength(1);
    course_sixteen_5->SetHint("COURSE");
    course_sixteen_grade_5->SetHint("A");

    course_seventeen_5 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_5, "", wxPoint(831, 172), wxSize(65, 30), wxTE_RIGHT);
    course_seventeen_grade_5 = new wxTextCtrl(this, ID_COURSE_SEVENTEEN_GRADE_5, "", wxPoint(896, 172), wxSize(25, 30), wxTE_RIGHT);
    course_seventeen_5->SetMaxLength(6);
    course_seventeen_grade_5->SetMaxLength(1);
    course_seventeen_5->SetHint("COURSE");
    course_seventeen_grade_5->SetHint("A");

    course_eighteen_5 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_4, "", wxPoint(831, 204), wxSize(65, 30), wxTE_RIGHT);
    course_eighteen_grade_5 = new wxTextCtrl(this, ID_COURSE_EIGHTEEN_GRADE_4, "", wxPoint(896, 204), wxSize(25, 30), wxTE_RIGHT);
    course_eighteen_5->SetMaxLength(6);
    course_eighteen_grade_5->SetMaxLength(1);
    course_eighteen_5->SetHint("COURSE");
    course_eighteen_grade_5->SetHint("A");

    course_nineteen_5 = new wxTextCtrl(this, ID_COURSE_NINETEEN_5, "", wxPoint(831, 236), wxSize(65, 30), wxTE_RIGHT);
    course_nineteen_grade_5 = new wxTextCtrl(this, ID_COURSE_NINETEEN_GRADE_5, "", wxPoint(896, 236), wxSize(25, 30), wxTE_RIGHT);
    course_nineteen_5->SetMaxLength(6);
    course_nineteen_grade_5->SetMaxLength(1);
    course_nineteen_5->SetHint("COURSE");
    course_nineteen_grade_5->SetHint("A");

    course_twenty_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_5, "", wxPoint(831, 268), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_grade_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_GRADE_5, "", wxPoint(896, 268), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_5->SetMaxLength(6);
    course_twenty_grade_5->SetMaxLength(1);
    course_twenty_5->SetHint("COURSE");
    course_twenty_grade_5->SetHint("A");

    course_twenty_one_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_5, "", wxPoint(831, 300), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_one_grade_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_ONE_GRADE_5, "", wxPoint(896, 300), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_one_5->SetMaxLength(6);
    course_twenty_one_grade_5->SetMaxLength(1);
    course_twenty_one_5->SetHint("COURSE");
    course_twenty_one_grade_5->SetHint("A");

    course_twenty_two_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_5, "", wxPoint(831, 332), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_two_grade_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_TWO_GRADE_5, "", wxPoint(896, 332), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_two_5->SetMaxLength(6);
    course_twenty_two_grade_5->SetMaxLength(1);
    course_twenty_two_5->SetHint("COURSE");
    course_twenty_two_grade_5->SetHint("A");

    course_twenty_three_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_5, "", wxPoint(831, 364), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_three_grade_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_THREE_GRADE_5, "", wxPoint(896, 364), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_three_5->SetMaxLength(6);
    course_twenty_three_grade_5->SetMaxLength(1);
    course_twenty_three_5->SetHint("COURSE");
    course_twenty_three_grade_5->SetHint("A");

    course_twenty_four_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_5, "", wxPoint(831, 396), wxSize(65, 30), wxTE_RIGHT);
    course_twenty_four_grade_5 = new wxTextCtrl(this, ID_COURSE_TWENTY_FOUR_GRADE_5, "", wxPoint(896, 396), wxSize(25, 30), wxTE_RIGHT);
    course_twenty_four_5->SetMaxLength(6);
    course_twenty_four_grade_5->SetMaxLength(1);
    course_twenty_four_5->SetHint("COURSE");
    course_twenty_four_grade_5->SetHint("A");

    calculate_gp_5 = new wxButton(this, ID_CALCULATE_500_LEVEL_GP, "Display GP", wxPoint(796, 445), wxSize(75, 50));

    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_MENU, &MyFrame::OnHelp, this, wxID_HELP);

    calculate_cgpa = new wxButton(this, ID_CALCULATE_CGPA, "Show CGPA", wxPoint(385, 510), wxSize(155, 50));

    // Bind(wxEVT_TEXT, &MyFrame::OnCourseTextBoxClicked, this, ID_COURSE_ONE);
}

void MyFrame::OnExit(wxCommandEvent &event)
{
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent &event)
{
    wxMessageBox("This is a programme for calculating the grade pending (GP) of an engineering student at the Univesity of Benin, Ugbowo Campus, Ugbowo, Benin-City, Edo State, Nigeria.",
                 "GP Calculator V0.0.1", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent &event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

void MyFrame::OnHelp(wxCommandEvent &event)
{
    wxMessageBox("For help on how to use this program, please contact the administrator.");
}

void MyFrame::OnOneHundredLevelDisplayGpButtonClicked(wxCommandEvent &event)
{
    using namespace std;

    std::map<wxString, float> all_courses_dictionary;

    all_courses_dictionary["CHM111"] = 3.0;
    all_courses_dictionary["CHM113"] = 3.0;
    all_courses_dictionary["MTH110"] = 3.0;
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
    float thirteenth_course = all_courses_dictionary[course_thirteen->GetValue()];
    float thirteenth_course_grade = all_courses_dictionary[course_thirteen_grade->GetValue()];
    float fourteenth_course = all_courses_dictionary[course_fourteen->GetValue()];
    float fourteenth_course_grade = all_courses_dictionary[course_fourteen_grade->GetValue()];
    float fifteenth_course = all_courses_dictionary[course_fifteen->GetValue()];
    float fifteenth_course_grade = all_courses_dictionary[course_fifteen_grade->GetValue()];
    float sixteenth_course = all_courses_dictionary[course_sixteen->GetValue()];
    float sixteenth_course_grade = all_courses_dictionary[course_sixteen_grade->GetValue()];
    float seventeenth_course = all_courses_dictionary[course_seventeen->GetValue()];
    float seventeenth_course_grade = all_courses_dictionary[course_seventeen_grade->GetValue()];
    float eighteenth_course = all_courses_dictionary[course_eighteen->GetValue()];
    float eighteenth_course_grade = all_courses_dictionary[course_eighteen_grade->GetValue()];
    float ninteenth_course = all_courses_dictionary[course_nineteen->GetValue()];
    float ninteenth_course_grade = all_courses_dictionary[course_nineteen_grade->GetValue()];
    float twentieth_course = all_courses_dictionary[course_twenty->GetValue()];
    float twentieth_course_grade = all_courses_dictionary[course_twenty_grade->GetValue()];
    float twenty_first_course = all_courses_dictionary[course_twenty_one->GetValue()];
    float twenty_first_course_grade = all_courses_dictionary[course_twenty_one_grade->GetValue()];
    float twenty_second_course = all_courses_dictionary[course_twenty_two->GetValue()];
    float twenty_second_course_grade = all_courses_dictionary[course_twenty_two_grade->GetValue()];
    float twenty_third_course = all_courses_dictionary[course_twenty_three->GetValue()];
    float twenty_third_course_grade = all_courses_dictionary[course_twenty_three_grade->GetValue()];
    float twenty_fourth_course = all_courses_dictionary[course_twenty_four->GetValue()];
    float twenty_fourth_course_grade = all_courses_dictionary[course_twenty_four_grade->GetValue()];

    float first_year_course_credit_load_sum = (first_course * first_course_grade) + (second_course * second_course_grade) + (third_course * third_course_grade) + (fourth_course * fourth_course_grade) + (fifth_course * fifth_course_grade) + (sixth_course * sixth_course_grade) + (seventh_course * seventh_course_grade) + (eighth_course * eighth_course_grade) + (nineth_course * nineth_course_grade) + (tenth_course * tenth_course_grade) + (eleventh_course * eleventh_course_grade) + (twelveth_course * twelveth_course_grade) + (thirteenth_course * thirteenth_course_grade) + (fourteenth_course * fourteenth_course_grade) + (fifteenth_course * fifteenth_course_grade) + (sixteenth_course * sixteenth_course_grade) + (seventeenth_course * seventeenth_course_grade) + (eighteenth_course * eighteenth_course_grade) + (ninteenth_course * ninteenth_course_grade) + (twentieth_course * twentieth_course_grade) + (twenty_first_course * twenty_first_course_grade) + (twenty_second_course * twenty_second_course_grade) + (twenty_third_course * twenty_third_course_grade) + (twenty_fourth_course * twenty_fourth_course_grade);
    float first_year_credit_load_sum = first_course + second_course + third_course + fourth_course + fifth_course + sixth_course + seventh_course + eighth_course + nineth_course + tenth_course + eleventh_course + twelveth_course + thirteenth_course + fourteenth_course + fifteenth_course + sixteenth_course + seventeenth_course + eighteenth_course + ninteenth_course + twentieth_course + twenty_first_course + twenty_second_course + twenty_third_course + twenty_fourth_course;

    float first_year_total_gp = first_year_course_credit_load_sum / first_year_credit_load_sum;

    // check if the result of the GP calculation is even a number or incorrect/incomplete entries were made
    if (isnan(first_year_total_gp) or first_year_course_credit_load_sum == 0 or first_year_credit_load_sum == 0)
    {
        wxString first_year_total_gp_wxstring = "Cannot compute your request as invalid values have been submitted for computation. Please correct your entry/entries and retry.\n\nIf only one course was registered - with the grade 'F' or all the courses registered have the grade 'F', the Grade Pending is 0.0";
        wxMessageBox(first_year_total_gp_wxstring);

        event.Skip();
    }

    else
    {
        // convert the gp to wxString
        wxString first_year_total_gp_wxstring = wxString::Format(wxT("%f"), first_year_total_gp);
        wxString honours_info;
        if (first_year_total_gp > 4.5)
        {
            honours_info = "\nFirst Class Student";
        }
        if (first_year_total_gp < 4.49 and first_year_total_gp > 3.5)
        {
            honours_info = "\nSecond Class Upper Student";
        }
        if (first_year_total_gp < 3.49 and first_year_total_gp > 2.4)
        {
            honours_info = "\nSecond Class Lower Student";
        }
        if (first_year_total_gp < 2.39 and first_year_total_gp > 1.5)
        {
            honours_info = "\nThird Class Student";
        }
        else if (first_year_total_gp < 1.49)
        {
            honours_info = "\nPass Student";
        }
        wxMessageBox("100 Level Grade Pending: " + first_year_total_gp_wxstring + " " + honours_info);
        event.Skip();
    }
}

void MyFrame::OnTwoHundredLevelDisplayGpButtonClicked(wxCommandEvent &event)
{
    using namespace std;

    std::map<wxString, float> all_courses_dictionary;

    all_courses_dictionary["CHM111"] = 3.0;
    all_courses_dictionary["CHM113"] = 3.0;
    all_courses_dictionary["MTH110"] = 3.0;
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

    float first_course_2 = all_courses_dictionary[course_one_2->GetValue()];
    float first_course_grade_2 = all_courses_dictionary[course_one_grade_2->GetValue()];
    float second_course_2 = all_courses_dictionary[course_two_2->GetValue()];
    float second_course_grade_2 = all_courses_dictionary[course_two_grade_2->GetValue()];
    float third_course_2 = all_courses_dictionary[course_three_2->GetValue()];
    float third_course_grade_2 = all_courses_dictionary[course_three_grade_2->GetValue()];
    float fourth_course_2 = all_courses_dictionary[course_four_2->GetValue()];
    float fourth_course_grade_2 = all_courses_dictionary[course_four_grade_2->GetValue()];
    float fifth_course_2 = all_courses_dictionary[course_five_2->GetValue()];
    float fifth_course_grade_2 = all_courses_dictionary[course_five_grade_2->GetValue()];
    float sixth_course_2 = all_courses_dictionary[course_six_2->GetValue()];
    float sixth_course_grade_2 = all_courses_dictionary[course_six_grade_2->GetValue()];
    float seventh_course_2 = all_courses_dictionary[course_seven_2->GetValue()];
    float seventh_course_grade_2 = all_courses_dictionary[course_seven_grade_2->GetValue()];
    float eighth_course_2 = all_courses_dictionary[course_eight_2->GetValue()];
    float eighth_course_grade_2 = all_courses_dictionary[course_eight_grade_2->GetValue()];
    float nineth_course_2 = all_courses_dictionary[course_nine_2->GetValue()];
    float nineth_course_grade_2 = all_courses_dictionary[course_nine_grade_2->GetValue()];
    float tenth_course_2 = all_courses_dictionary[course_ten_2->GetValue()];
    float tenth_course_grade_2 = all_courses_dictionary[course_ten_grade_2->GetValue()];
    float eleventh_course_2 = all_courses_dictionary[course_eleven_2->GetValue()];
    float eleventh_course_grade_2 = all_courses_dictionary[course_eleven_grade_2->GetValue()];
    float twelveth_course_2 = all_courses_dictionary[course_twelve_2->GetValue()];
    float twelveth_course_grade_2 = all_courses_dictionary[course_twelve_grade_2->GetValue()];
    float thirteenth_course_2 = all_courses_dictionary[course_thirteen_2->GetValue()];
    float thirteenth_course_grade_2 = all_courses_dictionary[course_thirteen_grade_2->GetValue()];
    float fourteenth_course_2 = all_courses_dictionary[course_fourteen_2->GetValue()];
    float fourteenth_course_grade_2 = all_courses_dictionary[course_fourteen_grade_2->GetValue()];
    float fifteenth_course_2 = all_courses_dictionary[course_fifteen_2->GetValue()];
    float fifteenth_course_grade_2 = all_courses_dictionary[course_fifteen_grade_2->GetValue()];
    float sixteenth_course_2 = all_courses_dictionary[course_sixteen_2->GetValue()];
    float sixteenth_course_grade_2 = all_courses_dictionary[course_sixteen_grade_2->GetValue()];
    float seventeenth_course_2 = all_courses_dictionary[course_seventeen_2->GetValue()];
    float seventeenth_course_grade_2 = all_courses_dictionary[course_seventeen_grade_2->GetValue()];
    float eighteenth_course_2 = all_courses_dictionary[course_eighteen_2->GetValue()];
    float eighteenth_course_grade_2 = all_courses_dictionary[course_eighteen_grade_2->GetValue()];
    float ninteenth_course_2 = all_courses_dictionary[course_nineteen_2->GetValue()];
    float ninteenth_course_grade_2 = all_courses_dictionary[course_nineteen_grade_2->GetValue()];
    float twentieth_course_2 = all_courses_dictionary[course_twenty_2->GetValue()];
    float twentieth_course_grade_2 = all_courses_dictionary[course_twenty_grade_2->GetValue()];
    float twenty_first_course_2 = all_courses_dictionary[course_twenty_one_2->GetValue()];
    float twenty_first_course_grade_2 = all_courses_dictionary[course_twenty_one_grade_2->GetValue()];
    float twenty_second_course_2 = all_courses_dictionary[course_twenty_two_2->GetValue()];
    float twenty_second_course_grade_2 = all_courses_dictionary[course_twenty_two_grade_2->GetValue()];
    float twenty_third_course_2 = all_courses_dictionary[course_twenty_three_2->GetValue()];
    float twenty_third_course_grade_2 = all_courses_dictionary[course_twenty_three_grade_2->GetValue()];
    float twenty_fourth_course_2 = all_courses_dictionary[course_twenty_four_2->GetValue()];
    float twenty_fourth_course_grade_2 = all_courses_dictionary[course_twenty_four_grade_2->GetValue()];

    float second_year_course_credit_load_sum = (first_course_2 * first_course_grade_2) + (second_course_2 * second_course_grade_2) + (third_course_2 * third_course_grade_2) + (fourth_course_2 * fourth_course_grade_2) + (fifth_course_2 * fifth_course_grade_2) + (sixth_course_2 * sixth_course_grade_2) + (seventh_course_2 * seventh_course_grade_2) + (eighth_course_2 * eighth_course_grade_2) + (nineth_course_2 * nineth_course_grade_2) + (tenth_course_2 * tenth_course_grade_2) + (eleventh_course_2 * eleventh_course_grade_2) + (twelveth_course_2 * twelveth_course_grade_2) + (thirteenth_course_2 * thirteenth_course_grade_2) + (fourteenth_course_2 * fourteenth_course_grade_2) + (fifteenth_course_2 * fifteenth_course_grade_2) + (sixteenth_course_2 * sixteenth_course_grade_2) + (seventeenth_course_2 * seventeenth_course_grade_2) + (eighteenth_course_2 * eighteenth_course_grade_2) + (ninteenth_course_2 * ninteenth_course_grade_2) + (twentieth_course_2 * twentieth_course_grade_2) + (twenty_first_course_2 * twenty_first_course_grade_2) + (twenty_second_course_2 * twenty_second_course_grade_2) + (twenty_third_course_2 * twenty_third_course_grade_2) + (twenty_fourth_course_2 * twenty_fourth_course_grade_2);
    float second_year_credit_load_sum = first_course_2 + second_course_2 + third_course_2 + fourth_course_2 + fifth_course_2 + sixth_course_2 + seventh_course_2 + eighth_course_2 + nineth_course_2 + tenth_course_2 + eleventh_course_2 + twelveth_course_2 + thirteenth_course_2 + fourteenth_course_2 + fifteenth_course_2 + sixteenth_course_2 + seventeenth_course_2 + eighteenth_course_2 + ninteenth_course_2 + twentieth_course_2 + twenty_first_course_2 + twenty_second_course_2 + twenty_third_course_2 + twenty_fourth_course_2;

    float second_year_total_gp = second_year_course_credit_load_sum / second_year_credit_load_sum;

    // check if the result of the GP calculation is even a number or incorrect/incomplete entries were made
    if (isnan(second_year_total_gp) or second_year_course_credit_load_sum == 0 or second_year_credit_load_sum == 0)
    {
        wxString second_year_total_gp_wxstring = "Cannot compute your request as invalid values have been submitted for computation. Please correct your entry/entries and retry.\n\nIf only one course was registered - with the grade 'F' or all the courses registered have the grade 'F', the Grade Pending is 0.0";
        wxMessageBox(second_year_total_gp_wxstring);

        event.Skip();
    }

    else
    {
        // convert the gp to wxString
        wxString second_year_total_gp_wxstring = wxString::Format(wxT("%f"), second_year_total_gp);
        wxString honours_info;
        if (second_year_total_gp > 4.5)
        {
            honours_info = "\nFirst Class Student";
        }
        if (second_year_total_gp < 4.49 and second_year_total_gp > 3.5)
        {
            honours_info = "\nSecond Class Upper Student";
        }
        if (second_year_total_gp < 3.49 and second_year_total_gp > 2.4)
        {
            honours_info = "\nSecond Class Lower Student";
        }
        if (second_year_total_gp < 2.39 and second_year_total_gp > 1.5)
        {
            honours_info = "\nThird Class Student";
        }
        else if (second_year_total_gp < 1.49)
        {
            honours_info = "\nPass Student";
        }
        wxMessageBox("200 Level Grade Pending: " + second_year_total_gp_wxstring + " " + honours_info);
        event.Skip();
    }
}

void MyFrame::OnThreeHundredLevelDisplayGpButtonClicked(wxCommandEvent &event)
{
    using namespace std;

    std::map<wxString, float> all_courses_dictionary;

    all_courses_dictionary["CHM111"] = 3.0;
    all_courses_dictionary["CHM113"] = 3.0;
    all_courses_dictionary["MTH110"] = 3.0;
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

    float first_course_3 = all_courses_dictionary[course_one_3->GetValue()];
    float first_course_grade_3 = all_courses_dictionary[course_one_grade_3->GetValue()];
    float second_course_3 = all_courses_dictionary[course_two_3->GetValue()];
    float second_course_grade_3 = all_courses_dictionary[course_two_grade_3->GetValue()];
    float third_course_3 = all_courses_dictionary[course_three_3->GetValue()];
    float third_course_grade_3 = all_courses_dictionary[course_three_grade_3->GetValue()];
    float fourth_course_3 = all_courses_dictionary[course_four_3->GetValue()];
    float fourth_course_grade_3 = all_courses_dictionary[course_four_grade_3->GetValue()];
    float fifth_course_3 = all_courses_dictionary[course_five_3->GetValue()];
    float fifth_course_grade_3 = all_courses_dictionary[course_five_grade_3->GetValue()];
    float sixth_course_3 = all_courses_dictionary[course_six_3->GetValue()];
    float sixth_course_grade_3 = all_courses_dictionary[course_six_grade_3->GetValue()];
    float seventh_course_3 = all_courses_dictionary[course_seven_3->GetValue()];
    float seventh_course_grade_3 = all_courses_dictionary[course_seven_grade_3->GetValue()];
    float eighth_course_3 = all_courses_dictionary[course_eight_3->GetValue()];
    float eighth_course_grade_3 = all_courses_dictionary[course_eight_grade_3->GetValue()];
    float nineth_course_3 = all_courses_dictionary[course_nine_3->GetValue()];
    float nineth_course_grade_3 = all_courses_dictionary[course_nine_grade_3->GetValue()];
    float tenth_course_3 = all_courses_dictionary[course_ten_3->GetValue()];
    float tenth_course_grade_3 = all_courses_dictionary[course_ten_grade_3->GetValue()];
    float eleventh_course_3 = all_courses_dictionary[course_eleven_3->GetValue()];
    float eleventh_course_grade_3 = all_courses_dictionary[course_eleven_grade_3->GetValue()];
    float twelveth_course_3 = all_courses_dictionary[course_twelve_3->GetValue()];
    float twelveth_course_grade_3 = all_courses_dictionary[course_twelve_grade_3->GetValue()];
    float thirteenth_course_3 = all_courses_dictionary[course_thirteen_3->GetValue()];
    float thirteenth_course_grade_3 = all_courses_dictionary[course_thirteen_grade_3->GetValue()];
    float fourteenth_course_3 = all_courses_dictionary[course_fourteen_3->GetValue()];
    float fourteenth_course_grade_3 = all_courses_dictionary[course_fourteen_grade_3->GetValue()];
    float fifteenth_course_3 = all_courses_dictionary[course_fifteen_3->GetValue()];
    float fifteenth_course_grade_3 = all_courses_dictionary[course_fifteen_grade_3->GetValue()];
    float sixteenth_course_3 = all_courses_dictionary[course_sixteen_3->GetValue()];
    float sixteenth_course_grade_3 = all_courses_dictionary[course_sixteen_grade_3->GetValue()];
    float seventeenth_course_3 = all_courses_dictionary[course_seventeen_3->GetValue()];
    float seventeenth_course_grade_3 = all_courses_dictionary[course_seventeen_grade_3->GetValue()];
    float eighteenth_course_3 = all_courses_dictionary[course_eighteen_3->GetValue()];
    float eighteenth_course_grade_3 = all_courses_dictionary[course_eighteen_grade_3->GetValue()];
    float ninteenth_course_3 = all_courses_dictionary[course_nineteen_3->GetValue()];
    float ninteenth_course_grade_3 = all_courses_dictionary[course_nineteen_grade_3->GetValue()];
    float twentieth_course_3 = all_courses_dictionary[course_twenty_3->GetValue()];
    float twentieth_course_grade_3 = all_courses_dictionary[course_twenty_grade_3->GetValue()];
    float twenty_first_course_3 = all_courses_dictionary[course_twenty_one_3->GetValue()];
    float twenty_first_course_grade_3 = all_courses_dictionary[course_twenty_one_grade_3->GetValue()];
    float twenty_second_course_3 = all_courses_dictionary[course_twenty_two_3->GetValue()];
    float twenty_second_course_grade_3 = all_courses_dictionary[course_twenty_two_grade_3->GetValue()];
    float twenty_third_course_3 = all_courses_dictionary[course_twenty_three_3->GetValue()];
    float twenty_third_course_grade_3 = all_courses_dictionary[course_twenty_three_grade_3->GetValue()];
    float twenty_fourth_course_3 = all_courses_dictionary[course_twenty_four_3->GetValue()];
    float twenty_fourth_course_grade_3 = all_courses_dictionary[course_twenty_four_grade_3->GetValue()];

    float third_year_course_credit_load_sum = (first_course_3 * first_course_grade_3) + (second_course_3 * second_course_grade_3) + (third_course_3 * third_course_grade_3) + (fourth_course_3 * fourth_course_grade_3) + (fifth_course_3 * fifth_course_grade_3) + (sixth_course_3 * sixth_course_grade_3) + (seventh_course_3 * seventh_course_grade_3) + (eighth_course_3 * eighth_course_grade_3) + (nineth_course_3 * nineth_course_grade_3) + (tenth_course_3 * tenth_course_grade_3) + (eleventh_course_3 * eleventh_course_grade_3) + (twelveth_course_3 * twelveth_course_grade_3) + (thirteenth_course_3 * thirteenth_course_grade_3) + (fourteenth_course_3 * fourteenth_course_grade_3) + (fifteenth_course_3 * fifteenth_course_grade_3) + (sixteenth_course_3 * sixteenth_course_grade_3) + (seventeenth_course_3 * seventeenth_course_grade_3) + (eighteenth_course_3 * eighteenth_course_grade_3) + (ninteenth_course_3 * ninteenth_course_grade_3) + (twentieth_course_3 * twentieth_course_grade_3) + (twenty_first_course_3 * twenty_first_course_grade_3) + (twenty_second_course_3 * twenty_second_course_grade_3) + (twenty_third_course_3 * twenty_third_course_grade_3) + (twenty_fourth_course_3 * twenty_fourth_course_grade_3);
    float third_year_credit_load_sum = first_course_3 + second_course_3 + third_course_3 + fourth_course_3 + fifth_course_3 + sixth_course_3 + seventh_course_3 + eighth_course_3 + nineth_course_3 + tenth_course_3 + eleventh_course_3 + twelveth_course_3 + thirteenth_course_3 + fourteenth_course_3 + fifteenth_course_3 + sixteenth_course_3 + seventeenth_course_3 + eighteenth_course_3 + ninteenth_course_3 + twentieth_course_3 + twenty_first_course_3 + twenty_second_course_3 + twenty_third_course_3 + twenty_fourth_course_3;

    float third_year_total_gp = third_year_course_credit_load_sum / third_year_credit_load_sum;

    // check if the result of the GP calculation is even a number or incorrect/incomplete entries were made
    if (isnan(third_year_total_gp) or third_year_course_credit_load_sum == 0 or third_year_credit_load_sum == 0)
    {
        wxString third_year_total_gp_wxstring = "Cannot compute your request as invalid values have been submitted for computation. Please correct your entry/entries and retry.\n\nIf only one course was registered - with the grade 'F' or all the courses registered have the grade 'F', the Grade Pending is 0.0";
        wxMessageBox(third_year_total_gp_wxstring);

        event.Skip();
    }

    else
    {
        // convert the gp to wxString
        wxString third_year_total_gp_wxstring = wxString::Format(wxT("%f"), third_year_total_gp);
        wxString honours_info;
        if (third_year_total_gp > 4.5)
        {
            honours_info = "\nFirst Class Student";
        }
        if (third_year_total_gp < 4.49 and third_year_total_gp > 3.5)
        {
            honours_info = "\nSecond Class Upper Student";
        }
        if (third_year_total_gp < 3.49 and third_year_total_gp > 2.4)
        {
            honours_info = "\nSecond Class Lower Student";
        }
        if (third_year_total_gp < 2.39 and third_year_total_gp > 1.5)
        {
            honours_info = "\nThird Class Student";
        }
        else if (third_year_total_gp < 1.49)
        {
            honours_info = "\nPass Student";
        }
        wxMessageBox("300 Level Grade Pending: " + third_year_total_gp_wxstring + " " + honours_info);
        event.Skip();
    }
}

void MyFrame::OnFourHundredLevelDisplayGpButtonClicked(wxCommandEvent &event)
{
    using namespace std;

    std::map<wxString, float> all_courses_dictionary;

    all_courses_dictionary["CHM111"] = 3.0;
    all_courses_dictionary["CHM113"] = 3.0;
    all_courses_dictionary["MTH110"] = 3.0;
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

    float first_course_4 = all_courses_dictionary[course_one_4->GetValue()];
    float first_course_grade_4 = all_courses_dictionary[course_one_grade_4->GetValue()];
    float second_course_4 = all_courses_dictionary[course_two_4->GetValue()];
    float second_course_grade_4 = all_courses_dictionary[course_two_grade_4->GetValue()];
    float third_course_4 = all_courses_dictionary[course_three_4->GetValue()];
    float third_course_grade_4 = all_courses_dictionary[course_three_grade_4->GetValue()];
    float fourth_course_4 = all_courses_dictionary[course_four_4->GetValue()];
    float fourth_course_grade_4 = all_courses_dictionary[course_four_grade_4->GetValue()];
    float fifth_course_4 = all_courses_dictionary[course_five_4->GetValue()];
    float fifth_course_grade_4 = all_courses_dictionary[course_five_grade_4->GetValue()];
    float sixth_course_4 = all_courses_dictionary[course_six_4->GetValue()];
    float sixth_course_grade_4 = all_courses_dictionary[course_six_grade_4->GetValue()];
    float seventh_course_4 = all_courses_dictionary[course_seven_4->GetValue()];
    float seventh_course_grade_4 = all_courses_dictionary[course_seven_grade_4->GetValue()];
    float eighth_course_4 = all_courses_dictionary[course_eight_4->GetValue()];
    float eighth_course_grade_4 = all_courses_dictionary[course_eight_grade_4->GetValue()];
    float nineth_course_4 = all_courses_dictionary[course_nine_4->GetValue()];
    float nineth_course_grade_4 = all_courses_dictionary[course_nine_grade_4->GetValue()];
    float tenth_course_4 = all_courses_dictionary[course_ten_4->GetValue()];
    float tenth_course_grade_4 = all_courses_dictionary[course_ten_grade_4->GetValue()];
    float eleventh_course_4 = all_courses_dictionary[course_eleven_4->GetValue()];
    float eleventh_course_grade_4 = all_courses_dictionary[course_eleven_grade_4->GetValue()];
    float twelveth_course_4 = all_courses_dictionary[course_twelve_4->GetValue()];
    float twelveth_course_grade_4 = all_courses_dictionary[course_twelve_grade_4->GetValue()];
    float thirteenth_course_4 = all_courses_dictionary[course_thirteen_4->GetValue()];
    float thirteenth_course_grade_4 = all_courses_dictionary[course_thirteen_grade_4->GetValue()];
    float fourteenth_course_4 = all_courses_dictionary[course_fourteen_4->GetValue()];
    float fourteenth_course_grade_4 = all_courses_dictionary[course_fourteen_grade_4->GetValue()];
    float fifteenth_course_4 = all_courses_dictionary[course_fifteen_4->GetValue()];
    float fifteenth_course_grade_4 = all_courses_dictionary[course_fifteen_grade_4->GetValue()];
    float sixteenth_course_4 = all_courses_dictionary[course_sixteen_4->GetValue()];
    float sixteenth_course_grade_4 = all_courses_dictionary[course_sixteen_grade_4->GetValue()];
    float seventeenth_course_4 = all_courses_dictionary[course_seventeen_4->GetValue()];
    float seventeenth_course_grade_4 = all_courses_dictionary[course_seventeen_grade_4->GetValue()];
    float eighteenth_course_4 = all_courses_dictionary[course_eighteen_4->GetValue()];
    float eighteenth_course_grade_4 = all_courses_dictionary[course_eighteen_grade_4->GetValue()];
    float ninteenth_course_4 = all_courses_dictionary[course_nineteen_4->GetValue()];
    float ninteenth_course_grade_4 = all_courses_dictionary[course_nineteen_grade_4->GetValue()];
    float twentieth_course_4 = all_courses_dictionary[course_twenty_4->GetValue()];
    float twentieth_course_grade_4 = all_courses_dictionary[course_twenty_grade_4->GetValue()];
    float twenty_first_course_4 = all_courses_dictionary[course_twenty_one_4->GetValue()];
    float twenty_first_course_grade_4 = all_courses_dictionary[course_twenty_one_grade_4->GetValue()];
    float twenty_second_course_4 = all_courses_dictionary[course_twenty_two_4->GetValue()];
    float twenty_second_course_grade_4 = all_courses_dictionary[course_twenty_two_grade_4->GetValue()];
    float twenty_third_course_4 = all_courses_dictionary[course_twenty_three_4->GetValue()];
    float twenty_third_course_grade_4 = all_courses_dictionary[course_twenty_three_grade_4->GetValue()];
    float twenty_fourth_course_4 = all_courses_dictionary[course_twenty_four_4->GetValue()];
    float twenty_fourth_course_grade_4 = all_courses_dictionary[course_twenty_four_grade_4->GetValue()];

    float fourth_year_course_credit_load_sum = (first_course_4 * first_course_grade_4) + (second_course_4 * second_course_grade_4) + (third_course_4 * third_course_grade_4) + (fourth_course_4 * fourth_course_grade_4) + (fifth_course_4 * fifth_course_grade_4) + (sixth_course_4 * sixth_course_grade_4) + (seventh_course_4 * seventh_course_grade_4) + (eighth_course_4 * eighth_course_grade_4) + (nineth_course_4 * nineth_course_grade_4) + (tenth_course_4 * tenth_course_grade_4) + (eleventh_course_4 * eleventh_course_grade_4) + (twelveth_course_4 * twelveth_course_grade_4) + (thirteenth_course_4 * thirteenth_course_grade_4) + (fourteenth_course_4 * fourteenth_course_grade_4) + (fifteenth_course_4 * fifteenth_course_grade_4) + (sixteenth_course_4 * sixteenth_course_grade_4) + (seventeenth_course_4 * seventeenth_course_grade_4) + (eighteenth_course_4 * eighteenth_course_grade_4) + (ninteenth_course_4 * ninteenth_course_grade_4) + (twentieth_course_4 * twentieth_course_grade_4) + (twenty_first_course_4 * twenty_first_course_grade_4) + (twenty_second_course_4 * twenty_second_course_grade_4) + (twenty_third_course_4 * twenty_third_course_grade_4) + (twenty_fourth_course_4 * twenty_fourth_course_grade_4);
    float fourth_year_credit_load_sum = first_course_4 + second_course_4 + third_course_4 + fourth_course_4 + fifth_course_4 + sixth_course_4 + seventh_course_4 + eighth_course_4 + nineth_course_4 + tenth_course_4 + eleventh_course_4 + twelveth_course_4 + thirteenth_course_4 + fourteenth_course_4 + fifteenth_course_4 + sixteenth_course_4 + seventeenth_course_4 + eighteenth_course_4 + ninteenth_course_4 + twentieth_course_4 + twenty_first_course_4 + twenty_second_course_4 + twenty_third_course_4 + twenty_fourth_course_4;

    float fourth_year_total_gp = fourth_year_course_credit_load_sum / fourth_year_credit_load_sum;

    // check if the result of the GP calculation is even a number or incorrect/incomplete entries were made
    if (isnan(fourth_year_total_gp) or fourth_year_course_credit_load_sum == 0 or fourth_year_credit_load_sum == 0)
    {
        wxString fourth_year_total_gp_wxstring = "Cannot compute your request as invalid values have been submitted for computation. Please correct your entry/entries and retry.\n\nIf only one course was registered - with the grade 'F' or all the courses registered have the grade 'F', the Grade Pending is 0.0";
        wxMessageBox(fourth_year_total_gp_wxstring);
        event.Skip();
    }

    else
    {
        // convert the gp to wxString
        wxString fourth_year_total_gp_wxstring = wxString::Format(wxT("%f"), fourth_year_total_gp);
        wxString honours_info;
        if (fourth_year_total_gp > 4.5)
        {
            honours_info = "\nFirst Class Student";
        }
        if (fourth_year_total_gp < 4.49 and fourth_year_total_gp > 3.5)
        {
            honours_info = "\nSecond Class Upper Student";
        }
        if (fourth_year_total_gp < 3.49 and fourth_year_total_gp > 2.4)
        {
            honours_info = "\nSecond Class Lower Student";
        }
        if (fourth_year_total_gp < 2.39 and fourth_year_total_gp > 1.5)
        {
            honours_info = "\nThird Class Student";
        }
        else if (fourth_year_total_gp < 1.49)
        {
            honours_info = "\nPass Student";
        }
        wxMessageBox("400 Level Grade Pending: " + fourth_year_total_gp_wxstring + " " + honours_info);
        event.Skip();
    }
}

void MyFrame::OnFiveHundredLevelDisplayGpButtonClicked(wxCommandEvent &event)
{
    using namespace std;

    std::map<wxString, float> all_courses_dictionary;

    all_courses_dictionary["CHM111"] = 3.0;
    all_courses_dictionary["CHM113"] = 3.0;
    all_courses_dictionary["MTH110"] = 3.0;
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

    float first_course_5 = all_courses_dictionary[course_one_5->GetValue()];
    float first_course_grade_5 = all_courses_dictionary[course_one_grade_5->GetValue()];
    float second_course_5 = all_courses_dictionary[course_two_5->GetValue()];
    float second_course_grade_5 = all_courses_dictionary[course_two_grade_5->GetValue()];
    float third_course_5 = all_courses_dictionary[course_three_5->GetValue()];
    float third_course_grade_5 = all_courses_dictionary[course_three_grade_5->GetValue()];
    float fourth_course_5 = all_courses_dictionary[course_four_5->GetValue()];
    float fourth_course_grade_5 = all_courses_dictionary[course_four_grade_5->GetValue()];
    float fifth_course_5 = all_courses_dictionary[course_five_5->GetValue()];
    float fifth_course_grade_5 = all_courses_dictionary[course_five_grade_5->GetValue()];
    float sixth_course_5 = all_courses_dictionary[course_six_5->GetValue()];
    float sixth_course_grade_5 = all_courses_dictionary[course_six_grade_5->GetValue()];
    float seventh_course_5 = all_courses_dictionary[course_seven_5->GetValue()];
    float seventh_course_grade_5 = all_courses_dictionary[course_seven_grade_5->GetValue()];
    float eighth_course_5 = all_courses_dictionary[course_eight_5->GetValue()];
    float eighth_course_grade_5 = all_courses_dictionary[course_eight_grade_5->GetValue()];
    float nineth_course_5 = all_courses_dictionary[course_nine_5->GetValue()];
    float nineth_course_grade_5 = all_courses_dictionary[course_nine_grade_5->GetValue()];
    float tenth_course_5 = all_courses_dictionary[course_ten_5->GetValue()];
    float tenth_course_grade_5 = all_courses_dictionary[course_ten_grade_5->GetValue()];
    float eleventh_course_5 = all_courses_dictionary[course_eleven_5->GetValue()];
    float eleventh_course_grade_5 = all_courses_dictionary[course_eleven_grade_5->GetValue()];
    float twelveth_course_5 = all_courses_dictionary[course_twelve_5->GetValue()];
    float twelveth_course_grade_5 = all_courses_dictionary[course_twelve_grade_5->GetValue()];
    float thirteenth_course_5 = all_courses_dictionary[course_thirteen_5->GetValue()];
    float thirteenth_course_grade_5 = all_courses_dictionary[course_thirteen_grade_5->GetValue()];
    float fourteenth_course_5 = all_courses_dictionary[course_fourteen_5->GetValue()];
    float fourteenth_course_grade_5 = all_courses_dictionary[course_fourteen_grade_5->GetValue()];
    float fifteenth_course_5 = all_courses_dictionary[course_fifteen_5->GetValue()];
    float fifteenth_course_grade_5 = all_courses_dictionary[course_fifteen_grade_5->GetValue()];
    float sixteenth_course_5 = all_courses_dictionary[course_sixteen_5->GetValue()];
    float sixteenth_course_grade_5 = all_courses_dictionary[course_sixteen_grade_5->GetValue()];
    float seventeenth_course_5 = all_courses_dictionary[course_seventeen_5->GetValue()];
    float seventeenth_course_grade_5 = all_courses_dictionary[course_seventeen_grade_5->GetValue()];
    float eighteenth_course_5 = all_courses_dictionary[course_eighteen_5->GetValue()];
    float eighteenth_course_grade_5 = all_courses_dictionary[course_eighteen_grade_5->GetValue()];
    float ninteenth_course_5 = all_courses_dictionary[course_nineteen_5->GetValue()];
    float ninteenth_course_grade_5 = all_courses_dictionary[course_nineteen_grade_5->GetValue()];
    float twentieth_course_5 = all_courses_dictionary[course_twenty_5->GetValue()];
    float twentieth_course_grade_5 = all_courses_dictionary[course_twenty_grade_5->GetValue()];
    float twenty_first_course_5 = all_courses_dictionary[course_twenty_one_5->GetValue()];
    float twenty_first_course_grade_5 = all_courses_dictionary[course_twenty_one_grade_5->GetValue()];
    float twenty_second_course_5 = all_courses_dictionary[course_twenty_two_5->GetValue()];
    float twenty_second_course_grade_5 = all_courses_dictionary[course_twenty_two_grade_5->GetValue()];
    float twenty_third_course_5 = all_courses_dictionary[course_twenty_three_5->GetValue()];
    float twenty_third_course_grade_5 = all_courses_dictionary[course_twenty_three_grade_5->GetValue()];
    float twenty_fourth_course_5 = all_courses_dictionary[course_twenty_four_5->GetValue()];
    float twenty_fourth_course_grade_5 = all_courses_dictionary[course_twenty_four_grade_5->GetValue()];

    float fifth_year_course_credit_load_sum = (first_course_5 * first_course_grade_5) + (second_course_5 * second_course_grade_5) + (third_course_5 * third_course_grade_5) + (fourth_course_5 * fourth_course_grade_5) + (fifth_course_5 * fifth_course_grade_5) + (sixth_course_5 * sixth_course_grade_5) + (seventh_course_5 * seventh_course_grade_5) + (eighth_course_5 * eighth_course_grade_5) + (nineth_course_5 * nineth_course_grade_5) + (tenth_course_5 * tenth_course_grade_5) + (eleventh_course_5 * eleventh_course_grade_5) + (twelveth_course_5 * twelveth_course_grade_5) + (thirteenth_course_5 * thirteenth_course_grade_5) + (fourteenth_course_5 * fourteenth_course_grade_5) + (fifteenth_course_5 * fifteenth_course_grade_5) + (sixteenth_course_5 * sixteenth_course_grade_5) + (seventeenth_course_5 * seventeenth_course_grade_5) + (eighteenth_course_5 * eighteenth_course_grade_5) + (ninteenth_course_5 * ninteenth_course_grade_5) + (twentieth_course_5 * twentieth_course_grade_5) + (twenty_first_course_5 * twenty_first_course_grade_5) + (twenty_second_course_5 * twenty_second_course_grade_5) + (twenty_third_course_5 * twenty_third_course_grade_5) + (twenty_fourth_course_5 * twenty_fourth_course_grade_5);
    float fifth_year_credit_load_sum = first_course_5 + second_course_5 + third_course_5 + fourth_course_5 + fifth_course_5 + sixth_course_5 + seventh_course_5 + eighth_course_5 + nineth_course_5 + tenth_course_5 + eleventh_course_5 + twelveth_course_5 + thirteenth_course_5 + fourteenth_course_5 + fifteenth_course_5 + sixteenth_course_5 + seventeenth_course_5 + eighteenth_course_5 + ninteenth_course_5 + twentieth_course_5 + twenty_first_course_5 + twenty_second_course_5 + twenty_third_course_5 + twenty_fourth_course_5;

    float fifth_year_total_gp = fifth_year_course_credit_load_sum / fifth_year_credit_load_sum;

    // check if the result of the GP calculation is even a number or incorrect/incomplete entries were made
    if (isnan(fifth_year_total_gp) or fifth_year_course_credit_load_sum == 0 or fifth_year_credit_load_sum == 0)
    {
        wxString fifth_year_total_gp_wxstring = "Cannot compute your request as invalid values have been submitted for computation. Please correct your entry/entries and retry.\n\nIf only one course was registered - with the grade 'F' or all the courses registered have the grade 'F', the Grade Pending is 0.0";
        wxMessageBox(fifth_year_total_gp_wxstring);

        event.Skip();
    }

    else
    {
        // convert the gp to wxString
        wxString fifth_year_total_gp_wxstring = wxString::Format(wxT("%f"), fifth_year_total_gp);
        wxString honours_info;
        if (fifth_year_total_gp > 4.5)
        {
            honours_info = "\nFirst Class Student";
        }
        if (fifth_year_total_gp < 4.49 and fifth_year_total_gp > 3.5)
        {
            honours_info = "\nSecond Class Upper Student";
        }
        if (fifth_year_total_gp < 3.49 and fifth_year_total_gp > 2.4)
        {
            honours_info = "\nSecond Class Lower Student";
        }
        if (fifth_year_total_gp < 2.39 and fifth_year_total_gp > 1.5)
        {
            honours_info = "\nThird Class Student";
        }
        else if (fifth_year_total_gp < 1.49)
        {
            honours_info = "\nPass Student";
        }
        wxMessageBox("500 Level Grade Pending: " + fifth_year_total_gp_wxstring + " " + honours_info);
        event.Skip();
    }
}

void MyFrame::OnDisplayCgpaButtonClicked(wxCommandEvent &event)
{
    // 100 Level Computation
    using namespace std;

    std::map<wxString, float> all_courses_dictionary;

    all_courses_dictionary["CHM111"] = 3.0;
    all_courses_dictionary["CHM113"] = 3.0;
    all_courses_dictionary["MTH110"] = 3.0;
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
    float thirteenth_course = all_courses_dictionary[course_thirteen->GetValue()];
    float thirteenth_course_grade = all_courses_dictionary[course_thirteen_grade->GetValue()];
    float fourteenth_course = all_courses_dictionary[course_fourteen->GetValue()];
    float fourteenth_course_grade = all_courses_dictionary[course_fourteen_grade->GetValue()];
    float fifteenth_course = all_courses_dictionary[course_fifteen->GetValue()];
    float fifteenth_course_grade = all_courses_dictionary[course_fifteen_grade->GetValue()];
    float sixteenth_course = all_courses_dictionary[course_sixteen->GetValue()];
    float sixteenth_course_grade = all_courses_dictionary[course_sixteen_grade->GetValue()];
    float seventeenth_course = all_courses_dictionary[course_seventeen->GetValue()];
    float seventeenth_course_grade = all_courses_dictionary[course_seventeen_grade->GetValue()];
    float eighteenth_course = all_courses_dictionary[course_eighteen->GetValue()];
    float eighteenth_course_grade = all_courses_dictionary[course_eighteen_grade->GetValue()];
    float ninteenth_course = all_courses_dictionary[course_nineteen->GetValue()];
    float ninteenth_course_grade = all_courses_dictionary[course_nineteen_grade->GetValue()];
    float twentieth_course = all_courses_dictionary[course_twenty->GetValue()];
    float twentieth_course_grade = all_courses_dictionary[course_twenty_grade->GetValue()];
    float twenty_first_course = all_courses_dictionary[course_twenty_one->GetValue()];
    float twenty_first_course_grade = all_courses_dictionary[course_twenty_one_grade->GetValue()];
    float twenty_second_course = all_courses_dictionary[course_twenty_two->GetValue()];
    float twenty_second_course_grade = all_courses_dictionary[course_twenty_two_grade->GetValue()];
    float twenty_third_course = all_courses_dictionary[course_twenty_three->GetValue()];
    float twenty_third_course_grade = all_courses_dictionary[course_twenty_three_grade->GetValue()];
    float twenty_fourth_course = all_courses_dictionary[course_twenty_four->GetValue()];
    float twenty_fourth_course_grade = all_courses_dictionary[course_twenty_four_grade->GetValue()];

    float first_year_course_credit_load_sum = (first_course * first_course_grade) + (second_course * second_course_grade) + (third_course * third_course_grade) + (fourth_course * fourth_course_grade) + (fifth_course * fifth_course_grade) + (sixth_course * sixth_course_grade) + (seventh_course * seventh_course_grade) + (eighth_course * eighth_course_grade) + (nineth_course * nineth_course_grade) + (tenth_course * tenth_course_grade) + (eleventh_course * eleventh_course_grade) + (twelveth_course * twelveth_course_grade) + (thirteenth_course * thirteenth_course_grade) + (fourteenth_course * fourteenth_course_grade) + (fifteenth_course * fifteenth_course_grade) + (sixteenth_course * sixteenth_course_grade) + (seventeenth_course * seventeenth_course_grade) + (eighteenth_course * eighteenth_course_grade) + (ninteenth_course * ninteenth_course_grade) + (twentieth_course * twentieth_course_grade) + (twenty_first_course * twenty_first_course_grade) + (twenty_second_course * twenty_second_course_grade) + (twenty_third_course * twenty_third_course_grade) + (twenty_fourth_course * twenty_fourth_course_grade);
    float first_year_credit_load_sum = first_course + second_course + third_course + fourth_course + fifth_course + sixth_course + seventh_course + eighth_course + nineth_course + tenth_course + eleventh_course + twelveth_course + thirteenth_course + fourteenth_course + fifteenth_course + sixteenth_course + seventeenth_course + eighteenth_course + ninteenth_course + twentieth_course + twenty_first_course + twenty_second_course + twenty_third_course + twenty_fourth_course;
    float first_year_total_gp;
    float first_year_valid;
    // check if the sum of any of the two important constants is zero
    if (first_year_credit_load_sum == 0.0 or first_year_course_credit_load_sum == 0.0)
    {
        first_year_total_gp = 0.0;
        first_year_valid = 0.0;
    }

    else
    {
        first_year_total_gp = first_year_course_credit_load_sum / first_year_credit_load_sum;
        first_year_valid = 1.0;
    }

    // 200 Level computation
    float first_course_2 = all_courses_dictionary[course_one_2->GetValue()];
    float first_course_grade_2 = all_courses_dictionary[course_one_grade_2->GetValue()];
    float second_course_2 = all_courses_dictionary[course_two_2->GetValue()];
    float second_course_grade_2 = all_courses_dictionary[course_two_grade_2->GetValue()];
    float third_course_2 = all_courses_dictionary[course_three_2->GetValue()];
    float third_course_grade_2 = all_courses_dictionary[course_three_grade_2->GetValue()];
    float fourth_course_2 = all_courses_dictionary[course_four_2->GetValue()];
    float fourth_course_grade_2 = all_courses_dictionary[course_four_grade_2->GetValue()];
    float fifth_course_2 = all_courses_dictionary[course_five_2->GetValue()];
    float fifth_course_grade_2 = all_courses_dictionary[course_five_grade_2->GetValue()];
    float sixth_course_2 = all_courses_dictionary[course_six_2->GetValue()];
    float sixth_course_grade_2 = all_courses_dictionary[course_six_grade_2->GetValue()];
    float seventh_course_2 = all_courses_dictionary[course_seven_2->GetValue()];
    float seventh_course_grade_2 = all_courses_dictionary[course_seven_grade_2->GetValue()];
    float eighth_course_2 = all_courses_dictionary[course_eight_2->GetValue()];
    float eighth_course_grade_2 = all_courses_dictionary[course_eight_grade_2->GetValue()];
    float nineth_course_2 = all_courses_dictionary[course_nine_2->GetValue()];
    float nineth_course_grade_2 = all_courses_dictionary[course_nine_grade_2->GetValue()];
    float tenth_course_2 = all_courses_dictionary[course_ten_2->GetValue()];
    float tenth_course_grade_2 = all_courses_dictionary[course_ten_grade_2->GetValue()];
    float eleventh_course_2 = all_courses_dictionary[course_eleven_2->GetValue()];
    float eleventh_course_grade_2 = all_courses_dictionary[course_eleven_grade_2->GetValue()];
    float twelveth_course_2 = all_courses_dictionary[course_twelve_2->GetValue()];
    float twelveth_course_grade_2 = all_courses_dictionary[course_twelve_grade_2->GetValue()];
    float thirteenth_course_2 = all_courses_dictionary[course_thirteen_2->GetValue()];
    float thirteenth_course_grade_2 = all_courses_dictionary[course_thirteen_grade_2->GetValue()];
    float fourteenth_course_2 = all_courses_dictionary[course_fourteen_2->GetValue()];
    float fourteenth_course_grade_2 = all_courses_dictionary[course_fourteen_grade_2->GetValue()];
    float fifteenth_course_2 = all_courses_dictionary[course_fifteen_2->GetValue()];
    float fifteenth_course_grade_2 = all_courses_dictionary[course_fifteen_grade_2->GetValue()];
    float sixteenth_course_2 = all_courses_dictionary[course_sixteen_2->GetValue()];
    float sixteenth_course_grade_2 = all_courses_dictionary[course_sixteen_grade_2->GetValue()];
    float seventeenth_course_2 = all_courses_dictionary[course_seventeen_2->GetValue()];
    float seventeenth_course_grade_2 = all_courses_dictionary[course_seventeen_grade_2->GetValue()];
    float eighteenth_course_2 = all_courses_dictionary[course_eighteen_2->GetValue()];
    float eighteenth_course_grade_2 = all_courses_dictionary[course_eighteen_grade_2->GetValue()];
    float ninteenth_course_2 = all_courses_dictionary[course_nineteen_2->GetValue()];
    float ninteenth_course_grade_2 = all_courses_dictionary[course_nineteen_grade_2->GetValue()];
    float twentieth_course_2 = all_courses_dictionary[course_twenty_2->GetValue()];
    float twentieth_course_grade_2 = all_courses_dictionary[course_twenty_grade_2->GetValue()];
    float twenty_first_course_2 = all_courses_dictionary[course_twenty_one_2->GetValue()];
    float twenty_first_course_grade_2 = all_courses_dictionary[course_twenty_one_grade_2->GetValue()];
    float twenty_second_course_2 = all_courses_dictionary[course_twenty_two_2->GetValue()];
    float twenty_second_course_grade_2 = all_courses_dictionary[course_twenty_two_grade_2->GetValue()];
    float twenty_third_course_2 = all_courses_dictionary[course_twenty_three_2->GetValue()];
    float twenty_third_course_grade_2 = all_courses_dictionary[course_twenty_three_grade_2->GetValue()];
    float twenty_fourth_course_2 = all_courses_dictionary[course_twenty_four_2->GetValue()];
    float twenty_fourth_course_grade_2 = all_courses_dictionary[course_twenty_four_grade_2->GetValue()];

    float second_year_course_credit_load_sum = (first_course_2 * first_course_grade_2) + (second_course_2 * second_course_grade_2) + (third_course_2 * third_course_grade_2) + (fourth_course_2 * fourth_course_grade_2) + (fifth_course_2 * fifth_course_grade_2) + (sixth_course_2 * sixth_course_grade_2) + (seventh_course_2 * seventh_course_grade_2) + (eighth_course_2 * eighth_course_grade_2) + (nineth_course_2 * nineth_course_grade_2) + (tenth_course_2 * tenth_course_grade_2) + (eleventh_course_2 * eleventh_course_grade_2) + (twelveth_course_2 * twelveth_course_grade_2) + (thirteenth_course_2 * thirteenth_course_grade_2) + (fourteenth_course_2 * fourteenth_course_grade_2) + (fifteenth_course_2 * fifteenth_course_grade_2) + (sixteenth_course_2 * sixteenth_course_grade_2) + (seventeenth_course_2 * seventeenth_course_grade_2) + (eighteenth_course_2 * eighteenth_course_grade_2) + (ninteenth_course_2 * ninteenth_course_grade_2) + (twentieth_course_2 * twentieth_course_grade_2) + (twenty_first_course_2 * twenty_first_course_grade_2) + (twenty_second_course_2 * twenty_second_course_grade_2) + (twenty_third_course_2 * twenty_third_course_grade_2) + (twenty_fourth_course_2 * twenty_fourth_course_grade_2);
    float second_year_credit_load_sum = first_course_2 + second_course_2 + third_course_2 + fourth_course_2 + fifth_course_2 + sixth_course_2 + seventh_course_2 + eighth_course_2 + nineth_course_2 + tenth_course_2 + eleventh_course_2 + twelveth_course_2 + thirteenth_course_2 + fourteenth_course_2 + fifteenth_course_2 + sixteenth_course_2 + seventeenth_course_2 + eighteenth_course_2 + ninteenth_course_2 + twentieth_course_2 + twenty_first_course_2 + twenty_second_course_2 + twenty_third_course_2 + twenty_fourth_course_2;
    float second_year_total_gp;
    float second_year_valid;

    // check if the sum of the two important constants is zero
    if (second_year_credit_load_sum == 0.0 or second_year_course_credit_load_sum == 0.0)
    {
        second_year_total_gp = 0.0;
        second_year_valid = 0.0;
    }

    else
    {
        second_year_total_gp = second_year_course_credit_load_sum / second_year_credit_load_sum;
        second_year_valid = 1.0;
    }

    // 300 Level Computation
    float first_course_3 = all_courses_dictionary[course_one_3->GetValue()];
    float first_course_grade_3 = all_courses_dictionary[course_one_grade_3->GetValue()];
    float second_course_3 = all_courses_dictionary[course_two_3->GetValue()];
    float second_course_grade_3 = all_courses_dictionary[course_two_grade_3->GetValue()];
    float third_course_3 = all_courses_dictionary[course_three_3->GetValue()];
    float third_course_grade_3 = all_courses_dictionary[course_three_grade_3->GetValue()];
    float fourth_course_3 = all_courses_dictionary[course_four_3->GetValue()];
    float fourth_course_grade_3 = all_courses_dictionary[course_four_grade_3->GetValue()];
    float fifth_course_3 = all_courses_dictionary[course_five_3->GetValue()];
    float fifth_course_grade_3 = all_courses_dictionary[course_five_grade_3->GetValue()];
    float sixth_course_3 = all_courses_dictionary[course_six_3->GetValue()];
    float sixth_course_grade_3 = all_courses_dictionary[course_six_grade_3->GetValue()];
    float seventh_course_3 = all_courses_dictionary[course_seven_3->GetValue()];
    float seventh_course_grade_3 = all_courses_dictionary[course_seven_grade_3->GetValue()];
    float eighth_course_3 = all_courses_dictionary[course_eight_3->GetValue()];
    float eighth_course_grade_3 = all_courses_dictionary[course_eight_grade_3->GetValue()];
    float nineth_course_3 = all_courses_dictionary[course_nine_3->GetValue()];
    float nineth_course_grade_3 = all_courses_dictionary[course_nine_grade_3->GetValue()];
    float tenth_course_3 = all_courses_dictionary[course_ten_3->GetValue()];
    float tenth_course_grade_3 = all_courses_dictionary[course_ten_grade_3->GetValue()];
    float eleventh_course_3 = all_courses_dictionary[course_eleven_3->GetValue()];
    float eleventh_course_grade_3 = all_courses_dictionary[course_eleven_grade_3->GetValue()];
    float twelveth_course_3 = all_courses_dictionary[course_twelve_3->GetValue()];
    float twelveth_course_grade_3 = all_courses_dictionary[course_twelve_grade_3->GetValue()];
    float thirteenth_course_3 = all_courses_dictionary[course_thirteen_3->GetValue()];
    float thirteenth_course_grade_3 = all_courses_dictionary[course_thirteen_grade_3->GetValue()];
    float fourteenth_course_3 = all_courses_dictionary[course_fourteen_3->GetValue()];
    float fourteenth_course_grade_3 = all_courses_dictionary[course_fourteen_grade_3->GetValue()];
    float fifteenth_course_3 = all_courses_dictionary[course_fifteen_3->GetValue()];
    float fifteenth_course_grade_3 = all_courses_dictionary[course_fifteen_grade_3->GetValue()];
    float sixteenth_course_3 = all_courses_dictionary[course_sixteen_3->GetValue()];
    float sixteenth_course_grade_3 = all_courses_dictionary[course_sixteen_grade_3->GetValue()];
    float seventeenth_course_3 = all_courses_dictionary[course_seventeen_3->GetValue()];
    float seventeenth_course_grade_3 = all_courses_dictionary[course_seventeen_grade_3->GetValue()];
    float eighteenth_course_3 = all_courses_dictionary[course_eighteen_3->GetValue()];
    float eighteenth_course_grade_3 = all_courses_dictionary[course_eighteen_grade_3->GetValue()];
    float ninteenth_course_3 = all_courses_dictionary[course_nineteen_3->GetValue()];
    float ninteenth_course_grade_3 = all_courses_dictionary[course_nineteen_grade_3->GetValue()];
    float twentieth_course_3 = all_courses_dictionary[course_twenty_3->GetValue()];
    float twentieth_course_grade_3 = all_courses_dictionary[course_twenty_grade_3->GetValue()];
    float twenty_first_course_3 = all_courses_dictionary[course_twenty_one_3->GetValue()];
    float twenty_first_course_grade_3 = all_courses_dictionary[course_twenty_one_grade_3->GetValue()];
    float twenty_second_course_3 = all_courses_dictionary[course_twenty_two_3->GetValue()];
    float twenty_second_course_grade_3 = all_courses_dictionary[course_twenty_two_grade_3->GetValue()];
    float twenty_third_course_3 = all_courses_dictionary[course_twenty_three_3->GetValue()];
    float twenty_third_course_grade_3 = all_courses_dictionary[course_twenty_three_grade_3->GetValue()];
    float twenty_fourth_course_3 = all_courses_dictionary[course_twenty_four_3->GetValue()];
    float twenty_fourth_course_grade_3 = all_courses_dictionary[course_twenty_four_grade_3->GetValue()];

    float third_year_course_credit_load_sum = (first_course_3 * first_course_grade_3) + (second_course_3 * second_course_grade_3) + (third_course_3 * third_course_grade_3) + (fourth_course_3 * fourth_course_grade_3) + (fifth_course_3 * fifth_course_grade_3) + (sixth_course_3 * sixth_course_grade_3) + (seventh_course_3 * seventh_course_grade_3) + (eighth_course_3 * eighth_course_grade_3) + (nineth_course_3 * nineth_course_grade_3) + (tenth_course_3 * tenth_course_grade_3) + (eleventh_course_3 * eleventh_course_grade_3) + (twelveth_course_3 * twelveth_course_grade_3) + (thirteenth_course_3 * thirteenth_course_grade_3) + (fourteenth_course_3 * fourteenth_course_grade_3) + (fifteenth_course_3 * fifteenth_course_grade_3) + (sixteenth_course_3 * sixteenth_course_grade_3) + (seventeenth_course_3 * seventeenth_course_grade_3) + (eighteenth_course_3 * eighteenth_course_grade_3) + (ninteenth_course_3 * ninteenth_course_grade_3) + (twentieth_course_3 * twentieth_course_grade_3) + (twenty_first_course_3 * twenty_first_course_grade_3) + (twenty_second_course_3 * twenty_second_course_grade_3) + (twenty_third_course_3 * twenty_third_course_grade_3) + (twenty_fourth_course_3 * twenty_fourth_course_grade_3);
    float third_year_credit_load_sum = first_course_3 + second_course_3 + third_course_3 + fourth_course_3 + fifth_course_3 + sixth_course_3 + seventh_course_3 + eighth_course_3 + nineth_course_3 + tenth_course_3 + eleventh_course_3 + twelveth_course_3 + thirteenth_course_3 + fourteenth_course_3 + fifteenth_course_3 + sixteenth_course_3 + seventeenth_course_3 + eighteenth_course_3 + ninteenth_course_3 + twentieth_course_3 + twenty_first_course_3 + twenty_second_course_3 + twenty_third_course_3 + twenty_fourth_course_3;
    float third_year_total_gp;
    float third_year_valid;

    // check if the value of any important constants is zero
    if (third_year_credit_load_sum == 0.0 or third_year_course_credit_load_sum == 0.0)
    {
        third_year_total_gp = 0.0;
        third_year_valid = 0.0;
    }

    else
    {
        third_year_total_gp = third_year_course_credit_load_sum / third_year_credit_load_sum;
        third_year_valid = 1.0;
    }

    // 400 Level computtation
    float first_course_4 = all_courses_dictionary[course_one_4->GetValue()];
    float first_course_grade_4 = all_courses_dictionary[course_one_grade_4->GetValue()];
    float second_course_4 = all_courses_dictionary[course_two_4->GetValue()];
    float second_course_grade_4 = all_courses_dictionary[course_two_grade_4->GetValue()];
    float third_course_4 = all_courses_dictionary[course_three_4->GetValue()];
    float third_course_grade_4 = all_courses_dictionary[course_three_grade_4->GetValue()];
    float fourth_course_4 = all_courses_dictionary[course_four_4->GetValue()];
    float fourth_course_grade_4 = all_courses_dictionary[course_four_grade_4->GetValue()];
    float fifth_course_4 = all_courses_dictionary[course_five_4->GetValue()];
    float fifth_course_grade_4 = all_courses_dictionary[course_five_grade_4->GetValue()];
    float sixth_course_4 = all_courses_dictionary[course_six_4->GetValue()];
    float sixth_course_grade_4 = all_courses_dictionary[course_six_grade_4->GetValue()];
    float seventh_course_4 = all_courses_dictionary[course_seven_4->GetValue()];
    float seventh_course_grade_4 = all_courses_dictionary[course_seven_grade_4->GetValue()];
    float eighth_course_4 = all_courses_dictionary[course_eight_4->GetValue()];
    float eighth_course_grade_4 = all_courses_dictionary[course_eight_grade_4->GetValue()];
    float nineth_course_4 = all_courses_dictionary[course_nine_4->GetValue()];
    float nineth_course_grade_4 = all_courses_dictionary[course_nine_grade_4->GetValue()];
    float tenth_course_4 = all_courses_dictionary[course_ten_4->GetValue()];
    float tenth_course_grade_4 = all_courses_dictionary[course_ten_grade_4->GetValue()];
    float eleventh_course_4 = all_courses_dictionary[course_eleven_4->GetValue()];
    float eleventh_course_grade_4 = all_courses_dictionary[course_eleven_grade_4->GetValue()];
    float twelveth_course_4 = all_courses_dictionary[course_twelve_4->GetValue()];
    float twelveth_course_grade_4 = all_courses_dictionary[course_twelve_grade_4->GetValue()];
    float thirteenth_course_4 = all_courses_dictionary[course_thirteen_4->GetValue()];
    float thirteenth_course_grade_4 = all_courses_dictionary[course_thirteen_grade_4->GetValue()];
    float fourteenth_course_4 = all_courses_dictionary[course_fourteen_4->GetValue()];
    float fourteenth_course_grade_4 = all_courses_dictionary[course_fourteen_grade_4->GetValue()];
    float fifteenth_course_4 = all_courses_dictionary[course_fifteen_4->GetValue()];
    float fifteenth_course_grade_4 = all_courses_dictionary[course_fifteen_grade_4->GetValue()];
    float sixteenth_course_4 = all_courses_dictionary[course_sixteen_4->GetValue()];
    float sixteenth_course_grade_4 = all_courses_dictionary[course_sixteen_grade_4->GetValue()];
    float seventeenth_course_4 = all_courses_dictionary[course_seventeen_4->GetValue()];
    float seventeenth_course_grade_4 = all_courses_dictionary[course_seventeen_grade_4->GetValue()];
    float eighteenth_course_4 = all_courses_dictionary[course_eighteen_4->GetValue()];
    float eighteenth_course_grade_4 = all_courses_dictionary[course_eighteen_grade_4->GetValue()];
    float ninteenth_course_4 = all_courses_dictionary[course_nineteen_4->GetValue()];
    float ninteenth_course_grade_4 = all_courses_dictionary[course_nineteen_grade_4->GetValue()];
    float twentieth_course_4 = all_courses_dictionary[course_twenty_4->GetValue()];
    float twentieth_course_grade_4 = all_courses_dictionary[course_twenty_grade_4->GetValue()];
    float twenty_first_course_4 = all_courses_dictionary[course_twenty_one_4->GetValue()];
    float twenty_first_course_grade_4 = all_courses_dictionary[course_twenty_one_grade_4->GetValue()];
    float twenty_second_course_4 = all_courses_dictionary[course_twenty_two_4->GetValue()];
    float twenty_second_course_grade_4 = all_courses_dictionary[course_twenty_two_grade_4->GetValue()];
    float twenty_third_course_4 = all_courses_dictionary[course_twenty_three_4->GetValue()];
    float twenty_third_course_grade_4 = all_courses_dictionary[course_twenty_three_grade_4->GetValue()];
    float twenty_fourth_course_4 = all_courses_dictionary[course_twenty_four_4->GetValue()];
    float twenty_fourth_course_grade_4 = all_courses_dictionary[course_twenty_four_grade_4->GetValue()];

    float fourth_year_course_credit_load_sum = (first_course_4 * first_course_grade_4) + (second_course_4 * second_course_grade_4) + (third_course_4 * third_course_grade_4) + (fourth_course_4 * fourth_course_grade_4) + (fifth_course_4 * fifth_course_grade_4) + (sixth_course_4 * sixth_course_grade_4) + (seventh_course_4 * seventh_course_grade_4) + (eighth_course_4 * eighth_course_grade_4) + (nineth_course_4 * nineth_course_grade_4) + (tenth_course_4 * tenth_course_grade_4) + (eleventh_course_4 * eleventh_course_grade_4) + (twelveth_course_4 * twelveth_course_grade_4) + (thirteenth_course_4 * thirteenth_course_grade_4) + (fourteenth_course_4 * fourteenth_course_grade_4) + (fifteenth_course_4 * fifteenth_course_grade_4) + (sixteenth_course_4 * sixteenth_course_grade_4) + (seventeenth_course_4 * seventeenth_course_grade_4) + (eighteenth_course_4 * eighteenth_course_grade_4) + (ninteenth_course_4 * ninteenth_course_grade_4) + (twentieth_course_4 * twentieth_course_grade_4) + (twenty_first_course_4 * twenty_first_course_grade_4) + (twenty_second_course_4 * twenty_second_course_grade_4) + (twenty_third_course_4 * twenty_third_course_grade_4) + (twenty_fourth_course_4 * twenty_fourth_course_grade_4);
    float fourth_year_credit_load_sum = first_course_4 + second_course_4 + third_course_4 + fourth_course_4 + fifth_course_4 + sixth_course_4 + seventh_course_4 + eighth_course_4 + nineth_course_4 + tenth_course_4 + eleventh_course_4 + twelveth_course_4 + thirteenth_course_4 + fourteenth_course_4 + fifteenth_course_4 + sixteenth_course_4 + seventeenth_course_4 + eighteenth_course_4 + ninteenth_course_4 + twentieth_course_4 + twenty_first_course_4 + twenty_second_course_4 + twenty_third_course_4 + twenty_fourth_course_4;
    float fourth_year_total_gp;
    float fourth_year_valid;

    // check if any of the required constants is zero
    if (fourth_year_credit_load_sum == 0.0 or fourth_year_course_credit_load_sum == 0.0)
    {
        fourth_year_total_gp = 0.0;
        fourth_year_valid = 0.0;
    }

    else
    {
        fourth_year_total_gp = fourth_year_course_credit_load_sum / fourth_year_credit_load_sum;
        fourth_year_valid = 1.0;
    }

    // 500 level computation
    float first_course_5 = all_courses_dictionary[course_one_5->GetValue()];
    float first_course_grade_5 = all_courses_dictionary[course_one_grade_5->GetValue()];
    float second_course_5 = all_courses_dictionary[course_two_5->GetValue()];
    float second_course_grade_5 = all_courses_dictionary[course_two_grade_5->GetValue()];
    float third_course_5 = all_courses_dictionary[course_three_5->GetValue()];
    float third_course_grade_5 = all_courses_dictionary[course_three_grade_5->GetValue()];
    float fourth_course_5 = all_courses_dictionary[course_four_5->GetValue()];
    float fourth_course_grade_5 = all_courses_dictionary[course_four_grade_5->GetValue()];
    float fifth_course_5 = all_courses_dictionary[course_five_5->GetValue()];
    float fifth_course_grade_5 = all_courses_dictionary[course_five_grade_5->GetValue()];
    float sixth_course_5 = all_courses_dictionary[course_six_5->GetValue()];
    float sixth_course_grade_5 = all_courses_dictionary[course_six_grade_5->GetValue()];
    float seventh_course_5 = all_courses_dictionary[course_seven_5->GetValue()];
    float seventh_course_grade_5 = all_courses_dictionary[course_seven_grade_5->GetValue()];
    float eighth_course_5 = all_courses_dictionary[course_eight_5->GetValue()];
    float eighth_course_grade_5 = all_courses_dictionary[course_eight_grade_5->GetValue()];
    float nineth_course_5 = all_courses_dictionary[course_nine_5->GetValue()];
    float nineth_course_grade_5 = all_courses_dictionary[course_nine_grade_5->GetValue()];
    float tenth_course_5 = all_courses_dictionary[course_ten_5->GetValue()];
    float tenth_course_grade_5 = all_courses_dictionary[course_ten_grade_5->GetValue()];
    float eleventh_course_5 = all_courses_dictionary[course_eleven_5->GetValue()];
    float eleventh_course_grade_5 = all_courses_dictionary[course_eleven_grade_5->GetValue()];
    float twelveth_course_5 = all_courses_dictionary[course_twelve_5->GetValue()];
    float twelveth_course_grade_5 = all_courses_dictionary[course_twelve_grade_5->GetValue()];
    float thirteenth_course_5 = all_courses_dictionary[course_thirteen_5->GetValue()];
    float thirteenth_course_grade_5 = all_courses_dictionary[course_thirteen_grade_5->GetValue()];
    float fourteenth_course_5 = all_courses_dictionary[course_fourteen_5->GetValue()];
    float fourteenth_course_grade_5 = all_courses_dictionary[course_fourteen_grade_5->GetValue()];
    float fifteenth_course_5 = all_courses_dictionary[course_fifteen_5->GetValue()];
    float fifteenth_course_grade_5 = all_courses_dictionary[course_fifteen_grade_5->GetValue()];
    float sixteenth_course_5 = all_courses_dictionary[course_sixteen_5->GetValue()];
    float sixteenth_course_grade_5 = all_courses_dictionary[course_sixteen_grade_5->GetValue()];
    float seventeenth_course_5 = all_courses_dictionary[course_seventeen_5->GetValue()];
    float seventeenth_course_grade_5 = all_courses_dictionary[course_seventeen_grade_5->GetValue()];
    float eighteenth_course_5 = all_courses_dictionary[course_eighteen_5->GetValue()];
    float eighteenth_course_grade_5 = all_courses_dictionary[course_eighteen_grade_5->GetValue()];
    float ninteenth_course_5 = all_courses_dictionary[course_nineteen_5->GetValue()];
    float ninteenth_course_grade_5 = all_courses_dictionary[course_nineteen_grade_5->GetValue()];
    float twentieth_course_5 = all_courses_dictionary[course_twenty_5->GetValue()];
    float twentieth_course_grade_5 = all_courses_dictionary[course_twenty_grade_5->GetValue()];
    float twenty_first_course_5 = all_courses_dictionary[course_twenty_one_5->GetValue()];
    float twenty_first_course_grade_5 = all_courses_dictionary[course_twenty_one_grade_5->GetValue()];
    float twenty_second_course_5 = all_courses_dictionary[course_twenty_two_5->GetValue()];
    float twenty_second_course_grade_5 = all_courses_dictionary[course_twenty_two_grade_5->GetValue()];
    float twenty_third_course_5 = all_courses_dictionary[course_twenty_three_5->GetValue()];
    float twenty_third_course_grade_5 = all_courses_dictionary[course_twenty_three_grade_5->GetValue()];
    float twenty_fourth_course_5 = all_courses_dictionary[course_twenty_four_5->GetValue()];
    float twenty_fourth_course_grade_5 = all_courses_dictionary[course_twenty_four_grade_5->GetValue()];

    float fifth_year_course_credit_load_sum = (first_course_5 * first_course_grade_5) + (second_course_5 * second_course_grade_5) + (third_course_5 * third_course_grade_5) + (fourth_course_5 * fourth_course_grade_5) + (fifth_course_5 * fifth_course_grade_5) + (sixth_course_5 * sixth_course_grade_5) + (seventh_course_5 * seventh_course_grade_5) + (eighth_course_5 * eighth_course_grade_5) + (nineth_course_5 * nineth_course_grade_5) + (tenth_course_5 * tenth_course_grade_5) + (eleventh_course_5 * eleventh_course_grade_5) + (twelveth_course_5 * twelveth_course_grade_5) + (thirteenth_course_5 * thirteenth_course_grade_5) + (fourteenth_course_5 * fourteenth_course_grade_5) + (fifteenth_course_5 * fifteenth_course_grade_5) + (sixteenth_course_5 * sixteenth_course_grade_5) + (seventeenth_course_5 * seventeenth_course_grade_5) + (eighteenth_course_5 * eighteenth_course_grade_5) + (ninteenth_course_5 * ninteenth_course_grade_5) + (twentieth_course_5 * twentieth_course_grade_5) + (twenty_first_course_5 * twenty_first_course_grade_5) + (twenty_second_course_5 * twenty_second_course_grade_5) + (twenty_third_course_5 * twenty_third_course_grade_5) + (twenty_fourth_course_5 * twenty_fourth_course_grade_5);
    float fifth_year_credit_load_sum = first_course_5 + second_course_5 + third_course_5 + fourth_course_5 + fifth_course_5 + sixth_course_5 + seventh_course_5 + eighth_course_5 + nineth_course_5 + tenth_course_5 + eleventh_course_5 + twelveth_course_5 + thirteenth_course_5 + fourteenth_course_5 + fifteenth_course_5 + sixteenth_course_5 + seventeenth_course_5 + eighteenth_course_5 + ninteenth_course_5 + twentieth_course_5 + twenty_first_course_5 + twenty_second_course_5 + twenty_third_course_5 + twenty_fourth_course_5;
    float fifth_year_total_gp;
    float fifth_year_valid;

    // check if any of the required constants is zero
    if (fifth_year_credit_load_sum == 0.0 or fifth_year_course_credit_load_sum == 0.0)
    {
        fifth_year_total_gp = 0.0;
        fifth_year_valid = 0.0;
    }

    else
    {
        fifth_year_total_gp = fifth_year_course_credit_load_sum / fifth_year_credit_load_sum;
        fifth_year_valid = 1.0;
    }

    // implement percentages ..... 10, 15, 20, 25, 30
    float first_year_percentage = 0.1;
    float second_year_percentage = 0.15;
    float third_year_percentage = 0.2;
    float fourth_year_percentage = 0.25;
    float fifth_year_percentage = 0.3;

    // get total applicable CGPA
    float first_year_effective_gp;
    float second_year_effective_gp;
    float third_year_effective_gp;
    float fourth_year_effective_gp;
    float fifth_year_effective_gp;

    /* 100 Level */
    first_year_effective_gp = first_year_total_gp * first_year_percentage;

    /* 200 Level */
    second_year_effective_gp = second_year_total_gp * second_year_percentage;

    /* 300 Level */
    third_year_effective_gp = third_year_total_gp * third_year_percentage;

    /* 400 Level */
    fourth_year_effective_gp = fourth_year_total_gp * fourth_year_percentage;

    /* 500 Level */
    fifth_year_effective_gp = fifth_year_total_gp * fifth_year_percentage;

    // check if anything was even written in the check boxes
    if (first_year_valid + second_year_valid + third_year_valid + fourth_year_valid + fifth_year_valid == 0.0)
    {
        wxString cgpa_computation_error_message = "Cannot compute your request as invalid values have been submitted for computation. Please correct your entry/entries and retry.\n\nIf only one course was registered - with the grade 'F' or all the courses registered have the grade 'F', the Grade Pending is 0.0";
        wxMessageBox(cgpa_computation_error_message);
        event.Skip();
    }

    // check if it's only 100 level that is avaliable
    if (first_year_valid != 0 and second_year_valid == 0 and third_year_valid == 0 and fourth_year_valid == 0 and fifth_year_valid == 0)
    {
        float final_cgpa = first_year_total_gp;
        wxString honours_info;
        if (final_cgpa > 4.5)
        {
            honours_info = "\n\nCurrently, First Class Graduate";
        }
        if (final_cgpa < 4.49 and final_cgpa > 3.5)
        {
            honours_info = "\n\nCurrently, Second Class Upper Graduate";
        }
        if (final_cgpa < 3.49 and final_cgpa > 2.4)
        {
            honours_info = "\n\nCurrently, Second Class Lower Graduate";
        }
        if (final_cgpa < 2.39 and final_cgpa > 1.5)
        {
            honours_info = "\n\nCurrently, Third Class Graduate";
        }
        else if (final_cgpa < 1.49)
        {
            honours_info = "\n\nCurrently, Pass Graduate";
        }
        wxString final_cgpa_wxstring = wxString::Format(wxT("%f"), final_cgpa);
        wxString final_cgpa_message = "Cummulative Grade Pending (CGPA): " + final_cgpa_wxstring;
        wxMessageBox(final_cgpa_message + " " + honours_info);
        event.Skip();
    }

    // check if it's 100 level and 200 level available
    if (first_year_valid != 0 and second_year_valid != 0 and third_year_valid == 0 and fourth_year_valid == 0 and fifth_year_valid == 0)
    {
        float final_cgpa = (first_year_total_gp + second_year_total_gp) / 2;
        wxString honours_info;
        if (final_cgpa > 4.5)
        {
            honours_info = "\n\nCurrently, First Class Graduate";
        }
        if (final_cgpa < 4.49 and final_cgpa > 3.5)
        {
            honours_info = "\n\nCurrently, Second Class Upper Graduate";
        }
        if (final_cgpa < 3.49 and final_cgpa > 2.4)
        {
            honours_info = "\n\nCurrently, Second Class Lower Graduate";
        }
        if (final_cgpa < 2.39 and final_cgpa > 1.5)
        {
            honours_info = "\n\nCurrently, Class Graduate";
        }
        else if (final_cgpa < 1.49)
        {
            honours_info = "\n\nCurrently, Pass Graduate";
        }
        wxString final_cgpa_wxstring = wxString::Format(wxT("%f"), final_cgpa);
        wxString final_cgpa_message = "Cummulative Grade Pending (CGPA): " + final_cgpa_wxstring;
        wxMessageBox(final_cgpa_message + " " + honours_info);
        event.Skip();
    }

    // check if it's 100 level, 200 level and 300 level available
    if (first_year_valid != 0 and second_year_valid != 0 and third_year_valid != 0 and fourth_year_valid == 0 and fifth_year_valid == 0)
    {
        float final_cgpa = (first_year_total_gp + second_year_total_gp + third_year_total_gp) / 3;
        wxString honours_info;
        if (final_cgpa > 4.5)
        {
            honours_info = "\n\nCurrently, First Class Graduate";
        }
        if (final_cgpa < 4.49 and final_cgpa > 3.5)
        {
            honours_info = "\n\nCurrently, Second Class Upper Graduate";
        }
        if (final_cgpa < 3.49 and final_cgpa > 2.4)
        {
            honours_info = "\n\nCurrently, Second Class Lower Graduate";
        }
        if (final_cgpa < 2.39 and final_cgpa > 1.5)
        {
            honours_info = "\n\nCurrently, Third Class Graduate";
        }
        else if (final_cgpa < 1.49)
        {
            honours_info = "\n\nCurrently, Pass Graduate";
        }
        wxString final_cgpa_wxstring = wxString::Format(wxT("%f"), final_cgpa);
        wxString final_cgpa_message = "Cummulative Grade Pending (CGPA): " + final_cgpa_wxstring;
        wxMessageBox(final_cgpa_message + " " + honours_info);
        event.Skip();
    }

    // check if it's 100 level, 200 level, 300 level and 400 level available
    if (first_year_valid != 0 and second_year_valid != 0 and third_year_valid != 0 and fourth_year_valid != 0 and fifth_year_valid == 0)
    {
        float final_cgpa = (first_year_total_gp + second_year_total_gp + third_year_total_gp + fourth_year_total_gp) / 4;
        wxString honours_info;
        if (final_cgpa > 4.5)
        {
            honours_info = "\n\nCurrently, First Class Graduate";
        }
        if (final_cgpa < 4.49 and final_cgpa > 3.5)
        {
            honours_info = "\n\nCurrently, Second Class Upper Graduate";
        }
        if (final_cgpa < 3.49 and final_cgpa > 2.4)
        {
            honours_info = "\n\nCurrently, Second Class Lower Graduate";
        }
        if (final_cgpa < 2.39 and final_cgpa > 1.5)
        {
            honours_info = "\n\nCurrently, Third Class Graduate";
        }
        else if (final_cgpa < 1.49)
        {
            honours_info = "\n\nCurrently, Pass Graduate";
        }
        wxString final_cgpa_wxstring = wxString::Format(wxT("%f"), final_cgpa);
        wxString final_cgpa_message = "Cummulative Grade Pending (CGPA): " + final_cgpa_wxstring;
        wxMessageBox(final_cgpa_message + " " + honours_info);
        event.Skip();
    }

    else if (first_year_valid != 0 and second_year_valid != 0 and third_year_valid != 0 and fourth_year_valid != 0 and fifth_year_valid != 0)
    {
        float final_cgpa = first_year_effective_gp + second_year_effective_gp + third_year_effective_gp + fourth_year_effective_gp + fifth_year_effective_gp;
        wxString honours_info;
        if (final_cgpa > 4.5)
        {
            honours_info = "\n\nCurrently, First Class Graduate";
        }
        if (final_cgpa < 4.49 and final_cgpa > 3.5)
        {
            honours_info = "\n\nCurrently, Second Class Upper Graduate";
        }
        if (final_cgpa < 3.49 and final_cgpa > 2.4)
        {
            honours_info = "\n\nCurrently, Second Class Lower Graduate";
        }
        if (final_cgpa < 2.39 and final_cgpa > 1.5)
        {
            honours_info = "\n\nCurrently, Third Class Graduate";
        }
        else if (final_cgpa < 1.49)
        {
            honours_info = "\n\nCurrently, Pass Graduate";
        }
        wxString final_cgpa_wxstring = wxString::Format(wxT("%f"), final_cgpa);
        wxString final_cgpa_message = "Cummulative Grade Pending (CGPA): " + final_cgpa_wxstring;
        wxMessageBox(final_cgpa_message + " " + honours_info);
        event.Skip();
    }

    event.Skip();
}
