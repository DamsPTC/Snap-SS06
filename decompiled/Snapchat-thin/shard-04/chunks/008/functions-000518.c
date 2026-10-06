/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038b2878; end: 1038b2a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b2878(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c48c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001038a93ac();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fa7c60);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa8c68);
      *(long *)(unaff_x20 + _DAT_112fa8c68) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MapsUserNavigationScopeGraphBridge/SCSCMapStoryMediaServicesSaberServiceProvider.swift"
                      ,0x56,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b29a4);
  (*pcVar1)();
}



/* Entry: 1038b2a8c; end: 1038b2abf; -[SCSCMapStoryMediaServicesSaberServiceProvider provide] */

void FUN_1038b2a8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038b2878();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b2ac0; end: 1038b2af3; -[SCSCMapStoryMediaServicesSaberServiceProvider __safeProvide] */

void FUN_1038b2ac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001038b29a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b2af4; end: 1038b2b37; -[SCSCMapStoryMediaServicesSaberServiceProvider end] */

void FUN_1038b2af4(undefined8 param_1)

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



/* Entry: 1038b2b38; end: 1038b2ccf;  */

void FUN_1038b2b38(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e8e700)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f171900,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MapsUserNavigationScopeGraphBridge/SCSCMapStoryMediaServicesSaberServiceProvider.swift"
                            ,0x56,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b2cd0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1038b2cd0; end: 1038b2d7b; -[SCSCMapStoryMediaServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1038b2cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1038b2b38(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1038b2d7c; end: 1038b2def; -[SCSCMapStoryMediaServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b2d7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fa8c58,0);
  func_0x000107c61614(param_1 + _DAT_112fa8c60,0);
  *(undefined8 *)(param_1 + _DAT_112fa8c68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b2df0; end: 1038b2e23;  */

void FUN_1038b2df0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b2e24; end: 1038b2e6b; -[SCSCMapStoryMediaServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b2e24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa8c58);
  func_0x000107c61610(param_1 + _DAT_112fa8c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa8c68));
  return;
}



/* Entry: 1038b2e6c; end: 1038b2e8b;  */

void FUN_1038b2e6c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa8cb0);
  return;
}



/* Entry: 1038b2e8c; end: 1038b2e97; -[SCSCPlacesContextCardServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b2e8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa8d18;
  func_0x000107c61428(param_1 + _DAT_112fa8d18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b2e98; end: 1038b2ea3; -[SCSCPlacesContextCardServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b2e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa8d18;
  func_0x000107c61428(param_1 + _DAT_112fa8d18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b2ea4; end: 1038b2eaf; -[SCSCPlacesContextCardServiceSaberServiceProvider mapsUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b2ea4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa8d20;
  func_0x000107c61428(param_1 + _DAT_112fa8d20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b2eb0; end: 1038b2ef3;  */

void FUN_1038b2eb0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1038b2ef4; end: 1038b2eff; -[SCSCPlacesContextCardServiceSaberServiceProvider setMapsUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b2ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa8d20;
  func_0x000107c61428(param_1 + _DAT_112fa8d20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b2f00; end: 1038b2f53;  */

void FUN_1038b2f00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b2f54; end: 1038b3167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b2f54(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c48c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001038a94d8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fa7c68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa8d28);
      *(long *)(unaff_x20 + _DAT_112fa8d28) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MapsUserNavigationScopeGraphBridge/SCSCPlacesContextCardServiceSaberServiceProvider.swift"
                      ,0x59,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b3080);
  (*pcVar1)();
}



/* Entry: 1038b3168; end: 1038b319b; -[SCSCPlacesContextCardServiceSaberServiceProvider provide] */

