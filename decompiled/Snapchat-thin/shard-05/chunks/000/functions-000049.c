/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a8f884; end: 103a8f88f; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8f884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde310;
  func_0x000107c61428(param_1 + _DAT_112fde310,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8f890; end: 103a8f89b; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider previewActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8f890(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde318;
  func_0x000107c61428(param_1 + _DAT_112fde318,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8f89c; end: 103a8f8df;  */

void FUN_103a8f89c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a8f8e0; end: 103a8f8eb; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider setPreviewActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8f8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde318;
  func_0x000107c61428(param_1 + _DAT_112fde318,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8f8ec; end: 103a8f93f;  */

void FUN_103a8f8ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8f940; end: 103a8fb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a8f940(void)

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
    func_0x000107c4f0bc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a8cdc8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fddd38);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fde320);
      *(long *)(unaff_x20 + _DAT_112fde320) = lVar4;
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
                      "PreviewActiveUserSessionScopeGraphBridge/SCUcoLensMediaAssetSaverServicesSaberServiceProvider.swift"
                      ,99,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8fa6c);
  (*pcVar1)();
}



/* Entry: 103a8fb54; end: 103a8fb87; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider provide] */

void FUN_103a8fb54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a8f940();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a8fb88; end: 103a8fbbb; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider __safeProvide] */

void FUN_103a8fb88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a8fa6c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a8fbbc; end: 103a8fbff; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider end] */

void FUN_103a8fbbc(undefined8 param_1)

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



/* Entry: 103a8fc00; end: 103a8fd97;  */

void FUN_103a8fc00(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e6bc40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f1943c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PreviewActiveUserSessionScopeGraphBridge/SCUcoLensMediaAssetSaverServicesSaberServiceProvider.swift"
                            ,99,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8fd98);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57770();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a8fd98; end: 103a8fe43; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a8fd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a8fc00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a8fe44; end: 103a8feb7; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8fe44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fde310,0);
  func_0x000107c61614(param_1 + _DAT_112fde318,0);
  *(undefined8 *)(param_1 + _DAT_112fde320) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a8feb8; end: 103a8feeb;  */

void FUN_103a8feb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a8feec; end: 103a8ff33; -[SCUcoLensMediaAssetSaverServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8feec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fde310);
  func_0x000107c61610(param_1 + _DAT_112fde318);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fde320));
  return;
}



/* Entry: 103a8ff34; end: 103a8ff53;  */

void FUN_103a8ff34(void)

{
  func_0x000107c61168(&PTR_PTR_112fde368);
  return;
}



/* Entry: 103a8ff54; end: 103a8ff9b; -[_TtC32SCUcoLensMediaAssetSaverServices30UcoLensMediaAssetSaverServices assetSaver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ff54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde3d0;
  func_0x000107c61428(param_1 + _DAT_112fde3d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103a8ff9c; end: 103a8ffff; -[_TtC32SCUcoLensMediaAssetSaverServices30UcoLensMediaAssetSaverServices setAssetSaver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ff9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde3d0;
  func_0x000107c61428(param_1 + _DAT_112fde3d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103a90000; end: 103a90047; -[_TtC32SCUcoLensMediaAssetSaverServices30UcoLensMediaAssetSaverServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90000(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fde3d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a90048; end: 103a9007b;  */

void FUN_103a90048(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a9007c; end: 103a9008b; -[_TtC32SCUcoLensMediaAssetSaverServices30UcoLensMediaAssetSaverServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9007c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fde3d0));
  return;
}



/* Entry: 103a9008c; end: 103a900f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9008c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  func_0x000103a9058c();
  lVar2 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fde400);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fde408);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  puRam000000011380ccb0 = (undefined1 *)plVar3;
  return;
}



/* Entry: 103a900f8; end: 103a90173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a900f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fde400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fde408);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a90174; end: 103a901b3; +[_TtC31SCSnapEditorAppliedLensServices26SnapEditorAppliedLensVenue empty] */

void FUN_103a90174(void)

{
  if (lRam00000001135836c0 != -1) {
    func_0x000107c61568(0x1135836c0,FUN_103a9008c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380ccb0);
  return;
}



/* Entry: 103a901b4; end: 103a901bf; -[_TtC31SCSnapEditorAppliedLensServices26SnapEditorAppliedLensVenue venueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a901b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fde400);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fde400))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a901c0; end: 103a901cb; -[_TtC31SCSnapEditorAppliedLensServices26SnapEditorAppliedLensVenue venueName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a901c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fde408);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fde408))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a901cc; end: 103a90213;  */

void FUN_103a901cc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a90214; end: 103a902a3; -[_TtC31SCSnapEditorAppliedLensServices26SnapEditorAppliedLensVenue initWithVenueId:venueName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fde400);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fde408);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a902a4; end: 103a902c7; -[_TtC31SCSnapEditorAppliedLensServices26SnapEditorAppliedLensVenue isEmpty] */

