/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10749fb50; end: 10749fb6f;  */

void FUN_10749fb50(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010749fb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  lVar2 = *plVar1;
  *plVar1 = param_2;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10749fb70; end: 10749fb87;  */

void FUN_10749fb70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10749fb88; end: 10749fbcb;  */

long * FUN_10749fb88(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001074555e8(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10749fbcc; end: 1074a03f7;  */

void FUN_10749fbcc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010749fbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* Entry: 1074a03f8; end: 1074a0807;  */

void FUN_1074a03f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001074b61ac();
  lVar1 = 0x370;
  __Znwm();
  lVar3 = lVar1;
  func_0x0001074b6dc4();
  uStack_48 = unaff_x21[1];
  uStack_50 = *unaff_x21;
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  func_0x000107799a30(lVar3 + 0x18,&uStack_50);
  FUN_1073e5fe0(&uStack_50);
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1074ae3e0(&uStack_50);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_60 = lVar3 + 0x18;
  lStack_58 = lVar1;
  FUN_1073f17a8(&uStack_50);
  func_0x0001074e3a1c();
  FUN_1073ad37c(&lStack_60);
  FUN_1074ae3e0(&uStack_70);
  *unaff_x19 = &PTR_FUN_1109b44a8;
  puVar2 = unaff_x19 + 0xc;
  FUN_1074a0808(puVar2,unaff_x19[3] + 0x7f0);
  uVar4 = *param_3;
  unaff_x19[0xa8] = param_3[1];
  unaff_x19[0xa7] = uVar4;
  func_0x00010785f1f4();
  lVar3 = 0;
  unaff_x19[0xa9] = puVar2;
  unaff_x19[0xae] = 0;
  unaff_x19[0xad] = 0;
  unaff_x19[0xb2] = 0;
  unaff_x19[0xb1] = 0;
  unaff_x19[0xb6] = 0;
  unaff_x19[0xb5] = 0;
  unaff_x19[0xba] = 0;
  unaff_x19[0xb9] = 0;
  unaff_x19[0xab] = &UNK_10e52b660;
  unaff_x19[0xac] = 0;
  unaff_x19[0xaf] = &UNK_10e52b660;
  unaff_x19[0xb0] = 0;
  unaff_x19[0xb3] = &UNK_10e52b660;
  unaff_x19[0xb4] = 0;
  unaff_x19[0xb7] = &UNK_10e52b660;
  unaff_x19[0xb8] = 0;
  unaff_x19[0xbb] = &UNK_10e52b660;
  unaff_x19[0xbe] = 0;
  unaff_x19[0xbd] = 0;
  unaff_x19[0xbc] = 0;
  unaff_x19[0xbf] = &UNK_10e52b660;
  unaff_x19[0xc1] = 0;
  unaff_x19[0xc0] = 0;
  unaff_x19[0xc2] = 0;
  unaff_x19[0xc3] = &UNK_10e52b660;
  unaff_x19[0xc6] = 0;
  unaff_x19[0xc5] = 0;
  unaff_x19[0xc4] = 0;
  unaff_x19[199] = &UNK_10e52b660;
  unaff_x19[0xca] = 0;
  unaff_x19[0xc9] = 0;
  unaff_x19[200] = 0;
  unaff_x19[0xcb] = &UNK_10e52b660;
  unaff_x19[0xce] = 0;
  unaff_x19[0xcd] = 0;
  unaff_x19[0xcc] = 0;
  unaff_x19[0xcf] = &UNK_10e52b660;
  unaff_x19[0xd2] = 0;
  unaff_x19[0xd1] = 0;
  unaff_x19[0xd0] = 0;
  unaff_x19[0xd3] = &UNK_10e52b660;
  unaff_x19[0xd5] = 0;
  unaff_x19[0xd4] = 0;
  unaff_x19[0xd6] = 0;
  unaff_x19[0xd7] = &UNK_10e52b660;
  unaff_x19[0xda] = 0;
  unaff_x19[0xd9] = 0;
  unaff_x19[0xd8] = 0;
  unaff_x19[0xdb] = &UNK_10e52b660;
  unaff_x19[0xdd] = 0;
  unaff_x19[0xdc] = 0;
  unaff_x19[0xde] = 0;
  unaff_x19[0xdf] = &UNK_10e52b660;
  unaff_x19[0xe1] = 0;
  unaff_x19[0xe0] = 0;
  unaff_x19[0xe2] = 0;
  unaff_x19[0xe3] = &UNK_10e52b660;
  unaff_x19[0xe5] = 0;
  unaff_x19[0xe4] = 0;
  unaff_x19[0xe6] = 0;
  unaff_x19[0xe7] = &UNK_10e52b660;
  unaff_x19[0xe9] = 0;
  unaff_x19[0xe8] = 0;
  unaff_x19[0xea] = 0;
  unaff_x19[0xeb] = &UNK_10e52b660;
  unaff_x19[0xed] = 0;
  unaff_x19[0xec] = 0;
  unaff_x19[0xee] = 0;
  unaff_x19[0xef] = &UNK_10e52b660;
  unaff_x19[0xf1] = 0;
  unaff_x19[0xf0] = 0;
  unaff_x19[0xf2] = 0;
  unaff_x19[0xf3] = &UNK_10e52b660;
  unaff_x19[0xf6] = 0;
  unaff_x19[0xf5] = 0;
  unaff_x19[0xf4] = 0;
  unaff_x19[0xf7] = &UNK_10e52b660;
  unaff_x19[0xfa] = 0;
  unaff_x19[0xf9] = 0;
  unaff_x19[0xf8] = 0;
  unaff_x19[0xfb] = &UNK_10e52b660;
  unaff_x19[0xfe] = 0;
  unaff_x19[0xfd] = 0;
  unaff_x19[0xfc] = 0;
  unaff_x19[0xff] = &UNK_10e52b660;
  unaff_x19[0x102] = 0;
  unaff_x19[0x101] = 0;
  unaff_x19[0x100] = 0;
  unaff_x19[0x103] = &UNK_10e52b660;
  unaff_x19[0x106] = 0;
  unaff_x19[0x105] = 0;
  unaff_x19[0x104] = 0;
  unaff_x19[0x107] = &UNK_10e52b660;
  unaff_x19[0x10a] = 0;
  unaff_x19[0x109] = 0;
  unaff_x19[0x108] = 0;
  unaff_x19[0x10b] = &UNK_10e52b660;
  unaff_x19[0x10e] = 0;
  unaff_x19[0x10d] = 0;
  unaff_x19[0x10c] = 0;
  unaff_x19[0x10f] = &UNK_10e52b660;
  unaff_x19[0x112] = 0;
  unaff_x19[0x111] = 0;
  unaff_x19[0x110] = 0;
  unaff_x19[0x113] = &UNK_10e52b660;
  unaff_x19[0x116] = 0;
  unaff_x19[0x115] = 0;
  unaff_x19[0x114] = 0;
  unaff_x19[0x117] = &UNK_10e52b660;
  unaff_x19[0x11a] = 0;
  unaff_x19[0x119] = 0;
  unaff_x19[0x118] = 0;
  unaff_x19[0x11b] = &UNK_10e52b660;
  unaff_x19[0x11e] = 0;
  unaff_x19[0x11d] = 0;
  unaff_x19[0x11c] = 0;
  unaff_x19[0x11f] = &UNK_10e52b660;
  unaff_x19[0x122] = 0;
  unaff_x19[0x121] = 0;
  unaff_x19[0x120] = 0;
  unaff_x19[0x123] = &UNK_10e52b660;
  unaff_x19[0x126] = 0;
  unaff_x19[0x125] = 0;
  unaff_x19[0x124] = 0;
  unaff_x19[0x127] = &UNK_10e52b660;
  unaff_x19[0x12a] = 0;
  unaff_x19[0x129] = 0;
  unaff_x19[0x128] = 0;
  unaff_x19[299] = &UNK_10e52b660;
  unaff_x19[0x12e] = 0;
  unaff_x19[0x12d] = 0;
  unaff_x19[300] = 0;
  unaff_x19[0x12f] = &UNK_10e52b660;
  unaff_x19[0x132] = 0;
  unaff_x19[0x131] = 0;
  unaff_x19[0x130] = 0;
  unaff_x19[0x133] = &UNK_10e52b660;
  unaff_x19[0x136] = 0;
  unaff_x19[0x135] = 0;
  unaff_x19[0x134] = 0;
  unaff_x19[0x137] = &UNK_10e52b660;
  unaff_x19[0x13a] = 0;
  unaff_x19[0x139] = 0;
  unaff_x19[0x138] = 0;
  unaff_x19[0x13b] = &UNK_10e52b660;
  unaff_x19[0x13e] = 0;
  unaff_x19[0x13d] = 0;
  unaff_x19[0x13c] = 0;
  unaff_x19[0x13f] = &UNK_10e52b660;
  unaff_x19[0x142] = 0;
  unaff_x19[0x141] = 0;
  unaff_x19[0x140] = 0;
  unaff_x19[0x143] = &UNK_10e52b660;
  unaff_x19[0x14a] = 0;
  unaff_x19[0x149] = 0;
  unaff_x19[0x148] = 0;
  unaff_x19[0x147] = 0;
  unaff_x19[0x146] = 0;
  unaff_x19[0x145] = 0;
  unaff_x19[0x144] = 0;
  unaff_x19[0x152] = 0;
  unaff_x19[0x151] = 0;
  unaff_x19[0x154] = 0;
  unaff_x19[0x153] = 0;
  unaff_x19[0x15e] = 0;
  unaff_x19[0x15d] = 0;
  unaff_x19[0x160] = 0;
  unaff_x19[0x15f] = 0;
  unaff_x19[0x15c] = 0;
  unaff_x19[0x15b] = 0;
  unaff_x19[0x170] = 0;
  unaff_x19[0x16f] = 0;
  unaff_x19[0x172] = 0;
  unaff_x19[0x171] = 0;
  unaff_x19[0x16c] = 0;
  unaff_x19[0x16b] = 0;
  unaff_x19[0x16e] = 0;
  unaff_x19[0x16d] = 0;
  unaff_x19[0x168] = 0;
  unaff_x19[0x167] = 0;
  unaff_x19[0x16a] = 0;
  unaff_x19[0x169] = 0;
  unaff_x19[0x164] = 0;
  unaff_x19[0x163] = 0;
  unaff_x19[0x166] = 0;
  unaff_x19[0x165] = 0;
  unaff_x19[0x17a] = 0;
  unaff_x19[0x179] = 0;
  unaff_x19[0x17c] = 0;
  unaff_x19[0x17b] = 0;
  *(undefined4 *)(unaff_x19 + 0x14b) = 0x3f800000;
  unaff_x19[0x14f] = 0;
  unaff_x19[0x14e] = 0;
  unaff_x19[0x14d] = 0;
  unaff_x19[0x14c] = 0;
  *(undefined4 *)(unaff_x19 + 0x150) = 0x3f800000;
  *(undefined4 *)(unaff_x19 + 0x155) = 0x3f800000;
  unaff_x19[0x159] = 0;
  unaff_x19[0x158] = 0;
  unaff_x19[0x157] = 0;
  unaff_x19[0x156] = 0;
  *(undefined4 *)(unaff_x19 + 0x15a) = 0x3f800000;
  unaff_x19[0x161] = 0;
  *(undefined4 *)(unaff_x19 + 0x162) = 0x3f800000;
  *(undefined4 *)(unaff_x19 + 0x173) = 0x3f800000;
  unaff_x19[0x177] = 0;
  unaff_x19[0x176] = 0;
  unaff_x19[0x175] = 0;
  unaff_x19[0x174] = 0;
  *(undefined4 *)(unaff_x19 + 0x178) = 0x3f800000;
  *(undefined4 *)(unaff_x19 + 0x17d) = 0x3f800000;
  unaff_x19[0x182] = 0;
  unaff_x19[0x181] = 0;
  unaff_x19[0x180] = 0;
  unaff_x19[0x17f] = 0;
  unaff_x19[0x17e] = 0;
  *(undefined4 *)(unaff_x19 + 0x183) = 0x3f800000;
  unaff_x19[0x184] = 0;
  *(undefined4 *)(unaff_x19 + 0x185) = 0;
  unaff_x19[0x18d] = 0;
  unaff_x19[0x18c] = 0;
  unaff_x19[0x18b] = 0;
  unaff_x19[0x18a] = 0;
  unaff_x19[0x189] = 0;
  unaff_x19[0x188] = 0;
  unaff_x19[0x187] = 0;
  unaff_x19[0x186] = 0;
  *(undefined4 *)(unaff_x19 + 0x18e) = 0x3f800000;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar3 + 0xc80) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar3 + 0xc88) = 0;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x160);
  lVar3 = 0;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar3 + 0xde0) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar3 + 0xde8) = 0;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x160);
  lVar3 = 0;
  unaff_x19[0x1eb] = 0;
  unaff_x19[0x1ea] = 0;
  unaff_x19[0x1e9] = 0;
  unaff_x19[0x1e8] = 0;
  *(undefined4 *)(unaff_x19 + 0x1ec) = 0x3f800000;
  unaff_x19[0x1ee] = 0;
  unaff_x19[0x1ed] = 0;
  unaff_x19[0x1f0] = 0;
  unaff_x19[0x1ef] = 0;
  *(undefined4 *)(unaff_x19 + 0x1f1) = 0x3f800000;
  do {
    *(undefined1 *)((long)unaff_x19 + lVar3 + 0xf90) = 0;
    *(undefined1 *)((long)unaff_x19 + lVar3 + 0xf98) = 0;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x2c0);
  unaff_x19[0x24a] = 0;
  unaff_x19[0x24b] = param_3[7];
  return;
}



/* Entry: 1074a0808; end: 1074a0c7f;  */

