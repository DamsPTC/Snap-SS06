/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038df598; end: 1038df6ff;  */

undefined8
FUN_1038df598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 unaff_x20;
  
  lVar1 = param_1;
  func_0x0001038e04d0();
  func_0x000107c6142c(param_1);
  if (lVar1 == 0) {
    func_0x000107c615e8(param_2);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(param_6);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_7);
    func_0x000107c614f0();
    func_0x000107c61464();
    unaff_x20 = 0;
  }
  else {
    func_0x0001038e2bfc(lVar1,0);
    if (param_6 == 0) {
      param_5 = 0;
    }
    else {
      func_0x000107c5fadc(param_5,param_6);
      func_0x000107c6142c(param_6);
    }
    func_0x000107c47674();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_5);
    func_0x000107c615e8(param_2);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
  }
  return unaff_x20;
}



/* Entry: 1038df700; end: 1038dfb87; -[MemoriesQuickCutScope initWithUntypedItems:uiContainer:scopeRemover:source:contextSessionId:preselectedAssets:valdiRuntimeProvider:] */

void FUN_1038df700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR___syXlN_11034f1a0 + 8;
  func_0x000107c5fc54(param_3,puVar1);
  if (param_7 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  FUN_1038df598(param_3,param_4,param_5,param_6,param_7,puVar1,param_8,param_9);
  return;
}



/* Entry: 1038dfb88; end: 1038dfc4b; -[MemoriesQuickCutScope initWithUntypedItems:uiContainer:scopeRemover:source:contextSessionId:preselectedAssets:launchBehavior:] */

void FUN_1038dfb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR___syXlN_11034f1a0 + 8;
  func_0x000107c5fc54(param_3,puVar1);
  if (param_7 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_8);
  func_0x0001038df7cc(param_3,param_4,param_5,param_6,param_7,puVar1,param_8,param_9);
  return;
}



/* Entry: 1038dfc4c; end: 1038dfcab; -[MemoriesQuickCutScope init] */

void FUN_1038dfc4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutScopeAPI.MemoriesQuickCutScope",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038dfc78);
  (*pcVar1)();
}



/* Entry: 1038dfcac; end: 1038dfd93; -[MemoriesQuickCutScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038dfd28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038dfd2c) */
/* WARNING: Removing unreachable block (ram,0x00010101217c) */
/* WARNING: Removing unreachable block (ram,0x000101012188) */
/* WARNING: Removing unreachable block (ram,0x000101012180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dfcac(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000100fc3f6c(*(undefined8 *)(param_1 + _DAT_112facaf0),
                      ((undefined8 *)(param_1 + _DAT_112facaf0))[1]);
  func_0x000100fc3b98(param_1 + _DAT_11380bbc8);
  puVar1 = (undefined8 *)(param_1 + _DAT_11380bbd0);
  func_0x000100fc3fa0(*puVar1,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_11380bbd8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_11380bbe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11380bbe8));
  return;
}



/* Entry: 1038dfd94; end: 1038dfda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038dfd94(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11380bbc8;
  lVar2 = 0;
  FUN_1038e5950();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 1038dfda8; end: 1038dfe03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038dfda8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bbd0);
  uVar2 = *puVar1;
  func_0x000100fc3f8c(uVar2,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  return uVar2;
}



/* Entry: 1038dfe04; end: 1038dfe33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038dfe04(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11380bbd8);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 1038dfe34; end: 1038dfe43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dfe34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + _DAT_11380bbe0));
  return;
}



/* Entry: 1038dfe44; end: 1038dfecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038dfe44(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_11380bbf0;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 1038dfecc; end: 1038dfedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038dfecc(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _DAT_11380bc00);
}



/* Entry: 1038dfedc; end: 1038dfef7;  */

void FUN_1038dfedc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1038dfef8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1038dfef8; end: 1038e001b;  */

undefined * FUN_1038dfef8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e001c);
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
    puVar3 = param_1;
    FUN_1038e001c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1038e3ba0(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1038e001c; end: 1038e0077;  */

void FUN_1038e001c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1038e3ba0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112facb40;
  plVar5 = (long *)&UNK_10dc1f410;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1038e0078; end: 1038e0213;  */

ulong FUN_1038e0078(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e0148);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e014c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1038e3ba0(0);
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
    FUN_1038e3ba0(0);
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
  func_0x000107c5fb78(0xd00000000000001e,0x800000010f174e80);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e0214);
  (*pcVar2)();
}



