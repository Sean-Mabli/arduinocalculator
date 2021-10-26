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