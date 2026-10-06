/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030e7c48; end: 1030e7d03;  */

void FUN_1030e7c48(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030e7d04; end: 1030e7dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e7d04(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  lVar1 = unaff_x20 + _DAT_112f3c570;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5bdf4(*(undefined8 *)(lVar1 + _DAT_112f3d1e8));
    func_0x000107c615e8(lVar1);
  }
  uStack_28 = 0;
  func_0x0001007d6d78(&uStack_28);
  return;
}



/* Entry: 1030e7dfc; end: 1030e7e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e7dfc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f3c4f0);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    uStack_50 = uVar2;
    func_0x000107c61174(uVar2);
    func_0x0001007d6d78(&uStack_50);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1030e7e20; end: 1030e7e77;  */

void FUN_1030e7e20(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1030e803c;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[4] = lVar1;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030e535c,lVar1,lVar3);
  return;
}



/* Entry: 1030e7e78; end: 1030e7e7f;  */

void FUN_1030e7e78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1030e7e80; end: 1030e7ed7;  */

void FUN_1030e7e80(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1030e7ed8;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[4] = lVar1;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030e535c,lVar1,lVar3);
  return;
}



/* Entry: 1030e7ed8; end: 1030e7f13;  */

void FUN_1030e7ed8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001030e7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1030e7f14; end: 1030e7f6b;  */

void FUN_1030e7f14(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1030e8040;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[4] = lVar1;
  plVar2[5] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030e535c,lVar1,lVar3);
  return;
}



/* Entry: 1030e7f6c; end: 1030e7f73;  */

void FUN_1030e7f6c(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_48;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c4f220();
    func_0x000107c61180();
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000107c61434(unaff_x20);
      func_0x0001000d224c(&uStack_48);
      func_0x0001000f66f0(lVar4,unaff_x20,uStack_48);
      uVar1 = (uint)lVar4;
      func_0x000107c6142c(uStack_48);
      func_0x000107c61430(unaff_x20,2);
    }
    uVar5 = 0;
    func_0x00010446800c(0);
    func_0x000107c610f8();
    func_0x000104467c64(lVar2,uVar1 & 1,uVar5);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1030e7f74; end: 1030e7f97;  */

undefined8 FUN_1030e7f74(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030e7f98; end: 1030e7fc3;  */

void FUN_1030e7f98(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lStack_80 = lVar2;
    uStack_78 = uVar1;
    lStack_60 = lVar2;
    uStack_58 = uVar1;
    func_0x0001043b8750(0x1030e7fa0,auStack_70,0x1030e7fa8,auStack_90);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1030e7fc4; end: 1030e8007;  */

void FUN_1030e7fc4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1030e8008; end: 1030e8043;  */

void FUN_1030e8008(long param_1,long param_2)

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



/* Entry: 1030e8044; end: 1030e8107;  */

/* WARNING: Possible PIC construction at 0x0001030e80cc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8044(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f3c608) = 1;
  lVar1 = _DAT_112f3c5f8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f3c5f8);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f3c5d0);
    func_0x000107c615f0(lVar3);
    func_0x000107c41964();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar3);
      lVar2 = *(long *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
    }
    else {
      func_0x000107c5d340(lVar2,param_2,lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1030e8108; end: 1030e82f7;  */

/* WARNING: Possible PIC construction at 0x0001030e81a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030e826c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030e8298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030e8270) */
/* WARNING: Removing unreachable block (ram,0x0001030e81ac) */
/* WARNING: Removing unreachable block (ram,0x0001030e81b0) */
/* WARNING: Removing unreachable block (ram,0x0001030e82dc) */
/* WARNING: Removing unreachable block (ram,0x0001030e8248) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001030e829c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8108(void)

{
  long lVar1;
  long unaff_x20;
  
  if (((((*(byte *)(unaff_x20 + _DAT_112f3c608) & 1) == 0) &&
       ((*(byte *)(unaff_x20 + _DAT_112f3c5f0) & 1) == 0)) &&
      (*(char *)(unaff_x20 + _DAT_112f3c600) == '\x01')) &&
     (*(char *)(unaff_x20 + _DAT_112f3c5e8 + 8) != '\x01')) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f3c5d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5dd60();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1030e82f8; end: 1030e83ab;  */

/* WARNING: Possible PIC construction at 0x0001030e8370: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e82f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = _DAT_112f3c5f8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f3c5f8);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f3c5d0);
    func_0x000107c615f0(lVar3);
    func_0x000107c41964();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar3);
      lVar2 = *(long *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
    }
    else {
      func_0x000107c5d340(lVar2,param_2,lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1030e83ac; end: 1030e840b; -[_TtC10CallUIImpl30CallCameraResolutionController init] */

void FUN_1030e83ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUIImpl.CallCameraResolutionController",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e83d8);
  (*pcVar1)();
}



/* Entry: 1030e840c; end: 1030e8463; -[_TtC10CallUIImpl30CallCameraResolutionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e840c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3c5d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3c5d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f3c5e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f3c5f8));
  return;
}



/* Entry: 1030e8464; end: 1030e8483;  */

void FUN_1030e8464(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6f58);
  return;
}



/* Entry: 1030e8484; end: 1030e84eb; -[_TtC10CallUIImpl30CallCameraResolutionController didRegisterProviderToken:noFormatFoundError:] */

/* WARNING: Possible PIC construction at 0x0001030e84d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030e84d8) */

void FUN_1030e8484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  FUN_1030e8518(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030e84ec; end: 1030e84ef; -[_TtC10CallUIImpl30CallCameraResolutionController didUnregisterProviderToken:] */

void FUN_1030e84ec(void)

{
  return;
}



/* Entry: 1030e84f0; end: 1030e8517; -[_TtC10CallUIImpl30CallCameraResolutionController featureNameForToken:] */

void FUN_1030e84f0(void)

{
  func_0x000107c5fadc(0x44485f4c4c5546,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e8518; end: 1030e873f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8518(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1;
    func_0x000107c5ed2c();
  }
  puVar5 = PTR_PTR_1126cf818;
  func_0x000107c61168();
  func_0x000107c5dd68();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    uVar2 = 0x746c75736572;
    func_0x000107c5fadc(0x746c75736572,0xe600000000000000);
    uVar4 = 0x73736563637573;
    if (lVar9 != 0) {
      uVar4 = 0x6572756c696166;
    }
    func_0x000107c5fadc(uVar4,0xe700000000000000);
    func_0x000107c6142c(0xe700000000000000);
    puVar3 = puVar5;
    func_0x000107c5e508(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    uVar4 = 0x6f635f726f727265;
    func_0x000107c5fadc(0x6f635f726f727265,0xea00000000006564);
    if (lVar9 == 0) {
      puVar8 = (undefined *)0xe400000000000000;
      puVar5 = (undefined *)0x656e6f6e;
    }
    else {
      func_0x000107c3fcb0();
      puVar5 = PTR___sSiN_11034deb0;
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    }
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar8);
    puVar8 = puVar3;
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar5);
    lVar6 = *(long *)(unaff_x20 + _DAT_112f3c5e0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c3d748();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e8740);
        (*pcVar1)();
      }
      func_0x000107c45314(lVar7);
      func_0x000107c61170(lVar7);
    }
    if (param_1 != 0) {
      func_0x000107c614b0(param_1);
      FUN_1030e82f8();
      func_0x000107c614ac(param_1);
    }
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e873c);
  (*pcVar1)();
}



/* Entry: 1030e8740; end: 1030e877f;  */

