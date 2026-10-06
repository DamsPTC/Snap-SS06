/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103271d60; end: 103271df7; +[SCCTXAction snapMeAddToStoryAction] */

void FUN_103271d60(void)

{
  func_0x000107c614ec();
  FUN_103271ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103271df8; end: 103271e87;  */

undefined8 * FUN_103271df8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)PTR_PTR_1126b5b00;
  func_0x000107c61168();
  puVar3 = puVar2;
  if ((param_1 & 1) == 0) {
    func_0x00010441d83c();
  }
  else {
    func_0x00010441d874();
  }
  uVar4 = *puVar3;
  uVar1 = puVar3[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c3fe24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  return puVar2;
}



/* Entry: 103271e88; end: 103271ecb;  */

void FUN_103271e88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc0130 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126afad0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc0130 = puVar1;
  return;
}



/* Entry: 103271ecc; end: 103271fe7; -[SCCTXWatchSpotlightAction buttonType] */

undefined8 FUN_103271ecc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103271f00();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103271fe8; end: 10327208b; -[SCCTXWatchSpotlightAction setButtonType:] */

void FUN_103271fe8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c46ed0(puVar1);
  func_0x000107c61428(0x112f4f7f0,auStack_48,0x20,0);
  func_0x000107c61188(param_1,0x112f4f7f0,puVar1,1);
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10327208c; end: 1032720f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10327208c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4f800) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032720f8; end: 103272157; -[_TtC43CustomStatusBarScopedFactoryServiceProvider31SCCustomStatusBarScopedServices init] */

void FUN_1032720f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStatusBarScopedFactoryServiceProvider.SCCustomStatusBarScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103272124);
  (*pcVar1)();
}



/* Entry: 103272158; end: 103272167; -[_TtC43CustomStatusBarScopedFactoryServiceProvider31SCCustomStatusBarScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4f800));
  return;
}



/* Entry: 103272168; end: 1032721d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11062e438;
  func_0x000107c613fc(&UNK_11062e438,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10327225c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032721d4; end: 103272233;  */

undefined1  [16] FUN_1032721d4(void)

{
  return ZEXT816(0x11062e378);
}



/* Entry: 103272234; end: 10327225b;  */

void FUN_103272234(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10327225c; end: 10327226f;  */

void FUN_10327225c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103272270; end: 1032722f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103272270(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100b45690();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f4f898) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f4f8a0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032722f8);
  (*pcVar1)();
}



/* Entry: 1032722f8; end: 103272357; -[_TtC31CustomStatusBarScopeGraphBridge46CustomStatusBarScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032722f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStatusBarScopeGraphBridge.CustomStatusBarScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103272324);
  (*pcVar1)();
}



/* Entry: 103272358; end: 10327238f; -[_TtC31CustomStatusBarScopeGraphBridge46CustomStatusBarScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103272374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103272378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f898));
  return;
}



/* Entry: 103272390; end: 1032723b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272390(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f4f8a0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f4f898));
  return;
}



/* Entry: 1032723b8; end: 10327243f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032723b8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4f8d0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f4f8d8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103272440);
  (*pcVar2)();
}



/* Entry: 103272440; end: 103272527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103272440(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4f8d0);
  *(undefined **)(unaff_x20 + _DAT_112f4f8d0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4f8d8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f4f8d8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11062e680;
  func_0x000107c613fc(&UNK_11062e680,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10327252c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103272528; end: 103272533;  */

void FUN_103272528(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103272534; end: 103272593; -[_TtC31CustomStatusBarScopeGraphBridge46SCCustomStatusBarScopedServicesSaberEntryPoint init] */

void FUN_103272534(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStatusBarScopeGraphBridge.SCCustomStatusBarScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103272560);
  (*pcVar1)();
}



/* Entry: 103272594; end: 1032725cb; -[_TtC31CustomStatusBarScopeGraphBridge46SCCustomStatusBarScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272594(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4f8d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f8d0));
  return;
}



/* Entry: 1032725cc; end: 1032725cf;  */

void FUN_1032725cc(void)

{
  return;
}



/* Entry: 1032725d0; end: 1032725ef;  */

void FUN_1032725d0(void)

{
  FUN_103272440();
  return;
}



