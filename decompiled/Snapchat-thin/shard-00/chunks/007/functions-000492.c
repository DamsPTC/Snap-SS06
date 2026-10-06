/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009a1c0c; end: 1009a1d03;  */

void FUN_1009a1c0c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113019f80,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113019f80,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110717d78;
  func_0x000107c613fc(&UNK_110717d78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e3c774;
  FUN_10058fa64(&UNK_103e3c774,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a1d04; end: 1009a1d27;  */

void FUN_1009a1d04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a1d28; end: 1009a1fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a1d28(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_10023fb88();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113019f90) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113019f98) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113019fa0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113019fa8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113019fb0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113019fb8) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113019fc0) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113019fc8) = param_9;
  *(undefined8 *)(lVar3 + _DAT_113019fd0) = param_10;
  *(undefined8 *)(lVar3 + _DAT_113019fd8) = param_11;
  *(undefined8 *)(lVar3 + _DAT_113019fe0) = param_12;
  *(undefined8 *)(lVar3 + _DAT_113019fe8) = param_13;
  *(undefined8 *)(lVar3 + _DAT_113019ff0) = param_14;
  *(undefined8 *)(lVar3 + _DAT_113019ff8) = param_15;
  *(undefined8 *)(lVar3 + _DAT_11301a000) = param_16;
  *(undefined8 *)(lVar3 + _DAT_11301a008) = param_17;
  *(undefined8 *)(lVar3 + _DAT_11301a010) = param_18;
  *(undefined8 *)(lVar3 + _DAT_11301a018) = param_19;
  *(undefined8 *)(lVar3 + _DAT_11301a020) = param_20;
  *(undefined8 *)(lVar3 + _DAT_11301a028) = param_21;
  *(undefined8 *)(lVar3 + _DAT_11301a030) = param_22;
  *(undefined8 *)(lVar3 + _DAT_11301a038) = param_23;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a1ff0; end: 1009a2133;  */

void FUN_1009a1ff0(void)

