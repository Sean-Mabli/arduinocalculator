void Assign_Number() {
  if ((operation_3_done == true) && (character_count == 3)) {
    number_4_long = (10 * number_4_long) + current_number;
    number_4_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_4_long";
  }
  if ((operation_3_done == true) && (character_count == 2)) {
    number_4_long = (10 * number_4_long) + current_number;
    number_4_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_4_long";
  }
  if ((operation_3_done == true) && (character_count == 1)) {
    number_4_long = (10 * number_4_long) + current_number;
    number_4_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_4_long";
  }
  if ((operation_3_done == true) && (character_count == 0)) {
    number_4_long = current_number;
    number_4_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_4_long";
  }
  if ((operation_2_done == true) && (operation_3_done == false) && (character_count == 3)) {
    number_3_long = (10 * number_3_long) + current_number;
    number_3_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_3_long";
  }
  if ((operation_2_done == true) && (operation_3_done == false) && (character_count == 2)) {
    number_3_long = (10 * number_3_long) + current_number;
    number_3_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_3_long";
  }
  if ((operation_2_done == true) && (operation_3_done == false) && (character_count == 1)) {
    number_3_long = (10 * number_3_long) + current_number;
    number_3_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_3_long";
  }
  if ((operation_2_done == true) && (operation_3_done == false) && (character_count == 0)) {
    number_3_long = current_number;
    number_3_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_3_long";
  }
  if ((operation_1_done == true) && (operation_2_done == false) && (character_count == 3)) {
    number_2_long = (10 * number_2_long) + current_number;
    number_2_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_2_long";
  }
  if ((operation_1_done == true) && (operation_2_done == false) && (character_count == 2)) {
    number_2_long = (10 * number_2_long) + current_number;
    number_2_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_2_long";
  }
  if ((operation_1_done == true) && (operation_2_done == false) && (character_count == 1)) {
    number_2_long = (10 * number_2_long) + current_number;
    number_2_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_2_long";
  }
  if ((operation_1_done == true) && (operation_2_done == false) && (character_count == 0)) {
    number_2_long = current_number;
    number_2_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_2_long";
  }
  if ((operation_1 == "#") && (character_count == 3)) {
    number_1_long = (10 * number_1_long) + current_number;
    number_1_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_1_long";
  }
  if ((operation_1 == "#") && (character_count == 2)) {
    number_1_long = (10 * number_1_long) + current_number;
    number_1_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_1_long";
  }
  if ((operation_1 == "#") && (character_count == 1)) {
    number_1_long = (10 * number_1_long) + current_number;
    number_1_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_1_long";
  }
  if ((operation_1 == "#") && (character_count == 0)) {
    number_1_long = current_number;
    number_1_done = true;
    character_count = character_count + 1;
    last_num_opt = "number_1_long";
  }
  last_character = current_number;
}