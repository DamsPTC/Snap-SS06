/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a34490; end: 103a3453b; -[SCSCSnapDocImportingEditsResolverServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a34490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a342f8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a3453c; end: 103a345af; -[SCSCSnapDocImportingEditsResolverServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a3453c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fcee28,0);
  func_0x000107c61614(param_1 + _DAT_112fcee30,0);
  *(undefined8 *)(param_1 + _DAT_112fcee38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a345b0; end: 103a345e3;  */

void FUN_103a345b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a345e4; end: 103a3462b; -[SCSCSnapDocImportingEditsResolverServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a345e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fcee28);
  func_0x000107c61610(param_1 + _DAT_112fcee30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcee38));
  return;
}



/* Entry: 103a3462c; end: 103a3464b;  */

void FUN_103a3462c(void)

{
  func_0x000107c61168(&PTR_PTR_112fcee80);
  return;
}



/* Entry: 103a3464c; end: 103a34657; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a3464c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fceee8;
  func_0x000107c61428(param_1 + _DAT_112fceee8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a34658; end: 103a34663; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fceee8;
  func_0x000107c61428(param_1 + _DAT_112fceee8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a34664; end: 103a3466f; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34664(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fceef0;
  func_0x000107c61428(param_1 + _DAT_112fceef0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a34670; end: 103a346b3;  */

void FUN_103a34670(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a346b4; end: 103a346bf; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a346b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fceef0;
  func_0x000107c61428(param_1 + _DAT_112fceef0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a346c0; end: 103a34713;  */

void FUN_103a346c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a34714; end: 103a34927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a34714(void)

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
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a2fcc0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fce560);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fceef8);
      *(long *)(unaff_x20 + _DAT_112fceef8) = lVar4;
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
                      "MeActiveUserSessionScopeGraphBridge/SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider.swift"
                      ,0x67,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a34840);
  (*pcVar1)();
}



/* Entry: 103a34928; end: 103a3495b; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider provide] */

void FUN_103a34928(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a34714();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a3495c; end: 103a3498f; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider __safeProvide] */

void FUN_103a3495c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a34840();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a34990; end: 103a349d3; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider end] */

void FUN_103a34990(undefined8 param_1)

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



/* Entry: 103a349d4; end: 103a34b6b;  */

void FUN_103a349d4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider.swift"
                            ,0x67,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a34b6c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a34b6c; end: 103a34c17; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a34b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a349d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a34c18; end: 103a34c8b; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34c18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fceee8,0);
  func_0x000107c61614(param_1 + _DAT_112fceef0,0);
  *(undefined8 *)(param_1 + _DAT_112fceef8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a34c8c; end: 103a34cbf;  */

void FUN_103a34c8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a34cc0; end: 103a34d07; -[SCSCSnapDocOverlayImageGenerationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34cc0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fceee8);
  func_0x000107c61610(param_1 + _DAT_112fceef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fceef8));
  return;
}



/* Entry: 103a34d08; end: 103a34d27;  */

void FUN_103a34d08(void)

{
  func_0x000107c61168(&PTR_PTR_112fcef40);
  return;
}



/* Entry: 103a34d28; end: 103a34d33; -[SCSCSnapDocThumbnailServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34d28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcefa8;
  func_0x000107c61428(param_1 + _DAT_112fcefa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a34d34; end: 103a34d3f; -[SCSCSnapDocThumbnailServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcefa8;
  func_0x000107c61428(param_1 + _DAT_112fcefa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a34d40; end: 103a34d4b; -[SCSCSnapDocThumbnailServicesSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34d40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcefb0;
  func_0x000107c61428(param_1 + _DAT_112fcefb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a34d4c; end: 103a34d8f;  */

void FUN_103a34d4c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a34d90; end: 103a34d9b; -[SCSCSnapDocThumbnailServicesSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a34d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcefb0;
  func_0x000107c61428(param_1 + _DAT_112fcefb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a34d9c; end: 103a34def;  */

void FUN_103a34d9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a34df0; end: 103a35003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a34df0(void)

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
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a2fdec();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fce568);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fcefb8);
      *(long *)(unaff_x20 + _DAT_112fcefb8) = lVar4;
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
                      "MeActiveUserSessionScopeGraphBridge/SCSCSnapDocThumbnailServicesSaberServiceProvider.swift"
                      ,0x5a,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a34f1c);
  (*pcVar1)();
}



