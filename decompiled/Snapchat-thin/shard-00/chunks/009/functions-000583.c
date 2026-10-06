/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b49a1c; end: 100b49a6f;  */

void FUN_100b49a1c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b49a70; end: 100b49a7b; -[SCSCMainCameraPresentationServicesSaberEntryPoint setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2470;
  func_0x000107c61428(param_1 + _DAT_112ef2470,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b49a7c; end: 100b49adf; -[SCSCMainCameraPresentationServicesSaberEntryPoint setSCMainCameraPresentationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2478;
  func_0x000107c61428(param_1 + _DAT_112ef2478,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b49ae0; end: 100b49b07; -[SCSCMainCameraPresentationServicesSaberEntryPoint begin] */

void FUN_100b49ae0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b49b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b49b08; end: 100b49c8b;  */

/* WARNING: Possible PIC construction at 0x000100b49c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b49c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b49c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b49c0c) */
/* WARNING: Removing unreachable block (ram,0x000100b49c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49b08(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50f94();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b49d30();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef21b8);
        *(undefined8 *)(lVar2 + _DAT_112ef0a58) = uVar6;
        *(long *)(lVar2 + _DAT_112ef0a60) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef0a60);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b49c8c; end: 100b49c97; -[SCSCMainCameraPresentationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49c8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2468;
  func_0x000107c61428(param_1 + _DAT_112ef2468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b49c98; end: 100b49cdb;  */

void FUN_100b49c98(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b49cdc; end: 100b49ce7; -[SCSCMainCameraPresentationServicesSaberEntryPoint mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49cdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2470;
  func_0x000107c61428(param_1 + _DAT_112ef2470,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b49ce8; end: 100b49d2f; -[SCSCMainCameraPresentationServicesSaberEntryPoint sCMainCameraPresentationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49ce8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2478;
  func_0x000107c61428(param_1 + _DAT_112ef2478,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b49d30; end: 100b49d4f;  */

void FUN_100b49d30(void)

{
  func_0x000107c61168(&PTR_PTR_11288a128);
  return;
}



/* Entry: 100b49d50; end: 100b49dcf; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49d50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef24b0,0);
  func_0x000107c61614(param_1 + _DAT_112ef24b8,0);
  *(undefined8 *)(param_1 + _DAT_112ef24c0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef24c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b49dd0; end: 100b49e7b; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b49dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b49e7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b49e7c; end: 100b4a07f;  */

void FUN_100b49e7c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0fb10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f0f900)) &&
           (func_0x000107c605b8(0xd000000000000032,0x800000010f0f0700,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MainCameraScopeGraphBridge/SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint.swift"
                              ,0x5d,2,0x60,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b4a080);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58544();
        goto LAB_100b49f08;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561a4();
  }
LAB_100b49f08:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b4a080; end: 100b4a08b; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a080(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef24b0;
  func_0x000107c61428(param_1 + _DAT_112ef24b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4a08c; end: 100b4a0df;  */

void FUN_100b4a08c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4a0e0; end: 100b4a0eb; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef24b8;
  func_0x000107c61428(param_1 + _DAT_112ef24b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4a0ec; end: 100b4a14f; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint setSCMainCameraScopedLensCarouselScopeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef24c0;
  func_0x000107c61428(param_1 + _DAT_112ef24c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4a150; end: 100b4a177; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint begin] */

void FUN_100b4a150(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b4a178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b4a178; end: 100b4a2fb;  */

/* WARNING: Possible PIC construction at 0x000100b4a278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4a288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4a2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b4a27c) */
/* WARNING: Removing unreachable block (ram,0x000100b4a28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a178(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50f9c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b4a3a0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef2230);
        *(undefined8 *)(lVar2 + _DAT_112ef0a90) = uVar6;
        *(long *)(lVar2 + _DAT_112ef0a98) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef0a98);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b4a2fc; end: 100b4a307; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a2fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef24b0;
  func_0x000107c61428(param_1 + _DAT_112ef24b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4a308; end: 100b4a34b;  */

void FUN_100b4a308(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b4a34c; end: 100b4a357; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a34c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef24b8;
  func_0x000107c61428(param_1 + _DAT_112ef24b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4a358; end: 100b4a39f; -[SCSCMainCameraScopedLensCarouselScopeServicesSaberEntryPoint sCMainCameraScopedLensCarouselScopeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a358(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef24c0;
  func_0x000107c61428(param_1 + _DAT_112ef24c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4a3a0; end: 100b4a3bf;  */

void FUN_100b4a3a0(void)

{
  func_0x000107c61168(&PTR_PTR_11288a1f0);
  return;
}



/* Entry: 100b4a3c0; end: 100b4a3c7;  */

void FUN_100b4a3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x2b8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b4a3c8; end: 100b4a41b;  */

void FUN_100b4a3c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x2b8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b4a41c; end: 100b4a47b; -[SCSCMainCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a41c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef3980,0);
  *(undefined8 *)(param_1 + _DAT_112ef3988) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b4a47c; end: 100b4a647; -[SCSCMainCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b4a47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100b4a528(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b4a648; end: 100b4a69f; -[SCSCMainCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a648(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef3980;
  func_0x000107c61428(param_1 + _DAT_112ef3980,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4a6a0; end: 100b4a6c7; -[SCSCMainCameraScopedServicesSaberEntryPoint begin] */

void FUN_100b4a6a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b4a6c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b4a6c8; end: 100b4a79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a6c8(undefined8 param_1,long param_2)

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
    FUN_100b4a7e8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ef20f0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    FUN_100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b4a7a0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ef20f8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef3988);
    *(long **)(unaff_x20 + _DAT_112ef3988) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100b4a7a0; end: 100b4a7e7; -[SCSCMainCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a7a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef3980;
  func_0x000107c61428(param_1 + _DAT_112ef3980,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4a7e8; end: 100b4a807;  */

void FUN_100b4a7e8(void)

{
  func_0x000107c61168(&PTR_PTR_11288a380);
  return;
}



/* Entry: 100b4a808; end: 100b4a887; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4a808(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef24f8,0);
  func_0x000107c61614(param_1 + _DAT_112ef2500,0);
  *(undefined8 *)(param_1 + _DAT_112ef2508) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef2510) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b4a888; end: 100b4a933; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b4a888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b4a934(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b4a934; end: 100b4ab37;  */

void FUN_100b4a934(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0fb10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000039;
        if (((param_2 != -0x2fffffffffffffc7) || (param_3 != -0x7ffffffef0f0f860)) &&
           (func_0x000107c605b8(0xd000000000000039,0x800000010f0f07a0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MainCameraScopeGraphBridge/SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint.swift"
                              ,100,2,0x60,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b4ab38);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58994();
        goto LAB_100b4a9c0;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561a4();
  }
LAB_100b4a9c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b4ab38; end: 100b4ab43; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ab38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef24f8;
  func_0x000107c61428(param_1 + _DAT_112ef24f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4ab44; end: 100b4ab97;  */

void FUN_100b4ab44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4ab98; end: 100b4aba3; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ab98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2500;
  func_0x000107c61428(param_1 + _DAT_112ef2500,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4aba4; end: 100b4ac07; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint setSCSponsoredSocialUnlockViewThroughTrackingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4aba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2508;
  func_0x000107c61428(param_1 + _DAT_112ef2508,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ac08; end: 100b4ac2f; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint begin] */

void FUN_100b4ac08(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b4ac30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b4ac30; end: 100b4adb3;  */

/* WARNING: Possible PIC construction at 0x000100b4ad30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4ad40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b4ad34) */
/* WARNING: Removing unreachable block (ram,0x000100b4ad44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ac30(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c513ec();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b4ae58();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef2298);
        *(undefined8 *)(lVar2 + _DAT_112ef0ac8) = uVar6;
        *(long *)(lVar2 + _DAT_112ef0ad0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef0ad0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b4adb4; end: 100b4adbf; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4adb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef24f8;
  func_0x000107c61428(param_1 + _DAT_112ef24f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4adc0; end: 100b4ae03;  */

void FUN_100b4adc0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b4ae04; end: 100b4ae0f; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ae04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2500;
  func_0x000107c61428(param_1 + _DAT_112ef2500,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4ae10; end: 100b4ae57; -[SCSCSponsoredSocialUnlockViewThroughTrackingServicesSaberEntryPoint sCSponsoredSocialUnlockViewThroughTrackingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ae10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2508;
  func_0x000107c61428(param_1 + _DAT_112ef2508,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4ae58; end: 100b4ae77;  */

void FUN_100b4ae58(void)

{
  func_0x000107c61168(&PTR_PTR_11288a2b8);
  return;
}



/* Entry: 100b4ae78; end: 100b4ae7f;  */

void FUN_100b4ae78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b4ae80; end: 100b4aed3;  */

void FUN_100b4ae80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b4aed4; end: 100b4b00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4aed4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112edef68,0);
  *(undefined8 *)(unaff_x20 + _DAT_112edef70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edef78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edef80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edef88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edef90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edef98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefa0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefa8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edefe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edeff0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edeff8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112edf000) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b4b00c; end: 100b4b02b; -[SCCameraUIScopeGraphBridgeSaberEntryPoint init] */

void FUN_100b4b00c(void)

{
  FUN_100b4aed4();
  return;
}



/* Entry: 100b4b02c; end: 100b4b0d7; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100b4b02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b4b0d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b4b0d8; end: 100b4b94f;  */

void FUN_100b4b0d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_100b4b168;
  }
  if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10dfbf0)) {
    uVar2 = 0xd000000000000019;
    func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef0f8a2f0)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010f075d10,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57fc4();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef10061e0)) ||
           (func_0x000107c605b8(0xd000000000000026,0x800000010eff9e20,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5804c();
        }
        else {
          uVar2 = 0xd00000000000001b;
          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0f1eb50)) ||
             (func_0x000107c605b8(0xd00000000000001b,0x800000010f0e14b0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c580d8();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0f89fc0)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010f076040,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5816c();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0f89f30)) ||
                 (func_0x000107c605b8(0xd00000000000001e,0x800000010f0760d0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c58178();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f89b20)) ||
                   (func_0x000107c605b8(0xd00000000000001c,0x800000010f0764e0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c582b0();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0f6dba0)) {
                    uVar2 = 0xd000000000000019;
                    func_0x000107c605b8(0xd000000000000019,0x800000010f092460,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0f6db60)) {
                        uVar2 = 0xd000000000000019;
                        func_0x000107c605b8(0xd000000000000019,0x800000010f0924a0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fae4b0))
                          {
                            uVar2 = 0;
                            func_0x000107c605b8(0xd00000000000001a,0x800000010f051b50,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0;
                              if (((param_2 == -0x2fffffffffffffea) &&
                                  (param_3 == -0x7ffffffef0f89080)) ||
                                 (func_0x000107c605b8(0xd000000000000016,0x800000010f076f80,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c58834();
                              }
                              else {
                                uVar2 = 0;
                                if (((param_2 == -0x2fffffffffffffe8) &&
                                    (param_3 == -0x7ffffffef0f97270)) ||
                                   (uVar3 = uVar2,
                                   func_0x000107c605b8(0xd000000000000018,0x800000010f068d90,param_2
                                                       ,param_3,0), (uVar3 & 1) != 0)) {
                                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c5888c();
                                }
                                else if (((param_2 == -0x2fffffffffffffe8) &&
                                         (param_3 == -0x7ffffffef104a5f0)) ||
                                        (func_0x000107c605b8(0xd000000000000018,0x800000010efb5a10,
                                                             param_2,param_3,0), (uVar2 & 1) != 0))
                                {
                                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c58b24();
                                }
                                else {
                                  if ((param_2 != -0x2fffffffffffffe5) ||
                                     (param_3 != -0x7ffffffef0f24520)) {
                                    uVar2 = 0xd00000000000001b;
                                    func_0x000107c605b8(0xd00000000000001b,0x800000010f0dbae0,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0xd00000000000002f;
                                      if (((param_2 == -0x2fffffffffffffd1) &&
                                          (param_3 == -0x7ffffffef0f1eb30)) ||
                                         (func_0x000107c605b8(0xd00000000000002f,0x800000010f0e14d0,
                                                              param_2,param_3,0), (uVar2 & 1) != 0))
                                      {
                                        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                        func_0x000107c605b0();
                                        func_0x000107c566e4();
                                      }
                                      else {
                                        uVar2 = 0xd000000000000021;
                                        if (((param_2 == -0x2fffffffffffffdf) &&
                                            (param_3 == -0x7ffffffef0f1eb00)) ||
                                           (func_0x000107c605b8(0xd000000000000021,
                                                                0x800000010f0e1500,param_2,param_3,0
                                                               ), (uVar2 & 1) != 0)) {
                                          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                          func_0x000107c605b0();
                                          func_0x000107c580d4();
                                        }
                                        else {
                                          uVar2 = 0xd000000000000029;
                                          if (((param_2 == -0x2fffffffffffffd7) &&
                                              (param_3 == -0x7ffffffef0f1ead0)) ||
                                             (func_0x000107c605b8(0xd000000000000029,
                                                                  0x800000010f0e1530,param_2,param_3
                                                                  ,0), (uVar2 & 1) != 0)) {
                                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c580f0();
                                          }
                                          else {
                                            uVar2 = 0xd000000000000027;
                                            if (((param_2 != -0x2fffffffffffffd9) ||
                                                (param_3 != -0x7ffffffef0f1eaa0)) &&
                                               (func_0x000107c605b8(0xd000000000000027,
                                                                    0x800000010f0e1560,param_2,
                                                                    param_3,0), (uVar2 & 1) == 0)) {
                                              func_0x000107c602fc(0x15);
                                              func_0x000107c6142c(0xe000000000000000);
                                              func_0x000107c5fb78(param_2,param_3);
                                              func_0x000107c60450("Fatal error",0xb,2,
                                                                  0xd000000000000013,
                                                                  0x800000010ef0fc20,
                                                                                                                                    
                                                  "CameraUIScopeGraphBridge/SCCameraUIScopeGraphBridgeSaberEntryPoint.swift"
                                                  ,0x48,2,0x13e,0);
                    /* WARNING: Does not return */
                                              pcVar1 = (code *)SoftwareBreakpoint(1,0x100b4b950);
                                              (*pcVar1)();
                                            }
                                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c530f4();
                                          }
                                        }
                                      }
                                      goto LAB_100b4b168;
                                    }
                                  }
                                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c59930();
                                }
                              }
                              goto LAB_100b4b168;
                            }
                          }
                          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c586e4();
                          goto LAB_100b4b168;
                        }
                      }
                      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c5867c();
                      goto LAB_100b4b168;
                    }
                  }
                  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c58674();
                }
              }
            }
          }
        }
      }
      goto LAB_100b4b168;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c57598();
LAB_100b4b168:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b4b950; end: 100b4b9a7; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4b950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edef68;
  func_0x000107c61428(param_1 + _DAT_112edef68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4b9a8; end: 100b4b9b3; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setCameraUIScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4b9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edeff8;
  func_0x000107c61428(param_1 + _DAT_112edeff8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4b9b4; end: 100b4ba13;  */

void FUN_100b4b9b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100b4ba14; end: 100b4ba1f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edef70;
  func_0x000107c61428(param_1 + _DAT_112edef70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba20; end: 100b4ba2b; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCAddSoundPillScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edef78;
  func_0x000107c61428(param_1 + _DAT_112edef78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba2c; end: 100b4ba37; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCBitmojiEditAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edef80;
  func_0x000107c61428(param_1 + _DAT_112edef80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba38; end: 100b4ba43; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCCameraFeatureScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edef88;
  func_0x000107c61428(param_1 + _DAT_112edef88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba44; end: 100b4ba4f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCCommerceProductCatalogScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edef90;
  func_0x000107c61428(param_1 + _DAT_112edef90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba50; end: 100b4ba5b; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCCommerceShoppingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edef98;
  func_0x000107c61428(param_1 + _DAT_112edef98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba5c; end: 100b4ba67; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCDeeplinkSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefa0;
  func_0x000107c61428(param_1 + _DAT_112edefa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba68; end: 100b4ba73; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCMusicEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefa8;
  func_0x000107c61428(param_1 + _DAT_112edefa8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba74; end: 100b4ba7f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCMusicPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefb0;
  func_0x000107c61428(param_1 + _DAT_112edefb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba80; end: 100b4ba8b; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefb8;
  func_0x000107c61428(param_1 + _DAT_112edefb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba8c; end: 100b4ba97; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCSendFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefc0;
  func_0x000107c61428(param_1 + _DAT_112edefc0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4ba98; end: 100b4baa3; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCSnapEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ba98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefc8;
  func_0x000107c61428(param_1 + _DAT_112edefc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4baa4; end: 100b4baaf; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCViewfinderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4baa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefd0;
  func_0x000107c61428(param_1 + _DAT_112edefd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4bab0; end: 100b4babb; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setStoryAutoSavingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4bab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefd8;
  func_0x000107c61428(param_1 + _DAT_112edefd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4babc; end: 100b4bac7; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setMiniCameraTrayPassthroughViewPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4babc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefe0;
  func_0x000107c61428(param_1 + _DAT_112edefe0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4bac8; end: 100b4bad3; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCCameraFeaturePluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4bac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edefe8;
  func_0x000107c61428(param_1 + _DAT_112edefe8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4bad4; end: 100b4badf; -[SCCameraUIScopeGraphBridgeSaberEntryPoint setSCCameraUISnapDocEditorPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4bad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edeff0;
  func_0x000107c61428(param_1 + _DAT_112edeff0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4bae0; end: 100b4bb07; -[SCCameraUIScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100b4bae0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b4bb08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b4bb08; end: 100b4c8c7;  */

/* WARNING: Possible PIC construction at 0x000100b4c1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c1f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c2c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c83c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c71c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c74c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c6fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4c35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b4c370) */
/* WARNING: Removing unreachable block (ram,0x000100b4c390) */
/* WARNING: Removing unreachable block (ram,0x000100b4c3c0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c3b0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c3f0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c3e0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c3d0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c420) */
/* WARNING: Removing unreachable block (ram,0x000100b4c410) */
/* WARNING: Removing unreachable block (ram,0x000100b4c400) */
/* WARNING: Removing unreachable block (ram,0x000100b4c460) */
/* WARNING: Removing unreachable block (ram,0x000100b4c450) */
/* WARNING: Removing unreachable block (ram,0x000100b4c440) */
/* WARNING: Removing unreachable block (ram,0x000100b4c4b0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c4a0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c490) */
/* WARNING: Removing unreachable block (ram,0x000100b4c480) */
/* WARNING: Removing unreachable block (ram,0x000100b4c500) */
/* WARNING: Removing unreachable block (ram,0x000100b4c4f0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c4e0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c4d0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c4c0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c550) */
/* WARNING: Removing unreachable block (ram,0x000100b4c540) */
/* WARNING: Removing unreachable block (ram,0x000100b4c530) */
/* WARNING: Removing unreachable block (ram,0x000100b4c520) */
/* WARNING: Removing unreachable block (ram,0x000100b4c510) */
/* WARNING: Removing unreachable block (ram,0x000100b4c5b0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c5a0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c590) */
/* WARNING: Removing unreachable block (ram,0x000100b4c580) */
/* WARNING: Removing unreachable block (ram,0x000100b4c570) */
/* WARNING: Removing unreachable block (ram,0x000100b4c620) */
/* WARNING: Removing unreachable block (ram,0x000100b4c610) */
/* WARNING: Removing unreachable block (ram,0x000100b4c600) */
/* WARNING: Removing unreachable block (ram,0x000100b4c5f0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c5e0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c5d0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c690) */
/* WARNING: Removing unreachable block (ram,0x000100b4c680) */
/* WARNING: Removing unreachable block (ram,0x000100b4c670) */
/* WARNING: Removing unreachable block (ram,0x000100b4c660) */
/* WARNING: Removing unreachable block (ram,0x000100b4c650) */
/* WARNING: Removing unreachable block (ram,0x000100b4c640) */
/* WARNING: Removing unreachable block (ram,0x000100b4c630) */
/* WARNING: Removing unreachable block (ram,0x000100b4c700) */
/* WARNING: Removing unreachable block (ram,0x000100b4c6f0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c6e0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c6d0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c6c0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c6b0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c6a0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c780) */
/* WARNING: Removing unreachable block (ram,0x000100b4c770) */
/* WARNING: Removing unreachable block (ram,0x000100b4c760) */
/* WARNING: Removing unreachable block (ram,0x000100b4c750) */
/* WARNING: Removing unreachable block (ram,0x000100b4c740) */
/* WARNING: Removing unreachable block (ram,0x000100b4c730) */
/* WARNING: Removing unreachable block (ram,0x000100b4c720) */
/* WARNING: Removing unreachable block (ram,0x000100b4c810) */
/* WARNING: Removing unreachable block (ram,0x000100b4c800) */
/* WARNING: Removing unreachable block (ram,0x000100b4c7f0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c7e0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c7d0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c7c0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c7b0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c7a0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c8a0) */
/* WARNING: Removing unreachable block (ram,0x000100b4c890) */
/* WARNING: Removing unreachable block (ram,0x000100b4c880) */
/* WARNING: Removing unreachable block (ram,0x000100b4c870) */
/* WARNING: Removing unreachable block (ram,0x000100b4c860) */
/* WARNING: Removing unreachable block (ram,0x000100b4c850) */
/* WARNING: Removing unreachable block (ram,0x000100b4c840) */
/* WARNING: Removing unreachable block (ram,0x000100b4c830) */
/* WARNING: Removing unreachable block (ram,0x000100b4c820) */
/* WARNING: Removing unreachable block (ram,0x000100b4c318) */
/* WARNING: Removing unreachable block (ram,0x000100b4c308) */
/* WARNING: Removing unreachable block (ram,0x000100b4c2f8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c2e8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c2d8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c2c8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c2b8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c2a8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c298) */
/* WARNING: Removing unreachable block (ram,0x000100b4c288) */
/* WARNING: Removing unreachable block (ram,0x000100b4c258) */
/* WARNING: Removing unreachable block (ram,0x000100b4c240) */
/* WARNING: Removing unreachable block (ram,0x000100b4c228) */
/* WARNING: Removing unreachable block (ram,0x000100b4c210) */
/* WARNING: Removing unreachable block (ram,0x000100b4c1f8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c1e8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c1d8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c1c8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c1b8) */
/* WARNING: Removing unreachable block (ram,0x000100b4c360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4bb08(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [2];
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c4eaa8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50a1c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50aa4();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c50b30();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c50bc4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar5 = unaff_x20;
            func_0x000107c50bd0();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c50d08();
              func_0x000107c61180();
              if (lVar5 != 0) {
                lVar5 = unaff_x20;
                func_0x000107c510cc();
                func_0x000107c61180();
                if (lVar5 == 0) {
                  func_0x000107c61170(lVar3);
                  lVar3 = lVar4;
                }
                else {
                  lVar5 = unaff_x20;
                  func_0x000107c510d4();
                  func_0x000107c61180();
                  if (lVar5 == 0) {
                    func_0x000107c61170(lVar3);
                    lVar3 = lVar4;
                  }
                  else {
                    lVar5 = unaff_x20;
                    func_0x000107c5113c();
                    func_0x000107c61180();
                    if (lVar5 != 0) {
                      lVar5 = unaff_x20;
                      func_0x000107c5128c();
                      func_0x000107c61180();
                      if (lVar5 != 0) {
                        lVar5 = unaff_x20;
                        func_0x000107c512e4();
                        func_0x000107c61180();
                        if (lVar5 == 0) {
                          func_0x000107c61170(lVar3);
                          lVar3 = lVar4;
                        }
                        else {
                          lVar5 = unaff_x20;
                          func_0x000107c5157c();
                          func_0x000107c61180();
                          if (lVar5 == 0) {
                            func_0x000107c61170(lVar3);
                            lVar3 = lVar4;
                          }
                          else {
                            lVar5 = unaff_x20;
                            func_0x000107c5bfac();
                            func_0x000107c61180();
                            if (lVar5 != 0) {
                              lVar5 = unaff_x20;
                              func_0x000107c4cf74();
                              func_0x000107c61180();
                              if (lVar5 != 0) {
                                lVar5 = unaff_x20;
                                func_0x000107c50b2c();
                                func_0x000107c61180();
                                if (lVar5 == 0) {
                                  func_0x000107c61170(lVar3);
                                  lVar3 = lVar4;
                                }
                                else {
                                  lVar5 = unaff_x20;
                                  func_0x000107c50b48();
                                  func_0x000107c61180();
                                  if (lVar5 == 0) {
                                    func_0x000107c61170(lVar3);
                                    lVar3 = lVar4;
                                  }
                                  else {
                                    func_0x000107c3f28c();
                                    func_0x000107c61180();
                                    if (unaff_x20 != 0) {
                                      lVar6 = 0;
                                      FUN_100b4ce20();
                                      lVar4 = lVar6;
                                      func_0x000107c610f8();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      func_0x000107c61174();
                                      lVar5 = lVar3;
                                      FUN_100b4ce40();
                                      if (lVar5 == 0) {
                    /* WARNING: Does not return */
                                        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b4c8c8);
                                        (*pcVar2)();
                                      }
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      uVar1 = auStack_70[0];
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(uVar1);
                                      FUN_100083b20(auStack_70);
                                      FUN_100087c34(auStack_78);
                                      func_0x000107c61574(auStack_70[0]);
                                      *(long *)(lVar4 + _DAT_112edb838) = lVar5;
                                      *(long *)(lVar4 + _DAT_112edb840) = unaff_x20;
                                      lStack_88 = lVar4;
                                      lStack_80 = lVar6;
                                      func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
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
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b4c8c8; end: 100b4c90f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4c8c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edef68;
  func_0x000107c61428(param_1 + _DAT_112edef68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4c910; end: 100b4c957; -[SCCameraUIScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4c910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edef70;
  func_0x000107c61428(param_1 + _DAT_112edef70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4c958; end: 100b4c99f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCAddSoundPillScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4c958(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edef78;
  func_0x000107c61428(param_1 + _DAT_112edef78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4c9a0; end: 100b4c9e7; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCBitmojiEditAvatarBuilderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4c9a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edef80;
  func_0x000107c61428(param_1 + _DAT_112edef80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4c9e8; end: 100b4ca2f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCCameraFeatureScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4c9e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edef88;
  func_0x000107c61428(param_1 + _DAT_112edef88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4ca30; end: 100b4ca77; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCCommerceProductCatalogScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ca30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edef90;
  func_0x000107c61428(param_1 + _DAT_112edef90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4ca78; end: 100b4cabf; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCCommerceShoppingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ca78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edef98;
  func_0x000107c61428(param_1 + _DAT_112edef98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cac0; end: 100b4cb07; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCDeeplinkSendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cac0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefa0;
  func_0x000107c61428(param_1 + _DAT_112edefa0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cb08; end: 100b4cb4f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCMusicEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cb08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefa8;
  func_0x000107c61428(param_1 + _DAT_112edefa8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cb50; end: 100b4cb97; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCMusicPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cb50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefb0;
  func_0x000107c61428(param_1 + _DAT_112edefb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cb98; end: 100b4cbdf; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cb98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefb8;
  func_0x000107c61428(param_1 + _DAT_112edefb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cbe0; end: 100b4cc27; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCSendFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cbe0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefc0;
  func_0x000107c61428(param_1 + _DAT_112edefc0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cc28; end: 100b4cc6f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCSnapEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cc28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefc8;
  func_0x000107c61428(param_1 + _DAT_112edefc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cc70; end: 100b4ccb7; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCViewfinderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cc70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefd0;
  func_0x000107c61428(param_1 + _DAT_112edefd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4ccb8; end: 100b4ccff; -[SCCameraUIScopeGraphBridgeSaberEntryPoint storyAutoSavingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4ccb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefd8;
  func_0x000107c61428(param_1 + _DAT_112edefd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cd00; end: 100b4cd47; -[SCCameraUIScopeGraphBridgeSaberEntryPoint miniCameraTrayPassthroughViewPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cd00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefe0;
  func_0x000107c61428(param_1 + _DAT_112edefe0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cd48; end: 100b4cd8f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCCameraFeaturePluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cd48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edefe8;
  func_0x000107c61428(param_1 + _DAT_112edefe8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cd90; end: 100b4cdd7; -[SCCameraUIScopeGraphBridgeSaberEntryPoint sCCameraUISnapDocEditorPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cd90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edeff0;
  func_0x000107c61428(param_1 + _DAT_112edeff0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4cdd8; end: 100b4ce1f; -[SCCameraUIScopeGraphBridgeSaberEntryPoint cameraUIScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cdd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edeff8;
  func_0x000107c61428(param_1 + _DAT_112edeff8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b4ce20; end: 100b4ce3f;  */

void FUN_100b4ce20(void)

{
  func_0x000107c61168(&PTR_PTR_11287d160);
  return;
}



/* Entry: 100b4ce40; end: 100b4cf0f;  */

undefined8 FUN_100b4ce40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112edec00,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1005c8ed0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100b4cf10; end: 100b4cf93;  */

void FUN_100b4cf10(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_1006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100b4cf94; end: 100b4cf9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cf94(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130354b0);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130354a8);
  func_0x000107c61174(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61174(uVar1);
  func_0x000107c43bf4(uVar2);
  func_0x000107c61180();
  uVar1 = 0;
  FUN_1005d96ec();
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_100b4d058();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 100b4cf9c; end: 100b4d057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4cf9c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x18) + _DAT_1130354b0);
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x18) + _DAT_1130354a8);
  func_0x000107c61174(*(undefined8 *)(param_3 + 0x10));
  func_0x000107c61174(uVar1);
  func_0x000107c43bf4(uVar2);
  func_0x000107c61180();
  uVar1 = 0;
  FUN_1005d96ec();
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_100b4d058();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 100b4d058; end: 100b4d0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4d058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130352a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130352b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130352b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130352c0) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}


