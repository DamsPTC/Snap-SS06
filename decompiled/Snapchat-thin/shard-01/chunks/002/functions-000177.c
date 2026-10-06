/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e1f3a4; end: 100e1f3cb; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider handleLearnMoreButtonTapped] */

void FUN_100e1f3a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1f2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1f3cc; end: 100e1f4ef;  */

/* WARNING: Possible PIC construction at 0x000100e1f478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1f4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1f4a8) */
/* WARNING: Removing unreachable block (ram,0x000100c97bc4) */
/* WARNING: Removing unreachable block (ram,0x000100c97bd0) */
/* WARNING: Removing unreachable block (ram,0x000100c97bc8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f3cc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d39c98);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d39c88);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    pcVar4 = *(code **)(unaff_x20 + _DAT_112d39ca0);
    if (pcVar4 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(unaff_x20 + _DAT_112d39ca0))[1]);
      (*pcVar4)();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d39cb0);
    func_0x00010018cc3c(lVar2);
    lVar1 = lVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar2);
    func_0x000107c4c4b8(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e1f4f0; end: 100e1f55f; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider handleLearnMoreBrowserDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f4f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d39ca0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112d39ca0))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 100e1f560; end: 100e1f56b;  */

void FUN_100e1f560(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100e1f568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100e1f56c; end: 100e1f5bb;  */

void FUN_100e1f56c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100e1f5bc; end: 100e1f5d7;  */

void FUN_100e1f5bc(long param_1,long param_2)

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



/* Entry: 100e1f5d8; end: 100e1f5db; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider handleOkButtonTapped] */

void FUN_100e1f5d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1f3cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1f5dc; end: 100e1f5df; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider handleTakeoverDismissed] */

void FUN_100e1f5dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1f3cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1f5e0; end: 100e1f5e3; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider handleTakeoverOutsideTapped] */

