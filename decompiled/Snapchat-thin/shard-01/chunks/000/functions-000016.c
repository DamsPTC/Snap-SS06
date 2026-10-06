/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c2028c; end: 100c202b7;  */

undefined8 * FUN_100c2028c(undefined8 *param_1)

{
  *param_1 = &UNK_1053ac460;
  FUN_100c2027c(param_1 + 1);
  return param_1;
}



/* Entry: 100c202b8; end: 100c202c7;  */

void FUN_100c202b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 100c202c8; end: 100c20303;  */

void FUN_100c202c8(void)

{
  FUN_100c202b8();
  func_0x000107c60e20(0x1c0);
  FUN_100c20310();
  FUN_100c203d0();
  return;
}



/* Entry: 100c20304; end: 100c2030f;  */

void FUN_100c20304(void)

{
  return;
}



/* Entry: 100c20310; end: 100c203a7;  */

void FUN_100c20310(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100c20304();
  func_0x000100603bac();
  FUN_100c203a8(param_1 + 0xb8,unaff_x20 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x19 + 0x188) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x180) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  func_0x000100608b3c(unaff_x19 + 0x198,unaff_x20 + 0x198);
  lVar1 = *(long *)(unaff_x20 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = *(undefined8 *)(unaff_x20 + 0x1b8);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  return;
}



/* Entry: 100c203a8; end: 100c203cf;  */

undefined8 * FUN_100c203a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000100609284(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 100c203d0; end: 100c203e7;  */

void FUN_100c203d0(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 100c203e8; end: 100c204b3;  */

undefined8 *
FUN_100c203e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  *param_1 = &PTR_DAT_1108812b0;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 4,param_4 + 1);
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000100603bac(param_1 + 0xb,param_5);
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



/* Entry: 100c204b4; end: 100c204db;  */

void FUN_100c204b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 100c204dc; end: 100c204fb;  */

void FUN_100c204dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000100c21fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100c204fc; end: 100c2053f;  */

void FUN_100c204fc(void)

{
  return;
}



/* Entry: 100c20540; end: 100c206af;  */

void FUN_100c20540(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uVar2;
  long lStack_480;
  long lStack_478;
  undefined1 auStack_358 [256];
  undefined1 auStack_258 [200];
  undefined1 auStack_190 [296];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100c20054();
  uStack_48 = extraout_x8;
  FUN_100c1fd24(auStack_258);
  FUN_100c206c4(auStack_190,param_1,auStack_258,param_3,param_4 + 0xa0,param_4 + 0x78,param_5);
  func_0x000100c20780();
  uVar1 = *(char *)(param_4 + 0x70) == '\x01';
  if ((bool)uVar1) {
    lStack_480 = *param_5;
    if (lStack_480 == 0) {
      lStack_480 = 0;
      lStack_478 = 0;
    }
    else {
      lStack_478 = param_5[1];
      if (lStack_478 != 0) {
        do {
          func_0x000100c1fb6c();
        } while (extraout_w10 != 0);
      }
    }
    uStack_50 = 0;
    FUN_100c20788(param_1,auStack_190,param_4,&lStack_480,auStack_68);
    func_0x00010061cd18(auStack_68);
    func_0x000100601d1c(&lStack_480);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    FUN_100c208fc(&lStack_480,auStack_190);
    func_0x0001006099c0(auStack_358,param_4);
    func_0x0001053acd44(uVar2,&lStack_480);
    func_0x0001053ad320(&lStack_480);
  }
  func_0x000100c21e74(auStack_190);
  FUN_100c204fc(uStack_48);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x0001053adb70();
    func_0x0001053ad320();
    func_0x000100c21e74(auStack_190);
    func_0x0001053ad9f8();
    return;
  }
  return;
}



/* Entry: 100c206b0; end: 100c206c3;  */

void FUN_100c206b0(void)

{
  return;
}



/* Entry: 100c206c4; end: 100c2076f;  */

void FUN_100c206c4(long param_1)

