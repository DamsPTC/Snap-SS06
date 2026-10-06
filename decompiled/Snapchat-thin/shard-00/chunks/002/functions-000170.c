/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003ea390; end: 1003ea397; -[SCBlizzardPageViewState pageViewId] */

undefined8 FUN_1003ea390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003ea398; end: 1003ea3bf; -[SCBlizzardPageViewState pageTabType] */

undefined8 FUN_1003ea398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003ea3c0; end: 1003ea3c7; -[SCBlizzardEventLoggerAdapter loggerProvider] */

undefined8 FUN_1003ea3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1003ea3c8; end: 1003ea3f7; -[SCBlizzardEventLoggerProviderV2 getLoggersForEvent:] */

void FUN_1003ea3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c4404c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be20490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getLoggersForQoS_region__112565ac0,param_3,1);
  return;
}



/* Entry: 1003ea3f8; end: 1003ea46b; -[SCBlizzardEventLoggerProviderV2 _getLoggersForQoS:region:] */

void FUN_1003ea3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1002ced14(param_3);
  func_0x000107c61180();
  func_0x000107c4f71c(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003ea46c; end: 1003ea473; -[SCBlizzardEventLoggerProviderV2 qosToLoggersDict] */

undefined8 FUN_1003ea46c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003ea474; end: 1003ea4c3; -[SCBlizzardEventLogger logEvent:uploadImmediately:] */

void FUN_1003ea474(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    func_0x000107c40794(param_3);
    func_0x000107c3be20(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1003ea4c4; end: 1003ea5cf; -[SCBlizzardEvent copyWithZone:] */

undefined * FUN_1003ea4c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d02f8;
  func_0x000107c610f4(PTR_PTR_1126d02f8);
  uVar2 = param_1;
  func_0x000107c4f4ec(param_1);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c49bcc(param_1);
  uVar4 = param_1;
  func_0x000107c42ae0(param_1);
  uVar5 = param_1;
  func_0x000107c4a698(param_1);
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c3eaa8(param_1);
  uVar7 = param_1;
  func_0x000107c4f908(param_1);
  func_0x000107c61180();
  func_0x000107c3ddd4();
  func_0x000107c61180();
  func_0x000107c48198(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 1003ea5d0; end: 1003ea60b; -[SCBlizzardEvent properties] */

void FUN_1003ea5d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4d2e0();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c40794();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003ea60c; end: 1003ea613; -[SCBlizzardEvent isCritical] */

undefined1 FUN_1003ea60c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1003ea614; end: 1003ea61b; -[SCBlizzardEvent eventQoS] */

undefined8 FUN_1003ea614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1003ea61c; end: 1003ea623; -[SCBlizzardEvent blizzardEventSource] */

undefined4 FUN_1003ea61c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1003ea624; end: 1003ea62b; -[SCBlizzardEvent appInsightsMetadataStorage] */

undefined8 FUN_1003ea624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003ea62c; end: 1003ea94b; -[SCBlizzardEventLogger _logEvent:uploadImmediately:] */

/* WARNING: Possible PIC construction at 0x0001003ea6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003ea768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003ea8d4) */
/* WARNING: Removing unreachable block (ram,0x0001003ea90c) */
/* WARNING: Removing unreachable block (ram,0x0001003ea8f4) */
/* WARNING: Removing unreachable block (ram,0x0001003ea870) */
/* WARNING: Removing unreachable block (ram,0x0001003ea890) */
/* WARNING: Removing unreachable block (ram,0x0001003ea87c) */
/* WARNING: Removing unreachable block (ram,0x0001003ea8dc) */
/* WARNING: Removing unreachable block (ram,0x0001003ea860) */
/* WARNING: Removing unreachable block (ram,0x0001003ea7d0) */
/* WARNING: Removing unreachable block (ram,0x0001003ea7f8) */
/* WARNING: Removing unreachable block (ram,0x0001003ea74c) */
/* WARNING: Removing unreachable block (ram,0x0001003ea710) */
/* WARNING: Removing unreachable block (ram,0x0001003ea71c) */
/* WARNING: Removing unreachable block (ram,0x0001003ea750) */
/* WARNING: Removing unreachable block (ram,0x0001003ea744) */
/* WARNING: Removing unreachable block (ram,0x0001003ea6b0) */
/* WARNING: Removing unreachable block (ram,0x0001003ea76c) */
/* WARNING: Removing unreachable block (ram,0x0001003ea7a4) */
/* WARNING: Removing unreachable block (ram,0x0001003ea770) */

void FUN_1003ea62c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  uVar1 = param_1;
  func_0x000107c3bb08(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000107c4f4ec(param_3);
    func_0x000107c61180();
    func_0x000107c4d9e8();
    func_0x000107c61180();
    param_1 = param_3;
  }
  else {
    func_0x000107c611a8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1003ea94c; end: 1003eaa63; -[SCBlizzardEventLogger _isEventBlacklisted:] */

long FUN_1003ea94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3ea8c();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c4d3e4(param_3);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c40404();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = param_3;
    func_0x000107c4f4ec(param_3);
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c4be04(param_1);
    func_0x000107c61180();
    func_0x000106ac224c(uVar6,uVar5,param_1,1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return lVar4;
}



/* Entry: 1003eaa64; end: 1003eaa6b; -[SCBlizzardEventLogger config] */

undefined8 FUN_1003eaa64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1003eaa6c; end: 1003eaa73; -[SCBlizzardLogQueueConfigAdapter blacklistedEvents] */

undefined8 FUN_1003eaa6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1003eaa74; end: 1003eaaaf; -[SCBlizzardEventLogger region] */

undefined8 FUN_1003eaa74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4fb9c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1003eaab0; end: 1003eaab7; -[SCBlizzardLogQueueConfigAdapter region] */

undefined8 FUN_1003eaab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1003eaab8; end: 1003eaabf; -[SCBlizzardEventLogger _isAppBackgrounded] */

void FUN_1003eaab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_isAppInBackground_1125f8b00);
  return;
}



/* Entry: 1003eaac0; end: 1003eab03; -[SCBlizzardAppStateProvider isAppInBackground] */

bool FUN_1003eaac0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c3dfc0();
  if (lVar2 == 2) {
    bVar1 = true;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x000107c3dfc0(lVar2);
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}



/* Entry: 1003eab04; end: 1003eae5b;  */

/* WARNING: Removing unreachable block (ram,0x0001003eae1c) */

void FUN_1003eab04(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,long param_6)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *unaff_x25;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11095bca0);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        puVar3 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_b8,puVar3);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_3);
        puVar3 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_a0,puVar3);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_4);
        puVar3 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_88,puVar3);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_5);
        puVar3 = param_5;
        func_0x000107c3ac4c(param_5);
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_70,puVar3);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      FUN_10007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
      unaff_x25 = &uStack_d8;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11095bca0,&uStack_d8,param_6 * 100);
      puStack_c0 = unaff_x25;
      FUN_10007e5dc(&puStack_c0);
      lVar4 = 0;
      do {
        if ((&cStack_59)[lVar4] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar4));
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x60);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar3 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8(puVar3);
    if (lRam00000001136c49d0 != -1) {
      FUN_10002a2fc(0x1136c49d0,&PTR___NSConcreteGlobalBlock_11095ece0);
    }
    uVar1 = uRam00000001136c49c8;
    func_0x000107c61174(uRam00000001136c49c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1003eae5c; end: 1003eaeaf; +[SCBlizzardConfig BLIZZARD_TIER0_EVENTS_WITHOUT_SESSION] */

void FUN_1003eae5c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c49d0 != -1) {
    FUN_10002a2fc(0x1136c49d0,&PTR___NSConcreteGlobalBlock_11095ece0);
  }
  uVar1 = uRam00000001136c49c8;
  func_0x000107c61174(uRam00000001136c49c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003eaeb0; end: 1003eaeeb;  */

void FUN_1003eaeb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a74c(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180f20);
  func_0x000107c61180();
  uVar1 = puRam00000001136c49c8;
  puRam00000001136c49c8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003eaeec; end: 1003eb2bb; -[SCBlizzardEventLogger _logFramesEvent:uploadImmediately:] */

/* WARNING: Possible PIC construction at 0x0001003eafbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eafcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003eb26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003eb258) */
/* WARNING: Removing unreachable block (ram,0x0001003eb204) */
/* WARNING: Removing unreachable block (ram,0x0001003eb20c) */
/* WARNING: Removing unreachable block (ram,0x0001003eb214) */
/* WARNING: Removing unreachable block (ram,0x0001003eb248) */
/* WARNING: Removing unreachable block (ram,0x0001003eb224) */
/* WARNING: Removing unreachable block (ram,0x0001003eb1f4) */
/* WARNING: Removing unreachable block (ram,0x0001003eb190) */
/* WARNING: Removing unreachable block (ram,0x0001003eb120) */
/* WARNING: Removing unreachable block (ram,0x0001003eb0e4) */
/* WARNING: Removing unreachable block (ram,0x0001003eb144) */
/* WARNING: Removing unreachable block (ram,0x0001003eb0f4) */
/* WARNING: Removing unreachable block (ram,0x0001003eb098) */
/* WARNING: Removing unreachable block (ram,0x0001003eb0a4) */
/* WARNING: Removing unreachable block (ram,0x0001003eb0ac) */
/* WARNING: Removing unreachable block (ram,0x0001003eb058) */
/* WARNING: Removing unreachable block (ram,0x0001003eb064) */
/* WARNING: Removing unreachable block (ram,0x0001003eb014) */
/* WARNING: Removing unreachable block (ram,0x0001003eb0b4) */
/* WARNING: Removing unreachable block (ram,0x0001003eb0b8) */
/* WARNING: Removing unreachable block (ram,0x0001003eb020) */
/* WARNING: Removing unreachable block (ram,0x0001003eafd0) */
/* WARNING: Removing unreachable block (ram,0x0001003eafc0) */
/* WARNING: Removing unreachable block (ram,0x0001003eb270) */

void FUN_1003eaeec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  uVar1 = param_1;
  func_0x000107c3b800(param_1,param_2,param_3);
  puVar2 = PTR_PTR_1126d0408;
  func_0x000107c610f4(PTR_PTR_1126d0408);
  func_0x000107c4f4ec(param_3);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c4f538(param_1);
  uVar4 = param_1;
  func_0x000107c4be04(param_1);
  func_0x000107c61180();
  func_0x000107c42bb8(param_1);
  func_0x000107c61180();
  func_0x000107c45434(puVar2,param_2,param_3,uVar1,uVar3,uVar4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1003eb2bc; end: 1003eb3df; -[SCBlizzardEventLogger _getClientTsMillisFromEvent:] */

long FUN_1003eb2bc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c3b81c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    lVar2 = param_4;
    func_0x000107c4d3e4(param_4);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126d0410;
    func_0x000107c3eaa8(param_4);
    func_0x000107c43f28(puVar3);
    func_0x000107c61180();
    func_0x000106aca3ac(uVar4,lVar2,puVar3,1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c5c9e4(lVar1);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_4);
  return (long)(param_1 * 1000.0);
}



/* Entry: 1003eb3e0; end: 1003eb3e7; -[SCBlizzardEventLogger protoFrameSequenceId] */

undefined8 FUN_1003eb3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1003eb3e8; end: 1003eb8ef; -[SCBlizzardFrameStart initFromProperties:clientReferenceTsMillis:sequenceIdStart:logQueueName:experimentProvider:] */

undefined1 *
FUN_1003eb3e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126f4b88;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_1003eb8b8;
  lVar2 = param_3;
  func_0x000107c4d9e8(param_3);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3cacc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
  *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c3ebcc();
  *(char *)((long)puVar1 + 8) = (char)lVar4;
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4d9e8(param_3);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3cacc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
  *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4d9e8(param_3);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3b188();
  *(int *)((long)puVar1 + 0x10) = (int)puVar3;
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
  *(long *)((long)puVar1 + 0x28) = lVar2;
  func_0x000107c61170(uVar6);
  lVar2 = param_3;
  func_0x000107c4d9e8(param_3);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3cacc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
  *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  *(undefined8 *)((long)puVar1 + 0x38) = param_4;
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
  *(long *)((long)puVar1 + 0x40) = lVar2;
  func_0x000107c61170(uVar6);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x48);
  *(long *)((long)puVar1 + 0x48) = lVar2;
  func_0x000107c61170(uVar6);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x90);
  *(long *)((long)puVar1 + 0x90) = lVar2;
  func_0x000107c61170(uVar6);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x98);
  *(long *)((long)puVar1 + 0x98) = lVar2;
  func_0x000107c61170(uVar6);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x58);
  *(long *)((long)puVar1 + 0x58) = lVar2;
  func_0x000107c61170(uVar6);
  lVar2 = param_3;
  func_0x000107c4d9e8(param_3);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3cacc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x60);
  *(undefined1 **)((long)puVar1 + 0x60) = puVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  *(undefined8 *)((long)puVar1 + 0x68) = param_5;
  lVar2 = param_3;
  func_0x000107c4d9e8(param_3);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3cacc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x70);
  *(undefined1 **)((long)puVar1 + 0x70) = puVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4d9e8(param_3);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3cacc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x78);
  *(undefined1 **)((long)puVar1 + 0x78) = puVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61174(param_7);
  uVar6 = *(undefined8 *)((long)puVar1 + 0x88);
  *(undefined8 *)((long)puVar1 + 0x88) = param_7;
  func_0x000107c61170(uVar6);
  lVar2 = param_3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c49820();
  if (lVar4 < 1) {
    uVar5 = 0;
LAB_1003eb824:
    *(undefined4 *)((long)puVar1 + 0xc) = uVar5;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c49820();
    if (lVar4 == 1) {
      uVar5 = 1;
      goto LAB_1003eb824;
    }
    lVar4 = lVar2;
    func_0x000107c49820();
    if (lVar4 == 2) {
      uVar5 = 2;
      goto LAB_1003eb824;
    }
    lVar4 = lVar2;
    func_0x000107c49820();
    if (lVar4 == 3) {
      uVar5 = 3;
      goto LAB_1003eb824;
    }
  }
  uVar6 = param_6;
  func_0x000107c49d0c();
  if ((int)uVar6 == 0) {
    func_0x000107c49d0c();
  }
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c3cacc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)((long)puVar1 + 0x50);
  *(undefined1 **)((long)puVar1 + 0x50) = puVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61174(&PTR____CFConstantStringClassReference_11102bb58);
  uVar6 = *(undefined8 *)((long)puVar1 + 0x80);
  *(undefined ***)((long)puVar1 + 0x80) = &PTR____CFConstantStringClassReference_11102bb58;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
