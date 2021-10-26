#include <Adafruit_GFX.h>
#include <Adafruit_TFTLCD.h>
#include <TouchScreen.h>

#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4

// Color definitions
#define BLACK       0x0000
#define NAVY        0x000F
#define DARKGREEN   0x03E0
#define DARKCYAN    0x03EF
#define MAROON      0x7800
#define PURPLE      0x780F
#define OLIVE       0x7BE0
#define LIGHTGREY   0xC618
#define DARKGREY    0x7BEF
#define BLUE        0x001F
#define GREEN       0x07E0
#define CYAN        0x07FF
#define RED         0xF800
#define PINK        0xF81F
#define YELLOW      0xFFE0
#define WHITE       0xFFFF
#define ORANGE      0xFD20
#define GREENYELLOW 0xAFE5

#define YP A2
#define XM A3
#define YM 8
#define XP 9

#define TS_MINX 130
#define TS_MAXX 905

#define TS_MINY 75
#define TS_MAXY 930

#define STATUS_X 10
#define STATUS_Y 65

#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);

long   number_1_long;
long   number_2_long;
long   number_3_long;
long   number_4_long;
long   equation_solved_long;
float  number_1_float;
float  number_2_float;
float  number_3_float;
float  number_4_float;
float  equation_solved_float;
int    character_count = 0;
int    current_number;
int    button_color = 0xFD20; // Default is orange
int    settings_count = 1;
String operation_1 = "#";
String operation_2 = "#";
String operation_3 = "#";
String current_operation;
String last_character;
String last_num_opt;
String equation_display;
String number_1_string;
String number_2_string;
String number_3_string;
String number_4_string;
bool   operation_press = false;
bool   number_1_done = false;
bool   number_2_done = false;
bool   number_3_done = false;
bool   number_4_done = false;
bool   operation_1_done = false;
bool   operation_2_done = false;
bool   operation_3_done = false;
bool   display_tft = false;
bool   display_solved = false;
bool   div_remainder;
bool   setting_open = false;
bool   color_window_opened = true;

void setup(void) {
  Serial.begin(9600);

  tft.reset();

  uint16_t identifier = tft.readID();

  tft.begin(identifier);
  tft.setRotation(0);

  Button_Setup();
}

#define MINPRESSURE 10
#define MAXPRESSURE 1000

void loop(void) {
  if (setting_open == false) {
    Read_Number();
    Equation_Display();
    if ((number_1_done == true) && (display_tft == true)) {
      tft.setCursor(15, 20);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(equation_display);
      display_tft = false;
    }
    if (display_solved == true && div_remainder == false) {
      tft.fillRect(50, 81, 270, 78, BLACK);
      tft.setCursor(55, 100);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(equation_solved_long);
      display_solved = false;
    }
    if (display_solved == true && div_remainder == true) {
      tft.fillRect(50, 81, 270, 78, BLACK);
      tft.setCursor(55, 100);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(equation_solved_float);
      display_solved = false;
    }
  }
  if (setting_open == true) {
    if (settings_count == 1) {
      Setting_Color_Setup();
    }
    else {
      if (color_window_opened == true) {
        Settings_Color_Read_Button();
      }
      else {
        Settings_Tech_Read_Button();
      }
    }
  }
}