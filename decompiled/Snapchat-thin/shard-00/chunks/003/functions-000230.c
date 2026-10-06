/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005528f8; end: 10055291b;  */

void FUN_1005528f8(long param_1)

{
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055291c; end: 10055296b;  */

void FUN_10055291c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110a75400;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[4] = param_4[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10055296c; end: 1005529ef;  */

void FUN_10055296c(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005529f0; end: 100552a27;  */

void FUN_1005529f0(void)

{
  return;
}



/* Entry: 100552a28; end: 100552a4f;  */

long FUN_100552a28(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100552a50; end: 100552a5f;  */

void FUN_100552a50(void)

{
  return;
}



/* Entry: 100552a60; end: 100552ab3;  */

void FUN_100552a60(void)

{
  func_0x000107c610f4(PTR_PTR_1126b89b8);
  func_0x000107c49470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100552ab4; end: 100552afb; -[SCUserInfoEpochTimeMsProperty initWithValue:] */

void FUN_100552ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8340;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100552afc; end: 100552b67; +[SCUserInfoProperty epochTimeMsPropertyWithEpochTimeMsProperty:] */

void FUN_100552afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b8998;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100552b68; end: 100552b7f;  */

void FUN_100552b68(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 100552b80; end: 100552c0b;  */

ulong FUN_100552b80(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uStack_5c;
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined1 uStack_31;
  
  FUN_1004b5428(auStack_58);
  if ((bStack_40 & 1) == 0) {
    uVar4 = param_3 & 0xffffff0000000000;
    uVar3 = param_3;
    uVar5 = param_3;
  }
  else {
    puVar2 = &uStack_31;
    FUN_100552cc0(puVar2,auStack_58,&uStack_5c);
    bVar1 = (int)puVar2 == 0;
    uVar4 = 0;
    if (bVar1) {
      uStack_5c = (uint)param_3;
      uVar4 = param_3 & 0xffffff0000000000;
    }
    uVar5 = (ulong)uStack_5c;
    uVar3 = 0x100000000;
    if (bVar1) {
      uVar3 = param_3;
    }
  }
  FUN_1001148fc(auStack_58);
  return uVar3 & 0xff00000000 | uVar4 | uVar5 & 0xffffffff;
}



/* Entry: 100552c0c; end: 100552cbf;  */

undefined8 * FUN_100552c0c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[0xf] = &PTR_DAT_1108df740;
  param_1[0x15] = 0;
  *param_1 = &PTR_SUB_1108df718;
  FUN_1000daf80(param_1,&PTR_PTR_1108df758,param_1 + 2);
  *param_1 = &PTR_SUB_1108df718;
  param_1[0xf] = &PTR_DAT_1108df740;
  FUN_100552d4c(param_1 + 2,param_2,param_3 | 8);
  return param_1;
}



/* Entry: 100552cc0; end: 100552d4b;  */

undefined8 FUN_100552cc0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint extraout_w8;
  ulong extraout_x8;
  undefined8 uVar1;
  undefined4 uStack_134;
  undefined1 auStack_130 [272];
  
  FUN_100552c0c(auStack_130,param_2,8);
  func_0x000107c60cb8(auStack_130,&uStack_134);
  func_0x000100552f18();
  if ((extraout_x8 & 5) == 0) {
    FUN_100552f2c(auStack_130);
    func_0x000100552f18();
    if ((extraout_w8 >> 1 & 1) != 0) {
      *param_3 = uStack_134;
      uVar1 = 1;
      goto LAB_100552d10;
    }
  }
  uVar1 = 0;
LAB_100552d10:
  func_0x0001005530d4(auStack_130);
  return uVar1;
}



/* Entry: 100552d4c; end: 100552dc7;  */

undefined8 * FUN_100552d4c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c60d1c();
  *puVar1 = &PTR_DAT_11088d7b0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_3;
  FUN_100552dc8();
  return param_1;
}



/* Entry: 100552dc8; end: 100552def;  */

void FUN_100552dc8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c60ca4(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = (ulong)*(char *)(param_1 + 0x57);
  lVar3 = param_1 + 0x40;
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(ulong *)(param_1 + 0x20) = lVar3 + uVar2;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    if (*(char *)(param_1 + 0x57) < '\0') {
      lVar1 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar1 = 0x16;
    }
    FUN_1001548a8(param_1 + 0x40,lVar1);
    lVar1 = (long)*(char *)(param_1 + 0x57);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(long *)(param_1 + 0x38) = lVar3 + lVar1;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      for (; uVar2 >> 0x1f != 0; uVar2 = uVar2 - 0x7fffffff) {
        lVar3 = lVar3 + 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar2 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar3 + uVar2;
      }
    }
  }
  return;
}



/* Entry: 100552df0; end: 100552ebb;  */

void FUN_100552df0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = (ulong)*(char *)(param_1 + 0x57);
  lVar3 = param_1 + 0x40;
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(ulong *)(param_1 + 0x20) = lVar3 + uVar2;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    if (*(char *)(param_1 + 0x57) < '\0') {
      lVar1 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar1 = 0x16;
    }
    FUN_1001548a8(param_1 + 0x40,lVar1);
    lVar1 = (long)*(char *)(param_1 + 0x57);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(long *)(param_1 + 0x38) = lVar3 + lVar1;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      for (; uVar2 >> 0x1f != 0; uVar2 = uVar2 - 0x7fffffff) {
        lVar3 = lVar3 + 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar2 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar3 + uVar2;
      }
    }
  }
  return;
}



/* Entry: 100552ebc; end: 100552f2b;  */

void FUN_100552ebc(void)

{
  return;
}



/* Entry: 100552f2c; end: 100553053;  */

long * FUN_100552f2c(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [15];
  char cStack_31;
  
  func_0x000107c60cb0(&cStack_31,param_1,1);
  if (cStack_31 == '\x01') {
    func_0x000107c60c08(auStack_40,(long)param_1 + *(long *)(*param_1 + -0x18));
    FUN_100152084(auStack_40);
    func_0x000107c32390();
    while( true ) {
      uVar1 = (uint)*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      FUN_100610bac();
      if (uVar1 == 0xffffffff) break;
      if (((uVar1 >> 7 & 1) != 0) ||
         ((*(uint *)(*(long *)(unaff_x20 + 0x10) + (ulong)(uVar1 & 0x7f) * 4) >> 0xe & 1) == 0)) {
        uVar2 = 0;
        goto LAB_100552fd0;
      }
      FUN_100624f9c(*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28));
    }
    uVar2 = 2;
LAB_100552fd0:
    func_0x000100456940((long)param_1 + *(long *)(*param_1 + -0x18),uVar2);
  }
  return param_1;
}



/* Entry: 100553054; end: 10055305b;  */

void FUN_100553054(void)

{
  return;
}



/* Entry: 10055305c; end: 100553103;  */

void FUN_10055305c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11088d7b0;
  func_0x000107c60ca0(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_110346568)(param_1);
  return;
}



/* Entry: 100553104; end: 100553123;  */

void FUN_100553104(void)

{
  return;
}



/* Entry: 100553124; end: 100553147;  */

