/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b46f94; end: 103b46fa3; -[SCAdReportHideAdScope reportVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b46f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee1d0));
  return;
}



/* Entry: 103b46fa4; end: 103b46fb3; -[SCAdReportHideAdScope isAppInstallOrDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b46fa4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fee1d8);
}



/* Entry: 103b46fb4; end: 103b46fd3; -[SCAdReportHideAdScope eventTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b46fb4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b46fd4; end: 103b46ff3; -[SCAdReportHideAdScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b46fd4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee1e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b46ff4; end: 103b4703b; -[SCAdReportHideAdScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b46ff4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee1f0;
  func_0x000107c61428(param_1 + _DAT_112fee1f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b4703c; end: 103b47093; -[SCAdReportHideAdScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4703c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee1f0;
  func_0x000107c61428(param_1 + _DAT_112fee1f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b47094; end: 103b470bf; -[SCAdReportHideAdScope init] */

void FUN_103b47094(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdReportScope.SCAdReportHideAdScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b470c0);
  (*pcVar1)();
}



/* Entry: 103b470c0; end: 103b470c3;  */

void FUN_103b470c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b470c4; end: 103b47153; -[SCAdReportHideAdScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b470c4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fee1c8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee1d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee1e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee1e8));
  param_1 = param_1 + _DAT_112fee1f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b47154; end: 103b471bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47154(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033eac0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fee200) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b471c0; end: 103b471c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b471c0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033eac0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee200) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103b471c8; end: 103b47213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b471c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee200) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b47214; end: 103b47373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b47214(long param_1,long param_2,undefined8 param_3,undefined1 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x000100334658();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112fee1f0;
  func_0x000107c61614(lVar4 + _DAT_112fee1f0,0);
  plVar5 = (long *)(lVar4 + _DAT_112fee1c8);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_112fee1d0) = param_3;
  *(undefined1 *)(lVar4 + _DAT_112fee1d8) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112fee1e0) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112fee1e8) = param_6;
  func_0x000107c61428(lVar4 + lVar2,auStack_78,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_7);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  plVar5 = &lStack_88;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 103b47374; end: 103b4745f; -[_TtC15SCAdReportScope29SCAdReportHideAdScopeServices buildWithAdId:reportVersion:isAppInstallOrDeeplink:eventTracker:uiContainer:delegate:] */

void FUN_103b47374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  FUN_103b47214(param_3,param_2,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b47460; end: 103b474bf; -[_TtC15SCAdReportScope29SCAdReportHideAdScopeServices init] */

void FUN_103b47460(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdReportScope.SCAdReportHideAdScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4748c);
  (*pcVar1)();
}



/* Entry: 103b474c0; end: 103b474f3; -[_TtC15SCAdReportScope29SCAdReportHideAdScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b474c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fee200));
  return;
}



/* Entry: 103b474f4; end: 103b47503; -[SCAdReportReportAdScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b474f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee270));
  return;
}



/* Entry: 103b47504; end: 103b47523; -[SCAdReportReportAdScope eventTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47504(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee278));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b47524; end: 103b47543; -[SCAdReportReportAdScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47524(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee280));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b47544; end: 103b47563; -[SCAdReportReportAdScope uiContainerV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47544(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee288));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b47564; end: 103b475ab; -[SCAdReportReportAdScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47564(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee290;
  func_0x000107c61428(param_1 + _DAT_112fee290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b475ac; end: 103b47603; -[SCAdReportReportAdScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b475ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee290;
  func_0x000107c61428(param_1 + _DAT_112fee290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b47604; end: 103b4762f; -[SCAdReportReportAdScope init] */

void FUN_103b47604(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdReportScope.SCAdReportReportAdScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b47630);
  (*pcVar1)();
}



/* Entry: 103b47630; end: 103b47633;  */

