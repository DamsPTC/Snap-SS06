/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bbea90; end: 103bbeb3b;  */

void FUN_103bbea90(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar1 = &puStack_60;
  (**(code **)(unaff_x20 + 0x30))();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x48));
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_40 = 0x103bbf044;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106e15e0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  return;
}



/* Entry: 103bbeb3c; end: 103bbebb7;  */

void FUN_103bbeb3c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61610(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 103bbebb8; end: 103bbebbb;  */

void FUN_103bbebb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc60240;
  func_0x000107c61520(&UNK_10dc60240,&UNK_1106e15d0);
  puRam0000000112ff4050 = puVar1;
  return;
}



/* Entry: 103bbebbc; end: 103bbebfb;  */

void FUN_103bbebbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc60240;
  func_0x000107c61520(&UNK_10dc60240,&UNK_1106e15d0);
  puRam0000000112ff4050 = puVar1;
  return;
}



/* Entry: 103bbebfc; end: 103bbed5f;  */

int FUN_103bbebfc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bbec78;
        goto LAB_103bbec5c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bbec5c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103bbec78:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bbed60; end: 103bbed7f;  */

void FUN_103bbed60(void)

{
  func_0x000107c61168(&PTR_PTR_112ff4098);
  return;
}



/* Entry: 103bbed80; end: 103bbeda3;  */

void FUN_103bbed80(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ff4150;
  plVar5 = (long *)&UNK_10dc60350;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103bbeff4(0,0x112f4f080,&PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103bbeda4; end: 103bbee1b;  */

void FUN_103bbeda4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103bbeff4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103bbee1c; end: 103bbee2f;  */

ulong FUN_103bbee1c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bbef14);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bbef18);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c61168(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
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
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c61168(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
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
  FUN_103bbeff4(0,0x112f4f080,&PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bbefec);
  (*pcVar2)();
}



/* Entry: 103bbee30; end: 103bbefeb;  */

ulong FUN_103bbee30(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bbef14);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bbef18);
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
  FUN_103bbeff4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bbefec);
  (*pcVar2)();
}



/* Entry: 103bbefec; end: 103bbeff3;  */

void FUN_103bbefec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103bbea90();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103bbeff4; end: 103bbf033;  */

void FUN_103bbeff4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103bbf034; end: 103bbf047;  */

void FUN_103bbf034(long param_1,long param_2)

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



/* Entry: 103bbf048; end: 103bbf113;  */

undefined1  [16] FUN_103bbf048(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f1ab8a0);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1ab8c0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bbf114);
  (*pcVar1)();
}



/* Entry: 103bbf114; end: 103bbf11f; -[SCPreviewProgressEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4158;
  func_0x000107c61428(param_1 + _DAT_112ff4158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bbf120; end: 103bbf12b; -[SCPreviewProgressEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4158;
  func_0x000107c61428(param_1 + _DAT_112ff4158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103bbf12c; end: 103bbf137; -[SCPreviewProgressEntryPoint lensDataConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf12c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4160;
  func_0x000107c61428(param_1 + _DAT_112ff4160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bbf138; end: 103bbf17b;  */

