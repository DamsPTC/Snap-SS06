/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104efec04; end: 104efed3b; -[SCMemoriesDirectorModeDraftProvider initWithMergedDataSource:] */

undefined1 * FUN_104efec04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4f00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104efed3c; end: 104efee6b; -[SCMemoriesDirectorModeDraftProvider dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_104efed3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104efee6c; end: 104eff017;  */

void FUN_104efee6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + 0x20);
    func_0x00010c071ae0();
    if ((uVar2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x20) = uVar7;
      _objc_release(uVar3);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar5 = PTR_PTR_1126b22a0;
      func_0x00010c0ec360();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_1 + 0x20);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_104eff018;
      puStack_50 = &UNK_11085a518;
      _objc_retain();
      puStack_48 = puVar5;
      func_0x0001006372a4(lVar8,&puStack_68);
      _objc_release(puVar4);
      lVar6 = lVar8;
      func_0x00010bf529e0();
      if (lVar6 == 0) {
        uVar3 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        lVar6 = lVar8;
        func_0x00010bfb1920(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7340(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(lVar6);
      }
      puVar4 = PTR_PTR_1126b22a8;
      _objc_alloc(PTR_PTR_1126b22a8);
      func_0x00010bf529e0(lVar8);
      func_0x00010c00c960(puVar4);
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x18));
      _objc_release(puVar4);
      _objc_release(puStack_48);
      _objc_release(uVar3);
      _objc_release(puVar5);
      _objc_release(lVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eff018; end: 104eff023;  */

void FUN_104eff018(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_evaluateWithEntry__1125c4048,param_2);
  return;
}



/* Entry: 104eff024; end: 104eff02b; -[SCMemoriesDirectorModeDraftProvider memoriesDirectorModeDraftDataObservable] */

undefined8 FUN_104eff024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104eff02c; end: 104eff073; -[SCMemoriesDirectorModeDraftProvider .cxx_destruct] */

void FUN_104eff02c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eff074; end: 104eff10f; -[SCMemoriesDirectorModeDraftScope initWithUiContainer:delegate:] */

undefined1 *
FUN_104eff074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4f08;
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



/* Entry: 104eff110; end: 104eff117; -[SCMemoriesDirectorModeDraftScope uiContainer] */