void FUN_100553124(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100553148; end: 100553167;  */

undefined1 * FUN_100553148(void)

{
  long in_stack_00000a38;
  
  if (in_stack_00000a38 != 0) {
    func_0x0001000df548();
  }
  return &stack0x00000a30;
}



/* Entry: 100553168; end: 10055318b;  */

void FUN_100553168(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055318c; end: 1005531d3;  */

void FUN_10055318c(void)

{
  return;
}



/* Entry: 1005531d4; end: 1005532cb;  */

undefined8 *
FUN_1005531d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  *param_1 = &PTR_DAT_110a62188;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001005531c4();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001005531c4();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001005531c4();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[8] = param_5[1];
  param_1[7] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001005531c4();
    } while (extraout_w10_02 != 0);
  }
  FUN_1005532cc(param_1 + 9,param_1[5] + 0x40);
  return param_1;
}



/* Entry: 1005532cc; end: 1005532eb;  */

undefined1  [16] FUN_1005532cc(undefined8 param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  long alStack_70 [3];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined1 auStack_28 [8];
  undefined **ppuVar10;
  
  plVar8 = alStack_70;
  uVar6 = param_1;
  uVar12 = param_1;
  func_0x0001005532d4();
  FUN_10055336c();
  uStack_48 = uVar6;
  uStack_40 = uVar12;
  FUN_10055336c();
  puVar7 = &uStack_48;
  puVar13 = &uStack_58;
  uStack_58 = param_1;
  uStack_50 = uVar12;
  FUN_1005533f4();
  ppuVar14 = &puStack_38;
  puStack_38 = puVar7;
  puStack_30 = puVar13;
  FUN_1005542b8(alStack_70,ppuVar14,auStack_28);
  FUN_1005542e8();
  func_0x000100554308();
  if ((bool)in_ZR) {
    auVar20._8_8_ = ppuVar14;
    auVar20._0_8_ = plVar8;
    return auVar20;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  if (plVar8[1] - *plVar8 != 0x10) {
    ppuVar9 = (undefined **)0x20;
    func_0x000107c60e30();
    func_0x000107c29ed0();
    ppuVar15 = &PTR_DAT_110a7a910;
    func_0x000107c60e54(ppuVar9,&PTR_DAT_110a7a910,&DAT_108848184);
    func_0x000107c60e40();
    func_0x000107c34088();
    ppuVar10 = ppuVar9;
    FUN_1004a5d98();
    iVar5 = (int)ppuVar10;
    uStack_c8 = extraout_x8;
    FUN_100553518();
    cVar3 = iVar5 < 0;
    uVar4 = iVar5 == 0;
    cVar2 = '\0';
    ppuVar10 = ppuVar15;
    if ((bool)uVar4) {
      ppuVar10 = ppuVar9;
      ppuVar9 = ppuVar15;
    }
    FUN_100553540(auStack_f8,ppuVar10,ppuVar10 + 2);
    FUN_1005535dc();
    lVar18 = extraout_x11;
    puVar16 = extraout_x10;
    if (cVar3 == cVar2) {
      lVar18 = extraout_x8_00;
      puVar16 = auStack_f8;
    }
    ppuVar15 = ppuVar9 + 2;
    func_0x0001005535f0(auStack_f8,puVar16 + lVar18);
    uStack_d8 = 0x20cdf33f5c44e0a2;
    uStack_e0 = 0x47454b94a1269407;
    puVar7 = &uStack_e0;
    puVar16 = auStack_f8;
    FUN_100553bf0();
    puVar11 = auStack_f8;
    puVar17 = puVar16;
    func_0x000107c60ca0();
    FUN_1004a5f34(uStack_c8);
    if (!(bool)uVar4) {
      func_0x000107c60e78();
      func_0x000107c34790();
      func_0x000107c34794();
      lVar18 = (long)puVar17 - (long)puVar11;
      lVar19 = (long)ppuVar15 - (long)ppuVar9;
      func_0x000107c610b0();
      bVar1 = lVar18 < lVar19;
      if ((int)puVar11 != 0) {
        bVar1 = (int)puVar11 < 0;
      }
      auVar23._1_7_ = 0;
      auVar23[0] = bVar1;
      auVar23._8_8_ = ppuVar9;
      return auVar23;
    }
    auVar22._8_8_ = puVar16;
    auVar22._0_8_ = puVar7;
    return auVar22;
  }
  auVar21._8_8_ = ppuVar14;
  auVar21._0_8_ = 0x10;
  return auVar21;
}



/* Entry: 1005532ec; end: 10055335f;  */

undefined1  [16] FUN_1005532ec(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  long alStack_70 [3];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined1 auStack_28 [8];
  undefined **ppuVar9;
  
  plVar7 = alStack_70;
  uVar11 = param_2;
  func_0x0001005532d4();
  FUN_10055336c();
  uStack_48 = param_1;
  uStack_40 = uVar11;
  FUN_10055336c();
  puVar6 = &uStack_48;
  puVar12 = &uStack_58;
  uStack_58 = param_2;
  uStack_50 = uVar11;
  FUN_1005533f4();
  ppuVar13 = &puStack_38;
  puStack_38 = puVar6;
  puStack_30 = puVar12;
  FUN_1005542b8(alStack_70,ppuVar13,auStack_28);
  FUN_1005542e8();
  func_0x000100554308();
  if ((bool)in_ZR) {
    auVar19._8_8_ = ppuVar13;
    auVar19._0_8_ = plVar7;
    return auVar19;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  if (plVar7[1] - *plVar7 != 0x10) {
    ppuVar8 = (undefined **)0x20;
    func_0x000107c60e30();
    func_0x000107c29ed0();
    ppuVar14 = &PTR_DAT_110a7a910;
    func_0x000107c60e54(ppuVar8,&PTR_DAT_110a7a910,&DAT_108848184);
    func_0x000107c60e40();
    func_0x000107c34088();
    ppuVar9 = ppuVar8;
    FUN_1004a5d98();
    iVar5 = (int)ppuVar9;
    uStack_c8 = extraout_x8;
    FUN_100553518();
    cVar3 = iVar5 < 0;
    uVar4 = iVar5 == 0;
    cVar2 = '\0';
    ppuVar9 = ppuVar14;
    if ((bool)uVar4) {
      ppuVar9 = ppuVar8;
      ppuVar8 = ppuVar14;
    }
    FUN_100553540(auStack_f8,ppuVar9,ppuVar9 + 2);
    FUN_1005535dc();
    lVar17 = extraout_x11;
    puVar15 = extraout_x10;
    if (cVar3 == cVar2) {
      lVar17 = extraout_x8_00;
      puVar15 = auStack_f8;
    }
    ppuVar14 = ppuVar8 + 2;
    func_0x0001005535f0(auStack_f8,puVar15 + lVar17);
    uStack_d8 = 0x20cdf33f5c44e0a2;
    uStack_e0 = 0x47454b94a1269407;
    puVar6 = &uStack_e0;
    puVar15 = auStack_f8;
    FUN_100553bf0();
    puVar10 = auStack_f8;
    puVar16 = puVar15;
    func_0x000107c60ca0();
    FUN_1004a5f34(uStack_c8);
    if (!(bool)uVar4) {
      func_0x000107c60e78();
      func_0x000107c34790();
      func_0x000107c34794();
      lVar17 = (long)puVar16 - (long)puVar10;
      lVar18 = (long)ppuVar14 - (long)ppuVar8;
      func_0x000107c610b0();
      bVar1 = lVar17 < lVar18;
      if ((int)puVar10 != 0) {
        bVar1 = (int)puVar10 < 0;
      }
      auVar22._1_7_ = 0;
      auVar22[0] = bVar1;
      auVar22._8_8_ = ppuVar8;
      return auVar22;
    }
    auVar21._8_8_ = puVar15;
    auVar21._0_8_ = puVar6;
    return auVar21;
  }
  auVar20._8_8_ = ppuVar13;
  auVar20._0_8_ = 0x10;
  return auVar20;
}



/* Entry: 100553360; end: 10055336b;  */

undefined1  [16] FUN_100553360(long *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined **ppuVar7;
  
  if (param_1[1] - *param_1 == 0x10) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = 0x10;
    return auVar15;
  }
  ppuVar6 = (undefined **)0x20;
  func_0x000107c60e30();
  func_0x000107c29ed0();
  ppuVar10 = &PTR_DAT_110a7a910;
  func_0x000107c60e54(ppuVar6,&PTR_DAT_110a7a910,&DAT_108848184);
  func_0x000107c60e40();
  func_0x000107c34088();
  ppuVar7 = ppuVar6;
  FUN_1004a5d98();
  iVar5 = (int)ppuVar7;
  uStack_58 = extraout_x8;
  FUN_100553518();
  cVar3 = iVar5 < 0;
  uVar4 = iVar5 == 0;
  cVar2 = '\0';
  ppuVar7 = ppuVar10;
  if ((bool)uVar4) {
    ppuVar7 = ppuVar6;
    ppuVar6 = ppuVar10;
  }
  FUN_100553540(auStack_88,ppuVar7,ppuVar7 + 2);
  FUN_1005535dc();
  lVar13 = extraout_x11;
  puVar11 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar13 = extraout_x8_00;
    puVar11 = auStack_88;
  }
  ppuVar10 = ppuVar6 + 2;
  func_0x0001005535f0(auStack_88,puVar11 + lVar13);
  uStack_68 = 0x20cdf33f5c44e0a2;
  uStack_70 = 0x47454b94a1269407;
  puVar8 = &uStack_70;
  puVar11 = auStack_88;
  FUN_100553bf0();
  puVar9 = auStack_88;
  puVar12 = puVar11;
  func_0x000107c60ca0();
  FUN_1004a5f34(uStack_58);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    lVar13 = (long)puVar12 - (long)puVar9;
    lVar14 = (long)ppuVar10 - (long)ppuVar6;
    func_0x000107c610b0();
    bVar1 = lVar13 < lVar14;
    if ((int)puVar9 != 0) {
      bVar1 = (int)puVar9 < 0;
    }
    auVar17._1_7_ = 0;
    auVar17[0] = bVar1;
    auVar17._8_8_ = ppuVar6;
    return auVar17;
  }
  auVar16._8_8_ = puVar11;
  auVar16._0_8_ = puVar8;
  return auVar16;
}