void FUN_103bbf138(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103bbf17c; end: 103bbf187; -[SCPreviewProgressEntryPoint setLensDataConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4160;
  func_0x000107c61428(param_1 + _DAT_112ff4160,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103bbf188; end: 103bbf1db;  */

void FUN_103bbf188(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103bbf1dc; end: 103bbf2c3;  */

/* WARNING: Possible PIC construction at 0x000103bbf268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bbf26c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_103bbf1dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c4b024();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = 0;
    FUN_103bbd0e4();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x18) = unaff_x20;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(long *)(lVar2 + 0x10) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    FUN_103bbcca8();
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103bbf2c4; end: 103bbf2eb; -[SCPreviewProgressEntryPoint begin] */

void FUN_103bbf2c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103bbf1dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bbf2ec; end: 103bbf537; -[SCPreviewProgressEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf2ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112ff4168);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_103bbcf6c();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_103bbf380;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_103bbf380:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103bbf538; end: 103bbf5e3; -[SCPreviewProgressEntryPoint setValue:forIvarName:] */

void FUN_103bbf538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000103bbf3a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103bbf5e4; end: 103bbf657; -[SCPreviewProgressEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf5e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ff4158,0);
  func_0x000107c61614(param_1 + _DAT_112ff4160,0);
  *(undefined8 *)(param_1 + _DAT_112ff4168) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bbf658; end: 103bbf68b;  */

void FUN_103bbf658(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bbf68c; end: 103bbf6d3; -[SCPreviewProgressEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf68c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ff4158);
  func_0x000107c61610(param_1 + _DAT_112ff4160);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff4168));
  return;
}



/* Entry: 103bbf6d4; end: 103bbf6f3;  */

void FUN_103bbf6d4(void)

{
  func_0x000107c61168(&PTR_PTR_11293ef78);
  return;
}



/* Entry: 103bbf6f4; end: 103bbf703; -[_TtC28SCPreviewUCOProgressScopeAPI30SCPreviewSnapSaveProgressScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4198));
  return;
}



/* Entry: 103bbf704; end: 103bbf74b; -[_TtC28SCPreviewUCOProgressScopeAPI30SCPreviewSnapSaveProgressScope anchorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf704(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff41a0;
  func_0x000107c61428(param_1 + _DAT_112ff41a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bbf74c; end: 103bbf7a3; -[_TtC28SCPreviewUCOProgressScopeAPI30SCPreviewSnapSaveProgressScope setAnchorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff41a0;
  func_0x000107c61428(param_1 + _DAT_112ff41a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103bbf7a4; end: 103bbf7b3; -[_TtC28SCPreviewUCOProgressScopeAPI30SCPreviewSnapSaveProgressScope progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff41a8));
  return;
}



/* Entry: 103bbf7b4; end: 103bbf843; -[_TtC28SCPreviewUCOProgressScopeAPI30SCPreviewSnapSaveProgressScope cancelHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf7b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff41b0);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106e16e8;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103bbf844; end: 103bbf933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103bbf844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112ff41a0;
  func_0x000107c61614(unaff_x20 + _DAT_112ff41a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ff4198) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ff41a8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff41b0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar4;
}



/* Entry: 103bbf934; end: 103bbfa3b; -[_TtC28SCPreviewUCOProgressScopeAPI30SCPreviewSnapSaveProgressScope initWithPresentingViewController:anchorView:progressObservable:cancelHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbf934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  puVar4 = &UNK_1106e16d0;
  func_0x000107c613fc(&UNK_1106e16d0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  lVar2 = _DAT_112ff41a0;
  func_0x000107c61614(param_1 + _DAT_112ff41a0,0);
  *(undefined8 *)(param_1 + _DAT_112ff4198) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112ff41a8) = param_5;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff41b0);
  *puVar1 = FUN_103bbfaec;
  puVar1[1] = puVar4;
  puVar4 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_78,puVar4);
  return;
}



/* Entry: 103bbfa3c; end: 103bbfa6f;  */

void FUN_103bbfa3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bbfa70; end: 103bbfacb; -[_TtC28SCPreviewUCOProgressScopeAPI30SCPreviewSnapSaveProgressScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbfa70(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4198));
  func_0x000107c61610(param_1 + _DAT_112ff41a0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff41a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff41b0 + 8));
  return;
}



/* Entry: 103bbfacc; end: 103bbfaeb;  */

void FUN_103bbfacc(void)

{
  func_0x000107c61168(&PTR_PTR_11293f040);
  return;
}



/* Entry: 103bbfaec; end: 103bbfb13;  */

void FUN_103bbfaec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103bbfaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103bbfb14; end: 103bbfb47; -[SCPreviewFilterCarouselItem isReverseMotionFilter] */

uint FUN_103bbfb14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bbfb48();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103bbfb48; end: 103bbfc0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103bbfb48(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  
  if (*(int *)(unaff_x20 + _DAT_11302c968) == 2) {
    lVar4 = *(long *)(unaff_x20 + _DAT_11302c960);
    lVar1 = ((long *)(unaff_x20 + _DAT_11302c960))[1];
    lVar2 = 3;
    func_0x000108edf4d4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      if (lVar4 == lVar3 && lVar1 == param_2) {
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8(lVar4,lVar1,lVar3,param_2,0);
        uVar5 = (uint)lVar4;
      }
      func_0x000107c6142c(param_2);
      goto LAB_103bbfbf4;
    }
  }
  uVar5 = 0;