/* Entry: 103a35004; end: 103a35037; -[SCSCSnapDocThumbnailServicesSaberServiceProvider provide] */

void FUN_103a35004(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a34df0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a35038; end: 103a3506b; -[SCSCSnapDocThumbnailServicesSaberServiceProvider __safeProvide] */

void FUN_103a35038(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a34f1c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a3506c; end: 103a350af; -[SCSCSnapDocThumbnailServicesSaberServiceProvider end] */

void FUN_103a3506c(undefined8 param_1)

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



/* Entry: 103a350b0; end: 103a35247;  */

void FUN_103a350b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCSCSnapDocThumbnailServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a35248);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a35248; end: 103a352f3; -[SCSCSnapDocThumbnailServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a35248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a350b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a352f4; end: 103a35367; -[SCSCSnapDocThumbnailServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a352f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fcefa8,0);
  func_0x000107c61614(param_1 + _DAT_112fcefb0,0);
  *(undefined8 *)(param_1 + _DAT_112fcefb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a35368; end: 103a3539b;  */

void FUN_103a35368(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a3539c; end: 103a353e3; -[SCSCSnapDocThumbnailServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a3539c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fcefa8);
  func_0x000107c61610(param_1 + _DAT_112fcefb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcefb8));
  return;
}



/* Entry: 103a353e4; end: 103a35403;  */

void FUN_103a353e4(void)

{
  func_0x000107c61168(&PTR_PTR_112fcf000);
  return;
}



/* Entry: 103a35404; end: 103a3540f; -[SCSCSnapRendererServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a35404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcf068;
  func_0x000107c61428(param_1 + _DAT_112fcf068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a35410; end: 103a3541b; -[SCSCSnapRendererServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a35410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcf068;
  func_0x000107c61428(param_1 + _DAT_112fcf068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a3541c; end: 103a35427; -[SCSCSnapRendererServicesSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a3541c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcf070;
  func_0x000107c61428(param_1 + _DAT_112fcf070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a35428; end: 103a3546b;  */

void FUN_103a35428(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a3546c; end: 103a35477; -[SCSCSnapRendererServicesSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a3546c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcf070;
  func_0x000107c61428(param_1 + _DAT_112fcf070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a35478; end: 103a354cb;  */

void FUN_103a35478(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a354cc; end: 103a356df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a354cc(void)

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
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a2ff18();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fce570);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fcf078);
      *(long *)(unaff_x20 + _DAT_112fcf078) = lVar4;
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
                      "MeActiveUserSessionScopeGraphBridge/SCSCSnapRendererServicesSaberServiceProvider.swift"
                      ,0x56,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a355f8);
  (*pcVar1)();
}



/* Entry: 103a356e0; end: 103a35713; -[SCSCSnapRendererServicesSaberServiceProvider provide] */

void FUN_103a356e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a354cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a35714; end: 103a35747; -[SCSCSnapRendererServicesSaberServiceProvider __safeProvide] */

void FUN_103a35714(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a355f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a35748; end: 103a3578b; -[SCSCSnapRendererServicesSaberServiceProvider end] */

void FUN_103a35748(undefined8 param_1)

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



/* Entry: 103a3578c; end: 103a35923;  */

void FUN_103a3578c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCSCSnapRendererServicesSaberServiceProvider.swift"
                            ,0x56,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a35924);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a35924; end: 103a359cf; -[SCSCSnapRendererServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a35924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a3578c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a359d0; end: 103a35a43; -[SCSCSnapRendererServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a359d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fcf068,0);
  func_0x000107c61614(param_1 + _DAT_112fcf070,0);
  *(undefined8 *)(param_1 + _DAT_112fcf078) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a35a44; end: 103a35a77;  */

void FUN_103a35a44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a35a78; end: 103a35abf; -[SCSCSnapRendererServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a35a78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fcf068);
  func_0x000107c61610(param_1 + _DAT_112fcf070);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcf078));
  return;
}



/* Entry: 103a35ac0; end: 103a35adf;  */

void FUN_103a35ac0(void)

{
  func_0x000107c61168(&PTR_PTR_112fcf0c0);
  return;
}



