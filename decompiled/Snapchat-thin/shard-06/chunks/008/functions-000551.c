/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e8e564; end: 104e8e60b;  */

void FUN_104e8e564(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8e60c; end: 104e8e613; -[SCPostRegIOS18ContactPermissionRequestViewController _setContactsImage:on:] */

void FUN_104e8e60c(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c181830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x3,PTR_s_setContactsImage__11263e028);
  return;
}



/* Entry: 104e8e614; end: 104e8e61b; -[SCPostRegIOS18ContactPermissionRequestViewController _sePointerImage:on:] */

void FUN_104e8e614(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1de970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x3,PTR_s_setPointerImage__112655480);
  return;
}



/* Entry: 104e8e61c; end: 104e8e637; -[SCPostRegIOS18ContactPermissionRequestViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8e61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127153b8),PTR_s_startRenderingViewModels__112671b08,
             &PTR___NSConcreteGlobalBlock_110855fe0);
  return;
}



/* Entry: 104e8e638; end: 104e8e683; -[SCPostRegIOS18ContactPermissionRequestViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8e638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127153b8);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010c1361e0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8e684; end: 104e8e6cf; -[SCPostRegIOS18ContactPermissionRequestViewController _didGuideViewTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8e684(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127153b8);
  puVar1 = PTR_PTR_1126b1800;
  func_0x00010c1361e0(PTR_PTR_1126b1800);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e8e6d0; end: 104e8e71f; -[SCPostRegIOS18ContactPermissionRequestViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8e6d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127153c0,0);
  _objc_storeStrong(param_1 + _DAT_1127153bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127153b8,0);
  return;
}



/* Entry: 104e8e720; end: 104e8e7eb; -[SCContactPermissionRequestWorkflow initWithRouter:delegate:isExplicitUserLevelPermissionDialogNeeded:isConfirmSkipDialogNeeded:isGoToSystemSettingsDialogNeeded:shouldDisplayInterstitialPage:] */

undefined1 *
FUN_104e8e720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e4a40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x19) = param_6;
    *(undefined1 *)((long)puVar1 + 0x1a) = param_7;
    *(undefined1 *)((long)puVar1 + 0x1b) = param_8;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e8e7ec; end: 104e8e85f; -[SCContactPermissionRequestWorkflow beginWorkflow] */

void FUN_104e8e7ec(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 auStack_60 [5];
  undefined8 auStack_38 [5];
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  bVar3 = *(char *)(param_1 + 0x1b) == '\0';
  puVar1 = auStack_38;
  if (bVar3) {
    puVar1 = auStack_60;
  }
  pcVar2 = FUN_104e8e860;
  if (bVar3) {
    pcVar2 = (code *)0x104e8e878;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_110856000;
  puVar1[4] = param_1;
  func_0x00010c1429e0(uVar4);
  return;
}



/* Entry: 104e8e860; end: 104e8e88f;  */

void FUN_104e8e860(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010c236b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showContactPermissionRequestPage_11266b500,lVar1,
             *(undefined1 *)(lVar1 + 0x18),*(undefined1 *)(lVar1 + 0x19),
             *(undefined1 *)(lVar1 + 0x1a));
  return;
}



/* Entry: 104e8e890; end: 104e8e8bb; -[SCContactPermissionRequestWorkflow contactPermissionPageSkipped] */

