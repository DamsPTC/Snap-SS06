/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10378cbac; end: 10378ccc3;  */

long * FUN_10378cbac(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar8 = param_2[4];
    lVar4 = param_2[5];
    param_1[4] = lVar8;
    func_0x000107c61434();
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar8);
    func_0x000107c614b0(lVar4);
    lVar8 = param_2[6];
    lVar3 = param_2[7];
    param_1[5] = lVar4;
    param_1[6] = lVar8;
    param_1[7] = lVar3;
    iVar7 = *(int *)(param_3 + 0x24);
    lVar8 = 0;
    func_0x000107c5eea4();
    pcVar10 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
    func_0x000107c61434(lVar3);
    (*pcVar10)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,lVar8);
    iVar7 = *(int *)(param_3 + 0x2c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10378ccc4; end: 10378cd4f;  */

/* WARNING: Possible PIC construction at 0x00010378cce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378ccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378cd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010378cd30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378cd04) */
/* WARNING: Removing unreachable block (ram,0x00010378ccf4) */
/* WARNING: Removing unreachable block (ram,0x00010378cce4) */
/* WARNING: Removing unreachable block (ram,0x00010378cd34) */

void FUN_10378ccc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10378cd50; end: 10378ce3b;  */

undefined8 * FUN_10378cd50(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c614b0(uVar5);
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[5] = uVar5;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  iVar6 = *(int *)(param_3 + 0x24);
  lVar7 = 0;
  func_0x000107c5eea4();
  pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
  func_0x000107c61434(uVar4);
  (*pcVar8)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar7);
  iVar6 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10378ce3c; end: 10378cf8f;  */

undefined8 * FUN_10378ce3c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_1[5];
  uVar6 = param_2[5];
  func_0x000107c614b0(uVar6);
  param_1[5] = uVar6;
  func_0x000107c614ac(uVar5);
  param_1[6] = param_2[6];
  uVar5 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  iVar3 = *(int *)(param_3 + 0x24);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x18))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *param_2;
  uVar5 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  return param_1;
}



/* Entry: 10378cf90; end: 10378d0f7;  */

undefined8 * FUN_10378cf90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  iVar1 = *(int *)(param_3 + 0x24);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  iVar1 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar5 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2[1] = param_2[1];
  *puVar2 = uVar5;
  return param_1;
}



/* Entry: 10378d0f8; end: 10378d10f;  */

void FUN_10378d0f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10378d110; end: 10378d147;  */

void FUN_10378d110(undefined8 param_1)

{
  if (lRam0000000112f91a38 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77ba08);
  return;
}



/* Entry: 10378d148; end: 10378d1e3;  */

void FUN_10378d148(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = &UNK_10dc0a280;
  puStack_60 = &UNK_10dc0a280;
  puStack_58 = PTR___sBbWV_11034d660 + 0x40;
  puStack_50 = &UNK_10dc0a298;
  puStack_48 = &UNK_10dc0a280;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dc0a2b0;
    puStack_30 = &UNK_10dc0a280;
    puStack_28 = &UNK_10dc0a280;
    func_0x000107c6153c(param_1,0x100,9,&puStack_68,param_1 + 0x10);
  }
  return;
}



/* Entry: 10378d1e4; end: 10378d1f7;  */

void FUN_10378d1e4(void)

{
  return;
}



/* Entry: 10378d1f8; end: 10378d253;  */

/* WARNING: Possible PIC construction at 0x00010378d20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378d210) */

void FUN_10378d1f8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10378d254; end: 10378d2af;  */

undefined8 * FUN_10378d254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10378d2b0; end: 10378d2eb;  */

undefined8 * FUN_10378d2b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10378d2ec; end: 10378d4d7;  */

int FUN_10378d2ec(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10378d4d8; end: 10378d517;  */

void FUN_10378d4d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a3bc;
  func_0x000107c61520(&UNK_10dc0a3bc,&UNK_1106919d8);
  puRam0000000112f91a90 = puVar1;
  return;
}



/* Entry: 10378d518; end: 10378d51b;  */

void FUN_10378d518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a4ac;
  func_0x000107c61520(&UNK_10dc0a4ac,&UNK_1106918c8);
  puRam0000000112f91a98 = puVar1;
  return;
}



/* Entry: 10378d51c; end: 10378d55b;  */

void FUN_10378d51c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a4ac;
  func_0x000107c61520(&UNK_10dc0a4ac,&UNK_1106918c8);
  puRam0000000112f91a98 = puVar1;
  return;
}



/* Entry: 10378d55c; end: 10378d55f;  */

void FUN_10378d55c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a40c;
  func_0x000107c61520(&UNK_10dc0a40c,&UNK_1106918c8);
  puRam0000000112f91aa0 = puVar1;
  return;
}



/* Entry: 10378d560; end: 10378d59f;  */

void FUN_10378d560(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a40c;
  func_0x000107c61520(&UNK_10dc0a40c,&UNK_1106918c8);
  puRam0000000112f91aa0 = puVar1;
  return;
}



/* Entry: 10378d5a0; end: 10378d5a3;  */

void FUN_10378d5a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a3e4;
  func_0x000107c61520(&UNK_10dc0a3e4,&UNK_1106918c8);
  puRam0000000112f91aa8 = puVar1;
  return;
}



/* Entry: 10378d5a4; end: 10378d5e3;  */

void FUN_10378d5a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a3e4;
  func_0x000107c61520(&UNK_10dc0a3e4,&UNK_1106918c8);
  puRam0000000112f91aa8 = puVar1;
  return;
}



/* Entry: 10378d5e4; end: 10378d60f;  */

undefined1  [16] FUN_10378d5e4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10378d610; end: 10378d62b;  */

