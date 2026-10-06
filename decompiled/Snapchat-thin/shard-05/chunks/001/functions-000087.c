/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b0b6ec; end: 103b0b7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b6ec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112febd30;
  lVar2 = unaff_x20;
  FUN_103b0ccf4();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112febd38) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0b7bc; end: 103b0b82f; -[SCPlanSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112febd30;
  func_0x000107c61174();
  uVar3 = param_3;
  FUN_103b0ccf4();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112febd38) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0b830; end: 103b0b89f; -[SCPlanSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b830(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_112febd30;
  lVar3 = param_1;
  FUN_103b0ccf4();
  *(long *)(param_1 + lVar1) = lVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCPlanSticker/PlanSticker.swift",0x1f,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0b8a0);
  (*pcVar2)();
}



/* Entry: 103b0b8a0; end: 103b0bb0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b0b8a0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    puVar7 = auStack_60;
    func_0x000107c6147c(plVar3,puVar7,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      if (unaff_x20 == lStack_68) {
        func_0x000107c61170(lStack_68);
        uVar8 = 1;
        goto LAB_103b0b9b0;
      }
      uVar4 = *(ulong *)(unaff_x20 + _DAT_112febd38);
      func_0x000107c4ce20();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0bb04);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x000107c453bc();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0bb08);
        (*pcVar1)();
      }
      uVar4 = uVar5;
      func_0x000107c4e850();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      puVar9 = puVar7;
      if (uVar4 == 0) {
LAB_103b0b9e0:
        puVar7 = (undefined1 *)0xe000000000000000;
      }
      else {
        uVar5 = uVar4;
        func_0x000107c42abc();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 == 0) {
          uVar4 = 0;
          puVar9 = puVar7;
          goto LAB_103b0b9e0;
        }
        uVar4 = uVar5;
        func_0x000107c5faec();
        puVar9 = puVar7;
        func_0x000107c61170(uVar5);
      }
      uVar5 = *(ulong *)(lStack_68 + _DAT_112febd38);
      func_0x000107c4ce20();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0bb0c);
        (*pcVar1)();
      }
      uVar6 = uVar5;
      func_0x000107c453bc();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0bb10);
        (*pcVar1)();
      }
      uVar5 = uVar6;
      func_0x000107c4e850();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar5 == 0) {
LAB_103b0ba7c:
        puVar9 = (undefined1 *)0xe000000000000000;
      }
      else {
        uVar6 = uVar5;
        func_0x000107c42abc();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar6 == 0) {
          uVar5 = 0;
          goto LAB_103b0ba7c;
        }
        uVar5 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
      }
      uVar6 = uVar4 & 0xffffffffffff;
      if (((ulong)puVar7 & 0x2000000000000000) != 0) {
        uVar6 = (ulong)puVar7 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        if ((uVar4 == uVar5) && (puVar7 == puVar9)) {
          uVar8 = 1;
        }
        else {
          func_0x000107c605b8(uVar4,puVar7,uVar5,puVar9,0);
          uVar8 = (uint)uVar4;
        }
        func_0x000107c6142c(puVar9);
        func_0x000107c61170(lStack_68);
        func_0x000107c6142c(puVar7);
        goto LAB_103b0b9b0;
      }
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar9);
      func_0x000107c61170(lStack_68);
    }
  }
  uVar8 = 0;
LAB_103b0b9b0:
  return uVar8 & 1;
}



/* Entry: 103b0bb10; end: 103b0bb8f; -[SCPlanSticker isEqual:] */

uint FUN_103b0bb10(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103b0b8a0(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b0bb90; end: 103b0bbc3; -[SCPlanSticker hash] */

undefined8 FUN_103b0bb90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b0bbc4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b0bbc4; end: 103b0bcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103b0bbc4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112febd38);
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0bcac);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x000107c453bc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0bcb0);
    (*pcVar1)();
  }
  uVar2 = uVar3;
  func_0x000107c4e850();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c42abc();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c5faec(uVar3);
      func_0x000107c61170(uVar3);
      goto LAB_103b0bc78;
    }
  }
  uVar2 = 0;
  param_2 = 0xe000000000000000;
LAB_103b0bc78:
  func_0x000107c5fbbc(uVar2,param_2);
  func_0x000107c6142c(param_2);
  return uVar2 ^ 0x504c414e;
}



/* Entry: 103b0bcb0; end: 103b0bcb7; -[SCPlanSticker infoType] */

undefined8 FUN_103b0bcb0(void)

{
  return 0x16;
}



/* Entry: 103b0bcb8; end: 103b0bcc3; -[SCPlanSticker stickerId] */

void FUN_103b0bcb8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4e414c50;
  uVar3 = 0xe400000000000000;
  func_0x000107c5fadc(0x4e414c50,0xe400000000000000);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb990)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b0bcc4; end: 103b0bccf; -[SCPlanSticker shortLoggingName] */

void FUN_103b0bcc4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4e414c50;
  uVar3 = 0xe400000000000000;
  func_0x000107c5fadc(0x4e414c50,0xe400000000000000);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb9cc)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b0bcd0; end: 103b0bd3f;  */