/* Entry: 1032725f0; end: 103272623;  */

void FUN_1032725f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103272624; end: 10327267f;  */

void FUN_103272624(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f4f908,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f4f908,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103272680; end: 1032726b7;  */

undefined1  [16] FUN_103272680(void)

{
  return ZEXT816(0x11062e700);
}



/* Entry: 1032726b8; end: 1032726fb; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032726b8(undefined8 param_1)

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



/* Entry: 1032726fc; end: 10327272f;  */

void FUN_1032726fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103272730; end: 103272777; -[SCCustomStatusBarScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010327275c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103272760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272730(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4f968);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f970));
  return;
}



/* Entry: 103272778; end: 103272797;  */

void FUN_103272778(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4360);
  return;
}



/* Entry: 103272798; end: 10327290f;  */

/* WARNING: Possible PIC construction at 0x000103272800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103272898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103272804) */
/* WARNING: Removing unreachable block (ram,0x00010327289c) */
/* WARNING: Removing unreachable block (ram,0x0001032728b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272798(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4f9b0);
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



/* Entry: 103272910; end: 103272917;  */

void FUN_103272910(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103272918; end: 10327294b; -[SCSCCustomStatusBarScopedServicesSaberEntryPoint end] */

void FUN_103272918(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103272798();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10327294c; end: 10327297f;  */

void FUN_10327294c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103272980; end: 1032729b7; -[SCSCCustomStatusBarScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272980(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4f9a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4f9b0));
  return;
}



/* Entry: 1032729b8; end: 1032729d7;  */

void FUN_1032729b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c4428);
  return;
}



/* Entry: 1032729d8; end: 103272a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032729d8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103272dcc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f4f9e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103272a44; end: 103272aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272a44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4f9e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103272ab0; end: 103272b0f; -[_TtC66DeepLinkHandlingProcedureAuthenticatedScopedFactoryServiceProvider54SCDeepLinkHandlingProcedureAuthenticatedScopedServices init] */

void FUN_103272ab0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeepLinkHandlingProcedureAuthenticatedScopedFactoryServiceProvider.SCDeepLinkHandlingProcedureAuthenticatedScopedServices"
                      ,0x79,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103272adc);
  (*pcVar1)();
}



/* Entry: 103272b10; end: 103272b1f; -[_TtC66DeepLinkHandlingProcedureAuthenticatedScopedFactoryServiceProvider54SCDeepLinkHandlingProcedureAuthenticatedScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272b10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4f9e8));
  return;
}



/* Entry: 103272b20; end: 103272b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103272b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11062e978;
  func_0x000107c613fc(&UNK_11062e978,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103272e64,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103272b8c; end: 103272c27;  */

void FUN_103272b8c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11062e888;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11062e888;
  return;
}



/* Entry: 103272c28; end: 103272c5f;  */

void FUN_103272c28(long *param_1)

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



/* Entry: 103272c60; end: 103272c67;  */

undefined8 FUN_103272c60(void)

{
  return 0x1b;
}



/* Entry: 103272c68; end: 103272d9b;  */

void FUN_103272c68(undefined8 *param_1)

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
  puVar1 = &UNK_11062e9a0;
  func_0x000107c613fc(&UNK_11062e9a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103272e3c;
  func_0x00010058fa64(FUN_103272e3c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103272d9c; end: 103272dcb;  */

undefined ** FUN_103272d9c(void)

{
  return &PTR_DAT_113066aa8;
}



/* Entry: 103272dcc; end: 103272deb;  */

void FUN_103272dcc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c44e8);
  return;
}



/* Entry: 103272dec; end: 103272e3b;  */

undefined1  [16] FUN_103272dec(void)

{
  return ZEXT816(0x11062e8d8);
}



/* Entry: 103272e3c; end: 103272e63;  */

void FUN_103272e3c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103272e64; end: 103272e77;  */

void FUN_103272e64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103272e78; end: 103273403;  */