void FUN_1074a0808(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_848 [56];
  undefined1 auStack_810 [88];
  undefined1 auStack_7b8 [56];
  undefined1 auStack_780 [88];
  undefined1 auStack_728 [56];
  undefined1 auStack_6f0 [88];
  undefined1 auStack_698 [56];
  undefined1 auStack_660 [88];
  undefined1 auStack_608 [64];
  undefined1 auStack_5c8 [96];
  undefined1 auStack_568 [56];
  undefined1 auStack_530 [88];
  undefined1 auStack_4d8 [64];
  undefined1 auStack_498 [96];
  undefined1 auStack_438 [56];
  undefined1 auStack_400 [88];
  undefined1 auStack_3a8 [64];
  undefined1 auStack_368 [96];
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [88];
  undefined1 auStack_278 [64];
  undefined1 auStack_238 [96];
  undefined1 auStack_1d8 [56];
  undefined1 auStack_1a0 [88];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [112];
  undefined1 auStack_d0 [152];
  undefined8 uStack_38;
  
  func_0x0001074b5a14();
  func_0x0001074b56e8();
  uStack_38 = extraout_x8;
  FUN_1073243b8(auStack_140,param_2 + 8);
  func_0x00010743b084(auStack_d0,auStack_148);
  func_0x00010727d614(auStack_1d8,unaff_x20 + 0xa0);
  func_0x00010743b0a8(auStack_1a0,auStack_1d8);
  FUN_1074383dc(auStack_278,unaff_x20 + 0x100);
  func_0x00010743b0d0(auStack_238,auStack_278);
  func_0x00010727d614(auStack_308,unaff_x20 + 0x168);
  func_0x00010743b0a8(auStack_2d0,auStack_308);
  FUN_1074383dc(auStack_3a8,unaff_x20 + 0x1c8);
  func_0x00010743b0d0(auStack_368,auStack_3a8);
  func_0x00010727d614(auStack_438,unaff_x20 + 0x230);
  func_0x00010743b0a8(auStack_400,auStack_438);
  FUN_1074383dc(auStack_4d8,unaff_x20 + 0x290);
  func_0x00010743b0d0(auStack_498,auStack_4d8);
  func_0x00010727d614(auStack_568,unaff_x20 + 0x2f8);
  func_0x00010743b0a8(auStack_530,auStack_568);
  FUN_1074383dc(auStack_608,unaff_x20 + 0x358);
  func_0x00010743b0d0(auStack_5c8,auStack_608);
  func_0x00010727d614(auStack_698,unaff_x20 + 0x3c0);
  func_0x00010743b0a8(auStack_660,auStack_698);
  func_0x00010727d614(auStack_728,unaff_x20 + 0x420);
  func_0x00010743b0a8(auStack_6f0,auStack_728);
  func_0x00010727d614(auStack_7b8,unaff_x20 + 0x480);
  func_0x00010743b0a8(auStack_780,auStack_7b8);
  func_0x00010727d614(auStack_848,unaff_x20 + 0x4e0);
  func_0x00010743b0a8(auStack_810,auStack_848);
  func_0x000107432e2c();
  func_0x000107432f04(unaff_x19 + 0x98,auStack_1a0);
  func_0x000107432fcc(unaff_x19 + 0xf0,auStack_238);
  func_0x000107432f04(unaff_x19 + 0x150,auStack_2d0);
  func_0x000107432fcc(unaff_x19 + 0x1a8,auStack_368);
  func_0x000107432f04(unaff_x19 + 0x208,auStack_400);
  func_0x000107432fcc(unaff_x19 + 0x260,auStack_498);
  func_0x000107432f04(unaff_x19 + 0x2c0,auStack_530);
  func_0x000107432fcc(unaff_x19 + 0x318,auStack_5c8);
  func_0x000107432f04(unaff_x19 + 0x378,auStack_660);
  func_0x000107432f04(unaff_x19 + 0x3d0,auStack_6f0);
  func_0x000107432f04(unaff_x19 + 0x428,auStack_780);
  func_0x000107432f04(unaff_x19 + 0x480,auStack_810);
  func_0x000107410c2c(auStack_810);
  func_0x000107266a30(auStack_848);
  func_0x000107410c2c(auStack_780);
  func_0x000107266a30(auStack_7b8);
  func_0x000107410c2c(auStack_6f0);
  func_0x000107266a30(auStack_728);
  func_0x000107410c2c(auStack_660);
  func_0x000107266a30(auStack_698);
  FUN_107433a58(auStack_5c8);
  FUN_1073e64d8(auStack_608);
  func_0x000107410c2c(auStack_530);
  func_0x000107266a30(auStack_568);
  FUN_107433a58(auStack_498);
  FUN_1073e64d8(auStack_4d8);
  func_0x000107410c2c(auStack_400);
  func_0x000107266a30(auStack_438);
  FUN_107433a58(auStack_368);
  FUN_1073e64d8(auStack_3a8);
  func_0x000107410c2c(auStack_2d0);
  func_0x000107266a30(auStack_308);
  FUN_107433a58(auStack_238);
  FUN_1073e64d8(auStack_278);
  func_0x000107410c2c(auStack_1a0);
  func_0x000107266a30(auStack_1d8);
  FUN_1074338c4(auStack_d0);
  FUN_10732442c(auStack_140);
  func_0x0001074b5698(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074b5be0();
  func_0x000107266a30();
  func_0x000107410c2c(auStack_780);
  func_0x000107266a30(auStack_7b8);
  func_0x000107410c2c(auStack_6f0);
  func_0x000107266a30(auStack_728);
  do {
    func_0x000107410c2c(auStack_660);
    func_0x000107266a30(auStack_698);
    FUN_107433a58(auStack_5c8);
    FUN_1073e64d8(auStack_608);
    func_0x000107410c2c(auStack_530);
    func_0x000107266a30(auStack_568);
    FUN_107433a58(auStack_498);
    FUN_1073e64d8(auStack_4d8);
    func_0x000107410c2c(auStack_400);
    func_0x000107266a30(auStack_438);
    FUN_107433a58(auStack_368);
    FUN_1073e64d8(auStack_3a8);
    func_0x000107410c2c(auStack_2d0);
    func_0x000107266a30(auStack_308);
    FUN_107433a58(auStack_238);
    FUN_1073e64d8(auStack_278);
    func_0x000107410c2c(auStack_1a0);
    func_0x000107266a30(auStack_1d8);
    FUN_1074338c4(auStack_d0);
    FUN_10732442c(auStack_140);
    func_0x0001074b58b8();
  } while( true );
}



/* Entry: 1074a0c80; end: 1074a0d07;  */

undefined8 * FUN_1074a0c80(undefined8 *param_1)

{
  FUN_1074b4b28(param_1 + 0x1ed);
  FUN_1074b4a9c(param_1 + 0x1e8);
  func_0x00010726ea70(param_1 + 0x18a);
  FUN_1074b4a10(param_1 + 0x17f);
  FUN_1074b4988(param_1 + 0x179);
  FUN_1074b4900(param_1 + 0x174);
  FUN_1074b4874(param_1 + 0x16f);
  FUN_10748ab6c(param_1 + 0x16c);
  func_0x0001074ae408(param_1 + 0x169);
  func_0x0001074ae4d0(param_1 + 0x166);
  func_0x0001074ae59c(param_1 + 0x147);
  FUN_1074ae7c0(param_1 + 0xab);
  func_0x0001074ae840(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074a0d08; end: 1074a0d0b;  */

undefined8 * FUN_1074a0d08(undefined8 *param_1)

{
  FUN_1074b4b28(param_1 + 0x1ed);
  FUN_1074b4a9c(param_1 + 0x1e8);
  func_0x00010726ea70(param_1 + 0x18a);
  FUN_1074b4a10(param_1 + 0x17f);
  FUN_1074b4988(param_1 + 0x179);
  FUN_1074b4900(param_1 + 0x174);
  FUN_1074b4874(param_1 + 0x16f);
  FUN_10748ab6c(param_1 + 0x16c);
  func_0x0001074ae408(param_1 + 0x169);
  func_0x0001074ae4d0(param_1 + 0x166);
  func_0x0001074ae59c(param_1 + 0x147);
  FUN_1074ae7c0(param_1 + 0xab);
  func_0x0001074ae840(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074a0d0c; end: 1074a0d1f;  */

void FUN_1074a0d0c(void)

{
  FUN_1074a0c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074a0d20; end: 1074a0d37;  */

long FUN_1074a0d20(long param_1)

{
  return (*(long *)(param_1 + 0xb50) - *(long *)(param_1 + 0xb48)) / 0x60;
}



/* Entry: 1074a0d38; end: 1074a113b;  */

void FUN_1074a0d38(long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  int extraout_w10;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_3a0 [24];
  undefined1 uStack_388;
  undefined4 *puStack_380;
  long lStack_378;
  ulong uStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined4 uStack_2e8;
  undefined1 auStack_2e0 [56];
  undefined1 auStack_2a8 [56];
  undefined1 auStack_270 [288];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_10;
  
  func_0x0001074b6e18();
  lVar10 = param_1;
  func_0x0001074b56e8();
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_320 = 0x3f800000;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  lVar11 = *(long *)(lVar10 + 0xb50);
  uStack_10 = extraout_x8_00;
  for (lVar10 = *(long *)(lVar10 + 0xb48); lVar10 != lVar11; lVar10 = lVar10 + 0x60) {
    lVar14 = *(long *)(lVar10 + 0x30);
    puVar1 = (undefined4 *)(lVar14 + 0x60);
    func_0x000107260494(&uStack_340,puVar1);
    lVar15 = *(long *)(param_1 + 0x18);
    lVar12 = *(long *)(lVar10 + 0x50);
    func_0x000107296b84(&uStack_300,1);
    puVar6 = puStack_2f0;
    lVar9 = *(long *)(lVar12 + 0x178);
    uStack_308 = *(undefined8 *)(lVar12 + 0x178);
    puStack_310 = *(undefined4 **)(lVar12 + 0x170);
    puStack_2f0[1] = 0;
    puStack_2f0[2] = 0;
    *puStack_2f0 = &PTR_DAT_110998a58;
    if (lVar9 != 0) {
      do {
        func_0x0001074b56c0();
      } while (extraout_w10 != 0);
    }
    func_0x00010729807c(&uStack_150,lVar14 + 0xd8);
    puStack_380 = (undefined4 *)((ulong)puStack_380 & 0xffffffffffffff00);
    uStack_370 = uStack_370 & 0xffffffffffffff00;
    FUN_107374ae4(puVar6 + 3,&puStack_310,lVar15 + 0x40,lVar14 + 0xa0,&uStack_150,&puStack_380);
    func_0x00010724b3d8(&uStack_150);
    func_0x000107267e44(&puStack_310);
    puStack_360 = puStack_2f0;
    puStack_2f0 = (undefined8 *)0x0;
    puStack_368 = puStack_360 + 3;
    func_0x000107297fb8(&uStack_300);
    lVar9 = *(long *)(lVar10 + 0x50);
    sVar4 = *(short *)(lVar9 + 0x58);
    sVar5 = *(short *)(lVar9 + 0x5a);
    uVar13 = *(undefined8 *)(lVar9 + 0xd8);
    func_0x000104c2fe00(auStack_2a8,*(long *)(param_1 + 0x18) + 0x78);
    func_0x000104c2fe00(auStack_2e0,lVar14 + 0xd8);
    FUN_1074070d4(auStack_270,uVar13,auStack_2a8,auStack_2e0,0,*(long *)(lVar10 + 0x50) + 0x180,
                  *(long *)(lVar10 + 0x50) + 400,&puStack_368);
    func_0x0001077f4740((float)(int)sVar4,(float)(int)sVar5,&uStack_150,auStack_270);
    func_0x0001072a6b0c(auStack_270);
    func_0x000104c2f714(auStack_2e0);
    func_0x000104c2f714(auStack_2a8);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2e8 = 0;
    puStack_2f0 = (undefined8 *)0x0;
    uVar8 = *(ulong *)(param_3 + 0x10);
    func_0x0001077f609c(uVar8,&uStack_150,lVar10,&uStack_300);
    if ((uVar8 >> 0x20 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_3 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x50);
      uVar2 = *(undefined4 *)(lVar9 + 0xd8);
      uVar3 = *puVar1;
      if (*(char *)(lVar9 + 0x50) == '\x01') {
        func_0x000107261974(lVar9 + 0x18);
        func_0x00010724ef84(&puStack_380);
      }
      else {
        func_0x00010002b838(&puStack_380,"");
      }
      auStack_3a0[0] = 0;
      uStack_388 = 0;
      func_0x0001077f6540(uVar13,&uStack_150,&uStack_300,0,uVar2,uVar3,0,&puStack_380,auStack_3a0);
      func_0x0001072a6b60(auStack_3a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_380);
    }
    lStack_378 = lVar10 + 0x40;
    uStack_370 = lVar10 + 0x20;
    puStack_380 = puVar1;
    puStack_310 = puVar1;
    FUN_1074a113c(*(undefined8 *)(param_3 + 0x18),&UNK_10dd5b8f9,&puStack_310,&puStack_380);
    FUN_1074ae8c0(&uStack_300);
    FUN_1073e7974(&uStack_150);
    func_0x0001072792b8(&puStack_368);
  }
  lVar10 = *(long *)(param_1 + 0xb60);
  *extraout_x8 = (int)uStack_328;
  *(undefined8 *)(extraout_x8 + 2) = 0;
  *(undefined8 *)(extraout_x8 + 6) = 0;
  *(undefined8 *)(extraout_x8 + 4) = 0;
  *(long *)(extraout_x8 + 10) = lVar10;
  uVar13 = *(undefined8 *)(param_1 + 0xb70);
  lVar11 = *(long *)(param_1 + 0xb68);
  *(undefined8 *)(param_1 + 0xb68) = 0;
  *(undefined8 *)(param_1 + 0xb60) = 0;
  *(undefined8 *)(param_1 + 0xb70) = 0;
  *(undefined8 *)(extraout_x8 + 0xe) = uVar13;
  *(long *)(extraout_x8 + 0xc) = lVar11;
  uVar7 = lVar10 == lVar11;
  *(bool *)(extraout_x8 + 8) = !(bool)uVar7;
  uStack_150 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  *(undefined1 *)(extraout_x8 + 0x10) = 0;
  uVar13 = *(undefined8 *)(param_1 + 0xc40);
  *(undefined8 *)(extraout_x8 + 0x18) = *(undefined8 *)(param_1 + 0xc48);
  *(undefined8 *)(extraout_x8 + 0x16) = uVar13;
  uVar13 = *(undefined8 *)(param_1 + 0xc30);
  *(undefined8 *)(extraout_x8 + 0x14) = *(undefined8 *)(param_1 + 0xc38);
  *(undefined8 *)(extraout_x8 + 0x12) = uVar13;
  func_0x000107270b5c(extraout_x8 + 0x1a,param_1 + 0xc50);
  extraout_x8[0x24] = *(undefined4 *)(param_1 + 0xc28);
  FUN_10748ab6c(&uStack_150);
  FUN_1074ae918(&uStack_358);
  func_0x00010726f2e4(&uStack_340);
  func_0x0001074b5698(uStack_10);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    FUN_10748ab6c(extraout_x8 + 10);
    FUN_1074ae918(extraout_x8 + 2);
    FUN_10748ab6c(&uStack_150);
    FUN_1074ae918(&uStack_358);
    func_0x00010726f2e4(&uStack_340);
    func_0x0001074b58b8();
    FUN_1074b4bb4();
    return;
  }
  return;
}



/* Entry: 1074a113c; end: 1074a1153;  */

void FUN_1074a113c(void)

{
  FUN_1074b4bb4();
  return;
}



/* Entry: 1074a1154; end: 1074a1207;  */

void FUN_1074a1154(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_2 + 0xb60);
  *(long *)(param_1 + 8) = lVar1;
  uVar3 = *(undefined8 *)(param_2 + 0xb70);
  lVar2 = *(long *)(param_2 + 0xb68);
  *(undefined8 *)(param_2 + 0xb68) = 0;
  *(undefined8 *)(param_2 + 0xb60) = 0;
  *(undefined8 *)(param_2 + 0xb70) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(long *)(param_1 + 0x10) = lVar2;
  *(bool *)param_1 = lVar1 != lVar2;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0xc30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0xc38);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xc40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0xc48);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  func_0x000107270b5c(param_1 + 0x48,param_2 + 0xc50);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0xc28);
  FUN_10748ab6c(&uStack_48);
  return;
}



/* Entry: 1074a1208; end: 1074a132f;  */

void FUN_1074a1208(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  long lStack_e88;
  undefined4 uStack_e80;
  long lStack_e50;
  undefined4 uStack_e48;
  long lStack_e18;
  undefined4 uStack_e10;
  long alStack_de0 [2];
  undefined4 uStack_dd0;
  long lStack_da8;
  ulong uStack_da0;
  undefined4 uStack_d98;
  undefined1 auStack_d68 [56];
  long lStack_d30;
  undefined8 uStack_d28;
  undefined4 uStack_d20;
  undefined1 auStack_cf0 [56];
  undefined1 auStack_cb8 [56];
  undefined1 auStack_c80 [56];
  long lStack_c48;
  undefined4 uStack_c40;
  undefined8 uStack_c38;
  undefined8 auStack_c30 [14];
  undefined1 auStack_bc0 [56];
  undefined1 auStack_b88 [64];
  undefined1 auStack_b48 [56];
  undefined1 auStack_b10 [64];
  undefined1 auStack_ad0 [56];
  undefined1 auStack_a98 [64];
  undefined1 auStack_a58 [56];
  undefined1 auStack_a20 [64];
  undefined1 auStack_9e0 [56];
  undefined1 auStack_9a8 [56];
  undefined1 auStack_970 [56];
  undefined1 auStack_938 [56];
  long lStack_900;
  undefined8 uStack_8f8;
  undefined4 uStack_8f0;
  long lStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_880;
  undefined8 auStack_878 [102];
  undefined8 uStack_548;
  long alStack_510 [19];
  undefined1 auStack_478 [88];
  undefined1 auStack_420 [96];
  undefined1 auStack_3c0 [88];
  undefined1 auStack_368 [96];
  undefined1 auStack_308 [88];
  undefined1 auStack_2b0 [96];
  undefined1 auStack_250 [88];
  undefined1 auStack_1f8 [96];
  undefined1 auStack_198 [88];
  undefined1 auStack_140 [88];
  undefined1 auStack_e8 [88];
  undefined1 auStack_90 [88];
  undefined8 uStack_38;
  
  plVar2 = alStack_510;
  lVar1 = param_1;
  func_0x0001074b56e8();
  uStack_38 = extraout_x8;
  FUN_1074a0808(alStack_510,*(long *)(lVar1 + 0x18) + 0x7f0);
  func_0x000107433474(param_1 + 0x60,alStack_510);
  func_0x0001074334a8(param_1 + 0xf8,auStack_478);
  func_0x0001074334d0(param_1 + 0x150,auStack_420);
  func_0x0001074334a8(param_1 + 0x1b0,auStack_3c0);
  func_0x0001074334d0(param_1 + 0x208,auStack_368);
  func_0x0001074334a8(param_1 + 0x268,auStack_308);
  func_0x0001074334d0(param_1 + 0x2c0,auStack_2b0);
  func_0x0001074334a8(param_1 + 800,auStack_250);
  func_0x0001074334d0(param_1 + 0x378,auStack_1f8);
  func_0x0001074334a8(param_1 + 0x3d8,auStack_198);
  func_0x0001074334a8(param_1 + 0x430,auStack_140);
  func_0x0001074334a8(param_1 + 0x488,auStack_e8);
  func_0x0001074334a8(param_1 + 0x4e0,auStack_90);
  func_0x0001074ae840();
  func_0x0001074b5698(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = (undefined1 *)plVar2;
  func_0x0001074b58b8();
  func_0x0001074b5a14();
  func_0x0001074b56e8();
  uStack_548 = extraout_x8_00;
  FUN_1073e5f98(&lStack_eb0,puVar3 + 0x18);
  func_0x0001074b0ab8(&lStack_900);
  lStack_8c0 = alStack_510[0];
  func_0x000104c318bc(&uStack_8b8,&lStack_900);
  FUN_107438b40(&uStack_880,(undefined1 *)((long)plVar2 + 0x60),&lStack_8c0,
                *(undefined8 *)(alStack_510[0] + 0x10));
  func_0x000104c2f714(&uStack_8b8);
  func_0x000104c2f714(&lStack_900);
  lStack_8c0 = alStack_510[0];
  uStack_8b8 = (ulong)uStack_8b8._4_4_ << 0x20;
  FUN_107438e4c(auStack_c80,(undefined1 *)((long)plVar2 + 0xf8),&lStack_8c0,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_900 = alStack_510[0];
  uStack_8f8 = NEON_fmov(0x3f800000,4);
  uStack_8f0 = 0x3f800000;
  FUN_107438ffc(&lStack_8c0,(undefined1 *)((long)plVar2 + 0x150),&lStack_900,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_900 = alStack_510[0];
  uStack_8f8 = CONCAT44(uStack_8f8._4_4_,0x3f800000);
  FUN_107438e4c(auStack_cb8,(undefined1 *)((long)plVar2 + 0x1b0),&lStack_900,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_d30 = alStack_510[0];
  uStack_d28 = 0;
  uStack_d20 = 0;
  FUN_107438ffc(&lStack_900,(undefined1 *)((long)plVar2 + 0x208),&lStack_d30,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_d30 = alStack_510[0];
  uStack_d28 = CONCAT44(uStack_d28._4_4_,0x3f800000);
  FUN_107438e4c(auStack_cf0,(undefined1 *)((long)plVar2 + 0x268),&lStack_d30,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_da8 = alStack_510[0];
  uStack_da0 = 0;
  uStack_d98 = 0;
  FUN_107438ffc(&lStack_d30,(undefined1 *)((long)plVar2 + 0x2c0),&lStack_da8,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_da8 = alStack_510[0];
  uStack_da0 = uStack_da0 & 0xffffffff00000000;
  FUN_107438e4c(auStack_d68,(undefined1 *)((long)plVar2 + 800),&lStack_da8,
                *(undefined8 *)(alStack_510[0] + 0x10));
  alStack_de0[0] = alStack_510[0];
  alStack_de0[1] = 0;
  uStack_dd0 = 0;
  FUN_107438ffc(&lStack_da8,(undefined1 *)((long)plVar2 + 0x378),alStack_de0,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_e18 = alStack_510[0];
  uStack_e10 = 0x3f800000;
  FUN_107438e4c(alStack_de0,(undefined1 *)((long)plVar2 + 0x3d8),&lStack_e18,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_e50 = alStack_510[0];
  uStack_e48 = 0;
  FUN_107438e4c(&lStack_e18,(undefined1 *)((long)plVar2 + 0x430),&lStack_e50,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_e88 = alStack_510[0];
  uStack_e80 = 0;
  FUN_107438e4c(&lStack_e50,(undefined1 *)((long)plVar2 + 0x488),&lStack_e88,
                *(undefined8 *)(alStack_510[0] + 0x10));
  lStack_c48 = alStack_510[0];
  uStack_c40 = 0;
  FUN_107438e4c(&lStack_e88,(undefined1 *)((long)plVar2 + 0x4e0),&lStack_c48,
                *(undefined8 *)(alStack_510[0] + 0x10));
  FUN_1073ddccc(auStack_c30,auStack_878);
  FUN_1073dd9b0(auStack_bc0,auStack_c80);
  FUN_1074331ac(auStack_b88,&lStack_8c0);
  FUN_1073dd9b0(auStack_b48,auStack_cb8);
  FUN_1074331ac(auStack_b10,&lStack_900);
  FUN_1073dd9b0(auStack_ad0,auStack_cf0);
  FUN_1074331ac(auStack_a98,&lStack_d30);
  FUN_1073dd9b0(auStack_a58,auStack_d68);
  FUN_1074331ac(auStack_a20,&lStack_da8);
  FUN_1073dd9b0(auStack_9e0,alStack_de0);
  FUN_1073dd9b0(auStack_9a8,&lStack_e18);
  FUN_1073dd9b0(auStack_970,&lStack_e50);
  FUN_1073dd9b0(auStack_938,&lStack_e88);
  FUN_1073dd4c4(&lStack_e88);
  FUN_1073dd4c4(&lStack_e50);
  FUN_1073dd4c4(&lStack_e18);
  FUN_1073dd4c4(alStack_de0);
  FUN_107433214(&lStack_da8);
  FUN_1073dd4c4(auStack_d68);
  FUN_107433214(&lStack_d30);
  FUN_1073dd4c4(auStack_cf0);
  FUN_107433214(&lStack_900);
  FUN_1073dd4c4(auStack_cb8);
  FUN_107433214(&lStack_8c0);
  FUN_1073dd4c4(auStack_c80);
  FUN_1073dd470(auStack_878);
  lVar4 = 0x370;
  __Znwm();
  lVar1 = lVar4;
  func_0x0001074b6dc4();
  uStack_8b8 = uStack_ea8;
  lStack_8c0 = lStack_eb0;
  lStack_eb0 = 0;
  uStack_ea8 = 0;
  func_0x0001074b515c(&uStack_880,&uStack_c38);
  func_0x000107799a70(lVar1 + 0x18,&lStack_8c0,&uStack_880);
  func_0x0001074ae9e8(&uStack_880);
  FUN_1073e5fe0(&lStack_8c0);
  auStack_878[0] = 0;
  uStack_880 = 0;
  FUN_1074ae3e0(&uStack_880);
  func_0x0001074ae9e8(&uStack_c38);
  FUN_1073e5fe0(&lStack_eb0);
  *(undefined1 *)((long)plVar2 + 0x38) = 0x3e;
  *(undefined1 *)(lVar4 + 0x30) = 0x3e;
  uStack_e98 = 0;
  uStack_e90 = 0;
  auStack_c30[0] = 0;
  uStack_c38 = 0;
  auStack_878[0] = *(undefined8 *)((long)plVar2 + 0x10);
  uStack_880 = *(undefined8 *)((long)plVar2 + 8);
  *(long *)((long)plVar2 + 8) = lVar1 + 0x18;
  *(long *)((long)plVar2 + 0x10) = lVar4;
  FUN_1073ad37c(&uStack_880);
  FUN_1073f17a8(&uStack_c38);
  FUN_1074ae3e0(&uStack_e98);
  func_0x0001074b5698(uStack_548);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074ae9e8(&uStack_c38);
  do {
    FUN_1073e5fe0(&lStack_eb0);
    func_0x0001074b58b8();
    FUN_107433214(&lStack_d30);
    FUN_1073dd4c4(auStack_cf0);
    FUN_107433214(&lStack_900);
    FUN_1073dd4c4(auStack_cb8);
    FUN_107433214(&lStack_8c0);
    FUN_1073dd4c4(auStack_c80);
    FUN_1073dd470(auStack_878);
  } while( true );
}



/* Entry: 1074a1330; end: 1074a17c7;  */

void FUN_1074a1330(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  long lStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_988;
  undefined8 uStack_980;
  long lStack_978;
  undefined4 uStack_970;
  long lStack_940;
  undefined4 uStack_938;
  long lStack_908;
  undefined4 uStack_900;
  long alStack_8d0 [2];
  undefined4 uStack_8c0;
  long lStack_898;
  ulong uStack_890;
  undefined4 uStack_888;
  undefined1 auStack_858 [56];
  long lStack_820;
  undefined8 uStack_818;
  undefined4 uStack_810;
  undefined1 auStack_7e0 [56];
  undefined1 auStack_7a8 [56];
  undefined1 auStack_770 [56];
  long lStack_738;
  undefined4 uStack_730;
  undefined8 uStack_728;
  undefined8 auStack_720 [14];
  undefined1 auStack_6b0 [56];
  undefined1 auStack_678 [64];
  undefined1 auStack_638 [56];
  undefined1 auStack_600 [64];
  undefined1 auStack_5c0 [56];
  undefined1 auStack_588 [64];
  undefined1 auStack_548 [56];
  undefined1 auStack_510 [64];
  undefined1 auStack_4d0 [56];
  undefined1 auStack_498 [56];
  undefined1 auStack_460 [56];
  undefined1 auStack_428 [56];
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_370;
  undefined8 auStack_368 [102];
  undefined8 uStack_38;
  
  func_0x0001074b5a14();
  func_0x0001074b56e8();
  uStack_38 = extraout_x8;
  FUN_1073e5f98(&lStack_9a0,param_1 + 0x18);
  lVar2 = *unaff_x20;
  func_0x0001074b0ab8(&lStack_3f0);
  lStack_3b0 = lVar2;
  func_0x000104c318bc(&uStack_3a8,&lStack_3f0);
  FUN_107438b40(&uStack_370,unaff_x19 + 0x60,&lStack_3b0,*(undefined8 *)(lVar2 + 0x10));
  func_0x000104c2f714(&uStack_3a8);
  func_0x000104c2f714(&lStack_3f0);
  uStack_3a8 = (ulong)uStack_3a8._4_4_ << 0x20;
  lStack_3b0 = lVar2;
  FUN_107438e4c(auStack_770,unaff_x19 + 0xf8,&lStack_3b0,*(undefined8 *)(lVar2 + 0x10));
  uStack_3e8 = NEON_fmov(0x3f800000,4);
  uStack_3e0 = 0x3f800000;
  lStack_3f0 = lVar2;
  FUN_107438ffc(&lStack_3b0,unaff_x19 + 0x150,&lStack_3f0,*(undefined8 *)(lVar2 + 0x10));
  uStack_3e8 = CONCAT44(uStack_3e8._4_4_,0x3f800000);
  lStack_3f0 = lVar2;
  FUN_107438e4c(auStack_7a8,unaff_x19 + 0x1b0,&lStack_3f0,*(undefined8 *)(lVar2 + 0x10));
  uStack_818 = 0;
  uStack_810 = 0;
  lStack_820 = lVar2;
  FUN_107438ffc(&lStack_3f0,unaff_x19 + 0x208,&lStack_820,*(undefined8 *)(lVar2 + 0x10));
  uStack_818 = CONCAT44(uStack_818._4_4_,0x3f800000);
  lStack_820 = lVar2;
  FUN_107438e4c(auStack_7e0,unaff_x19 + 0x268,&lStack_820,*(undefined8 *)(lVar2 + 0x10));
  uStack_890 = 0;
  uStack_888 = 0;
  lStack_898 = lVar2;
  FUN_107438ffc(&lStack_820,unaff_x19 + 0x2c0,&lStack_898,*(undefined8 *)(lVar2 + 0x10));
  uStack_890 = uStack_890 & 0xffffffff00000000;
  lStack_898 = lVar2;
  FUN_107438e4c(auStack_858,unaff_x19 + 800,&lStack_898,*(undefined8 *)(lVar2 + 0x10));
  alStack_8d0[1] = 0;
  uStack_8c0 = 0;
  alStack_8d0[0] = lVar2;
  FUN_107438ffc(&lStack_898,unaff_x19 + 0x378,alStack_8d0,*(undefined8 *)(lVar2 + 0x10));
  uStack_900 = 0x3f800000;
  lStack_908 = lVar2;
  FUN_107438e4c(alStack_8d0,unaff_x19 + 0x3d8,&lStack_908,*(undefined8 *)(lVar2 + 0x10));
  uStack_938 = 0;
  lStack_940 = lVar2;
  FUN_107438e4c(&lStack_908,unaff_x19 + 0x430,&lStack_940,*(undefined8 *)(lVar2 + 0x10));
  uStack_970 = 0;
  lStack_978 = lVar2;
  FUN_107438e4c(&lStack_940,unaff_x19 + 0x488,&lStack_978,*(undefined8 *)(lVar2 + 0x10));
  uStack_730 = 0;
  lStack_738 = lVar2;
  FUN_107438e4c(&lStack_978,unaff_x19 + 0x4e0,&lStack_738,*(undefined8 *)(lVar2 + 0x10));
  FUN_1073ddccc(auStack_720,auStack_368);
  FUN_1073dd9b0(auStack_6b0,auStack_770);
  FUN_1074331ac(auStack_678,&lStack_3b0);
  FUN_1073dd9b0(auStack_638,auStack_7a8);
  FUN_1074331ac(auStack_600,&lStack_3f0);
  FUN_1073dd9b0(auStack_5c0,auStack_7e0);
  FUN_1074331ac(auStack_588,&lStack_820);
  FUN_1073dd9b0(auStack_548,auStack_858);
  FUN_1074331ac(auStack_510,&lStack_898);
  FUN_1073dd9b0(auStack_4d0,alStack_8d0);
  FUN_1073dd9b0(auStack_498,&lStack_908);
  FUN_1073dd9b0(auStack_460,&lStack_940);
  FUN_1073dd9b0(auStack_428,&lStack_978);
  FUN_1073dd4c4(&lStack_978);
  FUN_1073dd4c4(&lStack_940);
  FUN_1073dd4c4(&lStack_908);
  FUN_1073dd4c4(alStack_8d0);
  FUN_107433214(&lStack_898);
  FUN_1073dd4c4(auStack_858);
  FUN_107433214(&lStack_820);
  FUN_1073dd4c4(auStack_7e0);
  FUN_107433214(&lStack_3f0);
  FUN_1073dd4c4(auStack_7a8);
  FUN_107433214(&lStack_3b0);
  FUN_1073dd4c4(auStack_770);
  FUN_1073dd470(auStack_368);
  lVar1 = 0x370;
  __Znwm();
  lVar2 = lVar1;
  func_0x0001074b6dc4();
  uStack_3a8 = uStack_998;
  lStack_3b0 = lStack_9a0;
  lStack_9a0 = 0;
  uStack_998 = 0;
  func_0x0001074b515c(&uStack_370,&uStack_728);
  func_0x000107799a70(lVar2 + 0x18,&lStack_3b0,&uStack_370);
  func_0x0001074ae9e8(&uStack_370);
  FUN_1073e5fe0(&lStack_3b0);
  auStack_368[0] = 0;
  uStack_370 = 0;
  FUN_1074ae3e0(&uStack_370);
  func_0x0001074ae9e8(&uStack_728);
  FUN_1073e5fe0(&lStack_9a0);
  *(undefined1 *)(unaff_x19 + 0x38) = 0x3e;
  *(undefined1 *)(lVar1 + 0x30) = 0x3e;
  uStack_988 = 0;
  uStack_980 = 0;
  auStack_720[0] = 0;
  uStack_728 = 0;
  auStack_368[0] = *(undefined8 *)(unaff_x19 + 0x10);
  uStack_370 = *(undefined8 *)(unaff_x19 + 8);
  *(long *)(unaff_x19 + 8) = lVar2 + 0x18;
  *(long *)(unaff_x19 + 0x10) = lVar1;
  FUN_1073ad37c(&uStack_370);
  FUN_1073f17a8(&uStack_728);
  FUN_1074ae3e0(&uStack_988);
  func_0x0001074b5698(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074ae9e8(&uStack_728);
  do {
    FUN_1073e5fe0(&lStack_9a0);
    func_0x0001074b58b8();
    FUN_107433214(&lStack_820);
    FUN_1073dd4c4(auStack_7e0);
    FUN_107433214(&lStack_3f0);
    FUN_1073dd4c4(auStack_7a8);
    FUN_107433214(&lStack_3b0);
    FUN_1073dd4c4(auStack_770);
    FUN_1073dd470(auStack_368);
  } while( true );
}



/* Entry: 1074a17c8; end: 1074a1847;  */

byte FUN_1074a17c8(long param_1)

{
  return (((((*(char *)(param_1 + 0x100) != '\0' || *(char *)(param_1 + 0x68) != '\0') ||
            (*(char *)(param_1 + 0x158) != '\0' || *(char *)(param_1 + 0x1b8) != '\0')) ||
           ((*(char *)(param_1 + 0x210) != '\0' || *(char *)(param_1 + 0x270) != '\0') ||
           *(char *)(param_1 + 0x2c8) != '\0')) ||
          (((*(char *)(param_1 + 0x328) != '\0' || *(char *)(param_1 + 0x380) != '\0') ||
           *(char *)(param_1 + 0x3e0) != '\0') || *(char *)(param_1 + 0x438) != '\0')) ||
         *(char *)(param_1 + 0x490) != '\0') | *(byte *)(param_1 + 0x4e8) & 1;
}



/* Entry: 1074a3ee4; end: 1074a3f0b;  */

void FUN_1074a3ee4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c();
  FUN_1074af4b8();
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1074a87f4; end: 1074a884f;  */

uint FUN_1074a87f4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 uStack_25;
  undefined4 uStack_24;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uStack_24 = 0xfff;
    lVar2 = param_1 + 0xac0;
    func_0x0001072b86c8(lVar2,&uStack_24);
    uStack_25 = 0;
    param_1 = param_1 + 0xab0;
    func_0x00010724e2c8(param_1,&uStack_25);
    uVar1 = 0;
    if ((int)param_1 != 0) {
      uVar1 = (uint)lVar2 >> 4 & 1;
    }
  }
  return uVar1;
}



/* Entry: 1074a8850; end: 1074a8bcf;  */

void FUN_1074a8850(long param_1,long param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong uVar5;
  ulong extraout_x9;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plStack_a8;
  undefined2 uStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  ushort uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  
  func_0x0001074b6c84();
  plVar12 = (long *)(param_1 + 0x10);
  plVar1 = (long *)(param_2 + 0x10);
  plVar14 = (long *)*plVar12;
  do {
    while( true ) {
      if (plVar14 == (long *)0x0) {
        return;
      }
      if ((param_3 == 0) || ((ulong)((plVar14[0x17] - plVar14[0x16]) / 0x5c) < 2)) break;
      plVar14 = (long *)*plVar14;
    }
    uVar5 = unaff_x21[1];
    uVar4 = plVar14[1];
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar4 = uVar6 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar11 = 0;
      if (uVar5 != 0) {
        uVar11 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar11 * uVar5;
    }
    plVar13 = (long *)*plVar14;
    lVar7 = *unaff_x21;
    plVar9 = *(long **)(lVar7 + uVar4 * 8);
    do {
      plVar8 = plVar9;
      plVar9 = (long *)*plVar8;
    } while ((long *)*plVar8 != plVar14);
    uVar3 = (long)plVar8 - (long)plVar12 < 0;
    plVar9 = plVar13;
    if (plVar8 == plVar12) {
LAB_1074a8938:
      if (plVar13 == (long *)0x0) {
LAB_1074a896c:
        *(undefined8 *)(lVar7 + uVar4 * 8) = 0;
        plVar9 = (long *)*plVar14;
        goto LAB_1074a8974;
      }
      uVar11 = plVar13[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar11 & uVar6;
      }
      else if (uVar5 <= uVar11) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar11 / uVar5;
        }
        uVar11 = uVar11 - uVar10 * uVar5;
      }
      uVar3 = (long)(uVar11 - uVar4) < 0;
      if (uVar11 != uVar4) goto LAB_1074a896c;
LAB_1074a8978:
      uVar11 = plVar9[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar11 & uVar6;
      }
      else if (uVar5 <= uVar11) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar11 / uVar5;
        }
        uVar11 = uVar11 - uVar6 * uVar5;
      }
      uVar3 = (long)(uVar11 - uVar4) < 0;
      if (uVar11 != uVar4) {
        *(long **)(lVar7 + uVar11 * 8) = plVar8;
        plVar9 = (long *)*plVar14;
      }
    }
    else {
      uVar11 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar11 & uVar6;
      }
      else if (uVar5 <= uVar11) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar11 / uVar5;
        }
        uVar11 = uVar11 - uVar10 * uVar5;
      }
      uVar3 = (long)(uVar11 - uVar4) < 0;
      if (uVar11 != uVar4) goto LAB_1074a8938;
LAB_1074a8974:
      if (plVar9 != (long *)0x0) goto LAB_1074a8978;
    }
    *plVar8 = (long)plVar9;
    *plVar14 = 0;
    unaff_x21[3] = unaff_x21[3] + -1;
    uStack_68 = 1;
    uStack_67 = 0;
    uStack_63 = 0;
    uStack_78 = 0;
    uStack_a0 = CONCAT11(1,(undefined1)uStack_a0);
    plStack_a8 = plVar14;
    plStack_70 = plVar12;
    FUN_1074b1794(&uStack_78);
    uVar5 = plVar14[2];
    plVar14[1] = uVar5;
    uVar4 = unaff_x20[1];
    if (uVar4 != 0) {
      uVar6 = uVar4 - 1;
      if ((uVar4 & uVar6) == 0) {
        uVar11 = uVar6 & uVar5;
        uVar3 = false;
      }
      else {
        uVar3 = (long)(uVar5 - uVar4) < 0;
        uVar11 = uVar5;
        if (uVar4 <= uVar5) {
          uVar11 = 0;
          if (uVar4 != 0) {
            uVar11 = uVar5 / uVar4;
          }
          uVar11 = uVar5 - uVar11 * uVar4;
        }
      }
      plVar9 = *(long **)(*unaff_x20 + uVar11 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_1074a8a70;
            uVar10 = plVar9[1];
            if (uVar10 != uVar5) break;
            uVar3 = (long)(plVar9[2] - uVar5) < 0;
            if (plVar9[2] == uVar5) {
              uStack_90 = 0;
              plStack_98 = plVar9;
              plStack_88 = plVar14;
              goto LAB_1074a8b70;
            }
          }
          if ((uVar4 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar4 <= uVar10) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar2 * uVar4;
          }
          uVar3 = (long)(uVar10 - uVar11) < 0;
        } while (uVar10 == uVar11);
      }
    }
LAB_1074a8a70:
    if ((uVar4 == 0) ||
       (func_0x0001074b5a74((float)(unaff_x20[3] + 1),(int)unaff_x20[4],(float)uVar4),
       uVar4 = extraout_x8, uVar5 = extraout_x9, (bool)uVar3)) {
      FUN_1074b1670();
      uVar4 = unaff_x20[1];
      uVar5 = plVar14[1];
    }
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar5 = uVar6 & uVar5;
    }
    else if (uVar4 <= uVar5) {
      uVar11 = 0;
      if (uVar4 != 0) {
        uVar11 = uVar5 / uVar4;
      }
      uVar5 = uVar5 - uVar11 * uVar4;
    }
    lVar7 = *unaff_x20;
    plVar9 = *(long **)(lVar7 + uVar5 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar14 = *plVar1;
      *plVar1 = (long)plVar14;
      *(long **)(lVar7 + uVar5 * 8) = plVar1;
      if (*plVar14 != 0) {
        uVar5 = *(ulong *)(*plVar14 + 8);
        if ((uVar4 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar4 <= uVar5) {
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = uVar5 / uVar4;
          }
          uVar5 = uVar5 - uVar6 * uVar4;
        }
        *(long **)(lVar7 + uVar5 * 8) = plVar14;
      }
    }
    else {
      *plVar14 = *plVar9;
      *plVar9 = (long)plVar14;
    }
    unaff_x20[3] = unaff_x20[3] + 1;
    uStack_a0 = uStack_a0 & 0xff;
    uStack_90 = 1;
    plStack_88 = (long *)0x0;
    plStack_98 = plVar14;
LAB_1074a8b70:
    uStack_80 = uStack_a0;
    plStack_a8 = (long *)0x0;
    if ((uStack_a0 >> 8 & 1) != 0) {
      uStack_a0 = uStack_a0 & 0xff;
    }
    func_0x0001074b2abc(&plStack_88);
    func_0x0001074b2abc(&plStack_a8);
    plVar14 = plVar13;
  } while( true );
}



/* Entry: 1074a8bd0; end: 1074a8c5f;  */

undefined8 FUN_1074a8bd0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 unaff_x19;
  
  plVar1 = *(long **)(param_1 + 0xd0);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x0001074ae5ec(param_1 + 0xa0);
  FUN_1074ae684(param_1 + 0x78);
  FUN_1074ae684(param_1 + 0x50);
  FUN_1074ae684(param_1 + 0x28);
  func_0x0001074b6094(param_1);
  func_0x0001074ae6a8();
  func_0x0001074b5fd4(unaff_x19);
  FUN_1074ae7a8();
  return unaff_x19;
}



/* Entry: 1074a8c60; end: 1074a8cab;  */

long FUN_1074a8c60(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_1074af080();
    func_0x0001074b5a20();
  }
  func_0x0001074b6d74();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074a8cac; end: 1074a915f;  */

long * FUN_1074a8cac(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  double *pdVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  uint *puVar19;
  code *pcVar20;
  char cVar21;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  ulong uVar22;
  long lVar23;
  undefined8 *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  ulong uVar24;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  int extraout_w10;
  undefined4 extraout_w10_00;
  uint extraout_w10_01;
  ulong uVar25;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  long extraout_x10_03;
  undefined4 extraout_w11;
  uint extraout_w11_00;
  ulong uVar26;
  long *extraout_x11;
  long *extraout_x11_00;
  ulong uVar27;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long *extraout_x14;
  long unaff_x20;
  long unaff_x21;
  long lVar28;
  long *plVar29;
  undefined8 *puVar30;
  long lVar31;
  long *plVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  undefined8 in_stack_00000070;
  uint uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined2 uStack_9fc;
  undefined1 uStack_9fa;
  undefined8 uStack_9f4;
  undefined8 uStack_9ec;
  undefined8 uStack_9e4;
  undefined1 auStack_9d8 [24];
  undefined1 auStack_9c0 [68];
  undefined8 uStack_97c;
  undefined1 uStack_96e;
  uint uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined8 uStack_940;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined2 uStack_92c;
  undefined1 uStack_92a;
  undefined8 uStack_924;
  undefined8 uStack_91c;
  long lStack_914;
  undefined1 auStack_908 [56];
  undefined8 uStack_8d0;
  undefined4 uStack_8c8;
  long lStack_8b8;
  long lStack_8b0;
  long *plStack_8a8;
  long alStack_8a0 [3];
  long lStack_888;
  long lStack_880;
  uint uStack_854;
  long *plStack_850;
  long lStack_848;
  undefined8 uStack_840;
  undefined1 *puStack_838;
  undefined1 auStack_830 [16];
  long lStack_820;
  undefined8 uStack_818;
  undefined1 auStack_808 [8];
  undefined8 *puStack_800;
  code *pcStack_7f8;
  undefined4 uStack_7a0;
  undefined1 auStack_798 [56];
  undefined1 auStack_760 [8];
  undefined8 uStack_758;
  undefined4 uStack_6f8;
  undefined1 auStack_6f0 [56];
  undefined1 auStack_6b8 [8];
  double dStack_6b0;
  undefined4 uStack_650;
  undefined1 auStack_648 [56];
  double dStack_610;
  undefined1 auStack_608 [112];
  int iStack_598;
  undefined1 auStack_568 [336];
  undefined1 auStack_418 [56];
  undefined1 auStack_3e0 [56];
  undefined1 auStack_3a8 [120];
  undefined8 uStack_330;
  double dStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2c8;
  long lStack_250;
  long lStack_248;
  undefined1 auStack_228 [136];
  undefined1 auStack_1a0 [400];
  undefined8 uStack_10;
  
  func_0x0001074b6754();
  func_0x0001074b56e8();
  plVar32 = param_1 + 0x181;
  puStack_838 = auStack_568;
  dVar34 = (double)param_2;
  uStack_10 = extraout_x8;
  while( true ) {
    plVar32 = (long *)*plVar32;
    bVar9 = plVar32 == (long *)0x0;
    bVar10 = !bVar9;
    if (((plVar32 == (long *)0x0) || (uVar22 = param_1[0x17a], uVar22 == 0)) ||
       (param_1[0x17c] == 0)) break;
    uVar24 = plVar32[2];
    uVar25 = uVar22 - 1;
    if ((uVar22 & uVar25) == 0) {
      uVar26 = uVar25 & uVar24;
      bVar9 = true;
    }
    else {
      bVar9 = uVar24 == uVar22;
      uVar26 = uVar24;
      if (uVar22 <= uVar24) {
        uVar26 = 0;
        if (uVar22 != 0) {
          uVar26 = uVar24 / uVar22;
        }
        uVar26 = uVar24 - uVar26 * uVar22;
      }
    }
    plVar29 = *(long **)(param_1[0x179] + uVar26 * 8);
    if (plVar29 == (long *)0x0) break;
    do {
      while( true ) {
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) goto LAB_1074a9038;
        uVar27 = plVar29[1];
        if (uVar27 == uVar24) break;
        if ((uVar22 & uVar25) == 0) {
          uVar27 = uVar27 & uVar25;
        }
        else if (uVar22 <= uVar27) {
          uVar4 = 0;
          if (uVar22 != 0) {
            uVar4 = uVar27 / uVar22;
          }
          uVar27 = uVar27 - uVar4 * uVar22;
        }
        bVar9 = uVar27 == uVar26;
        if (!bVar9) goto LAB_1074a9038;
      }
      bVar9 = plVar29[2] == uVar24;
    } while (!bVar9);
    uStack_854 = (uint)bVar10;
    lVar23 = plVar29[4];
    dVar35 = 0.0;
    if (lVar23 != 0 && lVar23 < param_2) {
      dVar35 = (double)(param_2 - lVar23) / 1000000000.0;
    }
    uStack_840 = 0;
    dVar37 = (double)plVar29[3];
    puVar1 = (undefined8 *)plVar32[0x22];
    unaff_x20 = (long)(plVar32 + 0x16);
    plStack_850 = param_1;
    lStack_848 = param_2;
    for (puVar30 = (undefined8 *)plVar32[0x21]; bVar9 = puVar30 == puVar1, !bVar9;
        puVar30 = puVar30 + 2) {
      func_0x0001077512dc(*(undefined4 *)(plVar32 + 0x19),&uStack_330);
      uStack_818 = plVar32[4];
      lStack_820 = plVar32[3];
      if (plVar32[4] != 0) {
        do {
          func_0x0001074b56c0();
        } while (extraout_w10 != 0);
      }
      func_0x000104c2fe00(auStack_418,plVar32 + 5);
      func_0x000104c2fe00(auStack_3e0,plVar32 + 0xc);
      func_0x0001073c4f74(auStack_3a8,auStack_418);
      func_0x000107751444(&uStack_330,&lStack_820,auStack_3a8);
      lStack_250 = (long)(plVar32 + 0x13);
      lStack_248 = unaff_x20;
      func_0x0001074b698c(auStack_648);
      uStack_650 = 2;
      dStack_6b0 = dVar35 + dVar37;
      func_0x0001072deec0(&dStack_610,auStack_648,auStack_6b8);
      func_0x0001074b6974(auStack_6f0);
      uStack_758 = *puVar30;
      uStack_6f8 = 2;
      func_0x0001072deec0(puStack_838,auStack_6f0,auStack_760);
      func_0x0001074b6968(auStack_798);
      uStack_7a0 = 2;
      puStack_800 = (undefined8 *)(dVar34 / 1000000000.0);
      func_0x0001074b6a0c();
      func_0x0001074b67b8(auStack_830,&dStack_610);
      func_0x000107295f10(auStack_228,auStack_830);
      func_0x000107751334(auStack_1a0,&uStack_330);
      func_0x00010726b264(auStack_830);
      lVar23 = 0x150;
      do {
        func_0x00010729651c((long)&dStack_610 + lVar23);
        lVar23 = lVar23 + -0xa8;
      } while (lVar23 != -0xa8);
      func_0x0001074b5990(auStack_808);
      func_0x000104c2f714(auStack_798);
      func_0x0001074b5990(auStack_760);
      func_0x000104c2f714(auStack_6f0);
      func_0x0001074b5990(auStack_6b8);
      func_0x000104c2f714(auStack_648);
      func_0x000107267e8c(auStack_3a8);
      func_0x000107267eac(auStack_418);
      func_0x000107267e44(&lStack_820);
      func_0x000107267da8(&uStack_330);
      if (*(int *)(plVar32 + 0x20) == 0) {
        dStack_328 = (double)*(float *)(plVar32 + 0x1a);
        uStack_2c8 = 2;
        FUN_1074b0ce4(&dStack_610,&uStack_330);
        func_0x0001074b5990(&uStack_330);
      }
      else {
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        dStack_328 = 0.0;
        uStack_330 = 0;
        func_0x000107753050(&dStack_610,plVar32[0x1a],auStack_1a0,&uStack_330);
        func_0x00010724b3d8(&uStack_330);
      }
      if (iStack_598 == 1) {
        pdVar12 = &dStack_610;
        func_0x00010727f7dc();
        if (*(int *)(pdVar12 + 0xd) == 2) {
          pdVar12 = &dStack_610;
          func_0x00010727f7dc();
          func_0x0001072cb4bc();
          if (*(float *)(puVar30 + 1) != (float)*pdVar12) {
            uStack_840 = 1;
          }
          uStack_840 = CONCAT44(1,(undefined4)uStack_840);
        }
      }
      func_0x00010727f7f8(auStack_608);
      func_0x000107267da8(auStack_1a0);
      unaff_x21 = -0xa8;
    }
    if ((uStack_840 & 0x100000000) != 0) {
      plVar29[3] = (long)(dVar35 + dVar37);
      plVar29[4] = lStack_848;
    }
    param_1 = plStack_850;
    param_2 = lStack_848;
    if ((uStack_840 & 1) != 0) break;
  }