void FUN_103b0bcd0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x4e414c50;
  uVar3 = 0xe400000000000000;
  func_0x000107c5fadc(0x4e414c50,0xe400000000000000);
  lVar2 = lVar1;
  (*param_3)();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b0bd40; end: 103b0bd4f; -[SCPlanSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0bd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febd30));
  return;
}



/* Entry: 103b0bd50; end: 103b0bd5f; -[SCPlanSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0bd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febd38));
  return;
}



/* Entry: 103b0bd60; end: 103b0bd93; -[SCPlanSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0bd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112febd38);
  *(undefined8 *)(param_1 + _DAT_112febd38) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b0bd94; end: 103b0bd9b; -[SCPlanSticker supportedFlows] */

undefined8 FUN_103b0bd94(void)

{
  return 1;
}



/* Entry: 103b0bd9c; end: 103b0bda7; -[SCPlanSticker intrinsicSize] */

undefined1  [16] FUN_103b0bd9c(void)

{
  return ZEXT816(0);
}



/* Entry: 103b0bda8; end: 103b0c00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103b0bda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_7 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_7) {
      uVar1 = param_7;
    }
    func_0x000107c60480();
  }
  if (uVar1 == 0) {
    param_7 = 0x112dc0158;
    FUN_103b0c1ec(0x112dc0158,&PTR_PTR_1126d91a8,0x112dc01f0,&UNK_10dca7bd0);
    func_0x000107c613fc();
    *(undefined8 *)(param_7 + 0x18) = 3;
    *(undefined8 *)(param_7 + 0x10) = 1;
    puVar2 = PTR_PTR_1126d91a8;
    func_0x000107c610f8();
    func_0x000107c461ec(0);
    *(undefined **)(param_7 + 0x20) = puVar2;
  }
  else {
    func_0x000107c61434(param_7);
  }
  func_0x000107c5d0f0();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112febd30);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112febd38);
  puVar2 = PTR_PTR_1126ba898;
  func_0x000107c610f8(PTR_PTR_1126ba898);
  uVar3 = 0;
  FUN_103b0c284(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar1 = param_7;
  func_0x000107c5fc48(param_7,uVar3);
  func_0x000107c6142c(param_7);
  uVar3 = 0;
  FUN_103b0c284(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc48(param_10,uVar3);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_10);
  return puVar2;
}



/* Entry: 103b0c00c; end: 103b0c12f; -[SCPlanSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_103b0c00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103b0c284(0,0x112dc0158,&PTR_PTR_1126d91a8);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0;
  FUN_103b0c284(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  func_0x000107c5fc54(param_12,uVar1);
  func_0x000107c61174(param_7);
  uVar1 = param_9;
  FUN_103b0bda8(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b0c130; end: 103b0c18f; -[SCPlanSticker init] */

void FUN_103b0c130(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlanSticker.PlanSticker",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0c15c);
  (*pcVar1)();
}



/* Entry: 103b0c190; end: 103b0c1c7; -[SCPlanSticker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b0c1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b0c1b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0c190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112febd30));
  return;
}



/* Entry: 103b0c1c8; end: 103b0c1eb;  */

void FUN_103b0c1c8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112febd68;
  plVar5 = (long *)&UNK_10dc54be8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103b0c284(0,0x112febd70,&PTR_PTR_1126ac058);
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



/* Entry: 103b0c1ec; end: 103b0c263;  */

