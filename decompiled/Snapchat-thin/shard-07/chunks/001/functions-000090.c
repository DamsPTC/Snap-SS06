/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051ae82c; end: 1051ae957; -[SCCanvasConnectedAppsViewController _refreshDataWithError:connections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae82c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11271e998;
  if (((param_3 == 0) && (uVar4 = *(ulong *)(param_1 + lVar5), uVar4 != 0)) &&
     (_objc_retain(param_4), param_4 != 0)) {
    _objc_retain(uVar4);
    uVar3 = uVar4;
    func_0x00010c071b60(uVar4,param_2,param_4);
    _objc_release(param_4);
    _objc_release(uVar4);
    if ((uVar3 & 1) != 0) goto LAB_1051ae938;
  }
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_4;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11271e99c) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + _DAT_11271e99c),param_2,1);
  }
  if (*(long *)(param_1 + _DAT_11271e9a0) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + _DAT_11271e9a0),param_2,1);
    lVar2 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar2);
  }
  if (param_3 == 0) {
    lVar5 = *(long *)(param_1 + lVar5);
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      func_0x00010beb8d80(param_1);
    }
  }
  else {
    func_0x00010beb8f80(param_1);
  }
LAB_1051ae938:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051ae958; end: 1051ae9a7; -[SCCanvasConnectedAppsViewController _showLoadingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae958(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271e980;
  if (param_3 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_startAnimating_112671118);
    return;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 1051ae9a8; end: 1051aeaef; -[SCCanvasConnectedAppsViewController _showErrorState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  func_0x00010beb9a60(param_5,param_6,0);
  lVar5 = (long)_DAT_11271e99c;
  if (*(long *)(param_5 + lVar5) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_5 + lVar5),PTR_s_setHidden__1126479f8,0);
    return;
  }
  puVar1 = PTR_PTR_1126b5ad0;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_5;
  func_0x00010bfdef60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = param_4;
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c19f0e0(0,param_4,param_3,dVar6 - param_4,*(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c27cc20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1051aeaf0; end: 1051aec6b; -[SCCanvasConnectedAppsViewController _showEmptyState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aeaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  func_0x00010beb9a60(param_5,param_6,0);
  lVar5 = (long)_DAT_11271e9a0;
  if (*(long *)(param_5 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126b5ad8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    *(undefined **)(param_5 + lVar5) = puVar1;
    _objc_release(uVar4);
    lVar2 = param_5;
    func_0x00010bfdef60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar6 = param_4;
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c19f0e0(0,param_4,param_3,dVar6 - param_4,*(undefined8 *)(param_5 + lVar5));
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c152980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar2);
    param_5 = *(long *)(param_5 + lVar5);
    func_0x00010c113ee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
  }
  else {
    func_0x00010c1a7f60(*(long *)(param_5 + lVar5),param_6,0);
    func_0x00010c152980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1051aec6c; end: 1051aecf3; -[SCCanvasConnectedAppsViewController _didPressPrivacyPolicyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aec6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e98c);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar3,param_2,param_1,puVar1,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051aecf4; end: 1051aede3; -[SCCanvasConnectedAppsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aecf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e98c,0);
  _objc_storeStrong(param_1 + _DAT_11271e99c,0);
  _objc_storeStrong(param_1 + _DAT_11271e9a0,0);
  _objc_storeStrong(param_1 + _DAT_11271e980,0);
  _objc_storeStrong(param_1 + _DAT_11271e994,0);
  _objc_storeStrong(param_1 + _DAT_11271e990,0);
  _objc_storeStrong(param_1 + _DAT_11271e97c,0);
  _objc_storeStrong(param_1 + _DAT_11271e998,0);
  _objc_storeStrong(param_1 + _DAT_11271e988,0);
  _objc_storeStrong(param_1 + _DAT_11271e984,0);
  _objc_destroyWeak(param_1 + _DAT_11271e978);
  _objc_destroyWeak(param_1 + _DAT_11271e974);
  _objc_destroyWeak(param_1 + _DAT_11271e970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e96c);
  return;
}



/* Entry: 1051aede4; end: 1051aef7f; -[SCCanvasDetailedAppPermissionsViewController initWithAppConnection:imageDownloader:connectionManager:preferences:userTrackedLogger:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051aede4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e6b70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    lVar4 = (long)_DAT_11271e9a4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e9a8),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e9ac),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e9b0),param_6);
    lVar4 = (long)_DAT_11271e9b4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271e9b8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e9bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e9bc) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051aef80; end: 1051af137; -[SCCanvasDetailedAppPermissionsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aef80(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e6b70;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126b5ae0;
  _objc_alloc();
  lVar2 = param_5 + _DAT_11271e9ac;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bff3280();
  lVar5 = (long)_DAT_11271e9c0;
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar5));
  lVar2 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c19f0e0(0,param_1 - param_2,param_3,param_4 - (param_1 - param_2),
                      *(undefined8 *)(param_5 + lVar5));
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c1405a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar4);
  return;
}



/* Entry: 1051af138; end: 1051af2bb; -[SCCanvasDetailedAppPermissionsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051af138(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e6b70;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewWillDisappear__112685438);
  if ((*(byte *)(param_1 + _DAT_11271e9c4) & 1) != 0) {
    return;
  }
  lVar7 = (long)_DAT_11271e9c0;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c159ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c241a20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf529e0();
  lVar8 = (long)_DAT_11271e9a4;
  lVar3 = *(long *)(param_1 + lVar8);
  func_0x00010bf08c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar7 == lVar4) {
    lVar7 = lVar2;
    func_0x00010bf529e0();
    lVar5 = *(long *)(param_1 + lVar8);
    func_0x00010c241a20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar3);
    if (lVar7 == lVar4) goto LAB_1051af290;
  }
  else {
    _objc_release(lVar3);
  }
  lVar7 = param_1 + _DAT_11271e9a8;
  _objc_loadWeakRetained(lVar7);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf07940(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2847e0(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar7);
LAB_1051af290:
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1051af2bc; end: 1051af2bf;  */

void FUN_1051af2bc(void)

{
  return;
}



/* Entry: 1051af2c0; end: 1051af3f7; -[SCCanvasDetailedAppPermissionsViewController _logRevokeAlertDismissedDidConfirm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051af2c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010be3e220();
  lVar1 = 0x2a8;
  if ((int)lVar4 == 0) {
    lVar1 = 0x2b8;
  }
  uVar11 = *(undefined8 *)((long)&PTR_PTR_11098baa0 + lVar1);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11271e9b4);
  _objc_retain(uVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf51e00();
  puVar8 = puVar2;
  func_0x0001070adbc8(uVar10,uVar11);
  _objc_release(uVar11);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  if (puVar8 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ac300();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar5 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    func_0x00010c297260(puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b5a68;
    _objc_alloc(PTR_PTR_1126b5a68);
    func_0x00010c000e00();
    func_0x00010c18eb00();
    func_0x00010bf9d620(*(undefined8 *)(puVar3 + _DAT_11271e9b8));
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar7);
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 1051af3f8; end: 1051af593; -[SCCanvasDetailedAppPermissionsViewController _presentWebViewWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051af3f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar2 = puVar1;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1051af594;
    puStack_50 = &UNK_110842308;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010c297260(puVar2,param_2,&puStack_68,0);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b5a68;
    _objc_alloc(PTR_PTR_1126b5a68);
    func_0x00010c000e00();
    func_0x00010c18eb00();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271e9b8),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lStack_48);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051af594; end: 1051af5ab;  */

void FUN_1051af594(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1051af5ac; end: 1051af5af; -[SCCanvasDetailedAppPermissionsViewController _didPressRevokePermissionsButton] */

void FUN_1051af5ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebaaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showRevokePermissionsConfirmati_11258c460);
  return;
}



/* Entry: 1051af5b0; end: 1051af5bf; -[SCCanvasDetailedAppPermissionsViewController _hasPrivateStorageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051af5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271e9a4),PTR_s_hasPrivateStorageData_1125d4428);
  return;
}



/* Entry: 1051af5c0; end: 1051af5cf; -[SCCanvasDetailedAppPermissionsViewController _isAppConnected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051af5c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271e9a4),PTR_s_isConnected_1125f9610);
  return;
}



/* Entry: 1051af5d0; end: 1051af613; -[SCCanvasDetailedAppPermissionsViewController _isMiniOrGame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051af5d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e9a4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf04ea0();
  if (lVar1 != 1) {
    func_0x00010bf04ea0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 1051af614; end: 1051af9b7; -[SCCanvasDetailedAppPermissionsViewController _showRevokePermissionsConfirmationAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051af614(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x0001051b30b8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001051b2f68();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001051b30d0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be3e220();
  lVar5 = *(long *)(param_1 + (long)_DAT_11271e9a4);
  func_0x00010bf04ea0();
  uVar13 = uVar2;
  if (lVar5 == 0) goto LAB_1051af76c;
  uVar6 = param_1;
  func_0x00010be34480();
  if ((int)uVar6 == 0) {
    if ((uVar4 & 1) == 0) goto LAB_1051af718;
    func_0x0001051b2fb0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001051b2fc8();
    _objc_retainAutoreleasedReturnValue();
LAB_1051af6fc:
    _objc_release(uVar2);
    func_0x0001051b2fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    uVar1 = uVar6;
  }
  else {
    if ((uVar4 & 1) != 0) {
      func_0x0001051b3010();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x0001051b3028();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051af6fc;
    }
LAB_1051af718:
    func_0x0001051b3070();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001051b3088();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x0001051b30a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    uVar1 = uVar6;
  }
  _objc_release(uVar3);
  uVar3 = uVar2;
LAB_1051af76c:
  _objc_initWeak(auStack_90,param_1);
  puVar7 = PTR_PTR_1126aed70;
  puVar12 = auStack_90;
  _objc_copyWeak(auStack_98,puVar12);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aed70;
  puVar8 = puVar7;
  func_0x0001051b30e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar7;
  puStack_80 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar8);
  _objc_release(puVar10);
  func_0x00010c10eda0(param_1);
  uVar2 = param_1;
  func_0x00010be41f80();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010be3e220();
    lVar5 = 0x2a0;
    if ((int)uVar2 == 0) {
      lVar5 = 0x2b0;
    }
    puVar14 = *(undefined1 **)((long)&PTR_PTR_11098baa0 + lVar5);
    _objc_retain(puVar14);
    uVar11 = *(undefined8 *)(param_1 + (long)_DAT_11271e9b4);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x0001070adbc8();
    _objc_release(uVar11);
    _objc_release(puVar14);
  }
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(uVar1);
  func_0x00010bf84b00(puVar12);
  lVar5 = uVar1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  func_0x00010be2f600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1051af9b8; end: 1051afa2f;  */

void FUN_1051af9b8(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051afa30; end: 1051afa7b; -[SCCanvasDetailedAppPermissionsViewController _handleRevokeActionDidConfirm:] */

void FUN_1051afa30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((int)param_3 != 0) {
    func_0x00010be97400(param_1);
  }
  uVar1 = param_1;
  func_0x00010be41f80();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be57f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logRevokeAlertDismissedDidConfi_112573970,param_3);
    return;
  }
  return;
}



/* Entry: 1051afa7c; end: 1051afbfb; -[SCCanvasDetailedAppPermissionsViewController _revokePermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051afa7c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar4 = (long)_DAT_11271e9c0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c1405a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1beb60();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  lVar2 = param_1 + _DAT_11271e9a8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = (long)_DAT_11271e9a4;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf07940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f000(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bfda9a0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c082540(*(undefined8 *)(param_1 + lVar4));
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf6b900(lVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1051afbfc; end: 1051afc43;  */

void FUN_1051afbfc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28480();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051afc44; end: 1051afcff; -[SCCanvasDetailedAppPermissionsViewController _handleDidDeleteConnectionWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051afc44(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x00010be57a80();
  if (param_3 == 0) {
    func_0x00010bee30c0(param_1);
    *(undefined1 *)(param_1 + _DAT_11271e9c4) = 1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    param_1 = *(long *)(param_1 + _DAT_11271e9c0);
    func_0x00010c1405a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1beb60();
    _objc_release(param_1);
    puVar1 = PTR_PTR_1126afca8;
    func_0x0001051b3160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051afd00; end: 1051afdff; -[SCCanvasDetailedAppPermissionsViewController _logRemovedConnection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051afd00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271e9a4;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf04ea0();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b5ae8;
  _objc_opt_new(PTR_PTR_1126b5ae8);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf07940(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b70a0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c1b7100(puVar2,param_2,4);
  puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b70e0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e9b4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051afe00; end: 1051aff5f; -[SCCanvasDetailedAppPermissionsViewController _updateUserPreferencesForGamesAndMinis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051afe00(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11271e9a4;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf04ea0();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010bf04ea0();
    if (lVar1 != 1) {
      return;
    }
  }
  lVar7 = *(long *)(param_1 + lVar7);
  func_0x00010bf07940();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_1 + _DAT_11271e9b0;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar2 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010bf529e0();
    if (uVar4 != 0) {
      uVar4 = uVar2;
      func_0x00010c0d3c80(uVar2);
      func_0x00010c12d360();
      uVar6 = uVar4;
      func_0x00010bf51e00(uVar4);
      func_0x00010c1d0640(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1051aff60; end: 1051affb7; -[SCCanvasDetailedAppPermissionsViewController appPermissionsView:didOpenURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aff60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010be7f620(param_1,param_2,param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e9b4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070adbc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051affb8; end: 1051b0107; -[SCCanvasDetailedAppPermissionsViewController didTapUserDataDeletionInfoButton] */

void FUN_1051affb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x0001051b3238();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001051b3250();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed70;
  uVar3 = uVar2;
  func_0x0001051b3268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar6);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1051b0108; end: 1051b0117;  */

void FUN_1051b0108(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1051b0118; end: 1051b016f; -[SCCanvasDetailedAppPermissionsViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b0118(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e9b8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051b0170; end: 1051b0203; -[SCCanvasDetailedAppPermissionsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b0170(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e9bc,0);
  _objc_storeStrong(param_1 + _DAT_11271e9c0,0);
  _objc_storeStrong(param_1 + _DAT_11271e9a4,0);
  _objc_storeStrong(param_1 + _DAT_11271e9b8,0);
  _objc_storeStrong(param_1 + _DAT_11271e9b4,0);
  _objc_destroyWeak(param_1 + _DAT_11271e9b0);
  _objc_destroyWeak(param_1 + _DAT_11271e9ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e9a8);
  return;
}



/* Entry: 1051b0204; end: 1051b0217; -[SCCanvasConnectedAppsEmptyView init] */

void FUN_1051b0204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1051b0218; end: 1051b0267; -[SCCanvasConnectedAppsEmptyView initWithFrame:] */

undefined1 * FUN_1051b0218(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6b78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1051b0268; end: 1051b0887; -[SCCanvasConnectedAppsEmptyView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1051b0268(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar22 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
  lVar20 = (long)_DAT_11271e9c8;
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar20),param_2,7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x0001051b3178();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
  lVar19 = (long)_DAT_11271e9cc;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c213040(uVar18,param_2,1);
  func_0x0001051b3190();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar19),param_2,uVar18);
  _objc_release(uVar18);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19),param_2,0x15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c193a00(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar19),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
  lVar21 = (long)_DAT_11271e9d0;
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar18);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21),param_2,0);
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar18,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  func_0x0001051b3148();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar18,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c271420(uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar18,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar18);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar20));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar21));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar20);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  lStack_c8 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar5;
  func_0x00010bf493c0(0xc014000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  uStack_c0 = uVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  uStack_b8 = uVar23;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar8;
  func_0x00010bf493c0(0xc039000000000000,uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  uStack_b0 = uVar24;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar10;
  func_0x00010bf493c0(0xc044000000000000,uVar10,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar21);
  uStack_a8 = uVar25;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  uStack_a0 = uVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar15;
  func_0x00010bf493c0(0x4014000000000000,uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_c8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(uVar22);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar25);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar24);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar23);
  _objc_release(lVar20);
  _objc_release(uVar7);
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_11271e9d0);
}



/* Entry: 1051b0888; end: 1051b0897; -[SCCanvasConnectedAppsEmptyView privacyPolicyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051b0888(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e9d0);
}



/* Entry: 1051b0898; end: 1051b08e7; -[SCCanvasConnectedAppsEmptyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b0898(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e9d0,0);
  _objc_storeStrong(param_1 + _DAT_11271e9cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e9c8,0);
  return;
}



/* Entry: 1051b08e8; end: 1051b08fb; -[SCCanvasConnectedAppsErrorView init] */

void FUN_1051b08e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1051b08fc; end: 1051b094b; -[SCCanvasConnectedAppsErrorView initWithFrame:] */

undefined1 * FUN_1051b08fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6b80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1051b094c; end: 1051b0eaf; -[SCCanvasConnectedAppsErrorView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1051b094c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar16 = (long)_DAT_11271e9d4;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar16),param_2,0x16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x0001051b31a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar18 = (long)_DAT_11271e9d8;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar18),param_2,0x15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  func_0x0001051b31c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
  lVar17 = (long)_DAT_11271e9dc;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar15,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x0001051b31d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar15,param_2,puVar1,0);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c271420(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar15,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar15);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar18));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  lStack_c0 = lVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493c0(0xc050400000000000,uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_b8 = uVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_b0 = uVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar9;
  func_0x00010bf493c0(0x4024000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  uStack_a8 = uVar20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  uStack_a0 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar12;
  func_0x00010bf493c0(0x4034000000000000,uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_c0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar22);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar21);
  _objc_release(lVar16);
  _objc_release(uVar11);
  _objc_release(uVar20);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_11271e9dc);
}



