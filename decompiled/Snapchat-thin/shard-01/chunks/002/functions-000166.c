/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100df03c0; end: 100df03ef;  */

void FUN_100df03c0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 100df03f0; end: 100df0487;  */

void FUN_100df03f0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100dee474();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000100dd8ca8();
    if (param_2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_30 = &UNK_10d901270;
      puStack_28 = &UNK_10d9012a8;
      func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 100df0488; end: 100df156f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100df0488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 auStack_f0 [5];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  auStack_f0[0] = param_5;
  auStack_f0[1] = param_6;
  func_0x000100df03ac();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = param_10;
  lStack_78 = param_8;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(param_8 + -8) + 0x20))();
  lStack_a0 = param_9;
  uStack_98 = param_11;
  func_0x0001000c5db4(auStack_b8);
  (**(code **)(*(long *)(param_9 + -8) + 0x20))();
  lVar3 = 0;
  FUN_100dec988();
  func_0x000107c613fc();
  lVar5 = lStack_78;
  func_0x0001000c6518(auStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar8 = (undefined8 *)(lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar7 = *puVar8;
  uVar4 = 0;
  func_0x000100de4ff4();
  lVar5 = _DAT_112d36e98;
  ppuStack_c0 = &PTR_DAT_110352d18;
  auStack_f0[2] = uVar7;
  uStack_c8 = uVar4;
  func_0x000107c61614(lVar3 + _DAT_112d36e98,0);
  func_0x000107c61604(lVar3 + lVar5,param_1);
  func_0x000100df1bd0(auStack_f0 + 2,lVar3 + _DAT_112d36ea0);
  func_0x000100df1bd0(auStack_b8,lVar3 + _DAT_112d36ea8);
  func_0x000100df1b88(param_4,lVar3 + _DAT_112d36eb0,0x112d36ce8,&UNK_10d9010d0);
  uVar4 = 0;
  FUN_100dee474(0);
  func_0x000107c6159c(lVar6,uVar4,5);
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar5 = 0;
  FUN_100dd8cfc();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar6 + iVar1,1,1,lVar5);
  *(undefined1 *)(lVar6 + *(int *)(lVar2 + 0x18)) = 5;
  uVar4 = auStack_f0[1];
  puVar8 = (undefined8 *)(lVar6 + *(int *)(lVar2 + 0x1c));
  *puVar8 = auStack_f0[0];
  puVar8[1] = uVar4;
  func_0x000103dbf4dc(lVar6);
  func_0x0001000a8868(auStack_f0 + 2,uStack_c8);
  func_0x000107c6157c(lVar6);
  FUN_100de4d74();
  func_0x000107c61574(lVar6);
  func_0x000100df15d8(param_4,0x112d36ce8,&UNK_10d9010d0);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_f0 + 2);
  func_0x0001000834e4(auStack_90);
  return lVar6;
}



/* Entry: 100df1570; end: 100df1617;  */

undefined8 FUN_100df1570(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100df1618; end: 100df1863;  */

void FUN_100df1618(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  uStack_70 = param_3;
  uStack_68 = param_4;
  FUN_100dd8cfc();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar12 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar12 - extraout_x12;
  lVar7 = 0x112d36368;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar11 - extraout_x8_00;
  lVar8 = 0;
  func_0x000100df03ac();
  func_0x000100df1b88(param_2 + *(int *)(lVar8 + 0x14),lVar16,0x112d36368,&UNK_10d9008e0);
  uVar15 = 1;
  lVar7 = lVar16;
  (**(code **)(lVar10 + 0x30))(lVar16,1,lVar6);
  if ((int)lVar7 == 1) {
    uVar14 = 0;
    goto LAB_100df17b8;
  }
  func_0x000100df1b44(lVar16,lVar11,FUN_100dd8cfc);
  FUN_100df1570(lVar11,uVar12,FUN_100dd8cfc);
  uVar14 = uVar12;
  func_0x000107c614c4(uVar12,lVar6);
  iVar5 = (int)uVar14;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
LAB_100df1794:
    FUN_100dee438(uVar12,FUN_100dd8cfc);
  }
  else {
    if (iVar5 == 2) {
      uVar14 = 2;
      goto LAB_100df1794;
    }
    uVar14 = uVar14 & 0xffffffff;
    if (iVar5 == 3) goto LAB_100df1794;
  }
  FUN_100dee438(lVar11,FUN_100dd8cfc);
  uVar15 = 0;
LAB_100df17b8:
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x1c));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar9 = &UNK_110353590;
  func_0x000107c613fc(&UNK_110353590,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = uStack_70;
  *(undefined8 *)(puVar9 + 0x18) = uStack_68;
  pcVar13 = *(code **)(lVar7 + 0x10);
  func_0x000107c6157c();
  *(undefined8 *)(lVar16 + -0x10) = uVar2;
  *(long *)(lVar16 + -8) = lVar7;
  (*pcVar13)(uVar3,uVar4,uVar14,uVar15,0,1,0x100df1b24,puVar9);
  func_0x000107c61574(puVar9);
  return;
}



/* Entry: 100df1864; end: 100df1b17;  */

undefined1 * FUN_100df1864(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  lVar3 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + lVar1;
  if (bRam0000000112d35bb0 < 3) {
    if (bRam0000000112d35bb0 == 0) {
      func_0x0001000285a8(0x112d37238,&UNK_10d901348);
      func_0x000107c613fc();
      puVar5 = (undefined1 *)0x1;
      func_0x00010008747c();
      func_0x000100df1bd0(param_1,auStack_68);
      puVar6 = &UNK_110353568;
      func_0x000107c613fc(&UNK_110353568,0x40,7);
      *(undefined1 **)(puVar6 + 0x10) = puVar5;
      FUN_100de2038(auStack_68,puVar6 + 0x18);
      func_0x000107c6157c(puVar5);
      FUN_100df1618(param_1,param_2,FUN_100df1b18,puVar6);
      func_0x000107c61574(puVar6);
      return puVar5;
    }
    uVar2 = bRam0000000112d35bb0 != 1;
  }
  else {
    uVar7 = 3;
    if (bRam0000000112d35bb0 != 4) {
      uVar7 = 4;
    }
    uVar2 = 2;
    if (bRam0000000112d35bb0 != 3) {
      uVar2 = uVar7;
    }
  }
  func_0x0001000285a8(0x112d36e90,&UNK_10d901350);
  *puVar5 = uVar2;
  func_0x000100df1bd0(param_1,auStack_68 + lVar1);
  func_0x000107c6159c(puVar5,lVar3,4);
  puVar4 = puVar5;
  func_0x000100854cb0(puVar5);
  FUN_100dee438(puVar5,FUN_100ded4cc);
  return puVar4;
}