/* Entry: 10055336c; end: 100553393;  */

undefined1  [16] FUN_10055336c(undefined8 *param_1)

{
  FUN_100553360();
  return *(undefined1 (*) [16])*param_1;
}



/* Entry: 100553394; end: 1005533f3;  */

undefined1  [16] FUN_100553394(long param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined **ppuVar7;
  
  if (param_1 == 0x10) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = 0x10;
    return auVar15;
  }
  ppuVar6 = (undefined **)0x20;
  func_0x000107c60e30();
  func_0x000107c29ed0();
  ppuVar10 = &PTR_DAT_110a7a910;
  func_0x000107c60e54(ppuVar6,&PTR_DAT_110a7a910,&DAT_108848184);
  func_0x000107c60e40();
  func_0x000107c34088();
  ppuVar7 = ppuVar6;
  FUN_1004a5d98();
  iVar5 = (int)ppuVar7;
  uStack_58 = extraout_x8;
  FUN_100553518();
  cVar3 = iVar5 < 0;
  uVar4 = iVar5 == 0;
  cVar2 = '\0';
  ppuVar7 = ppuVar10;
  if ((bool)uVar4) {
    ppuVar7 = ppuVar6;
    ppuVar6 = ppuVar10;
  }
  FUN_100553540(auStack_88,ppuVar7,ppuVar7 + 2);
  FUN_1005535dc();
  lVar13 = extraout_x11;
  puVar11 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar13 = extraout_x8_00;
    puVar11 = auStack_88;
  }
  ppuVar10 = ppuVar6 + 2;
  func_0x0001005535f0(auStack_88,puVar11 + lVar13);
  uStack_68 = 0x20cdf33f5c44e0a2;
  uStack_70 = 0x47454b94a1269407;
  puVar8 = &uStack_70;
  puVar11 = auStack_88;
  FUN_100553bf0();
  puVar9 = auStack_88;
  puVar12 = puVar11;
  func_0x000107c60ca0();
  FUN_1004a5f34(uStack_58);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    lVar13 = (long)puVar12 - (long)puVar9;
    lVar14 = (long)ppuVar10 - (long)ppuVar6;
    func_0x000107c610b0();
    bVar1 = lVar13 < lVar14;
    if ((int)puVar9 != 0) {
      bVar1 = (int)puVar9 < 0;
    }
    auVar17._1_7_ = 0;
    auVar17[0] = bVar1;
    auVar17._8_8_ = ppuVar6;
    return auVar17;
  }
  auVar16._8_8_ = puVar11;
  auVar16._0_8_ = puVar8;
  return auVar16;
}



/* Entry: 1005533f4; end: 1005534cf;  */

undefined1  [16] FUN_1005533f4(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  lVar10 = param_1;
  FUN_1004a5d98();
  iVar5 = (int)lVar10;
  uStack_38 = extraout_x8;
  FUN_100553518();
  cVar3 = iVar5 < 0;
  uVar4 = iVar5 == 0;
  cVar2 = '\0';
  lVar10 = param_2;
  if ((bool)uVar4) {
    lVar10 = param_1;
    param_1 = param_2;
  }
  FUN_100553540(auStack_68,lVar10,lVar10 + 0x10);
  FUN_1005535dc();
  lVar10 = extraout_x11;
  puVar8 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar10 = extraout_x8_00;
    puVar8 = auStack_68;
  }
  lVar11 = param_1 + 0x10;
  func_0x0001005535f0(auStack_68,puVar8 + lVar10);
  uStack_48 = 0x20cdf33f5c44e0a2;
  uStack_50 = 0x47454b94a1269407;
  puVar6 = &uStack_50;
  puVar8 = auStack_68;
  FUN_100553bf0();
  puVar7 = auStack_68;
  puVar9 = puVar8;
  func_0x000107c60ca0();
  FUN_1004a5f34(uStack_38);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    lVar10 = (long)puVar9 - (long)puVar7;
    lVar11 = lVar11 - param_1;
    func_0x000107c610b0();
    bVar1 = lVar10 < lVar11;
    if ((int)puVar7 != 0) {
      bVar1 = (int)puVar7 < 0;
    }
    auVar13._1_7_ = 0;
    auVar13[0] = bVar1;
    auVar13._8_8_ = param_1;
    return auVar13;
  }
  auVar12._8_8_ = puVar8;
  auVar12._0_8_ = puVar6;
  return auVar12;
}



/* Entry: 1005534d0; end: 100553517;  */

bool FUN_1005534d0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  param_2 = param_2 - param_1;
  param_4 = param_4 - param_3;
  lVar1 = param_4;
  if (param_2 <= param_4) {
    lVar1 = param_2;
  }
  func_0x000107c610b0(param_1,param_3,lVar1);
  bVar2 = param_2 < param_4;
  if ((int)param_1 != 0) {
    bVar2 = (int)param_1 < 0;
  }
  return bVar2;
}



/* Entry: 100553518; end: 10055353f;  */

void FUN_100553518(void)

{
  FUN_1005534d0();
  return;
}



