/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068082a8; end: 1068082d7; -[SCActiveUserNavigationWorkflow activate] */

void FUN_1068082a8(undefined8 param_1)

{
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068082d8; end: 1068082df; -[SCActiveUserNavigationWorkflow didBeginRecording] */

void FUN_1068082d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toggleButtonVisibility__11267a3c8,0);
  return;
}



/* Entry: 1068082e0; end: 1068082e7; -[SCActiveUserNavigationWorkflow toggleTimerMode:] */

void FUN_1068082e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toggleButtonVisibility__11267a3c8,param_3 ^ 1);
  return;
}



/* Entry: 1068082e8; end: 1068082eb; -[SCActiveUserNavigationWorkflow toggleSearchBarAndBitmojiVisibility:] */

void FUN_1068082e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toggleButtonVisibility__11267a3c8);
  return;
}



/* Entry: 1068082ec; end: 106808323; -[SCActiveUserNavigationWorkflow toggleButtonVisibility:] */

void FUN_1068082ec(undefined8 param_1)

{
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106808324; end: 10680832b; -[SCActiveUserNavigationWorkflow didCancelFromPreview:] */

void FUN_106808324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didCancelFromPreview_withComplet_1125ba4f0,param_3,0);
  return;
}



/* Entry: 10680832c; end: 1068083a7; -[SCActiveUserNavigationWorkflow didCancelFromPreview:withCompletion:] */

void FUN_10680832c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2a020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2366c0();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c272690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toggleButtonVisibility__11267a3c8,1);
  return;
}



/* Entry: 1068083a8; end: 106808493; -[SCActiveUserNavigationWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_1068083a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  func_0x00010c272680(param_1);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f9680(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106808494; end: 10680856f;  */

void FUN_106808494(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1420a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba180();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c237940(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106808570; end: 106808653;  */

void FUN_106808570(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0xa0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aab80();
    _objc_release(uVar3);
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf4b900();
    if ((uVar4 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4b900();
      if (iVar1 == 0) goto LAB_106808640;
    }
    puVar5 = PTR_PTR_1126ce550;
    _objc_alloc(PTR_PTR_1126ce550);
    func_0x00010c003e20();
    lVar6 = *(long *)(lVar2 + 0x150);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      func_0x00010bf9d620(*(undefined8 *)(lVar2 + 0x150));
    }
    _objc_release(puVar5);
  }
LAB_106808640:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106808654; end: 1068086b7; -[SCActiveUserNavigationWorkflow didSendToGallery] */

void FUN_106808654(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84180();
  _objc_release(uVar1);
  func_0x00010c272680(param_1,param_2,1);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2384e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068086b8; end: 1068086f7; -[SCActiveUserNavigationWorkflow didPostStoryWithStoryTypes:] */

void FUN_1068086b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84180();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c272690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toggleButtonVisibility__11267a3c8,1);
  return;
}



/* Entry: 1068086f8; end: 106808773; -[SCActiveUserNavigationWorkflow contentPostSendUpsellFlowDidEnd] */

void FUN_1068086f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x150);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x150));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106808774; end: 10680889f;  */

void FUN_106808774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1068088a0;
  puStack_60 = &UNK_1108464b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106808930;
  puStack_88 = &UNK_110941770;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0be5a0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1068088a0; end: 10680892f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068088a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127511c0);
    func_0x00010c0dc180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1440();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106808930; end: 106808a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106808930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127511c0);
    func_0x00010c0dc180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1400();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106808a70; end: 106808aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106808a70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127511c0);
    func_0x00010bf07a20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd01a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106808b00; end: 106808c0f; -[SCLegacyUserNavigationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106808b00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = param_1 + _DAT_1127511cc;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010bf66960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1286c0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = (long)_DAT_1127511d0;
  func_0x00010c2092c0(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127511d4);
  *(undefined8 *)(param_1 + _DAT_1127511d4) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127511d8);
  *(undefined8 *)(param_1 + _DAT_1127511d8) = 0;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_1127511bc;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_1127511c4;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_1127511c8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  puStack_38 = PTR_PTR_1126f3580;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106808c10; end: 106808c2b;  */

void FUN_106808c10(void)

{
  _objc_opt_new(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106808c2c; end: 106808c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106808c2c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127511e0);
    _objc_retain(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106808c7c; end: 106808ca3;  */

void FUN_106808c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cameraNavigationService_1125a81b0);
  return;
}



/* Entry: 106808ca4; end: 106808ccb;  */

void FUN_106808ca4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106808ccc; end: 106808cdb; -[SCLegacyUserNavigationEntryPoint _appDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106808ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127511d8),
             PTR_s_handleApplicationDidEnterBackgro_1125d1a70);
  return;
}