LAB_103bbfbf4:
  return uVar5 & 1;
}



/* Entry: 103bbfc0c; end: 103bbfc13; +[SCPreviewFilterTypeMapper previewFilterTypeFrom:] */

undefined8 FUN_103bbfc0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 9) {
    return *(undefined8 *)(&UNK_10dc60400 + param_3 * 8);
  }
  return 0;
}



/* Entry: 103bbfc14; end: 103bbfc4f; -[SCPreviewFilterTypeMapper init] */

void FUN_103bbfc14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bbfc50; end: 103bbfc83;  */

void FUN_103bbfc50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bbfc84; end: 103bbfca3;  */

undefined8 FUN_103bbfc84(ulong param_1)

{
  if (param_1 < 9) {
    return *(undefined8 *)(&UNK_10dc60400 + param_1 * 8);
  }
  return 0;
}



/* Entry: 103bbfca4; end: 103bbfcc3;  */

void FUN_103bbfca4(void)

{
  func_0x000107c61168(&PTR_PTR_11293f118);
  return;
}



/* Entry: 103bbfcc4; end: 103bbfce3; -[PreviewFilterDataServices geoFilterProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbfcc4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff4208));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bbfce4; end: 103bbfd03; -[PreviewFilterDataServices geoFilterPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbfce4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff4210));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bbfd04; end: 103bbfd23; -[PreviewFilterDataServices batchCatpureFilterContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbfd04(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff4218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bbfd24; end: 103bbfe0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbfd24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4208) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4210) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4218) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bbfe0c; end: 103bbfe6b; -[PreviewFilterDataServices init] */

void FUN_103bbfe0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFilterDataServices.PreviewFilterDataServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bbfe38);
  (*pcVar1)();
}



/* Entry: 103bbfe6c; end: 103bbfeb3; -[PreviewFilterDataServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bbfe88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bbfe8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bbfe6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff4208));
  return;
}



/* Entry: 103bbfeb4; end: 103bbfed3;  */

void FUN_103bbfeb4(void)

{
  func_0x000107c61168(&PTR_PTR_11293f1c8);
  return;
}



/* Entry: 103bbfed4; end: 103bc0cff;  */

void FUN_103bbfed4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103bc0d00; end: 103bc0d17;  */

bool FUN_103bc0d00(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103bc0d18; end: 103bc0d57;  */

void FUN_103bc0d18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc605f0;
  func_0x000107c61520(&UNK_10dc605f0,&UNK_1106e1c48);
  puRam0000000112ff4260 = puVar1;
  return;
}



/* Entry: 103bc0d58; end: 103bc0e03;  */

void FUN_103bc0d58(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bc0e04; end: 103bc0e3b;  */

void FUN_103bc0e04(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103bc0e3c; end: 103bc0fe3;  */

void FUN_103bc0e3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x000107c61170(*param_1);
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103bc0fe4; end: 103bc0ff3; -[SCMemoriesClientGenContentModelMakerDataModel localEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc0fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4268));
  return;
}



/* Entry: 103bc0ff4; end: 103bc1003; -[SCMemoriesClientGenContentModelMakerDataModel originalSnapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc0ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4270));
  return;
}



/* Entry: 103bc1004; end: 103bc1013; -[SCMemoriesClientGenContentModelMakerDataModel collectionCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bc1004(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff4278);
}



/* Entry: 103bc1014; end: 103bc1023; -[SCMemoriesClientGenContentModelMakerDataModel workflowValidation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4280));
  return;
}



/* Entry: 103bc1024; end: 103bc106f; -[SCMemoriesClientGenContentModelMakerDataModel identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1024(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4288);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff4288))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc1070; end: 103bc107f; -[SCMemoriesClientGenContentModelMakerDataModel priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bc1070(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff4290);
}



/* Entry: 103bc1080; end: 103bc108f; -[SCMemoriesClientGenContentModelMakerDataModel loggingToolbox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4298));
  return;
}



/* Entry: 103bc1090; end: 103bc10a3; -[SCMemoriesClientGenContentModelMakerDataModel allowedOrigins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1090(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff42a0);
  (*(code *)&SUB_1002ed07c)(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc10a4; end: 103bc10b7; -[SCMemoriesClientGenContentModelMakerDataModel operations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc10a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff42a8);
  FUN_103bc7b64(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc10b8; end: 103bc1103;  */