undefined8 FUN_104eff110(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104eff118; end: 104eff12f; -[SCMemoriesDirectorModeDraftScope delegate] */

void FUN_104eff118(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eff130; end: 104eff15b; -[SCMemoriesDirectorModeDraftScope .cxx_destruct] */

void FUN_104eff130(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eff15c; end: 104eff1cf; -[SCMemoriesDirectorModeDraftProvidingServices initWithMemoriesDirectorModeDraftProvider:] */

undefined1 * FUN_104eff15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4f10;
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



/* Entry: 104eff1d0; end: 104eff1d7; -[SCMemoriesDirectorModeDraftProvidingServices memoriesDirectorModeDraftProvider] */

undefined8 FUN_104eff1d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104eff1d8; end: 104eff1e3; -[SCMemoriesDirectorModeDraftProvidingServices .cxx_destruct] */

void FUN_104eff1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eff1e4; end: 104eff26b; -[SCMemoriesDirectorModeDraftData initWithDirectorModeDraftsCount:latestDraftSnap:] */

undefined1 *
FUN_104eff1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104eff26c; end: 104eff28f; -[SCMemoriesDirectorModeDraftData copyWithZone:] */

undefined8 FUN_104eff26c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104eff290; end: 104eff2ef; -[SCMemoriesDirectorModeDraftData hash] */

undefined8 * FUN_104eff290(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104eff374;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_104eff374;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_104eff374;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_104eff374:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 104eff2f0; end: 104eff38f; -[SCMemoriesDirectorModeDraftData isEqual:] */

long FUN_104eff2f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104eff374;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104eff374;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104eff374;
    }
  }
  lVar3 = 1;
LAB_104eff374:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104eff390; end: 104eff397; -[SCMemoriesDirectorModeDraftData directorModeDraftsCount] */

undefined8 FUN_104eff390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104eff398; end: 104eff39f; -[SCMemoriesDirectorModeDraftData latestDraftSnap] */

undefined8 FUN_104eff398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104eff3a0; end: 104eff3ab; -[SCMemoriesDirectorModeDraftData .cxx_destruct] */

void FUN_104eff3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104eff3ac; end: 104eff563; -[SCSettingsMemoriesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eff3ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010b0aea44();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b0aea44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126aeae8;
  _objc_alloc(PTR_PTR_1126aeae8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0435e0(puVar3);
  param_1 = param_1 + _DAT_112716aac;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104eff564; end: 104eff5ab;  */

void FUN_104eff564(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eff5ac; end: 104eff66b; -[SCSettingsMemoriesEntryPoint _handleWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eff5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar3 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b22b0;
  _objc_alloc(PTR_PTR_1126b22b0);
  func_0x00010c0567c0();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112716ab0);
  }
  func_0x00010bf9d620(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eff66c; end: 104eff6d7; -[SCSettingsMemoriesEntryPoint memoriesSettingsUIWillDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eff66c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112716ab0);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112716ab0);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104eff6d8; end: 104eff713; -[SCSettingsMemoriesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eff6d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716ab0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716aac);
  return;
}



/* Entry: 104eff714; end: 104eff8e3; -[SCMemoriesChatMediaPlaybackImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eff714(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + _DAT_112716ab4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112716ab8);
  *(long *)(param_1 + _DAT_112716ab8) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112716abc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf36840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 104eff8e4; end: 104eff8ef;  */

void FUN_104eff8e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchGroupForGroupId__112561fb0,param_2);
  return;
}



/* Entry: 104eff8f0; end: 104effadf; -[SCMemoriesChatMediaPlaybackImplEntryPoint _fetchOneToOneWithCurrentUserId:recipientUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eff8f0(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined **unaff_x26;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar6 = param_1;
  _objc_initWeak(auStack_70);
  if (param_3 != 0) {
    puVar1 = param_1 + _DAT_112716ac4;
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_68 = param_3;
    uStack_60 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112716ab8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104effae0;
    puStack_90 = &UNK_11085a578;
    _objc_retain(param_3);
    lStack_88 = param_3;
    _objc_retain(param_4);
    unaff_x26 = &puStack_a8;
    puVar6 = auStack_70;
    uStack_80 = param_4;
    _objc_copyWeak(auStack_78);
    func_0x00010c244e80(puVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
  }
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 6);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar1 = puVar6;
  func_0x00010bf529e0();
  if (puVar1 == (undefined1 *)0x2) {
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar5);
    puVar1 = puVar6;
    func_0x00010bfb2040(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar7);
    puVar2 = puVar6;
    func_0x00010bfb2040(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b22b8;
    func_0x00010c0e8280(PTR_PTR_1126b22b8);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_3 + 0x30;
    _objc_loadWeakRetained(param_3);
    func_0x00010bdd3ea0();
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104effae0; end: 104effc33;  */

void FUN_104effae0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    lVar1 = param_2;
    func_0x00010bfb2040(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    lVar2 = param_2;
    func_0x00010bfb2040(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b22b8;
    func_0x00010c0e8280(PTR_PTR_1126b22b8);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdd3ea0();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104effc34; end: 104effcc3;  */

undefined8 FUN_104effc34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104effcc4; end: 104effe0b; -[SCMemoriesChatMediaPlaybackImplEntryPoint _fetchGroupForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104effcc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + _DAT_112716ac8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112716ab8);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104effe0c; end: 104effe6f;  */

void FUN_104effe0c(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b22b8;
    func_0x00010bfcf5e0(PTR_PTR_1126b22b8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdd3ea0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104effe70; end: 104f0074f; -[SCMemoriesChatMediaPlaybackImplEntryPoint _beginWorkFlowWithParticipants:isGroupConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104effe70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_112716abc;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar27 = lVar1;
  func_0x00010bfba740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar27;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfba820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b22c0;
  _objc_alloc();
  lVar29 = (long)_DAT_112716acc;
  lVar1 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar1);
  lVar27 = lVar1;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80();
  _objc_release(lVar27);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b22c8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112716ad0;
  _objc_loadWeakRetained(lVar1);
  lVar28 = lVar1;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar28;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar27);
  lVar8 = lVar27;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004fc0();
  _objc_release(lVar8);
  _objc_release(lVar27);
  _objc_release(lVar7);
  _objc_release(lVar28);
  _objc_release(lVar1);
  lVar7 = lVar2;
  FUN_104f05bfc(lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = PTR_PTR_1126b22d0;
  _objc_alloc();
  func_0x00010c004f20();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126b22d8;
  _objc_alloc();
  lVar1 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar1);
  lVar27 = lVar1;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ce00();
  _objc_release(lVar27);
  _objc_release(lVar1);
  puVar12 = PTR_PTR_1126b22e0;
  _objc_opt_new();
  puVar13 = PTR_PTR_1126b22e8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112716ad4;
  _objc_loadWeakRetained(lVar1);
  lVar28 = (long)_DAT_112716ad8;
  lVar27 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar27);
  lVar8 = lVar27;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005320();
  _objc_release(lVar8);
  _objc_release(lVar27);
  _objc_release(lVar1);
  puVar14 = PTR_PTR_1126b22f0;
  _objc_alloc();
  lVar27 = (long)_DAT_112716adc;
  lVar1 = param_1 + lVar27;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0();
  _objc_release(lVar8);
  _objc_release(lVar1);
  puVar15 = PTR_PTR_1126b22f8;
  _objc_alloc();
  lVar1 = param_1 + lVar27;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(lVar7);
  func_0x00010c05f4e0();
  _objc_release(lVar8);
  _objc_release(lVar1);
  puVar16 = PTR_PTR_1126b2300;
  _objc_alloc();
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar28);
  lVar1 = lVar28;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004c00();
  _objc_release(lVar1);
  _objc_release(lVar28);
  puVar17 = PTR_PTR_1126b2308;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112716ae0;
  _objc_loadWeakRetained(lVar1);
  lVar28 = lVar1;
  func_0x00010bfba7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0166a0();
  _objc_release(lVar28);
  _objc_release(lVar1);
  puVar18 = PTR_PTR_1126b2310;
  _objc_alloc();
  lVar29 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar1 = lVar29;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80();
  _objc_release(lVar1);
  _objc_release(lVar29);
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar10);
  _objc_release(puVar19);
  lVar1 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar28 = lVar1;
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar28 != 0) {
    puVar19 = PTR_PTR_1126b2318;
    _objc_alloc(PTR_PTR_1126b2318);
    lVar1 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar1);
    lVar29 = lVar1;
    func_0x00010c117240();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + _DAT_112716ae4;
    _objc_loadWeakRetained(lVar28);
    lVar27 = param_1 + lVar27;
    _objc_loadWeakRetained(lVar27);
    func_0x00010c0450c0(puVar19);
    _objc_release(lVar27);
    _objc_release(lVar28);
    _objc_release(lVar29);
    _objc_release(lVar1);
    func_0x00010befa120(puVar10);
    _objc_release(puVar19);
  }
  puVar19 = PTR_PTR_1126b2320;
  _objc_alloc();
  puVar20 = puVar10;
  func_0x00010bf51e00(puVar10);
  func_0x00010c009020();
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar1 = param_1 + _DAT_112716ae8;
  _objc_loadWeakRetained();
  lVar27 = lVar1;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar1);
  if (lVar29 != 0) {
    func_0x00010befa120(puVar20);
  }
  lVar27 = (long)_DAT_112716aec;
  lVar1 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar28 = lVar1;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar8;
  func_0x00010bf58300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar28);
  _objc_release(lVar1);
  if (lVar21 != 0) {
    func_0x00010befa120(puVar20);
  }
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar1 = lVar27;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar28;
  func_0x00010bf544a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  _objc_release(lVar1);
  _objc_release(lVar27);
  if (lVar8 != 0) {
    func_0x00010befa120(puVar20);
  }
  puVar22 = PTR_PTR_1126b2328;
  _objc_alloc();
  puVar23 = puVar20;
  func_0x00010bf51e00(puVar20);
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained(lVar26);
  lVar1 = param_1 + _DAT_112716af4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c011be0();
  lVar27 = (long)_DAT_112716af8;
  uVar25 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar22;
  _objc_release(uVar25);
  _objc_release(lVar1);
  _objc_release(lVar26);
  _objc_release(puVar23);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar27));
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(lVar29);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + _DAT_112716af0,0);
  _objc_destroyWeak(lVar2 + _DAT_112716af4);
  _objc_destroyWeak(lVar2 + _DAT_112716aec);
  _objc_destroyWeak(lVar2 + _DAT_112716ae8);
  _objc_destroyWeak(lVar2 + _DAT_112716ad4);
  _objc_destroyWeak(lVar2 + _DAT_112716ae4);
  _objc_destroyWeak(lVar2 + _DAT_112716ae0);
  _objc_destroyWeak(lVar2 + _DAT_112716ad8);
  _objc_destroyWeak(lVar2 + _DAT_112716adc);
  _objc_destroyWeak(lVar2 + _DAT_112716ab4);
  _objc_destroyWeak(lVar2 + _DAT_112716ac8);
  _objc_destroyWeak(lVar2 + _DAT_112716ac4);
  _objc_destroyWeak(lVar2 + _DAT_112716ad0);
  _objc_destroyWeak(lVar2 + _DAT_112716acc);
  _objc_destroyWeak(lVar2 + _DAT_112716ac0);
  _objc_destroyWeak(lVar2 + _DAT_112716abc);
  _objc_storeStrong(lVar2 + _DAT_112716ab8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112716af8,0);
  return;
}