/* Entry: 100df1b18; end: 100df1b23;  */

void FUN_100df1b18(byte param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  byte *pbVar3;
  
  lVar2 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar3 = &stack0xffffffffffffffc0 + lVar1;
  if (param_3 < 2) {
    if (param_3 == 0) {
      param_1 = param_1 & 1;
      goto LAB_100dec4e0;
    }
  }
  else {
    if (param_3 == 2) {
      param_1 = 3;
      goto LAB_100dec4e0;
    }
    if (param_3 != 3) {
      param_1 = 2;
      goto LAB_100dec4e0;
    }
  }
  param_1 = 4;
LAB_100dec4e0:
  *pbVar3 = param_1;
  func_0x000100df1bd0(unaff_x20 + 0x18,&stack0xffffffffffffffc8 + lVar1);
  func_0x000107c6159c(pbVar3,lVar2,4);
  func_0x000100087c34(pbVar3);
  FUN_100dee438(pbVar3,FUN_100ded4cc);
  return;
}



/* Entry: 100df1b24; end: 100df1c13;  */

void FUN_100df1b24(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100df1c14; end: 100df1dd7;  */

int FUN_100df1c14(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    param_2 = param_2 + 4;
    uVar3 = 2;
    if (0xfffeff < param_2) {
      uVar3 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar3;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar3 = (uint)param_1[1], param_1[1] != 0)) goto LAB_100df1c7c;
    }
    else if (uVar1 == 2) {
      uVar3 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_100df1c7c:
        return ((uint)*param_1 | uVar3 << 8) - 4;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) goto LAB_100df1c7c;
    }
  }
  uVar3 = 0;
  if (1 < *param_1) {
    uVar3 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
  }
  iVar2 = 0;
  if (2 < uVar3) {
    iVar2 = uVar3 - 3;
  }
  return iVar2;
}



/* Entry: 100df1dd8; end: 100df1dff; -[_TtC22AgeVerificationFeature32NeverExitSingleScreenUIContainer backgroundExitBehavior] */

void FUN_100df1dd8(void)

{
  func_0x000107c61168(PTR_PTR_1126aecb0);
  func_0x000107c4d60c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df1e00; end: 100df1eb7; -[_TtC22AgeVerificationFeature32NeverExitSingleScreenUIContainer initWithNibName:bundle:] */

undefined1 * FUN_100df1e00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 100df1eb8; end: 100df1f37; -[_TtC22AgeVerificationFeature32NeverExitSingleScreenUIContainer initWithCoder:] */

undefined1 * FUN_100df1eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100df1f38; end: 100df1f8b;  */

void FUN_100df1f38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100df1f8c; end: 100df21ef;  */

undefined1  [16] FUN_100df1f8c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027,0x800000010ef106e0);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df2058);
  (*pcVar1)();
}



/* Entry: 100df21f0; end: 100df226b;  */

undefined1  [16] FUN_100df21f0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6d5f796669726576;
  func_0x000107c5fadc(0x6d5f796669726576,0xed00006567615f79);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df30f8);
  (*pcVar1)();
}



/* Entry: 100df226c; end: 100df2337;  */

undefined1  [16] FUN_100df226c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef108a0);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df2338);
  (*pcVar1)();
}



/* Entry: 100df2338; end: 100df23df;  */

undefined1  [16] FUN_100df2338(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x69745f7472656c61;
  func_0x000107c5fadc(0x69745f7472656c61,0xeb00000000656c74);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df30f8);
  (*pcVar1)();
}



/* Entry: 100df23e0; end: 100df270f;  */

undefined1  [16] FUN_100df23e0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffee;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef10990);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df24ac);
  (*pcVar1)();
}



/* Entry: 100df2710; end: 100df2753;  */

undefined1  [16] FUN_100df2710(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6f5f325f70657473;
  func_0x000107c5fadc(0x6f5f325f70657473,0xeb00000000325f66);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df30f8);
  (*pcVar1)();
}



/* Entry: 100df2754; end: 100df281b;  */

undefined1  [16] FUN_100df2754(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10900);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df281c);
  (*pcVar1)();
}



/* Entry: 100df281c; end: 100df2833;  */

undefined1  [16] FUN_100df281c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6d7269666e6f63;
  func_0x000107c5fadc(0x6d7269666e6f63,0xe700000000000000);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df30f8);
  (*pcVar1)();
}



/* Entry: 100df2834; end: 100df302b;  */

undefined1  [16] FUN_100df2834(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef108e0);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df2900);
  (*pcVar1)();
}



/* Entry: 100df302c; end: 100df3047;  */

undefined1  [16] FUN_100df302c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x696167615f797274;
  func_0x000107c5fadc(0x696167615f797274,0xe90000000000006e);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df30f8);
  (*pcVar1)();
}



/* Entry: 100df3048; end: 100df31c3;  */

undefined1  [16] FUN_100df3048(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef106c0);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df30f8);
  (*pcVar1)();
}