void FUN_103bc10b8(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_4)(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc1104; end: 103bc12eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4268) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4270) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4278) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4280) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4288);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4290) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4298) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff42a0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ff42a8) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc12ec; end: 103bc13df; -[SCMemoriesClientGenContentModelMakerDataModel initWithLocalEntry:originalSnapDoc:collectionCategory:workflowValidation:identifier:priority:loggingToolbox:allowedOrigins:operations:] */

void FUN_103bc12ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_7);
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c5fc54(param_10,uVar1);
  uVar1 = 0;
  FUN_103bc7b64(0);
  func_0x000107c5fc54(param_11,uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_9);
  func_0x000103bc11f8(param_3,param_4,param_5,param_6,param_7,param_2,param_8,param_9,param_10,
                      param_11);
  return;
}



/* Entry: 103bc13e0; end: 103bc141f;  */

undefined8 FUN_103bc13e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103bc15d8(param_1);
  func_0x0001022b1a38(param_1);
  return uVar1;
}



/* Entry: 103bc1420; end: 103bc1423; -[SCMemoriesClientGenContentModelMakerDataModel copyWithZone:] */

void FUN_103bc1420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc1424; end: 103bc1457; -[SCMemoriesClientGenContentModelMakerDataModel description] */

void FUN_103bc1424(void)

{
  undefined1 auStack_f0 [224];
  
  FUN_103bc1794(auStack_f0);
  func_0x0001022b1a38(auStack_f0);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc1458; end: 103bc14cf;  */

void FUN_103bc1458(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_103bc1794(&uStack_110);
  func_0x000107c61170(param_2);
  param_1[0x15] = uStack_68;
  param_1[0x14] = uStack_70;
  param_1[0x17] = uStack_58;
  param_1[0x16] = uStack_60;
  param_1[0x19] = uStack_48;
  param_1[0x18] = uStack_50;
  param_1[0x1b] = uStack_38;
  param_1[0x1a] = uStack_40;
  param_1[0xd] = uStack_a8;
  param_1[0xc] = uStack_b0;
  param_1[0xf] = uStack_98;
  param_1[0xe] = uStack_a0;
  param_1[0x11] = uStack_88;
  param_1[0x10] = uStack_90;
  param_1[0x13] = uStack_78;
  param_1[0x12] = uStack_80;
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  return;
}



/* Entry: 103bc14d0; end: 103bc154b; -[SCMemoriesClientGenContentModelMakerDataModel init] */

void FUN_103bc14d0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentModelMakerPlugInScope/SCMemoriesClientGenContentModelMakerDataModelWrapper.swift"
                      ,0x6a,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc1518);
  (*pcVar1)();
}