LAB_1074a9038:
  func_0x0001074b5698(uStack_10);
  if (bVar9) {
    return extraout_x14;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(&uStack_330);
  func_0x000107267da8(auStack_1a0);
  __Unwind_Resume(param_1);
  pcVar20 = FUN_1074a9160;
  func_0x0001074b6dfc();
  puStack_800 = &stack0x00000070;
  pcStack_7f8 = pcVar20;
  func_0x0001074b6c84();
  if (((*(byte *)(*(long *)(param_2 + 0x30) + 0x12f0) & 1) == 0) &&
     (*(char *)(*(long *)(param_2 + 0x30) + 0x12f9) == '\x01')) {
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    return param_1;
  }
  plVar32 = *(long **)(unaff_x21 + 0xf78);
  while (plVar32 != (long *)0x0) {
    uVar2 = *(uint *)(plVar32 + 0x285);
    bVar10 = uVar2 == 0xb;
    if (uVar2 < 0xb) {
      *(uint *)(plVar32 + 0x285) = uVar2 + 1;
      plVar32 = (long *)*plVar32;
    }
    else {
      func_0x0001074b64d8();
      plVar32 = extraout_x8_01;
      if (bVar10) {
        uVar11 = 1;
      }
      else {
        uVar11 = extraout_x9 == extraout_x10;
        if (extraout_x10 <= extraout_x9) {
          func_0x0001074b6688();
          plVar32 = extraout_x8_02;
        }
      }
      plVar32 = (long *)*plVar32;
      do {
        func_0x0001074b64c8();
      } while (!(bool)uVar11);
      lVar23 = (long)plVar32;
      if (extraout_x11 == (long *)(unaff_x21 + 0xf78)) {
LAB_1074a9248:
        if (plVar32 == (long *)0x0) {
LAB_1074a9280:
          *(undefined8 *)(extraout_x13 + extraout_x9_00 * 8) = 0;
          lVar23 = *extraout_x8_03;
          goto LAB_1074a9288;
        }
        uVar22 = *(ulong *)((long)plVar32 + 8);
        if ((extraout_x10_00 & extraout_x12) == 0) {
          uVar24 = uVar22 & extraout_x12;
        }
        else {
          uVar24 = uVar22;
          if (extraout_x10_00 <= uVar22) {
            uVar24 = 0;
            if (extraout_x10_00 != 0) {
              uVar24 = uVar22 / extraout_x10_00;
            }
            uVar24 = uVar22 - uVar24 * extraout_x10_00;
          }
        }
        if (uVar24 != extraout_x9_00) goto LAB_1074a9280;
LAB_1074a9290:
        if ((extraout_x10_00 & extraout_x12) == 0) {
          uVar22 = uVar22 & extraout_x12;
        }
        else if (extraout_x10_00 <= uVar22) {
          uVar24 = 0;
          if (extraout_x10_00 != 0) {
            uVar24 = uVar22 / extraout_x10_00;
          }
          uVar22 = uVar22 - uVar24 * extraout_x10_00;
        }
        if (uVar22 != extraout_x9_00) {
          *(long **)(extraout_x13 + uVar22 * 8) = extraout_x11;
          lVar23 = *extraout_x8_03;
        }
      }
      else {
        uVar22 = extraout_x11[1];
        if ((extraout_x10_00 & extraout_x12) == 0) {
          uVar22 = uVar22 & extraout_x12;
        }
        else if (extraout_x10_00 <= uVar22) {
          uVar24 = 0;
          if (extraout_x10_00 != 0) {
            uVar24 = uVar22 / extraout_x10_00;
          }
          uVar22 = uVar22 - uVar24 * extraout_x10_00;
        }
        if (uVar22 != extraout_x9_00) goto LAB_1074a9248;
LAB_1074a9288:
        if (lVar23 != 0) {
          uVar22 = *(ulong *)(lVar23 + 8);
          goto LAB_1074a9290;
        }
      }
      *extraout_x11 = lVar23;
      *extraout_x8_03 = 0;
      *(long *)(unaff_x21 + 0xf80) = *(long *)(unaff_x21 + 0xf80) + -1;
      func_0x0001074b6724();
      func_0x0001074b2cc4();
    }
  }
  plVar32 = *(long **)(unaff_x21 + 0xf50);
  while (plVar32 != (long *)0x0) {
    uVar2 = *(uint *)(plVar32 + 0xf);
    bVar10 = uVar2 == 0xb;
    if (uVar2 < 0xb) {
      *(uint *)(plVar32 + 0xf) = uVar2 + 1;
      plVar32 = (long *)*plVar32;
    }
    else {
      func_0x0001074b64d8();
      plVar32 = extraout_x8_04;
      if (bVar10) {
        uVar11 = 1;
      }
      else {
        uVar11 = extraout_x9_01 == extraout_x10_01;
        if (extraout_x10_01 <= extraout_x9_01) {
          func_0x0001074b6688();
          plVar32 = extraout_x8_05;
        }
      }
      plVar32 = (long *)*plVar32;
      do {
        func_0x0001074b64c8();
      } while (!(bool)uVar11);
      lVar23 = (long)plVar32;
      if (extraout_x11_00 == (long *)(unaff_x21 + 0xf50)) {
LAB_1074a9380:
        if (plVar32 == (long *)0x0) {
LAB_1074a93b8:
          *(undefined8 *)(extraout_x13_00 + extraout_x9_02 * 8) = 0;
          lVar23 = *extraout_x8_06;
          goto LAB_1074a93c0;
        }
        uVar22 = *(ulong *)((long)plVar32 + 8);
        if ((extraout_x10_02 & extraout_x12_00) == 0) {
          uVar24 = uVar22 & extraout_x12_00;
        }
        else {
          uVar24 = uVar22;
          if (extraout_x10_02 <= uVar22) {
            uVar24 = 0;
            if (extraout_x10_02 != 0) {
              uVar24 = uVar22 / extraout_x10_02;
            }
            uVar24 = uVar22 - uVar24 * extraout_x10_02;
          }
        }
        if (uVar24 != extraout_x9_02) goto LAB_1074a93b8;
LAB_1074a93c8:
        if ((extraout_x10_02 & extraout_x12_00) == 0) {
          uVar22 = uVar22 & extraout_x12_00;
        }
        else if (extraout_x10_02 <= uVar22) {
          uVar24 = 0;
          if (extraout_x10_02 != 0) {
            uVar24 = uVar22 / extraout_x10_02;
          }
          uVar22 = uVar22 - uVar24 * extraout_x10_02;
        }
        if (uVar22 != extraout_x9_02) {
          *(long **)(extraout_x13_00 + uVar22 * 8) = extraout_x11_00;
          lVar23 = *extraout_x8_06;
        }
      }
      else {
        uVar22 = extraout_x11_00[1];
        if ((extraout_x10_02 & extraout_x12_00) == 0) {
          uVar22 = uVar22 & extraout_x12_00;
        }
        else if (extraout_x10_02 <= uVar22) {
          uVar24 = 0;
          if (extraout_x10_02 != 0) {
            uVar24 = uVar22 / extraout_x10_02;
          }
          uVar22 = uVar22 - uVar24 * extraout_x10_02;
        }
        if (uVar22 != extraout_x9_02) goto LAB_1074a9380;
LAB_1074a93c0:
        if (lVar23 != 0) {
          uVar22 = *(ulong *)(lVar23 + 8);
          goto LAB_1074a93c8;
        }
      }
      *extraout_x11_00 = lVar23;
      *extraout_x8_06 = 0;
      *(long *)(unaff_x21 + 0xf58) = *(long *)(unaff_x21 + 0xf58) + -1;
      func_0x0001074b6724();
      func_0x0001074b2cf8();
    }
  }
  lVar23 = unaff_x21 + 0xa38;
  FUN_1074a9c38(lVar23);
  lVar13 = unaff_x21 + 0xa60;
  FUN_1074a9c38(lVar13);
  lVar14 = unaff_x21 + 0xa88;
  FUN_1074a9c38();
  lVar15 = unaff_x21 + 0xab0;
  FUN_1074a9c38();
  FUN_10748be74(&lStack_888,unaff_x21 + 0xb18);
  uStack_950 = uStack_950 & 0xffffff00;
  FUN_1074b2d2c(alStack_8a0,(lStack_880 - lStack_888) / 0x160,&uStack_950);
  uVar7 = uStack_94c;
  uVar5 = uStack_950;
  uVar2 = (uint)*(byte *)(unaff_x20 + 0xad) & (*(uint *)(unaff_x20 + 0xb0) & 0x10) >> 4;
  cVar21 = '\x04';
  if ((*(byte *)(unaff_x20 + 0xac) & *(uint *)(unaff_x20 + 0x1ac) < *(uint *)(unaff_x20 + 0x1b8)) ==
      0) {
    cVar21 = '\x02';
  }
  cVar3 = *(char *)(unaff_x20 + 0x60);
  uStack_950 = (uint)unaff_x20;
  uVar6 = uStack_950;
  uStack_94c = (undefined4)((ulong)unaff_x20 >> 0x20);
  uVar8 = uStack_94c;
  uStack_950 = uVar5;
  uStack_94c = uVar7;
  lStack_8b8 = unaff_x21;
  lStack_8b0 = unaff_x20;
  plStack_8a8 = alStack_8a0;
  if (cVar3 == cVar21) {
    if (((*(long *)(unaff_x21 + 0xa50) != 0) || (*(long *)(unaff_x21 + 0xa78) != 0)) ||
       ((*(long *)(unaff_x21 + 0xaa0) != 0 || (*(long *)(unaff_x21 + 0xac8) != 0)))) {
      FUN_1074d7698(unaff_x20);
    }
    lVar31 = *(long *)(unaff_x20 + 0x28);
    FUN_107416bf8(lVar31);
    FUN_10748277c(auStack_9c0,lVar31 + 0x948);
    func_0x0001074b5f7c();
    (*extraout_x8_07)();
    if (uVar2 == 0) {
      lVar31 = *(long *)(unaff_x21 + 0x18);
      func_0x0001074b5fa0();
      uStack_948 = 0x103;
      uStack_944 = 0;
      uStack_950 = uVar6;
      uStack_94c = uVar8;
      func_0x0001074b6174(0xff00000007);
      *(undefined8 *)(extraout_x10_03 + 100) = 0;
      *(undefined8 *)(extraout_x10_03 + 0x5c) = 0;
      lStack_914 = (ulong)extraout_w11_00 << 0x20;
      func_0x00010002b838(auStack_908,&DAT_10f68f0f0);
      func_0x0001074b5f40();
      func_0x0001074b5b18(unaff_x21 + 0xa38,lVar31 + 8);
      FUN_1074aba48();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
    }
    else {
      func_0x0001074b6d54();
      func_0x0001074b5f54(0xff00000007);
      uStack_940._4_4_ = 0;
      uStack_938 = extraout_w11;
      func_0x0001074b6428();
      func_0x0001074b640c();
      func_0x0001074b63fc();
      func_0x0001074b67e4();
    }
    func_0x0001074b6380();
    func_0x0001074b5f7c();
    (*extraout_x8_08)();
    if (uVar2 == 0) {
      lVar31 = *(long *)(unaff_x21 + 0x18);
      func_0x0001074b5fa0();
      uStack_948 = 0x103;
      uStack_944 = 0;
      uStack_950 = uVar6;
      uStack_94c = uVar8;
      func_0x0001074b6174(0xff00000007);
      uStack_924 = 0;
      lStack_914 = 0;
      uStack_91c = 0;
      func_0x00010002b838(auStack_908,&DAT_10f2dd08d);
      func_0x0001074b5f40();
      func_0x0001074b5b18(unaff_x21 + 0xa88,lVar31 + 8);
      FUN_1074aba48();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
    }
    else {
      func_0x0001074b6d54();
      func_0x0001074b5f54(0xff00000007);
      uStack_940._4_4_ = 0;
      uStack_938 = 0;
      func_0x00010002b838(&uStack_a20,&DAT_10f2dd08d);
      func_0x0001074b5b30();
      FUN_1074a9c7c();
      func_0x0001074b67e4();
    }
    func_0x0001074b6380();
    func_0x0001074b5f7c();
    (*extraout_x8_09)();
    if (uVar2 == 0) {
      lVar31 = *(long *)(unaff_x21 + 0x18);
      func_0x0001074b5fa0();
      uStack_948 = 2;
      uStack_944 = 0;
      uStack_938 = 7;
      uStack_934 = 0;
      uStack_930 = 0;
      uStack_92c = 0x101;
      uStack_92a = 1;
      uStack_91c = 0;
      uStack_924 = 0;
      lStack_914 = (ulong)extraout_w10_01 << 0x20;
      uStack_950 = uVar6;
      uStack_94c = uVar8;
      uStack_940._0_4_ = extraout_w8;
      func_0x00010002b838(auStack_908,&DAT_10f68f0f0);
      func_0x0001074b5f40();
      func_0x0001074b5b18(unaff_x21 + 0xa88,lVar31 + 8);
      FUN_1074aba48();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
    }
    else {
      uStack_8c8 = *(undefined4 *)(unaff_x20 + 0x1b0);
      uStack_8d0 = 2;
      uStack_97c = 7;
      func_0x0001074b6518();
      uStack_96e = 1;
      uStack_944 = 0;
      uStack_940._0_4_ = 0;
      uStack_94c = 0;
      uStack_948 = 0;
      uStack_940._4_4_ = 0;
      uStack_938 = extraout_w10_00;
      func_0x0001074b6428();
      func_0x0001074b5b30();
      func_0x0001074b63fc();
      func_0x0001074b67e4();
    }
    func_0x0001074b6380();
    cVar3 = *(char *)(unaff_x20 + 0x60);
  }
  if (cVar3 == '\b') {
    if (*(char *)(unaff_x21 + 0x551) != '\x01') goto LAB_1074a9a10;
    lVar31 = *(long *)(unaff_x20 + 0x28);
    FUN_107416bf8(lVar31);
    func_0x0001074b58f4(&uStack_950,lVar31 + 0xb20);
    func_0x000107877034(&uStack_950,*(long *)(unaff_x20 + 0x30) + 0x1380,&uStack_950);
    if (uVar2 == 0) {
      func_0x0001074b6ccc();
      func_0x0001074b69e8();
      uStack_a18 = 0x103;
      uStack_a14 = 0;
      uStack_a10 = 0x3f800000;
      uStack_a08 = 7;
      uStack_a04 = 0;
      uStack_a00 = 0;
      uStack_9fc = 0x101;
      uStack_9fa = 1;
      uStack_9ec = 0;
      uStack_9f4 = 0;
      uStack_9e4 = 0x101010100000000;
      uStack_a20 = uVar6;
      uStack_a1c = uVar8;
      func_0x0001074b63d0();
      func_0x0001074b5c90(unaff_x21 + 0xa38);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_9d8);
      func_0x0001074b6ccc();
      func_0x0001074b69e8();
      uStack_a18 = 0x103;
      uStack_a14 = 0;
      uStack_a10 = 0x3f800000;
      uStack_a08 = 7;
      uStack_a04 = 0;
      uStack_a00 = 0;
      uStack_9fc = 0x101;
      uStack_9fa = 1;
      uStack_9ec = 0;
      uStack_9f4 = 0;
      uStack_9e4 = 0x101010100000000;
      uStack_a20 = uVar6;
      uStack_a1c = uVar8;
      func_0x0001074b63d0();
      func_0x0001074b5c90(unaff_x21 + 0xa88);
      puVar16 = auStack_9d8;
    }
    else {
      func_0x0001074b6cf4();
      uStack_97c = 7;
      func_0x0001074b6518();
      uStack_96e = 1;
      uStack_a14 = 0;
      uStack_a10 = 0;
      uStack_a1c = 0;
      uStack_a18 = 0;
      uStack_a0c = 0;
      uStack_a08 = 0x1010101;
      func_0x0001074b63c0();
      func_0x0001074b640c();
      func_0x0001074b63b0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_9c0);
      func_0x0001074b6cf4();
      uStack_97c = 7;
      func_0x0001074b6518();
      uStack_96e = 1;
      uStack_a14 = 0;
      uStack_a10 = 0;
      uStack_a1c = 0;
      uStack_a18 = 0;
      uStack_a0c = 0;
      uStack_a08 = 0x1010101;
      func_0x0001074b63c0();
      func_0x0001074b5b30();
      func_0x0001074b63b0();
      puVar16 = auStack_9c0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar16);
    cVar3 = *(char *)(unaff_x20 + 0x60);
  }
  if (cVar3 == '\x10') {
    uVar17 = *(undefined8 *)(unaff_x21 + 0x548);
    FUN_1074acd84(uVar17,*(undefined4 *)(unaff_x20 + 0x68));
    if ((int)uVar17 != 0) {
      lVar28 = *(long *)(unaff_x21 + 0xae0);
      for (lVar31 = *(long *)(unaff_x21 + 0xad8); lVar31 != lVar28; lVar31 = lVar31 + 0x120) {
        uStack_948 = 0;
        uStack_944 = 0x3f800000;
        uStack_950 = 0x3f800000;
        uStack_94c = 0x3f4ccccd;
        func_0x0001074b6c9c();
        FUN_1074d8434();
        if (*(int *)(lVar31 + 0x118) == 0) {
          lVar18 = lVar31 + 0x100;
          func_0x0001074b5408(lVar18);
          uStack_948 = 0x3f800000;
          uStack_944 = 0x3f800000;
          uStack_950 = 0;
          uStack_94c = 0;
          FUN_1074d89f4(unaff_x20,lVar18,&uStack_950);
        }
        else {
          lVar18 = lVar31 + 0x100;
          func_0x0001074b5420(lVar18);
          fVar33 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x4c));
          fVar36 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x50));
          uStack_948 = 0;
          uStack_944 = 0x3f800000;
          uStack_950 = 0;
          uStack_94c = 0x3f800000;
          FUN_1074d8950(fVar33 / fVar36,unaff_x20,lVar18,&uStack_950);
        }
      }
    }
  }
LAB_1074a9a10:
  uStack_a20 = 0;
  uStack_a1c = 0;
  uStack_a18 = 0;
  uStack_a14 = 0;
  uStack_a10 = 0;
  uStack_a0c = 0;
  FUN_1074a3f0c(&uStack_a20,lVar13 + lVar23 + lVar14 + lVar15);
  lVar23 = 0;
  for (uVar22 = 0; lVar13 = lStack_888, uVar22 < (ulong)((lStack_880 - lStack_888) / 0x160);
      uVar22 = uVar22 + 1) {
    if ((*(ulong *)(alStack_8a0[0] + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0) {
      uVar24 = CONCAT44(uStack_a14,uStack_a18);
      if (uVar24 < CONCAT44(uStack_a0c,uStack_a10)) {
        FUN_10748c090(uVar24,lStack_888 + lVar23);
        lVar13 = uVar24 + 0x160;
      }
      else {
        puVar19 = &uStack_a20;
        FUN_10748c370(puVar19,(long)(uVar24 - CONCAT44(uStack_a1c,uStack_a20)) / 0x160 + 1);
        FUN_10748c40c(&uStack_950,puVar19,
                      (CONCAT44(uStack_a14,uStack_a18) - CONCAT44(uStack_a1c,uStack_a20)) / 0x160,
                      &uStack_a10);
        FUN_10748c090(uStack_940,lVar13 + lVar23);
        uStack_940 = uStack_940 + 0x160;
        FUN_10748c3c8(&uStack_a20,&uStack_950);
        lVar13 = CONCAT44(uStack_a14,uStack_a18);
        func_0x00010748c500(&uStack_950);
      }
      uStack_a18 = (undefined4)lVar13;
      uStack_a14 = (undefined4)((ulong)lVar13 >> 0x20);
    }
    lVar23 = lVar23 + 0x160;
  }
  FUN_10748be74(extraout_x8_00,&uStack_a20);
  func_0x0001072bc5c4(&uStack_a20);
  func_0x000104be7d74(alStack_8a0);
  plVar32 = &lStack_888;
  func_0x0001072bc5c4(plVar32);
  return plVar32;
}



/* Entry: 1074a9160; end: 1074a9c37;  */

void FUN_1074a9160(undefined8 param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  char cVar15;
  undefined4 extraout_w8;
  undefined8 *extraout_x8;
  long *plVar16;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  undefined4 extraout_w10;
  uint extraout_w10_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  long extraout_x10_03;
  undefined4 extraout_w11;
  uint extraout_w11_00;
  long *extraout_x11;
  long *extraout_x11_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long unaff_x20;
  long unaff_x21;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined2 uStack_19c;
  undefined1 uStack_19a;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [68];
  undefined8 uStack_11c;
  undefined1 uStack_10e;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined1 uStack_ca;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  long lStack_b4;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  undefined4 uStack_68;
  long alStack_40 [3];
  long lStack_28;
  long lStack_20;
  
  func_0x0001074b6dfc();
  func_0x0001074b6c84();
  if (((*(byte *)(*(long *)(param_2 + 0x30) + 0x12f0) & 1) == 0) &&
     (*(char *)(*(long *)(param_2 + 0x30) + 0x12f9) == '\x01')) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    return;
  }
  plVar16 = *(long **)(unaff_x21 + 0xf78);
  while (plVar16 != (long *)0x0) {
    uVar1 = *(uint *)(plVar16 + 0x285);
    bVar7 = uVar1 == 0xb;
    if (uVar1 < 0xb) {
      *(uint *)(plVar16 + 0x285) = uVar1 + 1;
      plVar16 = (long *)*plVar16;
    }
    else {
      func_0x0001074b64d8();
      plVar16 = extraout_x8_00;
      if (bVar7) {
        uVar8 = 1;
      }
      else {
        uVar8 = extraout_x9 == extraout_x10;
        if (extraout_x10 <= extraout_x9) {
          func_0x0001074b6688();
          plVar16 = extraout_x8_01;
        }
      }
      plVar16 = (long *)*plVar16;
      do {
        func_0x0001074b64c8();
      } while (!(bool)uVar8);
      lVar18 = (long)plVar16;
      if (extraout_x11 == (long *)(unaff_x21 + 0xf78)) {
LAB_1074a9248:
        if (plVar16 == (long *)0x0) {
LAB_1074a9280:
          *(undefined8 *)(extraout_x13 + extraout_x9_00 * 8) = 0;
          lVar18 = *extraout_x8_02;
          goto LAB_1074a9288;
        }
        uVar17 = *(ulong *)((long)plVar16 + 8);
        if ((extraout_x10_00 & extraout_x12) == 0) {
          uVar19 = uVar17 & extraout_x12;
        }
        else {
          uVar19 = uVar17;
          if (extraout_x10_00 <= uVar17) {
            uVar19 = 0;
            if (extraout_x10_00 != 0) {
              uVar19 = uVar17 / extraout_x10_00;
            }
            uVar19 = uVar17 - uVar19 * extraout_x10_00;
          }
        }
        if (uVar19 != extraout_x9_00) goto LAB_1074a9280;
LAB_1074a9290:
        if ((extraout_x10_00 & extraout_x12) == 0) {
          uVar17 = uVar17 & extraout_x12;
        }
        else if (extraout_x10_00 <= uVar17) {
          uVar19 = 0;
          if (extraout_x10_00 != 0) {
            uVar19 = uVar17 / extraout_x10_00;
          }
          uVar17 = uVar17 - uVar19 * extraout_x10_00;
        }
        if (uVar17 != extraout_x9_00) {
          *(long **)(extraout_x13 + uVar17 * 8) = extraout_x11;
          lVar18 = *extraout_x8_02;
        }
      }
      else {
        uVar17 = extraout_x11[1];
        if ((extraout_x10_00 & extraout_x12) == 0) {
          uVar17 = uVar17 & extraout_x12;
        }
        else if (extraout_x10_00 <= uVar17) {
          uVar19 = 0;
          if (extraout_x10_00 != 0) {
            uVar19 = uVar17 / extraout_x10_00;
          }
          uVar17 = uVar17 - uVar19 * extraout_x10_00;
        }
        if (uVar17 != extraout_x9_00) goto LAB_1074a9248;
LAB_1074a9288:
        if (lVar18 != 0) {
          uVar17 = *(ulong *)(lVar18 + 8);
          goto LAB_1074a9290;
        }
      }
      *extraout_x11 = lVar18;
      *extraout_x8_02 = 0;
      *(long *)(unaff_x21 + 0xf80) = *(long *)(unaff_x21 + 0xf80) + -1;
      func_0x0001074b6724();
      func_0x0001074b2cc4();
    }
  }
  plVar16 = *(long **)(unaff_x21 + 0xf50);
  while (plVar16 != (long *)0x0) {
    uVar1 = *(uint *)(plVar16 + 0xf);
    bVar7 = uVar1 == 0xb;
    if (uVar1 < 0xb) {
      *(uint *)(plVar16 + 0xf) = uVar1 + 1;
      plVar16 = (long *)*plVar16;
    }
    else {
      func_0x0001074b64d8();
      plVar16 = extraout_x8_03;
      if (bVar7) {
        uVar8 = 1;
      }
      else {
        uVar8 = extraout_x9_01 == extraout_x10_01;
        if (extraout_x10_01 <= extraout_x9_01) {
          func_0x0001074b6688();
          plVar16 = extraout_x8_04;
        }
      }
      plVar16 = (long *)*plVar16;
      do {
        func_0x0001074b64c8();
      } while (!(bool)uVar8);
      lVar18 = (long)plVar16;
      if (extraout_x11_00 == (long *)(unaff_x21 + 0xf50)) {
LAB_1074a9380:
        if (plVar16 == (long *)0x0) {
LAB_1074a93b8:
          *(undefined8 *)(extraout_x13_00 + extraout_x9_02 * 8) = 0;
          lVar18 = *extraout_x8_05;
          goto LAB_1074a93c0;
        }
        uVar17 = *(ulong *)((long)plVar16 + 8);
        if ((extraout_x10_02 & extraout_x12_00) == 0) {
          uVar19 = uVar17 & extraout_x12_00;
        }
        else {
          uVar19 = uVar17;
          if (extraout_x10_02 <= uVar17) {
            uVar19 = 0;
            if (extraout_x10_02 != 0) {
              uVar19 = uVar17 / extraout_x10_02;
            }
            uVar19 = uVar17 - uVar19 * extraout_x10_02;
          }
        }
        if (uVar19 != extraout_x9_02) goto LAB_1074a93b8;
LAB_1074a93c8:
        if ((extraout_x10_02 & extraout_x12_00) == 0) {
          uVar17 = uVar17 & extraout_x12_00;
        }
        else if (extraout_x10_02 <= uVar17) {
          uVar19 = 0;
          if (extraout_x10_02 != 0) {
            uVar19 = uVar17 / extraout_x10_02;
          }
          uVar17 = uVar17 - uVar19 * extraout_x10_02;
        }
        if (uVar17 != extraout_x9_02) {
          *(long **)(extraout_x13_00 + uVar17 * 8) = extraout_x11_00;
          lVar18 = *extraout_x8_05;
        }
      }
      else {
        uVar17 = extraout_x11_00[1];
        if ((extraout_x10_02 & extraout_x12_00) == 0) {
          uVar17 = uVar17 & extraout_x12_00;
        }
        else if (extraout_x10_02 <= uVar17) {
          uVar19 = 0;
          if (extraout_x10_02 != 0) {
            uVar19 = uVar17 / extraout_x10_02;
          }
          uVar17 = uVar17 - uVar19 * extraout_x10_02;
        }
        if (uVar17 != extraout_x9_02) goto LAB_1074a9380;
LAB_1074a93c0:
        if (lVar18 != 0) {
          uVar17 = *(ulong *)(lVar18 + 8);
          goto LAB_1074a93c8;
        }
      }
      *extraout_x11_00 = lVar18;
      *extraout_x8_05 = 0;
      *(long *)(unaff_x21 + 0xf58) = *(long *)(unaff_x21 + 0xf58) + -1;
      func_0x0001074b6724();
      func_0x0001074b2cf8();
    }
  }
  lVar18 = unaff_x21 + 0xa38;
  FUN_1074a9c38(lVar18);
  lVar9 = unaff_x21 + 0xa60;
  FUN_1074a9c38(lVar9);
  lVar10 = unaff_x21 + 0xa88;
  FUN_1074a9c38();
  lVar11 = unaff_x21 + 0xab0;
  FUN_1074a9c38();
  FUN_10748be74(&lStack_28,unaff_x21 + 0xb18);
  uStack_f0 = uStack_f0 & 0xffffff00;
  FUN_1074b2d2c(alStack_40,(lStack_20 - lStack_28) / 0x160,&uStack_f0);
  uVar5 = uStack_ec;
  uVar3 = uStack_f0;
  uVar1 = (uint)*(byte *)(unaff_x20 + 0xad) & (*(uint *)(unaff_x20 + 0xb0) & 0x10) >> 4;
  cVar15 = '\x04';
  if ((*(byte *)(unaff_x20 + 0xac) & *(uint *)(unaff_x20 + 0x1ac) < *(uint *)(unaff_x20 + 0x1b8)) ==
      0) {
    cVar15 = '\x02';
  }
  cVar2 = *(char *)(unaff_x20 + 0x60);
  uStack_f0 = (uint)unaff_x20;
  uVar4 = uStack_f0;
  uStack_ec = (undefined4)((ulong)unaff_x20 >> 0x20);
  uVar6 = uStack_ec;
  uStack_f0 = uVar3;
  uStack_ec = uVar5;
  if (cVar2 == cVar15) {
    if ((((*(long *)(unaff_x21 + 0xa50) != 0) || (*(long *)(unaff_x21 + 0xa78) != 0)) ||
        (*(long *)(unaff_x21 + 0xaa0) != 0)) || (*(long *)(unaff_x21 + 0xac8) != 0)) {
      FUN_1074d7698();
    }
    lVar21 = *(long *)(unaff_x20 + 0x28);
    FUN_107416bf8(lVar21);
    FUN_10748277c(auStack_160,lVar21 + 0x948);
    func_0x0001074b5f7c();
    (*extraout_x8_06)();
    if (uVar1 == 0) {
      lVar21 = *(long *)(unaff_x21 + 0x18);
      func_0x0001074b5fa0();
      uStack_e8 = 0x103;
      uStack_e4 = 0;
      uStack_f0 = uVar4;
      uStack_ec = uVar6;
      func_0x0001074b6174(0xff00000007);
      *(undefined8 *)(extraout_x10_03 + 100) = 0;
      *(undefined8 *)(extraout_x10_03 + 0x5c) = 0;
      lStack_b4 = (ulong)extraout_w11_00 << 0x20;
      func_0x00010002b838(auStack_a8,&DAT_10f68f0f0);
      func_0x0001074b5f40();
      func_0x0001074b5b18(unaff_x21 + 0xa38,lVar21 + 8);
      FUN_1074aba48();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    }
    else {
      func_0x0001074b6d54();
      func_0x0001074b5f54(0xff00000007);
      uStack_e0._4_4_ = 0;
      uStack_d8 = extraout_w11;
      func_0x0001074b6428();
      func_0x0001074b640c();
      func_0x0001074b63fc();
      func_0x0001074b67e4();
    }
    func_0x0001074b6380();
    func_0x0001074b5f7c();
    (*extraout_x8_07)();
    if (uVar1 == 0) {
      lVar21 = *(long *)(unaff_x21 + 0x18);
      func_0x0001074b5fa0();
      uStack_e8 = 0x103;
      uStack_e4 = 0;
      uStack_f0 = uVar4;
      uStack_ec = uVar6;
      func_0x0001074b6174(0xff00000007);
      uStack_c4 = 0;
      lStack_b4 = 0;
      uStack_bc = 0;
      func_0x00010002b838(auStack_a8,&DAT_10f2dd08d);
      func_0x0001074b5f40();
      func_0x0001074b5b18(unaff_x21 + 0xa88,lVar21 + 8);
      FUN_1074aba48();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    }
    else {
      func_0x0001074b6d54();
      func_0x0001074b5f54(0xff00000007);
      uStack_e0._4_4_ = 0;
      uStack_d8 = 0;
      func_0x00010002b838(&uStack_1c0,&DAT_10f2dd08d);
      func_0x0001074b5b30();
      FUN_1074a9c7c();
      func_0x0001074b67e4();
    }
    func_0x0001074b6380();
    func_0x0001074b5f7c();
    (*extraout_x8_08)();
    if (uVar1 == 0) {
      lVar21 = *(long *)(unaff_x21 + 0x18);
      func_0x0001074b5fa0();
      uStack_e8 = 2;
      uStack_e4 = 0;
      uStack_d8 = 7;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0x101;
      uStack_ca = 1;
      uStack_bc = 0;
      uStack_c4 = 0;
      lStack_b4 = (ulong)extraout_w10_00 << 0x20;
      uStack_f0 = uVar4;
      uStack_ec = uVar6;
      uStack_e0._0_4_ = extraout_w8;
      func_0x00010002b838(auStack_a8,&DAT_10f68f0f0);
      func_0x0001074b5f40();
      func_0x0001074b5b18(unaff_x21 + 0xa88,lVar21 + 8);
      FUN_1074aba48();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    }
    else {
      uStack_68 = *(undefined4 *)(unaff_x20 + 0x1b0);
      uStack_70 = 2;
      uStack_11c = 7;
      func_0x0001074b6518();
      uStack_10e = 1;
      uStack_e4 = 0;
      uStack_e0._0_4_ = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e0._4_4_ = 0;
      uStack_d8 = extraout_w10;
      func_0x0001074b6428();
      func_0x0001074b5b30();
      func_0x0001074b63fc();
      func_0x0001074b67e4();
    }
    func_0x0001074b6380();
    cVar2 = *(char *)(unaff_x20 + 0x60);
  }
  if (cVar2 == '\b') {
    if (*(char *)(unaff_x21 + 0x551) != '\x01') goto LAB_1074a9a10;
    lVar21 = *(long *)(unaff_x20 + 0x28);
    FUN_107416bf8(lVar21);
    func_0x0001074b58f4(&uStack_f0,lVar21 + 0xb20);
    func_0x000107877034(&uStack_f0,*(long *)(unaff_x20 + 0x30) + 0x1380,&uStack_f0);
    if (uVar1 == 0) {
      func_0x0001074b6ccc();
      func_0x0001074b69e8();
      uStack_1b8 = 0x103;
      uStack_1b4 = 0;
      uStack_1b0 = 0x3f800000;
      uStack_1a8 = 7;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0x101;
      uStack_19a = 1;
      uStack_18c = 0;
      uStack_194 = 0;
      uStack_184 = 0x101010100000000;
      uStack_1c0 = uVar4;
      uStack_1bc = uVar6;
      func_0x0001074b63d0();
      func_0x0001074b5c90(unaff_x21 + 0xa38);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
      func_0x0001074b6ccc();
      func_0x0001074b69e8();
      uStack_1b8 = 0x103;
      uStack_1b4 = 0;
      uStack_1b0 = 0x3f800000;
      uStack_1a8 = 7;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0x101;
      uStack_19a = 1;
      uStack_18c = 0;
      uStack_194 = 0;
      uStack_184 = 0x101010100000000;
      uStack_1c0 = uVar4;
      uStack_1bc = uVar6;
      func_0x0001074b63d0();
      func_0x0001074b5c90(unaff_x21 + 0xa88);
      puVar12 = auStack_178;
    }
    else {
      func_0x0001074b6cf4();
      uStack_11c = 7;
      func_0x0001074b6518();
      uStack_10e = 1;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0x1010101;
      func_0x0001074b63c0();
      func_0x0001074b640c();
      func_0x0001074b63b0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
      func_0x0001074b6cf4();
      uStack_11c = 7;
      func_0x0001074b6518();
      uStack_10e = 1;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1ac = 0;
      uStack_1a8 = 0x1010101;
      func_0x0001074b63c0();
      func_0x0001074b5b30();
      func_0x0001074b63b0();
      puVar12 = auStack_160;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
    cVar2 = *(char *)(unaff_x20 + 0x60);
  }
  if (cVar2 == '\x10') {
    uVar13 = *(undefined8 *)(unaff_x21 + 0x548);
    FUN_1074acd84(uVar13,*(undefined4 *)(unaff_x20 + 0x68));
    if ((int)uVar13 != 0) {
      lVar20 = *(long *)(unaff_x21 + 0xae0);
      for (lVar21 = *(long *)(unaff_x21 + 0xad8); lVar21 != lVar20; lVar21 = lVar21 + 0x120) {
        uStack_e8 = 0;
        uStack_e4 = 0x3f800000;
        uStack_f0 = 0x3f800000;
        uStack_ec = 0x3f4ccccd;
        func_0x0001074b6c9c();
        FUN_1074d8434();
        if (*(int *)(lVar21 + 0x118) == 0) {
          func_0x0001074b5408(lVar21 + 0x100);
          uStack_e8 = 0x3f800000;
          uStack_e4 = 0x3f800000;
          uStack_f0 = 0;
          uStack_ec = 0;
          FUN_1074d89f4();
        }
        else {
          func_0x0001074b5420(lVar21 + 0x100);
          fVar22 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x4c));
          fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x50));
          uStack_e8 = 0;
          uStack_e4 = 0x3f800000;
          uStack_f0 = 0;
          uStack_ec = 0x3f800000;
          FUN_1074d8950(fVar22 / fVar23);
        }
      }
    }
  }
