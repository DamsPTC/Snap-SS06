/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ba63c0; end: 102ba63df;  */

void FUN_102ba63c0(void)

{
  func_0x000107c61168(&PTR_PTR_112892ce8);
  return;
}



/* Entry: 102ba63e0; end: 102ba6427; -[SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba63e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efbda0;
  func_0x000107c61428(param_1 + _DAT_112efbda0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ba6428; end: 102ba647f; -[SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba6428(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efbda0;
  func_0x000107c61428(param_1 + _DAT_112efbda0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ba6480; end: 102ba6557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba6480(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102ba5980();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efbcc8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ba6558);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efbcd0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efbda8);
    *(long **)(unaff_x20 + _DAT_112efbda8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102ba6558; end: 102ba657f; -[SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint begin] */

void FUN_102ba6558(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ba6480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ba6580; end: 102ba66f7;  */

/* WARNING: Possible PIC construction at 0x000102ba65e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba6680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba65ec) */
/* WARNING: Removing unreachable block (ram,0x000102ba6684) */
/* WARNING: Removing unreachable block (ram,0x000102ba669c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba6580(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efbda8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102ba66f8; end: 102ba66ff;  */

void FUN_102ba66f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ba6700; end: 102ba6733; -[SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint end] */

void FUN_102ba6700(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ba6580();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ba6734; end: 102ba6853;  */

void FUN_102ba6734(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "ContextPlanStickerScopeGraphBridge/SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint.swift"
                        ,99,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba6854);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ba6854; end: 102ba68ff; -[SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ba6854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ba6734(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ba6900; end: 102ba695f; -[SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba6900(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efbda0,0);
  *(undefined8 *)(param_1 + _DAT_112efbda8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ba6960; end: 102ba6993;  */

void FUN_102ba6960(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba6994; end: 102ba69cb; -[SCSCContextPlanDynamicStickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba6994(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efbda0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efbda8));
  return;
}



/* Entry: 102ba69cc; end: 102ba69eb;  */

void FUN_102ba69cc(void)

{
  func_0x000107c61168(&PTR_PTR_112892db0);
  return;
}



/* Entry: 102ba69ec; end: 102ba6a3b;  */

void FUN_102ba69ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102ba6a3c; end: 102ba6a4b;  */

void FUN_102ba6a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102ba6a4c; end: 102ba6cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba6a4c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_70;
  long lStack_68;
  
  plVar10 = &lStack_70;
  lVar5 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 != 0) {
    lVar5 = lVar6;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    if (lVar5 != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x10);
      uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112ff5e38);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c6157c(uVar13);
      func_0x000107c4d80c();
      func_0x000107c61180();
      lVar7 = 0;
      FUN_102ba9da4();
      lVar8 = lVar7;
      func_0x000107c610f8();
      *(undefined8 *)(lVar8 + _DAT_112efbe98) = 0;
      *(undefined8 *)(lVar8 + _DAT_112efbea0) = 0;
      *(undefined4 *)(lVar8 + _DAT_112efbea8) = 1;
      *(undefined8 *)(lVar8 + _DAT_112efbeb0) = 0;
      *(undefined8 *)(lVar8 + _DAT_112efbeb8) = 0;
      lVar4 = _DAT_112efbec0;
      puVar9 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_1126d0928;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar5);
      func_0x000107c453e4();
      *(undefined **)(lVar8 + lVar4) = puVar9;
      uVar2 = ((undefined8 *)(lVar6 + _DAT_113077748))[1];
      puVar1 = (undefined8 *)(lVar8 + _DAT_112efbec8);
      *puVar1 = *(undefined8 *)(lVar6 + _DAT_113077748);
      puVar1[1] = uVar2;
      uVar3 = ((undefined8 *)(lVar6 + _DAT_113077750))[1];
      puVar1 = (undefined8 *)(lVar8 + _DAT_112efbed0);
      *puVar1 = *(undefined8 *)(lVar6 + _DAT_113077750);
      puVar1[1] = uVar3;
      *(undefined1 *)(lVar8 + _DAT_112efbed8) = *(undefined1 *)(lVar6 + _DAT_113077758);
      uVar12 = *(undefined8 *)(lVar6 + _DAT_113077740);
      *(undefined8 *)(lVar8 + _DAT_112efbee0) = uVar12;
      puVar9 = &UNK_1105a9330;
      func_0x000107c613fc(&UNK_1105a9330,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar6);
      puVar1 = (undefined8 *)(lVar8 + _DAT_112efbee8);
      *puVar1 = 0x102ba6d38;
      puVar1[1] = puVar9;
      *(undefined8 *)(lVar8 + _DAT_112efbef0) = uVar13;
      *(undefined8 *)(lVar8 + _DAT_112efbef8) = uVar11;
      *(long *)(lVar8 + _DAT_112efbf00) = lVar5;
      puVar9 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_70 = lVar8;
      lStack_68 = lVar7;
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar12);
      func_0x000107c61154(&lStack_70,puVar9,0,0);
      func_0x000107c3e2c0(*(undefined8 *)(lVar6 + _DAT_113077738));
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(plVar10);
    }
  }
  return;
}



/* Entry: 102ba6cd4; end: 102ba6d0f;  */

void FUN_102ba6cd4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ba6d10; end: 102ba6d2f;  */

void FUN_102ba6d10(void)

{
  FUN_102ba6a4c();
  return;
}



/* Entry: 102ba6d30; end: 102ba6d3f;  */

undefined8 FUN_102ba6d30(void)

{
  return 0;
}



/* Entry: 102ba6d40; end: 102ba6d5f;  */

void FUN_102ba6d40(void)

{
  func_0x000107c61168(&PTR_PTR_112efbe18);
  return;
}



/* Entry: 102ba6d60; end: 102ba6da3;  */

void FUN_102ba6d60(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a9370;
  if (lRam0000000112efbe90 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112efbe90 = param_1;
  }
  return;
}



/* Entry: 102ba6da4; end: 102ba6de7;  */

void FUN_102ba6da4(long param_1,long *param_2,long param_3)

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



/* Entry: 102ba6de8; end: 102ba6fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ba6de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  
  puVar6 = auStack_70;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efbe98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efbea0) = 0;
  *(undefined4 *)(unaff_x20 + _DAT_112efbea8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112efbeb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efbeb8) = 0;
  lVar4 = _DAT_112efbec0;
  puVar5 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_1126d0928;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar5;
  uVar2 = ((undefined8 *)(param_1 + _DAT_113077748))[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efbec8);
  *puVar1 = *(undefined8 *)(param_1 + _DAT_113077748);
  puVar1[1] = uVar2;
  uVar3 = ((undefined8 *)(param_1 + _DAT_113077750))[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efbed0);
  *puVar1 = *(undefined8 *)(param_1 + _DAT_113077750);
  puVar1[1] = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112efbed8) = *(undefined1 *)(param_1 + _DAT_113077758);
  uVar7 = *(undefined8 *)(param_1 + _DAT_113077740);
  *(undefined8 *)(unaff_x20 + _DAT_112efbee0) = uVar7;
  puVar5 = &UNK_1105a93c8;
  func_0x000107c613fc(&UNK_1105a93c8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_1);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efbee8);
  *puVar1 = FUN_102ba70e8;
  puVar1[1] = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112efbef0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112efbef8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112efbf00) = param_4;
  puVar5 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61154(auStack_70,puVar5,0,0);
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 102ba6fc8; end: 102ba6ff7;  */

