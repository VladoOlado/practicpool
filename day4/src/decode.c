#include <stdio.h>

void code(void);
void decode(void);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Неверное количество аргументов\n");
    return 1;
  }
  printf("Количество аргументов:%i\n", argc);

  if (argv[1][0] == '0') {

    code();

  } else if (argv[1][0] == '1') {

    decode();
  }
}

void code(void) {
  int buff = 0;
  while ((buff = getchar()) != '\n' && buff != EOF) {
    if (buff != ' ') {
      printf("%x", buff);
    } else if (buff == ' ') {
      printf(" ");
    }
  }
}

void decode(void) {
  int ch;
  while (1) {
    if (scanf("%x", &ch) != 1) { // Если ввод не корректен
      while (getchar() != '\n')
        ; // Очистка буфера
      break;
    }
    printf("%c", ch);
    int next_char = getchar();
    if (next_char == '\n' || next_char == EOF)
      break;
    printf(" ");
  }
  return;

  /*int buff = 0;
  while (1) {
    int result = scanf("%x", &buff); // Пытаемся считать шестнадцатеричное число
    if (result == 1) {
      printf("%c", buff);
    } else {
      scanf("%c", &buff); // Считываем следующий символ
      if ( == '\n') {
        break; // Завершаем цикл при вводе новой строки
      }
      while (1) {

        int result = scanf("%x", &buff);

        if (result == 1) {
          // Если число успешно считано, выводим его как символ
          printf("%c", buff);
        } else {
          // Если ввод не является числом, проверяем, является ли он новой
      строкой scanf("%c", &ch); // Считываем следующий символ if (ch == '\n') {
            break; // Завершаем цикл при вводе новой строки
          } else {
            // Если введён некорректный символ, выводим сообщение об ошибке
            printf("Ошибка: некорректный ввод.\n");
            // Пропускаем оставшиеся символы в буфере ввода
            while (getchar() != '\n')
              ;
          }
        }
      }*/
}
