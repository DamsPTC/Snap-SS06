/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10161529c; end: 1016152f3;  */

uint FUN_10161529c(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  return -(uVar1 >> 0x1c & 1) & ((uVar1 >> 0x1c & 1) * -2 - (uVar1 >> 0x1d & 1)) + 4;
}



/* Entry: 1016152f4; end: 101615327;  */

undefined8 FUN_1016152f4(undefined8 param_1,undefined8 param_2)

{
  FUN_101617620(param_2,param_1,&UNK_1103e8c18);
  return param_2;
}



/* Entry: 101615328; end: 10161533b;  */

void FUN_101615328(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff;
  return;
}



/* Entry: 10161533c; end: 101615377;  */

undefined8 FUN_10161533c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103668fa4)(param_2,param_1);
  return param_2;
}



/* Entry: 101615378; end: 10161538b;  */

void FUN_101615378(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff | 0x2000000000000000;
  return;
}



/* Entry: 10161538c; end: 1016153d3;  */

undefined8 FUN_10161538c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1016153d4; end: 101615493;  */

void FUN_1016153d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c988;
  func_0x000107c61520(&UNK_10d96c988,&UNK_1103e8a70);
  puRam0000000112db9cd0 = puVar1;
  return;
}



/* Entry: 101615494; end: 1016154a7;  */

void FUN_101615494(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016154a8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016154e8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016154a8; end: 101615527;  */

void FUN_1016154a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c850;
  func_0x000107c61520(&UNK_10d96c850,&UNK_1103e89f8);
  puRam0000000112db9d00 = puVar1;
  return;
}



/* Entry: 101615528; end: 10161552b;  */

void FUN_101615528(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db9d10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db9d18;
  func_0x00010002969c(0x112db9d18,&UNK_10d96c7d8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db9d10 = puVar2;
  return;
}



/* Entry: 10161552c; end: 10161557b;  */

void FUN_10161552c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db9d10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db9d18;
  func_0x00010002969c(0x112db9d18,&UNK_10d96c7d8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db9d10 = puVar2;
  return;
}



/* Entry: 10161557c; end: 10161557f;  */

void FUN_10161557c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c890;
  func_0x000107c61520(&UNK_10d96c890,&UNK_1103e89f8);
  puRam0000000112db9d20 = puVar1;
  return;
}



/* Entry: 101615580; end: 1016155bf;  */

void FUN_101615580(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c890;
  func_0x000107c61520(&UNK_10d96c890,&UNK_1103e89f8);
  puRam0000000112db9d20 = puVar1;
  return;
}



/* Entry: 1016155c0; end: 1016155e3;  */

void FUN_1016155c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016155e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016155e4; end: 101615623;  */

void FUN_1016155e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c960;
  func_0x000107c61520(&UNK_10d96c960,&UNK_1103e8a70);
  puRam0000000112db9d28 = puVar1;
  return;
}



/* Entry: 101615624; end: 10161563b;  */

void FUN_101615624(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016153d4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101571abc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10161563c; end: 10161567b;  */

void FUN_10161563c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96c9c8;
  func_0x000107c61520(&UNK_10d96c9c8,&UNK_1103e8a70);
  puRam0000000112db9d30 = puVar1;
  return;
}



/* Entry: 10161567c; end: 10161569f;  */

void FUN_10161567c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016156a0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016156a0; end: 1016156df;  */

void FUN_1016156a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ca38;
  func_0x000107c61520(&UNK_10d96ca38,&UNK_1103e8b80);
  puRam0000000112db9d38 = puVar1;
  return;
}



/* Entry: 1016156e0; end: 1016156f3;  */

void FUN_1016156e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101615414)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1016156f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016156f4; end: 101615733;  */

void FUN_1016156f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96c9f0;
  func_0x000107c61520(&DAT_10d96c9f0,&UNK_1103e8b80);
  puRam0000000112db9d40 = puVar1;
  return;
}



/* Entry: 101615734; end: 101615737;  */

void FUN_101615734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96caa0;
  func_0x000107c61520(&UNK_10d96caa0,&UNK_1103e8b80);
  puRam0000000112db9d48 = puVar1;
  return;
}



/* Entry: 101615738; end: 101615777;  */

void FUN_101615738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96caa0;
  func_0x000107c61520(&UNK_10d96caa0,&UNK_1103e8b80);
  puRam0000000112db9d48 = puVar1;
  return;
}



/* Entry: 101615778; end: 10161579b;  */

void FUN_101615778(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10161579c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10161579c; end: 1016157db;  */

void FUN_10161579c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96cb10;
  func_0x000107c61520(&UNK_10d96cb10,&UNK_1103e8c90);
  puRam0000000112db9d50 = puVar1;
  return;
}



/* Entry: 1016157dc; end: 1016157ef;  */

void FUN_1016157dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101615454)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101615820();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016157f0; end: 10161581f;  */

void FUN_1016157f0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101615820; end: 10161585f;  */

void FUN_101615820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96cac8;
  func_0x000107c61520(&DAT_10d96cac8,&UNK_1103e8c90);
  puRam0000000112db9d58 = puVar1;
  return;
}



/* Entry: 101615860; end: 101615863;  */

void FUN_101615860(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96cb78;
  func_0x000107c61520(&UNK_10d96cb78,&UNK_1103e8c90);
  puRam0000000112db9d60 = puVar1;
  return;
}



/* Entry: 101615864; end: 1016158a3;  */

void FUN_101615864(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9d60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96cb78;
  func_0x000107c61520(&UNK_10d96cb78,&UNK_1103e8c90);
  puRam0000000112db9d60 = puVar1;
  return;
}



/* Entry: 1016158a4; end: 101615953;  */

int FUN_1016158a4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101615954; end: 101615c23;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101615bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101615b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101615bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101615b4c) */
/* WARNING: Removing unreachable block (ram,0x000101615bd0) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x000101615bf0) */
/* WARNING: Removing unreachable block (ram,0x000101615c04) */

