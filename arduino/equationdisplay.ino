void Equation_Display() {
  if (number_1_done == true) {
    equation_display = number_1_long;
  }
  if ((number_1_done == true) && (operation_1_done == true)) {
    equation_display = number_1_long + operation_1;
  }
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true)) {
    equation_display = number_1_long + operation_1 + number_2_long;
  }
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true) && (operation_2_done == true)) {
    equation_display = number_1_long + operation_1 + number_2_long + operation_2;
  }
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true) && (operation_2_done == true) && (number_3_done == true)) {
    equation_display = number_1_long + operation_1 + number_2_long + operation_2 + number_3_long;
  }
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true) && (operation_2_done == true) && (number_3_done == true) && (operation_3_done == true)) {
    equation_display = number_1_long + operation_1 + number_2_long + operation_2 + number_3_long + operation_3;
  }
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true) && (operation_2_done == true) && (number_3_done == true) && (operation_3_done == true) && (number_4_done == true)) {
    equation_display = number_1_long + operation_1 + number_2_long + operation_2 + number_3_long + operation_3 + number_4_long;
  }
}