void Setting_Tech_Setup() {
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
  tft.setCursor(80, 90);
  tft.setTextColor(WHITE);
  tft.setTextSize(6);
  tft.println("Tech");
  tft.setCursor(65, 140);
  tft.setTextColor(WHITE);
  tft.setTextSize(6);
  tft.println("Specs");
  tft.fillRect(30, 200, 260, 1, WHITE);
  tft.setCursor(15, 224);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Compatable Devices:");
  tft.setCursor(15, 244);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Arduino Mega 2560");
  tft.setCursor(15, 264);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Arduino Due");
  tft.setCursor(15, 294);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Flash Memory Size:");
  tft.setCursor(15, 314);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("53166  x bytes");  
  tft.setCursor(15, 344);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Default Screen Size:");
  tft.setCursor(15, 364);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("3.5 in, 480*320");  
  settings_count = 0;
}

void Settings_Tech_Read_Button() {
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
    if (p.x > 0 && p.x < 64 && p.y > 64 && p.y < 192)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Setting_Color_Setup();
      color_window_opened = true;
      delay(300);
    }
  }
}