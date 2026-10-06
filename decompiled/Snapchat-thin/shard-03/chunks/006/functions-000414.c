/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ac4174; end: 102ac4193;  */

void FUN_102ac4174(void)

{
  func_0x000107c61168(&PTR_PTR_112eea4e0);
  return;
}



/* Entry: 102ac4194; end: 102ac419f; -[SCSCLegacyCameraResourceServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4194(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea548;
  func_0x000107c61428(param_1 + _DAT_112eea548,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac41a0; end: 102ac41ab; -[SCSCLegacyCameraResourceServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac41a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea548;
  func_0x000107c61428(param_1 + _DAT_112eea548,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac41ac; end: 102ac41b7; -[SCSCLegacyCameraResourceServicesSaberServiceProvider cameraFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac41ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea550;
  func_0x000107c61428(param_1 + _DAT_112eea550,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac41b8; end: 102ac41fb;  */

void FUN_102ac41b8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ac41fc; end: 102ac4207; -[SCSCLegacyCameraResourceServicesSaberServiceProvider setCameraFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac41fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea550;
  func_0x000107c61428(param_1 + _DAT_112eea550,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac4208; end: 102ac425b;  */

void FUN_102ac4208(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac425c; end: 102ac446f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ac425c(void)

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
    func_0x000107c3f0d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102ac2c54();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112eea320);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eea558);
      *(long *)(unaff_x20 + _DAT_112eea558) = lVar4;
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
                      "CameraFeatureScopeGraphBridge/SCSCLegacyCameraResourceServicesSaberServiceProvider.swift"
                      ,0x58,2,0x67,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac4388);
  (*pcVar1)();
}



/* Entry: 102ac4470; end: 102ac44a3; -[SCSCLegacyCameraResourceServicesSaberServiceProvider provide] */

void FUN_102ac4470(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ac425c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac44a4; end: 102ac44d7; -[SCSCLegacyCameraResourceServicesSaberServiceProvider __safeProvide] */

void FUN_102ac44a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102ac4388();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac44d8; end: 102ac451b; -[SCSCLegacyCameraResourceServicesSaberServiceProvider end] */

void FUN_102ac44d8(undefined8 param_1)

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



/* Entry: 102ac451c; end: 102ac46b3;  */

void FUN_102ac451c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f185a0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f0e7a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraFeatureScopeGraphBridge/SCSCLegacyCameraResourceServicesSaberServiceProvider.swift"
                            ,0x58,2,0x7c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac46b4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53008();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ac46b4; end: 102ac475f; -[SCSCLegacyCameraResourceServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102ac46b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ac451c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ac4760; end: 102ac47d3; -[SCSCLegacyCameraResourceServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4760(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eea548,0);
  func_0x000107c61614(param_1 + _DAT_112eea550,0);
  *(undefined8 *)(param_1 + _DAT_112eea558) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ac47d4; end: 102ac4807;  */

void FUN_102ac47d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac4808; end: 102ac484f; -[SCSCLegacyCameraResourceServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4808(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eea548);
  func_0x000107c61610(param_1 + _DAT_112eea550);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eea558));
  return;
}



/* Entry: 102ac4850; end: 102ac486f;  */

void FUN_102ac4850(void)

{
  func_0x000107c61168(&PTR_PTR_112eea5a0);
  return;
}



/* Entry: 102ac4870; end: 102ac499b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ac4870(void)

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
    func_0x000107c3f0d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100b7da3c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112eea328);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eea618);
      *(long *)(unaff_x20 + _DAT_112eea618) = lVar4;
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
                      "CameraFeatureScopeGraphBridge/SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x67,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac499c);
  (*pcVar1)();
}



/* Entry: 102ac499c; end: 102ac49cf; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider provide] */

void FUN_102ac499c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ac4870();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac49d0; end: 102ac4a13; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider end] */

void FUN_102ac49d0(undefined8 param_1)

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



/* Entry: 102ac4a14; end: 102ac4a47;  */

void FUN_102ac4a14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac4a48; end: 102ac4a8f; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4a48(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eea608);
  func_0x000107c61610(param_1 + _DAT_112eea610);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eea618));
  return;
}



/* Entry: 102ac4a90; end: 102ac4aaf;  */

void FUN_102ac4a90(void)

{
  func_0x000107c61168(&PTR_PTR_112eea660);
  return;
}



/* Entry: 102ac4ab0; end: 102ac4abb; -[SCWebLensRetentionStoreSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4ab0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea6c8;
  func_0x000107c61428(param_1 + _DAT_112eea6c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac4abc; end: 102ac4ac7; -[SCWebLensRetentionStoreSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea6c8;
  func_0x000107c61428(param_1 + _DAT_112eea6c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac4ac8; end: 102ac4ad3; -[SCWebLensRetentionStoreSaberServiceProvider cameraFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4ac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea6d0;
  func_0x000107c61428(param_1 + _DAT_112eea6d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ac4ad4; end: 102ac4b17;  */

void FUN_102ac4ad4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ac4b18; end: 102ac4b23; -[SCWebLensRetentionStoreSaberServiceProvider setCameraFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac4b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea6d0;
  func_0x000107c61428(param_1 + _DAT_112eea6d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac4b24; end: 102ac4b77;  */

void FUN_102ac4b24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ac4b78; end: 102ac4d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ac4b78(void)

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
    func_0x000107c3f0d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102ac2e30();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112eea330);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eea6d8);
      *(long *)(unaff_x20 + _DAT_112eea6d8) = lVar4;
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
                      "CameraFeatureScopeGraphBridge/SCWebLensRetentionStoreSaberServiceProvider.swift"
                      ,0x4f,2,0x67,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac4ca4);
  (*pcVar1)();
}



/* Entry: 102ac4d8c; end: 102ac4dbf; -[SCWebLensRetentionStoreSaberServiceProvider provide] */

void FUN_102ac4d8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ac4b78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac4dc0; end: 102ac4df3; -[SCWebLensRetentionStoreSaberServiceProvider __safeProvide] */

void FUN_102ac4dc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102ac4ca4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac4df4; end: 102ac4e37; -[SCWebLensRetentionStoreSaberServiceProvider end] */

void FUN_102ac4df4(undefined8 param_1)

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



/* Entry: 102ac4e38; end: 102ac4fcf;  */