void FUN_10378d610(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10378d62c; end: 10378d67b;  */

void FUN_10378d62c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103791654();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10378d67c; end: 10378dd73;  */

void FUN_10378d67c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x21;
  uint uVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_100;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  lVar17 = 0x112f91b30;
  func_0x0001000285a8(0x112f91b30,&UNK_10dc0a5d0);
  lStack_160 = *(long *)(lVar17 + -8);
  lStack_148 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_160 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar10);
  FUN_103791654();
  lStack_150 = (long)&lStack_160 - extraout_x8;
  func_0x000107c606ec((long)&lStack_160 - extraout_x8,&UNK_110691bb0,&UNK_110691bb0,param_1,uVar10,
                      uVar1);
  puVar16 = (ulong *)(param_2 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  uVar14 = uVar14 + 0x3f >> 6;
  func_0x000107c61434(param_2);
  lVar17 = 0;
  uStack_140 = uVar14;
  lStack_158 = param_2;
joined_r0x00010378d7a8:
  do {
    while( true ) {
      while (uVar18 == 0) {
        bVar7 = SCARRY8(lVar17,1);
        lVar17 = lVar17 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10378dca4);
          (*pcVar6)();
        }
        if ((long)uVar14 <= lVar17) {
          func_0x000107c61574(param_2);
          (**(code **)(lStack_160 + 8))(lStack_150,lStack_148);
          return;
        }
        uVar18 = puVar16[lVar17];
      }
      uVar5 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar18 = uVar18 - 1 & uVar18;
      uVar12 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar17 << 6;
      puVar8 = (ulong *)(*(long *)(param_2 + 0x30) + uVar12 * 0x10);
      uVar5 = *puVar8;
      uVar2 = puVar8[1];
      puVar13 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar12 * 0x18);
      uVar10 = *puVar13;
      uVar1 = puVar13[1];
      bVar4 = *(byte *)(puVar13 + 2);
      uVar15 = (uint)bVar4;
      if (param_3 == 0) break;
      if (*(long *)(param_3 + 0x10) != 0) {
        func_0x000107c6068c(&uStack_118,*(undefined8 *)(param_3 + 0x28));
        func_0x000107c61434(uVar2);
        func_0x000101edf31c(uVar10,uVar1,bVar4);
        puVar8 = &uStack_118;
        func_0x000107c5fb58(puVar8,uVar5,uVar2);
        func_0x000107c606a8();
        uVar14 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
        uVar12 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_3 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
          do {
            puVar8 = (ulong *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
            uVar9 = *puVar8;
            uVar3 = puVar8[1];
            param_2 = lStack_158;
            if ((uVar9 == uVar5 && uVar3 == uVar2) ||
               (func_0x000107c605b8(uVar9,uVar3,uVar5,uVar2,0), param_2 = lStack_158,
               (uVar9 & 1) != 0)) goto joined_r0x00010378d994;
            uVar12 = uVar12 + 1 & ~uVar14;
          } while ((*(ulong *)(param_3 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(uVar2);
        func_0x000101edeb30(uVar10,uVar1,bVar4);
        param_2 = lStack_158;
        uVar14 = uStack_140;
      }
    }
    func_0x000107c61434(uVar2);
    func_0x000101edf31c(uVar10,uVar1,bVar4);
joined_r0x00010378d994:
    if (2 < bVar4) {
      if (uVar15 - 3 < 2) {
        func_0x000103aa7f68(&uStack_118,uVar10,uVar1,bVar4);
        func_0x000101edeb30(uVar10,uVar1,bVar4);
        param_2 = lStack_158;
        if (lStack_100 == 0) {
          func_0x000107c6142c(uVar2);
          FUN_103791694(&uStack_118,0x112d387f8,&UNK_10d902650);
          param_2 = lStack_158;
          uVar14 = uStack_140;
        }
        else {
          func_0x000100102924(&uStack_118,auStack_88);
          func_0x0001000bb420(auStack_88,auStack_a8);
          uVar10 = 0x112f91b40;
          func_0x0001000285a8(0x112f91b40,&UNK_10dc0a5e0);
          puVar11 = PTR___sypN_11034f1a8;
          puVar8 = &uStack_d0;
          func_0x000107c6147c(puVar8,auStack_a8,PTR___sypN_11034f1a8 + 8,uVar10,6);
          if ((int)puVar8 == 0) {
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            FUN_103791694(&uStack_d0,0x112f91b48,&UNK_10dc0a5e8);
            func_0x0001000bb420(auStack_88,&uStack_118);
            puVar11 = puVar11 + 8;
            func_0x000107c5fb20(&uStack_118,puVar11);
            uStack_118 = uVar5;
            uStack_110 = uVar2;
            func_0x000107c6053c();
            if (unaff_x21 != 0) {
              func_0x000107c6142c(puVar11);
              func_0x000107c61574(param_2);
              func_0x0001037916ec(auStack_88);
LAB_10378dd44:
              (**(code **)(lStack_160 + 8))(lStack_150,lStack_148);
              func_0x000107c6142c(uVar2);
              return;
            }
            func_0x0001037916ec(auStack_88);
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(puVar11);
            uVar14 = uStack_140;
          }
          else {
            FUN_1037916d4(&uStack_d0,&uStack_118);
            func_0x0001000a8868(&uStack_118,lStack_100);
            uStack_d0 = uVar5;
            uStack_c8 = uVar2;
            func_0x000107c60554();
            if (unaff_x21 != 0) {
              func_0x0001037916ec(auStack_88);
              func_0x000107c61574(param_2);
              (**(code **)(lStack_160 + 8))(lStack_150,lStack_148);
              func_0x000107c6142c(uVar2);
              func_0x0001037916ec(&uStack_118);
              return;
            }
            func_0x0001037916ec(auStack_88);
            func_0x000107c6142c(uVar2);
            func_0x0001037916ec(&uStack_118);
            uVar14 = uStack_140;
          }
        }
      }
      else {
        func_0x000107c6142c(uVar2);
        uVar14 = uStack_140;
      }
      goto joined_r0x00010378d7a8;
    }
    if (uVar15 == 0) {
      uStack_118 = uVar5;
      uStack_110 = uVar2;
      func_0x000107c61434(uVar1);
      func_0x000107c6053c(uVar10,uVar1,&uStack_118,lStack_148);
      func_0x000101edeb30(uVar10,uVar1,0);
      func_0x000101edeb30(uVar10,uVar1,0);
      if (unaff_x21 != 0) {
        func_0x000107c61574(param_2);
        (**(code **)(lStack_160 + 8))(lStack_150,lStack_148);
        func_0x000107c6142c(uVar2);
        return;
      }
    }
    else {
      if (uVar15 == 1) {
        uStack_118 = uVar5;
        uStack_110 = uVar2;
        func_0x000107c60540((uint)uVar10 & 1,&uStack_118,lStack_148);
      }
      else {
        uStack_118 = uVar5;
        uStack_110 = uVar2;
        func_0x000107c60544(uVar10,&uStack_118,lStack_148);
      }
      if (unaff_x21 != 0) {
        func_0x000107c61574(param_2);
        goto LAB_10378dd44;
      }
    }
    func_0x000107c6142c(uVar2);
    uVar14 = uStack_140;
  } while( true );
}



/* Entry: 10378dd74; end: 10378dd8b;  */

void FUN_10378dd74(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10378d67c(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 10378dd8c; end: 10378dd8f;  */

void FUN_10378dd8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a31c;
  func_0x000107c61520(&UNK_10dc0a31c,&UNK_1106919d8);
  puRam0000000112f91ab0 = puVar1;
  return;
}



/* Entry: 10378dd90; end: 10378ddcf;  */

void FUN_10378dd90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a31c;
  func_0x000107c61520(&UNK_10dc0a31c,&UNK_1106919d8);
  puRam0000000112f91ab0 = puVar1;
  return;
}



/* Entry: 10378ddd0; end: 10378ddd3;  */

void FUN_10378ddd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a2f4;
  func_0x000107c61520(&UNK_10dc0a2f4,&UNK_1106919d8);
  puRam0000000112f91ab8 = puVar1;
  return;
}