void FUN_104e8e890(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4a2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8e8bc; end: 104e8e8ef; -[SCContactPermissionRequestWorkflow contactPermissionPageCompletedWithPermissionGranted:] */

void FUN_104e8e8bc(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4a2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8e8f0; end: 104e8e923; -[SCContactPermissionRequestWorkflow contactPermissionPageCompletedWithGoToSettings:] */

void FUN_104e8e8f0(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4a280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8e924; end: 104e8e94f; -[SCContactPermissionRequestWorkflow .cxx_destruct] */

void FUN_104e8e924(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e8e950; end: 104e8e99b; +[SCContactPermissionRequestAction cancelEnablingContactsInSettings] */

void FUN_104e8e950(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8e99c; end: 104e8e9e7; +[SCContactPermissionRequestAction confirmToFindFriends] */

void FUN_104e8e99c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8e9e8; end: 104e8ea33; +[SCContactPermissionRequestAction confirmToSkipContactSync] */

void FUN_104e8e9e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8ea34; end: 104e8ea7f; +[SCContactPermissionRequestAction denyUserLevelPermission] */

void FUN_104e8ea34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8ea80; end: 104e8eacb; +[SCContactPermissionRequestAction enableContactsInSettings] */

void FUN_104e8ea80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8eacc; end: 104e8eb17; +[SCContactPermissionRequestAction grantUserLevelPermission] */

void FUN_104e8eacc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8eb18; end: 104e8eb5f; +[SCContactPermissionRequestAction requestPermission] */

void FUN_104e8eb18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8eb60; end: 104e8ebab; +[SCContactPermissionRequestAction tapSkipButton] */

void FUN_104e8eb60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1800;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8ebac; end: 104e8ebcf; -[SCContactPermissionRequestAction copyWithZone:] */

undefined8 FUN_104e8ebac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e8ebd0; end: 104e8ebd7; -[SCContactPermissionRequestAction hash] */

undefined8 FUN_104e8ebd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e8ebd8; end: 104e8ec1b; -[SCContactPermissionRequestAction internalInit] */

void FUN_104e8ebd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4a48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e8ec1c; end: 104e8eca3; -[SCContactPermissionRequestAction isEqual:] */

bool FUN_104e8ec1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104e8eca4; end: 104e8ee33; -[SCContactPermissionRequestAction matchRequestPermission:grantUserLevelPermission:denyUserLevelPermission:tapSkipButton:confirmToSkipContactSync:confirmToFindFriends:enableContactsInSettings:cancelEnablingContactsInSettings:] */

void FUN_104e8eca4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (lVar2 < 2) {
      lVar1 = param_3;
      if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_104e8eddc;
    }
    else {
      lVar1 = param_5;
      if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_104e8eddc;
    }
  }
  else if (lVar2 < 6) {
    lVar1 = param_7;
    if ((lVar2 != 4) && (lVar1 = param_8, lVar2 != 5)) goto LAB_104e8eddc;
  }
  else {
    lVar1 = param_9;
    if ((lVar2 != 6) && (lVar1 = param_10, lVar2 != 7)) goto LAB_104e8eddc;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_104e8eddc:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e8ee34; end: 104e8ee93; -[SCContactPermissionRequestViewModel initWithShouldDisplayUserLevelPermissionRequestDialog:shouldDisplayConfirmSkipDialog:shouldDisplayGoToSystemSettingsDialog:] */

void FUN_104e8ee34(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4a50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
  }
  return;
}



/* Entry: 104e8ee94; end: 104e8eeb7; -[SCContactPermissionRequestViewModel copyWithZone:] */

undefined8 FUN_104e8ee94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e8eeb8; end: 104e8ef1b; -[SCContactPermissionRequestViewModel hash] */

ulong * FUN_104e8eeb8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 10) == param_3[10]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 104e8ef1c; end: 104e8efc3; -[SCContactPermissionRequestViewModel isEqual:] */

bool FUN_104e8ef1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104e8efc4; end: 104e8efcb; -[SCContactPermissionRequestViewModel shouldDisplayUserLevelPermissionRequestDialog] */

undefined1 FUN_104e8efc4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e8efcc; end: 104e8efd3; -[SCContactPermissionRequestViewModel shouldDisplayConfirmSkipDialog] */

undefined1 FUN_104e8efcc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104e8efd4; end: 104e8efdb; -[SCContactPermissionRequestViewModel shouldDisplayGoToSystemSettingsDialog] */

undefined1 FUN_104e8efd4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104e8efdc; end: 104e8efe7; +[SCCEnableFindFriendsUpsellView componentPath] */

undefined ** FUN_104e8efdc(void)

{
  return &PTR____CFConstantStringClassReference_110db8878;
}



/* Entry: 104e8efe8; end: 104e8f01b; -[SCCEnableFindFriendsUpsellView initWithViewModel:componentContext:runtime:] */

void FUN_104e8efe8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4a58;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104e8f01c; end: 104e8f06b; -[SCCEnableFindFriendsUpsellView setViewModel:] */

void FUN_104e8f01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8f06c; end: 104e8f0af; -[SCCEnableFindFriendsUpsellView viewModel] */

void FUN_104e8f06c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e8f0b0; end: 104e8f17b; -[SCCEnableFindFriendsUpsellViewContext initWithOnAccept:onDismissNotNow:onLearnMore:] */

undefined8 *
FUN_104e8f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126e4a60;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 104e8f17c; end: 104e8f18b; +[SCCEnableFindFriendsUpsellViewContext valdiMarshallableObjectDescriptor] */

void FUN_104e8f17c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onAccept_110856030;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e8f18c; end: 104e8f1bf; -[SCCEnableFindFriendsUpsellViewModel init] */

void FUN_104e8f18c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4a68;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104e8f1c0; end: 104e8f1db; +[SCCEnableFindFriendsUpsellViewModel valdiMarshallableObjectDescriptor] */

void FUN_104e8f1c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dd8d438;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e8f1dc; end: 104e8f24f; -[SCComposerAtlasFollowersProvider initWithAtlasPublicDataProvider:] */

undefined1 * FUN_104e8f1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4a70;
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



/* Entry: 104e8f250; end: 104e8f357; -[SCComposerAtlasFollowersProvider getFollowersWithCursor:] */

void FUN_104e8f250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e8f358; end: 104e8f507;  */

void FUN_104e8f358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_2);
    _objc_retain(param_2);
    func_0x00010bfc5ae0(uVar2);
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e8f508; end: 104e8f87b;  */

void FUN_104e8f508(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    func_0x00010bf529e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    puVar3 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar15 = *(long *)((long)puVar14 * 8);
        lVar4 = lVar15;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010b70473c();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar7 != 0) {
          puVar8 = PTR_PTR_1126b1810;
          _objc_alloc();
          lVar4 = lVar15;
          func_0x00010c0d3e20();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar15;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar15;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar15;
          func_0x00010bf1c0a0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar15;
          func_0x00010c241dc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb3980(lVar15);
          func_0x00010c05c000((double)lVar15,puVar8);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          func_0x00010befa120(puVar2);
          _objc_release(puVar8);
        }
        _objc_release(lVar7);
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar3 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar3 = PTR_PTR_1126b1818;
    _objc_alloc();
    func_0x00010c013a40();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    puVar14 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar13);
    _objc_release(puVar14);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) & 1) == 0) {
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar11);
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    puVar11 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar13);
    _objc_release(puVar11);
    func_0x00010bf436e0(*(undefined8 *)(param_2 + 0x20));
    _objc_release();
    param_2 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104e8f87c; end: 104e8f9bf;  */