ulong FUN_101615954(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   long param_6,ulong param_7,ulong param_8,undefined8 param_9,undefined8 param_10,
                   undefined8 param_11,undefined8 param_12,ulong param_13,undefined8 param_14,
                   undefined8 param_15,undefined8 param_16,undefined8 param_17,undefined8 param_18,
                   undefined8 param_19,undefined8 param_20,undefined8 param_21,undefined8 param_22,
                   undefined8 param_23,undefined8 param_24,undefined8 param_25,undefined8 param_26,
                   undefined8 param_27,ulong param_28,ulong param_29,undefined8 param_30,
                   undefined8 param_31,undefined8 param_32,undefined8 param_33,undefined8 param_34,
                   undefined8 param_35,undefined8 param_36,undefined8 param_37,undefined8 param_38,
                   undefined8 param_39,undefined8 param_40,undefined8 param_41,undefined8 param_42)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong unaff_x19;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined1 *puVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar3 = param_29;
  uVar2 = param_13;
  uVar6 = param_10;
  uVar1 = param_9;
  puVar4 = &uStack_1a0;
  puVar7 = &stack0xfffffffffffffff0;
  uVar5 = (uint)(param_29 >> 0x3c) & 3;
  if (uVar5 < 2) {
    if (uVar5 == 0) {
      func_0x000107c61434();
      func_0x000107c61434(param_3);
      puVar4 = (undefined8 *)register0x00000008;
      param_1 = param_4;
      param_8 = param_5;
      param_2 = unaff_x19;
      uVar6 = unaff_x20;
      puVar7 = unaff_x29;
    }
    else {
      func_0x00010006c00c(param_2,param_3);
      if (param_6 == 0) {
        return param_4;
      }
      func_0x000107c61434(param_6,param_5);
      unaff_x30 = 0x101615bd0;
      puVar4 = &uStack_1a0;
      param_1 = param_7;
      param_2 = uVar2;
    }
  }
  else if (uVar5 == 2) {
    uStack_70 = param_42;
    uStack_78 = param_41;
    uStack_80 = param_40;
    uStack_88 = param_39;
    uStack_90 = param_38;
    uStack_98 = param_37;
    uStack_a0 = param_36;
    uStack_a8 = param_35;
    uStack_b0 = param_34;
    uStack_b8 = param_33;
    uStack_c0 = param_32;
    uStack_c8 = param_31;
    uStack_d0 = param_30;
    uStack_d8 = param_28;
    uStack_e0 = param_27;
    uStack_100 = param_26;
    uStack_108 = param_25;
    uStack_110 = param_24;
    uStack_118 = param_23;
    uStack_120 = param_22;
    uStack_128 = param_21;
    uStack_130 = param_20;
    uStack_138 = param_19;
    uStack_e8 = param_18;
    uStack_f0 = param_17;
    uStack_f8 = param_16;
    uStack_140 = param_15;
    uStack_150 = param_13;
    uStack_148 = param_14;
    uStack_160 = param_11;
    uStack_158 = param_12;
    func_0x000107c61434();
    uStack_1a0 = CONCAT71(uStack_1a0._1_7_,(char)uVar6);
    FUN_101615c24(param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1);
    uStack_170 = uStack_108;
    uStack_168 = uStack_100;
    uStack_180 = uStack_118;
    uStack_178 = uStack_110;
    uStack_190 = uStack_128;
    uStack_188 = uStack_120;
    uStack_1a0 = uStack_138;
    uStack_198 = uStack_130;
    FUN_101615d5c(uStack_160,uStack_158,uStack_150,uStack_148,uStack_140,uStack_f8,uStack_f0,
                  uStack_e8);
    func_0x000107c61434(uStack_e0);
    unaff_x30 = 0x101615b4c;
    puVar4 = &uStack_1a0;
    param_1 = uStack_d8;
    param_8 = uVar3 & 0xcfffffffffffffff;
  }
  else {
    unaff_x30 = 0x101615bf0;
    param_8 = param_2;
  }
  uVar5 = (uint)(param_8 >> 0x3e);
  if (uVar5 == 1) {
    param_1 = param_8 & 0x3fffffffffffffff;
  }
  else {
    if (uVar5 != 2) {
      return param_1;
    }
    *(undefined8 *)((long)puVar4 + -0x20) = uVar6;
    *(ulong *)((long)puVar4 + -0x18) = param_2;
    *(undefined1 **)((long)puVar4 + -0x10) = puVar7;
    *(undefined8 *)((long)puVar4 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return param_1;
}



/* Entry: 101615c24; end: 101615c4f;  */

/* WARNING: Possible PIC construction at 0x0001016160a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101616110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101616148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101615ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161614c) */
/* WARNING: Removing unreachable block (ram,0x000101616114) */
/* WARNING: Removing unreachable block (ram,0x000101616160) */
/* WARNING: Removing unreachable block (ram,0x000101553bdc) */
/* WARNING: Removing unreachable block (ram,0x000101553c10) */
/* WARNING: Removing unreachable block (ram,0x000101553be0) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001016160a8) */
/* WARNING: Removing unreachable block (ram,0x000101615ce8) */

void FUN_101615c24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,ulong param_11,long param_12,
                  undefined8 *param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 *param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 *param_22,undefined8 *param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 *param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  undefined8 *puVar10;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar12;
  undefined8 unaff_x30;
  undefined8 *in_stack_00000150;
  undefined8 *in_stack_00000158;
  undefined8 *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_00000178;
  ulong in_stack_00000180;
  long in_stack_00000188;
  undefined8 *in_stack_00000190;
  ulong in_stack_00000210;
  undefined8 *in_stack_00000278;
  
  if ((((ulong)param_8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 && (byte)param_9 == 0xff) {
    return;
  }
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  puVar1 = &stack0xffffffffffffffd0;
  puVar12 = (undefined8 *)&stack0xfffffffffffffff0;
  uVar5 = (uint)((ulong)param_8 >> 0x3c) & 3;
  if (0xc < (uVar5 | (uint)(byte)param_9 << 2 & 0xff)) {
    return;
  }
  puVar6 = (undefined8 *)((ulong)(uVar5 | (uint)(byte)param_9 << 2) & 0xff);
  puVar7 = (undefined8 *)&UNK_10d96c70c;
  uVar9 = (ulong)*(byte *)((long)puVar6 + 0x10d96c70c);
  lVar8 = uVar9 * 4 + 0x101615c94;
  puVar3 = &stack0xffffffffffffffd0;
  puVar4 = param_1;
  puVar10 = unaff_x19;
  puVar11 = unaff_x20;
  switch(puVar6) {
  default:
    break;
  case (undefined8 *)0x4:
  case (undefined8 *)0x11:
    param_1 = param_2;
    puVar10 = param_6;
    puVar11 = param_4;
  case (undefined8 *)0xd8:
    param_2 = puVar10;
    func_0x000107c61434(param_1);
    func_0x000107c61434(puVar11);
    param_1 = param_5;
    break;
  case (undefined8 *)0x9:
  case (undefined8 *)0x16:
    param_1 = param_2;
  case (undefined8 *)0xc7:
    puVar10 = param_6;
    goto code_r0x000101615cac;
  case (undefined8 *)0xc:
  case (undefined8 *)0x19:
    unaff_x30 = 0x101615ce8;
    goto code_r0x00010006c00c;
  case (undefined8 *)0x1c:
  case (undefined8 *)0xb1:
  case (undefined8 *)0xd9:
    goto code_r0x000101615fe4;
  case (undefined8 *)0x1d:
  case (undefined8 *)0x2d:
  case (undefined8 *)0x35:
  case (undefined8 *)0x3d:
  case (undefined8 *)0x45:
  case (undefined8 *)0x4d:
  case (undefined8 *)0x55:
  case (undefined8 *)0x5d:
  case (undefined8 *)0x65:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x75:
  case (undefined8 *)0x7d:
  case (undefined8 *)0x85:
  case (undefined8 *)0x8d:
  case (undefined8 *)0x95:
  case (undefined8 *)0x9d:
  case (undefined8 *)0xcd:
  case (undefined8 *)0xed:
  case (undefined8 *)0xf5:
    puVar6 = (undefined8 *)*param_1;
    param_2 = (undefined8 *)param_1[1];
    param_3 = (undefined8 *)param_1[2];
    param_4 = (undefined8 *)param_1[3];
    param_5 = (undefined8 *)param_1[4];
    param_6 = (undefined8 *)param_1[5];
    param_7 = (undefined8 *)param_1[6];
    param_8 = (undefined8 *)param_1[7];
  case (undefined8 *)0xc4:
  case (undefined8 *)0xfc:
    param_10 = (undefined8 *)param_1[0xf];
    param_9 = (undefined8 *)param_1[0xe];
    param_12 = param_1[0x11];
    param_11 = param_1[0x10];
    param_14 = param_1[0x13];
    param_13 = (undefined8 *)param_1[0x12];
    param_16 = param_1[0x15];
    param_15 = param_1[0x14];
    param_18 = param_1[0x17];
    param_17 = (undefined8 *)param_1[0x16];
    param_20 = param_1[0x19];
    param_19 = param_1[0x18];
    param_22 = (undefined8 *)param_1[0x1b];
    param_21 = param_1[0x1a];
    param_24 = param_1[0x1d];
    param_23 = (undefined8 *)param_1[0x1c];
    param_26 = param_1[0x1f];
    param_25 = param_1[0x1e];
    param_28 = (undefined8 *)param_1[0x21];
    param_27 = param_1[0x20];
    param_30 = param_1[0x23];
    param_29 = param_1[0x22];
    param_32 = param_1[0x25];
    param_31 = param_1[0x24];
    param_34 = param_1[0x27];
    param_33 = param_1[0x26];
    param_35 = param_1[0x28];
    param_36 = param_1[0x29];
    FUN_101615eb0(puVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case (undefined8 *)0x1e:
  case (undefined8 *)0x2e:
  case (undefined8 *)0x36:
  case (undefined8 *)0x3e:
  case (undefined8 *)0x46:
  case (undefined8 *)0x4e:
  case (undefined8 *)0x56:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x66:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x76:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x86:
  case (undefined8 *)0x8e:
  case (undefined8 *)0x96:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xce:
  case (undefined8 *)0xee:
  case (undefined8 *)0xf6:
    goto code_r0x000101616054;
  case (undefined8 *)0x20:
    goto code_r0x000101615cc4;
  case (undefined8 *)0x2c:
  case (undefined8 *)0x34:
    goto code_r0x000101615fdc;
  case (undefined8 *)0x30:
  case (undefined8 *)0x40:
  case (undefined8 *)0x50:
  case (undefined8 *)0x60:
  case (undefined8 *)0x70:
  case (undefined8 *)0x80:
  case (undefined8 *)0x90:
  case (undefined8 *)0xa0:
    goto code_r0x000101615cb0;
  case (undefined8 *)0x38:
  case (undefined8 *)0x48:
  case (undefined8 *)0x58:
  case (undefined8 *)0x68:
  case (undefined8 *)0x78:
  case (undefined8 *)0x88:
  case (undefined8 *)0x98:
    goto code_r0x000101615cc0;
  case (undefined8 *)0x3c:
  case (undefined8 *)0x44:
    goto code_r0x000101615fec;
  case (undefined8 *)0x4c:
  case (undefined8 *)0x54:
    goto code_r0x000101615ffc;
  case (undefined8 *)0x5c:
  case (undefined8 *)0x64:
    goto code_r0x00010161600c;
  case (undefined8 *)0x6c:
  case (undefined8 *)0x74:
    goto code_r0x00010161601c;
  case (undefined8 *)0x7c:
  case (undefined8 *)0x84:
    goto code_r0x00010161602c;
  case (undefined8 *)0x8c:
  case (undefined8 *)0x94:
    goto code_r0x00010161603c;
  case (undefined8 *)0x9c:
    goto code_r0x00010161604c;
  case (undefined8 *)0xac:
    goto code_r0x000101616078;
  case (undefined8 *)0xad:
  case (undefined8 *)0xd5:
  case (undefined8 *)0xe9:
  case (undefined8 *)0xf1:
  case (undefined8 *)0xf9:
    goto code_r0x000101615fa4;
  case (undefined8 *)0xae:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf2:
  case (undefined8 *)0xfa:
    goto code_r0x000101615f30;
  case (undefined8 *)0xaf:
  case (undefined8 *)0xb7:
  case (undefined8 *)0xba:
  case (undefined8 *)0xd7:
  case (undefined8 *)0xeb:
  case (undefined8 *)0xf3:
  case (undefined8 *)0xfb:
code_r0x000101615c9c:
    puVar3 = (undefined1 *)register0x00000008;
  case (undefined8 *)0xe2:
  case (undefined8 *)0xe4:
    puVar1 = puVar3;
    param_4 = unaff_x19;
    param_5 = unaff_x20;
code_r0x00010006c00c:
    uVar5 = (uint)((ulong)param_2 >> 0x3e);
    if (uVar5 == 1) {
      param_1 = (undefined8 *)((ulong)param_2 & 0x3fffffffffffffff);
    }
    else {
      if (uVar5 != 2) {
        return;
      }
      *(undefined8 **)(puVar1 + -0x20) = param_5;
      *(undefined8 **)(puVar1 + -0x18) = param_4;
      *(undefined8 **)(puVar1 + -0x10) = puVar12;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_1);
    return;
  case (undefined8 *)0xb0:
    FUN_101616328();
    return;
  case (undefined8 *)0xb2:
  case (undefined8 *)0xda:
  case (undefined8 *)0xe8:
  case (undefined8 *)0xf0:
  case (undefined8 *)0xf8:
    goto code_r0x000101615fc8;
  case (undefined8 *)0xb4:
  case (undefined8 *)0xc0:
    goto code_r0x000101615fb4;
  case (undefined8 *)0xb5:
    goto code_r0x000101615f90;
  case (undefined8 *)0xbc:
    goto code_r0x000101615cac;
  case (undefined8 *)0xbe:
    goto code_r0x000101615c98;
  case (undefined8 *)0xc1:
    in_stack_00000160 = puVar12;
    puVar12 = &stack0x00000160;
    uVar5 = (uint)(in_stack_00000210 >> 0x3c) & 3;
    unaff_x21 = param_5;
    unaff_x25 = param_3;
    unaff_x26 = param_4;
    if (1 < uVar5) {
      puVar6 = in_stack_00000278;
      puVar7 = in_stack_00000190;
      lVar8 = in_stack_00000188;
      uVar9 = in_stack_00000180;
      unaff_x19 = param_2;
      unaff_x20 = in_stack_00000178;
      unaff_x22 = param_8;
      unaff_x23 = param_7;
      unaff_x24 = in_stack_00000210;
      unaff_x27 = param_6;
      unaff_x28 = in_stack_00000170;
      if (uVar5 != 2) {
        unaff_x30 = 0x10161614c;
        goto code_r0x00010006c090;
      }
      goto code_r0x000101615f50;
    }
    param_1 = param_2;
    in_stack_00000150 = unaff_x20;
    in_stack_00000158 = unaff_x19;
    in_stack_00000168 = unaff_x30;
    if (uVar5 != 0) {
      unaff_x30 = 0x101616114;
      puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
      param_2 = param_3;
      unaff_x19 = in_stack_00000190;
      unaff_x20 = in_stack_00000178;
      goto code_r0x00010006c090;
    }
  case (undefined8 *)0xf4:
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(unaff_x25);
    goto code_r0x000101615f1c;
  case (undefined8 *)0xc2:
    goto code_r0x000101615fbc;
  case (undefined8 *)0xc3:
  case (undefined8 *)0xff:
    goto code_r0x000101616060;
  case (undefined8 *)0xc5:
    FUN_101615d30();
    return;
  case (undefined8 *)0xc6:
code_r0x000101615f50:
    puVar12[-0xc] = puVar6;
    puVar6 = (undefined8 *)puVar12[0x22];
  case (undefined8 *)0xec:
    puVar12[-0xd] = puVar6;
    puVar12[-0xe] = puVar12[0x21];
    puVar12[-0xf] = puVar12[0x20];
    puVar12[-0x10] = puVar12[0x1f];
    puVar12[-0x11] = puVar12[0x1e];
    puVar12[-0x12] = puVar12[0x1d];
    puVar12[-0x13] = puVar12[0x1c];
    puVar6 = (undefined8 *)puVar12[0x1b];
    goto code_r0x000101615f90;
  case (undefined8 *)0xcc:
    goto code_r0x000101615fac;
  case (undefined8 *)0xd0:
    goto code_r0x000101615cb8;
  case (undefined8 *)0xd4:
    goto code_r0x000101615ff8;
  case (undefined8 *)0xfd:
    goto code_r0x000101615f1c;
  case (undefined8 *)0xfe:
    goto code_r0x000101615fb8;
  }
code_r0x000101615c94:
  puVar12 = unaff_x29;
code_r0x000101615c98:
  goto code_r0x000101615c9c;
code_r0x000101615f1c:
  param_1 = unaff_x26;
  param_2 = unaff_x21;
  unaff_x19 = in_stack_00000158;
  unaff_x20 = in_stack_00000150;
  puVar12 = in_stack_00000160;
  unaff_x30 = in_stack_00000168;
  goto code_r0x000101615f30;
code_r0x000101615f90:
  puVar12[-0x14] = puVar6;
  puVar12[-0x15] = puVar12[0x1a];
  puVar12[-0x16] = puVar12[0x19];
code_r0x000101615fa4:
  puVar12[-0x17] = puVar12[0x18];
code_r0x000101615fac:
  puVar12[-0x18] = puVar12[0x17];
code_r0x000101615fb4:
  puVar6 = (undefined8 *)puVar12[0x15];
code_r0x000101615fb8:
  param_28 = puVar6;
code_r0x000101615fbc:
  param_27 = puVar12[0x14];
  puVar6 = (undefined8 *)puVar12[0x13];
code_r0x000101615fc8:
  param_23 = puVar6;
  param_22 = (undefined8 *)puVar12[0x12];
  param_21 = puVar12[0x11];
code_r0x000101615fdc:
  param_20 = puVar12[0x10];
code_r0x000101615fe4:
  param_19 = puVar12[0xf];
code_r0x000101615fec:
  param_18 = puVar12[0xe];
  puVar6 = (undefined8 *)puVar12[0xd];
code_r0x000101615ff8:
  param_17 = puVar6;
code_r0x000101615ffc:
  param_16 = puVar12[0xc];
  param_26 = puVar12[0xb];
code_r0x00010161600c:
  param_25 = puVar12[10];
  param_24 = puVar12[9];
code_r0x00010161601c:
  param_15 = puVar12[8];
  param_14 = puVar12[7];
  param_13 = puVar7;
code_r0x00010161602c:
  param_1 = unaff_x19;
  param_11 = uVar9;
  param_12 = lVar8;
  func_0x000107c6142c();
  unaff_x19 = param_1;
code_r0x00010161603c:
  param_5 = unaff_x27;
  param_3 = unaff_x26;
  param_2 = unaff_x25;
  param_4 = unaff_x21;
code_r0x00010161604c:
  param_6 = unaff_x23;
  param_7 = unaff_x22;
code_r0x000101616054:
  FUN_101616180(param_1,param_2,param_3,param_4,param_5,param_6,param_7,unaff_x28);
  puVar6 = param_22;
  puVar7 = param_23;
code_r0x000101616060:
  param_9 = puVar6;
  param_10 = puVar7;
code_r0x000101616078:
  FUN_1016162b8(param_11,param_12,param_13,param_14,param_15,param_24,param_25,param_26);
  func_0x000107c6142c(param_27);
  unaff_x30 = 0x1016160a8;
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  param_1 = param_28;
  param_2 = (undefined8 *)(unaff_x24 & 0xcfffffffffffffff);
  goto code_r0x00010006c090;
code_r0x000101615cac:
  puVar11 = param_4;
code_r0x000101615cb0:
  puVar4 = param_1;
  unaff_x21 = param_7;
  unaff_x22 = param_8;
code_r0x000101615cb8:
  param_1 = puVar11;
  func_0x000107c61434(puVar4);
code_r0x000101615cc0:
  func_0x000107c61434(param_1);
code_r0x000101615cc4:
  param_1 = unaff_x21;
  func_0x000107c61434(puVar10);
  param_2 = (undefined8 *)((ulong)unaff_x22 & 0xcfffffffffffffff);
  goto code_r0x000101615c94;
code_r0x000101615f30:
  puVar2 = &stack0x00000170;
code_r0x00010006c090:
  uVar5 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar5 == 1) {
    param_1 = (undefined8 *)((ulong)param_2 & 0x3fffffffffffffff);
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    puVar2[-4] = unaff_x20;
    puVar2[-3] = unaff_x19;
    puVar2[-2] = puVar12;
    puVar2[-1] = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101615c50; end: 101615d2f;  */

/* WARNING: Possible PIC construction at 0x0001016160a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101616110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101616148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101615ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161614c) */
/* WARNING: Removing unreachable block (ram,0x000101616114) */
/* WARNING: Removing unreachable block (ram,0x000101616160) */
/* WARNING: Removing unreachable block (ram,0x000101553bdc) */
/* WARNING: Removing unreachable block (ram,0x000101553c10) */
/* WARNING: Removing unreachable block (ram,0x000101553be0) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001016160a8) */
/* WARNING: Removing unreachable block (ram,0x000101615ce8) */

void FUN_101615c50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,ulong param_11,long param_12,
                  undefined8 *param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 *param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 *param_22,undefined8 *param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 *param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  undefined8 *puVar10;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar12;
  undefined8 unaff_x30;
  undefined8 *in_stack_00000150;
  undefined8 *in_stack_00000158;
  undefined8 *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_00000178;
  ulong in_stack_00000180;
  long in_stack_00000188;
  undefined8 *in_stack_00000190;
  ulong in_stack_00000210;
  undefined8 *in_stack_00000278;
  
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  puVar1 = &stack0xffffffffffffffd0;
  puVar12 = (undefined8 *)&stack0xfffffffffffffff0;
  uVar5 = (uint)((ulong)param_8 >> 0x3c) & 3;
  if (0xc < (uVar5 | (uint)(byte)param_9 << 2 & 0xff)) {
    return;
  }
  puVar6 = (undefined8 *)((ulong)(uVar5 | (uint)(byte)param_9 << 2) & 0xff);
  puVar7 = (undefined8 *)&UNK_10d96c70c;
  uVar9 = (ulong)*(byte *)((long)puVar6 + 0x10d96c70c);
  lVar8 = uVar9 * 4 + 0x101615c94;
  puVar3 = &stack0xffffffffffffffd0;
  puVar4 = param_1;
  puVar10 = unaff_x19;
  puVar11 = unaff_x20;
  switch(puVar6) {
  default:
    break;
  case (undefined8 *)0x4:
  case (undefined8 *)0x11:
    param_1 = param_2;
    puVar10 = param_6;
    puVar11 = param_4;
  case (undefined8 *)0xd8:
    param_2 = puVar10;
    func_0x000107c61434(param_1);
    func_0x000107c61434(puVar11);
    param_1 = param_5;
    break;
  case (undefined8 *)0x9:
  case (undefined8 *)0x16:
    param_1 = param_2;
  case (undefined8 *)0xc7:
    puVar10 = param_6;
    goto code_r0x000101615cac;
  case (undefined8 *)0xc:
  case (undefined8 *)0x19:
    unaff_x30 = 0x101615ce8;
    goto code_r0x00010006c00c;
  case (undefined8 *)0x1c:
  case (undefined8 *)0xb1:
  case (undefined8 *)0xd9:
    goto code_r0x000101615fe4;
  case (undefined8 *)0x1d:
  case (undefined8 *)0x2d:
  case (undefined8 *)0x35:
  case (undefined8 *)0x3d:
  case (undefined8 *)0x45:
  case (undefined8 *)0x4d:
  case (undefined8 *)0x55:
  case (undefined8 *)0x5d:
  case (undefined8 *)0x65:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x75:
  case (undefined8 *)0x7d:
  case (undefined8 *)0x85:
  case (undefined8 *)0x8d:
  case (undefined8 *)0x95:
  case (undefined8 *)0x9d:
  case (undefined8 *)0xcd:
  case (undefined8 *)0xed:
  case (undefined8 *)0xf5:
    puVar6 = (undefined8 *)*param_1;
    param_2 = (undefined8 *)param_1[1];
    param_3 = (undefined8 *)param_1[2];
    param_4 = (undefined8 *)param_1[3];
    param_5 = (undefined8 *)param_1[4];
    param_6 = (undefined8 *)param_1[5];
    param_7 = (undefined8 *)param_1[6];
    param_8 = (undefined8 *)param_1[7];
  case (undefined8 *)0xc4:
  case (undefined8 *)0xfc:
    param_10 = (undefined8 *)param_1[0xf];
    param_9 = (undefined8 *)param_1[0xe];
    param_12 = param_1[0x11];
    param_11 = param_1[0x10];
    param_14 = param_1[0x13];
    param_13 = (undefined8 *)param_1[0x12];
    param_16 = param_1[0x15];
    param_15 = param_1[0x14];
    param_18 = param_1[0x17];
    param_17 = (undefined8 *)param_1[0x16];
    param_20 = param_1[0x19];
    param_19 = param_1[0x18];
    param_22 = (undefined8 *)param_1[0x1b];
    param_21 = param_1[0x1a];
    param_24 = param_1[0x1d];
    param_23 = (undefined8 *)param_1[0x1c];
    param_26 = param_1[0x1f];
    param_25 = param_1[0x1e];
    param_28 = (undefined8 *)param_1[0x21];
    param_27 = param_1[0x20];
    param_30 = param_1[0x23];
    param_29 = param_1[0x22];
    param_32 = param_1[0x25];
    param_31 = param_1[0x24];
    param_34 = param_1[0x27];
    param_33 = param_1[0x26];
    param_35 = param_1[0x28];
    param_36 = param_1[0x29];
    FUN_101615eb0(puVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case (undefined8 *)0x1e:
  case (undefined8 *)0x2e:
  case (undefined8 *)0x36:
  case (undefined8 *)0x3e:
  case (undefined8 *)0x46:
  case (undefined8 *)0x4e:
  case (undefined8 *)0x56:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x66:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x76:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x86:
  case (undefined8 *)0x8e:
  case (undefined8 *)0x96:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xce:
  case (undefined8 *)0xee:
  case (undefined8 *)0xf6:
    goto code_r0x000101616054;
  case (undefined8 *)0x20:
    goto code_r0x000101615cc4;
  case (undefined8 *)0x2c:
  case (undefined8 *)0x34:
    goto code_r0x000101615fdc;
  case (undefined8 *)0x30:
  case (undefined8 *)0x40:
  case (undefined8 *)0x50:
  case (undefined8 *)0x60:
  case (undefined8 *)0x70:
  case (undefined8 *)0x80:
  case (undefined8 *)0x90:
  case (undefined8 *)0xa0:
    goto code_r0x000101615cb0;
  case (undefined8 *)0x38:
  case (undefined8 *)0x48:
  case (undefined8 *)0x58:
  case (undefined8 *)0x68:
  case (undefined8 *)0x78:
  case (undefined8 *)0x88:
  case (undefined8 *)0x98:
    goto code_r0x000101615cc0;
  case (undefined8 *)0x3c:
  case (undefined8 *)0x44:
    goto code_r0x000101615fec;
  case (undefined8 *)0x4c:
  case (undefined8 *)0x54:
    goto code_r0x000101615ffc;
  case (undefined8 *)0x5c:
  case (undefined8 *)0x64:
    goto code_r0x00010161600c;
  case (undefined8 *)0x6c:
  case (undefined8 *)0x74:
    goto code_r0x00010161601c;
  case (undefined8 *)0x7c:
  case (undefined8 *)0x84:
    goto code_r0x00010161602c;
  case (undefined8 *)0x8c:
  case (undefined8 *)0x94:
    goto code_r0x00010161603c;
  case (undefined8 *)0x9c:
    goto code_r0x00010161604c;
  case (undefined8 *)0xac:
    goto code_r0x000101616078;
  case (undefined8 *)0xad:
  case (undefined8 *)0xd5:
  case (undefined8 *)0xe9:
  case (undefined8 *)0xf1:
  case (undefined8 *)0xf9:
    goto code_r0x000101615fa4;
  case (undefined8 *)0xae:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf2:
  case (undefined8 *)0xfa:
    goto code_r0x000101615f30;
  case (undefined8 *)0xaf:
  case (undefined8 *)0xb7:
  case (undefined8 *)0xba:
  case (undefined8 *)0xd7:
  case (undefined8 *)0xeb:
  case (undefined8 *)0xf3:
  case (undefined8 *)0xfb:
code_r0x000101615c9c:
    puVar3 = (undefined1 *)register0x00000008;
  case (undefined8 *)0xe2:
  case (undefined8 *)0xe4:
    puVar1 = puVar3;
    param_4 = unaff_x19;
    param_5 = unaff_x20;
code_r0x00010006c00c:
    uVar5 = (uint)((ulong)param_2 >> 0x3e);
    if (uVar5 == 1) {
      param_1 = (undefined8 *)((ulong)param_2 & 0x3fffffffffffffff);
    }
    else {
      if (uVar5 != 2) {
        return;
      }
      *(undefined8 **)(puVar1 + -0x20) = param_5;
      *(undefined8 **)(puVar1 + -0x18) = param_4;
      *(undefined8 **)(puVar1 + -0x10) = puVar12;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_1);
    return;
  case (undefined8 *)0xb0:
    FUN_101616328();
    return;
  case (undefined8 *)0xb2:
  case (undefined8 *)0xda:
  case (undefined8 *)0xe8:
  case (undefined8 *)0xf0:
  case (undefined8 *)0xf8:
    goto code_r0x000101615fc8;
  case (undefined8 *)0xb4:
  case (undefined8 *)0xc0:
    goto code_r0x000101615fb4;
  case (undefined8 *)0xb5:
    goto code_r0x000101615f90;
  case (undefined8 *)0xbc:
    goto code_r0x000101615cac;
  case (undefined8 *)0xbe:
    goto code_r0x000101615c98;
  case (undefined8 *)0xc1:
    in_stack_00000160 = puVar12;
    puVar12 = &stack0x00000160;
    uVar5 = (uint)(in_stack_00000210 >> 0x3c) & 3;
    unaff_x21 = param_5;
    unaff_x25 = param_3;
    unaff_x26 = param_4;
    if (1 < uVar5) {
      puVar6 = in_stack_00000278;
      puVar7 = in_stack_00000190;
      lVar8 = in_stack_00000188;
      uVar9 = in_stack_00000180;
      unaff_x19 = param_2;
      unaff_x20 = in_stack_00000178;
      unaff_x22 = param_8;
      unaff_x23 = param_7;
      unaff_x24 = in_stack_00000210;
      unaff_x27 = param_6;
      unaff_x28 = in_stack_00000170;
      if (uVar5 != 2) {
        unaff_x30 = 0x10161614c;
        goto code_r0x00010006c090;
      }
      goto code_r0x000101615f50;
    }
    param_1 = param_2;
    in_stack_00000150 = unaff_x20;
    in_stack_00000158 = unaff_x19;
    in_stack_00000168 = unaff_x30;
    if (uVar5 != 0) {
      unaff_x30 = 0x101616114;
      puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
      param_2 = param_3;
      unaff_x19 = in_stack_00000190;
      unaff_x20 = in_stack_00000178;
      goto code_r0x00010006c090;
    }
  case (undefined8 *)0xf4:
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(unaff_x25);
    goto code_r0x000101615f1c;
  case (undefined8 *)0xc2:
    goto code_r0x000101615fbc;
  case (undefined8 *)0xc3:
  case (undefined8 *)0xff:
    goto code_r0x000101616060;
  case (undefined8 *)0xc5:
    FUN_101615d30();
    return;
  case (undefined8 *)0xc6:
code_r0x000101615f50:
    puVar12[-0xc] = puVar6;
    puVar6 = (undefined8 *)puVar12[0x22];
  case (undefined8 *)0xec:
    puVar12[-0xd] = puVar6;
    puVar12[-0xe] = puVar12[0x21];
    puVar12[-0xf] = puVar12[0x20];
    puVar12[-0x10] = puVar12[0x1f];
    puVar12[-0x11] = puVar12[0x1e];
    puVar12[-0x12] = puVar12[0x1d];
    puVar12[-0x13] = puVar12[0x1c];
    puVar6 = (undefined8 *)puVar12[0x1b];
    goto code_r0x000101615f90;
  case (undefined8 *)0xcc:
    goto code_r0x000101615fac;
  case (undefined8 *)0xd0:
    goto code_r0x000101615cb8;
  case (undefined8 *)0xd4:
    goto code_r0x000101615ff8;
  case (undefined8 *)0xfd:
    goto code_r0x000101615f1c;
  case (undefined8 *)0xfe:
    goto code_r0x000101615fb8;
  }
code_r0x000101615c94:
  puVar12 = unaff_x29;
code_r0x000101615c98:
  goto code_r0x000101615c9c;
code_r0x000101615f1c:
  param_1 = unaff_x26;
  param_2 = unaff_x21;
  unaff_x19 = in_stack_00000158;
  unaff_x20 = in_stack_00000150;
  puVar12 = in_stack_00000160;
  unaff_x30 = in_stack_00000168;
  goto code_r0x000101615f30;
code_r0x000101615f90:
  puVar12[-0x14] = puVar6;
  puVar12[-0x15] = puVar12[0x1a];
  puVar12[-0x16] = puVar12[0x19];
code_r0x000101615fa4:
  puVar12[-0x17] = puVar12[0x18];
code_r0x000101615fac:
  puVar12[-0x18] = puVar12[0x17];
code_r0x000101615fb4:
  puVar6 = (undefined8 *)puVar12[0x15];
code_r0x000101615fb8:
  param_28 = puVar6;
code_r0x000101615fbc:
  param_27 = puVar12[0x14];
  puVar6 = (undefined8 *)puVar12[0x13];
code_r0x000101615fc8:
  param_23 = puVar6;
  param_22 = (undefined8 *)puVar12[0x12];
  param_21 = puVar12[0x11];
code_r0x000101615fdc:
  param_20 = puVar12[0x10];
code_r0x000101615fe4:
  param_19 = puVar12[0xf];
code_r0x000101615fec:
  param_18 = puVar12[0xe];
  puVar6 = (undefined8 *)puVar12[0xd];
code_r0x000101615ff8:
  param_17 = puVar6;
code_r0x000101615ffc:
  param_16 = puVar12[0xc];
  param_26 = puVar12[0xb];
code_r0x00010161600c:
  param_25 = puVar12[10];
  param_24 = puVar12[9];
code_r0x00010161601c:
  param_15 = puVar12[8];
  param_14 = puVar12[7];
  param_13 = puVar7;
code_r0x00010161602c:
  param_1 = unaff_x19;
  param_11 = uVar9;
  param_12 = lVar8;
  func_0x000107c6142c();
  unaff_x19 = param_1;
code_r0x00010161603c:
  param_5 = unaff_x27;
  param_3 = unaff_x26;
  param_2 = unaff_x25;
  param_4 = unaff_x21;
code_r0x00010161604c:
  param_6 = unaff_x23;
  param_7 = unaff_x22;
code_r0x000101616054:
  FUN_101616180(param_1,param_2,param_3,param_4,param_5,param_6,param_7,unaff_x28);
  puVar6 = param_22;
  puVar7 = param_23;
code_r0x000101616060:
  param_9 = puVar6;
  param_10 = puVar7;
code_r0x000101616078:
  FUN_1016162b8(param_11,param_12,param_13,param_14,param_15,param_24,param_25,param_26);
  func_0x000107c6142c(param_27);
  unaff_x30 = 0x1016160a8;
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  param_1 = param_28;
  param_2 = (undefined8 *)(unaff_x24 & 0xcfffffffffffffff);
  goto code_r0x00010006c090;
code_r0x000101615cac:
  puVar11 = param_4;
code_r0x000101615cb0:
  puVar4 = param_1;
  unaff_x21 = param_7;
  unaff_x22 = param_8;
code_r0x000101615cb8:
  param_1 = puVar11;
  func_0x000107c61434(puVar4);
code_r0x000101615cc0:
  func_0x000107c61434(param_1);
code_r0x000101615cc4:
  param_1 = unaff_x21;
  func_0x000107c61434(puVar10);
  param_2 = (undefined8 *)((ulong)unaff_x22 & 0xcfffffffffffffff);
  goto code_r0x000101615c94;
code_r0x000101615f30:
  puVar2 = &stack0x00000170;
code_r0x00010006c090:
  uVar5 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar5 == 1) {
    param_1 = (undefined8 *)((ulong)param_2 & 0x3fffffffffffffff);
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    puVar2[-4] = unaff_x20;
    puVar2[-3] = unaff_x19;
    puVar2[-2] = puVar12;
    puVar2[-1] = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101615d30; end: 101615d5b;  */

void FUN_101615d30(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3);
    return;
  }
  return;
}



/* Entry: 101615d5c; end: 101615dcb;  */

void FUN_101615d5c(undefined8 param_1,ulong param_2)

{
  if (((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_101616328();
  }
  return;
}



/* Entry: 101615dcc; end: 101615e07;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101615dcc(void)

{
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (0xe < in_x6 >> 0x3c) {
    return;
  }
  FUN_101615e08();
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x5);
  return;
}



/* Entry: 101615e08; end: 101615e2f;  */

void FUN_101615e08(void)

{
  ulong in_x3;
  
  if (((in_x3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_10161650c();
  }
  return;
}



/* Entry: 101615e30; end: 101615eaf;  */

void FUN_101615e30(undefined8 *param_1)

{
  FUN_101615eb0(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],param_1[0x18],param_1[0x19],
                param_1[0x1a],param_1[0x1b],param_1[0x1c],param_1[0x1d],param_1[0x1e],param_1[0x1f],
                param_1[0x20],param_1[0x21],param_1[0x22],param_1[0x23],param_1[0x24],param_1[0x25],
                param_1[0x26],param_1[0x27],param_1[0x28],param_1[0x29]);
  return;
}



/* Entry: 101615eb0; end: 10161617f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016160a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101616148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016160a8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010161614c) */

ulong FUN_101615eb0(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                   undefined8 param_10,long param_11,ulong param_12,ulong param_13,
                   undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                   undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                   undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
                   undefined8 param_26,undefined8 param_27,ulong param_28,ulong param_29,
                   undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
                   undefined8 param_34,undefined8 param_35,undefined8 param_36,undefined8 param_37,
                   undefined8 param_38,undefined8 param_39,undefined8 param_40,undefined8 param_41,
                   undefined8 param_42)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong unaff_x19;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined1 *puVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar4 = param_29;
  uVar6 = param_13;
  uVar3 = param_12;
  lVar2 = param_11;
  uVar8 = param_10;
  uVar1 = param_9;
  puVar5 = &uStack_1a0;
  puVar9 = &stack0xfffffffffffffff0;
  uVar7 = (uint)(param_29 >> 0x3c) & 3;
  if (uVar7 < 2) {
    puVar5 = (undefined8 *)register0x00000008;
    puVar9 = unaff_x29;
    if (uVar7 == 0) {
      func_0x000107c6142c();
      func_0x000107c6142c(param_3);
      param_1 = param_4;
      uVar6 = param_5;
      param_2 = unaff_x19;
      uVar8 = unaff_x20;
    }
    else {
      func_0x00010006c090(param_2,param_3);
      FUN_101553bdc(param_4,param_5,param_6,param_7,param_8);
      if (lVar2 == 0) {
        return uVar1;
      }
      func_0x000107c6142c(lVar2,uVar8);
      param_1 = uVar3;
      param_2 = unaff_x19;
      uVar8 = unaff_x20;
    }
  }
  else if (uVar7 == 2) {
    uStack_70 = param_42;
    uStack_78 = param_41;
    uStack_80 = param_40;
    uStack_88 = param_39;
    uStack_90 = param_38;
    uStack_98 = param_37;
    uStack_a0 = param_36;
    uStack_a8 = param_35;
    uStack_b0 = param_34;
    uStack_b8 = param_33;
    uStack_c0 = param_32;
    uStack_c8 = param_31;
    uStack_d0 = param_30;
    uStack_d8 = param_28;
    uStack_e0 = param_27;
    uStack_100 = param_26;
    uStack_108 = param_25;
    uStack_110 = param_24;
    uStack_118 = param_23;
    uStack_120 = param_22;
    uStack_128 = param_21;
    uStack_130 = param_20;
    uStack_138 = param_19;
    uStack_e8 = param_18;
    uStack_f0 = param_17;
    uStack_f8 = param_16;
    uStack_140 = param_15;
    uStack_150 = param_13;
    uStack_148 = param_14;
    lStack_160 = param_11;
    uStack_158 = param_12;
    func_0x000107c6142c();
    uStack_1a0 = CONCAT71(uStack_1a0._1_7_,(char)uVar8);
    FUN_101616180(param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1);
    uStack_170 = uStack_108;
    uStack_168 = uStack_100;
    uStack_180 = uStack_118;
    uStack_178 = uStack_110;
    uStack_190 = uStack_128;
    uStack_188 = uStack_120;
    uStack_1a0 = uStack_138;
    uStack_198 = uStack_130;
    FUN_1016162b8(lStack_160,uStack_158,uStack_150,uStack_148,uStack_140,uStack_f8,uStack_f0,
                  uStack_e8);
    func_0x000107c6142c(uStack_e0);
    unaff_x30 = 0x1016160a8;
    puVar5 = &uStack_1a0;
    param_1 = uStack_d8;
    uVar6 = uVar4 & 0xcfffffffffffffff;
  }
  else {
    unaff_x30 = 0x10161614c;
    uVar6 = param_2;
  }
  uVar7 = (uint)(uVar6 >> 0x3e);
  if (uVar7 == 1) {
    param_1 = uVar6 & 0x3fffffffffffffff;
  }
  else {
    if (uVar7 != 2) {
      return param_1;
    }
    *(undefined8 *)((long)puVar5 + -0x20) = uVar8;
    *(ulong *)((long)puVar5 + -0x18) = param_2;
    *(undefined1 **)((long)puVar5 + -0x10) = puVar9;
    *(undefined8 *)((long)puVar5 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return param_1;
}



/* Entry: 101616180; end: 1016161ab;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101616240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101616244) */

code * FUN_101616180(code *param_1,code *param_2,code *UNRECOVERED_JUMPTABLE,
                    code *UNRECOVERED_JUMPTABLE_03,code *UNRECOVERED_JUMPTABLE_02,code *param_6,
                    code *param_7,code *param_8,code *param_9,code *param_10,code *param_11,
                    code *param_12,code *param_13,code *param_14,code *param_15,code *param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  code *pcVar29;
  code *pcVar30;
  code *pcVar31;
  code *pcVar32;
  code *pcVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined8 *puVar45;
  bool bVar46;
  code *pcVar47;
  code *pcVar48;
  uint uVar49;
  ulong uVar50;
  undefined8 uVar51;
  undefined *puVar52;
  code *unaff_x19;
  code *pcVar53;
  code *unaff_x20;
  code *pcVar54;
  code *unaff_x21;
  code *unaff_x22;
  code *unaff_x23;
  code *unaff_x28;
  code *pcVar55;
  code *unaff_x29;
  code *UNRECOVERED_JUMPTABLE_00;
  byte bStack0000000000000000;
  code *in_stack_00000050;
  code *in_stack_00000058;
  undefined1 auStack_290 [544];
  undefined1 auStack_70 [16];
  
  pcVar33 = param_13;
  pcVar32 = param_12;
  pcVar31 = param_11;
  pcVar30 = param_10;
  pcVar29 = _bStack0000000000000000;
  if ((((ulong)param_8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      bStack0000000000000000 == 0xff) {
    return param_1;
  }
  puVar36 = &stack0xffffffffffffffd0;
  puVar42 = &stack0xffffffffffffffd0;
  puVar35 = &stack0xffffffffffffffd0;
  pcVar55 = (code *)&stack0xfffffffffffffff0;
  uVar49 = (uint)((ulong)param_8 >> 0x3c) & 3;
  uVar28 = uVar49 | (uint)bStack0000000000000000 << 2 & 0xff;
  bVar46 = uVar28 == 0xc;
  if (0xc < uVar28) {
    return param_1;
  }
  uVar50 = (ulong)(uVar49 | (uint)bStack0000000000000000 << 2) & 0xff;
  puVar52 = &UNK_10d96c719;
  puVar37 = &stack0xffffffffffffffd0;
  puVar38 = &stack0xffffffffffffffd0;
  puVar39 = &stack0xffffffffffffffd0;
  puVar40 = &stack0xffffffffffffffd0;
  puVar41 = &stack0xffffffffffffffd0;
  puVar43 = &stack0xffffffffffffffd0;
  puVar44 = &stack0xffffffffffffffd0;
  puVar45 = (undefined8 *)&stack0xffffffffffffffd0;
  puVar34 = &stack0xffffffffffffffd0;
  pcVar47 = param_1;
  pcVar48 = param_2;
  pcVar53 = unaff_x19;
  pcVar54 = unaff_x20;
  switch(uVar50) {
  case 4:
    param_1 = param_2;
    pcVar53 = param_6;
    pcVar54 = UNRECOVERED_JUMPTABLE_03;
  case 0xcb:
    param_2 = pcVar53;
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(pcVar54);
    param_1 = UNRECOVERED_JUMPTABLE_02;
    break;
  case 9:
    param_1 = param_2;
  case 0xba:
  case 0xfe:
    pcVar53 = param_6;
  case 0xaf:
    pcVar54 = UNRECOVERED_JUMPTABLE_03;
  case 0x23:
  case 0x33:
  case 0x43:
  case 0x53:
  case 99:
  case 0x73:
  case 0x83:
  case 0x93:
    pcVar47 = param_1;
    unaff_x21 = param_7;
    unaff_x22 = param_8;
  case 0xc3:
    param_1 = pcVar54;
    func_0x000107c6142c(pcVar47);
  case 0x2b:
  case 0x3b:
  case 0x4b:
  case 0x5b:
  case 0x6b:
  case 0x7b:
  case 0x8b:
    func_0x000107c6142c(param_1);
  case 0x13:
    func_0x000107c6142c(pcVar53);
    param_2 = (code *)((ulong)unaff_x22 & 0xcfffffffffffffff);
    param_1 = unaff_x21;
    break;
  case 0xc:
    UNRECOVERED_JUMPTABLE_00 = (code *)0x101616244;
    goto code_r0x00010006c090;
  case 0x10:
  case 0x20:
  case 0x28:
  case 0x30:
  case 0x38:
  case 0x40:
  case 0x48:
  case 0x50:
  case 0x58:
  case 0x60:
  case 0x68:
  case 0x70:
  case 0x78:
  case 0x80:
  case 0x88:
  case 0x90:
  case 0xc0:
  case 0xe0:
  case 0xe8:
                    /* WARNING: Could not recover jumptable at 0x0001016163a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return param_1;
  case 0x6f:
  case 0x77:
    _bStack0000000000000000 = unaff_x22;
    param_10 = unaff_x21;
    param_11 = unaff_x20;
    param_12 = unaff_x19;
    param_13 = pcVar55;
  case 0x7f:
  case 0x87:
    pcVar55 = (code *)&param_13;
    puVar42 = auStack_290;
    puVar52 = *(undefined **)param_2;
    uVar50 = *(ulong *)(param_2 + 8);
    unaff_x19 = param_1;
  case 0x8f:
    *(ulong *)(pcVar55 + -0xb8) = uVar50;
    *(undefined **)(pcVar55 + -0xb0) = puVar52;
    puVar52 = *(undefined **)(param_2 + 0x10);
    uVar50 = *(ulong *)(param_2 + 0x18);
    puVar43 = puVar42;
  case 0x11:
  case 0x21:
  case 0x29:
  case 0x31:
  case 0x39:
  case 0x41:
  case 0x49:
  case 0x51:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x79:
  case 0x81:
  case 0x89:
  case 0x91:
  case 0xc1:
  case 0xe1:
  case 0xe9:
    *(ulong *)(pcVar55 + -200) = uVar50;
    *(undefined **)(pcVar55 + -0xc0) = puVar52;
    uVar51 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(pcVar55 + -0xd8) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(pcVar55 + -0xd0) = uVar51;
    puVar44 = puVar43;
  case 0xb6:
  case 0xf2:
    uVar51 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(pcVar55 + -0xe8) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(pcVar55 + -0xe0) = uVar51;
    uVar51 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(pcVar55 + -0x68) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(pcVar55 + -0x60) = uVar51;
    uVar51 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(pcVar55 + -0x78) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(pcVar55 + -0x70) = uVar51;
    puVar45 = (undefined8 *)puVar44;
  case 0x9f:
    uVar51 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(pcVar55 + -0x88) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(pcVar55 + -0x80) = uVar51;
    uVar51 = *(undefined8 *)(param_2 + 0x70);
    uVar14 = *(undefined8 *)(param_2 + 0x78);
    puVar45[0x22] = uVar51;
    puVar45[0x23] = uVar14;
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    uVar15 = *(undefined8 *)(param_2 + 0x88);
    puVar45[0x24] = uVar1;
    puVar45[0x25] = uVar15;
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    uVar16 = *(undefined8 *)(param_2 + 0x98);
    puVar45[0x26] = uVar2;
    puVar45[0x27] = uVar16;
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    uVar17 = *(undefined8 *)(param_2 + 0xa8);
    puVar45[0x28] = uVar3;
    puVar45[0x29] = uVar17;
    uVar4 = *(undefined8 *)(param_2 + 0xb0);
    uVar18 = *(undefined8 *)(param_2 + 0xb8);
    puVar45[0x2a] = uVar4;
    puVar45[0x2b] = uVar18;
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    uVar19 = *(undefined8 *)(param_2 + 200);
    uVar6 = *(undefined8 *)(param_2 + 0xd0);
    uVar20 = *(undefined8 *)(param_2 + 0xd8);
    puVar45[0x2c] = uVar5;
    puVar45[0x2d] = uVar6;
    uVar7 = *(undefined8 *)(param_2 + 0xe0);
    uVar21 = *(undefined8 *)(param_2 + 0xe8);
    puVar45[0x2e] = uVar20;
    puVar45[0x2f] = uVar7;
    uVar8 = *(undefined8 *)(param_2 + 0xf0);
    uVar22 = *(undefined8 *)(param_2 + 0xf8);
    puVar45[0x30] = uVar21;
    puVar45[0x31] = uVar8;
    uVar9 = *(undefined8 *)(param_2 + 0x100);
    uVar23 = *(undefined8 *)(param_2 + 0x108);
    puVar45[0x32] = uVar22;
    puVar45[0x33] = uVar9;
    uVar10 = *(undefined8 *)(param_2 + 0x110);
    uVar24 = *(undefined8 *)(param_2 + 0x118);
    puVar45[0x34] = uVar23;
    puVar45[0x35] = uVar10;
    uVar11 = *(undefined8 *)(param_2 + 0x120);
    uVar25 = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(pcVar55 + -0x100) = uVar24;
    *(undefined8 *)(pcVar55 + -0xf8) = uVar11;
    *(undefined8 *)(pcVar55 + -0xf0) = uVar25;
    uVar12 = *(undefined8 *)(param_2 + 0x130);
    uVar26 = *(undefined8 *)(param_2 + 0x138);
    *(undefined8 *)(pcVar55 + -0xa8) = uVar12;
    *(undefined8 *)(pcVar55 + -0xa0) = uVar26;
    uVar13 = *(undefined8 *)(param_2 + 0x140);
    uVar27 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(pcVar55 + -0x98) = uVar13;
    *(undefined8 *)(pcVar55 + -0x90) = uVar27;
    puVar45[0x20] = uVar13;
    puVar45[0x21] = uVar27;
    puVar45[0x1e] = uVar12;
    puVar45[0x1f] = uVar26;
    puVar45[0x1c] = uVar11;
    puVar45[0x1d] = uVar25;
    puVar45[0x1a] = uVar10;
    puVar45[0x1b] = uVar24;
    puVar45[0x18] = uVar9;
    puVar45[0x19] = uVar23;
    puVar45[0x16] = uVar8;
    puVar45[0x17] = uVar22;
    puVar45[0x14] = uVar7;
    puVar45[0x15] = uVar21;
    puVar45[0x12] = uVar6;
    puVar45[0x13] = uVar20;
    puVar45[0x10] = uVar5;
    puVar45[0x11] = uVar19;
    puVar45[0xe] = uVar4;
    puVar45[0xf] = uVar18;
    puVar45[0xc] = uVar3;
    puVar45[0xd] = uVar17;
    puVar45[10] = uVar2;
    puVar45[0xb] = uVar16;
    puVar45[8] = uVar1;
    puVar45[9] = uVar15;
    puVar45[6] = uVar51;
    puVar45[7] = uVar14;
    puVar45[5] = *(undefined8 *)(pcVar55 + -0x88);
    puVar45[4] = *(undefined8 *)(pcVar55 + -0x80);
    puVar45[3] = *(undefined8 *)(pcVar55 + -0x78);
    puVar45[2] = *(undefined8 *)(pcVar55 + -0x70);
    puVar45[1] = *(undefined8 *)(pcVar55 + -0x68);
    *puVar45 = *(undefined8 *)(pcVar55 + -0x60);
    uVar51 = *(undefined8 *)(pcVar55 + -0xb8);
    uVar4 = *(undefined8 *)(pcVar55 + -0xb0);
    uVar1 = *(undefined8 *)(pcVar55 + -200);
    uVar5 = *(undefined8 *)(pcVar55 + -0xc0);
    uVar2 = *(undefined8 *)(pcVar55 + -0xd8);
    uVar6 = *(undefined8 *)(pcVar55 + -0xd0);
    uVar3 = *(undefined8 *)(pcVar55 + -0xe8);
    uVar7 = *(undefined8 *)(pcVar55 + -0xe0);
    FUN_101615954(uVar4,uVar51,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3);
    *(undefined8 *)unaff_x19 = uVar4;
    *(undefined8 *)(unaff_x19 + 8) = uVar51;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    uVar51 = *(undefined8 *)(pcVar55 + -0x68);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(pcVar55 + -0x60);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x78);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(pcVar55 + -0x70);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x88);
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(pcVar55 + -0x80);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar51;
    uVar51 = puVar45[0x23];
    *(undefined8 *)(unaff_x19 + 0x70) = puVar45[0x22];
    *(undefined8 *)(unaff_x19 + 0x78) = uVar51;
    uVar51 = puVar45[0x25];
    *(undefined8 *)(unaff_x19 + 0x80) = puVar45[0x24];
    *(undefined8 *)(unaff_x19 + 0x88) = uVar51;
    uVar51 = puVar45[0x27];
    *(undefined8 *)(unaff_x19 + 0x90) = puVar45[0x26];
    *(undefined8 *)(unaff_x19 + 0x98) = uVar51;
    uVar51 = puVar45[0x29];
    *(undefined8 *)(unaff_x19 + 0xa0) = puVar45[0x28];
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar51;
    uVar51 = puVar45[0x2b];
    *(undefined8 *)(unaff_x19 + 0xb0) = puVar45[0x2a];
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar51;
    uVar1 = puVar45[0x2d];
    *(undefined8 *)(unaff_x19 + 0xc0) = puVar45[0x2c];
    *(undefined8 *)(unaff_x19 + 200) = uVar19;
    uVar51 = puVar45[0x2e];
    uVar2 = puVar45[0x2f];
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar51;
    uVar51 = puVar45[0x30];
    uVar1 = puVar45[0x31];
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar51;
    uVar51 = puVar45[0x32];
    uVar2 = puVar45[0x33];
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar1;
    *(undefined8 *)(unaff_x19 + 0xf8) = uVar51;
    uVar51 = puVar45[0x34];
    uVar1 = puVar45[0x35];
    *(undefined8 *)(unaff_x19 + 0x100) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x108) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x100);
    uVar2 = *(undefined8 *)(pcVar55 + -0xf8);
    *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0xf0);
    *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x128) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0xa0);
    *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(pcVar55 + -0xa8);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x90);
    *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(pcVar55 + -0x98);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar51;
    return unaff_x19;
  case 0xa1:
  case 0xa9:
  case 0xc9:
  case 0xdd:
  case 0xe5:
  case 0xed:
    return param_1;
  case 0xa2:
  case 0xaa:
  case 0xad:
  case 0xca:
  case 0xde:
  case 0xe6:
  case 0xee:
code_r0x0001016161f8:
    puVar34 = (undefined1 *)register0x00000008;
  case 0xd5:
  case 0xd7:
    puVar35 = puVar34;
    UNRECOVERED_JUMPTABLE_03 = unaff_x19;
    UNRECOVERED_JUMPTABLE_02 = unaff_x20;
code_r0x00010006c090:
    uVar49 = (uint)((ulong)param_2 >> 0x3e);
    if (uVar49 == 1) {
      param_1 = (code *)((ulong)param_2 & 0x3fffffffffffffff);
    }
    else {
      if (uVar49 != 2) {
        return param_1;
      }
      *(code **)(puVar35 + -0x20) = UNRECOVERED_JUMPTABLE_02;
      *(code **)(puVar35 + -0x18) = UNRECOVERED_JUMPTABLE_03;
      *(code **)(puVar35 + -0x10) = pcVar55;
      *(code **)(puVar35 + -8) = UNRECOVERED_JUMPTABLE_00;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return param_1;
  case 0xa3:
    FUN_101616328();
    return param_1;
  case 0xa5:
  case 0xcd:
  case 0xdb:
  case 0xe3:
  case 0xeb:
    if (bVar46) {
      return param_1;
    }
    puVar36 = auStack_70;
  case 0x1f:
  case 0x27:
    *(code **)(puVar36 + 0x30) = pcVar55;
    *(code **)(puVar36 + 0x38) = UNRECOVERED_JUMPTABLE_00;
    puVar37 = puVar36;
  case 0xf:
  case 0xa4:
  case 0xcc:
    puVar38 = puVar37;
    unaff_x19 = param_6;
    unaff_x20 = UNRECOVERED_JUMPTABLE_02;
  case 0x2f:
  case 0x37:
    puVar39 = puVar38;
    pcVar47 = param_2;
    pcVar48 = UNRECOVERED_JUMPTABLE;
    unaff_x21 = UNRECOVERED_JUMPTABLE_03;
  case 199:
    *(code **)(puVar39 + 8) = param_8;
    puVar40 = puVar39;
  case 0x3f:
  case 0x47:
    param_1 = unaff_x21;
    param_2 = unaff_x20;
    UNRECOVERED_JUMPTABLE = unaff_x19;
    (*param_7)(pcVar47,pcVar48);
    puVar41 = puVar40;
  case 0x4f:
  case 0x57:
    UNRECOVERED_JUMPTABLE_03 = *(code **)(puVar41 + 8);
  case 0x5f:
  case 0x67:
                    /* WARNING: Could not recover jumptable at 0x00010161657c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_03)(param_1,param_2,UNRECOVERED_JUMPTABLE);
    return param_1;
  case 0xa7:
  case 0xb3:
    param_1 = UNRECOVERED_JUMPTABLE;
  case 0xf1:
    param_2 = UNRECOVERED_JUMPTABLE_03;
  case 0xb5:
                    /* WARNING: Could not recover jumptable at 0x000101616518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)(param_1,param_2);
    return param_1;
  case 0xa8:
    if (bVar46) {
      return param_1;
    }
  case 0xff:
  case 0xa0:
  case 200:
  case 0xdc:
  case 0xe4:
  case 0xec:
    FUN_10161650c();
    return param_1;
  case 0xb1:
  case 0xf5:
    goto code_r0x0001016161f4;
  case 0xb7:
  case 0xef:
    if (!bVar46) {
      return param_1;
    }
    (*UNRECOVERED_JUMPTABLE)(param_1,(ulong)param_2 & 0xcfffffffffffffff);
    (*in_stack_00000050)();
    param_1 = param_8;
    param_2 = pcVar29;
    unaff_x23 = pcVar30;
    unaff_x28 = pcVar31;
    unaff_x22 = pcVar32;
    unaff_x21 = pcVar33;
    unaff_x20 = param_14;
    unaff_x19 = param_15;
    unaff_x29 = param_16;
    UNRECOVERED_JUMPTABLE_00 = in_stack_00000058;
  case 0xb4:
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,unaff_x23);
    (*UNRECOVERED_JUMPTABLE_00)(unaff_x28,unaff_x22,unaff_x21);
                    /* WARNING: Could not recover jumptable at 0x000101616460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(unaff_x20,unaff_x19,unaff_x29);
    return unaff_x20;
  case 0xb8:
  case 0xfc:
    FUN_10161628c();
    return param_1;
  case 0xb9:
  case 0xfd:
    if (0xe < uVar50) {
      return param_1;
    }
    FUN_1016164e4();
    puVar35 = &stack0xffffffffffffffd0;
    param_1 = param_6;
    param_2 = param_7;
    UNRECOVERED_JUMPTABLE_03 = unaff_x19;
    UNRECOVERED_JUMPTABLE_02 = unaff_x20;
    goto code_r0x00010006c090;
  case 0xbf:
    return param_1;
  case 0xdf:
    return param_1;
  case 0xe7:
  case 0xf0:
                    /* WARNING: Could not recover jumptable at 0x000101616484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  case 0xfb:
    return param_1;
  }
  pcVar55 = unaff_x29;
code_r0x0001016161f4:
  goto code_r0x0001016161f8;
}



/* Entry: 1016161ac; end: 10161628b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101616240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101616244) */

code * FUN_1016161ac(code *param_1,code *param_2,code *UNRECOVERED_JUMPTABLE,
                    code *UNRECOVERED_JUMPTABLE_03,code *UNRECOVERED_JUMPTABLE_02,code *param_6,
                    code *param_7,code *param_8,code *param_9,code *param_10,code *param_11,
                    code *param_12,code *param_13,code *param_14,code *param_15,code *param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  code *pcVar29;
  code *pcVar30;
  code *pcVar31;
  code *pcVar32;
  code *pcVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  undefined8 *puVar45;
  bool bVar46;
  code *pcVar47;
  code *pcVar48;
  uint uVar49;
  ulong uVar50;
  undefined8 uVar51;
  undefined *puVar52;
  code *unaff_x19;
  code *pcVar53;
  code *unaff_x20;
  code *pcVar54;
  code *unaff_x21;
  code *unaff_x22;
  code *unaff_x23;
  code *unaff_x28;
  code *pcVar55;
  code *unaff_x29;
  code *UNRECOVERED_JUMPTABLE_00;
  byte bStack0000000000000000;
  code *in_stack_00000050;
  code *in_stack_00000058;
  undefined1 auStack_290 [544];
  undefined1 auStack_70 [16];
  
  pcVar33 = param_13;
  pcVar32 = param_12;
  pcVar31 = param_11;
  pcVar30 = param_10;
  pcVar29 = _bStack0000000000000000;
  puVar36 = &stack0xffffffffffffffd0;
  puVar42 = &stack0xffffffffffffffd0;
  puVar35 = &stack0xffffffffffffffd0;
  pcVar55 = (code *)&stack0xfffffffffffffff0;
  uVar49 = (uint)((ulong)param_8 >> 0x3c) & 3;
  uVar28 = uVar49 | (uint)bStack0000000000000000 << 2 & 0xff;
  bVar46 = uVar28 == 0xc;
  if (0xc < uVar28) {
    return param_1;
  }
  uVar50 = (ulong)(uVar49 | (uint)bStack0000000000000000 << 2) & 0xff;
  puVar52 = &UNK_10d96c719;
  puVar37 = &stack0xffffffffffffffd0;
  puVar38 = &stack0xffffffffffffffd0;
  puVar39 = &stack0xffffffffffffffd0;
  puVar40 = &stack0xffffffffffffffd0;
  puVar41 = &stack0xffffffffffffffd0;
  puVar43 = &stack0xffffffffffffffd0;
  puVar44 = &stack0xffffffffffffffd0;
  puVar45 = (undefined8 *)&stack0xffffffffffffffd0;
  puVar34 = &stack0xffffffffffffffd0;
  pcVar47 = param_1;
  pcVar48 = param_2;
  pcVar53 = unaff_x19;
  pcVar54 = unaff_x20;
  switch(uVar50) {
  case 4:
    param_1 = param_2;
    pcVar53 = param_6;
    pcVar54 = UNRECOVERED_JUMPTABLE_03;
  case 0xcb:
    param_2 = pcVar53;
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(pcVar54);
    param_1 = UNRECOVERED_JUMPTABLE_02;
    break;
  case 9:
    param_1 = param_2;
  case 0xba:
  case 0xfe:
    pcVar53 = param_6;
  case 0xaf:
    pcVar54 = UNRECOVERED_JUMPTABLE_03;
  case 0x23:
  case 0x33:
  case 0x43:
  case 0x53:
  case 99:
  case 0x73:
  case 0x83:
  case 0x93:
    pcVar47 = param_1;
    unaff_x21 = param_7;
    unaff_x22 = param_8;
  case 0xc3:
    param_1 = pcVar54;
    func_0x000107c6142c(pcVar47);
  case 0x2b:
  case 0x3b:
  case 0x4b:
  case 0x5b:
  case 0x6b:
  case 0x7b:
  case 0x8b:
    func_0x000107c6142c(param_1);
  case 0x13:
    func_0x000107c6142c(pcVar53);
    param_2 = (code *)((ulong)unaff_x22 & 0xcfffffffffffffff);
    param_1 = unaff_x21;
    break;
  case 0xc:
    UNRECOVERED_JUMPTABLE_00 = (code *)0x101616244;
    goto code_r0x00010006c090;
  case 0x10:
  case 0x20:
  case 0x28:
  case 0x30:
  case 0x38:
  case 0x40:
  case 0x48:
  case 0x50:
  case 0x58:
  case 0x60:
  case 0x68:
  case 0x70:
  case 0x78:
  case 0x80:
  case 0x88:
  case 0x90:
  case 0xc0:
  case 0xe0:
  case 0xe8:
                    /* WARNING: Could not recover jumptable at 0x0001016163a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return param_1;
  case 0x6f:
  case 0x77:
    _bStack0000000000000000 = unaff_x22;
    param_10 = unaff_x21;
    param_11 = unaff_x20;
    param_12 = unaff_x19;
    param_13 = pcVar55;
  case 0x7f:
  case 0x87:
    pcVar55 = (code *)&param_13;
    puVar42 = auStack_290;
    puVar52 = *(undefined **)param_2;
    uVar50 = *(ulong *)(param_2 + 8);
    unaff_x19 = param_1;
  case 0x8f:
    *(ulong *)(pcVar55 + -0xb8) = uVar50;
    *(undefined **)(pcVar55 + -0xb0) = puVar52;
    puVar52 = *(undefined **)(param_2 + 0x10);
    uVar50 = *(ulong *)(param_2 + 0x18);
    puVar43 = puVar42;
  case 0x11:
  case 0x21:
  case 0x29:
  case 0x31:
  case 0x39:
  case 0x41:
  case 0x49:
  case 0x51:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x79:
  case 0x81:
  case 0x89:
  case 0x91:
  case 0xc1:
  case 0xe1:
  case 0xe9:
    *(ulong *)(pcVar55 + -200) = uVar50;
    *(undefined **)(pcVar55 + -0xc0) = puVar52;
    uVar51 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(pcVar55 + -0xd8) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(pcVar55 + -0xd0) = uVar51;
    puVar44 = puVar43;
  case 0xb6:
  case 0xf2:
    uVar51 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(pcVar55 + -0xe8) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(pcVar55 + -0xe0) = uVar51;
    uVar51 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(pcVar55 + -0x68) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(pcVar55 + -0x60) = uVar51;
    uVar51 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(pcVar55 + -0x78) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(pcVar55 + -0x70) = uVar51;
    puVar45 = (undefined8 *)puVar44;
  case 0x9f:
    uVar51 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(pcVar55 + -0x88) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(pcVar55 + -0x80) = uVar51;
    uVar51 = *(undefined8 *)(param_2 + 0x70);
    uVar14 = *(undefined8 *)(param_2 + 0x78);
    puVar45[0x22] = uVar51;
    puVar45[0x23] = uVar14;
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    uVar15 = *(undefined8 *)(param_2 + 0x88);
    puVar45[0x24] = uVar1;
    puVar45[0x25] = uVar15;
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    uVar16 = *(undefined8 *)(param_2 + 0x98);
    puVar45[0x26] = uVar2;
    puVar45[0x27] = uVar16;
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    uVar17 = *(undefined8 *)(param_2 + 0xa8);
    puVar45[0x28] = uVar3;
    puVar45[0x29] = uVar17;
    uVar4 = *(undefined8 *)(param_2 + 0xb0);
    uVar18 = *(undefined8 *)(param_2 + 0xb8);
    puVar45[0x2a] = uVar4;
    puVar45[0x2b] = uVar18;
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    uVar19 = *(undefined8 *)(param_2 + 200);
    uVar6 = *(undefined8 *)(param_2 + 0xd0);
    uVar20 = *(undefined8 *)(param_2 + 0xd8);
    puVar45[0x2c] = uVar5;
    puVar45[0x2d] = uVar6;
    uVar7 = *(undefined8 *)(param_2 + 0xe0);
    uVar21 = *(undefined8 *)(param_2 + 0xe8);
    puVar45[0x2e] = uVar20;
    puVar45[0x2f] = uVar7;
    uVar8 = *(undefined8 *)(param_2 + 0xf0);
    uVar22 = *(undefined8 *)(param_2 + 0xf8);
    puVar45[0x30] = uVar21;
    puVar45[0x31] = uVar8;
    uVar9 = *(undefined8 *)(param_2 + 0x100);
    uVar23 = *(undefined8 *)(param_2 + 0x108);
    puVar45[0x32] = uVar22;
    puVar45[0x33] = uVar9;
    uVar10 = *(undefined8 *)(param_2 + 0x110);
    uVar24 = *(undefined8 *)(param_2 + 0x118);
    puVar45[0x34] = uVar23;
    puVar45[0x35] = uVar10;
    uVar11 = *(undefined8 *)(param_2 + 0x120);
    uVar25 = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(pcVar55 + -0x100) = uVar24;
    *(undefined8 *)(pcVar55 + -0xf8) = uVar11;
    *(undefined8 *)(pcVar55 + -0xf0) = uVar25;
    uVar12 = *(undefined8 *)(param_2 + 0x130);
    uVar26 = *(undefined8 *)(param_2 + 0x138);
    *(undefined8 *)(pcVar55 + -0xa8) = uVar12;
    *(undefined8 *)(pcVar55 + -0xa0) = uVar26;
    uVar13 = *(undefined8 *)(param_2 + 0x140);
    uVar27 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(pcVar55 + -0x98) = uVar13;
    *(undefined8 *)(pcVar55 + -0x90) = uVar27;
    puVar45[0x20] = uVar13;
    puVar45[0x21] = uVar27;
    puVar45[0x1e] = uVar12;
    puVar45[0x1f] = uVar26;
    puVar45[0x1c] = uVar11;
    puVar45[0x1d] = uVar25;
    puVar45[0x1a] = uVar10;
    puVar45[0x1b] = uVar24;
    puVar45[0x18] = uVar9;
    puVar45[0x19] = uVar23;
    puVar45[0x16] = uVar8;
    puVar45[0x17] = uVar22;
    puVar45[0x14] = uVar7;
    puVar45[0x15] = uVar21;
    puVar45[0x12] = uVar6;
    puVar45[0x13] = uVar20;
    puVar45[0x10] = uVar5;
    puVar45[0x11] = uVar19;
    puVar45[0xe] = uVar4;
    puVar45[0xf] = uVar18;
    puVar45[0xc] = uVar3;
    puVar45[0xd] = uVar17;
    puVar45[10] = uVar2;
    puVar45[0xb] = uVar16;
    puVar45[8] = uVar1;
    puVar45[9] = uVar15;
    puVar45[6] = uVar51;
    puVar45[7] = uVar14;
    puVar45[5] = *(undefined8 *)(pcVar55 + -0x88);
    puVar45[4] = *(undefined8 *)(pcVar55 + -0x80);
    puVar45[3] = *(undefined8 *)(pcVar55 + -0x78);
    puVar45[2] = *(undefined8 *)(pcVar55 + -0x70);
    puVar45[1] = *(undefined8 *)(pcVar55 + -0x68);
    *puVar45 = *(undefined8 *)(pcVar55 + -0x60);
    uVar51 = *(undefined8 *)(pcVar55 + -0xb8);
    uVar4 = *(undefined8 *)(pcVar55 + -0xb0);
    uVar1 = *(undefined8 *)(pcVar55 + -200);
    uVar5 = *(undefined8 *)(pcVar55 + -0xc0);
    uVar2 = *(undefined8 *)(pcVar55 + -0xd8);
    uVar6 = *(undefined8 *)(pcVar55 + -0xd0);
    uVar3 = *(undefined8 *)(pcVar55 + -0xe8);
    uVar7 = *(undefined8 *)(pcVar55 + -0xe0);
    FUN_101615954(uVar4,uVar51,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3);
    *(undefined8 *)unaff_x19 = uVar4;
    *(undefined8 *)(unaff_x19 + 8) = uVar51;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    uVar51 = *(undefined8 *)(pcVar55 + -0x68);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(pcVar55 + -0x60);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x78);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(pcVar55 + -0x70);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x88);
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(pcVar55 + -0x80);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar51;
    uVar51 = puVar45[0x23];
    *(undefined8 *)(unaff_x19 + 0x70) = puVar45[0x22];
    *(undefined8 *)(unaff_x19 + 0x78) = uVar51;
    uVar51 = puVar45[0x25];
    *(undefined8 *)(unaff_x19 + 0x80) = puVar45[0x24];
    *(undefined8 *)(unaff_x19 + 0x88) = uVar51;
    uVar51 = puVar45[0x27];
    *(undefined8 *)(unaff_x19 + 0x90) = puVar45[0x26];
    *(undefined8 *)(unaff_x19 + 0x98) = uVar51;
    uVar51 = puVar45[0x29];
    *(undefined8 *)(unaff_x19 + 0xa0) = puVar45[0x28];
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar51;
    uVar51 = puVar45[0x2b];
    *(undefined8 *)(unaff_x19 + 0xb0) = puVar45[0x2a];
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar51;
    uVar1 = puVar45[0x2d];
    *(undefined8 *)(unaff_x19 + 0xc0) = puVar45[0x2c];
    *(undefined8 *)(unaff_x19 + 200) = uVar19;
    uVar51 = puVar45[0x2e];
    uVar2 = puVar45[0x2f];
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar51;
    uVar51 = puVar45[0x30];
    uVar1 = puVar45[0x31];
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar51;
    uVar51 = puVar45[0x32];
    uVar2 = puVar45[0x33];
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar1;
    *(undefined8 *)(unaff_x19 + 0xf8) = uVar51;
    uVar51 = puVar45[0x34];
    uVar1 = puVar45[0x35];
    *(undefined8 *)(unaff_x19 + 0x100) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x108) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x100);
    uVar2 = *(undefined8 *)(pcVar55 + -0xf8);
    *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0xf0);
    *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x128) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0xa0);
    *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(pcVar55 + -0xa8);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar51;
    uVar51 = *(undefined8 *)(pcVar55 + -0x90);
    *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(pcVar55 + -0x98);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar51;
    return unaff_x19;
  case 0xa1:
  case 0xa9:
  case 0xc9:
  case 0xdd:
  case 0xe5:
  case 0xed:
    return param_1;
  case 0xa2:
  case 0xaa:
  case 0xad:
  case 0xca:
  case 0xde:
  case 0xe6:
  case 0xee:
code_r0x0001016161f8:
    puVar34 = (undefined1 *)register0x00000008;
  case 0xd5:
  case 0xd7:
    puVar35 = puVar34;
    UNRECOVERED_JUMPTABLE_03 = unaff_x19;
    UNRECOVERED_JUMPTABLE_02 = unaff_x20;
code_r0x00010006c090:
    uVar49 = (uint)((ulong)param_2 >> 0x3e);
    if (uVar49 == 1) {
      param_1 = (code *)((ulong)param_2 & 0x3fffffffffffffff);
    }
    else {
      if (uVar49 != 2) {
        return param_1;
      }
      *(code **)(puVar35 + -0x20) = UNRECOVERED_JUMPTABLE_02;
      *(code **)(puVar35 + -0x18) = UNRECOVERED_JUMPTABLE_03;
      *(code **)(puVar35 + -0x10) = pcVar55;
      *(code **)(puVar35 + -8) = UNRECOVERED_JUMPTABLE_00;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return param_1;
  case 0xa3:
    FUN_101616328();
    return param_1;
  case 0xa5:
  case 0xcd:
  case 0xdb:
  case 0xe3:
  case 0xeb:
    if (bVar46) {
      return param_1;
    }
    puVar36 = auStack_70;
  case 0x1f:
  case 0x27:
    *(code **)(puVar36 + 0x30) = pcVar55;
    *(code **)(puVar36 + 0x38) = UNRECOVERED_JUMPTABLE_00;
    puVar37 = puVar36;
  case 0xf:
  case 0xa4:
  case 0xcc:
    puVar38 = puVar37;
    unaff_x19 = param_6;
    unaff_x20 = UNRECOVERED_JUMPTABLE_02;
  case 0x2f:
  case 0x37:
    puVar39 = puVar38;
    pcVar47 = param_2;
    pcVar48 = UNRECOVERED_JUMPTABLE;
    unaff_x21 = UNRECOVERED_JUMPTABLE_03;
  case 199:
    *(code **)(puVar39 + 8) = param_8;
    puVar40 = puVar39;
  case 0x3f:
  case 0x47:
    param_1 = unaff_x21;
    param_2 = unaff_x20;
    UNRECOVERED_JUMPTABLE = unaff_x19;
    (*param_7)(pcVar47,pcVar48);
    puVar41 = puVar40;
  case 0x4f:
  case 0x57:
    UNRECOVERED_JUMPTABLE_03 = *(code **)(puVar41 + 8);
  case 0x5f:
  case 0x67:
                    /* WARNING: Could not recover jumptable at 0x00010161657c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_03)(param_1,param_2,UNRECOVERED_JUMPTABLE);
    return param_1;
  case 0xa7:
  case 0xb3:
    param_1 = UNRECOVERED_JUMPTABLE;
  case 0xf1:
    param_2 = UNRECOVERED_JUMPTABLE_03;
  case 0xb5:
                    /* WARNING: Could not recover jumptable at 0x000101616518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)(param_1,param_2);
    return param_1;
  case 0xa8:
    if (bVar46) {
      return param_1;
    }
  case 0xff:
  case 0xa0:
  case 200:
  case 0xdc:
  case 0xe4:
  case 0xec:
    FUN_10161650c();
    return param_1;
  case 0xb1:
  case 0xf5:
    goto code_r0x0001016161f4;
  case 0xb7:
  case 0xef:
    if (!bVar46) {
      return param_1;
    }
    (*UNRECOVERED_JUMPTABLE)(param_1,(ulong)param_2 & 0xcfffffffffffffff);
    (*in_stack_00000050)();
    param_1 = param_8;
    param_2 = pcVar29;
    unaff_x23 = pcVar30;
    unaff_x28 = pcVar31;
    unaff_x22 = pcVar32;
    unaff_x21 = pcVar33;
    unaff_x20 = param_14;
    unaff_x19 = param_15;
    unaff_x29 = param_16;
    UNRECOVERED_JUMPTABLE_00 = in_stack_00000058;
  case 0xb4:
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,unaff_x23);
    (*UNRECOVERED_JUMPTABLE_00)(unaff_x28,unaff_x22,unaff_x21);
                    /* WARNING: Could not recover jumptable at 0x000101616460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(unaff_x20,unaff_x19,unaff_x29);
    return unaff_x20;
  case 0xb8:
  case 0xfc:
    FUN_10161628c();
    return param_1;
  case 0xb9:
  case 0xfd:
    if (0xe < uVar50) {
      return param_1;
    }
    FUN_1016164e4();
    puVar35 = &stack0xffffffffffffffd0;
    param_1 = param_6;
    param_2 = param_7;
    UNRECOVERED_JUMPTABLE_03 = unaff_x19;
    UNRECOVERED_JUMPTABLE_02 = unaff_x20;
    goto code_r0x00010006c090;
  case 0xbf:
    return param_1;
  case 0xdf:
    return param_1;
  case 0xe7:
  case 0xf0:
                    /* WARNING: Could not recover jumptable at 0x000101616484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  case 0xfb:
    return param_1;
  }
  pcVar55 = unaff_x29;
code_r0x0001016161f4:
  goto code_r0x0001016161f8;
}



/* Entry: 10161628c; end: 1016162b7;  */

void FUN_10161628c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 1016162b8; end: 101616327;  */

void FUN_1016162b8(undefined8 param_1,ulong param_2)

{
  if (((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_101616328();
  }
  return;
}



/* Entry: 101616328; end: 1016164a7;  */

void FUN_101616328(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  code *UNRECOVERED_JUMPTABLE_00,code *UNRECOVERED_JUMPTABLE_01,code *param_19,
                  code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3c) & 3;
  if (1 < uVar1) {
    if (uVar1 == 2) {
      (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 & 0xcfffffffffffffff);
      (*param_19)(param_3,param_4,param_5,param_6,param_7);
      (*UNRECOVERED_JUMPTABLE)(param_8,param_9,param_10);
      (*UNRECOVERED_JUMPTABLE)(param_11,param_12,param_13);
                    /* WARNING: Could not recover jumptable at 0x000101616460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_14,param_15,param_16);
      return;
    }
    return;
  }
  if (uVar1 == 0) {
    (*UNRECOVERED_JUMPTABLE_00)();
                    /* WARNING: Could not recover jumptable at 0x0001016163a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)(param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101616484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Entry: 1016164a8; end: 1016164e3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1016164a8(void)

{
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (0xe < in_x6 >> 0x3c) {
    return;
  }
  FUN_1016164e4();
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x5);
  return;
}



/* Entry: 1016164e4; end: 10161650b;  */

void FUN_1016164e4(void)

{
  ulong in_x3;
  
  if (((in_x3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_10161650c();
  }
  return;
}



/* Entry: 10161650c; end: 10161651b;  */

void FUN_10161650c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  if ((param_4 >> 0x3d & 1) == 0) {
    param_1 = param_3;
    param_2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000101616518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



/* Entry: 10161651c; end: 10161657f;  */

void FUN_10161651c(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,code *UNRECOVERED_JUMPTABLE)

{
  if (param_1 == '\x02') {
    return;
  }
  (*param_7)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010161657c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_4,param_5,param_6);
  return;
}



/* Entry: 101616580; end: 101616a3f;  */

undefined8 * FUN_101616580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  
  uVar1 = *param_2;
  uVar22 = param_2[1];
  uVar2 = param_2[2];
  uVar23 = param_2[3];
  uVar3 = param_2[4];
  uVar24 = param_2[5];
  uVar4 = param_2[6];
  uVar25 = param_2[7];
  uVar5 = param_2[8];
  uVar26 = param_2[9];
  uVar6 = param_2[10];
  uVar27 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar28 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar29 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar30 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar31 = param_2[0x13];
  uVar11 = param_2[0x14];
  uVar32 = param_2[0x15];
  uVar12 = param_2[0x16];
  uVar33 = param_2[0x17];
  uVar13 = param_2[0x18];
  uVar34 = param_2[0x19];
  uVar14 = param_2[0x1a];
  uVar35 = param_2[0x1b];
  uVar15 = param_2[0x1c];
  uVar36 = param_2[0x1d];
  uVar16 = param_2[0x1e];
  uVar37 = param_2[0x1f];
  uVar17 = param_2[0x20];
  uVar38 = param_2[0x21];
  uVar18 = param_2[0x22];
  uVar39 = param_2[0x23];
  uVar19 = param_2[0x24];
  uVar40 = param_2[0x25];
  uVar20 = param_2[0x26];
  uVar41 = param_2[0x27];
  uVar21 = param_2[0x28];
  uVar42 = param_2[0x29];
  FUN_101615954(uVar1,uVar22,uVar2,uVar23,uVar3,uVar24,uVar4,uVar25,uVar5,uVar26,uVar6,uVar27,uVar7,
                uVar28,uVar8,uVar29,uVar9,uVar30,uVar10,uVar31,uVar11,uVar32,uVar12,uVar33,uVar13,
                uVar34,uVar14,uVar35,uVar15,uVar36,uVar16,uVar37,uVar17,uVar38,uVar18,uVar39,uVar19,
                uVar40,uVar20,uVar41,uVar21,uVar42);
  *param_1 = uVar1;
  param_1[1] = uVar22;
  param_1[2] = uVar2;
  param_1[3] = uVar23;
  param_1[4] = uVar3;
  param_1[5] = uVar24;
  param_1[6] = uVar4;
  param_1[7] = uVar25;
  param_1[8] = uVar5;
  param_1[9] = uVar26;
  param_1[10] = uVar6;
  param_1[0xb] = uVar27;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar28;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar29;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar30;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar31;
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar32;
  param_1[0x16] = uVar12;
  param_1[0x17] = uVar33;
  param_1[0x18] = uVar13;
  param_1[0x19] = uVar34;
  param_1[0x1a] = uVar14;
  param_1[0x1b] = uVar35;
  param_1[0x1c] = uVar15;
  param_1[0x1d] = uVar36;
  param_1[0x1e] = uVar16;
  param_1[0x1f] = uVar37;
  param_1[0x20] = uVar17;
  param_1[0x21] = uVar38;
  param_1[0x22] = uVar18;
  param_1[0x23] = uVar39;
  param_1[0x24] = uVar19;
  param_1[0x25] = uVar40;
  param_1[0x26] = uVar20;
  param_1[0x27] = uVar41;
  param_1[0x28] = uVar21;
  param_1[0x29] = uVar42;
  return param_1;
}



/* Entry: 101616a40; end: 101616b23;  */

undefined8 * FUN_101616a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar20 = param_1[0x11];
  uVar19 = param_1[0x10];
  uVar22 = param_1[0x13];
  uVar21 = param_1[0x12];
  uVar24 = param_1[0x15];
  uVar23 = param_1[0x14];
  uVar26 = param_1[0x17];
  uVar25 = param_1[0x16];
  uVar28 = param_1[0x19];
  uVar27 = param_1[0x18];
  uVar30 = param_1[0x1b];
  uVar29 = param_1[0x1a];
  uVar32 = param_1[0x1d];
  uVar31 = param_1[0x1c];
  uVar34 = param_1[0x1f];
  uVar33 = param_1[0x1e];
  uVar36 = param_1[0x21];
  uVar35 = param_1[0x20];
  uVar38 = param_1[0x23];
  uVar37 = param_1[0x22];
  uVar40 = param_1[0x25];
  uVar39 = param_1[0x24];
  uVar42 = param_1[0x27];
  uVar41 = param_1[0x26];
  uVar4 = param_1[0x28];
  uVar8 = param_1[0x29];
  uVar43 = *param_2;
  uVar45 = param_2[3];
  uVar44 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar43;
  param_1[3] = uVar45;
  param_1[2] = uVar44;
  uVar43 = param_2[4];
  uVar45 = param_2[7];
  uVar44 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar43;
  param_1[7] = uVar45;
  param_1[6] = uVar44;
  uVar43 = param_2[8];
  uVar45 = param_2[0xb];
  uVar44 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar43;
  param_1[0xb] = uVar45;
  param_1[10] = uVar44;
  uVar43 = param_2[0xc];
  uVar45 = param_2[0xf];
  uVar44 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar43;
  param_1[0xf] = uVar45;
  param_1[0xe] = uVar44;
  uVar43 = param_2[0x10];
  uVar45 = param_2[0x13];
  uVar44 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar43;
  param_1[0x13] = uVar45;
  param_1[0x12] = uVar44;
  uVar43 = param_2[0x14];
  uVar45 = param_2[0x17];
  uVar44 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar43;
  param_1[0x17] = uVar45;
  param_1[0x16] = uVar44;
  uVar43 = param_2[0x18];
  uVar45 = param_2[0x1b];
  uVar44 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar43;
  param_1[0x1b] = uVar45;
  param_1[0x1a] = uVar44;
  uVar43 = param_2[0x1c];
  uVar45 = param_2[0x1f];
  uVar44 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar43;
  param_1[0x1f] = uVar45;
  param_1[0x1e] = uVar44;
  uVar43 = param_2[0x20];
  uVar45 = param_2[0x23];
  uVar44 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar43;
  param_1[0x23] = uVar45;
  param_1[0x22] = uVar44;
  uVar43 = param_2[0x24];
  uVar45 = param_2[0x27];
  uVar44 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar43;
  param_1[0x27] = uVar45;
  param_1[0x26] = uVar44;
  uVar43 = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar43;
  FUN_101615eb0(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,
                uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38,uVar39,
                uVar40,uVar41,uVar42,uVar4,uVar8);
  return param_1;
}



/* Entry: 101616b24; end: 101616c07;  */

int FUN_101616b24(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x54] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101616c08; end: 101616c33;  */

void FUN_101616c08(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 101616c34; end: 101616cdf;  */

undefined8 * FUN_101616c34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101616ce0; end: 101616d27;  */

undefined8 * FUN_101616ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101616d28; end: 101616dbf;  */

int FUN_101616d28(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101616dc0; end: 101616f67;  */

void FUN_101616dc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  if (param_1 != 0) {
    func_0x000107c61434();
    func_0x00010006c00c(param_2,param_3);
    func_0x000101617418(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                        param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
                        param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                        param_29,param_30,param_31,param_32,&SUB_10006c00c,FUN_101570e04,
                        FUN_10155b840,0x10159fa60);
  }
  return;
}



/* Entry: 101616f68; end: 101617007;  */

void FUN_101616f68(undefined8 *param_1)

{
  FUN_101617008(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],param_1[0x18],param_1[0x19],
                param_1[0x1a],param_1[0x1b],param_1[0x1c],param_1[0x1d],param_1[0x1e],param_1[0x1f],
                param_1[0x20],param_1[0x21],param_1[0x22],param_1[0x23],param_1[0x24],param_1[0x25],
                param_1[0x26],param_1[0x27],&SUB_10006c090,FUN_101553ccc,0x101617270);
  return;
}



/* Entry: 101617008; end: 10161758f;  */

void FUN_101617008(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  code *in_stack_00000100;
  code *UNRECOVERED_JUMPTABLE;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((param_2 >> 0x3d & 1) == 0) {
    (*in_stack_00000100)();
    (*UNRECOVERED_JUMPTABLE)(param_3,param_4,param_5);
    (*UNRECOVERED_JUMPTABLE)(param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x000101617234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)
              (param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16);
    return;
  }
  (*in_stack_00000100)(param_1,param_2 & 0xdfffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010161726c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,param_4,param_5);
  return;
}



/* Entry: 101617590; end: 10161761f;  */

void FUN_101617590(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9,code *param_10,code *UNRECOVERED_JUMPTABLE)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  (*param_9)();
  (*param_10)(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010161761c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_6,param_7,param_8);
  return;
}



/* Entry: 101617620; end: 101617b07;  */

undefined8 * FUN_101617620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  uVar1 = *param_2;
  uVar21 = param_2[1];
  uVar2 = param_2[2];
  uVar22 = param_2[3];
  uVar3 = param_2[4];
  uVar23 = param_2[5];
  uVar4 = param_2[6];
  uVar24 = param_2[7];
  uVar5 = param_2[8];
  uVar25 = param_2[9];
  uVar6 = param_2[10];
  uVar26 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar27 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar28 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar29 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar30 = param_2[0x13];
  uVar11 = param_2[0x14];
  uVar31 = param_2[0x15];
  uVar12 = param_2[0x16];
  uVar32 = param_2[0x17];
  uVar13 = param_2[0x18];
  uVar33 = param_2[0x19];
  uVar14 = param_2[0x1a];
  uVar34 = param_2[0x1b];
  uVar15 = param_2[0x1c];
  uVar35 = param_2[0x1d];
  uVar16 = param_2[0x1e];
  uVar36 = param_2[0x1f];
  uVar17 = param_2[0x20];
  uVar37 = param_2[0x21];
  uVar18 = param_2[0x22];
  uVar38 = param_2[0x23];
  uVar19 = param_2[0x24];
  uVar39 = param_2[0x25];
  uVar20 = param_2[0x26];
  uVar40 = param_2[0x27];
  FUN_101617008(uVar1,uVar21,uVar2,uVar22,uVar3,uVar23,uVar4,uVar24,uVar5,uVar25,uVar6,uVar26,uVar7,
                uVar27,uVar8,uVar28,uVar9,uVar29,uVar10,uVar30,uVar11,uVar31,uVar12,uVar32,uVar13,
                uVar33,uVar14,uVar34,uVar15,uVar35,uVar16,uVar36,uVar17,uVar37,uVar18,uVar38,uVar19,
                uVar39,uVar20,uVar40,&SUB_10006c00c,FUN_101570e04,FUN_101616dc0);
  *param_1 = uVar1;
  param_1[1] = uVar21;
  param_1[2] = uVar2;
  param_1[3] = uVar22;
  param_1[4] = uVar3;
  param_1[5] = uVar23;
  param_1[6] = uVar4;
  param_1[7] = uVar24;
  param_1[8] = uVar5;
  param_1[9] = uVar25;
  param_1[10] = uVar6;
  param_1[0xb] = uVar26;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar27;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar28;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar29;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar30;
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar31;
  param_1[0x16] = uVar12;
  param_1[0x17] = uVar32;
  param_1[0x18] = uVar13;
  param_1[0x19] = uVar33;
  param_1[0x1a] = uVar14;
  param_1[0x1b] = uVar34;
  param_1[0x1c] = uVar15;
  param_1[0x1d] = uVar35;
  param_1[0x1e] = uVar16;
  param_1[0x1f] = uVar36;
  param_1[0x20] = uVar17;
  param_1[0x21] = uVar37;
  param_1[0x22] = uVar18;
  param_1[0x23] = uVar38;
  param_1[0x24] = uVar19;
  param_1[0x25] = uVar39;
  param_1[0x26] = uVar20;
  param_1[0x27] = uVar40;
  return param_1;
}



/* Entry: 101617b08; end: 101617b0f;  */

void FUN_101617b08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x140);
  return;
}



/* Entry: 101617b10; end: 101617c0b;  */

undefined8 * FUN_101617b10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar20 = param_1[0x11];
  uVar19 = param_1[0x10];
  uVar22 = param_1[0x13];
  uVar21 = param_1[0x12];
  uVar24 = param_1[0x15];
  uVar23 = param_1[0x14];
  uVar26 = param_1[0x17];
  uVar25 = param_1[0x16];
  uVar28 = param_1[0x19];
  uVar27 = param_1[0x18];
  uVar30 = param_1[0x1b];
  uVar29 = param_1[0x1a];
  uVar32 = param_1[0x1d];
  uVar31 = param_1[0x1c];
  uVar34 = param_1[0x1f];
  uVar33 = param_1[0x1e];
  uVar36 = param_1[0x21];
  uVar35 = param_1[0x20];
  uVar38 = param_1[0x23];
  uVar37 = param_1[0x22];
  uVar40 = param_1[0x25];
  uVar39 = param_1[0x24];
  uVar4 = param_1[0x26];
  uVar8 = param_1[0x27];
  uVar41 = *param_2;
  uVar43 = param_2[3];
  uVar42 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar41;
  param_1[3] = uVar43;
  param_1[2] = uVar42;
  uVar41 = param_2[4];
  uVar43 = param_2[7];
  uVar42 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar41;
  param_1[7] = uVar43;
  param_1[6] = uVar42;
  uVar41 = param_2[8];
  uVar43 = param_2[0xb];
  uVar42 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar41;
  param_1[0xb] = uVar43;
  param_1[10] = uVar42;
  uVar41 = param_2[0xc];
  uVar43 = param_2[0xf];
  uVar42 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar41;
  param_1[0xf] = uVar43;
  param_1[0xe] = uVar42;
  uVar41 = param_2[0x10];
  uVar43 = param_2[0x13];
  uVar42 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar41;
  param_1[0x13] = uVar43;
  param_1[0x12] = uVar42;
  uVar41 = param_2[0x14];
  uVar43 = param_2[0x17];
  uVar42 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar41;
  param_1[0x17] = uVar43;
  param_1[0x16] = uVar42;
  uVar41 = param_2[0x18];
  uVar43 = param_2[0x1b];
  uVar42 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar41;
  param_1[0x1b] = uVar43;
  param_1[0x1a] = uVar42;
  uVar41 = param_2[0x1c];
  uVar43 = param_2[0x1f];
  uVar42 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar41;
  param_1[0x1f] = uVar43;
  param_1[0x1e] = uVar42;
  uVar41 = param_2[0x20];
  uVar43 = param_2[0x23];
  uVar42 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar41;
  param_1[0x23] = uVar43;
  param_1[0x22] = uVar42;
  uVar41 = param_2[0x24];
  uVar43 = param_2[0x27];
  uVar42 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar41;
  param_1[0x27] = uVar43;
  param_1[0x26] = uVar42;
  FUN_101617008(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,
                uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38,uVar39,
                uVar40,uVar4,uVar8,&SUB_10006c090,FUN_101553ccc,0x101617270);
  return param_1;
}



/* Entry: 101617c0c; end: 101617d6f;  */

int FUN_101617c0c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[0x50] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101617d70; end: 101617db7;  */

/* WARNING: Possible PIC construction at 0x000101617d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101617d8c) */
/* WARNING: Removing unreachable block (ram,0x000101617da8) */
/* WARNING: Removing unreachable block (ram,0x000101617d9c) */

void FUN_101617d70(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101617db8; end: 101617f2b;  */

undefined4 * FUN_101617db8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar2,uVar1);
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar3 = *(ulong *)(param_2 + 10);
  if (uVar3 >> 0x3c < 0xf) {
    param_1[6] = param_2[6];
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010006c00c(uVar2,uVar3);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(ulong *)(param_1 + 10) = uVar3;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  }
  return param_1;
}



/* Entry: 101617f2c; end: 101617fbf;  */

undefined4 * FUN_101617f2c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (*(ulong *)(param_1 + 10) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 10);
    if (uVar3 >> 0x3c < 0xf) {
      param_1[6] = param_2[6];
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(ulong *)(param_1 + 10) = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 6);
  }
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  return param_1;
}



/* Entry: 101617fc0; end: 10161809b;  */

int FUN_101617fc0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10161809c; end: 101618123;  */

/* WARNING: Possible PIC construction at 0x0001016180e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016180e8) */
/* WARNING: Removing unreachable block (ram,0x000101597ae4) */
/* WARNING: Removing unreachable block (ram,0x000101597b18) */
/* WARNING: Removing unreachable block (ram,0x000101597ae8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10161809c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  
  if (param_5 == 1) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101618124; end: 101618177;  */

/* WARNING: Possible PIC construction at 0x000101618158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010161815c) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b04) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b14) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b10) */

void FUN_101618124(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101618178; end: 1016182b7;  */

void FUN_101618178(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96cae4;
  func_0x000107c61520(&DAT_10d96cae4,&UNK_1103e8c90);
  puRam0000000112dba2f0 = puVar1;
  return;
}



/* Entry: 1016182b8; end: 101618333;  */

void FUN_1016182b8(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x27] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  return;
}



/* Entry: 101618334; end: 10161837f;  */

/* WARNING: Possible PIC construction at 0x000101618360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101618364) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b04) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b14) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b10) */

void FUN_101618334(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101618380; end: 1016186bf;  */

void FUN_101618380(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96c7b8;
  func_0x000107c61520(&DAT_10d96c7b8,&UNK_1103e89f8);
  puRam0000000112dba338 = puVar1;
  return;
}



/* Entry: 1016186c0; end: 10161870b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1016186c0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_3);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 10161870c; end: 10161875b;  */

void FUN_10161870c(undefined8 *param_1)

{
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10161875c; end: 1016187bb;  */

/* WARNING: Possible PIC construction at 0x000101618790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101618794) */
/* WARNING: Removing unreachable block (ram,0x000101553bdc) */
/* WARNING: Removing unreachable block (ram,0x000101553c10) */
/* WARNING: Removing unreachable block (ram,0x000101553be0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10161875c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  
  if (param_5 == 1) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1016187bc; end: 10161882f;  */

void FUN_1016187bc(undefined8 *param_1)

{
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return;
}



/* Entry: 101618830; end: 10161886f;  */

undefined8 FUN_101618830(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101618870; end: 101618903;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101618870(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101618904; end: 10161892f;  */

undefined8 FUN_101618904(undefined8 param_1)

{
  FUN_10161de0c(param_1,&UNK_1103e9188);
  return param_1;
}



/* Entry: 101618930; end: 101618973;  */

void FUN_101618930(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 101618974; end: 1016189b3;  */

void FUN_101618974(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dba430;
  func_0x0001000285a8(0x112dba430,&UNK_10d96d2e0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1016189b4; end: 1016189ef;  */

void FUN_1016189b4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1016189f0; end: 101618acf;  */

void FUN_1016189f0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101618ad0; end: 101618b0b;  */

bool FUN_101618ad0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 101618b0c; end: 101618b53;  */

void FUN_101618b0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96d8d0,0x54,2);
  uRam0000000113801740 = uStack_38;
  uRam0000000113801738 = uStack_40;
  uRam0000000113801750 = uStack_28;
  uRam0000000113801748 = uStack_30;
  uRam0000000113801760 = uStack_18;
  uRam0000000113801758 = uStack_20;
  return;
}



/* Entry: 101618b54; end: 101618c5f;  */

void FUN_101618b54(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_10161c388();
        lVar2 = unaff_x20 + 0xe8;
        puVar3 = &UNK_1103e92a0;
LAB_101618bdc:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10161c160();
          lVar2 = unaff_x20 + 0xa8;
          puVar3 = &UNK_1103e9100;
          goto LAB_101618bdc;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10161c25c();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1103e9188;
          goto LAB_101618bdc;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 101618c60; end: 101618ceb;  */

void FUN_101618c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_101618cec();
  if (unaff_x21 == 0) {
    FUN_101618dd0();
    FUN_101618e68();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 101618cec; end: 101618dcf;  */

void FUN_101618cec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = *(undefined8 *)(param_1 + 0x70);
  uStack_68 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  uStack_58 = *(undefined8 *)(param_1 + 0x98);
  uStack_60 = *(undefined8 *)(param_1 + 0x90);
  uStack_50 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  uStack_c0 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  uStack_b0 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = *(undefined8 *)(param_1 + 0x58);
  uStack_a0 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = *(undefined8 *)(param_1 + 0x68);
  uStack_90 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x18);
  uStack_e0 = *(undefined8 *)(param_1 + 0x10);
  uStack_c8 = *(undefined8 *)(param_1 + 0x28);
  uStack_d0 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = &uStack_e0;
  func_0x0001016188dc();
  if ((int)puVar1 != 1) {
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_f0 = uStack_50;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10161c25c();
    (*pcVar2)(&uStack_180,1,&UNK_1103e9188,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101618dd0; end: 101618e67;  */

void FUN_101618dd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(ulong *)(param_1 + 0xb0);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_80 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    uStack_48 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10161c160();
    (*pcVar1)(&uStack_80,2,&UNK_1103e9100,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101618e68; end: 101618f03;  */

void FUN_101618e68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(ulong *)(param_1 + 0xf0);
  if (uStack_88 >> 0x3c < 0xf) {
    uStack_90 = *(undefined8 *)(param_1 + 0xe8);
    uStack_78 = *(undefined8 *)(param_1 + 0x100);
    uStack_80 = *(undefined8 *)(param_1 + 0xf8);
    uStack_68 = *(undefined8 *)(param_1 + 0x110);
    uStack_70 = *(undefined8 *)(param_1 + 0x108);
    uStack_58 = *(undefined8 *)(param_1 + 0x120);
    uStack_60 = *(undefined8 *)(param_1 + 0x118);
    uStack_48 = *(undefined8 *)(param_1 + 0x130);
    uStack_50 = *(undefined8 *)(param_1 + 0x128);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10161c388();
    (*pcVar1)(&uStack_90,3,&UNK_1103e92a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101618f04; end: 101618f07;  */

uint FUN_101618f04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 auStack_710 [80];
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  ulong uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  undefined8 uStack_620;
  ulong uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_4d8 = param_1[0xf];
  uStack_4e0 = param_1[0xe];
  uStack_228 = param_1[0x11];
  uStack_230 = param_1[0x10];
  uStack_4e8 = param_1[0xd];
  uStack_4f0 = param_1[0xc];
  uStack_238 = param_1[0xf];
  uStack_240 = param_1[0xe];
  uStack_4c8 = param_1[0x11];
  uStack_4d0 = param_1[0x10];
  uStack_218 = param_1[0x13];
  uStack_220 = param_1[0x12];
  uStack_518 = param_1[7];
  uStack_520 = param_1[6];
  uStack_268 = param_1[9];
  uStack_270 = param_1[8];
  uStack_528 = param_1[5];
  uStack_530 = param_1[4];
  uStack_278 = param_1[7];
  uStack_280 = param_1[6];
  uStack_508 = param_1[9];
  uStack_510 = param_1[8];
  uStack_258 = param_1[0xb];
  uStack_260 = param_1[10];
  uStack_4f8 = param_1[0xb];
  uStack_500 = param_1[10];
  uStack_248 = param_1[0xd];
  uStack_250 = param_1[0xc];
  uStack_298 = param_1[3];
  uStack_2a0 = param_1[2];
  uStack_288 = param_1[5];
  uStack_290 = param_1[4];
  uStack_538 = param_1[3];
  uStack_540 = param_1[2];
  uStack_440 = param_2[0xf];
  uStack_448 = param_2[0xe];
  uStack_2c8 = param_2[0x11];
  uStack_2d0 = param_2[0x10];
  uStack_450 = param_2[0xd];
  uStack_458 = param_2[0xc];
  uStack_2d8 = param_2[0xf];
  uStack_2e0 = param_2[0xe];
  uStack_430 = param_2[0x11];
  uStack_438 = param_2[0x10];
  uStack_2b8 = param_2[0x13];
  uStack_2c0 = param_2[0x12];
  uStack_480 = param_2[7];
  uStack_488 = param_2[6];
  uStack_308 = param_2[9];
  uStack_310 = param_2[8];
  uStack_490 = param_2[5];
  uStack_498 = param_2[4];
  uStack_318 = param_2[7];
  uStack_320 = param_2[6];
  uStack_470 = param_2[9];
  uStack_478 = param_2[8];
  uStack_2f8 = param_2[0xb];
  uStack_300 = param_2[10];
  uStack_460 = param_2[0xb];
  uStack_468 = param_2[10];
  uStack_2e8 = param_2[0xd];
  uStack_2f0 = param_2[0xc];
  uStack_338 = param_2[3];
  uStack_340 = param_2[2];
  uStack_328 = param_2[5];
  uStack_330 = param_2[4];
  uStack_4a0 = param_2[3];
  uStack_4a8 = param_2[2];
  uStack_4b8 = param_1[0x13];
  uStack_4c0 = param_1[0x12];
  iVar2 = (int)&uStack_4a8;
  uStack_420 = param_2[0x13];
  uStack_428 = param_2[0x12];
  uStack_210 = param_1[0x14];
  uStack_2b0 = param_2[0x14];
  uStack_4b0 = param_1[0x14];
  uStack_418 = param_2[0x14];
  iVar1 = (int)&uStack_540;
  func_0x0001016188dc();
  if (iVar1 == 1) {
    func_0x0001016188dc();
    if (iVar2 == 1) {
      uStack_608 = uStack_4d8;
      uStack_610 = uStack_4e0;
      uStack_5f8 = uStack_4c8;
      uStack_600 = uStack_4d0;
      uStack_5e8 = uStack_4b8;
      uStack_5f0 = uStack_4c0;
      uStack_5e0 = uStack_4b0;
      uStack_648 = uStack_518;
      uStack_650 = uStack_520;
      uStack_638 = uStack_508;
      uStack_640 = uStack_510;
      uStack_628 = uStack_4f8;
      uStack_630 = uStack_500;
      uStack_618 = uStack_4e8;
      uStack_620 = uStack_4f0;
      uStack_668 = uStack_538;
      uStack_670 = uStack_540;
      uStack_658 = uStack_528;
      uStack_660 = uStack_530;
      FUN_10161b5a8(&uStack_2a0,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
      FUN_10161b5a8(&uStack_340,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
      func_0x00010161b350(&uStack_670,0x112dba3b8,&UNK_10d96d2b0);
LAB_10161b948:
      uStack_378 = param_1[0x16];
      uStack_380 = param_1[0x15];
      uStack_368 = param_1[0x18];
      uStack_370 = param_1[0x17];
      uStack_358 = param_1[0x1a];
      uStack_360 = param_1[0x19];
      uStack_348 = param_1[0x1c];
      uStack_350 = param_1[0x1b];
      uStack_3b8 = param_2[0x16];
      uStack_3c0 = param_2[0x15];
      uStack_3a8 = param_2[0x18];
      uStack_3b0 = param_2[0x17];
      uStack_398 = param_2[0x1a];
      uStack_3a0 = param_2[0x19];
      uStack_388 = param_2[0x1c];
      uStack_390 = param_2[0x1b];
      uStack_538 = param_1[0x16];
      uStack_540 = param_1[0x15];
      uStack_528 = param_1[0x18];
      uStack_530 = param_1[0x17];
      uStack_518 = param_1[0x1a];
      uStack_520 = param_1[0x19];
      uStack_508 = param_1[0x1c];
      uStack_510 = param_1[0x1b];
      uStack_4f8 = param_2[0x16];
      uStack_500 = param_2[0x15];
      uStack_4e8 = param_2[0x18];
      uStack_4f0 = param_2[0x17];
      uStack_4d8 = param_2[0x1a];
      uStack_4e0 = param_2[0x19];
      uStack_4c8 = param_2[0x1c];
      uStack_4d0 = param_2[0x1b];
      if (uStack_538 >> 0x3c < 0xf) {
        if (0xe < uStack_4f8 >> 0x3c) goto LAB_10161ba44;
        uStack_668 = param_2[0x16];
        uStack_670 = param_2[0x15];
        uStack_658 = param_2[0x18];
        uStack_660 = param_2[0x17];
        uStack_648 = param_2[0x1a];
        uStack_650 = param_2[0x19];
        uStack_638 = param_2[0x1c];
        uStack_640 = param_2[0x1b];
        uStack_1f8 = param_1[0x16];
        uStack_200 = param_1[0x15];
        uStack_1e8 = param_1[0x18];
        uStack_1f0 = param_1[0x17];
        uStack_1d8 = param_1[0x1a];
        uStack_1e0 = param_1[0x19];
        uStack_1c8 = param_1[0x1c];
        uStack_1d0 = param_1[0x1b];
        uStack_1c0 = uStack_670;
        uStack_1b8 = uStack_668;
        uStack_1b0 = uStack_660;
        uStack_1a8 = uStack_658;
        uStack_1a0 = uStack_650;
        uStack_198 = uStack_648;
        uStack_190 = uStack_640;
        uStack_188 = uStack_638;
        FUN_10161b5a8(&uStack_380,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        FUN_10161b5a8(&uStack_3c0,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        puVar4 = &uStack_200;
        FUN_10161aa70(puVar4,&uStack_1c0);
        func_0x00010161b350(&uStack_670,0x112dba3c8,&UNK_10d96d2c0);
        func_0x00010161b350(&uStack_540,0x112dba3c8,&UNK_10d96d2c0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_10161bce8;
      }
      else {
        if (uStack_4f8 >> 0x3c < 0xf) {
LAB_10161ba44:
          uStack_670 = uStack_540;
          uStack_668 = uStack_538;
          uStack_660 = uStack_530;
          uStack_658 = uStack_528;
          uStack_650 = uStack_520;
          uStack_648 = uStack_518;
          uStack_640 = uStack_510;
          uStack_638 = uStack_508;
          uStack_630 = uStack_500;
          uStack_628 = uStack_4f8;
          uStack_620 = uStack_4f0;
          uStack_618 = uStack_4e8;
          uStack_610 = uStack_4e0;
          uStack_608 = uStack_4d8;
          uStack_600 = uStack_4d0;
          uStack_5f8 = uStack_4c8;
          FUN_10161b5a8(&uStack_380,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
          FUN_10161b5a8(&uStack_3c0,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
          uVar5 = 0x112dba3d0;
          puVar6 = &UNK_10d96d2c8;
          goto LAB_10161bce0;
        }
        uStack_668 = param_1[0x16];
        uStack_670 = param_1[0x15];
        uStack_658 = param_1[0x18];
        uStack_660 = param_1[0x17];
        uStack_648 = param_1[0x1a];
        uStack_650 = param_1[0x19];
        uStack_638 = param_1[0x1c];
        uStack_640 = param_1[0x1b];
        FUN_10161b5a8(&uStack_380,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        FUN_10161b5a8(&uStack_3c0,&uStack_7b0,0x112dba3c8,&UNK_10d96d2c0);
        func_0x00010161b350(&uStack_670,0x112dba3c8,&UNK_10d96d2c0);
      }
      uStack_838 = param_1[0x20];
      uStack_840 = param_1[0x1f];
      uStack_848 = param_1[0x1e];
      uStack_850 = param_1[0x1d];
      uStack_828 = param_1[0x22];
      uStack_830 = param_1[0x21];
      uStack_818 = param_1[0x24];
      uStack_820 = param_1[0x23];
      uStack_808 = param_1[0x26];
      uStack_810 = param_1[0x25];
      uStack_518 = param_1[0x22];
      uStack_520 = param_1[0x21];
      uStack_508 = param_1[0x24];
      uStack_510 = param_1[0x23];
      uStack_3f8 = param_2[0x20];
      uStack_400 = param_2[0x1f];
      uStack_408 = param_2[0x1e];
      uStack_410 = param_2[0x1d];
      uStack_3e8 = param_2[0x22];
      uStack_3f0 = param_2[0x21];
      uStack_3d8 = param_2[0x24];
      uStack_3e0 = param_2[0x23];
      uStack_3c8 = param_2[0x26];
      uStack_3d0 = param_2[0x25];
      uStack_4c8 = param_2[0x22];
      uStack_4d0 = param_2[0x21];
      uStack_4b8 = param_2[0x24];
      uStack_4c0 = param_2[0x23];
      uStack_528 = param_1[0x20];
      uStack_530 = param_1[0x1f];
      uStack_4f8 = param_1[0x26];
      uStack_500 = param_1[0x25];
      uStack_538 = param_1[0x1e];
      uStack_540 = param_1[0x1d];
      uStack_4d8 = param_2[0x20];
      uStack_4e0 = param_2[0x1f];
      uStack_4e8 = param_2[0x1e];
      uStack_4f0 = param_2[0x1d];
      uStack_5d8 = param_2[0x26];
      uStack_4b0 = param_2[0x25];
      uStack_4a8 = uStack_5d8;
      if (uStack_538 >> 0x3c < 0xf) {
        if (0xe < uStack_4e8 >> 0x3c) goto LAB_10161bc70;
        uStack_698 = param_2[0x22];
        uStack_6a0 = param_2[0x21];
        uStack_688 = param_2[0x24];
        uStack_690 = param_2[0x23];
        uStack_678 = param_2[0x26];
        uStack_680 = param_2[0x25];
        uStack_6b8 = param_2[0x1e];
        uStack_6c0 = param_2[0x1d];
        uStack_6a8 = param_2[0x20];
        uStack_6b0 = param_2[0x1f];
        uStack_7a8 = param_1[0x1e];
        uStack_7b0 = param_1[0x1d];
        uStack_798 = param_1[0x20];
        uStack_7a0 = param_1[0x1f];
        uStack_788 = param_1[0x22];
        uStack_790 = param_1[0x21];
        uStack_778 = param_1[0x24];
        uStack_780 = param_1[0x23];
        uStack_768 = param_1[0x26];
        uStack_770 = param_1[0x25];
        uStack_670 = uStack_6c0;
        uStack_668 = uStack_6b8;
        uStack_660 = uStack_6b0;
        uStack_658 = uStack_6a8;
        uStack_650 = uStack_6a0;
        uStack_648 = uStack_698;
        uStack_640 = uStack_690;
        uStack_638 = uStack_688;
        uStack_630 = uStack_680;
        uStack_628 = uStack_678;
        FUN_10161b5a8(&uStack_850,auStack_710,0x112dba3d8,&UNK_10d96d2d0);
        FUN_10161b5a8(&uStack_410,auStack_710,0x112dba3d8,&UNK_10d96d2d0);
        puVar4 = &uStack_7b0;
        FUN_10161b390(puVar4,&uStack_670);
        func_0x00010161b350(&uStack_6c0,0x112dba3d8,&UNK_10d96d2d0);
        func_0x00010161b350(&uStack_540,0x112dba3d8,&UNK_10d96d2d0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_10161bce8;
      }
      else {
        if (uStack_4e8 >> 0x3c < 0xf) {
LAB_10161bc70:
          uStack_670 = uStack_540;
          uStack_668 = uStack_538;
          uStack_660 = uStack_530;
          uStack_658 = uStack_528;
          uStack_650 = uStack_520;
          uStack_648 = uStack_518;
          uStack_640 = uStack_510;
          uStack_638 = uStack_508;
          uStack_630 = uStack_500;
          uStack_628 = uStack_4f8;
          uStack_620 = uStack_4f0;
          uStack_618 = uStack_4e8;
          uStack_610 = uStack_4e0;
          uStack_608 = uStack_4d8;
          uStack_600 = uStack_4d0;
          uStack_5f8 = uStack_4c8;
          uStack_5f0 = uStack_4c0;
          uStack_5e8 = uStack_4b8;
          uStack_5e0 = uStack_4b0;
          FUN_10161b5a8(&uStack_850,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
          FUN_10161b5a8(&uStack_410,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
          uVar5 = 0x112dba3e0;
          puVar6 = &UNK_10d96d2d8;
          goto LAB_10161bce0;
        }
        uStack_648 = param_1[0x22];
        uStack_650 = param_1[0x21];
        uStack_638 = param_1[0x24];
        uStack_640 = param_1[0x23];
        uStack_628 = param_1[0x26];
        uStack_630 = param_1[0x25];
        uStack_668 = param_1[0x1e];
        uStack_670 = param_1[0x1d];
        uStack_658 = param_1[0x20];
        uStack_660 = param_1[0x1f];
        FUN_10161b5a8(&uStack_850,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
        FUN_10161b5a8(&uStack_410,&uStack_7b0,0x112dba3d8,&UNK_10d96d2d0);
        func_0x00010161b350(&uStack_670,0x112dba3d8,&UNK_10d96d2d0);
      }
      uVar5 = *param_1;
      FUN_100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar3 = (uint)uVar5;
      goto LAB_10161bcec;
    }
LAB_10161b7e0:
    func_0x000107c610b4(&uStack_670,&uStack_540,0x130);
    FUN_10161b5a8(&uStack_2a0,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
    FUN_10161b5a8(&uStack_340,&uStack_e0,0x112dba3b8,&UNK_10d96d2b0);
    uVar5 = 0x112dba3c0;
    puVar6 = &UNK_10d96d2b8;
LAB_10161bce0:
    func_0x00010161b350(&uStack_670,uVar5,puVar6);
  }
  else {
    uStack_608 = uStack_4d8;
    uStack_610 = uStack_4e0;
    uStack_5f8 = uStack_4c8;
    uStack_600 = uStack_4d0;
    uStack_5e8 = uStack_4b8;
    uStack_5f0 = uStack_4c0;
    uStack_5e0 = uStack_4b0;
    uStack_648 = uStack_518;
    uStack_650 = uStack_520;
    uStack_638 = uStack_508;
    uStack_640 = uStack_510;
    uStack_628 = uStack_4f8;
    uStack_630 = uStack_500;
    uStack_618 = uStack_4e8;
    uStack_620 = uStack_4f0;
    uStack_668 = uStack_538;
    uStack_670 = uStack_540;
    uStack_658 = uStack_528;
    uStack_660 = uStack_530;
    func_0x0001016188dc();
    if (iVar2 == 1) goto LAB_10161b7e0;
    uStack_748 = uStack_440;
    uStack_750 = uStack_448;
    uStack_738 = uStack_430;
    uStack_740 = uStack_438;
    uStack_728 = uStack_420;
    uStack_730 = uStack_428;
    uStack_788 = uStack_480;
    uStack_790 = uStack_488;
    uStack_778 = uStack_470;
    uStack_780 = uStack_478;
    uStack_768 = uStack_460;
    uStack_770 = uStack_468;
    uStack_758 = uStack_450;
    uStack_760 = uStack_458;
    uStack_7a8 = uStack_4a0;
    uStack_7b0 = uStack_4a8;
    uStack_798 = uStack_490;
    uStack_7a0 = uStack_498;
    uStack_78 = uStack_440;
    uStack_80 = uStack_448;
    uStack_68 = uStack_430;
    uStack_70 = uStack_438;
    uStack_58 = uStack_420;
    uStack_60 = uStack_428;
    uStack_b8 = uStack_480;
    uStack_c0 = uStack_488;
    uStack_a8 = uStack_470;
    uStack_b0 = uStack_478;
    uStack_98 = uStack_460;
    uStack_a0 = uStack_468;
    uStack_88 = uStack_450;
    uStack_90 = uStack_458;
    uStack_720 = uStack_418;
    uStack_50 = uStack_418;
    uStack_d8 = uStack_4a0;
    uStack_e0 = uStack_4a8;
    uStack_c8 = uStack_490;
    uStack_d0 = uStack_498;
    uStack_118 = uStack_608;
    uStack_120 = uStack_610;
    uStack_108 = uStack_5f8;
    uStack_110 = uStack_600;
    uStack_f8 = uStack_5e8;
    uStack_100 = uStack_5f0;
    uStack_f0 = uStack_5e0;
    uStack_158 = uStack_648;
    uStack_160 = uStack_650;
    uStack_148 = uStack_638;
    uStack_150 = uStack_640;
    uStack_138 = uStack_628;
    uStack_140 = uStack_630;
    uStack_128 = uStack_618;
    uStack_130 = uStack_620;
    uStack_178 = uStack_668;
    uStack_180 = uStack_670;
    uStack_168 = uStack_658;
    uStack_170 = uStack_660;
    FUN_10161b5a8(&uStack_2a0,&uStack_850,0x112dba3b8,&UNK_10d96d2b0);
    FUN_10161b5a8(&uStack_340,&uStack_850,0x112dba3b8,&UNK_10d96d2b0);
    puVar4 = &uStack_180;
    func_0x00010161adf8(puVar4,&uStack_e0);
    func_0x00010161b350(&uStack_7b0,0x112dba3b8,&UNK_10d96d2b0);
    func_0x00010161b350(&uStack_540,0x112dba3b8,&UNK_10d96d2b0);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10161b948;
  }
LAB_10161bce8:
  uVar3 = 0;
LAB_10161bcec:
  return uVar3 & 1;
}



/* Entry: 101618f08; end: 101618fa3;  */

void FUN_101618f08(undefined8 *param_1)

{
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000101614c84(&uStack_b8);
  param_1[0x11] = uStack_40;
  param_1[0x10] = uStack_48;
  param_1[0x13] = uStack_30;
  param_1[0x12] = uStack_38;
  param_1[9] = uStack_80;
  param_1[8] = uStack_88;
  param_1[0xb] = uStack_70;
  param_1[10] = uStack_78;
  param_1[0xd] = uStack_60;
  param_1[0xc] = uStack_68;
  param_1[0xf] = uStack_50;
  param_1[0xe] = uStack_58;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = uStack_b0;
  param_1[2] = uStack_b8;
  param_1[0x14] = uStack_28;
  param_1[5] = uStack_a0;
  param_1[4] = uStack_a8;
  param_1[7] = uStack_90;
  param_1[6] = uStack_98;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x16] = 0xf000000000000000;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xf000000000000000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  return;
}



/* Entry: 101618fa4; end: 101618fc7;  */

undefined1  [16] FUN_101618fa4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb3830;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 101618fc8; end: 101618ff7;  */

undefined1  [16] FUN_101618fc8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101618ff8; end: 10161902b;  */

void FUN_101618ff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10161902c; end: 10161903f;  */

undefined8 FUN_10161902c(void)

{
  return 0x10161903c;
}



/* Entry: 101619040; end: 101619053;  */

void FUN_101619040(void)

{
  FUN_101618b54();
  return;
}



/* Entry: 101619054; end: 1016190bb;  */

void FUN_101619054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_178 [312];
  
  func_0x000107c610b4(auStack_178);
  FUN_101618c60(param_1,param_2,param_3);
  return;
}