void FUN_103b0c1ec(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103b0c284(0,param_1,param_2);
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



/* Entry: 103b0c264; end: 103b0c283;  */

void FUN_103b0c264(void)

{
  func_0x000107c61168(&PTR_PTR_112928cf8);
  return;
}



/* Entry: 103b0c284; end: 103b0c2c3;  */

void FUN_103b0c284(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b0c2c4; end: 103b0c2c7;  */

undefined * FUN_103b0c2c4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    FUN_103b0e388(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x4e414c50;
  func_0x000107c5fadc(0x4e414c50,0xe400000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0ce6c);
  (*pcVar1)();
}



/* Entry: 103b0c2c8; end: 103b0c2df; +[SCPlanStickerHelpers defaultContentSize] */

undefined1  [16] FUN_103b0c2c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x406e000000000000;
  auVar1._0_8_ = 0x4072200000000000;
  return auVar1;
}



/* Entry: 103b0c2e0; end: 103b0c327; +[SCPlanStickerHelpers pickerPillIconWithSize:] */

void FUN_103b0c2e0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c450a4(param_1,param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b0c328; end: 103b0c447;  */

void FUN_103b0c328(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1106d2cf8;
  func_0x000107c613fc(&UNK_1106d2cf8,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_1106d2e38;
  func_0x000107c613fc(&UNK_1106d2e38,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &UNK_1106d2e60;
  func_0x000107c613fc(&UNK_1106d2e60,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dc54c68;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c6157c(param_2);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10dc54c78,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 103b0c448; end: 103b0c4db;  */

void FUN_103b0c448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = 0x112d45220;
  FUN_103b0e234(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103b0c4dc,uVar2,uVar3);
  return;
}



/* Entry: 103b0c4dc; end: 103b0c59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0c4dc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar1 = (undefined8 *)(lVar6 + _DAT_11302c880);
    func_0x000107c61428(puVar1,unaff_x22 + 0x28,1,0);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    func_0x000107c6157c(uVar4);
    func_0x000100d66a20(uVar3,uVar5);
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000103b0c598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6 == 0);
  return;
}



/* Entry: 103b0c59c; end: 103b0c5df;  */

void FUN_103b0c59c(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000103b0c5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 103b0c5e0; end: 103b0c6c3;  */

/* WARNING: Possible PIC construction at 0x000103b0c6a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b0c6a8) */

void FUN_103b0c5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1106d2de8;
  func_0x000107c613fc(&UNK_1106d2de8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_1106d2e10;
  func_0x000107c613fc(&UNK_1106d2e10,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dc54c48;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10dc54c58,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103b0c6c4; end: 103b0c757;  */

void FUN_103b0c6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  FUN_103b0e234(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103b0c758,uVar2,uVar3);
  return;
}



/* Entry: 103b0c758; end: 103b0c7d3;  */

void FUN_103b0c758(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  FUN_103ede508(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  (*pcVar2)();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000103b0c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103b0c7d4; end: 103b0c80f;  */

void FUN_103b0c7d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103b0c80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103b0c810; end: 103b0c96f; +[SCPlanStickerHelpers planStickerViewFromItemInstance:runtime:type:onAddPlanTapped:onCardTapped:completion:] */

void FUN_103b0c810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_1106d2cd0;
    func_0x000107c613fc(&UNK_1106d2cd0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_6;
    uVar1 = 0x103b0e3e0;
  }
  if (param_7 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = &UNK_1106d2ca8;
    func_0x000107c613fc(&UNK_1106d2ca8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_7;
    uVar5 = 0x103b0e0b4;
  }
  puVar2 = &UNK_1106d2c80;
  func_0x000107c613fc(&UNK_1106d2c80,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000103b0d0c4(param_3,param_4,param_5,uVar1,puVar3,uVar5,puVar4,FUN_103b0e0a4,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000100d66a20(uVar5,puVar4);
  func_0x000100d66a20(uVar1,puVar3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 103b0c970; end: 103b0c9af; +[SCPlanStickerHelpers makeViewModelFromItemInstance:type:] */

void FUN_103b0c970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b0ce6c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b0c9b0; end: 103b0ca37; +[SCPlanStickerHelpers updatePlanStickerView:withItemInstance:type:] */

/* WARNING: Possible PIC construction at 0x000103b0ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b0ca20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b0ca14) */
/* WARNING: Removing unreachable block (ram,0x000103b0ca24) */

void FUN_103b0c9b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  lVar1 = param_3;
  FUN_103b0d434();
  if (lVar1 != 0) {
    FUN_103b0ce6c(param_4,param_5);
    func_0x000107c5a588(lVar1);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b0ca38; end: 103b0caab; +[SCPlanStickerHelpers canonicalStartTimestampMsWithComposerStartMs:hour:minute:] */

undefined8
FUN_103b0ca38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  FUN_103b0d690(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return param_3;
}



/* Entry: 103b0caac; end: 103b0cae3; +[SCPlanStickerHelpers editPreFillForPlanSticker:] */

void FUN_103b0caac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b0db84();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b0cae4; end: 103b0cb1f; -[SCPlanStickerHelpers init] */

void FUN_103b0cae4(undefined8 param_1)

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



/* Entry: 103b0cb20; end: 103b0cb2b; -[SCPlanStickerEditPreFill eventId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0cb20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112febd78);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112febd78))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0cb2c; end: 103b0cb37; -[SCPlanStickerEditPreFill title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0cb2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112febd80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112febd80))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0cb38; end: 103b0cb7f;  */

void FUN_103b0cb38(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0cb80; end: 103b0cbdb; -[SCPlanStickerEditPreFill location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0cb80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112febd88))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112febd88);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0cbdc; end: 103b0cbeb; -[SCPlanStickerEditPreFill startTimestampNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0cbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febd90));
  return;
}



/* Entry: 103b0cbec; end: 103b0cbfb; -[SCPlanStickerEditPreFill hourNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0cbec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febd98));
  return;
}



/* Entry: 103b0cbfc; end: 103b0cc0b; -[SCPlanStickerEditPreFill minuteNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0cbfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febda0));
  return;
}



/* Entry: 103b0cc0c; end: 103b0cc37; -[SCPlanStickerEditPreFill init] */

void FUN_103b0cc0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlanSticker.PlanStickerEditPreFill",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0cc38);
  (*pcVar1)();
}



/* Entry: 103b0cc38; end: 103b0cc3b;  */

void FUN_103b0cc38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b0cc3c; end: 103b0cc6f;  */

void FUN_103b0cc3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b0cc70; end: 103b0ccf3; -[SCPlanStickerEditPreFill .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b0ccc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b0cccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0cc70(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112febd78 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112febd80 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112febd88 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112febd90));
  return;
}



/* Entry: 103b0ccf4; end: 103b0ce6b;  */

undefined * FUN_103b0ccf4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    FUN_103b0e388(0,0x112d4ede8,&PTR_PTR_1126ba8d8);
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x4e414c50;
  func_0x000107c5fadc(0x4e414c50,0xe400000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0ce6c);
  (*pcVar1)();
}



/* Entry: 103b0ce6c; end: 103b0d433;  */

undefined * FUN_103b0ce6c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0d0c0);
    (*pcVar1)();
  }
  uVar5 = param_1;
  func_0x000107c453bc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (uVar5 != 0) {
    uVar2 = uVar5;
    func_0x000107c4e850();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar2 == 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar11 = 0;
      uVar5 = 0;
      uVar9 = 0xe000000000000000;
      uVar10 = 0xe000000000000000;
      uVar8 = 0xe000000000000000;
    }
    else {
      uVar11 = uVar2;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (uVar11 == 0) {
        uVar5 = 0;
        uVar8 = 0xe000000000000000;
        uVar7 = param_2;
      }
      else {
        uVar5 = uVar11;
        func_0x000107c5faec();
        uVar7 = param_2;
        func_0x000107c61170(uVar11);
        uVar8 = param_2;
      }
      uVar11 = uVar2;
      func_0x000107c5bbf8(uVar2);
      uVar10 = uVar2;
      func_0x000107c4b928();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uVar6 = 0;
        uVar10 = 0xe000000000000000;
        uVar9 = uVar7;
      }
      else {
        uVar6 = uVar10;
        func_0x000107c5faec();
        uVar9 = uVar7;
        func_0x000107c61170(uVar10);
        uVar10 = uVar7;
      }
      uVar3 = uVar2;
      func_0x000107c42aa8();
      func_0x000107c61180();
      if (uVar3 == 0) {
        uVar7 = 0;
        uVar9 = 0xe000000000000000;
      }
      else {
        uVar7 = uVar3;
        func_0x000107c5faec();
        func_0x000107c61170(uVar3);
      }
    }
    puVar4 = PTR_PTR_1126ac060;
    func_0x000107c610f8(PTR_PTR_1126ac060);
    func_0x000107c5fadc(uVar5,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c48d7c((double)(long)uVar11,puVar4);
    func_0x000107c61170(uVar5);
    uVar5 = uVar6 & 0xffffffffffff;
    if ((uVar10 & 0x2000000000000000) != 0) {
      uVar5 = uVar10 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      uVar6 = 0;
    }
    else {
      func_0x000107c5fadc(uVar6,uVar10);
    }
    func_0x000107c6142c(uVar10);
    func_0x000107c56080(puVar4);
    func_0x000107c61170(uVar6);
    uVar5 = uVar7 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar5 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      uVar7 = 0;
    }
    else {
      func_0x000107c5fadc(uVar7,uVar9);
    }
    func_0x000107c6142c(uVar9);
    func_0x000107c55084(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0d0c4);
  (*pcVar1)();
}



/* Entry: 103b0d434; end: 103b0d68f;  */

undefined8 FUN_103b0d434(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_103b0e388(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = param_1;
  func_0x000107c5fc54(param_1,uVar3);
  func_0x000107c61170(param_1);
  uVar12 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar12 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar12;
    if (0x7fffffffffffffff < uVar4) {
      uVar10 = uVar4;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0d5d8);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar11;
          func_0x000100f040d0(uVar11,uVar4);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0d5d4);
          (*pcVar2)();
        }
        puVar8 = PTR_PTR_1126ac058;
        func_0x000107c61168(PTR_PTR_1126ac058);
        uVar6 = uVar5;
        func_0x000107c6148c(uVar5,puVar8);
        if (uVar6 != 0) break;
        func_0x000107c61170(uVar5);
        uVar11 = uVar11 + 1;
        if (uVar1 == uVar10) goto LAB_103b0d5f4;
      }
      puVar8 = puVar9;
      func_0x000107c61550();
      if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar8 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar8 = puVar9;
          }
          func_0x000107c60480(puVar8);
        }
        puVar7 = (undefined *)0x0;
        FUN_103b0e7c0(0,puVar8 + 1,1,puVar9);
        puVar9 = puVar7;
      }
      uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar11) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_103b0e7c0(puVar8,uVar11 + 1,1,puVar9);
        uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
        puVar9 = puVar8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar5 + uVar11 * 8 + 0x20) = uVar6;
      uVar11 = uVar1;
    } while (uVar1 != uVar10);
  }
