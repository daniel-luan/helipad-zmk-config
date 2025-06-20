/*                                      64 KEY MATRIX / LAYOUT MAPPING

  ╭─────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5      │      6   7   8   9  10  11 │ │ LN5 LN4 LN3 LN2 LN1 LN0     │     RN0 RN1 RN2 RN3 RN4 RN5 │
  │ 12  13  14  15  16  17      │     18  19  20  21  22  23 │ │ LT5 LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 24  25  26  27  28  29      │     30  31  32  33  34  35 │ │ LM5 LM4 LM3 LM2 LM1 LM0     │     RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 36  37  38  39  40  41  42  │ 43  44  45  46  47  48  49 │ │ LB6 LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 RB6 │
  │ 50  51  52  53  54  55  56  │ 57  58  59  60  61  62  63 │ │ LH6 LH5 LH4 LH3 LH2 LH1 LH0 │ RH0 RH1 RH2 RH3 RH4 RH5 RH6 │
  ╰─────────────────────────────┴────────────────────────────╯ ╰─────────────────────────────┴─────────────────────────────╯ */

#pragma once

#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

#define RN0  6  // right-number row
#define RN1  7
#define RN2  8
#define RN3  9
#define RN4 10
#define RN5 11

#define LT0 17  // left-top row
#define LT1 16
#define LT2 15
#define LT3 14
#define LT4 13
#define LT5 12

#define RT0 18  // right-top row
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22
#define RT5 23

#define LM0 29  // left-middle row
#define LM1 28
#define LM2 27
#define LM3 26
#define LM4 25
#define LM5 24

#define RM0 30  // right-middle row
#define RM1 31
#define RM2 32
#define RM3 33
#define RM4 34
#define RM5 35

#define LB0 42  // left-bottom row
#define LB1 41
#define LB2 40
#define LB3 39
#define LB4 38
#define LB5 37
#define LB6 36

#define RB0 43  // right-bottom row
#define RB1 44
#define RB2 45
#define RB3 46
#define RB4 47
#define RB5 48
#define RB6 49

#define LH0 56  // left thumb keys
#define LH1 55
#define LH2 54
#define LH3 53
#define LH4 52
#define LH5 51
#define LH6 50

#define RH0 57  // right thumb keys
#define RH1 58
#define RH2 59
#define RH3 60
#define RH4 61
#define RH5 62
#define RH6 63