uint FUN_103a902a4(uint param_1)

{
  FUN_103a902c8();
  return param_1 & 1;
}



/* Entry: 103a902c8; end: 103a90323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103a902c8(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = ((ulong *)(unaff_x20 + _DAT_112fde400))[1];
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112fde400) & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar2 = ((ulong *)(unaff_x20 + _DAT_112fde408))[1];
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112fde408) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    return uVar1 == 0;
  }
  return true;
}



/* Entry: 103a90324; end: 103a90363; -[_TtC31SCSnapEditorAppliedLensServices26SnapEditorAppliedLensVenue .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a90344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a90348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fde400 + 8))
  ;
  return;
}



/* Entry: 103a90364; end: 103a903ab; -[_TtC31SCSnapEditorAppliedLensServices29SnapEditorAppliedLensServices appliedLensNameObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90364(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde410;
  func_0x000107c61428(param_1 + _DAT_112fde410,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103a903ac; end: 103a903b7; -[_TtC31SCSnapEditorAppliedLensServices29SnapEditorAppliedLensServices setAppliedLensNameObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a903ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde410;
  func_0x000107c61428(param_1 + _DAT_112fde410,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103a903b8; end: 103a903ff; -[_TtC31SCSnapEditorAppliedLensServices29SnapEditorAppliedLensServices appliedLensVenueObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a903b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde418;
  func_0x000107c61428(param_1 + _DAT_112fde418,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103a90400; end: 103a9040b; -[_TtC31SCSnapEditorAppliedLensServices29SnapEditorAppliedLensServices setAppliedLensVenueObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde418;
  func_0x000107c61428(param_1 + _DAT_112fde418,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103a9040c; end: 103a9046b;  */