void FUN_1038b3168(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038b2f54();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b319c; end: 1038b31cf; -[SCSCPlacesContextCardServiceSaberServiceProvider __safeProvide] */

void FUN_1038b319c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001038b3080();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b31d0; end: 1038b3213; -[SCSCPlacesContextCardServiceSaberServiceProvider end] */

void FUN_1038b31d0(undefined8 param_1)

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



/* Entry: 1038b3214; end: 1038b33ab;  */

void FUN_1038b3214(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e8e700)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f171900,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MapsUserNavigationScopeGraphBridge/SCSCPlacesContextCardServiceSaberServiceProvider.swift"
                            ,0x59,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b33ac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1038b33ac; end: 1038b3457; -[SCSCPlacesContextCardServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_1038b33ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1038b3214(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1038b3458; end: 1038b34cb; -[SCSCPlacesContextCardServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3458(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fa8d18,0);
  func_0x000107c61614(param_1 + _DAT_112fa8d20,0);
  *(undefined8 *)(param_1 + _DAT_112fa8d28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b34cc; end: 1038b34ff;  */

void FUN_1038b34cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b3500; end: 1038b3547; -[SCSCPlacesContextCardServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3500(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa8d18);
  func_0x000107c61610(param_1 + _DAT_112fa8d20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa8d28));
  return;
}



/* Entry: 1038b3548; end: 1038b3567;  */

void FUN_1038b3548(void)

{
  func_0x000107c61168(&PTR_PTR_112fa8d70);
  return;
}



/* Entry: 1038b3568; end: 1038b3573; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3568(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa8dd8;
  func_0x000107c61428(param_1 + _DAT_112fa8dd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b3574; end: 1038b357f; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa8dd8;
  func_0x000107c61428(param_1 + _DAT_112fa8dd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b3580; end: 1038b358b; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider mapsUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3580(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa8de0;
  func_0x000107c61428(param_1 + _DAT_112fa8de0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b358c; end: 1038b35cf;  */

void FUN_1038b358c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1038b35d0; end: 1038b35db; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider setMapsUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b35d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa8de0;
  func_0x000107c61428(param_1 + _DAT_112fa8de0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b35dc; end: 1038b362f;  */

void FUN_1038b35dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b3630; end: 1038b3843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b3630(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c48c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001038a9604();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fa7c78);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa8de8);
      *(long *)(unaff_x20 + _DAT_112fa8de8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MapsUserNavigationScopeGraphBridge/SCStandalonePlaceProfileFactoryServicesSaberServiceProvider.swift"
                      ,100,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b375c);
  (*pcVar1)();
}



/* Entry: 1038b3844; end: 1038b3877; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider provide] */

void FUN_1038b3844(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038b3630();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b3878; end: 1038b38ab; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider __safeProvide] */

void FUN_1038b3878(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001038b375c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b38ac; end: 1038b38ef; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider end] */

void FUN_1038b38ac(undefined8 param_1)

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



/* Entry: 1038b38f0; end: 1038b3a87;  */

void FUN_1038b38f0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e8e700)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f171900,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MapsUserNavigationScopeGraphBridge/SCStandalonePlaceProfileFactoryServicesSaberServiceProvider.swift"
                            ,100,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b3a88);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1038b3a88; end: 1038b3b33; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1038b3a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1038b38f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1038b3b34; end: 1038b3ba7; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3b34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fa8dd8,0);
  func_0x000107c61614(param_1 + _DAT_112fa8de0,0);
  *(undefined8 *)(param_1 + _DAT_112fa8de8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b3ba8; end: 1038b3bdb;  */

void FUN_1038b3ba8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b3bdc; end: 1038b3c23; -[SCStandalonePlaceProfileFactoryServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3bdc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa8dd8);
  func_0x000107c61610(param_1 + _DAT_112fa8de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa8de8));
  return;
}



/* Entry: 1038b3c24; end: 1038b3c43;  */

void FUN_1038b3c24(void)

{
  func_0x000107c61168(&PTR_PTR_112fa8e30);
  return;
}



/* Entry: 1038b3c44; end: 1038b3c4f; -[SCShareLocationFlowFactoryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3c44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa8e98;
  func_0x000107c61428(param_1 + _DAT_112fa8e98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b3c50; end: 1038b3c5b; -[SCShareLocationFlowFactoryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa8e98;
  func_0x000107c61428(param_1 + _DAT_112fa8e98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b3c5c; end: 1038b3c67; -[SCShareLocationFlowFactoryServicesSaberServiceProvider mapsUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3c5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa8ea0;
  func_0x000107c61428(param_1 + _DAT_112fa8ea0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b3c68; end: 1038b3cab;  */

void FUN_1038b3c68(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1038b3cac; end: 1038b3cb7; -[SCShareLocationFlowFactoryServicesSaberServiceProvider setMapsUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b3cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa8ea0;
  func_0x000107c61428(param_1 + _DAT_112fa8ea0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b3cb8; end: 1038b3d0b;  */

void FUN_1038b3cb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b3d0c; end: 1038b3f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b3d0c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c48c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001038a9730();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fa7c70);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa8ea8);
      *(long *)(unaff_x20 + _DAT_112fa8ea8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MapsUserNavigationScopeGraphBridge/SCShareLocationFlowFactoryServicesSaberServiceProvider.swift"
                      ,0x5f,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b3e38);
  (*pcVar1)();
}