/* Entry: 100553540; end: 100553547;  */

void FUN_100553540(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (long)param_3 - (long)param_2;
  if (uVar3 < 0x7ffffffffffffff7) {
    puVar1 = param_1;
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar3;
    }
    else {
      uVar2 = 0x19;
      if ((uVar3 | 7) != 0x17) {
        uVar2 = (uVar3 | 7) + 1;
      }
      FUN_100033e30();
      param_1[1] = uVar3;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar1 = *param_2;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
    *(undefined1 *)puVar1 = 0;
    return;
  }
  func_0x000104bd47d4();
  return;
}



/* Entry: 100553548; end: 1005535db;  */

void FUN_100553548(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_4 < 0x7ffffffffffffff7) {
    puVar1 = param_1;
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
    }
    else {
      uVar2 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar2 = (param_4 | 7) + 1;
      }
      FUN_100033e30();
      param_1[1] = param_4;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar1 = *param_2;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
    *(undefined1 *)puVar1 = 0;
    return;
  }
  func_0x000104bd47d4();
  return;
}



/* Entry: 1005535dc; end: 1005535f7;  */

void FUN_1005535dc(void)

{
  return;
}



/* Entry: 1005535f8; end: 1005537cf;  */

/* WARNING: Type propagation algorithm not settling */

char * FUN_1005535f8(char *param_1,long param_2,char *param_3,char *param_4,ulong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  undefined8 *extraout_x10;
  long extraout_x11;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar7 = (char *)(long)param_1[0x17];
  if ((long)pcVar7 < 0) {
    pcVar9 = *(char **)param_1;
    pcVar6 = (char *)(param_2 - (long)pcVar9);
    if (param_5 == 0) goto LAB_100553710;
    pcVar7 = *(char **)(param_1 + 8);
    if (pcVar9 <= param_3 && param_3 < pcVar9 + (long)pcVar7 + 1) goto LAB_1005536bc;
    lVar4 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
    uVar5 = lVar4 - (long)pcVar7;
  }
  else {
    pcVar6 = (char *)(param_2 - (long)param_1);
    pcVar9 = param_1;
    if (param_5 == 0) {
LAB_100553710:
      return pcVar6 + (long)pcVar9;
    }
    if (param_1 <= param_3 && param_3 < param_1 + (long)pcVar7 + 1) {
LAB_1005536bc:
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      while( true ) {
        cVar2 = SBORROW8((long)param_3,(long)param_4);
        cVar3 = (long)param_3 - (long)param_4 < 0;
        if (param_3 == param_4) break;
        func_0x000107c60c8c(&uStack_68,(long)*param_3);
        param_3 = param_3 + 1;
      }
      FUN_1005535dc();
      lVar4 = extraout_x11;
      puVar1 = extraout_x10;
      if (cVar3 == cVar2) {
        lVar4 = extraout_x8;
        puVar1 = &uStack_68;
      }
      FUN_100602e94(param_1,param_5,pcVar6,puVar1,(long)puVar1 + lVar4);
      func_0x000107c34790();
      return pcVar6;
    }
    lVar4 = 0x16;
    uVar5 = 0x16 - (long)pcVar7;
  }
  if (uVar5 < param_5) {
    FUN_1000644b8(param_1,lVar4,pcVar7 + (param_5 - lVar4),pcVar7,pcVar6,0,param_5);
    pcVar9 = *(char **)param_1;
    pcVar8 = pcVar7;
  }
  else {
    pcVar8 = pcVar6;
    if ((long)pcVar7 - (long)pcVar6 != 0) {
      func_0x000107c610b8(pcVar9 + (long)pcVar6 + param_5,pcVar9 + (long)pcVar6,
                          (long)pcVar7 - (long)pcVar6);
      pcVar8 = pcVar7;
    }
  }
  pcVar8 = pcVar8 + param_5;
  if (param_1[0x17] < '\0') {
    *(char **)(param_1 + 8) = pcVar8;
  }
  else {
    param_1[0x17] = (byte)pcVar8 & 0x7f;
  }
  pcVar9[(long)pcVar8] = '\0';
  pcVar7 = pcVar9 + (long)pcVar6;
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    *pcVar7 = *param_3;
    pcVar7 = pcVar7 + 1;
  }
  if (param_1[0x17] < '\0') {
    param_1 = *(char **)param_1;
  }
  return pcVar6 + (long)param_1;
}



/* Entry: 1005537d0; end: 1005537ff;  */

void FUN_1005537d0(void)

{
  func_0x00010054f8c8();
  FUN_100292164();
  return;
}



/* Entry: 100553800; end: 100553923;  */