/* Entry: 1051b0eb0; end: 1051b0ebf; -[SCCanvasConnectedAppsErrorView tryAgainButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051b0eb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e9dc);
}



/* Entry: 1051b0ec0; end: 1051b0f0f; -[SCCanvasConnectedAppsErrorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b0ec0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e9dc,0);
  _objc_storeStrong(param_1 + _DAT_11271e9d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e9d4,0);
  return;
}



/* Entry: 1051b0f10; end: 1051b11d7; -[SCCanvasDetailedAppPermissionsView initWithAppConnection:imageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1051b0f10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_178 = PTR_PTR_1126e6b88;
  puVar5 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar5,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar5 != (undefined8 *)0x0) {
    lVar10 = (long)_DAT_11271e9e0;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)((long)puVar5 + lVar10);
    *(long *)((long)puVar5 + lVar10) = param_3;
    _objc_release(uVar1);
    _objc_storeWeak((long)puVar5 + (long)_DAT_11271e9e4,param_4);
    func_0x00010beb14e0(puVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar11 = (long)_DAT_11271e9e8;
    uVar1 = *(undefined8 *)((long)puVar5 + lVar11);
    *(undefined **)((long)puVar5 + lVar11) = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar9 = (long)_DAT_11271e9ec;
    uVar1 = *(undefined8 *)((long)puVar5 + lVar9);
    *(undefined **)((long)puVar5 + lVar9) = puVar2;
    _objc_release(uVar1);
    lVar3 = *(long *)((long)puVar5 + lVar10);
    func_0x00010bf08c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar1 = *(undefined8 *)(lVar6 * 8);
        uVar8 = *(undefined8 *)((long)puVar5 + lVar11);
        func_0x00010c0d4f60(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar8);
        _objc_release(uVar1);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    lVar3 = *(long *)((long)puVar5 + lVar10);
    func_0x00010c241a20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar1 = *(undefined8 *)(lVar10 * 8);
        uVar8 = *(undefined8 *)((long)puVar5 + lVar9);
        func_0x00010c0d4f60(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar8);
        _objc_release(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar7 = (long)_DAT_11271e9e0;
  lVar4 = *(long *)(param_3 + lVar7);
  func_0x00010bf04ea0();
  puVar5 = (undefined8 *)0x1;
  if (lVar4 != 1) {
    lVar4 = *(long *)(param_3 + lVar7);
    func_0x00010bf04ea0(lVar4);
    puVar5 = (undefined8 *)(ulong)(lVar4 == 2);
  }
  return puVar5;
}



/* Entry: 1051b11d8; end: 1051b121b; -[SCCanvasDetailedAppPermissionsView _isMiniOrGame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b11d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e9e0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf04ea0();
  if (lVar1 != 1) {
    func_0x00010bf04ea0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 1051b121c; end: 1051b124b; -[SCCanvasDetailedAppPermissionsView selectedScopeNamesArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b121c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e9e8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051b124c; end: 1051b127b; -[SCCanvasDetailedAppPermissionsView snapKitFeatures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b124c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e9ec);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051b127c; end: 1051b1283; -[SCCanvasDetailedAppPermissionsView numberOfSectionsInTableView:] */