{
  long lVar1;
  undefined8 *in_x5;
  long extraout_x8;
  int extraout_w10;
  
  FUN_100c206b0();
  func_0x000100609644(extraout_x8,param_1 + 8);
  FUN_100c1fd24(extraout_x8 + 0x10);
  func_0x000100608b3c(extraout_x8 + 0xd8);
  func_0x000107c60c94(extraout_x8 + 0xe0);
  func_0x00010028af84(extraout_x8 + 0xf8);
  lVar1 = in_x5[1];
  *(undefined8 *)(extraout_x8 + 0x118) = *in_x5;
  *(long *)(extraout_x8 + 0x120) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 100c20770; end: 100c20787;  */

void FUN_100c20770(void)

{
  return;
}



/* Entry: 100c20788; end: 100c208df;  */

void FUN_100c20788(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  code *UNRECOVERED_JUMPTABLE;
  int extraout_w10;
  undefined8 uVar6;
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [296];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [256];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x000100c1fbbc();
  uVar5 = param_2;
  FUN_100c20054();
  uVar4 = 0;
  uStack_10 = extraout_x8;
  func_0x000100467380();
  FUN_100c208e0(*(undefined8 *)(*(long *)*param_4 + 0x10));
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_3 + 0x74);
  bVar3 = *(char *)(param_1 + 0xa4) == '\x01';
  uVar2 = bVar3 && uVar1 == 0;
  func_0x000100609644(auStack_288,param_1 + 8);
  uStack_270 = param_4[1];
  uStack_278 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  FUN_100c208fc(auStack_268,param_2);
  func_0x00010060996c(auStack_140,param_5);
  func_0x0001006099c0(auStack_120,param_3);
  uStack_20 = uVar4;
  uStack_18 = uVar5;
  FUN_100c209a0(uVar6,param_3 + 0xa0,bVar3 && uVar1 == 0 || (uVar1 & 0xfffffffe) == 2,param_3,
                auStack_288);
  func_0x000100c21f0c(auStack_288);
  FUN_100c204fc(uStack_10);
  if ((bool)uVar2) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053adc3c();
  func_0x000100c21f0c();
  func_0x0001053ad9f8();
                    /* WARNING: Could not recover jumptable at 0x000100c208e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c208e0; end: 100c208fb;  */

void FUN_100c208e0(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100c208e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c208fc; end: 100c2099f;  */

undefined8 * FUN_100c208fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_100c203a8(param_1 + 2,param_2 + 2);
  func_0x000100608b3c(param_1 + 0x1b,param_2 + 0x1b);
  func_0x000107c60c94(param_1 + 0x1c,param_2 + 0x1c);
  func_0x00010028af84(param_1 + 0x1f,param_2 + 0x1f);
  lVar1 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 100c209a0; end: 100c20adb;  */

void FUN_100c209a0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    auStack_78[0] = false;
  }
  else {
    lVar1 = param_1 + 0x18;
    func_0x000100609b44(lVar1,param_2);
    auStack_78[0] = param_1 + 0x20 == lVar1;
  }
  plVar2 = *(long **)(param_1 + 8);
  func_0x000107c60c94(&uStack_90,param_2);
  func_0x000107c60c94(&uStack_a8,param_4);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_60 = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_50 = uStack_a0;
  uStack_58 = uStack_a8;
  uStack_48 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_100c20b50(&uStack_d0,param_5);
  uStack_b8 = uStack_c8;
  uStack_c0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_78,&uStack_c0);
  func_0x00010049410c(&uStack_c0);
  FUN_100c21f4c(&uStack_d0);
  func_0x0001004a5664(auStack_78);
  FUN_100c21f70();
  func_0x000100c21f78();
  return;
}



/* Entry: 100c20adc; end: 100c20b4f;  */

void FUN_100c20adc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100c20054();
  uStack_28 = extraout_x8;
  FUN_100c20ba0(auStack_40,1);
  FUN_100c20bfc(uStack_30,param_2);
  func_0x000100c20510();
  FUN_100c20ce4();
  func_0x000100c204fc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053adb70();
  FUN_100c20ce4();
  func_0x0001053ad9f8();
  pcStack_48 = FUN_100c20b50;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100c20adc(&uStack_51,uStack_30);
  return;
}



/* Entry: 100c20b50; end: 100c20b9f;  */

void FUN_100c20b50(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100c20adc(&uStack_11,param_1);
  return;
}



/* Entry: 100c20ba0; end: 100c20bc7;  */

long FUN_100c20ba0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100c20b70();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100c20bc8; end: 100c20bdb;  */

undefined8 * FUN_100c20bc8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108813a0;
  return param_1 + 1;
}



/* Entry: 100c20bdc; end: 100c20bfb;  */

void FUN_100c20bdc(void)

{
  FUN_100c20bc8();
  FUN_100c20c34();
  return;
}



/* Entry: 100c20bfc; end: 100c20c33;  */

undefined8 * FUN_100c20bfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110881350;
  FUN_100c20bdc(param_1 + 3);
  return param_1;
}



/* Entry: 100c20c34; end: 100c20ce3;  */

undefined8 * FUN_100c20c34(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  FUN_100c208fc(param_1 + 4,param_2 + 4);
  func_0x00010060996c(param_1 + 0x29,param_2 + 0x29);
  func_0x0001006099c0(param_1 + 0x2d,param_2 + 0x2d);
  uVar2 = param_2[0x4d];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4d] = uVar2;
  return param_1;
}



/* Entry: 100c20ce4; end: 100c20cf3;  */

void FUN_100c20ce4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100c20cf4; end: 100c20d3b;  */

/* WARNING: Possible PIC construction at 0x000100c20d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c20d2c) */

void FUN_100c20cf4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c20d3c; end: 100c20f2b; -[SCDiscoverFeedBadgeProvider _showBadgeBasedOnDeliveredNotifications:] */

