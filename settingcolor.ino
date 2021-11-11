void Setting_Color_Setup() {
  tft.fillScreen(BLACK);
  tft.fillRect(0, 0, 64, 64, BLACK);
  tft.drawRect(0, 0, 64, 64, WHITE);
  tft.setCursor(10, 20);
  tft.setTextColor(WHITE);
  tft.setTextSize(3);
  tft.println("Cal");
  tft.fillRect(64, 0, 128, 64, BLACK);
  tft.drawRect(64, 0, 128, 64, WHITE);
  tft.setCursor(85, 20);
  tft.setTextColor(WHITE);
  tft.setTextSize(3);
  tft.println("Color");
  tft.fillRect(192, 0, 128, 64, BLACK);
  tft.drawRect(192, 0, 128, 64, WHITE);
  tft.setCursor(215, 20);
  tft.setTextColor(WHITE);
  tft.setTextSize(3);
  tft.println("Tech");
  tft.setCursor(55, 90);
  tft.setTextColor(WHITE);
  tft.setTextSize(6);
  tft.println("Button");
  tft.setCursor(70, 140);
  tft.setTextColor(WHITE);
  tft.setTextSize(6);
  tft.println("Color");
  tft.fillRect(30, 200, 260, 1, WHITE);
  tft.fillRect(0, 224, 80, 64, RED);
  tft.drawRect(0, 224, 80, 64, WHITE);
  tft.setCursor(20, 249);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Red");
  tft.fillRect(0, 288, 80, 64, GREEN);
  tft.drawRect(0, 288, 80, 64, WHITE);
  tft.setCursor(10, 313);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Green");
  tft.fillRect(0, 352, 80, 64, BLUE);
  tft.drawRect(0, 352, 80, 64, WHITE);
  tft.setCursor(15, 377);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Blue");
  tft.fillRect(0, 416, 80, 64, YELLOW);
  tft.drawRect(0, 416, 80, 64, WHITE);
  tft.setCursor(5, 441);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Yellow");
  tft.fillRect(80, 224, 80, 64, MAROON);
  tft.drawRect(80, 224, 80, 64, WHITE);
  tft.setCursor(85, 249);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Maroon");
  tft.fillRect(80, 288, 80, 64, DARKGREEN);
  tft.drawRect(80, 288, 80, 64, WHITE);
  tft.setCursor(100, 303);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Dark");
  tft.setCursor(90, 323);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Green");
  tft.fillRect(80, 352, 80, 64, NAVY);
  tft.drawRect(80, 352, 80, 64, WHITE);
  tft.setCursor(100, 377);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Navy");
  tft.fillRect(80, 416, 80, 64, ORANGE);
  tft.drawRect(80, 416, 80, 64, WHITE);
  tft.setCursor(85, 441);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Orange");
  tft.fillRect(160, 224, 80, 64, PINK);
  tft.drawRect(160, 224, 80, 64, WHITE);
  tft.setCursor(180, 249);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Pink");
  tft.fillRect(160, 288, 80, 64, OLIVE);
  tft.drawRect(160, 288, 80, 64, WHITE);
  tft.setCursor(170, 313);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Olive");
  tft.fillRect(160, 352, 80, 64, DARKCYAN);
  tft.drawRect(160, 352, 80, 64, WHITE);
  tft.setCursor(180, 367);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Dark");
  tft.setCursor(180, 387);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Cyan");
  tft.fillRect(160, 416, 80, 64, LIGHTGREY);
  tft.drawRect(160, 416, 80, 64, WHITE);
  tft.setCursor(180, 441);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Gray");
  tft.fillRect(240, 224, 80, 64, PURPLE);
  tft.drawRect(240, 224, 80, 64, WHITE);
  tft.setCursor(245, 249);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Purple");
  tft.fillRect(240, 288, 80, 64, GREENYELLOW);
  tft.drawRect(240, 288, 80, 64, WHITE);
  tft.setCursor(250, 303);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Green");
  tft.setCursor(245, 323);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Yellow");
  tft.fillRect(240, 352, 80, 64, CYAN);
  tft.drawRect(240, 352, 80, 64, WHITE);
  tft.setCursor(260, 377);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Cyan");
  tft.fillRect(240, 416, 80, 64, BLACK);
  tft.drawRect(240, 416, 80, 64, WHITE);
  tft.setCursor(250, 441);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Black");
  settings_count = 0;
}

void Settings_Color_Read_Button() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 0 && p.x < 64 && p.y > 0 && p.y < 64)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Button_Setup();
      setting_open = false;
      settings_count = 1;
      if (equation_display != ".") {
        tft.setCursor(15, 20);
        tft.setTextColor(WHITE);
        tft.setTextSize(4);
        tft.println(equation_display);
      }
      delay(300);
    }
    if (p.x > 0 && p.x < 64 && p.y > 192 && p.y < 320)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Setting_Tech_Setup();
      color_window_opened = false;
      delay(300);
    }
    if (p.x > 224 && p.x < 288 && p.y > 0 && p.y < 80)
    {
      button_color = 0xF800;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 0 && p.y < 80)
    {
      button_color = 0x07E0;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 0 && p.y < 80)
    {
      button_color = 0x001F;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 0 && p.y < 80)
    {
      button_color = 0xFFE0;
      delay(300);
    }
    if (p.x > 224 && p.x < 288 && p.y > 80 && p.y < 160)
    {
      button_color = 0x7800;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 80 && p.y < 160)
    {
      button_color = 0x03E0;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 80 && p.y < 160)
    {
      button_color = 0x000F;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 80 && p.y < 160)
    {
      button_color = 0xFD20;
      delay(300);
    }
    if (p.x > 224 && p.x < 288 && p.y > 160 && p.y < 240)
    {
      button_color = 0xF81F;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 160 && p.y < 240)
    {
      button_color = 0x7BE0;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 160 && p.y < 240)
    {
      button_color = 0x03EF;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 160 && p.y < 240)
    {
      button_color = 0xC618;
      delay(300);
    }
    if (p.x > 224 && p.x < 288 && p.y > 240 && p.y < 320)
    {
      button_color = 0x780F;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 240 && p.y < 320)
    {
      button_color = 0xAFE5;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 240 && p.y < 320)
    {
      button_color = 0x07FF;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 240 && p.y < 320)
    {
      button_color = 0x0000;
      delay(300);
    }
  }
}