undefined8 FUN_1051b127c(void)

{
  return 2;
}



/* Entry: 1051b1284; end: 1051b131f; -[SCCanvasDetailedAppPermissionsView tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051b1284(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271e9e0);
    func_0x00010c241a20(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 0) {
      uVar2 = 0;
      goto LAB_1051b1304;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271e9e0);
    func_0x00010bf08c40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
LAB_1051b1304:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1051b1320; end: 1051b18ff; -[SCCanvasDetailedAppPermissionsView tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b1320(ulong param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  ulong uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110dc9f58);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c1554e0();
  if (lVar2 == 0) {
    uVar3 = *(ulong *)(param_1 + (long)_DAT_11271e9e0);
    func_0x00010bf08c40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c142240(param_4);
    uVar4 = uVar3;
    func_0x00010c0dfd20(uVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c0d4f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf6e700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
LAB_1051b148c:
    uVar5 = uVar4;
    func_0x00010c272e00();
    puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
    iVar1 = (int)uVar5;
    uVar5 = uVar4;
    func_0x00010bfe5b40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar11,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    lVar2 = param_4;
    func_0x00010c1554e0();
    if (lVar2 == 1) {
      uVar3 = *(ulong *)(param_1 + (long)_DAT_11271e9e0);
      func_0x00010c241a20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c142240(param_4);
      uVar4 = uVar3;
      func_0x00010c0dfd20(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010c0d4f60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_1;
      func_0x00010bdfafa0(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051b148c;
    }
    puVar11 = (undefined *)0x0;
    iVar1 = 0;
    uVar10 = 0;
    uVar3 = 0;
  }
  puVar6 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b48f0;
  _objc_alloc(PTR_PTR_1126b48f0);
  func_0x00010c013de0(0,0,0x4040000000000000,0x4040000000000000);
  lVar2 = param_1 + (long)_DAT_11271e9e4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1aa200(puVar6,param_2,lVar2);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b4860;
  func_0x00010c0fde60(PTR_PTR_1126b4860,param_2,puVar11,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc200(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  puVar7 = param_3;
  func_0x00010c27f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9fe0();
  _objc_release(puVar7);
  if (iVar1 == 0) {
    puVar7 = param_3;
    func_0x00010c27f7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    goto LAB_1051b189c;
  }
  puVar7 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc(PTR__OBJC_CLASS___UISwitch_1126b0680);
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(uVar12,uVar14,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c0699c0();
  func_0x00010c0699c0(puVar7);
  dVar15 = 0.0;
  func_0x00010c19f0e0(0,0,uVar12,uVar14,puVar7);
  func_0x00010c0699c0(puVar7);
  dVar13 = 28.0;
  dVar16 = 28.0 / dVar15;
  func_0x00010c0699c0(puVar7);
  func_0x00010c0699c0(puVar7);
  _CGAffineTransformMakeTranslation(&uStack_c0,dVar13 * -0.5,dVar15 * -0.5);
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  dStack_110 = dStack_b0;
  uStack_f8 = uStack_98;
  dStack_100 = dStack_a0;
  _CGAffineTransformScale(&uStack_f0,dVar16,dVar16,&uStack_120);
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  dStack_b0 = dStack_e0;
  uStack_98 = uStack_c8;
  dStack_a0 = dStack_d0;
  dVar13 = dStack_d0;
  dVar15 = dStack_e0;
  func_0x00010c0699c0(puVar7);
  func_0x00010c0699c0(puVar7);
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  dStack_110 = dStack_b0;
  uStack_f8 = uStack_98;
  dStack_100 = dStack_a0;
  _CGAffineTransformTranslate(&uStack_f0,dVar13 * 0.5,dVar15 * 0.5,&uStack_120);
  uStack_a8 = uStack_d8;
  dStack_b0 = dStack_e0;
  uStack_98 = uStack_c8;
  dStack_a0 = dStack_d0;
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  func_0x00010c219960(puVar7,param_2,&uStack_f0);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_alloc(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010c01ad40(0x3fdb8d4fdf3b645a,0x3fe70a3d70a3d70a,0x3fe947ae147ae148,0x3ff0000000000000);
  func_0x00010c1d4000(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  lVar2 = param_4;
  func_0x00010c1554e0();
  if (lVar2 == 0) {
    uStack_130 = param_1;
    func_0x00010c159ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_130;
    func_0x00010bf4b900();
    if ((int)uVar4 != 0) {
      _objc_release(uStack_130);
      goto LAB_1051b1804;
    }
    lVar9 = param_4;
    func_0x00010c1554e0();
    if (lVar9 == 1) goto LAB_1051b17a0;
    _objc_release(uStack_130);
  }
  else {
    lVar9 = param_4;
    func_0x00010c1554e0();
    if (lVar9 == 1) {
LAB_1051b17a0:
      uVar4 = param_1;
      func_0x00010c241a20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4b900();
      _objc_release(uVar4);
      if (lVar2 == 0) {
        _objc_release(uStack_130);
        if ((uVar5 & 1) != 0) goto LAB_1051b1804;
      }
      else if ((int)uVar5 != 0) {
LAB_1051b1804:
        func_0x00010c1d1360(puVar7,param_2,1);
      }
    }
  }
  func_0x00010c160fc0(puVar7,param_2,&PTR____CFConstantStringClassReference_110dca558);
  puVar8 = puVar7;
  func_0x00010c08c0e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(puVar8);
  lVar2 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c211780(puVar7,param_2,lVar2);
  func_0x00010befbd60(puVar7,param_2,param_1,PTR_s__toggleValueChanged__112528210,0x1000);
  puVar8 = param_3;
  func_0x00010c27f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(puVar8);
LAB_1051b189c:
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1051b1900; end: 1051b190b; -[SCCanvasDetailedAppPermissionsView tableView:heightForRowAtIndexPath:] */