/* Entry: 103bc154c; end: 103bc15d7; -[SCMemoriesClientGenContentModelMakerDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bc159c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bc15bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc15a0) */
/* WARNING: Removing unreachable block (ram,0x000103bc15c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc154c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4268));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4270));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4280));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff4288 + 8))
  ;
  return;
}



/* Entry: 103bc15d8; end: 103bc1793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc15d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_170 [8];
  undefined8 auStack_168 [16];
  undefined8 uStack_e8;
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
  
  func_0x000107c614f0();
  uVar4 = *param_1;
  uVar2 = *(undefined1 *)(param_1 + 1);
  FUN_103bbfed4(uVar4,uVar2);
  FUN_103bc24b4(uVar4,uVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112ff4268) = uVar4;
  uVar4 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112ff4270) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112ff4278) = uVar4;
  uVar4 = param_1[4];
  uVar1 = param_1[5];
  uVar2 = *(undefined1 *)(param_1 + 6);
  func_0x000107c61174();
  func_0x000103bc0488(uVar4,uVar1,uVar2);
  FUN_103bc2ae8(uVar4,uVar1,uVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112ff4280) = uVar4;
  uStack_58 = param_1[8];
  uStack_60 = param_1[7];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ff4288);
  puVar3[1] = uStack_58;
  *puVar3 = uStack_60;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4290) = param_1[9];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_88 = param_1[0x15];
  uStack_90 = param_1[0x14];
  uStack_78 = param_1[0x17];
  uStack_80 = param_1[0x16];
  uStack_68 = param_1[0x19];
  uStack_70 = param_1[0x18];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  FUN_103bc3ab8(0);
  func_0x000107c610f8();
  func_0x000100402194(&uStack_60,auStack_168);
  func_0x000103bc04b8(&uStack_e0,auStack_168);
  puVar3 = &uStack_e0;
  FUN_103bc3620();
  *(undefined8 **)(unaff_x20 + _DAT_112ff4298) = puVar3;
  auStack_168[0] = param_1[0x1a];
  uStack_e8 = param_1[0x1b];
  *(undefined8 *)(unaff_x20 + _DAT_112ff42a0) = auStack_168[0];
  *(undefined8 *)(unaff_x20 + _DAT_112ff42a8) = uStack_e8;
  FUN_103bc1954(auStack_168,auStack_170,0x112da1fa0,&UNK_10d945e90);
  FUN_103bc1954(&uStack_e8,auStack_170,0x112e7a800,&UNK_10da84ba8);
  func_0x000107c61154(&stack0xfffffffffffffe80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc1794; end: 103bc1933;  */

/* WARNING: Possible PIC construction at 0x000103bc18fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc1900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1794(long *param_1,long param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar5 = *(long *)(param_2 + _DAT_112ff4268);
  if (*(char *)(lVar5 + _DAT_112ff4328) == '\x01') {
    lVar5 = *(long *)(lVar5 + _DAT_112ff4330);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103bc1930);
      (*pcVar3)();
    }
    func_0x000107c61174(lVar5);
    uStack_ec = 1;
  }
  else {
    lVar5 = *(long *)(lVar5 + _DAT_112ff4338);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103bc1934);
      (*pcVar3)();
    }
    func_0x000107c615f0(lVar5);
    uStack_ec = 0;
  }
  lVar7 = *(long *)(param_2 + _DAT_112ff4270);
  lVar6 = *(long *)(param_2 + _DAT_112ff4278);
  lVar4 = *(long *)(param_2 + _DAT_112ff4280);
  func_0x000103bc2c14();
  lVar1 = *(long *)(param_2 + _DAT_112ff4288);
  lVar2 = ((long *)(param_2 + _DAT_112ff4288))[1];
  lVar9 = *(long *)(param_2 + _DAT_112ff4290);
  FUN_103bc3914(&lStack_e8,*(undefined8 *)(param_2 + _DAT_112ff4298));
  lVar10 = *(long *)(param_2 + _DAT_112ff42a0);
  lVar8 = *(long *)(param_2 + _DAT_112ff42a8);
  *param_1 = lVar5;
  *(undefined1 *)(param_1 + 1) = uStack_ec;
  param_1[2] = lVar7;
  param_1[3] = lVar6;
  param_1[4] = lVar4;
  param_1[5] = param_3;
  *(undefined1 *)(param_1 + 6) = param_4;
  param_1[7] = lVar1;
  param_1[8] = lVar2;
  param_1[9] = lVar9;
  param_1[0xf] = lStack_c0;
  param_1[0xe] = lStack_c8;
  param_1[0x11] = lStack_b0;
  param_1[0x10] = lStack_b8;
  param_1[0xb] = lStack_e0;
  param_1[10] = lStack_e8;
  param_1[0xd] = lStack_d0;
  param_1[0xc] = lStack_d8;
  param_1[0x17] = lStack_80;
  param_1[0x16] = lStack_88;
  param_1[0x19] = lStack_70;
  param_1[0x18] = lStack_78;
  param_1[0x13] = lStack_a0;
  param_1[0x12] = lStack_a8;
  param_1[0x15] = lStack_90;
  param_1[0x14] = lStack_98;
  param_1[0x1a] = lVar10;
  param_1[0x1b] = lVar8;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(lVar2);
  return;
}



/* Entry: 103bc1934; end: 103bc1953;  */