void FUN_100553800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b8908;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf680;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf680);
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  uVar4 = uVar3;
  FUN_1004e5030();
  func_0x000107c61180();
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf668;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf668);
  func_0x000107c61180();
  uVar6 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar7 = uVar6;
  FUN_100553924(uVar6);
  func_0x000107c61180();
  func_0x000107c482c8(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100553924; end: 100553a23;  */

void FUN_100553924(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x000107c4c694(param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41360((double)((ulong)puStack_38[3] / 1000),PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c60bcc(&uStack_40,8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100553a24; end: 100553a53;  */

void FUN_100553a24(long param_1,undefined8 param_2)

{
  func_0x000107c5dc0c();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 100553a54; end: 100553a6f; -[SCUserInfoEpochTimeMsProperty value] */

undefined8 FUN_100553a54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100553a70; end: 100553b1b; -[SCUserRegistrationInfo initWithRegistrationCountryCode:accountCreationTimestamp:] */

undefined1 *
FUN_100553a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e0e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100553b1c; end: 100553b23; -[SCUserRegistrationInfo accountCreationTimestamp] */

undefined8 FUN_100553b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100553b24; end: 100553b53; -[SCUserRegistrationInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100553b3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100553b40) */

void FUN_100553b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100553b54; end: 100553bb3;  */

undefined1  [16]
FUN_100553b54(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar3 = *param_2;
    func_0x000107c61174(uVar3);
    uVar2 = *param_4;
    *param_4 = uVar3;
    func_0x000107c61170(uVar2);
    param_4 = param_4 + 1;
    puVar1 = param_3;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 100553bb4; end: 100553bef; -[SCBlizzardEventConfigurer appStartupType] */

undefined4 FUN_100553bb4(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = lRam00000001136c4a60;
  func_0x000107c5bcb8();
  if (lVar2 - 4U < 4) {
    uVar1 = *(undefined4 *)(&UNK_10dde3d50 + (lVar2 - 4U) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 100553bf0; end: 100553c8f;  */

void FUN_100553bf0(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint *puVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar18;
  ulong uVar19;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [16];
  uint *puStack_240;
  undefined8 *puStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  uint auStack_218 [80];
  undefined8 uStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uVar11 = SUB81(&uStack_a0,0);
  FUN_1004a5d98();
  uStack_98 = 0x1032547698badcfe;
  uStack_a0 = 0xefcdab8967452301;
  uStack_90 = 0xc3d2e1f0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_28 = extraout_x8;
  FUN_100553efc(&uStack_a0,param_1,param_1 + 4);
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar9 = bVar6 == 0;
  uVar19 = param_2[1];
  puVar16 = (undefined8 *)*param_2;
  if (-1 < (char)bVar6) {
    uVar19 = (ulong)bVar6;
    puVar16 = param_2;
  }
  FUN_100553efc(&uStack_a0,puVar16,(long)puVar16 + uVar19);
  puVar10 = param_1;
  FUN_10055413c();
  FUN_1004a5f34(uStack_28);
  if ((bool)uVar9) {
    return;
  }
  func_0x000107c60e78();
  pcStack_a8 = FUN_100553c90;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_1004a5d98();
  uStack_d8 = extraout_x8_00;
  lVar18 = *(long *)(puVar10 + 0x16);
  *(long *)(puVar10 + 0x16) = lVar18 + 1;
  *(undefined1 *)((long)puVar10 + lVar18 + 0x14) = uVar11;
  bVar8 = false;
  if (*(long *)(puVar10 + 0x16) == 0x40) {
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    for (lVar18 = 0; lVar18 != 0x40; lVar18 = lVar18 + 4) {
      uVar5 = *(uint *)((long)puVar10 + lVar18 + 0x14);
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      *(uint *)((long)auStack_218 + lVar18) = uVar5 >> 0x10 | uVar5 << 0x10;
    }
    for (lVar18 = 0; lVar18 != 0x100; lVar18 = lVar18 + 4) {
      uVar5 = *(uint *)((long)auStack_218 + lVar18 + 0x20) ^
              *(uint *)((long)auStack_218 + lVar18 + 0x34) ^
              *(uint *)((long)auStack_218 + lVar18 + 8) ^ *(uint *)((long)auStack_218 + lVar18);
      *(uint *)((long)auStack_218 + lVar18 + 0x40) = uVar5 >> 0x1f | uVar5 << 1;
    }
    uVar19 = 0;
    param_2 = (undefined8 *)(ulong)puVar10[3];
    puVar16 = (undefined8 *)(ulong)puVar10[4];
    uVar14 = *puVar10;
    uVar13 = puVar10[1];
    uVar5 = puVar10[2];
    while( true ) {
      uVar17 = uVar14;
      puVar12 = param_2;
      param_2 = (undefined8 *)(ulong)uVar5;
      uVar14 = (uint)puVar12;
      iVar15 = (int)puVar16;
      if (uVar19 == 0x50) break;
      uVar4 = uVar5 ^ uVar13 ^ uVar14;
      iVar3 = -0x359d3e2a;
      uVar2 = uVar4;
      if (uVar19 < 0x3c) {
        iVar3 = -0x70e44324;
        uVar2 = (uVar14 | uVar5) & uVar13 | uVar14 & uVar5;
      }
      if (uVar19 < 0x28) {
        iVar3 = 0x6ed9eba1;
        uVar2 = uVar4;
      }
      if (uVar19 < 0x14) {
        uVar2 = uVar14 & (uVar13 ^ 0xffffffff) | uVar5 & uVar13;
      }
      uVar14 = uVar17 >> 0x1b | uVar17 << 5;
      param_1 = (uint *)(ulong)uVar14;
      if (uVar19 < 0x14) {
        iVar3 = 0x5a827999;
      }
      puVar1 = auStack_218 + uVar19;
      uVar5 = uVar13 >> 2 | uVar13 << 0x1e;
      uVar19 = uVar19 + 1;
      puVar16 = puVar12;
      uVar14 = iVar15 + uVar14 + uVar2 + iVar3 + *puVar1;
      uVar13 = uVar17;
    }
    *puVar10 = uVar17 + *puVar10;
    puVar10[1] = uVar13 + puVar10[1];
    puVar10[2] = uVar5 + puVar10[2];
    puVar10[3] = uVar14 + puVar10[3];
    puVar10[4] = iVar15 + puVar10[4];
    bVar8 = true;
  }
  FUN_1004a5f34(uStack_d8);
  if (!bVar8) {
    func_0x000107c60e78();
    pcStack_228 = FUN_100553e4c;
    puStack_240 = param_1;
    puStack_238 = param_2;
    ppuStack_230 = &puStack_b0;
    FUN_100553c90();
    if (*(ulong *)(puVar10 + 0x18) < 0xfffffff8) {
      *(ulong *)(puVar10 + 0x18) = *(ulong *)(puVar10 + 0x18) + 8;
    }
    else {
      puVar10[0x18] = 0;
      puVar10[0x19] = 0;
      if (0xfffffffe < *(ulong *)(puVar10 + 0x1a)) {
        func_0x000107c60c20(auStack_250,&UNK_10f4ea0d4);
        puStack_268 = &UNK_10f4ea0e8;
        puStack_260 = &UNK_10f4ea13f;
        uStack_258 = 0x68;
        func_0x000107c29e00(auStack_250,&puStack_268);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100553eec);
        (*pcVar7)();
      }
      *(ulong *)(puVar10 + 0x1a) = *(ulong *)(puVar10 + 0x1a) + 1;
    }
    return;
  }
  return;
}



/* Entry: 100553c90; end: 100553e4b;  */

void FUN_100553c90(uint *param_1,undefined1 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 extraout_x8;
  long lVar14;
  ulong uVar15;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  uint auStack_178 [80];
  undefined8 uStack_38;
  
  FUN_1004a5d98();
  uStack_38 = extraout_x8;
  lVar14 = *(long *)(param_1 + 0x16);
  *(long *)(param_1 + 0x16) = lVar14 + 1;
  *(undefined1 *)((long)param_1 + lVar14 + 0x14) = param_2;
  bVar7 = false;
  if (*(long *)(param_1 + 0x16) == 0x40) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    for (lVar14 = 0; lVar14 != 0x40; lVar14 = lVar14 + 4) {
      uVar5 = *(uint *)((long)param_1 + lVar14 + 0x14);
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      *(uint *)((long)auStack_178 + lVar14) = uVar5 >> 0x10 | uVar5 << 0x10;
    }
    for (lVar14 = 0; lVar14 != 0x100; lVar14 = lVar14 + 4) {
      uVar5 = *(uint *)((long)auStack_178 + lVar14 + 0x20) ^
              *(uint *)((long)auStack_178 + lVar14 + 0x34) ^
              *(uint *)((long)auStack_178 + lVar14 + 8) ^ *(uint *)((long)auStack_178 + lVar14);
      *(uint *)((long)auStack_178 + lVar14 + 0x40) = uVar5 >> 0x1f | uVar5 << 1;
    }
    uVar15 = 0;
    unaff_x19 = (ulong)param_1[3];
    uVar12 = (ulong)param_1[4];
    uVar10 = *param_1;
    uVar9 = param_1[1];
    uVar5 = param_1[2];
    while( true ) {
      uVar13 = uVar10;
      uVar8 = unaff_x19;
      unaff_x19 = (ulong)uVar5;
      uVar10 = (uint)uVar8;
      iVar11 = (int)uVar12;
      if (uVar15 == 0x50) break;
      uVar4 = uVar5 ^ uVar9 ^ uVar10;
      iVar3 = -0x359d3e2a;
      uVar2 = uVar4;
      if (uVar15 < 0x3c) {
        iVar3 = -0x70e44324;
        uVar2 = (uVar10 | uVar5) & uVar9 | uVar10 & uVar5;
      }
      if (uVar15 < 0x28) {
        iVar3 = 0x6ed9eba1;
        uVar2 = uVar4;
      }
      if (uVar15 < 0x14) {
        uVar2 = uVar10 & (uVar9 ^ 0xffffffff) | uVar5 & uVar9;
      }
      uVar10 = uVar13 >> 0x1b | uVar13 << 5;
      unaff_x20 = (ulong)uVar10;
      if (uVar15 < 0x14) {
        iVar3 = 0x5a827999;
      }
      puVar1 = auStack_178 + uVar15;
      uVar5 = uVar9 >> 2 | uVar9 << 0x1e;
      uVar15 = uVar15 + 1;
      uVar12 = uVar8;
      uVar10 = iVar11 + uVar10 + uVar2 + iVar3 + *puVar1;
      uVar9 = uVar13;
    }
    *param_1 = uVar13 + *param_1;
    param_1[1] = uVar9 + param_1[1];
    param_1[2] = uVar5 + param_1[2];
    param_1[3] = uVar10 + param_1[3];
    param_1[4] = iVar11 + param_1[4];
    bVar7 = true;
  }
  FUN_1004a5f34(uStack_38);
  if (!bVar7) {
    func_0x000107c60e78();
    pcStack_188 = FUN_100553e4c;
    uStack_1a0 = unaff_x20;
    uStack_198 = unaff_x19;
    puStack_190 = &stack0xfffffffffffffff0;
    FUN_100553c90();
    if (*(ulong *)(param_1 + 0x18) < 0xfffffff8) {
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) + 8;
    }
    else {
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      if (0xfffffffe < *(ulong *)(param_1 + 0x1a)) {
        func_0x000107c60c20(auStack_1b0,&UNK_10f4ea0d4);
        puStack_1c8 = &UNK_10f4ea0e8;
        puStack_1c0 = &UNK_10f4ea13f;
        uStack_1b8 = 0x68;
        func_0x000107c29e00(auStack_1b0,&puStack_1c8);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100553eec);
        (*pcVar6)();
      }
      *(ulong *)(param_1 + 0x1a) = *(ulong *)(param_1 + 0x1a) + 1;
    }
    return;
  }
  return;
}



/* Entry: 100553e4c; end: 100553efb;  */

void FUN_100553e4c(long param_1)

{
  code *pcVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  FUN_100553c90();
  if (*(ulong *)(param_1 + 0x60) < 0xfffffff8) {
    *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) + 8;
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (0xfffffffe < *(ulong *)(param_1 + 0x68)) {
      func_0x000107c60c20(auStack_30,&UNK_10f4ea0d4);
      puStack_48 = &UNK_10f4ea0e8;
      puStack_40 = &UNK_10f4ea13f;
      uStack_38 = 0x68;
      func_0x000107c29e00(auStack_30,&puStack_48);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100553eec);
      (*pcVar1)();
    }
    *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) + 1;
  }
  return;
}



/* Entry: 100553efc; end: 100553f3f;  */

void FUN_100553efc(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_100553e4c(param_1,*param_2);
  }
  return;
}



/* Entry: 100553f40; end: 10055413b; -[SCSpectrumEvent initWithSessionId:userGuid:appBuild:appVersion:osVersion:clientId:locale:deviceModel:accountAgeDays:appStartupType:clientNodepEpochMs:spectrumEvent:] */

undefined8 *
FUN_100553f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_1126f4c10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 1) = param_12;
    puVar1[10] = param_11;
    puVar1[0xb] = param_14;
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10055413c; end: 1005542a3;  */

/* WARNING: Possible PIC construction at 0x000100554160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100554164) */
/* WARNING: Removing unreachable block (ram,0x00010055416c) */
/* WARNING: Removing unreachable block (ram,0x000100554188) */
/* WARNING: Removing unreachable block (ram,0x0001005541c8) */
/* WARNING: Removing unreachable block (ram,0x0001005541b8) */
/* WARNING: Removing unreachable block (ram,0x000100554174) */

void FUN_10055413c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  FUN_1004a5d98();
  FUN_100553c90();
  uVar1 = *(ulong *)(param_2 + 0x58);
  if (uVar1 < 0x39) {
    while (uVar1 < 0x38) {
      FUN_1005542a4();
      uVar1 = *(ulong *)(param_2 + 0x58);
    }
  }
  else {
    do {
      FUN_1005542a4();
    } while (*(long *)(param_2 + 0x58) != 0);
    uVar1 = 0;
    while (uVar1 < 0x38) {
      FUN_1005542a4();
      uVar1 = *(ulong *)(param_2 + 0x58);
    }
  }
  func_0x0001005542b0();
  func_0x0001005542b0();
  func_0x0001005542b0();
  func_0x0001005542b0();
  func_0x0001005542b0();
  func_0x0001005542b0();
  func_0x0001005542b0();
  func_0x0001005542b0();
  return;
}