LAB_103b0d5f4:
  func_0x000107c6142c(uVar4);
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar8 = puVar9;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar9);
    uVar3 = 0;
  }
  else {
    if (((ulong)puVar9 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0d690);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(puVar9 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      FUN_103b0eac0(0,puVar9);
    }
    func_0x000107c6142c(puVar9);
  }
  return uVar3;
}



/* Entry: 103b0d690; end: 103b0db83;  */

long FUN_103b0d690(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar4;
  long extraout_x12;
  undefined8 extraout_x13;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar1 = 0x112d373d8;
  lStack_78 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_88 = (long)&uStack_c0 - extraout_x8;
  func_0x000107c5ec74();
  lStack_90 = *(long *)(lVar1 + -8);
  lStack_80 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar9 = ((long)&uStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5efa8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ef18();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar5 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ef64();
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar11 = lVar7 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (lVar11 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  if ((param_2 != 0) && (param_3 != 0)) {
    dVar13 = (double)lStack_78;
    uStack_c0 = extraout_x13;
    func_0x000107c61174();
    lStack_b0 = param_2;
    func_0x000107c61174();
    lStack_b8 = param_3;
    func_0x000107c5ee88(lVar2,dVar13 / 1000.0);
    (**(code **)(lVar10 + 0x68))
              (lVar7,*(undefined4 *)
                      PTR___s10Foundation8CalendarV10IdentifierO9gregorianyA2EmFWC_110350cc8,lVar1);
    func_0x000107c5ef1c(lVar11,lVar7);
    (**(code **)(lVar10 + 8))(lVar7,lVar1);
    func_0x000107c5efa4(lVar5);
    func_0x000107c5ef58(lVar5);
    lVar1 = 0x112d36588;
    func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
    lVar3 = 0;
    func_0x000107c5ef5c();
    lVar7 = *(long *)(lVar3 + -8);
    lVar10 = *(long *)(lVar7 + 0x48);
    uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
    uVar6 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
    func_0x000107c613fc(lVar1,uVar6 + lVar10 * 3,uVar4 | 7);
    dVar13 = 1.48219693752374e-323;
    *(undefined8 *)(lVar1 + 0x18) = 6;
    *(undefined8 *)(lVar1 + 0x10) = 3;
    lVar5 = lVar1 + uVar6;
    pcVar8 = *(code **)(lVar7 + 0x68);
    (*pcVar8)(lVar5,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88,
              lVar3);
    lVar7 = lStack_b8;
    (*pcVar8)(lVar5 + lVar10,
              *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90,lVar3)
    ;
    (*pcVar8)(lVar5 + lVar10 * 2,
              *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_110350d78,lVar3);
    lVar10 = lVar1;
    func_0x000100ddce0c(lVar1);
    func_0x000107c61588(lVar1);
    func_0x000107c61408(lVar5,3,lVar3);
    func_0x000107c6145c(lVar1,0x20,7);
    func_0x000107c5ef2c(lVar9,lVar10,lVar2);
    lVar1 = lStack_b0;
    func_0x000107c6142c(lVar10);
    func_0x000107c49820(lVar1);
    func_0x000107c5ec50();
    func_0x000107c49820(lVar7);
    func_0x000107c5ec68();
    func_0x000107c5ec6c(0,0);
    lVar10 = lStack_88;
    func_0x000107c5ef48(lStack_88,lVar9);
    lVar5 = lStack_a0;
    lVar3 = lVar10;
    (**(code **)(lVar12 + 0x30))(lVar10,1,lStack_a0);
    if ((int)lVar3 == 1) {
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar1);
      (**(code **)(lStack_90 + 8))(lVar9,lStack_80);
      (**(code **)(lStack_a8 + 8))(lVar11,lStack_98);
      (**(code **)(lVar12 + 8))(lVar2,lVar5);
      func_0x0001000d1dcc(lVar10);
    }
    else {
      (**(code **)(lVar12 + 0x20))(uStack_c0,lVar10,lVar5);
      func_0x000107c5ee8c();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar1);
      pcVar8 = *(code **)(lVar12 + 8);
      (*pcVar8)(uStack_c0,lVar5);
      (**(code **)(lStack_90 + 8))(lVar9,lStack_80);
      (**(code **)(lStack_a8 + 8))(lVar11,lStack_98);
      (*pcVar8)(lVar2,lVar5);
      dVar13 = dVar13 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103b0db7c);
        (*pcVar8)();
      }
      if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103b0db80);
        (*pcVar8)();
      }
      if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103b0db84);
        (*pcVar8)();
      }
      lStack_78 = (long)dVar13;
    }
  }
  return lStack_78;
}