{
  long unaff_x20;
  
  FUN_1009a1d28(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 1009a2134; end: 1009a2157;  */

undefined ** FUN_1009a2134(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a2158; end: 1009a21d7;  */

void FUN_1009a2158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110718940;
  func_0x000107c613fc(&UNK_110718940,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a21d8,puVar1);
  return;
}



/* Entry: 1009a21d8; end: 1009a21df;  */

void FUN_1009a21d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11301cdf0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11301cdf0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107189d8;
  func_0x000107c613fc(&UNK_1107189d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e4dabc;
  FUN_10058fa64(&UNK_103e4dabc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a21e0; end: 1009a22d7;  */

void FUN_1009a21e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11301cdf0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11301cdf0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107189d8;
  func_0x000107c613fc(&UNK_1107189d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e4dabc;
  FUN_10058fa64(&UNK_103e4dabc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a22d8; end: 1009a22fb;  */

void FUN_1009a22d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a22fc; end: 1009a275f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a22fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_10023d798();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11301ce00) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11301ce08) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11301ce10) = param_4;
  *(undefined8 *)(lVar3 + _DAT_11301ce18) = param_5;
  *(undefined8 *)(lVar3 + _DAT_11301ce20) = param_6;
  *(undefined8 *)(lVar3 + _DAT_11301ce28) = param_7;
  *(undefined8 *)(lVar3 + _DAT_11301ce30) = param_8;
  *(undefined8 *)(lVar3 + _DAT_11301ce38) = param_9;
  *(undefined8 *)(lVar3 + _DAT_11301ce40) = param_10;
  *(undefined8 *)(lVar3 + _DAT_11301ce48) = param_11;
  *(undefined8 *)(lVar3 + _DAT_11301ce50) = param_12;
  *(undefined8 *)(lVar3 + _DAT_11301ce58) = param_13;
  *(undefined8 *)(lVar3 + _DAT_11301ce60) = param_14;
  *(undefined8 *)(lVar3 + _DAT_11301ce68) = param_15;
  *(undefined8 *)(lVar3 + _DAT_11301ce70) = param_16;
  *(undefined8 *)(lVar3 + _DAT_11301ce78) = param_17;
  *(undefined8 *)(lVar3 + _DAT_11301ce80) = param_18;
  *(undefined8 *)(lVar3 + _DAT_11301ce88) = param_19;
  *(undefined8 *)(lVar3 + _DAT_11301ce90) = param_20;
  *(undefined8 *)(lVar3 + _DAT_11301ce98) = param_21;
  *(undefined8 *)(lVar3 + _DAT_11301cea0) = param_22;
  *(undefined8 *)(lVar3 + _DAT_11301cea8) = param_23;
  *(undefined8 *)(lVar3 + _DAT_11301ceb0) = param_24;
  *(undefined8 *)(lVar3 + _DAT_11301ceb8) = param_25;
  *(undefined8 *)(lVar3 + _DAT_11301cec0) = param_26;
  *(undefined8 *)(lVar3 + _DAT_11301cec8) = param_27;
  *(undefined8 *)(lVar3 + _DAT_11301ced0) = param_28;
  *(undefined8 *)(lVar3 + _DAT_11301ced8) = param_29;
  *(undefined8 *)(lVar3 + _DAT_11301cee0) = param_30;
  *(undefined8 *)(lVar3 + _DAT_11301cee8) = param_31;
  *(undefined8 *)(lVar3 + _DAT_11301cef0) = param_32;
  *(undefined8 *)(lVar3 + _DAT_11301cef8) = param_33;
  *(undefined8 *)(lVar3 + _DAT_11301cf00) = param_34;
  *(undefined8 *)(lVar3 + _DAT_11301cf08) = param_35;
  *(undefined8 *)(lVar3 + _DAT_11301cf10) = param_36;
  *(undefined8 *)(lVar3 + _DAT_11301cf18) = param_37;
  *(undefined8 *)(lVar3 + _DAT_11301cf20) = param_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a2760; end: 1009a27d3;  */

void FUN_1009a2760(void)

{
  long unaff_x20;
  
  FUN_1009a22fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130));
  return;
}



/* Entry: 1009a27d4; end: 1009a2943;  */

void FUN_1009a27d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2944; end: 1009a2993;  */

undefined ** FUN_1009a2944(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a2994; end: 1009a2a8b;  */

void FUN_1009a2994(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11301eb60,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11301eb60,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110718dd8;
  func_0x000107c613fc(&UNK_110718dd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e5bf14;
  FUN_10058fa64(&UNK_103e5bf14,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a2a8c; end: 1009a2aaf;  */

void FUN_1009a2a8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2ab0; end: 1009a2ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a2ab0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_10021b6d8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_11301eb70) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_11301eb78) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009a2ab8; end: 1009a2b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a2ab8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10021b6d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11301eb70) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11301eb78) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a2b3c; end: 1009a2b3f;  */

void FUN_1009a2b3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2b40; end: 1009a2b6b;  */

void FUN_1009a2b40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2b6c; end: 1009a2bbf;  */

void FUN_1009a2b6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2bc0; end: 1009a2cb7;  */

void FUN_1009a2bc0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11301ede0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11301ede0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110718fa8;
  func_0x000107c613fc(&UNK_110718fa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e5c770;
  FUN_10058fa64(&UNK_103e5c770,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a2cb8; end: 1009a2cdb;  */

void FUN_1009a2cb8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2cdc; end: 1009a2ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a2cdc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1002116a8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_11301edf0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_11301edf8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009a2ce4; end: 1009a2d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a2ce4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002116a8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11301edf0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11301edf8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a2d68; end: 1009a2d6b;  */

void FUN_1009a2d68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2d6c; end: 1009a2d97;  */

void FUN_1009a2d6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2d98; end: 1009a2dc3;  */

void FUN_1009a2d98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a2dc4; end: 1009a2e03;  */

void FUN_1009a2dc4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a2da8();
  FUN_100082720("DpaConfigServiceProviderWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a2e04; end: 1009a2e0b;  */

void FUN_1009a2e04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177dbf8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a2e0c; end: 1009a2e8f;  */

void FUN_1009a2e0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177dbf8,param_2,&UNK_10177dbfc,param_2,&UNK_10177dc24,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a2e90; end: 1009a2eb7;  */

undefined ** FUN_1009a2e90(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a2eb8; end: 1009a2ef7;  */

void FUN_1009a2eb8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a2e9c();
  FUN_100082720("DpaLensGrapheneLoggerServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a2ef8; end: 1009a2eff;  */

void FUN_1009a2ef8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101919cbc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a2f00; end: 1009a2f83;  */

void FUN_1009a2f00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101919cbc,param_2,&UNK_101919cc0,param_2,&UNK_101919ce8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a2f84; end: 1009a2fab;  */

undefined ** FUN_1009a2f84(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a2fac; end: 1009a2feb;  */

void FUN_1009a2fac(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a2f90();
  FUN_100082720("DpaLensSnapAdConfigImplServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a2fec; end: 1009a2ff3;  */

void FUN_1009a2fec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101919dec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a2ff4; end: 1009a3077;  */

void FUN_1009a2ff4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101919dec,param_2,&UNK_101919df0,param_2,&UNK_101919e18,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3078; end: 1009a309f;  */

undefined ** FUN_1009a3078(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a30a0; end: 1009a30df;  */

void FUN_1009a30a0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3084();
  FUN_100082720("Dreams2PFriendSelectionServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a30e0; end: 1009a30e7;  */

void FUN_1009a30e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101938f50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a30e8; end: 1009a316b;  */

void FUN_1009a30e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101938f50,param_2,&UNK_101938f54,param_2,&UNK_101938f7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a316c; end: 1009a318f;  */

undefined ** FUN_1009a316c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a3190; end: 1009a3227;  */

void FUN_1009a3190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103fa920;
  func_0x000107c613fc(&UNK_1103fa920,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1009a329c,puVar1);
  return;
}



/* Entry: 1009a3228; end: 1009a327b;  */

void FUN_1009a3228(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009a327c; end: 1009a329b;  */

void FUN_1009a327c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc2488);
  return;
}



/* Entry: 1009a329c; end: 1009a331b;  */

void FUN_1009a329c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_1009a327c();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  FUN_1009a331c(uVar1,uVar2,uVar3);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1103fa9c0;
  return;
}



/* Entry: 1009a331c; end: 1009a3463;  */

void FUN_1009a331c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c509b8(uStack_58);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  puVar2 = &UNK_1103fa948;
  func_0x000107c613fc(&UNK_1103fa948,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1103fa970;
  func_0x000107c613fc(&UNK_1103fa970,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puStack_68 = &UNK_1016df378;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1016df5ec;
  puStack_70 = &UNK_1103fa988;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4fc48(uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1009a3464; end: 1009a3487;  */

void FUN_1009a3464(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a3488; end: 1009a348b;  */

void FUN_1009a3488(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a348c; end: 1009a3633;  */

/* WARNING: Possible PIC construction at 0x0001009a34f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009a35ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009a35fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009a360c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009a3600) */
/* WARNING: Removing unreachable block (ram,0x0001009a35f0) */
/* WARNING: Removing unreachable block (ram,0x0001009a34f8) */
/* WARNING: Removing unreachable block (ram,0x0001009a3500) */
/* WARNING: Removing unreachable block (ram,0x0001009a3528) */
/* WARNING: Removing unreachable block (ram,0x0001009a3610) */
/* WARNING: Removing unreachable block (ram,0x0001009a3618) */

void FUN_1009a348c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c3af44(*(undefined8 *)(param_1 + 0x20),param_2,1);
  func_0x000107c5e060(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0));
  *(long *)(*(long *)(param_1 + 0x20) + 0x40) = *(long *)(*(long *)(param_1 + 0x20) + 0x40) + 1;
  puVar1 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc(PTR_PTR_1126ae520);
  func_0x000107c61180();
  func_0x000107c3dfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1009a3634; end: 1009a3647;  */

void FUN_1009a3634(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1009a3648; end: 1009a36eb; -[SCValdiRuntimeManager registerMainRuntimeCreatedCallback:] */

void FUN_1009a3648(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010090c464();
  FUN_10090b060();
  func_0x00010090b068();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
    FUN_1009a36ec();
    func_0x000107c61184();
    func_0x000107c3d798(uVar1);
    func_0x0001009a36f4();
    func_0x00010090cf2c();
  }
  else {
    (**(code **)(unaff_x19 + 0x10))();
  }
  func_0x00010090b080();
  FUN_10090af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1009a36ec; end: 1009a36ff;  */

void FUN_1009a36ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1009a3700; end: 1009a3733;  */

void FUN_1009a3700(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a3734; end: 1009a375b;  */

undefined ** FUN_1009a3734(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a375c; end: 1009a379b;  */

void FUN_1009a375c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3740();
  FUN_100082720("DuplexServicesScopeInitializationPluginPluginProvider",0x35,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a379c; end: 1009a37bb;  */

void FUN_1009a379c(void)

{
  func_0x000107c61168(&PTR_PTR_112db0758);
  return;
}



/* Entry: 1009a37bc; end: 1009a37fb;  */

void FUN_1009a37bc(long *param_1,long param_2)

{
  undefined8 unaff_x20;
  
  FUN_1009a379c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = unaff_x20;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103d8f48;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1009a37fc; end: 1009a3823;  */

undefined ** FUN_1009a37fc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a3824; end: 1009a3863;  */

void FUN_1009a3824(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3808();
  FUN_100082720("DuplexSyncTriggerScopeInitializationPluginPluginProvider",0x38,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a3864; end: 1009a3883;  */

void FUN_1009a3864(void)

{
  func_0x000107c61168(&PTR_PTR_112db0d08);
  return;
}



/* Entry: 1009a3884; end: 1009a38c3;  */

void FUN_1009a3884(long *param_1,long param_2)

{
  undefined8 unaff_x20;
  
  FUN_1009a3864();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = unaff_x20;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103da760;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1009a38c4; end: 1009a38cf;  */

undefined ** FUN_1009a38c4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a38d0; end: 1009a395b;  */

void FUN_1009a38d0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009a395c,param_1);
  return;
}



/* Entry: 1009a395c; end: 1009a3963;  */

void FUN_1009a395c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_1009a3a28();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_101a80ddc);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3964; end: 1009a3a27;  */

void FUN_1009a3964(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_1009a3a28();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_101a80ddc,param_2,&UNK_101a80de0,param_2,&UNK_101a80e08,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3a28; end: 1009a3a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a3a28(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bb60) = 6;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009a3a58; end: 1009a3a97;  */

void FUN_1009a3a58(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3a3c();
  FUN_100082720("FetchCreatorsServiceProviderWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a3a98; end: 1009a3a9f;  */

void FUN_1009a3a98(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101771c60);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3aa0; end: 1009a3b23;  */

void FUN_1009a3aa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101771c60,param_2,&UNK_101771c64,param_2,&UNK_101771c8c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3b24; end: 1009a3b4b;  */

undefined ** FUN_1009a3b24(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a3b4c; end: 1009a3b8b;  */

void FUN_1009a3b4c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3b30();
  FUN_100082720("FriendingBadgeServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a3b8c; end: 1009a3b93;  */

void FUN_1009a3b8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019813a4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3b94; end: 1009a3c17;  */

void FUN_1009a3b94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019813a4,param_2,&UNK_1019813a8,param_2,&UNK_1019813d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3c18; end: 1009a3c3f;  */

undefined ** FUN_1009a3c18(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a3c40; end: 1009a3c7f;  */

void FUN_1009a3c40(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3c24();
  FUN_100082720("FriendingComplianceServicesProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a3c80; end: 1009a3c87;  */

void FUN_1009a3c80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019816a4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3c88; end: 1009a3d0b;  */

void FUN_1009a3c88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019816a4,param_2,&UNK_1019816a8,param_2,&UNK_1019816d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3d0c; end: 1009a3d33;  */

undefined ** FUN_1009a3d0c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a3d34; end: 1009a3d73;  */

void FUN_1009a3d34(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3d18();
  FUN_100082720("FriendingExperimentServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a3d74; end: 1009a3d7b;  */

void FUN_1009a3d74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019817cc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3d7c; end: 1009a3dff;  */

void FUN_1009a3d7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019817cc,param_2,&UNK_1019817d0,param_2,&UNK_1019817f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3e00; end: 1009a3e27;  */

undefined ** FUN_1009a3e00(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a3e28; end: 1009a3e67;  */

void FUN_1009a3e28(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3e0c();
  FUN_100082720("FriendingFacebookContactSyncServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a3e68; end: 1009a3e6f;  */

void FUN_1009a3e68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101981a50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3e70; end: 1009a3ef3;  */

void FUN_1009a3e70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101981a50,param_2,&UNK_101981a54,param_2,&UNK_101981a7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3ef4; end: 1009a3f1b;  */

undefined ** FUN_1009a3ef4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a3f1c; end: 1009a3f5b;  */

void FUN_1009a3f1c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a3f00();
  FUN_100082720("FriendingFindFriendsEligibilityServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x56,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a3f5c; end: 1009a3f63;  */

void FUN_1009a3f5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101981b78);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3f64; end: 1009a3fe7;  */

void FUN_1009a3f64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101981b78,param_2,&UNK_101981b7c,param_2,&UNK_101981ba4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a3fe8; end: 1009a404b; -[SCConfigManagerImpl _broadcastAuthStateOnce:] */

byte FUN_1009a3fe8(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d664(uVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
  }
  return bVar1 ^ 1;
}



/* Entry: 1009a404c; end: 1009a4073;  */

undefined ** FUN_1009a404c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a4074; end: 1009a40b3;  */

void FUN_1009a4074(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a4058();
  FUN_100082720("FriendingGoogleContactSyncServiceProviderWrapperScopeInitializationPluginProvider",
                0x51,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a40b4; end: 1009a40bb;  */

void FUN_1009a40b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101981dfc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a40bc; end: 1009a413f;  */

void FUN_1009a40bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101981dfc,param_2,&UNK_101981e00,param_2,&UNK_101981e28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a4140; end: 1009a4167;  */

undefined ** FUN_1009a4140(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a4168; end: 1009a41a7;  */

void FUN_1009a4168(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a414c();
  FUN_100082720("FriendsFeedUpdateSequenceTrackerServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x57,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a41a8; end: 1009a41af;  */

void FUN_1009a41a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101965974);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a41b0; end: 1009a4233;  */

void FUN_1009a41b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101965974,param_2,&UNK_101965978,param_2,&UNK_1019659a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