void FUN_102ba6fc8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0x204d4d4d20454545;
  func_0x000107c5fadc(0x204d4d4d20454545,0xee006d6d3a6a2064);
  func_0x000107c56030(puVar1);
  func_0x000107c61170(uVar2);
  puRam0000000112efbf68 = puVar1;
  return;
}



/* Entry: 102ba6ff8; end: 102ba70e7;  */

void FUN_102ba6ff8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0x204d4d4d20454545;
  func_0x000107c5fadc(0x204d4d4d20454545,param_2);
  func_0x000107c56030(puVar1);
  func_0x000107c61170(uVar2);
  *param_3 = puVar1;
  return;
}



/* Entry: 102ba70e8; end: 102ba70ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba70e8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    pcVar1 = *(code **)(lVar3 + _DAT_113077760);
    uVar2 = ((undefined8 *)(lVar3 + _DAT_113077760))[1];
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar3);
    (*pcVar1)();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102ba70f0; end: 102ba7117; -[SCContextPlanDynamicStickerViewController initWithCoder:] */

void FUN_102ba70f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102ba9c94();
  return;
}



/* Entry: 102ba7118; end: 102ba71d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba7118(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112efbeb0);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112efbeb8);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba71d8; end: 102ba71fb; -[SCContextPlanDynamicStickerViewController dealloc] */

void FUN_102ba71d8(void)

{
  func_0x000107c61174();
  FUN_102ba7118();
  return;
}



/* Entry: 102ba71fc; end: 102ba73ab; -[SCContextPlanDynamicStickerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ba7240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba7274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba7294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba7278) */
/* WARNING: Removing unreachable block (ram,0x000102ba7244) */
/* WARNING: Removing unreachable block (ram,0x000102ba7298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba71fc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112efbec8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112efbed0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efbee0));
  return;
}



/* Entry: 102ba73ac; end: 102ba73d3; -[SCContextPlanDynamicStickerViewController loadView] */