void FUN_100e1f5e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1f3cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1f5e4; end: 100e1f5ef; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f5e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39ce0;
  func_0x000107c61428(param_1 + _DAT_112d39ce0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1f5f0; end: 100e1f5fb; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39ce0;
  func_0x000107c61428(param_1 + _DAT_112d39ce0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1f5fc; end: 100e1f607; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f5fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39ce8;
  func_0x000107c61428(param_1 + _DAT_112d39ce8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1f608; end: 100e1f613; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39ce8;
  func_0x000107c61428(param_1 + _DAT_112d39ce8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1f614; end: 100e1f61f; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f614(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39cf0;
  func_0x000107c61428(param_1 + _DAT_112d39cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1f620; end: 100e1f663;  */

void FUN_100e1f620(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e1f664; end: 100e1f66f; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f664(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39cf0;
  func_0x000107c61428(param_1 + _DAT_112d39cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1f670; end: 100e1f6c3;  */

void FUN_100e1f670(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1f6c4; end: 100e1f70b; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f6c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39cf8;
  func_0x000107c61428(param_1 + _DAT_112d39cf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e1f70c; end: 100e1f76f; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39cf8;
  func_0x000107c61428(param_1 + _DAT_112d39cf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e1f770; end: 100e1f993;  */

/* WARNING: Possible PIC construction at 0x000100e1f8e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1f8f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1f908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1f964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1f954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1f968) */
/* WARNING: Removing unreachable block (ram,0x000100e1f90c) */
/* WARNING: Removing unreachable block (ram,0x000100e1f8fc) */
/* WARNING: Removing unreachable block (ram,0x000100e1f8ec) */
/* WARNING: Removing unreachable block (ram,0x000100e1f958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f770(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3e8cc();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c5e1d0();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_100e1eb5c(0);
        func_0x000107c613fc();
        func_0x000107c5dbd4();
        func_0x000107c61180();
        func_0x000107c43b5c();
        func_0x000107c61180();
        lVar6 = 0;
        FUN_100e1f1bc();
        lVar7 = lVar6;
        func_0x000107c610f8();
        *(undefined8 *)(lVar7 + _DAT_112d39c98) = 0;
        puVar1 = (undefined8 *)(lVar7 + _DAT_112d39ca0);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar7 + _DAT_112d39ca8) = 0;
        *(undefined **)(lVar7 + _DAT_112d39cb0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        *(long *)(lVar7 + _DAT_112d39c80) = lVar4;
        *(long *)(lVar7 + _DAT_112d39c88) = lVar5;
        *(long *)(lVar7 + _DAT_112d39c90) = unaff_x20;
        puVar2 = PTR_s_init_1125d9248;
        lStack_70 = lVar7;
        lStack_68 = lVar6;
        func_0x000107c61174(unaff_x20);
        func_0x000107c61154(&lStack_70,puVar2);
        func_0x000107c4e9e4(lVar3);
        func_0x000107c61180();
        func_0x000107c4fba8();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100e1f994; end: 100e1f9bb; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint begin] */

void FUN_100e1f994(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1f770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1f9bc; end: 100e1f9ff; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint end] */

void FUN_100e1f9bc(undefined8 param_1)

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



/* Entry: 100e1fa00; end: 100e1fc6f;  */

void FUN_100e1fa00(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52c50();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) &&
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCBillboardLegalComplianceTakeoverFeature/SCBillboardLegalComplianceTakeoverFeatureEntryPoint.swift"
                                ,99,2,0x31,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1fc70);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a68c();
        }
        goto LAB_100e1fa8c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_100e1fa8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e1fc70; end: 100e1fd1b; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint setValue:forIvarName:] */

void FUN_100e1fc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e1fa00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e1fd1c; end: 100e1fdaf; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1fd1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d39ce0,0);
  func_0x000107c61614(param_1 + _DAT_112d39ce8,0);
  func_0x000107c61614(param_1 + _DAT_112d39cf0,0);
  *(undefined8 *)(param_1 + _DAT_112d39cf8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d39d00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e1fdb0; end: 100e1fde3;  */

void FUN_100e1fdb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e1fde4; end: 100e1fe4b; -[SCBillboardLegalComplianceTakeoverFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1fde4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39ce0);
  func_0x000107c61610(param_1 + _DAT_112d39ce8);
  func_0x000107c61610(param_1 + _DAT_112d39cf0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39cf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d39d00));
  return;
}



/* Entry: 100e1fe4c; end: 100e1fe6b;  */

void FUN_100e1fe4c(void)

{
  func_0x000107c61168(&PTR_PTR_112799f40);
  return;
}



/* Entry: 100e1fe6c; end: 100e1fe73; -[_TtC37IncentiveCampaignInviteSignalProvider37IncentiveCampaignInviteSignalProvider preCheckSource] */

undefined8 FUN_100e1fe6c(void)

{
  return 0x21;
}



/* Entry: 100e1fe74; end: 100e1fea7; -[_TtC37IncentiveCampaignInviteSignalProvider37IncentiveCampaignInviteSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100e1fe74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e1ff60();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e1fea8; end: 100e1ff07; -[_TtC37IncentiveCampaignInviteSignalProvider37IncentiveCampaignInviteSignalProvider init] */

void FUN_100e1fea8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncentiveCampaignInviteSignalProvider.IncentiveCampaignInviteSignalProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1fed4);
  (*pcVar1)();
}



/* Entry: 100e1ff08; end: 100e1ff3f; -[_TtC37IncentiveCampaignInviteSignalProvider37IncentiveCampaignInviteSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e1ff24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1ff28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1ff08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d39d30));
  return;
}



/* Entry: 100e1ff40; end: 100e1ff5f;  */

void FUN_100e1ff40(void)

{
  func_0x000107c61168(&PTR_PTR_11279a018);
  return;
}



/* Entry: 100e1ff60; end: 100e20137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e1ff60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d39d30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d39d38);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c41050(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar2;
      func_0x000107c44878(lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c49f08(lVar1);
      lVar4 = lVar1;
      func_0x000107c49f0c(lVar1);
      puVar6 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x0001002ed07c(0);
      uVar5 = (ulong)((((uint)lVar2 | (uint)lVar4 | (uint)lVar3) ^ 0xffffffff) & 1);
      func_0x000107c6010c(uVar5);
      func_0x000107c451b0(puVar6,param_2,uVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      goto LAB_100e200ac;
    }
    func_0x000107c61170(lVar1);
  }
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x0001002ed07c(0);
  uVar5 = 0;
  func_0x000107c6010c(0);
  func_0x000107c451b0(puVar6,param_2,uVar5);
  func_0x000107c61180();
LAB_100e200ac:
  func_0x000107c61170(uVar5);
  return puVar6;
}



/* Entry: 100e20138; end: 100e2015b;  */

void FUN_100e20138(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e2015c; end: 100e20167;  */

void FUN_100e2015c(void)

{
  return;
}



/* Entry: 100e20168; end: 100e20247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20168(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174();
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_3 != 0) {
    lVar3 = 0;
    FUN_100e1ff40();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112d39d30) = param_3;
    *(undefined8 *)(lVar4 + _DAT_112d39d38) = param_2;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(param_2);
    func_0x000107c61154(&lStack_50,puVar1);
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(plVar5);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e20248);
  (*pcVar2)();
}



/* Entry: 100e20248; end: 100e20267;  */

void FUN_100e20248(void)

{
  func_0x000107c61168(&PTR_PTR_112d39da8);
  return;
}



/* Entry: 100e20268; end: 100e20273; -[SCIncentiveCampaignInviteSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20268(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39e08;
  func_0x000107c61428(param_1 + _DAT_112d39e08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e20274; end: 100e2027f; -[SCIncentiveCampaignInviteSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39e08;
  func_0x000107c61428(param_1 + _DAT_112d39e08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e20280; end: 100e2028b; -[SCIncentiveCampaignInviteSignalProviderEntryPoint plusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20280(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39e10;
  func_0x000107c61428(param_1 + _DAT_112d39e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e2028c; end: 100e20297; -[SCIncentiveCampaignInviteSignalProviderEntryPoint setPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2028c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39e10;
  func_0x000107c61428(param_1 + _DAT_112d39e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e20298; end: 100e202a3; -[SCIncentiveCampaignInviteSignalProviderEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20298(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39e18;
  func_0x000107c61428(param_1 + _DAT_112d39e18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e202a4; end: 100e202e7;  */

void FUN_100e202a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e202e8; end: 100e202f3; -[SCIncentiveCampaignInviteSignalProviderEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e202e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39e18;
  func_0x000107c61428(param_1 + _DAT_112d39e18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e202f4; end: 100e20347;  */

void FUN_100e202f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e20348; end: 100e2044b;  */

/* WARNING: Possible PIC construction at 0x000100e203d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e203e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e203dc) */
/* WARNING: Removing unreachable block (ram,0x000100e203ec) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100e20348(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4ea90();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c42eb0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_100e20248(0);
        func_0x000107c613fc();
        FUN_100e20168(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100e2044c; end: 100e20473; -[SCIncentiveCampaignInviteSignalProviderEntryPoint begin] */

void FUN_100e2044c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e20348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e20474; end: 100e204b7; -[SCIncentiveCampaignInviteSignalProviderEntryPoint end] */

void FUN_100e20474(undefined8 param_1)

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



/* Entry: 100e204b8; end: 100e206c3;  */

void FUN_100e204b8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x7672655373756c70) && (param_3 == -0x13ffffff8c9a9c97)) ||
       (func_0x000107c605b8(0x7672655373756c70,0xec00000073656369,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57584();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "IncentiveCampaignInviteSignalProvider/SCIncentiveCampaignInviteSignalProviderEntryPoint.swift"
                              ,0x5d,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e206c4);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5491c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e206c4; end: 100e2076f; -[SCIncentiveCampaignInviteSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100e206c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e204b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e20770; end: 100e207f7; -[SCIncentiveCampaignInviteSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20770(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d39e08,0);
  func_0x000107c61614(param_1 + _DAT_112d39e10,0);
  func_0x000107c61614(param_1 + _DAT_112d39e18,0);
  *(undefined8 *)(param_1 + _DAT_112d39e20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e207f8; end: 100e2082b;  */

void FUN_100e207f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e2082c; end: 100e20883; -[SCIncentiveCampaignInviteSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2082c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39e08);
  func_0x000107c61610(param_1 + _DAT_112d39e10);
  func_0x000107c61610(param_1 + _DAT_112d39e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d39e20));
  return;
}



/* Entry: 100e20884; end: 100e208a3;  */

void FUN_100e20884(void)

{
  func_0x000107c61168(&PTR_PTR_11279a0e0);
  return;
}



/* Entry: 100e208a4; end: 100e208ab; -[_TtC37IncentiveCampaignRedeemSignalProvider37IncentiveCampaignRedeemSignalProvider preCheckSource] */

undefined8 FUN_100e208a4(void)

{
  return 0x23;
}



/* Entry: 100e208ac; end: 100e208df; -[_TtC37IncentiveCampaignRedeemSignalProvider37IncentiveCampaignRedeemSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100e208ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e20998();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e208e0; end: 100e2093f; -[_TtC37IncentiveCampaignRedeemSignalProvider37IncentiveCampaignRedeemSignalProvider init] */

void FUN_100e208e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncentiveCampaignRedeemSignalProvider.IncentiveCampaignRedeemSignalProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2090c);
  (*pcVar1)();
}



/* Entry: 100e20940; end: 100e20977; -[_TtC37IncentiveCampaignRedeemSignalProvider37IncentiveCampaignRedeemSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e2095c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e20960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d39e50));
  return;
}



/* Entry: 100e20978; end: 100e20997;  */

void FUN_100e20978(void)

{
  func_0x000107c61168(&PTR_PTR_11279a1b0);
  return;
}



/* Entry: 100e20998; end: 100e20bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e20998(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d39e50);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d39e58);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c41050(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar2;
      func_0x000107c44878(lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c49f0c(lVar1);
      puVar5 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x0001002ed07c(0);
      uVar4 = (ulong)(((uint)lVar3 ^ 1) & (uint)lVar2);
      func_0x000107c6010c(uVar4);
      func_0x000107c451b0(puVar5,param_2,uVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      goto LAB_100e20ad8;
    }
    func_0x000107c61170(lVar1);
  }
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x0001002ed07c(0);
  uVar4 = 0;
  func_0x000107c6010c(0);
  func_0x000107c451b0(puVar5,param_2,uVar4);
  func_0x000107c61180();
LAB_100e20ad8:
  func_0x000107c61170(uVar4);
  return puVar5;
}



/* Entry: 100e20bfc; end: 100e20c17;  */

void FUN_100e20bfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e20c18; end: 100e20c37;  */

void FUN_100e20c18(void)

{
  func_0x000107c61168(&PTR_PTR_112d39ec8);
  return;
}



/* Entry: 100e20c38; end: 100e20c43; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20c38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39f20;
  func_0x000107c61428(param_1 + _DAT_112d39f20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e20c44; end: 100e20c4f; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39f20;
  func_0x000107c61428(param_1 + _DAT_112d39f20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e20c50; end: 100e20c5b; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint plusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20c50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39f28;
  func_0x000107c61428(param_1 + _DAT_112d39f28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e20c5c; end: 100e20c67; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint setPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39f28;
  func_0x000107c61428(param_1 + _DAT_112d39f28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e20c68; end: 100e20c73; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20c68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39f30;
  func_0x000107c61428(param_1 + _DAT_112d39f30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e20c74; end: 100e20cb7;  */

void FUN_100e20c74(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e20cb8; end: 100e20cc3; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39f30;
  func_0x000107c61428(param_1 + _DAT_112d39f30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e20cc4; end: 100e20d17;  */

void FUN_100e20cc4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e20d18; end: 100e20ea3;  */

/* WARNING: Possible PIC construction at 0x000100e20e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e20e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e20e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e20e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e20e40) */
/* WARNING: Removing unreachable block (ram,0x000100e20e30) */
/* WARNING: Removing unreachable block (ram,0x000100e20e20) */
/* WARNING: Removing unreachable block (ram,0x000100e20e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e20d18(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c4ea90();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c42eb0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      FUN_100e20c18(0);
      func_0x000107c613fc();
      func_0x000107c42eac();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e20ea4);
        (*pcVar2)();
      }
      lVar5 = 0;
      FUN_100e20978();
      lVar6 = lVar5;
      func_0x000107c610f8();
      *(long *)(lVar6 + _DAT_112d39e58) = lVar4;
      *(long *)(lVar6 + _DAT_112d39e50) = unaff_x20;
      puVar1 = PTR_s_init_1125d9248;
      lStack_60 = lVar6;
      lStack_58 = lVar5;
      func_0x000107c61174(lVar4);
      func_0x000107c61154(&lStack_60,puVar1);
      func_0x000107c4e9e4(lVar3);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100e20ea4; end: 100e20ecb; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint begin] */

void FUN_100e20ea4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e20d18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e20ecc; end: 100e20f0f; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint end] */

void FUN_100e20ecc(undefined8 param_1)

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



/* Entry: 100e20f10; end: 100e2111b;  */

void FUN_100e20f10(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x7672655373756c70) && (param_3 == -0x13ffffff8c9a9c97)) ||
       (func_0x000107c605b8(0x7672655373756c70,0xec00000073656369,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57584();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "IncentiveCampaignRedeemSignalProvider/SCIncentiveCampaignRedeemSignalProviderEntryPoint.swift"
                              ,0x5d,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e2111c);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5491c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e2111c; end: 100e211c7; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100e2111c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e20f10(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e211c8; end: 100e2124f; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e211c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d39f20,0);
  func_0x000107c61614(param_1 + _DAT_112d39f28,0);
  func_0x000107c61614(param_1 + _DAT_112d39f30,0);
  *(undefined8 *)(param_1 + _DAT_112d39f38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e21250; end: 100e21283;  */

void FUN_100e21250(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e21284; end: 100e212db; -[SCIncentiveCampaignRedeemSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e21284(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39f20);
  func_0x000107c61610(param_1 + _DAT_112d39f28);
  func_0x000107c61610(param_1 + _DAT_112d39f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d39f38));
  return;
}



/* Entry: 100e212dc; end: 100e212fb;  */

void FUN_100e212dc(void)

{
  func_0x000107c61168(&PTR_PTR_11279a278);
  return;
}



/* Entry: 100e212fc; end: 100e21303; -[_TtC34OneTapLoginBillboardSignalProvider34OneTapLoginBillboardSignalProvider preCheckSource] */

undefined8 FUN_100e212fc(void)

{
  return 8;
}



/* Entry: 100e21304; end: 100e21337; -[_TtC34OneTapLoginBillboardSignalProvider34OneTapLoginBillboardSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100e21304(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e213c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e21338; end: 100e21397; -[_TtC34OneTapLoginBillboardSignalProvider34OneTapLoginBillboardSignalProvider init] */

void FUN_100e21338(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OneTapLoginBillboardSignalProvider.OneTapLoginBillboardSignalProvider",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e21364);
  (*pcVar1)();
}



/* Entry: 100e21398; end: 100e213a7; -[_TtC34OneTapLoginBillboardSignalProvider34OneTapLoginBillboardSignalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e21398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d39f68));
  return;
}



/* Entry: 100e213a8; end: 100e213c7;  */

void FUN_100e213a8(void)

{
  func_0x000107c61168(&PTR_PTR_11279a348);
  return;
}



/* Entry: 100e213c8; end: 100e21487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e213c8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d39f68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49bf0();
    func_0x000107c615e8(lVar1);
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    uVar3 = (ulong)((uint)lVar2 ^ 1);
  }
  func_0x000107c6010c(uVar3);
  func_0x000107c451b0(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  return puVar4;
}



/* Entry: 100e21488; end: 100e2155b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100e21488(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c4ac84();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_100e213a8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d39f68) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 100e2155c; end: 100e21577;  */

void FUN_100e2155c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e21578; end: 100e21597;  */

void FUN_100e21578(void)

{
  func_0x000107c61168(&PTR_PTR_112d39fd8);
  return;
}



/* Entry: 100e21598; end: 100e215a3; -[SCOneTapLoginBillboardSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e21598(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a030;
  func_0x000107c61428(param_1 + _DAT_112d3a030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e215a4; end: 100e215af; -[SCOneTapLoginBillboardSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e215a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a030;
  func_0x000107c61428(param_1 + _DAT_112d3a030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e215b0; end: 100e215bb; -[SCOneTapLoginBillboardSignalProviderEntryPoint oneTapLoginRegistryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e215b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3a038;
  func_0x000107c61428(param_1 + _DAT_112d3a038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e215bc; end: 100e215ff;  */

void FUN_100e215bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e21600; end: 100e2160b; -[SCOneTapLoginBillboardSignalProviderEntryPoint setOneTapLoginRegistryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e21600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3a038;
  func_0x000107c61428(param_1 + _DAT_112d3a038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e2160c; end: 100e2165f;  */

void FUN_100e2160c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e21660; end: 100e217a3; -[SCOneTapLoginBillboardSignalProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100e2172c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2173c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2175c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e21784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e21740) */
/* WARNING: Removing unreachable block (ram,0x000100e21730) */
/* WARNING: Removing unreachable block (ram,0x000100e21760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e21660(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar4 = param_1;
  if (lVar1 != 0) {
    func_0x000107c4ddd4();
    func_0x000107c61180();
    lVar4 = lVar1;
    if (param_1 != 0) {
      FUN_100e21578(0);
      func_0x000107c613fc();
      func_0x000107c4ac84();
      func_0x000107c61180();
      lVar2 = 0;
      FUN_100e213a8();
      lVar3 = lVar2;
      func_0x000107c610f8();
      *(long *)(lVar3 + _DAT_112d39f68) = param_1;
      lStack_50 = lVar3;
      lStack_48 = lVar2;
      func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
      func_0x000107c4e9e4(lVar1);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 100e217a4; end: 100e217e7; -[SCOneTapLoginBillboardSignalProviderEntryPoint end] */

void FUN_100e217a4(undefined8 param_1)

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



/* Entry: 100e217e8; end: 100e2197f;  */

void FUN_100e217e8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10ee940)) {
      uVar2 = 0xd00000000000001b;
      func_0x000107c605b8(0xd00000000000001b,0x800000010ef116c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OneTapLoginBillboardSignalProvider/SCOneTapLoginBillboardSignalProviderEntryPoint.swift"
                            ,0x57,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e21980);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56f80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e21980; end: 100e21a2b; -[SCOneTapLoginBillboardSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100e21980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e217e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e21a2c; end: 100e21a9f; -[SCOneTapLoginBillboardSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e21a2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d3a030,0);
  func_0x000107c61614(param_1 + _DAT_112d3a038,0);
  *(undefined8 *)(param_1 + _DAT_112d3a040) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