/* Entry: 106808cdc; end: 10680942b; -[SCLegacyUserNavigationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106808cdc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112751330);
  _objc_destroyWeak(param_1 + _DAT_112751324);
  _objc_storeStrong(param_1 + _DAT_112751320,0);
  _objc_destroyWeak(param_1 + _DAT_11275131c);
  _objc_storeStrong(param_1 + _DAT_112751318,0);
  _objc_destroyWeak(param_1 + _DAT_112751314);
  _objc_storeStrong(param_1 + _DAT_112751310,0);
  _objc_destroyWeak(param_1 + _DAT_1127512e8);
  _objc_storeStrong(param_1 + _DAT_1127512e4,0);
  _objc_storeStrong(param_1 + _DAT_1127513cc,0);
  _objc_storeStrong(param_1 + _DAT_112751340,0);
  _objc_destroyWeak(param_1 + _DAT_1127513c8);
  _objc_storeStrong(param_1 + _DAT_1127513c4,0);
  _objc_storeStrong(param_1 + _DAT_1127512dc,0);
  _objc_storeStrong(param_1 + _DAT_112751290,0);
  _objc_destroyWeak(param_1 + _DAT_1127512e0);
  _objc_storeStrong(param_1 + _DAT_1127512c8,0);
  _objc_destroyWeak(param_1 + _DAT_1127512c0);
  _objc_storeStrong(param_1 + _DAT_112751260,0);
  _objc_storeStrong(param_1 + _DAT_1127512bc,0);
  _objc_storeStrong(param_1 + _DAT_1127512b8,0);
  _objc_storeStrong(param_1 + _DAT_1127512b0,0);
  _objc_storeStrong(param_1 + _DAT_112751288,0);
  _objc_destroyWeak(param_1 + _DAT_11275128c);
  _objc_storeStrong(param_1 + _DAT_112751280,0);
  _objc_destroyWeak(param_1 + _DAT_112751278);
  _objc_storeStrong(param_1 + _DAT_112751274,0);
  _objc_storeStrong(param_1 + _DAT_112751270,0);
  _objc_destroyWeak(param_1 + _DAT_11275126c);
  _objc_storeStrong(param_1 + _DAT_112751268,0);
  _objc_storeStrong(param_1 + _DAT_112751264,0);
  _objc_storeStrong(param_1 + _DAT_11275129c,0);
  _objc_destroyWeak(param_1 + _DAT_112751298);
  _objc_storeStrong(param_1 + _DAT_112751294,0);
  _objc_storeStrong(param_1 + _DAT_1127513c0,0);
  _objc_storeStrong(param_1 + _DAT_1127513bc,0);
  _objc_storeStrong(param_1 + _DAT_1127513b8,0);
  _objc_destroyWeak(param_1 + _DAT_112751258);
  _objc_destroyWeak(param_1 + _DAT_11275124c);
  _objc_storeStrong(param_1 + _DAT_112751248,0);
  _objc_destroyWeak(param_1 + _DAT_11275122c);
  _objc_storeStrong(param_1 + _DAT_112751228,0);
  _objc_storeStrong(param_1 + _DAT_11275121c,0);
  _objc_storeStrong(param_1 + _DAT_112751218,0);
  _objc_storeStrong(param_1 + _DAT_112751224,0);
  _objc_destroyWeak(param_1 + _DAT_11275123c);
  _objc_storeStrong(param_1 + _DAT_112751238,0);
  _objc_destroyWeak(param_1 + _DAT_112751244);
  _objc_storeStrong(param_1 + _DAT_112751240,0);
  _objc_destroyWeak(param_1 + _DAT_112751234);
  _objc_storeStrong(param_1 + _DAT_112751230,0);
  _objc_storeStrong(param_1 + _DAT_11275125c,0);
  _objc_storeStrong(param_1 + _DAT_112751220,0);
  _objc_storeStrong(param_1 + _DAT_112751214,0);
  _objc_storeStrong(param_1 + _DAT_112751338,0);
  _objc_destroyWeak(param_1 + _DAT_1127513b4);
  _objc_storeStrong(param_1 + _DAT_112751210,0);
  _objc_destroyWeak(param_1 + _DAT_11275127c);
  _objc_destroyWeak(param_1 + _DAT_11275132c);
  _objc_destroyWeak(param_1 + _DAT_112751328);
  _objc_destroyWeak(param_1 + _DAT_1127513b0);
  _objc_destroyWeak(param_1 + _DAT_112751284);
  _objc_destroyWeak(param_1 + _DAT_11275120c);
  _objc_destroyWeak(param_1 + _DAT_112751208);
  _objc_destroyWeak(param_1 + _DAT_112751204);
  _objc_destroyWeak(param_1 + _DAT_112751200);
  _objc_destroyWeak(param_1 + _DAT_1127513ac);
  _objc_destroyWeak(param_1 + _DAT_1127513a8);
  _objc_destroyWeak(param_1 + _DAT_1127513a4);
  _objc_destroyWeak(param_1 + _DAT_112751308);
  _objc_destroyWeak(param_1 + _DAT_112751304);
  _objc_destroyWeak(param_1 + _DAT_112751300);
  _objc_destroyWeak(param_1 + _DAT_1127512fc);
  _objc_destroyWeak(param_1 + _DAT_1127511cc);
  _objc_destroyWeak(param_1 + _DAT_1127512f4);
  _objc_destroyWeak(param_1 + _DAT_1127513a0);
  _objc_destroyWeak(param_1 + _DAT_1127512d8);
  _objc_destroyWeak(param_1 + _DAT_1127512ec);
  _objc_destroyWeak(param_1 + _DAT_11275139c);
  _objc_destroyWeak(param_1 + _DAT_1127512d4);
  _objc_destroyWeak(param_1 + _DAT_1127512d0);
  _objc_destroyWeak(param_1 + _DAT_1127512c4);
  _objc_destroyWeak(param_1 + _DAT_112751398);
  _objc_destroyWeak(param_1 + _DAT_112751394);
  _objc_destroyWeak(param_1 + _DAT_1127512b4);
  _objc_destroyWeak(param_1 + _DAT_112751390);
  _objc_destroyWeak(param_1 + _DAT_11275138c);
  _objc_destroyWeak(param_1 + _DAT_112751388);
  _objc_destroyWeak(param_1 + _DAT_1127512a4);
  _objc_destroyWeak(param_1 + _DAT_112751384);
  _objc_destroyWeak(param_1 + _DAT_112751380);
  _objc_destroyWeak(param_1 + _DAT_1127512a0);
  _objc_destroyWeak(param_1 + _DAT_1127512ac);
  _objc_destroyWeak(param_1 + _DAT_1127512a8);
  _objc_destroyWeak(param_1 + _DAT_11275137c);
  _objc_destroyWeak(param_1 + _DAT_112751378);
  _objc_destroyWeak(param_1 + _DAT_1127511e8);
  _objc_destroyWeak(param_1 + _DAT_1127511f8);
  _objc_destroyWeak(param_1 + _DAT_112751374);
  _objc_destroyWeak(param_1 + _DAT_112751370);
  _objc_destroyWeak(param_1 + _DAT_11275136c);
  _objc_destroyWeak(param_1 + _DAT_112751368);
  _objc_destroyWeak(param_1 + _DAT_11275130c);
  _objc_destroyWeak(param_1 + _DAT_112751364);
  _objc_destroyWeak(param_1 + _DAT_112751360);
  _objc_destroyWeak(param_1 + _DAT_1127511f4);
  _objc_destroyWeak(param_1 + _DAT_1127511f0);
  _objc_destroyWeak(param_1 + _DAT_1127511ec);
  _objc_destroyWeak(param_1 + _DAT_1127512f0);
  _objc_destroyWeak(param_1 + _DAT_11275135c);
  _objc_destroyWeak(param_1 + _DAT_112751358);
  _objc_destroyWeak(param_1 + _DAT_112751354);
  _objc_destroyWeak(param_1 + _DAT_112751350);
  _objc_destroyWeak(param_1 + _DAT_1127512cc);
  _objc_destroyWeak(param_1 + _DAT_112751250);
  _objc_destroyWeak(param_1 + _DAT_112751254);
  _objc_destroyWeak(param_1 + _DAT_11275134c);
  _objc_destroyWeak(param_1 + _DAT_1127511b0);
  _objc_destroyWeak(param_1 + _DAT_1127511b8);
  _objc_destroyWeak(param_1 + _DAT_1127511fc);
  _objc_destroyWeak(param_1 + _DAT_1127512f8);
  _objc_destroyWeak(param_1 + _DAT_1127511e4);
  _objc_destroyWeak(param_1 + _DAT_112751334);
  _objc_destroyWeak(param_1 + _DAT_112751348);
  _objc_destroyWeak(param_1 + _DAT_1127511dc);
  _objc_destroyWeak(param_1 + _DAT_112751344);
  _objc_storeStrong(param_1 + _DAT_1127513d0,0);
  _objc_storeStrong(param_1 + _DAT_1127511c8,0);
  _objc_storeStrong(param_1 + _DAT_1127511c4,0);
  _objc_storeStrong(param_1 + _DAT_1127511bc,0);
  _objc_storeStrong(param_1 + _DAT_11275133c,0);
  _objc_storeStrong(param_1 + _DAT_1127511c0,0);
  _objc_storeStrong(param_1 + _DAT_1127511e0,0);
  _objc_storeStrong(param_1 + _DAT_1127511d8,0);
  _objc_storeStrong(param_1 + _DAT_1127511d4,0);
  _objc_storeStrong(param_1 + _DAT_1127511d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127511b4,0);
  return;
}



/* Entry: 10680942c; end: 106809473; -[SCTopLevelFeatureScopeConfigLoaderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680942c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127513d4);
  _objc_destroyWeak(param_1 + _DAT_1127513dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127513d8,0);
  return;
}



/* Entry: 106809474; end: 10680947f; -[SCTopLevelFeatureScopeConfigProviderServices .cxx_destruct] */