LAB_1003eb8b8:
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003eb8f0; end: 1003eb8fb; -[SCBlizzardFrameStart _transformFieldStringToBytes:] */

void FUN_1003eb8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_dataUsingEncoding__1125b6bf0,4);
  return;
}



/* Entry: 1003eb8fc; end: 1003eb91f; -[SCBlizzardFrameStart _convertAppTypeFromBlizzardSchemaToPbSchema:] */

undefined4 FUN_1003eb8fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  FUN_100285b40();
  uVar1 = 3;
  if (param_3 != 0x11) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1003eb920; end: 1003eb923;  */

void FUN_1003eb920(void)

{
  return;
}



/* Entry: 1003eb924; end: 1003eb95f; -[SCSnapchattersDataInitializer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001003eb93c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003eb940) */

void FUN_1003eb924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1003eb960; end: 1003eb967; -[SCBlizzardEventLogger frameEventList] */

undefined8 FUN_1003eb960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1003eb968; end: 1003eb96f; -[SCBlizzardEventList blizzardFrameStart] */

undefined8 FUN_1003eb968(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003eb970; end: 1003ebfc3; -[SCBlizzardFrameStart getDifferentFieldName:] */

void FUN_1003eb970(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e6dcb8;
    goto LAB_1003ebaa0;
  }
  lVar1 = param_1;
  func_0x000107c52060();
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c52060(param_3);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c49cf4(lVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar3 == 0) {
    ppuVar6 = &PTR_PTR_11095eef8;
  }
  else {
    lVar1 = param_1;
    func_0x000107c509c4();
    func_0x000107c61180();
    lVar2 = param_3;
    func_0x000107c509c4();
    func_0x000107c61180();
    if (lVar1 == lVar2) {
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = param_1;
      func_0x000107c509c4();
      func_0x000107c61180();
      lVar4 = param_3;
      func_0x000107c509c4(param_3);
      func_0x000107c61180();
      lVar5 = lVar3;
      func_0x000107c49d0c(lVar3,param_2,lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      if ((int)lVar5 == 0) {
        ppuVar6 = &PTR_PTR_11095ef48;
        goto LAB_1003eba94;
      }
    }
    lVar1 = param_1;
    func_0x000107c4d020();
    func_0x000107c61180();
    lVar2 = param_3;
    func_0x000107c4d020();
    func_0x000107c61180();
    if (lVar1 == lVar2) {
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = param_1;
      func_0x000107c4d020();
      func_0x000107c61180();
      lVar4 = param_3;
      func_0x000107c4d020(param_3);
      func_0x000107c61180();
      lVar5 = lVar3;
      func_0x000107c49d0c(lVar3,param_2,lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      if ((int)lVar5 == 0) {
        ppuVar6 = &PTR_PTR_11095ef50;
        goto LAB_1003eba94;
      }
    }
    lVar1 = param_1;
    func_0x000107c3fb8c();
    func_0x000107c61180();
    lVar2 = param_3;
    func_0x000107c3fb8c(param_3);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c49cf4(lVar1,param_2,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if ((int)lVar3 == 0) {
      ppuVar6 = &PTR_PTR_11095eeb0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c5d970();
      func_0x000107c61180();
      lVar2 = param_3;
      func_0x000107c5d970(param_3);
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000107c49cf4(lVar1,param_2,lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      if ((int)lVar3 == 0) {
        ppuVar6 = &PTR_PTR_11095ef00;
      }
      else {
        lVar1 = param_1;
        func_0x000107c4be04();
        func_0x000107c61180();
        lVar2 = param_3;
        func_0x000107c4be04(param_3);
        func_0x000107c61180();
        lVar3 = lVar1;
        func_0x000107c49cf4(lVar1,param_2,lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        if ((int)lVar3 == 0) {
          ppuVar6 = &PTR_PTR_11095f0e0;
        }
        else {
          lVar1 = param_1;
          func_0x000107c3dd84();
          lVar2 = param_3;
          func_0x000107c3dd84();
          if ((int)lVar1 == (int)lVar2) {
            lVar1 = param_1;
            func_0x000107c3dd80();
            func_0x000107c61180();
            lVar2 = param_3;
            func_0x000107c3dd80(param_3);
            func_0x000107c61180();
            lVar3 = lVar1;
            func_0x000107c49cf4(lVar1,param_2,lVar2);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar1);
            if ((int)lVar3 == 0) {
              ppuVar6 = &PTR_PTR_11095ee90;
            }
            else {
              lVar1 = param_1;
              func_0x000107c3de64();
              func_0x000107c61180();
              lVar2 = param_3;
              func_0x000107c3de64(param_3);
              func_0x000107c61180();
              lVar3 = lVar1;
              func_0x000107c49cf4(lVar1,param_2,lVar2);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar1);
              if ((int)lVar3 == 0) {
                ppuVar6 = &PTR_PTR_11095ee98;
              }
              else {
                lVar1 = param_1;
                func_0x000107c3dec4();
                func_0x000107c61180();
                lVar2 = param_3;
                func_0x000107c3dec4(param_3);
                func_0x000107c61180();
                lVar3 = lVar1;
                func_0x000107c49d0c(lVar1,param_2,lVar2);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar1);
                if ((int)lVar3 == 0) {
                  ppuVar6 = &PTR_PTR_11095eea8;
                }
                else {
                  lVar1 = param_1;
                  func_0x000107c41924();
                  func_0x000107c61180();
                  lVar2 = param_3;
                  func_0x000107c41924(param_3);
                  func_0x000107c61180();
                  lVar3 = lVar1;
                  func_0x000107c49d0c(lVar1,param_2,lVar2);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar1);
                  if ((int)lVar3 == 0) {
                    ppuVar6 = &PTR_PTR_11095eec8;
                  }
                  else {
                    lVar1 = param_1;
                    func_0x000107c4b840();
                    func_0x000107c61180();
                    lVar2 = param_3;
                    func_0x000107c4b840(param_3);
                    func_0x000107c61180();
                    lVar3 = lVar1;
                    func_0x000107c49d0c(lVar1,param_2,lVar2);
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar1);
                    if ((int)lVar3 == 0) {
                      ppuVar6 = &PTR_PTR_11095eee0;
                    }
                    else {
                      lVar1 = param_1;
                      func_0x000107c4e0d0();
                      func_0x000107c61180();
                      lVar2 = param_3;
                      func_0x000107c4e0d0(param_3);
                      func_0x000107c61180();
                      lVar3 = lVar1;
                      func_0x000107c49d0c(lVar1,param_2,lVar2);
                      func_0x000107c61170(lVar2);
                      func_0x000107c61170(lVar1);
                      if ((int)lVar3 == 0) {
                        ppuVar6 = &PTR_PTR_11095eee8;
                      }
                      else {
                        lVar1 = param_1;
                        func_0x000107c4e0c8();
                        func_0x000107c61180();
                        lVar2 = param_3;
                        func_0x000107c4e0c8(param_3);
                        func_0x000107c61180();
                        lVar3 = lVar1;
                        func_0x000107c49cf4(lVar1,param_2,lVar2);
                        func_0x000107c61170(lVar2);
                        func_0x000107c61170(lVar1);
                        if ((int)lVar3 == 0) {
                          ppuVar6 = &PTR_PTR_11095eef0;
                        }
                        else {
                          lVar1 = param_1;
                          func_0x000107c3ead4();
                          func_0x000107c61180();
                          lVar2 = param_3;
                          func_0x000107c3ead4(param_3);
                          func_0x000107c61180();
                          lVar3 = lVar1;
                          func_0x000107c49d0c(lVar1,param_2,lVar2);
                          func_0x000107c61170(lVar2);
                          func_0x000107c61170(lVar1);
                          if ((int)lVar3 == 0) {
                            ppuVar6 = &PTR_PTR_11095ef40;
                          }
                          else {
                            lVar1 = param_1;
                            func_0x000107c3debc();
                            lVar2 = param_3;
                            func_0x000107c3debc();
                            if ((int)lVar1 == (int)lVar2) {
                              func_0x000107c3deb8();
                              lVar1 = param_3;
                              func_0x000107c3deb8();
                              if ((int)param_1 == (int)lVar1) {
                                ppuVar6 = (undefined **)0x0;
                                goto LAB_1003ebaa0;
                              }
                              ppuVar6 = &PTR_PTR_11095ef38;
                            }
                            else {
                              ppuVar6 = &PTR_PTR_11095ef30;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            ppuVar6 = &PTR_PTR_11095eea0;
          }
        }
      }
    }
  }
LAB_1003eba94:
  ppuVar6 = (undefined **)*ppuVar6;
  func_0x000107c61174(ppuVar6);
LAB_1003ebaa0:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1003ebfc4; end: 1003ec137;  */

void FUN_1003ebfc4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_3;
  func_0x000107c61174(param_2);
  iVar4 = (int)uVar5;
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    iVar4 = (int)&uStack_80;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11095c330,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  puVar2 = puVar1;
  func_0x000107c60bd8();
  lVar3 = *(long *)(puVar2 + 0x20);
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (iVar4 != 0) {
    pcStack_88 = FUN_1003ec138;
    if (lVar3 != 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      (**(code **)(**(long **)(lVar3 + 8) + 0x18))
                (*(long **)(lVar3 + 8),&UNK_11095c2e0,&uStack_c0,1);
      puStack_a8 = (undefined1 *)&uStack_c0;
      FUN_10007e5dc(&puStack_a8);
    }
    return;
  }
  pcStack_88 = FUN_1003ec138;
  if (lVar3 != 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    (**(code **)(**(long **)(lVar3 + 8) + 0x18))(*(long **)(lVar3 + 8),&UNK_11095b4d0,&uStack_c0,1);
    puStack_a8 = (undefined1 *)&uStack_c0;
    FUN_10007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1003ec138; end: 1003ec14b; -[SCBlizzardEventLogger _logFrameStartGrapheneEvents:properties:] */

void FUN_1003ec138(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_11095c2e0,&uStack_40,1);
      puStack_28 = (undefined1 *)&uStack_40;
      FUN_10007e5dc(&puStack_28);
    }
    return;
  }
  if (lVar1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(lVar1 + 8) + 0x18))(*(long **)(lVar1 + 8),&UNK_11095b4d0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1003ec14c; end: 1003ec1c3;  */

void FUN_1003ec14c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b4d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1003ec1c4; end: 1003ec1f3; -[SCBlizzardEventList setBlizzardFrameStart:] */

void FUN_1003ec1c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003ec1f4; end: 1003ec697; -[SCBlizzardEventLogger _getFrameEvent:currentTimeMillis:] */

void FUN_1003ec1f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126d0418;
  func_0x000107c61160(PTR_PTR_1126d0418);
  lVar2 = param_4;
  func_0x000107c4f4ec(param_4);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c4c0a8();
  func_0x000107c53768(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c4f538(param_2);
  func_0x000107c58f70(puVar1);
  lVar2 = param_2;
  func_0x000107c438dc(param_2);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3eab0();
  func_0x000107c61180();
  func_0x000107c3fbb8();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c56c20(puVar1);
  lVar2 = param_4;
  func_0x000107c4f4ec(param_4);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c4223c();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c546cc(param_1,puVar1);
  lVar2 = param_4;
  func_0x000107c4f4ec(param_4);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c4223c();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c5a3d4(param_1,puVar1);
  puVar4 = PTR_PTR_1126d0420;
  lVar2 = param_4;
  func_0x000107c4f4ec(param_4);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c44094(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c54074(puVar1);
  lVar2 = param_4;
  func_0x000107c4f4ec(param_4);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c49804();
  func_0x000107c57200(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_4;
  func_0x000107c4f4ec(param_4);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  FUN_1003f2bb4();
  func_0x000107c3b190(param_2);
  func_0x000107c571f0(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_4;
  func_0x000107c4f4ec(param_4);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c3ebcc();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c556c4(puVar1);
  func_0x000107c3eaa8(param_4);
  func_0x000107c52d68(puVar1);
  lVar2 = param_4;
  func_0x000107c4f908();
  func_0x000107c61180();
  lVar3 = param_2;
  func_0x000107c3b8b0();
  if (lVar3 == 1) {
    lVar6 = lVar2;
    func_0x000107c5cb14();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar3 = lVar2;
      func_0x000107c44044(lVar2);
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126d0410;
      func_0x000107c3eaa8(param_4);
      func_0x000107c43f28(puVar4);
      func_0x000107c61180();
      func_0x000106aca17c(*(undefined8 *)(param_2 + 0x20),lVar3,puVar4,1);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c5729c(puVar1);
    func_0x000107c441bc(lVar2);
    func_0x000107c57294(puVar1);
    lVar5 = param_4;
  }
  else {
    lVar3 = param_2;
    func_0x000107c42aa0(param_2);
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c4fea0();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    func_0x000107c61170(lVar3);
    func_0x000107c4a894(param_2);
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c4f4ec(lVar5);
    func_0x000107c61180();
    lVar6 = param_2;
    func_0x000107c51f48(param_2);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_2);
    func_0x000107c57298(puVar1);
  }
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003ec698; end: 1003ec6ff; +[SCAPbDataEvent descriptor] */

void FUN_1003ec698(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b12f50,
                        &PTR____CFConstantStringClassReference_110e21078,
                        &PTR_s_snapchat_data_11316f8d8,&PTR_s_eventName_11316f9f0,0xf,0x60,0x1c);
    puRam00000001136c4d98 = puVar1;
  }
  return;
}



/* Entry: 1003ec700; end: 1003ec72b;  */

void FUN_1003ec700(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003ec72c; end: 1003ec733;  */

void FUN_1003ec72c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_1001d7cd0(0);
  func_0x000107c610f8();
  FUN_1003ecb94(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003ec734; end: 1003ec787;  */

void FUN_1003ec734(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_1001d7cd0(0);
  func_0x000107c610f8();
  FUN_1003ecb94(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003ec788; end: 1003ec793;  */

void FUN_1003ec788(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  puVar1 = PTR_PTR_1126a7880;
  func_0x000107c610f8();
  func_0x000107c47090();
  func_0x000107c615e8(uStack_48);
  func_0x000107c615e8(uStack_50);
  func_0x000107c615e8(uStack_58);
  func_0x000107c615e8(uStack_60);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003ec794; end: 1003ec85b;  */

void FUN_1003ec794(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  puVar1 = PTR_PTR_1126a7880;
  func_0x000107c610f8();
  func_0x000107c47090();
  func_0x000107c615e8(uStack_48);
  func_0x000107c615e8(uStack_50);
  func_0x000107c615e8(uStack_58);
  func_0x000107c615e8(uStack_60);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003ec85c; end: 1003ec863;  */

void FUN_1003ec85c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7888;
  func_0x000107c610f8();
  func_0x000107c45db0();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003ec864; end: 1003ec8c3;  */

void FUN_1003ec864(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7888;
  func_0x000107c610f8();
  func_0x000107c45db0();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003ec8c4; end: 1003ec937; -[SCCreativeToolsKillSwitchProvider initWithCircumstanceEngine:] */

undefined1 * FUN_1003ec8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7fd0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003ec938; end: 1003ecb57; -[SCCreativeToolsABProvider initWithKillSwitchProvider:circumstanceEngine:appStartExperimentReader:snapEditorTweaks:] */

undefined8 *
FUN_1003ec938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_78 = PTR_PTR_1126e7fc8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[6];
    puVar1[6] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_1053cd71c;
    puStack_98 = &UNK_110883680;
    func_0x000107c6111c(auStack_90,auStack_88);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_b8,auStack_88);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1003ecb58; end: 1003ecb93;  */

void FUN_1003ecb58(void)

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



/* Entry: 1003ecb94; end: 1003ecbdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ecb94(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11302ecd0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003ecbe0; end: 1003ed04b; -[CTPRepositoryServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ecbe0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10556fd9c;
  puStack_90 = &UNK_110897398;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar9;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_10556febc;
  puStack_b8 = &UNK_1108973c8;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112725ad8;
    func_0x000107c61148();
  }
  lVar3 = lVar11;
  func_0x000107c41270();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  lVar11 = param_1;
  FUN_1003ed054();
  func_0x000107c61180();
  lVar4 = lVar11;
  func_0x000107c4a7f0();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  lVar11 = param_1;
  FUN_1003ed054();
  func_0x000107c61180();
  lVar5 = lVar11;
  func_0x000107c42f64();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112725aac);
  *(undefined8 *)(param_1 + _DAT_112725aac) = 0;
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112725ab0);
  *(undefined8 *)(param_1 + _DAT_112725ab0) = 0;
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126ae720;
  puStack_120 = puVar9;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_10556ff78;
  puStack_108 = &UNK_1108973f8;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c61174(puVar1);
  puStack_100 = puVar1;
  func_0x000107c61174(lVar3);
  lStack_f8 = lVar3;
  func_0x000107c61174(lVar4);
  lStack_f0 = lVar4;
  func_0x000107c61174(lVar5);
  lStack_e8 = lVar5;
  func_0x000107c61174(puVar2);
  puStack_e0 = puVar2;
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_168 = puVar9;
  uStack_160 = 0xc2000000;
  puStack_158 = &UNK_105570300;
  puStack_150 = &UNK_110897428;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c61174(lVar5);
  lStack_148 = lVar5;
  func_0x000107c61174(puVar1);
  puStack_140 = puVar1;
  func_0x000107c61174(puVar2);
  puStack_138 = puVar2;
  func_0x000107c61174(lVar3);
  lStack_130 = lVar3;
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_170,auStack_80);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126bada8;
  func_0x000107c610f4(PTR_PTR_1126bada8);
  func_0x000107c47018();
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_170);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lStack_130);
  func_0x000107c61170(puStack_138);
  func_0x000107c61170(puStack_140);
  func_0x000107c61170(lStack_148);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_e0);
  func_0x000107c61170(lStack_e8);
  func_0x000107c61170(lStack_f0);
  func_0x000107c61170(lStack_f8);
  func_0x000107c61170(puStack_100);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1003ed04c; end: 1003ed053; -[CTKmpStorageServices dataPersistentService] */

undefined8 FUN_1003ed04c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003ed054; end: 1003ed077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ed054(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112725ac4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003ed078; end: 1003ed07f; -[CTPPersistenceServices itemsPersistenceService] */

undefined8 FUN_1003ed078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003ed080; end: 1003ed087; -[CTPPersistenceServices feedsPersistenceService] */

undefined8 FUN_1003ed080(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003ed088; end: 1003ed0d7;  */

void FUN_1003ed088(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 1003ed0d8; end: 1003ed1d3; -[CTPRepositoryServices initWithItemsRepository:feedsRepository:cacheClearingService:experiments:logger:] */

undefined1 *
FUN_1003ed0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126feea0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003ed1d4; end: 1003ed23f;  */

void FUN_1003ed1d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003ed240; end: 1003ed247;  */

void FUN_1003ed240(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ed248; end: 1003ed29b;  */

void FUN_1003ed248(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ed29c; end: 1003ed2a3;  */

void FUN_1003ed29c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100097c24();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1003ed32c(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ed2a4; end: 1003ed32b;  */

void FUN_1003ed2a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100097c24();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1003ed32c(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ed32c; end: 1003ed3fb;  */

void FUN_1003ed32c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_1003ed3fc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  FUN_1003ed41c();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ed3fc);
  (*pcVar1)();
}



/* Entry: 1003ed3fc; end: 1003ed41b;  */

void FUN_1003ed3fc(void)

{
  func_0x000107c61168(&PTR_PTR_112da63d0);
  return;
}



/* Entry: 1003ed41c; end: 1003ed57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ed41c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  FUN_1000285a8(0x112d4f910,&UNK_10d915830);
  func_0x000107c613fc();
  puVar1 = &UNK_100c58d54;
  FUN_1000bdd8c(&UNK_100c58d54,0);
  puVar2 = puVar1;
  FUN_1003a5b88();
  func_0x000107c61574(puVar1);
  FUN_100098880(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar2);
  puVar1 = puVar2;
  func_0x0001003ed5f8();
  func_0x000107c42c20(param_3);
  puVar3 = PTR_PTR_1126d40b0;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    lVar4 = *(long *)(param_2 + _DAT_113053888);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar5 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000107c4fc34(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1003ed57c; end: 1003ed643;  */

undefined * FUN_1003ed57c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c4d50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e6f1d8,
                        &UNK_10dde4124,&UNK_10dde4178,6,FUN_1003f2ba8,0);
    do {
      if (puRam00000001136c4d50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001136c4d50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c4d50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c4d50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c4d50;
}



/* Entry: 1003ed644; end: 1003ed697; +[SCPlayerManager sharedManager] */

void FUN_1003ed644(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730930 != -1) {
    FUN_10002a2fc(0x113730930,&PTR___NSConcreteGlobalBlock_110ad7308);
  }
  uVar1 = uRam0000000113730938;
  func_0x000107c61174(uRam0000000113730938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003ed698; end: 1003ed6c3;  */

void FUN_1003ed698(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d40b0;
  func_0x000107c610fc();
  uVar1 = puRam0000000113730938;
  puRam0000000113730938 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003ed6c4; end: 1003ed75b; -[SCPlayerManager init] */

undefined1 * FUN_1003ed6c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127003c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c44c44();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c44c44();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003ed75c; end: 1003ed7b7; -[SCShakeToReportInfoProviderRegistryImpl registerInternalLogProvider:] */

void FUN_1003ed75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x20);
  func_0x000107c3d798(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  func_0x000107c611f0(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003ed7b8; end: 1003ed7e3;  */

void FUN_1003ed7b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003ed7e4; end: 1003ed7eb;  */

void FUN_1003ed7e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ed7ec; end: 1003ed83f;  */

void FUN_1003ed7ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ed840; end: 1003ee203;  */

void FUN_1003ed840(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
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
  long lVar20;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_10023f3cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar15 = uStack_d8;
  func_0x000107c61174(uStack_d8);
  uVar16 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7fa0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar18 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar18 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0x6553657469766e69;
  func_0x000107c5fadc(0x6553657469766e69,0xee00736563697672);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar19);
  uVar18 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  lVar20 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc33d0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(uVar19);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar20 != 0) {
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    *(long *)(param_2 + 0x90) = lVar20;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ee204);
  (*pcVar1)();
}



/* Entry: 1003ee204; end: 1003ee247;  */

void FUN_1003ee204(void)

{
  long unaff_x20;
  
  FUN_1003ed840(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1003ee248; end: 1003ee24f;  */

void FUN_1003ee248(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x128);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ee250; end: 1003ee2a3;  */

void FUN_1003ee250(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x128);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ee2a4; end: 1003ef7f3;  */

void FUN_1003ee2a4(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar12;
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
  long lVar37;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_10023e560();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  uVar15 = uStack_78;
  func_0x000107c61174();
  uVar17 = uStack_80;
  func_0x000107c61174();
  uVar18 = uStack_88;
  func_0x000107c61174();
  uVar19 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar14 = uVar5;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x68) = uVar14;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  *(undefined8 *)(param_2 + 0xf8) = uStack_140;
  *(undefined8 *)(param_2 + 0x100) = uStack_148;
  *(undefined8 *)(param_2 + 0x108) = uStack_150;
  *(undefined8 *)(param_2 + 0x110) = uStack_158;
  *(undefined8 *)(param_2 + 0x118) = uStack_160;
  *(undefined8 *)(param_2 + 0x120) = uStack_168;
  FUN_1000285a8(0x112ddab18,&UNK_10d99f498);
  func_0x000107c610f8();
  uVar6 = uStack_138;
  func_0x000107c61174();
  uVar7 = uStack_b8;
  func_0x000107c61174();
  uVar8 = uStack_c0;
  func_0x000107c61174();
  uVar9 = uStack_c8;
  func_0x000107c61174();
  uVar10 = uStack_d0;
  func_0x000107c61174();
  uVar11 = uStack_d8;
  func_0x000107c61174();
  uVar21 = uStack_e0;
  func_0x000107c61174();
  uVar22 = uStack_e8;
  func_0x000107c61174();
  uVar23 = uStack_f0;
  func_0x000107c61174();
  uVar24 = uStack_f8;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_100);
  uVar25 = uStack_108;
  func_0x000107c61174();
  uVar26 = uStack_110;
  func_0x000107c61174();
  uVar27 = uStack_118;
  func_0x000107c61174();
  uVar28 = uStack_120;
  func_0x000107c61174();
  uVar29 = uStack_128;
  func_0x000107c61174();
  uVar30 = uStack_130;
  func_0x000107c61174();
  uVar31 = uStack_140;
  func_0x000107c61174();
  uVar32 = uStack_148;
  func_0x000107c61174();
  uVar33 = uStack_150;
  func_0x000107c61174();
  uVar34 = uStack_158;
  func_0x000107c61174();
  uVar35 = uStack_160;
  func_0x000107c61174();
  uVar36 = uStack_168;
  func_0x000107c61174();
  uVar14 = uStack_170;
  func_0x000107c6157c();
  FUN_10025a71c();
  puVar12 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar12;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar12;
  puVar12 = PTR_PTR_1126ba5e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef35740);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc33f0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc3410);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar16 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc3450);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef22380);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_100);
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c615e8(uStack_100);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x655378656c707564;
  func_0x000107c5fadc(0x655378656c707564,0xee00736563697672);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3470);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar14 = 0x112dca948;
  FUN_1000285a8(0x112dca948,&UNK_10d99f4a0);
  func_0x000107c60184();
  uVar20 = 0x5372657070696c66;
  func_0x000107c5fadc(0x5372657070696c66,0xef73656369767265);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar20);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3070);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efc3490);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efc34c0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc32e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc34f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3520);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3540);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar37 = *(long *)(param_2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar37 != 0) {
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c615e8(uStack_100);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61574(uStack_170);
    *(long *)(param_2 + 0x128) = lVar37;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ef7f4);
  (*pcVar1)();
}



/* Entry: 1003ef7f4; end: 1003ef857;  */

void FUN_1003ef7f4(void)

{
  long unaff_x20;
  
  FUN_1003ee2a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118));
  return;
}



/* Entry: 1003ef858; end: 1003ef85f;  */

void FUN_1003ef858(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ef860; end: 1003ef8b3;  */

void FUN_1003ef860(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ef8b4; end: 1003ef8c7;  */

void FUN_1003ef8b4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10020efa8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7f98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar3);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3350);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar11 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(lVar2 + 0x10);
  lVar12 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc3380);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(lVar2 + 0x50) = lVar12;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003efda4);
  (*pcVar1)();
}



/* Entry: 1003ef8c8; end: 1003efda3;  */

void FUN_1003ef8c8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10020efa8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7f98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar12);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar12);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar12);
  uVar10 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3350);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar10 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  lVar11 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc3380);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(param_2 + 0x50) = lVar11;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003efda4);
  (*pcVar1)();
}