void FUN_1030e8740(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1030e8780; end: 1030e894f;  */

/* WARNING: Possible PIC construction at 0x0001030e8908: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8780(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar5 = unaff_x20 + 0x20;
  func_0x000107c61618();
  if (lVar5 != 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  puVar1 = &UNK_11060cac8;
  func_0x000107c613fc(&UNK_11060cac8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) {
    func_0x000107c61428(puVar1 + 0x10,&puStack_60,0,0);
    puVar3 = puVar1 + 0x10;
    func_0x000107c61648();
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c61604(puVar3 + 0x20,0);
      puVar4 = puVar3 + 0x20;
      func_0x000107c61618();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c61574(puVar1);
        puVar1 = puVar3;
      }
      else {
        lVar5 = *(long *)(puVar3 + 0x18);
        func_0x000107c6157c(puVar1);
        func_0x000107c3dd50();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c3d89c();
          func_0x000107c61604(lVar5 + _DAT_112f3c6e8,puVar4);
          func_0x000107c3ec60(lVar5);
          func_0x000107c54b80(puVar4);
          goto code_r0x000107c61170;
        }
        func_0x000107c61170(puVar4);
        func_0x000107c61578(puVar1,2);
        puVar1 = puVar3;
      }
    }
    func_0x000107c61574(puVar1);
  }
  else {
    pcStack_40 = FUN_1030e923c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x1030e8a90;
    puStack_48 = &UNK_11060cae0;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c61580(puVar1,2);
    func_0x000107c615f0(lVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c3cf7c(lVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 1030e8950; end: 1030e8963; -[_TtC10CallUIImpl20CallCameraUIProvider aspectRatio] */

undefined8 FUN_1030e8950(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x10),PTR_s_aspectRatio_1125a04d0);
    return param_1;
  }
  return 0;
}



/* Entry: 1030e8964; end: 1030e89b3; -[_TtC10CallUIImpl20CallCameraUIProvider getViewfinder:] */

void FUN_1030e8964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c6157c(param_1);
  FUN_1030e9180();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1030e89b4; end: 1030e89c3; -[_TtC10CallUIImpl20CallCameraUIProvider setAutofocusAndExposurePoint:viewSize:] */

void FUN_1030e89b4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c16d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x10),PTR_s_setAutofocusAndExposurePointOfIn_112638ed8);
    return;
  }
  return;
}



/* Entry: 1030e89c4; end: 1030e8b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e89c4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61604(param_2 + 0x20,param_1);
    lVar1 = param_2 + 0x20;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_2 + 0x18);
      func_0x000107c3dd50();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c3d89c();
        func_0x000107c61604(lVar2 + _DAT_112f3c6e8,lVar1);
        func_0x000107c3ec60(lVar2);
        func_0x000107c54b80(lVar1);
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1030e8b9c; end: 1030e8bdf;  */

void FUN_1030e8b9c(void)

{
  func_0x000107c614f0();
  FUN_1030e8be0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030e8be0; end: 1030e8e23;  */

/* WARNING: Possible PIC construction at 0x0001030e8d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030e8d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8be0(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = _DAT_112f3c6e8;
  lVar1 = unaff_x20 + _DAT_112f3c6e8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61170();
    uVar2 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar3 != 0) {
        func_0x000100f115fc(0);
        func_0x000107c61174();
        lVar1 = unaff_x20;
        func_0x000107c61174();
        uVar2 = uVar3;
        func_0x000107c60118(uVar3,lVar1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        if ((uVar2 & 1) != 0) {
          lVar5 = unaff_x20 + lVar4;
          func_0x000107c61618();
          if (lVar5 != 0) {
            func_0x000107c61170();
            uVar2 = unaff_x20 + lVar4;
            func_0x000107c61618();
            if (uVar2 != 0) {
              uVar3 = uVar2;
              func_0x000107c5c42c();
              func_0x000107c61180();
              func_0x000107c61170(uVar2);
              if (uVar3 != 0) {
                lVar5 = lVar1;
                func_0x000107c61174(lVar1);
                func_0x000107c61174();
                uVar2 = uVar3;
                func_0x000107c60118();
                func_0x000107c61170(lVar5);
                func_0x000107c61170(uVar3);
                func_0x000107c61170(uVar3);
                if ((uVar2 & 1) != 0) {
                  lVar5 = unaff_x20 + lVar4;
                  func_0x000107c61618();
                  if (lVar5 != 0) {
                    func_0x000107c4ff34();
                    func_0x000107c61170(lVar5);
                    func_0x000107c61604(unaff_x20 + lVar4,0);
                  }
                }
              }
            }
          }
          lVar5 = _DAT_112f3c6f0;
          lVar4 = lVar1 + _DAT_112f3c6f0;
          func_0x000107c61648();
          if (lVar4 == 0) {
            lVar4 = lVar1 + lVar5;
            func_0x000107c61648();
            if (lVar4 == 0) {
              return;
            }
            lVar1 = lVar4 + 0x20;
            func_0x000107c61618();
            if (lVar1 != 0) {
              lVar5 = *(long *)(lVar4 + 0x18);
              func_0x000107c3dd50();
              func_0x000107c61180();
              if (lVar5 != 0) {
                func_0x000107c3d89c();
                func_0x000107c61604(lVar5 + _DAT_112f3c6e8,lVar1);
                func_0x000107c3ec60(lVar5);
                func_0x000107c54b80(lVar1);
                func_0x000107c61170(lVar5);
              }
              func_0x000107c61170(lVar1);
            }
          }
          else {
            func_0x000107c61174(*(undefined8 *)(lVar4 + 0x18));
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_release_11034f4c0)(lVar4);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1030e8e24; end: 1030e8e7b; -[_TtCC10CallUIImpl20CallCameraUIProviderP33_0FC358455FEEFF206846D7405735AF9519ViewfinderContainer dealloc] */

void FUN_1030e8e24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_1030e8be0();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030e8e7c; end: 1030e8eb3; -[_TtCC10CallUIImpl20CallCameraUIProviderP33_0FC358455FEEFF206846D7405735AF9519ViewfinderContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8e7c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3c6e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_weakDestroy_11034f5e0)(param_1 + _DAT_112f3c6f0);
  return;
}



/* Entry: 1030e8eb4; end: 1030e8ef3; -[_TtCC10CallUIImpl20CallCameraUIProviderP33_0FC358455FEEFF206846D7405735AF9519ViewfinderContainer didMoveToSuperview] */

/* WARNING: Possible PIC construction at 0x0001030e8ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030e8edc) */

void FUN_1030e8eb4(long param_1)