/* Entry: 1005542a4; end: 1005542b7;  */

void FUN_1005542a4(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  undefined1 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 extraout_x8;
  long lVar16;
  ulong uVar17;
  ulong unaff_x19;
  uint *unaff_x20;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  uint *puStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  uint auStack_178 [80];
  undefined8 uStack_38;
  
  uVar9 = 0;
  puVar8 = unaff_x20;
  FUN_1004a5d98();
  uStack_38 = extraout_x8;
  lVar16 = *(long *)(puVar8 + 0x16);
  *(long *)(puVar8 + 0x16) = lVar16 + 1;
  *(undefined1 *)((long)puVar8 + lVar16 + 0x14) = uVar9;
  bVar7 = false;
  if (*(long *)(puVar8 + 0x16) == 0x40) {
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    for (lVar16 = 0; lVar16 != 0x40; lVar16 = lVar16 + 4) {
      uVar5 = *(uint *)((long)puVar8 + lVar16 + 0x14);
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      *(uint *)((long)auStack_178 + lVar16) = uVar5 >> 0x10 | uVar5 << 0x10;
    }
    for (lVar16 = 0; lVar16 != 0x100; lVar16 = lVar16 + 4) {
      uVar5 = *(uint *)((long)auStack_178 + lVar16 + 0x20) ^
              *(uint *)((long)auStack_178 + lVar16 + 0x34) ^
              *(uint *)((long)auStack_178 + lVar16 + 8) ^ *(uint *)((long)auStack_178 + lVar16);
      *(uint *)((long)auStack_178 + lVar16 + 0x40) = uVar5 >> 0x1f | uVar5 << 1;
    }
    uVar17 = 0;
    unaff_x19 = (ulong)puVar8[3];
    uVar14 = (ulong)puVar8[4];
    uVar12 = *puVar8;
    uVar11 = puVar8[1];
    uVar5 = puVar8[2];
    while( true ) {
      uVar15 = uVar12;
      uVar10 = unaff_x19;
      unaff_x19 = (ulong)uVar5;
      uVar12 = (uint)uVar10;
      iVar13 = (int)uVar14;
      if (uVar17 == 0x50) break;
      uVar4 = uVar5 ^ uVar11 ^ uVar12;
      iVar3 = -0x359d3e2a;
      uVar2 = uVar4;
      if (uVar17 < 0x3c) {
        iVar3 = -0x70e44324;
        uVar2 = (uVar12 | uVar5) & uVar11 | uVar12 & uVar5;
      }
      if (uVar17 < 0x28) {
        iVar3 = 0x6ed9eba1;
        uVar2 = uVar4;
      }
      if (uVar17 < 0x14) {
        uVar2 = uVar12 & (uVar11 ^ 0xffffffff) | uVar5 & uVar11;
      }
      uVar12 = uVar15 >> 0x1b | uVar15 << 5;
      unaff_x20 = (uint *)(ulong)uVar12;
      if (uVar17 < 0x14) {
        iVar3 = 0x5a827999;
      }
      puVar1 = auStack_178 + uVar17;
      uVar5 = uVar11 >> 2 | uVar11 << 0x1e;
      uVar17 = uVar17 + 1;
      uVar14 = uVar10;
      uVar12 = iVar13 + uVar12 + uVar2 + iVar3 + *puVar1;
      uVar11 = uVar15;
    }
    *puVar8 = uVar15 + *puVar8;
    puVar8[1] = uVar11 + puVar8[1];
    puVar8[2] = uVar5 + puVar8[2];
    puVar8[3] = uVar12 + puVar8[3];
    puVar8[4] = iVar13 + puVar8[4];
    bVar7 = true;
  }
  FUN_1004a5f34(uStack_38);
  if (!bVar7) {
    func_0x000107c60e78();
    pcStack_188 = FUN_100553e4c;
    puStack_1a0 = unaff_x20;
    uStack_198 = unaff_x19;
    puStack_190 = &stack0xfffffffffffffff0;
    FUN_100553c90();
    if (*(ulong *)(puVar8 + 0x18) < 0xfffffff8) {
      *(ulong *)(puVar8 + 0x18) = *(ulong *)(puVar8 + 0x18) + 8;
    }
    else {
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      if (0xfffffffe < *(ulong *)(puVar8 + 0x1a)) {
        func_0x000107c60c20(auStack_1b0,&UNK_10f4ea0d4);
        puStack_1c8 = &UNK_10f4ea0e8;
        puStack_1c0 = &UNK_10f4ea13f;
        uStack_1b8 = 0x68;
        func_0x000107c29e00(auStack_1b0,&puStack_1c8);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100553eec);
        (*pcVar6)();
      }
      *(ulong *)(puVar8 + 0x1a) = *(ulong *)(puVar8 + 0x1a) + 1;
    }
    return;
  }
  return;
}