LAB_1074a9a10:
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  FUN_1074a3f0c(&uStack_1c0,lVar9 + lVar18 + lVar10 + lVar11);
  lVar18 = 0;
  for (uVar17 = 0; lVar9 = lStack_28, uVar17 < (ulong)((lStack_20 - lStack_28) / 0x160);
      uVar17 = uVar17 + 1) {
    if ((*(ulong *)(alStack_40[0] + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0) {
      uVar19 = CONCAT44(uStack_1b4,uStack_1b8);
      if (uVar19 < CONCAT44(uStack_1ac,uStack_1b0)) {
        FUN_10748c090(uVar19,lStack_28 + lVar18);
        lVar9 = uVar19 + 0x160;
      }
      else {
        puVar14 = &uStack_1c0;
        FUN_10748c370(puVar14,(long)(uVar19 - CONCAT44(uStack_1bc,uStack_1c0)) / 0x160 + 1);
        FUN_10748c40c(&uStack_f0,puVar14,
                      (CONCAT44(uStack_1b4,uStack_1b8) - CONCAT44(uStack_1bc,uStack_1c0)) / 0x160,
                      &uStack_1b0);
        FUN_10748c090(uStack_e0,lVar9 + lVar18);
        uStack_e0 = uStack_e0 + 0x160;
        FUN_10748c3c8(&uStack_1c0,&uStack_f0);
        lVar9 = CONCAT44(uStack_1b4,uStack_1b8);
        func_0x00010748c500(&uStack_f0);
      }
      uStack_1b8 = (undefined4)lVar9;
      uStack_1b4 = (undefined4)((ulong)lVar9 >> 0x20);
    }
    lVar18 = lVar18 + 0x160;
  }
  FUN_10748be74(extraout_x8,&uStack_1c0);
  func_0x0001072bc5c4(&uStack_1c0);
  func_0x000104be7d74(alStack_40);
  func_0x0001072bc5c4(&lStack_28);
  return;
}



/* Entry: 1074a9c38; end: 1074a9c7b;  */

long FUN_1074a9c38(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  plVar2 = (long *)(param_1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lVar1 = (plVar2[0x14] - plVar2[0x13]) / 0x174 + lVar1 + (plVar2[0x17] - plVar2[0x16]) / 0x5c;
  }
  return lVar1;
}



/* Entry: 1074aba48; end: 1074acd83;  */

undefined8 **
FUN_1074aba48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5,
             undefined8 param_6,uint param_7,int param_8)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined8 **ppuVar12;
  undefined1 uVar13;
  undefined1 extraout_w8;
  uint uVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  undefined1 *extraout_x8_18;
  code *extraout_x8_19;
  code *extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  long lVar15;
  long extraout_x8_23;
  long lVar16;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  code *extraout_x8_33;
  code *extraout_x8_34;
  code *extraout_x8_35;
  code *extraout_x8_36;
  code *extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  undefined1 uVar17;
  undefined1 extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long lVar18;
  long extraout_x9_01;
  ulong uVar19;
  long lVar20;
  uint extraout_w10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long lVar21;
  long lVar22;
  int iVar23;
  long *plVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  short *psVar28;
  undefined4 *puVar29;
  long *plVar30;
  ulong *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000080;
  undefined1 uStack_28a1;
  undefined8 *puStack_28a0;
  code *pcStack_2898;
  undefined8 uStack_2888;
  undefined8 uStack_2880;
  uint uStack_2874;
  uint uStack_2870;
  int iStack_286c;
  ulong uStack_2868;
  uint uStack_285c;
  long lStack_2858;
  long *plStack_2850;
  long lStack_2848;
  long lStack_2840;
  int iStack_2834;
  long lStack_2830;
  undefined8 *puStack_2828;
  undefined8 uStack_2820;
  undefined8 uStack_2818;
  undefined8 uStack_2810;
  ulong uStack_2808;
  long lStack_2800;
  long *plStack_27f8;
  uint uStack_27f0;
  int iStack_27ec;
  undefined8 uStack_27e8;
  undefined8 *puStack_27e0;
  uint uStack_27d4;
  undefined8 uStack_27d0;
  long *plStack_27c8;
  undefined1 auStack_27c0 [24];
  undefined1 auStack_27a8 [24];
  undefined1 auStack_2790 [24];
  undefined1 auStack_2778 [24];
  undefined8 *apuStack_2760 [2];
  undefined2 uStack_274c;
  undefined1 uStack_274a;
  undefined1 auStack_2748 [4];
  undefined4 uStack_2744;
  undefined1 auStack_2740 [64];
  undefined8 uStack_2700;
  undefined4 auStack_26f8 [126];
  undefined8 uStack_2500;
  undefined4 auStack_24f8 [126];
  undefined8 *apuStack_2300 [4];
  undefined4 auStack_22e0 [280];
  float fStack_1e80;
  float fStack_1e7c;
  float fStack_1e78;
  undefined4 uStack_1e74;
  undefined8 uStack_1e70;
  undefined4 auStack_1e68 [2];
  undefined **appuStack_1e60 [4];
  undefined4 uStack_1e40;
  undefined4 uStack_1e38;
  undefined1 uStack_1e34;
  undefined8 uStack_1e30;
  undefined8 uStack_1e28;
  undefined8 uStack_1e20;
  ulong uStack_1680;
  uint uStack_1678;
  undefined4 uStack_1674;
  undefined8 uStack_1670;
  undefined4 auStack_1668 [2];
  undefined **appuStack_1660 [4];
  undefined4 uStack_1640;
  undefined4 uStack_1638;
  undefined1 uStack_1634;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined4 auStack_d78 [2];
  undefined8 uStack_d70;
  undefined4 auStack_d68 [2];
  undefined **ppuStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined4 uStack_d40;
  undefined4 uStack_d38;
  undefined1 uStack_d34;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  uint uStack_8f0;
  undefined4 uStack_8ec;
  uint3 uStack_8e8;
  undefined1 uStack_8e5;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined8 uStack_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8b8;
  undefined1 uStack_8b4;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [56];
  undefined8 uStack_18;
  
  func_0x0001074b6dfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_2828 = in_stack_00000080;
  plVar30 = param_5;
  uStack_2888 = param_6;
  uStack_2880 = param_3;
  uStack_2820 = param_2;
  uStack_2810 = param_4;
  uStack_27f0 = param_7;
  func_0x0001074b6c48();
  func_0x0001074b56e8();
  lStack_2830 = (long)plVar30 + 0x14;
  iVar23 = (int)*(undefined8 *)*plVar30;
  uStack_18 = extraout_x8;
  func_0x0001074b5df4();
  (*extraout_x8_00)();
  uStack_2818 = 0;
  uStack_27d0 = 0;
  plStack_2850 = param_5 + 6;
  plVar30 = (long *)(param_1 + 0x10);
  uStack_2868 = 4;
  if (param_8 == 0) {
    uStack_2868 = 0;
  }
  uStack_27d4 = (uint)*(byte *)(*(long *)(*param_5 + 0x28) + 0xa94);
  uVar6 = uStack_27d4 == 0;
  lStack_2858 = 0xb;
  if ((bool)uVar6) {
    lStack_2858 = 0;
  }
  uStack_285c = 0x20;
  if ((bool)uVar6) {
    uStack_285c = 0;
  }
  uStack_2870 = uStack_285c | 4;
  uStack_2874 = uStack_285c | 8;
  iStack_286c = param_8;
  iStack_2834 = iVar23;
  plStack_27c8 = param_5;
LAB_1074abb2c:
  do {
    do {
      plVar30 = (long *)*plVar30;
      if (plVar30 == (long *)0x0) {
        func_0x00010002b838(apuStack_2300,"");
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                  (apuStack_2300,(&PTR_s_opaque_1109b48e0)[uStack_27f0]);
        uStack_900 = CONCAT44(uStack_900._4_4_,0xba);
        _uStack_8e8 = 0;
        uStack_8c8 = 0;
        uStack_8d0 = 0;
        uStack_8cc = 0;
        uStack_8d8 = 0;
        uStack_8d4 = 0;
        uStack_8e0 = 0x10996720;
        uStack_8dc = 1;
        uStack_8c0 = 0xba;
        uStack_8b8 = 0;
        uStack_8b4 = 1;
        uStack_8a0 = 0;
        uStack_8b0 = 0;
        uStack_8a8 = 0;
        puVar11 = auStack_50;
        func_0x0001074b6100(puVar11);
        func_0x0001074b5898();
        FUN_107371bc4(puVar11 + 0xf90);
        func_0x000104c2f714(auStack_50);
        puVar11 = auStack_2778;
        func_0x0001074b62bc(puVar11);
        puVar26 = puStack_2828;
        func_0x0001074b5888();
        func_0x00010726e300(puVar11 + 0xf90);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2778);
        uStack_1680._0_4_ = uStack_2818._4_4_;
        uStack_1678 = 0;
        fStack_1e80 = (float)*puVar26;
        fStack_1e7c = (float)((ulong)*puVar26 >> 0x20);
        fStack_1e78 = 4.2039e-45;
        func_0x0001074b6ac4();
        func_0x0001074b57dc();
        uStack_1680 = CONCAT44(uStack_1680._4_4_,0xbc);
        auStack_1668[0] = 0;
        appuStack_1660[3] = (undefined **)0x0;
        appuStack_1660[2] = (undefined **)0x0;
        appuStack_1660[1] = (undefined **)0x0;
        appuStack_1660[0] = &PTR_DAT_110996720;
        uStack_1640 = 0xbc;
        uStack_1638 = 0;
        uStack_1634 = 1;
        uStack_1620 = 0;
        uStack_1630 = 0;
        uStack_1628 = 0;
        puVar11 = auStack_88;
        func_0x0001074b6100(puVar11);
        func_0x0001074b5898();
        FUN_107371bc4(puVar11 + 0x210);
        func_0x000104c2f714(auStack_88);
        puVar11 = auStack_2790;
        func_0x0001074b62bc(puVar11);
        func_0x0001074b5888();
        func_0x00010726e300(puVar11 + 0x210);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2790);
        fStack_1e80 = uStack_27d0._4_4_;
        fStack_1e78 = 0.0;
        uStack_d80 = *puVar26;
        auStack_d78[0] = 3;
        func_0x0001074b57dc();
        fStack_1e80 = 2.62043e-43;
        auStack_1e68[0] = 0;
        appuStack_1e60[3] = (undefined **)0x0;
        appuStack_1e60[2] = (undefined **)0x0;
        appuStack_1e60[1] = (undefined **)0x0;
        appuStack_1e60[0] = &PTR_DAT_110996720;
        uStack_1e40 = 0xbb;
        uStack_1e38 = 0;
        uStack_1e34 = 1;
        uStack_1e20 = 0;
        uStack_1e30 = 0;
        uStack_1e28 = 0;
        func_0x0001074b6100(auStack_c0);
        func_0x0001074b5cb0();
        FUN_107371bc4(&fStack_1e80);
        func_0x0001074b6848();
        func_0x0001074b62bc(auStack_27a8);
        func_0x00010726e300(&fStack_1e80,&UNK_10f415b75,auStack_27a8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_27a8);
        uStack_d80._0_4_ = (int)uStack_27d0;
        auStack_d78[0] = 0;
        uStack_2500 = *puVar26;
        auStack_24f8[0] = 3;
        func_0x0001074b57dc();
        uStack_d80 = CONCAT44(uStack_d80._4_4_,0xbd);
        auStack_d68[0] = 0;
        uStack_d48 = 0;
        uStack_d50 = 0;
        uStack_d58 = 0;
        ppuStack_d60 = &PTR_DAT_110996720;
        uStack_d40 = 0xbd;
        uStack_d38 = 0;
        uStack_d34 = 1;
        uStack_d20 = 0;
        uStack_d30 = 0;
        uStack_d28 = 0;
        puVar11 = auStack_f8;
        func_0x0001074b6100(puVar11);
        func_0x0001074b5898();
        FUN_107371bc4(puVar11 + 0xb10);
        func_0x0001074b6854();
        puVar11 = auStack_27c0;
        func_0x0001074b62bc();
        func_0x0001074b5888();
        func_0x00010726e300(puVar11 + 0xb10);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_27c0);
        uStack_2500 = CONCAT44(uStack_2500._4_4_,(int)uStack_2818);
        auStack_24f8[0] = 0;
        uStack_2700 = *puVar26;
        auStack_26f8[0] = 3;
        uVar14 = 0;
        func_0x0001074b57dc();
        func_0x0001074b6880();
        func_0x000107262330(&fStack_1e80);
        func_0x0001074b6058();
        func_0x000107262330();
        func_0x0001074b5d54();
        func_0x000107262330();
        ppuVar12 = apuStack_2300;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar12);
        func_0x0001074b5698(uStack_18);
        if ((bool)uVar6) {
          return ppuVar12;
        }
        ___stack_chk_fail();
        func_0x0001074b6028();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(extraout_x8_39 + 8);
        ppuVar12 = apuStack_2760;
        func_0x00010730b734(ppuVar12);
        func_0x0001074b58b8();
        if ((uVar14 >> 4 & 1) != 0) {
          pcStack_2898 = FUN_1074acd84;
          uStack_28a1 = 1;
          ppuVar12 = ppuVar12 + 0xf0;
          puStack_28a0 = &stack0x00000060;
          func_0x00010724e2c8(ppuVar12,&uStack_28a1);
          return ppuVar12;
        }
        return (undefined8 **)0x0;
      }
      func_0x0001074b64b8(*(undefined4 *)
                           (*(long *)(plVar30[5] + 0x30) +
                           (ulong)*(uint *)((long)plVar30 + 0x24) * 4));
      puVar31 = (ulong *)(extraout_x8_01 + (extraout_x10 & 0xffffffff) * 0x1f0);
    } while (((extraout_x8_01 == 0) || (uVar6 = (int)puVar31[0x18] == 1, !(bool)uVar6)) ||
            (uVar7 = puVar31[8], uVar7 == 0));
    func_0x0001074b5c0c();
    iVar23 = (int)uVar7;
    (*extraout_x8_02)();
  } while (iVar23 == 0);
  cVar2 = (char)puVar31[0xf];
  uVar6 = cVar2 == '\x01';
  if ((bool)uVar6) goto code_r0x0001074abb84;
  goto LAB_1074abb98;
code_r0x0001074abb84:
  uVar7 = puVar31[0xe];
  if (uVar7 != 0) {
    func_0x0001074b5c0c();
    iVar23 = (int)uVar7;
    (*extraout_x8_03)();
    if (iVar23 != 0) {
LAB_1074abb98:
      bVar3 = (byte)puVar31[0x16];
      uVar6 = bVar3 == 1;
      if ((bool)uVar6) {
        uVar7 = puVar31[0x15];
        if (uVar7 == 0) goto LAB_1074abb2c;
        func_0x0001074b5c0c();
        iVar23 = (int)uVar7;
        (*extraout_x8_04)();
        if (iVar23 == 0) goto LAB_1074abb2c;
      }
      func_0x0001074b6a48((int)puVar31[0x2c]);
      puVar26 = (undefined8 *)
                (extraout_x9 + (extraout_x8_05 & 0xffffffff) * (extraout_x10_00 & 0xffffffff));
      uVar6 = *(char *)(plVar30 + 0x12) == '\x01';
      if ((bool)uVar6) {
        func_0x00010549026c(plVar30 + 0xf);
        func_0x0001074b6058();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
        puVar25 = puVar31 + 0x2d;
        FUN_1073bcb20(puVar25,&uStack_1680);
        if (puVar25 == (ulong *)0x0) {
          fStack_1e78 = 0.0;
          uStack_1e74 = 0;
          fStack_1e80 = 0.0;
          fStack_1e7c = 0.0;
          puVar25 = puVar31 + 0x2f;
          uStack_1e70 = 0;
          while (puVar25 = (ulong *)*puVar25, puVar25 != (ulong *)0x0) {
            func_0x0001074b6028();
            func_0x000100456794(puVar25 + 2,&DAT_10f68f19e);
            func_0x0001004c3ca0(&fStack_1e80,&uStack_900);
            func_0x0001074b5d54();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&fStack_1e80);
        }
        else {
          func_0x0001074b6a48((int)puVar25[5]);
          puVar26 = (undefined8 *)
                    (extraout_x9_00 + (extraout_x8_06 & 0xffffffff) * (extraout_x10_01 & 0xffffffff)
                    );
        }
        func_0x0001074b6058();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      puVar8 = puVar26;
      FUN_10742c268();
      if ((int)puVar8 != 0) {
        if (iStack_2834 == 0) {
          uStack_27e8 = (long *)((ulong)uStack_27e8._4_4_ << 0x20);
        }
        else {
          uStack_27e8 = (long *)CONCAT44(uStack_27e8._4_4_,
                                         (uint)(1 < (ulong)((plVar30[0x14] - plVar30[0x13]) / 0x174)
                                               ));
        }
        iVar23 = *(int *)((long)puVar26 + 0x26c);
        if (uStack_27f0 == 0) {
          uVar7 = 2;
          if (cVar2 == '\0') {
            uVar7 = 0;
          }
          lVar15 = *(long *)(&UNK_10de73c50 + (uVar7 | uStack_2868 | bVar3) * 8);
        }
        else {
          lVar22 = 1;
          if (iVar23 == 2) {
            lVar22 = 2;
          }
          lVar15 = 0;
          if (uStack_27f0 == 2) {
            lVar15 = lVar22;
          }
        }
        plVar27 = *(long **)(*plStack_27c8 + 0x18);
        puStack_27e0 = puVar26;
        (**(code **)(*plVar27 + 0x80))(plVar27,plStack_27c8 + 1,lStack_2830);
        uVar5 = 0x10100;
        if (*(char *)(puStack_27e0 + 0x4e) == '\0') {
          uVar5 = 0x10101;
        }
        uStack_274c = (undefined2)uVar5;
        uStack_274a = (undefined1)((uint)uVar5 >> 0x10);
        func_0x0001074b69b8(*(undefined8 *)(*plVar27 + 0x88));
        if (uStack_27f0 == 2) {
          uVar14 = 3;
          if (iVar23 != 2) {
            uVar14 = 1;
          }
          func_0x0001074b5b70();
          lVar22 = *(long *)(extraout_x8_07 + 0x30);
          func_0x0001074e6e78(lVar22,*(undefined8 *)(*(long *)(extraout_x8_07 + 0x40) + 0x1e0));
          uVar13 = 0;
          uStack_8f0 = uVar14 | uStack_285c;
          uVar17 = *(undefined1 *)(lVar22 + 0xc);
          iStack_27ec = 1;
        }
        else if (uStack_27f0 == 1) {
          iStack_27ec = 0;
          uVar17 = 0xf;
          uVar13 = 1;
          uStack_8f0 = uStack_2874;
        }
        else {
          iStack_27ec = 0;
          uVar14 = uStack_2870;
          if (cVar2 == '\0') {
            uVar14 = uStack_285c;
          }
          uVar1 = uVar14 | 0x10;
          if (bVar3 == 0) {
            uVar1 = uVar14;
          }
          func_0x0001074b6cc0(uVar1);
          uStack_8f0 = extraout_w10;
          uVar17 = extraout_w9;
          uVar13 = extraout_w8;
        }
        uVar6 = (int)uStack_27e8 == 0;
        plVar24 = &lStack_2840;
        if ((bool)uVar6) {
          plVar24 = &lStack_2848;
        }
        uStack_900 = CONCAT44(uStack_900._4_4_,0x28);
        uStack_8f8 = 0;
        uStack_8ec = *(undefined4 *)(*plStack_27c8 + 0x78);
        uStack_8e8 = (uint3)(byte)uStack_27e8;
        uStack_8e4 = (undefined4)plStack_27c8[5];
        uStack_8e0 = (undefined4)((ulong)plStack_27c8[5] >> 0x20);
        uStack_8d4 = (undefined4)plStack_2850[1];
        uStack_8d0 = (undefined4)((ulong)plStack_2850[1] >> 0x20);
        uStack_8dc = (undefined4)*plStack_2850;
        uStack_8d8 = (undefined4)((ulong)*plStack_2850 >> 0x20);
        uStack_8cc = (undefined4)plStack_2850[2];
        uStack_8c8._0_2_ = CONCAT11(uVar17,uVar13);
        FUN_1073ca29c(apuStack_2760,*(undefined8 *)(*plStack_27c8 + 0x90),
                      *plVar24 + lVar15 * 0x10 + lStack_2858 * 0x10,&uStack_900);
        if (apuStack_2760[0] != (undefined8 *)0x0) {
          iVar23 = (int)*apuStack_2760[0];
          func_0x0001074b5c0c();
          (*extraout_x8_08)();
          uVar6 = 0;
          if (iVar23 == 2) {
            func_0x0001074b69b8(*(undefined8 *)(*plVar27 + 0x40));
            (**(code **)(*plVar27 + 0x58))(plVar27,puVar31);
            func_0x0001074b5cdc(*(undefined8 *)(*plVar27 + 0x60),plVar27);
            if ((uStack_27f0 == 0) && (cVar2 != '\0')) {
              func_0x0001074b5c54(*(undefined8 *)(*plVar27 + 0x60),plVar27);
            }
            if ((uStack_27f0 == 0) && (bVar3 != 0)) {
              func_0x0001074b5c4c(*(undefined8 *)(*plVar27 + 0x60),plVar27);
            }
            lVar18 = *plStack_27c8;
            plVar24 = *(long **)(lVar18 + 0x18);
            lVar15 = *(long *)(lVar18 + 0x30);
            lVar22 = *(long *)(lVar18 + 0x38);
            lVar18 = *(long *)(lVar18 + 0x40);
            uStack_1680 = *(ulong *)(lVar15 + 0x1268);
            uStack_1678 = *(uint *)(lVar15 + 0x1270);
            if (((*(byte *)(lVar15 + 0x12f0) & 1) != 0) ||
               (uStack_1674 = 0, (*(byte *)(lVar15 + 0x12f9) & 1) == 0)) {
              uStack_1674 = *(undefined4 *)(lVar15 + 0x1488);
            }
            fStack_1e78 = *(float *)(lVar15 + 0x1490);
            fStack_1e80 = fStack_1e78 * *(float *)(lVar15 + 0x1274);
            fStack_1e7c = (float)*(undefined8 *)(lVar15 + 0x1278) * fStack_1e78;
            fStack_1e78 = fStack_1e78 * (float)((ulong)*(undefined8 *)(lVar15 + 0x1278) >> 0x20);
            uStack_1e74 = *(undefined4 *)(lVar15 + 0x1494);
            func_0x0001074b66e8();
            func_0x0001074b6ac4();
            (*extraout_x8_09)(plVar24,0x15);
            func_0x0001074b66e8();
            (*extraout_x8_10)(plVar24,0x16,&fStack_1e80);
            uStack_8f8 = 0;
            uStack_900 = 0;
            func_0x0001074b66e8();
            func_0x0001074b5878();
            (*extraout_x8_11)();
            lVar21 = lVar15;
            FUN_1074e6e30();
            if ((int)lVar21 != 0) {
              func_0x0001074b6028();
              func_0x000107482794(lVar15 + 0x1400);
              func_0x0001074b6194();
              func_0x0001074b5878();
              (*extraout_x8_12)();
              func_0x0001074b66f4(*(undefined4 *)(lVar15 + 0x1480));
              (*extraout_x8_13)(plVar24,0x1d);
            }
            uStack_900 = *(undefined8 *)(lVar22 + 8);
            func_0x0001074b66f4(*(undefined4 *)(lVar22 + 4));
            (*extraout_x8_14)(plVar24,0x18);
            func_0x0001074b5878(*(undefined8 *)(*plVar24 + 0xa8));
            (*extraout_x8_15)();
            FUN_1074e6de8(lVar15,*(undefined8 *)(lVar18 + 0x1e8));
            func_0x0001074b64f8();
            func_0x0001074b5cdc(plVar24);
            func_0x0001074e6e0c(lVar15,*(undefined8 *)(lVar18 + 0x1e8));
            func_0x0001074b64f8();
            func_0x0001074b5c54(plVar24);
            lVar22 = lVar15;
            FUN_1074e6e30();
            if ((int)lVar22 != 0) {
              func_0x0001074e6e78(lVar15,*(undefined8 *)(lVar18 + 0x1e0));
              func_0x0001074b64f8();
              func_0x0001074b5c4c(plVar24);
            }
            func_0x0001074b6d68();
            (*extraout_x8_16)(plVar24,0x1a,uStack_2880);
            func_0x0001074b5b70();
            uStack_8f8 = puStack_27e0[1];
            uStack_900 = *puStack_27e0;
            fStack_1e80 = (float)puStack_27e0[0x14];
            fStack_1e7c = (float)((ulong)puStack_27e0[0x14] >> 0x20);
            uStack_1678 = *(uint *)(puStack_27e0 + 0x28);
            uVar7 = (ulong)uStack_1678;
            uStack_1680 = puStack_27e0[0x27];
            FUN_10742c3d8();
            (**(code **)(*plVar27 + 0xb8))(plVar27,0x1f,&uStack_900);
            (**(code **)(*plVar27 + 0xa8))(plVar27,0x20,&fStack_1e80);
            func_0x0001074b6ac4(*(undefined8 *)(*plVar27 + 0xb0));
            (*extraout_x8_17)(plVar27,0x21);
            plVar24 = plVar27;
            (**(code **)(*plVar27 + 0xa0))(uVar7,plVar27,0x22);
            func_0x0001074b6028();
            *extraout_x8_18 = 0;
            *(undefined8 *)(extraout_x8_18 + 0x10) = 0;
            *(undefined8 *)(extraout_x8_18 + 0x18) = 0;
            *(undefined8 *)(extraout_x8_18 + 8) = 0;
            func_0x0001074b5960();
            FUN_10742bf24();
            plVar9 = plVar24;
            func_0x0001074b5960();
            FUN_10742bfcc();
            plStack_27f8 = plVar9;
            func_0x0001074b5960();
            func_0x00010742c064();
            plVar10 = plVar9;
            func_0x0001074b5960();
            func_0x00010742c0fc();
            func_0x0001074b6c28();
            (*extraout_x8_19)(plVar27,3,plVar24);
            func_0x0001074b6c28();
            (*extraout_x8_20)(plVar27,4,plStack_27f8);
            func_0x0001074b6c28();
            (*extraout_x8_21)(plVar27,5,plVar9);
            func_0x0001074b6c28();
            (*extraout_x8_22)(plVar27,6,plVar10);
            func_0x0001074b6028();
            func_0x0001074b67c0();
            lVar15 = plVar30[0x19];
            lVar22 = plVar30[0x1a];
            while (lVar15 != lVar22) {
              func_0x0001074b6148();
              lVar15 = extraout_x8_23;
              lVar22 = extraout_x9_01;
            }
            if (((ulong)uStack_27e8 & 1) == 0) {
              func_0x0001074b5b70();
              plVar27 = *(long **)(extraout_x8_26 + 0x18);
              psVar28 = (short *)plVar30[0x14];
              puStack_27e0 = (undefined8 *)0x10c;
              if (iStack_27ec == 0) {
                puStack_27e0 = (undefined8 *)0x68;
              }
              puVar29 = (undefined4 *)(plVar30[0x13] + 0x160);
              while( true ) {
                uVar6 = 1;
                if ((short *)(puVar29 + -0x58) == psVar28) break;
                func_0x0001074b6194();
                func_0x0001074b5c54(plVar27);
                func_0x0001074b6d68();
                func_0x0001074b688c(plVar27);
                func_0x0001074b66f4(puVar29[-1]);
                (*extraout_x8_27)(plVar27,5);
                func_0x0001074b66f4(*puVar29);
                (*extraout_x8_28)(plVar27,7);
                func_0x0001074b6194();
                (*extraout_x8_29)(plVar27,9);
                func_0x0001074b6194();
                (*extraout_x8_30)(plVar27,0xb);
                func_0x0001074b6d68();
                (*extraout_x8_31)(plVar27,0xd);
                if (uStack_27d4 != 0) {
                  func_0x0001074b66e8();
                  (*extraout_x8_32)(plVar27,0x11);
                  uStack_900 = CONCAT44((float)(int)*(short *)((long)puVar29 + -0x15e),
                                        (float)(int)*(short *)(puVar29 + -0x58));
                  uStack_8f8 = 0;
                  func_0x0001074b66e8();
                  func_0x0001074b5878();
                  (*extraout_x8_33)();
                  if (iStack_27ec == 0) {
                    func_0x0001074b590c();
                    func_0x0001074b5cf4();
                    func_0x0001074b6028();
                    func_0x000107482794(puVar29 + 0x250);
                    func_0x0001074b6194();
                    func_0x0001074b5878();
                    (*extraout_x8_34)();
                  }
                  else {
                    func_0x0001074b6194();
                    func_0x0001074b68c8(plVar27);
                  }
                  func_0x0001074b590c();
                  func_0x0001074b5cf4();
                  func_0x0001074b6028();
                  func_0x000107482794(puVar29 + 0x270);
                  func_0x0001074b6194();
                  func_0x0001074b5878();
                  (*extraout_x8_35)();
                  func_0x0001074b590c();
                  func_0x0001074b5cf4();
                  func_0x0001074b6028();
                  func_0x00010748277c(puVar29 + 0x2c2);
                  func_0x0001074b6d68();
                  func_0x0001074b5878();
                  (*extraout_x8_36)();
                  func_0x0001074b5b70();
                  func_0x0001074b6a54();
                  func_0x0001074b66f4();
                  (*extraout_x8_37)(plVar27,0x13);
                }
                func_0x0001074b5d54();
                func_0x0001074b59c8();
                func_0x0001074b6954();
                func_0x0001074b5d54();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x0001074b5b70();
                *(int *)(extraout_x8_38 + 0x100) = *(int *)(extraout_x8_38 + 0x100) + 1;
                uStack_1680 = CONCAT71(uStack_1680._1_7_,4);
                uStack_1680 = uStack_1680 & 0xffffffff;
                func_0x0001074b6b24(puVar31[0x2b]);
                (**(code **)(*plVar27 + 0x138))(plVar27,&uStack_1680);
                puVar29 = puVar29 + 0x5d;
              }
            }
            else {
              lStack_2800 = plVar30[0x13];
              uStack_2808 = (plVar30[0x14] - lStack_2800) / 0x174;
              uVar14 = (uint)((plVar30[0x14] - lStack_2800) / 0x2e80);
              if (0 < (long)(uStack_2808 & 0x800000000000001f)) {
                uVar14 = uVar14 + 1;
              }
              plStack_27f8 = (long *)(ulong)uVar14;
              lVar15 = 0x10c;
              if (iStack_27ec == 0) {
                lVar15 = 0x68;
              }
              uStack_2818 = CONCAT44(uVar14 + uStack_2818._4_4_,
                                     (int)uStack_2818 + (int)(uStack_2808 >> 5));
              iVar23 = 1;
              plVar27 = (long *)0x0;
              while( true ) {
                uVar7 = uStack_2808;
                if ((long)(ulong)(uint)(iVar23 << 5) <= (long)uStack_2808) {
                  uVar7 = (ulong)(uint)(iVar23 << 5);
                }
                uVar6 = 1;
                if (plVar27 == plStack_27f8) break;
                puStack_27e0 = (undefined8 *)CONCAT44(puStack_27e0._4_4_,iVar23);
                lVar22 = (uVar7 & 0xffffffff) + ((ulong)plVar27 & 0x7ffffff) * -0x20;
                uStack_27e8 = (long *)((long)plVar27 + 1);
                uVar19 = (ulong)(uint)((int)uStack_27e8 << 5);
                uVar7 = uStack_2808;
                if ((long)uVar19 <= (long)uStack_2808) {
                  uVar7 = uVar19;
                }
                psVar28 = (short *)(lStack_2800 + (ulong)(uint)((int)plVar27 * 0x20) * 0x174);
                func_0x0001074b5d54();
                func_0x0001074b68f4();
                _bzero(&uStack_d80,0x480);
                uStack_d88 = 0;
                uStack_d90 = 0;
                uStack_d98 = 0;
                uStack_da0 = 0;
                uStack_da8 = 0;
                uStack_db0 = 0;
                uStack_db8 = 0;
                uStack_dc0 = 0;
                uStack_dc8 = 0;
                uStack_dd0 = 0;
                uStack_dd8 = 0;
                uStack_de0 = 0;
                uStack_de8 = 0;
                uStack_df0 = 0;
                uStack_df8 = 0;
                uStack_e00 = 0;
                uStack_e08 = 0;
                uStack_e10 = 0;
                uStack_e18 = 0;
                uStack_e20 = 0;
                uStack_e28 = 0;
                uStack_e30 = 0;
                uStack_e38 = 0;
                uStack_e40 = 0;
                uStack_e48 = 0;
                uStack_e50 = 0;
                uStack_e58 = 0;
                uStack_e60 = 0;
                uStack_e68 = 0;
                uStack_e70 = 0;
                uStack_e78 = 0;
                uStack_e80 = 0;
                func_0x0001074b6058();
                func_0x0001074b68f4();
                func_0x0001074b68f4(&fStack_1e80);
                _bzero(apuStack_2300,0x480);
                _bzero(&uStack_2500,0x200);
                _bzero(&uStack_2700,0x200);
                lVar16 = 0;
                lVar20 = 0;
                lVar21 = 0;
                iVar23 = (int)uVar7 + (int)plVar27 * -0x20;
                for (lVar18 = 0; lVar22 != lVar18; lVar18 = lVar18 + 1) {
                  uVar33 = *(undefined8 *)(psVar28 + 6);
                  uVar32 = *(undefined8 *)(psVar28 + 2);
                  uVar35 = *(undefined8 *)(psVar28 + 0xe);
                  uVar34 = *(undefined8 *)(psVar28 + 10);
                  uVar36 = *(undefined8 *)(psVar28 + 0x12);
                  uVar38 = *(undefined8 *)(psVar28 + 0x1e);
                  uVar37 = *(undefined8 *)(psVar28 + 0x1a);
                  *(undefined8 *)((long)&uStack_8d8 + lVar21) = *(undefined8 *)(psVar28 + 0x16);
                  *(undefined8 *)((long)&uStack_8e0 + lVar21) = uVar36;
                  *(undefined8 *)((long)&uStack_8c8 + lVar21) = uVar38;
                  *(undefined8 *)((long)&uStack_8d0 + lVar21) = uVar37;
                  *(undefined8 *)((long)&uStack_8f8 + lVar21) = uVar33;
                  *(undefined8 *)((long)&uStack_900 + lVar21) = uVar32;
                  *(undefined8 *)((long)&uStack_8e8 + lVar21) = uVar35;
                  *(undefined8 *)((long)&uStack_8f0 + lVar21) = uVar34;
                  uVar33 = *(undefined8 *)(psVar28 + 0x26);
                  uVar32 = *(undefined8 *)(psVar28 + 0x22);
                  uVar35 = *(undefined8 *)(psVar28 + 0x2e);
                  uVar34 = *(undefined8 *)(psVar28 + 0x2a);
                  *(undefined4 *)((long)&ppuStack_d60 + lVar20) = *(undefined4 *)(psVar28 + 0x32);
                  *(undefined8 *)((long)auStack_d78 + lVar20) = uVar33;
                  *(undefined8 *)((long)auStack_d78 + lVar20 + -8) = uVar32;
                  *(undefined8 *)((long)auStack_d68 + lVar20) = uVar35;
                  *(undefined8 *)((long)&uStack_d70 + lVar20) = uVar34;
                  *(undefined4 *)((long)&uStack_e00 + lVar18 * 4) = *(undefined4 *)(psVar28 + 0xae);
                  *(undefined4 *)((long)&uStack_e80 + lVar18 * 4) = *(undefined4 *)(psVar28 + 0xb0);
                  puVar26 = (undefined8 *)((long)psVar28 + lVar15);
                  uVar33 = puVar26[1];
                  uVar32 = *puVar26;
                  uVar35 = puVar26[3];
                  uVar34 = puVar26[2];
                  uVar36 = puVar26[4];
                  uVar38 = puVar26[7];
                  uVar37 = puVar26[6];
                  *(undefined8 *)((long)appuStack_1660 + lVar21 + 8) = puVar26[5];
                  *(undefined8 *)((long)appuStack_1660 + lVar21) = uVar36;
                  *(undefined8 *)((long)appuStack_1660 + lVar21 + 0x18) = uVar38;
                  *(undefined8 *)((long)appuStack_1660 + lVar21 + 0x10) = uVar37;
                  *(undefined8 *)((long)&uStack_1678 + lVar21) = uVar33;
                  *(undefined8 *)((long)&uStack_1680 + lVar21) = uVar32;
                  *(undefined8 *)((long)auStack_1668 + lVar21) = uVar35;
                  *(undefined8 *)((long)&uStack_1670 + lVar21) = uVar34;
                  uVar33 = *(undefined8 *)(psVar28 + 0x58);
                  uVar32 = *(undefined8 *)(psVar28 + 0x54);
                  uVar35 = *(undefined8 *)(psVar28 + 0x60);
                  uVar34 = *(undefined8 *)(psVar28 + 0x5c);
                  uVar36 = *(undefined8 *)(psVar28 + 100);
                  uVar38 = *(undefined8 *)(psVar28 + 0x70);
                  uVar37 = *(undefined8 *)(psVar28 + 0x6c);
                  *(undefined8 *)((long)appuStack_1e60 + lVar21 + 8) =
                       *(undefined8 *)(psVar28 + 0x68);
                  *(undefined8 *)((long)appuStack_1e60 + lVar21) = uVar36;
                  *(undefined8 *)((long)appuStack_1e60 + lVar21 + 0x18) = uVar38;
                  *(undefined8 *)((long)appuStack_1e60 + lVar21 + 0x10) = uVar37;
                  *(undefined8 *)((long)&fStack_1e78 + lVar21) = uVar33;
                  *(undefined8 *)((long)&fStack_1e80 + lVar21) = uVar32;
                  *(undefined8 *)((long)auStack_1e68 + lVar21) = uVar35;
                  *(undefined8 *)((long)auStack_1e68 + lVar21 + -8) = uVar34;
                  uVar33 = *(undefined8 *)(psVar28 + 0x78);
                  uVar32 = *(undefined8 *)(psVar28 + 0x74);
                  uVar35 = *(undefined8 *)(psVar28 + 0x80);
                  uVar34 = *(undefined8 *)(psVar28 + 0x7c);
                  *(undefined4 *)((long)auStack_22e0 + lVar20) = *(undefined4 *)(psVar28 + 0x84);
                  *(undefined8 *)((long)apuStack_2300 + lVar20 + 8) = uVar33;
                  *(undefined8 *)((long)apuStack_2300 + lVar20) = uVar32;
                  *(undefined8 *)((long)apuStack_2300 + lVar20 + 0x18) = uVar35;
                  *(undefined8 *)((long)apuStack_2300 + lVar20 + 0x10) = uVar34;
                  uVar32 = *(undefined8 *)(psVar28 + 0xa6);
                  *(undefined8 *)((long)auStack_24f8 + lVar16) = *(undefined8 *)(psVar28 + 0xaa);
                  *(undefined8 *)((long)auStack_24f8 + lVar16 + -8) = uVar32;
                  sVar4 = psVar28[1];
                  *(float *)((long)auStack_26f8 + lVar16 + -8) = (float)(int)*psVar28;
                  *(float *)((long)auStack_26f8 + lVar16 + -4) = (float)(int)sVar4;
                  *(undefined8 *)((long)auStack_26f8 + lVar16) = 0;
                  psVar28 = psVar28 + 0xba;
                  lVar21 = lVar21 + 0x40;
                  lVar20 = lVar20 + 0x24;
                  lVar16 = lVar16 + 0x10;
                }
                func_0x0001074b5b70();
                plVar27 = *(long **)(extraout_x8_24 + 0x18);
                func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0x110),plVar27,0,&uStack_900);
                func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0x108),plVar27,2,&uStack_d80);
                func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0xe0),plVar27,4,&uStack_e00);
                func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0xe0),plVar27,6,&uStack_e80);
                func_0x0001074b6ac4(*(undefined8 *)(*plVar27 + 0x110));
                func_0x0001074b5b7c(plVar27,8);
                func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0x110),plVar27,10,&fStack_1e80);
                func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0x108),plVar27,0xc,apuStack_2300);
                if ((uStack_27d4 & 1) != 0) {
                  func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0xf8),plVar27,0x10,&uStack_2500);
                  func_0x0001074b5b7c(*(undefined8 *)(*plVar27 + 0xf8),plVar27,0xe,&uStack_2700);
                  if (iStack_27ec == 0) {
                    func_0x0001074b590c();
                    func_0x0001074b5cf4();
                    func_0x000107482794(auStack_2740,lVar22 + 0xaa0);
                    (**(code **)(*plVar27 + 0xd0))(plVar27,0x12,auStack_2740);
                  }
                  else {
                    func_0x0001074b68c8(*(undefined8 *)(*plVar27 + 0xd0),plVar27);
                  }
                  func_0x0001074b590c();
                  func_0x0001074b5cf4();
                  func_0x000107482794(auStack_2740,lVar22 + 0xb20);
                  (**(code **)(*plVar27 + 0xd0))(plVar27,0x14,auStack_2740);
                  func_0x0001074b590c();
                  func_0x0001074b5cf4();
                  func_0x00010748277c(auStack_2740,lVar22 + 0xc68);
                  (**(code **)(*plVar27 + 200))(plVar27,0x1b,auStack_2740);
                  func_0x0001074b5b70();
                  func_0x0001074b6a54();
                  (**(code **)(*plVar27 + 0xa0))(plVar27,0x13);
                }
                func_0x0001074b59c8(auStack_2740);
                func_0x0001074b6954();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2740);
                func_0x0001074b5b70();
                *(int *)(extraout_x8_25 + 0x100) = *(int *)(extraout_x8_25 + 0x100) + iVar23;
                uVar7 = *puVar31;
                auStack_2748[0] = 4;
                uStack_2744 = 0;
                func_0x0001074b6b24(puVar31[0x2b]);
                (**(code **)(*plVar27 + 0x138))(plVar27,auStack_2748);
                uStack_27d0 = CONCAT44((int)uStack_27d0._4_4_ + iVar23,
                                       (int)uStack_27d0 + (int)(uVar7 / 3) * iVar23);
                iVar23 = (int)puStack_27e0 + 1;
                plVar27 = uStack_27e8;
              }
            }
          }
        }
        func_0x00010730b734(apuStack_2760);
      }
    }
  }
  goto LAB_1074abb2c;
}