void FUN_103b47630(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b47634; end: 103b4770b; -[SCAdReportReportAdScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b47634(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee270));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee278));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee280));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee288));
  param_1 = param_1 + _DAT_112fee290;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b4770c; end: 103b4784b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b4770c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001003346f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112fee290;
  func_0x000107c61614(lVar4 + _DAT_112fee290,0);
  *(long *)(lVar4 + _DAT_112fee270) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112fee278) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112fee280) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112fee288) = param_4;
  func_0x000107c61428(lVar4 + lVar2,auStack_78,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  plVar5 = &lStack_88;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 103b4784c; end: 103b47917; -[_TtC15SCAdReportScope31SCAdReportReportAdScopeServices buildWithConfig:eventTracker:uiContainer:uiContainerV3:delegate:] */

void FUN_103b4784c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b4770c(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b47918; end: 103b47977; -[_TtC15SCAdReportScope31SCAdReportReportAdScopeServices init] */

void FUN_103b47918(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdReportScope.SCAdReportReportAdScopeServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b47944);
  (*pcVar1)();
}



/* Entry: 103b47978; end: 103b479ab; -[_TtC15SCAdReportScope31SCAdReportReportAdScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fee2a0));
  return;
}



/* Entry: 103b479ac; end: 103b479bb; -[SCAdReportScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b479ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee310));
  return;
}



/* Entry: 103b479bc; end: 103b479db; -[SCAdReportScope eventTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b479bc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fee318));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b479dc; end: 103b47a23; -[SCAdReportScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b479dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fee320;
  func_0x000107c61428(param_1 + _DAT_112fee320,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b47a24; end: 103b47a7b; -[SCAdReportScope setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fee320;
  func_0x000107c61428(param_1 + _DAT_112fee320,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b47a7c; end: 103b47b17; -[SCAdReportScope dismissalCompletionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47a7c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112fee328);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112fee328))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1106d73f0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 103b47b18; end: 103b47b43; -[SCAdReportScope init] */

void FUN_103b47b18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdReportScope.SCAdReportScope",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b47b44);
  (*pcVar1)();
}



/* Entry: 103b47b44; end: 103b47b9f; -[SCAdReportScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47b44(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee310));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fee318));
  func_0x000100e3b598(param_1 + _DAT_112fee320);
  if (*(long *)(param_1 + _DAT_112fee328) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112fee328))[1]);
    return;
  }
  return;
}



/* Entry: 103b47ba0; end: 103b47c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47ba0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036c62c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fee338) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b47c0c; end: 103b47c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47c0c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036c62c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee338) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103b47c14; end: 103b47c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47c14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee338) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b47c60; end: 103b47d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b47c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x00010036bd5c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112fee320;
  func_0x000107c61614(lVar4 + _DAT_112fee320,0);
  *(long *)(lVar4 + _DAT_112fee310) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112fee318) = param_2;
  func_0x000107c61428(lVar4 + lVar2,auStack_78,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_3);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fee328);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_1);
  func_0x000100b64c10(param_4,param_5);
  plVar5 = &lStack_88;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 103b47d90; end: 103b47e83; -[_TtC15SCAdReportScope23SCAdReportScopeServices buildWithConfig:eventTracker:uiContainer:dismissalCompletionHandler:] */

void FUN_103b47d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106d73d8;
    func_0x000107c613fc(&UNK_1106d73d8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar3 = 0x103b47f18;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_103b47c60(param_3,param_4,param_5,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b47e84; end: 103b47eaf; -[_TtC15SCAdReportScope23SCAdReportScopeServices init] */

void FUN_103b47e84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdReportScope.SCAdReportScopeServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b47eb0);
  (*pcVar1)();
}



/* Entry: 103b47eb0; end: 103b47eb3;  */

void FUN_103b47eb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b47eb4; end: 103b47ee7;  */

void FUN_103b47eb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b47ee8; end: 103b47f43; -[_TtC15SCAdReportScope23SCAdReportScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fee338));
  return;
}