void FUN_102ba73ac(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102ba72e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ba73d4; end: 102ba77a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba73d4(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  func_0x000107c4edb8(*(undefined8 *)(unaff_x20 + _DAT_112efbec0));
  uVar1 = (*(byte *)(unaff_x20 + _DAT_112efbed8) ^ 0xffffffff) & 1;
  *(uint *)(unaff_x20 + _DAT_112efbea8) = uVar1;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efbec8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112efbec8))[1];
  puVar4 = PTR_PTR_1126e06f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x000107c546ac(puVar4);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c59e18(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c597e8(puVar4);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c56080(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c5553c(puVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efbea0);
  *(undefined **)(unaff_x20 + _DAT_112efbea0) = puVar4;
  puVar6 = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  puVar9 = &UNK_1105a93f0;
  puVar7 = puVar9;
  func_0x000107c613fc(&UNK_1105a93f0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar8 = &UNK_1105a9418;
  func_0x000107c613fc(&UNK_1105a9418,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long *)(puVar8 + 0x18) = lVar3;
  func_0x000107c613fc(&UNK_1105a93f0,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar7 = &UNK_1105a9440;
  func_0x000107c613fc(&UNK_1105a9440,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar9;
  *(long *)(puVar7 + 0x18) = lVar3;
  FUN_102ba9a98(puVar4,uVar1);
  func_0x000107c61170(puVar6);
  puVar10 = PTR_PTR_1126ac050;
  func_0x000107c610f8(PTR_PTR_1126ac050);
  func_0x000107c453e4();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_102ba9d6c;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1105a9458;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar8;
  func_0x000107c60bc4(ppuVar11);
  puVar13 = puStack_88;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar13);
  func_0x000107c56c48(puVar10);
  func_0x000107c60bd0(ppuVar11);
  pcStack_90 = (code *)0x102ba9d74;
  puStack_b0 = puVar9;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1105a9480;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar7;
  func_0x000107c60bc4(ppuVar11);
  puVar9 = puStack_88;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c56c78(puVar10);
  func_0x000107c60bd0(ppuVar11);
  puVar12 = PTR_PTR_1126ac058;
  func_0x000107c610f8();
  func_0x000107c49520();
  puVar9 = &UNK_1105a93f0;
  func_0x000107c613fc(&UNK_1105a93f0,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar13 = &UNK_1105a94b8;
  func_0x000107c613fc(&UNK_1105a94b8,0x28,7);
  *(undefined **)(puVar13 + 0x10) = puVar9;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  *(long *)(puVar13 + 0x20) = lVar3;
  pcStack_90 = (code *)0x102ba9d98;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1105a94d0;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar13;
  func_0x000107c60bc4(ppuVar11);
  puVar9 = puStack_88;
  func_0x000107c61174(puVar12);
  func_0x000107c61574(puVar9);
  func_0x000107c5e078(puVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar12);
  return;
}



/* Entry: 102ba77a8; end: 102ba7a2f;  */

void FUN_102ba77a8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar4 = 0;
  puVar1 = param_2;
  func_0x000107c60714();
  puStack_70 = puVar1;
  uStack_68 = uVar4;
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0x4c64694477656976,0xed0000292864616f);
  uVar4 = uStack_68;
  puVar3 = puStack_70;
  puVar1 = &UNK_1105a9558;
  func_0x000107c613fc(&UNK_1105a9558,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined **)(puVar1 + 0x18) = param_2;
  pcStack_50 = FUN_102baa948;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105a9570;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c5fb28(puVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(puVar3 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102ba7a30; end: 102ba7ee3;  */

/* WARNING: Possible PIC construction at 0x000102ba7e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba7e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba7a30(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112efbef8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112efbe98) != 0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x000107c5af88(puVar3);
    func_0x000107c61180();
    puVar5 = puVar2;
    func_0x000107c45098(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c61168();
      puVar4 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c61174(puVar5);
      func_0x000107c451b0(puVar4);
      func_0x000107c61180();
      func_0x000107c44f94();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c3ea80(puVar3);
    func_0x000107c61180();
    func_0x000107c45098(0x4034000000000000,0x4034000000000000,puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    FUN_102baaa8c();
    func_0x000107c61174(puVar2);
    lVar11 = param_2;
    func_0x000107c5fadc(puVar3);
    func_0x000107c6142c(param_2);
    func_0x000107c61168();
    func_0x000107c3ee90();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000102baab58();
    lVar6 = *(long *)(unaff_x20 + _DAT_112efbea0);
    if (lVar6 == 0) {
      lVar6 = 0;
      lVar14 = 0;
      lVar15 = 0;
      lVar13 = -0x2000000000000000;
    }
    else {
      lVar13 = lVar11;
      func_0x000107c61174();
      lVar14 = lVar6;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (lVar14 == 0) {
        lVar15 = 0;
        lVar13 = -0x2000000000000000;
      }
      else {
        lVar15 = lVar14;
        func_0x000107c5faec();
        func_0x000107c61170(lVar14);
      }
      lVar14 = lVar6;
      func_0x000107c5bbf8(lVar6);
      func_0x000107c49a0c(lVar6);
    }
    lVar12 = lVar13;
    FUN_102ba9e44(lVar15,lVar13,lVar14,lVar6);
    func_0x000107c6142c(lVar13);
    puVar2 = &UNK_1105a93f0;
    func_0x000107c613fc(&UNK_1105a93f0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    func_0x000107c5fadc(puVar3,lVar11);
    func_0x000107c6142c(lVar11);
    if (lVar12 == 0) {
      lVar15 = 0;
    }
    else {
      func_0x000107c5fadc(lVar15,lVar12);
      func_0x000107c6142c(lVar12);
    }
    puVar7 = PTR_PTR_1126b0ae0;
    func_0x000107c61168(PTR_PTR_1126b0ae0);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102baa950;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105a9598;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar2;
    func_0x000107c60bc4(ppuVar8);
    puVar5 = puStack_78;
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar5);
    pcStack_80 = FUN_102baa950;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105a95c0;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar2;
    func_0x000107c60bc4();
    puVar4 = puStack_78;
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar4);
    uVar10 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f0fa3a0);
    func_0x000107c40b00(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar15);
    func_0x000107c5c2e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102ba7ee4; end: 102ba8113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba7ee4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = _DAT_112efbeb8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112efbe98);
  if ((lVar6 != 0) && (*(long *)(unaff_x20 + _DAT_112efbeb8) == 0)) {
    func_0x000107c61174();
    func_0x0001000d224c(&lStack_70);
    if (lStack_70 == 0) {
      func_0x000107c4d7f8(*(undefined8 *)(unaff_x20 + _DAT_112efbec0));
      func_0x000107c61170(lVar6);
    }
    else {
      lVar12 = *(long *)(unaff_x20 + _DAT_112efbea0);
      if (lVar12 == 0) {
        func_0x000107c61170(lVar6);
        func_0x000107c615e8(lStack_70);
      }
      else {
        uVar3 = *(undefined4 *)(unaff_x20 + _DAT_112efbea8);
        *(undefined4 *)(unaff_x20 + _DAT_112efbea8) = 2;
        lVar7 = lVar12;
        func_0x000107c61174();
        FUN_102ba9a98(lVar12,2);
        func_0x000107c5a588(lVar6);
        func_0x000107c61170(lVar12);
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efbec8);
        uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efbec8))[1];
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efbed0);
        uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112efbed0))[1];
        puVar8 = &UNK_1105a93f0;
        func_0x000107c613fc(&UNK_1105a93f0,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        puVar9 = &UNK_1105a95f8;
        func_0x000107c613fc(&UNK_1105a95f8,0x58,7);
        *(long *)(puVar9 + 0x10) = lStack_70;
        *(undefined8 *)(puVar9 + 0x18) = uStack_68;
        *(undefined8 *)(puVar9 + 0x20) = uVar10;
        *(undefined8 *)(puVar9 + 0x28) = uVar1;
        *(undefined8 *)(puVar9 + 0x30) = uVar11;
        *(undefined8 *)(puVar9 + 0x38) = uVar2;
        *(undefined **)(puVar9 + 0x40) = puVar8;
        *(undefined4 *)(puVar9 + 0x48) = uVar3;
        *(long *)(puVar9 + 0x50) = lVar5;
        func_0x000107c61434(uVar1);
        func_0x000107c61434(uVar2);
        func_0x000107c615f0(lStack_70);
        uVar10 = 0;
        func_0x0001001ca524(0,0,0x20,4,0,0,&UNK_10db2ccb8,puVar9,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar9);
        func_0x000107c61170(lVar6);
        func_0x000107c615e8(lStack_70);
        func_0x000107c61170(lVar7);
        uVar11 = *(undefined8 *)(unaff_x20 + lVar4);
        *(undefined8 *)(unaff_x20 + lVar4) = uVar10;
        func_0x000107c61574(uVar11);
      }
    }
  }
  return;
}



/* Entry: 102ba8114; end: 102ba821f;  */

void FUN_102ba8114(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar4 = 0;
  func_0x000107c60714();
  puStack_70 = param_2;
  uStack_68 = uVar4;
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0x4c64694477656976,0xed0000292864616f);
  uVar4 = uStack_68;
  puVar3 = puStack_70;
  uStack_50 = 0x102baaa88;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105a9520;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5fb28(puVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(puVar3 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102ba8220; end: 102ba8427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba8220(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_60 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_60 = 0xd000000000000020;
  uStack_58 = 0x800000010f0fa370;
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112efbec8),
                      ((undefined8 *)(unaff_x20 + _DAT_112efbec8))[1]);
  uVar7 = uStack_58;
  func_0x000107c5edd0(lVar10,uStack_60,uStack_58);
  func_0x000107c6142c(uVar7);
  lVar1 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_102baa880(lVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,lVar10,lVar2);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = 0x112d377a8;
    func_0x000102baa8c0(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar2);
  }
  return;
}



/* Entry: 102ba8428; end: 102ba8547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba8428(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c526c0(0,param_2);
    func_0x000107c54b80(0,0,0x4072200000000000,0x406e000000000000,param_2);
    func_0x000107c5a050(param_2);
    func_0x000107c61174();
    lVar2 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba8544);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112efbe98);
    *(undefined8 *)(param_1 + _DAT_112efbe98) = param_2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_2);
    lVar2 = param_1;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba8548);
      (*pcVar1)();
    }
    func_0x000107c56a14(lVar2);
    func_0x000107c61170(lVar2);
    FUN_102ba8548();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102ba8548; end: 102ba8683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba8548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&lStack_60);
  if (lStack_60 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112efbe98) != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efbec8);
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112efbec8))[1];
    puVar1 = &UNK_1105a93f0;
    func_0x000107c613fc(&UNK_1105a93f0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_1105a9508;
    func_0x000107c613fc(&UNK_1105a9508,0x38,7);
    *(long *)(puVar2 + 0x10) = lStack_60;
    *(undefined8 *)(puVar2 + 0x18) = uStack_58;
    *(undefined8 *)(puVar2 + 0x20) = uVar3;
    *(undefined8 *)(puVar2 + 0x28) = uVar4;
    *(undefined **)(puVar2 + 0x30) = puVar1;
    func_0x000107c61434(uVar4);
    func_0x000107c615f0(lStack_60);
    uVar3 = 0;
    func_0x0001001ca524(0,0,0x20,4,0,0,&UNK_10db2cc90,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lStack_60);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efbeb0);
    *(undefined8 *)(unaff_x20 + _DAT_112efbeb0) = uVar3;
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102ba8684; end: 102ba86ab; -[SCContextPlanDynamicStickerViewController viewDidLoad] */

void FUN_102ba8684(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ba73d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ba86ac; end: 102ba89cb;  */

/* WARNING: Possible PIC construction at 0x000102ba880c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba881c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba89a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba8998) */
/* WARNING: Removing unreachable block (ram,0x000102ba8988) */
/* WARNING: Removing unreachable block (ram,0x000102ba8810) */
/* WARNING: Removing unreachable block (ram,0x000102ba8848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba86ac(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  ulong uVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  double dVar9;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112efbe98);
  if (uVar1 == 0) {
    return;
  }
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112efbee0);
  func_0x000107c61174();
  func_0x000107c3ded4();
  func_0x000107c61180();
  uVar3 = uVar1;
  if (uVar6 != 0) {
    uVar2 = uVar6;
    func_0x000107c5b078();
    func_0x000107c61180();
    uVar3 = uVar6;
    if (uVar2 == 0) {
      func_0x000107c61170(uVar1);
    }
    else {
      func_0x000107c3f74c();
      func_0x000107c61180();
      if (uVar3 == 0) {
        func_0x000107c61170(uVar1);
        uVar3 = uVar6;
      }
      else {
        uVar4 = uVar3;
        dVar9 = param_1;
        func_0x000107c609e0(param_1,param_2,param_3,param_4);
        if ((((((uVar4 & 1) == 0) &&
              (func_0x000107c5e304(uVar2), (ulong)ABS(dVar9) < 0x7ff0000000000000)) &&
             (func_0x000107c5e304(uVar2), 0.0 < dVar9)) &&
            ((func_0x000107c44d98(uVar2), (ulong)ABS(dVar9) < 0x7ff0000000000000 &&
             (func_0x000107c44d98(uVar2), 0.0 < dVar9)))) &&
           ((func_0x000107c5e9e0(uVar3), (ulong)ABS(dVar9) < 0x7ff0000000000000 &&
            ((func_0x000107c5e9f0(uVar3), (ulong)ABS(dVar9) < 0x7ff0000000000000 &&
             (func_0x000107c508f4(uVar6), (ulong)ABS(dVar9) < 0x7ff0000000000000)))))) {
          func_0x000107c61174(uVar1);
          dStack_a0 = 1.0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0x3ff0000000000000;
          uStack_80 = 0;
          uStack_78 = 0;
          func_0x000107c5a03c();
          dVar5 = 290.0;
          dVar8 = 240.0;
          dVar7 = 0.0;
          func_0x000107c52e44(0,0,uVar1);
          func_0x000107c3ec60(uVar1);
          dVar9 = 1.0;
          if (1.0 < dVar5) {
            dVar9 = dVar5;
          }
          func_0x000107c3ec60(uVar1);
          dVar5 = 1.0;
          if (1.0 < dVar8) {
            dVar5 = dVar8;
          }
          func_0x000107c5e304(uVar2);
          dVar7 = param_3 * dVar7;
          dVar9 = dVar7 / dVar9;
          func_0x000107c44d98(uVar2);
          dVar5 = (param_4 * dVar7) / dVar5;
          if (dVar5 < dVar9) {
            dVar5 = dVar9;
          }
          func_0x000107c508f4(uVar6);
          func_0x000107c60888(&dStack_a0);
          func_0x000107c60898(&dStack_d0,dVar5,dVar5,&dStack_a0);
          uStack_98 = uStack_c8;
          dStack_a0 = dStack_d0;
          uStack_88 = uStack_b8;
          uStack_90 = uStack_c0;
          uStack_78 = uStack_a8;
          uStack_80 = uStack_b0;
          func_0x000107c5a03c(uVar1,param_6,&dStack_a0);
          func_0x000107c5e9e0(uVar3);
          param_3 = param_3 * dStack_d0;
          param_1 = param_1 + param_3;
          func_0x000107c5e9f0(uVar3);
          func_0x000107c532b4(param_1,param_2 + param_4 * param_3,uVar1);
          uVar3 = uVar6;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102ba89cc; end: 102ba8a83; -[SCContextPlanDynamicStickerViewController viewDidLayoutSubviews] */

void FUN_102ba89cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_5;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLayoutSubviews_112684cc8;
  lStack_60 = param_5;
  lStack_58 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar1);
  lVar3 = param_5;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    FUN_102ba86ac(param_1,param_2,param_3,param_4);
    func_0x000107c61170(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ba8a84);
  (*pcVar2)();
}



/* Entry: 102ba8a84; end: 102ba8b43;  */

void FUN_102ba8a84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x128) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x130) = uVar2;
  func_0x000107c614f0(param_2);
  piVar4 = *(int **)(param_3 + 0x38);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102ba8b44;
                    /* WARNING: Could not recover jumptable at 0x000102ba8b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar3,unaff_x22 + 0x10,param_4,param_5,0,param_2,param_3)
  ;
  return;
}



/* Entry: 102ba8b44; end: 102ba8bfb;  */

void FUN_102ba8b44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x138));
  uVar2 = *(undefined8 *)(lVar4 + 0x128);
  uVar1 = 0x112d45220;
  func_0x000102baa8c0(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x148) = uVar1;
    func_0x000107c5fca8();
    *(undefined8 *)(lVar4 + 0x150) = uVar2;
    *(undefined8 *)(lVar4 + 0x158) = uVar1;
    pcVar3 = FUN_102ba8bfc;
  }
  else {
    func_0x000107c5fca8(uVar2);
    pcVar3 = (code *)0x102ba8d88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 102ba8bfc; end: 102ba8c67;  */

void FUN_102ba8bfc(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x120);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0xe8,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618(lVar1);
  func_0x000107c61614(unaff_x22 + 0x118,lVar1);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba8c68,0,0);
  return;
}