/* Entry: 103b0db84; end: 103b0e063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_103b0db84(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar2 = 0;
  func_0x000107c5ef64();
  lVar21 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ec74();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar19 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  func_0x000107c5eea4();
  lStack_90 = *(long *)(uVar3 - 8);
  uStack_88 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar23 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(ulong *)(param_1 + _DAT_112febd38);
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x103b0e060);
    (*pcVar17)();
  }
  uVar20 = uVar4;
  func_0x000107c453bc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar20 != 0) {
    uVar4 = uVar20;
    func_0x000107c4e850();
    func_0x000107c61180();
    func_0x000107c61170(uVar20);
    if (uVar4 == 0) {
      func_0x000107c61170(uVar3);
      puVar10 = (ulong *)0x0;
    }
    else {
      uVar20 = uVar4;
      func_0x000107c42abc();
      func_0x000107c61180();
      if (uVar20 == 0) {
        uStack_80 = 0xe000000000000000;
        uStack_78 = 0;
      }
      else {
        uVar18 = uVar20;
        func_0x000107c5faec();
        uStack_80 = param_2;
        uStack_78 = uVar18;
        func_0x000107c61170(uVar20);
      }
      uVar20 = uVar4;
      func_0x000107c5bbf8();
      if ((long)uVar20 < 1) {
        puVar11 = (undefined *)0x0;
        puVar12 = (undefined *)0x0;
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c47580();
        uVar18 = uVar4;
        puStack_a0 = puVar14;
        func_0x000107c49a0c();
        if ((uVar18 & 1) == 0) {
          lStack_b8 = lVar15;
          lStack_b0 = lVar2;
          uStack_a8 = uVar3;
          func_0x000107c5ee88(lVar23,(double)uVar20 / 1000.0);
          func_0x000107c5ef54(puVar9);
          lVar2 = 0x112d36588;
          func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
          lVar5 = 0;
          func_0x000107c5ef5c();
          lVar16 = *(long *)(lVar5 + -8);
          lVar13 = *(long *)(lVar16 + 0x48);
          uVar3 = (ulong)*(byte *)(lVar16 + 0x50);
          uVar20 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
          func_0x000107c613fc(lVar2,uVar20 + lVar13 * 2,uVar3 | 7);
          *(undefined8 *)(lVar2 + 0x18) = 4;
          *(undefined8 *)(lVar2 + 0x10) = 2;
          lVar15 = lVar2 + uVar20;
          pcVar17 = *(code **)(lVar16 + 0x68);
          (*pcVar17)(lVar15,*(undefined4 *)
                             PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80,lVar5);
          (*pcVar17)(lVar15 + lVar13,
                     *(undefined4 *)
                      PTR___s10Foundation8CalendarV9ComponentO6minuteyA2EmFWC_110350d98,lVar5);
          lVar13 = lVar2;
          func_0x000100ddce0c(lVar2);
          func_0x000107c61588(lVar2);
          func_0x000107c61408(lVar15,2,lVar5);
          func_0x000107c6145c(lVar2,0x20,7);
          func_0x000107c5ef2c(lVar19,lVar13,lVar23);
          func_0x000107c6142c(lVar13);
          lVar2 = lStack_98;
          (**(code **)(lVar21 + 8))(puVar9);
          uVar8 = (uint)lVar2;
          func_0x000107c5ec4c();
          puVar12 = (undefined *)0x0;
          if ((uVar8 & 0xff) != 1) {
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c46ed0();
          }
          func_0x000107c5ec64();
          puVar14 = puStack_a0;
          lVar2 = lStack_b8;
          if ((uVar8 & 0xff) == 1) {
            puVar11 = (undefined *)0x0;
          }
          else {
            puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c46ed0();
          }
          uVar3 = uStack_a8;
          (**(code **)(lVar2 + 8))(lVar19,lStack_b0);
          param_2 = uStack_88;
          (**(code **)(lStack_90 + 8))(lVar23);
        }
        else {
          puVar11 = (undefined *)0x0;
          puVar12 = (undefined *)0x0;
          puVar14 = puStack_a0;
        }
      }
      uVar20 = uVar4;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (uVar20 == 0) {
        uVar18 = 0;
        uVar20 = 0xe000000000000000;
        uVar24 = param_2;
      }
      else {
        uVar18 = uVar20;
        func_0x000107c5faec();
        uVar24 = param_2;
        func_0x000107c61170(uVar20);
        uVar20 = param_2;
      }
      uVar6 = uVar4;
      func_0x000107c4b928();
      func_0x000107c61180();
      if (uVar6 == 0) {
        uVar22 = 0;
        uVar24 = 0;
      }
      else {
        uVar22 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170();
      }
      func_0x000103b0e084();
      uVar7 = uVar6;
      func_0x000107c610f8();
      puVar10 = (ulong *)(uVar7 + _DAT_112febd78);
      *puVar10 = uStack_78;
      puVar10[1] = uStack_80;
      puVar10 = (ulong *)(uVar7 + _DAT_112febd80);
      *puVar10 = uVar18;
      puVar10[1] = uVar20;
      puVar10 = (ulong *)(uVar7 + _DAT_112febd88);
      *puVar10 = uVar22;
      puVar10[1] = uVar24;
      *(undefined **)(uVar7 + _DAT_112febd90) = puVar14;
      *(undefined **)(uVar7 + _DAT_112febd98) = puVar12;
      *(undefined **)(uVar7 + _DAT_112febda0) = puVar11;
      puVar1 = PTR_s_init_1125d9248;
      uStack_70 = uVar7;
      uStack_68 = uVar6;
      func_0x000107c61174(puVar14);
      func_0x000107c61174(puVar12);
      func_0x000107c61174(puVar11);
      puVar10 = &uStack_70;
      func_0x000107c61154(puVar10,puVar1);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
    }
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x103b0e064);
  (*pcVar17)();
}



/* Entry: 103b0e064; end: 103b0e0a3;  */