void FUN_103272e78(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_70 [2];
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f4fa60,&UNK_10dba3a70);
  puVar1 = auStack_70;
  auStack_70[0] = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010327e6ec();
  func_0x000100082720("SCUnifiedPublicProfileScopeExposerSubjectServiceProvider",0x38,2);
  puVar3 = puVar2;
  func_0x00010327e778();
  func_0x000100082720("SCUnifiedPublicProfileScopeExposerObservableServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103272c28;
  func_0x0001000823a8(FUN_103272c28,0);
  func_0x000100082720("SCDeepLinkHandlingProcedureAuthenticatedScopedServicesCleanupRelayServiceProvider"
                      ,0x51,2);
  func_0x0001000285a8(0x112f4fa68,&UNK_10dba3a80);
  puVar5 = &UNK_11062ea50;
  func_0x000107c613fc(&UNK_11062ea50,0x100,7);
  *(undefined8 *)(puVar5 + 0x10) = param_18;
  *(undefined8 *)(puVar5 + 0x18) = param_13;
  *(undefined8 *)(puVar5 + 0x20) = param_23;
  *(undefined8 *)(puVar5 + 0x28) = param_26;
  *(undefined8 *)(puVar5 + 0x30) = param_31;
  *(undefined8 *)(puVar5 + 0x38) = param_25;
  *(undefined8 *)(puVar5 + 0x40) = param_14;
  *(undefined8 *)(puVar5 + 0x48) = param_15;
  *(undefined8 *)(puVar5 + 0x50) = param_11;
  *(undefined8 *)(puVar5 + 0x58) = param_4;
  *(undefined8 *)(puVar5 + 0x60) = param_19;
  *(undefined8 *)(puVar5 + 0x68) = param_29;
  *(undefined8 *)(puVar5 + 0x70) = param_16;
  *(undefined8 *)(puVar5 + 0x78) = param_17;
  *(undefined8 *)(puVar5 + 0x80) = param_12;
  *(undefined8 *)(puVar5 + 0x88) = param_30;
  *(undefined8 *)(puVar5 + 0x90) = param_3;
  *(undefined8 *)(puVar5 + 0x98) = param_6;
  *(undefined8 *)(puVar5 + 0xa0) = param_28;
  *(undefined8 *)(puVar5 + 0xa8) = param_9;
  *(undefined8 *)(puVar5 + 0xb0) = param_8;
  *(undefined8 *)(puVar5 + 0xb8) = param_24;
  *(undefined8 *)(puVar5 + 0xc0) = param_7;
  *(undefined8 *)(puVar5 + 200) = param_27;
  *(undefined8 *)(puVar5 + 0xd0) = param_21;
  *(undefined8 *)(puVar5 + 0xd8) = param_10;
  *(undefined8 *)(puVar5 + 0xe0) = param_5;
  *(undefined8 *)(puVar5 + 0xe8) = param_20;
  *(undefined8 *)(puVar5 + 0xf0) = param_22;
  *(undefined8 **)(puVar5 + 0xf8) = puVar3;
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x103273474;
  func_0x0001000823a8(0x103273474,puVar5);
  func_0x000100082720("SCDeepLinkAuthProcessorPluginRegistryServiceProvider",0x34,2);
  uVar6 = uVar11;
  func_0x000104427c34();
  func_0x000100082720("SCDeepLinkAuthProcessorPluginSaberServiceServiceProvider",0x38,2);
  uVar7 = uVar6;
  FUN_10327e540(uVar6,puVar2);
  func_0x000100082720("DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeServicesServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112f4fa70,&UNK_10dba3a88);
  puVar5 = &UNK_11062ea78;
  func_0x000107c613fc(&UNK_11062ea78,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(code **)(puVar5 + 0x20) = pcVar4;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1032734d0;
  func_0x0001000823a8(FUN_1032734d0,puVar5);
  func_0x000100082720("SCDeepLinkHandlingProcedureAuthenticatedScopeInitializationPluginRegistryServiceProvider"
                      ,0x58,2);
  func_0x0001000285a8(0x112f4f9f0,&UNK_10dba3730);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x1032734dc;
  func_0x0001000823a8(0x1032734dc,pcVar8);
  func_0x000100082720("SCDeepLinkHandlingProcedureAuthenticatedScopeInitializationServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112f4f9e0,&UNK_10dba3720);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1032734e4;
  func_0x0001000823a8(0x1032734e4,uVar9);
  func_0x000100082720("SCDeepLinkHandlingProcedureAuthenticatedScopedServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11062eaa0;
  func_0x000107c613fc(&UNK_11062eaa0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x1032734ec;
  func_0x0001000823a8(0x1032734ec,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCDeepLinkHandlingProcedureAuthenticatedScopeEntryPointProvider",0x3f,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 103273404; end: 1032734cf;  */

void FUN_103273404(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103272e78(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xf0));
  return;
}



/* Entry: 1032734d0; end: 1032734f3;  */

void FUN_1032734d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103273b78(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCDeepLinkHandlingProcedureAuthenticatedScopeInitializationPluginRegistryServiceProvider"
                      ,0x58,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032734f4; end: 103273ac3;  */

/* WARNING: Possible PIC construction at 0x00010327368c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327369c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032736ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032736bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032736cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032736dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032736ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032736fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327370c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327371c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327372c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327373c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327374c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327375c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327376c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103273760) */
/* WARNING: Removing unreachable block (ram,0x000103273750) */
/* WARNING: Removing unreachable block (ram,0x000103273740) */
/* WARNING: Removing unreachable block (ram,0x000103273730) */
/* WARNING: Removing unreachable block (ram,0x000103273720) */
/* WARNING: Removing unreachable block (ram,0x000103273710) */
/* WARNING: Removing unreachable block (ram,0x000103273700) */
/* WARNING: Removing unreachable block (ram,0x0001032736f0) */
/* WARNING: Removing unreachable block (ram,0x0001032736e0) */
/* WARNING: Removing unreachable block (ram,0x0001032736d0) */
/* WARNING: Removing unreachable block (ram,0x0001032736c0) */
/* WARNING: Removing unreachable block (ram,0x0001032736b0) */
/* WARNING: Removing unreachable block (ram,0x0001032736a0) */
/* WARNING: Removing unreachable block (ram,0x000103273690) */
/* WARNING: Removing unreachable block (ram,0x000103273770) */

void FUN_1032734f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11062eac8;
  func_0x000107c613fc(&UNK_11062eac8,0x100,7);
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
  uVar2 = 0x112f4fa78;
  func_0x0001000285a8(0x112f4fa78,&UNK_10dba3aa8);
  func_0x000107c613fc();
  pcVar3 = FUN_103273ac4;
  func_0x0001000841fc(FUN_103273ac4,puVar1,uVar2);
  func_0x000100084214("SCDeepLinkAuthProcessorPluginRegistryServiceProvider",0x34,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103273ac4; end: 103273b3b;  */

void FUN_103273ac4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000103273794(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Entry: 103273b3c; end: 103273b77;  */

void FUN_103273b3c(undefined8 *param_1,undefined8 param_2)

{
  FUN_103273b78();
  func_0x0001000a7f38("SCDeepLinkHandlingProcedureAuthenticatedScopeInitializationPluginRegistryServiceProvider"
                      ,0x58,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103273b78; end: 103273d0f;  */

void FUN_103273b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d438;
  ppuVar4 = &PTR_DAT_113066aa8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11062eaf0;
  func_0x000107c613fc(&UNK_11062eaf0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f4fa80;
  func_0x0001000285a8(0x112f4fa80,&UNK_10dba3ab0);
  func_0x0001000a6ee8(&UNK_1106302b0,
                      "DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x52,2,FUN_103273d10,puVar2,uVar3,&UNK_1106302b0,&PTR_DAT_112f4ff18);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11062eb18;
  func_0x000107c613fc(&UNK_11062eb18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11062e918,
                      "SCDeepLinkHandlingProcedureAuthenticatedScopedServicesScopeInitializationPluginKey"
                      ,0x52,2,FUN_103273df8,puVar2,uVar3,&UNK_11062e918,&PTR_DAT_112f4f9f8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f4fa88;
  func_0x0001000285a8(0x112f4fa88,&UNK_10dba3ab8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103273d10; end: 103273d4f;  */

void FUN_103273d10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010327e800(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DeepLinkHandlingProcedureAuthenticatedScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x57,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103273d50; end: 103273df7;  */

void FUN_103273d50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11062eb40;
  func_0x000107c613fc(&UNK_11062eb40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103273e2c;
  func_0x0001000823a8(FUN_103273e2c,puVar1);
  func_0x000100082720("SCDeepLinkHandlingProcedureAuthenticatedScopedServicesScopeInitializationPluginProvider"
                      ,0x57,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103273df8; end: 103273dff;  */

void FUN_103273df8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11062eb40;
  func_0x000107c613fc(&UNK_11062eb40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103273e2c;
  func_0x0001000823a8(FUN_103273e2c,puVar3);
  func_0x000100082720("SCDeepLinkHandlingProcedureAuthenticatedScopedServicesScopeInitializationPluginProvider"
                      ,0x57,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103273e00; end: 103273e2b;  */

void FUN_103273e00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103273e2c; end: 103273e33;  */

void FUN_103273e2c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11062e9a0;
  func_0x000107c613fc(&UNK_11062e9a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103272e3c;
  func_0x00010058fa64(FUN_103272e3c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103273e34; end: 103273f23;  */

void FUN_103273e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062ec10;
  func_0x000107c613fc(&UNK_11062ec10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x103273eb4,puVar1);
  return;
}



/* Entry: 103273f24; end: 103273f33;  */

undefined1  [16] FUN_103273f24(void)

{
  return ZEXT816(0x11062ec38);
}



/* Entry: 103273f34; end: 103273f7f;  */

void FUN_103273f34(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103273f80,param_1);
  return;
}



/* Entry: 103273f80; end: 103273fcf;  */

void FUN_103273f80(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126acf28;
  func_0x000107c610f8();
  func_0x000107c479cc();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 103273fd0; end: 103273fdf;  */

undefined1  [16] FUN_103273fd0(void)

{
  return ZEXT816(0x11062ece0);
}



/* Entry: 103273fe0; end: 1032740cf;  */

void FUN_103273fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062edd8;
  func_0x000107c613fc(&UNK_11062edd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x103274060,puVar1);
  return;
}



/* Entry: 1032740d0; end: 1032740df;  */

undefined1  [16] FUN_1032740d0(void)

{
  return ZEXT816(0x11062ee00);
}



/* Entry: 1032740e0; end: 10327412b;  */

void FUN_1032740e0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10327412c,param_1);
  return;
}



/* Entry: 10327412c; end: 10327417b;  */

void FUN_10327412c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126acf38;
  func_0x000107c610f8();
  func_0x000107c479cc();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10327417c; end: 10327418b;  */

undefined1  [16] FUN_10327417c(void)

{
  return ZEXT816(0x11062eea8);
}



/* Entry: 10327418c; end: 10327437f;  */

void FUN_10327418c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062ef70;
  func_0x000107c613fc(&UNK_11062ef70,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x10327426c,puVar1);
  return;
}



/* Entry: 103274380; end: 10327438f;  */

undefined1  [16] FUN_103274380(void)

{
  return ZEXT816(0x11062ef98);
}



/* Entry: 103274390; end: 1032743db;  */

void FUN_103274390(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032743dc,param_1);
  return;
}



/* Entry: 1032743dc; end: 103274463;  */

void FUN_1032743dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010451338c();
  func_0x000107c61170(uStack_38);
  uVar1 = param_2;
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar2 = PTR_PTR_1126acf48;
  func_0x000107c610f8();
  func_0x000107c479a8();
  func_0x000107c615e8(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 103274464; end: 103274473;  */

undefined1  [16] FUN_103274464(void)

{
  return ZEXT816(0x11062f040);
}



/* Entry: 103274474; end: 1032744f3;  */

void FUN_103274474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062f108;
  func_0x000107c613fc(&UNK_11062f108,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032744f4,puVar1);
  return;
}



/* Entry: 1032744f4; end: 1032745c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032744f4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x00010451338c();
  func_0x000107c61170(lVar1);
  uVar2 = param_2;
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112fea2a8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_48);
  puVar4 = PTR_PTR_1126acf50;
  func_0x000107c610f8();
  func_0x000107c479b4();
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 1032745c8; end: 1032745d7;  */

undefined1  [16] FUN_1032745c8(void)

{
  return ZEXT816(0x11062f130);
}



/* Entry: 1032745d8; end: 10327475f;  */

void FUN_1032745d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_11062f1d8;
  func_0x000107c613fc(&UNK_11062f1d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x103274670,puVar1);
  return;
}



/* Entry: 103274760; end: 10327476f;  */

undefined1  [16] FUN_103274760(void)

{
  return ZEXT816(0x11062f200);
}



/* Entry: 103274770; end: 1032747cf; -[_TtC33MutualFriendsUpsellDeepLinkPlugin33MutualFriendsUpsellDeepLinkPlugin init] */

void FUN_103274770(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsUpsellDeepLinkPlugin.MutualFriendsUpsellDeepLinkPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10327479c);
  (*pcVar1)();
}



/* Entry: 1032747d0; end: 103274837; -[_TtC33MutualFriendsUpsellDeepLinkPlugin33MutualFriendsUpsellDeepLinkPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032747ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010327480c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032747f0) */
/* WARNING: Removing unreachable block (ram,0x000103274810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032747d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4fa90));
  return;
}



/* Entry: 103274838; end: 103274857;  */

void FUN_103274838(void)

{
  func_0x000107c61168(&PTR_PTR_1128c45a8);
  return;
}



/* Entry: 103274858; end: 1032748a7; -[_TtC33MutualFriendsUpsellDeepLinkPlugin33MutualFriendsUpsellDeepLinkPlugin identifier] */

void FUN_103274858(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1032748a8; end: 1032748af; -[_TtC33MutualFriendsUpsellDeepLinkPlugin33MutualFriendsUpsellDeepLinkPlugin priority] */

undefined8 FUN_1032748a8(void)

{
  return 1000;
}



/* Entry: 1032748b0; end: 103274937; -[_TtC33MutualFriendsUpsellDeepLinkPlugin33MutualFriendsUpsellDeepLinkPlugin canProvideProcessorForFeature:] */

uint FUN_1032748b0(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f84138;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 103274938; end: 1032749ff; -[_TtC33MutualFriendsUpsellDeepLinkPlugin33MutualFriendsUpsellDeepLinkPlugin isValidDeepLink:] */

uint FUN_103274938(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  
  func_0x000107c615f0(param_3);
  ppuVar2 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x000107c615e8(param_3);
    uVar4 = 0;
  }
  else {
    ppuVar1 = ppuVar2;
    func_0x000107c5faec();
    lVar3 = param_2;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f84138;
    func_0x000107c5faec();
    if (ppuVar1 == ppuVar2 && param_2 == lVar3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar3,0);
      uVar4 = (uint)ppuVar1;
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(param_2);
  }
  return uVar4 & 1;
}



/* Entry: 103274a00; end: 103274b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103274a00(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4fa90);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f4fa98);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f4faa0);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4faa8);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f4fab0);
  lVar2 = 0;
  FUN_103275358();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f4fb38) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f4fb10) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f4fb18) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112f4fb20) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112f4fb28) = uVar8;
  *(undefined8 *)(lVar3 + _DAT_112f4fb30) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103274b04; end: 103274b37; -[_TtC33MutualFriendsUpsellDeepLinkPlugin33MutualFriendsUpsellDeepLinkPlugin makeDeepLinkProcessor] */

void FUN_103274b04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103274a00();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103274b38; end: 103274b87;  */

void FUN_103274b38(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f4fae0 != 0) {
    return;
  }
  puVar1 = &UNK_11062f2a8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f4fae0 = param_1;
  return;
}



/* Entry: 103274b88; end: 103274b8f;  */

void FUN_103274b88(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 103274b90; end: 103274d03;  */

void FUN_103274b90(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 103274d04; end: 103274d2b;  */

void FUN_103274d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 103274d2c; end: 103274d97;  */

void FUN_103274d2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112f4fb00;
  FUN_103274f70(0x112f4fb00,&UNK_10dba3d84);
  uVar2 = 0x112f4fb08;
  FUN_103274f70(0x112f4fb08,&UNK_10dba3d2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 103274d98; end: 103274ddf;  */

void FUN_103274d98(void)

{
  FUN_103274f70(0x112f4fae8,&UNK_10dba3cf4);
  return;
}



/* Entry: 103274de0; end: 103274e57;  */

undefined8 FUN_103274de0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 103274e58; end: 103274f4b;  */

undefined1 * FUN_103274e58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 103274f4c; end: 103274f6f;  */

void FUN_103274f4c(void)

{
  FUN_103274f70(0x112f4faf8,&UNK_10dba3d5c);
  return;
}