/* Entry: 103b47f44; end: 103b47f53; -[_TtC16AdReportServices16AdReportServices eventTrackerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee3a8));
  return;
}



/* Entry: 103b47f54; end: 103b47f63; -[_TtC16AdReportServices16AdReportServices promotedStoryTileEventTrackerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee3b0));
  return;
}



/* Entry: 103b47f64; end: 103b47f73; -[_TtC16AdReportServices16AdReportServices unlockableEventTrackerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee3b8));
  return;
}



/* Entry: 103b47f74; end: 103b47f83; -[_TtC16AdReportServices16AdReportServices reportAdPagePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee3c0));
  return;
}



/* Entry: 103b47f84; end: 103b47f93; -[_TtC16AdReportServices16AdReportServices adInfoPagePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee3c8));
  return;
}



/* Entry: 103b47f94; end: 103b47fa3; -[_TtC16AdReportServices16AdReportServices adReportEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee3d0));
  return;
}



/* Entry: 103b47fa4; end: 103b47fb3; -[_TtC16AdReportServices16AdReportServices sponsoredEventTrackerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee3d8));
  return;
}



/* Entry: 103b47fb4; end: 103b48077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b47fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee3a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fee3b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fee3b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fee3c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fee3c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fee3d0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fee3d8) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b48078; end: 103b480d3; -[_TtC16AdReportServices16AdReportServices init] */

void FUN_103b48078(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdReportServices.AdReportServices",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b480a4);
  (*pcVar1)();
}



/* Entry: 103b480d4; end: 103b4815b; -[_TtC16AdReportServices16AdReportServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b480f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b48110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b48130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b48114) */
/* WARNING: Removing unreachable block (ram,0x000103b480f4) */
/* WARNING: Removing unreachable block (ram,0x000103b48134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b480d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee3a8));
  return;
}



/* Entry: 103b4815c; end: 103b4848b;  */

long FUN_103b4815c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b4848c; end: 103b48497; -[SCAdReportConfig adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4848c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fee408))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fee408);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b48498; end: 103b484a3; -[SCAdReportConfig brandName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48498(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fee410))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fee410);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b484a4; end: 103b484af; -[SCAdReportConfig serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b484a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fee418))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fee418);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b484b0; end: 103b484bf; -[SCAdReportConfig adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b484b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fee420);
}



/* Entry: 103b484c0; end: 103b484cf; -[SCAdReportConfig isCheetahStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b484c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fee428);
}



/* Entry: 103b484d0; end: 103b484df; -[SCAdReportConfig hideCommentBox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b484d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fee430);
}



/* Entry: 103b484e0; end: 103b484eb; -[SCAdReportConfig reportReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b484e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fee438))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fee438);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b484ec; end: 103b48543;  */

void FUN_103b484ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b48544; end: 103b48553; -[SCAdReportConfig reportVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee440));
  return;
}



/* Entry: 103b48554; end: 103b48563; -[SCAdReportConfig isAppInstallOrDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b48554(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fee448);
}



/* Entry: 103b48564; end: 103b487b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee408);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee410);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee418);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fee420) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fee428) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112fee430) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee438);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fee440) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_112fee448) = param_14;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b487b4; end: 103b488e3; -[SCAdReportConfig initWithAdId:brandName:serveItemId:adProductType:isCheetahStory:hideCommentBox:reportReason:reportVersion:isAppInstallOrDeeplink:] */

void FUN_103b487b4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined4 param_7,undefined1 param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_88;
  
  if (param_3 == 0) {
    lStack_88 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar2 = param_2;
    lStack_88 = param_3;
  }
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174();
  func_0x000107c61174();
  if (param_9 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_9);
  }
  func_0x000103b4868c(lStack_88,uVar2,param_4,uVar1,param_5,param_2,param_6,param_7,param_8);
  return;
}



