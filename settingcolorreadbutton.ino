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