void FUN_102ac4e38(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f185a0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f0e7a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraFeatureScopeGraphBridge/SCWebLensRetentionStoreSaberServiceProvider.swift"
                            ,0x4f,2,0x7c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac4fd0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53008();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ac4fd0; end: 102ac507b; -[SCWebLensRetentionStoreSaberServiceProvider setValue:forIvarName:] */

void FUN_102ac4fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ac4e38(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ac507c; end: 102ac50ef; -[SCWebLensRetentionStoreSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac507c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eea6c8,0);
  func_0x000107c61614(param_1 + _DAT_112eea6d0,0);
  *(undefined8 *)(param_1 + _DAT_112eea6d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ac50f0; end: 102ac5123;  */

void FUN_102ac50f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac5124; end: 102ac516b; -[SCWebLensRetentionStoreSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac5124(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eea6c8);
  func_0x000107c61610(param_1 + _DAT_112eea6d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eea6d8));
  return;
}



/* Entry: 102ac516c; end: 102ac518b;  */

void FUN_102ac516c(void)

{
  func_0x000107c61168(&PTR_PTR_112eea720);
  return;
}



/* Entry: 102ac518c; end: 102ac5303;  */

/* WARNING: Possible PIC construction at 0x000102ac51f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac528c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac51f8) */
/* WARNING: Removing unreachable block (ram,0x000102ac5290) */
/* WARNING: Removing unreachable block (ram,0x000102ac52a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac518c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eea790);
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



/* Entry: 102ac5304; end: 102ac530b;  */

void FUN_102ac5304(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ac530c; end: 102ac533f; -[SCSCCameraFeatureScopedServicesSaberEntryPoint end] */

void FUN_102ac530c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ac518c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ac5340; end: 102ac5373;  */

void FUN_102ac5340(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac5374; end: 102ac53ab; -[SCSCCameraFeatureScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac5374(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eea788);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eea790));
  return;
}



/* Entry: 102ac53ac; end: 102ac53cb;  */

void FUN_102ac53ac(void)

{
  func_0x000107c61168(&PTR_PTR_112885968);
  return;
}



/* Entry: 102ac53cc; end: 102ac54bf;  */

void FUN_102ac53cc(byte *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_b0 [16];
  byte *pbStack_a0;
  byte bStack_98;
  undefined1 auStack_90 [16];
  byte *pbStack_80;
  undefined1 auStack_70 [16];
  byte *pbStack_60;
  undefined1 auStack_50 [16];
  byte *pbStack_40;
  
  *param_1 = 2;
  pbStack_a0 = param_1;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  pbStack_40 = param_1;
  func_0x0001008546f4(FUN_102ac54c0,0,FUN_102ac69dc,auStack_b0,0x102ac6a08,auStack_50,0x102ac69ec,
                      auStack_70,0x102ac6a0c,auStack_90);
  func_0x000107c61428(param_3 + 0x10,auStack_50,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    bStack_98 = *param_1 & 1;
    pbStack_a0 = (byte *)param_3;
    func_0x000100087bd4(0x102ac69f8,auStack_b0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 102ac54c0; end: 102ac54c3;  */

void FUN_102ac54c0(void)

{
  return;
}



/* Entry: 102ac54c4; end: 102ac55eb;  */

void FUN_102ac54c4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lStack_60 = param_2;
    uStack_58 = uVar1;
    func_0x000100087bd4(FUN_102ac68a4,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102ac55ec; end: 102ac5ab7;  */

/* WARNING: Possible PIC construction at 0x000102ac582c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac5830) */

void FUN_102ac55ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_3 != 0) {
    uVar8 = *unaff_x20;
    uVar10 = unaff_x20[4];
    func_0x000107c615f0(param_3);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = unaff_x20[7];
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    lVar1 = param_3;
    func_0x000107c4b2e0(param_3);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar9 = uVar11;
    func_0x000100471e0c(uVar11,0);
    func_0x000107c61574(lVar2);
    puVar3 = &UNK_110595850;
    func_0x000107c613fc(&UNK_110595850,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar10;
    uVar4 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c615f0(uVar10);
    uVar10 = 0x102ac68b4;
    func_0x0001000d5158(0x102ac68b4,puVar3,uVar4);
    func_0x000107c61574(uVar9);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110595878;
    func_0x000107c613fc(&UNK_110595878,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,unaff_x20[3]);
    puVar5 = &UNK_1105958a0;
    func_0x000107c613fc(&UNK_1105958a0,0x58,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = 0x3fd3333333333333;
    *(undefined8 *)(puVar5 + 0x20) = uVar11;
    *(undefined8 *)(puVar5 + 0x28) = uVar10;
    *(undefined **)(puVar5 + 0x30) = puVar3;
    uVar9 = unaff_x20[9];
    uVar12 = unaff_x20[8];
    *(undefined8 *)(puVar5 + 0x40) = unaff_x20[9];
    *(undefined8 *)(puVar5 + 0x38) = uVar12;
    *(undefined8 *)(puVar5 + 0x48) = 1000;
    *(undefined8 *)(puVar5 + 0x50) = uVar8;
    func_0x000107c6157c(param_2);
    func_0x000107c615f0(uVar11);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(uVar9);
    pcVar6 = FUN_102ac68bc;
    func_0x000100775358(FUN_102ac68bc,puVar5,uVar4);
    func_0x000107c61574(puVar5);
    puVar3 = &UNK_1105958c8;
    func_0x000107c613fc(&UNK_1105958c8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar7 = FUN_102ac68f4;
    puVar5 = puVar3;
    (**(code **)(*(long *)pcVar6 + 0x60))(FUN_102ac68f4);
    func_0x000107c61574(puVar3);
    func_0x000107c614f0(pcVar7);
    (**(code **)(puVar5 + 0x18))(unaff_x20[0xc],pcVar7,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 102ac5ab8; end: 102ac5bdb;  */

undefined *
FUN_102ac5ab8(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*param_1 == '\x01') {
    func_0x00010487bcec(param_3);
    puVar2 = &UNK_110595990;
    func_0x000107c613fc(&UNK_110595990,0x40,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    *(undefined8 *)(puVar2 + 0x20) = param_6;
    *(undefined8 *)(puVar2 + 0x28) = param_7;
    *(undefined8 *)(puVar2 + 0x30) = param_8;
    *(undefined8 *)(puVar2 + 0x38) = param_9;
    uVar1 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_7);
    puVar3 = (undefined *)0x102ac697c;
    func_0x000100775358(0x102ac697c,puVar2,uVar1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4d608();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x0001000b637c();
    func_0x000107c61170(puVar2);
  }
  return puVar3;
}



/* Entry: 102ac5bdc; end: 102ac5ce3;  */

undefined *
FUN_102ac5bdc(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*param_1 == '\x01') {
    puVar4 = &UNK_1105959b8;
    func_0x000107c613fc(&UNK_1105959b8,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_5;
    *(undefined8 *)(puVar4 + 0x28) = param_6;
    uVar1 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_5);
    uVar2 = 0x102ac698c;
    func_0x0001000d5158(0x102ac698c,puVar4,uVar1);
    func_0x000107c61574(puVar4);
    FUN_102ac6998();
    func_0x0001000c2068();
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4d608();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x0001000b637c();
    func_0x000107c61170(puVar3);
  }
  return puVar4;
}



/* Entry: 102ac5ce4; end: 102ac5e13;  */

void FUN_102ac5ce4(undefined8 *param_1,double param_2,undefined8 *param_3,long param_4,code *param_5
                  ,undefined8 param_6,ulong param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  uVar4 = *param_3;
  pbVar1 = (byte *)(param_4 + 0x10);
  func_0x000107c61618();
  if (pbVar1 != (byte *)0x0) {
    pbVar5 = pbVar1;
    func_0x000107c4500c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (pbVar5 != (byte *)0x0) {
      pbVar2 = pbVar5;
      func_0x000107c40ec8();
      func_0x000107c61180();
      func_0x000107c615e8(pbVar5);
      uVar3 = 0;
      func_0x000100c70ba8(0);
      pbVar1 = pbVar2;
      func_0x000107c5fc54(pbVar2,uVar3);
      func_0x000107c61170(pbVar2);
      if ((ulong)pbVar1 >> 0x3e == 0) {
        pbVar5 = *(byte **)(((ulong)pbVar1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        pbVar5 = (byte *)((ulong)pbVar1 & 0xffffffffffffff8);
        if ((byte *)0x7fffffffffffffff < pbVar1) {
          pbVar5 = pbVar1;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c();
      if (0 < (long)pbVar5) goto LAB_102ac5dd4;
    }
  }
  (*param_5)();
  if ((param_2 <= (double)param_7) || (func_0x0001000ad07c(), (*pbVar1 & 1) != 0)) {
    *param_1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(uVar4);
    return;
  }
LAB_102ac5dd4:
  *param_1 = 0;
  return;
}



/* Entry: 102ac5e14; end: 102ac5e6f;  */

void FUN_102ac5e14(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102ac5e70(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102ac5e70; end: 102ac6213;  */

void FUN_102ac5e70(ulong param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_d0 [24];
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  char acStack_88 [32];
  undefined1 auStack_68 [8];
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100bc7fa4();
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = uVar10;
  func_0x000107c4b558();
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c61614(auStack_68,uVar1);
    func_0x000107c615e8(uVar1);
    puVar2 = (ulong *)0x102ac68fc;
    func_0x000100087bd4(acStack_88);
    if (acStack_88[0] == '\x01') {
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      uVar1 = 0xd000000000000016;
      func_0x0001000a9a18(0xd000000000000016,0x800000010f0e7c60);
      func_0x000107c61170(uVar3);
      puVar4 = auStack_68;
      func_0x000107c61618();
      if (puVar4 != (undefined1 *)0x0) {
        uVar5 = 0;
        func_0x000100c70ba8(0);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
        func_0x000107c5e0dc(puVar4);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c615e8(puVar4);
        func_0x000107c61170(puVar6);
      }
      func_0x000107c61428(puVar2,auStack_a0,0,0);
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      func_0x0001000aa0a8(uVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c5e0f0(uVar10);
      func_0x000107c61180();
      uVar1 = uVar10;
      puVar6 = PTR___sSSN_11034da80;
      func_0x000107c5fe10();
      func_0x000107c61170(uVar10);
      uVar3 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x0001000f66f0(uVar7,puVar6,uVar1);
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(uVar1);
      if ((uVar7 & 1) == 0) {
        func_0x000100087bd4(acStack_b8,FUN_102ac6a10);
        if (acStack_b8[0] == '\x01') {
          func_0x000107c61428(puVar2,acStack_b8,0,0);
          uVar3 = *puVar2;
          func_0x000107c61174(uVar3);
          uVar1 = 0xd00000000000001b;
          func_0x0001000a9a18(0xd00000000000001b,0x800000010f0e7c80);
          func_0x000107c61170(uVar3);
          puVar4 = auStack_68;
          func_0x000107c61618();
          if (puVar4 != (undefined1 *)0x0) {
            puVar8 = puVar4;
            func_0x000100fe4188();
            func_0x000107c613fc();
            *(undefined8 *)(puVar8 + 0x18) = 3;
            *(undefined8 *)(puVar8 + 0x10) = 1;
            *(ulong *)(puVar8 + 0x20) = param_1;
            uVar10 = 0;
            func_0x000100c70ba8(0);
            func_0x000107c61174(param_1);
            puVar9 = puVar8;
            func_0x000107c5fc48(puVar8,uVar10);
            func_0x000107c61574(puVar8);
            func_0x000107c5e0dc(puVar4);
            func_0x000107c61180();
            func_0x000107c61170();
            func_0x000107c61170(puVar9);
            func_0x000107c615e8(puVar4);
          }
          func_0x000107c61428(puVar2,auStack_d0,0,0);
          uVar3 = *puVar2;
          func_0x000107c61174();
          func_0x0001000aa0a8(uVar1);
          func_0x000107c61170();
          (**(code **)(unaff_x20 + 0x50))();
          if ((uVar3 & 1) != 0) {
            FUN_102ac6214(param_1);
          }
          puVar4 = auStack_68;
          func_0x000107c61618(puVar4);
          FUN_102ac633c();
          func_0x000107c615e8(puVar4);
        }
      }
    }
    FUN_102ac6924(auStack_68);
  }
  return;
}



/* Entry: 102ac6214; end: 102ac633b;  */

void FUN_102ac6214(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *unaff_x20;
  uVar4 = 0;
  func_0x000107c60714(lVar1,0);
  puVar2 = &UNK_1105958f0;
  func_0x000107c613fc(&UNK_1105958f0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = 0xd000000000000013;
  *(undefined8 *)(puVar2 + 0x18) = 0x800000010f0e7ca0;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(long **)(puVar2 + 0x28) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x30) = 0xd000000000000016;
  *(undefined8 *)(puVar2 + 0x38) = 0x800000010f0e7cc0;
  pcStack_50 = FUN_102ac6948;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110595908;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c();
  func_0x000107c61574(puVar2);
  func_0x000107c5fb28(lVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(lVar1 + 0x20,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102ac633c; end: 102ac64d7;  */

/* WARNING: Possible PIC construction at 0x000102ac63d8: Changing call to branch */

void FUN_102ac633c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  
  puVar1 = &UNK_110595878;
  func_0x000107c613fc(&UNK_110595878,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,*(undefined8 *)(unaff_x20 + 0x18));
  puVar2 = &UNK_110595940;
  func_0x000107c613fc(&UNK_110595940,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  lVar6 = *(long *)(unaff_x20 + 0x68);
  if (lVar6 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x78);
    if (lVar6 == 0) {
      puVar9 = (undefined *)0x0;
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
      func_0x000107c6157c(lVar6);
      func_0x00010487bcec(0x4008000000000000,uVar8);
      func_0x000107c61574(lVar6);
      pcVar10 = FUN_102ac6664;
      func_0x0001000c0ebc(FUN_102ac6664,0);
      func_0x000107c61574(uVar8);
      plVar4 = (long *)0x1;
      func_0x00010061b458();
      func_0x000107c61574(pcVar10);
      puVar5 = &UNK_110595968;
      func_0x000107c613fc(&UNK_110595968,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar1;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      pcVar10 = *(code **)(*plVar4 + 0x60);
      func_0x000107c6157c(puVar1);
      func_0x000107c6157c(puVar2);
      uVar8 = 0x102ac6974;
      puVar9 = puVar5;
      (*pcVar10)();
      func_0x000107c61574(plVar4);
      func_0x000107c61574(puVar5);
    }
    lVar6 = *(long *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x20 + 0x68) = uVar8;
    *(undefined **)(unaff_x20 + 0x70) = puVar9;
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x70);
    lVar3 = lVar6;
    func_0x000107c614f0(lVar6);
    pcVar10 = *(code **)(lVar7 + 8);
    func_0x000107c615f0(lVar6);
    (*pcVar10)(lVar3,lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
  return;
}



/* Entry: 102ac64d8; end: 102ac6663;  */

/* WARNING: Possible PIC construction at 0x000102ac6560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac65d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac6604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac65d4) */
/* WARNING: Removing unreachable block (ram,0x000102ac6564) */
/* WARNING: Removing unreachable block (ram,0x000102ac6644) */
/* WARNING: Removing unreachable block (ram,0x000102ac65a8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102ac6608) */

void FUN_102ac64d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  func_0x000107c4b1dc(param_3);
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ac6664; end: 102ac6673;  */

byte FUN_102ac6664(byte *param_1)

{
  return (*param_1 ^ 0xff) & 1;
}



/* Entry: 102ac6674; end: 102ac67ef;  */

void FUN_102ac6674(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_60 [48];
  
  puVar1 = (undefined8 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
    func_0x000107c4500c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar5 != (undefined8 *)0x0) {
      puVar2 = puVar5;
      func_0x000107c40ec8();
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
      uVar3 = 0;
      func_0x000100c70ba8(0);
      puVar1 = puVar2;
      func_0x000107c5fc54(puVar2,uVar3);
      func_0x000107c61170(puVar2);
      if ((ulong)puVar1 >> 0x3e == 0) {
        puVar5 = *(undefined8 **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
        func_0x000107c6142c();
      }
      else {
        puVar5 = (undefined8 *)((ulong)puVar1 & 0xffffffffffffff8);
        if ((undefined8 *)0x7fffffffffffffff < puVar1) {
          puVar5 = puVar1;
        }
        func_0x000107c60480();
        func_0x000107c6142c();
      }
      if (puVar5 != (undefined8 *)0x0) {
        return;
      }
    }
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000020;
  func_0x0001000a9a18(0xd000000000000020,0x800000010f0e7ce0);
  func_0x000107c61170(uVar3);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c3fb00();
    func_0x000107c615e8(param_3);
  }
  func_0x000107c61428(puVar1,auStack_60,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102ac67f0; end: 102ac68a3;  */

void FUN_102ac67f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102ac68a4; end: 102ac68bb;  */

void FUN_102ac68a4(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x89) = *(undefined1 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 102ac68bc; end: 102ac68f3;  */

void FUN_102ac68bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102ac5ab8(*(undefined8 *)(unaff_x20 + 0x18),param_1,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102ac68f4; end: 102ac6923;  */

void FUN_102ac68f4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102ac5e70(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102ac6924; end: 102ac6947;  */

undefined8 FUN_102ac6924(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ac6948; end: 102ac6997;  */

/* WARNING: Possible PIC construction at 0x000102ac6560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac65d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac6604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac65d4) */
/* WARNING: Removing unreachable block (ram,0x000102ac6564) */
/* WARNING: Removing unreachable block (ram,0x000102ac6644) */
/* WARNING: Removing unreachable block (ram,0x000102ac65a8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102ac6608) */

void FUN_102ac6948(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720,uVar2,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  func_0x000107c4b1dc(uVar2);
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102ac6998; end: 102ac69db;  */

void FUN_102ac6998(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eea8c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100c70ba8(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112eea8c8 = puVar2;
  return;
}



/* Entry: 102ac69dc; end: 102ac6a0f;  */

void FUN_102ac69dc(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 102ac6a10; end: 102ac6a23;  */

void FUN_102ac6a10(void)

{
  func_0x000102ac68fc();
  return;
}



/* Entry: 102ac6a24; end: 102ac6c0f; +[SponsoredLensWarmupWorkflowFactory makeWorkflowWithLensCarouselManager:lensProcessingWarmupComponent:effectApplicator:lensDownloadStatusProvider:cameraLifecycleObservable:isRecordingActiveObservable:startupCompleteObservable:notificationPool:studyConfiguration:performer:memoryUsedMBProvider:warmupNotificationEnabledProvider:] */

void FUN_102ac6a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1105959e0;
  func_0x000107c613fc(&UNK_1105959e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  puVar2 = &UNK_110595a08;
  func_0x000107c613fc(&UNK_110595a08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_14;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar3 = param_8;
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c615f0(param_11);
  uVar4 = param_12;
  func_0x000107c615f0();
  uVar5 = param_3;
  FUN_102ac6c80(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,uVar4,
                FUN_102ac70a0,puVar1,FUN_102ac70ac,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 102ac6c10; end: 102ac6c4b; -[SponsoredLensWarmupWorkflowFactory init] */

void FUN_102ac6c10(undefined8 param_1)

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



/* Entry: 102ac6c4c; end: 102ac6c7f;  */

void FUN_102ac6c4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ac6c80; end: 102ac707f;  */

long FUN_102ac6c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long *plStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_6 == 0) {
    plStack_a0 = (long *)0x0;
  }
  else {
    uVar1 = 0x112d53860;
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    func_0x0001000b637c(param_6,uVar1);
    plStack_a0 = (long *)0x102ac7104;
    func_0x0001000bfde0(0x102ac7104,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(param_6);
  }
  func_0x0001000285a8(0x112d3b3f8,&UNK_10d904aa0);
  func_0x0001000b637c();
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x0001000b637c(param_7);
  uVar1 = 0x102ac7100;
  func_0x0001000bfde0(0x102ac7100,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_7);
  lVar2 = 0;
  func_0x000102ac6884();
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  uVar3 = 0;
  func_0x00010006a340();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + 0x80) = uVar3;
  *(undefined2 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_8;
  *(undefined8 *)(lVar2 + 0x30) = param_9;
  *(undefined8 *)(lVar2 + 0x38) = param_10;
  *(undefined8 *)(lVar2 + 0x40) = param_11;
  *(undefined8 *)(lVar2 + 0x48) = param_12;
  *(undefined8 *)(lVar2 + 0x50) = param_13;
  *(undefined8 *)(lVar2 + 0x58) = param_14;
  puVar4 = &UNK_110595a30;
  func_0x000107c613fc(&UNK_110595a30,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,lVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  uVar3 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar5 = FUN_102ac70c8;
  func_0x0001000bfde0(FUN_102ac70c8,puVar4,uVar3);
  func_0x000107c61574(puVar4);
  func_0x00010487ba50();
  func_0x000107c61574(pcVar5);
  puVar6 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068();
  func_0x000107c61574(puVar4);
  uVar3 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined **)(lVar2 + 0x78) = puVar6;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(uVar3);
  if (plStack_a0 != (long *)0x0) {
    puVar4 = &UNK_110595a30;
    func_0x000107c613fc(&UNK_110595a30,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar2);
    uVar3 = 0x102ac70f8;
    puVar8 = puVar4;
    (**(code **)(*plStack_a0 + 0x60))(0x102ac70f8);
    func_0x000107c61574(puVar4);
    uVar7 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(puVar8 + 0x18))(*(undefined8 *)(lVar2 + 0x60),uVar7,puVar8);
    func_0x000107c615e8(uVar3);
  }
  puVar4 = &UNK_110595a30;
  func_0x000107c613fc(&UNK_110595a30,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,lVar2);
  puVar8 = &UNK_110595a58;
  func_0x000107c613fc(&UNK_110595a58,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar4;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  *(undefined **)(puVar8 + 0x20) = puVar6;
  uStack_70 = 0x102ac70d0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100b5ebe4;
  puStack_78 = &UNK_110595a70;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar4 = puStack_68;
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c5dc64(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(param_5);
  func_0x000107c61574(plStack_a0);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar6);
  return lVar2;
}



/* Entry: 102ac7080; end: 102ac709f;  */

void FUN_102ac7080(void)

{
  func_0x000107c61168(&PTR_PTR_112885a28);
  return;
}



/* Entry: 102ac70a0; end: 102ac70ab;  */

void FUN_102ac70a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102ac70a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102ac70ac; end: 102ac70c7;  */

void FUN_102ac70ac(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102ac70c8; end: 102ac7107;  */

void FUN_102ac70c8(byte *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  byte *pbStack_a0;
  byte bStack_98;
  undefined1 auStack_90 [16];
  byte *pbStack_80;
  undefined1 auStack_70 [16];
  byte *pbStack_60;
  undefined1 auStack_50 [16];
  byte *pbStack_40;
  
  *param_1 = 2;
  pbStack_a0 = param_1;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  pbStack_40 = param_1;
  func_0x0001008546f4(FUN_102ac54c0,0,FUN_102ac69dc,auStack_b0,0x102ac6a08,auStack_50,0x102ac69ec,
                      auStack_70,0x102ac6a0c,auStack_90);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    bStack_98 = *param_1 & 1;
    pbStack_a0 = (byte *)lVar1;
    func_0x000100087bd4(0x102ac69f8,auStack_b0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102ac7108; end: 102ac7173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac7108(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102ac74fc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eea900) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102ac7174; end: 102ac71df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac7174(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eea900) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ac71e0; end: 102ac723f; -[_TtC35CaptureScopedFactoryServiceProvider23SCCaptureScopedServices init] */

void FUN_102ac71e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaptureScopedFactoryServiceProvider.SCCaptureScopedServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ac720c);
  (*pcVar1)();
}



/* Entry: 102ac7240; end: 102ac724f; -[_TtC35CaptureScopedFactoryServiceProvider23SCCaptureScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac7240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eea900));
  return;
}



/* Entry: 102ac7250; end: 102ac72bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ac7250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110595c60;
  func_0x000107c613fc(&UNK_110595c60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102ac75d8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102ac72bc; end: 102ac7357;  */

void FUN_102ac72bc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110595b70;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110595b70;
  return;
}



/* Entry: 102ac7358; end: 102ac738f;  */

void FUN_102ac7358(long *param_1)

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



/* Entry: 102ac7390; end: 102ac7397;  */

undefined8 FUN_102ac7390(void)

{
  return 0x1b;
}



/* Entry: 102ac7398; end: 102ac74cb;  */

void FUN_102ac7398(undefined8 *param_1)

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
  puVar1 = &UNK_110595c88;
  func_0x000107c613fc(&UNK_110595c88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102ac75b0;
  func_0x00010058fa64(FUN_102ac75b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ac74cc; end: 102ac74fb;  */

undefined ** FUN_102ac74cc(void)

{
  return &PTR_DAT_112f5d088;
}



/* Entry: 102ac74fc; end: 102ac751b;  */

void FUN_102ac74fc(void)

{
  func_0x000107c61168(&PTR_PTR_112885ad8);
  return;
}



/* Entry: 102ac751c; end: 102ac756b;  */

undefined1  [16] FUN_102ac751c(void)

{
  return ZEXT816(0x110595bc0);
}



/* Entry: 102ac756c; end: 102ac75af;  */

void FUN_102ac756c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eea968 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126abed8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eea968 = puVar1;
  return;
}



/* Entry: 102ac75b0; end: 102ac75d7;  */

void FUN_102ac75b0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102ac75d8; end: 102ac75db;  */

void FUN_102ac75d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ac75dc; end: 102ac7b67;  */

/* WARNING: Possible PIC construction at 0x000102ac7928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac79a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac79b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac79c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac79d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac79e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac79f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ac7b38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ac7b2c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7b1c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7b0c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7afc) */
/* WARNING: Removing unreachable block (ram,0x000102ac7aec) */
/* WARNING: Removing unreachable block (ram,0x000102ac7adc) */
/* WARNING: Removing unreachable block (ram,0x000102ac7acc) */
/* WARNING: Removing unreachable block (ram,0x000102ac7abc) */
/* WARNING: Removing unreachable block (ram,0x000102ac7aac) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a9c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a8c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a7c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a6c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a5c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a4c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a3c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a2c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a1c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7a0c) */
/* WARNING: Removing unreachable block (ram,0x000102ac79fc) */
/* WARNING: Removing unreachable block (ram,0x000102ac79ec) */
/* WARNING: Removing unreachable block (ram,0x000102ac79dc) */
/* WARNING: Removing unreachable block (ram,0x000102ac79cc) */
/* WARNING: Removing unreachable block (ram,0x000102ac79bc) */
/* WARNING: Removing unreachable block (ram,0x000102ac79ac) */
/* WARNING: Removing unreachable block (ram,0x000102ac799c) */
/* WARNING: Removing unreachable block (ram,0x000102ac798c) */
/* WARNING: Removing unreachable block (ram,0x000102ac797c) */
/* WARNING: Removing unreachable block (ram,0x000102ac796c) */
/* WARNING: Removing unreachable block (ram,0x000102ac795c) */
/* WARNING: Removing unreachable block (ram,0x000102ac794c) */
/* WARNING: Removing unreachable block (ram,0x000102ac793c) */
/* WARNING: Removing unreachable block (ram,0x000102ac792c) */
/* WARNING: Removing unreachable block (ram,0x000102ac7b3c) */

void FUN_102ac75dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110595d10;
  func_0x000107c613fc(&UNK_110595d10,0x238,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  uVar2 = 0x112eea978;
  func_0x0001000285a8(0x112eea978,&UNK_10db180f8);
  func_0x000107c613fc();
  pcVar3 = FUN_102ac8f94;
  func_0x0001000841fc(FUN_102ac8f94,puVar1,uVar2);
  func_0x000100084214(&UNK_10db180d0,0x25,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102ac7b68; end: 102ac7c33;  */

void FUN_102ac7b68(void)

{
  long unaff_x20;
  
  FUN_102ac75dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 102ac7c34; end: 102ac7c43;  */

undefined1  [16] FUN_102ac7c34(void)

{
  return ZEXT816(0x110595cf0);
}



/* Entry: 102ac7c44; end: 102ac8d4f;  */

void FUN_102ac7c44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  code *pcVar14;
  char *pcVar15;
  char *pcVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  code *pcVar26;
  code *pcVar27;
  undefined8 uVar28;
  char *pcVar29;
  code *pcVar30;
  code *pcVar31;
  undefined8 uVar32;
  code *pcVar33;
  undefined8 uVar34;
  undefined8 auStack_70 [2];
  
  uVar34 = *param_2;
  func_0x0001000285a8(0x112eea980,&UNK_10db18100);
  puVar1 = auStack_70;
  auStack_70[0] = uVar34;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112eea988,&UNK_10db18190);
  puVar2 = &UNK_110595d38;
  func_0x000107c613fc(&UNK_110595d38,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar3 = FUN_102ac90e8;
  func_0x0001000823a8(FUN_102ac90e8,puVar2);
  func_0x000100082720("InLensCreationDependencyProviderEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112eea990,&UNK_10db18110);
  puVar2 = &UNK_110595d60;
  func_0x000107c613fc(&UNK_110595d60,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  uVar34 = 0x102ac90f0;
  func_0x0001000823a8(0x102ac90f0,puVar2);
  pcVar4 = "LensPromptDependencyProviderEntryPointWrapperServiceProvider";
  func_0x000100082720("LensPromptDependencyProviderEntryPointWrapperServiceProvider",0x3c,2);
  func_0x000102ad2e78();
  pcVar5 = "SCCameraBIPAScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCameraBIPAScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_102ad2ed4();
  pcVar6 = "SCCaptureServiceScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCaptureServiceScopeExposerSubjectServiceProvider",0x32,2);
  FUN_102ad2f30();
  pcVar7 = "SCLensCarouselScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensCarouselScopeExposerSubjectServiceProvider",0x30,2);
  func_0x000102ad2fc0();
  pcVar8 = "SCLensInfoCardsOnCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensInfoCardsOnCameraScopeExposerSubjectServiceProvider",0x39,2);
  FUN_102ad301c();
  pcVar9 = "SCLensCTAHandlingPluginScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensCTAHandlingPluginScopeExposerSubjectServiceProvider",0x39,2);
  FUN_102ad3078();
  func_0x000100082720("SCLensOrganicCTAHandlingPluginScopeExposerSubjectServiceProvider",0x40,2);
  pcVar10 = pcVar4;
  FUN_102ad2eb8();
  func_0x000100082720("SCCameraBIPAScopeExposerObservableServiceProvider",0x31,2);
  pcVar11 = pcVar5;
  FUN_102ad2f14();
  func_0x000100082720("SCCaptureServiceScopeExposerObservableServiceProvider",0x35,2);
  pcVar12 = pcVar6;
  FUN_102ad2f70();
  func_0x000100082720("SCLensCarouselScopeExposerObservableServiceProvider",0x33,2);
  pcVar13 = pcVar7;
  FUN_102ad3000();
  func_0x000100082720("SCLensInfoCardsOnCameraScopeExposerObservableServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar14 = FUN_102ac7358;
  func_0x0001000823a8(FUN_102ac7358,0);
  func_0x000100082720("SCCaptureScopedServicesCleanupRelayServiceProvider",0x32,2);
  pcVar15 = pcVar8;
  FUN_102ad305c();
  func_0x000100082720("SCLensCTAHandlingPluginScopeExposerObservableServiceProvider",0x3c,2);
  pcVar16 = pcVar9;
  FUN_102ad30f4();
  func_0x000100082720("SCLensOrganicCTAHandlingPluginScopeExposerObservableServiceProvider",0x43,2);
  func_0x0001000285a8(0x112eea998,&UNK_10db18120);
  puVar2 = &UNK_110595d88;
  func_0x000107c613fc(&UNK_110595d88,0x1b0,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  *(undefined8 *)(puVar2 + 0x38) = param_9;
  *(undefined8 *)(puVar2 + 0x40) = param_10;
  *(undefined8 *)(puVar2 + 0x48) = param_11;
  *(undefined8 *)(puVar2 + 0x50) = param_12;
  *(undefined8 *)(puVar2 + 0x58) = param_13;
  *(undefined8 *)(puVar2 + 0x60) = param_14;
  *(undefined8 *)(puVar2 + 0x68) = param_15;
  *(undefined8 *)(puVar2 + 0x70) = param_16;
  *(undefined8 *)(puVar2 + 0x78) = param_17;
  *(undefined8 *)(puVar2 + 0x80) = param_18;
  *(undefined8 *)(puVar2 + 0x88) = param_19;
  *(undefined8 *)(puVar2 + 0x90) = param_20;
  *(undefined8 *)(puVar2 + 0x98) = param_21;
  *(undefined8 *)(puVar2 + 0xa0) = param_22;
  *(undefined8 *)(puVar2 + 0xa8) = param_23;
  *(undefined8 *)(puVar2 + 0xb0) = param_24;
  *(undefined8 *)(puVar2 + 0xb8) = param_25;
  *(undefined8 *)(puVar2 + 0xc0) = param_26;
  *(undefined8 *)(puVar2 + 200) = param_27;
  *(undefined8 *)(puVar2 + 0xd0) = param_28;
  *(undefined8 *)(puVar2 + 0xd8) = param_29;
  *(undefined8 *)(puVar2 + 0xe0) = param_30;
  *(undefined8 *)(puVar2 + 0xe8) = param_31;
  *(undefined8 *)(puVar2 + 0xf0) = param_32;
  *(undefined8 *)(puVar2 + 0xf8) = param_33;
  *(undefined8 *)(puVar2 + 0x100) = param_34;
  *(undefined8 *)(puVar2 + 0x108) = param_35;
  *(undefined8 *)(puVar2 + 0x110) = param_36;
  *(undefined8 *)(puVar2 + 0x118) = param_37;
  *(undefined8 *)(puVar2 + 0x120) = param_38;
  *(undefined8 *)(puVar2 + 0x128) = param_39;
  *(undefined8 *)(puVar2 + 0x130) = param_40;
  *(undefined8 *)(puVar2 + 0x138) = param_41;
  *(undefined8 *)(puVar2 + 0x140) = param_42;
  *(undefined8 *)(puVar2 + 0x148) = param_43;
  *(undefined8 *)(puVar2 + 0x150) = param_44;
  *(undefined8 *)(puVar2 + 0x158) = param_45;
  *(undefined8 *)(puVar2 + 0x160) = param_46;
  *(undefined8 *)(puVar2 + 0x168) = param_47;
  *(undefined8 *)(puVar2 + 0x170) = param_48;
  *(undefined8 *)(puVar2 + 0x178) = param_49;
  *(undefined8 *)(puVar2 + 0x180) = param_50;
  *(undefined8 *)(puVar2 + 0x188) = param_51;
  *(undefined8 *)(puVar2 + 400) = param_52;
  *(undefined8 *)(puVar2 + 0x198) = param_53;
  *(char **)(puVar2 + 0x1a0) = pcVar11;
  *(char **)(puVar2 + 0x1a8) = pcVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar10);
  pcVar17 = FUN_102ac90f8;
  func_0x0001000823a8(FUN_102ac90f8,puVar2);
  func_0x000100082720("SCCaptureEntryPointWrapperServiceProvider",0x29,2);
  func_0x0001000285a8(0x112eea9a0,&UNK_10db18128);
  func_0x000107c6157c(pcVar17);
  pcVar18 = FUN_102ac918c;
  func_0x0001000823a8(FUN_102ac918c,pcVar17);
  func_0x000100082720("SCCaptureWorkflowResultServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112eea9a8,&UNK_10db18130);
  puVar2 = &UNK_110595db0;
  func_0x000107c613fc(&UNK_110595db0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_54;
  *(char **)(puVar2 + 0x20) = pcVar15;
  *(char **)(puVar2 + 0x28) = pcVar16;
  func_0x000107c6157c();
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar16);
  uVar19 = 0x102ac9194;
  func_0x0001000823a8(0x102ac9194,puVar2);
  func_0x000100082720("SCLensCTAHandlingPlugInScopeImplModularCameraEntryPointWrapperServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112eea9b0,&UNK_10db185c0);
  func_0x000107c6157c(pcVar17);
  uVar20 = 0x102ac91a0;
  func_0x0001000823a8(0x102ac91a0,pcVar17);
  func_0x000100082720("SCCaptureCameraEmptyServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112eea9b8,&UNK_10db18140);
  puVar2 = &UNK_110595dd8;
  func_0x000107c613fc(&UNK_110595dd8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar20;
  *(undefined8 *)(puVar2 + 0x20) = param_25;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(uVar20);
  uVar21 = 0x102ac91a8;
  func_0x0001000823a8(0x102ac91a8,puVar2);
  func_0x000100082720("SCLensCaptureCameraEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112eea9c0,&UNK_10db18148);
  func_0x000107c6157c(uVar21);
  uVar22 = 0x102ac91b4;
  func_0x0001000823a8(0x102ac91b4,uVar21);
  func_0x000100082720("SCCaptureScopedLensCarouselScopeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112eea9c8,&UNK_10db18150);
  func_0x000107c6157c(uVar21);
  uVar23 = 0x102ac91bc;
  func_0x0001000823a8(0x102ac91bc,uVar21);
  func_0x000100082720("SCLensCameraFeatureServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112eea9d0,&UNK_10db18c60);
  puVar2 = &UNK_110595e00;
  func_0x000107c613fc(&UNK_110595e00,0x90,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar22;
  *(undefined8 *)(puVar2 + 0x20) = param_34;
  *(undefined8 *)(puVar2 + 0x28) = param_55;
  *(undefined8 *)(puVar2 + 0x30) = param_56;
  *(undefined8 *)(puVar2 + 0x38) = param_57;
  *(undefined8 *)(puVar2 + 0x40) = param_58;
  *(undefined8 *)(puVar2 + 0x48) = param_59;
  *(undefined8 *)(puVar2 + 0x50) = param_60;
  *(undefined8 *)(puVar2 + 0x58) = param_61;
  *(undefined8 *)(puVar2 + 0x60) = param_62;
  *(undefined8 *)(puVar2 + 0x68) = param_63;
  *(undefined8 *)(puVar2 + 0x70) = param_13;
  *(undefined8 *)(puVar2 + 0x78) = param_64;
  *(undefined8 *)(puVar2 + 0x80) = param_65;
  *(char **)(puVar2 + 0x88) = pcVar12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(pcVar12);
  pcVar24 = FUN_102ac91c4;
  func_0x0001000823a8(FUN_102ac91c4,puVar2);
  func_0x000100082720("SCLensInReplyCameraScopeEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112eea9d8,&UNK_10db18160);
  func_0x000107c6157c(pcVar24);
  pcVar25 = FUN_102ac9208;
  func_0x0001000823a8(FUN_102ac9208,pcVar24);
  func_0x000100082720("SCCaptureScopedLensCarouselManagementServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112eea9e0,&UNK_10db18e70);
  puVar2 = &UNK_110595e28;
  func_0x000107c613fc(&UNK_110595e28,0x58,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar23;
  *(undefined8 *)(puVar2 + 0x20) = param_66;
  *(undefined8 *)(puVar2 + 0x28) = param_67;
  *(undefined8 *)(puVar2 + 0x30) = param_25;
  *(undefined8 *)(puVar2 + 0x38) = param_68;
  *(code **)(puVar2 + 0x40) = pcVar25;
  *(undefined8 *)(puVar2 + 0x48) = param_69;
  *(char **)(puVar2 + 0x50) = pcVar13;
  func_0x000107c6157c();
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(pcVar25);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(pcVar13);
  pcVar26 = FUN_102ac9210;
  func_0x0001000823a8(FUN_102ac9210,puVar2);
  func_0x000100082720("SCLensModularCameraFeatureServicesEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112eea9e8,&UNK_10db18170);
  puVar2 = &UNK_110595e50;
  func_0x000107c613fc(&UNK_110595e50,0x50,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_70;
  *(code **)(puVar2 + 0x20) = pcVar25;
  *(undefined8 *)(puVar2 + 0x28) = param_71;
  *(undefined8 *)(puVar2 + 0x30) = param_9;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_13;
  *(code **)(puVar2 + 0x48) = pcVar18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(pcVar25);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(pcVar18);
  pcVar27 = FUN_102ac9244;
  func_0x0001000823a8(FUN_102ac9244,puVar2);
  func_0x000100082720("LensInjectionWorkflowEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112eea9f0,&UNK_10db18178);
  func_0x000107c6157c(pcVar26);
  uVar28 = 0x102ac9258;
  func_0x0001000823a8(0x102ac9258,pcVar26);
  func_0x000100082720("SCLensInfoCardPresentationServicesServiceProvider",0x31,2);
  pcVar29 = pcVar4;
  FUN_102ad2908(pcVar4,uVar20,pcVar25,uVar22,pcVar5,pcVar18,pcVar8,uVar23,pcVar6,uVar28,pcVar7,
                pcVar9);
  func_0x000100082720("CaptureScopeGraphBridgeServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112eea9f8,&UNK_10db18180);
  puVar2 = &UNK_110595e78;
  func_0x000107c613fc(&UNK_110595e78,0x68,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(char **)(puVar2 + 0x18) = pcVar29;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar27;
  *(undefined8 *)(puVar2 + 0x30) = uVar34;
  *(code **)(puVar2 + 0x38) = pcVar17;
  *(code **)(puVar2 + 0x40) = pcVar14;
  *(undefined8 *)(puVar2 + 0x48) = uVar19;
  *(undefined8 *)(puVar2 + 0x50) = uVar21;
  *(code **)(puVar2 + 0x58) = pcVar24;
  *(code **)(puVar2 + 0x60) = pcVar26;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(pcVar24);
  func_0x000107c6157c(pcVar26);
  func_0x000107c6157c(pcVar29);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar27);
  func_0x000107c6157c(uVar34);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(uVar19);
  pcVar30 = FUN_102ac9260;
  func_0x0001000823a8(FUN_102ac9260,puVar2);
  func_0x000100082720("SCCaptureScopeInitializationPluginRegistryServiceProvider",0x39,2);
  func_0x0001000285a8(0x112eea908,&UNK_10db17ed0);
  func_0x000107c6157c(pcVar30);
  pcVar31 = FUN_102ac929c;
  func_0x0001000823a8(FUN_102ac929c,pcVar30);
  func_0x000100082720("SCCaptureScopeInitializationServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112eea8f8,&UNK_10db17ec0);
  func_0x000107c6157c(pcVar31);
  uVar32 = 0x102ac92a4;
  func_0x0001000823a8(0x102ac92a4,pcVar31);
  func_0x000100082720("SCCaptureScopedServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110595ea0;
  func_0x000107c613fc(&UNK_110595ea0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar32;
  *(code **)(puVar2 + 0x18) = pcVar14;
  func_0x000107c6157c(pcVar14);
  pcVar33 = FUN_102ac92d8;
  func_0x0001000823a8(FUN_102ac92d8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar34);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(pcVar31);
  func_0x000100082720("SCCaptureScopeEntryPointProvider",0x20,2);
  *param_1 = pcVar33;
  return;
}



/* Entry: 102ac8d50; end: 102ac8f93;  */

void FUN_102ac8d50(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ac8f94; end: 102ac90e7;  */

void FUN_102ac8f94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102ac7c44(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 102ac90e8; end: 102ac90f7;  */

void FUN_102ac90e8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_102ac9558();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_102adfda0(0);
  func_0x000107c613fc();
  uVar2 = uStack_48;
  FUN_102adfb50(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000107c61174(uStack_50);
  uVar3 = uStack_50;
  func_0x000107c61174();
  uVar4 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar2);
  FUN_102adfb5c();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 102ac90f8; end: 102ac918b;  */

void FUN_102ac90f8(void)

{
  long unaff_x20;
  
  FUN_102ac9f10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8));
  return;
}



/* Entry: 102ac918c; end: 102ac91c3;  */

void FUN_102ac918c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x1c8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