/* Entry: 1074acd84; end: 1074acdb7;  */

long FUN_1074acd84(long param_1,uint param_2)

{
  undefined1 uStack_11;
  
  if ((param_2 >> 4 & 1) == 0) {
    return 0;
  }
  uStack_11 = 1;
  param_1 = param_1 + 0x780;
  func_0x00010724e2c8(param_1,&uStack_11);
  return param_1;
}



/* Entry: 1074acdb8; end: 1074aceff;  */

float * FUN_1074acdb8(long param_1,float param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 extraout_x8;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float afStack_b0 [18];
  undefined8 uStack_68;
  
  pfVar3 = afStack_b0;
  func_0x0001074b56e8();
  lVar4 = *(long *)(param_3 + 8);
  uStack_68 = extraout_x8;
  if (*(int *)(lVar4 + 0x108) == 0) {
    fVar5 = *(float *)(lVar4 + 0xd0);
    fVar6 = *(float *)(lVar4 + 0xd4);
    fVar7 = *(float *)(lVar4 + 0xd8);
  }
  else {
    func_0x0001074b6528();
    fVar5 = 1.0;
    fVar6 = 1.0;
    fVar7 = 1.0;
    FUN_10743933c(lVar4 + 0xd0,param_4,afStack_b0);
    param_2 = fVar5;
    func_0x0001074b6448();
  }
  if (*(int *)(lVar4 + 0x2a8) == 0) {
    fVar8 = *(float *)(lVar4 + 0x278);
    fVar9 = param_2;
  }
  else {
    func_0x0001074b6528();
    func_0x0001074b627c();
    fVar9 = param_2;
    func_0x0001074b6448();
    fVar8 = param_2;
  }
  pfVar2 = (float *)(lVar4 + 0x188);
  if (*(int *)(lVar4 + 0x1b8) == 0) {
    fVar9 = *pfVar2;
  }
  else {
    func_0x0001074b6528();
    func_0x0001074b627c();
    func_0x0001074b6448();
  }
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar5 <= fVar7) {
    fVar5 = fVar7;
  }
  uVar1 = fVar9 == 0.0;
  if (((fVar9 <= 0.0) || (uVar1 = fVar8 == 0.0, fVar8 <= 0.0)) || (fVar5 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    afStack_b0[0] = 0.0;
    afStack_b0[1] = 0.0;
    afStack_b0[2] = 0.0;
    afStack_b0[3] = 0.0;
    afStack_b0[4] = 0.0;
    afStack_b0[5] = 0.0;
    FUN_10748f12c(param_1,afStack_b0);
    func_0x0001000e30f4(afStack_b0);
    pfVar2 = pfVar3;
  }
  func_0x0001074b5698(uStack_68);
  if ((bool)uVar1) {
    return pfVar2;
  }
  ___stack_chk_fail();
  func_0x0001074b5da4();
  func_0x00010724b3d8();
  func_0x0001074b58b8();
  return (float *)0x0;
}



/* Entry: 1074acf00; end: 1074acf03;  */

undefined8 FUN_1074acf00(void)

{
  return 0;
}