void FUN_103bc1934(void)

{
  func_0x000107c61168(&PTR_PTR_11293f298);
  return;
}



/* Entry: 103bc1954; end: 103bc1a47;  */

undefined8 FUN_103bc1954(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103bc1a48; end: 103bc1a87;  */

void FUN_103bc1a48(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103bc1a88; end: 103bc1aab; -[SCMemoriesClientGenContentModelMakerSource description] */

void FUN_103bc1a88(void)

{
  FUN_103bc1e54();
  func_0x000103bc0b2c();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc1aac; end: 103bc1af3; -[SCMemoriesClientGenContentModelMakerSource init] */

void FUN_103bc1aac(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentModelMakerPlugInScope/SCMemoriesClientGenContentModelMakerSourceWrapper.swift"
                      ,0x67,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc1af4);
  (*pcVar1)();
}



/* Entry: 103bc1af4; end: 103bc1af7; -[SCMemoriesClientGenContentModelMakerSource copyWithZone:] */

void FUN_103bc1af4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc1af8; end: 103bc1ba7; +[SCMemoriesClientGenContentModelMakerSource serverResponseWithCollections:collectionIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  uVar1 = 0;
  FUN_103bc20d0(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff42d8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff42e0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff42e8) = param_4;
  *(undefined8 *)(lVar2 + _DAT_112ff42f0) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc1ba8; end: 103bc1cbf; +[SCMemoriesClientGenContentModelMakerSource crFeaturedStoryWithCrFeaturedStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  uVar1 = 0;
  func_0x00010449260c(0);
  func_0x000107c5fc54(param_3,uVar1);
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff42d8) = 1;
  *(undefined8 *)(lVar2 + _DAT_112ff42e0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff42e8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff42f0) = param_3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc1cc0; end: 103bc1d13; -[SCMemoriesClientGenContentModelMakerSource matchServerResponse:crFeaturedStory:] */

void FUN_103bc1cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000103bc1c3c(FUN_103bc20c0,auStack_40,0x103bc20c8,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bc1d14; end: 103bc1d8b;  */

/* WARNING: Possible PIC construction at 0x000103bc1d74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc1d78) */

void FUN_103bc1d14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103bc20d0(0);
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bc1d8c; end: 103bc1dd7;  */

void FUN_103bc1d8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010449260c(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bc1dd8; end: 103bc1e0b;  */

void FUN_103bc1dd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bc1e0c; end: 103bc1e53; -[SCMemoriesClientGenContentModelMakerSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bc1e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc1e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc1e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff42e0));
  return;
}



/* Entry: 103bc1e54; end: 103bc1ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bc1e54(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_112ff42d8) == '\x01') {
    lVar2 = *(long *)(param_1 + _DAT_112ff42f0);
    lVar3 = lVar2;
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc1ef0);
      (*pcVar1)();
    }
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112ff42e0);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc1ef4);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_1 + _DAT_112ff42e8);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc1ef8);
      (*pcVar1)();
    }
    func_0x000107c61434(lVar3);
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 103bc1ef8; end: 103bc1f17;  */

void FUN_103bc1ef8(void)

{
  func_0x000107c61168(&PTR_PTR_11293f3a0);
  return;
}



/* Entry: 103bc1f18; end: 103bc207f;  */

int FUN_103bc1f18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bc1f94;
        goto LAB_103bc1f78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bc1f78:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103bc1f94:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bc2080; end: 103bc20bf;  */

void FUN_103bc2080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc60770;
  func_0x000107c61520(&UNK_10dc60770,&UNK_1106e1dc0);
  puRam0000000112ff4320 = puVar1;
  return;
}



/* Entry: 103bc20c0; end: 103bc20cf;  */

/* WARNING: Possible PIC construction at 0x000103bc1d74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc1d78) */

void FUN_103bc20c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_103bc20d0(0);
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bc20d0; end: 103bc2113;  */

void FUN_103bc20d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d61d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bf9a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d61d40 = puVar1;
  return;
}



/* Entry: 103bc2114; end: 103bc21bf;  */

void FUN_103bc2114(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bc21c0; end: 103bc21ff;  */

void FUN_103bc21c0(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}