void FUN_100c20d3c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  ulong uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  lStack_138 = param_3;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar9 = 0;
    lVar10 = *plStack_120;
    do {
      param_3 = 0;
      do {
        if (*plStack_120 != lVar10) {
          func_0x000107c61128(lStack_138);
        }
        uVar2 = *(undefined8 *)(lStack_128 + param_3 * 8);
        func_0x000107c50300(uVar2);
        func_0x000107c61180();
        uVar3 = uVar2;
        func_0x000107c40414();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c5d9a4();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        uVar6 = param_1;
        func_0x000107c3b528();
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000107c40404();
        func_0x000107c61170(uVar6);
        lVar9 = lVar9 + (uVar7 & 0xffffffff);
        func_0x000107c61170(uVar5);
        param_3 = param_3 + 1;
      } while (lVar1 != param_3);
      lVar1 = lStack_138;
      func_0x000107c4080c();
    } while (lVar1 != 0);
    if (0 < lVar9) {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c3c814(param_1);
      func_0x000107c61170(puVar8);
      goto LAB_100c20ee8;
    }
  }
  func_0x000107c3ae88(param_1);
LAB_100c20ee8:
  lVar1 = lStack_138;
  func_0x000107c61170(lStack_138);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  pcStack_148 = FUN_100c20f2c;
  uStack_160 = param_1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000107c61144(auStack_168,lVar1);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_100c70c84;
  puStack_178 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_170,auStack_168);
  func_0x0001000d76cc("APPSTORE",&puStack_190);
  func_0x000107c61120(auStack_170);
  func_0x000107c61120(auStack_168);
  return;
}



/* Entry: 100c20f2c; end: 100c20fd3; -[SCDiscoverFeedBadgeProvider _badgeStateUnchanged] */

void FUN_100c20f2c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_100c70c84;
  puStack_38 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100c20fd4; end: 100c20fdb;  */

void FUN_100c20fd4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lStack_310;
  long lStack_308;
  undefined1 auStack_300 [56];
  long lStack_2c8;
  long lStack_2c0;
  undefined1 auStack_2b8 [296];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [256];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  param_1 = param_1 + 8;
  plVar3 = &lStack_310;
  FUN_100c20184();
  uStack_38 = extraout_x8;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),unaff_x19 + 0x2d);
  lStack_308 = unaff_x19[1];
  lStack_310 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(auStack_300,param_2);
  lStack_2c0 = unaff_x19[3];
  lStack_2c8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10_00 != 0);
  }
  FUN_100c208fc(auStack_2b8,unaff_x19 + 4);
  func_0x00010060996c(auStack_190,unaff_x19 + 0x29);
  func_0x0001006099c0(auStack_170,unaff_x19 + 0x2d);
  func_0x000107c60c94(auStack_70,unaff_x19 + 0x41);
  uStack_58 = (undefined1)unaff_x19[0x40];
  lStack_48 = unaff_x19[0x4e];
  lStack_50 = unaff_x19[0x4d];
  ppuVar2 = &PTR___tlv_bootstrap_11340e260;
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  uVar1 = *ppuVar2 == *(undefined **)(*unaff_x19 + 0x38);
  if ((bool)uVar1) {
    FUN_100c21170(&lStack_310);
  }
  else {
    func_0x0001053acdd0(*(undefined **)(*unaff_x19 + 0x38),&lStack_310);
  }
  FUN_100c21df8();
  FUN_100c204fc(uStack_38);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x0001053adb70();
    FUN_100c21df8();
    func_0x0001053ad9f8();
                    /* WARNING: Could not recover jumptable at 0x000100c21168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((long)plVar3 + 0x48) + 0x18))();
    return;
  }
  return;
}



/* Entry: 100c20fdc; end: 100c2115b;  */

void FUN_100c20fdc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lStack_310;
  long lStack_308;
  undefined1 auStack_300 [56];
  long lStack_2c8;
  long lStack_2c0;
  undefined1 auStack_2b8 [296];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [256];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  plVar3 = &lStack_310;
  FUN_100c20184();
  uStack_38 = extraout_x8;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),unaff_x19 + 0x2d);
  lStack_308 = unaff_x19[1];
  lStack_310 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(auStack_300,param_2);
  lStack_2c0 = unaff_x19[3];
  lStack_2c8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10_00 != 0);
  }
  FUN_100c208fc(auStack_2b8,unaff_x19 + 4);
  func_0x00010060996c(auStack_190,unaff_x19 + 0x29);
  func_0x0001006099c0(auStack_170,unaff_x19 + 0x2d);
  func_0x000107c60c94(auStack_70,unaff_x19 + 0x41);
  uStack_58 = (undefined1)unaff_x19[0x40];
  lStack_48 = unaff_x19[0x4e];
  lStack_50 = unaff_x19[0x4d];
  ppuVar2 = &PTR___tlv_bootstrap_11340e260;
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  uVar1 = *ppuVar2 == *(undefined **)(*unaff_x19 + 0x38);
  if ((bool)uVar1) {
    FUN_100c21170(&lStack_310);
  }
  else {
    func_0x0001053acdd0(*(undefined **)(*unaff_x19 + 0x38),&lStack_310);
  }
  FUN_100c21df8();
  FUN_100c204fc(uStack_38);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x0001053adb70();
    FUN_100c21df8();
    func_0x0001053ad9f8();
                    /* WARNING: Could not recover jumptable at 0x000100c21168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((long)plVar3 + 0x48) + 0x18))();
    return;
  }
  return;
}



/* Entry: 100c2115c; end: 100c2116f;  */