/* Entry: 10378ddd4; end: 10378de13;  */

void FUN_10378ddd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a2f4;
  func_0x000107c61520(&UNK_10dc0a2f4,&UNK_1106919d8);
  puRam0000000112f91ab8 = puVar1;
  return;
}



/* Entry: 10378de14; end: 10378de1f;  */

void FUN_10378de14(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = auStack_78;
  func_0x000107c5fb58(puVar1,param_1,param_2);
  func_0x000107c606a8();
                    /* WARNING: Could not recover jumptable at 0x00010378de88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10378dfb4(param_1,param_2,puVar1);
  return;
}



/* Entry: 10378de20; end: 10378de8b;  */

void FUN_10378de20(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = auStack_78;
  func_0x000107c5fb58(puVar1,param_1,param_2);
  func_0x000107c606a8();
                    /* WARNING: Could not recover jumptable at 0x00010378de88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1);
  return;
}



/* Entry: 10378de8c; end: 10378df3f;  */

undefined1  [16] FUN_10378de8c(ulong param_1,ulong param_2,byte param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_88 [40];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    if (param_3 != 2) {
      puVar3 = (undefined1 *)0x3;
      func_0x000107c60690();
      goto LAB_10378df10;
    }
    uVar2 = 2;
  }
  func_0x000107c60690(uVar2);
  puVar3 = auStack_88;
  func_0x000107c5fb58(puVar3,param_1,param_2);
LAB_10378df10:
  func_0x000107c606a8();
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    lVar8 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar6 = (ulong *)(lVar8 + uVar7 * 0x18);
      uVar4 = *puVar6;
      bVar1 = (byte)puVar6[2];
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (param_3 == 0) {
LAB_10378e134:
            if ((uVar4 == param_1 && puVar6[1] == param_2) ||
               (func_0x000107c605b8(uVar4,puVar6[1],param_1,param_2,0), (uVar4 & 1) != 0))
            goto LAB_10378e154;
          }
        }
        else if (param_3 == 1) goto LAB_10378e134;
      }
      else if (bVar1 == 2) {
        if (param_3 == 2) goto LAB_10378e134;
      }
      else if (param_3 == 3 && (param_2 == 0 && param_1 == 0)) {
LAB_10378e154:
        uVar2 = 1;
        goto LAB_10378e160;
      }
      uVar7 = uVar7 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_10378e160:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 10378df40; end: 10378dfb3;  */

void FUN_10378df40(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  FUN_1037713c4(param_1);
  func_0x000107c5fb58(auStack_78,uVar1,param_2);
  func_0x000107c6142c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((uint)*(byte *)(*(long *)(unaff_x20 + 0x30) + param_2) == ((uint)param_1 & 0xff)) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10378dfb4; end: 10378e05f;  */

undefined1  [16] FUN_10378dfb4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_10378e048;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_10378e048:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 10378e060; end: 10378e17f;  */

undefined1  [16] FUN_10378e060(ulong param_1,ulong param_2,char param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar5 = (ulong *)(lVar6 + param_4 * 0x18);
      uVar2 = *puVar5;
      bVar1 = (byte)puVar5[2];
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (param_3 == '\0') {
LAB_10378e134:
            if ((uVar2 == param_1 && puVar5[1] == param_2) ||
               (func_0x000107c605b8(uVar2,puVar5[1],param_1,param_2,0), (uVar2 & 1) != 0))
            goto LAB_10378e154;
          }
        }
        else if (param_3 == '\x01') goto LAB_10378e134;
      }
      else if (bVar1 == 2) {
        if (param_3 == '\x02') goto LAB_10378e134;
      }
      else if (param_3 == '\x03' && (param_2 == 0 && param_1 == 0)) {
LAB_10378e154:
        uVar3 = 1;
        goto LAB_10378e160;
      }
      param_4 = param_4 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
  }
  uVar3 = 0;
LAB_10378e160:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10378e180; end: 10378e1fb;  */

void FUN_10378e180(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10378e1fc; end: 10378e3b7;  */

ulong FUN_10378e1fc(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e2e0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e2e4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103791f28(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e3b8);
  (*pcVar2)();
}



/* Entry: 10378e3b8; end: 10378e3cb;  */

ulong FUN_10378e3b8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e4b0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e4b4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ad6d8;
    func_0x000107c61168(PTR_PTR_1126ad6d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ad6d8;
    func_0x000107c61168(PTR_PTR_1126ad6d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103791f28(0,0x112f906c0,&PTR_PTR_1126ad6d8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e588);
  (*pcVar2)();
}



/* Entry: 10378e3cc; end: 10378e587;  */

ulong FUN_10378e3cc(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e4b0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e4b4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103791f28(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e588);
  (*pcVar2)();
}



/* Entry: 10378e588; end: 10378e723;  */

ulong FUN_10378e588(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e658);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e65c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103aa7a90(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103aa7a90(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f164390);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10378e724);
  (*pcVar2)();
}



/* Entry: 10378e724; end: 10378e8bb;  */

void FUN_10378e724(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  
  func_0x0001000285a8(0x112f90840,&UNK_10dc0a8f0);
  lVar16 = *unaff_x20;
  lVar10 = lVar16;
  func_0x000107c6048c();
  if (*(long *)(lVar16 + 0x10) != 0) {
    lVar1 = lVar16 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar10 != lVar16 || lVar1 + uVar11 * 8 <= lVar10 + 0x40U) {
      func_0x000107c610b8(lVar10 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar17 = 0;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar16 + 0x40);
    if (uVar11 == 0) goto LAB_10378e804;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar17 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar15);
        uVar6 = puVar2[1];
        lVar14 = uVar13 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar14);
        uVar5 = *puVar3;
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar15);
        uVar8 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar14);
        *puVar2 = uVar5;
        puVar2[1] = uVar7;
        *(undefined1 *)(puVar2 + 2) = uVar8;
        func_0x000107c61434();
        func_0x00010376df2c(uVar5,uVar7,uVar8);
        if (uVar11 != 0) break;
LAB_10378e804:
        do {
          lVar14 = lVar17 + 1;
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10378e8bc);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_10378e890;
          uVar11 = *(ulong *)(lVar1 + lVar14 * 8);
          lVar17 = lVar17 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar17 = lVar14;
      }
    } while( true );
  }
LAB_10378e890:
  func_0x000107c61574(lVar16);
  *unaff_x20 = lVar10;
  return;
}



/* Entry: 10378e8bc; end: 10378e8cf;  */