/* Entry: 102ba8c68; end: 102ba8ccf;  */

void FUN_102ba8c68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x160) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba8cd0,uVar2,uVar1);
  return;
}



/* Entry: 102ba8cd0; end: 102ba8dc3;  */

void FUN_102ba8cd0(void)

{
  long lVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x000107c61428(unaff_x22 + 0x118,unaff_x22 + 0x100,0,0);
  lVar1 = unaff_x22 + 0x118;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x0001012b6798(unaff_x22 + 0x10);
  }
  else {
    FUN_102ba8dc4(unaff_x22 + 0x10);
    func_0x0001012b6798(unaff_x22 + 0x10);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61610(unaff_x22 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102ba8d58,*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Entry: 102ba8dc4; end: 102ba8fef;  */

/* WARNING: Possible PIC construction at 0x000102ba8e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba8f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba8f78) */
/* WARNING: Removing unreachable block (ram,0x000102ba8fec) */
/* WARNING: Removing unreachable block (ram,0x000102ba8f8c) */
/* WARNING: Removing unreachable block (ram,0x000102ba8f54) */
/* WARNING: Removing unreachable block (ram,0x000102ba8fe8) */
/* WARNING: Removing unreachable block (ram,0x000102ba8f68) */
/* WARNING: Removing unreachable block (ram,0x000102ba8f40) */
/* WARNING: Removing unreachable block (ram,0x000102ba8f20) */
/* WARNING: Removing unreachable block (ram,0x000102ba8edc) */
/* WARNING: Removing unreachable block (ram,0x000102ba8e8c) */
/* WARNING: Removing unreachable block (ram,0x000102ba8e9c) */
/* WARNING: Removing unreachable block (ram,0x000102ba8ea4) */
/* WARNING: Removing unreachable block (ram,0x000102ba8e68) */
/* WARNING: Removing unreachable block (ram,0x000102ba8f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba8dc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_90 [48];
  
  if (*(long *)(unaff_x20 + _DAT_112efbe98) != 0) {
    func_0x000107c61174();
    FUN_102baa0ac(auStack_90,param_1);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efbec8);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efbec8))[1];
    puVar2 = PTR_PTR_1126e06f0;
    func_0x000107c610f8(PTR_PTR_1126e06f0);
    func_0x000107c453e4();
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c546ac(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102ba8ff0; end: 102ba90bf;  */

void FUN_102ba8ff0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x34) = param_9;
  *(undefined8 *)(unaff_x22 + 0x98) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_11;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  lVar3 = param_2;
  func_0x000107c614f0();
  plVar4 = (long *)0x2f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ba90c0;
  plVar4[0x4d] = param_2;
  plVar4[0x4c] = param_3;
  plVar4[0x4b] = lVar3;
  plVar4[0x4a] = param_7;
  plVar4[0x49] = param_6;
  plVar4[0x48] = param_5;
  plVar4[0x47] = param_4;
  plVar4[0x46] = unaff_x22 + 0x10;
  piVar6 = *(int **)(param_3 + 0x38);
  plVar4[0x4e] = (long)piVar6;
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  plVar4[0x4f] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)&UNK_103bec3d0;
                    /* WARNING: Could not recover jumptable at 0x000103bec3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar5,plVar4 + 0x1d,param_4,param_5,0,lVar3,param_3);
  return;
}



/* Entry: 102ba90c0; end: 102ba91b7;  */