/* Entry: 1074acf04; end: 1074ade4b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001074ad90c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long ***** FUN_1074acf04(long *****param_1,long *****param_2,long param_3)

{
  float *pfVar1;
  ulong uVar2;
  long ***ppplVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  double dVar8;
  long ****pppplVar9;
  double dVar10;
  double dVar11;
  code *pcVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  long *****ppppplVar18;
  undefined8 *puVar19;
  undefined ***pppuVar20;
  long ****pppplVar21;
  double *pdVar22;
  long **pplVar23;
  long *****ppppplVar24;
  long ****pppplVar25;
  long ****pppplVar26;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar27;
  long ***ppplVar28;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long *****ppppplVar29;
  long *****extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x9;
  code *extraout_x9_00;
  ulong uVar30;
  long *****extraout_x9_01;
  long *****extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  long extraout_x9_07;
  long *****extraout_x9_08;
  long *****extraout_x9_09;
  long *****ppppplVar31;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long *****extraout_x11;
  long *****extraout_x11_00;
  long *****extraout_x11_01;
  long *plVar32;
  long *extraout_x12;
  long ****pppplVar33;
  long ***ppplVar34;
  long ****pppplVar35;
  ulong uVar36;
  long ****pppplVar37;
  long *****ppppplVar38;
  long ****pppplVar39;
  long *****ppppplVar40;
  long *****unaff_x25;
  ulong unaff_x26;
  long ****pppplVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  float fVar52;
  undefined8 uVar53;
  undefined1 auStack_ae0 [16];
  undefined8 uStack_ad0;
  long ****pppplStack_ac8;
  long ****pppplStack_ac0;
  long ****pppplStack_ab8;
  long ****pppplStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  long lStack_a40;
  long lStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined4 uStack_a20;
  long lStack_a10;
  long lStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined4 uStack_9f0;
  undefined1 auStack_9e0 [128];
  undefined8 uStack_960;
  long ***ppplStack_958;
  long ****pppplStack_950;
  long ****pppplStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  float fStack_930;
  undefined4 uStack_914;
  undefined1 auStack_910 [32];
  double dStack_8f0;
  double dStack_8e8;
  double dStack_8e0;
  double dStack_8d0;
  double dStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  long ***ppplStack_8b0;
  long ***ppplStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  long ***appplStack_890 [16];
  double dStack_810;
  double dStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined **ppuStack_7f0;
  long ****pppplStack_7e8;
  undefined ***pppuStack_7d8;
  long ****pppplStack_7d0;
  long ****pppplStack_7c8;
  undefined8 uStack_7c0;
  undefined4 uStack_620;
  byte bStack_618;
  long ***ppplStack_608;
  long ***ppplStack_600;
  undefined4 uStack_458;
  undefined8 uStack_450;
  float fStack_448;
  undefined4 uStack_444;
  long ****pppplStack_2a0;
  long ****pppplStack_298;
  long ****pppplStack_290;
  long ****pppplStack_288;
  long ****pppplStack_280;
  double *pdStack_278;
  long ****pppplStack_270;
  long ****pppplStack_268;
  long ****pppplStack_110;
  long ****pppplStack_108;
  undefined8 uStack_100;
  long ****pppplStack_f8;
  undefined **ppuStack_90;
  long ****pppplStack_88;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined4 uStack_70;
  undefined8 uStack_10;
  
  func_0x0001074b6754();
  ppppplVar18 = param_1;
  ppppplVar38 = param_2;
  func_0x0001074b56e8();
  pppplStack_948 = (long ****)0x0;
  pppplStack_950 = (long ****)0x0;
  uStack_940 = 0;
  pppplVar33 = ppppplVar18[3];
  ppppplVar31 = (long *****)(pppplVar33 + 1);
  pppplVar41 = *ppppplVar38;
  uStack_10 = extraout_x8;
  if (((ulong)ppppplVar38[5] & 1) == 0) {
    pppplVar26 = param_2[1];
    pppplVar37 = param_2[2];
    pppplVar39 = param_2[3];
    pppplVar35 = param_2[4];
    func_0x0001074e3ac0(&pppplStack_ac0,param_1);
    ppuStack_90 = &PTR_FUN_1109b4748;
    pppuStack_78 = &ppuStack_90;
    pppplStack_108 = (long ****)0x0;
    pppplStack_110 = (long ****)0x0;
    uStack_100 = 0;
    ppplVar3 = pppplVar41[1];
    pppplStack_88 = (long ****)param_1;
    for (ppplVar34 = *pppplVar41; ppplVar34 != ppplVar3; ppplVar34 = ppplVar34 + 2) {
      dVar8 = (double)NEON_ucvtf((ulong)*(uint *)(pppplVar26 + 10));
      pppplVar41 = (long ****)*ppplVar34;
      pppplStack_7c8 = (long ****)(dVar8 - (double)ppplVar34[1]);
      uVar15 = SUB81(pppplStack_7c8,0);
      uVar14 = (undefined1)((ulong)pppplStack_7c8 >> 8);
      uVar42 = (undefined1)((ulong)pppplStack_7c8 >> 0x10);
      uVar43 = (undefined1)((ulong)pppplStack_7c8 >> 0x18);
      uVar44 = (undefined1)((ulong)pppplStack_7c8 >> 0x20);
      uVar45 = (undefined1)((ulong)pppplStack_7c8 >> 0x28);
      uVar46 = (undefined1)((ulong)pppplStack_7c8 >> 0x30);
      uVar47 = (undefined1)((ulong)pppplStack_7c8 >> 0x38);
      pppplStack_7d0 = pppplVar41;
      FUN_1073c2238(pppplVar26,0,&pppplStack_7d0);
      pppplStack_7d0 =
           (long ****)
           CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,CONCAT13(uVar43,CONCAT12(
                                                  uVar42,CONCAT11(uVar14,uVar15)))))));
      ppppplVar38 = &pppplStack_7d0;
      pppplStack_7c8 = pppplVar41;
      func_0x000104c31a04(&pppplStack_110);
    }
    param_1 = (long *****)ppppplVar18[0x167];
    for (unaff_x25 = (long *****)ppppplVar18[0x166]; unaff_x25 != param_1;
        unaff_x25 = unaff_x25 + 0x16) {
      if (unaff_x25[2][0x2e] != (long ***)0x0) {
        func_0x0001074b65e0();
        pppplVar41 = pppplStack_108;
        for (ppppplVar18 = (long *****)pppplStack_110; ppppplVar18 != (long *****)pppplVar41;
            ppppplVar18 = ppppplVar18 + 2) {
          ppppplVar40 = unaff_x25;
          FUN_1073b724c();
          ppplVar34 = unaff_x25[2][0x2e];
          pppplStack_7d0 = (long ****)ppppplVar40;
          pppplStack_7c8 = (long ****)ppppplVar38;
          func_0x0001074b5df4(ppplVar34);
          (*extraout_x8_00)();
          ppppplVar40 = &pppplStack_7d0;
          ppppplVar38 = ppppplVar18;
          FUN_10748a3dc(ppppplVar40,ppppplVar18,ppplVar34);
          pppplStack_7d0 = (long ****)(long)(short)ppppplVar40;
          pppplStack_7c8 = (long ****)(long)(short)((ulong)ppppplVar40 >> 0x10);
          func_0x0001074b67d8();
        }
        func_0x0001074b6804();
        func_0x0001074b6b50();
        (*extraout_x9)(&ppplStack_608);
        pppplVar41 = &ppplStack_608;
        FUN_107330078();
        sVar4 = *(short *)**pppplVar41;
        func_0x0001074b6b50();
        (*extraout_x9_00)(&uStack_450);
        puVar19 = &uStack_450;
        FUN_107330078();
        pppplStack_7c8 = (long ****)(long)*(short *)(*(long *)*puVar19 + 2);
        iVar17 = (int)&pppplStack_7d0;
        ppppplVar38 = (long *****)appplStack_890;
        pppplStack_7d0 = (long ****)(long)sVar4;
        func_0x0001074b67f4();
        if (iVar17 != 0) {
          FUN_1074b2f6c(&pppplStack_2a0,pppplVar39,pppplVar35,unaff_x25[2] + 3);
          FUN_1074b2fbc(&uStack_450,unaff_x25[2] + 0x2e,*(undefined1 *)((long)unaff_x25 + 4),
                        pppplVar37,&pppplStack_2a0);
          pppplVar41 = unaff_x25[2];
          FUN_1074b3928(&pppplStack_7d0,pppuStack_78,&uStack_450);
          FUN_1074b30e0(&ppplStack_608,pppplVar41[0x2e],(undefined1 *)((long)unaff_x25 + 4),
                        pppplVar33 + 8,pppplVar33 + 0xf,ppppplVar31,&pppplStack_ac0,&pppplStack_7d0)
          ;
          func_0x000107283194(&pppplStack_7d0);
          func_0x0001074b68e0();
          uStack_620 = 0;
          ppppplVar38 = &pppplStack_7d0;
          FUN_1074ae10c(&pppplStack_950);
          func_0x00010729abec(&pppplStack_7d0);
          func_0x0001074b5e30();
          func_0x000107267da8(&uStack_450);
          FUN_1073de9d8(&pppplStack_2a0);
        }
        func_0x0001074b61e8();
        func_0x0001074b624c();
      }
    }
    func_0x000104c31c5c(&pppplStack_110);
    FUN_1074b54c4(&ppuStack_90);
    func_0x000107283194(&pppplStack_ac0);
  }
  else {
    ppplVar34 = *pppplVar41;
    if (0x10 < (ulong)((long)pppplVar41[1] - (long)ppplVar34)) {
      pppplVar26 = param_2[1];
      pppplVar37 = param_2[2];
      pppplVar39 = param_2[3];
      pppplVar35 = param_2[4];
      func_0x0001074e3ac0(&dStack_8d0,param_1);
      pppplStack_110 = (long ****)&PTR_FUN_1109b47d8;
      pppplStack_f8 = (long ****)&pppplStack_110;
      uVar7 = NEON_ucvtf(*(undefined8 *)((long)pppplVar26 + 0x4c),4);
      ppplStack_8b0 = (long ***)pppplVar39;
      ppplStack_8a8 = (long ***)pppplVar35;
      pppplStack_108 = (long ****)param_1;
      func_0x0001074b65e0();
      ppplVar3 = pppplVar41[1];
      for (ppplVar34 = *pppplVar41; ppplVar34 != ppplVar3; ppplVar34 = ppplVar34 + 2) {
        pppplStack_7d0 = (long ****)(long)(double)*ppplVar34;
        pppplStack_7c8 = (long ****)(long)(double)ppplVar34[1];
        func_0x0001074b67d8();
      }
      func_0x0001074b6804();
      pppplStack_88 = (long ****)0x0;
      ppuStack_90 = (undefined **)0x0;
      pppuStack_78 = (undefined ***)0x0;
      uStack_80 = 0;
      uStack_70 = 0x3f800000;
      pppplVar39 = ppppplVar18[0x166];
      pppplVar35 = ppppplVar18[0x167];
      unaff_x25 = &pppplStack_ab0;
      uVar53 = NEON_fmov(0x3f800000,4);
      for (; pppplVar39 != pppplVar35; pppplVar39 = pppplVar39 + 0x16) {
        ppplVar34 = pppplVar39[2];
        if ((ppplVar34[0x2e] != (long **)0x0) && (*(int *)(ppplVar34 + 0x50) == 1)) {
          uVar15 = 0;
          uVar14 = 0;
          uVar42 = 0;
          uVar43 = 0;
          uVar44 = 0;
          uVar45 = 0;
          uVar46 = 0;
          uVar47 = 0;
          if (*(char *)((long)pppplVar26 + 0xa94) == '\x01') {
            dVar8 = (double)*(float *)(pppplVar26 + 0x152);
            uVar15 = SUB81(dVar8,0);
            uVar14 = (undefined1)((ulong)dVar8 >> 8);
            uVar42 = (undefined1)((ulong)dVar8 >> 0x10);
            uVar43 = (undefined1)((ulong)dVar8 >> 0x18);
            uVar44 = (undefined1)((ulong)dVar8 >> 0x20);
            uVar45 = (undefined1)((ulong)dVar8 >> 0x28);
            uVar46 = (undefined1)((ulong)dVar8 >> 0x30);
            uVar47 = (undefined1)((ulong)dVar8 >> 0x38);
          }
          dVar8 = 1.0 - (double)CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,
                                                  CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar14,
                                                  uVar15)))))));
          uVar15 = SUB81(dVar8,0);
          uVar14 = (undefined1)((ulong)dVar8 >> 8);
          uVar42 = (undefined1)((ulong)dVar8 >> 0x10);
          uVar43 = (undefined1)((ulong)dVar8 >> 0x18);
          FUN_1074b00dc(*(undefined2 *)(ppplVar34 + 0xb),*(undefined2 *)((long)ppplVar34 + 0x5a),
                        (long)pppplVar39 + 4);
          fVar48 = *(float *)((long)ppplVar34 + 0x214);
          fVar50 = *(float *)(ppplVar34 + 0x43);
          fVar52 = *(float *)((long)ppplVar34 + 0x21c);
          unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)*(uint *)(pppplVar39[2] + 0xb);
          FUN_1074b0ffc(&pppplStack_7d0,unaff_x26,*(undefined1 *)(pppplVar39[2] + 0x29),1);
          pppuVar20 = &ppuStack_90;
          pppplVar25 = pppplVar39;
          FUN_1074b4738();
          if (pppuVar20 == (undefined ***)0x0) {
            pppplVar21 = pppplVar39;
            FUN_1073b724c();
            pplVar23 = pppplVar39[2][0x2e];
            pppplStack_2a0 = pppplVar21;
            pppplStack_298 = pppplVar25;
            func_0x0001074b5df4(pplVar23);
            (*extraout_x8_01)();
            FUN_10741600c(&uStack_450,pppplVar26,&pppplStack_2a0,pplVar23);
            func_0x0001074b58f4(&ppplStack_608,&uStack_450);
            FUN_1074ade4c(&ppuStack_90,pppplVar39);
            pppplVar25 = &ppplStack_608;
          }
          else {
            pppplVar25 = (long ****)(pppuVar20 + 4);
          }
          func_0x0001074b58f4();
          uStack_450 = 0;
          pppplVar21 = pppplVar39;
          FUN_1073b724c();
          pppplStack_ac0 = pppplVar21;
          pppplStack_ab8 = pppplVar25;
          func_0x0001074b6840(pppplVar26,&pppplStack_ac0);
          pppplStack_2a0 =
               (long ****)(double)(float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar14,uVar15)));
          pppplStack_298 = (long ****)(double)fVar48;
          pppplStack_290 = (long ****)(double)fVar50;
          pppplStack_288 = (long ****)(double)fVar52;
          FUN_1074b028c(&pppplStack_7d0,&ppplStack_608,pppplVar26,&pppplStack_2a0,pppplVar39 + 4,
                        &uStack_450);
          pppplStack_ac0 = (long ****)0x0;
          pppplStack_ab8 = (long ****)0x0;
          pppplStack_ab0 = (long ****)0x0;
          pppplStack_2a0 = (long ****)&pppplStack_ac0;
          pppplStack_298 = (long ****)((ulong)pppplStack_298 & 0xffffffffffffff00);
          FUN_1074b1a30(&pppplStack_ac0,8);
          for (lVar27 = 0; lVar27 != 0x40; lVar27 = lVar27 + 8) {
            *(undefined8 *)((long)pppplStack_ab8 + lVar27) = 0;
          }
          pppplStack_ab8 = (long ****)((long)pppplStack_ab8 + 0x40);
          pppplStack_298 = (long ****)CONCAT71(pppplStack_298._1_7_,1);
          func_0x0001074b1a64(&pppplStack_2a0);
          pfVar1 = &fStack_448;
          if ((uStack_450 & 1) != 0) {
            pfVar1 = (float *)CONCAT44(uStack_444,fStack_448);
          }
          uVar36 = (uStack_450 & 0x3ffffffffffffffe) << 2;
          ppppplVar38 = (long *****)pppplStack_ab8;
          uVar30 = uStack_450 & 0x3ffffffffffffffe;
          while (pppplStack_ab8 = (long ****)ppppplVar38, uVar30 != 0) {
            pppplVar25 = (long ****)
                         CONCAT44((float)((ulong)uVar7 >> 0x20) * 0.5 *
                                  ((float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
                                  (float)((ulong)uVar53 >> 0x20)),
                                  (float)uVar7 * 0.5 *
                                  ((float)*(undefined8 *)pfVar1 + (float)uVar53));
            if (ppppplVar38 < pppplStack_ab0) {
              ppppplVar40 = ppppplVar38 + 1;
              *ppppplVar38 = pppplVar25;
            }
            else {
              ppppplVar40 = &pppplStack_ac0;
              FUN_1074594b4(ppppplVar40,((long)ppppplVar38 - (long)pppplStack_ac0 >> 3) + 1);
              pppplVar9 = pppplStack_ab8;
              pppplVar21 = pppplStack_ac0;
              pppplStack_280 = (long ****)unaff_x25;
              if (ppppplVar40 == (long *****)0x0) {
                ppppplVar38 = (long *****)0x0;
              }
              else {
                ppppplVar38 = unaff_x25;
                FUN_1074590d0();
              }
              pppplStack_298 = (long ****)((long)ppppplVar38 + ((long)pppplVar9 - (long)pppplVar21))
              ;
              pppplStack_288 = (long ****)(ppppplVar38 + (long)ppppplVar40);
              ppppplVar40 = (long *****)(pppplStack_298 + 1);
              pppplStack_2a0 = (long ****)ppppplVar38;
              *pppplStack_298 = (long ***)pppplVar25;
              ppppplVar38 = (long *****)
                            ((long)pppplStack_298 - ((long)pppplStack_ab8 - (long)pppplStack_ac0));
              pppplStack_290 = (long ****)ppppplVar40;
              _memcpy(ppppplVar38);
              ppppplVar40 = (long *****)pppplStack_290;
              pppplVar25 = pppplStack_ab0;
              pppplStack_ab0 = pppplStack_288;
              pppplStack_ab8 = pppplStack_290;
              pppplStack_290 = pppplStack_ac0;
              pppplStack_288 = pppplVar25;
              pppplStack_298 = pppplStack_ac0;
              pppplStack_2a0 = pppplStack_ac0;
              pppplStack_ac0 = (long ****)ppppplVar38;
              FUN_10745910c(&pppplStack_2a0);
            }
            pfVar1 = pfVar1 + 2;
            uVar36 = uVar36 - 8;
            ppppplVar38 = ppppplVar40;
            uVar30 = uVar36;
          }
          pppplStack_2a0 = &ppplStack_8b0;
          pdStack_278 = &dStack_8d0;
          pppplStack_270 = (long ****)&pppplStack_110;
          pppplStack_268 = (long ****)&pppplStack_950;
          ppppplVar40 = (long *****)pppplStack_ac0;
          pppplStack_298 = pppplVar37;
          pppplStack_290 = pppplVar33 + 8;
          pppplStack_288 = pppplVar33 + 0xf;
          pppplStack_280 = (long ****)ppppplVar31;
          while (ppppplVar40 != ppppplVar38) {
            lStack_a10 = (long)SUB84(*ppppplVar40,0);
            lStack_a08 = (long)(float)((ulong)*ppppplVar40 >> 0x20);
            plVar32 = &lStack_a10;
            func_0x0001074b67f4(plVar32,appplStack_890);
            ppppplVar40 = ppppplVar40 + 1;
            if ((int)plVar32 != 0) {
              func_0x0001074b5e24();
              goto LAB_1074ad69c;
            }
          }
          uVar36 = 0;
          while( true ) {
            pppplVar25 = pppplStack_ab8;
            uVar30 = (long)pppplStack_ab8 - (long)pppplStack_ac0 >> 3;
            if (uVar30 <= uVar36) break;
            uVar2 = 0;
            if (uVar30 - 1 != uVar36) {
              uVar2 = uVar36;
            }
            lStack_a10 = (long)SUB84(pppplStack_ac0[uVar36],0);
            lStack_a08 = (long)(float)((ulong)pppplStack_ac0[uVar36] >> 0x20);
            lStack_a40 = (long)SUB84(pppplStack_ac0[uVar2],0);
            lStack_a38 = (long)(float)((ulong)pppplStack_ac0[uVar2] >> 0x20);
            plVar32 = &lStack_a10;
            func_0x000107871794(plVar32,&lStack_a40,appplStack_890);
            uVar36 = (ulong)((int)uVar36 + 1);
            if ((int)plVar32 != 0) {
              func_0x0001074b5e24();
LAB_1074ad69c:
              func_0x0001074b68b4();
              func_0x0001074b67fc();
              goto LAB_1074ad6a4;
            }
          }
          lStack_a10 = 0;
          lStack_a08 = 0;
          uStack_a00 = 0;
          lStack_a40 = 0;
          lStack_a38 = 0;
          uStack_a30 = 0;
          for (ppppplVar38 = (long *****)pppplStack_ac0; ppppplVar38 != (long *****)pppplVar25;
              ppppplVar38 = ppppplVar38 + 1) {
            dStack_810 = (double)(long)SUB84(*ppppplVar38,0);
            dStack_808 = (double)(long)(float)((ulong)*ppppplVar38 >> 0x20);
            FUN_1074b3268(&lStack_a40,&dStack_810);
          }
          FUN_1074b347c(&lStack_a10,&lStack_a40);
          ppplVar34 = pppplVar41[1];
          ppplVar3 = *pppplVar41;
          do {
            ppplVar28 = ppplVar3;
            if (ppplVar28 == ppplVar34) goto LAB_1074ad664;
            dStack_810 = (double)(long)(double)*ppplVar28;
            dStack_808 = (double)(long)(double)ppplVar28[1];
            pdVar22 = &dStack_810;
            func_0x0001074b67f4(pdVar22,&lStack_a10);
            ppplVar3 = ppplVar28 + 2;
          } while ((int)pdVar22 == 0);
          func_0x0001074b5e24();
LAB_1074ad664:
          func_0x0001073c66e0(&lStack_a40);
          FUN_1073c6654(&lStack_a10);
          func_0x0001074b68b4();
          func_0x0001074b67fc();
          if (ppplVar28 != ppplVar34) break;
        }
      }
LAB_1074ad6a4:
      func_0x0001074b46f8(&ppuStack_90);
      func_0x0001074b61e8();
      func_0x0001074b624c();
      FUN_1074b54c4(&pppplStack_110);
      func_0x000107283194(&dStack_8d0);
      ppplVar34 = **param_2;
      param_1 = ppppplVar18;
    }
    dVar8 = (double)NEON_ucvtf((ulong)*(uint *)(param_2[1] + 10));
    pppplVar33 = (long ****)*ppplVar34;
    pppplStack_7c8 = (long ****)(dVar8 - (double)ppplVar34[1]);
    uVar15 = SUB81(pppplStack_7c8,0);
    uVar14 = (undefined1)((ulong)pppplStack_7c8 >> 8);
    uVar42 = (undefined1)((ulong)pppplStack_7c8 >> 0x10);
    uVar43 = (undefined1)((ulong)pppplStack_7c8 >> 0x18);
    uVar44 = (undefined1)((ulong)pppplStack_7c8 >> 0x20);
    uVar45 = (undefined1)((ulong)pppplStack_7c8 >> 0x28);
    uVar46 = (undefined1)((ulong)pppplStack_7c8 >> 0x30);
    uVar47 = (undefined1)((ulong)pppplStack_7c8 >> 0x38);
    pppplStack_7d0 = pppplVar33;
    FUN_1073c2238(param_2[1],0,&pppplStack_7d0);
    uStack_960 = CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,CONCAT13(uVar43,
                                                  CONCAT12(uVar42,CONCAT11(uVar14,uVar15)))))));
    ppplStack_958 = (long ***)pppplVar33;
    FUN_107415f8c(auStack_9e0,param_2[1]);
    lStack_a08 = 0;
    lStack_a10 = 0;
    uStack_9f8 = 0;
    uStack_a00 = 0;
    uStack_9f0 = 0x3f800000;
    lStack_a38 = 0;
    lStack_a40 = 0;
    uStack_a28 = 0;
    uStack_a30 = 0;
    uStack_a20 = 0x3f800000;
    pppplVar41 = param_1[0x167];
    for (pppplVar33 = param_1[0x166]; pppplVar33 != pppplVar41; pppplVar33 = pppplVar33 + 0x16) {
      plVar32 = &lStack_a40;
      pppplVar26 = pppplVar33;
      FUN_1074b4738();
      if (plVar32 == (long *)0x0) {
        pppplVar37 = param_2[1];
        pppplVar39 = pppplVar33;
        FUN_1073b724c();
        pplVar23 = pppplVar33[2][0x2e];
        ppplStack_608 = (long ***)pppplVar39;
        ppplStack_600 = (long ***)pppplVar26;
        func_0x0001074b5df4(pplVar23);
        (*extraout_x8_02)();
        func_0x000107415eec(pppplVar37,&pppplStack_7d0,&ppplStack_608,pplVar23);
        pppplStack_ab0 = (long ****)0x0;
        pppplStack_ab8 = (long ****)0x0;
        uStack_aa0 = 0;
        uStack_aa8 = 0;
        pppplStack_ac0 = (long ****)0x3ff0000000000000;
        uStack_a98 = 0x3ff0000000000000;
        uStack_a88 = 0;
        uStack_a90 = 0;
        uStack_a78 = 0;
        uStack_a80 = 0;
        uStack_a60 = 0;
        uStack_a68 = 0;
        uStack_a50 = 0;
        uStack_a58 = 0;
        uStack_a70 = 0x3ff0000000000000;
        uStack_a48 = 0x3ff0000000000000;
        func_0x000107877034(&pppplStack_ac0,auStack_9e0,&pppplStack_7d0);
        FUN_1074ade4c(&lStack_a40,pppplVar33);
        ppppplVar38 = &pppplStack_ac0;
      }
      else {
        ppppplVar38 = (long *****)(plVar32 + 4);
      }
      func_0x0001074b58f4();
      param_1 = (long *****)pppplVar33[2];
      if (*(char *)(param_1 + 0x13) == '\x01') {
        ppppplVar38 = param_1 + 0x10;
        func_0x0001072e787c(ppppplVar38);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&pppplStack_7d0,ppppplVar38);
        plVar32 = &lStack_a10;
        func_0x00010596ff94(plVar32,&pppplStack_7d0);
        if (plVar32 == (long *)0x0) {
          ppppplVar38 = &pppplStack_7d0;
          func_0x0001004c3c54(&lStack_a10);
          func_0x0001074b68ec();
          param_1 = (long *****)pppplVar33[2];
          goto LAB_1074ad84c;
        }
        func_0x0001074b68ec();
      }
      else {
LAB_1074ad84c:
        pppplVar39 = pppplVar33;
        FUN_1073b724c();
        pppplVar37 = ppppplVar18[3];
        pppplVar26 = param_2[2];
        unaff_x25 = (long *****)param_2[3];
        pppplVar35 = param_2[4];
        uStack_ad0 = pppplVar39;
        pppplStack_ac8 = (long ****)ppppplVar38;
        func_0x0001074e3ac0(auStack_ae0,ppppplVar18);
        ppuStack_7f0 = &PTR_DAT_1109b4858;
        pppuStack_7d8 = &ppuStack_7f0;
        pppplStack_7e8 = (long ****)ppppplVar18;
        if (*(int *)(param_1 + 0x50) == 1) {
          func_0x0001074b64e8();
          FUN_1074b00dc(*(undefined2 *)(param_1 + 0xb),*(undefined2 *)((long)param_1 + 0x5a),
                        (ulong)&uStack_ad0 | 4);
          dVar51 = (double)(ulong)*(uint *)(param_1 + 0x43);
          FUN_1074b0ffc(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,CONCAT13(
                                                  uVar43,CONCAT12(uVar42,CONCAT11(uVar14,uVar15)))))
                                                )),*(undefined4 *)((long)param_1 + 0x214),dVar51,
                        *(undefined4 *)((long)param_1 + 0x21c),*(undefined4 *)(param_1 + 0x3f),
                        *(undefined4 *)((long)param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x40),
                        &ppplStack_608,*(undefined4 *)(param_1 + 0xb),
                        *(undefined1 *)(param_1 + 0x29),0);
          func_0x0001074b58f4(&ppuStack_90,&ppplStack_608);
          func_0x000107877034(&pppplStack_110,&pppplStack_ac0,&ppuStack_90);
          pppplVar39 = param_1[0x2e];
          func_0x0001074b5df4(pppplVar39);
          (*extraout_x8_03)();
          puVar19 = &uStack_ad0;
          FUN_10748a3dc(puVar19,&uStack_960,pppplVar39);
          dStack_810 = (double)(int)(short)puVar19;
          dStack_808 = (double)((int)puVar19 >> 0x10);
          uStack_7f8 = 0x3ff0000000000000;
          uStack_800 = 0;
          func_0x000107877358(&dStack_810,&dStack_810,&pppplStack_ac0);
          func_0x0001078769cc(appplStack_890,&pppplStack_110);
          ppplStack_8a8 = (long ***)0x0;
          ppplStack_8b0 = (long ***)0x0;
          uStack_8a0 = 0;
          uStack_898 = 0x3ff0000000000000;
          dStack_8c8 = dStack_808;
          dStack_8d0 = dStack_810;
          uStack_8c0 = uStack_800;
          uStack_8b8 = 0x3ff0000000000000;
          dVar49 = dStack_810;
          func_0x000107877358(&dStack_8f0,&ppplStack_8b0,appplStack_890);
          func_0x000107877358(auStack_910,&dStack_8d0,appplStack_890);
          dVar11 = dStack_8e0;
          dVar10 = dStack_8e8;
          dVar8 = dStack_8f0;
          uVar15 = SUB81(dStack_8f0,0);
          uVar14 = (undefined1)((ulong)dStack_8f0 >> 8);
          uVar42 = (undefined1)((ulong)dStack_8f0 >> 0x10);
          uVar43 = (undefined1)((ulong)dStack_8f0 >> 0x18);
          uVar44 = (undefined1)((ulong)dStack_8f0 >> 0x20);
          uVar45 = (undefined1)((ulong)dStack_8f0 >> 0x28);
          uVar46 = (undefined1)((ulong)dStack_8f0 >> 0x30);
          uVar47 = (undefined1)((ulong)dStack_8f0 >> 0x38);
          FUN_1074b3ab8(auStack_910,&dStack_8f0);
          ppplStack_608 = (long ***)CONCAT44((float)dVar10,(float)dVar8);
          ppplStack_600 = (long ***)CONCAT44(ppplStack_600._4_4_,(float)dVar11);
          uStack_450 = CONCAT44((float)dVar49,
                                (float)(double)CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,
                                                  CONCAT14(uVar44,CONCAT13(uVar43,CONCAT12(uVar42,
                                                  CONCAT11(uVar14,uVar15))))))));
          fStack_448 = (float)dVar51;
          ppplVar34 = pppplVar33[5];
          auVar5[9] = (char)((ulong)ppplVar34 >> 8);
          auVar5._0_9_ = *(unkbyte9 *)(pppplVar33 + 4);
          auVar5[10] = (char)((ulong)ppplVar34 >> 0x10);
          auVar5[0xb] = (char)((ulong)ppplVar34 >> 0x18);
          auVar5[0xc] = (char)((ulong)ppplVar34 >> 0x20);
          auVar5[0xd] = (char)((ulong)ppplVar34 >> 0x28);
          auVar5[0xe] = (char)((ulong)ppplVar34 >> 0x30);
          auVar5[0xf] = (char)((ulong)ppplVar34 >> 0x38);
          fVar48 = (float)auVar5._8_8_;
          pppplStack_2a0 =
               (long ****)
               CONCAT17((char)((uint)fVar48 >> 0x18),
                        CONCAT16((char)((uint)fVar48 >> 0x10),
                                 CONCAT15((char)((uint)fVar48 >> 8),
                                          CONCAT14(SUB41(fVar48,0),
                                                   (float)(double)*(unkbyte9 *)(pppplVar33 + 4)))));
          pppplStack_298 = (long ****)CONCAT44(pppplStack_298._4_4_,(float)(double)pppplVar33[6]);
          ppplVar34 = pppplVar33[8];
          auVar6[9] = (char)((ulong)ppplVar34 >> 8);
          auVar6._0_9_ = *(unkbyte9 *)(pppplVar33 + 7);
          auVar6[10] = (char)((ulong)ppplVar34 >> 0x10);
          auVar6[0xb] = (char)((ulong)ppplVar34 >> 0x18);
          auVar6[0xc] = (char)((ulong)ppplVar34 >> 0x20);
          auVar6[0xd] = (char)((ulong)ppplVar34 >> 0x28);
          auVar6[0xe] = (char)((ulong)ppplVar34 >> 0x30);
          auVar6[0xf] = (char)((ulong)ppplVar34 >> 0x38);
          fVar48 = (float)auVar6._8_8_;
          uVar44 = SUB41(fVar48,0);
          uVar45 = (undefined1)((uint)fVar48 >> 8);
          uVar46 = (undefined1)((uint)fVar48 >> 0x10);
          uVar47 = (undefined1)((uint)fVar48 >> 0x18);
          uStack_938 = CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,(float)(
                                                  double)*(unkbyte9 *)(pppplVar33 + 7)))));
          fStack_930 = (float)(double)pppplVar33[9];
          pppplVar39 = &ppplStack_608;
          func_0x000107874f24(pppplVar39,&uStack_450,&pppplStack_2a0,&uStack_938,&uStack_914);
          if ((int)pppplVar39 == 0) goto LAB_1074adb10;
          FUN_1074b2f6c(&uStack_938,unaff_x25,pppplVar35,param_1 + 3);
          FUN_1074b2fbc(&pppplStack_2a0,param_1 + 0x2e,uStack_ad0._4_1_,pppplVar26,&uStack_938);
          FUN_1074b3928(&ppplStack_608,pppuStack_7d8,&pppplStack_2a0);
          FUN_1074b30e0(&uStack_450,param_1[0x2e],(ulong)&uStack_ad0 | 4,pppplVar37 + 8,
                        pppplVar37 + 0xf,ppppplVar31,auStack_ae0,&ppplStack_608);
          func_0x000107283194(&ppplStack_608);
          func_0x00010729b464(&ppplStack_608,&uStack_450);
          uStack_458 = uStack_914;
          func_0x0001074b68e0();
          uStack_620 = uStack_458;
          bStack_618 = 1;
          func_0x0001074b5e30();
          func_0x00010729abec(&uStack_450);
          func_0x000107267da8(&pppplStack_2a0);
          FUN_1073de9d8(&uStack_938);
        }
        else {
LAB_1074adb10:
          pppplStack_7d0 = (long ****)((ulong)pppplStack_7d0 & 0xffffffffffffff00);
          bStack_618 = 0;
        }
        FUN_1074b54c4(&ppuStack_7f0);
        func_0x000107283194(auStack_ae0);
        if (bStack_618 == 1) {
          func_0x00010729b464(&ppplStack_608,&pppplStack_7d0);
          if ((bStack_618 & 1) == 0) {
            func_0x000104bdc2c8();
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1074adc30);
            (*pcVar12)();
          }
          uStack_458 = uStack_620;
          FUN_1074ae10c(&pppplStack_950,&ppplStack_608);
          func_0x0001074b5e30();
        }
        FUN_1074b3c04(&pppplStack_7d0);
      }
    }
    func_0x0001074b46f8(&lStack_a40);
    func_0x0001005d0538(&lStack_a10);
  }
  lVar27 = (long)pppplStack_950 - (long)pppplStack_948;
  uVar15 = pppplStack_950 == pppplStack_948;
  ppppplVar38 = (long *****)pppplStack_948;
  if (!(bool)uVar15) {
    FUN_1074b3c24(pppplStack_950,pppplStack_948,
                  LZCOUNT(((long)pppplStack_948 - (long)pppplStack_950) / 0x1b8) << 1 ^ 0x7e,1);
    lVar27 = param_3;
    ppppplVar38 = ppppplVar31;
    FUN_10748a4c0();
    ppppplVar40 = (long *****)pppplStack_950;
    ppppplVar18 = (long *****)pppplStack_948;
    if (lVar27 == 0) {
      pppplStack_7c8 = (long ****)0x0;
      pppplStack_7d0 = (long ****)0x0;
      uStack_7c0 = 0;
      ppppplVar38 = ppppplVar31;
      FUN_10748a4f4(&ppplStack_608,param_3,ppppplVar31,&pppplStack_7d0);
      func_0x00010729d51c(&pppplStack_7d0);
      ppppplVar40 = (long *****)pppplStack_950;
      ppppplVar18 = (long *****)pppplStack_948;
    }
    while( true ) {
      lVar27 = (long)ppppplVar40 - (long)ppppplVar18;
      uVar15 = true;
      if (ppppplVar40 == ppppplVar18) break;
      FUN_1073c1490(param_3,ppppplVar31);
      ppppplVar38 = ppppplVar40;
      func_0x00010729cbf8();
      ppppplVar40 = ppppplVar40 + 0x37;
    }
  }
  uVar14 = lVar27 < 0;
  ppppplVar31 = &pppplStack_950;
  FUN_1074ae2ec(ppppplVar31);
  func_0x0001074b5698(uStack_10);
  if ((bool)uVar15) {
    return ppppplVar31;
  }
  ___stack_chk_fail();
  func_0x0001073c66e0(&lStack_a40);
  FUN_1073c6654(&lStack_a10);
  func_0x0001074b68b4();
  func_0x0001074b67fc();
  func_0x0001074b46f8(&ppuStack_90);
  func_0x0001074b61e8();
  func_0x0001074b624c();
  FUN_1074b54c4(&pppplStack_110);
  func_0x000107283194(&dStack_8d0);
  ppppplVar31 = &pppplStack_950;
  FUN_1074ae2ec();
  func_0x0001074b58b8();
  func_0x0001074b6e30();
  ppppplVar18 = ppppplVar31 + 3;
  func_0x00010784b2bc();
  ppppplVar40 = (long *****)ppppplVar31[1];
  if (ppppplVar40 != (long *****)0x0) {
    uVar36 = (long)ppppplVar40 - 1;
    if (((ulong)ppppplVar40 & uVar36) == 0) {
      unaff_x25 = (long *****)(uVar36 & (ulong)ppppplVar18);
      uVar15 = 1;
      uVar14 = 0;
    }
    else {
      uVar14 = (long)ppppplVar18 - (long)ppppplVar40 < 0;
      uVar15 = ppppplVar18 == ppppplVar40;
      unaff_x25 = ppppplVar18;
      if (ppppplVar40 <= ppppplVar18) {
        func_0x0001074b6d28();
      }
    }
    param_1 = (long *****)0x0;
    ppppplVar24 = (long *****)(*ppppplVar31)[(long)unaff_x25];
    if ((long *****)(*ppppplVar31)[(long)unaff_x25] != (long *****)0x0) {
      do {
        while( true ) {
          param_1 = (long *****)*ppppplVar24;
          if (param_1 == (long *****)0x0) goto LAB_1074adf00;
          ppppplVar29 = (long *****)param_1[1];
          uVar14 = (long)ppppplVar29 - (long)ppppplVar18 < 0;
          uVar15 = ppppplVar29 == ppppplVar18;
          ppppplVar24 = param_1;
          if (!(bool)uVar15) break;
          ppppplVar29 = param_1 + 2;
          func_0x0001073bc1c0(ppppplVar29,ppppplVar38);
          if (((ulong)ppppplVar29 & 1) != 0) goto LAB_1074ae0ec;
        }
        if (((ulong)ppppplVar40 & uVar36) == 0) {
          ppppplVar29 = (long *****)((ulong)ppppplVar29 & uVar36);
        }
        else if (ppppplVar40 <= ppppplVar29) {
          uVar30 = 0;
          if (ppppplVar40 != (long *****)0x0) {
            uVar30 = (ulong)ppppplVar29 / (ulong)ppppplVar40;
          }
          ppppplVar29 = (long *****)((long)ppppplVar29 - uVar30 * (long)ppppplVar40);
        }
        uVar14 = (long)ppppplVar29 - (long)unaff_x25 < 0;
        uVar15 = ppppplVar29 == unaff_x25;
      } while ((bool)uVar15);
    }
  }
LAB_1074adf00:
  ppppplVar24 = (long *****)0xa0;
  __Znwm();
  func_0x0001074b5f0c();
  *ppppplVar24 = (long ****)0x0;
  ppppplVar24[1] = (long ****)ppppplVar18;
  pppplVar33 = *ppppplVar38;
  ppppplVar24[3] = ppppplVar38[1];
  ppppplVar24[2] = pppplVar33;
  ppppplVar24[5] = (long ****)0x0;
  ppppplVar24[4] = (long ****)0x0;
  ppppplVar24[7] = (long ****)0x0;
  ppppplVar24[6] = (long ****)0x0;
  ppppplVar24[9] = (long ****)0x0;
  ppppplVar24[8] = (long ****)0x0;
  ppppplVar24[0xb] = (long ****)0x0;
  ppppplVar24[10] = (long ****)0x0;
  ppppplVar24[0xd] = (long ****)0x0;
  ppppplVar24[0xc] = (long ****)0x0;
  ppppplVar24[0xf] = (long ****)0x0;
  ppppplVar24[0xe] = (long ****)0x0;
  ppppplVar24[0x11] = (long ****)0x0;
  ppppplVar24[0x10] = (long ****)0x0;
  ppppplVar24[0x13] = (long ****)0x0;
  ppppplVar24[0x12] = (long ****)0x0;
  func_0x0001074b57ac();
  if ((ppppplVar40 != (long *****)0x0) &&
     (func_0x0001074b5a74(), ppppplVar38 = unaff_x25, !(bool)uVar14)) goto LAB_1074ae0a8;
  func_0x0001074b5840();
  bVar13 = (long *****)0x2 < ppppplVar40;
  bVar16 = ppppplVar40 == (long *****)0x3;
  func_0x0001074b56ac();
  ppppplVar38 = extraout_x8_04;
  if (!bVar13 || bVar16) {
    ppppplVar38 = extraout_x9_01;
  }
  if ((long)ppppplVar38 - 1U == 0) {
    ppppplVar38 = (long *****)0x2;
  }
  else if (((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    ppppplVar24 = ppppplVar38;
  }
  ppppplVar40 = (long *****)ppppplVar31[1];
  uVar15 = ppppplVar38 == ppppplVar40;
  if (ppppplVar40 < ppppplVar38) {
LAB_1074adf88:
    if ((ulong)ppppplVar38 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1074ae100);
      (*pcVar12)();
    }
    lVar27 = (long)ppppplVar38 << 3;
    __Znwm(lVar27);
    FUN_1074b4800(ppppplVar31,lVar27);
    ppppplVar40 = (long *****)0x0;
    ppppplVar31[1] = (long ****)ppppplVar38;
    while (ppppplVar38 != ppppplVar40) {
      func_0x0001074b5b64();
      ppppplVar40 = extraout_x9_02;
    }
    uVar15 = 1;
    ppppplVar40 = ppppplVar38;
    if (ppppplVar31[2] != (long ****)0x0) {
      func_0x0001074b6bac();
      uVar15 = ((ulong)ppppplVar38 & extraout_x9_03) == 0;
      func_0x0001074b6b78();
      lVar27 = extraout_x8_05;
      uVar36 = extraout_x9_04;
      plVar32 = extraout_x10;
      ppppplVar24 = extraout_x11;
      while (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0) {
        ppppplVar29 = (long *****)plVar32[1];
        if (((ulong)ppppplVar38 & uVar36) == 0) {
          ppppplVar29 = (long *****)((ulong)ppppplVar29 & uVar36);
        }
        else if (ppppplVar38 <= ppppplVar29) {
          uVar30 = 0;
          if (ppppplVar38 != (long *****)0x0) {
            uVar30 = (ulong)ppppplVar29 / (ulong)ppppplVar38;
          }
          ppppplVar29 = (long *****)((long)ppppplVar29 - uVar30 * (long)ppppplVar38);
        }
        uVar15 = ppppplVar29 == ppppplVar24;
        if (!(bool)uVar15) {
          if (*(long *)(lVar27 + (long)ppppplVar29 * 8) == 0) {
            func_0x0001074b5e38();
            lVar27 = extraout_x8_07;
            uVar36 = extraout_x9_06;
            plVar32 = extraout_x12;
            ppppplVar24 = extraout_x11_01;
          }
          else {
            func_0x0001074b5630();
            lVar27 = extraout_x8_06;
            uVar36 = extraout_x9_05;
            plVar32 = extraout_x10_00;
            ppppplVar24 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (ppppplVar38 < ppppplVar40) {
    func_0x0001074b572c();
    if ((ppppplVar40 < (long *****)0x3) || (func_0x0001074b6d08(), extraout_x8_08 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074b5610();
    }
    if (ppppplVar38 <= ppppplVar24) {
      ppppplVar38 = ppppplVar24;
    }
    uVar15 = ppppplVar38 == ppppplVar40;
    if (ppppplVar38 < ppppplVar40) {
      if (ppppplVar38 != (long *****)0x0) goto LAB_1074adf88;
      func_0x0001074b6d8c();
      FUN_1074b4800();
      func_0x0001074b6bd4();
    }
    else {
      ppppplVar40 = (long *****)ppppplVar31[1];
    }
  }
  func_0x0001074b63e0();
  if ((bool)uVar15) {
    uVar15 = 1;
    ppppplVar38 = (long *****)(extraout_x8_09 & (ulong)ppppplVar18);
  }
  else {
    uVar15 = ppppplVar18 == ppppplVar40;
    ppppplVar38 = ppppplVar18;
    if (ppppplVar40 <= ppppplVar18) {
      func_0x0001074b6d28();
      ppppplVar38 = unaff_x25;
    }
  }
LAB_1074ae0a8:
  if ((*ppppplVar31)[(long)ppppplVar38] == (long ***)0x0) {
    func_0x0001074b5a80();
    if (extraout_x9_07 != 0) {
      func_0x0001074b5fc4();
      lVar27 = extraout_x8_10;
      if ((bool)uVar15) {
        ppppplVar31 = (long *****)((ulong)extraout_x9_08 & extraout_x10_01);
      }
      else {
        ppppplVar31 = extraout_x9_08;
        if (ppppplVar40 <= extraout_x9_08) {
          func_0x0001074b66ac();
          lVar27 = extraout_x8_11;
          ppppplVar31 = extraout_x9_09;
        }
      }
      *(long ******)(lVar27 + (long)ppppplVar31 * 8) = param_1;
    }
  }
  else {
    func_0x0001074b5928();
  }
  func_0x0001074b65f8();
  FUN_1074b4818();
LAB_1074ae0ec:
  return param_1 + 4;
}



/* Entry: 1074ade4c; end: 1074ae10b;  */

long FUN_1074ade4c(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  long extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long *plVar8;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long *extraout_x11;
  long *plVar9;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar10;
  long *unaff_x20;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x25;
  
  func_0x0001074b6e30();
  plVar8 = param_1 + 3;
  func_0x00010784b2bc();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar12 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar12) == 0) {
      unaff_x25 = (long *)(uVar12 & (ulong)plVar8);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)plVar8 - (long)plVar13 < 0;
      in_ZR = plVar8 == plVar13;
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        func_0x0001074b6d28();
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    unaff_x20 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar11;
          if (unaff_x20 == (long *)0x0) goto LAB_1074adf00;
          plVar7 = (long *)unaff_x20[1];
          in_NG = (long)plVar7 - (long)plVar8 < 0;
          in_ZR = plVar7 == plVar8;
          plVar11 = unaff_x20;
          if (!(bool)in_ZR) break;
          uVar5 = (ulong)(unaff_x20 + 2);
          func_0x0001073bc1c0(uVar5,param_2);
          if ((uVar5 & 1) != 0) goto LAB_1074ae0ec;
        }
        if (((ulong)plVar13 & uVar12) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar12);
        }
        else if (plVar13 <= plVar7) {
          uVar5 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = (ulong)plVar7 / (ulong)plVar13;
          }
          plVar7 = (long *)((long)plVar7 - uVar5 * (long)plVar13);
        }
        in_NG = (long)plVar7 - (long)unaff_x25 < 0;
        in_ZR = plVar7 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1074adf00:
  plVar11 = (long *)0xa0;
  __Znwm();
  func_0x0001074b5f0c();
  *plVar11 = 0;
  plVar11[1] = (long)plVar8;
  lVar6 = *param_2;
  plVar11[3] = param_2[1];
  plVar11[2] = lVar6;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xc] = 0;
  plVar11[0xf] = 0;
  plVar11[0xe] = 0;
  plVar11[0x11] = 0;
  plVar11[0x10] = 0;
  plVar11[0x13] = 0;
  plVar11[0x12] = 0;
  func_0x0001074b57ac();
  if ((plVar13 != (long *)0x0) && (func_0x0001074b5a74(), plVar7 = unaff_x25, !(bool)in_NG))
  goto LAB_1074ae0a8;
  func_0x0001074b5840();
  bVar2 = (long *)0x2 < plVar13;
  bVar3 = plVar13 == (long *)0x3;
  func_0x0001074b56ac();
  plVar7 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar7 = extraout_x9;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar11 = plVar7;
  }
  plVar13 = (long *)param_1[1];
  uVar4 = plVar7 == plVar13;
  if (plVar13 < plVar7) {
LAB_1074adf88:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1074ae100);
      (*pcVar1)();
    }
    lVar6 = (long)plVar7 << 3;
    __Znwm(lVar6);
    FUN_1074b4800(param_1,lVar6);
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar7;
    while (plVar7 != plVar13) {
      func_0x0001074b5b64();
      plVar13 = extraout_x9_00;
    }
    uVar4 = 1;
    plVar13 = plVar7;
    if (param_1[2] != 0) {
      func_0x0001074b6bac();
      uVar4 = ((ulong)plVar7 & extraout_x9_01) == 0;
      func_0x0001074b6b78();
      lVar6 = extraout_x8_00;
      uVar12 = extraout_x9_02;
      plVar11 = extraout_x10;
      plVar9 = extraout_x11;
      while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
        plVar10 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar12) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar12);
        }
        else if (plVar7 <= plVar10) {
          uVar5 = 0;
          if (plVar7 != (long *)0x0) {
            uVar5 = (ulong)plVar10 / (ulong)plVar7;
          }
          plVar10 = (long *)((long)plVar10 - uVar5 * (long)plVar7);
        }
        uVar4 = plVar10 == plVar9;
        if (!(bool)uVar4) {
          if (*(long *)(lVar6 + (long)plVar10 * 8) == 0) {
            func_0x0001074b5e38();
            lVar6 = extraout_x8_02;
            uVar12 = extraout_x9_04;
            plVar11 = extraout_x12;
            plVar9 = extraout_x11_01;
          }
          else {
            func_0x0001074b5630();
            lVar6 = extraout_x8_01;
            uVar12 = extraout_x9_03;
            plVar11 = extraout_x10_00;
            plVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar7 < plVar13) {
    func_0x0001074b572c();
    if ((plVar13 < (long *)0x3) || (func_0x0001074b6d08(), extraout_x8_03 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074b5610();
    }
    if (plVar7 <= plVar11) {
      plVar7 = plVar11;
    }
    uVar4 = plVar7 == plVar13;
    if (plVar7 < plVar13) {
      if (plVar7 != (long *)0x0) goto LAB_1074adf88;
      func_0x0001074b6d8c();
      FUN_1074b4800();
      func_0x0001074b6bd4();
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  func_0x0001074b63e0();
  if ((bool)uVar4) {
    in_ZR = 1;
    plVar7 = (long *)(extraout_x8_04 & (ulong)plVar8);
  }
  else {
    in_ZR = plVar8 == plVar13;
    plVar7 = plVar8;
    if (plVar13 <= plVar8) {
      func_0x0001074b6d28();
      plVar7 = unaff_x25;
    }
  }
LAB_1074ae0a8:
  if (*(long *)(*param_1 + (long)plVar7 * 8) == 0) {
    func_0x0001074b5a80();
    if (extraout_x9_05 != 0) {
      func_0x0001074b5fc4();
      lVar6 = extraout_x8_05;
      if ((bool)in_ZR) {
        plVar8 = (long *)((ulong)extraout_x9_06 & extraout_x10_01);
      }
      else {
        plVar8 = extraout_x9_06;
        if (plVar13 <= extraout_x9_06) {
          func_0x0001074b66ac();
          lVar6 = extraout_x8_06;
          plVar8 = extraout_x9_07;
        }
      }
      *(long **)(lVar6 + (long)plVar8 * 8) = unaff_x20;
    }
  }
  else {
    func_0x0001074b5928();
  }
  func_0x0001074b65f8();
  FUN_1074b4818();
LAB_1074ae0ec:
  return (long)unaff_x20 + 0x20;
}



/* Entry: 1074ae10c; end: 1074ae2eb;  */

long * FUN_1074ae10c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long lVar5;
  long *unaff_x19;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001074b5a14();
  puVar9 = (undefined8 *)(param_1 + 0x10);
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 < (long *)*puVar9) {
    plVar4 = plVar7;
    func_0x0001074b5d20(plVar7);
    plVar7 = plVar7 + 0x37;
    unaff_x19[1] = (long)plVar7;
  }
  else {
    lVar5 = *unaff_x19;
    if (0x94f2094f2094f2 < ((long)plVar7 - lVar5) / 0x1b8 + 1U) {
      FUN_1074b3bb4();
LAB_1074ae2bc:
      func_0x000104bd35f4();
      plVar7 = &lStack_a8;
      func_0x0001074b3b6c();
      func_0x0001074b5cfc();
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        lVar3 = plVar7[1];
        while (lVar3 != lVar5) {
          lVar3 = lVar3 + -0x1b8;
          func_0x00010729abec();
        }
        func_0x0001074b6980();
      }
      return plVar7;
    }
    func_0x0001074b5974();
    uVar1 = extraout_x10;
    if (0x4a7904a7904a78 < extraout_x9) {
      uVar1 = extraout_x8;
    }
    puStack_88 = puVar9;
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      if (extraout_x8 < uVar1) goto LAB_1074ae2bc;
      lVar3 = uVar1 * 0x1b8;
      __Znwm();
    }
    lVar10 = lVar3 + ((long)plVar7 - lVar5);
    lVar8 = lVar3 + uVar1 * 0x1b8;
    lStack_a8 = lVar3;
    lStack_a0 = lVar10;
    plStack_98 = (long *)lVar10;
    lStack_90 = lVar8;
    func_0x0001074b5d20();
    plVar7 = (long *)(lVar10 + 0x1b8);
    lVar6 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar10 = lVar10 + ((lVar2 - lVar6) / -0x1b8) * 0x1b8;
    plStack_78 = &lStack_60;
    plStack_70 = &lStack_58;
    uStack_68 = 0;
    lVar3 = lVar10;
    plStack_98 = plVar7;
    puStack_80 = puVar9;
    lStack_60 = lVar10;
    for (lVar5 = lVar6; lStack_58 = lVar3, lVar5 != lVar2; lVar5 = lVar5 + 0x1b8) {
      func_0x00010729b464(lVar3,lVar5);
      *(undefined4 *)(lVar3 + 0x1b0) = *(undefined4 *)(lVar5 + 0x1b0);
      lVar3 = lStack_58 + 0x1b8;
    }
    uStack_68 = 1;
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0x1b8) {
      func_0x00010729abec(lVar6);
    }
    FUN_1074b3bc0(&puStack_80);
    lStack_a8 = *unaff_x19;
    *unaff_x19 = lVar10;
    unaff_x19[1] = (long)plVar7;
    lStack_90 = unaff_x19[2];
    unaff_x19[2] = lVar8;
    plVar4 = &lStack_a8;
    lStack_a0 = lStack_a8;
    plStack_98 = (long *)lStack_a8;
    func_0x0001074b3b6c(plVar4);
  }
  unaff_x19[1] = (long)plVar7;
  return plVar4;
}