/* Entry: 1038b3f20; end: 1038b3f53; -[SCShareLocationFlowFactoryServicesSaberServiceProvider provide] */

void FUN_1038b3f20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038b3d0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b3f54; end: 1038b3f87; -[SCShareLocationFlowFactoryServicesSaberServiceProvider __safeProvide] */

void FUN_1038b3f54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001038b3e38();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038b3f88; end: 1038b3fcb; -[SCShareLocationFlowFactoryServicesSaberServiceProvider end] */

void FUN_1038b3f88(undefined8 param_1)

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



/* Entry: 1038b3fcc; end: 1038b4163;  */

void FUN_1038b3fcc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e8e700)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f171900,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MapsUserNavigationScopeGraphBridge/SCShareLocationFlowFactoryServicesSaberServiceProvider.swift"
                            ,0x5f,2,0x4c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b4164);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1038b4164; end: 1038b420f; -[SCShareLocationFlowFactoryServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1038b4164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1038b3fcc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1038b4210; end: 1038b4283; -[SCShareLocationFlowFactoryServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4210(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fa8e98,0);
  func_0x000107c61614(param_1 + _DAT_112fa8ea0,0);
  *(undefined8 *)(param_1 + _DAT_112fa8ea8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b4284; end: 1038b42b7;  */

void FUN_1038b4284(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b42b8; end: 1038b42ff; -[SCShareLocationFlowFactoryServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b42b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa8e98);
  func_0x000107c61610(param_1 + _DAT_112fa8ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa8ea8));
  return;
}



/* Entry: 1038b4300; end: 1038b431f;  */

void FUN_1038b4300(void)

{
  func_0x000107c61168(&PTR_PTR_112fa8ef0);
  return;
}



/* Entry: 1038b4320; end: 1038b438b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4320(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033dd64();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fa8f60) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1038b438c; end: 1038b4393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b438c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033dd64();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa8f60) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1038b4394; end: 1038b43df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4394(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa8f60) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b43e0; end: 1038b43ff; -[_TtC19MapEmojiPickerScope29MapEmojiPickerFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b43e0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa8f60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b4400; end: 1038b445b; -[_TtC19MapEmojiPickerScope29MapEmojiPickerFactoryServices init] */

void FUN_1038b4400(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapEmojiPickerScope.MapEmojiPickerFactoryServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b442c);
  (*pcVar1)();
}



/* Entry: 1038b445c; end: 1038b447b; -[_TtC19MapEmojiPickerScope29MapEmojiPickerFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b445c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa8f60));
  return;
}



/* Entry: 1038b447c; end: 1038b460b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b447c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fa8f90;
  func_0x000107c61614(unaff_x20 + _DAT_112fa8f90,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112fa8f98) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa8fa0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 1038b460c; end: 1038b46db; -[_TtC19MapEmojiPickerScope19MapEmojiPickerScope initWithDelegate:includeBitmojiReactions:sourceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b460c(long param_1,long param_2,undefined8 param_3,undefined1 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  lVar2 = _DAT_112fa8f90;
  func_0x000107c61614(param_1 + _DAT_112fa8f90,0);
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_3);
  *(undefined1 *)(param_1 + _DAT_112fa8f98) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112fa8fa0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c61154(&lStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b46dc; end: 1038b473b; -[_TtC19MapEmojiPickerScope19MapEmojiPickerScope init] */

void FUN_1038b46dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapEmojiPickerScope.MapEmojiPickerScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b4708);
  (*pcVar1)();
}



/* Entry: 1038b473c; end: 1038b479b; -[_TtC19MapEmojiPickerScope19MapEmojiPickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b473c(long param_1)

{
  func_0x0001038b4778(param_1 + _DAT_112fa8f90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa8fa0 + 8))
  ;
  return;
}



/* Entry: 1038b479c; end: 1038b49d3;  */

long FUN_1038b479c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038b49d4; end: 1038b4a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b49d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa8fd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b4a20; end: 1038b4a3f; -[_TtC30SCLocationSharingSettingsScope38LocationSharingSettingsFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4a20(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa8fd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b4a40; end: 1038b4a9f; -[_TtC30SCLocationSharingSettingsScope38LocationSharingSettingsFactoryServices init] */

void FUN_1038b4a40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsScope.LocationSharingSettingsFactoryServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b4a6c);
  (*pcVar1)();
}



/* Entry: 1038b4aa0; end: 1038b4ad3; -[_TtC30SCLocationSharingSettingsScope38LocationSharingSettingsFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa8fd8));
  return;
}



/* Entry: 1038b4ad4; end: 1038b4bab;  */