void FUN_100c2115c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c21168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  return;
}



/* Entry: 100c21170; end: 100c214e7;  */

void FUN_100c21170(double param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plStack_58 = param_2 + 0x30;
  plVar4 = param_2 + 0x34;
  plStack_50 = plVar4;
  plStack_48 = param_2 + 9;
  func_0x00010007847c(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*param_2 + 0x34) == '\x01') {
    if ((char)param_2[0x57] == '\x01') {
      func_0x0001053add00();
    }
    else {
      func_0x0001053adcf4();
    }
    func_0x00010002b838(&uStack_100,"Service disposed");
    func_0x0001053ada60(auStack_1f0);
    func_0x0001053adb30();
  }
  else {
    func_0x000100467380(0);
    func_0x00010046778c();
    func_0x000100467768();
    func_0x0001004a2704(param_2 + 0x54,(long)param_1);
    iVar2 = (int)param_2 + 0x10;
    func_0x0001004a4bf8();
    if (iVar2 == 0) {
      func_0x000107c60c94(&uStack_118,param_2 + 0x54);
      func_0x00010046985c(auStack_1f0,*(long *)(*param_2 + 0x18) + 0x80);
      func_0x00010048a5b8(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*param_2 + 0xa0);
      func_0x00010002b838(&uStack_208,"unknown");
      func_0x00010002b838(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      func_0x000107c60ca0(&uStack_220);
      func_0x000107c60ca0(&uStack_208);
      func_0x000107c60ca0(&uStack_130);
      func_0x000100469c34(auStack_1f0);
      func_0x000107c60ca0(&uStack_118);
      plVar4 = param_2 + 2;
      func_0x000107c2bfa4(plVar4);
      if ((char)param_2[0x57] == '\x01') {
        func_0x000107c2bfac(param_2 + 0x54,plVar4);
        func_0x0001053add6c();
        func_0x000107c2bfb8();
      }
      else {
        func_0x000107c2bfb0(param_2 + 0x54,plVar4);
        func_0x0001053add6c();
        func_0x000107c2bfc0();
      }
      FUN_100c218b0();
      func_0x000105394120(auStack_1f0,plVar4,auStack_238);
      func_0x0001053adb30();
      func_0x0001053adc2c();
      func_0x000100c218b8();
      FUN_100bf5670(&uStack_100);
      goto LAB_100c213e0;
    }
    if (*(long *)(*param_2 + 0x68) != 0) {
      plVar3 = (long *)param_2[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      FUN_100c214fc(param_2 + 0xb,param_2 + 2,(long)param_1,plVar4);
      goto LAB_100c213e0;
    }
    if ((char)param_2[0x57] == '\x01') {
      func_0x0001053add00();
    }
    else {
      func_0x0001053adcf4();
    }
    func_0x00010002b838(&uStack_100,"Resources aren\'t ready");
    func_0x0001053ada60(auStack_1f0);
    func_0x0001053adb30();
  }
  func_0x0001053adc2c();
  func_0x000107c60ca0(&uStack_100);
LAB_100c213e0:
  func_0x000100078bd8(auStack_70);
  return;
}



/* Entry: 100c214e8; end: 100c214fb;  */

void FUN_100c214e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c214f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  return;
}



/* Entry: 100c214fc; end: 100c21787;  */