/* Entry: 103b488e4; end: 103b48913;  */

void FUN_103b488e4(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103b48914(param_1);
  return;
}



/* Entry: 103b48914; end: 103b48a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48914(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee408);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee410);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee418);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  *(undefined8 *)(unaff_x20 + _DAT_112fee420) = param_1[6];
  *(undefined1 *)(unaff_x20 + _DAT_112fee428) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(unaff_x20 + _DAT_112fee430) = *(undefined1 *)((long)param_1 + 0x39);
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uVar3 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fee438);
  puVar1[1] = param_1[9];
  *puVar1 = uVar3;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    func_0x000101223174(&uStack_50,auStack_90);
    func_0x000101223174(&uStack_60,auStack_90);
    func_0x000101223174(&uStack_70,auStack_90);
    func_0x000101223174(&uStack_80,auStack_90);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000101223174(&uStack_50,auStack_90);
    func_0x000101223174(&uStack_60,auStack_90);
    func_0x000101223174(&uStack_70,auStack_90);
    func_0x000101223174(&uStack_80,auStack_90);
    func_0x000107c46ed0();
  }
  *(undefined **)(unaff_x20 + _DAT_112fee440) = puVar2;
  FUN_103b48a9c(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112fee448) = *(undefined1 *)((long)param_1 + 0x59);
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b48a9c; end: 103b48acf;  */

undefined8 FUN_103b48a9c(undefined8 param_1)

{
  (*(code *)(undefined *)0x103b48188)();
  return param_1;
}



/* Entry: 103b48ad0; end: 103b48ad3; -[SCAdReportConfig copyWithZone:] */

void FUN_103b48ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b48ad4; end: 103b48b1f; -[SCAdReportConfig description] */

void FUN_103b48ad4(undefined8 param_1)

{
  undefined1 auStack_80 [96];
  
  func_0x000107c61174();
  FUN_103b48c14(auStack_80);
  func_0x000107c61170(param_1);
  FUN_103b48a9c(auStack_80);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b48b20; end: 103b48b9b; -[SCAdReportConfig init] */

void FUN_103b48b20(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AdReportServices/AdReportConfigWrapper.swift",0x2c,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b48b68);
  (*pcVar1)();
}



/* Entry: 103b48b9c; end: 103b48c13; -[SCAdReportConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48b9c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fee408 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fee410 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fee418 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fee438 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee440));
  return;
}



/* Entry: 103b48c14; end: 103b48d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48c14(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112fee408);
  puVar2 = (undefined8 *)(param_2 + _DAT_112fee410);
  uVar18 = puVar1[1];
  uVar17 = *puVar1;
  uVar13 = puVar1[1];
  uVar16 = puVar2[1];
  uVar15 = *puVar2;
  uVar12 = puVar2[1];
  uVar11 = *(undefined8 *)(param_2 + _DAT_112fee420);
  uVar4 = *(undefined8 *)(param_2 + _DAT_112fee418);
  uVar6 = ((undefined8 *)(param_2 + _DAT_112fee418))[1];
  uVar8 = *(undefined1 *)(param_2 + _DAT_112fee428);
  uVar9 = *(undefined1 *)(param_2 + _DAT_112fee430);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112fee438);
  uVar7 = ((undefined8 *)(param_2 + _DAT_112fee438))[1];
  lVar14 = *(long *)(param_2 + _DAT_112fee440);
  bVar3 = lVar14 == 0;
  if (bVar3) {
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar13);
    func_0x000107c61434(uVar12);
    func_0x000107c61434(uVar6);
    lVar14 = 0;
  }
  else {
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar13);
    func_0x000107c61434(uVar12);
    func_0x000107c61434(uVar6);
    func_0x000107c49820();
  }
  uVar10 = *(undefined1 *)(param_2 + _DAT_112fee448);
  param_1[1] = uVar18;
  *param_1 = uVar17;
  param_1[3] = uVar16;
  param_1[2] = uVar15;
  param_1[4] = uVar4;
  param_1[5] = uVar6;
  param_1[6] = uVar11;
  *(undefined1 *)(param_1 + 7) = uVar8;
  *(undefined1 *)((long)param_1 + 0x39) = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar7;
  param_1[10] = lVar14;
  *(bool *)(param_1 + 0xb) = bVar3;
  *(undefined1 *)((long)param_1 + 0x59) = uVar10;
  return;
}



/* Entry: 103b48d70; end: 103b48d8f;  */

void FUN_103b48d70(void)

{
  func_0x000107c61168(&PTR_PTR_11292f150);
  return;
}



/* Entry: 103b48d90; end: 103b48d9f; -[PromotedStoryShareScope fromViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee478));
  return;
}



/* Entry: 103b48da0; end: 103b48daf; -[PromotedStoryShareScope promotedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee480));
  return;
}



/* Entry: 103b48db0; end: 103b48dbf; -[PromotedStoryShareScope coverImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee488));
  return;
}



/* Entry: 103b48dc0; end: 103b48e4f; -[PromotedStoryShareScope dismissalCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48dc0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fee490);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106d7648;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103b48e50; end: 103b48e7f;  */

void FUN_103b48e50(void)

{
  func_0x000100350aa8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b48e80; end: 103b48edb; -[PromotedStoryShareScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48e80(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee478));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee480));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fee488));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fee490 + 8));
  return;
}