/* Entry: 104f00750; end: 104f00853; -[SCMemoriesChatMediaPlaybackImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f00750(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716af0,0);
  _objc_destroyWeak(param_1 + _DAT_112716af4);
  _objc_destroyWeak(param_1 + _DAT_112716aec);
  _objc_destroyWeak(param_1 + _DAT_112716ae8);
  _objc_destroyWeak(param_1 + _DAT_112716ad4);
  _objc_destroyWeak(param_1 + _DAT_112716ae4);
  _objc_destroyWeak(param_1 + _DAT_112716ae0);
  _objc_destroyWeak(param_1 + _DAT_112716ad8);
  _objc_destroyWeak(param_1 + _DAT_112716adc);
  _objc_destroyWeak(param_1 + _DAT_112716ab4);
  _objc_destroyWeak(param_1 + _DAT_112716ac8);
  _objc_destroyWeak(param_1 + _DAT_112716ac4);
  _objc_destroyWeak(param_1 + _DAT_112716ad0);
  _objc_destroyWeak(param_1 + _DAT_112716acc);
  _objc_destroyWeak(param_1 + _DAT_112716ac0);
  _objc_destroyWeak(param_1 + _DAT_112716abc);
  _objc_storeStrong(param_1 + _DAT_112716ab8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716af8,0);
  return;
}



/* Entry: 104f00854; end: 104f00913; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin initWithUserTrackedLogger:] */

undefined1 * FUN_104f00854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4f20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f00914; end: 104f0091f; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin setPlaylistItemController:] */

void FUN_104f00914(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104f00920; end: 104f00923; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin setOperaControlling:] */

void FUN_104f00920(void)

{
  return;
}



/* Entry: 104f00924; end: 104f00a2b; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin registeredEventsForOperaSession] */

