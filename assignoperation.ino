void Assign_Operation() {
  if ((operation_2 != "#") && (operation_press == true)) {
    operation_3 = current_operation;
    character_count = 0;
    operation_press = false;
    operation_3_done = true;
    last_num_opt = "operation_3";
  }
  if ((operation_1 != "#") && (operation_press == true)) {
    operation_2 = current_operation;
    character_count = 0;
    operation_press = false;
    operation_2_done = true;
    last_num_opt = "operation_2";
  }
  if ((operation_1 == "#") && (operation_press == true)) {
    operation_1 = current_operation;
    character_count = 0;
    operation_press = false;
    operation_1_done = true;
    last_num_opt = "operation_1";
  }
}