/* Entry: 100df31c4; end: 100df31cf; -[SCAuthenticatedAgeVerificationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df31c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37268;
  func_0x000107c61428(param_1 + _DAT_112d37268,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df31d0; end: 100df31db; -[SCAuthenticatedAgeVerificationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df31d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37268;
  func_0x000107c61428(param_1 + _DAT_112d37268,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df31dc; end: 100df31e7; -[SCAuthenticatedAgeVerificationEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df31dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37270;
  func_0x000107c61428(param_1 + _DAT_112d37270,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df31e8; end: 100df31f3; -[SCAuthenticatedAgeVerificationEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df31e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37270;
  func_0x000107c61428(param_1 + _DAT_112d37270,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df31f4; end: 100df31ff; -[SCAuthenticatedAgeVerificationEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df31f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37278;
  func_0x000107c61428(param_1 + _DAT_112d37278,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3200; end: 100df320b; -[SCAuthenticatedAgeVerificationEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3200(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37278;
  func_0x000107c61428(param_1 + _DAT_112d37278,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df320c; end: 100df3217; -[SCAuthenticatedAgeVerificationEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df320c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37280;
  func_0x000107c61428(param_1 + _DAT_112d37280,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3218; end: 100df3223; -[SCAuthenticatedAgeVerificationEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37280;
  func_0x000107c61428(param_1 + _DAT_112d37280,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3224; end: 100df322f; -[SCAuthenticatedAgeVerificationEntryPoint ageVerificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3224(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37288;
  func_0x000107c61428(param_1 + _DAT_112d37288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3230; end: 100df323b; -[SCAuthenticatedAgeVerificationEntryPoint setAgeVerificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37288;
  func_0x000107c61428(param_1 + _DAT_112d37288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df323c; end: 100df3247; -[SCAuthenticatedAgeVerificationEntryPoint complianceEngineServicingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df323c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37290;
  func_0x000107c61428(param_1 + _DAT_112d37290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3248; end: 100df3253; -[SCAuthenticatedAgeVerificationEntryPoint setComplianceEngineServicingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37290;
  func_0x000107c61428(param_1 + _DAT_112d37290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3254; end: 100df325f; -[SCAuthenticatedAgeVerificationEntryPoint restrictedAppExperienceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3254(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d37298;
  func_0x000107c61428(param_1 + _DAT_112d37298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3260; end: 100df32a3;  */

