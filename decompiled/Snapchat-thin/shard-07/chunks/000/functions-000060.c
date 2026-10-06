/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105120108; end: 10512010f; -[SCChangePWTakeoverRouter takeoverVC] */

undefined8 FUN_105120108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105120110; end: 10512013f; -[SCChangePWTakeoverRouter setTakeoverVC:] */

void FUN_105120110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105120140; end: 105120157; -[SCChangePWTakeoverRouter delegate] */

void FUN_105120140(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105120158; end: 105120163; -[SCChangePWTakeoverRouter setDelegate:] */

void FUN_105120158(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105120164; end: 10512016b; -[SCChangePWTakeoverRouter navController] */

undefined8 FUN_105120164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10512016c; end: 10512019b; -[SCChangePWTakeoverRouter setNavController:] */

void FUN_10512016c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512019c; end: 1051201a3; -[SCChangePWTakeoverRouter navContainer] */

undefined8 FUN_10512019c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1051201a4; end: 1051201d3; -[SCChangePWTakeoverRouter setNavContainer:] */

void FUN_1051201a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051201d4; end: 105120253; -[SCChangePWTakeoverRouter .cxx_destruct] */

void FUN_1051201d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105120254; end: 10512035b; -[SCChangePWTakeoverWorkflow initWithUIContainer:lazyBlizzardUserLogger:lazyGrapheneRegistry:changePasswordScopeExposer:passwordSettingsScopeServices:delegate:resourceDownloader:] */

long FUN_105120254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    _objc_retain(param_9);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_storeWeak(param_1 + 0x10,param_8);
    puVar1 = PTR_PTR_1126b5020;
    _objc_alloc();
    func_0x00010c056d80();
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 10512035c; end: 105120363; -[SCChangePWTakeoverWorkflow launch] */

void FUN_10512035c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentTakeoverModal_1126213f0);
  return;
}



/* Entry: 105120364; end: 10512036b; -[SCChangePWTakeoverWorkflow dismiss] */

void FUN_105120364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissTakeoverModal_1125beb48);
  return;
}



/* Entry: 10512036c; end: 10512039b; -[SCChangePWTakeoverWorkflow routerShouldDismissModal] */

void FUN_10512036c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2686c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512039c; end: 1051203a3; -[SCChangePWTakeoverWorkflow router] */

undefined8 FUN_10512039c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051203a4; end: 1051203d3; -[SCChangePWTakeoverWorkflow setRouter:] */

void FUN_1051203a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051203d4; end: 1051203eb; -[SCChangePWTakeoverWorkflow delegate] */

void FUN_1051203d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051203ec; end: 1051203f7; -[SCChangePWTakeoverWorkflow setDelegate:] */

void FUN_1051203ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1051203f8; end: 105120423; -[SCChangePWTakeoverWorkflow .cxx_destruct] */

void FUN_1051203f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105120424; end: 10512064f; -[SCChangeCompromisedPasswordEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105120424(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_98;
  
  puVar1 = PTR_PTR_1126b5028;
  _objc_alloc();
  lVar2 = param_1;
  FUN_105120650();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11271cb28;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11271cb2c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar15 = 0;
    uStack_98 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + _DAT_11271cb34);
    _objc_retain(uVar15);
    uStack_98 = param_1 + _DAT_11271cb38;
    _objc_loadWeakRetained();
  }
  lVar6 = param_1;
  FUN_105120650();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11271cb30;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar13;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056d80();
  lVar14 = (long)_DAT_11271cb20;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar12);
  _objc_release(uVar15);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uStack_98);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c08b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar14),PTR_s_launch_112600710);
  return;
}