void FUN_102ba90c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar4 + 0x10);
    func_0x000100bcb1dc(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x20);
    func_0x000100bcb1dc(lVar4 + 0x78);
    uVar1 = 0x112d45220;
    func_0x000102baa8c0(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    *(undefined8 *)(lVar4 + 200) = uVar1;
    func_0x000107c5fca8();
    *(undefined8 *)(lVar4 + 0xd0) = uVar2;
    *(undefined8 *)(lVar4 + 0xd8) = uVar1;
    pcVar3 = FUN_102ba91b8;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar1 = 0x112d45220;
    func_0x000102baa8c0(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    *(undefined8 *)(lVar4 + 0xe8) = uVar1;
    func_0x000107c5fca8();
    *(undefined8 *)(lVar4 + 0xf0) = uVar2;
    *(undefined8 *)(lVar4 + 0xf8) = uVar1;
    pcVar3 = (code *)0x102ba9334;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 102ba91b8; end: 102ba9223;  */

void FUN_102ba91b8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x50,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618(lVar1);
  func_0x000107c61614(unaff_x22 + 0x90,lVar1);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba9224,0,0);
  return;
}



/* Entry: 102ba9224; end: 102ba928b;  */

void FUN_102ba9224(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba928c,uVar2,uVar1);
  return;
}



/* Entry: 102ba928c; end: 102ba9303;  */

void FUN_102ba928c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  FUN_102ba94c0(unaff_x22 + 0x90,uVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(lVar2);
    return;
  }
  func_0x000107c61610(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102ba9304,*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
  return;
}



/* Entry: 102ba9304; end: 102ba939f;  */

void FUN_102ba9304(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000102ba9330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ba93a0; end: 102ba9407;  */

void FUN_102ba93a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba9408,uVar2,uVar1);
  return;
}



/* Entry: 102ba9408; end: 102ba9487;  */

/* WARNING: Removing unreachable block (ram,0x000102ba9448) */

void FUN_102ba9408(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x34);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
  FUN_102ba95fc(unaff_x22 + 0x88,uVar1,uVar2);
  func_0x000107c61610(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102ba9488,*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xf8));
  return;
}



/* Entry: 102ba9488; end: 102ba94bf;  */

void FUN_102ba9488(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000102ba94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ba94c0; end: 102ba95fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba94c0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1,auStack_58,0,0);
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_112efbe98);
    if ((lVar4 != 0) && (lVar5 = *(long *)(param_1 + _DAT_112efbea0), lVar5 != 0)) {
      *(undefined4 *)(param_1 + _DAT_112efbea8) = 2;
      lVar2 = lVar5;
      func_0x000107c61174(lVar5);
      func_0x000107c61174(lVar4);
      FUN_102ba9a98(lVar5,2);
      func_0x000107c5a588(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c4d7f8(*(undefined8 *)(param_1 + _DAT_112efbec0));
      uVar3 = *(undefined8 *)(param_1 + _DAT_112efbeb8);
      *(undefined8 *)(param_1 + _DAT_112efbeb8) = 0;
      func_0x000107c61574(uVar3);
      FUN_102ba7a30();
      pcVar1 = *(code **)(param_1 + _DAT_112efbee8);
      uVar3 = ((undefined8 *)(param_1 + _DAT_112efbee8))[1];
      func_0x000107c6157c(uVar3);
      (*pcVar1)();
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar3);
      return;
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102ba95fc; end: 102ba9717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba95fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1,auStack_58,0,0);
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112efbe98);
    if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + _DAT_112efbea0), lVar4 != 0)) {
      *(int *)(param_1 + _DAT_112efbea8) = (int)param_2;
      lVar1 = lVar4;
      func_0x000107c61174(lVar4);
      func_0x000107c61174(lVar3);
      FUN_102ba9a98(lVar4,param_2);
      func_0x000107c5a588(lVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c4d7f8(*(undefined8 *)(param_1 + _DAT_112efbec0));
      FUN_102ba9718();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar3);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112efbeb8);
      *(undefined8 *)(param_1 + _DAT_112efbeb8) = 0;
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar2);
      return;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102ba9718; end: 102ba982b;  */

/* WARNING: Possible PIC construction at 0x000102ba97e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba97e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba9718(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112efbef8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000102baac24();
    puVar2 = PTR_PTR_1126b0ae0;
    func_0x000107c61168(PTR_PTR_1126b0ae0);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c5fadc(0xd000000000000015,0x800000010f0fa3c0);
    func_0x000107c40b00(puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102ba982c; end: 102ba987f;  */

void FUN_102ba982c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102ba8220();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102ba9880; end: 102ba98ab; -[SCContextPlanDynamicStickerViewController initWithNibName:bundle:] */

void FUN_102ba9880(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextPlanDynamicSticker.SCContextPlanDynamicStickerViewController",0x45,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba98ac);
  (*pcVar1)();
}



/* Entry: 102ba98ac; end: 102ba9943; -[_TtC27SCContextPlanDynamicStickerP33_BE949F04EAB50C4BA8DAB173E82A90CF18PassthroughHitView initWithFrame:] */

undefined1 *
FUN_102ba98ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c52ab8();
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  return (undefined1 *)puVar2;
}



/* Entry: 102ba9944; end: 102ba999b; -[_TtC27SCContextPlanDynamicStickerP33_BE949F04EAB50C4BA8DAB173E82A90CF18PassthroughHitView initWithCoder:] */

void FUN_102ba9944(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextPlanDynamicSticker/SCContextPlanDynamicStickerViewController.swift",
                      0x4b,2,0x232,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba999c);
  (*pcVar1)();
}



/* Entry: 102ba999c; end: 102ba9a63; -[_TtC27SCContextPlanDynamicStickerP33_BE949F04EAB50C4BA8DAB173E82A90CF18PassthroughHitView hitTest:withEvent:] */

void FUN_102ba999c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  ppuVar3 = &puStack_50;
  puVar2 = param_3;
  func_0x000107c614f0();
  puVar1 = PTR_s_hitTest_withEvent__1125d6850;
  puStack_50 = param_3;
  puStack_48 = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61154(param_1,param_2,&puStack_50,puVar1,param_5);
  func_0x000107c61180();
  if (ppuVar3 == (undefined1 **)0x0) {
    func_0x000107c61170(param_5);
    ppuVar3 = (undefined1 **)param_3;
  }
  else {
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    if (ppuVar3 != (undefined1 **)param_3) goto LAB_102ba9a4c;
  }
  func_0x000107c61170(ppuVar3);
  ppuVar3 = (undefined1 **)0x0;
LAB_102ba9a4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102ba9a64; end: 102ba9a97;  */

void FUN_102ba9a64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba9a98; end: 102ba9c93;  */