/* Entry: 1003efda4; end: 1003efdab;  */

void FUN_1003efda4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003efdac; end: 1003efdff;  */

void FUN_1003efdac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003efe00; end: 1003efe0b;  */

void FUN_1003efe00(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001c99fc();
  func_0x000107c613fc();
  FUN_1003efea0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003efe0c; end: 1003efe9f;  */

void FUN_1003efe0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001c99fc();
  func_0x000107c613fc();
  FUN_1003efea0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1003efea0; end: 1003f0087;  */

void FUN_1003efea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7f70;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1003f0088; end: 1003f016b; -[SCAppUserLifecycleEventHandlerServiceProvider provide] */

void FUN_1003f0088(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba118;
  func_0x000107c610f4(PTR_PTR_1126ba118);
  func_0x000107c4570c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003f016c; end: 1003f01df; -[SCAppUserLifecycleEventHandlerServices initWithAppUserLifecycleEventHandlerFactory:] */

undefined1 * FUN_1003f016c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702f50;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f01e0; end: 1003f0213;  */

void FUN_1003f01e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003f0214; end: 1003f0517; -[SCFriendsFeedLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f0214(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1003f0a34;
  puStack_88 = &UNK_110892108;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar11 = (long)_DAT_112724c68;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  func_0x000107c61170(uVar8);
  puVar1 = PTR_PTR_1126ae720;
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10043c244;
  puStack_b0 = &UNK_110892138;
  func_0x000107c6111c(auStack_a8,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112724c6c);
  *(undefined **)(param_1 + _DAT_112724c6c) = puVar1;
  func_0x000107c61170(uVar8);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_d0,auStack_78);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ba0b8;
  func_0x000107c610f4(PTR_PTR_1126ba0b8);
  func_0x000107c46a88();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112724c70));
  lVar4 = param_1 + _DAT_112724c74;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c3dec0();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c40938();
  func_0x000107c61180();
  lVar10 = (long)_DAT_112724c78;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = lVar7;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  func_0x000107c3e7d8(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 1003f0518; end: 1003f0613; -[SCFriendsFeedLoggingServices initWithFriendsFeedReadyLogger:ghostToFeedLogger:feedPropertyLogger:sendToFeedLogger:] */

undefined1 *
FUN_1003f0518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126fd8e8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f0614; end: 1003f061b; -[SCAppUserLifecycleEventHandlerServices appUserLifecycleEventHandlerFactory] */

undefined8 FUN_1003f0614(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003f061c; end: 1003f065b;  */

void FUN_1003f061c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3ad94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1003f065c; end: 1003f07a7; -[SCAppUserLifecycleEventHandlerServiceProvider _appUserLifecycleHandlerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f065c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112724d4c;
    func_0x000107c61148(lVar7);
  }
  lVar1 = lVar7;
  func_0x000107c5da68(lVar7);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = param_1;
  FUN_1003f07a8(param_1);
  func_0x000107c61180();
  lVar2 = lVar7;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  puVar3 = PTR_PTR_1126ba120;
  func_0x000107c610f4(PTR_PTR_1126ba120);
  lVar4 = param_1;
  FUN_1003f07a8(param_1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3dfc4();
  func_0x000107c61180();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112724d50;
    func_0x000107c61148(lVar7);
  }
  lVar6 = lVar7;
  func_0x000107c5bcac(lVar7);
  func_0x000107c61180();
  func_0x000107c493c8(puVar3,param_2,lVar1,lVar2,lVar5,lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1003f07a8; end: 1003f07cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f07a8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112724d48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003f07cc; end: 1003f07eb; -[_TtC13SCSystemScope13SCSystemScope applicationStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f07cc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113091b78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


