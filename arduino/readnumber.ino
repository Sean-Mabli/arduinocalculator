void Read_Number() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 160 && p.x < 224 && p.y > 0 && p.y < 160)
    {
      Serial.println("Settings Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      delay(300);
      setting_open = true;
    }
    if (p.x > 224 && p.x < 288 && p.y > 0 && p.y < 80 && equation_display.length() < 11)
    {
      Serial.println("7 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 7;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 0 && p.y < 80 && equation_display.length() < 11)
    {
      Serial.println("4 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 4;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 0 && p.y < 80 && equation_display.length() < 11)
    {
      Serial.println("1 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 1;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 0 && p.y < 80)
    {
      Serial.println("Clear Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      delay(300);
      number_1_long = 0;
      number_2_long = 0;
      number_3_long = 0;
      number_4_long = 0;
      number_1_float = 0;
      number_2_float = 0;
      number_3_float = 0;
      number_4_float = 0;
      operation_1 = "#";
      operation_2 = "#";
      operation_3 = "#";
      character_count = 0;
      current_number = 0;
      current_operation = "#";
      operation_press = false;
      number_1_done = false;
      number_2_done = false;
      number_3_done = false;
      number_4_done = false;
      operation_1_done = false;
      operation_2_done = false;
      operation_3_done = false;
      display_tft = false;
      display_solved = false;
      equation_display = ".";
      tft.fillRect(0, 0, 320, 160, BLACK);
      tft.fillRect(0, 80, 320, 1, WHITE);
      tft.setCursor(15, 100);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println("=");
    }
    if (p.x > 224 && p.x < 288 && p.y > 80 && p.y < 160 && equation_display.length() < 11)
    {
      Serial.println("8 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 8;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 80 && p.y < 160 && equation_display.length() < 11)
    {
      Serial.println("5 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 5;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 80 && p.y < 160 && equation_display.length() < 11)
    {
      Serial.println("2 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 2;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 80 && p.y < 160 && equation_display.length() < 11)
    {
      Serial.println("0 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 0;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 160 && p.x < 224 && p.y > 160 && p.y < 320)
    {
      Serial.println("Backspace Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      delay(300);
      Backspace();
    }
    if (p.x > 224 && p.x < 288 && p.y > 160 && p.y < 240 && equation_display.length() < 11)
    {
      Serial.println("9 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 9;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 160 && p.y < 240 && equation_display.length() < 11)
    {
      Serial.println("6 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 6;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 160 && p.y < 240 && equation_display.length() < 11)
    {
      Serial.println("3 Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_number = 3;
      Assign_Number();
      display_tft = true;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 160 && p.y < 240)
    {
      Serial.println("= Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      delay(300);
      Calculate();
    }
    if (p.x > 224 && p.x < 288 && p.y > 240 && p.y < 320 && equation_display.length() < 11)
    {
      Serial.println("+ Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_operation = "+";
      operation_press = true;
      Assign_Operation();
      display_tft = true;
      delay(300);
    }
    if (p.x > 288 && p.x < 352 && p.y > 240 && p.y < 320 && equation_display.length() < 11)
    {
      Serial.println("- Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_operation = "-";
      operation_press = true;
      Assign_Operation();
      display_tft = true;
      delay(300);
    }
    if (p.x > 352 && p.x < 416 && p.y > 240 && p.y < 320 && equation_display.length() < 11)
    {
      Serial.println("x Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      current_operation = "*";
      operation_press = true;
      Assign_Operation();
      display_tft = true;
      delay(300);
    }
    if (p.x > 416 && p.x < 480 && p.y > 240 && p.y < 320 && equation_display.length() < 11)
    {
      Serial.println("/ Pressed");
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      delay(300);
      current_operation = "/";
      operation_press = true;
      Assign_Operation();
      display_tft = true;
      delay(300);
    }
  }
}