# Report

**Author:** Bohush Polina
**Group:** 11a

---

# 1. Цель работы

Проверка корректности программы обработки данных о студентах.

Программа:

* вводит данные о 10 студентах (`MAX_STUDENTS = 10`);
* сортирует записи по алфавиту;
* вычисляет общий средний балл;
* выводит студентов со средним баллом выше общего.

Количество оценок: `GRADES_COUNT = 5`.

---

# Тест 1 — Разный уровень успеваемости

## Ввод данных (10 студентов)

| №  | ФИО          | Курс | Оценки    |
| -- | ------------ | ---- | --------- |
| 1  | Ivanov I.I.  | 1    | 5 5 5 5 5 |
| 2  | Petrov P.P.  | 2    | 4 4 4 4 4 |
| 3  | Sidorov S.S. | 1    | 3 3 3 3 3 |
| 4  | Alexeev A.A. | 3    | 5 4 5 4 5 |
| 5  | Zaitsev Z.Z. | 2    | 2 3 3 2 3 |
| 6  | Morozov M.M. | 4    | 5 5 4 5 4 |
| 7  | Belov B.B.   | 1    | 4 5 4 5 4 |
| 8  | Orlov O.O.   | 3    | 3 4 3 4 3 |
| 9  | Fedorov F.F. | 2    | 5 5 5 4 5 |
| 10 | Kiselev K.K. | 1    | 4 4 5 4 4 |

---

## Контрольный расчёт

| ФИО     | Сумма | Средний |
| ------- | ----- | ------- |
| Ivanov  | 25    | 5.00    |
| Petrov  | 20    | 4.00    |
| Sidorov | 15    | 3.00    |
| Alexeev | 23    | 4.60    |
| Zaitsev | 13    | 2.60    |
| Morozov | 23    | 4.60    |
| Belov   | 22    | 4.40    |
| Orlov   | 17    | 3.40    |
| Fedorov | 24    | 4.80    |
| Kiselev | 21    | 4.20    |

Общий средний:

```
203 / 50 = 4.06
```

---

## Ожидаемый вывод программы

```
Overall average score: 4.06
Students with average score higher than overall:
Student: Alexeev A.A. | Course: 3 | Average: 4.60
Student: Belov B.B.   | Course: 1 | Average: 4.40
Student: Fedorov F.F.| Course: 2 | Average: 4.80
Student: Ivanov I.I. | Course: 1 | Average: 5.00
Student: Kiselev K.K.| Course: 1 | Average: 4.20
Student: Morozov M.M.| Course: 4 | Average: 4.60
```

## Фактический вывод программы

```
Overall average score: 4.06
Students with average score higher than overall:
Student: Alexeev A.A. | Course: 3 | Average: 4.60
Student: Belov B.B.   | Course: 1 | Average: 4.40
Student: Fedorov F.F.| Course: 2 | Average: 4.80
Student: Ivanov I.I. | Course: 1 | Average: 5.00
Student: Kiselev K.K.| Course: 1 | Average: 4.20
Student: Morozov M.M.| Course: 4 | Average: 4.60
```
Программа работает корректно

---

# Тест 2 — Все одинаковые оценки

## Ввод данных

| №  | ФИО          | Курс | Оценки    |
| -- | ------------ | ---- | --------- |
| 1  | Ivanov I.I.  | 1    | 4 4 4 4 4 |
| 2  | Petrov P.P.  | 2    | 4 4 4 4 4 |
| 3  | Sidorov S.S. | 1    | 4 4 4 4 4 |
| 4  | Alexeev A.A. | 3    | 4 4 4 4 4 |
| 5  | Zaitsev Z.Z. | 2    | 4 4 4 4 4 |
| 6  | Morozov M.M. | 4    | 4 4 4 4 4 |
| 7  | Belov B.B.   | 1    | 4 4 4 4 4 |
| 8  | Orlov O.O.   | 3    | 4 4 4 4 4 |
| 9  | Fedorov F.F. | 2    | 4 4 4 4 4 |
| 10 | Kiselev K.K. | 1    | 4 4 4 4 4 |

Средний каждого = 4.00

Общий средний:

```
200 / 50 = 4.00
```

---

## Ожидаемый вывод

```
Overall average score: 4.00
Students with average score higher than overall:
No students with average score higher than overall.
```

## Фактический вывод

```
Overall average score: 4.00
Students with average score higher than overall:
No students with average score higher than overall.
```
Программа работает корректно

---

# Тест 3 — Один отличник

## Ввод данных

| №  | ФИО          | Курс | Оценки    |
| -- | ------------ | ---- | --------- |
| 1  | Ivanov I.I.  | 1    | 3 3 3 3 3 |
| 2  | Petrov P.P.  | 2    | 3 3 3 3 3 |
| 3  | Sidorov S.S. | 1    | 3 3 3 3 3 |
| 4  | Alexeev A.A. | 3    | 3 3 3 3 3 |
| 5  | Zaitsev Z.Z. | 2    | 3 3 3 3 3 |
| 6  | Morozov M.M. | 4    | 3 3 3 3 3 |
| 7  | Belov B.B.   | 1    | 3 3 3 3 3 |
| 8  | Orlov O.O.   | 3    | 3 3 3 3 3 |
| 9  | Fedorov F.F. | 2    | 3 3 3 3 3 |
| 10 | Kiselev K.K. | 1    | 5 5 5 5 5 |

---

## Контрольный расчёт

| Тип      | Кол-во | Сумма | Средний |
| -------- | ------ | ----- | ------- |
| Обычные  | 9      | 135   | 3.00    |
| Отличник | 1      | 25    | 5.00    |

Общий средний:

```
160 / 50 = 3.20
```

---

## Ожидаемый вывод

```
Overall average score: 3.20
Students with average score higher than overall:
Student: Kiselev K.K. | Course: 1 | Average: 5.00
```
## Фактический вывод

```
Overall average score: 3.20
Students with average score higher than overall:
Student: Kiselev K.K. | Course: 1 | Average: 5.00
```
Программа работает корректно

---

# Вывод

В ходе тестирования подтверждено:

* корректность вычисления средних значений;
* правильность отбора студентов;
* корректная работа при равных оценках;
* корректная работа при наличии одного отличника;
* корректная сортировка по алфавиту.

Программа функционирует корректно.
