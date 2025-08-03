// Original source: https://github.com/urob/zmk-helpers/blob/main/include/zmk-helpers/key-labels/adv360.h
// Modified to add additional thumb and "floor" keys and to match the key matrix layout.

/*                                 ADVANTAGE 360 KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
 │  0   1   2   3   4   5   6 │  7   8   9  10  11  12  13 │ │ LN5 LN4 LN3 LN2 LN1 LN0 --  │  -- RN0 RN1 RN2 RN3 RN4 RN5 │
 │ 14  15  16  17  18  19  20 │ 21  22  23  24  25  26  27 │ │ LT5 LT4 LT3 LT2 LT1 LT0 --  │  -- RT0 RT1 RT2 RT3 RT4 RT5 │
 │ 28  29  30  31  32  33  34 │ 39  40  41  42  43  44  45 │ │ LM5 LM4 LM3 LM2 LM1 LM0 --  │  -- RM0 RM1 RM2 RM3 RM4 RM5 │
 │ 46  47  48  49  50  51 ╭───┴───╮ 54  55  56  57  58  59 │ │ LB5 LB4 LB3 LB2 LB1 LB0 ╭───┴───╮ RB0 RB1 RB2 RB3 RB4 RB5 │
 │ 60  61  62  63  64╭────╯       ╰────╮71  72  73  74  75 │ │ LF5 LF4 LF3 LF2 LF1╭────╯       ╰────╮RF1 RF2 RF3 RF4 RF5 │
 ╰───────────────────┼────────┬────────┼───────────────────╯ ╰────────────────────┼────────┬────────┼────────────────────╯
                 ╭───╯ 35  36 │ 37  38 ╰───╮                                 ╭───╯ LH5 LH4│RH4 RH5 ╰───╮
                 │ 65  66  67 │ 68  69  70 │                                 │ LH1 LH0 LH2│RH2 RH0 RH1 │
                 ╰───────╮ 52 │ 53 ╭───────╯                                 ╰───────╮ LH3│RH3 ╭───────╯
                         ╰────┴────╯                                                 ╰────┴────╯ */

#pragma once

// left-number row
#define LN0  5
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

// right-number row
#define RN0  8
#define RN1  9
#define RN2 10
#define RN3 11
#define RN4 12
#define RN5 13

// left-top row
#define LT0 19
#define LT1 18
#define LT2 17
#define LT3 16
#define LT4 15
#define LT5 14

// right-top row
#define RT0 22
#define RT1 23
#define RT2 24
#define RT3 25
#define RT4 26
#define RT5 27

// left-middle row
#define LM0 33
#define LM1 32
#define LM2 31
#define LM3 30
#define LM4 29
#define LM5 28

// right-middle row
#define RM0 40
#define RM1 41
#define RM2 42
#define RM3 43
#define RM4 44
#define RM5 45

// left-bottom row
#define LB0 51
#define LB1 50
#define LB2 49
#define LB3 48
#define LB4 47
#define LB5 46

// right-bottom row
#define RB0 54
#define RB1 55
#define RB2 56
#define RB3 57
#define RB4 58
#define RB5 59

// left-floor row
#define LF1  64
#define LF2  63
#define LF3  62
#define LF4  61
#define LF5  60

// right-floor row
#define RF1  71
#define RF2  72
#define RF3  73
#define RF4  74
#define RF5  75

// left thumb keys
#define LH0 66
#define LH1 65
#define LH2 67
#define LH3 52
#define LH4 36
#define LH5 35

// right thumb keys
#define RH0 69
#define RH1 70
#define RH2 68
#define RH3 53
#define RH4 37
#define RH5 38