void FUN_1038b4ad4(void)

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



/* Entry: 1038b4bac; end: 1038b4bb7;  */

void FUN_1038b4bac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1038b4bb8; end: 1038b4bd7; -[SCLocationSharingSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4bb8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa9008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b4bd8; end: 1038b4c1f; -[SCLocationSharingSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4bd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa9010;
  func_0x000107c61428(param_1 + _DAT_112fa9010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b4c20; end: 1038b4c77; -[SCLocationSharingSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa9010;
  func_0x000107c61428(param_1 + _DAT_112fa9010,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b4c78; end: 1038b4c87; -[SCLocationSharingSettingsScope openSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b4c78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9018);
}



/* Entry: 1038b4c88; end: 1038b4e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038b4c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fa9010;
  func_0x000107c61614(unaff_x20 + _DAT_112fa9010,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9008) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9018) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1038b4e20; end: 1038b4ed3; -[SCLocationSharingSettingsScope initWithUiContainer:delegate:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fa9010;
  func_0x000107c61614(param_1 + _DAT_112fa9010,0);
  *(undefined8 *)(param_1 + _DAT_112fa9008) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112fa9018) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1038b4ed4; end: 1038b4f33; -[SCLocationSharingSettingsScope init] */

void FUN_1038b4ed4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsScope.LocationSharingSettingsScope",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b4f00);
  (*pcVar1)();
}



/* Entry: 1038b4f34; end: 1038b4f6b; -[SCLocationSharingSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038b4f34(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa9008));
  param_1 = param_1 + _DAT_112fa9010;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038b4f6c; end: 1038b4f83;  */

undefined1  [16] FUN_1038b4f6c(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  
  bVar2 = param_1 - 9U < 0xfffffffffffffff6;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = param_1;
  }
  auVar3[8] = bVar2;
  auVar3._0_8_ = lVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1038b4f84; end: 1038b4fc3;  */

void FUN_1038b4f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1aee0;
  func_0x000107c61520(&UNK_10dc1aee0,&UNK_1106a3440);
  puRam0000000112fa9020 = puVar1;
  return;
}



/* Entry: 1038b4fc4; end: 1038b4fd3;  */

undefined1  [16] FUN_1038b4fc4(void)

{
  return ZEXT816(0x1106a3440);
}



/* Entry: 1038b4fd4; end: 1038b503f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b4fd4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100363458();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fa9058) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1038b5040; end: 1038b5047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5040(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100363458();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9058) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1038b5048; end: 1038b5093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5048(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9058) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b5094; end: 1038b50b3; -[_TtC20SCMapDropsShareScope28MapDropsShareFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5094(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa9058));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b50b4; end: 1038b510f; -[_TtC20SCMapDropsShareScope28MapDropsShareFactoryServices init] */

void FUN_1038b50b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapDropsShareScope.MapDropsShareFactoryServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b50e0);
  (*pcVar1)();
}



/* Entry: 1038b5110; end: 1038b512f; -[_TtC20SCMapDropsShareScope28MapDropsShareFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa9058));
  return;
}



/* Entry: 1038b5130; end: 1038b513f; -[_TtC20SCMapDropsShareScope18MapDropsShareScope dropShareDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9088));
  return;
}



/* Entry: 1038b5140; end: 1038b515f; -[_TtC20SCMapDropsShareScope18MapDropsShareScope presentingContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5140(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa9090));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b5160; end: 1038b516f; -[_TtC20SCMapDropsShareScope18MapDropsShareScope conversationMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9098));
  return;
}



/* Entry: 1038b5170; end: 1038b51cb; -[_TtC20SCMapDropsShareScope18MapDropsShareScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5170(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fa90a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa90a0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038b51cc; end: 1038b5213; -[_TtC20SCMapDropsShareScope18MapDropsShareScope dropsShareLifecycleDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b51cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa90a8;
  func_0x000107c61428(param_1 + _DAT_112fa90a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b5214; end: 1038b526b; -[_TtC20SCMapDropsShareScope18MapDropsShareScope setDropsShareLifecycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa90a8;
  func_0x000107c61428(param_1 + _DAT_112fa90a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038b526c; end: 1038b539b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b526c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fa90a8;
  func_0x000107c61614(unaff_x20 + _DAT_112fa90a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9088) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9090) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9098) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa90a0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_6);
  return puVar4;
}



/* Entry: 1038b539c; end: 1038b53ff;  */

undefined8
FUN_1038b539c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1038b559c();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_2);
  return uVar1;
}