/* Entry: 1005542b8; end: 1005542e7;  */

undefined8 * FUN_1005542b8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100292164();
  return param_1;
}



/* Entry: 1005542e8; end: 10055433f;  */

void FUN_1005542e8(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[2] = in_stack_00000010;
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 100554340; end: 100554363;  */

void FUN_100554340(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100554364; end: 10055436f;  */

undefined8 FUN_100554364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100554370; end: 100554393;  */

void FUN_100554370(long param_1)

{
  FUN_100554364();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100554394; end: 10055439b;  */

void FUN_100554394(void)

{
  return;
}



/* Entry: 10055439c; end: 10055446f; -[SCBlizzardEventLoggerProviderV2 getSpectrumLoggerForPriority:region:] */

void FUN_10055439c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c5b778();
  func_0x000107c61180();
  if (1 < param_3) {
    param_4 = 1;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c4d9e8(param_1,param_2,puVar1);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 != 0);
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c4d9e8(uVar2,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100554470; end: 100554493;  */

void FUN_100554470(long param_1)

{
  FUN_10046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100554494; end: 10055449f;  */

undefined8 FUN_100554494(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005544a0; end: 1005544c3;  */

void FUN_1005544a0(long param_1)

{
  FUN_100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005544c4; end: 1005544d3;  */

void FUN_1005544c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x68);
  return;
}



/* Entry: 1005544d4; end: 100554533; -[SCBlizzardEventLoggerProviderV2 spectrumPriorityToLoggerMap] */

undefined8 FUN_1005544d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100554534; end: 10055488b;  */

/* WARNING: Possible PIC construction at 0x0001005546ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100554784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005546f0) */
/* WARNING: Removing unreachable block (ram,0x000100554788) */
/* WARNING: Removing unreachable block (ram,0x00010055481c) */
/* WARNING: Removing unreachable block (ram,0x000100554888) */
/* WARNING: Removing unreachable block (ram,0x0001005548ac) */
/* WARNING: Removing unreachable block (ram,0x0001005548e0) */
/* WARNING: Removing unreachable block (ram,0x0001005548a0) */
/* WARNING: Removing unreachable block (ram,0x0001005547fc) */

void FUN_100554534(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,long *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_70 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100554520();
  FUN_1005548b8(auStack_70,1);
  puVar1 = puStack_60;
  puStack_60[2] = 0;
  *puStack_60 = &PTR_DAT_110a61a80;
  puStack_60[1] = 0;
  FUN_10002b838(&uStack_a0,&UNK_10f4bd096);
  FUN_1005549b0(puVar1 + 3,param_2,&uStack_a0);
  func_0x000107c60ca0(&uStack_a0);
  puVar1 = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x10) = puVar1 + 3;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  puVar1 = auStack_70;
  func_0x000100555154();
  lVar2 = param_3[1];
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x28) = param_3[1];
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100555164();
    } while (extraout_w10 != 0);
  }
  uVar3 = *param_4;
  *(undefined8 *)(param_1 + 0x38) = param_4[1];
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *param_4 = 0;
  param_4[1] = 0;
  uVar3 = *param_5;
  *(undefined8 *)(param_1 + 0x48) = param_5[1];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *param_5 = 0;
  param_5[1] = 0;
  if (*param_6 == 0) {
    lVar2 = param_2[1];
    uVar4 = param_2[1];
    uVar3 = *param_2;
    func_0x000100555174();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_110a7a050;
    if (lVar2 != 0) {
      do {
        func_0x000100555164();
      } while (extraout_w10_01 != 0);
    }
    puVar1[3] = &PTR_DAT_110a79f40;
    puVar1[5] = uVar4;
    puVar1[4] = uVar3;
    uStack_a0 = 0;
    uStack_98 = 0;
    FUN_100450be4(&uStack_a0);
    *(undefined8 **)(param_1 + 0x50) = puVar1 + 3;
    *(undefined8 **)(param_1 + 0x58) = puVar1;
  }
  else {
    *(long *)(param_1 + 0x50) = *param_6;
    lVar2 = param_6[1];
    *(long *)(param_1 + 0x58) = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x000100555164();
      } while (extraout_w10_00 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_10054eaf8(param_1 + 0x80);
  FUN_10054ec9c(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0xf0);
  return;
}



/* Entry: 10055488c; end: 1005548b7;  */

long FUN_10055488c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x222222222222223) {
    lVar1 = param_2 * 0x78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10055488c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005548b8; end: 1005548df;  */

long FUN_1005548b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10055488c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005548e0; end: 1005548e7;  */

void FUN_1005548e0(void)

{
  return;
}



/* Entry: 1005548e8; end: 1005549af;  */

void FUN_1005548e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d04a0;
  func_0x000107c610f4(PTR_PTR_1126d04a0);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR_PTR_1126d04a8;
  func_0x000107c610f4(PTR_PTR_1126d04a8);
  func_0x000107c467f8();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c4d3e4(uVar4);
  func_0x000107c61180();
  func_0x000107c45f64(puVar2,param_2,uVar5,0,puVar3,0,uVar1,uVar4,*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),0,0,*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005549b0; end: 100554aff;  */

undefined8 * FUN_1005549b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uVar7;
  undefined1 auStack_30 [16];
  
  uVar4 = *param_2;
  *param_1 = uVar4;
  lVar6 = param_2[1];
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *param_1;
  }
  lVar6 = (long)*(char *)((long)param_3 + 0x17);
  puVar5 = param_3;
  if (lVar6 < 0) {
    lVar6 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
  }
  FUN_100554b00(param_1 + 2,uVar4,puVar5,lVar6);
  uVar7 = param_3[1];
  uVar4 = *param_3;
  param_1[6] = param_3[2];
  param_1[5] = uVar7;
  param_1[4] = uVar4;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_100554e94(param_1 + 7);
  FUN_100554e94(param_1 + 9);
  param_1[0xb] = 1;
  FUN_10054ed98(auStack_30);
  func_0x000100554ebc(param_1 + 7,auStack_30);
  func_0x00010054ef4c(auStack_30);
  FUN_10054ed98(auStack_30);
  func_0x000100554ebc(param_1 + 9,auStack_30);
  func_0x00010054ef4c(auStack_30);
  if (param_1[9] != 0) {
    do {
      FUN_100554eec();
    } while (extraout_w10 != 0);
  }
  FUN_100554fa0(auStack_30);
  FUN_10054eee0(param_1 + 9,auStack_30);
  FUN_10054ebfc(auStack_30);
  func_0x0001005550c8();
  return param_1;
}