/* Entry: 105120650; end: 105120673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105120650(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271cb24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105120674; end: 1051206cb; -[SCChangeCompromisedPasswordEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105120674(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf82f40(*(undefined8 *)(param_1 + _DAT_11271cb20));
  puStack_28 = PTR_PTR_1126e64d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051206cc; end: 105120747; -[SCChangeCompromisedPasswordEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051206cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cb38);
  _objc_storeStrong(param_1 + _DAT_11271cb34,0);
  _objc_destroyWeak(param_1 + _DAT_11271cb30);
  _objc_destroyWeak(param_1 + _DAT_11271cb2c);
  _objc_destroyWeak(param_1 + _DAT_11271cb28);
  _objc_destroyWeak(param_1 + _DAT_11271cb24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cb20,0);
  return;
}



/* Entry: 105120748; end: 105120847; -[SCChangeCompromisedPasswordTakeoverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105120748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b5030;
  _objc_alloc(PTR_PTR_1126b5030);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271cb3c);
  lVar2 = param_1 + _DAT_11271cb40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271cb44;
  lVar4 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd660(puVar1,param_2,uVar6,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105120848; end: 10512088f; -[SCChangeCompromisedPasswordTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105120848(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271cb3c,0);
  _objc_destroyWeak(param_1 + _DAT_11271cb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271cb44);
  return;
}



/* Entry: 105120890; end: 10512095b; -[SCChangeCompromisedPasswordTakeoverProvider initWithChangeCompromisedPasswordScopeExposer:fstCampaignDataProvider:additionalMetricsData:] */

undefined1 *
FUN_105120890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e64e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10512095c; end: 1051209a3; -[SCChangeCompromisedPasswordTakeoverProvider canShowCampaign:] */

undefined8 FUN_10512095c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1051209a4; end: 105120a5f; -[SCChangeCompromisedPasswordTakeoverProvider showCampaign:uiContainer:onComplete:] */

void FUN_1051209a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b5038;
  _objc_alloc(PTR_PTR_1126b5038);
  func_0x00010c0567c0();
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105120a60; end: 105120aaf; -[SCChangeCompromisedPasswordTakeoverProvider takeoverCompleted] */

void FUN_105120a60(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105120ab0; end: 105120af7; -[SCChangeCompromisedPasswordTakeoverProvider .cxx_destruct] */

void FUN_105120ab0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105120af8; end: 105120bb7; -[SCChangePWTakeoverViewController initWithDelegate:resourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105120af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e64e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271cb58),param_3);
    lVar3 = (long)_DAT_11271cb5c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105120bb8; end: 10512253f; -[SCChangePWTakeoverViewController _setupViews] */

void FUN_105120bb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined1 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_158,param_1);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc(PTR__OBJC_CLASS___UIButton_1126aec48);
  uVar33 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar33,uVar34,uVar35,uVar36);
  func_0x00010c174120(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf21b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf21b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bf21b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  uStack_b8 = uVar6;
  func_0x00010bf21b00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c2a5060(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf49540(0x3feccccccccccccd);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  uStack_b0 = uVar11;
  func_0x00010bf21b00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493c0(0xc051800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf21b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf21b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf21b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000105122cec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf21b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174140(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = param_1;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf49540(0x3feccccccccccccd);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_d0 = uVar3;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  uStack_c8 = uVar13;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf21b00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  uVar3 = param_1;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000105122cd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010bf21b20();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_105122540;
  puStack_168 = &UNK_1108434b0;
  _objc_copyWeak(auStack_160,auStack_158);
  func_0x00010c1d3960(uVar2);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar33,uVar34,uVar35,uVar36);
  func_0x00010c1b9d40(param_1);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010c08dac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = param_1;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf493e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  uStack_e8 = uVar11;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_e0 = uVar7;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf21b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf493c0(0xc059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar16;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar15);
  uVar2 = param_1;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08dac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08dac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar2);
  func_0x000105122cbc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar33,uVar34,uVar35,uVar36);
  func_0x00010c1b9d60(param_1);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar15;
  func_0x00010bf493e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  uStack_100 = uVar12;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  uStack_f8 = uVar9;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c08dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_release(uVar16);
  uVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08dae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release();
  func_0x000105122ca4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee480(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c1411e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,0x4060000000000000,0x4060000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1411e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0x4030000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c1ee4e0(param_1);
  _objc_release(puVar1);
  uVar4 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1411e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar2 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010bf49420(0x4060000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  uStack_118 = uVar12;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  uStack_110 = uVar8;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  puVar19 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(uVar2);
  puVar20 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar21 = puVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar19;
  puStack_140 = puVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar20;
  puStack_138 = puVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar20;
  puStack_130 = puVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c08dae0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar19;
  puStack_128 = puVar27;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493e0(0x3ff4cccccccccccd);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar30;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar18);
  _objc_release(puVar22);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar21);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar33,uVar34,uVar35,uVar36);
  func_0x00010c1aadc0(param_1);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe9c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010bfe9c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = param_1;
  func_0x00010bfe9c60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_150 = uVar7;
  func_0x00010bfe9c60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c1412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_148 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe9c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar18 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13b2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aebf0;
  _objc_alloc();
  uVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80();
  _objc_copyWeak(auStack_188,auStack_158);
  func_0x00010bf88c20(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010bedeba0(param_1);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar18);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_destroyWeak(auStack_160);
  puVar32 = auStack_158;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume(puVar32);
  puVar32 = puVar32 + 0x20;
  _objc_loadWeakRetained(puVar32);
  func_0x00010be00c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar32);
  return;
}



