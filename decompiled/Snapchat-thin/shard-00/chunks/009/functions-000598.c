/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b80d84; end: 100b80d8f; -[SCSCLensLoggerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b80d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130287a8;
  func_0x000107c61428(param_1 + _DAT_1130287a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b80d90; end: 100b80de3;  */

void FUN_100b80d90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b80de4; end: 100b80def; -[SCSCLensLoggerServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b80de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130287b0;
  func_0x000107c61428(param_1 + _DAT_1130287b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b80df0; end: 100b80e23; -[SCSCLensLoggerServicesSaberServiceProvider __safeProvide] */

void FUN_100b80df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b80e24();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b80e24; end: 100b80f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b80e24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b80f68();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_1130266f8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130287b8);
      *(long *)(unaff_x20 + _DAT_1130287b8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b80f0c; end: 100b80f17; -[SCSCLensLoggerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b80f0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130287a8;
  func_0x000107c61428(param_1 + _DAT_1130287a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b80f18; end: 100b80f5b;  */

void FUN_100b80f18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b80f5c; end: 100b80f67; -[SCSCLensLoggerServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b80f5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130287b0;
  func_0x000107c61428(param_1 + _DAT_1130287b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b80f68; end: 100b80fe3;  */

void FUN_100b80f68(undefined8 param_1)

{
  if (lRam00000001130248a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cf87c);
  return;
}



/* Entry: 100b80fe4; end: 100b81403; -[SCMixerNamespaceDocObjectStore _warmupNamespaces:] */

void FUN_100b80fe4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c3feb8();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar10);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c611ec(param_1 + 0x50);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c40808(param_3);
  func_0x000107c3e170();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(param_3);
  lVar5 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      uVar12 = *(undefined8 *)(lVar9 * 8);
      func_0x000107c3ef0c();
      func_0x000107c61180();
      lVar6 = *(long *)(param_1 + 0x48);
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar6 == 0) {
        func_0x000107c61174(uVar12);
        func_0x000107c61174(uVar11);
        puVar7 = puVar3;
        func_0x000107c4c280(puVar3);
        func_0x000107c61180();
        func_0x000107c3d798(puVar4);
        func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x48));
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar12);
      }
      func_0x000107c61170(uVar12);
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_3);
  func_0x000107c611f0(param_1 + 0x50);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(puVar4);
  func_0x000107c4e524(uVar12);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar2);
  lVar5 = param_3;
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c0b8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100b81404; end: 100b8140b;  */

void FUN_100b81404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_map_notFoundMarker__11260bba0,param_3,0);
  return;
}



/* Entry: 100b8140c; end: 100b8142b;  */

void FUN_100b8140c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c3ef0c(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8142c; end: 100b81463;  */

/* WARNING: Possible PIC construction at 0x000100b81440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b81450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b81444) */
/* WARNING: Removing unreachable block (ram,0x000100b81454) */

void FUN_100b8142c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100b81464; end: 100b8146f; -[SCScopeLifecycle disabledOptionalScopeContainer] */

void FUN_100b81464(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf80d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126df8a8,PTR_s_disabledContainer_1125bdd08);
  return;
}



/* Entry: 100b81470; end: 100b8148b; +[SCOptionalScopeContainer disabledContainer] */

void FUN_100b81470(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f4();
  func_0x000107c484e0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b8148c; end: 100b81577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8148c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee5b98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ee5ba0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b81578; end: 100b81597; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint init] */

void FUN_100b81578(void)

{
  FUN_100b8148c();
  return;
}



/* Entry: 100b81598; end: 100b81643; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setValue:forIvarName:] */