undefined8 FUN_1051b1900(void)

{
  return 0x404e000000000000;
}



/* Entry: 1051b190c; end: 1051b196f; -[SCCanvasDetailedAppPermissionsView textView:shouldInteractWithURL:inRange:interaction:] */

undefined8
FUN_1051b190c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf05d40();
  _objc_release(param_4);
  _objc_release(param_1);
  return 0;
}



/* Entry: 1051b1970; end: 1051b197f; -[SCCanvasDetailedAppPermissionsView _hasPrivateStorageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b1970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271e9e0),PTR_s_hasPrivateStorageData_1125d4428);
  return;
}



/* Entry: 1051b1980; end: 1051b198f; -[SCCanvasDetailedAppPermissionsView _isAppConnected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b1980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271e9e0),PTR_s_isConnected_1125f9610);
  return;
}



/* Entry: 1051b1990; end: 1051b19c3; -[SCCanvasDetailedAppPermissionsView _descriptionTextForAppConnection] */

void FUN_1051b1990(int param_1)

{
  func_0x00010be3e220();
  if (param_1 == 0) {
    func_0x0001051b3040();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001051b2f80();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051b19c4; end: 1051b2b73; -[SCCanvasDetailedAppPermissionsView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b19c4(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  double dVar44;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
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
  undefined **ppuStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b48f0;
  _objc_alloc();
  uVar40 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar41 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar42 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar43 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar40,uVar41,uVar42,uVar43);
  lVar37 = (long)_DAT_11271e9f0;
  uVar33 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar2;
  _objc_release(uVar33);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37),param_2,0);
  lVar4 = param_1 + (long)_DAT_11271e9e4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar37),param_2,lVar4);
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar38 = (long)_DAT_11271e9e0;
  uVar33 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf07920(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar33);
  puVar3 = PTR_PTR_1126b4860;
  func_0x00010c0fde60(PTR_PTR_1126b4860,param_2,puVar2,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc200(*(undefined8 *)(param_1 + lVar37),param_2,puVar3);
  _objc_release(puVar3);
  lVar4 = *(long *)(param_1 + lVar38);
  func_0x00010bf04ea0();
  uVar33 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c08c0e0(uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = 0x4041800000000000;
  if (lVar4 != 0) {
    uVar39 = 0x404e000000000000;
  }
  func_0x00010c1842e0(uVar39);
  _objc_release(uVar33);
  uVar33 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c08c0e0(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar33);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar40,uVar41,uVar42,uVar43);
  lVar4 = (long)_DAT_11271e9f4;
  uVar33 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar3;
  _objc_release(uVar33);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                      &PTR____CFConstantStringClassReference_110dca4f8);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(puVar3);
  uVar33 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf07a80(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,uVar33);
  _objc_release(uVar33);
  puVar3 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(uVar40,uVar41,uVar42,uVar43);
  lVar36 = (long)_DAT_11271e9f8;
  uVar33 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar3;
  _objc_release(uVar33);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar36),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar36),param_2,
                      &PTR____CFConstantStringClassReference_110dca518);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar36),param_2,0x15);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar36),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar36),param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c193a00(*(undefined8 *)(param_1 + lVar36),param_2,0);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar36));
  uVar33 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c26ba00(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(0);
  _objc_release(uVar33);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar36),param_2,1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar36),param_2,param_1);
  uVar5 = *(ulong *)(param_1 + lVar38);
  func_0x00010bf04ea0();
  if (uVar5 + 1 < 5) {
    if ((1L << (uVar5 + 1 & 0x3f) & 0x13U) == 0) {
      uVar33 = *(undefined8 *)(param_1 + lVar36);
      uVar5 = param_1;
      func_0x00010bdfb040();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x0001051b3220();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_a8 = uVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,1);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110dc9f78;
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_b0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212fe0(uVar33,param_2,uVar5,puVar3,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(uVar6);
    }
    else {
      uVar33 = *(undefined8 *)(param_1 + lVar36);
      func_0x0001051b3100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212fe0(uVar33,param_2,uVar5,&PTR__OBJC_CLASS___NSConstantArray_11117e5e0,
                          &PTR__OBJC_CLASS___NSConstantArray_11117e5f8);
    }
    _objc_release(uVar5);
  }
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c013de0(uVar40,uVar41,uVar42,uVar43);
  lVar34 = (long)_DAT_11271e9fc;
  uVar33 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar3;
  _objc_release(uVar33);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar34),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar34),param_2,
                      &PTR____CFConstantStringClassReference_110dca578);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar34),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar34),param_2,param_1);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar34),param_2,0);
  uVar33 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar33);
  uVar33 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar33);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar34),param_2,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar33 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar33);
  _objc_release(puVar3);
  uVar33 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar33);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar34),param_2,0);
  uVar33 = *(undefined8 *)(param_1 + lVar34);
  puVar3 = PTR_PTR_1126b5a18;
  _objc_opt_class(PTR_PTR_1126b5a18);
  func_0x00010c125fe0(uVar33,param_2,puVar3,&PTR____CFConstantStringClassReference_110dc9f58);
  lVar8 = *(long *)(param_1 + lVar38);
  func_0x00010bf08c40(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar8;
  func_0x00010bf529e0();
  lVar9 = *(long *)(param_1 + lVar38);
  func_0x00010c241a20(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  lVar11 = *(long *)(param_1 + lVar38);
  func_0x00010bf08c40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010bf529e0();
  lVar12 = *(long *)(param_1 + lVar38);
  func_0x00010c241a20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  func_0x00010bf529e0();
  _objc_release(lVar12);
  _objc_release(lVar11);
  if ((ulong)(lVar9 + lVar8) < 6) {
    dVar44 = (double)(ulong)(lVar10 + lVar35) * 60.0;
  }
  else {
    func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar34),param_2,1);
    dVar44 = 300.0;
  }
  puVar3 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_11271ea00;
  uVar33 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar3;
  _objc_release(uVar33);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar35),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar35),param_2,
                      &PTR____CFConstantStringClassReference_110dca538);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar35),param_2,6);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar35),param_2,0xd0,0);
  uVar5 = *(ulong *)(param_1 + lVar38);
  func_0x00010bf04ea0();
  if (uVar5 == 0) {
    func_0x0001051b30d0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = param_1;
    func_0x00010be34480();
    uVar5 = param_1;
    func_0x00010be3e220();
    if ((int)uVar6 == 0) {
      if ((uVar5 & 1) != 0) {
        func_0x0001051b2f98();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1051b2144;
      }
    }
    else if ((uVar5 & 1) != 0) {
      func_0x0001051b2ff8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051b2144;
    }
    func_0x0001051b3058();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1051b2144:
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar35),param_2,uVar5,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar37));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar36));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar35));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar13 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar37);
  uStack_e0 = uVar33;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar14;
  func_0x00010bf493c0(0x4054000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar37);
  uStack_d8 = uVar39;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar37);
  uStack_d0 = uVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar18;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar4);
  uStack_c8 = uVar23;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar4);
  uStack_c0 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bf1ff80(uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar21;
  func_0x00010bf493c0(0x403e000000000000,uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar25;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar25);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar24);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar23);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar39);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar33);
  _objc_release(uVar6);
  _objc_release(uVar13);
  uVar23 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar23;
  func_0x00010bf493c0(0x4042000000000000,uVar23,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar36);
  uStack_f8 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar24;
  func_0x00010bf493c0(0xc042000000000000,uVar24,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar36);
  uStack_f0 = uVar39;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar25;
  func_0x00010bf493c0(0x4042000000000000,uVar25,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  _objc_release(uVar17);
  _objc_release(uVar13);
  _objc_release(uVar25);
  _objc_release(uVar39);
  _objc_release(uVar15);
  _objc_release(uVar24);
  _objc_release(uVar33);
  _objc_release(uVar6);
  _objc_release(uVar23);
  uVar6 = param_1;
  func_0x00010be41f80();
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if ((uVar6 & 1) == 0) {
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar34));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar34);
    uStack_128 = uVar33;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar14;
    func_0x00010bf493c0(0x402e000000000000,uVar14,param_2,uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar34);
    uStack_120 = uVar39;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar18;
    func_0x00010bf49420(dVar44);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar34);
    uStack_118 = uVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_1;
    func_0x00010c2a5060(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar19;
    func_0x00010bf493c0(0xc049000000000000,uVar19,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar35);
    uStack_110 = uVar23;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_1;
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar21;
    func_0x00010bf493a0(uVar21,param_2,uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + lVar35);
    uStack_108 = uVar24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar22;
    func_0x00010bf493c0(0xc049000000000000,uVar22,param_2,uVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_100 = uVar25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_128,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3,param_2,puVar27);
    _objc_release(puVar27);
    _objc_release(uVar25);
    _objc_release(uVar26);
    _objc_release(uVar22);
    _objc_release(uVar24);
    _objc_release(uVar20);
    _objc_release(uVar21);
    _objc_release(uVar23);
    _objc_release(uVar15);
    _objc_release(uVar19);
    _objc_release(uVar17);
    _objc_release(uVar18);
    _objc_release(uVar39);
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar33);
    _objc_release(uVar6);
    _objc_release(uVar13);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar38);
    func_0x00010c073020();
    if (iVar1 != 0) {
      puVar27 = PTR_PTR_1126b5af0;
      _objc_alloc();
      func_0x00010c013de0(uVar40,uVar41,uVar42,uVar43);
      *(undefined1 *)(param_1 + (long)_DAT_11271ea04) = 1;
      func_0x00010c18b5e0();
      func_0x00010c1749e0(puVar27,param_2,1);
      func_0x00010c219b60(puVar27,param_2,0);
      func_0x00010c160fc0(puVar27,param_2,&PTR____CFConstantStringClassReference_110dca5b8);
      func_0x00010befbb60(param_1,param_2,puVar27);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar28 = puVar27;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar28;
      func_0x00010bf493a0(puVar28,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar27;
      puStack_138 = puVar29;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar33 = *(undefined8 *)(param_1 + lVar35);
      func_0x00010c274200(uVar33);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar30;
      func_0x00010bf493c0(0xc024000000000000,puVar30,param_2,uVar33);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_130 = puVar31;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_138,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3,param_2,puVar32);
      _objc_release(puVar32);
      _objc_release(puVar31);
      _objc_release(uVar33);
      _objc_release(puVar30);
      _objc_release(puVar29);
      _objc_release(uVar6);
      _objc_release(puVar28);
      _objc_release(puVar27);
    }
    uVar39 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar39;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7,param_2,uVar33);
  }
  else {
    uVar40 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar40;
    func_0x00010bf493a0(uVar40,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar41 = *(undefined8 *)(param_1 + lVar35);
    uStack_148 = uVar33;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar41;
    func_0x00010bf493c0(0xc049000000000000,uVar41,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_140 = uVar39;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_148,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3,param_2,puVar27);
    _objc_release(puVar27);
    _objc_release(uVar39);
    _objc_release(uVar15);
    _objc_release(uVar41);
    _objc_release(uVar33);
    _objc_release(uVar6);
    _objc_release(uVar40);
    uVar39 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar39;
    func_0x00010bf493a0(uVar39,param_2,uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7,param_2,uVar40);
    _objc_release(uVar40);
  }
  _objc_release(uVar33);
  _objc_release(uVar39);
  puVar3 = puVar7;
  func_0x00010be85f80(param_1);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar4 = (long)_DAT_11271ea08;
  if (*(long *)(puVar2 + lVar4) == 0) {
    uVar33 = 0;
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar33 = *(undefined8 *)(puVar2 + lVar4);
  }
  *(undefined **)(puVar2 + lVar4) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar33);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(puVar2 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1051b2b74; end: 1051b2bf7; -[SCCanvasDetailedAppPermissionsView _reInstallTableViewConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b2b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11271ea08;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051b2bf8; end: 1051b2cc3; -[SCCanvasDetailedAppPermissionsView _toggleValueChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b2bf8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if ((lVar2 != 0) &&
     ((lVar2 = param_3, func_0x00010c268120(), iVar1 = _DAT_11271e9e8, lVar2 == 0 ||
      (lVar2 = param_3, func_0x00010c268120(), iVar1 = _DAT_11271e9ec, lVar2 == 1)))) {
    uVar4 = *(undefined8 *)(param_1 + iVar1);
    func_0x00010bf4b900(uVar4,param_2,lVar3);
    if ((int)uVar4 == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + iVar1),param_2,lVar3);
    }
    else {
      func_0x00010c12d360();
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051b2cc4; end: 1051b2d87; -[SCCanvasDetailedAppPermissionsView _descriptionForFeature:] */

void FUN_1051b2cc4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar1);
  if ((int)ppuVar2 == 0) {
    ppuVar1 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0720c0();
    _objc_release(ppuVar1);
    if ((int)ppuVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x0001051b3208();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x0001051b31f0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1051b2d88; end: 1051b2d97; -[SCCanvasDetailedAppPermissionsView didToggleUserDataDeletionCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b2d88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271ea04) = param_3;
  return;
}



/* Entry: 1051b2d98; end: 1051b2dcb; -[SCCanvasDetailedAppPermissionsView didTapInfoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b2d98(long param_1)

{
  param_1 = param_1 + _DAT_11271ea0c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b2dcc; end: 1051b2ddb; -[SCCanvasDetailedAppPermissionsView isUserDataDeletionSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1051b2dcc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271ea04);
}



/* Entry: 1051b2ddc; end: 1051b2deb; -[SCCanvasDetailedAppPermissionsView revokePermissionsButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051b2ddc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ea00);
}



/* Entry: 1051b2dec; end: 1051b2dfb; -[SCCanvasDetailedAppPermissionsView privacyPolicyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051b2dec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ea10);
}



/* Entry: 1051b2dfc; end: 1051b2e1b; -[SCCanvasDetailedAppPermissionsView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b2dfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ea0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051b2e1c; end: 1051b2e2f; -[SCCanvasDetailedAppPermissionsView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b2e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ea0c,param_3);
  return;
}



/* Entry: 1051b2e30; end: 1051b2f07; -[SCCanvasDetailedAppPermissionsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051b2e30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ea0c);
  _objc_storeStrong(param_1 + _DAT_11271ea10,0);
  _objc_storeStrong(param_1 + _DAT_11271ea00,0);
  _objc_storeStrong(param_1 + _DAT_11271ea08,0);
  _objc_storeStrong(param_1 + _DAT_11271e9ec,0);
  _objc_storeStrong(param_1 + _DAT_11271e9e8,0);
  _objc_storeStrong(param_1 + _DAT_11271e9fc,0);
  _objc_storeStrong(param_1 + _DAT_11271e9f8,0);
  _objc_storeStrong(param_1 + _DAT_11271e9f4,0);
  _objc_storeStrong(param_1 + _DAT_11271e9f0,0);
  _objc_storeStrong(param_1 + _DAT_11271e9e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e9e4);
  return;
}



/* Entry: 1051b2f08; end: 1051b327f;  */

void FUN_1051b2f08(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9fd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc9fd8,
                      &PTR____CFConstantStringClassReference_110dc9ff8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1051b3280; end: 1051b3347; -[SCCanvasConnectedAppsCollectionViewCellViewModel initWithSingleTapActionModel:connection:groupingStyle:externalEdges:isIconCircle:] */

undefined1 *
FUN_1051b3280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e6b90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b3348; end: 1051b336b; -[SCCanvasConnectedAppsCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_1051b3348(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1051b336c; end: 1051b33ef; -[SCCanvasConnectedAppsCollectionViewCellViewModel hash] */

undefined8 * FUN_1051b336c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1051b34a0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1051b34ac;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1051b34ac;
        }
        goto LAB_1051b34a0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1051b34ac:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1051b33f0; end: 1051b34c7; -[SCCanvasConnectedAppsCollectionViewCellViewModel isEqual:] */

long FUN_1051b33f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1051b34a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1051b34ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1051b34ac;
        }
        goto LAB_1051b34a0;
      }
    }
    lVar3 = 0;
  }
LAB_1051b34ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1051b34c8; end: 1051b34cf; -[SCCanvasConnectedAppsCollectionViewCellViewModel singleTapActionModel] */

undefined8 FUN_1051b34c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051b34d0; end: 1051b34d7; -[SCCanvasConnectedAppsCollectionViewCellViewModel connection] */

undefined8 FUN_1051b34d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051b34d8; end: 1051b34df; -[SCCanvasConnectedAppsCollectionViewCellViewModel groupingStyle] */

undefined8 FUN_1051b34d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1051b34e0; end: 1051b34e7; -[SCCanvasConnectedAppsCollectionViewCellViewModel externalEdges] */

undefined8 FUN_1051b34e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051b34e8; end: 1051b34ef; -[SCCanvasConnectedAppsCollectionViewCellViewModel isIconCircle] */

undefined1 FUN_1051b34e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1051b34f0; end: 1051b351f; -[SCCanvasConnectedAppsCollectionViewCellViewModel .cxx_destruct] */

void FUN_1051b34f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1051b3520; end: 1051b35bb; -[SCCanvasConnectedAppsScope initWithUIContainer:delegate:] */

undefined1 *
FUN_1051b3520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6b98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b35bc; end: 1051b35c3; -[SCCanvasConnectedAppsScope uiContainer] */

undefined8 FUN_1051b35bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051b35c4; end: 1051b35db; -[SCCanvasConnectedAppsScope delegate] */

void FUN_1051b35c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051b35dc; end: 1051b3607; -[SCCanvasConnectedAppsScope .cxx_destruct] */

void FUN_1051b35dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b3608; end: 1051b3703; -[SCContextAISongUpsellActionPerformer initWithPlusFeatureGating:featureLogging:plusSubscribeScopeExposer:plusSubscribeScopeServices:] */

undefined1 *
FUN_1051b3608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6ba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b3704; end: 1051b39ef; -[SCContextAISongUpsellActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b3704(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfbe700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar4 = param_3;
  func_0x00010beff080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar4 != 0) && (lVar3 == 1)) {
    lVar4 = *(long *)(param_1 + 0x18);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      lVar4 = param_8;
      _objc_retainBlock();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar4;
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2720();
      _objc_release(uVar6);
      puVar5 = PTR_PTR_1126b1da8;
      _objc_alloc(PTR_PTR_1126b1da8);
      func_0x00010c04abe0();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puVar7 = PTR_PTR_1126b5af8;
      func_0x00010c095b40(PTR_PTR_1126b5af8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23e60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
      _objc_initWeak(auStack_68,param_1);
      puVar7 = PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010bffae00(puVar7);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar6);
      _objc_release(puVar5);
      goto LAB_1051b3820;
    }
  }
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  puVar7 = (undefined *)0x0;
LAB_1051b3820:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1051b39f0; end: 1051b3a1b;  */