void FUN_104f00924(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_68 = puVar1;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_60 = puVar2;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_58 = puVar3;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_68;
  uVar13 = 4;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(uVar13);
  _objc_retain(param_6);
  uVar6 = uVar13;
  func_0x00010be36bc0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar12;
  func_0x00010c0720c0(ppuVar12,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)ppuVar7 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar12;
    func_0x00010c0720c0(ppuVar12,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2340;
    if ((int)ppuVar7 == 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar12;
      func_0x00010c0720c0(ppuVar12,param_3,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b2340;
      if ((int)ppuVar7 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar12;
        func_0x00010c0720c0(ppuVar12,param_3,puVar2);
        _objc_release(puVar2);
        if ((int)ppuVar7 == 0) goto LAB_104f00bf0;
        lVar9 = *(long *)(puVar1 + 0x18);
        func_0x00010c0e00e0(lVar9,param_3,uVar6);
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) {
LAB_104f00cfc:
          lVar9 = *(long *)(puVar1 + 0x18);
          func_0x00010c0e00e0(lVar9,param_3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar9 != 0) {
            _CACurrentMediaTime();
            uVar8 = *(undefined8 *)(puVar1 + 0x18);
            dVar14 = param_1;
            func_0x00010c0e00e0(uVar8,param_3,uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            param_1 = param_1 - dVar14;
            _objc_release(uVar8);
            uVar8 = 1;
            goto LAB_104f00d58;
          }
        }
        else {
          lVar10 = *(long *)(puVar1 + 0x20);
          func_0x00010c0e00e0(lVar10,param_3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar9);
          if (lVar10 == 0) goto LAB_104f00cfc;
          uVar8 = *(undefined8 *)(puVar1 + 0x20);
          func_0x00010c0e00e0(uVar8,param_3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar11 = *(undefined8 *)(puVar1 + 0x18);
          dVar14 = param_1;
          func_0x00010c0e00e0(uVar11,param_3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          param_1 = param_1 - dVar14;
          _objc_release(uVar11);
          _objc_release(uVar8);
          uVar8 = 0;
LAB_104f00d58:
          func_0x00010be50dc0(param_1,puVar1,param_3,uVar8,uVar13,param_6);
        }
        func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x18),param_3,0,uVar6);
        func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x20),param_3,0,uVar6);
        goto LAB_104f00bf0;
      }
      uVar8 = uVar13;
      func_0x00010c118b40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040(puVar2,param_3,uVar8);
      _objc_release(uVar8);
      if (((ulong)puVar2 & 1) != 0) goto LAB_104f00bf0;
    }
    else {
      uVar8 = uVar13;
      func_0x00010c118b40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040(puVar2,param_3,uVar8);
      _objc_release(uVar8);
      if ((int)puVar2 == 0) goto LAB_104f00bf0;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + 0x20);
  }
  else {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + 0x18);
  }
  func_0x00010c1d0640(uVar8,param_3,puVar2,uVar6);
  _objc_release(puVar2);
LAB_104f00bf0:
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 104f00a2c; end: 104f00d87; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f00a2c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2340;
    if ((int)uVar3 == 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b2340;
      if ((int)uVar3 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar2);
        _objc_release(puVar2);
        if ((int)uVar3 == 0) goto LAB_104f00bf0;
        lVar4 = *(long *)(param_2 + 0x18);
        func_0x00010c0e00e0(lVar4,param_3,uVar1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
LAB_104f00cfc:
          lVar4 = *(long *)(param_2 + 0x18);
          func_0x00010c0e00e0(lVar4,param_3,uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            _CACurrentMediaTime();
            uVar3 = *(undefined8 *)(param_2 + 0x18);
            dVar7 = param_1;
            func_0x00010c0e00e0(uVar3,param_3,uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            param_1 = param_1 - dVar7;
            _objc_release(uVar3);
            uVar3 = 1;
            goto LAB_104f00d58;
          }
        }
        else {
          lVar5 = *(long *)(param_2 + 0x20);
          func_0x00010c0e00e0(lVar5,param_3,uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          if (lVar5 == 0) goto LAB_104f00cfc;
          uVar3 = *(undefined8 *)(param_2 + 0x20);
          func_0x00010c0e00e0(uVar3,param_3,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          dVar7 = param_1;
          func_0x00010c0e00e0(uVar6,param_3,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          param_1 = param_1 - dVar7;
          _objc_release(uVar6);
          _objc_release(uVar3);
          uVar3 = 0;
LAB_104f00d58:
          func_0x00010be50dc0(param_1,param_2,param_3,uVar3,param_5,param_6);
        }
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,0,uVar1);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20),param_3,0,uVar1);
        goto LAB_104f00bf0;
      }
      uVar3 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040(puVar2,param_3,uVar3);
      _objc_release(uVar3);
      if (((ulong)puVar2 & 1) != 0) goto LAB_104f00bf0;
    }
    else {
      uVar3 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040(puVar2,param_3,uVar3);
      _objc_release(uVar3);
      if ((int)puVar2 == 0) goto LAB_104f00bf0;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x18);
  }
  func_0x00010c1d0640(uVar3,param_3,puVar2,uVar1);
  _objc_release(puVar2);
LAB_104f00bf0:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f00d88; end: 104f00fe7; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin _logBrowseSnapView:isAbandoned:page:params:] */