/* Entry: 103b48edc; end: 103b48f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48edc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100357068();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fee4a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b48f44; end: 103b48f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b48f44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee4a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b48f90; end: 103b49093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b48f90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_78 [2];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000100350aa8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112fee478) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112fee480) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112fee488) = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fee490);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  plVar5 = &lStack_60;
  func_0x000107c61154(plVar5,puVar2);
  aplStack_78[0] = plVar5;
  func_0x00010008a7c8(&uStack_68,aplStack_78);
  func_0x000100083b20(aplStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(aplStack_78[0]);
  return plVar5;
}



/* Entry: 103b49094; end: 103b4916f; -[_TtC23PromotedStoryShareScope31PromotedStoryShareScopeServices buildFromViewController:promotedStory:coverImage:dismissalCompletion:] */

void FUN_103b49094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106d7630;
  func_0x000107c613fc(&UNK_1106d7630,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_103b48f90(param_3,param_4,param_5,0x103b491d4,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b49170; end: 103b491a3;  */

void FUN_103b49170(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b491a4; end: 103b491fb; -[_TtC23PromotedStoryShareScope31PromotedStoryShareScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b491a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fee4a0));
  return;
}



/* Entry: 103b491fc; end: 103b4920b; -[_TtC31ContentMixedStoriesDataServices31ContentMixedStoriesDataServices contentMixedStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b491fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fee510));
  return;
}



/* Entry: 103b4920c; end: 103b492eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b4920c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001003a5b88();
  *(long *)(unaff_x20 + _DAT_112fee510) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103b492ec; end: 103b4934b; -[_TtC31ContentMixedStoriesDataServices31ContentMixedStoriesDataServices init] */

void FUN_103b492ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentMixedStoriesDataServices.ContentMixedStoriesDataServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b49318);
  (*pcVar1)();
}



/* Entry: 103b4934c; end: 103b4935b; -[_TtC31ContentMixedStoriesDataServices31ContentMixedStoriesDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4934c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fee510));
  return;
}



/* Entry: 103b4935c; end: 103b493a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4935c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fee540) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b493a8; end: 103b493e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b493a8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fee540) = param_1;
  func_0x00010044b5bc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b493e4; end: 103b49603;  */

