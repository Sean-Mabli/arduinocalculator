void Calculate() {
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true)) {
    if (operation_1 == "+") {
      equation_solved_long = number_1_long + number_2_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-") {
      equation_solved_long = number_1_long - number_2_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*") {
      equation_solved_long = number_1_long * number_2_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float;
        div_remainder = true;
      }
      display_solved = true;
    }
  }
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true) && (operation_2_done == true) && (number_3_done == true)) {
    if (operation_1 == "+" && operation_2 == "+") {
      equation_solved_long = number_1_long + number_2_long + number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "+") {
      equation_solved_long = number_1_long - number_2_long + number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "+") {
      equation_solved_long = number_1_long * number_2_long + number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "+") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float + number_3_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float + number_3_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "-") {
      equation_solved_long = number_1_long + number_2_long - number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "-") {
      equation_solved_long = number_1_long - number_2_long - number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "-") {
      equation_solved_long = number_1_long * number_2_long - number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "-") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float - number_3_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float - number_3_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "*") {
      equation_solved_long = number_1_long + number_2_long * number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "*") {
      equation_solved_long = number_1_long - number_2_long * number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "*") {
      equation_solved_long = number_1_long * number_2_long * number_3_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "*") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float * number_3_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float * number_3_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "/") {
      number_3_float = number_3_long;
      if (number_2_long % number_3_long == 0) {
        equation_solved_long = number_1_long + number_2_long / number_3_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long + number_2_long / number_3_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "/") {
      number_3_float = number_3_long;
      if (number_2_long % number_3_long == 0) {
        equation_solved_long = number_1_long - number_2_long / number_3_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long - number_2_long / number_3_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "/") {
      number_3_float = number_3_long;
      if (number_2_long % number_3_long == 0) {
        equation_solved_long = number_1_long * number_2_long / number_3_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long * number_2_long / number_3_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "/") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_3_float = number_3_long;
      if (number_1_long % number_2_long == 0 && ((number_1_long / number_2_long) % number_3_long == 0)) {
        equation_solved_long = number_1_float / number_2_float / number_3_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float / number_3_float;
        div_remainder = true;
      }
      display_solved = true;
    }
  }
  if ((number_1_done == true) && (operation_1_done == true) && (number_2_done == true) && (operation_2_done == true) && (number_3_done == true) && (operation_3_done == true) && (number_4_done == true)) {
    if (operation_1 == "+" && operation_2 == "+" && operation_3 == "+") {
      equation_solved_long = number_1_long + number_2_long + number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "+" && operation_3 == "+") {
      equation_solved_long = number_1_long - number_2_long + number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "+" && operation_3 == "+") {
      equation_solved_long = number_1_long * number_2_long + number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "+" && operation_3 == "+") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float + number_3_long + number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float + number_3_long + number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "-" && operation_3 == "+") {
      equation_solved_long = number_1_long + number_2_long - number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "-" && operation_3 == "+") {
      equation_solved_long = number_1_long - number_2_long - number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "-" && operation_3 == "+") {
      equation_solved_long = number_1_long * number_2_long - number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "-" && operation_3 == "+") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float - number_3_long + number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float - number_3_long + number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "*" && operation_3 == "+") {
      equation_solved_long = number_1_long + number_2_long * number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "*" && operation_3 == "+") {
      equation_solved_long = number_1_long - number_2_long * number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "*" && operation_3 == "+") {
      equation_solved_long = number_1_long * number_2_long * number_3_long + number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "*" && operation_3 == "+") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float * number_3_long + number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float * number_3_long + number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "/" && operation_3 == "+") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long + number_2_long / number_3_float + number_4_long;
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "/" && operation_3 == "+") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long - number_2_long / number_3_float + number_4_long;
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "/" && operation_3 == "+") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long * number_2_long / number_3_float + number_4_long;
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "/" && operation_3 == "+") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_3_float = number_3_long;
      if (number_1_long % number_2_long == 0 && ((number_1_long / number_2_long) % number_3_long == 0)) {
        equation_solved_long = number_1_float / number_2_float / number_3_float + number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float / number_3_float + number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "+" && operation_3 == "-") {
      equation_solved_long = number_1_long + number_2_long + number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "+" && operation_3 == "-") {
      equation_solved_long = number_1_long - number_2_long + number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "+" && operation_3 == "-") {
      equation_solved_long = number_1_long * number_2_long + number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "+" && operation_3 == "-") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float + number_3_long - number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float + number_3_long - number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "-" && operation_3 == "-") {
      equation_solved_long = number_1_long + number_2_long - number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "-" && operation_3 == "-") {
      equation_solved_long = number_1_long - number_2_long - number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "-" && operation_3 == "-") {
      equation_solved_long = number_1_long * number_2_long - number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "-" && operation_3 == "-") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float - number_3_long - number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float - number_3_long - number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "*" && operation_3 == "-") {
      equation_solved_long = number_1_long + number_2_long * number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "*" && operation_3 == "-") {
      equation_solved_long = number_1_long - number_2_long * number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "*" && operation_3 == "-") {
      equation_solved_long = number_1_long * number_2_long * number_3_long - number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "*" && operation_3 == "-") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float * number_3_long - number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float * number_3_long - number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "/" && operation_3 == "-") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long + number_2_long / number_3_float - number_4_long;
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "/" && operation_3 == "-") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long - number_2_long / number_3_float - number_4_long;
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "/" && operation_3 == "-") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long * number_2_long / number_3_float - number_4_long;
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "/" && operation_3 == "-") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_3_float = number_3_long;
      if (number_1_long % number_2_long == 0 && ((number_1_long / number_2_long) % number_3_long == 0)) {
        equation_solved_long = number_1_float / number_2_float / number_3_float - number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float / number_3_float - number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "+" && operation_3 == "*") {
      equation_solved_long = number_1_long + number_2_long + number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "+" && operation_3 == "*") {
      equation_solved_long = number_1_long - number_2_long + number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "+" && operation_3 == "*") {
      equation_solved_long = number_1_long * number_2_long + number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "+" && operation_3 == "*") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float + number_3_long * number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float + number_3_long * number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "-" && operation_3 == "*") {
      equation_solved_long = number_1_long + number_2_long - number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "-" && operation_3 == "*") {
      equation_solved_long = number_1_long - number_2_long - number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "-" && operation_3 == "*") {
      equation_solved_long = number_1_long * number_2_long - number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "-" && operation_3 == "*") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float - number_3_long * number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float - number_3_long * number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "*" && operation_3 == "*") {
      equation_solved_long = number_1_long + number_2_long * number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "-" && operation_2 == "*" && operation_3 == "*") {
      equation_solved_long = number_1_long - number_2_long * number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "*" && operation_2 == "*" && operation_3 == "*") {
      equation_solved_long = number_1_long * number_2_long * number_3_long * number_4_long;
      display_solved = true;
      div_remainder = false;
    }
    if (operation_1 == "/" && operation_2 == "*" && operation_3 == "*") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      if (number_1_long % number_2_long == 0) {
        equation_solved_long = number_1_float / number_2_float * number_3_long * number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float * number_3_long * number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "/" && operation_3 == "*") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long + number_2_long / number_3_float * number_4_long;
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "/" && operation_3 == "*") {
      number_3_float = number_3_long;
      equation_solved_float = number_1_long - number_2_long / number_3_float * number_4_long;
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "/" && operation_3 == "*") {
      number_3_float = number_3_long;
      equation_solved_float    = number_1_long * number_2_long / number_3_float * number_4_long;
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "/" && operation_3 == "*") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_3_float = number_3_long;
      if (number_1_long % number_2_long == 0 && ((number_1_long / number_2_long) % number_3_long == 0)) {
        equation_solved_long = number_1_float / number_2_float / number_3_float * number_4_long;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float / number_3_float * number_4_long;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "+" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long + number_2_long + number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long + number_2_long + number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "+" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long - number_2_long + number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long - number_2_long + number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "+" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long * number_2_long + number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long * number_2_long + number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "+" && operation_3 == "/") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_4_float = number_4_long;
      if (number_1_long % number_2_long == 0 && number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_float / number_2_float + number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float + number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "-" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long + number_2_long - number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long + number_2_long - number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "-" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long - number_2_long - number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long - number_2_long - number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "-" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long * number_2_long - number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long * number_2_long - number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "-" && operation_3 == "/") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_4_float = number_4_long;
      if (number_1_long % number_2_long == 0 && number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_float / number_2_float - number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float - number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "*" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long + number_2_long * number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long + number_2_long * number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "*" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long - number_2_long * number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long - number_2_long * number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "*" && operation_3 == "/") {
      number_4_float = number_4_long;
      if (number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_long * number_2_long * number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long * number_2_long * number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "*" && operation_3 == "/") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_4_float = number_4_long;
      if (number_1_long % number_2_long == 0 && number_3_long % number_4_long == 0) {
        equation_solved_long = number_1_float / number_2_float * number_3_long / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float * number_3_long / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "+" && operation_2 == "/" && operation_3 == "/") {
      number_4_float = number_4_long;
      number_3_float = number_3_long;
      if (number_2_long % number_3_long == 0 && ((number_2_long / number_3_long) % number_4_long == 0)) {
        equation_solved_long = number_1_long + number_2_long / number_3_float / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long + number_2_long / number_3_float / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "-" && operation_2 == "/" && operation_3 == "/") {
      number_4_float = number_4_long;
      number_3_float = number_3_long;
      if (number_2_long % number_3_long == 0 && ((number_2_long / number_3_long) % number_4_long == 0)) {
        equation_solved_long = number_1_long - number_2_long / number_3_float / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long - number_2_long / number_3_float / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "*" && operation_2 == "/" && operation_3 == "/") {
      number_4_float = number_4_long;
      number_3_float = number_3_long;
      if (number_2_long % number_3_long == 0 && ((number_2_long / number_3_long) % number_4_long == 0)) {
        equation_solved_long = number_1_long * number_2_long / number_3_float / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_long * number_2_long / number_3_float / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
    if (operation_1 == "/" && operation_2 == "/" && operation_3 == "/") {
      number_1_float = number_1_long;
      number_2_float = number_2_long;
      number_3_float = number_3_long;
      number_4_float = number_4_long;
      if (number_1_long % number_2_long == 0 && ((number_1_long / number_2_long) % number_3_long == 0) && ((number_1_long / number_2_long / number_3_long) % number_4_long == 0)) {
        equation_solved_long = number_1_float / number_2_float / number_3_float / number_4_float;
        div_remainder = false;
      }
      else {
        equation_solved_float = number_1_float / number_2_float / number_3_float / number_4_float;
        div_remainder = true;
      }
      display_solved = true;
    }
  }
}