undefined * FUN_102ba9a98(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 == 0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar8 = 0;
    uVar2 = 0;
    uVar6 = 0xe000000000000000;
    uVar7 = 0xe000000000000000;
    uVar5 = 0xe000000000000000;
  }
  else {
    uVar8 = param_1;
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (uVar8 == 0) {
      uVar2 = 0;
      uVar5 = 0xe000000000000000;
      uVar4 = param_2;
    }
    else {
      uVar2 = uVar8;
      func_0x000107c5faec();
      uVar4 = param_2;
      func_0x000107c61170(uVar8);
      uVar5 = param_2;
    }
    uVar8 = param_1;
    func_0x000107c5bbf8(param_1);
    uVar7 = param_1;
    func_0x000107c4b928();
    func_0x000107c61180();
    if (uVar7 == 0) {
      uVar3 = 0;
      uVar7 = 0xe000000000000000;
      uVar6 = uVar4;
    }
    else {
      uVar3 = uVar7;
      func_0x000107c5faec();
      uVar6 = uVar4;
      func_0x000107c61170(uVar7);
      uVar7 = uVar4;
    }
    func_0x000107c42aa8();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar4 = 0;
      uVar6 = 0xe000000000000000;
    }
    else {
      uVar4 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  puVar1 = PTR_PTR_1126ac060;
  func_0x000107c610f8(PTR_PTR_1126ac060);
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c48d7c((double)(long)uVar8,puVar1);
  func_0x000107c61170(uVar2);
  uVar2 = uVar3 & 0xffffffffffff;
  if ((uVar7 & 0x2000000000000000) != 0) {
    uVar2 = uVar7 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c5fadc(uVar3,uVar7);
  }
  func_0x000107c6142c(uVar7);
  func_0x000107c56080(puVar1);
  func_0x000107c61170(uVar3);
  uVar2 = uVar4 & 0xffffffffffff;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar2 = uVar6 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c5fadc(uVar4,uVar6);
  }
  func_0x000107c6142c(uVar6);
  func_0x000107c55084(puVar1);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 102ba9c94; end: 102ba9d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba9c94(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112efbe98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efbea0) = 0;
  *(undefined4 *)(unaff_x20 + _DAT_112efbea8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112efbeb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efbeb8) = 0;
  lVar1 = _DAT_112efbec0;
  puVar3 = PTR__OBJC_CLASS___UINotificationFeedbackGenerator_1126d0928;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextPlanDynamicSticker/SCContextPlanDynamicStickerViewController.swift",
                      0x4b,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ba9d4c);
  (*pcVar2)();
}



/* Entry: 102ba9d4c; end: 102ba9d6b;  */

void FUN_102ba9d4c(void)

{
  func_0x000107c61168(&PTR_PTR_112892f98);
  return;
}



/* Entry: 102ba9d6c; end: 102ba9da3;  */

void FUN_102ba9d6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = *(undefined **)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  uVar6 = 0;
  puVar3 = puVar2;
  func_0x000107c60714();
  puStack_70 = puVar3;
  uStack_68 = uVar6;
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c5fb78(0x4c64694477656976,0xed0000292864616f);
  uVar6 = uStack_68;
  puVar5 = puStack_70;
  puVar3 = &UNK_1105a9558;
  func_0x000107c613fc(&UNK_1105a9558,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_50 = FUN_102baa948;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105a9570;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c5fb28(puVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000100162d98(puVar5 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 102ba9da4; end: 102ba9dc3;  */

void FUN_102ba9da4(void)

{
  func_0x000107c61168(&PTR_PTR_112892e70);
  return;
}



/* Entry: 102ba9dc4; end: 102ba9e43;  */

void FUN_102ba9dc4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102baaa84;
  plVar7[0x24] = lVar9;
  lVar9 = 0;
  func_0x000107c5fcec();
  plVar7[0x25] = lVar9;
  func_0x000107c5fce8();
  plVar7[0x26] = lVar9;
  func_0x000107c614f0(uVar5);
  piVar8 = *(int **)(lVar3 + 0x38);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  plVar7[0x27] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_102ba8b44;
                    /* WARNING: Could not recover jumptable at 0x000102ba8b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar6,plVar7 + 2,uVar2,uVar4,0,uVar5,lVar3);
  return;
}



/* Entry: 102ba9e44; end: 102baa0ab;  */

undefined1  [16] FUN_102ba9e44(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_80 [8];
  long lStack_78;
  ulong uStack_70;
  code *pcStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar2 = (code *)0x0;
  func_0x000107c5eb9c();
  lVar1 = *(long *)(pcVar2 + -8);
  pcVar3 = pcVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  uVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_70 = param_1;
  pcStack_68 = (code *)param_2;
  func_0x000107c5eb88(uVar10);
  func_0x000100e8b654();
  uVar4 = uVar10;
  pcVar7 = (code *)PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar10,PTR___sSSN_11034da80,pcVar3);
  (**(code **)(lVar1 + 8))(uVar10);
  if ((long)param_3 < 1) {
    uVar10 = 0;
    pcVar2 = (code *)0x0;
  }
  else {
    func_0x000107c5ee88(puVar9,(double)param_3 / 1000.0);
    if ((param_4 & 1) == 0) {
      if (lRam0000000112efbf60 != -1) {
        pcVar2 = FUN_102ba6fc8;
        func_0x000107c61568(0x112efbf60);
      }
      puVar8 = (ulong *)0x112efbf68;
    }
    else {
      if (lRam0000000112efbf70 != -1) {
        pcVar2 = (code *)0x102ba6fe4;
        func_0x000107c61568(0x112efbf70);
      }
      puVar8 = (ulong *)0x112efbf78;
    }
    uVar5 = *puVar8;
    func_0x000107c61174(uVar5);
    uVar10 = uVar5;
    func_0x000107c5ee70();
    uVar6 = uVar5;
    func_0x000107c5c1b8(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar6;
    func_0x000107c5faec(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    (**(code **)(lVar11 + 8))(puVar9,lStack_78);
  }
  uVar6 = uVar4 & 0xffffffffffff;
  if (((ulong)pcVar7 & 0x2000000000000000) != 0) {
    uVar6 = (ulong)pcVar7 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    func_0x000107c6142c(pcVar7);
    uVar4 = uVar10;
    pcVar7 = pcVar2;
  }
  else if (pcVar2 != (code *)0x0) {
    uStack_70 = uVar4;
    pcStack_68 = pcVar7;
    func_0x000107c5fb78(0x20b7c220,0xa400000000000000);
    func_0x000107c5fb78(uVar10,pcVar2);
    func_0x000107c6142c(pcVar2);
    uVar4 = uStack_70;
    pcVar7 = pcStack_68;
  }
  auVar12._8_8_ = pcVar7;
  auVar12._0_8_ = uVar4;
  return auVar12;
}



/* Entry: 102baa0ac; end: 102baa87f;  */

void FUN_102baa0ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [40];
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_120 = *(long *)(lVar2 + -8);
  lStack_118 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lVar9 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_130 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_128 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  lStack_140 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_01;
  lVar2 = 0;
  lStack_138 = lVar9;
  func_0x000107c5ef14();
  lStack_110 = *(long *)(lVar2 + -8);
  lStack_108 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d48c78;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar9 - extraout_x8_01;
  lVar2 = 0;
  func_0x000107c5efa8();
  lStack_100 = *(long *)(lVar2 + -8);
  lStack_f8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar16 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0;
  lStack_f0 = lVar16 - extraout_x12_02;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar15 = (lVar16 - extraout_x12_02) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar14 = *(undefined8 *)(param_2 + 0x90);
  uStack_90 = *(undefined8 *)(param_2 + 0x88);
  uStack_b8 = *(undefined8 *)(param_2 + 0x90);
  dVar17 = *(double *)(param_2 + 0x88);
  dStack_c0 = dVar17;
  uStack_88 = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c5eb88(uVar15);
  func_0x000100e8b654();
  uVar3 = uVar15;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar15,PTR___sSSN_11034da80,uVar14);
  (**(code **)(lVar12 + 8))(uVar15,lVar2);
  func_0x000100bcb1dc(&uStack_90);
  uVar4 = uVar3;
  puVar7 = puVar6;
  func_0x000107c5fb24();
  uVar15 = uVar4 & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar15 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if ((uVar15 == 0) || ((uVar4 == 0x544d47 && (puVar7 == (undefined *)0xe300000000000000)))) {
LAB_102baa334:
    func_0x000107c6142c(puVar7);
LAB_102baa33c:
    func_0x000107c6142c(puVar6);
LAB_102baa344:
    func_0x000107c5efa4(lStack_f0);
  }
  else {
    uVar15 = uVar4;
    func_0x000107c605b8(uVar4,puVar7,0x544d47,0xe300000000000000,0);
    if (((uVar15 & 1) != 0) || (uVar4 == 0x435455 && puVar7 == (undefined *)0xe300000000000000))
    goto LAB_102baa334;
    func_0x000107c605b8(uVar4,puVar7,0x435455,0xe300000000000000,0);
    func_0x000107c6142c(puVar7);
    if ((uVar4 & 1) != 0) goto LAB_102baa33c;
    func_0x000107c5ef90(lVar13,uVar3,puVar6);
    func_0x000107c6142c(puVar6);
    lVar12 = lStack_f8;
    lVar2 = lStack_100;
    lVar8 = lVar13;
    (**(code **)(lStack_100 + 0x30))(lVar13,1,lStack_f8);
    if ((int)lVar8 == 1) {
      func_0x000102baa880(lVar13,0x112d48c78,&UNK_10d90f8c0);
      goto LAB_102baa344;
    }
    pcVar10 = *(code **)(lVar2 + 0x20);
    (*pcVar10)(lVar16,lVar13,lVar12);
    (*pcVar10)(lStack_f0,lVar16,lVar12);
  }
  uVar14 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    puVar6 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar5 = 0x2d4d4d2d79797979;
    func_0x000107c5fadc(0x2d4d4d2d79797979,0xea00000000006464);
    func_0x000107c53e28(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c5ef9c();
    func_0x000107c59d94(puVar6);
    func_0x000107c61170(uVar5);
    uVar5 = 0x4f505f53555f6e65;
    func_0x000107c5eed0(lVar9,0x4f505f53555f6e65,0xeb00000000584953);
    func_0x000107c5ef00();
    (**(code **)(lStack_110 + 8))(lVar9,lStack_108);
    func_0x000107c5601c(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c5fadc(uVar14,uVar1);
    puVar7 = puVar6;
    func_0x000107c41344();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    lVar2 = lStack_130;
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c5ee94(lStack_130,puVar7);
      func_0x000107c61170(puVar7);
      lVar13 = lStack_118;
      lVar12 = lStack_120;
      lVar9 = lStack_128;
      (**(code **)(lStack_120 + 0x20))(lStack_128,lVar2,lStack_118);
      func_0x000107c5ee8c();
      func_0x000107c61170(puVar6);
      (**(code **)(lVar12 + 8))(lVar9,lVar13);
      dVar17 = dVar17 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102baa86c);
        (*pcVar10)();
      }
      if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102baa874);
        (*pcVar10)();
      }
      if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102baa87c);
        (*pcVar10)();
      }
      lVar2 = (long)dVar17;
      uVar11 = 1;
      goto LAB_102baa7a8;
    }
    func_0x000107c61170(puVar6);
    uVar11 = 1;
  }
  else {
    if (*(char *)(param_2 + 0xb0) != -1) {
      puVar6 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar5 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010ef33bf0);
      func_0x000107c53e28(puVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c5ef9c();
      func_0x000107c59d94(puVar6);
      func_0x000107c61170(uVar5);
      uVar5 = 0x4f505f53555f6e65;
      func_0x000107c5eed0(lVar9,0x4f505f53555f6e65,0xeb00000000584953);
      func_0x000107c5ef00();
      (**(code **)(lStack_110 + 8))(lVar9,lStack_108);
      func_0x000107c5601c(puVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c5fadc(uVar14,uVar1);
      puVar7 = puVar6;
      func_0x000107c41344();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      lVar2 = lStack_140;
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c5ee94(lStack_140,puVar7);
        func_0x000107c61170(puVar7);
        lVar13 = lStack_118;
        lVar12 = lStack_120;
        lVar9 = lStack_138;
        (**(code **)(lStack_120 + 0x20))(lStack_138,lVar2,lStack_118);
        func_0x000107c5ee8c();
        func_0x000107c61170(puVar6);
        (**(code **)(lVar12 + 8))(lVar9,lVar13);
        dVar17 = dVar17 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x102baa870);
          (*pcVar10)();
        }
        if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x102baa878);
          (*pcVar10)();
        }
        if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x102baa880);
          (*pcVar10)();
        }
        uVar11 = 0;
        lVar2 = (long)dVar17;
        goto LAB_102baa7a8;
      }
      func_0x000107c61170(puVar6);
    }
    uVar11 = 0;
  }
  lVar2 = 0;