void FUN_100c214fc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_128 [24];
  long alStack_68 [3];
  
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x34) == '\x01') {
    func_0x0001053adb0c();
    func_0x0001053add0c();
    func_0x0001053ada34();
    func_0x0001053adb00();
    func_0x0001053ad9c8();
  }
  else {
    if (*(byte **)(param_4 + 0xf0) != (byte *)0x0) {
      if ((**(byte **)(param_4 + 0xf0) & 1) != 0) {
        func_0x0001053adb0c();
        func_0x0001053add0c();
        func_0x0001053ada34();
        func_0x0001053adb00();
        func_0x0001053ad9c8();
        goto LAB_100c216f4;
      }
      lVar3 = *param_1;
    }
    if (*(long *)(lVar3 + 0x68) != 0) {
      auStack_128[0] = *(undefined8 *)(lVar3 + 0x80);
      FUN_100c21788(alStack_68,lVar3 + 0x38,param_1 + 0x23,param_4,lVar3 + 0x30,auStack_128);
      if (*(long *)(param_4 + 0xf0) != 0) {
        func_0x00010062a520(*(long *)(param_4 + 0xf0),alStack_68[0] + 0x120);
      }
      lVar3 = alStack_68[0];
      lVar4 = *param_1;
      func_0x00010046985c(auStack_128,*(long *)(lVar4 + 0x18) + 0x80);
      func_0x00010060d450(lVar4,lVar3 + 0x120,param_4,param_3,auStack_128,param_2);
      puVar2 = auStack_128;
      func_0x000100469c34(puVar2);
      lVar3 = alStack_68[0];
      if ((char)param_1[0x22] == '\x01') {
        FUN_100c218b0();
        puVar2 = (undefined8 *)(lVar3 + 0x120);
        func_0x0001004b5d48(puVar2,auStack_128,param_1 + 0x1f);
        func_0x000100c218b8();
      }
      lVar3 = alStack_68[0];
      func_0x000100488bd8();
      FUN_100c218c0(auStack_128,param_1 + 2,lVar3 + 0x120,param_1 + 0x1b,param_4,puVar2);
      uVar1 = auStack_128[0];
      auStack_128[0] = 0;
      lVar3 = *(long *)(alStack_68[0] + 0x340);
      *(undefined8 *)(alStack_68[0] + 0x340) = uVar1;
      if (lVar3 != 0) {
        func_0x0001053ada44();
      }
      FUN_100c21c70(auStack_128);
      func_0x0001006126e4(*(undefined8 *)(*param_1 + 0x80),param_4,alStack_68[0]);
      puVar2 = (undefined8 *)(alStack_68[0] + 0x340);
      alStack_68[0] = 0;
      (**(code **)(*(long *)*puVar2 + 0x10))();
      lVar3 = alStack_68[0];
      alStack_68[0] = 0;
      if (lVar3 == 0) {
        return;
      }
      func_0x0001053ada44();
      return;
    }
    func_0x0001053adb0c();
    func_0x0001053add0c();
    func_0x0001053ada34();
    func_0x0001053adb00();
    func_0x0001053ad9c8();
  }
LAB_100c216f4:
  func_0x000100601c8c(auStack_128);
  func_0x000107c60ca0(alStack_68);
  return;
}



/* Entry: 100c21788; end: 100c217e3;  */

void FUN_100c21788(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  FUN_100c206b0();
  uVar1 = 0x350;
  func_0x000107c60e20();
  FUN_100c217e4();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 100c217e4; end: 100c2183b;  */

void FUN_100c217e4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x00010060d34c(param_1,param_2,param_4,param_5);
  FUN_100c2183c();
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0x338) = param_3[1];
  *(undefined8 *)(param_1 + 0x330) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = param_6;
  return;
}



/* Entry: 100c2183c; end: 100c21863;  */

void FUN_100c2183c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108813e0;
  return;
}



/* Entry: 100c21864; end: 100c218af;  */

void FUN_100c21864(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(long **)(param_1 + 8))[1];
  for (lVar2 = **(long **)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    func_0x0001004b5d48(param_2,lVar2,lVar2 + 0x18);
  }
  return;
}



/* Entry: 100c218b0; end: 100c218bf;  */

void FUN_100c218b0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 100c218c0; end: 100c21963;  */

void FUN_100c218c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *unaff_x23;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x000100611364(param_2 + 2,param_3,param_5);
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  func_0x0001006115d8(param_1,uVar1,param_2[1],param_3,param_4,param_6);
  func_0x000100611630();
  func_0x000100611640();
  FUN_100c21964();
  *unaff_x23 = uVar1;
  return;
}



/* Entry: 100c21964; end: 100c219ef;  */

void FUN_100c21964(void)

{
  code *extraout_x8;
  code *extraout_x9;
  
  func_0x00010061165c();
  (*extraout_x9)();
  func_0x000100612124();
  func_0x000100612134();
  (*extraout_x8)();
  FUN_100c21a90();
  FUN_100c21aa8();
  return;
}



/* Entry: 100c219f0; end: 100c21a8f; -[SIGTabBarView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c21a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c21a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c21a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c21a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c21a58) */
/* WARNING: Removing unreachable block (ram,0x000100c21a38) */
/* WARNING: Removing unreachable block (ram,0x000100c21a18) */
/* WARNING: Removing unreachable block (ram,0x000100c21a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c219f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127952f0,0);
  return;
}



/* Entry: 100c21a90; end: 100c21aa7;  */

void FUN_100c21a90(void)

{
  return;
}



/* Entry: 100c21aa8; end: 100c21bfb;  */

undefined8 *
FUN_100c21aa8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5,long param_6)