void FUN_100b81598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b81644(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b81644; end: 100b81a6f;  */

void FUN_100b81644(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x656d61436e69616d;
      if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
         (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c561a0();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef10ecd80)) ||
           (func_0x000107c605b8(0xd00000000000002e,0x800000010ef13280,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c561ac();
        }
        else {
          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0f1a8d0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010f0e5730,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == 0x6976726553706470) && (param_3 == -0x14ffffffff8c9a9d)) ||
                 (func_0x000107c605b8(0x6976726553706470,0xeb00000000736563,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c572bc();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0f1a790)) ||
                   (func_0x000107c605b8(0xd000000000000018,0x800000010f0e5870,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55ff4();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef0f1a770)) ||
                     (func_0x000107c605b8(0xd000000000000010,0x800000010f0e5890,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53f54();
                  }
                  else {
                    uVar2 = 0xd000000000000011;
                    if (((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef0f1a750)) &&
                       (func_0x000107c605b8(0xd000000000000011,0x800000010f0e58b0,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "ShoppingLensProductPickerEntryPoint/SCShoppingLensCarouselMainCameraDependencyEntryPoint.swift"
                                          ,0x5e,2,0x47,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b81a70);
                      (*pcVar1)();
                    }
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5a0e8();
                  }
                }
              }
              goto LAB_100b816d8;
            }
          }
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5401c();
        }
      }
      goto LAB_100b816d8;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100b816d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b81a70; end: 100b81a7b; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b81a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b60;
  func_0x000107c61428(param_1 + _DAT_112ee5b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b81a7c; end: 100b81ad7;  */

void FUN_100b81a7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de670;
  func_0x000107c610fc(PTR_PTR_1126de670);
  puVar2 = PTR_PTR_1126de678;
  func_0x000107c610f4(PTR_PTR_1126de678);
  func_0x000107c4667c();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b81ad8; end: 100b81b2b;  */

void FUN_100b81ad8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b81b2c; end: 100b81b37; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b81b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b68;
  func_0x000107c61428(param_1 + _DAT_112ee5b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b81b38; end: 100b81d8b; -[SCMixerFeedDocObjectStore initWithDocObjectContext:performer:lensDataConfigProvider:feedDataTransformer:timeProvider:feedContextProvider:] */

undefined1 *
FUN_100b81b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_112701778;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x58) = 0;
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b81d8c; end: 100b81d97; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setMainCameraScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b81d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b70;
  func_0x000107c61428(param_1 + _DAT_112ee5b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b81d98; end: 100b81da3; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setDependencyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b81d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b78;
  func_0x000107c61428(param_1 + _DAT_112ee5b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b81da4; end: 100b81e43; -[SCShoppingLensPDPServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100b81e20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b81e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b81da4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b5760;
  lVar2 = param_1 + _DAT_11271e1e0;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + _DAT_11271e1e4;
  func_0x000107c61148(lVar3);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  func_0x000107c3e844(puVar1,param_2,lVar2,lVar3,param_1,param_1,
                      *(undefined8 *)(param_1 + _DAT_11271e1e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b81e44; end: 100b82053; +[SCShoppingLensPDPServicesEntryPointHelper beginWithCameraUIServices:lensCarouselManagementServices:productBrowserLauncher:presenterDelegate:shoppingLensPDPServicesExposer:] */

void FUN_100b81e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61144(auStack_58,param_3);
  func_0x000107c61144(auStack_60,param_4);
  func_0x000107c61144(auStack_68,param_5);
  func_0x000107c61144(auStack_70,param_6);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c6111c(auStack_88,auStack_60);
  func_0x000107c6111c(auStack_80,auStack_68);
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b5770;
  func_0x000107c610f4(PTR_PTR_1126b5770);
  func_0x000107c47cf0();
  func_0x000107c42c20(param_7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b82054; end: 100b8209f;  */

/* WARNING: Possible PIC construction at 0x000100b82070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b82088: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b82074) */
/* WARNING: Removing unreachable block (ram,0x000100b8208c) */

void FUN_100b82054(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 100b820a0; end: 100b8214f; -[SCShoppingLensPDPServices initWithPDPPresenter:] */

undefined1 * FUN_100b820a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efb90;
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



/* Entry: 100b82150; end: 100b82277; -[SCMixerScheduledNamespaceManager namespacesToUpdateWithParameters:namespaceDataProvider:feedDataProvider:updateStrategy:feedUpdateStrategy:] */

void FUN_100b82150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_6);
  func_0x000107c4d410(param_4,param_2,uVar3);
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c4c280();
  func_0x000107c61180();
  uVar1 = param_6;
  func_0x000107c4d42c(param_6,param_2,uVar3,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_100c114b8;
  puStack_58 = &UNK_110c8ec58;
  uStack_50 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = uVar1;
  func_0x000107c4c280(uVar1,param_2,&puStack_70);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b82278; end: 100b8236b; -[SCMixerNamespaceDocObjectStore namespaceDataForNamespaces:] */

void FUN_100b82278(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c40808();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x50);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_100b82378;
    puStack_40 = &UNK_110c8fb48;
    lVar1 = param_3;
    lStack_38 = param_1;
    func_0x000107c3feb8(param_3,param_2,&puStack_58);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c40794();
    func_0x000107c61170(lVar1);
    func_0x000107c611f0(param_1 + 0x50);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100b8236c; end: 100b82377; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setPdpServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8236c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b80;
  func_0x000107c61428(param_1 + _DAT_112ee5b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b82378; end: 100b8249b;  */

void FUN_100b82378(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_2);
  uVar2 = param_2;
  func_0x000107c4d420(param_2);
  func_0x000107c61180();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c3c750();
  if (iVar1 == 0) {
    uVar4 = param_2;
    func_0x000107c3ef0c(param_2);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x000107c4d9e8(uVar5);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3b5b8(uVar3);
    func_0x000107c61180();
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100b8249c; end: 100b82533; -[SCShoppingLensLoadingIndicatorPresenterEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100b82510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b82514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8249c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b5798;
  lVar2 = param_1 + _DAT_11271e248;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + _DAT_11271e24c;
  func_0x000107c61148(lVar3);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  func_0x000107c3e84c(puVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + _DAT_11271e250));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b82534; end: 100b826a3; +[SCShoppingLensLoadingIndicatorPresenterEntryPointHelper beginWithCameraUIServices:lensCarouselManagementServices:shoppingLensLoadingIndicatorServicesExposer:] */

void FUN_100b82534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_48,param_3);
  func_0x000107c61144(auStack_50,param_4);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_48);
  func_0x000107c6111c(auStack_58,auStack_50);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b57a8;
  func_0x000107c610f4(PTR_PTR_1126b57a8);
  func_0x000107c474a0();
  func_0x000107c42c20(param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b826a4; end: 100b82717; -[SCShoppingLensLoadingIndicatorServices initWithLoadingIndicatorPresenter:] */

undefined1 * FUN_100b826a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efb88;
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



/* Entry: 100b82718; end: 100b82b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b82718(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auStack_2b8 [24];
  undefined ***pppuStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  long lStack_268;
  undefined4 uStack_25c;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 auStack_1d8 [3];
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined1 uStack_188;
  byte bStack_187;
  byte bStack_186;
  byte bStack_185;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_e0;
  byte bStack_df;
  byte bStack_de;
  byte bStack_dd;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61158(PTR_PTR_1126de810);
  if (lVar5 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_130,lVar5);
  }
  puVar6 = &uStack_1a1;
  lStack_268 = lVar5;
  func_0x000100bb7448();
  bVar1 = puVar6[0x19];
  bVar2 = puVar6[0x1a];
  bVar3 = puVar6[0x1b];
  uStack_198 = 2;
  uStack_188 = 0;
  ppuStack_1a0 = &PTR_DAT_110862700;
  puStack_158 = (undefined *)0x0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  puVar7 = &uStack_221;
  bStack_187 = bVar1;
  bStack_186 = bVar2;
  bStack_185 = bVar3;
  puStack_168 = puVar6;
  func_0x000100bb7448(puVar7);
  lVar13 = *(long *)(param_1 + 0x28);
  func_0x000107c61174(lVar13);
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  lVar5 = lVar13;
  func_0x000107c40808(lVar13);
  FUN_1004c2bb4(&uStack_240,lVar5);
  lStack_218 = 0;
  ppuStack_220 = (undefined **)0x0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  func_0x000107c61174(lVar13);
  lVar5 = lVar13;
  func_0x000107c4080c();
  if (lVar5 != 0) {
    lVar15 = *plStack_210;
    do {
      lVar12 = 0;
      do {
        if (*plStack_210 != lVar15) {
          func_0x000107c61128(lVar13);
        }
        puVar14 = *(undefined8 **)(lStack_218 + lVar12 * 8);
        func_0x000107c61174(puVar14);
        puStack_258 = puVar14;
        FUN_1004c2d3c(&uStack_240,&puStack_258);
        func_0x000107c61170(puStack_258);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar13;
      func_0x000107c4080c();
    } while (lVar5 != 0);
  }
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar13);
  FUN_1004c2e3c(&ppuStack_220,0xc,puVar7,&uStack_240);
  bStack_dd = bVar3 & uStack_208._3_1_;
  bStack_df = (bVar1 | uStack_208._1_1_) & 1;
  bStack_de = (bVar2 | uStack_208._2_1_) & 1;
  uStack_f0 = 4;
  uStack_e0 = 0;
  ppuStack_f8 = &PTR_DAT_1108629c8;
  pppuStack_c0 = &ppuStack_1a0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  plStack_90 = (long *)0x0;
  puStack_258 = (undefined8 *)0x0;
  puStack_250 = (undefined8 *)0x0;
  uStack_248 = 0;
  uStack_25c = 0;
  puVar14 = &uStack_130;
  ppuVar11 = &puStack_258;
  pppuStack_b8 = &ppuStack_220;
  FUN_1000e77a0(puVar14,&ppuStack_f8,ppuVar11,&uStack_25c);
  func_0x000107c61180();
  if (puStack_258 != (undefined8 *)0x0) {
    puStack_250 = puStack_258;
    func_0x000107c60e14();
  }
  plVar4 = plStack_90;
  ppuStack_f8 = &PTR_DAT_1108629c8;
  plStack_90 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_98;
  plStack_98 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_b0 != 0) {
    func_0x000107c60e14();
  }
  plVar4 = plStack_1b8;
  ppuStack_220 = &PTR_DAT_110862700;
  plStack_1b8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_258 = auStack_1d8;
  FUN_100105004(&puStack_258);
  puStack_258 = &uStack_240;
  FUN_100105004(&puStack_258);
  plVar4 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_110862700;
  plStack_138 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  ppuStack_220 = &puStack_158;
  FUN_100105004(&ppuStack_220);
  FUN_1000e76e0(&uStack_108);
  func_0x000107c61170(uStack_118);
  func_0x000107c61170(uStack_120);
  func_0x000107c61170(lStack_268);
  puVar8 = puVar14;
  func_0x000107c3e1b8();
  func_0x000107c61180();
  puVar9 = puVar14;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar14);
  func_0x000107c60bd8(puVar9);
  puVar10 = puVar9;
  func_0x000104bd46a0(puVar9);
  lVar5 = _DAT_112ee5b88;
  pcStack_278 = FUN_100b82b40;
  pppuStack_2a0 = &ppuStack_220;
  puStack_298 = puVar9;
  puStack_290 = puVar14;
  puStack_288 = puVar8;
  puStack_280 = &stack0xfffffffffffffff0;
  func_0x000107c61428((long)puVar10 + _DAT_112ee5b88,auStack_2b8,1,0);
  func_0x000107c61604((long)puVar10 + lVar5,ppuVar11);
  return;
}



/* Entry: 100b82b40; end: 100b82b4b; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setLoadingIndicatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b82b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b88;
  func_0x000107c61428(param_1 + _DAT_112ee5b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b82b4c; end: 100b82be3; -[SCShoppingLensDeepLinkHandlerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100b82bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b82bc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b82b4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b5780;
  lVar2 = param_1 + _DAT_11271e218;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + _DAT_11271e21c;
  func_0x000107c61148(lVar3);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  func_0x000107c3e848(puVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + _DAT_11271e220));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b82be4; end: 100b82d53; +[SCShoppingLensDeepLinkHandlerEntryPointHelper beginWithCameraUIServices:lensCarouselManagementServices:shoppingLensDeepLinkServicesExposer:] */

void FUN_100b82be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_48,param_3);
  func_0x000107c61144(auStack_50,param_4);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_48);
  func_0x000107c6111c(auStack_58,auStack_50);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b5790;
  func_0x000107c610f4(PTR_PTR_1126b5790);
  func_0x000107c4644c();
  func_0x000107c42c20(param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b82d54; end: 100b82dc7; -[SCShoppingLensDeepLinkServices initWithDeepLinkPresenter:] */

undefined1 * FUN_100b82d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efb80;
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



/* Entry: 100b82dc8; end: 100b82dd3; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setDeeplinkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b82dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b90;
  func_0x000107c61428(param_1 + _DAT_112ee5b90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b82dd4; end: 100b82e6f; -[SCShoppingLensTwoDTryOnPresenterEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100b82e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b82e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b82dd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b57b0;
  lVar2 = param_1 + _DAT_11271e298;
  func_0x000107c61148(lVar2);
  lVar3 = param_1 + _DAT_11271e29c;
  func_0x000107c61148(lVar3);
  func_0x000107c4aeb0();
  func_0x000107c61180();
  func_0x000107c3e850(puVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + _DAT_11271e2a0),
                      *(undefined8 *)(param_1 + _DAT_11271e2a4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b82e70; end: 100b82ffb; +[SCShoppingLensTwoDTryOnPresenterEntryPointHelper beginWithCameraUIServices:lensCarouselManagementServices:twoDTryOnScopeExposer:shoppingLensTwoDTryOnServicesExposer:] */

void FUN_100b82e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61144(auStack_58,param_3);
  func_0x000107c61144(auStack_60,param_4);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_58);
  func_0x000107c6111c(auStack_68,auStack_60);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b57c0;
  func_0x000107c610f4(PTR_PTR_1126b57c0);
  func_0x000107c4644c();
  func_0x000107c42c20(param_6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_68);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b82ffc; end: 100b8306f; -[SCShoppingLensTwoDTryOnServices initWithDeepLinkPresenter:] */

undefined1 * FUN_100b82ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126efb98;
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



/* Entry: 100b83070; end: 100b8307b; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint setTwoDTryOnServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b83070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5b98;
  func_0x000107c61428(param_1 + _DAT_112ee5b98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8307c; end: 100b830a3; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint begin] */

void FUN_100b8307c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b830a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b830a4; end: 100b83463;  */

/* WARNING: Possible PIC construction at 0x000100b83288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b83320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b833ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b833bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b833cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b833dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b833ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b83434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b832b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b83438) */
/* WARNING: Removing unreachable block (ram,0x000100b833f0) */
/* WARNING: Removing unreachable block (ram,0x000100b833e0) */
/* WARNING: Removing unreachable block (ram,0x000100b833d0) */
/* WARNING: Removing unreachable block (ram,0x000100b833c0) */
/* WARNING: Removing unreachable block (ram,0x000100b833b0) */
/* WARNING: Removing unreachable block (ram,0x000100b83324) */
/* WARNING: Removing unreachable block (ram,0x000100b8328c) */
/* WARNING: Removing unreachable block (ram,0x000100b83290) */
/* WARNING: Removing unreachable block (ram,0x000100b832b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b830a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar7 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar7 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4c144();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4c150();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c417b8();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c4e4b4();
        func_0x000107c61180();
        lVar5 = unaff_x20;
        func_0x000107c4b7d4();
        func_0x000107c61180();
        lVar6 = unaff_x20;
        func_0x000107c41534();
        func_0x000107c61180();
        func_0x000107c5d0d8();
        func_0x000107c61180();
        FUN_100b83508();
        func_0x000107c613fc();
        lVar1 = _DAT_112ee60e8;
        func_0x000107c61428(lVar3 + _DAT_112ee60e8,auStack_80,1,0);
        func_0x000107c61604(lVar3 + lVar1,lVar4);
        lVar1 = _DAT_112ee60f0;
        func_0x000107c61428(lVar3 + _DAT_112ee60f0,auStack_98,1,0);
        func_0x000107c61604(lVar3 + lVar1,lVar6);
        lVar1 = _DAT_112ee60f8;
        func_0x000107c61428(lVar3 + _DAT_112ee60f8,auStack_b0,1,0);
        func_0x000107c61604(lVar3 + lVar1,lVar5);
        lVar1 = _DAT_112ee6100;
        func_0x000107c61428(lVar3 + _DAT_112ee6100,auStack_c8,1,0);
        func_0x000107c61604(lVar3 + lVar1,unaff_x20);
        lVar7 = *(long *)(lVar7 + _DAT_1130353e0);
        func_0x000107c5aaac();
        func_0x000107c61180();
        lVar1 = _DAT_112ee6108;
        if (lVar7 == 0) {
          func_0x000107c61428(lVar3 + _DAT_112ee6108,auStack_e0,1,0);
          func_0x000107c61604(lVar3 + lVar1,0);
          func_0x000107c615e8(0);
          func_0x000107c4aeb0(lVar2);
          func_0x000107c61180();
          func_0x000107c4aeb4();
          func_0x000107c61180();
          lVar7 = lVar2;
        }
        else {
          func_0x000107c42e38(lVar7);
          func_0x000107c61180();
          func_0x000107c49d68();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 100b83464; end: 100b8346f; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b83464(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b60;
  func_0x000107c61428(param_1 + _DAT_112ee5b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b83470; end: 100b834b3;  */

void FUN_100b83470(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b834b4; end: 100b834bf; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b834b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b68;
  func_0x000107c61428(param_1 + _DAT_112ee5b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b834c0; end: 100b834cb; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint mainCameraScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b834c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b70;
  func_0x000107c61428(param_1 + _DAT_112ee5b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b834cc; end: 100b834d7; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint dependencyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b834cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b78;
  func_0x000107c61428(param_1 + _DAT_112ee5b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b834d8; end: 100b834e3; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint pdpServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b834d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b80;
  func_0x000107c61428(param_1 + _DAT_112ee5b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b834e4; end: 100b834ef; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint loadingIndicatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b834e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b88;
  func_0x000107c61428(param_1 + _DAT_112ee5b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b834f0; end: 100b834fb; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint deeplinkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b834f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b90;
  func_0x000107c61428(param_1 + _DAT_112ee5b90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b834fc; end: 100b83507; -[SCShoppingLensCarouselMainCameraDependencyEntryPoint twoDTryOnServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b834fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5b98;
  func_0x000107c61428(param_1 + _DAT_112ee5b98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b83508; end: 100b83527;  */

void FUN_100b83508(void)

{
  func_0x000107c61168(&PTR_PTR_112ee57a0);
  return;
}



/* Entry: 100b83528; end: 100b8352f; -[SCMutablePublicCameraFeatureCatalog shoppingLensProductPicker] */

undefined8 FUN_100b83528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 100b83530; end: 100b8355f;  */

bool FUN_100b83530(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100b83560; end: 100b8367b; -[SCCoreDataThreadHealthMonitor initWithCoreDataObjectContext:circumstanceEngine:crashLogger:logger:] */

undefined1 *
FUN_100b83560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112709c00;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = &UNK_10f799410;
    func_0x000107c60f50(&UNK_10f799410,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0xbff0000000000000;
    func_0x000107c3bffc(puVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b8367c; end: 100b836f3;  */

void FUN_100b8367c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c8930;
    func_0x000107c610f4(PTR_PTR_1126c8930);
    lVar1 = param_1 + 0x20;
    func_0x000107c61148(lVar1);
    func_0x000107c480b8(puVar2,param_2,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b836f4; end: 100b8378f; -[SCCoreDataThreadHealthMonitor _observeAppStateChanges] */

/* WARNING: Possible PIC construction at 0x000100b83744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b83748) */

void FUN_100b836f4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100b83790; end: 100b83803; -[SCFeatureShoppingLensProductPickerImpl initWithPreviewPresenterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100b83790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f02e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_1127423e8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b83804; end: 100b83973; +[SCMemoriesGrapheneLogger fireGalleryCoreDataDBOpen:grapheneRegistry:] */

void FUN_100b83804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b2438;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c407b8(puVar1);
  func_0x000107c61180();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ef88f8;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c1ec(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  func_0x000107c61180();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_50 = ppuVar2;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1);
  func_0x000107c61180();
  func_0x000107c4449c(param_1,param_2,puVar1,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(puVar1);
  uVar4 = param_4;
  func_0x000107c5c734(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  uVar5 = uVar4;
  func_0x000107c4cba0(uVar4);
  func_0x000107c61180();
  func_0x000107c45314();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c610f4(PTR_PTR_1126b2438);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b83974; end: 100b8399f; +[SCGrapheneMemoriesMetric coreDataDbOpen] */

void FUN_100b83974(void)

{
  func_0x000107c610f4(PTR_PTR_1126b2438);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b839a0; end: 100b83b27; +[SCMemoriesGrapheneLogger grapheneMetricWithMetric:dimensionsAndValues:] */

/* WARNING: Possible PIC construction at 0x000100b83aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b83ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b83b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b83ae8) */
/* WARNING: Removing unreachable block (ram,0x000100b83b24) */
/* WARNING: Removing unreachable block (ram,0x000100b83b00) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100b83aac) */
/* WARNING: Removing unreachable block (ram,0x000100b83b80) */

void FUN_100b839a0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar2 = param_4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar2 == 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_4);
      return;
    }
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_4);
      }
      uVar5 = *(ulong *)(uVar6 * 8);
      uVar3 = param_4;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c6115c(uVar5,puVar4);
      if ((uVar5 & 1) != 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar5 = uVar3;
        func_0x000107c6115c(uVar3,puVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c5e508(param_3);
          func_0x000107c61180();
          param_4 = param_3;
          goto code_r0x000107c61170;
        }
      }
      func_0x000107c61170(uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
    uVar2 = param_4;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 100b83b28; end: 100b83bb7;  */

/* WARNING: Possible PIC construction at 0x000100b83b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b83b80) */

void FUN_100b83b28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126de8e8;
  func_0x000107c61160(PTR_PTR_1126de8e8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c40794(uVar2);
  func_0x000107c4f2b4(puVar1,param_2,uVar2,0x19,&PTR___NSConcreteGlobalBlock_110c8fc78);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100b83bb8; end: 100b83dc7; -[SCBatchConcurrentProcessor processItems:QoS:block:] */

undefined *
FUN_100b83bb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 *puStack_60;
  undefined4 uStack_54;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (((param_3 != 0) && (param_5 != (undefined *)0x0)) &&
     (lVar1 = param_3, func_0x000107c40808(), lVar1 != 0)) {
    lVar1 = param_3;
    func_0x000107c40808();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (lVar1 == 1) {
      lVar1 = param_3;
      func_0x000107c43638(param_3);
      func_0x000107c61180();
      puVar2 = param_5;
      (**(code **)(param_5 + 0x10))(param_5,lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      puVar3 = PTR____NSArray0__struct_11034ab48;
      if (puVar2 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_50 = puVar2;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
      }
    }
    else {
      func_0x000107c40808(param_3);
      func_0x000107c3e170();
      func_0x000107c61180();
      uStack_54 = 0;
      lVar1 = param_3;
      func_0x000107c40808(param_3);
      FUN_1000819a8(param_4,0);
      func_0x000107c61180();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_100b84768;
      puStack_80 = &UNK_110c8e498;
      func_0x000107c61174(param_5);
      puStack_68 = param_5;
      func_0x000107c61174(param_3);
      puStack_60 = &uStack_54;
      lStack_78 = param_3;
      puStack_70 = puVar2;
      func_0x000107c61174(puVar2);
      func_0x000107c60f24(lVar1,param_4,&puStack_98);
      func_0x000107c61170(param_4);
      puVar3 = puVar2;
      func_0x000107c40794(puVar2);
      func_0x000107c61170(puStack_70);
      func_0x000107c61170(lStack_78);
      func_0x000107c61170(puStack_68);
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    return (undefined *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 100b83dc8; end: 100b83dcf; -[SCFeature isFeatureEnabled] */

undefined8 FUN_100b83dc8(void)

{
  return 1;
}



/* Entry: 100b83dd0; end: 100b83e0f;  */

void FUN_100b83dd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3af54();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b83e10; end: 100b83e2b;  */

void FUN_100b83e10(long param_1,long param_2)

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



/* Entry: 100b83e2c; end: 100b83e73;  */

void FUN_100b83e2c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 100b83e74; end: 100b83e7b;  */

void FUN_100b83e74(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_70;
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c3d14c();
    func_0x000107c61180();
    pcStack_50 = FUN_100b84720;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100b8462c;
    puStack_58 = &UNK_11058d998;
    func_0x000107c60bc4(&puStack_70);
    lVar3 = lVar1;
    func_0x000107c3feb8(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(unaff_x20 + 0x10,&puStack_70,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c615e8(param_1);
    }
    else {
      lVar4 = param_1;
      func_0x000107c4b2e0(param_1);
      func_0x000107c61180();
      FUN_100b845a4(lVar3,lVar4);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 100b83e7c; end: 100b83fa7;  */

void FUN_100b83e7c(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_70;
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c3d14c();
    func_0x000107c61180();
    pcStack_50 = FUN_100b84720;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100b8462c;
    puStack_58 = &UNK_11058d998;
    func_0x000107c60bc4(&puStack_70);
    lVar3 = lVar1;
    func_0x000107c3feb8(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(param_2 + 0x10,&puStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c615e8(param_1);
    }
    else {
      lVar1 = param_1;
      func_0x000107c4b2e0(param_1);
      func_0x000107c61180();
      FUN_100b845a4(lVar3,lVar1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 100b83fa8; end: 100b83fbf;  */

void FUN_100b83fa8(long param_1,long param_2)

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



/* Entry: 100b83fc0; end: 100b845a3; -[SCCloudSyncServiceProvider _buildCloudSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b83fc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uStack_140;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126d8218;
  func_0x000107c610f4();
  if (param_1 == 0) {
    uStack_70 = 0;
    lVar27 = 0;
  }
  else {
    uStack_70 = param_1 + _DAT_112770f54;
    func_0x000107c61148();
    lVar27 = param_1 + _DAT_112770f40;
    func_0x000107c61148();
  }
  lVar2 = lVar27;
  func_0x000107c4cb80();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112770f28;
    func_0x000107c61148();
  }
  lVar3 = lVar28;
  func_0x000107c5c5b0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112770f2c;
    func_0x000107c61148();
  }
  lVar4 = lVar29;
  func_0x000107c4d600();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112770f24;
    func_0x000107c61148();
  }
  lVar5 = lVar30;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112770f30;
    func_0x000107c61148();
  }
  lVar6 = lVar31;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112770f5c;
    func_0x000107c61148();
  }
  lVar7 = lVar32;
  func_0x000107c43c74();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112770f34;
    func_0x000107c61148();
  }
  lVar8 = lVar33;
  func_0x000107c5dac4();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126bc5e0;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_112770f3c;
    func_0x000107c61148();
  }
  lVar10 = lVar34;
  func_0x000107c4d598();
  func_0x000107c61180();
  lVar11 = param_1;
  func_0x000100b85d30();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c407b4();
  func_0x000107c61180();
  lVar13 = param_1;
  func_0x000100b85d30();
  func_0x000107c61180();
  lVar14 = lVar13;
  func_0x000107c3e1e4();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_140 = 0;
    lVar35 = 0;
  }
  else {
    uStack_140 = param_1 + _DAT_112770f44;
    func_0x000107c61148();
    lVar35 = param_1 + _DAT_112770f48;
    func_0x000107c61148();
  }
  lVar15 = lVar35;
  func_0x000107c5b424();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_112770f4c;
    func_0x000107c61148();
  }
  lVar16 = lVar36;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_112770f50;
    func_0x000107c61148();
  }
  lVar17 = lVar37;
  func_0x000107c4cce0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_112770f58;
    func_0x000107c61148();
  }
  lVar18 = lVar38;
  func_0x000107c3e5e0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_112770f20;
    func_0x000107c61148();
  }
  lVar19 = lVar39;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar20 = param_1;
  FUN_100b85d98();
  func_0x000107c61180();
  lVar21 = lVar20;
  func_0x000107c4cab4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_112770f64;
    func_0x000107c61148();
  }
  lVar22 = lVar40;
  func_0x000107c4121c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_112770f68;
    func_0x000107c61148();
  }
  lVar23 = lVar41;
  func_0x000107c3e5f8();
  func_0x000107c61180();
  lVar24 = param_1;
  func_0x000107c3ae70();
  func_0x000107c61180();
  lVar25 = 0;
  if (param_1 != 0) {
    lVar25 = param_1 + _DAT_112770f6c;
    func_0x000107c61148();
  }
  lVar26 = lVar25;
  func_0x000107c5c6b8();
  func_0x000107c61180();
  func_0x000107c46508(puVar1,param_2,uStack_70,lVar2,lVar3,lVar4,10,lVar5,lVar6,lVar7,lVar8,puVar9,
                      lVar10,lVar12,lVar14,uStack_140,lVar15,lVar16,lVar17,lVar18,lVar19,lVar21,
                      lVar22,lVar23,lVar24,lVar26);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar41);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar40);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(uStack_140);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b845a4; end: 100b8462b;  */

/* WARNING: Possible PIC construction at 0x000100b845ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b845f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b845a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c5c310(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_112ee6110));
  func_0x000107c61180();
  func_0x000107c3e924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b8462c; end: 100b8471f;  */

void FUN_100b8462c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    FUN_1006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    FUN_100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100b84720; end: 100b84767;  */

void FUN_100b84720(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    func_0x000100c70ba8();
  }
  *param_1 = param_2;
  param_1[3] = lVar1;
  return;
}



/* Entry: 100b84768; end: 100b84807;  */

/* WARNING: Possible PIC construction at 0x000100b847b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b847bc) */
/* WARNING: Removing unreachable block (ram,0x000100b847c0) */
/* WARNING: Removing unreachable block (ram,0x000100b847e0) */

void FUN_100b84768(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4d9a4(uVar1,param_2,param_2);
  func_0x000107c61180();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b84808; end: 100b84827;  */

void FUN_100b84808(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c40aa4(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b84828; end: 100b84837; -[SCMemoriesSyncThumbnailGeneratorServices syncThumbnailGenerator] */

undefined8 FUN_100b84828(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b84838; end: 100b8485b;  */

void FUN_100b84838(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b8485c; end: 100b848af; +[SCAPIURLSessionBackgroundTaskResults shared] */

void FUN_100b8485c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7160 != -1) {
    FUN_10002a2fc(0x1137f7160,&PTR___NSConcreteGlobalBlock_110d25050);
  }
  uVar1 = uRam00000001137f7168;
  func_0x000107c61174(uRam00000001137f7168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b848b0; end: 100b848df;  */

void FUN_100b848b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bc5e0;
  func_0x000107c610f4();
  func_0x000107c45428();
  uVar1 = puRam00000001137f7168;
  puRam00000001137f7168 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b848e0; end: 100b848ff; -[SCBackgroundTaskResultsListenerAnnouncer .cxx_construct] */

void FUN_100b848e0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 100b84900; end: 100b84a0b; -[SCAPIURLSessionBackgroundTaskResults initForSingleton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100b84900(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706538;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x000107c5ba34();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4198c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c41988();
      func_0x000107c61180();
    }
    else {
      puVar2 = puVar3;
      func_0x000107c4d2d4();
    }
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e940);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e940) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e944);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e944) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b84a0c; end: 100b84b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b84a0c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bc88,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3bc90) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b84b5c; end: 100b84b7b; -[SCSponsoredLensPlayablesEntryPoint init] */

void FUN_100b84b5c(void)

{
  FUN_100b84a0c();
  return;
}



/* Entry: 100b84b7c; end: 100b84c27; -[SCSponsoredLensPlayablesEntryPoint setValue:forIvarName:] */

void FUN_100b84b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b84c28(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100b85298(auStack_50);
  return;
}



/* Entry: 100b84c28; end: 100b85237;  */

void FUN_100b84c28(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar3 & 1) != 0
     )) {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar3 = 0x656d61436e69616d;
    if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
       (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
       (uVar3 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561a0();
    }
    else {
      uVar3 = 0;
      if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ecf90)) ||
         (uVar2 = uVar3,
         func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef10ecd80)) ||
           (func_0x000107c605b8(0xd00000000000002e,0x800000010ef13280,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c561ac();
        }
        else {
          uVar2 = 0xd000000000000015;
          if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10ecd50)) ||
             (func_0x000107c605b8(0xd000000000000015,0x800000010ef132b0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55f2c();
          }
          else {
            if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10ecd30)) {
              uVar2 = 0xd000000000000013;
              func_0x000107c605b8(0xd000000000000013,0x800000010ef132d0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
                   (func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
                   (uVar3 & 1) != 0)) {
                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c536e0();
                }
                else {
                  uVar3 = 0;
                  if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10ecd10)) ||
                     (func_0x000107c605b8(0xd000000000000020,0x800000010ef132f0,param_2,param_3,0),
                     (uVar3 & 1) != 0)) {
                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c527b4();
                  }
                  else {
                    uVar3 = 0xd000000000000017;
                    if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ecce0)) ||
                       (func_0x000107c605b8(0xd000000000000017,0x800000010ef13320,param_2,param_3,0)
                       , (uVar3 & 1) != 0)) {
                      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c522ac();
                    }
                    else {
                      uVar3 = 0xd00000000000001f;
                      if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef10eccc0)) ||
                         (func_0x000107c605b8(0xd00000000000001f,0x800000010ef13340,param_2,param_3,
                                              0), (uVar3 & 1) != 0)) {
                        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c5235c();
                      }
                      else {
                        uVar3 = 0xd00000000000001d;
                        if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10ecca0))
                           || (func_0x000107c605b8(0xd00000000000001d,0x800000010ef13360,param_2,
                                                   param_3,0), (uVar3 & 1) != 0)) {
                          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c59674();
                        }
                        else {
                          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10ecc80))
                          {
                            uVar3 = 0xd000000000000013;
                            func_0x000107c605b8(0xd000000000000013,0x800000010ef13380,param_2,
                                                param_3,0);
                            if ((uVar3 & 1) == 0) {
                              uVar3 = 0;
                              if (((param_2 != -0x2fffffffffffffe6) ||
                                  (param_3 != -0x7ffffffef10ecc60)) &&
                                 (func_0x000107c605b8(0xd00000000000001a,0x800000010ef133a0,param_2,
                                                      param_3,0), (uVar3 & 1) == 0)) {
                                func_0x000107c602fc(0x15);
                                func_0x000107c6142c(0xe000000000000000);
                                func_0x000107c5fb78(param_2,param_3);
                                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                    0x800000010ef0fc20,
                                                                                                        
                                                  "SponsoredLensPlayablesImplementation/SCSponsoredLensPlayablesEntryPoint.swift"
                                                  ,0x4d,2,100,0);
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x100b85238);
                                (*pcVar1)();
                              }
                              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c523a4();
                              goto LAB_100b84cb8;
                            }
                          }
                          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c53b90();
                        }
                      }
                    }
                  }
                }
                goto LAB_100b84cb8;
              }
            }
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55cc0();
          }
        }
      }
    }
  }
LAB_100b84cb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b85238; end: 100b85243; -[SCSponsoredLensPlayablesEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc28;
  func_0x000107c61428(param_1 + _DAT_112d3bc28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85244; end: 100b85297;  */

void FUN_100b85244(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85298; end: 100b852b7;  */

void FUN_100b85298(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100b852ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100b852b8; end: 100b852c3; -[SCSponsoredLensPlayablesEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b852b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc30;
  func_0x000107c61428(param_1 + _DAT_112d3bc30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b852c4; end: 100b852cf; -[SCSponsoredLensPlayablesEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b852c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc38;
  func_0x000107c61428(param_1 + _DAT_112d3bc38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b852d0; end: 100b852db; -[SCSponsoredLensPlayablesEntryPoint setMainCameraScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b852d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc40;
  func_0x000107c61428(param_1 + _DAT_112d3bc40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b852dc; end: 100b852e7; -[SCSponsoredLensPlayablesEntryPoint setLensesFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b852dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc48;
  func_0x000107c61428(param_1 + _DAT_112d3bc48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


