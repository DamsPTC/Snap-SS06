/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b99634; end: 100b99687;  */

void FUN_100b99634(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b99688; end: 100b99693; -[SCPreviewLazyServicesSaberServiceProvider setPreviewActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99688(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdddd8;
  func_0x000107c61428(param_1 + _DAT_112fdddd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b99694; end: 100b996c7; -[SCPreviewLazyServicesSaberServiceProvider __safeProvide] */

void FUN_100b99694(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b996c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b996c8; end: 100b997af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b996c8(void)

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
    func_0x000107c4f0bc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b9980c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fddd00);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fddde0);
      *(long *)(unaff_x20 + _DAT_112fddde0) = lVar3;
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



/* Entry: 100b997b0; end: 100b997bb; -[SCPreviewLazyServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b997b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdddd0;
  func_0x000107c61428(param_1 + _DAT_112fdddd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b997bc; end: 100b997ff;  */

void FUN_100b997bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b99800; end: 100b9980b; -[SCPreviewLazyServicesSaberServiceProvider previewActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99800(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdddd8;
  func_0x000107c61428(param_1 + _DAT_112fdddd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9980c; end: 100b99887;  */

void FUN_100b9980c(undefined8 param_1)

{
  if (lRam0000000112fdd698 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a4c30);
  return;
}



/* Entry: 100b99888; end: 100b9988f;  */

void FUN_100b99888(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b99890; end: 100b998e3;  */

void FUN_100b99890(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b998e4; end: 100b998eb;  */

void FUN_100b998e4(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100292ac0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100b99974(0);
  func_0x000107c613fc();
  FUN_100b999f0(uStack_38,uVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
  FUN_100b99ab0();
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_38;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100b998ec; end: 100b99973;  */

void FUN_100b998ec(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100292ac0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100b99974(0);
  func_0x000107c613fc();
  FUN_100b999f0(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  FUN_100b99ab0();
  *(undefined8 *)(param_2 + 0x18) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 100b99974; end: 100b999ef;  */

void FUN_100b99974(undefined8 param_1)

{
  if (lRam00000001134a08a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e696550);
  return;
}



/* Entry: 100b999f0; end: 100b99a37;  */

void FUN_100b999f0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1002af90c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return;
}



/* Entry: 100b99a38; end: 100b99aaf; -[_TtC21SCPreviewLazyServices19PreviewLazyServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99a38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff4f40) = 0;
  *(undefined8 *)(param_1 + _DAT_112ff4f48) = 0;
  *(undefined8 *)(param_1 + _DAT_112ff4f50) = 0;
  func_0x000107c61614(param_1 + _DAT_112ff4f58,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b99ab0; end: 100b99ab7;  */

void FUN_100b99ab0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100b99ab8; end: 100b99ac3; -[SCLensVenuePostCaptureIntegrationEntryPoint setPreviewLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b2f8;
  func_0x000107c61428(param_1 + _DAT_112d5b2f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b99ac4; end: 100b99b37; -[SCSnapEditorLazyServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99ac4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fde250,0);
  func_0x000107c61614(param_1 + _DAT_112fde258,0);
  *(undefined8 *)(param_1 + _DAT_112fde260) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b99b38; end: 100b99be3; -[SCSnapEditorLazyServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b99b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b99be4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b99be4; end: 100b99d7b;  */

void FUN_100b99be4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e6bc40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f1943c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PreviewActiveUserSessionScopeGraphBridge/SCSnapEditorLazyServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b99d7c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57770();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b99d7c; end: 100b99d87; -[SCSnapEditorLazyServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde250;
  func_0x000107c61428(param_1 + _DAT_112fde250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b99d88; end: 100b99ddb;  */

void FUN_100b99d88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b99ddc; end: 100b99de7; -[SCSnapEditorLazyServicesSaberServiceProvider setPreviewActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde258;
  func_0x000107c61428(param_1 + _DAT_112fde258,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b99de8; end: 100b99e1b; -[SCSnapEditorLazyServicesSaberServiceProvider __safeProvide] */

void FUN_100b99de8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b99e1c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b99e1c; end: 100b99f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99e1c(void)

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
    func_0x000107c4f0bc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b99f60();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fddd30);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fde260);
      *(long *)(unaff_x20 + _DAT_112fde260) = lVar3;
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



/* Entry: 100b99f04; end: 100b99f0f; -[SCSnapEditorLazyServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99f04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde250;
  func_0x000107c61428(param_1 + _DAT_112fde250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b99f10; end: 100b99f53;  */

void FUN_100b99f10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b99f54; end: 100b99f5f; -[SCSnapEditorLazyServicesSaberServiceProvider previewActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b99f54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde258;
  func_0x000107c61428(param_1 + _DAT_112fde258,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b99f60; end: 100b99fdb;  */

void FUN_100b99f60(undefined8 param_1)

{
  if (lRam0000000112fddb78 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a4e88);
  return;
}



/* Entry: 100b99fdc; end: 100b99fe3;  */

void FUN_100b99fdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b99fe4; end: 100b9a037;  */

void FUN_100b99fe4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b9a038; end: 100b9a03f;  */

void FUN_100b9a038(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002ab0c8();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100b9a0c8(0);
  func_0x000107c613fc();
  FUN_100b9a144(uStack_38,uVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
  FUN_100b9a214();
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_38;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100b9a040; end: 100b9a0c7;  */

void FUN_100b9a040(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002ab0c8();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100b9a0c8(0);
  func_0x000107c613fc();
  FUN_100b9a144(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  FUN_100b9a214();
  *(undefined8 *)(param_2 + 0x18) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 100b9a0c8; end: 100b9a143;  */

void FUN_100b9a0c8(undefined8 param_1)

{
  if (lRam00000001134a0890 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6964e0);
  return;
}



/* Entry: 100b9a144; end: 100b9a18b;  */

void FUN_100b9a144(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1002b4ef8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return;
}



/* Entry: 100b9a18c; end: 100b9a213; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a18c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fde470) = 0;
  *(undefined8 *)(param_1 + _DAT_112fde478) = 0;
  lVar1 = _DAT_112fde480;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112fde488) = 0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9a214; end: 100b9a21b;  */

void FUN_100b9a214(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100b9a21c; end: 100b9a227; -[SCLensVenuePostCaptureIntegrationEntryPoint setSnapEditorLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b300;
  func_0x000107c61428(param_1 + _DAT_112d5b300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9a228; end: 100b9a233; -[SCLensVenuePostCaptureIntegrationEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b308;
  func_0x000107c61428(param_1 + _DAT_112d5b308,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9a234; end: 100b9a25b; -[SCLensVenuePostCaptureIntegrationEntryPoint begin] */

void FUN_100b9a234(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b9a25c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b9a25c; end: 100b9a70f;  */

/* WARNING: Possible PIC construction at 0x000100b9a374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9a3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9a404) */
/* WARNING: Removing unreachable block (ram,0x000100b9a3f4) */
/* WARNING: Removing unreachable block (ram,0x000100b9a424) */
/* WARNING: Removing unreachable block (ram,0x000100b9a414) */
/* WARNING: Removing unreachable block (ram,0x000100b9a454) */
/* WARNING: Removing unreachable block (ram,0x000100b9a444) */
/* WARNING: Removing unreachable block (ram,0x000100b9a6dc) */
/* WARNING: Removing unreachable block (ram,0x000100b9a6cc) */
/* WARNING: Removing unreachable block (ram,0x000100b9a6bc) */
/* WARNING: Removing unreachable block (ram,0x000100b9a6ac) */
/* WARNING: Removing unreachable block (ram,0x000100b9a698) */
/* WARNING: Removing unreachable block (ram,0x000100b9a6e0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100b9a688) */
/* WARNING: Removing unreachable block (ram,0x000100b9a678) */
/* WARNING: Removing unreachable block (ram,0x000100b9a668) */
/* WARNING: Removing unreachable block (ram,0x000100b9a658) */
/* WARNING: Removing unreachable block (ram,0x000100b9a378) */
/* WARNING: Removing unreachable block (ram,0x000100b9a388) */
/* WARNING: Removing unreachable block (ram,0x000100b9a480) */
/* WARNING: Removing unreachable block (ram,0x000100b9a6a4) */
/* WARNING: Removing unreachable block (ram,0x000100b9a390) */
/* WARNING: Removing unreachable block (ram,0x000100b9a4a0) */
/* WARNING: Removing unreachable block (ram,0x000100b9a3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a25c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d1c4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar1 = unaff_x20;
      func_0x000107c4b534();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar2;
      }
      else {
        lVar1 = unaff_x20;
        func_0x000107c4b364();
        func_0x000107c61180();
        if (lVar1 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
        }
        else {
          lVar1 = unaff_x20;
          func_0x000107c4f148();
          func_0x000107c61180();
          if (lVar1 != 0) {
            lVar1 = unaff_x20;
            func_0x000107c5b24c();
            func_0x000107c61180();
            if (lVar1 != 0) {
              func_0x000107c3fa0c();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar3);
                lVar3 = lVar2;
              }
              else {
                lVar2 = 0;
                FUN_100b9a7cc();
                func_0x000107c613fc();
                *(undefined8 *)(lVar2 + 0x10) = 0;
                lVar3 = *(long *)(lVar3 + _DAT_113074ea0);
                func_0x000107c40534(lVar3);
                func_0x000107c61180();
                func_0x000107c5faec();
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
  return;
}



/* Entry: 100b9a710; end: 100b9a733;  */

void FUN_100b9a710(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9a734; end: 100b9a73f; -[SCLensVenuePostCaptureIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a734(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b2d8;
  func_0x000107c61428(param_1 + _DAT_112d5b2d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9a740; end: 100b9a783;  */

void FUN_100b9a740(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9a784; end: 100b9a78f; -[SCLensVenuePostCaptureIntegrationEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b2e0;
  func_0x000107c61428(param_1 + _DAT_112d5b2e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9a790; end: 100b9a79b; -[SCLensVenuePostCaptureIntegrationEntryPoint lensVenueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a790(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b2e8;
  func_0x000107c61428(param_1 + _DAT_112d5b2e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9a79c; end: 100b9a7a7; -[SCLensVenuePostCaptureIntegrationEntryPoint lensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a79c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b2f0;
  func_0x000107c61428(param_1 + _DAT_112d5b2f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9a7a8; end: 100b9a7b3; -[SCLensVenuePostCaptureIntegrationEntryPoint previewLazyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a7a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b2f8;
  func_0x000107c61428(param_1 + _DAT_112d5b2f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9a7b4; end: 100b9a7bf; -[SCLensVenuePostCaptureIntegrationEntryPoint snapEditorLazyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a7b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b300;
  func_0x000107c61428(param_1 + _DAT_112d5b300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9a7c0; end: 100b9a7cb; -[SCLensVenuePostCaptureIntegrationEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a7c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b308;
  func_0x000107c61428(param_1 + _DAT_112d5b308,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9a7cc; end: 100b9a7eb;  */

void FUN_100b9a7cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d5aec8);
  return;
}



/* Entry: 100b9a7ec; end: 100b9a7f7;  */

undefined * FUN_100b9a7ec(void)

{
  return &UNK_10dcf5420;
}



/* Entry: 100b9a7f8; end: 100b9a8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9a7f8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5b340,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b348,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b350,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b358,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b360,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5b368,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5b370) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9a8bc; end: 100b9a8db; -[SCLensVenuePreCaptureIntegrationEntryPoint init] */

void FUN_100b9a8bc(void)

{
  FUN_100b9a7f8();
  return;
}



/* Entry: 100b9a8dc; end: 100b9a987; -[SCLensVenuePreCaptureIntegrationEntryPoint setValue:forIvarName:] */

void FUN_100b9a8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9a988(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9a988; end: 100b9acd7;  */

void FUN_100b9a988(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x49556172656d6163;
    if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
       (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c530ec();
    }
    else {
      if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10db870)) {
        uVar2 = 0xd000000000000011;
        func_0x000107c605b8(0xd000000000000011,0x800000010ef24790,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10dc330)) ||
             (func_0x000107c605b8(0xd000000000000016,0x800000010ef23cd0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55e20();
          }
          else {
            uVar2 = 0xd000000000000017;
            if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10db7d0)) ||
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef24830,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c530b0();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
                 (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "LensVenuePostCaptureIntegration/SCLensVenuePreCaptureIntegrationEntryPoint.swift"
                                    ,0x50,2,0x3e,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9acd8);
                (*pcVar1)();
              }
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53414();
            }
          }
          goto LAB_100b9aa18;
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c55f00();
    }
  }
LAB_100b9aa18:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b9acd8; end: 100b9ace3; -[SCLensVenuePreCaptureIntegrationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9acd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b340;
  func_0x000107c61428(param_1 + _DAT_112d5b340,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9ace4; end: 100b9ad37;  */

void FUN_100b9ace4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9ad38; end: 100b9ad43; -[SCLensVenuePreCaptureIntegrationEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ad38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b348;
  func_0x000107c61428(param_1 + _DAT_112d5b348,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9ad44; end: 100b9ad4f; -[SCLensVenuePreCaptureIntegrationEntryPoint setLensVenueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ad44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b350;
  func_0x000107c61428(param_1 + _DAT_112d5b350,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9ad50; end: 100b9ad5b; -[SCLensVenuePreCaptureIntegrationEntryPoint setLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ad50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b358;
  func_0x000107c61428(param_1 + _DAT_112d5b358,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9ad5c; end: 100b9adcf; -[SCSCCameraSnapModelServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ad5c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee04e8,0);
  func_0x000107c61614(param_1 + _DAT_112ee04f0,0);
  *(undefined8 *)(param_1 + _DAT_112ee04f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9add0; end: 100b9ae7b; -[SCSCCameraSnapModelServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b9add0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9ae7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9ae7c; end: 100b9b013;  */

void FUN_100b9ae7c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f1ea20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f0e15e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraUIScopeGraphBridge/SCSCCameraSnapModelServicesSaberServiceProvider.swift"
                            ,0x4e,2,0x100,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9b014);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c530f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b9b014; end: 100b9b01f; -[SCSCCameraSnapModelServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b014(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee04e8;
  func_0x000107c61428(param_1 + _DAT_112ee04e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9b020; end: 100b9b073;  */

void FUN_100b9b020(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9b074; end: 100b9b07f; -[SCSCCameraSnapModelServicesSaberServiceProvider setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee04f0;
  func_0x000107c61428(param_1 + _DAT_112ee04f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9b080; end: 100b9b0b3; -[SCSCCameraSnapModelServicesSaberServiceProvider __safeProvide] */

void FUN_100b9b080(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b9b0b4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b9b0b4; end: 100b9b19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b0b4(void)

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
    func_0x000107c3f288();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b9b1f8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112eded08);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee04f8);
      *(long *)(unaff_x20 + _DAT_112ee04f8) = lVar3;
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



/* Entry: 100b9b19c; end: 100b9b1a7; -[SCSCCameraSnapModelServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b19c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee04e8;
  func_0x000107c61428(param_1 + _DAT_112ee04e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b1a8; end: 100b9b1eb;  */

void FUN_100b9b1a8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9b1ec; end: 100b9b1f7; -[SCSCCameraSnapModelServicesSaberServiceProvider cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b1ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee04f0;
  func_0x000107c61428(param_1 + _DAT_112ee04f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b1f8; end: 100b9b273;  */

void FUN_100b9b1f8(undefined8 param_1)

{
  if (lRam0000000112edcd10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70a794);
  return;
}



/* Entry: 100b9b274; end: 100b9b27f; -[SCLensVenuePreCaptureIntegrationEntryPoint setCameraSnapModelServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b360;
  func_0x000107c61428(param_1 + _DAT_112d5b360,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9b280; end: 100b9b28b; -[SCLensVenuePreCaptureIntegrationEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5b368;
  func_0x000107c61428(param_1 + _DAT_112d5b368,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9b28c; end: 100b9b2b3; -[SCLensVenuePreCaptureIntegrationEntryPoint begin] */

void FUN_100b9b28c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b9b2b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b9b2b4; end: 100b9b6db;  */

/* WARNING: Possible PIC construction at 0x000100b9b3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b6a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b9b468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9b48c) */
/* WARNING: Removing unreachable block (ram,0x000100b9b47c) */
/* WARNING: Removing unreachable block (ram,0x000100b9b4ac) */
/* WARNING: Removing unreachable block (ram,0x000100b9b49c) */
/* WARNING: Removing unreachable block (ram,0x000100b9b508) */
/* WARNING: Removing unreachable block (ram,0x000100b9b4f8) */
/* WARNING: Removing unreachable block (ram,0x000100b9b4e8) */
/* WARNING: Removing unreachable block (ram,0x000100b9b6a4) */
/* WARNING: Removing unreachable block (ram,0x000100b9b68c) */
/* WARNING: Removing unreachable block (ram,0x000100b9b67c) */
/* WARNING: Removing unreachable block (ram,0x000100b9b66c) */
/* WARNING: Removing unreachable block (ram,0x000100b9b414) */
/* WARNING: Removing unreachable block (ram,0x000100b9b6ac) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100b9b404) */
/* WARNING: Removing unreachable block (ram,0x000100b9b3f4) */
/* WARNING: Removing unreachable block (ram,0x000100b9b3b8) */
/* WARNING: Removing unreachable block (ram,0x000100b9b3c4) */
/* WARNING: Removing unreachable block (ram,0x000100b9b3c8) */
/* WARNING: Removing unreachable block (ram,0x000100b9b4d8) */
/* WARNING: Removing unreachable block (ram,0x000100b9b3cc) */
/* WARNING: Removing unreachable block (ram,0x000100b9b518) */
/* WARNING: Removing unreachable block (ram,0x000100b9b3ec) */
/* WARNING: Removing unreachable block (ram,0x000100b9b46c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b2b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f284();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar1 = unaff_x20;
      func_0x000107c4b534();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar2;
      }
      else {
        lVar1 = unaff_x20;
        func_0x000107c4b364();
        func_0x000107c61180();
        if (lVar1 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c3f21c();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c3fa0c();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar2 = 0;
              FUN_100b9b78c();
              func_0x000107c613fc();
              *(undefined8 *)(lVar2 + 0x10) = 0;
              lVar3 = *(long *)(lVar3 + _DAT_113074ea0);
              func_0x000107c40534(lVar3);
              func_0x000107c61180();
              func_0x000107c5faec();
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
  return;
}



/* Entry: 100b9b6dc; end: 100b9b6ff;  */

void FUN_100b9b6dc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9b700; end: 100b9b70b; -[SCLensVenuePreCaptureIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b700(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b340;
  func_0x000107c61428(param_1 + _DAT_112d5b340,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b70c; end: 100b9b74f;  */

void FUN_100b9b70c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9b750; end: 100b9b75b; -[SCLensVenuePreCaptureIntegrationEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b750(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b348;
  func_0x000107c61428(param_1 + _DAT_112d5b348,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b75c; end: 100b9b767; -[SCLensVenuePreCaptureIntegrationEntryPoint lensVenueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b75c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b350;
  func_0x000107c61428(param_1 + _DAT_112d5b350,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b768; end: 100b9b773; -[SCLensVenuePreCaptureIntegrationEntryPoint lensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b768(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b358;
  func_0x000107c61428(param_1 + _DAT_112d5b358,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b774; end: 100b9b77f; -[SCLensVenuePreCaptureIntegrationEntryPoint cameraSnapModelServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b774(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b360;
  func_0x000107c61428(param_1 + _DAT_112d5b360,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b780; end: 100b9b78b; -[SCLensVenuePreCaptureIntegrationEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9b780(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5b368;
  func_0x000107c61428(param_1 + _DAT_112d5b368,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9b78c; end: 100b9b7eb;  */

void FUN_100b9b78c(void)

{
  func_0x000107c61168(&PTR_PTR_112d5af70);
  return;
}



/* Entry: 100b9b7ec; end: 100b9b8a3;  */

void FUN_100b9b7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  uStack_48 = 0;
  FUN_1000285a8(0x112d5b090,&UNK_10d9222e8);
  func_0x000107c613fc();
  puVar2 = &uStack_48;
  FUN_10006c248();
  *(undefined8 **)(unaff_x20 + 0x30) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  FUN_100b9ba20();
  return;
}



/* Entry: 100b9b8a4; end: 100b9b8c3;  */

void FUN_100b9b8a4(void)

{
  func_0x000107c61168(&PTR_PTR_11295ed80);
  return;
}



/* Entry: 100b9b8c4; end: 100b9b9eb; -[SCSQLiteTransactorProviderImpl initWithDatabaseDirectoryPath:logger:flipper:] */

undefined1 *
FUN_100b9b8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_112705480;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b9b9ec; end: 100b9ba1f;  */

void FUN_100b9b9ec(void)

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



/* Entry: 100b9ba20; end: 100b9bc03;  */

void FUN_100b9ba20(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  plVar1 = (long *)&UNK_10d9222d0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  FUN_1000285a8(0x112d5b098,&UNK_10d9222f0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5dcd8(uVar2);
  func_0x000107c61180();
  uVar9 = uVar2;
  func_0x0001000b637c();
  func_0x000107c61170(uVar2);
  plVar3 = plVar1;
  func_0x000107c615f0();
  FUN_100471e0c();
  func_0x000107c61574(uVar9);
  func_0x000107c615e8(plVar1);
  puVar6 = &UNK_110381558;
  puVar4 = puVar6;
  func_0x000107c613fc(&UNK_110381558,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_1010c2400;
  puVar8 = puVar4;
  (**(code **)(*plVar3 + 0x60))(&UNK_1010c2400);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c614f0(puVar5);
  (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + 0x28),puVar4,puVar8);
  func_0x000107c615e8(puVar5);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c613fc(&UNK_110381558,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar5 = &UNK_110381580;
  func_0x000107c613fc(&UNK_110381580,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar6;
  *(long **)(puVar5 + 0x18) = plVar1;
  puStack_60 = &UNK_1010c2408;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010c2158;
  puStack_68 = &UNK_110381598;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c615f0(plVar1);
  func_0x000107c61574(puVar6);
  func_0x000107c4db94(uVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(plVar1);
  return;
}



/* Entry: 100b9bc04; end: 100b9bc53;  */

void FUN_100b9bc04(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9bc54; end: 100b9bc5b;  */

void FUN_100b9bc54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b9bc5c; end: 100b9bd1b; -[SCMemoriesAssetRepositoryImplCpp initWithTransactorProvider:name:dispatchQueue:wipe:] */

undefined8
FUN_100b9bc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8780;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61158(puVar1);
  uVar2 = param_3;
  func_0x000107c5cecc(param_3,param_2,puVar1,param_4,0,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c48e5c(param_1,param_2,uVar2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 100b9bd1c; end: 100b9bd3f; -[SCSQLiteTransactorProviderImpl transactorWithClass:databaseName:shared:wipe:] */

void FUN_100b9bd1c(void)

{
  func_0x000107c5ced0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9bd40; end: 100b9bf5f; -[SCSQLiteTransactorProviderImpl transactorWithClass:databaseName:shared:wipe:isSingleConnectionMode:autoVacuum:] */

void FUN_100b9bd40(long param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined *puVar6;
  
  func_0x000107c61174(param_4);
  func_0x000107c611ec(param_1 + 0x20);
  uVar1 = param_4;
  func_0x000107c49cec(param_4,param_2,&PTR____CFConstantStringClassReference_110ddd558);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_4,
     func_0x000107c49cec(param_4,param_2,&PTR____CFConstantStringClassReference_110daafd8),
     (int)uVar1 == 0)) {
    func_0x000107c61174(param_4);
    uVar5 = 0;
    uVar1 = param_4;
  }
  else {
    uVar1 = param_3;
    func_0x000107c60b14(param_3);
    func_0x000107c61180();
    uVar5 = 1;
  }
  puVar2 = *(undefined **)(param_1 + 0x18);
  func_0x000107c4d9e8(puVar2,param_2,uVar1);
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    if ((param_5 | uVar5) == 1) {
      func_0x000107c61174(param_4);
      uVar4 = param_4;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x000107c5c168(uVar4,param_2,param_4);
      func_0x000107c61180();
    }
    func_0x000107c3d648(*(undefined8 *)(param_1 + 0x28),param_2,uVar4);
    func_0x000107c4bafc(*(undefined8 *)(param_1 + 0x10),param_2,uVar4);
    puVar6 = PTR_PTR_1126c03b0;
    func_0x000107c610f4();
    func_0x000107c3ba04();
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x18),param_2,puVar6,uVar1);
    }
    func_0x000107c61170(uVar4);
  }
  else {
    puVar3 = puVar2;
    func_0x000107c3bbb4(puVar2,param_2,param_3);
    puVar6 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_100b9bec8;
    }
  }
  func_0x000107c61174(puVar6);
  puVar2 = puVar6;
LAB_100b9bec8:
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c611f0(param_1 + 0x20);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100b9bf60; end: 100b9bf83; -[_TtC13LensVenueImpl16LensVenueManager venueSelectionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9bf60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ef8f48));
  return;
}



/* Entry: 100b9bf84; end: 100b9c003; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9bf84(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8860,0);
  func_0x000107c61614(param_1 + _DAT_112ef8868,0);
  *(undefined8 *)(param_1 + _DAT_112ef8870) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef8878) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9c004; end: 100b9c0af; -[SCSCViewfinderDataPipelineServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b9c004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9c0b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9c0b0; end: 100b9c2b3;  */

void FUN_100b9c0b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000027;
        if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0f0a810)) &&
           (func_0x000107c605b8(0xd000000000000027,0x800000010f0f57f0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ViewfinderScopeGraphBridge/SCSCViewfinderDataPipelineServicesSaberEntryPoint.swift"
                              ,0x52,2,0x40,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9c2b4);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58b1c();
        goto LAB_100b9c13c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
LAB_100b9c13c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