{
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_78 [14];
  
  *param_1 = &PTR_DAT_1107ea2e8;
  param_1[1] = &PTR_DAT_1107ea328;
  param_1[2] = param_3;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  param_1[8] = param_2[5];
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(char *)(param_1 + 9) = (char)param_5;
  func_0x0001004b9300(param_1 + 10);
  func_0x0001004b91c8(param_1 + 0x3f);
  FUN_100c21bfc(param_1 + 0x68);
  func_0x0001004b9360(param_1 + 0x95);
  func_0x000100612268(aiStack_78,param_1 + 0x10,param_4);
  func_0x000100612328();
  if (aiStack_78[0] != 0) {
    func_0x000104c01a80(uRam0000000113815c70);
    func_0x000104c01ab8();
    (*extraout_x8)();
  }
  *(undefined1 *)((long)param_1 + 0xc1) = 1;
  if (param_5 == 0) {
    if (param_6 != 0) {
      func_0x000104c01a80(uRam0000000113815c70);
      func_0x000104c01ab8();
      (*extraout_x8_00)();
    }
  }
  else {
    func_0x00010016ca30();
    FUN_100c21cec();
  }
  return param_1;
}



/* Entry: 100c21bfc; end: 100c21c57;  */

void FUN_100c21bfc(long param_1)

{
  func_0x0001004b91bc();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  func_0x000100489924(&UNK_1107ea570);
  *(long *)(param_1 + 0x38) = param_1;
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  func_0x0001004b9214(param_1 + 0x80);
  return;
}



/* Entry: 100c21c58; end: 100c21c6f;  */

long FUN_100c21c58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000104c01188(lVar1 + 0x4a8);
    func_0x000104c011b8(lVar1 + 0x340);
    func_0x000104c011f4(lVar1 + 0x1f8);
    func_0x000104c01224(lVar1 + 0x50);
    return lVar1;
  }
  return 0;
}



/* Entry: 100c21c70; end: 100c21cdf;  */

undefined8 FUN_100c21c70(undefined8 param_1)

{
  FUN_100c21c58(param_1,0);
  return param_1;
}



/* Entry: 100c21ce0; end: 100c21ceb;  */

void FUN_100c21ce0(void)

{
  return;
}



/* Entry: 100c21cec; end: 100c21d47;  */

void FUN_100c21cec(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar3;
  
  func_0x0001001246dc();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x0001004b9428();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x59) = 1;
  *(int *)(unaff_x20 + 0x5c) = (int)lVar1;
  *(long *)(unaff_x20 + 0x68) = lVar3 + 0xb8;
  *(undefined8 *)(unaff_x20 + 0xd0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,unaff_x20 + 0x50,(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100c21d48; end: 100c21d53;  */

void FUN_100c21d48(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c21d54; end: 100c21da3;  */

void FUN_100c21d54(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_2;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  func_0x0001004a5ccc(auStack_38);
  func_0x0001004ba7b4(param_1 + 0x110);
  func_0x0001004ba7bc();
  return;
}



/* Entry: 100c21da4; end: 100c21da7;  */

void FUN_100c21da4(void)

{
  return;
}



/* Entry: 100c21da8; end: 100c21de3;  */

void FUN_100c21da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a74c(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111183ae8);
  func_0x000107c61180();
  uVar1 = puRam00000001137f45d8;
  puRam00000001137f45d8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c21de4; end: 100c21df7; -[SIGTabBarSelectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c21de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127952bc,0);
  return;
}



/* Entry: 100c21df8; end: 100c21e43;  */

undefined8 FUN_100c21df8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c60ca0(param_1 + 0x2a0);
  func_0x00010060867c(param_1 + 0x1a0);
  func_0x00010061cd18(param_1 + 0x180);
  func_0x000100c21e74(param_1 + 0x58);
  func_0x000100601d1c(param_1 + 0x48);
  func_0x0001004a21bc(param_1 + 0x10);
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100c21e44; end: 100c21e4f;  */

undefined8 FUN_100c21e44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c21e50; end: 100c21eab;  */

void FUN_100c21e50(long param_1)

{
  FUN_100c21e44();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100c21eac; end: 100c21eeb;  */

void FUN_100c21eac(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19 + 0xe0);
  return;
}



/* Entry: 100c21eec; end: 100c21f47;  */

void FUN_100c21eec(void)

{
  FUN_100c20bc8();
  func_0x000100c21f0c();
  return;
}



/* Entry: 100c21f48; end: 100c21f4b;  */

void FUN_100c21f48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100c21f4c; end: 100c21f6f;  */

void FUN_100c21f4c(long param_1)

{
  FUN_100c21e44();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100c21f70; end: 100c21fa7;  */

void FUN_100c21f70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000028);
  return;
}



/* Entry: 100c21fa8; end: 100c22013;  */

void FUN_100c21fa8(long param_1)

{
  FUN_100c21e44();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100c22014; end: 100c2201b;  */

void FUN_100c22014(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000020;
  func_0x000100450bd8();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100c2201c; end: 100c2203f;  */

void FUN_100c2201c(long param_1)

{
  FUN_100c21e44();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100c22040; end: 100c22063;  */

void FUN_100c22040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000058);
  return;
}



/* Entry: 100c22064; end: 100c22087;  */

void FUN_100c22064(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100c22088; end: 100c220c3;  */

void FUN_100c22088(void)

{
  long unaff_x29;
  
  if (*(char *)(unaff_x29 + -0x28) == '\x01') {
    func_0x000100627b64();
  }
  return;
}



/* Entry: 100c220c4; end: 100c220f7;  */

long FUN_100c220c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001000fecf4(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 100c220f8; end: 100c22113;  */

void FUN_100c220f8(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 100c22114; end: 100c2215f;  */

void FUN_100c22114(void)

{
  FUN_100c220f8();
  FUN_100c22160();
  FUN_100c221f0();
  return;
}



/* Entry: 100c22160; end: 100c221af;  */

undefined8 FUN_100c22160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = param_3;
  FUN_100c220f8();
  func_0x000107c613d0(uVar1);
  FUN_100c221b0(param_1,auStack_40,param_3,uVar1);
  FUN_100c221f0();
  return param_3;
}



/* Entry: 100c221b0; end: 100c221ef;  */

long FUN_100c221b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 100c221f0; end: 100c2221f;  */

void FUN_100c221f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 100c22220; end: 100c22277;  */

void FUN_100c22220(void)

{
  func_0x000100c22208();
  func_0x00010015bc98();
  return;
}



/* Entry: 100c22278; end: 100c2227f;  */

void FUN_100c22278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000020);
  return;
}



/* Entry: 100c22280; end: 100c2229f;  */

void FUN_100c22280(void)

{
  func_0x000100c22208();
  func_0x0001000e30f4();
  return;
}



/* Entry: 100c222a0; end: 100c2233f;  */

undefined8 FUN_100c222a0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113819700 & 1) == 0) {
    iVar1 = 0x13819700;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100c22340(auStack_68);
      puVar2 = auStack_68;
      func_0x00010028f4b0();
      puRam00000001138196f8 = puVar2;
      func_0x000100164334(auStack_68);
      func_0x000107c60e4c(0x113819700);
    }
  }
  return 0x1138196f8;
}