void FUN_103b0e064(void)

{
  func_0x000107c61168(&PTR_PTR_112928dc0);
  return;
}



/* Entry: 103b0e0a4; end: 103b0e0ef;  */

void FUN_103b0e0a4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b0e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103b0e0f0; end: 103b0e123;  */

void FUN_103b0e0f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103b0e124; end: 103b0e187;  */

void FUN_103b0e124(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103b0e188;
  plVar7[4] = lVar4;
  plVar7[5] = lVar2;
  plVar7[2] = lVar5;
  plVar7[3] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar7[6] = lVar5;
  uVar6 = 0x112d45220;
  FUN_103b0e234(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103b0c758,lVar4,uVar6);
  return;
}



/* Entry: 103b0e188; end: 103b0e1c3;  */

void FUN_103b0e188(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103b0e1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103b0e1c4; end: 103b0e233;  */

void FUN_103b0e1c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103b0e3e4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103b0e234; end: 103b0e273;  */

void FUN_103b0e234(long *param_1,code *param_2,long param_3)

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



/* Entry: 103b0e274; end: 103b0e2d3;  */

void FUN_103b0e274(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103b0e2d4;
  plVar5[9] = lVar2;
  plVar5[10] = lVar6;
  plVar5[8] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[0xb] = lVar3;
  uVar4 = 0x112d45220;
  FUN_103b0e234(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103b0c4dc,lVar2,uVar4);
  return;
}



/* Entry: 103b0e2d4; end: 103b0e317;  */

void FUN_103b0e2d4(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103b0e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103b0e318; end: 103b0e387;  */

void FUN_103b0e318(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103b0e3e8;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103b0e388; end: 103b0e3c7;  */

void FUN_103b0e388(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b0e3c8; end: 103b0e3ef;  */

void FUN_103b0e3c8(long param_1,long param_2)

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



/* Entry: 103b0e3f0; end: 103b0e443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0e3f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112febdf8,0);
  func_0x000103ede3d8(param_1,param_2);
  return;
}



/* Entry: 103b0e444; end: 103b0e653;  */

ulong FUN_103b0e444(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x20;
  
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_103b0ec90(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = unaff_x20;
  uVar8 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(unaff_x20);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (0 < (long)uVar4) {
    uVar4 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0e60c);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar3 + uVar4 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar4;
        uVar8 = uVar3;
        FUN_103b0ead4(uVar4,uVar3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      uVar6 = uVar5;
      func_0x000107c3cf00();
      func_0x000107c61180();
      if (uVar6 != 0) {
        uVar7 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        if (uVar7 == param_1 && uVar8 == param_2) {
          func_0x000107c6142c(uVar3);
LAB_103b0e5fc:
          func_0x000107c6142c(uVar8);
          return uVar5;
        }
        func_0x000107c605b8(uVar7,uVar8,param_1,param_2,0);
        func_0x000107c6142c(uVar8);
        uVar8 = uVar3;
        if ((uVar7 & 1) != 0) goto LAB_103b0e5fc;
      }
      uVar6 = uVar5;
      func_0x000107c5c3b0(uVar5);
      func_0x000107c61180();
      uVar7 = uVar6;
      uVar8 = uVar2;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar6);
      func_0x000100847d40(uVar7);
      func_0x000107c61170(uVar5);
      if (uVar3 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar5 = uVar3;
        }
        func_0x000107c60480();
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)uVar5);
  }
  func_0x000107c6142c(uVar3);
  return 0;
}



/* Entry: 103b0e654; end: 103b0e6df; -[_TtC13SCPlanSticker15PlanStickerView prepareForExportSnapshot] */

/* WARNING: Possible PIC construction at 0x000103b0e6c8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0e654(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  FUN_103b0e444(0xd000000000000015,0x800000010f19ec90);
  uVar3 = param_1;
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x000107c49eac(), uVar3 = uVar1, (uVar2 & 1) == 0)) {
    func_0x000107c550d8(uVar1);
    func_0x000107c61604(param_1 + _DAT_112febdf8,uVar1);
    uVar3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103b0e6e0; end: 103b0e74b; -[_TtC13SCPlanSticker15PlanStickerView restoreAfterExportSnapshot] */

/* WARNING: Possible PIC construction at 0x000103b0e728: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0e6e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_112febdf8;
  lVar2 = param_1 + _DAT_112febdf8;
  func_0x000107c61618();
  lVar3 = param_1;
  func_0x000107c61174(param_1);
  if (lVar2 == 0) {
    func_0x000107c61604(param_1 + lVar1,0);
  }
  else {
    func_0x000107c550d8(lVar2);
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103b0e74c; end: 103b0e75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0e74c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(unaff_x20 + _DAT_112febdf8);
  return;
}



/* Entry: 103b0e75c; end: 103b0e78f;  */

void FUN_103b0e75c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b0e790; end: 103b0e79f; -[_TtC13SCPlanSticker15PlanStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0e790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112febdf8);
  return;
}



/* Entry: 103b0e7a0; end: 103b0e7bf;  */

void FUN_103b0e7a0(void)

{
  func_0x000107c61168(&PTR_PTR_112928f58);
  return;
}



/* Entry: 103b0e7c0; end: 103b0e7db;  */

ulong FUN_103b0e7c0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0e924);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103b0e924(uVar2,uVar4,FUN_103b0c1c8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0e920);
      (*pcVar1)();
    }
    FUN_103b0e9a4(0,uVar2,uVar3 + 0x20,param_4,0x112febd70,&PTR_PTR_1126ac058);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103b0e7dc; end: 103b0e923;  */