void FUN_104f00d88(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_5);
  func_0x00010bfe74e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  if (uVar3 == 0) {
    puVar4 = PTR_PTR_1126b2348;
    func_0x00010c0c4a80(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010c0e00e0(param_6,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c067fc0();
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126b2350;
  _objc_opt_new(PTR_PTR_1126b2350);
  uVar8 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar4,param_3,uVar8);
  _objc_release(uVar8);
  func_0x00010c1b92e0(puVar4,param_3,(long)(param_1 * 1000.0));
  func_0x00010c160a00(puVar4,param_3,param_4);
  func_0x00010c222d20((double)(uVar3 / 100) / 10.0,puVar4);
  func_0x00010c206c40(puVar4,param_3,0x57);
  func_0x00010c222c00(puVar4,param_3,0x5c);
  puVar1 = PTR_PTR_1126b2340;
  uVar6 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075040(puVar1,param_3,uVar6);
  uVar8 = 1;
  if ((int)puVar1 != 0) {
    uVar8 = 2;
  }
  func_0x00010c1c5440(puVar4,param_3,uVar8);
  _objc_release(uVar6);
  uVar8 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar7 = param_2;
  func_0x00010be19fc0(param_2,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a00(puVar4,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 104f00fe8; end: 104f010eb; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin _galleryCollectionCategoryFromPageId:] */

void FUN_104f00fe8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  if (param_3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar1);
    ppuVar3 = (undefined **)(param_1 + 8);
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar3;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar5 = PTR_PTR_1126b2358;
    _objc_opt_class(PTR_PTR_1126b2358);
    ppuVar6 = ppuVar4;
    _objc_opt_isKindOfClass(ppuVar4,puVar5);
    ppuVar3 = ppuVar4;
    if (((ulong)ppuVar6 & 1) == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar4);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x00010c25b720(ppuVar4);
      func_0x00010565aacc();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104f010ec; end: 104f0112f; -[SCMemoriesChatMediaBrowseSnapViewLoggerPlugin .cxx_destruct] */

void FUN_104f010ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f01130; end: 104f011cf; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin initWithUserTrackedLogger:totalSnapsCount:] */

undefined1 *
FUN_104f01130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4f28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f011d0; end: 104f011db; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin setPlaylistItemController:] */

void FUN_104f011d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104f011dc; end: 104f011df; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin setOperaControlling:] */

void FUN_104f011dc(void)

{
  return;
}



/* Entry: 104f011e0; end: 104f012bb; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin registeredEventsForOperaSession] */

void FUN_104f011e0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_50 = puVar1;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_48 = puVar2;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  uVar5 = uVar8;
  func_0x00010be36bc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)ppuVar7;
  func_0x00010c0720c0(ppuVar7,param_3,puVar2);
  _objc_release(puVar2);
  if ((int)puVar6 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_3,puVar2);
    _objc_release(puVar2);
    if ((int)puVar6 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf3df20(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar7;
      func_0x00010c0720c0(ppuVar7,param_3,puVar2);
      _objc_release(puVar2);
      if ((int)puVar6 != 0) {
        _CACurrentMediaTime();
        func_0x00010be50e40(param_1 - *(double *)(puVar1 + 0x28),puVar1,param_3,uVar8);
      }
    }
    else {
      _CACurrentMediaTime();
      *(double *)(puVar1 + 0x28) = param_1;
    }
  }
  else {
    func_0x00010befa120(*(undefined8 *)(puVar1 + 0x18),param_3,uVar5);
  }
  _objc_release(uVar5);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 104f012bc; end: 104f013f7; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f012bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar2);
    _objc_release(puVar2);
    if ((int)uVar3 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf3df20(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar2);
      _objc_release(puVar2);
      if ((int)uVar3 != 0) {
        _CACurrentMediaTime();
        func_0x00010be50e40(param_1 - *(double *)(param_2 + 0x28),param_2,param_3,param_5);
      }
    }
    else {
      _CACurrentMediaTime();
      *(double *)(param_2 + 0x28) = param_1;
    }
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x18),param_3,uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f013f8; end: 104f014ff; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin _logBrowseStoryViewWithViewTimeInSec:page:] */