LAB_102baa7a8:
  lVar12 = lStack_f8;
  lVar9 = lStack_100;
  uStack_b8 = *(undefined8 *)(param_2 + 0x68);
  dStack_c0 = *(double *)(param_2 + 0x60);
  uStack_a8 = *(undefined8 *)(param_2 + 0x78);
  uStack_b0 = *(undefined8 *)(param_2 + 0x70);
  cStack_a0 = *(char *)(param_2 + 0x80);
  dVar17 = dStack_c0;
  uVar14 = uStack_b8;
  if ((cStack_a0 != '\x01') && (cStack_a0 == -1)) {
    dVar17 = 0.0;
    uVar14 = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x000102baa900(&dStack_c0,auStack_e8,0x112efbf58,&UNK_10db2cca0);
  pcVar10 = *(code **)(lVar9 + 8);
  func_0x000107c61434(uVar5);
  (*pcVar10)(lStack_f0,lVar12);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = lVar2;
  param_1[3] = dVar17;
  param_1[4] = uVar14;
  *(undefined1 *)(param_1 + 5) = uVar11;
  return;
}



/* Entry: 102baa880; end: 102baa947;  */

undefined8 FUN_102baa880(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102baa948; end: 102baa94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baa948(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112efbec0;
  lVar5 = _DAT_112efbea8;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + _DAT_112efbea8) != 2) {
      func_0x000107c4edb8(*(undefined8 *)(lVar4 + _DAT_112efbec0));
      if (*(char *)(lVar4 + _DAT_112efbed8) == '\x01') {
        lVar6 = *(long *)(lVar4 + _DAT_112efbe98);
        if ((lVar6 != 0) && (lVar7 = *(long *)(lVar4 + _DAT_112efbea0), lVar7 != 0)) {
          *(undefined4 *)(lVar4 + lVar5) = 2;
          lVar5 = lVar7;
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar6);
          FUN_102ba9a98(lVar7,2);
          func_0x000107c5a588(lVar6);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar7);
        }
        func_0x000107c4d7f8(*(undefined8 *)(lVar4 + lVar3));
        FUN_102ba7a30();
        pcVar1 = *(code **)(lVar4 + _DAT_112efbee8);
        uVar2 = ((undefined8 *)(lVar4 + _DAT_112efbee8))[1];
        func_0x000107c6157c(uVar2);
        (*pcVar1)();
        func_0x000107c61170(lVar4);
        func_0x000107c61574(uVar2);
        return;
      }
      FUN_102ba7ee4();
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102baa950; end: 102baa967;  */

void FUN_102baa950(void)

{
  FUN_102ba982c();
  return;
}



/* Entry: 102baa968; end: 102baaa17;  */