void FUN_10378e8bc(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112f91d78,&UNK_10dc0aef0);
  lVar12 = *unaff_x20;
  lVar8 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar12 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar12 + 0x40);
    if (uVar9 == 0) goto LAB_10378f07c;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar14 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar11 * 0x18);
        uVar5 = puVar3[1];
        uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x18);
        uVar6 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(puVar4 + 2) = uVar6;
        *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 8) = uVar13;
        FUN_103765724();
        func_0x000107c61434(uVar13);
        if (uVar9 != 0) break;
LAB_10378f07c:
        do {
          lVar2 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10378f11c);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_10378f0f4;
          uVar9 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar2;
      }
    } while( true );
  }
LAB_10378f0f4:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 10378e8d0; end: 10378ecb7;  */

void FUN_10378e8d0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uStack_68;
  
  uVar10 = 0x112f91e28;
  func_0x0001000285a8(0x112f91e28,&UNK_10dc0aa48);
  lVar17 = *unaff_x20;
  lVar11 = lVar17;
  func_0x000107c6048c(lVar17,uVar10);
  if (*(long *)(lVar17 + 0x10) != 0) {
    lVar1 = lVar17 + 0x40;
    uVar12 = (1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar11 != lVar17 || lVar1 + uVar12 * 8 <= lVar11 + 0x40U) {
      func_0x000107c610b8(lVar11 + 0x40U,lVar1,uVar12 << 3);
    }
    lVar18 = 0;
    *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar17 + 0x10);
    uVar13 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
    uVar12 = 0xffffffffffffffff;
    if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
      uVar12 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar12 = uVar12 & *(ulong *)(lVar17 + 0x40);
    if (uVar12 == 0) goto LAB_10378e9c0;
    do {
      uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      while( true ) {
        uVar14 = LZCOUNT(uVar14) | lVar18 << 6;
        lVar16 = uVar14 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + lVar16);
        uVar5 = puVar2[1];
        lVar15 = uVar14 * 0x40;
        puVar3 = (undefined8 *)(*(long *)(lVar17 + 0x38) + lVar15);
        uVar10 = *puVar3;
        uVar6 = puVar3[1];
        uVar19 = puVar3[2];
        uVar7 = *(undefined4 *)((long)puVar3 + 0x1c);
        uStack_68._0_3_ = (undefined3)*(undefined4 *)((long)puVar3 + 0x19);
        uStack_68._3_1_ = (undefined1)uVar7;
        uVar20 = puVar3[6];
        uVar22 = puVar3[7];
        puVar4 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar16);
        uVar24 = puVar3[5];
        uVar23 = puVar3[4];
        uVar21 = puVar3[4];
        uVar8 = *(undefined1 *)(puVar3 + 3);
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x38) + lVar15);
        *puVar2 = uVar10;
        puVar2[1] = uVar6;
        puVar2[2] = uVar19;
        *(undefined1 *)(puVar2 + 3) = uVar8;
        *(undefined4 *)((long)puVar2 + 0x1c) = uVar7;
        *(undefined4 *)((long)puVar2 + 0x19) = uStack_68;
        puVar2[5] = uVar24;
        puVar2[4] = uVar23;
        puVar2[6] = uVar20;
        puVar2[7] = uVar22;
        func_0x000107c61434();
        func_0x000107c61174(uVar10);
        FUN_103765724(uVar6,uVar19,uVar8);
        func_0x000107c61174(uVar21);
        func_0x000107c61434(uVar20);
        if (uVar12 != 0) break;
LAB_10378e9c0:
        do {
          lVar15 = lVar18 + 1;
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10378eadc);
            (*pcVar9)();
          }
          if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_10378eaa8;
          uVar12 = *(ulong *)(lVar1 + lVar15 * 8);
          lVar18 = lVar18 + 1;
        } while (uVar12 == 0);
        uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar18 = lVar15;
      }
    } while( true );
  }
LAB_10378eaa8:
  func_0x000107c61574(lVar17);
  *unaff_x20 = lVar11;
  return;
}



/* Entry: 10378ecb8; end: 10378ef9b;  */

void FUN_10378ecb8(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f91d70,&UNK_10dc0a8e0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10378ed94;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c615f0(uVar12);
        if (uVar8 != 0) break;
LAB_10378ed94:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10378ee28);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10378ee00;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10378ee00:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10378ef9c; end: 10378efaf;  */

void FUN_10378ef9c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112f91d80,&UNK_10dc0a8f8);
  lVar12 = *unaff_x20;
  lVar8 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar12 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar12 + 0x40);
    if (uVar9 == 0) goto LAB_10378f07c;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar14 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar11 * 0x18);
        uVar5 = puVar3[1];
        uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x18);
        uVar6 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(puVar4 + 2) = uVar6;
        *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 8) = uVar13;
        FUN_103765724();
        func_0x000107c61434(uVar13);
        if (uVar9 != 0) break;
LAB_10378f07c:
        do {
          lVar2 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10378f11c);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_10378f0f4;
          uVar9 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar2;
      }
    } while( true );
  }
LAB_10378f0f4:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 10378efb0; end: 10378f11b;  */

void FUN_10378efb0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  func_0x0001000285a8();
  lVar12 = *unaff_x20;
  lVar8 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar12 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar12 + 0x40);
    if (uVar9 == 0) goto LAB_10378f07c;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar14 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar11 * 0x18);
        uVar5 = puVar3[1];
        uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x18);
        uVar6 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(puVar4 + 2) = uVar6;
        *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 8) = uVar13;
        FUN_103765724();
        func_0x000107c61434(uVar13);
        if (uVar9 != 0) break;
LAB_10378f07c:
        do {
          lVar2 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10378f11c);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_10378f0f4;
          uVar9 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar2;
      }
    } while( true );
  }
LAB_10378f0f4:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 10378f11c; end: 10378f12f;  */

void FUN_10378f11c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f91d68,&UNK_10dc0a8d8);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10378f1fc;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_10378f1fc:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10378f290);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10378f268;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10378f268:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10378f130; end: 10378f28f;  */

void FUN_10378f130(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10378f1fc;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_10378f1fc:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10378f290);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10378f268;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10378f268:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10378f290; end: 10378f563;  */

