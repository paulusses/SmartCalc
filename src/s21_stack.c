#include "s21_stack.h"

void push_stack(lexem **head, double val, int type,
                int priot) {  // äîáàâëÿåì ýëåìåíò â ñòåê
  lexem *new = (lexem *)malloc(sizeof(lexem));
  if (new != NULL) {
    new->value = val;
    new->type = type;
    new->priority = priot;
    new->next = *head;
    *head = new;
  }
}

void pop_stack(lexem **head) {
  lexem *befor = NULL;
  befor = (*head);
  (*head) = (*head)->next;
  free(befor);
}

lexem top_stack(lexem **head) {
  lexem *temp = *head;
  return (*temp);
}