/* Entry: 103a35ae0; end: 103a35aeb; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a35ae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcf128;
  func_0x000107c61428(param_1 + _DAT_112fcf128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a35aec; end: 103a35af7; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a35aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcf128;
  func_0x000107c61428(param_1 + _DAT_112fcf128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a35af8; end: 103a35b03; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a35af8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcf130;
  func_0x000107c61428(param_1 + _DAT_112fcf130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a35b04; end: 103a35b47;  */

void FUN_103a35b04(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a35b48; end: 103a35b53; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a35b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcf130;
  func_0x000107c61428(param_1 + _DAT_112fcf130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a35b54; end: 103a35ba7;  */

void FUN_103a35b54(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a35ba8; end: 103a35dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a35ba8(void)

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
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a30044();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fce578);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fcf138);
      *(long *)(unaff_x20 + _DAT_112fcf138) = lVar4;
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
                      "MeActiveUserSessionScopeGraphBridge/SCSCVideoThumbnailGenerationServicesSaberServiceProvider.swift"
                      ,0x62,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a35cd4);
  (*pcVar1)();
}



/* Entry: 103a35dbc; end: 103a35def; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider provide] */

void FUN_103a35dbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a35ba8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a35df0; end: 103a35e23; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider __safeProvide] */

void FUN_103a35df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a35cd4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a35e24; end: 103a35e67; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider end] */

void FUN_103a35e24(undefined8 param_1)

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



/* Entry: 103a35e68; end: 103a35fff;  */

void FUN_103a35e68(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCSCVideoThumbnailGenerationServicesSaberServiceProvider.swift"
                            ,0x62,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a36000);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a36000; end: 103a360ab; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a36000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a35e68(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a360ac; end: 103a3611f; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a360ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fcf128,0);
  func_0x000107c61614(param_1 + _DAT_112fcf130,0);
  *(undefined8 *)(param_1 + _DAT_112fcf138) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a36120; end: 103a36153;  */

void FUN_103a36120(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a36154; end: 103a3619b; -[SCSCVideoThumbnailGenerationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a36154(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fcf128);
  func_0x000107c61610(param_1 + _DAT_112fcf130);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcf138));
  return;
}



/* Entry: 103a3619c; end: 103a361bb;  */

void FUN_103a3619c(void)

{
  func_0x000107c61168(&PTR_PTR_112fcf180);
  return;
}



/* Entry: 103a361bc; end: 103a361c7; -[SCSnapUploaderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a361bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcf1e8;
  func_0x000107c61428(param_1 + _DAT_112fcf1e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a361c8; end: 103a361d3; -[SCSnapUploaderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a361c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcf1e8;
  func_0x000107c61428(param_1 + _DAT_112fcf1e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a361d4; end: 103a361df; -[SCSnapUploaderServicesSaberServiceProvider meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a361d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcf1f0;
  func_0x000107c61428(param_1 + _DAT_112fcf1f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a361e0; end: 103a36223;  */

void FUN_103a361e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a36224; end: 103a3622f; -[SCSnapUploaderServicesSaberServiceProvider setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a36224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcf1f0;
  func_0x000107c61428(param_1 + _DAT_112fcf1f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a36230; end: 103a36283;  */

void FUN_103a36230(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a36284; end: 103a36497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a36284(void)

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
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a30170();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fce580);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fcf1f8);
      *(long *)(unaff_x20 + _DAT_112fcf1f8) = lVar4;
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
                      "MeActiveUserSessionScopeGraphBridge/SCSnapUploaderServicesSaberServiceProvider.swift"
                      ,0x54,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a363b0);
  (*pcVar1)();
}



/* Entry: 103a36498; end: 103a364cb; -[SCSnapUploaderServicesSaberServiceProvider provide] */