{
  func_0x000107c61174();
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (param_1 == 0) {
    FUN_1030e8be0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1030e8ef4; end: 1030e8f33; -[_TtCC10CallUIImpl20CallCameraUIProviderP33_0FC358455FEEFF206846D7405735AF9519ViewfinderContainer didMoveToWindow] */

/* WARNING: Possible PIC construction at 0x0001030e8f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030e8f1c) */

void FUN_1030e8ef4(long param_1)

{
  func_0x000107c61174();
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (param_1 == 0) {
    FUN_1030e8be0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1030e8f34; end: 1030e8fc7; -[_TtCC10CallUIImpl20CallCameraUIProviderP33_0FC358455FEEFF206846D7405735AF9519ViewfinderContainer layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8f34(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lStack_40;
  long lStack_38;
  
  uVar3 = 0;
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x0001030e8adc();
  if ((uVar3 & 1) != 0) {
    lVar2 = param_1 + _DAT_112f3c6e8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c3ec60(param_1);
      func_0x000107c54b80(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1030e8fc8; end: 1030e905f; -[_TtCC10CallUIImpl20CallCameraUIProviderP33_0FC358455FEEFF206846D7405735AF9519ViewfinderContainer initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e8fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  func_0x000107c61614(param_5 + _DAT_112f3c6e8,0);
  func_0x000107c61644(param_5 + _DAT_112f3c6f0,0);
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1030e9060; end: 1030e910b; -[_TtCC10CallUIImpl20CallCameraUIProviderP33_0FC358455FEEFF206846D7405735AF9519ViewfinderContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030e9060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3c6e8,0);
  func_0x000107c61644(param_1 + _DAT_112f3c6f0,0);
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 1030e910c; end: 1030e917f;  */

void FUN_1030e910c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61610(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030e9180; end: 1030e923b;  */

/* WARNING: Possible PIC construction at 0x0001030e9214: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e9180(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001030e9160(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61634(lVar1 + _DAT_112f3c6f0,param_1);
  func_0x000107c3d798(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 0x20;
  func_0x000107c61618();
  if (param_1 == 0) {
    (**(code **)(param_2 + 0x10))(param_2,lVar1);
  }
  else {
    func_0x000107c3d89c(lVar1);
    func_0x000107c61604(lVar1 + _DAT_112f3c6e8,param_1);
    func_0x000107c3ec60(lVar1);
    func_0x000107c54b80(param_1);
    lVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1030e923c; end: 1030e925f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e923c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61604(lVar1 + 0x20,param_1);
    lVar2 = lVar1 + 0x20;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar1 + 0x18);
      func_0x000107c3dd50();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c3d89c();
        func_0x000107c61604(lVar3 + _DAT_112f3c6e8,lVar2);
        func_0x000107c3ec60(lVar3);
        func_0x000107c54b80(lVar2);
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1030e9260; end: 1030e97fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030e9260(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_11307b790) + _DAT_11307b898);
  uVar6 = *puVar1;
  lVar5 = puVar1[1];
  uVar2 = uVar6;
  func_0x000107c614f0();
  pcVar8 = *(code **)(lVar5 + 0x20);
  func_0x000107c6157c(param_3);
  func_0x000107c615f0(uVar6);
  (*pcVar8)(uVar2,lVar5);
  func_0x000107c615e8(uVar6);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113074f68);
  func_0x0001000285a8(0x112f3c720,&UNK_10db89330);
  func_0x000107c613fc();
  func_0x000107c6157c(param_4);
  lVar3 = 0;
  func_0x00010095c380();
  pcStack_70 = FUN_1030e9840;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1006c6ebc;
  puStack_78 = &UNK_11060cb08;
  ppuVar4 = &puStack_90;
  lStack_68 = lVar3;
  func_0x000107c60bc4(ppuVar4);
  lVar5 = lStack_68;
  func_0x000107c6157c(lVar3);
  func_0x000107c61574(lVar5);
  func_0x000107c4db94(uVar6);
  func_0x000107c60bd0(ppuVar4);
  uVar9 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(lVar3);
  uVar7 = *(undefined8 *)(param_7 + _DAT_113091b70);
  lVar5 = 0;
  func_0x0001030ed3c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x58) = 0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c615f0();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  uVar6 = 0x112f3c728;
  func_0x0001000285a8(0x112f3c728,&UNK_10db89338);
  func_0x000107c613fc();
  func_0x00010042e6a0();
  *(undefined8 *)(lVar5 + 0x68) = uVar6;
  *(undefined8 *)(lVar5 + 0x10) = param_3;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = param_4;
  *(undefined8 *)(lVar5 + 0x28) = uVar9;
  *(undefined8 *)(lVar5 + 0x30) = param_5;
  *(undefined8 *)(lVar5 + 0x38) = param_8;
  *(undefined8 *)(lVar5 + 0x40) = param_9;
  *(undefined8 *)(lVar5 + 0x48) = param_6;
  *(undefined8 *)(lVar5 + 0x50) = uVar7;
  *(long *)(unaff_x20 + 0x10) = lVar5;
  func_0x000107c6157c(lVar5);
  FUN_1030ecd5c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61574(lVar5);
  return unaff_x20;
}



/* Entry: 1030e97fc; end: 1030e983f;  */

void FUN_1030e97fc(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    func_0x000107c615f0();
    func_0x000100b60084(&lStack_28);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1030e9840; end: 1030e9863;  */

void FUN_1030e9840(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    func_0x000107c615f0();
    func_0x000100b60084(&lStack_28);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1030e9864; end: 1030e9887;  */

void FUN_1030e9864(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030e9888; end: 1030e9893;  */

void FUN_1030e9888(void)

{
  return;
}



/* Entry: 1030e9894; end: 1030e98b3;  */

void FUN_1030e9894(void)

{
  func_0x000107c61168(&PTR_PTR_112f3c770);
  return;
}



/* Entry: 1030e98b4; end: 1030e98bf;  */

void FUN_1030e98b4(long param_1,long param_2)

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



/* Entry: 1030e98c0; end: 1030ea683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030e98c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  lVar1 = 0;
  func_0x0001030ef51c();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  FUN_1030f3a70();
  if (((ulong)puVar2 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_2 + _DAT_113091b70);
    uVar3 = 0;
    FUN_1030f1cb4();
    func_0x000107c610f8();
    uVar4 = uVar9;
    func_0x000107c615f0();
    FUN_1030f1f44();
    func_0x000107c615e8(uVar9);
    ppuStack_c8 = &PTR_DAT_11060d548;
    uStack_e8 = uVar4;
    uStack_d0 = uVar3;
    func_0x0001030ea86c(&uStack_e8,&uStack_90);
  }
  FUN_1030ea684(&uStack_90,unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11307b7f8);
  uVar4 = uVar12;
  func_0x000107c615f0(uVar12);
  func_0x00010451338c();
  uVar3 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112f3c7d8,&UNK_10db91820);
  uVar4 = param_5;
  func_0x000107c5c6e0();
  func_0x000107c61180();
  uVar9 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112f0f0c0,&UNK_10db89390);
  uVar4 = param_4;
  func_0x000107c3efb8();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  lVar6 = 0;
  func_0x0001030eb2e0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 0;
  func_0x000107c61614(lVar6 + 0x10,0);
  func_0x000107c61614(lVar6 + 0x20,0);
  *(undefined2 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  *(undefined1 *)(lVar6 + 0xc0) = 1;
  *(undefined8 *)(lVar6 + 0x28) = uVar12;
  func_0x000107c61604(lVar6 + 0x20,uVar3);
  func_0x000107c6157c(lVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615e8(uVar3);
  *(undefined8 *)(lVar6 + 0x30) = uVar9;
  *(undefined8 *)(lVar6 + 0x38) = uVar5;
  *(long *)(lVar6 + 0x40) = lVar1;
  *(undefined8 *)(lVar6 + 0x50) = param_8;
  *(undefined ***)(lVar6 + 0x58) = &PTR_DAT_110772448;
  func_0x0001000285a8(0x112f3c7e0,&UNK_10db89398);
  func_0x000107c613fc();
  uVar4 = param_11;
  func_0x0001007ec1ec();
  *(undefined8 *)(lVar6 + 0x48) = uVar4;
  *(undefined8 *)(lVar6 + 0x68) = param_9;
  *(undefined ***)(lVar6 + 0x70) = &PTR_DAT_1107725a0;
  func_0x0001000285a8(0x112f3c7e8,&UNK_10db893a0);
  func_0x000107c613fc();
  uVar4 = param_12;
  func_0x0001007ec1ec();
  *(undefined8 *)(lVar6 + 0x60) = uVar4;
  *(undefined8 *)(lVar6 + 0x80) = param_10;
  *(undefined ***)(lVar6 + 0x88) = &PTR_DAT_110772680;
  *(undefined8 *)(lVar6 + 0x78) = param_13;
  lVar10 = *(long *)(lVar6 + 0x48);
  puVar2 = &UNK_11060cb88;
  puVar7 = puVar2;
  func_0x000107c613fc(&UNK_11060cb88,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,lVar6);
  func_0x000107c61428(lVar10 + 0x20,auStack_a8,1,0);
  uVar4 = *(undefined8 *)(lVar10 + 0x20);
  uVar3 = *(undefined8 *)(lVar10 + 0x28);
  *(code **)(lVar10 + 0x20) = FUN_1030ea7f4;
  *(undefined **)(lVar10 + 0x28) = puVar7;
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(lVar6);
  func_0x000107c6157c(puVar7);
  func_0x000100d35194(uVar4,uVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(lVar10);
  lVar10 = *(long *)(lVar6 + 0x60);
  func_0x000107c613fc(&UNK_11060cb88,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,lVar6);
  func_0x000107c6157c(lVar10);
  func_0x000107c61574(lVar6);
  func_0x000107c61428(lVar10 + 0x20,auStack_c0,1,0);
  uVar4 = *(undefined8 *)(lVar10 + 0x20);
  uVar3 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x20) = 0x1030ea7fc;
  *(undefined **)(lVar10 + 0x28) = puVar2;
  func_0x000107c6157c(puVar2);
  func_0x000100d35194(uVar4,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(lVar10);
  *(long *)(unaff_x20 + 0x10) = lVar6;
  func_0x000107c6157c(lVar6);
  func_0x000107c61174();
  uVar4 = param_4;
  func_0x000107c3efb8();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  FUN_1030ea684(&uStack_90,&uStack_e8);
  puVar2 = &UNK_11060cbb0;
  func_0x000107c613fc(&UNK_11060cbb0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  lVar8 = 0;
  func_0x0001030ee550();
  func_0x000107c613fc();
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  lVar10 = lVar6;
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar8 + 0x30) = uStack_e0;
  *(undefined8 *)(lVar8 + 0x28) = uStack_e8;
  *(undefined2 *)(lVar8 + 0x68) = 0x202;
  *(undefined1 *)(lVar8 + 0x6a) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined1 *)(lVar8 + 0x78) = 0;
  *(long *)(lVar8 + 0x10) = param_1;
  *(undefined8 *)(lVar8 + 0x18) = uVar3;
  *(long *)(lVar8 + 0x20) = lVar6;
  *(undefined8 *)(lVar8 + 0x40) = uStack_d0;
  *(undefined8 *)(lVar8 + 0x38) = uStack_d8;
  *(undefined ***)(lVar8 + 0x48) = ppuStack_c8;
  *(long *)(lVar8 + 0x50) = lVar10;
  *(undefined8 *)(lVar8 + 0x58) = 0x1030ea804;
  *(undefined **)(lVar8 + 0x60) = puVar2;
  *(long *)(unaff_x20 + 0x18) = lVar8;
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c6157c(lVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = uVar4;
  func_0x00010445e38c(uVar4,uVar3,param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c42c1c(param_14);
  *(undefined ***)(lVar6 + 0x18) = &PTR_DAT_11060ceb8;
  func_0x000107c61604(lVar6 + 0x10,lVar8);
  lVar10 = lStack_70;
  if (lStack_78 != 0) {
    func_0x0001000c6518(&uStack_90,lStack_78);
    pcVar11 = *(code **)(lVar10 + 0x18);
    func_0x000107c6157c(lVar8);
    (*pcVar11)();
  }
  FUN_1030ed800();
  func_0x000107c61574(lVar6);
  func_0x000107c61574(lVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x0001030ea824(&uStack_90);
  return unaff_x20;
}



/* Entry: 1030ea684; end: 1030ea6d3;  */

undefined8 FUN_1030ea684(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f3c7d0;
  func_0x0001000285a8(0x112f3c7d0,&UNK_10db89380);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1030ea6d4; end: 1030ea78f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030ea6d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (lVar3 != 0) {
    func_0x000100c82230();
    FUN_1030ea684(lVar3 + 0x28,auStack_58);
    if (lStack_40 == 0) {
      func_0x0001030ea824(auStack_58);
    }
    else {
      func_0x0001000a8868();
      FUN_1030f1a94();
      func_0x0001000834e4(auStack_58);
    }
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_11307b898);
  uVar1 = 0;
  FUN_1030e6ab0(0);
  lVar3 = lVar2;
  func_0x000107c61480(lVar2,uVar1);
  if (lVar3 != 0) {
    func_0x000107c615f0(lVar2);
    FUN_1030e4bb4();
    func_0x000107c615e8(lVar2);
  }
  return 0;
}



/* Entry: 1030ea790; end: 1030ea7cb;  */

void FUN_1030ea790(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001030ea824(unaff_x20 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030ea7cc; end: 1030ea7cf;  */

void FUN_1030ea7cc(void)

{
  return;
}



/* Entry: 1030ea7d0; end: 1030ea7f3;  */

undefined8 FUN_1030ea7d0(void)

{
  FUN_1030ea6d4();
  return 0;
}



/* Entry: 1030ea7f4; end: 1030ea803;  */

void FUN_1030ea7f4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001030ee05c(0);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1030ea804; end: 1030ea8bb;  */

void FUN_1030ea804(void)

{
  func_0x00010445f364();
  return;
}



/* Entry: 1030ea8bc; end: 1030ea8db;  */

void FUN_1030ea8bc(void)

{
  func_0x000107c61168(&PTR_PTR_112f3c830);
  return;
}



/* Entry: 1030ea8dc; end: 1030ea8f7;  */

void FUN_1030ea8dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001030ee05c(0);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1030ea8f8; end: 1030ea973;  */

void FUN_1030ea8f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001030ee05c(param_3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1030ea974; end: 1030eabaf;  */

void FUN_1030ea974(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x90) = 1;
  puVar1 = &UNK_11060cc88;
  func_0x000107c613fc(&UNK_11060cc88,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  func_0x000101237340(param_7,param_8);
  func_0x000101237340(param_9,param_10);
  func_0x000107c61434(param_6);
  func_0x000107c61174(param_4);
  FUN_1030eabb0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030eabb0; end: 1030eac4b;  */

void FUN_1030eabb0(void)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  FUN_1030eb830();
  func_0x000107c6142c(in_stack_00000038);
  func_0x000107c61170(in_stack_00000028);
  func_0x000101237350(in_stack_00000000,in_stack_00000008);
  func_0x000101237350(in_x6,in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x5);
  return;
}



/* Entry: 1030eac4c; end: 1030eacb7;  */

void FUN_1030eac4c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x90) = 0;
  FUN_1030f3c4c();
  if (param_1 != 0) {
    func_0x000107c61170();
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_1030ee570(1);
      func_0x000107c615e8(lVar1);
    }
    FUN_1030f3c74(0,0);
  }
  return;
}



/* Entry: 1030eacb8; end: 1030ead6f;  */

/* WARNING: Possible PIC construction at 0x0001030ead54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ead58) */

void FUN_1030eacb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  *(undefined1 *)((long)unaff_x20 + 0x91) = 1;
  puVar1 = &UNK_11060cc88;
  func_0x000107c613fc(&UNK_11060cc88,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11060ccb0;
  func_0x000107c613fc(&UNK_11060ccb0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = uVar3;
  func_0x000107c6157c(puVar1);
  func_0x000101237340(param_1,param_2);
  FUN_1030f3c74(0x1030ebf8c,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030ead70; end: 1030eb23b;  */

void FUN_1030ead70(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x91) == '\x01') {
      func_0x0001000d224c(&lStack_80);
      if (lStack_80 != 0) {
        lVar4 = lStack_80;
        func_0x000107c3d0f4();
        func_0x000107c61180();
        func_0x000107c615e8(lStack_80);
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x000107c4b824();
          if (lVar5 != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x68);
            lVar5 = *(long *)(param_1 + 0x70);
            uVar6 = uVar9;
            func_0x000107c614f0();
            uVar10 = *(undefined8 *)(param_1 + 0x28);
            uVar1 = *(undefined8 *)(param_1 + 0xb0);
            uVar2 = *(undefined8 *)(param_1 + 0xb8);
            pcVar8 = *(code **)(lVar5 + 8);
            uVar3 = *(undefined1 *)(param_1 + 0xc0);
            func_0x000107c615f0(uVar9);
            func_0x000107c615f0(uVar10);
            func_0x000107c6157c(param_1);
            uVar7 = uVar10;
            (*pcVar8)(uVar10,uVar1,uVar2,uVar3,param_1,&PTR_DAT_11060cc10,uVar6,lVar5);
            func_0x000107c615e8(uVar9);
            func_0x000107c615e8(uVar10);
            func_0x000107c61574(param_1);
            uVar9 = *(undefined8 *)(param_1 + 0x60);
            func_0x000107c6157c(uVar9);
            FUN_1030f3c68(uVar7);
            func_0x000107c61574(uVar9);
            if (param_2 != (code *)0x0) {
              (*param_2)(1);
            }
            func_0x000107c61574(param_1);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(uVar7);
            return;
          }
          func_0x000107c61170(lVar4);
        }
      }
      if (param_2 != (code *)0x0) {
        (*param_2)(0);
      }
      func_0x000107c61574(param_1);
      return;
    }
    func_0x000107c61574(param_1);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)(0);
  }
  return;
}



/* Entry: 1030eb23c; end: 1030eb2ff;  */

void FUN_1030eb23c(void)

{
  long unaff_x20;
  
  func_0x000100d3528c(unaff_x20 + 0x10);
  func_0x000100d3528c(unaff_x20 + 0x20);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000101237350(*(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 1030eb300; end: 1030eb367; -[_TtC10CallUIImpl12CallUIRouter modularCallScopeDidDismiss:reason:] */

void FUN_1030eb300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  func_0x000107c6157c(param_1);
  if (lVar1 != 0) {
    FUN_1030ee570(param_4);
    func_0x000107c615e8(lVar1);
  }
  FUN_1030f3c74(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1030eb368; end: 1030eb3f7; -[_TtC10CallUIImpl12CallUIRouter modularCallScope:didClearNotificationWithDidAcceptCall:] */

void FUN_1030eb368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(param_1 + 0xa0);
  if (pcVar2 == (code *)0x0) {
    func_0x000107c6157c(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x000107c6157c(param_1);
    func_0x000101237340(pcVar2,uVar3);
    (*pcVar2)(param_4);
    func_0x000101237350(pcVar2,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  func_0x000101237350(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1030eb3f8; end: 1030eb40b; -[_TtC10CallUIImpl12CallUIRouter modularCallScope:didChangeFullscreenState:] */

void FUN_1030eb3f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x98),PTR_s_setIsFullscreen__112649fe0,param_4);
    return;
  }
  return;
}



/* Entry: 1030eb40c; end: 1030eb49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030eb40c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = lVar3 + _DAT_11307b808;
    func_0x000107c61428(lVar2,auStack_48,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      func_0x000107c614f0();
      (**(code **)(lVar4 + 0x18))(lVar3,param_4,lVar2,lVar4);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1030eb4a0; end: 1030eb5ff; -[_TtC10CallUIImpl12CallUIRouter modularCallScope:didTapReplyWithSnapWith:] */

void FUN_1030eb4a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = &UNK_11060cc60;
  func_0x000107c613fc(&UNK_11060cc60,0x30,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(long *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61580(param_1,2);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(lVar1);
  FUN_1030f3c74(0x1030ebf80,puVar2);
  func_0x000107c615e8(lVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1030eb600; end: 1030eb6c3; -[_TtC10CallUIImpl12CallUIRouter modularCallScope:willDisplayCallFeedbackTrayWith:] */

void FUN_1030eb600(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = &UNK_11060cc38;
  func_0x000107c613fc(&UNK_11060cc38,0x38,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(long *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  func_0x000107c61580(param_1,2);
  func_0x000107c615f0(lVar1);
  func_0x000107c61434(param_2);
  FUN_1030f3c74(FUN_1030ebf70,puVar2);
  func_0x000107c615e8(lVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030eb6c4; end: 1030eb72b; -[_TtC10CallUIImpl12CallUIRouter modularCallScope:viewWillAppear:] */

void FUN_1030eb6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_1030ebee0(param_4,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1030eb72c; end: 1030eb747;  */

void FUN_1030eb72c(undefined8 param_1,undefined8 param_2)

{
  FUN_1030ebee0(param_2,1);
  return;
}



/* Entry: 1030eb748; end: 1030eb753;  */

void FUN_1030eb748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_3;
  *(undefined1 *)(unaff_x20 + 0xc0) = param_4;
  return;
}



/* Entry: 1030eb754; end: 1030eb82f;  */

void FUN_1030eb754(ulong param_1,long param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined1 auStack_68 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      if (*(char *)(param_2 + 0x90) == '\x01') {
        func_0x0001030eaa84(param_7,param_8,param_9,param_11,param_12,param_13,param_3,param_4,
                            param_5,param_6);
        func_0x000107c61574(param_2);
        return;
      }
      func_0x000107c61574();
    }
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(0);
  }
  if (param_5 != (code *)0x0) {
    (*param_5)(0);
  }
  return;
}



/* Entry: 1030eb830; end: 1030ebedf;  */

/* WARNING: Possible PIC construction at 0x0001030eb980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ebc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ebc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030eba84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ebab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ebda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ebbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ebbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ebdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ebbd8) */
/* WARNING: Removing unreachable block (ram,0x0001030ebbb0) */
/* WARNING: Removing unreachable block (ram,0x0001030ebda8) */
/* WARNING: Removing unreachable block (ram,0x0001030ebab4) */
/* WARNING: Removing unreachable block (ram,0x0001030ebbdc) */
/* WARNING: Removing unreachable block (ram,0x0001030eba88) */
/* WARNING: Removing unreachable block (ram,0x0001030ebc54) */
/* WARNING: Removing unreachable block (ram,0x0001030ebc60) */
/* WARNING: Removing unreachable block (ram,0x0001030ebc64) */
/* WARNING: Removing unreachable block (ram,0x0001030eb984) */
/* WARNING: Removing unreachable block (ram,0x0001030ebdd8) */
/* WARNING: Removing unreachable block (ram,0x0001030ebddc) */
/* WARNING: Removing unreachable block (ram,0x0001030ebde0) */

void FUN_1030eb830(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4,long param_5,
                  long param_6,code *param_7,undefined8 param_8,code *param_9,undefined8 param_10,
                  undefined8 param_11,undefined8 param_12,undefined1 param_13,undefined4 param_14,
                  undefined8 param_15,undefined8 param_16,undefined8 param_17,undefined8 param_18)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  puVar3 = &UNK_11060ccd8;
  func_0x000107c613fc(&UNK_11060ccd8,0x70,7);
  *(long *)(puVar3 + 0x10) = param_6;
  *(code **)(puVar3 + 0x18) = param_7;
  *(undefined8 *)(puVar3 + 0x20) = param_8;
  *(code **)(puVar3 + 0x28) = param_9;
  *(undefined8 *)(puVar3 + 0x30) = param_10;
  *(undefined8 *)(puVar3 + 0x38) = param_11;
  *(undefined8 *)(puVar3 + 0x40) = param_12;
  puVar3[0x48] = param_13;
  *(undefined8 *)(puVar3 + 0x60) = param_17;
  *(undefined8 *)(puVar3 + 0x68) = param_18;
  uVar2 = param_3 >> 6 & 3;
  *(undefined8 *)(puVar3 + 0x50) = param_15;
  *(undefined8 *)(puVar3 + 0x58) = param_16;
  puVar4 = puVar3;
  if (uVar2 - 2 < 2) {
    func_0x000107c61428(param_6 + 0x10,&puStack_98,0,0);
    puVar4 = (undefined *)(param_6 + 0x10);
    func_0x000107c61648();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
      if (param_7 != (code *)0x0) {
        (*param_7)(0);
      }
      puVar4 = puVar3;
      if (param_9 != (code *)0x0) {
        (*param_9)(0);
      }
    }
    else {
      bVar1 = puVar4[0x90];
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
      if ((bVar1 & 1) != 0) {
        func_0x0001030eaa84(param_11,param_12,param_13,param_15,param_16,param_17,param_7,param_8);
        puVar4 = puVar3;
      }
    }
    goto code_r0x000107c61574;
  }
  if (uVar2 == 0) {
    if (param_4 != 0) {
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
      uVar7 = param_4;
LAB_1030eb9e4:
      puVar5 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c61174(param_4);
      func_0x000107c4807c(puVar5);
      func_0x000107c61170(uVar7);
      func_0x0001000d224c(&puStack_98);
      if (puStack_98 == (undefined *)0x0) {
        if (param_7 != (code *)0x0) {
          (*param_7)(0);
        }
        if (param_9 != (code *)0x0) {
          (*param_9)(0);
        }
      }
      else {
        pcStack_78 = FUN_1030ebf98;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100ab47f8;
        puStack_80 = &UNK_11060cd18;
        puStack_70 = puVar3;
        func_0x000107c60bc4(&puStack_98);
        puVar4 = puStack_70;
        func_0x000107c6157c(puVar3);
      }
      goto code_r0x000107c61574;
    }
    uVar6 = param_5 + 0x20;
    func_0x000107c61618();
    if (uVar6 == 0) {
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
    }
    else {
      uVar7 = uVar6;
      func_0x000107c61150();
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
      if ((uVar7 & 1) != 0) {
        uVar7 = uVar6;
        func_0x000107c5cc6c(uVar6);
        func_0x000107c61180();
        func_0x000107c615e8(uVar6);
        goto LAB_1030eb9e4;
      }
      func_0x000107c615e8(uVar6);
    }
    if (param_7 != (code *)0x0) {
      (*param_7)(0);
    }
  }
  else {
    if (param_4 != 0) {
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
      uVar7 = param_4;
LAB_1030ebb0c:
      puVar5 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c61174(param_4);
      func_0x000107c4807c(puVar5);
      func_0x000107c61170(uVar7);
      func_0x0001000d224c(&puStack_98);
      if (puStack_98 == (undefined *)0x0) {
        if (param_7 != (code *)0x0) {
          (*param_7)(0);
        }
        if (param_9 != (code *)0x0) {
          (*param_9)(0);
        }
      }
      else {
        pcStack_78 = FUN_1030ebf98;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100ab47f8;
        puStack_80 = &UNK_11060ccf0;
        puStack_70 = puVar3;
        func_0x000107c60bc4(&puStack_98);
        puVar4 = puStack_70;
        func_0x000107c6157c(puVar3);
      }
      goto code_r0x000107c61574;
    }
    uVar6 = param_5 + 0x20;
    func_0x000107c61618();
    if (uVar6 == 0) {
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
    }
    else {
      uVar7 = uVar6;
      func_0x000107c61150();
      func_0x000107c6157c(param_6);
      func_0x000101237340(param_7,param_8);
      func_0x000101237340(param_9,param_10);
      func_0x000107c61434(param_17);
      func_0x000107c61174(param_15);
      if ((uVar7 & 1) != 0) {
        uVar7 = uVar6;
        func_0x000107c5cc6c(uVar6);
        func_0x000107c61180();
        func_0x000107c615e8(uVar6);
        goto LAB_1030ebb0c;
      }
      func_0x000107c615e8(uVar6);
    }
    if (param_7 != (code *)0x0) {
      (*param_7)(0);
    }
  }
  if (param_9 != (code *)0x0) {
    (*param_9)(0);
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 1030ebee0; end: 1030ebf6f;  */

void FUN_1030ebee0(undefined8 param_1,uint param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1030ea684(lVar1 + 0x28,auStack_58);
    if (lStack_40 == 0) {
      func_0x000107c615e8(lVar1);
      func_0x0001030ea824(auStack_58);
    }
    else {
      func_0x0001000a8868();
      FUN_1030f1afc(param_1,param_2 & 1);
      func_0x000107c615e8(lVar1);
      func_0x0001000834e4(auStack_58);
    }
  }
  return;
}



/* Entry: 1030ebf70; end: 1030ebf97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ebf70(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    lVar3 = lVar5 + _DAT_11307b808;
    func_0x000107c61428(lVar3,auStack_58,0,0);
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar6 = *(long *)(lVar3 + 8);
      lVar3 = lVar2;
      func_0x000107c614f0();
      (**(code **)(lVar6 + 0x20))(lVar5,uVar1,uVar4,lVar3,lVar6);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1030ebf98; end: 1030ebfdb;  */

void FUN_1030ebf98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1030eb754(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1030ebfdc; end: 1030ebff7;  */

void FUN_1030ebfdc(long param_1,long param_2)

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



/* Entry: 1030ebff8; end: 1030ec03b;  */

void FUN_1030ebff8(void)

{
  long unaff_x20;
  
  func_0x0001030eaf30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1030ec03c; end: 1030ec043;  */

void FUN_1030ec03c(long param_1,long param_2)

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



/* Entry: 1030ec044; end: 1030ec0e3;  */

void FUN_1030ec044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  return;
}



/* Entry: 1030ec0e4; end: 1030ec113;  */

void FUN_1030ec0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  return;
}



/* Entry: 1030ec114; end: 1030ecaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030ec114(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  long extraout_x8;
  long lVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 auStack_100 [8];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_bc;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  code *pcStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar22 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(lVar17 + _DAT_1130344b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar8 = &UNK_11060cd80;
  lStack_98 = lVar7;
  func_0x000107c613fc(&UNK_11060cd80,0x18,7);
  *(long *)(puVar8 + 0x10) = lVar17;
  func_0x0001000285a8(0x112f3c9c8,&UNK_10db894c0);
  func_0x000107c613fc();
  func_0x000107c61174(lVar17);
  pcVar3 = FUN_1030ecb44;
  func_0x0001000bdd8c(FUN_1030ecb44,puVar8);
  uVar20 = *(ulong *)(unaff_x20 + 0x18);
  pcStack_90 = pcVar3;
  func_0x000107c6157c();
  uVar16 = uVar20;
  func_0x000107c5c6e0();
  func_0x000107c61180();
  uVar9 = uVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  if (uVar9 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = uVar9;
    func_0x000107c3f204();
    func_0x000107c61180();
    func_0x000107c615e8(uVar9);
  }
  lVar7 = 0;
  func_0x0001030e9140();
  func_0x000107c613fc();
  puVar8 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(lVar7 + 0x18) = puVar8;
  func_0x000107c61614(lVar7 + 0x20,0);
  *(ulong *)(lVar7 + 0x10) = uVar16;
  lVar17 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x10);
  func_0x000107c61174();
  uVar16 = uVar20;
  func_0x000107c5c6e0();
  func_0x000107c61180();
  uVar9 = uVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  uStack_a0 = uVar20;
  if (uVar9 == 0) {
    uStack_b0 = 0;
  }
  else {
    uVar16 = uVar9;
    func_0x000107c3f204();
    func_0x000107c61180();
    uStack_b0 = uVar16;
    func_0x000107c615e8(uVar9);
  }
  uVar19 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113081210);
  func_0x000107c4195c();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113074f80);
  uVar21 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113074f68);
  uStack_e0 = uVar10;
  func_0x000107c6157c(pcStack_90);
  func_0x000107c61174();
  lStack_b8 = lVar17;
  func_0x000107c61174();
  uStack_c8 = uVar18;
  func_0x000107c61174();
  lVar17 = lVar7;
  uStack_d0 = uVar21;
  func_0x000107c6157c();
  uVar5 = (undefined4)lVar17;
  FUN_1030f3a70();
  uVar18 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_bc = uVar5;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar11 = 0;
  FUN_1030e6ab0();
  lStack_d8 = lVar11;
  func_0x000107c610f8();
  lVar17 = _DAT_112f3c4e0;
  puVar8 = PTR_PTR_1126da5d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar17) = puVar8;
  lVar17 = _DAT_112f3c4e8;
  func_0x0001000285a8(0x112f3c9d0,&UNK_10db894c8);
  func_0x000107c613fc();
  uVar10 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar11 + lVar17) = uVar10;
  lVar17 = _DAT_112f3c4f0;
  uStack_68 = 0;
  func_0x0001000285a8(0x112e5bb58,&UNK_10db894d0);
  func_0x000107c613fc();
  puVar12 = &uStack_68;
  func_0x00010042e6a0();
  *(ulong **)(lVar11 + lVar17) = puVar12;
  lVar14 = _DAT_112f3c4f8;
  uStack_68 = uStack_68 & 0xffffffffffffff00;
  lVar17 = 0x112d61fd8;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  uVar16 = (ulong)*(uint *)(lVar17 + 0x30);
  func_0x000107c613fc();
  puVar12 = &uStack_68;
  func_0x00010042e6a0();
  *(ulong **)(lVar11 + lVar14) = puVar12;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f3c500);
  func_0x000107c5eec4((long)&uStack_e0 + lVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar22 + 8))((long)&uStack_e0 + lVar6,lStack_a8);
  *puVar1 = puVar12;
  puVar1[1] = uVar16;
  lVar17 = _DAT_112f3c508;
  puVar8 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar17) = puVar8;
  *(undefined8 *)(lVar11 + _DAT_112f3c510) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f3c518) = 0;
  puVar2 = (undefined4 *)(lVar11 + _DAT_112f3c520);
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 1) = 0;
  *(undefined8 *)(lVar11 + _DAT_112f3c528) = 0;
  *(undefined8 *)(lVar11 + _DAT_112f3c530) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f3c538) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f3c540) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f3c548) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f3c550) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f3c558) = 0;
  *(undefined1 *)(lVar11 + _DAT_112f3c560) = 0;
  lVar17 = lVar11 + _DAT_112f3c570;
  *(undefined8 *)(lVar17 + 8) = 0;
  func_0x000107c61614(lVar17,0);
  uVar16 = uStack_b0;
  *(ulong *)(lVar11 + _DAT_112f3c4a0) = uStack_b0;
  *(undefined8 *)(lVar11 + _DAT_112f3c4a8) = uVar19;
  lVar22 = 0;
  FUN_1030e8464();
  lVar17 = lVar22;
  func_0x000107c610f8();
  uVar10 = uStack_e0;
  puVar1 = (undefined8 *)(lVar17 + _DAT_112f3c5e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar17 + _DAT_112f3c5f0) = 0;
  *(undefined8 *)(lVar17 + _DAT_112f3c5f8) = 0;
  *(undefined1 *)(lVar17 + _DAT_112f3c600) = 0;
  *(undefined1 *)(lVar17 + _DAT_112f3c608) = 0;
  *(undefined8 *)(lVar17 + _DAT_112f3c5d0) = uVar19;
  *(undefined8 *)(lVar17 + _DAT_112f3c5d8) = uStack_e0;
  *(undefined8 *)(lVar17 + _DAT_112f3c5e0) = uVar18;
  puVar8 = PTR_s_init_1125d9248;
  lStack_78 = lVar17;
  lStack_70 = lVar22;
  func_0x000107c61174(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_a8 = uVar10;
  func_0x000107c61174();
  func_0x000107c615f0(uVar16);
  plVar13 = &lStack_78;
  func_0x000107c61154(plVar13,puVar8);
  lVar17 = lStack_b8;
  uVar10 = uStack_c8;
  uVar19 = uStack_d0;
  *(long **)(lVar11 + _DAT_112f3c568) = plVar13;
  *(undefined8 *)(lVar11 + _DAT_112f3c4b0) = uStack_c8;
  *(undefined8 *)(lVar11 + _DAT_112f3c4b8) = uStack_d0;
  *(long *)(lVar11 + _DAT_112f3c4c0) = lVar7;
  *(long *)(lVar11 + _DAT_112f3c4c8) = lStack_b8;
  *(code **)(lVar11 + _DAT_112f3c578) = pcStack_90;
  *(byte *)(lVar11 + _DAT_112f3c4d0) = (byte)uStack_bc & 1;
  *(undefined8 *)(lVar11 + _DAT_112f3c4d8) = uVar18;
  puVar8 = PTR_s_init_1125d9248;
  lStack_80 = lStack_d8;
  lStack_88 = lVar11;
  func_0x000107c6157c();
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  func_0x000107c6157c(lVar7);
  func_0x000107c61174();
  plVar13 = &lStack_88;
  func_0x000107c61154(plVar13,puVar8);
  func_0x000107c61180();
  FUN_1030e4a30();
  func_0x000107c61170(plVar13);
  func_0x000107c615e8(uVar16);
  func_0x000107c61170(lStack_a8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar19);
  func_0x000107c61574(lVar7);
  func_0x000107c61170(lVar17);
  func_0x000107c61574(pcStack_90);
  func_0x000107c61170(uVar18);
  lStack_a8 = *(long *)(unaff_x20 + 0x10);
  uVar21 = *(undefined8 *)(lStack_a8 + _DAT_11307b7f8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  func_0x000107c615f0(uVar21);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar10);
  uVar16 = uStack_a0;
  uVar9 = uStack_a0;
  func_0x000107c5c6e0(uStack_a0);
  func_0x000107c61180();
  uVar18 = 0;
  FUN_1030f391c(0);
  func_0x000107c610f8();
  FUN_1030f3518(uVar21,uVar19,uVar10,uVar9,uVar18);
  *(undefined ***)((long)plVar13 + _DAT_112f3c570 + 8) = &PTR_DAT_11060d6f8;
  func_0x000107c61604((long)plVar13 + _DAT_112f3c570,uVar21);
  func_0x000107c61604(lVar17 + _DAT_112f3ced8,plVar13);
  uVar9 = uVar16;
  func_0x000107c5c6e0();
  func_0x000107c61180();
  uVar20 = uVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  if (uVar20 != 0) {
    uVar9 = uVar20;
    func_0x000107c4b7fc();
    func_0x000107c61180();
    func_0x000107c615e8(uVar20);
    if (uVar9 != 0) {
      func_0x000107c57e48(uVar9);
      func_0x000107c615e8(uVar9);
    }
  }
  lVar22 = lStack_98;
  if (lStack_98 == 0) {
    uVar4 = 0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
  }
  else {
    lVar14 = lStack_98;
    func_0x000107c5aa00();
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)lVar14);
    func_0x000107c49b98();
    uVar4 = (undefined1)lVar22;
  }
  func_0x0001000285a8(0x112f3c9d8,&UNK_10db894e0);
  func_0x000107c613fc();
  uVar19 = 1;
  func_0x00010008747c(1);
  lVar22 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c44514();
  func_0x000107c61180();
  if (lVar22 != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
    func_0x000107c5c894();
    func_0x000107c61180();
    func_0x000107c5c6dc();
    func_0x000107c61180();
    lVar14 = 0;
    func_0x0001030eee30();
    func_0x000107c613fc();
    *(long *)(lVar14 + 0x10) = lVar22;
    *(undefined8 *)(lVar14 + 0x18) = uVar10;
    *(ulong *)(lVar14 + 0x20) = uVar16;
    uVar10 = 0;
    func_0x00010445fc18(0);
    func_0x000107c61174(uVar21);
    func_0x000107c61174(lVar17);
    func_0x000107c6157c(lVar7);
    func_0x000107c61174(plVar13);
    func_0x000107c61174(uVar21);
    pcVar3 = FUN_1030ecb4c;
    func_0x0001000bfde0(FUN_1030ecb4c,0,uVar10);
    pcVar15 = pcVar3;
    func_0x0001004575f0();
    func_0x000107c61574(pcVar3);
    uVar10 = *(undefined8 *)(lStack_a8 + _DAT_11307b810);
    func_0x00010445f4c4(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar10);
    *(undefined8 *)((long)alStack_f8 + lVar6) = uVar10;
    *(long *)((long)alStack_f8 + lVar6 + 8) = lVar14;
    auStack_100[lVar6 + 1] = uVar4;
    auStack_100[lVar6] = (char)uStack_b0;
    lVar6 = lVar7;
    func_0x00010445f214(lVar7,lVar17,plVar13,&PTR_DAT_11060c7e8,uVar21,uVar21,uVar19,pcVar15);
    func_0x000107c615e8(lStack_98);
    func_0x000107c61578(pcStack_90,2);
    func_0x000107c61574(lVar7);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(plVar13);
    func_0x000107c61170(uVar21);
    return lVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1030ecaa4);
  (*pcVar3)();
}



/* Entry: 1030ecaa4; end: 1030ecb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ecaa4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_2 + _DAT_1130344b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c43bac();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    puVar3 = puVar2;
    func_0x000107c5fc54(puVar2,PTR___sSSN_11034da80);
    func_0x000107c61170(puVar2);
  }
  puVar1 = puVar3;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1030ecb44; end: 1030ecb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ecb44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + _DAT_1130344b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000107c43bac();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    puVar3 = puVar2;
    func_0x000107c5fc54(puVar2,PTR___sSSN_11034da80);
    func_0x000107c61170(puVar2);
  }
  puVar1 = puVar3;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1030ecb4c; end: 1030ecb87;  */

void FUN_1030ecb4c(ulong *param_1,byte *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*param_2;
  uVar1 = 0;
  func_0x00010445fc18(0);
  func_0x00010445faa0(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1030ecb88; end: 1030ecc97;  */

/* WARNING: Possible PIC construction at 0x0001030ecb94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ecba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ecbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ecbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ecbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ecbec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ecbd8) */
/* WARNING: Removing unreachable block (ram,0x0001030ecbc8) */
/* WARNING: Removing unreachable block (ram,0x0001030ecbb8) */
/* WARNING: Removing unreachable block (ram,0x0001030ecba8) */
/* WARNING: Removing unreachable block (ram,0x0001030ecb98) */
/* WARNING: Removing unreachable block (ram,0x0001030ecbf0) */

void FUN_1030ecb88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1030ecc98; end: 1030eccbb;  */

void FUN_1030ecc98(undefined8 *param_1,undefined8 param_2)

{
  FUN_1030ec114();
  *param_1 = param_2;
  return;
}



/* Entry: 1030eccbc; end: 1030ecd5b;  */

void FUN_1030eccbc(undefined8 param_1)

{
  if (lRam0000000112f3ca08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e746704);
  return;
}



/* Entry: 1030ecd5c; end: 1030ed04b;  */

void FUN_1030ecd5c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar8 = uStack_58;
  pcVar1 = FUN_1030ed2ec;
  func_0x00010487de38(FUN_1030ed2ec,0);
  uVar3 = 0x1030ed320;
  func_0x0001000bfde0(0x1030ed320,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(pcVar1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar3);
  uVar3 = 0;
  func_0x0001002ed07c(0);
  pcVar1 = FUN_1030ed04c;
  func_0x0001000bfde0(FUN_1030ed04c,0,uVar3);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61574();
  func_0x00010068b5b8();
  uVar3 = *(undefined8 *)pcVar1;
  uVar4 = *(undefined8 *)(pcVar1 + 8);
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  uVar4 = uVar8;
  func_0x000107c412b4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
  func_0x000107c5ba38();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  func_0x000107c615e8(uVar8);
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c5df60(uStack_58);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  uVar8 = 0;
  func_0x0001005f57cc(0);
  func_0x000107c615f0(uVar4);
  pcVar1 = FUN_1030ed1cc;
  func_0x00010068b194(FUN_1030ed1cc,0,uVar8);
  pcVar5 = pcVar1;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar1);
  uVar7 = 1;
  uVar8 = uVar3;
  func_0x0001006912cc(uVar3,1,uVar4,pcVar5,0,0,0,0);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(pcVar5);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_103154360(0);
  func_0x000107c610f8();
  uVar3 = uVar7;
  func_0x000107c615f0(uVar7);
  func_0x0001031542c0();
  func_0x000107c42c20(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x40));
  puVar2 = &UNK_11060cdc0;
  func_0x000107c613fc(&UNK_11060cdc0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar6 = &UNK_11060cde8;
  func_0x000107c613fc(&UNK_11060cde8,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  func_0x000107c615f0(uVar4);
  func_0x00010075a04c(0,1,FUN_1030ed3e8,puVar6);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uVar7);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 1030ed04c; end: 1030ed073;  */

void FUN_1030ed04c(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  func_0x000107c5fca0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1030ed074; end: 1030ed163;  */

void FUN_1030ed074(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_58 [3];
  
  uVar4 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    iVar2 = 2;
    auStack_58[0] = uVar4;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(auStack_58,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      uVar3 = param_3;
      func_0x000107c614f0(param_3);
      func_0x000107c615f0(uVar4);
      FUN_1030ed3f0(param_3,uVar4,param_2,uVar3);
      FUN_1030ed7a0(uVar4,cVar1);
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 1030ed164; end: 1030ed1cb;  */

void FUN_1030ed164(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_2);
    func_0x0001007d6d78();
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1030ed1cc; end: 1030ed2eb;  */

void FUN_1030ed1cc(byte *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  bVar1 = *param_1;
  lVar2 = 0x112d3b3f8;
  func_0x0001000285a8(0x112d3b3f8,&UNK_10d904aa0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0001005f57cc(0);
      uVar3 = 0;
      func_0x00010450b1b8();
    }
    else {
      func_0x0001005f57cc(0);
      uVar3 = 0;
      func_0x00010450b23c();
    }
    uStack_38 = uVar3;
    func_0x000100854cb0(&uStack_38);
    func_0x000107c61170(uVar3);
  }
  else if (bVar1 == 2) {
    FUN_1030f341c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 5;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    func_0x0001005f57cc(0);
    uVar3 = 0;
    func_0x00010450b2bc();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    uVar3 = 0;
    func_0x00010450b3c8();
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    func_0x0001048866ec(lVar2);
    func_0x000107c61574(lVar2);
  }
  else {
    func_0x000104886440();
  }
  return;
}



/* Entry: 1030ed2ec; end: 1030ed333;  */

bool FUN_1030ed2ec(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  cVar2 = *param_2;
  if (cVar2 == '\x03') {
    if (cVar1 == '\0') {
      return true;
    }
  }
  else if (cVar2 == '\x01' && cVar1 == '\x02') {
    return true;
  }
  return cVar2 == cVar1;
}



/* Entry: 1030ed334; end: 1030ed3e7;  */

void FUN_1030ed334(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1030ed3e8; end: 1030ed3ef;  */

void FUN_1030ed3e8(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 auStack_58 [3];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    iVar2 = 2;
    auStack_58[0] = uVar6;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(auStack_58,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61648();
    if (lVar4 != 0) {
      uVar5 = uVar3;
      func_0x000107c614f0(uVar3);
      func_0x000107c615f0(uVar6);
      FUN_1030ed3f0(uVar3,uVar6,lVar4,uVar5);
      FUN_1030ed7a0(uVar6,cVar1);
      func_0x000107c61574(lVar4);
    }
  }
  return;
}



/* Entry: 1030ed3f0; end: 1030ed79f;  */

/* WARNING: Possible PIC construction at 0x0001030ed4e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ed4ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ed3f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_3 + 0x48) + _DAT_112ff8ac0);
  func_0x000107c5ad00();
  if (iVar1 == 0) {
    func_0x0001000285a8(0x112ef4128,&UNK_10db22d78);
    func_0x000107c5dd88(param_2);
    func_0x000107c61180();
    uVar3 = param_2;
    func_0x0001000b637c();
    func_0x000107c61170(param_2);
    pcVar4 = FUN_1030ed2ec;
    func_0x00010487de38(FUN_1030ed2ec,0);
    uVar5 = 0x1030ed320;
    func_0x0001000bfde0(0x1030ed320,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(pcVar4);
    plVar6 = (long *)PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068();
    func_0x000107c61574(uVar5);
    plVar2 = plVar6;
    func_0x0001006c733c();
    func_0x000107c61574(uVar3);
    func_0x000107c61574(plVar6);
    puVar7 = &UNK_11060ce10;
    func_0x000107c613fc(&UNK_11060ce10,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = param_1;
    puVar8 = &UNK_11060ce38;
    func_0x000107c613fc(&UNK_11060ce38,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x1030ed7b4;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    pcVar9 = *(code **)(*plVar2 + 0x60);
    func_0x000107c615f0(param_1);
    pcVar4 = FUN_1030ed7c4;
    puVar7 = puVar8;
    (*pcVar9)(FUN_1030ed7c4);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar8);
    pcVar9 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(param_3 + 0x60),pcVar9,puVar7);
  }
  else {
    func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
    plVar2 = *(long **)(param_3 + 0x50);
    func_0x000107c41b80();
    func_0x000107c61180();
    plVar6 = plVar2;
    func_0x0001000b637c();
    func_0x000107c61170(plVar2);
    puVar7 = &UNK_11060cdc0;
    func_0x000107c613fc(&UNK_11060cdc0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,param_3);
    pcVar4 = FUN_1030ed7f0;
    puVar8 = puVar7;
    (**(code **)(*plVar6 + 0x60))(FUN_1030ed7f0);
    func_0x000107c61574(plVar6);
    func_0x000107c61574(puVar7);
    pcVar9 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar8 + 0x10))(*(undefined8 *)(param_3 + 0x60),pcVar9,puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
  return;
}