void FUN_1051b39f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b3a1c; end: 1051b3a8b; -[SCContextAISongUpsellActionPerformer _tearDown] */

void FUN_1051b3a1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b3a8c; end: 1051b3afb; -[SCContextAISongUpsellActionPerformer plusSubscribeDidDismiss] */

void FUN_1051b3a8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b3afc; end: 1051b3b4f; -[SCContextAISongUpsellActionPerformer .cxx_destruct] */

void FUN_1051b3afc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b3b50; end: 1051b3c4b; -[SCContextAIStoryReplyActionPerformer initWithPlusFeatureGating:plusSubscribeScopeExposer:plusSubscribeScopeServices:chatActionPerformer:] */

undefined1 *
FUN_1051b3b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6ba8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b3c4c; end: 1051b3efb; -[SCContextAIStoryReplyActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b3c4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beff0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_3;
  func_0x00010beff120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar2 == 0) || (lVar4 == 0)) {
LAB_1051b3d40:
    (**(code **)(param_8 + 0x10))(param_8,0);
    puVar6 = (undefined *)0x0;
  }
  else {
    if (lVar4 == 3) {
      func_0x00010be7c0e0(param_1);
    }
    else {
      if (lVar4 == 2) goto LAB_1051b3d40;
      lVar2 = param_8;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar2;
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126b1da8;
      _objc_alloc(PTR_PTR_1126b1da8);
      func_0x00010c04abe0();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf23e60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
      _objc_release(uVar5);
      _objc_release(puVar6);
    }
    _objc_initWeak(auStack_68,param_1);
    puVar6 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bffae00(puVar6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051b3efc; end: 1051b3f27;  */

void FUN_1051b3efc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b3f28; end: 1051b40a7; -[SCContextAIStoryReplyActionPerformer _presentKeyboardWithViewController:uiContainer:params:source:completion:] */

void FUN_1051b3f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1051b40a8;
  puStack_80 = &UNK_11086e698;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_6);
  uStack_60 = param_6;
  _objc_retain(param_7);
  uStack_58 = param_7;
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051b40a8; end: 1051b411b;  */

void FUN_1051b40a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    puVar2 = PTR_PTR_1126b5b00;
    _objc_opt_new(PTR_PTR_1126b5b00);
    func_0x00010c0f80c0(uVar3,param_2,puVar2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051b411c; end: 1051b418b; -[SCContextAIStoryReplyActionPerformer _tearDown] */

void FUN_1051b411c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b418c; end: 1051b41fb; -[SCContextAIStoryReplyActionPerformer plusSubscribeDidDismiss] */

void FUN_1051b418c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b41fc; end: 1051b424f; -[SCContextAIStoryReplyActionPerformer .cxx_destruct] */

void FUN_1051b41fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b4250; end: 1051b4333; -[SCContextAddLensActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b4250(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  long in_x7;
  
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  uVar1 = in_x5;
  func_0x00010c0ea4c0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bef9700(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_x5;
  func_0x00010c0ea8e0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  func_0x00010c0eb7c0(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  (**(code **)(in_x7 + 0x10))(in_x7,0);
  _objc_release(in_x7);
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051b4334; end: 1051b4337;  */

void FUN_1051b4334(void)

{
  return;
}



/* Entry: 1051b4338; end: 1051b4597; -[SCContextCollectionItemActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined1 *
FUN_1051b4338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = param_9;
  _objc_retain(param_9);
  _objc_retain(param_7);
  func_0x00010bef2300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c0ea4c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5b08;
  func_0x00010bf3fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar11;
  _objc_release(param_7);
  puVar4 = PTR_PTR_1126b5b10;
  func_0x00010bf3fe80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar4;
  puStack_98 = puVar4;
  func_0x00010c084640(param_4);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5b10;
  puStack_88 = puVar5;
  func_0x00010bf40040();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar7 = param_4;
  puStack_90 = puVar6;
  func_0x00010c269160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  uVar8 = param_4;
  uVar11 = param_1;
  func_0x00010c269160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  func_0x00010c297180(param_1,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uStack_b0;
  puVar12 = puVar3;
  func_0x00010c0eb7c0(uVar2);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_a8);
  _objc_release(uVar11);
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar1 = lStack_a0;
  (**(code **)(lStack_a0 + 0x10))(lStack_a0,0);
  _objc_release(lVar1);
  uVar11 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (undefined1 *)0x0;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_e0;
  lStack_c8 = lVar1;
  pcStack_b8 = FUN_1051b4598;
  uStack_d0 = param_4;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puStack_d8 = PTR_PTR_1126e6bb0;
  uStack_e0 = uVar11;
  _objc_msgSendSuper2(&uStack_e0,PTR_s_init_1125d9248);
  if (puVar10 != (undefined8 *)0x0) {
    _objc_retain(puVar12);
    uVar11 = *(undefined8 *)((long)puVar10 + 8);
    *(undefined **)((long)puVar10 + 8) = puVar12;
    _objc_release(uVar11);
  }
  _objc_release(puVar12);
  return (undefined1 *)puVar10;
}



/* Entry: 1051b4598; end: 1051b460b; -[SCContextSponsoredCtaActionPerformer initWithContextCardCtaProvider:] */

undefined1 * FUN_1051b4598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6bb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b460c; end: 1051b47ab; -[SCContextSponsoredCtaActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051b460c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c24a260();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bef4360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c281320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_6;
    func_0x00010c242420(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c281320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (((param_3 != 0) && (lVar1 != 0)) && (puVar5 != (undefined *)0x0)) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd29c0();
      _objc_release(uVar4);
    }
  }
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return 0;
}



/* Entry: 1051b47ac; end: 1051b47b7; -[SCContextSponsoredCtaActionPerformer .cxx_destruct] */

void FUN_1051b47ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b47b8; end: 1051b4817; -[SCContextAuraActionViewController init] */

undefined1 * FUN_1051b47b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6bb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b480(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}