void FUN_10378f290(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  ulong uStack_b8;
  undefined1 auStack_a8 [72];
  
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f90840,&UNK_10dc0a8f0);
  lVar9 = lVar20;
  func_0x000107c60490(lVar20,lVar1,param_2);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_10378f530:
    func_0x000107c61574(lVar20);
    *unaff_x20 = lVar9;
    return;
  }
  puVar19 = (ulong *)(lVar20 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uStack_b8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uStack_b8 = ~(-1L << (uVar15 & 0x3f));
  }
  uStack_b8 = uStack_b8 & *puVar19;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uStack_b8 == 0) {
      do {
        lVar18 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10378f560);
          (*pcVar8)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
            if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
              *puVar19 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar19,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar20 + 0x10) = 0;
          }
          goto LAB_10378f530;
        }
        uStack_b8 = puVar19[lVar18];
        lVar12 = lVar12 + 1;
      } while (uStack_b8 == 0);
      uVar11 = (uStack_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_b8 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uStack_b8 = uStack_b8 - 1 & uStack_b8;
    }
    else {
      uVar11 = (uStack_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_b8 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uStack_b8 = uStack_b8 - 1 & uStack_b8;
      lVar18 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar18 << 6;
    puVar13 = (undefined8 *)(*(long *)(lVar20 + 0x30) + uVar11 * 0x10);
    uVar2 = *puVar13;
    uVar4 = puVar13[1];
    puVar13 = (undefined8 *)(*(long *)(lVar20 + 0x38) + uVar11 * 0x18);
    uVar3 = *puVar13;
    uVar5 = puVar13[1];
    uVar6 = *(undefined1 *)(puVar13 + 2);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x00010376df2c(uVar3,uVar5,uVar6);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    puVar10 = auStack_a8;
    func_0x000107c5fb58(puVar10,uVar2,uVar4);
    func_0x000107c606a8();
    uVar17 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar10 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar16 >> 6;
    uVar11 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar7 = false;
      uVar11 = 0x3f - uVar17 >> 6;
      do {
        uVar16 = uVar14 + 1;
        if ((uVar16 == uVar11) && (bVar7)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10378f564);
          (*pcVar8)();
        }
        uVar14 = 0;
        if (uVar16 != uVar11) {
          uVar14 = uVar16;
        }
        bVar7 = (bool)(uVar16 == uVar11 | bVar7);
        uVar16 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    puVar13 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x10);
    *puVar13 = uVar2;
    puVar13[1] = uVar4;
    puVar13 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 0x18);
    *puVar13 = uVar3;
    puVar13[1] = uVar5;
    *(undefined1 *)(puVar13 + 2) = uVar6;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar18;
  } while( true );
}



/* Entry: 10378f564; end: 10378f577;  */

void FUN_10378f564(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0x112f91d78;
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f91d78,&UNK_10dc0aef0);
  lVar7 = lVar20;
  func_0x000107c60490(lVar20,lVar1,param_2,uVar6);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_103790424:
    func_0x000107c61574(lVar20);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar20 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar19 = uVar19 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar11 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103790454);
          (*pcVar5)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar19 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
            if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar19 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar20 + 0x10) = 0;
          }
          goto LAB_103790424;
        }
        uVar19 = puVar18[lVar17];
        lVar11 = lVar11 + 1;
      } while (uVar19 == 0);
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    puVar14 = (undefined8 *)(*(long *)(lVar20 + 0x30) + uVar10 * 0x18);
    uVar6 = *puVar14;
    uVar2 = puVar14[1];
    bVar3 = *(byte *)(puVar14 + 2);
    uVar21 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar10 * 8);
    if ((param_2 & 1) == 0) {
      FUN_103765724(uVar6,uVar2,bVar3);
      func_0x000107c61434(uVar21);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
LAB_103790334:
      func_0x000107c60690(uVar8);
      puVar9 = auStack_a8;
      func_0x000107c5fb58(puVar9,uVar6,uVar2);
    }
    else {
      if (bVar3 == 2) {
        uVar8 = 2;
        goto LAB_103790334;
      }
      puVar9 = (undefined1 *)0x3;
      func_0x000107c60690();
    }
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar12 = uVar15 >> 6;
    uVar10 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar4 = false;
      uVar10 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar12 + 1;
        if ((uVar15 == uVar10) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103790458);
          (*pcVar5)();
        }
        uVar12 = 0;
        if (uVar15 != uVar10) {
          uVar12 = uVar15;
        }
        bVar4 = (bool)(uVar15 == uVar10 | bVar4);
        uVar15 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar14 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x18);
    *puVar14 = uVar6;
    puVar14[1] = uVar2;
    *(byte *)(puVar14 + 2) = bVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar21;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Entry: 10378f578; end: 10378f8bb;  */

void FUN_10378f578(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uStack_e8;
  undefined1 auStack_c0 [80];
  
  lVar24 = *unaff_x20;
  lVar1 = *(long *)(lVar24 + 0x18);
  if (*(long *)(lVar24 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f91e28,&UNK_10dc0aa48);
  lVar11 = lVar24;
  func_0x000107c60490(lVar24,lVar1,param_2);
  if (*(long *)(lVar24 + 0x10) == 0) {
LAB_10378f884:
    func_0x000107c61574(lVar24);
    *unaff_x20 = lVar11;
    return;
  }
  puVar16 = (ulong *)(lVar24 + 0x40);
  uVar17 = 1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
  uStack_e8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar24 + 0x20) & 0x3f) < 6) {
    uStack_e8 = ~(-1L << (uVar17 & 0x3f));
  }
  uStack_e8 = uStack_e8 & *puVar16;
  lVar1 = lVar11 + 0x40;
  lVar14 = 0;
  do {
    if (uStack_e8 == 0) {
      do {
        lVar23 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10378f8b8);
          (*pcVar10)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar23) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
            if ((*(byte *)(lVar24 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar24 + 0x10) = 0;
          }
          goto LAB_10378f884;
        }
        uStack_e8 = puVar16[lVar23];
        lVar14 = lVar14 + 1;
      } while (uStack_e8 == 0);
      uVar13 = (uStack_e8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_e8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uStack_e8 = uStack_e8 - 1 & uStack_e8;
    }
    else {
      uVar13 = (uStack_e8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_e8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uStack_e8 = uStack_e8 - 1 & uStack_e8;
      lVar23 = lVar14;
    }
    uVar13 = LZCOUNT(uVar13) | lVar23 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar24 + 0x30) + uVar13 * 0x10);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar24 + 0x38) + uVar13 * 0x40);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    uVar21 = puVar2[2];
    uVar7 = *(undefined1 *)(puVar2 + 3);
    uVar20 = puVar2[4];
    uVar8 = *(undefined1 *)(puVar2 + 5);
    uVar22 = puVar2[6];
    uVar25 = puVar2[7];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar5);
      func_0x000107c61174(uVar4);
      FUN_103765724(uVar6,uVar21,uVar7);
      func_0x000107c61174(uVar20);
      func_0x000107c61434(uVar22);
    }
    func_0x000107c6068c(auStack_c0,*(undefined8 *)(lVar11 + 0x28));
    puVar12 = auStack_c0;
    func_0x000107c5fb58(puVar12,uVar3,uVar5);
    func_0x000107c606a8();
    uVar19 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar18 = (ulong)puVar12 & (uVar19 ^ 0xffffffffffffffff);
    uVar15 = uVar18 >> 6;
    uVar13 = -1L << (uVar18 & 0x3f) & (*(ulong *)(lVar1 + uVar15 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar19 >> 6;
      do {
        uVar18 = uVar15 + 1;
        if ((uVar18 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10378f8bc);
          (*pcVar10)();
        }
        uVar15 = 0;
        if (uVar18 != uVar13) {
          uVar15 = uVar18;
        }
        bVar9 = (bool)(uVar18 == uVar13 | bVar9);
        uVar18 = *(ulong *)(lVar1 + uVar15 * 8);
      } while (uVar18 == 0xffffffffffffffff);
      uVar18 = ~uVar18;
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar15 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar18 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar15) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar1 + uVar15);
    puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar13 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar13 * 0x40);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    puVar2[2] = uVar21;
    *(undefined1 *)(puVar2 + 3) = uVar7;
    puVar2[4] = uVar20;
    *(undefined1 *)(puVar2 + 5) = uVar8;
    puVar2[6] = uVar22;
    puVar2[7] = uVar25;
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    lVar14 = lVar23;
  } while( true );
}