/* Entry: 1038e0214; end: 1038e080b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e0214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_b0 [5];
  undefined1 auStack_78 [24];
  
  auStack_b0[0] = param_4;
  auStack_b0[1] = param_5;
  auStack_b0[2] = param_6;
  auStack_b0[4] = param_8;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1038e5950();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar9 = (undefined8 *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  *(undefined8 *)(unaff_x20 + _DAT_11380bbf0 + 8) = 0;
  uVar5 = 0;
  func_0x000107c61614();
  FUN_1038e28a0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facaf0);
  *puVar1 = param_1;
  puVar1[1] = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_11380bbe0) = param_2;
  lVar8 = 0x112facaf8;
  func_0x0001000285a8(0x112facaf8,&UNK_10dc1f340);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61474(lVar8);
  func_0x000107c61614(lVar8 + 0x70,0);
  uVar5 = 1;
  func_0x000107c61428(lVar8 + 0x70,auStack_78,1,0);
  uVar10 = param_3;
  func_0x000107c61604(lVar8 + 0x70);
  func_0x000107c615e8();
  *(long *)(unaff_x20 + _DAT_11380bbe8) = lVar8;
  func_0x000107c5eec4(lVar7);
  func_0x000107c5eeac();
  (**(code **)(lVar11 + 8))(lVar7,lVar3);
  func_0x000107c5eea0((long)puVar9 + (long)*(int *)(lVar4 + 0x14));
  *puVar9 = param_3;
  puVar9[1] = uVar10;
  uVar10 = auStack_b0[1];
  *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar4 + 0x18)) = auStack_b0[0];
  uVar2 = auStack_b0[2];
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar4 + 0x1c));
  *puVar1 = uVar10;
  puVar1[1] = uVar2;
  func_0x000100fd1c94(puVar9,unaff_x20 + _DAT_11380bbc8);
  if (param_7 == 0) {
    uVar10 = 0;
    lVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_7 + _DAT_112facbd0);
    uVar5 = ((undefined8 *)(param_7 + _DAT_112facbd0))[1];
    lVar8 = *(long *)(param_7 + _DAT_112facbd8);
    if (lVar8 == 0) {
      func_0x000107c61434(uVar5);
      lVar8 = 0;
      uVar6 = 1;
    }
    else {
      func_0x000107c61434(uVar5);
      func_0x000107c5d38c();
      uVar6 = 0;
    }
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bbd0);
  *puVar1 = uVar10;
  puVar1[1] = uVar5;
  puVar1[2] = lVar8;
  *(undefined1 *)(puVar1 + 3) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_11380bbd8) = auStack_b0[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bbf8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380bc00) = 0;
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038e080c; end: 1038e082f;  */

undefined8 FUN_1038e080c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038e0830; end: 1038e0837;  */

void FUN_1038e0830(void)

{
  if (lRam0000000112facb28 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e78b120);
  return;
}



/* Entry: 1038e0838; end: 1038e086f;  */

void FUN_1038e0838(undefined8 param_1)

{
  if (lRam0000000112facb28 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e78b120);
  return;
}



/* Entry: 1038e0870; end: 1038e0933;  */