void FUN_106809474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106809480; end: 106809553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106809480(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde2460(param_1);
    lVar3 = (long)_DAT_112751420;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    puVar1 = PTR_PTR_1126ce588;
    func_0x00010c2a6fa0(PTR_PTR_1126ce588);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
    func_0x00010beca300(param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    puVar1 = PTR_PTR_1126ce588;
    func_0x00010bf7d600(PTR_PTR_1126ce588);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106809554; end: 1068095eb;  */

void FUN_106809554(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdd3c60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068095ec; end: 10680962f; -[SCLegacyCameraNavigationServiceImpl _beginTabBarCameraWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068095ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127513f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106809630; end: 10680966f; -[SCLegacyCameraNavigationServiceImpl _commitTabBarCameraWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106809630(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127513f0);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd08e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106809670; end: 1068096af; -[SCLegacyCameraNavigationServiceImpl _reclaimTabBarCameraWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106809670(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127513f0);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068096b0; end: 10680975f; -[SCLegacyCameraNavigationServiceImpl interactionControllerForDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068096b0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  if ((param_3 == 4) && ((*(ulong *)(param_1 + _DAT_1127513e4) & 4) == 4)) {
    lVar5 = (long)_DAT_112751428;
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c081c60();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf18300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    else {
      uVar4 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106809760; end: 1068097b3; -[SCLegacyCameraNavigationServiceImpl showCameraWithCompletion:] */

void FUN_106809760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  func_0x00010bf098c0(puVar1);
  func_0x00010c236600(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068097b4; end: 106809887; -[SCLegacyCameraNavigationServiceImpl showCameraWithLensFromNotification:] */

void FUN_1068097b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2366c0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106809888; end: 1068098c3;  */

void FUN_106809888(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2b440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068098c4; end: 1068099cf; -[SCLegacyCameraNavigationServiceImpl showCameraAfterUnlockWithLens:lensLaunchData:activationSource:] */

void FUN_1068098c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c2366c0(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068099d0; end: 106809a0f;  */

void FUN_1068099d0(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be25860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106809a10; end: 106809ab3; -[SCLegacyCameraNavigationServiceImpl showCameraAndPreSelectSpotlight] */

void FUN_106809a10(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c2366c0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106809ab4; end: 106809adf;  */

void FUN_106809ab4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106809ae0; end: 106809bb3; -[SCLegacyCameraNavigationServiceImpl showCameraAIModeWithPrompt:] */

void FUN_106809ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2366c0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106809bb4; end: 106809bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106809bb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + _DAT_112751424),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106809bf8; end: 106809c3f; -[SCLegacyCameraNavigationServiceImpl isSuperFeedPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106809bf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751428);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c081c60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106809c40; end: 106809cd7; -[SCLegacyCameraNavigationServiceImpl refreshLocalizedTabBarLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106809c40(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = param_1;
  func_0x00010c22f820();
  if ((uVar1 & 1) == 0) {
    puVar2 = (ulong *)(param_1 + (long)_DAT_112751418);
    uVar1 = *puVar2;
    func_0x00010c216240(uVar1,param_2,0);
  }
  else {
    func_0x0001005aec24();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (ulong *)(param_1 + (long)_DAT_112751418);
    func_0x00010c216240(*puVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
  func_0x0001005aec24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*puVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106809cd8; end: 106809d27; -[SCLegacyCameraNavigationServiceImpl _tabBarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106809cd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127513e8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c198340();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c10b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentAnimated_fromUserInteract_112620690,0,1,0);
  return;
}



/* Entry: 106809d28; end: 106809dbb; -[SCLegacyCameraNavigationServiceImpl _getSelectedImageWithName:withFilledButton:] */

void FUN_106809d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106809dbc; end: 106809def; -[SCLegacyCameraNavigationServiceImpl detachViewController] */

void FUN_106809dbc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3590;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_detachViewController_1125b96d8);
  return;
}



/* Entry: 106809df0; end: 106809df3;  */

void FUN_106809df0(void)

{
  return;
}



/* Entry: 106809df4; end: 106809e73; -[SCLegacyCameraNavigationServiceImpl _handleLensFromNotification:] */

void FUN_106809df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c27cea0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106809e74; end: 106809f1b; -[SCLegacyCameraNavigationServiceImpl _handleAfterUnlockWithLens:lensLaunchData:activationSource:] */

void FUN_106809e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c27ce80(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106809f1c; end: 10680a06b; -[SCLegacyCameraNavigationServiceImpl _setReplyConfiguration] */

void FUN_106809f1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae6c0;
  func_0x00010c25bbc0(PTR_PTR_1126ae6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  puVar5 = puVar4;
  func_0x000108f5833c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e6c0(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar6 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb380(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10680a06c; end: 10680a187; -[SCLegacyCameraNavigationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680a06c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112751424,0);
  _objc_storeStrong(param_1 + _DAT_112751414,0);
  _objc_storeStrong(param_1 + _DAT_112751418,0);
  _objc_storeStrong(param_1 + _DAT_112751428,0);
  _objc_storeStrong(param_1 + _DAT_1127513f0,0);
  _objc_storeStrong(param_1 + _DAT_1127513ec,0);
  _objc_storeStrong(param_1 + _DAT_11275141c,0);
  _objc_storeStrong(param_1 + _DAT_112751420,0);
  _objc_storeStrong(param_1 + _DAT_11275140c,0);
  _objc_storeStrong(param_1 + _DAT_112751408,0);
  _objc_storeStrong(param_1 + _DAT_112751404,0);
  _objc_destroyWeak(param_1 + _DAT_112751400);
  _objc_destroyWeak(param_1 + _DAT_1127513fc);
  _objc_destroyWeak(param_1 + _DAT_1127513f8);
  _objc_destroyWeak(param_1 + _DAT_112751410);
  _objc_storeStrong(param_1 + _DAT_1127513f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127513e8);
  return;
}



/* Entry: 10680a188; end: 10680a1db; -[SCFriendsFeedNavigationServiceImpl showFriendsFeed:] */

void FUN_10680a188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  func_0x00010bf098c0(puVar1);
  func_0x00010beb9400(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680a1dc; end: 10680a293; -[SCFriendsFeedNavigationServiceImpl showFriendsFeedWithQuickActionItem:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680a1dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + _DAT_112751478) = 1;
  }
  else {
    lVar2 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    func_0x00010bf777a0(lVar1);
    _objc_release(lVar1);
  }
  func_0x00010c237940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10680a294; end: 10680a4df; -[SCFriendsFeedNavigationServiceImpl showFriendsFeedWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680a294(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    lVar7 = (long)_DAT_11275147c;
    _objc_retain(param_3);
    lVar6 = *(long *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = param_3;
  }
  else {
    lVar7 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010010fab4();
    lVar6 = lVar7;
    if ((int)lVar1 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(lVar7);
    func_0x00010c206ee0(lVar6);
  }
  _objc_release(lVar6);
  uVar2 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  if (((uVar2 & 1) == 0) || (uVar2 = uVar3, func_0x000107fd389c(), uVar2 == 0)) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_80,auStack_48);
    _objc_retain(param_3);
    func_0x00010c237940(param_1);
    _objc_release(param_3);
    puVar5 = auStack_80;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10680a4e0;
    puStack_60 = &UNK_11084b7a0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x00010c2379e0(param_1);
    _objc_release(uStack_58);
    puVar5 = auStack_50;
  }
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10680a4e0; end: 10680a557;  */

void FUN_10680a4e0(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2cfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10680a558; end: 10680a75b; -[SCFriendsFeedNavigationServiceImpl showFriendsFeedWithPageLaunchCommand:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680a558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11275144c);
  func_0x00010bf1f440();
  uVar5 = param_3;
  func_0x00010bfb9c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x000107fd397c();
  _objc_release(uVar5);
  lVar6 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    lVar6 = (long)_DAT_112751480;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = param_3;
    _objc_release(uVar5);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + _DAT_112751484) = uVar2;
    }
  }
  else {
    lVar3 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010010fab4();
    lVar6 = lVar3;
    if ((int)lVar4 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(lVar3);
    func_0x00010c1d83a0(lVar6);
    if (iVar1 != 0) {
      func_0x00010c1e0be0(lVar6);
    }
    _objc_release(lVar6);
  }
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  uStack_60 = (undefined1)iVar1;
  uStack_68 = uVar2;
  _objc_retain(param_4);
  func_0x00010c237940(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10680a75c; end: 10680a7ef;  */

void FUN_10680a75c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2d9c0();
  _objc_release(lVar1);
  if ((((int)param_2 != 0) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be300e0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680a7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10680a7f0; end: 10680a94b; -[SCFriendsFeedNavigationServiceImpl showFriendsFeedWithSelectedShortcut:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680a7f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + _DAT_112751484) = param_3;
  }
  else {
    lVar2 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    func_0x00010c1e0be0(lVar1);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_48,param_1);
  uStack_50 = param_3;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  func_0x00010c237940(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10680a94c; end: 10680a9b3;  */

void FUN_10680a94c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be300e0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680a9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10680a9b4; end: 10680aa6f; -[SCFriendsFeedNavigationServiceImpl showFriendsFeedUnderChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680a9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + _DAT_112751488) = 1;
  }
  else {
    lVar2 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    func_0x00010c1b3840(lVar1);
    _objc_release(lVar1);
  }
  func_0x00010beb9400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680aa70; end: 10680ab07; -[SCFriendsFeedNavigationServiceImpl _showFriendsFeedAnimated:completion:] */

void FUN_10680aa70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10680ab08;
  puStack_40 = &UNK_110842508;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c10b1c0(param_1,param_2,param_3,0,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10680ab08; end: 10680ab1b;  */

void FUN_10680ab08(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680ab14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10680ab1c; end: 10680ac0f; -[SCFriendsFeedNavigationServiceImpl shouldShowFriendsFeedWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10680ab1c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_112751464);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c12c800();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
    if ((param_3 == 0) || (*(long *)(param_1 + _DAT_112751450) != 1)) goto LAB_10680abf4;
LAB_10680abb8:
    lVar4 = param_3;
    func_0x00010c11c420();
    bVar1 = true;
    if (((lVar4 - 0x71U < 0x2a) && ((1L << (lVar4 - 0x71U & 0x3f) & 0x28000000005U) != 0)) ||
       (lVar4 == 0x16)) goto LAB_10680abf4;
  }
  else if (param_3 != 0) {
    if (*(long *)(param_1 + _DAT_112751450) != 1) {
      lVar4 = param_3;
      func_0x00010c11c420();
      bVar1 = lVar4 == 0x73 || lVar4 == 0x16;
      goto LAB_10680abf4;
    }
    goto LAB_10680abb8;
  }
  bVar1 = false;
LAB_10680abf4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10680ac10; end: 10680ac9b; -[SCFriendsFeedNavigationServiceImpl _handleNotificationPressed:] */

void FUN_10680ac10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c29c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd19a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680ac9c; end: 10680ad23; -[SCFriendsFeedNavigationServiceImpl _handleShortcutPreselected:] */

void FUN_10680ac9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c29c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd27a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10680ad24; end: 10680adaf; -[SCFriendsFeedNavigationServiceImpl _handlePageLaunchCommand:] */

void FUN_10680ad24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c29c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1d80();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680adb0; end: 10680ae2b; -[SCFriendsFeedNavigationServiceImpl refreshLocalizedTabBarLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680adb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be36220(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112751450));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112751470;
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
  _objc_release(lVar1);
  func_0x0001005a52c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10680ae2c; end: 10680ae97; -[SCFriendsFeedNavigationServiceImpl _tabBarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680ae2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c291fc0(*(undefined8 *)(param_1 + _DAT_112751444),param_2,
                      &PTR____CFConstantStringClassReference_110f59bb8);
  lVar1 = param_1 + _DAT_11275142c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c198340();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c10b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentAnimated_fromUserInteract_112620690,0,1,0);
  return;
}



/* Entry: 10680ae98; end: 10680af2b; -[SCFriendsFeedNavigationServiceImpl _getSelectedImageWithName:withFilledButton:] */

void FUN_10680ae98(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10680af2c; end: 10680b137; -[SCFriendsFeedNavigationServiceImpl exposeFeatureScopeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680af2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar6 = (long)_DAT_112751440;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_initWeak(auStack_68,param_1);
      puVar2 = PTR_PTR_1126aeaf8;
      _objc_alloc(PTR_PTR_1126aeaf8);
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c0311a0(puVar2);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11275143c);
      lVar1 = param_1 + _DAT_112751430;
      _objc_loadWeakRetained(lVar1);
      lVar3 = param_1 + _DAT_112751434;
      _objc_loadWeakRetained(lVar3);
      lVar4 = param_1 + _DAT_112751438;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf24420(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      func_0x00010c0652e0(*(undefined8 *)(param_1 + _DAT_112751444));
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c2652e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09c7a0();
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  return;
}



/* Entry: 10680b138; end: 10680b17f;  */

void FUN_10680b138(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680b180; end: 10680b183;  */

void FUN_10680b180(void)

{
  return;
}



/* Entry: 10680b184; end: 10680b28f; -[SCFriendsFeedNavigationServiceImpl _attachViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5658);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar3 = (long)_DAT_11275147c;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c206ee0(uVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
  }
  lVar3 = (long)_DAT_112751480;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c1d83a0(uVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
  }
  lVar3 = (long)_DAT_112751488;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    func_0x00010c1b3840(uVar1);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  lVar3 = (long)_DAT_112751478;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    func_0x00010bf777a0(uVar1);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  lVar3 = (long)_DAT_112751484;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c1e0be0(uVar1);
    *(undefined8 *)(param_1 + lVar3) = 0;
  }
  func_0x00010bf0ca40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680b290; end: 10680b337; -[SCFriendsFeedNavigationServiceImpl navigationBarButtonItem:didChangeBadgeCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112751470);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10680b338; end: 10680b357; -[SCFriendsFeedNavigationServiceImpl deckContainerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b338(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112751454);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10680b358; end: 10680b367; -[SCFriendsFeedNavigationServiceImpl navigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10680b358(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112751458);
}



/* Entry: 10680b368; end: 10680b387; -[SCFriendsFeedNavigationServiceImpl operaPresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b368(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112751430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10680b388; end: 10680b4d3; -[SCFriendsFeedNavigationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b388(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112751430);
  _objc_storeStrong(param_1 + _DAT_112751458,0);
  _objc_destroyWeak(param_1 + _DAT_112751454);
  _objc_storeStrong(param_1 + _DAT_112751480,0);
  _objc_storeStrong(param_1 + _DAT_11275147c,0);
  _objc_storeStrong(param_1 + _DAT_112751470,0);
  _objc_storeStrong(param_1 + _DAT_112751468,0);
  _objc_storeStrong(param_1 + _DAT_112751474,0);
  _objc_storeStrong(param_1 + _DAT_11275146c,0);
  _objc_storeStrong(param_1 + _DAT_112751464,0);
  _objc_storeStrong(param_1 + _DAT_112751460,0);
  _objc_storeStrong(param_1 + _DAT_11275145c,0);
  _objc_storeStrong(param_1 + _DAT_112751444,0);
  _objc_storeStrong(param_1 + _DAT_112751440,0);
  _objc_storeStrong(param_1 + _DAT_11275143c,0);
  _objc_storeStrong(param_1 + _DAT_11275144c,0);
  _objc_storeStrong(param_1 + _DAT_112751448,0);
  _objc_destroyWeak(param_1 + _DAT_112751438);
  _objc_destroyWeak(param_1 + _DAT_112751434);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275142c);
  return;
}



/* Entry: 10680b4d4; end: 10680b643; -[SCMapNavigationServiceImpl showMapWithDestination:source:sourcePageContext:completion:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b4d4(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c24fc40(param_7,param_2,0x93);
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b5c58;
    func_0x00010bf6a9e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = (long)_DAT_1127514ac;
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126b5c50;
    _objc_alloc();
    func_0x00010c031b80();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127514b0);
    *(undefined **)(param_1 + _DAT_1127514b0) = puVar1;
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10680b644;
  puStack_68 = &UNK_110858070;
  lStack_60 = param_1;
  uStack_58 = param_6;
  _objc_retain(param_6);
  func_0x00010c10b1c0(param_1,param_2,puVar1,0,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10680b644; end: 10680b68f;  */

void FUN_10680b644(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010be844c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be84140(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680b680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10680b690; end: 10680b743; -[SCMapNavigationServiceImpl refreshLocalizedTabBarLabels] */

void FUN_10680b690(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c267ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c22f820();
  if ((param_1 & 1) == 0) {
    param_1 = uVar2;
    func_0x00010c216240(uVar2,param_2,0);
  }
  else {
    func_0x00010059bb6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar2,param_2,param_1);
    _objc_release(param_1);
  }
  func_0x00010059bb6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(uVar2,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10680b744; end: 10680b837; -[SCMapNavigationServiceImpl _tabBarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b744(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5f4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c291fc0(*(undefined8 *)(param_1 + _DAT_1127514a4),param_2,
                      &PTR____CFConstantStringClassReference_110e30ab8);
  lVar3 = param_1 + _DAT_11275148c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c198340();
  _objc_release(lVar3);
  func_0x00010c1dcc60(PTR_PTR_1126c55c0,param_2,&PTR____CFConstantStringClassReference_110e30ab8);
  puVar1 = PTR_PTR_1126b5c50;
  _objc_alloc();
  func_0x00010c031b80();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127514b0);
  *(undefined **)(param_1 + _DAT_1127514b0) = puVar1;
  _objc_release(uVar4);
  func_0x00010c10b1c0(param_1,param_2,0,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10680b838; end: 10680b8cb; -[SCMapNavigationServiceImpl _getSelectedImageWithName:withFilledButton:] */

void FUN_10680b838(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10680b8cc; end: 10680bb9f; -[SCMapNavigationServiceImpl exposeFeatureScopeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680b8cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar6 = (long)_DAT_112751498;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127514b4);
      *(undefined **)(param_1 + _DAT_1127514b4) = puVar2;
      _objc_release(uVar5);
      func_0x00010be844c0(param_1);
      lVar1 = (long)_DAT_1127514b0;
      if (*(long *)(param_1 + lVar1) == 0) {
        puVar2 = PTR_PTR_1126b5c50;
        _objc_alloc();
        func_0x00010c031b80();
        uVar5 = *(undefined8 *)(param_1 + lVar1);
        *(undefined **)(param_1 + lVar1) = puVar2;
        _objc_release(uVar5);
      }
      puVar2 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127514b8);
      *(undefined **)(param_1 + _DAT_1127514b8) = puVar2;
      _objc_release(uVar5);
      func_0x00010be84140(param_1);
      puVar2 = PTR_PTR_1126c3168;
      _objc_alloc();
      func_0x00010c05a5e0();
      _objc_initWeak(auStack_68,param_1);
      puVar3 = PTR_PTR_1126aeaf8;
      _objc_alloc(PTR_PTR_1126aeaf8);
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c0311a0(puVar3);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11275149c);
      lVar1 = param_1 + _DAT_112751490;
      _objc_loadWeakRetained(lVar1);
      lVar4 = param_1 + _DAT_112751494;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf22260(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar1);
      func_0x00010c0652e0(*(undefined8 *)(param_1 + _DAT_1127514a4));
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6));
      _objc_release(uVar5);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 10680bba0; end: 10680bbe7;  */

void FUN_10680bba0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0ca40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680bbe8; end: 10680bbfb;  */

void FUN_10680bbe8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680bbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 10680bbfc; end: 10680bc4b; -[SCMapNavigationServiceImpl _publishTargetDestinationIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680bbfc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127514ac;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127514b4));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10680bc4c; end: 10680bc9b; -[SCMapNavigationServiceImpl _publishMapAttributionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680bc4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127514b0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127514b8));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10680bc9c; end: 10680bcab; -[SCMapNavigationServiceImpl mapDestinationSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10680bc9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127514b4);
}



/* Entry: 10680bcac; end: 10680bceb; -[SCMapNavigationServiceImpl setMapDestinationSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680bcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127514b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10680bcec; end: 10680bdaf; -[SCMapNavigationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680bcec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127514b4,0);
  _objc_storeStrong(param_1 + _DAT_1127514b0,0);
  _objc_storeStrong(param_1 + _DAT_1127514ac,0);
  _objc_storeStrong(param_1 + _DAT_1127514a4,0);
  _objc_storeStrong(param_1 + _DAT_1127514b8,0);
  _objc_storeStrong(param_1 + _DAT_11275149c,0);
  _objc_storeStrong(param_1 + _DAT_112751498,0);
  _objc_storeStrong(param_1 + _DAT_1127514a8,0);
  _objc_destroyWeak(param_1 + _DAT_112751494);
  _objc_destroyWeak(param_1 + _DAT_112751490);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275148c);
  return;
}



/* Entry: 10680bdb0; end: 10680c23b; -[SCSearchSuggestionsNavigationServiceImpl initWithTabItemUiContainer:swipeViewContainer:navigationLogger:userInfoServices:appLifecycleManager:searchSuggestionsScopeExposer:searchSuggestionsScopeServices:purgeBehavior:preloadDelayInMilliseconds:circumstanceEngine:appStartExperimentReader:tabPresentationInterceptor:featureStartupEventBus:barStyle:preferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10680bdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_a0 = PTR_PTR_1126f35a8;
  puVar2 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithTabItemUiContainer_swipe_112531d88,param_3,param_4,
                      param_8,param_7,param_10,param_11,param_12,param_13,param_14,param_15,param_6,
                      param_16,param_17);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar2 + (long)_DAT_1127514bc,param_5);
    lVar11 = (long)_DAT_1127514c0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_8;
    _objc_release(uVar3);
    lVar11 = (long)_DAT_1127514c4;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_9;
    _objc_release(uVar3);
    lVar11 = (long)_DAT_1127514c8;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_12;
    _objc_release(uVar3);
    puVar4 = puVar2;
    func_0x00010c22f820();
    uVar3 = param_3;
    func_0x00010c0d6580(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0d6280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar12);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c0d6280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217300();
    _objc_release(uVar12);
    _objc_release(puVar5);
    uVar12 = param_3;
    func_0x00010c0d6280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010c27a720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar5 = PTR_PTR_1126ce598;
    _objc_opt_class(PTR_PTR_1126ce598);
    _objc_opt_isKindOfClass(uVar6,puVar5);
    _objc_release();
    iVar1 = (int)uVar6;
    func_0x000100456ca0();
    uVar12 = 0x3ff8000000000000;
    if (iVar1 == 0) {
      uVar12 = 0x3ff0000000000000;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110e60b98;
    func_0x00010059c4fc(uVar12,&PTR____CFConstantStringClassReference_110e60b98,
                        &PTR____CFConstantStringClassReference_110e60bb8,0x18a,0x189,param_16);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c56e0;
    _objc_alloc(PTR_PTR_1126c56e0);
    ppuVar8 = ppuVar7;
    func_0x00010bf698c0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar7;
    func_0x00010bfe31c0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf69020(ppuVar7);
    func_0x00010bfe30e0(ppuVar7);
    func_0x00010bfe30e0(ppuVar7);
    func_0x00010bf151e0(ppuVar7);
    uVar6 = uVar12;
    func_0x00010bf15200(ppuVar7);
    ppuVar10 = ppuVar7;
    uVar13 = uVar6;
    func_0x00010bf155e0();
    iVar1 = (int)ppuVar10;
    func_0x000100456ca0();
    uVar14 = 0x3ff8000000000000;
    if (iVar1 == 0) {
      uVar14 = 0x3ff0000000000000;
    }
    func_0x00010c01c0a0(uVar12,uVar6,uVar13,uVar14,puVar5);
    func_0x00010c222380(uVar3);
    _objc_release(puVar5);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    func_0x00010c1a8740(uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010c216240(uVar3);
    }
    else {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e60bd8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e60bd8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(uVar3);
      _objc_release(ppuVar8);
    }
    ppuVar8 = &PTR____CFConstantStringClassReference_110e60bd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e60bd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(uVar3);
    _objc_release(ppuVar8);
    func_0x00010c2121c0(uVar3);
    func_0x00010c160fc0(uVar3);
    _objc_release(ppuVar7);
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10680c23c; end: 10680c2df; -[SCSearchSuggestionsNavigationServiceImpl showSearchSuggestions:] */

void FUN_10680c23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10680c2e0;
  puStack_40 = &UNK_110842508;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c10b1c0(param_1,param_2,puVar1,0,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10680c2e0; end: 10680c2f7;  */

void FUN_10680c2e0(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010680c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10680c2f8; end: 10680c38f; -[SCSearchSuggestionsNavigationServiceImpl refreshLocalizedTabBarLabels] */

void FUN_10680c2f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  func_0x00010c267ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d6580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e60bd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e60bd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22f820();
  func_0x00010c216240(uVar1);
  func_0x00010c161020(uVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10680c390; end: 10680c3df; -[SCSearchSuggestionsNavigationServiceImpl _tabBarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680c390(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127514bc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c198340();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c10b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentAnimated_fromUserInteract_112620690,0,1,0);
  return;
}



/* Entry: 10680c3e0; end: 10680c473; -[SCSearchSuggestionsNavigationServiceImpl _getSelectedImageWithName:withFilledButton:] */

void FUN_10680c3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10680c474; end: 10680c5c7; -[SCSearchSuggestionsNavigationServiceImpl exposeFeatureScopeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680c474(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_1127514c0;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0311a0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127514c4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf23b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10680c5c8; end: 10680c60f;  */

void FUN_10680c5c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0ca40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680c610; end: 10680c613;  */

void FUN_10680c610(void)

{
  return;
}