/* Entry: 1074ae2ec; end: 1074ae32b;  */

long * FUN_1074ae2ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1b8;
      func_0x00010729abec();
    }
    func_0x0001074b6980();
  }
  return param_1;
}



/* Entry: 1074ae32c; end: 1074ae3d7;  */

void FUN_1074ae32c(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x0001074b591c();
  lVar1 = (*(long **)(param_1 + 0x28))[1];
  for (lVar3 = **(long **)(param_1 + 0x28); lVar3 != lVar1; lVar3 = lVar3 + 8) {
    lVar2 = unaff_x20;
    FUN_1074e3c98();
    if (lVar2 != 0) {
      func_0x00010724ef84(auStack_58,*(long *)(unaff_x20 + 0x18) + 8);
      (**(code **)(*unaff_x19 + 0x30))();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    }
  }
  return;
}



/* Entry: 1074ae3d8; end: 1074ae3df;  */

undefined8 FUN_1074ae3d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1250);
}



/* Entry: 1074ae3e0; end: 1074ae45b;  */

long FUN_1074ae3e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074ae45c; end: 1074ae463;  */

void FUN_1074ae45c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x0001074ae498();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074ae464; end: 1074ae523;  */

void FUN_1074ae464(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x0001074ae498();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074ae524; end: 1074ae52b;  */

void FUN_1074ae524(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xb0;
    func_0x0001074ae560();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074ae52c; end: 1074ae63f;  */

void FUN_1074ae52c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xb0;
    func_0x0001074ae560();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074ae640; end: 1074ae647;  */

void FUN_1074ae640(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001074b591c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x120) {
    FUN_1074ae8c0(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074ae648; end: 1074ae683;  */

void FUN_1074ae648(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001074b591c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x120) {
    FUN_1074ae8c0(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074ae684; end: 1074ae73b;  */

undefined8 FUN_1074ae684(void)

{
  undefined8 unaff_x19;
  
  func_0x0001074b6094();
  func_0x0001074ae6a8();
  func_0x0001074b5fd4();
  FUN_1074ae7a8();
  return unaff_x19;
}



/* Entry: 1074ae73c; end: 1074ae74f;  */

void FUN_1074ae73c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074ae750; end: 1074ae773;  */

void FUN_1074ae750(void)

{
  func_0x0001074b58a8();
  FUN_1074ae774();
  return;
}



/* Entry: 1074ae774; end: 1074ae787;  */

void FUN_1074ae774(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074ae788; end: 1074ae7a7;  */

void FUN_1074ae788(void)

{
  func_0x0001074b5fd4();
  FUN_1074ae7a8();
  return;
}



/* Entry: 1074ae7a8; end: 1074ae7bf;  */

void FUN_1074ae7a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074ae7c0; end: 1074ae8bf;  */

/* WARNING: Possible PIC construction at 0x0001074ae7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074ae7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074ae7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074ae804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074ae814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074ae824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107266b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074ae828) */
/* WARNING: Removing unreachable block (ram,0x0001074ae818) */
/* WARNING: Removing unreachable block (ram,0x0001074ae808) */
/* WARNING: Removing unreachable block (ram,0x0001074ae7f8) */
/* WARNING: Removing unreachable block (ram,0x0001074ae7e8) */
/* WARNING: Removing unreachable block (ram,0x0001074ae7d8) */
/* WARNING: Removing unreachable block (ram,0x000107266b04) */

long FUN_1074ae7c0(long param_1)

{
  long extraout_x8;
  
  func_0x00010727599c(param_1 + 0x480);
  func_0x000107274f8c();
  if (extraout_x8 != 0) {
    func_0x000107261ddc(param_1);
    func_0x000107274f80();
  }
  return param_1;
}



/* Entry: 1074ae8c0; end: 1074ae90b;  */

void FUN_1074ae8c0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b45a8)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1074ae90c; end: 1074ae917;  */

void FUN_1074ae90c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072af8f4(param_2);
  func_0x0001072a7920();
  return;
}



/* Entry: 1074ae918; end: 1074ae96b;  */

void FUN_1074ae918(void)

{
  func_0x0001074b58a8();
  func_0x0001074ae93c();
  return;
}



/* Entry: 1074ae96c; end: 1074ae973;  */

void FUN_1074ae96c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x120;
    func_0x0001074ae9a8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074ae974; end: 1074aea6b;  */

void FUN_1074ae974(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x120;
    func_0x0001074ae9a8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074aea6c; end: 1074aeac3;  */

uint FUN_1074aea6c(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = param_2 - param_1 >> 3;
  uVar5 = param_4 - param_3 >> 3;
  uVar3 = 0;
  uVar1 = uVar5;
  if (uVar2 <= uVar5) {
    uVar1 = uVar2;
  }
  do {
    uVar2 = uVar3;
    uVar4 = (uint)uVar5;
    uVar3 = uVar1;
    if (uVar1 == uVar2) goto LAB_1074aeab4;
    uVar5 = *(ulong *)(param_1 + uVar2 * 8);
    uVar6 = *(ulong *)(param_3 + uVar2 * 8);
    uVar3 = uVar2 + 1;
  } while (uVar5 == uVar6);
  uVar4 = (uint)(uVar6 <= uVar5);
  uVar3 = uVar2;
LAB_1074aeab4:
  return uVar3 < uVar1 & uVar4;
}



/* Entry: 1074aeac4; end: 1074aed9b;  */

long * FUN_1074aeac4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long *plVar8;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long *extraout_x11;
  long *plVar9;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *plVar10;
  long *extraout_x12;
  long *plVar11;
  long *plVar12;
  long *unaff_x21;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  plVar14 = (long *)*param_4;
  plVar15 = (long *)param_3[1];
  if (plVar15 != (long *)0x0) {
    func_0x0001074b63e0();
    if ((bool)in_ZR) {
      unaff_x21 = (long *)(extraout_x8 & (ulong)plVar14);
      in_ZR = true;
    }
    else {
      in_NG = (long)plVar14 - (long)plVar15 < 0;
      in_ZR = plVar14 == plVar15;
      unaff_x21 = plVar14;
      if (plVar15 <= plVar14) {
        uVar7 = 0;
        if (plVar15 != (long *)0x0) {
          uVar7 = (ulong)plVar14 / (ulong)plVar15;
        }
        unaff_x21 = (long *)((long)plVar14 - uVar7 * (long)plVar15);
      }
    }
    plVar12 = *(long **)(*param_3 + (long)unaff_x21 * 8);
    uVar7 = extraout_x8;
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1074aeb68;
          plVar8 = (long *)plVar12[1];
          if (plVar8 != plVar14) break;
          in_NG = plVar12[2] - (long)plVar14 < 0;
          in_ZR = false;
          if ((long *)plVar12[2] == plVar14) goto LAB_1074aed68;
        }
        if (((ulong)plVar15 & uVar7) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar7);
        }
        else if (plVar15 <= plVar8) {
          func_0x0001074b66ac();
          uVar7 = extraout_x8_00;
          plVar8 = extraout_x9;
        }
        in_NG = (long)plVar8 - (long)unaff_x21 < 0;
        in_ZR = plVar8 == unaff_x21;
      } while ((bool)in_ZR);
    }
  }
LAB_1074aeb68:
  plVar8 = param_3 + 2;
  plVar12 = (long *)0x30;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar14;
  plVar12[2] = (long)plVar14;
  plVar10 = plVar12 + 3;
  func_0x0001073f1068();
  func_0x0001074b57ac();
  if ((plVar15 != (long *)0x0) &&
     (func_0x0001074b5a74(param_1,param_2,(float)plVar15), !(bool)in_NG)) goto LAB_1074aed14;
  func_0x0001074b5840();
  bVar3 = (long *)0x2 < plVar15;
  bVar4 = plVar15 == (long *)0x3;
  func_0x0001074b56ac();
  plVar13 = extraout_x8_01;
  if (!bVar3 || bVar4) {
    plVar13 = extraout_x9_00;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar10 = plVar13;
  }
  plVar15 = (long *)param_3[1];
  uVar5 = plVar13 == plVar15;
  if (plVar15 < plVar13) {
LAB_1074aebf0:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1074aed8c);
      (*pcVar2)();
    }
    lVar6 = (long)plVar13 << 3;
    __Znwm(lVar6);
    FUN_1074af300(param_3,lVar6);
    plVar15 = (long *)0x0;
    param_3[1] = (long)plVar13;
    while (plVar13 != plVar15) {
      func_0x0001074b5b64();
      plVar15 = extraout_x9_01;
    }
    uVar5 = 1;
    plVar15 = plVar13;
    if (*plVar8 != 0) {
      func_0x0001074b6b98();
      uVar5 = ((ulong)plVar13 & extraout_x9_02) == 0;
      func_0x0001074b6b78();
      lVar6 = extraout_x8_02;
      uVar7 = extraout_x9_03;
      plVar10 = extraout_x10;
      plVar9 = extraout_x11;
      while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
        plVar11 = (long *)plVar10[1];
        if (((ulong)plVar13 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (plVar13 <= plVar11) {
          uVar1 = 0;
          if (plVar13 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)plVar13;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar13);
        }
        uVar5 = plVar11 == plVar9;
        if (!(bool)uVar5) {
          if (*(long *)(lVar6 + (long)plVar11 * 8) == 0) {
            func_0x0001074b5e38();
            lVar6 = extraout_x8_04;
            uVar7 = extraout_x9_05;
            plVar10 = extraout_x12;
            plVar9 = extraout_x11_01;
          }
          else {
            func_0x0001074b5630();
            lVar6 = extraout_x8_03;
            uVar7 = extraout_x9_04;
            plVar10 = extraout_x10_00;
            plVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar13 < plVar15) {
    func_0x0001074b572c();
    if ((plVar15 < (long *)0x3) || (func_0x0001074b6d08(), extraout_x8_05 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074b5610();
    }
    if (plVar13 <= plVar10) {
      plVar13 = plVar10;
    }
    uVar5 = plVar13 == plVar15;
    if (plVar13 < plVar15) {
      if (plVar13 != (long *)0x0) goto LAB_1074aebf0;
      func_0x0001074b6d8c();
      FUN_1074af300();
      func_0x0001074b6bd4();
    }
    else {
      plVar15 = (long *)param_3[1];
    }
  }
  func_0x0001074b63e0();
  if ((bool)uVar5) {
    in_ZR = 1;
    unaff_x21 = (long *)(extraout_x8_06 & (ulong)plVar14);
  }
  else {
    in_ZR = plVar14 == plVar15;
    unaff_x21 = plVar14;
    if (plVar15 <= plVar14) {
      uVar7 = 0;
      if (plVar15 != (long *)0x0) {
        uVar7 = (ulong)plVar14 / (ulong)plVar15;
      }
      unaff_x21 = (long *)((long)plVar14 - uVar7 * (long)plVar15);
    }
  }
LAB_1074aed14:
  lVar6 = *param_3;
  if (*(long *)(lVar6 + (long)unaff_x21 * 8) == 0) {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
    *(long **)(lVar6 + (long)unaff_x21 * 8) = plVar8;
    if (*plVar12 != 0) {
      func_0x0001074b5fc4();
      lVar6 = extraout_x8_07;
      if ((bool)in_ZR) {
        plVar14 = (long *)((ulong)extraout_x9_06 & extraout_x10_01);
      }
      else {
        plVar14 = extraout_x9_06;
        if (plVar15 <= extraout_x9_06) {
          func_0x0001074b66ac();
          lVar6 = extraout_x8_08;
          plVar14 = extraout_x9_07;
        }
      }
      *(long **)(lVar6 + (long)plVar14 * 8) = plVar12;
    }
  }
  else {
    func_0x0001074b5928();
  }
  func_0x0001074b5ab8();
  FUN_1074af318();
LAB_1074aed68:
  return plVar12 + 3;
}



/* Entry: 1074aed9c; end: 1074af07f;  */

void FUN_1074aed9c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  ulong extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long *plVar7;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar8;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  long extraout_x9_05;
  undefined8 *extraout_x9_06;
  undefined8 *extraout_x9_07;
  undefined8 *puVar9;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  long *extraout_x12;
  undefined8 *puVar10;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x25;
  undefined8 uVar13;
  
  func_0x0001074b6e30();
  func_0x0001074b61ac();
  param_2 = (undefined8 *)*param_2;
  puVar12 = *(undefined8 **)(param_1 + 8);
  if (puVar12 != (undefined8 *)0x0) {
    func_0x0001074b63e0();
    if ((bool)in_ZR) {
      unaff_x25 = (undefined8 *)(extraout_x8 & (ulong)param_2);
      in_ZR = true;
    }
    else {
      in_NG = (long)param_2 - (long)puVar12 < 0;
      in_ZR = param_2 == puVar12;
      unaff_x25 = param_2;
      if (puVar12 <= param_2) {
        uVar8 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar8 = (ulong)param_2 / (ulong)puVar12;
        }
        unaff_x25 = (undefined8 *)((long)param_2 - uVar8 * (long)puVar12);
      }
    }
    plVar7 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1074aee40;
          puVar9 = (undefined8 *)plVar7[1];
          if (puVar9 != param_2) break;
          in_NG = plVar7[2] - (long)param_2 < 0;
          in_ZR = false;
          if ((undefined8 *)plVar7[2] == param_2) {
            return;
          }
        }
        if (((ulong)puVar12 & extraout_x8) == 0) {
          puVar9 = (undefined8 *)((ulong)puVar9 & extraout_x8);
        }
        else if (puVar12 <= puVar9) {
          uVar8 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            uVar8 = (ulong)puVar9 / (ulong)puVar12;
          }
          puVar9 = (undefined8 *)((long)puVar9 - uVar8 * (long)puVar12);
        }
        in_NG = (long)puVar9 - (long)unaff_x25 < 0;
        in_ZR = puVar9 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1074aee40:
  puVar9 = (undefined8 *)0x68;
  __Znwm();
  func_0x0001074b5f0c();
  *puVar9 = 0;
  puVar9[1] = param_2;
  puVar9[2] = param_2;
  uVar13 = *(undefined8 *)(unaff_x21 + 8);
  puVar9[4] = *(undefined8 *)(unaff_x21 + 0x10);
  puVar9[3] = uVar13;
  *(undefined8 *)(unaff_x21 + 8) = 0;
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  uVar13 = *(undefined8 *)(unaff_x21 + 0x18);
  puVar9[6] = *(undefined8 *)(unaff_x21 + 0x20);
  puVar9[5] = uVar13;
  uVar13 = *(undefined8 *)(unaff_x21 + 0x28);
  puVar9[8] = *(undefined8 *)(unaff_x21 + 0x30);
  puVar9[7] = uVar13;
  *(undefined8 *)(unaff_x21 + 0x28) = 0;
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  uVar13 = *(undefined8 *)(unaff_x21 + 0x38);
  puVar9[10] = *(undefined8 *)(unaff_x21 + 0x40);
  puVar9[9] = uVar13;
  *(undefined8 *)(unaff_x21 + 0x38) = 0;
  *(undefined8 *)(unaff_x21 + 0x40) = 0;
  uVar13 = *(undefined8 *)(unaff_x21 + 0x48);
  puVar9[0xc] = *(undefined8 *)(unaff_x21 + 0x50);
  puVar9[0xb] = uVar13;
  *(undefined8 *)(unaff_x21 + 0x48) = 0;
  *(undefined8 *)(unaff_x21 + 0x50) = 0;
  func_0x0001074b57ac();
  if ((puVar12 != (undefined8 *)0x0) && (func_0x0001074b5a74(), !(bool)in_NG)) goto LAB_1074af00c;
  func_0x0001074b5840();
  bVar3 = (undefined8 *)0x2 < puVar12;
  bVar4 = puVar12 == (undefined8 *)0x3;
  func_0x0001074b56ac();
  puVar11 = extraout_x8_00;
  if (!bVar3 || bVar4) {
    puVar11 = extraout_x9;
  }
  if ((long)puVar11 - 1U == 0) {
    puVar11 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar11 & (long)puVar11 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar9 = puVar11;
  }
  puVar12 = (undefined8 *)unaff_x19[1];
  uVar5 = puVar11 == puVar12;
  if (puVar12 < puVar11) {
LAB_1074aeee8:
    if ((ulong)puVar11 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1074af074);
      (*pcVar2)();
    }
    __Znwm((long)puVar11 << 3);
    FUN_1074af454();
    puVar12 = (undefined8 *)0x0;
    unaff_x19[1] = (long)puVar11;
    while (puVar11 != puVar12) {
      func_0x0001074b5b64();
      puVar12 = extraout_x9_00;
    }
    uVar5 = 1;
    puVar12 = puVar11;
    if (unaff_x19[2] != 0) {
      func_0x0001074b6b98();
      uVar5 = ((ulong)puVar11 & extraout_x9_01) == 0;
      func_0x0001074b6b78();
      lVar6 = extraout_x8_01;
      uVar8 = extraout_x9_02;
      plVar7 = extraout_x10;
      puVar9 = extraout_x11;
      while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
        puVar10 = (undefined8 *)plVar7[1];
        if (((ulong)puVar11 & uVar8) == 0) {
          puVar10 = (undefined8 *)((ulong)puVar10 & uVar8);
        }
        else if (puVar11 <= puVar10) {
          uVar1 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar10 / (ulong)puVar11;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar1 * (long)puVar11);
        }
        uVar5 = puVar10 == puVar9;
        if (!(bool)uVar5) {
          if (*(long *)(lVar6 + (long)puVar10 * 8) == 0) {
            func_0x0001074b5e38();
            lVar6 = extraout_x8_03;
            uVar8 = extraout_x9_04;
            plVar7 = extraout_x12;
            puVar9 = extraout_x11_01;
          }
          else {
            func_0x0001074b5630();
            lVar6 = extraout_x8_02;
            uVar8 = extraout_x9_03;
            plVar7 = extraout_x10_00;
            puVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (puVar11 < puVar12) {
    func_0x0001074b572c();
    if ((puVar12 < (undefined8 *)0x3) || (func_0x0001074b6d08(), extraout_x8_04 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074b5610();
    }
    if (puVar11 <= puVar9) {
      puVar11 = puVar9;
    }
    uVar5 = puVar11 == puVar12;
    if (puVar11 < puVar12) {
      if (puVar11 != (undefined8 *)0x0) goto LAB_1074aeee8;
      func_0x0001074b6d8c();
      FUN_1074af454();
      func_0x0001074b6bd4();
    }
    else {
      puVar12 = (undefined8 *)unaff_x19[1];
    }
  }
  func_0x0001074b63e0();
  if ((bool)uVar5) {
    in_ZR = 1;
    unaff_x25 = (undefined8 *)(extraout_x8_05 & (ulong)param_2);
  }
  else {
    in_ZR = param_2 == puVar12;
    unaff_x25 = param_2;
    if (puVar12 <= param_2) {
      uVar8 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar8 = (ulong)param_2 / (ulong)puVar12;
      }
      unaff_x25 = (undefined8 *)((long)param_2 - uVar8 * (long)puVar12);
    }
  }
LAB_1074af00c:
  if (*(long *)(*unaff_x19 + (long)unaff_x25 * 8) == 0) {
    func_0x0001074b5a80();
    if (extraout_x9_05 != 0) {
      func_0x0001074b5fc4();
      lVar6 = extraout_x8_06;
      if ((bool)in_ZR) {
        puVar9 = (undefined8 *)((ulong)extraout_x9_06 & extraout_x10_01);
      }
      else {
        puVar9 = extraout_x9_06;
        if (puVar12 <= extraout_x9_06) {
          func_0x0001074b66ac();
          lVar6 = extraout_x8_07;
          puVar9 = extraout_x9_07;
        }
      }
      *(undefined8 *)(lVar6 + (long)puVar9 * 8) = unaff_x20;
    }
  }
  else {
    func_0x0001074b5928();
  }
  func_0x0001074b5ab8();
  FUN_1074af420();
  return;
}



/* Entry: 1074af080; end: 1074af0b7;  */

undefined8 FUN_1074af080(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010749f518(param_1 + 0x40);
  FUN_1073f2880(param_1 + 0x30);
  func_0x0001073ad47c(param_1 + 0x20);
  func_0x0001073f2b80();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1074af0b8; end: 1074af117;  */

bool FUN_1074af0b8(ulong param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  FUN_1074aea6c();
  iVar2 = (int)uVar3;
  if ((uVar3 & 1) == 0) {
    if (param_2 - param_1 == param_4 - param_3) {
      func_0x0001074b6388();
      _memcmp();
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1074af118; end: 1074af137;  */

void FUN_1074af118(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1074af080();
  }
  return;
}



/* Entry: 1074af138; end: 1074af243;  */

void FUN_1074af138(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar3;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar4;
  long *extraout_x9_04;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar5;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar6;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074b6ca8();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x0001074b6d48();
    if (!(bool)in_ZR) {
      func_0x0001074b6450();
      unaff_x19 = param_1;
    }
  }
  func_0x0001074b6c1c();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x0001074b5784();
    if (((bool)in_CY) && (func_0x0001074b6610(), extraout_x8_01 == 0)) {
      func_0x0001074b5610();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001074b5ea8();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x0001074b6c90();
      FUN_1074af244();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x0001074b6304();
    func_0x0001074b664c();
    FUN_1074af244();
    func_0x0001074b5a98();
    plVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == plVar3, !(bool)uVar1) {
      func_0x0001074b5b64();
      plVar3 = extraout_x9_00;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x0001074b5814();
      func_0x0001074b5800();
      plVar3 = extraout_x9_01;
      while (*plVar3 != 0) {
        func_0x0001074b65d4();
        lVar2 = extraout_x8;
        plVar3 = extraout_x12;
        plVar4 = extraout_x9_02;
        plVar5 = extraout_x11;
        if ((bool)uVar1) {
          plVar6 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar6 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001074b6640();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_03;
            plVar5 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            plVar6 = extraout_x13_00;
          }
        }
        uVar1 = plVar6 == plVar5;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            func_0x0001074b661c();
            plVar3 = extraout_x12_01;
          }
          else {
            *plVar4 = *plVar3;
            func_0x0001074b5650();
            plVar3 = extraout_x9_04;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074af244; end: 1074af25b;  */

void FUN_1074af244(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074af25c; end: 1074af2ff;  */

void FUN_1074af25c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001074b5a14();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001074b56c0();
    } while (extraout_w10 != 0);
  }
  func_0x0001074b5dbc(unaff_x19 + 0x20,unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  return;
}



/* Entry: 1074af300; end: 1074af317;  */

void FUN_1074af300(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074af318; end: 1074af34b;  */

void FUN_1074af318(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001074b5858();
  if (unaff_x20 != 0) {
    func_0x0001074b6064();
    if ((bool)in_ZR) {
      func_0x00010048b0a4(unaff_x20 + 0x18);
    }
    func_0x0001074b5a20();
  }
  return;
}



/* Entry: 1074af34c; end: 1074af41f;  */

long * FUN_1074af34c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar5 = lVar3 - lVar2;
  lVar6 = *param_1;
  if ((ulong)(param_1[2] - lVar6) < uVar5) {
    func_0x00010735891c(param_1);
    plVar4 = param_1;
    func_0x000106e528f0(param_1,(long)uVar5 >> 3);
    func_0x00010048ac80(param_1,plVar4);
    lVar6 = param_1[1];
  }
  else {
    lVar7 = param_1[1];
    if ((ulong)(lVar7 - lVar6) < uVar5) {
      lVar1 = lVar2 + (lVar7 - lVar6);
      if (lVar7 != lVar6) {
        _memmove(lVar6,lVar2);
        lVar7 = param_1[1];
      }
      lVar3 = lVar3 - lVar1;
      if (lVar3 != 0) {
        _memmove(lVar7,lVar1,lVar3);
      }
      lVar6 = lVar7 + lVar3;
      goto LAB_1074af410;
    }
  }
  if (lVar3 != lVar2) {
    func_0x0001074b59d4();
  }
  lVar6 = lVar6 + uVar5;
LAB_1074af410:
  param_1[1] = lVar6;
  return param_1;
}



/* Entry: 1074af420; end: 1074af453;  */

void FUN_1074af420(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001074b5858();
  if (unaff_x20 != 0) {
    func_0x0001074b6064();
    if ((bool)in_ZR) {
      FUN_1074af080(unaff_x20 + 0x18);
    }
    func_0x0001074b5a20();
  }
  return;
}



/* Entry: 1074af454; end: 1074af46b;  */

void FUN_1074af454(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074af46c; end: 1074af4b7;  */

long FUN_1074af46c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x0001074ae560();
    func_0x0001074b5a20();
  }
  func_0x0001074b6d74();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074af4b8; end: 1074af4fb;  */

void FUN_1074af4b8(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001074b5da4();
  FUN_1074af4fc();
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  unaff_x19[1] = uStack_38;
  *unaff_x19 = uStack_40;
  unaff_x19[3] = uStack_28;
  unaff_x19[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  func_0x00010726e4c8(&uStack_40);
  return;
}



/* Entry: 1074af4fc; end: 1074af5e7;  */

void FUN_1074af4fc(undefined8 param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_2;
  func_0x0001074b5fd4();
  FUN_1074af5e8();
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar5 != 0) {
    func_0x0001074b6d80();
    FUN_10735cd00();
    FUN_10735cd68();
    lStack_40 = param_2;
    while (lStack_40 != 0) {
      lStack_38 = lVar4;
      func_0x000104c2fe38();
      plVar2 = unaff_x19;
      func_0x00010ae6c8b4();
      bVar1 = (byte)lVar4 & 0x7f;
      uVar3 = unaff_x19[2];
      lVar4 = *unaff_x19;
      *(byte *)(lVar4 + (long)plVar2) = bVar1;
      *(byte *)(lVar4 + ((long)plVar2 - 7U & uVar3) + (uVar3 & 7)) = bVar1;
      func_0x00010735cd54();
      FUN_10735ce00(&lStack_40);
      lVar4 = lStack_38;
    }
    unaff_x19[3] = lVar5;
    *(long *)(*unaff_x19 + -8) = *(long *)(*unaff_x19 + -8) - lVar5;
  }
  return;
}



/* Entry: 1074af5e8; end: 1074af5eb;  */

void FUN_1074af5e8(undefined8 param_1,long param_2)

{
  func_0x0001073601d8();
  if (param_2 != 0) {
    func_0x0001073607f4();
    func_0x00010726d624();
  }
  return;
}



/* Entry: 1074af5ec; end: 1074af623;  */

undefined8 * FUN_1074af5ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  func_0x000107375edc(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Entry: 1074af624; end: 1074af62f;  */

void FUN_1074af624(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001074b56f8();
  func_0x0001074b591c();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0xb0) * 0xb0;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0xb0) {
    FUN_1074af25c(lVar2,lVar3);
    lVar2 = lVar2 + 0xb0;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb0) {
    func_0x0001074ae560(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001074b5668();
  return;
}



/* Entry: 1074af630; end: 1074af6b3;  */

void FUN_1074af630(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001074b591c();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0xb0) * 0xb0;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0xb0) {
    FUN_1074af25c(lVar2,lVar3);
    lVar2 = lVar2 + 0xb0;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb0) {
    func_0x0001074ae560(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001074b5668();
  return;
}



/* Entry: 1074af6b4; end: 1074af70f;  */

long * FUN_1074af6b4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x20;
  long lVar1;
  
  func_0x0001074b5a14();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    if (0x1745d1745d1745d < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0xb0;
        func_0x0001074ae560();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    func_0x0001074b686c(0xb0);
  }
  func_0x0001074b5adc(0xb0);
  return param_1;
}



/* Entry: 1074af710; end: 1074af757;  */

long * FUN_1074af710(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0xb0;
    func_0x0001074ae560();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074af758; end: 1074af7ef;  */

long FUN_1074af758(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (param_2 != uVar6) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1074af7f0; end: 1074afadf;  */

bool FUN_1074af7f0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar10;
  undefined8 extraout_x9;
  long *plVar11;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar12;
  ulong extraout_x10;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong *puVar16;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar17;
  ulong unaff_x27;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar7 = param_3;
  func_0x0001074b6c84();
  puVar16 = (ulong *)*param_1;
  puVar2 = (ulong *)param_1[1];
  plVar7 = plVar7 + 2;
  do {
    if (((puVar16 == puVar2) || (uVar8 = unaff_x20[1], uVar8 == 0)) || (unaff_x20[3] == 0)) {
      return puVar16 == puVar2;
    }
    uVar10 = *puVar16;
    uVar12 = uVar8 - 1;
    if ((uVar8 & uVar12) == 0) {
      uVar13 = uVar12 & uVar10;
    }
    else {
      uVar13 = uVar10;
      if (uVar8 <= uVar10) {
        uVar13 = 0;
        if (uVar8 != 0) {
          uVar13 = uVar10 / uVar8;
        }
        uVar13 = uVar10 - uVar13 * uVar8;
      }
    }
    plVar14 = *(long **)(*unaff_x20 + uVar13 * 8);
    if (plVar14 == (long *)0x0) {
      return false;
    }
    do {
      while( true ) {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          return false;
        }
        uVar15 = plVar14[1];
        if (uVar10 == uVar15) break;
        if ((uVar8 & uVar12) == 0) {
          uVar15 = uVar15 & uVar12;
        }
        else if (uVar8 <= uVar15) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar15 / uVar8;
          }
          uVar15 = uVar15 - uVar3 * uVar8;
        }
        if (uVar15 != uVar13) {
          return false;
        }
      }
    } while (plVar14[2] != uVar10);
    plVar14 = (long *)(plVar14[3] + 0x10);
    while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
      uVar5 = *(int *)(plVar14 + 0x13) + -1 < 0;
      uVar6 = *(int *)(plVar14 + 0x13) == 1;
      if (!(bool)uVar6) {
        return false;
      }
      FUN_1074afcd4(param_3,(long)((float)(ulong)(unaff_x21[1] - *unaff_x21 >> 3) /
                                  *(float *)(param_3 + 4)));
      uVar8 = (ulong)(plVar14 + 2);
      func_0x000104c2fe38();
      uVar10 = param_3[1];
      if (uVar10 != 0) {
        uVar12 = uVar10 - 1;
        if ((uVar10 & uVar12) == 0) {
          unaff_x27 = uVar12 & uVar8;
          uVar6 = true;
          uVar5 = false;
        }
        else {
          uVar5 = (long)(uVar8 - uVar10) < 0;
          uVar6 = uVar8 == uVar10;
          unaff_x27 = uVar8;
          if (uVar10 <= uVar8) {
            uVar13 = 0;
            if (uVar10 != 0) {
              uVar13 = uVar8 / uVar10;
            }
            unaff_x27 = uVar8 - uVar13 * uVar10;
          }
        }
        plVar17 = *(long **)(*param_3 + unaff_x27 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_1074af9a0;
              uVar13 = plVar17[1];
              uVar5 = (long)(uVar13 - uVar8) < 0;
              uVar6 = uVar13 == uVar8;
              if (!(bool)uVar6) break;
              plVar11 = plVar17 + 2;
              func_0x000104c32db4(plVar11,plVar14 + 2);
              if (((ulong)plVar11 & 1) != 0) goto LAB_1074afa94;
            }
            if ((uVar10 & uVar12) == 0) {
              uVar13 = uVar13 & uVar12;
            }
            else if (uVar10 <= uVar13) {
              uVar15 = 0;
              if (uVar10 != 0) {
                uVar15 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar15 * uVar10;
            }
            uVar5 = (long)(uVar13 - unaff_x27) < 0;
            uVar6 = uVar13 == unaff_x27;
          } while ((bool)uVar6);
        }
      }
LAB_1074af9a0:
      plVar17 = (long *)0x50;
      __Znwm();
      uStack_68 = 1;
      *plVar17 = 0;
      plVar17[1] = uVar8;
      plStack_78 = plVar17;
      plStack_70 = plVar7;
      func_0x000104c2fe00(plVar17 + 2,plVar14 + 2);
      plVar17[9] = 0;
      func_0x0001074b57ac();
      if ((uVar10 == 0) || (func_0x0001074b5a74(), (bool)uVar5)) {
        func_0x0001074b6c34();
        bVar4 = 2 < uVar10;
        uVar6 = uVar10 == 3;
        func_0x0001074b56ac();
        uVar1 = extraout_x8;
        if (!bVar4 || (bool)uVar6) {
          uVar1 = extraout_x9;
        }
        FUN_1074afcd4(param_3,uVar1);
        uVar10 = param_3[1];
        func_0x0001074b6664();
        if ((bool)uVar6) {
          uVar6 = 1;
          unaff_x27 = extraout_x8_00 & uVar8;
        }
        else {
          uVar6 = uVar8 == uVar10;
          unaff_x27 = uVar8;
          if (uVar10 <= uVar8) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = uVar8 / uVar10;
            }
            unaff_x27 = uVar8 - uVar12 * uVar10;
          }
        }
      }
      lVar9 = *param_3;
      plVar11 = *(long **)(lVar9 + unaff_x27 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar17 = *plVar7;
        *plVar7 = (long)plVar17;
        *(long **)(lVar9 + unaff_x27 * 8) = plVar7;
        if (*plVar17 != 0) {
          func_0x0001074b6538();
          lVar9 = extraout_x8_01;
          if ((bool)uVar6) {
            uVar8 = extraout_x9_00 & extraout_x10;
          }
          else {
            uVar8 = extraout_x9_00;
            if (uVar10 <= extraout_x9_00) {
              func_0x0001074b6658();
              lVar9 = extraout_x8_02;
              uVar8 = extraout_x9_01;
            }
          }
          *(long **)(lVar9 + uVar8 * 8) = plVar17;
        }
      }
      else {
        *plVar17 = *plVar11;
        *plVar11 = (long)plVar17;
      }
      plStack_78 = (long *)0x0;
      param_3[3] = param_3[3] + 1;
      FUN_1074afdf8(&plStack_78);
LAB_1074afa94:
      plVar17[9] = (long)(plVar14 + 10);
    }
    puVar16 = puVar16 + 1;
  } while( true );
}