void FUN_1038e0870(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = &UNK_10dc1f378;
  lVar1 = 0x13f;
  FUN_1038e5950();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &UNK_10dc1f390;
    puStack_50 = &UNK_10dc1f3a8;
    puStack_48 = &UNK_10dc1f3c0;
    puStack_40 = PTR___sBoWV_11034d678 + 0x40;
    puStack_38 = &UNK_10dc1f3d8;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = &UNK_10dc1f3f0;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 1038e0934; end: 1038e0973;  */

void FUN_1038e0934(void)

{
  undefined *puVar1;
  
  if (puRam0000000112facb38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f4dc;
  func_0x000107c61520(&UNK_10dc1f4dc,&UNK_1106a7d08);
  puRam0000000112facb38 = puVar1;
  return;
}



/* Entry: 1038e0974; end: 1038e0997;  */

undefined8 FUN_1038e0974(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  uVar2 = param_2[1];
  uVar7 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_1[3];
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    if (((uVar5 != *param_2) || (uVar1 != uVar2)) &&
       (func_0x000107c605b8(uVar5,uVar1,*param_2,uVar2,0), (uVar5 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)uVar4 == '\x01') {
    if ((char)uVar3 == '\x01') {
      return 1;
    }
  }
  else if (((char)uVar3 != '\x01') && (uVar6 == uVar7)) {
    return 1;
  }
  return 0;
}



/* Entry: 1038e0998; end: 1038e0a47;  */

undefined8
FUN_1038e0998(ulong param_1,long param_2,long param_3,char param_4,ulong param_5,long param_6,
             long param_7,char param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == '\x01') {
    if (param_8 == '\x01') {
      return 1;
    }
  }
  else if ((param_8 != '\x01') && (param_3 == param_7)) {
    return 1;
  }
  return 0;
}



/* Entry: 1038e0a48; end: 1038e0a73;  */

long FUN_1038e0a48(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038e0a74; end: 1038e0a7b;  */

void FUN_1038e0a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038e0a7c; end: 1038e0ab7;  */

undefined8 * FUN_1038e0a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038e0ab8; end: 1038e0b13;  */

undefined8 * FUN_1038e0ab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 1038e0b14; end: 1038e0b57;  */

undefined8 * FUN_1038e0b14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1038e0b58; end: 1038e0c2b;  */

int FUN_1038e0b58(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038e0c2c; end: 1038e0c7b;  */

undefined8 * FUN_1038e0c2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100f9d71c(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100f9d754(uVar3,uVar2);
  return param_1;
}



/* Entry: 1038e0c7c; end: 1038e0cb7;  */

undefined8 * FUN_1038e0c7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100f9d754(uVar3,uVar2);
  return param_1;
}



/* Entry: 1038e0cb8; end: 1038e0d67;  */

int FUN_1038e0cb8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038e0d68; end: 1038e0d93;  */

long FUN_1038e0d68(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038e0d94; end: 1038e0d97;  */

void FUN_1038e0d94(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1038e0d98; end: 1038e0e1f;  */

long FUN_1038e0d98(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Entry: 1038e0e20; end: 1038e0ecb;  */

int FUN_1038e0e20(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038e0ecc; end: 1038e0f87;  */

undefined1  [16] FUN_1038e0ecc(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  FUN_1038e0fa8();
  func_0x000100102924(auStack_40,auStack_60);
  func_0x000107c602fc(0x14);
  func_0x000107c6142c(0xe000000000000000);
  func_0x0001006732c8(auStack_60,uStack_48);
  func_0x000107c614c0();
  uVar2 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  auVar1._8_8_ = 0x800000010f174ea0;
  auVar1._0_8_ = 0xd000000000000012;
  func_0x000100183ab8(auStack_60);
  return auVar1;
}



/* Entry: 1038e0f88; end: 1038e0fa7;  */

undefined1  [16] FUN_1038e0f88(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  FUN_1038e0fa8();
  func_0x000100102924(auStack_40,auStack_60);
  func_0x000107c602fc(0x14);
  func_0x000107c6142c(0xe000000000000000);
  func_0x0001006732c8(auStack_60,uStack_48);
  func_0x000107c614c0();
  uVar2 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  auVar1._8_8_ = 0x800000010f174ea0;
  auVar1._0_8_ = 0xd000000000000012;
  func_0x000100183ab8(auStack_60);
  return auVar1;
}



/* Entry: 1038e0fa8; end: 1038e0fe3;  */

long FUN_1038e0fa8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1038e0fe4; end: 1038e0feb;  */

undefined8 * FUN_1038e0fe4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100f9d71c(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 1038e0fec; end: 1038e1103;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1038e0fec(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x20);
  uVar3 = uVar2 >> 0x1c & 3;
  if ((uVar3 < 2) && (uVar3 != 0)) {
    uVar2 = uVar2 >> 0x1e;
    if (uVar2 == 1) {
      uVar1 = param_1[1] & 0xfffffffffffffff;
    }
    else if (uVar2 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1038e1104; end: 1038e1113; -[SCQuickCutResultSnapEditorConfig editorConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112facb48));
  return;
}



/* Entry: 1038e1114; end: 1038e124b; -[SCQuickCutResultSnapEditorConfig pluginConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112facb50);
  func_0x000100f99ab0(0);
  func_0x0001038e13ac();
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e124c; end: 1038e12f3; -[SCQuickCutResultSnapEditorConfig initWithEditorConfig:pluginConfigs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e124c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000100f99ab0(0);
  uVar4 = uVar3;
  func_0x0001038e13ac();
  func_0x000107c5f9e8(param_4,uVar3,PTR___syXlN_11034f1a0 + 8,uVar4);
  *(undefined8 *)(param_1 + _DAT_112facb48) = param_3;
  *(undefined8 *)(param_1 + _DAT_112facb50) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 1038e12f4; end: 1038e1353; -[SCQuickCutResultSnapEditorConfig init] */

void FUN_1038e12f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutScopeAPI.QuickCutResultSnapEditorConfig",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e1320);
  (*pcVar1)();
}



/* Entry: 1038e1354; end: 1038e138b; -[SCQuickCutResultSnapEditorConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1354(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112facb48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112facb50));
  return;
}



/* Entry: 1038e138c; end: 1038e13ef;  */

void FUN_1038e138c(void)

{
  func_0x000107c61168(&PTR_PTR_1128fde50);
  return;
}



/* Entry: 1038e13f0; end: 1038e140b;  */

undefined8 FUN_1038e13f0(void)

{
  return 1;
}



/* Entry: 1038e140c; end: 1038e14b7;  */

void FUN_1038e140c(void)

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



/* Entry: 1038e14b8; end: 1038e14e3;  */

void FUN_1038e14b8(ulong *param_1,ulong *param_2)

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



/* Entry: 1038e14e4; end: 1038e1523;  */

void FUN_1038e14e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112facb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f580;
  func_0x000107c61520(&UNK_10dc1f580,&UNK_1106a7e10);
  puRam0000000112facb80 = puVar1;
  return;
}



/* Entry: 1038e1524; end: 1038e153b;  */

undefined1  [16] FUN_1038e1524(void)

{
  return ZEXT816(0x1106a7e10);
}



/* Entry: 1038e153c; end: 1038e1a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038e153c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  long lVar10;
  long alStack_c0 [2];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  alStack_c0[0] = param_5;
  alStack_c0[1] = param_4;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1038e5950();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  plVar9 = (long *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bc10);
  puVar1[1] = 1;
  *puVar1 = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380bc18) = 0;
  lVar5 = unaff_x20 + _DAT_11380bc30;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bc38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11380bc40) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facb88);
  *puVar1 = param_1;
  puVar1[1] = 0x2000000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11380bc20) = param_2;
  lVar4 = 0x112facb90;
  func_0x0001000285a8(0x112facb90,&UNK_10dc1f650);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  func_0x000107c61474(lVar4);
  func_0x000107c61614(lVar4 + 0x70,0);
  func_0x000107c61428(lVar4 + 0x70,auStack_78,1,0);
  func_0x000107c61604(lVar4 + 0x70,param_3);
  *(long *)(unaff_x20 + _DAT_11380bc28) = lVar4;
  func_0x000107c61428(lVar5,auStack_90,1,0);
  lVar4 = alStack_c0[1];
  *(long *)(lVar5 + 8) = alStack_c0[0];
  lVar7 = alStack_c0[1];
  func_0x000107c61604();
  func_0x000107c5eec4(lVar10);
  func_0x000107c5eeac();
  (**(code **)(lVar8 + 8))(lVar10,lVar2);
  func_0x000107c5eea0((long)plVar9 + (long)*(int *)(lVar3 + 0x14));
  *plVar9 = lVar5;
  plVar9[1] = lVar7;
  *(undefined8 *)((long)plVar9 + (long)*(int *)(lVar3 + 0x18)) = 0;
  puVar1 = (undefined8 *)((long)plVar9 + (long)*(int *)(lVar3 + 0x1c));
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100fd1c94(plVar9,unaff_x20 + _DAT_11380bc08);
  puVar6 = auStack_a0;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(lVar4);
  return puVar6;
}



/* Entry: 1038e1a3c; end: 1038e1a9b; -[_TtC24MemoriesQuickCutScopeAPI23SnapEditorQuickCutScope init] */

void FUN_1038e1a3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutScopeAPI.SnapEditorQuickCutScope",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e1a68);
  (*pcVar1)();
}



/* Entry: 1038e1a9c; end: 1038e1b83; -[_TtC24MemoriesQuickCutScopeAPI23SnapEditorQuickCutScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038e1b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e1b1c) */
/* WARNING: Removing unreachable block (ram,0x00010101217c) */
/* WARNING: Removing unreachable block (ram,0x000101012188) */
/* WARNING: Removing unreachable block (ram,0x000101012180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1a9c(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000100fc3f6c(*(undefined8 *)(param_1 + _DAT_112facb88),
                      ((undefined8 *)(param_1 + _DAT_112facb88))[1]);
  func_0x000100fc3b98(param_1 + _DAT_11380bc08);
  puVar1 = (undefined8 *)(param_1 + _DAT_11380bc10);
  func_0x000100fc3fa0(*puVar1,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_11380bc18));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_11380bc20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11380bc28));
  return;
}



/* Entry: 1038e1b84; end: 1038e1b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038e1b84(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11380bc08;
  lVar2 = 0;
  FUN_1038e5950();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 1038e1b98; end: 1038e1bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038e1b98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bc10);
  uVar2 = *puVar1;
  func_0x000100fc3f8c(uVar2,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  return uVar2;
}



/* Entry: 1038e1bf4; end: 1038e1c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038e1bf4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11380bc18);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 1038e1c24; end: 1038e1c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1c24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + _DAT_11380bc20));
  return;
}



/* Entry: 1038e1c34; end: 1038e1cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1c34(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_11380bc30;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 1038e1cbc; end: 1038e1ccb;  */

undefined8 FUN_1038e1cbc(void)

{
  return 0;
}



/* Entry: 1038e1ccc; end: 1038e1d03;  */

void FUN_1038e1ccc(undefined8 param_1)

{
  if (lRam0000000112facbc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e78b2d0);
  return;
}



/* Entry: 1038e1d04; end: 1038e1dc3;  */

void FUN_1038e1d04(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = &UNK_10dc1f688;
  lVar1 = 0x13f;
  FUN_1038e5950();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &UNK_10dc1f6a0;
    puStack_50 = &UNK_10dc1f6b8;
    puStack_48 = &UNK_10dc1f6d0;
    puStack_40 = PTR___sBoWV_11034d678 + 0x40;
    puStack_38 = &UNK_10dc1f6e8;
    puStack_30 = &UNK_10dc1f700;
    puStack_28 = &UNK_10dc1f718;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 1038e1dc4; end: 1038e1e1f; -[SCMemoriesQuickCutScopeAssets lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1dc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112facbd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112facbd0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038e1e20; end: 1038e1e2f; -[SCMemoriesQuickCutScopeAssets trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112facbd8));
  return;
}



/* Entry: 1038e1e30; end: 1038e1e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facbd0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112facbd8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038e1e9c; end: 1038e1f2b; -[SCMemoriesQuickCutScopeAssets initWithLensId:trackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1e9c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112facbd0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112facbd8) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 1038e1f2c; end: 1038e1fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facbd0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (param_4 == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d8();
  }
  *(undefined **)(unaff_x20 + _DAT_112facbd8) = puVar2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038e1fcc; end: 1038e1fff; -[SCMemoriesQuickCutScopeAssets hash] */

undefined8 FUN_1038e1fcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038e2000();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1038e2000; end: 1038e20c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e2000(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_112facbd0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112facbd0);
    func_0x000107c5fadc(uVar1);
    uVar3 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_112facbd8);
  if (lVar2 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar2);
    func_0x000107c6011c(auStack_78);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c606a4();
  return;
}



/* Entry: 1038e20c8; end: 1038e2243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1038e20c8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    func_0x000107c6147c(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar4 = ((long *)(unaff_x20 + _DAT_112facbd0))[1];
      lVar5 = ((long *)(lStack_68 + _DAT_112facbd0))[1];
      uVar6 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_112facbd0);
        if (lVar2 == *(long *)(lStack_68 + _DAT_112facbd0) && lVar4 == lVar5) {
          uVar6 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar6 = (uint)lVar2;
        }
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_112facbd8);
      lVar4 = *(long *)(lStack_68 + _DAT_112facbd8);
      if (lVar5 == 0) {
        lVar2 = lVar4;
        func_0x000107c61174(lVar4);
        func_0x000107c61170(lStack_68);
        if (lVar4 != 0) {
          uVar7 = 0;
          goto LAB_1038e2214;
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        lVar2 = lStack_68;
        if (lVar4 != 0) {
          func_0x0001002ed07c(0);
          func_0x000107c61174(lVar4);
          func_0x000107c61174(lVar5);
          lVar3 = lVar5;
          func_0x000107c60118();
          uVar7 = (uint)lVar3;
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar4);
        }
LAB_1038e2214:
        func_0x000107c61170(lVar2);
      }
      uVar6 = uVar6 & uVar7;
      goto LAB_1038e2220;
    }
  }
  uVar6 = 0;
LAB_1038e2220:
  return uVar6 & 1;
}



/* Entry: 1038e2244; end: 1038e22c3; -[SCMemoriesQuickCutScopeAssets isEqual:] */

uint FUN_1038e2244(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1038e20c8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038e22c4; end: 1038e22c7; -[SCMemoriesQuickCutScopeAssets copyWithZone:] */

void FUN_1038e22c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038e22c8; end: 1038e22f3; -[SCMemoriesQuickCutScopeAssets description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e22c8(long param_1)

{
  func_0x000107c5d38c(*(undefined8 *)(param_1 + _DAT_112facbd8));
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038e22f4; end: 1038e236f; -[SCMemoriesQuickCutScopeAssets init] */

void FUN_1038e22f4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MemoriesQuickCutScopeAPI/MemoriesQuickCutScopeAssetsWrapper.swift",0x41,2,
                      0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e233c);
  (*pcVar1)();
}



/* Entry: 1038e2370; end: 1038e23ab; -[SCMemoriesQuickCutScopeAssets .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e2370(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112facbd0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112facbd8));
  return;
}



/* Entry: 1038e23ac; end: 1038e23cb;  */

void FUN_1038e23ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe020);
  return;
}



/* Entry: 1038e23cc; end: 1038e249f;  */

void FUN_1038e23cc(void)

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



/* Entry: 1038e24a0; end: 1038e24bf;  */

void FUN_1038e24a0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1038e24c0; end: 1038e2513; -[SCQuickCutMediaInput description] */

void FUN_1038e24c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038e28a0();
  func_0x000107c61170(param_1);
  func_0x000100fc3f6c(uVar1,param_2);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038e2514; end: 1038e255b; -[SCQuickCutMediaInput init] */

void FUN_1038e2514(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MemoriesQuickCutScopeAPI/QuickCutMediaInputWrapper.swift",0x38,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e255c);
  (*pcVar1)();
}



/* Entry: 1038e255c; end: 1038e2563; -[SCQuickCutMediaInput copyWithZone:] */

void FUN_1038e255c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038e2564; end: 1038e2577; +[SCQuickCutMediaInput memoryItemsWithItems:] */

void FUN_1038e2564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1038e3ba0(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = param_3;
  FUN_1038e3018();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e2578; end: 1038e25df; +[SCQuickCutMediaInput selectionConfigWithData:] */

void FUN_1038e2578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  FUN_1038e30ac(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e25e0; end: 1038e25e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e25e0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1038e3280();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112facc08) = 2;
  *(undefined8 *)(lVar4 + _DAT_112facc28) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112facc20);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(long *)(lVar4 + _DAT_112facc18) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112facc10) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61434(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1038e25e4; end: 1038e25f7; +[SCQuickCutMediaInput snapDocsWithSnapDocs:] */

void FUN_1038e25e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*(code *)&SUB_100fa1670)(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = param_3;
  FUN_1038e3150();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e25f8; end: 1038e2643;  */

void FUN_1038e25f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_4)(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = param_3;
  (*param_5)();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e2644; end: 1038e2647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e2644(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1038e3280();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112facc08) = 3;
  *(undefined8 *)(lVar4 + _DAT_112facc28) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112facc20);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar4 + _DAT_112facc18) = 0;
  *(long *)(lVar4 + _DAT_112facc10) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61434(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1038e2648; end: 1038e274f; +[SCQuickCutMediaInput snapIdsWithIds:] */

void FUN_1038e2648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = param_3;
  func_0x0001038e31e8();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e2750; end: 1038e280f; -[SCQuickCutMediaInput matchMemoryItems:selectionConfig:snapDocs:snapIds:] */

void FUN_1038e2750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x0001038e2688(0x1038e3448,auStack_40,FUN_1038e3468,auStack_60,FUN_1038e34a0,auStack_80,
                      FUN_1038e34c0,auStack_a0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1038e2810; end: 1038e2843;  */

void FUN_1038e2810(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038e2844; end: 1038e289f; -[SCQuickCutMediaInput .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038e2860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e2884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e2864) */
/* WARNING: Removing unreachable block (ram,0x0001038e2888) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e2844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112facc28));
  return;
}



/* Entry: 1038e28a0; end: 1038e3007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038e28a0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  bVar2 = *(byte *)(param_1 + _DAT_112facc08);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar6 = *(ulong *)(param_1 + _DAT_112facc28);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bf0);
        (*pcVar3)();
      }
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (uVar6 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar7 + 0x10);
      }
      else {
        uVar5 = uVar6;
        if (-1 < (long)uVar6) {
          uVar5 = uVar7;
        }
        func_0x000107c60480();
      }
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar5 != 0) {
        func_0x000100fa7de4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bc8);
          (*pcVar3)();
        }
        if ((uVar6 & 0xc000000000000001) == 0) {
          uVar9 = 0;
          do {
            if (*(ulong *)(uVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bb0);
              (*pcVar3)();
            }
            lVar8 = *(long *)(uVar6 + 0x20 + uVar9 * 8);
            bVar2 = *(byte *)(lVar8 + _DAT_112facc60);
            if (bVar2 < 2) {
              if (bVar2 != 0) {
                lVar8 = *(long *)(lVar8 + _DAT_112facc70);
                if (lVar8 != 0) goto LAB_1038e2b04;
                func_0x000107c61174();
                goto LAB_1038e2be0;
              }
              lVar8 = *(long *)(lVar8 + _DAT_112facc68);
              if (lVar8 == 0) {
                func_0x000107c61174();
                goto LAB_1038e2be8;
              }
LAB_1038e2b20:
              func_0x000107c61174(lVar8);
            }
            else {
              if (bVar2 != 2) {
                lVar8 = *(long *)(lVar8 + _DAT_112facc80);
                if (lVar8 != 0) goto LAB_1038e2b20;
                func_0x000107c61174();
                goto LAB_1038e2bd0;
              }
              lVar8 = *(long *)(lVar8 + _DAT_112facc78);
              if (lVar8 == 0) {
                func_0x000107c61174();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bdc);
                (*pcVar3)();
              }
LAB_1038e2b04:
              func_0x000107c615f0(lVar8);
            }
            uVar1 = *(ulong *)(puVar4 + 0x10);
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
              func_0x000100fa7de4(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
            }
            uVar9 = uVar9 + 1;
            *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
            *(long *)(puVar4 + uVar1 * 0x10 + 0x20) = lVar8;
            puVar4[uVar1 * 0x10 + 0x28] = bVar2;
          } while (uVar5 != uVar9);
        }
        else {
          uVar7 = 0;
          do {
            uVar9 = uVar7;
            FUN_1038e0078(uVar7,uVar6);
            bVar2 = *(byte *)(uVar9 + _DAT_112facc60);
            if (bVar2 < 2) {
              if (bVar2 != 0) {
                lVar8 = *(long *)(uVar9 + _DAT_112facc70);
                if (lVar8 == 0) {
LAB_1038e2be0:
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2be4);
                  (*pcVar3)();
                }
                goto LAB_1038e2998;
              }
              lVar8 = *(long *)(uVar9 + _DAT_112facc68);
              if (lVar8 == 0) {
LAB_1038e2be8:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bec);
                (*pcVar3)();
              }
LAB_1038e29b4:
              func_0x000107c61174(lVar8);
            }
            else {
              if (bVar2 != 2) {
                lVar8 = *(long *)(uVar9 + _DAT_112facc80);
                if (lVar8 == 0) {
LAB_1038e2bd0:
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bd4);
                  (*pcVar3)();
                }
                goto LAB_1038e29b4;
              }
              lVar8 = *(long *)(uVar9 + _DAT_112facc78);
              if (lVar8 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bcc);
                (*pcVar3)();
              }
LAB_1038e2998:
              func_0x000107c615f0(lVar8);
            }
            func_0x000107c615e8(uVar9);
            uVar9 = *(ulong *)(puVar4 + 0x10);
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
              func_0x000100fa7de4(1 < *(ulong *)(puVar4 + 0x18),uVar9 + 1,1);
            }
            uVar7 = uVar7 + 1;
            *(ulong *)(puVar4 + 0x10) = uVar9 + 1;
            *(long *)(puVar4 + uVar9 * 0x10 + 0x20) = lVar8;
            puVar4[uVar9 * 0x10 + 0x28] = bVar2;
          } while (uVar5 != uVar7);
        }
      }
      uVar6 = 0;
    }
    else {
      uVar6 = ((undefined8 *)(param_1 + _DAT_112facc20))[1];
      if (0xe < uVar6 >> 0x3c) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bf8);
        (*pcVar3)();
      }
      puVar4 = *(undefined **)(param_1 + _DAT_112facc20);
      uVar6 = uVar6 | 0x1000000000000000;
      func_0x00010006c00c(puVar4);
    }
  }
  else if (bVar2 == 2) {
    puVar4 = *(undefined **)(param_1 + _DAT_112facc18);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bf4);
      (*pcVar3)();
    }
    func_0x000107c61434(puVar4);
    uVar6 = 0x2000000000000000;
  }
  else {
    puVar4 = *(undefined **)(param_1 + _DAT_112facc10);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e2bfc);
      (*pcVar3)();
    }
    func_0x000107c61434(puVar4);
    uVar6 = 0x3000000000000000;
  }
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = puVar4;
  return auVar10;
}



/* Entry: 1038e3008; end: 1038e3017;  */

ulong FUN_1038e3008(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1038e3018; end: 1038e30ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e3018(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1038e3280();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112facc08) = 0;
  *(long *)(lVar4 + _DAT_112facc28) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112facc20);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar4 + _DAT_112facc18) = 0;
  *(undefined8 *)(lVar4 + _DAT_112facc10) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61434(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1038e30ac; end: 1038e314f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e30ac(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_1038e3280();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112facc08) = 1;
  *(undefined8 *)(lVar3 + _DAT_112facc28) = 0;
  plVar1 = (long *)(lVar3 + _DAT_112facc20);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_112facc18) = 0;
  *(undefined8 *)(lVar3 + _DAT_112facc10) = 0;
  func_0x00010006c00c(param_1,param_2);
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038e3150; end: 1038e327f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e3150(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1038e3280();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112facc08) = 2;
  *(undefined8 *)(lVar4 + _DAT_112facc28) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112facc20);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(long *)(lVar4 + _DAT_112facc18) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112facc10) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61434(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1038e3280; end: 1038e329f;  */

void FUN_1038e3280(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe0f0);
  return;
}



/* Entry: 1038e32a0; end: 1038e3407;  */

int FUN_1038e32a0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038e331c;
        goto LAB_1038e3300;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038e3300:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1038e331c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038e3408; end: 1038e3467;  */

void FUN_1038e3408(void)

{
  undefined *puVar1;
  
  if (puRam0000000112facc58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f78c;
  func_0x000107c61520(&UNK_10dc1f78c,&UNK_1106a7f50);
  puRam0000000112facc58 = puVar1;
  return;
}