/* Entry: 10378f8bc; end: 103790153;  */

void FUN_10378f8bc(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *unaff_x20;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong *puVar23;
  ulong uStack_d0;
  undefined1 auStack_a8 [72];
  
  lVar21 = *unaff_x20;
  lVar1 = *(long *)(lVar21 + 0x18);
  if (*(long *)(lVar21 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f91d58,&UNK_10dc0a8c0);
  lVar10 = lVar21;
  func_0x000107c60490(lVar21,lVar1,param_2);
  if (*(long *)(lVar21 + 0x10) == 0) {
LAB_10378fbb4:
    func_0x000107c61574(lVar21);
    *unaff_x20 = lVar10;
    return;
  }
  puVar23 = (ulong *)(lVar21 + 0x40);
  uVar16 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uStack_d0 = 0xffffffffffffffff;
  if ((*(byte *)(lVar21 + 0x20) & 0x3f) < 6) {
    uStack_d0 = ~(-1L << (uVar16 & 0x3f));
  }
  uStack_d0 = uStack_d0 & *puVar23;
  lVar1 = lVar10 + 0x40;
  lVar13 = 0;
  do {
    if (uStack_d0 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10378fbe4);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
            if ((*(byte *)(lVar21 + 0x20) & 0x3f) < 6) {
              *puVar23 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar23,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar21 + 0x10) = 0;
          }
          goto LAB_10378fbb4;
        }
        uStack_d0 = puVar23[lVar19];
        lVar13 = lVar13 + 1;
      } while (uStack_d0 == 0);
      uVar12 = (uStack_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_d0 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_d0 = uStack_d0 - 1 & uStack_d0;
    }
    else {
      uVar12 = (uStack_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_d0 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_d0 = uStack_d0 - 1 & uStack_d0;
      lVar19 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar19 << 6;
    puVar14 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar12 * 0x10);
    uVar2 = *puVar14;
    uVar4 = puVar14[1];
    puVar14 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar12 * 0x30);
    uVar3 = *puVar14;
    uVar5 = puVar14[1];
    uVar22 = puVar14[2];
    uVar6 = *(undefined1 *)(puVar14 + 3);
    uVar20 = puVar14[4];
    uVar7 = *(undefined1 *)(puVar14 + 5);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar3);
      FUN_103765724(uVar5,uVar22,uVar6);
      func_0x000107c61174(uVar20);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar10 + 0x28));
    puVar11 = auStack_a8;
    func_0x000107c5fb58(puVar11,uVar2,uVar4);
    func_0x000107c606a8();
    uVar18 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar11 & (uVar18 ^ 0xffffffffffffffff);
    uVar15 = uVar17 >> 6;
    uVar12 = -1L << (uVar17 & 0x3f) & (*(ulong *)(lVar1 + uVar15 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar18 >> 6;
      do {
        uVar17 = uVar15 + 1;
        if ((uVar17 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10378fbe8);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar17 != uVar12) {
          uVar15 = uVar17;
        }
        bVar8 = (bool)(uVar17 == uVar12 | bVar8);
        uVar17 = *(ulong *)(lVar1 + uVar15 * 8);
      } while (uVar17 == 0xffffffffffffffff);
      uVar17 = ~uVar17;
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar17 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar15) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar1 + uVar15);
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
    *puVar14 = uVar2;
    puVar14[1] = uVar4;
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar12 * 0x30);
    *puVar14 = uVar3;
    puVar14[1] = uVar5;
    puVar14[2] = uVar22;
    *(undefined1 *)(puVar14 + 3) = uVar6;
    puVar14[4] = uVar20;
    *(undefined1 *)(puVar14 + 5) = uVar7;
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Entry: 103790154; end: 103790167;  */

void FUN_103790154(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0x112f91d80;
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f91d80,&UNK_10dc0a8f8);
  lVar7 = lVar20;
  func_0x000107c60490(lVar20,lVar1,param_2,uVar6);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_103790424:
    func_0x000107c61574(lVar20);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar20 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar19 = uVar19 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar11 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103790454);
          (*pcVar5)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar19 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
            if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar19 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar20 + 0x10) = 0;
          }
          goto LAB_103790424;
        }
        uVar19 = puVar18[lVar17];
        lVar11 = lVar11 + 1;
      } while (uVar19 == 0);
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    puVar14 = (undefined8 *)(*(long *)(lVar20 + 0x30) + uVar10 * 0x18);
    uVar6 = *puVar14;
    uVar2 = puVar14[1];
    bVar3 = *(byte *)(puVar14 + 2);
    uVar21 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar10 * 8);
    if ((param_2 & 1) == 0) {
      FUN_103765724(uVar6,uVar2,bVar3);
      func_0x000107c61434(uVar21);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
LAB_103790334:
      func_0x000107c60690(uVar8);
      puVar9 = auStack_a8;
      func_0x000107c5fb58(puVar9,uVar6,uVar2);
    }
    else {
      if (bVar3 == 2) {
        uVar8 = 2;
        goto LAB_103790334;
      }
      puVar9 = (undefined1 *)0x3;
      func_0x000107c60690();
    }
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar12 = uVar15 >> 6;
    uVar10 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar4 = false;
      uVar10 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar12 + 1;
        if ((uVar15 == uVar10) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103790458);
          (*pcVar5)();
        }
        uVar12 = 0;
        if (uVar15 != uVar10) {
          uVar12 = uVar15;
        }
        bVar4 = (bool)(uVar15 == uVar10 | bVar4);
        uVar15 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar14 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x18);
    *puVar14 = uVar6;
    puVar14[1] = uVar2;
    *(byte *)(puVar14 + 2) = bVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar21;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Entry: 103790168; end: 103790457;  */