void FUN_103a36498(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a36284();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a364cc; end: 103a364ff; -[SCSnapUploaderServicesSaberServiceProvider __safeProvide] */

void FUN_103a364cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a363b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a36500; end: 103a36543; -[SCSnapUploaderServicesSaberServiceProvider end] */

void FUN_103a36500(undefined8 param_1)

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



/* Entry: 103a36544; end: 103a366db;  */

void FUN_103a36544(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e75510)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MeActiveUserSessionScopeGraphBridge/SCSnapUploaderServicesSaberServiceProvider.swift"
                            ,0x54,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a366dc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a366dc; end: 103a36787; -[SCSnapUploaderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a366dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a36544(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a36788; end: 103a367fb; -[SCSnapUploaderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a36788(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fcf1e8,0);
  func_0x000107c61614(param_1 + _DAT_112fcf1f0,0);
  *(undefined8 *)(param_1 + _DAT_112fcf1f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a367fc; end: 103a3682f;  */

void FUN_103a367fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a36830; end: 103a36877; -[SCSnapUploaderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a36830(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fcf1e8);
  func_0x000107c61610(param_1 + _DAT_112fcf1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcf1f8));
  return;
}



/* Entry: 103a36878; end: 103a36897;  */

void FUN_103a36878(void)

{
  func_0x000107c61168(&PTR_PTR_112fcf240);
  return;
}



/* Entry: 103a36898; end: 103a36d7f;  */

void FUN_103a36898(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  lVar2 = 0;
  func_0x000100c8ff80();
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x10) = 1;
  *(char **)(lVar2 + 0x18) = "memories_live_rendering";
  *(undefined8 *)(lVar2 + 0x20) = 0x17;
  *(undefined1 *)(lVar2 + 0x28) = 2;
  *(char **)(lVar2 + 0x30) = "opera_action_render";
  *(undefined8 *)(lVar2 + 0x38) = 0x13;
  *(undefined1 *)(lVar2 + 0x40) = 2;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = 10000;
  lRam000000011357ee48 = lVar2;
  return;
}



/* Entry: 103a36d80; end: 103a36d9b;  */

void FUN_103a36d80(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103a36d9c; end: 103a36dff; +[_TtC28MemoriesLiveRenderingMetrics32MemoriesLiveRenderingErrorReason slugFor:] */

void FUN_103a36d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_103a37f60(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c5fadc(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103a36e00; end: 103a36e3b; -[_TtC28MemoriesLiveRenderingMetrics32MemoriesLiveRenderingErrorReason init] */

void FUN_103a36e00(undefined8 param_1)

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



/* Entry: 103a36e3c; end: 103a36e3f;  */

void FUN_103a36e3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a36e40; end: 103a36f0f;  */

void FUN_103a36e40(void)

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



/* Entry: 103a36f10; end: 103a37263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a36f10(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000100083b20(auStack_98);
  lVar1 = lStack_78;
  uVar4 = uStack_80;
  func_0x0001000a8868(auStack_98,uStack_80);
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar5 = 0xe400000000000000;
      uStack_b8 = 0x74696465;
    }
    else if (param_2 == 1) {
      uVar5 = 0xe400000000000000;
      uStack_b8 = 0x646e6573;
    }
    else {
      if (param_2 != 2) {
LAB_103a37240:
        puVar3 = &UNK_1106c1550;
        lStack_c0 = param_2;
        goto LAB_103a3724c;
      }
      uStack_b8 = 0x5f6f745f74736f70;
      uVar5 = 0xed000079726f7473;
    }
  }
  else if (param_2 == 3) {
    uVar5 = 0x800000010f131360;
    uStack_b8 = 0xd000000000000011;
  }
  else if (param_2 == 4) {
    uVar5 = 0xe800000000000000;
    uStack_b8 = 0x736e656c5f646461;
  }
  else {
    if (param_2 != 5) goto LAB_103a37240;
    uVar5 = 0xe500000000000000;
    uStack_b8 = 0x726568746f;
  }
  if (param_3 == 0) {
    uVar6 = 0xe700000000000000;
    uStack_a8 = 0x73736563637573;
  }
  else if (param_3 == 2) {
    uVar6 = 0xe900000000000064;
    uStack_a8 = 0x656c6c65636e6163;
  }
  else {
    if (param_3 != 1) {
      puVar3 = &UNK_1106c1570;
      lStack_c0 = param_3;
LAB_103a3724c:
      func_0x000107c60614(puVar3,&lStack_c0,puVar3,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103a37264);
      (*pcVar2)();
    }
    uVar6 = 0xe700000000000000;
    uStack_a8 = 0x6572756c696166;
  }
  lStack_c0 = param_1;
  uStack_b0 = uVar5;
  uStack_a0 = uVar6;
  (**(code **)(lVar1 + 8))(&lStack_c0,&UNK_1106c19f8,&PTR_DAT_1106c1af8,uVar4,lVar1);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar5);
  func_0x0001000834e4(auStack_98);
  if (param_3 == 1) {
    if (param_2 < 3) {
      if (param_2 == 0) {
        uVar4 = 0xe400000000000000;
        uVar5 = 0x74696465;
      }
      else if (param_2 == 1) {
        uVar4 = 0xe400000000000000;
        uVar5 = 0x646e6573;
      }
      else {
        uVar5 = 0x5f6f745f74736f70;
        uVar4 = 0xed000079726f7473;
      }
    }
    else if (param_2 == 3) {
      uVar4 = 0x800000010f131360;
      uVar5 = 0xd000000000000011;
    }
    else if (param_2 == 4) {
      uVar4 = 0xe800000000000000;
      uVar5 = 0x736e656c5f646461;
    }
    else {
      uVar4 = 0xe500000000000000;
      uVar5 = 0x726568746f;
    }
    func_0x000100083b20(auStack_98);
    uVar6 = uStack_80;
    func_0x0001000a8868(auStack_98);
    FUN_103a37f60();
    lStack_c0 = 1;
    uStack_b8 = uVar5;
    uStack_b0 = uVar4;
    uStack_a8 = param_4;
    (**(code **)(lStack_78 + 8))(&lStack_c0,&UNK_1106c1970,&PTR_DAT_1106c1ad8,uStack_80,lStack_78);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    func_0x0001000834e4(auStack_98);
  }
  return;
}



/* Entry: 103a37264; end: 103a372e3; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder recordOperaActionRenderWithAction:result:durationSec:error:] */

/* WARNING: Possible PIC construction at 0x000103a372c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a372c8) */

void FUN_103a37264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  FUN_103a36f10(param_1,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103a372e4; end: 103a3736f; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder recordOperaPlaybackRenderWithResult:durationSec:error:] */

/* WARNING: Possible PIC construction at 0x000103a37354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a37358) */

void FUN_103a372e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_103a37390(param_1,1,param_4,param_5,&UNK_1106c18f0,&PTR_DAT_1106c1ab8,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103a37370; end: 103a3738f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a37370(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000100083b20(auStack_98);
  lVar1 = lStack_78;
  uVar3 = uStack_80;
  func_0x0001000a8868(auStack_98,uStack_80);
  if (param_2 == 0) {
    uVar4 = 0xe700000000000000;
    uStack_b8 = 0x73736563637573;
  }
  else if (param_2 == 2) {
    uVar4 = 0xe900000000000064;
    uStack_b8 = 0x656c6c65636e6163;
  }
  else {
    if (param_2 != 1) {
      lStack_c0 = param_2;
      func_0x000107c60614(&UNK_1106c1570,&lStack_c0,&UNK_1106c1570,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103a3754c);
      (*pcVar2)();
    }
    uVar4 = 0xe700000000000000;
    uStack_b8 = 0x6572756c696166;
  }
  lStack_c0 = param_1;
  uStack_b0 = uVar4;
  (**(code **)(lVar1 + 8))(&lStack_c0,&UNK_1106c1870,&PTR_DAT_1106c1a98,uVar3,lVar1);
  func_0x000107c6142c(uVar4);
  func_0x0001000834e4(auStack_98);
  if (param_2 == 1) {
    func_0x000100083b20(auStack_98);
    uVar3 = uStack_80;
    func_0x0001000a8868(auStack_98);
    FUN_103a37f60();
    uStack_b8 = 0x65766173;
    lStack_c0 = 1;
    uStack_b0 = 0xe400000000000000;
    uStack_a8 = param_3;
    (**(code **)(lStack_78 + 8))(&lStack_c0,&UNK_1106c1970,&PTR_DAT_1106c1ad8,uStack_80,lStack_78);
    func_0x000107c6142c(uVar3);
    func_0x0001000834e4(auStack_98);
  }
  return;
}



/* Entry: 103a37390; end: 103a3754b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a37390(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000100083b20(auStack_98);
  lVar1 = lStack_78;
  uVar3 = uStack_80;
  func_0x0001000a8868(auStack_98,uStack_80);
  if (param_3 == 0) {
    uVar4 = 0xe700000000000000;
    uStack_b8 = 0x73736563637573;
  }
  else if (param_3 == 2) {
    uVar4 = 0xe900000000000064;
    uStack_b8 = 0x656c6c65636e6163;
  }
  else {
    if (param_3 != 1) {
      lStack_c0 = param_3;
      func_0x000107c60614(&UNK_1106c1570,&lStack_c0,&UNK_1106c1570,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103a3754c);
      (*pcVar2)();
    }
    uVar4 = 0xe700000000000000;
    uStack_b8 = 0x6572756c696166;
  }
  lStack_c0 = param_1;
  uStack_b0 = uVar4;
  (**(code **)(lVar1 + 8))(&lStack_c0,param_5,param_6,uVar3,lVar1);
  func_0x000107c6142c(uVar4);
  func_0x0001000834e4(auStack_98);
  if (param_3 == 1) {
    func_0x000100083b20(auStack_98);
    uVar3 = uStack_80;
    func_0x0001000a8868(auStack_98);
    FUN_103a37f60();
    lStack_c0 = param_2;
    uStack_b0 = param_7;
    uStack_a8 = param_4;
    (**(code **)(lStack_78 + 8))(&lStack_c0,&UNK_1106c1970,&PTR_DAT_1106c1ad8,uStack_80,lStack_78);
    func_0x000107c6142c(uVar3);
    func_0x0001000834e4(auStack_98);
  }
  return;
}



/* Entry: 103a3754c; end: 103a375d7; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder recordOperaSaveRenderWithResult:durationSec:error:] */

/* WARNING: Possible PIC construction at 0x000103a375bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a375c0) */

void FUN_103a3754c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_103a37390(param_1,1,param_4,param_5,&UNK_1106c1870,&PTR_DAT_1106c1a98,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103a375d8; end: 103a3778f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a375d8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  if (param_1 < 2) {
    if (param_1 == 0) {
      uVar5 = 0xe800000000000000;
      uStack_88 = 0x64657265646e6572;
    }
    else {
      if (param_1 != 1) {
LAB_103a3776c:
        lStack_90 = param_1;
        func_0x000107c60614(&UNK_1106c1590,&lStack_90,&UNK_1106c1590,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103a37790);
        (*pcVar3)();
      }
      uVar5 = 0xed000064656c6961;
      uStack_88 = 0x665f7265646e6572;
    }
  }
  else if (param_1 == 2) {
    uVar5 = 0xe900000000000064;
    uStack_88 = 0x656c6c65636e6163;
  }
  else {
    if (param_1 != 3) goto LAB_103a3776c;
    uVar5 = 0xed00006465726567;
    uStack_88 = 0x676972745f746f6e;
  }
  uVar4 = 0x73756c705f33;
  if (param_2 == 1) {
    uVar4 = 0x31;
  }
  uVar1 = 0xe600000000000000;
  if (param_2 == 1) {
    uVar1 = 0xe100000000000000;
  }
  uVar2 = 0x32;
  if (param_2 != 2) {
    uVar2 = uVar4;
  }
  uVar4 = 0xe100000000000000;
  if (param_2 != 2) {
    uVar4 = uVar1;
  }
  uStack_78 = 0x30;
  if (0 < param_2) {
    uStack_78 = uVar2;
  }
  uVar1 = 0xe100000000000000;
  if (0 < param_2) {
    uVar1 = uVar4;
  }
  lStack_90 = 1;
  uStack_80 = uVar5;
  uStack_70 = uVar1;
  (**(code **)(lStack_48 + 8))(&lStack_90,&UNK_1106c17e8,&PTR_DAT_1106c1a78,uStack_50,lStack_48);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar5);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 103a37790; end: 103a377d3; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder recordPlaybackPageOutcomeWithResult:attemptCount:] */

void FUN_103a37790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_103a375d8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103a377d4; end: 103a378bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a377d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar3 = 0x73756c705f33;
  if (param_2 == 1) {
    uVar3 = 0x31;
  }
  uVar1 = 0xe600000000000000;
  if (param_2 == 1) {
    uVar1 = 0xe100000000000000;
  }
  uVar2 = 0x32;
  if (param_2 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe100000000000000;
  if (param_2 != 2) {
    uVar3 = uVar1;
  }
  uStack_78 = 0x30;
  if (0 < param_2) {
    uStack_78 = uVar2;
  }
  uVar1 = 0xe100000000000000;
  if (0 < param_2) {
    uVar1 = uVar3;
  }
  uStack_80 = param_1;
  uStack_70 = uVar1;
  (**(code **)(lStack_48 + 8))(&uStack_80,&UNK_1106c1768,&PTR_DAT_1106c1a58,uStack_50,lStack_48);
  func_0x000107c6142c(uVar1);
  func_0x0001000834e4(auStack_68);
  return;
}