void FUN_103a9040c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 103a9046c; end: 103a90503; -[_TtC31SCSnapEditorAppliedLensServices29SnapEditorAppliedLensServices reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9046c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde410;
  func_0x000107c61428(param_1 + _DAT_112fde410,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112fde418;
  func_0x000107c61428(param_1 + _DAT_112fde418,auStack_60,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103a90504; end: 103a90557; -[_TtC31SCSnapEditorAppliedLensServices29SnapEditorAppliedLensServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90504(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fde410) = 0;
  *(undefined8 *)(param_1 + _DAT_112fde418) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a90558; end: 103a905ab;  */

void FUN_103a90558(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a905ac; end: 103a905e3; -[_TtC31SCSnapEditorAppliedLensServices29SnapEditorAppliedLensServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a905c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a905cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a905ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fde410));
  return;
}



/* Entry: 103a905e4; end: 103a905e7;  */

void FUN_103a905e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a905e8; end: 103a905f3; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices snapEditorContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a905e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde470;
  func_0x000107c61428(param_1 + _DAT_112fde470,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a905f4; end: 103a905ff; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices setSnapEditorContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a905f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde470;
  func_0x000107c61428(param_1 + _DAT_112fde470,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103a90600; end: 103a9060b; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices venueConfigurer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90600(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde478;
  func_0x000107c61428(param_1 + _DAT_112fde478,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a9060c; end: 103a9064f;  */

void FUN_103a9060c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a90650; end: 103a9065b; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices setVenueConfigurer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde478;
  func_0x000107c61428(param_1 + _DAT_112fde478,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103a9065c; end: 103a906bb;  */

void FUN_103a9065c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 103a906bc; end: 103a90727; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices captureLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a906bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fde480;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112fde480);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112fde488);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c5d278(uVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103a90728; end: 103a90773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a90728(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fde480);
  func_0x000107c4b940(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fde488);
  func_0x000107c61174(uVar2);
  func_0x000107c5d278(uVar1);
  return uVar2;
}



/* Entry: 103a90774; end: 103a90807; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices setCaptureLocation:] */

/* WARNING: Possible PIC construction at 0x000103a907dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a907ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a907e0) */
/* WARNING: Removing unreachable block (ram,0x000103a907f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fde480);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c4b940(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fde488);
  *(undefined8 *)(param_1 + _DAT_112fde488) = param_3;
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103a90808; end: 103a9086f;  */

/* WARNING: Possible PIC construction at 0x000103a90850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a90854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90808(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c4b940(*(undefined8 *)(unaff_x20 + _DAT_112fde480));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fde488);
  *(undefined8 *)(unaff_x20 + _DAT_112fde488) = param_1;
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103a90870; end: 103a9090f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a90870(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fde470;
  func_0x000107c61428(unaff_x20 + _DAT_112fde470,auStack_38,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c615e8(uVar2);
  lVar1 = _DAT_112fde478;
  func_0x000107c61428(unaff_x20 + _DAT_112fde478,auStack_50,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c615e8(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fde480);
  func_0x000107c4b940(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fde488);
  *(undefined8 *)(unaff_x20 + _DAT_112fde488) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c5d278(uVar3);
  return;
}



/* Entry: 103a90910; end: 103a90937; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices reset] */

void FUN_103a90910(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103a90870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103a90938; end: 103a9096b;  */

void FUN_103a90938(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a9096c; end: 103a909c3; -[_TtC24SCSnapEditorLazyServices22SnapEditorLazyServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a909a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a909ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9096c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fde470));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fde478));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fde480));
  return;
}



/* Entry: 103a909c4; end: 103a909d7;  */

bool FUN_103a909c4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a909d8; end: 103a90a83;  */

void FUN_103a909d8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a90a84; end: 103a90b0f;  */

undefined1  [16] FUN_103a90a84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar4 = 0x65636e6174736964;
  if (bVar5 != 3) {
    uVar4 = 0x644965756e6576;
  }
  uVar1 = 0xe800000000000000;
  if (bVar5 != 3) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x6b6e6172;
  if (bVar5 != 2) {
    uVar2 = uVar4;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar1;
  }
  uVar1 = 0x656d616e;
  if (bVar5 != 0) {
    uVar1 = 0x7974696c61636f6c;
  }
  uVar3 = 0xe400000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe800000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar2 = uVar1;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 103a90b10; end: 103a90b33;  */

void FUN_103a90b10(undefined1 *param_1,undefined1 param_2)

{
  FUN_103a9142c();
  *param_1 = param_2;
  return;
}



/* Entry: 103a90b34; end: 103a90b4b;  */

undefined1  [16] FUN_103a90b34(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103a90b4c; end: 103a90b9b;  */

void FUN_103a90b4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103a90d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103a90b9c; end: 103a90d27;  */

void FUN_103a90b9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112fde4b8;
  func_0x0001000285a8(0x112fde4b8,&UNK_10dc48160);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_103a90d28();
  func_0x000107c606ec(puVar4,&UNK_1106c7b30,&UNK_1106c7b30,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c60550(unaff_x20[4],&uStack_53,lVar3);
    uStack_54 = 3;
    func_0x000107c6053c(unaff_x20[5],unaff_x20[6],&uStack_54,lVar3);
    uStack_55 = 4;
    func_0x000107c6053c(unaff_x20[7],unaff_x20[8],&uStack_55,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 103a90d28; end: 103a90d7b;  */

void FUN_103a90d28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fde4c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc482cc;
  func_0x000107c61520(&UNK_10dc482cc,&UNK_1106c7b30);
  puRam0000000112fde4c0 = puVar1;
  return;
}



/* Entry: 103a90d7c; end: 103a90d8b;  */

void FUN_103a90d7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a90d8c; end: 103a90def;  */

long FUN_103a90d8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a90df0; end: 103a90f0f;  */

undefined8 * FUN_103a90df0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  param_1[8] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 103a90f10; end: 103a90f7b;  */

undefined8 * FUN_103a90f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103a90f7c; end: 103a9104b;  */

int FUN_103a90f7c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a9104c; end: 103a910e7;  */

undefined8 * FUN_103a9104c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103a91024(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103a910e8; end: 103a9112b;  */

undefined8 * FUN_103a910e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001010d87fc(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103a9112c; end: 103a91363;  */

int FUN_103a9112c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a91364; end: 103a913a3;  */

void FUN_103a91364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fde4c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc482a4;
  func_0x000107c61520(&UNK_10dc482a4,&UNK_1106c7b30);
  puRam0000000112fde4c8 = puVar1;
  return;
}



/* Entry: 103a913a4; end: 103a913a7;  */

void FUN_103a913a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fde4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4823c;
  func_0x000107c61520(&UNK_10dc4823c,&UNK_1106c7b30);
  puRam0000000112fde4d0 = puVar1;
  return;
}



/* Entry: 103a913a8; end: 103a913e7;  */

void FUN_103a913a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fde4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4823c;
  func_0x000107c61520(&UNK_10dc4823c,&UNK_1106c7b30);
  puRam0000000112fde4d0 = puVar1;
  return;
}



/* Entry: 103a913e8; end: 103a913eb;  */

void FUN_103a913e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fde4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc48214;
  func_0x000107c61520(&UNK_10dc48214,&UNK_1106c7b30);
  puRam0000000112fde4d8 = puVar1;
  return;
}



/* Entry: 103a913ec; end: 103a9142b;  */

void FUN_103a913ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fde4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc48214;
  func_0x000107c61520(&UNK_10dc48214,&UNK_1106c7b30);
  puRam0000000112fde4d8 = puVar1;
  return;
}



/* Entry: 103a9142c; end: 103a915d7;  */

undefined4 FUN_103a9142c(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x656d616e || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x656d616e,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 == 0x7974696c61636f6c) && (param_2 == -0x1800000000000000)) ||
         (func_0x000107c605b8(0x7974696c61636f6c,0xe800000000000000,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        return 1;
      }
      if ((param_1 != 0x6b6e6172) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0;
        func_0x000107c605b8(0x6b6e6172,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0;
          if (((param_1 != 0x65636e6174736964) || (param_2 != -0x1800000000000000)) &&
             (func_0x000107c605b8(0x65636e6174736964,0xe800000000000000,param_1,param_2,0),
             (uVar1 & 1) == 0)) {
            uVar1 = 0;
            if ((param_1 == 0x644965756e6576) && (param_2 == -0x1900000000000000)) {
              func_0x000107c6142c(0xe700000000000000);
              return 4;
            }
            func_0x000107c605b8(0x644965756e6576,0xe700000000000000,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar1 & 1) != 0) {
              return 4;
            }
            return 5;
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 103a915d8; end: 103a915df;  */

undefined8 * FUN_103a915d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103a91024(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103a915e0; end: 103a91707;  */

void FUN_103a915e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103a91708; end: 103a917e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a91708(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x0001010cd510(param_1,unaff_x20 + _DAT_112fde4e0);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103a917e8; end: 103a91847; -[SCLensVenuesProvidingServices init] */

void FUN_103a917e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVenuesProvidingServices.LensVenuesProvidingServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a91814);
  (*pcVar1)();
}



/* Entry: 103a91848; end: 103a91857; -[SCLensVenuesProvidingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91848(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112fde4e0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fde4e0));
  return;
}



/* Entry: 103a91858; end: 103a91877;  */

void FUN_103a91858(void)

{
  func_0x000107c61168(&PTR_PTR_11291cf68);
  return;
}



/* Entry: 103a91878; end: 103a918ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a91878(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa6538();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fde510) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fde518) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a91900);
  (*pcVar1)();
}



/* Entry: 103a91900; end: 103a9195f; -[_TtC40ProfileActiveUserSessionScopeGraphBridge55ProfileActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a91900(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProfileActiveUserSessionScopeGraphBridge.ProfileActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a9192c);
  (*pcVar1)();
}



/* Entry: 103a91960; end: 103a91997; -[_TtC40ProfileActiveUserSessionScopeGraphBridge55ProfileActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a9197c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a91980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fde510));
  return;
}



/* Entry: 103a91998; end: 103a919bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91998(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fde518),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fde510));
  return;
}



/* Entry: 103a919c0; end: 103a91a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a919c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fde6f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a91a24; end: 103a91a2b;  */

void FUN_103a91a24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a91a2c; end: 103a91acb;  */

void FUN_103a91a2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a91acc; end: 103a91aeb;  */

void FUN_103a91acc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a91aec; end: 103a91b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a91aec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fde700);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a91b50; end: 103a91b57;  */

void FUN_103a91b50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a91b58; end: 103a91bf7;  */

void FUN_103a91b58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a91bf8; end: 103a91c17;  */

void FUN_103a91bf8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a91c18; end: 103a91c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91c18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fde6f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fde700) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a91c7c; end: 103a91cdb; -[_TtC40ProfileActiveUserSessionScopeGraphBridge48ProfileActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103a91c7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProfileActiveUserSessionScopeGraphBridge.ProfileActiveUserSessionScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a91ca8);
  (*pcVar1)();
}



/* Entry: 103a91cdc; end: 103a91d6f; -[_TtC40ProfileActiveUserSessionScopeGraphBridge48ProfileActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a91cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a91cfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a91cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fde6f8));
  return;
}



/* Entry: 103a91d70; end: 103a91da7;  */

undefined1  [16] FUN_103a91d70(void)

{
  return ZEXT816(0x1106c7dc8);
}



/* Entry: 103a91da8; end: 103a91deb; -[SCProfileActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103a91da8(undefined8 param_1)

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



/* Entry: 103a91dec; end: 103a91e1f;  */

void FUN_103a91dec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