void FUN_100df3260(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df32a4; end: 100df32af; -[SCAuthenticatedAgeVerificationEntryPoint setRestrictedAppExperienceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df32a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d37298;
  func_0x000107c61428(param_1 + _DAT_112d37298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df32b0; end: 100df3303;  */

void FUN_100df32b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3304; end: 100df3583;  */

/* WARNING: Possible PIC construction at 0x000100df3448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df34f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df34e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df350c) */
/* WARNING: Removing unreachable block (ram,0x000100df34fc) */
/* WARNING: Removing unreachable block (ram,0x000100df352c) */
/* WARNING: Removing unreachable block (ram,0x000100df351c) */
/* WARNING: Removing unreachable block (ram,0x000100df355c) */
/* WARNING: Removing unreachable block (ram,0x000100df354c) */
/* WARNING: Removing unreachable block (ram,0x000100df347c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100df346c) */
/* WARNING: Removing unreachable block (ram,0x000100df345c) */
/* WARNING: Removing unreachable block (ram,0x000100df344c) */
/* WARNING: Removing unreachable block (ram,0x000100df34ec) */

void FUN_100df3304(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar6 = unaff_x20;
    func_0x000107c5da74();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c5d900();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar6;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c5d9b4();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar6;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c3da3c();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c3ff2c();
            func_0x000107c61180();
            if (lVar5 != 0) {
              func_0x000107c506c4();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar6;
              }
              else {
                lVar6 = 0;
                FUN_100dd2738();
                func_0x000107c613fc();
                *(long *)(lVar6 + 0x38) = unaff_x20;
                *(undefined8 *)(lVar6 + 0x40) = 0;
                *(long *)(lVar6 + 0x10) = lVar1;
                *(long *)(lVar6 + 0x18) = lVar2;
                *(long *)(lVar6 + 0x20) = lVar3;
                *(long *)(lVar6 + 0x28) = lVar4;
                *(long *)(lVar6 + 0x30) = lVar5;
                func_0x000107c61174(lVar1);
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(unaff_x20);
                FUN_100dd1f40();
                lVar1 = unaff_x20;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100df3584; end: 100df35ab; -[SCAuthenticatedAgeVerificationEntryPoint begin] */

void FUN_100df3584(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100df3304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100df35ac; end: 100df368f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df35ac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d372a0);
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + 0x40,auStack_68,0,0);
    lVar1 = _DAT_112d36e10;
    lVar4 = *(long *)(lVar3 + 0x40);
    if ((lVar4 != 0) && (*(long *)(lVar4 + _DAT_112d36e10) != 0)) {
      uVar5 = *(undefined8 *)(lVar4 + _DAT_112d36dc0);
      func_0x000107c6157c(lVar3);
      lVar2 = lVar4;
      func_0x000107c61174(lVar4);
      func_0x000107c41864(uVar5);
      uVar5 = *(undefined8 *)(lVar4 + lVar1);
      *(undefined8 *)(lVar4 + lVar1) = 0;
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar5);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100df3690; end: 100df36c3; -[SCAuthenticatedAgeVerificationEntryPoint end] */

void FUN_100df3690(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100df35ac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100df36c4; end: 100df3a73;  */

void FUN_100df36c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
             (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a2fc();
          }
          else {
            if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd000000000000017;
                if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ef5d0)) ||
                   (func_0x000107c605b8(0xd000000000000017,0x800000010ef10a30,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52598();
                }
                else {
                  uVar2 = 0xd000000000000021;
                  if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10ef5b0)) ||
                     (func_0x000107c605b8(0xd000000000000021,0x800000010ef10a50,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53648();
                  }
                  else {
                    uVar2 = 0xd00000000000001f;
                    if (((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef10ef580)) &&
                       (func_0x000107c605b8(0xd00000000000001f,0x800000010ef10a80,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "AgeVerificationFeature/SCAuthenticatedAgeVerificationEntryPoint.swift"
                                          ,0x45,2,0x42,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100df3a74);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c57e80();
                  }
                }
                goto LAB_100df3754;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a368();
          }
          goto LAB_100df3754;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a3f8();
      goto LAB_100df3754;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100df3754:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100df3a74; end: 100df3b1f; -[SCAuthenticatedAgeVerificationEntryPoint setValue:forIvarName:] */

void FUN_100df3a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100df36c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100df3b20; end: 100df3bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3b20(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d37268,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37270,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37278,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37280,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37288,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37290,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d37298,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d372a0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100df3bf8; end: 100df3c17; -[SCAuthenticatedAgeVerificationEntryPoint init] */

void FUN_100df3bf8(void)

{
  FUN_100df3b20();
  return;
}



/* Entry: 100df3c18; end: 100df3c4b;  */

void FUN_100df3c18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100df3c4c; end: 100df3ce3; -[SCAuthenticatedAgeVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3c4c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d37268);
  func_0x000107c61610(param_1 + _DAT_112d37270);
  func_0x000107c61610(param_1 + _DAT_112d37278);
  func_0x000107c61610(param_1 + _DAT_112d37280);
  func_0x000107c61610(param_1 + _DAT_112d37288);
  func_0x000107c61610(param_1 + _DAT_112d37290);
  func_0x000107c61610(param_1 + _DAT_112d37298);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d372a0));
  return;
}



/* Entry: 100df3ce4; end: 100df3d03;  */

void FUN_100df3ce4(void)

{
  func_0x000107c61168(&PTR_PTR_112797b68);
  return;
}



/* Entry: 100df3d04; end: 100df3d0f; -[SCUnauthenticatedAgeVerificationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d372d0;
  func_0x000107c61428(param_1 + _DAT_112d372d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3d10; end: 100df3d1b; -[SCUnauthenticatedAgeVerificationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d372d0;
  func_0x000107c61428(param_1 + _DAT_112d372d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3d1c; end: 100df3d27; -[SCUnauthenticatedAgeVerificationEntryPoint unauthenticatedScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d372d8;
  func_0x000107c61428(param_1 + _DAT_112d372d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3d28; end: 100df3d33; -[SCUnauthenticatedAgeVerificationEntryPoint setUnauthenticatedScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d372d8;
  func_0x000107c61428(param_1 + _DAT_112d372d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3d34; end: 100df3d3f; -[SCUnauthenticatedAgeVerificationEntryPoint systemBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d372e0;
  func_0x000107c61428(param_1 + _DAT_112d372e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3d40; end: 100df3d4b; -[SCUnauthenticatedAgeVerificationEntryPoint setSystemBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d372e0;
  func_0x000107c61428(param_1 + _DAT_112d372e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3d4c; end: 100df3d57; -[SCUnauthenticatedAgeVerificationEntryPoint logInServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d372e8;
  func_0x000107c61428(param_1 + _DAT_112d372e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3d58; end: 100df3d63; -[SCUnauthenticatedAgeVerificationEntryPoint setLogInServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d372e8;
  func_0x000107c61428(param_1 + _DAT_112d372e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3d64; end: 100df3d6f; -[SCUnauthenticatedAgeVerificationEntryPoint ageVerificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3d64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d372f0;
  func_0x000107c61428(param_1 + _DAT_112d372f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3d70; end: 100df3db3;  */

void FUN_100df3d70(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df3db4; end: 100df3dbf; -[SCUnauthenticatedAgeVerificationEntryPoint setAgeVerificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df3db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d372f0;
  func_0x000107c61428(param_1 + _DAT_112d372f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3dc0; end: 100df3e13;  */

void FUN_100df3dc0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df3e14; end: 100df3fcf;  */

/* WARNING: Possible PIC construction at 0x000100df3f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df3f8c) */
/* WARNING: Removing unreachable block (ram,0x000100df3fac) */
/* WARNING: Removing unreachable block (ram,0x000100df3f2c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100df3f1c) */
/* WARNING: Removing unreachable block (ram,0x000100df3f0c) */
/* WARNING: Removing unreachable block (ram,0x000100df3f7c) */

void FUN_100df3e14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c5d1dc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5c5ec();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4bc0c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c3da3c();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar4;
        }
        else {
          lVar4 = 0;
          FUN_100de79fc();
          func_0x000107c613fc();
          *(long *)(lVar4 + 0x28) = unaff_x20;
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(long *)(lVar4 + 0x10) = lVar1;
          *(long *)(lVar4 + 0x18) = lVar2;
          *(long *)(lVar4 + 0x20) = lVar3;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(unaff_x20);
          FUN_100de6fec();
          lVar1 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100df3fd0; end: 100df3ff7; -[SCUnauthenticatedAgeVerificationEntryPoint begin] */

void FUN_100df3fd0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100df3e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100df3ff8; end: 100df403b; -[SCUnauthenticatedAgeVerificationEntryPoint end] */

void FUN_100df3ff8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df403c; end: 100df4323;  */

void FUN_100df403c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef510)) ||
         (func_0x000107c605b8(0xd000000000000014,0x800000010ef10af0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a150();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ef4f0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef10b10,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59b50();
        }
        else {
          uVar2 = 0;
          if (((param_2 == 0x7265536e49676f6c) && (param_3 == -0x12ffff8c9a9c968a)) ||
             (func_0x000107c605b8(0x7265536e49676f6c,0xed00007365636976,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c560a8();
          }
          else {
            uVar2 = 0xd000000000000017;
            if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef5d0)) &&
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef10a30,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "AgeVerificationFeature/SCUnauthenticatedAgeVerificationEntryPoint.swift"
                                  ,0x47,2,0x38,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100df4324);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52598();
          }
        }
      }
      goto LAB_100df40d0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100df40d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100df4324; end: 100df43cf; -[SCUnauthenticatedAgeVerificationEntryPoint setValue:forIvarName:] */

void FUN_100df4324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100df403c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100df43d0; end: 100df447f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df43d0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d372d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d372d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d372e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d372e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d372f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d372f8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100df4480; end: 100df449f; -[SCUnauthenticatedAgeVerificationEntryPoint init] */

void FUN_100df4480(void)

{
  FUN_100df43d0();
  return;
}



/* Entry: 100df44a0; end: 100df44d3;  */

void FUN_100df44a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100df44d4; end: 100df454b; -[SCUnauthenticatedAgeVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df44d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d372d0);
  func_0x000107c61610(param_1 + _DAT_112d372d8);
  func_0x000107c61610(param_1 + _DAT_112d372e0);
  func_0x000107c61610(param_1 + _DAT_112d372e8);
  func_0x000107c61610(param_1 + _DAT_112d372f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d372f8));
  return;
}



/* Entry: 100df454c; end: 100df456b;  */

void FUN_100df454c(void)

{
  func_0x000107c61168(&PTR_PTR_112797c58);
  return;
}



/* Entry: 100df456c; end: 100df4aaf;  */

uint FUN_100df456c(double param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong extraout_x13;
  long lVar12;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar11 = 0x112d373d0;
  dVar19 = param_1;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  lStack_90 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_a0 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = ((lVar18 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
           extraout_x12_00;
  lStack_88 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_02;
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    goto LAB_100df4a80;
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uStack_a0 = extraout_x13;
  lStack_98 = lVar18 - extraout_x12;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
LAB_100df47d4:
    pcVar16 = *(code **)(lVar17 + 0x38);
    uVar10 = 1;
  }
  else {
    lStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x2a);
    func_0x000107c6142c(uStack_78);
    lStack_80 = -0x2fffffffffffffd8;
    uStack_78 = 0x800000010ef10b80;
    func_0x000107c5fb78(uVar1,uVar2);
    uVar7 = uStack_78;
    lVar4 = lStack_80;
    func_0x000107c5fadc(lStack_80,uStack_78);
    func_0x000107c6142c(uVar7);
    lVar6 = lVar5;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    if (lVar6 == 0) goto LAB_100df47d4;
    uVar7 = 0x112d373e8;
    lStack_80 = lVar6;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    lVar5 = lVar14;
    func_0x000107c6147c(lVar14,&lStack_80,uVar7,lVar3,6);
    pcVar16 = *(code **)(lVar17 + 0x38);
    uVar10 = (uint)lVar5 ^ 1;
  }
  (*pcVar16)(lVar14,uVar10,1,lVar3);
  func_0x0001009f0578(lVar14,lVar11);
  pcVar15 = *(code **)(lVar17 + 0x30);
  lVar4 = lVar11;
  (*pcVar15)(lVar11,1,lVar3);
  lVar5 = lStack_98;
  if ((int)lVar4 == 1) {
    uVar9 = 2;
    if (param_1 <= 0.0) {
      uVar9 = 1;
    }
  }
  else {
    (**(code **)(lVar17 + 0x20))(lStack_98,lVar11,lVar3);
    func_0x000107c5eea0(lVar18);
    func_0x000107c5ee68(lVar5);
    pcVar13 = *(code **)(lVar17 + 8);
    (*pcVar13)(lVar18,lVar3);
    (*pcVar13)(lVar5,lVar3);
    if (param_1 <= 0.0) {
      uVar9 = 1;
    }
    else if (0.0 <= dVar19) {
      uVar9 = 4;
      if (dVar19 < param_1) {
        uVar9 = 5;
      }
    }
    else {
      uVar9 = 3;
    }
  }
  lVar18 = lStack_88;
  (*pcVar16)(lStack_88,1,1,lVar3);
  lVar11 = (long)*(int *)(lStack_90 + 0x30);
  func_0x0001009f0578(lVar14,lVar12);
  func_0x0001009f0578(lVar18,lVar12 + lVar11);
  lVar5 = lVar12;
  (*pcVar15)(lVar12,1,lVar3);
  if ((int)lVar5 == 1) {
    FUN_100df4c00(lVar18,0x112d373d8,&UNK_10d9014c0);
    lVar11 = lVar12 + lVar11;
    (*pcVar15)(lVar11,1,lVar3);
    if ((int)lVar11 == 1) {
      FUN_100df4c00(lVar12,0x112d373d8,&UNK_10d9014c0);
      uVar10 = 0;
    }
    else {
LAB_100df49b8:
      FUN_100df4c00(lVar12,0x112d373d0,&UNK_10d90f8f0);
      uVar10 = 0x100;
    }
  }
  else {
    func_0x0001009f0578(lVar12,uStack_a0);
    lVar18 = lVar12 + lVar11;
    (*pcVar15)(lVar18,1,lVar3);
    lVar5 = lStack_98;
    if ((int)lVar18 == 1) {
      FUN_100df4c00(lStack_88,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar17 + 8))(uStack_a0,lVar3);
      goto LAB_100df49b8;
    }
    lVar18 = lStack_98;
    (**(code **)(lVar17 + 0x20))(lStack_98,lVar12 + lVar11,lVar3);
    FUN_100df4c40();
    uVar8 = uStack_a0;
    func_0x000107c5fab8(uStack_a0,lVar5,lVar3,lVar18);
    pcVar16 = *(code **)(lVar17 + 8);
    (*pcVar16)(lVar5,lVar3);
    FUN_100df4c00(lStack_88,0x112d373d8,&UNK_10d9014c0);
    (*pcVar16)(uStack_a0,lVar3);
    FUN_100df4c00(lVar12,0x112d373d8,&UNK_10d9014c0);
    uVar10 = 0;
    if ((uVar8 & 1) == 0) {
      uVar10 = 0x100;
    }
  }
  FUN_100df4c00(lVar14,0x112d373d8,&UNK_10d9014c0);
LAB_100df4a80:
  return uVar10 | uVar9;
}