void FUN_104e8f87c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar1);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    _objc_release();
    param_1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104e8f9c0; end: 104e8f9d3;  */

void FUN_104e8f9c0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104e8f9d4; end: 104e8f9df; -[SCComposerAtlasFollowersProvider .cxx_destruct] */

void FUN_104e8f9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e8f9e0; end: 104e8fa7f; -[SCMyFriendsActionHandler initWithActionHandlersMap:] */

undefined1 * FUN_104e8f9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4a78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new(PTR_PTR_1126ae568);
    func_0x00010c165220(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e8fa80; end: 104e8fbf3; -[SCMyFriendsActionHandler setAddFriendsActionEventObservable:] */

void FUN_104e8fa80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = param_3;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      puVar2 = PTR_DAT_1126a4eb0;
      uVar8 = *(undefined8 *)(lVar9 * 8);
      _objc_retain(uVar8);
      uVar6 = uVar8;
      func_0x00010010fab4(uVar8,puVar2);
      uVar3 = uVar8;
      if ((int)uVar6 == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar8);
      func_0x00010c165220(uVar3);
      _objc_release(uVar3);
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e8fbf4; end: 104e8fc1b; -[SCMyFriendsActionHandler addFriendsActionEventObservable] */

void FUN_104e8fbf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e8fc1c; end: 104e8fd0b; -[SCMyFriendsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104e8fc1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    lVar1 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = uVar3;
    func_0x00010bfd0140(uVar3,param_2,param_3,param_4,param_5);
    _objc_release(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      goto LAB_104e8fcdc;
    }
  }
  uVar4 = 0;
LAB_104e8fcdc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 104e8fd0c; end: 104e8fd3b; -[SCMyFriendsActionHandler .cxx_destruct] */

void FUN_104e8fd0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e8fd3c; end: 104e9012f; -[SCMyFriendsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8fd3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar19 = param_1;
  FUN_104e90130();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  lVar19 = param_1;
  FUN_104e90130();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar19;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11271543c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar19;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112715450;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar19;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  lVar14 = (long)_DAT_1127153f8;
  lVar19 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar19;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdaf60();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar19);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar19 = lVar14;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073920();
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar14);
  lVar19 = param_1 + _DAT_1127153fc;
  _objc_loadWeakRetained();
  lVar14 = lVar19;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar19);
  puVar8 = PTR_PTR_1126b1820;
  _objc_alloc();
  lVar19 = param_1 + _DAT_112715478;
  _objc_loadWeakRetained(lVar19);
  lVar14 = param_1 + _DAT_11271545c;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112715460;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010c291060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112715464;
  _objc_loadWeakRetained();
  lVar10 = lVar6;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271546c;
  _objc_loadWeakRetained();
  func_0x00010c00a320(puVar8);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar19);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112715404);
  uVar21 = *(undefined8 *)(param_1 + _DAT_112715408);
  uVar17 = *(undefined8 *)(param_1 + _DAT_11271540c);
  lVar19 = param_1 + _DAT_112715410;
  _objc_loadWeakRetained(lVar19);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112715414);
  uVar20 = *(undefined8 *)(param_1 + _DAT_112715418);
  lVar14 = param_1 + _DAT_11271541c;
  _objc_loadWeakRetained(lVar14);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112715420);
  param_1 = param_1 + _DAT_112715424;
  _objc_loadWeakRetained();
  puVar12 = puVar8;
  func_0x00010699f124(puVar8,uVar15,uVar21,uVar17,lVar19,uVar18,uVar20,lVar14,uVar16,lVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar19);
  puVar13 = PTR_PTR_1126b1828;
  _objc_alloc(PTR_PTR_1126b1828);
  func_0x00010bff0780();
  func_0x00010c161980(puVar8);
  _objc_release(puVar13);
  func_0x00010bf0c980(lVar1);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e90130; end: 104e90153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e90130(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271542c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e90154; end: 104e9031b; -[SCMyFriendsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e90154(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715424);
  _objc_storeStrong(param_1 + _DAT_112715420,0);
  _objc_storeStrong(param_1 + _DAT_112715418,0);
  _objc_destroyWeak(param_1 + _DAT_11271541c);
  _objc_destroyWeak(param_1 + _DAT_112715478);
  _objc_storeStrong(param_1 + _DAT_112715400,0);
  _objc_destroyWeak(param_1 + _DAT_112715410);
  _objc_storeStrong(param_1 + _DAT_11271540c,0);
  _objc_storeStrong(param_1 + _DAT_112715414,0);
  _objc_storeStrong(param_1 + _DAT_112715408,0);
  _objc_storeStrong(param_1 + _DAT_112715404,0);
  _objc_destroyWeak(param_1 + _DAT_112715474);
  _objc_destroyWeak(param_1 + _DAT_112715470);
  _objc_destroyWeak(param_1 + _DAT_11271546c);
  _objc_destroyWeak(param_1 + _DAT_112715468);
  _objc_destroyWeak(param_1 + _DAT_112715464);
  _objc_destroyWeak(param_1 + _DAT_112715460);
  _objc_destroyWeak(param_1 + _DAT_1127153fc);
  _objc_destroyWeak(param_1 + _DAT_11271545c);
  _objc_destroyWeak(param_1 + _DAT_112715458);
  _objc_destroyWeak(param_1 + _DAT_1127153f8);
  _objc_destroyWeak(param_1 + _DAT_112715454);
  _objc_destroyWeak(param_1 + _DAT_112715450);
  _objc_destroyWeak(param_1 + _DAT_11271544c);
  _objc_destroyWeak(param_1 + _DAT_112715448);
  _objc_destroyWeak(param_1 + _DAT_112715444);
  _objc_destroyWeak(param_1 + _DAT_112715440);
  _objc_destroyWeak(param_1 + _DAT_11271543c);
  _objc_destroyWeak(param_1 + _DAT_112715438);
  _objc_destroyWeak(param_1 + _DAT_112715434);
  _objc_destroyWeak(param_1 + _DAT_112715430);
  _objc_destroyWeak(param_1 + _DAT_11271542c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715428);
  return;
}



/* Entry: 104e9031c; end: 104e906b7; -[SCSIGMyFriendsViewController initWithDelegate:addFriendsRecentlyActionPageScopeExposer:addFriendsRecentlyActionPageScopeServices:customAppThemeProvider:hasPublicProfile:isFriendsOnlyProfile:composerPeopleFriendServices:composerRuntime:userActionHandlerFactory:friendmojiProviderFactory:atlasServices:plusFeatureGating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e9031c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e4a80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1931e0(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271547c) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112715480) = param_8;
    lVar6 = (long)_DAT_112715484;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112715488;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271548c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112715490);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112715490) = uVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112715494;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112715498;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    _objc_release(uVar2);
    func_0x00010c216240(puVar1);
    func_0x00010c20eaa0(puVar1);
    puVar3 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202660();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8460();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216340();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar3);
    lVar6 = (long)_DAT_11271549c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127154a0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127154a4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127154a8,param_3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127154ac);
    *(undefined **)((long)puVar1 + (long)_DAT_1127154ac) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e906b8; end: 104e906bf; -[SCSIGMyFriendsViewController loadScrollView] */

undefined8 FUN_104e906b8(void)

{
  return 0;
}



/* Entry: 104e906c0; end: 104e90ab7; -[SCSIGMyFriendsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e906c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e4a80;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  if (lRam00000001138466f0 < 3) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    lVar22 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar22);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar22;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puStack_88 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    puStack_80 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    puStack_78 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (lRam00000001138466f0 < 3) goto LAB_104e90a3c;
  }
  puVar2 = PTR_PTR_1126b1830;
  _objc_alloc();
  func_0x00010c051be0();
  lVar22 = (long)_DAT_1127154b0;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar2;
  _objc_release(uVar21);
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  lVar22 = param_1;
  func_0x00010bf14800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067880(uVar21);
  _objc_release(lVar22);
LAB_104e90a3c:
  lVar22 = param_1;
  func_0x00010bdf4800();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_1127154b4;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(long *)(param_1 + lVar23) = lVar22;
  _objc_release(uVar21);
  func_0x00010beb0fc0(param_1);
  lVar22 = *(long *)(param_1 + lVar23);
  func_0x00010c1a7f60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = lVar22;
  func_0x00010bdf4820();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar22 + _DAT_112715498);
  func_0x00010c269d40(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf9dae0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar21;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  _objc_release(uVar20);
  _objc_release(uVar21);
  _objc_release(uVar19);
  puVar2 = PTR_PTR_1126b1838;
  _objc_alloc(PTR_PTR_1126b1838);
  func_0x00010c01f880();
  puVar1 = PTR_PTR_1126b1840;
  _objc_alloc(PTR_PTR_1126b1840);
  uVar21 = *(undefined8 *)(lVar22 + _DAT_112715484);
  func_0x00010c142e00(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032a60(puVar1);
  _objc_release(uVar21);
  func_0x00010c219b60(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e90ab8; end: 104e90be3; -[SCSIGMyFriendsViewController _createTabsValdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e90ab8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010bdf4820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715498);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf9dae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1838;
  _objc_alloc(PTR_PTR_1126b1838);
  func_0x00010c01f880();
  puVar5 = PTR_PTR_1126b1840;
  _objc_alloc(PTR_PTR_1126b1840);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112715484);
  func_0x00010c142e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032a60(puVar5,param_2,param_1,puVar4,lVar1,uVar6);
  _objc_release(uVar6);
  func_0x00010c219b60(puVar5,param_2,0);
  _objc_release(puVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104e90be4; end: 104e90cc7; -[SCSIGMyFriendsViewController _openPlusSubscribeActionBlock] */

void FUN_104e90be4(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e90cc8;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  ppuVar2 = &puStack_68;
  _objc_retainBlock(ppuVar2);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104e90cc8; end: 104e90d6b;  */

void FUN_104e90cc8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104e90d6c;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e90d6c; end: 104e90e3b;  */

void FUN_104e90d6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain();
    lVar4 = lVar3;
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(lVar2,param_2,lVar3,uVar5,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104e90e3c; end: 104e912e3; -[SCSIGMyFriendsViewController _createTabsValdiViewContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e90e3c(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar3 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  puVar4 = PTR_PTR_1126b1548;
  _objc_alloc();
  func_0x00010c046040();
  puVar5 = PTR_PTR_1126b1848;
  _objc_alloc_init(PTR_PTR_1126b1848);
  lVar6 = *(long *)(param_1 + _DAT_112715488);
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  (**(code **)(lVar6 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar6);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11271548c);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf59da0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  lVar11 = *(long *)(param_1 + _DAT_112715490);
  if (lVar11 == 0) {
    lVar6 = 0;
  }
  else {
    (**(code **)(lVar11 + 0x10))(lVar11,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
  }
  puVar12 = PTR_PTR_1126b1850;
  _objc_alloc_init(PTR_PTR_1126b1850);
  func_0x00010c1a0100();
  func_0x00010c21ddc0(puVar12);
  func_0x00010c1a0660(puVar12);
  func_0x00010c201f20(puVar12);
  _objc_initWeak(auStack_78,param_1);
  lVar11 = param_1;
  func_0x00010be6d480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d3cc0(puVar12);
  _objc_release(lVar11);
  func_0x00010c1a0740(puVar5);
  puVar13 = PTR_PTR_1126b1858;
  _objc_alloc_init(PTR_PTR_1126b1858);
  lVar17 = (long)_DAT_11271547c;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6820(puVar13);
  _objc_release(puVar14);
  lVar18 = (long)_DAT_112715480;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1340(puVar13);
  _objc_release(puVar14);
  lVar11 = *(long *)(param_1 + _DAT_112715494);
  if (lVar11 != 0) {
    func_0x00010bf0c400();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    if (lVar15 != 0) {
      puVar14 = PTR_PTR_1126b1860;
      _objc_alloc(PTR_PTR_1126b1860);
      func_0x00010bff48c0();
      func_0x00010c19e460(puVar13);
      _objc_release(puVar14);
    }
    _objc_release(lVar15);
  }
  func_0x00010c19e440(puVar5);
  puVar14 = PTR_PTR_1126b1868;
  _objc_alloc_init(PTR_PTR_1126b1868);
  puVar16 = puVar14;
  func_0x00010c201b80();
  if ((*(char *)(param_1 + lVar17) == '\x01') && ((*(byte *)(param_1 + lVar18) & 1) == 0)) {
    func_0x000104e920c0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    bVar2 = true;
  }
  else {
    func_0x000104e920d8();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = true;
  }
  func_0x00010c1a7a60(puVar14);
  if (bVar1) {
    _objc_release(puVar16);
  }
  if (bVar2) {
    _objc_release(puVar16);
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104e912e4;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1d2040(puVar14);
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c1d2b40(puVar14);
  func_0x00010c1a7600(puVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar12);
  _objc_release(lVar6);
  _objc_release(uVar10);
  _objc_release(lVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104e912e4; end: 104e91373;  */

void FUN_104e912e4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e91374;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e91374; end: 104e913a7;  */

void FUN_104e91374(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e913a8; end: 104e91437;  */

void FUN_104e913a8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e91438;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e91438; end: 104e91463;  */

void FUN_104e91438(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e91464; end: 104e91743; -[SCSIGMyFriendsViewController _setupValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c1a7f60(param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar8;
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  uStack_a0 = uVar10;
  uStack_88 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_b0 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  uStack_80 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  uStack_78 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c0);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(lStack_b8);
  _objc_release(lStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  lVar1 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104e91744;
  lVar8 = *(long *)(lVar1 + _DAT_112715498);
  uStack_f0 = uVar5;
  uStack_e8 = uVar4;
  lStack_e0 = lVar2;
  uStack_d8 = uVar10;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf9dae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c252440();
  *(bool *)(lVar1 + _DAT_1127154b8) = lVar9 == 3;
  _objc_release(lVar8);
  _objc_initWeak(auStack_f8,lVar1);
  lVar8 = lVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_f8);
  lVar9 = lVar8;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar1 + _DAT_1127154bc);
  *(long *)(lVar1 + _DAT_1127154bc) = lVar9;
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(lVar2);
  return;
}



/* Entry: 104e91744; end: 104e918a3; -[SCSIGMyFriendsViewController _observePlusExtendedBestFriendGating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91744(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112715498);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9dae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c252440();
  *(bool *)(param_1 + _DAT_1127154b8) = lVar3 == 3;
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = lVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  lVar3 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127154bc);
  *(long *)(param_1 + _DAT_1127154bc) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 104e918a4; end: 104e9195f;  */

void FUN_104e918a4(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c252440();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e91960;
  puStack_48 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = lVar1 == 3;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 104e91960; end: 104e919b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91960(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) != *(char *)(lVar1 + _DAT_1127154b8)) {
      *(char *)(lVar1 + _DAT_1127154b8) = *(char *)(param_1 + 0x28);
      func_0x00010be88ba0(lVar1,param_2,*(undefined1 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e919b8; end: 104e91a07; -[SCSIGMyFriendsViewController _refreshValdiSubscriptionState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e919b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1838;
  _objc_alloc(PTR_PTR_1126b1838);
  func_0x00010c01f880();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127154b4),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e91a08; end: 104e91b23; -[SCSIGMyFriendsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91a08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1126e4a80;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  lVar3 = *(long *)(param_1 + _DAT_1127154ac);
  puVar5 = PTR_PTR_1126b1560;
  func_0x00010c29cac0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar3);
  _objc_release(puVar5);
  puVar5 = (undefined *)(long)_DAT_1127154b4;
  if (*(long *)(puVar5 + param_1) != 0) {
    lVar3 = param_1;
    func_0x00010bf31fa0();
    _objc_retainAutoreleasedReturnValue();
    uStack_40 = *(undefined8 *)(puVar5 + param_1);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067a20(lVar3);
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
  lVar1 = param_1;
  func_0x00010be66aa0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_80 = &DAT_1127154ac;
  pcStack_58 = FUN_104e91b24;
  puStack_88 = PTR_PTR_1126e4a80;
  lStack_90 = lVar1;
  puStack_78 = puVar5;
  lStack_70 = lVar3;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewWillAppear__1126853f0);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_1127154ac);
  puVar5 = PTR_PTR_1126b1560;
  func_0x00010c29e700(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c14cde0();
  *(undefined **)(lVar1 + _DAT_1127154c0) = puVar2;
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(lVar1);
  func_0x00010c14dc60(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 104e91b24; end: 104e91c03; -[SCSIGMyFriendsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91b24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4a80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127154ac);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e700(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_1127154c0) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e91c04; end: 104e91c73; -[SCSIGMyFriendsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91c04(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4a80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  return;
}



/* Entry: 104e91c74; end: 104e91d1f; -[SCSIGMyFriendsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91c74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4a80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127154ac);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29c860(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar2 != 0) {
    param_1 = param_1 + _DAT_1127154a8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74f80();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104e91d20; end: 104e91daf; -[SCSIGMyFriendsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91d20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_1127154bc));
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127154ac);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c2a5e20(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126e4a80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104e91db0; end: 104e91db3; -[SCSIGMyFriendsViewController preferredStatusBarStyle] */

undefined8 FUN_104e91db0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 104e91db4; end: 104e91dbb; -[SCSIGMyFriendsViewController pageViewName] */

undefined8 FUN_104e91db4(void)

{
  return 0x68;
}



/* Entry: 104e91dbc; end: 104e91dc7; -[SCSIGMyFriendsViewController defaultProjectNameV2] */

undefined ** FUN_104e91dbc(void)

{
  return &PTR____CFConstantStringClassReference_110db7938;
}



/* Entry: 104e91dc8; end: 104e91e37; -[SCSIGMyFriendsViewController _presentMoreActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91dc8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127154c4;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b1670;
    _objc_alloc();
    func_0x00010c0334a0();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_present_1126205a0);
  return;
}



/* Entry: 104e91e38; end: 104e91e3b; -[SCSIGMyFriendsViewController cardToExpandTransition] */

void FUN_104e91e38(void)

{
  return;
}



/* Entry: 104e91e3c; end: 104e91e47; -[SCSIGMyFriendsViewController cardTransitionWillBeginWithView:] */

void FUN_104e91e3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104e91e48; end: 104e91f03; -[SCSIGMyFriendsViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104e91e48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  if (*(ulong *)(param_3 + _DAT_1127154b4) != 0 && param_5 == *(ulong *)(param_3 + _DAT_1127154b4))
  {
    puVar2 = PTR_PTR_1126b1870;
    _objc_opt_class(PTR_PTR_1126b1870);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar3 = uVar1;
    func_0x00010bf2d520(param_1,param_2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      goto LAB_104e91ee4;
    }
  }
  uVar4 = 1;
LAB_104e91ee4:
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 104e91f04; end: 104e91f13; -[SCSIGMyFriendsViewController pageEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e91f04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127154ac);
}



/* Entry: 104e91f14; end: 104e91f53; -[SCSIGMyFriendsViewController setPageEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127154ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e91f54; end: 104e91f63; -[SCSIGMyFriendsViewController actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e91f54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127154c8);
}



/* Entry: 104e91f64; end: 104e91fa3; -[SCSIGMyFriendsViewController setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127154c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e91fa4; end: 104e920bf; -[SCSIGMyFriendsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e91fa4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127154c8,0);
  _objc_storeStrong(param_1 + _DAT_1127154bc,0);
  _objc_storeStrong(param_1 + _DAT_1127154b4,0);
  _objc_storeStrong(param_1 + _DAT_112715498,0);
  _objc_storeStrong(param_1 + _DAT_112715494,0);
  _objc_storeStrong(param_1 + _DAT_112715490,0);
  _objc_storeStrong(param_1 + _DAT_11271548c,0);
  _objc_storeStrong(param_1 + _DAT_112715488,0);
  _objc_storeStrong(param_1 + _DAT_112715484,0);
  _objc_storeStrong(param_1 + _DAT_1127154a4,0);
  _objc_storeStrong(param_1 + _DAT_1127154ac,0);
  _objc_storeStrong(param_1 + _DAT_1127154b0,0);
  _objc_storeStrong(param_1 + _DAT_1127154a0,0);
  _objc_storeStrong(param_1 + _DAT_11271549c,0);
  _objc_storeStrong(param_1 + _DAT_1127154c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127154a8);
  return;
}



/* Entry: 104e920c0; end: 104e920ef;  */

void FUN_104e920c0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db88f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db88f8,
                      &PTR____CFConstantStringClassReference_110db88d8,0);
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



/* Entry: 104e920f0; end: 104e92113; +[SCCAtlasFollowersProviding valdiMarshallableObjectDescriptor] */

void FUN_104e920f0(undefined8 *param_1)

{
  *param_1 = &PTR_s_getFollowers_110856120;
  param_1[1] = &PTR_s_SCBridgeObservable_110856150;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104e92114; end: 104e9211f; +[SCFriendsFollowingFollowersTabsView componentPath] */

undefined ** FUN_104e92114(void)

{
  return &PTR____CFConstantStringClassReference_110db8938;
}



/* Entry: 104e92120; end: 104e92143; -[SCFriendsFollowingFollowersTabsView initWithViewModel:componentContext:runtime:] */

void FUN_104e92120(void)

{
  FUN_104e92264(PTR_PTR_1126e4a88);
  return;
}



/* Entry: 104e92144; end: 104e9217b; -[SCFriendsFollowingFollowersTabsView setViewModel:] */

void FUN_104e92144(void)

{
  func_0x000104e92280();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e92290();
  func_0x000104e92278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104e9217c; end: 104e921bb; -[SCFriendsFollowingFollowersTabsView viewModel] */

void FUN_104e9217c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e92278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e921bc; end: 104e921c7; +[SCProfileFriendsListView componentPath] */

undefined ** FUN_104e921bc(void)

{
  return &PTR____CFConstantStringClassReference_110db8958;
}



/* Entry: 104e921c8; end: 104e921eb; -[SCProfileFriendsListView initWithViewModel:componentContext:runtime:] */

void FUN_104e921c8(void)

{
  FUN_104e92264(PTR_PTR_1126e4a90);
  return;
}



/* Entry: 104e921ec; end: 104e92223; -[SCProfileFriendsListView setViewModel:] */

void FUN_104e921ec(void)

{
  func_0x000104e92280();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e92290();
  func_0x000104e92278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