void FUN_102baa968(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x20;
  long lVar12;
  long unaff_x22;
  long lVar13;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar13 = *(long *)(unaff_x20 + 0x40);
  uVar8 = *(undefined4 *)(unaff_x20 + 0x48);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  plVar10 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_102baaa18;
  *(undefined4 *)((long)plVar10 + 0x34) = uVar8;
  plVar10[0x13] = lVar13;
  plVar10[0x14] = lVar12;
  lVar12 = 0;
  func_0x000107c5fcec();
  plVar10[0x15] = lVar12;
  func_0x000107c5fce8();
  plVar10[0x16] = lVar12;
  lVar12 = lVar2;
  func_0x000107c614f0();
  plVar9 = (long *)0x2f0;
  func_0x000107c615b8();
  plVar10[0x17] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_102ba90c0;
  plVar9[0x4d] = lVar2;
  plVar9[0x4c] = lVar5;
  plVar9[0x4b] = lVar12;
  plVar9[0x4a] = lVar7;
  plVar9[0x49] = lVar4;
  plVar9[0x48] = lVar6;
  plVar9[0x47] = lVar3;
  plVar9[0x46] = (long)(plVar10 + 2);
  piVar11 = *(int **)(lVar5 + 0x38);
  plVar9[0x4e] = (long)piVar11;
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  plVar9[0x4f] = (long)plVar10;
  *plVar10 = (long)plVar9;
  plVar10[1] = (long)&UNK_103bec3d0;
                    /* WARNING: Could not recover jumptable at 0x000103bec3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(plVar10,plVar9 + 0x1d,lVar3,lVar6,0,lVar12,lVar5);
  return;
}



/* Entry: 102baaa18; end: 102baaa53;  */

void FUN_102baaa18(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102baaa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102baaa54; end: 102baaa8b;  */

void FUN_102baaa54(long param_1,long param_2)

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



/* Entry: 102baaa8c; end: 102baad5f;  */

undefined1  [16] FUN_102baaa8c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0fa420);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0fa400);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102baab58);
  (*pcVar1)();
}



/* Entry: 102baad60; end: 102baadcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baad60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efbf88) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102baadcc; end: 102baae2b; -[_TtC47ContextPollsStickerScopedFactoryServiceProvider42SCContextPollsDynamicStickerScopedServices init] */

void FUN_102baadcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPollsStickerScopedFactoryServiceProvider.SCContextPollsDynamicStickerScopedServices"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102baadf8);
  (*pcVar1)();
}



/* Entry: 102baae2c; end: 102baae3b; -[_TtC47ContextPollsStickerScopedFactoryServiceProvider42SCContextPollsDynamicStickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baae2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efbf88));
  return;
}



/* Entry: 102baae3c; end: 102baaea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102baae3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a97d8;
  func_0x000107c613fc(&UNK_1105a97d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102bab180,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102baaea8; end: 102baaf43;  */

void FUN_102baaea8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a96e8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a96e8;
  return;
}



/* Entry: 102baaf44; end: 102baaf7b;  */

void FUN_102baaf44(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102baaf7c; end: 102baaf83;  */

undefined8 FUN_102baaf7c(void)

{
  return 0x1b;
}



/* Entry: 102baaf84; end: 102bab0b7;  */

void FUN_102baaf84(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a9800;
  func_0x000107c613fc(&UNK_1105a9800,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bab158;
  func_0x00010058fa64(FUN_102bab158,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bab0b8; end: 102bab0e7;  */

undefined ** FUN_102bab0b8(void)

{
  return &PTR_DAT_1130669d0;
}



/* Entry: 102bab0e8; end: 102bab107;  */

void FUN_102bab0e8(void)

{
  func_0x000107c61168(&PTR_PTR_112893048);
  return;
}



/* Entry: 102bab108; end: 102bab157;  */

undefined1  [16] FUN_102bab108(void)

{
  return ZEXT816(0x1105a9738);
}



/* Entry: 102bab158; end: 102bab17f;  */

void FUN_102bab158(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102bab180; end: 102bab193;  */

void FUN_102bab180(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102bab194; end: 102bab4ab;  */

void FUN_102bab194(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112efc000,&UNK_10db2cf88);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102bac44c();
  func_0x000100082720("ContextPollsStickerScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112efc008,&UNK_10db2cf90);
  puVar3 = &UNK_1105a98b0;
  func_0x000107c613fc(&UNK_1105a98b0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x102bab4b8;
  func_0x0001000823a8(0x102bab4b8,puVar3);
  func_0x000100082720("SCContextPollsDynamicStickerEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102baaf44;
  func_0x0001000823a8(FUN_102baaf44,0);
  func_0x000100082720("SCContextPollsDynamicStickerScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112efc010,&UNK_10db2cfa0);
  puVar3 = &UNK_1105a98d8;
  func_0x000107c613fc(&UNK_1105a98d8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102bab500;
  func_0x0001000823a8(FUN_102bab500,puVar3);
  func_0x000100082720("SCContextPollsDynamicStickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112efbf90,&UNK_10db2ccd0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102bab50c;
  func_0x0001000823a8(0x102bab50c,pcVar5);
  func_0x000100082720("SCContextPollsDynamicStickerScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112efbf80,&UNK_10db2ccc0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102bab514;
  func_0x0001000823a8(0x102bab514,uVar6);
  func_0x000100082720("SCContextPollsDynamicStickerScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a9900;
  func_0x000107c613fc(&UNK_1105a9900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102bab51c;
  func_0x0001000823a8(0x102bab51c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContextPollsDynamicStickerScopeEntryPointProvider",0x33,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102bab4ac; end: 102bab4c3;  */

void FUN_102bab4ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112efc000,&UNK_10db2cf88);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102bac44c();
  func_0x000100082720("ContextPollsStickerScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112efc008,&UNK_10db2cf90);
  puVar3 = &UNK_1105a98b0;
  func_0x000107c613fc(&UNK_1105a98b0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x102bab4b8;
  func_0x0001000823a8(0x102bab4b8,puVar3);
  func_0x000100082720("SCContextPollsDynamicStickerEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102baaf44;
  func_0x0001000823a8(FUN_102baaf44,0);
  func_0x000100082720("SCContextPollsDynamicStickerScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112efc010,&UNK_10db2cfa0);
  puVar3 = &UNK_1105a98d8;
  func_0x000107c613fc(&UNK_1105a98d8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_102bab500;
  func_0x0001000823a8(FUN_102bab500,puVar3);
  func_0x000100082720("SCContextPollsDynamicStickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112efbf90,&UNK_10db2ccd0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x102bab50c;
  func_0x0001000823a8(0x102bab50c,pcVar6);
  func_0x000100082720("SCContextPollsDynamicStickerScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112efbf80,&UNK_10db2ccc0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102bab514;
  func_0x0001000823a8(0x102bab514,uVar7);
  func_0x000100082720("SCContextPollsDynamicStickerScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a9900;
  func_0x000107c613fc(&UNK_1105a9900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x102bab51c;
  func_0x0001000823a8(0x102bab51c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCContextPollsDynamicStickerScopeEntryPointProvider",0x33,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 102bab4c4; end: 102bab4ff;  */

void FUN_102bab4c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bab500; end: 102bab523;  */

void FUN_102bab500(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102babc08(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCContextPollsDynamicStickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102bab524; end: 102baba0f;  */

void FUN_102bab524(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_102babb58();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ac068;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0fa6a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0x767265536c6c6f70;
  func_0x000107c5fadc(0x767265536c6c6f70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}