/* Entry: 100df4ab0; end: 100df4bb3;  */

/* WARNING: Possible PIC construction at 0x000100df4af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df4b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df4af4) */
/* WARNING: Removing unreachable block (ram,0x000100df4ba0) */
/* WARNING: Removing unreachable block (ram,0x000100df4af8) */
/* WARNING: Removing unreachable block (ram,0x000100df4b80) */

void FUN_100df4ab0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4ec80(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100df4bb4; end: 100df4bff;  */

void FUN_100df4bb4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100df4c00; end: 100df4c3f;  */

undefined8 FUN_100df4c00(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100df4c40; end: 100df4c83;  */

void FUN_100df4c40(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d373e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eea4(0xff);
  puVar2 = PTR___s10Foundation4DateVSQAAMc_110350be0;
  func_0x000107c61520(PTR___s10Foundation4DateVSQAAMc_110350be0,uVar1);
  puRam0000000112d373e0 = puVar2;
  return;
}



/* Entry: 100df4c84; end: 100df4e6b;  */

/* WARNING: Possible PIC construction at 0x000100df4e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df4e58) */

void FUN_100df4c84(double param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = 0x643033;
  if (param_1 != 2592000.0) {
    uVar7 = 0x6430335f7265766f;
  }
  uVar5 = 0xe300000000000000;
  if (param_1 != 2592000.0) {
    uVar5 = 0xe800000000000000;
  }
  uVar1 = 0x6430335f6f745f31;
  if (2592000.0 <= param_1) {
    uVar1 = uVar7;
  }
  uVar7 = 0xe800000000000000;
  if (2592000.0 <= param_1) {
    uVar7 = uVar5;
  }
  if (param_1 < 86400.0) {
    uVar7 = 0xe800000000000000;
    uVar1 = 0x64315f7265646e75;
  }
  uVar5 = 0x6f72657a;
  if (0.0 < param_1) {
    uVar5 = uVar1;
  }
  uVar1 = 0xe400000000000000;
  if (0.0 < param_1) {
    uVar1 = uVar7;
  }
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  uVar7 = 0x64657269707865;
  if (param_2 != 4) {
    uVar7 = 0x635f6e6968746977;
  }
  uVar1 = 0xe700000000000000;
  if (param_2 != 4) {
    uVar1 = 0xef6e776f646c6f6f;
  }
  uVar3 = 0xea00000000007765;
  uVar6 = 0x6b735f6b636f6c63;
  if (param_2 != 3) {
    uVar3 = uVar1;
    uVar6 = uVar7;
  }
  uVar7 = 0xed00006f72657a5f;
  uVar1 = 0x64656c6261736964;
  if (param_2 != 1) {
    uVar7 = 0xe900000000000064;
    uVar1 = 0x726f6365725f6f6e;
  }
  uVar2 = 0xea00000000006469;
  uVar4 = 0x5f726573755f6f6e;
  if (param_2 != 0) {
    uVar2 = uVar7;
    uVar4 = uVar1;
  }
  if (param_2 < 3) {
    uVar3 = uVar2;
    uVar6 = uVar4;
  }
  func_0x000107c5fadc(uVar6,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000104c64bec(uVar8,uVar5,uVar6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 100df4e6c; end: 100df4eaf;  */

void FUN_100df4e6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100df4eb0; end: 100df4eb7; -[_TtC36ClientDeclaredUnderageSignalProvider36ClientDeclaredUnderageSignalProvider preCheckSource] */

undefined8 FUN_100df4eb0(void)

{
  return 0x29;
}



/* Entry: 100df4eb8; end: 100df4f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df4eb8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d37498);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef10db0);
    lVar3 = lVar1;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar4 = lVar3;
      func_0x000107c5dc0c(lVar3);
      func_0x000107c61180();
      func_0x000107c49804();
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 100df4f8c; end: 100df5133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df4f8c(void)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d37498);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar8 = 0x800000010ef10d80;
    uVar4 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027);
    lVar5 = lVar3;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (lVar5 != 0) {
      func_0x000107c42c04(lVar5);
      lVar6 = lVar5;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c3dd54();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100df5134);
        (*pcVar2)();
      }
      lVar6 = lVar7;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar6);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar5);
        uVar1 = (uint)((ulong)uVar8 >> 0x20);
        uVar9 = uVar1 >> 0x1e;
        if (1 < uVar1 >> 0x1e) {
          if (uVar9 == 2) {
            func_0x00010006c090(lVar7,uVar8);
            return;
          }
          func_0x00010006c090(lVar7,uVar8);
          return;
        }
        if (uVar9 == 0) {
          func_0x00010006c090(lVar7,uVar8);
          return;
        }
        func_0x00010006c090(lVar7,uVar8);
        return;
      }
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 100df5134; end: 100df5167; -[_TtC36ClientDeclaredUnderageSignalProvider36ClientDeclaredUnderageSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100df5134(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100df5714();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100df5168; end: 100df52db;  */

/* WARNING: Possible PIC construction at 0x000100df522c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df5298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df5230) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df5168(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar5 = *(ulong *)(param_1 + _DAT_112f8e4c0);
  if (uVar5 < 0xd) {
    if ((1L << (uVar5 & 0x3f) & 0x1fd4U) != 0) {
      uVar4 = param_1;
      FUN_100df52dc();
      goto LAB_100df51c0;
    }
    if (uVar5 == 1) {
      uVar4 = 1;
      goto LAB_100df51c0;
    }
  }
  uVar4 = 0;
LAB_100df51c0:
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d374e0);
  func_0x000107c4b940(uVar7);
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112d374d8);
  *(undefined8 *)(unaff_x20 + _DAT_112d374d8) = 0;
  func_0x000107c5d278(uVar7);
  if (uVar6 == 0) {
    if ((uVar4 & 1) == 0) {
      FUN_100df4ab0();
      plVar2 = (long *)(unaff_x20 + _DAT_112d374c8);
      lVar3 = plVar2[3];
      func_0x0001000a8868(plVar2,lVar3);
      uVar7 = *(undefined8 *)(*plVar2 + 0x10);
      func_0x00010372e800(uVar5);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar3);
      func_0x000104c64e1c(uVar7,uVar5,1);
      uVar6 = uVar5;
    }
    else {
      FUN_100df53b0(param_1);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar6);
    func_0x000107c45a48(puVar1);
    func_0x000107c3fefc(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 100df52dc; end: 100df53af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100df52dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d37498);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010ef10c00);
    lVar3 = lVar1;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c5dc0c(lVar3);
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(lVar1);
      lVar1 = lVar3;
    }
    func_0x000107c615e8(lVar1);
  }
  return lVar5;
}



/* Entry: 100df53b0; end: 100df5577;  */

/* WARNING: Possible PIC construction at 0x000100df545c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df5460) */
/* WARNING: Removing unreachable block (ram,0x000100df546c) */
/* WARNING: Removing unreachable block (ram,0x000100df54e4) */
/* WARNING: Removing unreachable block (ram,0x000100df54b8) */
/* WARNING: Removing unreachable block (ram,0x000100df54e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df53b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d37498);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef10c30);
  lVar3 = lVar1;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar3 != 0) {
    func_0x000107c5dc0c(lVar3);
    func_0x000107c61180();
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 100df5578; end: 100df55c7; -[_TtC36ClientDeclaredUnderageSignalProvider36ClientDeclaredUnderageSignalProvider declaredAgeCompletedWith:] */

/* WARNING: Possible PIC construction at 0x000100df55b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df55b4) */

void FUN_100df5578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100df5168(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100df55c8; end: 100df55cb;  */

void FUN_100df55c8(void)

{
  return;
}



/* Entry: 100df55cc; end: 100df562b; -[_TtC36ClientDeclaredUnderageSignalProvider36ClientDeclaredUnderageSignalProvider init] */

void FUN_100df55cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClientDeclaredUnderageSignalProvider.ClientDeclaredUnderageSignalProvider",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100df55f8);
  (*pcVar1)();
}



/* Entry: 100df562c; end: 100df56f3; -[_TtC36ClientDeclaredUnderageSignalProvider36ClientDeclaredUnderageSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100df5648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df5668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df5698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df56c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df569c) */
/* WARNING: Removing unreachable block (ram,0x000100df566c) */
/* WARNING: Removing unreachable block (ram,0x000100df564c) */
/* WARNING: Removing unreachable block (ram,0x000100df56cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df562c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d37490));
  return;
}



/* Entry: 100df56f4; end: 100df5713;  */

void FUN_100df56f4(void)

{
  func_0x000107c61168(&PTR_PTR_112797d38);
  return;
}



/* Entry: 100df5714; end: 100df5d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100df5714(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *unaff_x20;
  double dVar11;
  
  FUN_100df4eb8();
  if ((param_1 & 1) == 0) {
    FUN_100df4f8c();
    if ((param_1 & 1) == 0) {
      plVar5 = (long *)(unaff_x20 + _DAT_112d374c8);
      func_0x0001000a8868(plVar5,plVar5[3]);
      func_0x000104c64b50(*(undefined8 *)(*plVar5 + 0x10),1);
      puVar6 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar6);
    }
    else {
      lVar3 = *(long *)(unaff_x20 + _DAT_112d374a0);
      func_0x000107c42eac();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100df5d8c);
        (*pcVar1)();
      }
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = lVar4;
        func_0x000107c41438();
        if (lVar3 == 2) {
          plVar5 = (long *)(unaff_x20 + _DAT_112d374c8);
          func_0x0001000a8868(plVar5,plVar5[3]);
          uVar10 = *(undefined8 *)(*plVar5 + 0x10);
          uVar2 = 0xd000000000000013;
          func_0x000107c5fadc(0xd000000000000013,0x800000010ef10d10);
          func_0x000104c649dc(uVar10,uVar2,1);
          func_0x000107c61170(uVar2);
          puVar6 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c451b0(puVar6);
        }
        else if (lVar3 == 1) {
          plVar5 = (long *)(unaff_x20 + _DAT_112d374c8);
          func_0x0001000a8868(plVar5,plVar5[3]);
          uVar10 = *(undefined8 *)(*plVar5 + 0x10);
          uVar2 = 0xd000000000000021;
          func_0x000107c5fadc(0xd000000000000021,0x800000010ef10d30);
          func_0x000104c649dc(uVar10,uVar2,1);
          func_0x000107c61170(uVar2);
          puVar6 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c451b0(puVar6);
        }
        else {
          lVar3 = *(long *)(unaff_x20 + _DAT_112d37498);
          func_0x000107c3fa04();
          func_0x000107c61180();
          if (lVar3 == 0) {
            dVar11 = 0.0;
          }
          else {
            uVar2 = 0xd00000000000002d;
            func_0x000107c5fadc(0xd00000000000002d,0x800000010ef10ce0);
            lVar7 = lVar3;
            func_0x000107c4c0d0(lVar3);
            func_0x000107c61170(uVar2);
            func_0x000107c615e8();
            dVar11 = (double)lVar7;
          }
          FUN_100df456c(dVar11);
          plVar5 = (long *)(unaff_x20 + _DAT_112d374c8);
          func_0x0001000a8868(plVar5,plVar5[3]);
          FUN_100df4c84(dVar11,lVar3);
          if (((uint)lVar3 & 0xff) == 5) {
            func_0x0001000a8868(plVar5,plVar5[3]);
            uVar10 = *(undefined8 *)(*plVar5 + 0x10);
            uVar2 = 0xd000000000000017;
            func_0x000107c5fadc(0xd000000000000017,0x800000010ef10cc0);
            func_0x000104c649dc(uVar10,uVar2,1);
            func_0x000107c61170(uVar2);
            puVar6 = PTR_PTR_1126ae558;
            func_0x000107c61168(PTR_PTR_1126ae558);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c45a48();
            func_0x000107c451b0(puVar6);
          }
          else {
            uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d374e0);
            func_0x000107c4b940(uVar2);
            lVar3 = _DAT_112d374d8;
            puVar8 = *(undefined **)(unaff_x20 + _DAT_112d374d8);
            if (puVar8 == (undefined *)0x0) {
              puVar9 = PTR_PTR_1126ae560;
              func_0x000107c610f8();
              func_0x000107c453e4();
              uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
              *(undefined **)(unaff_x20 + lVar3) = puVar9;
              func_0x000107c61174();
              func_0x000107c61170(uVar10);
              func_0x000107c5d278(uVar2);
              func_0x0001000a8868(plVar5,plVar5[3]);
              uVar10 = *(undefined8 *)(*plVar5 + 0x10);
              uVar2 = 0xd000000000000016;
              func_0x000107c5fadc(0xd000000000000016,0x800000010ef10c80);
              func_0x000104c649dc(uVar10,uVar2,1);
              func_0x000107c61170(uVar2);
              uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d374b8) + _DAT_113083868);
              func_0x00010372e4b4(0);
              func_0x000107c610f8();
              func_0x000107c61174(uVar2);
              func_0x00010372e2d8();
              func_0x00010372e17c(0);
              func_0x000107c610f8();
              func_0x000107c61174();
              puVar8 = unaff_x20;
              func_0x00010372dec8();
              func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d37490));
              puVar6 = puVar9;
              func_0x000107c43bf4(puVar9);
              func_0x000107c61180();
              func_0x000107c61170(lVar4);
              func_0x000107c61170(puVar9);
              goto LAB_100df59c0;
            }
            func_0x000107c61174();
            func_0x000107c5d278(uVar2);
            func_0x0001000a8868(plVar5,plVar5[3]);
            uVar10 = *(undefined8 *)(*plVar5 + 0x10);
            uVar2 = 0xd000000000000010;
            func_0x000107c5fadc(0xd000000000000010,0x800000010ef10ca0);
            func_0x000104c649dc(uVar10,uVar2,1);
            func_0x000107c61170(uVar2);
            puVar6 = puVar8;
            func_0x000107c43bf4(puVar8);
          }
        }
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        goto LAB_100df59c0;
      }
      plVar5 = (long *)(unaff_x20 + _DAT_112d374c8);
      func_0x0001000a8868(plVar5,plVar5[3]);
      uVar10 = *(undefined8 *)(*plVar5 + 0x10);
      uVar2 = 0xd00000000000001b;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010ef10c60);
      func_0x000104c649dc(uVar10,uVar2,1);
      func_0x000107c61170(uVar2);
      puVar6 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar6);
    }
  }
  else {
    plVar5 = (long *)(unaff_x20 + _DAT_112d374c8);
    func_0x0001000a8868(plVar5,plVar5[3]);
    uVar10 = *(undefined8 *)(*plVar5 + 0x10);
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010ef10d60);
    func_0x000104c649dc(uVar10,uVar2,1);
    func_0x000107c61170(uVar2);
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar6);
  }
  func_0x000107c61180();
LAB_100df59c0:
  func_0x000107c61170(puVar8);
  return puVar6;
}



/* Entry: 100df5d8c; end: 100df61a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100df5d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long alStack_120 [4];
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lStack_e0 = param_9;
  lStack_f0 = param_8;
  uStack_e8 = param_1;
  func_0x000107c613fc();
  uVar10 = *(undefined8 *)(param_9 + _DAT_113045f20);
  lVar1 = 0;
  uStack_d8 = unaff_x20;
  uStack_d0 = uVar10;
  func_0x000100df4e90();
  lVar7 = lVar1;
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a5d60;
  func_0x000107c610f8();
  func_0x000107c61174();
  alStack_120[3] = param_2;
  func_0x000107c61174();
  func_0x000107c61174();
  alStack_120[2] = param_4;
  func_0x000107c61174();
  alStack_120[1] = param_5;
  func_0x000107c61174();
  uStack_100 = param_6;
  func_0x000107c61174();
  lVar3 = lStack_f0;
  alStack_120[0] = param_7;
  func_0x000107c61174();
  func_0x000107c6157c(uVar10);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + 0x10) = puVar2;
  ppuStack_70 = &PTR_DAT_1103536f0;
  lVar4 = 0;
  lStack_f8 = lVar7;
  alStack_90[0] = lVar7;
  lStack_78 = lVar1;
  FUN_100df56f4();
  lStack_f0 = lVar4;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_90,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  lVar9 = _DAT_112d374d0;
  auStack_b8[0] = *puVar11;
  ppuStack_98 = &PTR_DAT_1103536f0;
  puVar2 = PTR_PTR_1126ae810;
  lStack_a0 = lVar1;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar9) = puVar2;
  *(undefined8 *)(lVar4 + _DAT_112d374d8) = 0;
  lVar9 = _DAT_112d374e0;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar10 = uStack_d0;
  lVar5 = alStack_120[3];
  lVar1 = alStack_120[2];
  lVar7 = alStack_120[1];
  *(undefined **)(lVar4 + lVar9) = puVar2;
  *(long *)(lVar4 + _DAT_112d37490) = alStack_120[3];
  *(undefined8 *)(lVar4 + _DAT_112d37498) = param_3;
  *(long *)(lVar4 + _DAT_112d374a0) = alStack_120[2];
  *(long *)(lVar4 + _DAT_112d374a8) = alStack_120[1];
  *(long *)(lVar4 + _DAT_112d374b8) = lVar3;
  *(undefined8 *)(lVar4 + _DAT_112d374c0) = uStack_d0;
  lVar9 = lVar4 + _DAT_112d374c8;
  FUN_100df61a4(auStack_b8);
  uVar12 = *(undefined8 *)(param_7 + _DAT_113083f78);
  func_0x000107c61174(lVar5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(lVar1);
  func_0x000107c61174();
  uVar6 = uStack_100;
  alStack_120[3] = lVar7;
  func_0x000107c61174();
  func_0x000107c61174(lVar3);
  func_0x000107c6157c(uVar10);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar10 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  lVar7 = 0;
  func_0x000100df4be0();
  func_0x000107c613fc();
  *(long *)(lVar7 + 0x18) = lVar9;
  *(undefined8 *)(lVar7 + 0x20) = uVar6;
  *(undefined8 *)(lVar7 + 0x10) = uVar10;
  *(long *)(lVar4 + _DAT_112d374b0) = lVar7;
  lStack_c0 = lStack_f0;
  plVar8 = &lStack_c8;
  lStack_c8 = lVar4;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  lVar7 = alStack_120[3];
  func_0x000107c61170(alStack_120[3]);
  func_0x000107c61170(lVar3);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61170(uVar6);
  lVar9 = alStack_120[0];
  func_0x000107c61170(alStack_120[0]);
  func_0x000107c61574(lStack_f8);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(alStack_90);
  uVar10 = uStack_e8;
  uVar12 = uStack_e8;
  func_0x000107c4e9e4(uStack_e8);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lStack_e0);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(uVar12);
  return uStack_d8;
}



/* Entry: 100df61a4; end: 100df61e7;  */

long FUN_100df61a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100df61e8; end: 100df6203;  */

void FUN_100df61e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100df6204; end: 100df6223;  */

void FUN_100df6204(void)

{
  func_0x000107c61168(&PTR_PTR_112d37550);
  return;
}



/* Entry: 100df6224; end: 100df622f; -[SCClientDeclaredUnderageSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df6224(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d375a8;
  func_0x000107c61428(param_1 + _DAT_112d375a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100df6230; end: 100df623b; -[SCClientDeclaredUnderageSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df6230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d375a8;
  func_0x000107c61428(param_1 + _DAT_112d375a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100df623c; end: 100df6247; -[SCClientDeclaredUnderageSignalProviderEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df623c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d375b0;
  func_0x000107c61428(param_1 + _DAT_112d375b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


