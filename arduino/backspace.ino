void Backspace() {
  if (last_num_opt == "number_1_long") {
    tft.setCursor(15, 20);
    tft.setTextColor(BLACK);
    tft.setTextSize(4);
    tft.println(equation_display);
    number_1_string = number_1_long;
    if (number_1_string.length() == 1) {
      number_1_done = false;
    }
    number_1_long = number_1_long - last_character.toInt();
    number_1_long = number_1_long / 10;
    character_count = character_count - 1;
    display_tft = true;
  }
  if (last_num_opt == "operation_1") {
    tft.setCursor(15, 20);
    tft.setTextColor(BLACK);
    tft.setTextSize(4);
    tft.println(equation_display);
    last_num_opt = "number_1_long";
    operation_1 = "#";
    number_1_string = number_1_long;
    character_count = number_1_string.length();
    operation_1_done = false;
    display_tft = true;
  }
  if (last_num_opt == "number_2_long") {
    tft.setCursor(15, 20);
    tft.setTextColor(BLACK);
    tft.setTextSize(4);
    tft.println(equation_display);
    number_2_string = number_2_long;
    if (number_2_string.length() == 1) {
      number_2_done = false;
      last_num_opt = "operation_1";
    }
    number_2_long = number_2_long - last_character.toInt();
    number_2_long = number_2_long / 10;
    character_count = character_count - 1;
    display_tft = true;
  }
  if (last_num_opt == "operation_2") {
    tft.setCursor(15, 20);
    tft.setTextColor(BLACK);
    tft.setTextSize(4);
    tft.println(equation_display);
    operation_2 = "#";
    operation_2_done = false;
    number_2_string = number_2_long;
    character_count = number_2_string.length();
    last_num_opt = "number_2_long";
    display_tft = true;
  }
  if (last_num_opt == "number_3_long") {
    tft.setCursor(15, 20);
    tft.setTextColor(BLACK);
    tft.setTextSize(4);
    tft.println(equation_display);
    number_3_string = number_3_long;
    if (number_3_string.length() == 1) {
      number_3_done = false;
      last_num_opt = "operation_2";
    }
    number_3_long = number_3_long - last_character.toInt();
    number_3_long = number_3_long / 10;
    character_count = character_count - 1;
    display_tft = true;
  }
  if (last_num_opt == "operation_3") {
    tft.setCursor(15, 20);
    tft.setTextColor(BLACK);
    tft.setTextSize(4);
    tft.println(equation_display);
    operation_3 = "#";
    operation_3_done = false;
    number_3_string = number_3_long;
    character_count = number_3_string.length();
    last_num_opt = "number_3_long";
    display_tft = true;
  }
  if (last_num_opt == "number_4_long") {
    tft.setCursor(15, 20);
    tft.setTextColor(BLACK);
    tft.setTextSize(4);
    tft.println(equation_display);
    number_4_string = number_4_long;
    if (number_4_string.length() == 1) {
      number_4_done = false;
      last_num_opt = "operation_3";
    }
    number_4_long = number_4_long - last_character.toInt();
    number_4_long = number_4_long / 10;
    character_count = character_count - 1;
    display_tft = true;
  }
}