/* Entry: 1074afae0; end: 1074afc0b;  */

undefined4 * FUN_1074afae0(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_f8 [24];
  undefined4 auStack_e0 [6];
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x0001074b6df0();
  func_0x0001074b56e8();
  auStack_e0[0] = 0xf1;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  ppuStack_c0 = &PTR_DAT_110996720;
  uStack_b8 = 0;
  uStack_a0 = 0xf1;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_38 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8);
  func_0x00010726e300(auStack_e0,"reason",auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  func_0x0001074b6100(auStack_70);
  func_0x0001074b5cb0();
  FUN_107371bc4(auStack_e0);
  func_0x000104c2f714(auStack_70);
  puVar5 = auStack_e0;
  func_0x0001074b5a40();
  puVar2 = auStack_e0;
  func_0x000107262330();
  func_0x0001074b5698(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  plVar7 = (long *)auStack_e0;
  func_0x000107262330();
  func_0x0001074b58b8();
  plVar8 = (long *)plVar7[1];
  if ((plVar8 != (long *)0x0) && (plVar3 = plVar7 + 3, *plVar3 != 0)) {
    func_0x00010726364c();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar3 - uVar1 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*plVar7 + (long)plVar10 * 8);
    if (plVar7 == (long *)0x0) {
      return (undefined4 *)0x0;
    }
    do {
      while( true ) {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (undefined4 *)0x0;
        }
        plVar6 = (long *)plVar7[1];
        if (plVar3 != plVar6) break;
        lVar4 = (long)(plVar7 + 2);
        func_0x000104c32db4(lVar4,puVar5);
        if ((int)lVar4 != 0) {
          return (undefined4 *)plVar7;
        }
      }
      if (((ulong)plVar8 & uVar9) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar9);
      }
      else if (plVar8 <= plVar6) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar8);
      }
    } while (plVar6 == plVar10);
  }
  return (undefined4 *)0x0;
}



/* Entry: 1074afc0c; end: 1074afcd3;  */

long FUN_1074afc0c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074afcd4; end: 1074afddf;  */

void FUN_1074afcd4(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar3;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar4;
  long *extraout_x9_04;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar5;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar6;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074b6ca8();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x0001074b6d48();
    if (!(bool)in_ZR) {
      func_0x0001074b6450();
      unaff_x19 = param_1;
    }
  }
  func_0x0001074b6c1c();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x0001074b5784();
    if (((bool)in_CY) && (func_0x0001074b6610(), extraout_x8_01 == 0)) {
      func_0x0001074b5610();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001074b5ea8();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x0001074b6c90();
      FUN_1074afde0();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x0001074b6304();
    func_0x0001074b664c();
    FUN_1074afde0();
    func_0x0001074b5a98();
    plVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == plVar3, !(bool)uVar1) {
      func_0x0001074b5b64();
      plVar3 = extraout_x9_00;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x0001074b5814();
      func_0x0001074b5800();
      plVar3 = extraout_x9_01;
      while (*plVar3 != 0) {
        func_0x0001074b65d4();
        lVar2 = extraout_x8;
        plVar3 = extraout_x12;
        plVar4 = extraout_x9_02;
        plVar5 = extraout_x11;
        if ((bool)uVar1) {
          plVar6 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar6 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001074b6640();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_03;
            plVar5 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            plVar6 = extraout_x13_00;
          }
        }
        uVar1 = plVar6 == plVar5;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            func_0x0001074b661c();
            plVar3 = extraout_x12_01;
          }
          else {
            *plVar4 = *plVar3;
            func_0x0001074b5650();
            plVar3 = extraout_x9_04;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074afde0; end: 1074afdf7;  */

void FUN_1074afde0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074afdf8; end: 1074afe2b;  */

void FUN_1074afdf8(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001074b5858();
  if (unaff_x20 != 0) {
    func_0x0001074b6064();
    if ((bool)in_ZR) {
      func_0x000104c2f714(unaff_x20 + 0x10);
    }
    func_0x0001074b5a20();
  }
  return;
}



/* Entry: 1074afe2c; end: 1074b00db;  */

long FUN_1074afe2c(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  long extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long *plVar8;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long *extraout_x11;
  long *plVar9;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar10;
  long *unaff_x20;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x25;
  
  func_0x0001074b6e30();
  plVar8 = param_1 + 3;
  func_0x00010784b274();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar12 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar12) == 0) {
      unaff_x25 = (long *)(uVar12 & (ulong)plVar8);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)plVar8 - (long)plVar13 < 0;
      in_ZR = plVar8 == plVar13;
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        func_0x0001074b6d28();
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    unaff_x20 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar11;
          if (unaff_x20 == (long *)0x0) goto LAB_1074afee0;
          plVar7 = (long *)unaff_x20[1];
          in_NG = (long)plVar7 - (long)plVar8 < 0;
          in_ZR = plVar7 == plVar8;
          plVar11 = unaff_x20;
          if (!(bool)in_ZR) break;
          uVar5 = (ulong)(unaff_x20 + 2);
          FUN_1074b07f0(uVar5,param_2);
          if ((uVar5 & 1) != 0) goto LAB_1074b00bc;
        }
        if (((ulong)plVar13 & uVar12) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar12);
        }
        else if (plVar13 <= plVar7) {
          uVar5 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = (ulong)plVar7 / (ulong)plVar13;
          }
          plVar7 = (long *)((long)plVar7 - uVar5 * (long)plVar13);
        }
        in_NG = (long)plVar7 - (long)unaff_x25 < 0;
        in_ZR = plVar7 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1074afee0:
  plVar11 = (long *)0x28;
  __Znwm();
  func_0x0001074b5f0c();
  *plVar11 = 0;
  plVar11[1] = (long)plVar8;
  lVar6 = *param_2;
  plVar11[3] = param_2[1];
  plVar11[2] = lVar6;
  *(undefined4 *)(plVar11 + 4) = 0;
  func_0x0001074b57ac();
  if ((plVar13 != (long *)0x0) && (func_0x0001074b5a74(), plVar7 = unaff_x25, !(bool)in_NG))
  goto LAB_1074b0078;
  func_0x0001074b5840();
  bVar2 = (long *)0x2 < plVar13;
  bVar3 = plVar13 == (long *)0x3;
  func_0x0001074b56ac();
  plVar7 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar7 = extraout_x9;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar11 = plVar7;
  }
  plVar13 = (long *)param_1[1];
  uVar4 = plVar7 == plVar13;
  if (plVar13 < plVar7) {
LAB_1074aff58:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1074b00d0);
      (*pcVar1)();
    }
    lVar6 = (long)plVar7 << 3;
    __Znwm(lVar6);
    func_0x0001074b0808(param_1,lVar6);
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar7;
    while (plVar7 != plVar13) {
      func_0x0001074b5b64();
      plVar13 = extraout_x9_00;
    }
    uVar4 = 1;
    plVar13 = plVar7;
    if (param_1[2] != 0) {
      func_0x0001074b6bac();
      uVar4 = ((ulong)plVar7 & extraout_x9_01) == 0;
      func_0x0001074b6b78();
      lVar6 = extraout_x8_00;
      uVar12 = extraout_x9_02;
      plVar11 = extraout_x10;
      plVar9 = extraout_x11;
      while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
        plVar10 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar12) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar12);
        }
        else if (plVar7 <= plVar10) {
          uVar5 = 0;
          if (plVar7 != (long *)0x0) {
            uVar5 = (ulong)plVar10 / (ulong)plVar7;
          }
          plVar10 = (long *)((long)plVar10 - uVar5 * (long)plVar7);
        }
        uVar4 = plVar10 == plVar9;
        if (!(bool)uVar4) {
          if (*(long *)(lVar6 + (long)plVar10 * 8) == 0) {
            func_0x0001074b5e38();
            lVar6 = extraout_x8_02;
            uVar12 = extraout_x9_04;
            plVar11 = extraout_x12;
            plVar9 = extraout_x11_01;
          }
          else {
            func_0x0001074b5630();
            lVar6 = extraout_x8_01;
            uVar12 = extraout_x9_03;
            plVar11 = extraout_x10_00;
            plVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar7 < plVar13) {
    func_0x0001074b572c();
    if ((plVar13 < (long *)0x3) || (func_0x0001074b6d08(), extraout_x8_03 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074b5610();
    }
    if (plVar7 <= plVar11) {
      plVar7 = plVar11;
    }
    uVar4 = plVar7 == plVar13;
    if (plVar7 < plVar13) {
      if (plVar7 != (long *)0x0) goto LAB_1074aff58;
      func_0x0001074b6d8c();
      func_0x0001074b0808();
      func_0x0001074b6bd4();
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  func_0x0001074b63e0();
  if ((bool)uVar4) {
    in_ZR = 1;
    plVar7 = (long *)(extraout_x8_04 & (ulong)plVar8);
  }
  else {
    in_ZR = plVar8 == plVar13;
    plVar7 = plVar8;
    if (plVar13 <= plVar8) {
      func_0x0001074b6d28();
      plVar7 = unaff_x25;
    }
  }
LAB_1074b0078:
  if (*(long *)(*param_1 + (long)plVar7 * 8) == 0) {
    func_0x0001074b5a80();
    if (extraout_x9_05 != 0) {
      func_0x0001074b5fc4();
      lVar6 = extraout_x8_05;
      if ((bool)in_ZR) {
        plVar8 = (long *)((ulong)extraout_x9_06 & extraout_x10_01);
      }
      else {
        plVar8 = extraout_x9_06;
        if (plVar13 <= extraout_x9_06) {
          func_0x0001074b66ac();
          lVar6 = extraout_x8_06;
          plVar8 = extraout_x9_07;
        }
      }
      *(long **)(lVar6 + (long)plVar8 * 8) = unaff_x20;
    }
  }
  else {
    func_0x0001074b5928();
  }
  func_0x0001074b65f8();
  FUN_1074b0820();
LAB_1074b00bc:
  return (long)unaff_x20 + 0x20;
}



/* Entry: 1074b00dc; end: 1074b019b;  */

double FUN_1074b00dc(double param_1,short param_2,short param_3,byte *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dStack_40;
  double dStack_38;
  
  auVar2._0_8_ = (long)(int)param_2;
  auVar2._8_8_ = (long)(int)param_3;
  auVar2 = NEON_scvtf(auVar2,8);
  auVar4._0_8_ = *(ulong *)(param_4 + 4) & 0xffffffff;
  auVar4._8_8_ = *(ulong *)(param_4 + 4) >> 0x20;
  auVar4 = NEON_ucvtf(auVar4,8);
  dStack_40 = (auVar2._0_8_ * 0.0001220703125 + auVar4._0_8_) * 512.0;
  dStack_38 = (auVar2._8_8_ * 0.0001220703125 + auVar4._8_8_) * 512.0;
  dVar1 = (double)func_0x000107282130((double)(1 << (ulong)(*param_4 & 0x1f)),&dStack_40,0);
  uVar3 = NEON_ucvtf((ulong)*param_4);
  dVar1 = (double)func_0x000107246334(param_1 * dVar1,uVar3,0,0x4039800000000000);
  return 8192.0 / (dVar1 * 512.0);
}



/* Entry: 1074b019c; end: 1074b01db;  */

void FUN_1074b019c(ulong *param_1)

{
  ulong extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined1 uStack_21;
  
  func_0x000100102e7c(&uStack_21);
  func_0x0001074b6c70(*param_1);
  *param_1 = extraout_x9 + extraout_x10 ^ extraout_x8;
  return;
}



/* Entry: 1074b01dc; end: 1074b025b;  */

float * FUN_1074b01dc(float *param_1,ulong param_2)

{
  float *pfVar1;
  long extraout_x9;
  float afStack_48 [10];
  
  func_0x0001074b6d34();
  if ((ulong)(extraout_x9 / 0x70) < param_2) {
    if (0x249249249249249 < param_2) {
      func_0x00010727784c();
      func_0x0001074b5be0();
      func_0x000107277a38();
      func_0x0001074b58b8();
      pfVar1 = (float *)0x0;
      if ((*param_1 == 0.0) && (param_1[1] == 0.0)) {
        pfVar1 = (float *)(ulong)(param_1[2] == 0.0);
      }
      return pfVar1;
    }
    func_0x000107277858(afStack_48);
    func_0x0001074b6694();
    func_0x0001072777cc();
    param_1 = afStack_48;
    func_0x000107277a38(param_1);
  }
  return param_1;
}



/* Entry: 1074b025c; end: 1074b028b;  */

bool FUN_1074b025c(float *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == 0.0) && (param_1[1] == 0.0)) {
    bVar1 = param_1[2] == 0.0;
  }
  return bVar1;
}



/* Entry: 1074b028c; end: 1074b0627;  */

long * FUN_1074b028c(double *param_1,double *param_2,long param_3,undefined8 param_4,
                    undefined8 *param_5)

{
  float fVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar9;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long lVar10;
  double *pdVar11;
  double *extraout_x9;
  undefined8 extraout_x9_00;
  double *extraout_x9_01;
  long *plVar12;
  undefined8 *puVar13;
  double *pdVar14;
  double *pdVar15;
  long lVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  undefined8 in_stack_00000070;
  undefined1 auStack_180 [8];
  double dStack_178;
  double dStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  undefined8 uStack_18;
  
  func_0x0001074b6754();
  pdVar15 = param_2;
  func_0x0001074b56e8();
  uStack_100 = *param_5;
  uStack_f8 = param_5[1];
  dStack_f0 = (double)param_5[2];
  dVar27 = (double)param_5[3];
  uStack_c8 = param_5[4];
  uStack_90 = param_5[5];
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  lVar5 = 0x100;
  dStack_e8 = dVar27;
  uStack_e0 = uStack_f8;
  dStack_d8 = dStack_f0;
  uStack_d0 = uStack_100;
  dStack_c0 = dStack_f0;
  dStack_b8 = dVar27;
  uStack_b0 = uStack_c8;
  dStack_a8 = dStack_f0;
  uStack_a0 = uStack_100;
  uStack_98 = uStack_f8;
  dStack_88 = dVar27;
  uStack_80 = uStack_f8;
  uStack_78 = uStack_90;
  uStack_70 = uStack_100;
  uStack_68 = uStack_c8;
  uStack_60 = uStack_90;
  dStack_58 = dVar27;
  uStack_50 = uStack_c8;
  uStack_48 = uStack_90;
  uStack_18 = extraout_x8;
  __Znwm();
  lStack_110 = lVar5 + 0x100;
  for (lVar10 = 0; lVar10 != 0x100; lVar10 = lVar10 + 0x20) {
    puVar13 = (undefined8 *)(lVar5 + lVar10);
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[2] = 0;
  }
  lStack_118 = lVar5;
  pdVar14 = &dStack_f0;
  lStack_108 = lStack_110;
  for (lVar10 = 0; lVar10 != 0x100; lVar10 = lVar10 + 0x20) {
    dStack_30 = *pdVar14;
    dStack_38 = pdVar14[-1];
    dStack_40 = pdVar14[-2];
    dStack_28 = 1.0;
    pdVar15 = &dStack_40;
    func_0x000107877358(auStack_180,pdVar15,param_1);
    puVar13 = (undefined8 *)(lVar5 + lVar10);
    puVar13[1] = dStack_178;
    *puVar13 = auStack_180;
    puVar13[3] = dStack_168;
    puVar13[2] = dStack_170;
    pdVar14 = pdVar14 + 3;
  }
  if ((*(byte *)(param_3 + 0xa94) & 1) == 0) {
    lVar10 = 0x100;
    puVar13 = (undefined8 *)(lVar5 + 0x10);
    do {
      uVar24 = puVar13[-2];
      uVar3 = (undefined1)uVar24;
      uVar4 = (undefined1)((ulong)uVar24 >> 8);
      uVar17 = (undefined1)((ulong)uVar24 >> 0x10);
      uVar18 = (undefined1)((ulong)uVar24 >> 0x18);
      uVar19 = (undefined1)((ulong)uVar24 >> 0x20);
      uVar20 = (undefined1)((ulong)uVar24 >> 0x28);
      uVar21 = (undefined1)((ulong)uVar24 >> 0x30);
      uVar22 = (undefined1)((ulong)uVar24 >> 0x38);
      uVar24 = puVar13[-1];
      uVar26 = *puVar13;
      func_0x00010740b8a8(param_2);
      puVar13[-2] = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar4,uVar3)))))));
      puVar13[-1] = uVar24;
      lVar10 = lVar10 + -0x20;
      *puVar13 = uVar26;
      puVar13[1] = dVar27;
      puVar13 = puVar13 + 4;
    } while (lVar10 != 0);
  }
  else {
    lVar10 = 0x100;
    pdVar14 = (double *)(lVar5 + 0x10);
    do {
      dVar28 = pdVar14[-2];
      uVar3 = SUB81(dVar28,0);
      uVar4 = (undefined1)((ulong)dVar28 >> 8);
      uVar17 = (undefined1)((ulong)dVar28 >> 0x10);
      uVar18 = (undefined1)((ulong)dVar28 >> 0x18);
      uVar19 = (undefined1)((ulong)dVar28 >> 0x20);
      uVar20 = (undefined1)((ulong)dVar28 >> 0x28);
      uVar21 = (undefined1)((ulong)dVar28 >> 0x30);
      uVar22 = (undefined1)((ulong)dVar28 >> 0x38);
      dVar23 = pdVar14[-1];
      dVar25 = *pdVar14;
      func_0x00010740b8a8(param_2);
      auStack_180 = (undefined1  [8])
                    CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar4,uVar3)))))));
      dStack_38 = pdVar14[-1];
      dStack_40 = pdVar14[-2];
      fVar1 = (float)*pdVar14;
      uVar3 = SUB41(fVar1,0);
      uVar4 = (undefined1)((uint)fVar1 >> 8);
      uVar17 = (undefined1)((uint)fVar1 >> 0x10);
      uVar18 = (undefined1)((uint)fVar1 >> 0x18);
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      dStack_178 = dVar23;
      dStack_170 = dVar25;
      dStack_168 = dVar27;
      FUN_10741848c(&dStack_40,param_4);
      FUN_107416bf8(param_3);
      func_0x0001074b6370(param_3 + 0xaa0);
      dStack_40 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar4,uVar3)))))))
      ;
      dVar28 = (double)*(float *)(param_3 + 0xa90);
      uVar3 = SUB81(dVar28,0);
      uVar4 = (undefined1)((ulong)dVar28 >> 8);
      uVar17 = (undefined1)((ulong)dVar28 >> 0x10);
      uVar18 = (undefined1)((ulong)dVar28 >> 0x18);
      uVar19 = (undefined1)((ulong)dVar28 >> 0x20);
      uVar20 = (undefined1)((ulong)dVar28 >> 0x28);
      uVar21 = (undefined1)((ulong)dVar28 >> 0x30);
      uVar22 = (undefined1)((ulong)dVar28 >> 0x38);
      if (*(char *)(param_3 + 0xa94) == '\0') {
        uVar3 = 0;
        uVar4 = 0;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
      }
      pdVar15 = &dStack_40;
      dStack_38 = dVar23;
      dStack_30 = dVar25;
      dStack_28 = dVar27;
      func_0x00010740b8e0(auStack_180);
      pdVar14[-2] = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13
                                                  (uVar18,CONCAT12(uVar17,CONCAT11(uVar4,uVar3))))))
                                    );
      pdVar14[-1] = dVar23;
      lVar10 = lVar10 + -0x20;
      param_1 = pdVar14 + 4;
      *pdVar14 = dVar25;
      pdVar14[1] = dVar27;
      pdVar14 = param_1;
    } while (lVar10 != 0);
  }
  dStack_178 = 4.24399158242461e-314;
  auStack_180 = (undefined1  [8])0x100000000;
  dStack_168 = 1.48219693752374e-323;
  dStack_170 = 6.36598737388395e-314;
  uStack_158 = 0x600000005;
  uStack_160 = 0x500000004;
  uStack_148 = 0x400000007;
  uStack_150 = 0x700000006;
  pcStack_138 = (code *)0x500000001;
  puStack_140 = (undefined8 *)0x400000000;
  uStack_128 = 0x700000003;
  uStack_130 = 0x600000002;
  for (lVar10 = 0; lVar10 != 8; lVar10 = lVar10 + 1) {
    *(undefined1 *)((long)&dStack_40 + lVar10) = 0;
  }
  lVar10 = 0;
  while( true ) {
    uVar3 = lVar10 + -0x60 < 0;
    uVar4 = lVar10 == 0x60;
    if ((bool)uVar4) break;
    param_1 = (double *)(long)*(int *)(auStack_180 + lVar10);
    lVar16 = (long)*(int *)(auStack_180 + lVar10 + 4);
    dVar28 = *(double *)(lVar5 + (long)param_1 * 0x20 + 0x10);
    dVar27 = *(double *)(lVar5 + lVar16 * 0x20 + 0x10);
    if (dVar28 <= 1.0) {
      if (1.0 < dVar27) goto LAB_1074b04f8;
      if ((*(byte *)((long)&dStack_40 + (long)param_1) & 1) == 0) {
        func_0x0001074b59bc();
        *(undefined1 *)((long)&dStack_40 + (long)param_1) = 1;
      }
      if ((*(byte *)((long)&dStack_40 + lVar16) & 1) != 0) goto LAB_1074b059c;
      func_0x0001074b59bc();
LAB_1074b0594:
      *(undefined1 *)((long)&dStack_40 + lVar16) = 1;
    }
    else if (dVar27 <= 1.0) {
LAB_1074b04f8:
      func_0x0001074b59bc();
      param_1 = (double *)(auStack_180 + lVar10 + 4);
      if (dVar28 <= 1.0) {
        param_1 = (double *)(auStack_180 + lVar10);
      }
      if ((*(byte *)((long)&dStack_40 + (long)*(int *)param_1) & 1) == 0) {
        func_0x0001074b59bc();
        lVar16 = (long)*(int *)param_1;
        goto LAB_1074b0594;
      }
    }
LAB_1074b059c:
    lVar10 = lVar10 + 8;
  }
  plVar6 = &lStack_118;
  func_0x0001074b14d4();
  func_0x0001074b5698(uStack_18);
  if ((bool)uVar4) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar12 = &lStack_118;
  func_0x0001074b14d4();
  func_0x0001074b58b8();
  pcVar8 = FUN_1074b0628;
  func_0x0001074b6e30();
  puStack_140 = &stack0x00000070;
  pcStack_138 = pcVar8;
  func_0x0001074b61ac();
  pdVar15 = (double *)*pdVar15;
  pdVar14 = (double *)plVar12[1];
  if (pdVar14 != (double *)0x0) {
    func_0x0001074b6dd8();
    if ((bool)uVar4) {
      param_1 = (double *)(extraout_x8_00 & (ulong)pdVar15);
    }
    else {
      uVar3 = (long)pdVar15 - (long)pdVar14 < 0;
      param_1 = pdVar15;
      if (pdVar14 <= pdVar15) {
        uVar9 = 0;
        if (pdVar14 != (double *)0x0) {
          uVar9 = (ulong)pdVar15 / (ulong)pdVar14;
        }
        param_1 = (double *)((long)pdVar15 - uVar9 * (long)pdVar14);
      }
    }
    plVar12 = *(long **)(*plVar6 + (long)param_1 * 8);
    uVar9 = extraout_x8_00;
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1074b06c8;
          pdVar11 = (double *)plVar12[1];
          if (pdVar11 != pdVar15) break;
          uVar3 = plVar12[2] - (long)pdVar15 < 0;
          if ((double *)plVar12[2] == pdVar15) {
            return plVar12;
          }
        }
        if (((ulong)pdVar14 & uVar9) == 0) {
          pdVar11 = (double *)((ulong)pdVar11 & uVar9);
        }
        else if (pdVar14 <= pdVar11) {
          func_0x0001074b6d98();
          uVar9 = extraout_x8_01;
          pdVar11 = extraout_x9;
        }
        uVar3 = (long)pdVar11 - (long)param_1 < 0;
      } while (pdVar11 == param_1);
    }
  }
LAB_1074b06c8:
  plVar12 = plVar6 + 2;
  plVar7 = (long *)0xe0;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)pdVar15;
  plVar7[2] = (long)pdVar15;
  FUN_1074b1594(plVar7 + 3,0x68);
  func_0x0001074b57ac();
  if ((pdVar14 == (double *)0x0) || (func_0x0001074b5a74(), (bool)uVar3)) {
    func_0x0001074b6700();
    bVar2 = (double *)0x2 < pdVar14;
    uVar3 = pdVar14 == (double *)0x3;
    func_0x0001074b56ac();
    uVar24 = extraout_x8_02;
    if (!bVar2 || (bool)uVar3) {
      uVar24 = extraout_x9_00;
    }
    FUN_1074b1670(plVar6,uVar24);
    pdVar14 = (double *)plVar6[1];
    func_0x0001074b6dd8();
    if ((bool)uVar3) {
      param_1 = (double *)(extraout_x8_03 & (ulong)pdVar15);
    }
    else {
      param_1 = pdVar15;
      if (pdVar14 <= pdVar15) {
        uVar9 = 0;
        if (pdVar14 != (double *)0x0) {
          uVar9 = (ulong)pdVar15 / (ulong)pdVar14;
        }
        param_1 = (double *)((long)pdVar15 - uVar9 * (long)pdVar14);
      }
    }
  }
  lVar10 = *plVar6;
  if (*(long *)(lVar10 + (long)param_1 * 8) == 0) {
    *plVar7 = *plVar12;
    *plVar12 = (long)plVar7;
    *(long **)(lVar10 + (long)param_1 * 8) = plVar12;
    if (*plVar7 != 0) {
      pdVar15 = *(double **)(*plVar7 + 8);
      if (((ulong)pdVar14 & (long)pdVar14 - 1U) == 0) {
        pdVar15 = (double *)((ulong)pdVar15 & (long)pdVar14 - 1U);
      }
      else if (pdVar14 <= pdVar15) {
        func_0x0001074b6d98();
        lVar10 = extraout_x8_04;
        pdVar15 = extraout_x9_01;
      }
      *(long **)(lVar10 + (long)pdVar15 * 8) = plVar7;
    }
  }
  else {
    func_0x0001074b5928();
  }
  func_0x0001074b5ab8();
  FUN_1074b1794();
  return plVar7;
}



/* Entry: 1074b0628; end: 1074b07c7;  */

long * FUN_1074b0628(undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x8_01;
  long lVar4;
  long extraout_x8_02;
  ulong uVar5;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *unaff_x19;
  long *plVar6;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  func_0x0001074b6e30();
  func_0x0001074b61ac();
  uVar8 = *param_4;
  uVar7 = *(ulong *)(param_3 + 8);
  if (uVar7 != 0) {
    func_0x0001074b6dd8();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & uVar8;
    }
    else {
      in_NG = (long)(uVar8 - uVar7) < 0;
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    uVar3 = extraout_x8;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1074b06c8;
          uVar5 = plVar6[1];
          if (uVar5 != uVar8) break;
          in_NG = (long)(plVar6[2] - uVar8) < 0;
          if (plVar6[2] == uVar8) {
            return plVar6;
          }
        }
        if ((uVar7 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar7 <= uVar5) {
          func_0x0001074b6d98();
          uVar3 = extraout_x8_00;
          uVar5 = extraout_x9;
        }
        in_NG = (long)(uVar5 - unaff_x24) < 0;
      } while (uVar5 == unaff_x24);
    }
  }
LAB_1074b06c8:
  plVar6 = unaff_x19 + 2;
  plVar2 = (long *)0xe0;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = uVar8;
  plVar2[2] = uVar8;
  FUN_1074b1594(plVar2 + 3,unaff_x21 + 8);
  func_0x0001074b57ac();
  if ((uVar7 == 0) || (func_0x0001074b5a74(param_1,param_2,(float)uVar7), (bool)in_NG)) {
    func_0x0001074b6700();
    uVar1 = uVar7 == 3;
    func_0x0001074b56ac();
    FUN_1074b1670();
    uVar7 = unaff_x19[1];
    func_0x0001074b6dd8();
    if ((bool)uVar1) {
      unaff_x24 = extraout_x8_01 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar3 * uVar7;
      }
    }
  }
  lVar4 = *unaff_x19;
  if (*(long *)(lVar4 + unaff_x24 * 8) == 0) {
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar6;
    if (*plVar2 != 0) {
      uVar8 = *(ulong *)(*plVar2 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        func_0x0001074b6d98();
        lVar4 = extraout_x8_02;
        uVar8 = extraout_x9_00;
      }
      *(long **)(lVar4 + uVar8 * 8) = plVar2;
    }
  }
  else {
    func_0x0001074b5928();
  }
  func_0x0001074b5ab8();
  FUN_1074b1794();
  return plVar2;
}



/* Entry: 1074b07c8; end: 1074b07ef;  */

long FUN_1074b07c8(long param_1)

{
  FUN_1074ae8c0(param_1 + 0x20);
  func_0x0001074b6a04();
  return param_1;
}



/* Entry: 1074b07f0; end: 1074b081f;  */

bool FUN_1074b07f0(short *param_1,short *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  if (((char)param_1[2] == (char)param_2[2]) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
    return *(int *)(param_1 + 6) == *(int *)(param_2 + 6);
  }
  return false;
}



/* Entry: 1074b0820; end: 1074b0883;  */

void FUN_1074b0820(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074b5d98();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074b0884; end: 1074b088f;  */

long FUN_1074b0884(long param_1)

{
  func_0x0001074b56f8();
  func_0x0001073b4a44(param_1 + 200);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1074b0890; end: 1074b08bb;  */

long FUN_1074b0890(long param_1)

{
  func_0x0001073b4a44(param_1 + 200);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1074b08bc; end: 1074b096f;  */

long FUN_1074b08bc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1074b0970; end: 1074b0997;  */

void FUN_1074b0970(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074b5d98();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074b0998; end: 1074b0a4f;  */

ulong FUN_1074b0998(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [56];
  undefined1 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_a0;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_50 = param_3 + 0xc0;
  auStack_90[0] = 0;
  uStack_58 = 0;
  uVar5 = NEON_fmov(0x3f800000,4);
  uStack_98 = 0x3f800000;
  puVar2 = auStack_90;
  puVar3 = (uint *)(param_1 + 0xb0);
  uStack_a0 = uVar5;
  FUN_1074b0a50(param_2,puVar2);
  func_0x00010724b3d8(auStack_90);
  func_0x0001074b5698(uStack_48);
  if ((bool)in_ZR) {
    return uVar5;
  }
  ___stack_chk_fail();
  puVar1 = auStack_90;
  func_0x00010724b3d8(puVar1);
  func_0x0001074b58b8();
  if (puVar3[0xe] != 0) {
    uVar5 = (ulong)*(uint *)puVar4;
    FUN_10743933c(uVar5,*(uint *)((long)puVar4 + 4),*(uint *)((long)puVar4 + 8),puVar3,puVar1,puVar2
                 );
    return uVar5;
  }
  return (ulong)*puVar3;
}



/* Entry: 1074b0a50; end: 1074b0a8f;  */

ulong FUN_1074b0a50(undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3[0xe] != 0) {
    uVar1 = *param_4;
    uVar2 = 0;
    FUN_10743933c(uVar1,param_4[1],param_4[2],param_3,param_1,param_2);
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*param_3;
}



/* Entry: 1074b0a90; end: 1074b0adb;  */

undefined4
FUN_1074b0a90(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3[0xc] != 0) {
    uVar2 = *param_4;
    puVar1 = param_3;
    func_0x00010727f740(param_3,param_1,param_2);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        uVar2 = param_3[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_3;
}