/* Entry: 100c22340; end: 100c2254f;  */

/* WARNING: Possible PIC construction at 0x000100c22374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c22378) */
/* WARNING: Removing unreachable block (ram,0x000100c2239c) */
/* WARNING: Removing unreachable block (ram,0x000100c22490) */
/* WARNING: Removing unreachable block (ram,0x000100c224a4) */
/* WARNING: Removing unreachable block (ram,0x000100c224e0) */
/* WARNING: Removing unreachable block (ram,0x000100c224f0) */
/* WARNING: Removing unreachable block (ram,0x000100c22500) */
/* WARNING: Removing unreachable block (ram,0x000100c22538) */
/* WARNING: Removing unreachable block (ram,0x000100c224cc) */

void FUN_100c22340(void)

{
  char *pcVar1;
  undefined1 auStack_128 [240];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = "SCN_DELTAFORCE";
  func_0x00010002b82c(auStack_128,"SCN_DELTAFORCE");
  func_0x000107c613d0(pcVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 100c22550; end: 100c22567;  */

void FUN_100c22550(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 100c22568; end: 100c2258b;  */

void FUN_100c22568(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100c2258c; end: 100c22593;  */

void FUN_100c2258c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 100c22594; end: 100c225bf;  */

undefined8 FUN_100c22594(undefined8 param_1)

{
  FUN_100c2258c();
  FUN_100c225cc(param_1);
  return param_1;
}



/* Entry: 100c225c0; end: 100c225cb;  */

undefined8 FUN_100c225c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c225cc; end: 100c2260b;  */

/* WARNING: Possible PIC construction at 0x000100c225e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c225f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c225e8) */
/* WARNING: Removing unreachable block (ram,0x000100c225f0) */
/* WARNING: Removing unreachable block (ram,0x000100c225f4) */
/* WARNING: Removing unreachable block (ram,0x000100c225f8) */
/* WARNING: Removing unreachable block (ram,0x000100c22600) */
/* WARNING: Removing unreachable block (ram,0x000100c22604) */
/* WARNING: Removing unreachable block (ram,0x000100c226b4) */

void FUN_100c225cc(long param_1)

{
  FUN_100c225c0();
  if (param_1 != 0) {
    FUN_100c2260c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100c2260c; end: 100c22637;  */

undefined8 FUN_100c2260c(undefined8 param_1)

{
  FUN_100c22638();
  FUN_100c22640(param_1);
  return param_1;
}



/* Entry: 100c22638; end: 100c2263f;  */

void FUN_100c22638(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 100c22640; end: 100c22673;  */

void FUN_100c22640(void)

{
  long unaff_x19;
  
  FUN_100c22674();
  func_0x000100067de0();
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    if (*(int *)(unaff_x19 + 0x24) == 2) {
      func_0x000100c22680();
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
  }
  return;
}



/* Entry: 100c22674; end: 100c22687;  */

long FUN_100c22674(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 100c22688; end: 100c226b3;  */

long FUN_100c22688(long param_1)

{
  FUN_100c2258c();
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 100c226b4; end: 100c226bb;  */

void FUN_100c226b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100c226bc; end: 100c22723; -[MASViewConstraint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c226e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c22708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c226e4) */
/* WARNING: Removing unreachable block (ram,0x000100c2270c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c226bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793768,0);
  return;
}



/* Entry: 100c22724; end: 100c2272b; -[MASViewAttribute .cxx_destruct] */

void FUN_100c22724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 100c2272c; end: 100c22747; -[MASLayoutConstraint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2272c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793734,0);
  return;
}



/* Entry: 100c22748; end: 100c22967;  */

void FUN_100c22748(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [7];
  
  iVar1 = *(int *)((long)param_1 + 0x324);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      if (param_2 != 0) {
        if ((*(byte *)(param_1 + 0x65) & 1) == 0) {
          func_0x000100c7cfd8();
          func_0x000100c7cfe0();
          *(undefined1 *)(param_1 + 0x65) = 1;
        }
        func_0x000100c7d114(param_1[0x66]);
        (*extraout_x8)();
        auStack_68[0] = 0;
        func_0x000100608af8(param_1 + 99,auStack_68);
        func_0x000100601aa4(auStack_68);
        (**(code **)(*(long *)(param_1[0x68] + 8) + 0x10))
                  ((long *)(param_1[0x68] + 8),param_1 + 99,param_1);
        return;
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      if (param_2 != 0) {
        *(undefined4 *)((long)param_1 + 0x324) = 1;
        plVar2 = (long *)(param_1[0x68] + 8);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x10);
        plVar3 = param_1 + 99;
        goto LAB_100c2281c;
      }
    }
    *(undefined4 *)((long)param_1 + 0x324) = 2;
    plVar2 = (long *)param_1[0x68];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x20);
    plVar3 = param_1 + 0x5c;
LAB_100c2281c:
                    /* WARNING: Could not recover jumptable at 0x000100c22830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar2,plVar3,param_1);
    return;
  }
  func_0x000100834f58(param_1[0x69],param_1 + 4);
  if (param_2 == 0) {
    func_0x0001053adc78();
    func_0x0001053add4c();
    func_0x0001053ada60();
    func_0x0001053adb00();
    func_0x0001053adc68();
    func_0x0001053adadc();
  }
  else {
    if ((*(byte *)(param_1 + 0x65) & 1) == 0) {
      func_0x000100c7cfd8();
      func_0x000100c7cfe0();
      *(undefined1 *)(param_1 + 0x65) = 1;
    }
    if ((int)param_1[0x5c] == 0) {
      (**(code **)(*(long *)param_1[0x66] + 0x40))((long *)param_1[0x66],param_1 + 4);
      goto LAB_100c22914;
    }
    func_0x000100c7cfd8();
    iVar1 = (int)param_1 + 0x2e0;
    func_0x000107c2bfe8();
    lVar4 = param_1[0x66];
    if (iVar1 == 0) {
      func_0x0001053adb00();
      (*extraout_x8_01)(lVar4,param_1 + 4,param_1 + 0x5c);
      goto LAB_100c22914;
    }
    func_0x000107c60c94(auStack_80,param_1 + 0x5d);
    func_0x0001053add4c();
    func_0x000105394120();
    func_0x0001053adb00();
    func_0x0001053adc68();
    (*extraout_x8_00)();
  }
  func_0x0001053adb44();
  func_0x0001053adad4();
LAB_100c22914:
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 100c22968; end: 100c2296f;  */

void FUN_100c22968(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  param_1 = param_1 + -8;
  func_0x0001004bb09c();
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    func_0x000104c019cc();
    func_0x000104c01a48();
    UNRECOVERED_JUMPTABLE = (code *)0xed;
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x380) = unaff_x21;
  if ((**(byte **)(unaff_x19 + 0x10) & 1) == 0) {
    FUN_100c229d0();
    *(undefined8 *)(unaff_x19 + 0x350) = extraout_x8_00;
  }
  *(undefined8 *)(unaff_x19 + 0x360) = unaff_x20;
  func_0x000100612df4(*(undefined8 *)(unaff_x19 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c22970; end: 100c229cf;  */

void FUN_100c22970(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001004bb09c();
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    func_0x000104c019cc();
    func_0x000104c01a48();
    UNRECOVERED_JUMPTABLE = (code *)0xed;
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x380) = unaff_x21;
  if ((**(byte **)(unaff_x19 + 0x10) & 1) == 0) {
    FUN_100c229d0();
    *(undefined8 *)(unaff_x19 + 0x350) = extraout_x8_00;
  }
  *(undefined8 *)(unaff_x19 + 0x360) = unaff_x20;
  func_0x000100612df4(*(undefined8 *)(unaff_x19 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c229d0; end: 100c229db;  */

void FUN_100c229d0(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}