ulong FUN_103b0e7dc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0e924);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103b0e924(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0e920);
      (*pcVar1)();
    }
    FUN_103b0e9a4(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103b0e924; end: 103b0e9a3;  */

undefined * FUN_103b0e924(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103b0e9a4; end: 103b0eabf;  */

long FUN_103b0e9a4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b0eabc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b0eac0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103b0ec90(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103b0ec90(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103b0eab8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103b0eac0; end: 103b0ead3;  */

ulong FUN_103b0eac0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0ebb8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0ebbc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ac058;
    func_0x000107c61168(PTR_PTR_1126ac058);
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
    puVar4 = PTR_PTR_1126ac058;
    func_0x000107c61168(PTR_PTR_1126ac058);
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
  FUN_103b0ec90(0,0x112febd70,&PTR_PTR_1126ac058);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0ec90);
  (*pcVar2)();
}



/* Entry: 103b0ead4; end: 103b0ec8f;  */

ulong FUN_103b0ead4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0ebb8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0ebbc);
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
  FUN_103b0ec90(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b0ec90);
  (*pcVar2)();
}



/* Entry: 103b0ec90; end: 103b0eda7;  */

void FUN_103b0ec90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b0eda8; end: 103b0eef7;  */

undefined8 * FUN_103b0eda8(undefined8 *param_1,undefined8 *param_2)

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
  long lVar10;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  lVar10 = param_2[4];
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(uVar1);
  if (lVar10 == 0) {
    lVar10 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar10;
  }
  else {
    uVar8 = param_2[5];
    param_1[4] = lVar10;
    param_1[5] = uVar8;
    func_0x000107c6157c();
  }
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  uVar8 = param_2[0xc];
  uVar4 = param_2[0xd];
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar4;
  uVar5 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar5;
  lVar10 = param_2[0x15];
  uVar6 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar6;
  uVar1 = param_2[0x12];
  uVar7 = param_2[0x13];
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar7;
  uVar9 = param_2[0x14];
  param_1[0x14] = uVar9;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000107c61434(uVar9);
  if (lVar10 == 0) {
    lVar10 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = lVar10;
  }
  else {
    uVar8 = param_2[0x16];
    param_1[0x15] = lVar10;
    param_1[0x16] = uVar8;
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103b0eef8; end: 103b0f2bf;  */

undefined8 * FUN_103b0eef8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar2);
  lVar1 = param_2[4];
  if (param_1[4] == 0) {
    if (lVar1 != 0) {
      uVar2 = param_2[5];
      param_1[4] = lVar1;
      param_1[5] = uVar2;
      func_0x000107c6157c();
      goto LAB_103b0efb8;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = param_2[5];
      uVar3 = param_1[5];
      param_1[4] = lVar1;
      param_1[5] = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar3);
      goto LAB_103b0efb8;
    }
    func_0x000107c61574(param_1[5]);
  }
  lVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar1;