void FUN_103790168(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_a8 [72];
  
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar20;
  func_0x000107c60490(lVar20,lVar1,param_2,param_3);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_103790424:
    func_0x000107c61574(lVar20);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar20 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar19 = uVar19 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar11 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103790454);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar19 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
            if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar19 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar20 + 0x10) = 0;
          }
          goto LAB_103790424;
        }
        uVar19 = puVar18[lVar17];
        lVar11 = lVar11 + 1;
      } while (uVar19 == 0);
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    puVar14 = (undefined8 *)(*(long *)(lVar20 + 0x30) + uVar10 * 0x18);
    uVar2 = *puVar14;
    uVar3 = puVar14[1];
    bVar4 = *(byte *)(puVar14 + 2);
    uVar21 = *(undefined8 *)(*(long *)(lVar20 + 0x38) + uVar10 * 8);
    if ((param_2 & 1) == 0) {
      FUN_103765724(uVar2,uVar3,bVar4);
      func_0x000107c61434(uVar21);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
LAB_103790334:
      func_0x000107c60690(uVar8);
      puVar9 = auStack_a8;
      func_0x000107c5fb58(puVar9,uVar2,uVar3);
    }
    else {
      if (bVar4 == 2) {
        uVar8 = 2;
        goto LAB_103790334;
      }
      puVar9 = (undefined1 *)0x3;
      func_0x000107c60690();
    }
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar12 = uVar15 >> 6;
    uVar10 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar12 + 1;
        if ((uVar15 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103790458);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar15 != uVar10) {
          uVar12 = uVar15;
        }
        bVar5 = (bool)(uVar15 == uVar10 | bVar5);
        uVar15 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar14 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x18);
    *puVar14 = uVar2;
    puVar14[1] = uVar3;
    *(byte *)(puVar14 + 2) = bVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar21;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Entry: 103790458; end: 10379046b;  */

void FUN_103790458(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0x112f91d68;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112f91d68,&UNK_10dc0a8d8);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1037906cc:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1037906fc);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1037906cc;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103790700);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10379046c; end: 1037906ff;  */

void FUN_10379046c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1037906cc:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1037906fc);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1037906cc;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103790700);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103790700; end: 1037907c3;  */

void FUN_103790700(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1037907c4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1037907c4; end: 103790afb;  */

undefined * FUN_1037907c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1037908cc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f90600;
    func_0x0001000285a8(0x112f90600,&UNK_10dc08ae0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_110690d48);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103790afc; end: 103790fdb;  */

undefined * FUN_103790afc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103790c40);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112dc78d0;
    func_0x0001000285a8(0x112dc78d0,&UNK_10d9881c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dc78d8;
    func_0x0001000285a8(0x112dc78d8,&UNK_10d9881c8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103790fdc; end: 1037913c3;  */

void FUN_103790fdc(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    uVar12 = *(ulong *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = *param_3;
    func_0x000107c61434(uVar12);
    func_0x000107c61174();
    uVar14 = uVar13;
    uVar5 = uVar12;
    FUN_10378de20(uVar13,uVar12,&UNK_1000292e8);
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_10379130c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103791310);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      FUN_10379046c(lVar1,param_2 & 1,0x112f91bd0,&UNK_10dc0a600);
      uVar14 = uVar13;
      uVar8 = uVar12;
      FUN_10378de20(uVar13,uVar12,&UNK_1000292e8);
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_1037910b4:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037910c4);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_10378f130(0x112f91bd0,&UNK_10dc0a600);
    }
    if ((uVar5 & 1) != 0) {
LAB_1037910cc:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar6 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar11);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar13;
      uStack_78 = uVar12;
      func_0x000107c603d0(&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037913c4);
      (*pcVar3)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar14 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar14 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar13;
    puVar2[1] = uVar12;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar14 * 8) = uVar11;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_103791310:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103791314);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar6 != 1) {
      puVar15 = (undefined8 *)(param_1 + 0x48);
      uVar14 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103791318);
          (*pcVar3)();
        }
        uVar13 = puVar15[-2];
        uVar12 = puVar15[-1];
        uVar11 = *puVar15;
        lVar10 = *param_3;
        func_0x000107c61434(uVar12);
        func_0x000107c61174();
        uVar5 = uVar13;
        uVar8 = uVar12;
        FUN_10378de20(uVar13,uVar12,&UNK_1000292e8);
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_10379130c;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          FUN_10379046c(lVar1,1,0x112f91bd0,&UNK_10dc0a600);
          uVar5 = uVar13;
          uVar9 = uVar12;
          FUN_10378de20(uVar13,uVar12,&UNK_1000292e8);
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_1037910b4;
        }
        if ((uVar8 & 1) != 0) goto LAB_1037910cc;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
        *puVar2 = uVar13;
        puVar2[1] = uVar12;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar11;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_103791310;
        uVar14 = uVar14 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar15 = puVar15 + 3;
      } while (uVar6 != uVar14);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 1037913c4; end: 1037914cf;  */

void FUN_1037913c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *unaff_x20;
  lVar4 = 0;
  FUN_10378d110();
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037914c0);
    (*pcVar3)();
  }
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = lVar8 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  func_0x000107c61408(lVar7,lVar2,lVar4);
  lVar4 = param_3 - lVar2;
  if (SBORROW8(param_3,lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037914c4);
    (*pcVar3)();
  }
  if (lVar4 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037914c8);
      (*pcVar3)();
    }
    uVar6 = lVar7 + lVar9 * param_3;
    uVar5 = lVar1 + lVar9 * param_2;
    if (uVar6 < uVar5 || uVar5 + (*(long *)(lVar8 + 0x10) - param_2) * lVar9 <= uVar6) {
      func_0x000107c61414();
    }
    else if (uVar6 != uVar5) {
      func_0x000107c61410();
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037914cc);
      (*pcVar3)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (0 < lVar9 * param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037914d0);
    (*pcVar3)();
  }
  return;
}



/* Entry: 1037914d0; end: 10379158b;  */

void FUN_1037914d0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10379157c);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103791580);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103791584);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_103762b0c();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1037913c4(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10379158c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103791588);
  (*pcVar2)();
}



/* Entry: 10379158c; end: 103791653;  */

ulong FUN_10379158c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 103791654; end: 103791693;  */

void FUN_103791654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a864;
  func_0x000107c61520(&UNK_10dc0a864,&UNK_110691bb0);
  puRam0000000112f91b38 = puVar1;
  return;
}



/* Entry: 103791694; end: 1037916d3;  */

undefined8 FUN_103791694(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1037916d4; end: 10379170b;  */

undefined8 * FUN_1037916d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10379170c; end: 103791777;  */

ulong FUN_10379170c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103791778; end: 1037917b7;  */

void FUN_103791778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a814;
  func_0x000107c61520(&UNK_10dc0a814,&UNK_110691b38);
  puRam0000000112f91bc8 = puVar1;
  return;
}