void FUN_104f013f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b2360;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c206c40();
  func_0x00010c222c00(puVar1,param_3,0x5c);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf529e0(uVar2);
  func_0x00010c1cf460(puVar1,param_3,uVar2);
  func_0x00010c203cc0(puVar1,param_3,*(undefined8 *)(param_2 + 0x20));
  func_0x00010c222d20(param_1,puVar1);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_2;
  func_0x00010be19fc0(param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a00(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f01500; end: 104f01603; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin _galleryCollectionCategoryFromPageId:] */

void FUN_104f01500(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  if (param_3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar1);
    ppuVar3 = (undefined **)(param_1 + 8);
    _objc_loadWeakRetained();
    ppuVar4 = ppuVar3;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar5 = PTR_PTR_1126b2358;
    _objc_opt_class(PTR_PTR_1126b2358);
    ppuVar6 = ppuVar4;
    _objc_opt_isKindOfClass(ppuVar4,puVar5);
    ppuVar3 = ppuVar4;
    if (((ulong)ppuVar6 & 1) == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar4);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x00010c25b720(ppuVar4);
      func_0x00010565aacc();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104f01604; end: 104f0163b; -[SCMemoriesChatMediaBrowseStoryViewLoggerPlugin .cxx_destruct] */

void FUN_104f01604(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f0163c; end: 104f016af; -[SCMemoriesChatMediaConsumptionLoggerPlugin initWithContentDelivery:] */

undefined1 * FUN_104f0163c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4f30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f016b0; end: 104f016bb; -[SCMemoriesChatMediaConsumptionLoggerPlugin setPlaylistItemController:] */

void FUN_104f016b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104f016bc; end: 104f0177b; -[SCMemoriesChatMediaConsumptionLoggerPlugin registeredEventsForOperaSession] */

void FUN_104f016bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_48 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_48;
  uVar8 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  uVar4 = uVar8;
  func_0x00010be36bc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010c0720c0(ppuVar7,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar5 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_2,puVar2);
    _objc_release(puVar2);
    if (((int)ppuVar5 == 0) || (uVar6 = uVar8, FUN_104f01878(), (int)uVar6 == 0))
    goto LAB_104f01850;
  }
  else {
    uVar6 = uVar8;
    FUN_104f01878();
    if ((uVar6 & 1) != 0) goto LAB_104f01850;
  }
  func_0x00010be55aa0(puVar1,param_2,uVar4);
LAB_104f01850:
  _objc_release(uVar4);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 104f0177c; end: 104f01877; -[SCMemoriesChatMediaConsumptionLoggerPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f0177c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if (((int)uVar3 == 0) || (uVar4 = param_4, FUN_104f01878(), (int)uVar4 == 0))
    goto LAB_104f01850;
  }
  else {
    uVar4 = param_4;
    FUN_104f01878();
    if ((uVar4 & 1) != 0) goto LAB_104f01850;
  }
  func_0x00010be55aa0(param_1,param_2,uVar1);
LAB_104f01850:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f01878; end: 104f018cf;  */

bool FUN_104f01878(long param_1)

{
  long lVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 104f018d0; end: 104f01993; -[SCMemoriesChatMediaConsumptionLoggerPlugin _playbackContentFromPageId:] */

void FUN_104f018d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2358;
  _objc_opt_class(PTR_PTR_1126b2358);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f01994; end: 104f01aeb; -[SCMemoriesChatMediaConsumptionLoggerPlugin _logMediaConsumedForPageId:] */

void FUN_104f01994(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010be74c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0c5180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a39a0(uVar3,param_2,lVar4,1);
    _objc_release(lVar4);
    _objc_release(uVar3);
    lVar4 = lVar2;
    func_0x00010c0ef6e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = lVar1;
      func_0x00010c0efbe0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (lVar6 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010c0efbe0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0ec5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a39a0(uVar3,param_2,lVar5,1);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(uVar3);
      }
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f01aec; end: 104f01b17; -[SCMemoriesChatMediaConsumptionLoggerPlugin .cxx_destruct] */

void FUN_104f01aec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f01b18; end: 104f01b8f; -[SCMemoriesChatMediaProfileLoggerPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f01b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setPlaylistItemController__1126551a0;
  puStack_38 = PTR_PTR_1126e4f38;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  _objc_storeWeak(param_1 + _DAT_112716b28,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104f01b90; end: 104f01c03; -[SCMemoriesChatMediaProfileLoggerPlugin resolveChatMediaContentWithPage:] */

void FUN_104f01b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be74c00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f01c04; end: 104f01c6f; -[SCMemoriesChatMediaProfileLoggerPlugin resolveMessageBodyTypeWithPage:] */

undefined8 FUN_104f01c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be74c00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cba00();
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104f01c70; end: 104f01d43; -[SCMemoriesChatMediaProfileLoggerPlugin _playbackContentFromPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f01c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112716b28;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + lVar7;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2358;
  _objc_opt_class(PTR_PTR_1126b2358);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f01d44; end: 104f01d53; -[SCMemoriesChatMediaProfileLoggerPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f01d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716b28);
  return;
}



/* Entry: 104f01d54; end: 104f01e2f; -[SCMemoriesChatMediaContentLoader initWithConversationId:isGroupConversation:chatMessageActionHandler:contentDelivery:] */

undefined1 *
FUN_104f01d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4f40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f01e30; end: 104f01f17; -[SCMemoriesChatMediaContentLoader resolveSinglePlaybackContentFrom:] */

void FUN_104f01e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_104f05efc(uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6eae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_104f05f94(uVar3,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f01f18; end: 104f0207f; -[SCMemoriesChatMediaContentLoader downloadContentForMessageId:mediaContent:] */

void FUN_104f01f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c09b920(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f02080; end: 104f0214f;  */

void FUN_104f02080(long param_1,uint param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dba978,
                        &PTR____CFConstantStringClassReference_110dba998,1000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0c6c20();
    if (uVar1 < 0x16 && (1L << (uVar1 & 0x3f) & 0x363f36U) != 0) {
      puVar2 = (undefined *)(param_1 + 0x38);
      _objc_loadWeakRetained(puVar2);
      func_0x00010be76760();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = *(undefined **)(param_1 + 0x28);
      func_0x00010c0c5180(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f02150; end: 104f02223; -[SCMemoriesChatMediaContentLoader _postProcessMessageId:mediaContent:promise:] */

void FUN_104f02150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f02224;
  puStack_48 = &UNK_11085a608;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c104be0(uVar1,param_2,param_4,0xe,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 104f02224; end: 104f022af;  */

void FUN_104f02224(long param_1,uint param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((param_2 & 1) == 0) && ((param_3 & 0xfffffffffffffffe) != 6)) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dba978,
                        &PTR____CFConstantStringClassReference_110dba9b8,1000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0c5180(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f022b0; end: 104f0236f; -[SCMemoriesChatMediaContentLoader _overlayCacheKeyWithMedia:contentState:] */

void FUN_104f022b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_4 == 3) {
    func_0x000108543920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b4c0();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ae750;
    if ((int)uVar2 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_3);
  }
  else {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f02370; end: 104f023ab; -[SCMemoriesChatMediaContentLoader .cxx_destruct] */

void FUN_104f02370(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f023ac; end: 104f0241f; -[SCMemoriesChatMediaPlaybackImageProvider initWithContentDelivery:] */

undefined1 * FUN_104f023ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4f48;
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



/* Entry: 104f02420; end: 104f0256f; -[SCMemoriesChatMediaPlaybackImageProvider gifDataForKey:completionQueue:completion:] */

void FUN_104f02420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_5 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104f02570;
    puStack_68 = &UNK_11085a638;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    ppuVar2 = &puStack_80;
    lStack_58 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x104f02640;
    puStack_90 = &UNK_11085a668;
    ppuStack_88 = ppuVar2;
    _objc_retain(ppuVar2);
    func_0x00010c13e4e0(uVar3,param_2,param_3,0,0xe,&puStack_a8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(ppuStack_88);
    _objc_release(ppuVar2);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f02570; end: 104f0262f;  */

void FUN_104f02570(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f02630;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104f02630; end: 104f0264b;  */

void FUN_104f02630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f0263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f0264c; end: 104f02783; -[SCMemoriesChatMediaPlaybackImageProvider imageForKey:completion:] */

void FUN_104f0264c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c13e4e0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f02784; end: 104f027d7;  */

void FUN_104f02784(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f027d8; end: 104f028cf; -[SCMemoriesChatMediaPlaybackImageProvider _didRetrieveContent:key:completion:] */

void FUN_104f027d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    if (param_3 == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f028d0;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_5);
    puStack_40 = puVar1;
    lStack_38 = param_5;
    _objc_retain(puVar1);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(puStack_40);
    _objc_release(lStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f028d0; end: 104f028df;  */

void FUN_104f028d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f028dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f028e0; end: 104f028eb; -[SCMemoriesChatMediaPlaybackImageProvider .cxx_destruct] */

void FUN_104f028e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f028ec; end: 104f0298f; -[SCMemoriesChatMediaBaseLayerPageProvider initWithImageProvider:contentDelivery:] */

undefined1 *
FUN_104f028ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4f50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f02990; end: 104f02dff; -[SCMemoriesChatMediaBaseLayerPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f02990(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2358;
  if (param_6 == 0) goto LAB_104f02d6c;
  _objc_retain(param_6);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2368;
  _objc_opt_new(PTR_PTR_1126b2368);
  uVar10 = uVar3;
  func_0x00010c0c5180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2b53a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c1531a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c09c260();
  if (uVar10 != 3) {
    func_0x00010c1d0640(puVar2);
  }
  func_0x00010c1d0640(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c6c20(uVar3);
  func_0x0001085439dc();
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar5);
  uVar10 = uVar1;
  func_0x00010c0efbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (uVar6 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  func_0x00010c1d0640(puVar2);
  uVar10 = uVar3;
  func_0x00010c0c6c20();
  if (uVar10 < 0x16) {
    if ((1L << (uVar10 & 0x3f) & 0x363e36U) == 0) {
      if ((1L << (uVar10 & 0x3f) & 0x9c081U) != 0) {
        uVar9 = uVar3;
        func_0x00010c0c5180(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = 1;
        func_0x0001085436d4(1,uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        func_0x00010c1d0640(puVar2);
        goto LAB_104f02d08;
      }
      if (uVar10 != 3) goto LAB_104f02d14;
      func_0x00010c1d0640(puVar2);
      uVar10 = uVar3;
      func_0x00010c0c5180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 1;
      func_0x0001085436d4(1,uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
    }
    else {
      func_0x00010c1d0640(puVar2);
      uVar10 = uVar3;
      func_0x00010c0c5180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 3;
      func_0x0001085436d4(3,uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
      _objc_release(uVar10);
      uVar8 = *(ulong *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010c0c5180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c29bc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar8);
      if (uVar10 != 0) {
        func_0x00010c1d0640(puVar2);
      }
LAB_104f02d08:
      func_0x00010c1d0640(puVar2);
    }
    _objc_release(uVar10);
  }
LAB_104f02d14:
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  (**(code **)(param_6 + 0x10))(param_6,puVar5,0);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
LAB_104f02d6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f02e00; end: 104f02e03; -[SCMemoriesChatMediaBaseLayerPageProvider setPlaylistItemController:] */

void FUN_104f02e00(void)

{
  return;
}



/* Entry: 104f02e04; end: 104f02e07; -[SCMemoriesChatMediaBaseLayerPageProvider extraPropertiesProvider] */

void FUN_104f02e04(void)

{
  return;
}



/* Entry: 104f02e08; end: 104f02e0b; -[SCMemoriesChatMediaBaseLayerPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f02e08(void)

{
  return;
}



/* Entry: 104f02e0c; end: 104f02e17; -[SCMemoriesChatMediaBaseLayerPageProvider registeredEventsForOperaSession] */

undefined * FUN_104f02e0c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104f02e18; end: 104f02e47; -[SCMemoriesChatMediaBaseLayerPageProvider .cxx_destruct] */

void FUN_104f02e18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f02e48; end: 104f02e5f;  */

void FUN_104f02e48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f02e60; end: 104f02f03;  */

void FUN_104f02e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
  }
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f02f04; end: 104f02fbb;  */

void FUN_104f02f04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c086fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x000108ef3dd0(uVar1,uVar3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f02fbc; end: 104f032df; -[SCMemoriesChatMediaChromeLayerPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f02fbc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2358;
  if (param_6 != 0) {
    _objc_retain(param_6);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar3 = uVar1;
    func_0x00010c25b720();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar6 = uVar1;
    if (uVar3 == 2) {
      func_0x00010c0cb920(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f1e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
    }
    else {
      func_0x00010c0cb920(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5a00(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar6);
    uVar3 = uVar1;
    func_0x00010c0f4aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0cb8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_retain(uVar6);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_104f02e48;
    uStack_80 = 0x104f02e58;
    uStack_78 = 0;
    _objc_retain(uVar6);
    _objc_retain(uVar6);
    func_0x00010c0bf240(uVar3);
    uVar7 = puStack_98[5];
    _objc_retain(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar6);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    puVar5 = puVar4;
    func_0x00010bf51e00(puVar4);
    (**(code **)(param_6 + 0x10))(param_6,puVar5,0);
    _objc_release(param_6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f032e0; end: 104f032e3; -[SCMemoriesChatMediaChromeLayerPageProvider setPlaylistItemController:] */

void FUN_104f032e0(void)

{
  return;
}



/* Entry: 104f032e4; end: 104f032e7; -[SCMemoriesChatMediaChromeLayerPageProvider extraPropertiesProvider] */

void FUN_104f032e4(void)

{
  return;
}



/* Entry: 104f032e8; end: 104f032eb; -[SCMemoriesChatMediaChromeLayerPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f032e8(void)

{
  return;
}



/* Entry: 104f032ec; end: 104f032f7; -[SCMemoriesChatMediaChromeLayerPageProvider registeredEventsForOperaSession] */

undefined * FUN_104f032ec(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104f032f8; end: 104f033c3; -[SCMemoriesChatMediaContextLayerPageProvider initWithConversationId:musicContentRestrictionServices:circumstanceEngine:] */

undefined1 *
FUN_104f032f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4f58;
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



/* Entry: 104f033c4; end: 104f03aeb; -[SCMemoriesChatMediaContextLayerPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f033c4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puStack_170;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar20 = PTR_PTR_1126b2358;
  if (param_6 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar20);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar20);
    uVar1 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar2 = uVar1;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126b2370;
    _objc_alloc();
    func_0x00010c01f560();
    uVar5 = uVar2;
    func_0x00010c242120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fa60();
    _objc_release(uVar6);
    puVar20 = PTR_PTR_1126b2378;
    if (uVar7 == 0) {
      puStack_170 = (undefined *)0x0;
    }
    else {
      uVar6 = uVar5;
      func_0x00010bf4e840(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe3740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar2;
      func_0x00010c086560(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_170 = puVar20;
      func_0x00010bf43580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf4d340(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c0c5180(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2884e0(uVar21);
      _objc_release(uVar6);
      _objc_release(uVar21);
      _objc_release(uVar8);
      _objc_release(puVar20);
    }
    puVar9 = PTR_PTR_1126b2380;
    _objc_alloc();
    uVar6 = uVar2;
    func_0x00010c297e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c23f480(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c2a2ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010c094540(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010bfadea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0607a0();
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar16 = PTR_PTR_1126b2388;
    _objc_alloc();
    func_0x00010c03e520();
    puVar17 = PTR_PTR_1126b2390;
    _objc_alloc(PTR_PTR_1126b2390);
    puVar18 = puVar17;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    puStack_e0 = (undefined *)0x0;
    uStack_d0 = 0x3032000000;
    pcStack_c8 = FUN_104f03b40;
    uStack_c0 = 0x104f03b50;
    uStack_b8 = 0;
    uVar6 = uVar1;
    ppuStack_d8 = &puStack_e0;
    func_0x00010c0f4aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_a0 = (undefined **)0xc2000000;
    pcStack_98 = FUN_104f03b58;
    pcStack_90 = (code *)&UNK_110851a78;
    ppuStack_88 = &puStack_e0;
    _objc_retain(uVar1);
    func_0x00010c0bf240(uVar6);
    _objc_release(uVar6);
    puVar19 = ppuStack_d8[5];
    _objc_retain(puVar19);
    _objc_release(uVar1);
    __Block_object_dispose(&puStack_e0,8);
    _objc_release(uStack_b8);
    _objc_release(uVar1);
    uVar21 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar1);
    _objc_retain(uVar21);
    puStack_a8 = (undefined *)0x0;
    pcStack_98 = (code *)0x3032000000;
    pcStack_90 = FUN_104f03b40;
    ppuStack_88 = (undefined **)0x104f03b50;
    uStack_80 = 0;
    uVar6 = uVar1;
    ppuStack_a0 = &puStack_a8;
    func_0x00010c0f4aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar20;
    ppuStack_d8 = (undefined **)0xc2000000;
    uStack_d0 = 0x104f03d4c;
    pcStack_c8 = (code *)&UNK_11085a728;
    ppuStack_b0 = &puStack_a8;
    _objc_retain(uVar21);
    uStack_c0 = uVar21;
    _objc_retain(uVar1);
    uStack_b8 = uVar1;
    _objc_retain(uVar1);
    _objc_retain(uVar21);
    func_0x00010c0bf240(uVar6);
    _objc_release(uVar6);
    puVar20 = ppuStack_a0[5];
    _objc_retain(puVar20);
    _objc_release(uVar21);
    _objc_release(uVar1);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    __Block_object_dispose(&puStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(uVar21);
    _objc_release(uVar1);
    uVar6 = uVar2;
    func_0x00010c0c6c20();
    if (uVar6 != 0xffffffffffffffff) {
      func_0x00010c0c6c20();
      func_0x0001085439dc();
    }
    func_0x00010c045140(puVar17);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    func_0x000107b281fc(puVar3,puVar17);
    puVar20 = puVar3;
    func_0x00010bf51e00(puVar3);
    (**(code **)(param_6 + 0x10))(param_6,puVar20,0);
    _objc_release(puVar20);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar9);
    _objc_release(puStack_170);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f03aec; end: 104f03aef; -[SCMemoriesChatMediaContextLayerPageProvider setPlaylistItemController:] */

void FUN_104f03aec(void)

{
  return;
}



/* Entry: 104f03af0; end: 104f03af3; -[SCMemoriesChatMediaContextLayerPageProvider extraPropertiesProvider] */

void FUN_104f03af0(void)

{
  return;
}



/* Entry: 104f03af4; end: 104f03af7; -[SCMemoriesChatMediaContextLayerPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f03af4(void)

{
  return;
}