/* Entry: 100554b00; end: 100554b73;  */

void FUN_100554b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_100450040(auStack_40);
  FUN_100554b74();
  FUN_100554db8(param_1,auStack_50,auStack_40,&uStack_30);
  func_0x000100554e8c();
  FUN_100450518(auStack_40);
  return;
}



/* Entry: 100554b74; end: 100554b7f;  */

void FUN_100554b74(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100554bf0(&uStack_30);
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_100554d00(&uStack_30);
  return;
}



/* Entry: 100554b80; end: 100554bef;  */

void FUN_100554b80(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  FUN_100554c54();
  uVar2 = 1;
  uStack_28 = extraout_x8;
  FUN_100554c90(auStack_40,1);
  *puStack_30 = &PTR_DAT_110d9a340;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110d9a2d8;
  puStack_30[4] = param_2;
  FUN_100554cb8();
  func_0x000100554cd0();
  func_0x000100554ce0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_100554bf0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100554b80(&uStack_51,puVar1,uVar2);
  return;
}



/* Entry: 100554bf0; end: 100554c17;  */

void FUN_100554bf0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_100554b80(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 100554c18; end: 100554c53;  */

void FUN_100554c18(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100554bf0(&uStack_30,param_2,&uStack_31);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_100554d00(&uStack_30);
  return;
}



/* Entry: 100554c54; end: 100554c63;  */

void FUN_100554c54(void)

{
  return;
}



/* Entry: 100554c64; end: 100554c8f;  */

long FUN_100554c64(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100554c64();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100554c90; end: 100554cb7;  */

long FUN_100554c90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100554c64();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100554cb8; end: 100554cff;  */

void FUN_100554cb8(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  
  *unaff_x19 = in_stack_00000010 + 0x18;
  unaff_x19[1] = in_stack_00000010;
  return;
}



/* Entry: 100554d00; end: 100554d27;  */

long FUN_100554d00(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100554d28; end: 100554db7;  */

void FUN_100554d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  FUN_100554c54();
  uStack_38 = extraout_x8;
  FUN_100554e10(auStack_50,1);
  FUN_100554e38(uStack_40,param_2,param_3,param_4);
  FUN_100554cb8();
  FUN_100554e7c();
  func_0x000100554ce0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100554e7c(auStack_50);
  func_0x000107c3a56c();
  pcStack_58 = FUN_100554db8;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_100554d28(&uStack_61,puVar1,param_2,param_3);
  return;
}



/* Entry: 100554db8; end: 100554e0f;  */

void FUN_100554db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_100554d28(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 100554e10; end: 100554e37;  */

long FUN_100554e10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100554de4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100554e38; end: 100554e7b;  */

undefined8 * FUN_100554e38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d9a390;
  FUN_100450358(param_1 + 3);
  return param_1;
}



/* Entry: 100554e7c; end: 100554e93;  */

void FUN_100554e7c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100554e94; end: 100554eeb;  */

long FUN_100554e94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10054eaf8();
  FUN_10054ec9c(lVar1 + 8);
  return param_1;
}



/* Entry: 100554eec; end: 100554f0b;  */

void FUN_100554eec(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100554f0c; end: 100554f9f;  */

void FUN_100554f0c(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  
  func_0x000100554efc();
  puVar1 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *puVar1 = FUN_1005ee1d4;
  puVar1[1] = &UNK_10867777c;
  puVar1[4] = *unaff_x23;
  *unaff_x23 = 0;
  FUN_100554fd8();
  func_0x000100554fe0();
  puVar1[5] = unaff_x21;
  *(undefined1 *)(puVar1 + 7) = 0;
  func_0x000100554fec(*(undefined8 *)(*(long *)*unaff_x21 + 0x10));
  return;
}



/* Entry: 100554fa0; end: 100554fd7;  */

void FUN_100554fa0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  *param_2 = 0;
  FUN_100554f0c(&uStack_18,param_1);
  func_0x0001005550c8();
  return;
}



/* Entry: 100554fd8; end: 100554ff7;  */

undefined8 * FUN_100554fd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  *(undefined2 *)(puVar1 + 4) = 4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  puVar1[0x12] = puVar1 + 4;
  *puVar1 = &PTR_DAT_11087bc20;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010054ec98(&uStack_40);
  FUN_10054ebfc(&uStack_38);
  *(undefined8 *)(param_1 + 0x10) = puVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return (undefined8 *)(param_1 + 0x10);
}



/* Entry: 100554ff8; end: 100555093;  */

void FUN_100554ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  code **ppcVar2;
  undefined8 extraout_x8;
  undefined **ppuVar3;
  undefined **ppuVar4;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_28;
  
  FUN_100554c54();
  pcStack_88 = FUN_1005ee180;
  ppuStack_80 = &PTR_DAT_110d9a318;
  ppcVar2 = &pcStack_88;
  uStack_78 = param_2;
  uStack_70 = param_3;
  lStack_68 = param_1;
  uStack_28 = extraout_x8;
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8));
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x000100554ce0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  pppuVar1 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  func_0x000107c3a56c();
  *pppuVar1 = &PTR_DAT_110d9a318;
  ppuVar4 = (undefined **)ppcVar2[2];
  ppuVar3 = (undefined **)ppcVar2[1];
  pppuVar1[3] = (undefined **)ppcVar2[3];
  pppuVar1[2] = ppuVar4;
  pppuVar1[1] = ppuVar3;
  return;
}



/* Entry: 100555094; end: 1005550cf;  */

void FUN_100555094(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110d9a318;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1005550d0; end: 10055514b;  */

void FUN_1005550d0(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + 1);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 - 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar4 & 0x1fffffffc) == 4) {
    (**(code **)(*param_2 + 0x10))(param_2,0,param_1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100555140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))(param_2);
      return;
    }
  }
  return;
}



/* Entry: 10055514c; end: 10055517b;  */

void FUN_10055514c(void)

{
  return;
}



/* Entry: 10055517c; end: 10055520b;  */

undefined8 *
FUN_10055517c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_110d9aa10;
  param_1[1] = param_3;
  param_1[3] = 0;
  *(int *)(param_1 + 4) = (int)param_2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x14] = param_2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_2 = param_5 * param_2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  func_0x000107c610a0();
  param_1[0x18] = param_2;
  param_1[0x19] = param_4;
  param_1[0x1a] = param_5;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



/* Entry: 10055520c; end: 10055521b;  */

undefined8 * FUN_10055520c(undefined8 param_1)

{
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  long in_stack_00000030;
  
  if (in_stack_00000030 != 0) {
    uStack0000000000000010 = param_1;
    uStack0000000000000018 = param_1;
    func_0x000107c28a34(&stack0x00000030);
  }
  return &stack0x00000030;
}



/* Entry: 10055521c; end: 100555247;  */

long * FUN_10055521c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c28a34(param_1);
  }
  return param_1;
}