/* Entry: 1037917b8; end: 103791887;  */

void FUN_1037917b8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103791888; end: 1037918c7;  */

void FUN_103791888(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a7ec;
  func_0x000107c61520(&UNK_10dc0a7ec,&UNK_110691aa0);
  puRam0000000112f91bf0 = puVar1;
  return;
}



/* Entry: 1037918c8; end: 103791927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037918c8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f919b0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112f919b0,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  func_0x000107c61434();
  return;
}



/* Entry: 103791928; end: 1037919bb;  */

undefined8 FUN_103791928(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f91758;
  func_0x0001000285a8(0x112f91758,&UNK_10dc09fa8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1037919bc; end: 1037919eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037919bc(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  FUN_10378d110();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_10378d110();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  FUN_10378703c(unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff)),
                auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = _DAT_112f919b0;
  func_0x000107c61428(lVar3 + _DAT_112f919b0,auStack_68,0x21,0);
  uVar5 = *(ulong *)(lVar3 + lVar2);
  uVar4 = uVar5;
  func_0x000107c61558();
  *(ulong *)(lVar3 + lVar2) = uVar5;
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
    FUN_103762b0c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(lVar3 + lVar2) = uVar1;
  }
  uVar4 = *(ulong *)(uVar1 + 0x10);
  uVar5 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar4) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_103762b0c(uVar5,uVar4 + 1,1,uVar1);
  }
  *(ulong *)(uVar5 + 0x10) = uVar4 + 1;
  func_0x000103791978(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      uVar5 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar6 + 0x48) * uVar4);
  *(ulong *)(lVar3 + lVar2) = uVar5;
  func_0x000107c614a8(auStack_68);
  if (4 < uVar4) {
    func_0x000107c61428(lVar3 + lVar2,auStack_68,0x21,0);
    FUN_1037914d0(0,uVar4 - 4);
    func_0x000107c614a8(auStack_68);
  }
  return;
}



/* Entry: 1037919ec; end: 103791a2f;  */

void FUN_1037919ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103791a30; end: 103791a37;  */

void FUN_103791a30(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*param_1);
  return;
}



/* Entry: 103791a38; end: 103791a9f;  */

undefined8 * FUN_103791a38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 103791aa0; end: 103791c8f;  */

int FUN_103791aa0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103791c90; end: 103791cff;  */

undefined8 * FUN_103791c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103791d00; end: 103791d97;  */

int FUN_103791d00(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103791d98; end: 103791dd7;  */

void FUN_103791d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a784;
  func_0x000107c61520(&UNK_10dc0a784,&UNK_110691b38);
  puRam0000000112f91c20 = puVar1;
  return;
}



/* Entry: 103791dd8; end: 103791ddb;  */

void FUN_103791dd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a6e4;
  func_0x000107c61520(&UNK_10dc0a6e4,&UNK_110691b38);
  puRam0000000112f91c28 = puVar1;
  return;
}



/* Entry: 103791ddc; end: 103791e1b;  */

void FUN_103791ddc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a6e4;
  func_0x000107c61520(&UNK_10dc0a6e4,&UNK_110691b38);
  puRam0000000112f91c28 = puVar1;
  return;
}



/* Entry: 103791e1c; end: 103791e1f;  */

void FUN_103791e1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a6bc;
  func_0x000107c61520(&UNK_10dc0a6bc,&UNK_110691b38);
  puRam0000000112f91c30 = puVar1;
  return;
}



/* Entry: 103791e20; end: 103791e5f;  */

void FUN_103791e20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a6bc;
  func_0x000107c61520(&UNK_10dc0a6bc,&UNK_110691b38);
  puRam0000000112f91c30 = puVar1;
  return;
}



/* Entry: 103791e60; end: 103791e63;  */

void FUN_103791e60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a694;
  func_0x000107c61520(&UNK_10dc0a694,&UNK_110691bb0);
  puRam0000000112f91c38 = puVar1;
  return;
}



/* Entry: 103791e64; end: 103791ea3;  */

void FUN_103791e64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a694;
  func_0x000107c61520(&UNK_10dc0a694,&UNK_110691bb0);
  puRam0000000112f91c38 = puVar1;
  return;
}



/* Entry: 103791ea4; end: 103791ea7;  */

void FUN_103791ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a66c;
  func_0x000107c61520(&UNK_10dc0a66c,&UNK_110691bb0);
  puRam0000000112f91c40 = puVar1;
  return;
}



/* Entry: 103791ea8; end: 103791f27;  */

void FUN_103791ea8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a66c;
  func_0x000107c61520(&UNK_10dc0a66c,&UNK_110691bb0);
  puRam0000000112f91c40 = puVar1;
  return;
}



/* Entry: 103791f28; end: 103791f67;  */

void FUN_103791f28(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103791f68; end: 1037920bf;  */

int FUN_103791f68(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103791fe4;
        goto LAB_103791fc8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103791fc8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103791fe4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1037920c0; end: 1037920ff;  */

void FUN_1037920c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91d88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a9c8;
  func_0x000107c61520(&UNK_10dc0a9c8,&UNK_110691c48);
  puRam0000000112f91d88 = puVar1;
  return;
}



/* Entry: 103792100; end: 103792103;  */

void FUN_103792100(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a928;
  func_0x000107c61520(&UNK_10dc0a928,&UNK_110691c48);
  puRam0000000112f91d90 = puVar1;
  return;
}



/* Entry: 103792104; end: 103792143;  */

void FUN_103792104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a928;
  func_0x000107c61520(&UNK_10dc0a928,&UNK_110691c48);
  puRam0000000112f91d90 = puVar1;
  return;
}



/* Entry: 103792144; end: 103792147;  */

void FUN_103792144(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a900;
  func_0x000107c61520(&UNK_10dc0a900,&UNK_110691c48);
  puRam0000000112f91d98 = puVar1;
  return;
}



/* Entry: 103792148; end: 103792187;  */

void FUN_103792148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a900;
  func_0x000107c61520(&UNK_10dc0a900,&UNK_110691c48);
  puRam0000000112f91d98 = puVar1;
  return;
}



/* Entry: 103792188; end: 103792207;  */

undefined1 FUN_103792188(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103792208; end: 10379225b;  */

void FUN_103792208(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000013,0x800000010f164130);
  func_0x000107c606a8();
  return;
}



/* Entry: 10379225c; end: 103792277;  */

void FUN_10379225c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000013,0x800000010f164130);
  return;
}



/* Entry: 103792278; end: 1037922c7;  */

void FUN_103792278(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0xd000000000000013,0x800000010f164130);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037922c8; end: 103792333;  */

void FUN_1037922c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}