LAB_103b0efb8:
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[10] = param_2[10];
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  param_1[0xe] = param_2[0xe];
  uVar2 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[0x10] = param_2[0x10];
  uVar2 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  lVar1 = param_2[0x15];
  if (param_1[0x15] == 0) {
    if (lVar1 != 0) {
      uVar2 = param_2[0x16];
      param_1[0x15] = lVar1;
      param_1[0x16] = uVar2;
      func_0x000107c6157c();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = param_2[0x16];
      uVar3 = param_1[0x16];
      param_1[0x15] = lVar1;
      param_1[0x16] = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar3);
      return param_1;
    }
    func_0x000107c61574(param_1[0x16]);
  }
  lVar1 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = lVar1;
  return param_1;
}



/* Entry: 103b0f2c0; end: 103b0f383;  */

int FUN_103b0f2c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103b0f384; end: 103b0fc03;  */

long FUN_103b0f384(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b0fc04; end: 103b0fc17;  */

bool FUN_103b0fc04(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b0fc18; end: 103b0fcef;  */

void FUN_103b0fc18(void)

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



/* Entry: 103b0fcf0; end: 103b0fd0f;  */

void FUN_103b0fcf0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b0fd10; end: 103b0fd4f;  */

void FUN_103b0fd10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febe28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54d10;
  func_0x000107c61520(&UNK_10dc54d10,&UNK_1106d3120);
  puRam0000000112febe28 = puVar1;
  return;
}



/* Entry: 103b0fd50; end: 103b0fd5f;  */

undefined1  [16] FUN_103b0fd50(void)

{
  return ZEXT816(0x1106d3120);
}



/* Entry: 103b0fd60; end: 103b0fd6f; -[_TtC25SCCalendarPresentServices25SCCalendarPresentServices pagePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0fd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febe30));
  return;
}



/* Entry: 103b0fd70; end: 103b0fe9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0fd70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112febe38;
  uVar2 = 0x112d6f520;
  func_0x0001000285a8(0x112d6f520,&UNK_10d930f90);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112febe30) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0fea0; end: 103b0ff3f; -[_TtC25SCCalendarPresentServices25SCCalendarPresentServices initWithPagePresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0fea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112febe38;
  func_0x0001000285a8(0x112d6f520,&UNK_10d930f90);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112febe30) = param_3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0ff40; end: 103b0ff9f; -[_TtC25SCCalendarPresentServices25SCCalendarPresentServices init] */

void FUN_103b0ff40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPresentServices.SCCalendarPresentServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0ff6c);
  (*pcVar1)();
}



/* Entry: 103b0ffa0; end: 103b10053; -[_TtC25SCCalendarPresentServices25SCCalendarPresentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0ffa0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112febe30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112febe38));
  return;
}



/* Entry: 103b10054; end: 103b1008b;  */

void FUN_103b10054(undefined8 *param_1)

{
  FUN_103b1008c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9]);
  return;
}



/* Entry: 103b1008c; end: 103b100d3;  */

/* WARNING: Possible PIC construction at 0x000103b100b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b100b8) */

void FUN_103b1008c(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x7;
  uint uVar1;
  
  uVar1 = (uint)((ulong)in_x7 >> 0x3e);
  if ((uVar1 != 1) && (uVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}