/* Entry: 105122540; end: 10512256b;  */

void FUN_105122540(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512256c; end: 105122613;  */

void FUN_10512256c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105122614;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105122614; end: 105122647;  */

void FUN_105122614(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105122648; end: 105122707; -[SCChangePWTakeoverViewController _updateRingLayerStyle] */

void FUN_105122648(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c1411e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(uVar1,param_2,puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c1411e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(param_1,param_2,puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105122708; end: 10512284b; -[SCChangePWTakeoverViewController _handleBoltIconFetched:] */

void FUN_105122708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bfe9c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  uVar3 = uVar2;
  func_0x00010bf49420(param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfe9c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  uVar3 = uVar2;
  func_0x00010bf49420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfe9720(param_5,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bfe9c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10512284c; end: 10512287b; -[SCChangePWTakeoverViewController _didTapDismissButton] */

void FUN_10512284c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7ca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10512287c; end: 1051228ab; -[SCChangePWTakeoverViewController _didTapChangePasswordButton] */

void FUN_10512287c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051228ac; end: 105122943; -[SCChangePWTakeoverViewController traitCollectionDidChange:] */

void FUN_1051228ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_1126e64e8;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  uVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010bedeba0(param_1);
  }
  return;
}



/* Entry: 105122944; end: 105122953; -[SCChangePWTakeoverViewController resourceDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105122944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb5c);
}



/* Entry: 105122954; end: 105122993; -[SCChangePWTakeoverViewController setResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb5c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105122994; end: 1051229a3; -[SCChangePWTakeoverViewController imgShieldIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105122994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb60);
}



/* Entry: 1051229a4; end: 1051229e3; -[SCChangePWTakeoverViewController setImgShieldIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051229a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb60;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051229e4; end: 1051229f3; -[SCChangePWTakeoverViewController ringLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051229e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb64);
}



/* Entry: 1051229f4; end: 105122a33; -[SCChangePWTakeoverViewController setRingLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051229f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105122a34; end: 105122a43; -[SCChangePWTakeoverViewController ringView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105122a34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb68);
}



/* Entry: 105122a44; end: 105122a83; -[SCChangePWTakeoverViewController setRingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105122a84; end: 105122a93; -[SCChangePWTakeoverViewController lblTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105122a84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb6c);
}



/* Entry: 105122a94; end: 105122ad3; -[SCChangePWTakeoverViewController setLblTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105122ad4; end: 105122ae3; -[SCChangePWTakeoverViewController lblSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105122ad4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb70);
}



/* Entry: 105122ae4; end: 105122b23; -[SCChangePWTakeoverViewController setLblSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105122b24; end: 105122b33; -[SCChangePWTakeoverViewController btnTopCTA] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105122b24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb74);
}



/* Entry: 105122b34; end: 105122b73; -[SCChangePWTakeoverViewController setBtnTopCTA:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105122b74; end: 105122b83; -[SCChangePWTakeoverViewController btnBottomDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105122b74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271cb78);
}



/* Entry: 105122b84; end: 105122bc3; -[SCChangePWTakeoverViewController setBtnBottomDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271cb78;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105122bc4; end: 105122be3; -[SCChangePWTakeoverViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122bc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271cb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105122be4; end: 105122bf7; -[SCChangePWTakeoverViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122be4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271cb58,param_3);
  return;
}



/* Entry: 105122bf8; end: 105122ca3; -[SCChangePWTakeoverViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105122bf8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cb58);
  _objc_storeStrong(param_1 + _DAT_11271cb78,0);
  _objc_storeStrong(param_1 + _DAT_11271cb74,0);
  _objc_storeStrong(param_1 + _DAT_11271cb70,0);
  _objc_storeStrong(param_1 + _DAT_11271cb6c,0);
  _objc_storeStrong(param_1 + _DAT_11271cb68,0);
  _objc_storeStrong(param_1 + _DAT_11271cb64,0);
  _objc_storeStrong(param_1 + _DAT_11271cb60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271cb5c,0);
  return;
}



/* Entry: 105122ca4; end: 105122d03;  */

void FUN_105122ca4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad0b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad0b8,
                      &PTR____CFConstantStringClassReference_110dc6838,0);
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



/* Entry: 105122d04; end: 105122d2f; +[SCGrapheneTakeoverMetric takeoverLaunched] */

void FUN_105122d04(void)

{
  _objc_alloc(PTR_PTR_1126b5018);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105122d30; end: 105122d5b; +[SCGrapheneTakeoverMetric simpleTakeoverAccept] */

void FUN_105122d30(void)

{
  _objc_alloc(PTR_PTR_1126b5018);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105122d5c; end: 105122d87; +[SCGrapheneTakeoverMetric simpleTakeoverDecline] */

void FUN_105122d5c(void)

{
  _objc_alloc(PTR_PTR_1126b5018);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105122d88; end: 105122e27; -[SCGrapheneTakeoverMetric description] */

void FUN_105122d88(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6878;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc6878,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e64f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105122e28; end: 105122f7f; -[SCGrapheneRegistry takeoverGraphene] */

void FUN_105122e28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105122eb0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9458 != -1) {
    func_0x00010002a2fc(0x1136b9458,&puStack_48);
  }
  uVar1 = uRam00000001136b9450;
  _objc_retain(uRam00000001136b9450);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105122f80; end: 10512301b; -[SCChangeCompromisedPasswordScope initWithUIContainer:delegate:] */

undefined1 *
FUN_105122f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e64f8;
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



/* Entry: 10512301c; end: 105123023; -[SCChangeCompromisedPasswordScope uiContainer] */

undefined8 FUN_10512301c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105123024; end: 10512303b; -[SCChangeCompromisedPasswordScope delegate] */

void FUN_105123024(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10512303c; end: 105123067; -[SCChangeCompromisedPasswordScope .cxx_destruct] */

void FUN_10512303c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105123068; end: 10512315b;  */

void FUN_105123068(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_38;
  
  puVar5 = PTR_PTR_1126af7d0;
  _objc_retain();
  _objc_opt_new(puVar5);
  lVar2 = param_1;
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc68f8,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar5);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b5040;
    _objc_alloc(PTR_PTR_1126b5040);
    lVar4 = lVar2;
    func_0x00010c296d80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c008360(puVar3,param_2,lVar4,&lStack_38);
    lVar1 = lStack_38;
    _objc_release(lVar4);
    puVar5 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10512315c; end: 1051231d3;  */

undefined8 FUN_10512315c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_105123068();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf926c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1051231d4; end: 1051233b7; -[SCCommunicationChannelEnrollmentTakeoverRouter initWithUIContainer:delegate:userInfoServices:lazyBlizzardUserLogger:lazyGrapheneRegistry:emailSettingsScopeExposer:mobileSettingsScopeExposer:mobileSettingsScopeServices:valdiRuntimeProvider:performerProvider:] */

long FUN_1051231d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_retain(param_4);
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x48,param_4);
    _objc_release(param_4);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_7;
    _objc_release(uVar1);
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_8;
    _objc_release(uVar1);
    _objc_retain(param_9);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_9;
    _objc_release(uVar1);
    _objc_retain(param_10);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_10;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_11;
    _objc_release(uVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1051233b8; end: 1051234e7; -[SCCommunicationChannelEnrollmentTakeoverRouter presentTakeoverModal] */

void FUN_1051233b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126afe50;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf59580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar3;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126afcd0;
  _objc_alloc();
  func_0x00010c0601e0();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc();
  func_0x00010c0402e0();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar5);
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1c1bc0(*(undefined8 *)(param_1 + 0x50));
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc();
  func_0x00010c02e4c0();
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 1051234e8; end: 1051234f3; -[SCCommunicationChannelEnrollmentTakeoverRouter dismissTakeoverModal] */

void FUN_1051234e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1051234f4; end: 1051235cf; -[SCCommunicationChannelEnrollmentTakeoverRouter emailSettingsDidComplete] */

void FUN_1051234f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf59580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afcd0;
  _objc_alloc(PTR_PTR_1126afcd0);
  func_0x00010c0601e0();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0d66a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2224c0(uVar3,param_2,puVar4,1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051235d0; end: 1051236ab; -[SCCommunicationChannelEnrollmentTakeoverRouter mobileSettingsDidComplete] */

void FUN_1051235d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf59580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afcd0;
  _objc_alloc(PTR_PTR_1126afcd0);
  func_0x00010c0601e0();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0d66a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2224c0(uVar3,param_2,puVar4,1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051236ac; end: 10512371f; -[SCCommunicationChannelEnrollmentTakeoverRouter _updatePhoneClicked] */

void FUN_1051236ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf24220(uVar2,param_2,*(undefined8 *)(param_1 + 0x60),param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105123720; end: 105123793; -[SCCommunicationChannelEnrollmentTakeoverRouter _updateEmailClicked] */

void FUN_105123720(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126ae610;
  _objc_alloc(PTR_PTR_1126ae610);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105123794; end: 1051237c7; -[SCCommunicationChannelEnrollmentTakeoverRouter _cancelClicked] */

void FUN_105123794(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1420e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051237c8; end: 1051237fb; -[SCCommunicationChannelEnrollmentTakeoverRouter _backgroundTapped] */

void FUN_1051237c8(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1420e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051237fc; end: 105123acf; -[SCCommunicationChannelEnrollmentTakeoverRouter createTakeoverView] */

void FUN_1051237fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0fb000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010bf8d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    func_0x00010bf8d9a0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  else {
    _objc_retain(lVar6);
    lVar10 = lVar6;
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar11 = PTR_PTR_1126b5048;
  _objc_alloc();
  func_0x00010c00f3c0();
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar11;
  _objc_release(uVar14);
  func_0x00010c1c3700(*(undefined8 *)(param_1 + 0x78),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bed38);
  func_0x00010c187ac0(*(undefined8 *)(param_1 + 0x78),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bed50);
  puVar11 = PTR_PTR_1126b5050;
  _objc_alloc(PTR_PTR_1126b5050);
  func_0x00010c0597e0();
  puVar12 = PTR_PTR_1126b5058;
  _objc_alloc(PTR_PTR_1126b5058);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar12,param_2,uVar1,puVar11,uVar14);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105123ad0; end: 105123aef;  */

void FUN_105123ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePhoneClicked_112594d58);
  return;
}



/* Entry: 105123af0; end: 105123bb7; -[SCCommunicationChannelEnrollmentTakeoverRouter .cxx_destruct] */

void FUN_105123af0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105123bb8; end: 105123d03; -[SCCommunicationChannelEnrollmentTakeoverWorkflow initWithUIContainer:delegate:userInfoServices:lazyBlizzardUserLogger:lazyGrapheneRegistry:emailSettingsScopeExposer:mobileSettingsScopeExposer:mobileSettingsScopeServices:valdiRuntimeProvider:performerProvider:] */

long FUN_105123bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    _objc_retain(param_12);
    _objc_retain(param_11);
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_storeWeak(param_1 + 0x10,param_4);
    puVar1 = PTR_PTR_1126b5060;
    _objc_alloc();
    func_0x00010c056a00();
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 105123d04; end: 105123d0b; -[SCCommunicationChannelEnrollmentTakeoverWorkflow launch] */

void FUN_105123d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentTakeoverModal_1126213f0);
  return;
}



/* Entry: 105123d0c; end: 105123d13; -[SCCommunicationChannelEnrollmentTakeoverWorkflow dismiss] */

void FUN_105123d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissTakeoverModal_1125beb48);
  return;
}



/* Entry: 105123d14; end: 105123d4b; -[SCCommunicationChannelEnrollmentTakeoverWorkflow routerShouldDismissModal:] */

void FUN_105123d14(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2686e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105123d4c; end: 105123d53; -[SCCommunicationChannelEnrollmentTakeoverWorkflow router] */

undefined8 FUN_105123d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105123d54; end: 105123d83; -[SCCommunicationChannelEnrollmentTakeoverWorkflow setRouter:] */

void FUN_105123d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105123d84; end: 105123d9b; -[SCCommunicationChannelEnrollmentTakeoverWorkflow delegate] */

void FUN_105123d84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105123d9c; end: 105123da7; -[SCCommunicationChannelEnrollmentTakeoverWorkflow setDelegate:] */

void FUN_105123d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105123da8; end: 105123dd3; -[SCCommunicationChannelEnrollmentTakeoverWorkflow .cxx_destruct] */

void FUN_105123da8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105123dd4; end: 105123ddf; -[SCFeatureSettingsService hasCommunicationChannelEnrollmentTakeoverTimestampSeconds] */

void FUN_105123dd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc6918);
  return;
}



/* Entry: 105123de0; end: 105123deb; -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverTimestampSecondsServerParam] */

undefined ** FUN_105123de0(void)

{
  return &PTR____CFConstantStringClassReference_110dc6918;
}



/* Entry: 105123dec; end: 105123dfb; -[SCFeatureSettingsService setLastCommunicationChannelEnrollmentTakeoverTimestampSeconds:] */

void FUN_105123dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc6918,param_3);
  return;
}



/* Entry: 105123dfc; end: 105123e03; -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_client_value:] */

void FUN_105123dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105123e04; end: 105123e0b; -[SCFeatureSettingsService CC_ENROLLMENT_TAKEOVER_LAST_SEEN_TIMESTAMP_SECONDS_server_value:] */

void FUN_105123e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105123e0c; end: 105123e1b; -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverTimestampSeconds] */

void FUN_105123e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc6918,0);
  return;
}



/* Entry: 105123e1c; end: 105123e27; -[SCFeatureSettingsService hasCommunicationChannelEnrollmentTakeoverDismissCount] */

void FUN_105123e1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc6938);
  return;
}



/* Entry: 105123e28; end: 105123e33; -[SCFeatureSettingsService lastCommunicationChannelEnrollmentTakeoverDismissCountServerParam] */

undefined ** FUN_105123e28(void)

{
  return &PTR____CFConstantStringClassReference_110dc6938;
}



/* Entry: 105123e34; end: 105123e43; -[SCFeatureSettingsService setLastCommunicationChannelEnrollmentTakeoverDismissCount:] */

void FUN_105123e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc6938,param_3);
  return;
}