/* WARNING: Possible PIC construction at 0x000103b4945c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4949c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b494d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b494fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b495b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b495c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b495bc) */
/* WARNING: Removing unreachable block (ram,0x000103b49500) */
/* WARNING: Removing unreachable block (ram,0x000103b49518) */
/* WARNING: Removing unreachable block (ram,0x000103b494d8) */
/* WARNING: Removing unreachable block (ram,0x000103b49600) */
/* WARNING: Removing unreachable block (ram,0x000103b494dc) */
/* WARNING: Removing unreachable block (ram,0x000103b494a0) */
/* WARNING: Removing unreachable block (ram,0x000103b495fc) */
/* WARNING: Removing unreachable block (ram,0x000103b494bc) */
/* WARNING: Removing unreachable block (ram,0x000103b49460) */
/* WARNING: Removing unreachable block (ram,0x000103b495f8) */
/* WARNING: Removing unreachable block (ram,0x000103b49474) */
/* WARNING: Removing unreachable block (ram,0x000103b495cc) */
/* WARNING: Removing unreachable block (ram,0x000103b495d0) */

void FUN_103b493e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  puVar1 = PTR_PTR_1126b8460;
  func_0x000107c610f8(PTR_PTR_1126b8460);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126e1920;
  func_0x000107c610f8(PTR_PTR_1126e1920);
  func_0x000107c453e4();
  func_0x000107c541cc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103b49604; end: 103b4960f; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportFeedDuplicateIdsWhenGeneratingOperaPlaylistWithPlaylistGroupId:] */

void FUN_103b49604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103b493e4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b49610; end: 103b498db;  */

/* WARNING: Possible PIC construction at 0x000103b49694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b496d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4970c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b4976c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b49894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b49888) */
/* WARNING: Removing unreachable block (ram,0x000103b49798) */
/* WARNING: Removing unreachable block (ram,0x000103b497b0) */
/* WARNING: Removing unreachable block (ram,0x000103b49770) */
/* WARNING: Removing unreachable block (ram,0x000103b498d8) */
/* WARNING: Removing unreachable block (ram,0x000103b49774) */
/* WARNING: Removing unreachable block (ram,0x000103b49738) */
/* WARNING: Removing unreachable block (ram,0x000103b498d4) */
/* WARNING: Removing unreachable block (ram,0x000103b49754) */
/* WARNING: Removing unreachable block (ram,0x000103b49710) */
/* WARNING: Removing unreachable block (ram,0x000103b498d0) */
/* WARNING: Removing unreachable block (ram,0x000103b49714) */
/* WARNING: Removing unreachable block (ram,0x000103b496d8) */
/* WARNING: Removing unreachable block (ram,0x000103b498cc) */
/* WARNING: Removing unreachable block (ram,0x000103b496f4) */
/* WARNING: Removing unreachable block (ram,0x000103b49698) */
/* WARNING: Removing unreachable block (ram,0x000103b498c8) */
/* WARNING: Removing unreachable block (ram,0x000103b496ac) */
/* WARNING: Removing unreachable block (ram,0x000103b49898) */
/* WARNING: Removing unreachable block (ram,0x000103b4989c) */

void FUN_103b49610(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  puVar1 = PTR_PTR_1126b8460;
  func_0x000107c610f8(PTR_PTR_1126b8460);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126e1920;
  func_0x000107c610f8(PTR_PTR_1126e1920);
  func_0x000107c453e4();
  func_0x000107c541cc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103b498dc; end: 103b4995f; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger reportMixerStoriesDuplicateIdWithPlaylistGroupId:requestId:] */

/* WARNING: Possible PIC construction at 0x000103b49944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b49948) */

void FUN_103b498dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_103b49610(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b49960; end: 103b49a13;  */

/* WARNING: Possible PIC construction at 0x000103b499f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b499f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b49960(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c541a0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112fee540);
  if (lVar2 != 0) {
    puVar1 = (undefined *)0x7568542079617247;
    func_0x000107c5fadc(0x7568542079617247,0xee006c69616e626d);
    func_0x0001044db3fc(0);
    func_0x0001044dac34();
    func_0x000107c5027c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


