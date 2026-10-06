/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10653f400; end: 10653f4eb; -[SCChatViewControllerV3 _tapToLoadMediaViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653f400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  _objc_retain(param_3);
  func_0x00010c069180(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c6fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c074920(param_3);
  _objc_release(param_3);
  func_0x00010c09b920(uVar5,param_2,uVar1,uVar2,uVar3,uVar4,4,2,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10653f4ec; end: 10653f4fb; -[SCChatViewControllerV3 scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653f4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2e8),PTR_s_scrollViewDidScroll_1126324e0);
  return;
}



/* Entry: 10653f4fc; end: 10653f50b; -[SCChatViewControllerV3 scrollViewDidEndScrollingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653f4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befe690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2e8),PTR_s_affordanceScrollDidEnd_11259d348);
  return;
}



/* Entry: 10653f50c; end: 10653f597; -[SCChatViewControllerV3 scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653f50c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11274a2e8);
  _objc_retain(param_5);
  func_0x00010befe680(uVar1);
  func_0x00010c195460(*(undefined8 *)(param_3 + _DAT_11274a2fc),param_4,0);
  func_0x00010bf4cdc0(param_5);
  *(undefined8 *)(param_3 + _DAT_11274a36c) = param_2;
  func_0x00010befda00(param_5);
  _objc_release(param_5);
  func_0x00010bf50280(*(undefined8 *)(param_3 + _DAT_11274a1ec));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10653f598; end: 10653f647; -[SCChatViewControllerV3 scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653f598(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf4cdc0(param_5);
  func_0x00010bf50280(*(undefined8 *)(param_3 + _DAT_11274a1ec));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = *(long *)(param_3 + _DAT_11274a128);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_11274a36c);
    lVar1 = param_3;
    func_0x00010bfc8720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e40(uVar3,param_2,lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11274a2fc),PTR_s_setEnabled__112642f38,1);
  return;
}



/* Entry: 10653f648; end: 10653f94b; -[SCChatViewControllerV3 handleTapOnHeaderWithAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653f648(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11274a1ec;
  if (*(long *)(param_1 + lVar9) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274a344) = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf368c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf80200();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bf50940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11274a2ac);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a2b0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    uVar6 = uVar2;
    FUN_10653f94c(uVar2,uVar8,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf5b640();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + lVar9);
    func_0x00010bf50940();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf2be20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
      func_0x00010bf50560(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126cb6f8;
      uVar2 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010bf50280(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08bc20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar7);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
    _objc_retain(uVar8);
    func_0x00010c0be840(param_3);
    _objc_release(uVar8);
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10653f94c; end: 10653fa27;  */

void FUN_10653f94c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else if ((param_3 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010bef4a60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c15ed20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfca980(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10653fa28; end: 10653faa7;  */

void FUN_10653fa28(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c08fa60();
  func_0x00010be7f1e0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10653faa8; end: 10653fab7;  */

void FUN_10653faa8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentGroupUnifiedProfileWithG_11257c888,
             param_2,param_3);
  return;
}



/* Entry: 10653fab8; end: 10653fb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653fab8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c074920();
  func_0x00010be47c00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10653fb3c; end: 10653fb6b;  */

void FUN_10653fb3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchMerlinBioPage_11256f8b8);
  return;
}



/* Entry: 10653fb6c; end: 10653fc6f; -[SCChatViewControllerV3 _launchMyAIModelSelectionPaywall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653fb6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11274a1e0;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar6 = (long)_DAT_11274a1dc;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar3 = PTR_PTR_1126b1da8;
      _objc_alloc(PTR_PTR_1126b1da8);
      func_0x00010c04abe0();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf23e60(uVar4,param_2,puVar2,puVar3,param_1,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6),param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 10653fc70; end: 10653fd1f; -[SCChatViewControllerV3 _launchMerlinBioPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653fc70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a168;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010be02d80();
    puVar1 = PTR_PTR_1126b3548;
    _objc_alloc(PTR_PTR_1126b3548);
    func_0x00010c038a00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf21f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + _DAT_11274a370,uVar2);
    func_0x00010c10eda0(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10653fd20; end: 10653ffd3; -[SCChatViewControllerV3 _launchSaturnWithSaturnUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653fd20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb700;
  _objc_alloc_init(PTR_PTR_1126cb700);
  func_0x00010c1d8800();
  lVar11 = (long)_DAT_11274a1ec;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c122e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212620(puVar1);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b3d48;
  _objc_alloc_init();
  uVar6 = *(ulong *)(param_1 + _DAT_11274a2d0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c07cf40();
  _objc_release(uVar6);
  if ((uVar7 & 1) == 0) {
    func_0x00010c0e9740(puVar5);
  }
  else {
    puVar8 = puVar5;
    func_0x00010c149bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bef0700();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c122da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(puVar8);
    _objc_retain(lVar3);
    _objc_retain(uVar9);
    _objc_retain(uVar2);
    func_0x00010c0e9760(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(lVar3);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(lVar3);
    _objc_release(puVar8);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10653ffd4; end: 10654003b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653ffd4(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11274a2d8);
    func_0x00010bf07b60();
    if (lVar1 == 0) {
      func_0x00010bde9be0(param_1);
      func_0x00010be48300(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654003c; end: 1065400c3; -[SCChatViewControllerV3 _copySaturnLinkForDeferredOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654003c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a2d0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07cf20();
  _objc_release(uVar1);
  if ((param_3 != 0) && ((int)uVar2 != 0)) {
    puVar3 = PTR_PTR_1126b3d48;
    _objc_alloc_init(PTR_PTR_1126b3d48);
    func_0x00010bf52080();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065400c4; end: 106540287; -[SCChatViewControllerV3 _launchSaturnUpsellTrayForConversationId:recipientUserId:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065400c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = *(long *)(param_1 + _DAT_11274a2d4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106540288;
    puStack_68 = &UNK_110848218;
    puVar3 = auStack_50;
    _objc_copyWeak(puVar3,auStack_48);
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(uStack_58);
    uVar2 = uStack_60;
  }
  else {
    puVar3 = auStack_88;
    _objc_copyWeak(puVar3,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bfaa5a0(lVar1);
    _objc_release(param_5);
    uVar2 = param_3;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar3);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106540288; end: 1065402bf;  */

void FUN_106540288(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065402c0; end: 1065403ab;  */

void FUN_1065402c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1065403ac;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1065403ac; end: 1065403e3;  */

void FUN_1065403ac(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065403e4; end: 106540653; -[SCChatViewControllerV3 _presentSaturnUpsellTrayWithSocialContext:forConversationId:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065403e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (*(char *)(param_1 + _DAT_11274a34c) == '\x01') {
    _objc_retain(param_4);
    lVar2 = param_1;
    func_0x00010bef0700();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c0720c0();
    _objc_release(param_4);
    _objc_release(lVar2);
    if ((int)lVar9 != 0) {
      lVar9 = (long)_DAT_11274a2cc;
      lVar2 = *(long *)(param_1 + lVar9);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar9));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar4 = param_5;
      func_0x00010901e6c8(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b3d58;
      _objc_alloc(PTR_PTR_1126b3d58);
      lVar2 = param_3;
      func_0x00010bfb8520(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bfb7d00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c154bc0();
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = param_3;
        func_0x00010c276640();
      }
      func_0x00010c056c20(puVar5,param_2,puVar3,uVar4,5,4,0,lVar2,lVar6,lVar7,lVar8,0,0,0);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if (param_3 == 0) {
        func_0x00010c2066c0(puVar5,param_2,PTR____NSArray0__struct_11034ab48);
        func_0x00010c2066e0(puVar5,param_2,puVar1);
      }
      else {
        lVar2 = param_3;
        func_0x00010c2743e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2066c0(puVar5,param_2,lVar2);
        _objc_release(lVar2);
        lVar2 = param_3;
        func_0x00010c274400(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2066e0(puVar5,param_2,lVar2);
        _objc_release(lVar2);
      }
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar9),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106540654; end: 1065406ab; -[SCChatViewControllerV3 saturnUpsellTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106540654(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a2cc;
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



/* Entry: 1065406ac; end: 106540823; -[SCChatViewControllerV3 _launchStreakMilestoneSnapWithPoseId:myAvatarId:friendAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065406ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11274a16c;
  if ((*(long *)(param_1 + lVar5) != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + _DAT_11274a1ec);
    func_0x00010c122da0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11274a170);
      func_0x00010bf24540(uVar3,param_2,puVar2,lVar1,param_4,param_5,0,0,param_3,0,
                          &PTR____CFConstantStringClassReference_110e53978,0,
                          &PTR____CFConstantStringClassReference_110e53998,0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106540824; end: 106540aa7; -[SCChatViewControllerV3 _launchMapWithUserIds:friendViewSource:mapOpenSource:grapheneSource:pageContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106540824(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf529e0();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010bf529e0();
    puVar4 = PTR_PTR_1126b5c58;
    if (ppuVar1 == (undefined **)0x1) {
      ppuVar1 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb92a0(puVar4,param_2,ppuVar1,0,0,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar2 = param_1;
      func_0x00010bfdef60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bfe0000();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar1 = ppuVar3;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      puVar4 = PTR_PTR_1126b5c58;
      func_0x00010bf61620(PTR_PTR_1126b5c58,param_2,param_3,ppuVar1,8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar1);
    puVar5 = PTR_PTR_1126b5c50;
    _objc_alloc(PTR_PTR_1126b5c50);
    func_0x00010c031b80();
    ppuVar1 = param_3;
    func_0x00010c0d3c80(param_3);
    uVar6 = *(undefined8 *)((long)param_1 + (long)_DAT_11274a1ec);
    func_0x00010bf60a00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(ppuVar1,param_2,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126c3168;
    _objc_alloc(PTR_PTR_1126c3168);
    func_0x00010c05a5e0();
    puVar8 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar9 = PTR_PTR_1126c69f8;
    _objc_alloc(PTR_PTR_1126c69f8);
    func_0x00010c00bb00();
    uVar10 = *(undefined8 *)((long)param_1 + (long)_DAT_11274a2c8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106540aa8; end: 106540b3b; -[SCChatViewControllerV3 _presentProfileForChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106540aa8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a1ec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c074920();
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + lVar2);
    func_0x00010c122e00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7f1e0(param_1,param_2,0,lVar2,0xffffffffcf5d0adf,0,0x2b,0);
  }
  else {
    lVar2 = param_1;
    func_0x00010bef08e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7bba0(param_1,param_2,lVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106540b3c; end: 106540be3; -[SCChatViewControllerV3 _cleanupUnifiedProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106540b3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a09c);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a174);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106540be4; end: 106540c07; -[SCChatViewControllerV3 headerTextViewTextEditingDidEnd] */

void FUN_106540be4(undefined8 param_1)

{
  func_0x00010bed8f60();
                    /* WARNING: Could not recover jumptable at 0x00010be08cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardAsynchronouslyFor_11255fcd8);
  return;
}



/* Entry: 106540c08; end: 106540c37; -[SCChatViewControllerV3 headerTextViewTextEditingDidBegin] */

void FUN_106540c08(undefined8 param_1)

{
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106540c38; end: 106540dbb; -[SCChatViewControllerV3 _updateGroupNameInHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106540c38(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  uVar3 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfe0000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237b00();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if (uVar3 != 0) {
    lVar5 = (long)_DAT_11274a1ec;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfce400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + (long)_DAT_11274a0bc);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf50280(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106540dbc;
      puStack_50 = &UNK_11092a380;
      uStack_48 = param_1;
      func_0x00010c286340(uVar3,param_2,uVar4,uVar1,&puStack_68);
      _objc_release(uVar4);
      goto LAB_106540d98;
    }
  }
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128d20();
  uVar3 = param_1;
LAB_106540d98:
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 106540dbc; end: 106540f23;  */

void FUN_106540dbc(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106540e80;
  puStack_58 = &UNK_110858b70;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_5;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 106540f24; end: 1065410fb; -[SCChatViewControllerV3 handleAddFriendButtonTappedWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106540f24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11274a1ec);
  func_0x00010c122da0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_3 == 0) goto LAB_106541070;
    puVar3 = (undefined *)0x0;
    func_0x00010c2923e0(0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar3,0);
  }
  else {
    puVar3 = PTR_PTR_1126ae5c0;
    func_0x00010befca80(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0c4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    _objc_retain(param_3);
    func_0x00010bef8a80(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  _objc_release(puVar3);
LAB_106541070:
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1065410fc; end: 1065413e3; -[SCChatViewControllerV3 handleTapOnStoryWithStoryId:avatarBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065410fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11274a1ec;
  lVar8 = *(long *)(param_1 + lVar10);
  _objc_retain(param_4);
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar5 == 0) {
    lVar10 = *(long *)(param_1 + _DAT_11274a184);
    func_0x00010c269d40(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010bfba060();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x000100504554();
    _objc_release(lVar5);
    _objc_release(lVar10);
    lVar5 = *(long *)(param_1 + _DAT_11274a29c);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2d00();
  }
  else {
    lVar8 = *(long *)(param_1 + lVar10);
    func_0x00010c122da0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar10);
    func_0x00010bf50940();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11274a2ac);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a2b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf1f3c0();
    lVar3 = lVar1;
    FUN_10653f94c(lVar1,uVar9,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5b640();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    lVar3 = lVar5;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = lVar8;
      func_0x00010c2923e0(lVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar5);
      lVar3 = lVar5;
    }
    uVar6 = *(undefined8 *)(param_1 + _DAT_11274a29c);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2da0();
    _objc_release(param_4);
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010bf50560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cb6f8;
    uVar9 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf50280(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2693e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar2);
    param_4 = lVar3;
  }
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(lVar8);
  func_0x00010be64660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065413e4; end: 1065413eb;  */

void FUN_1065413e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 1065413ec; end: 10654141f; -[SCChatViewControllerV3 headerUiContainer] */

void FUN_1065413ec(void)

{
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106541420; end: 106541477; -[SCChatViewControllerV3 headerDidChangeHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541420(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x00010c217440(*(undefined8 *)(param_4 + _DAT_11274a2e8));
  lVar1 = (long)_DAT_11274a2f4;
  func_0x00010c1520e0(*(undefined8 *)(param_4 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1f7bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_3,0,*(undefined8 *)(param_4 + lVar1),
             PTR_s_setScrollIndicatorInsets__11265b910);
  return;
}



/* Entry: 106541478; end: 106541767; -[SCChatViewControllerV3 headerDidRenderSubtextWithType:isAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541478(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2950;
  func_0x00010bf367a0(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e539b8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274a374);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar4);
  lVar9 = (long)_DAT_11274a1ec;
  if (param_4 == 0) {
LAB_1065415e8:
    lVar5 = *(long *)(param_1 + lVar9);
    func_0x00010bf37a40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c260ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c260d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    _objc_release(lVar5);
    if (lVar6 == 0) goto LAB_106541698;
    lVar7 = *(long *)(param_1 + lVar9);
    func_0x00010bf37a40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c260ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = *(long *)(param_1 + lVar9);
    func_0x00010bf37a40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf03860();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c260d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    _objc_release(lVar5);
    if (lVar6 == 0) goto LAB_1065415e8;
    lVar7 = *(long *)(param_1 + lVar9);
    func_0x00010bf37a40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf03860();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = lVar9;
  func_0x00010c260d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar7);
  if (lVar6 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11274a18c),param_2,lVar6);
    _objc_release(lVar6);
  }
LAB_106541698:
  uVar8 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e52f98);
  if ((int)uVar8 != 0) {
    *(undefined1 *)(param_1 + _DAT_11274a32c) = 1;
  }
  uVar8 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e99af8);
  if ((int)uVar8 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274a1c4),param_2,
                        PTR____kCFBooleanTrue_11034ab68);
  }
  lVar9 = (long)_DAT_11274a338;
  if (((*(byte *)(param_1 + lVar9) & 1) == 0) &&
     (uVar8 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e99a38),
     (int)uVar8 != 0)) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11274a1d8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2720();
    _objc_release(uVar8);
    *(undefined1 *)(param_1 + lVar9) = 1;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106541768; end: 106541a4b; -[SCChatViewControllerV3 willDisplayBanner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541768(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010bf36720(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x0001070712d8(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar5);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11274a374);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (param_4 < 3) {
    if (param_4 == 1) {
      puVar1 = PTR_PTR_1126c2a70;
      _objc_opt_new(PTR_PTR_1126c2a70);
      func_0x00010c1ed260();
      func_0x00010bece1c0(param_2);
      _objc_release(puVar1);
    }
    else if (param_4 == 2) {
LAB_1065418ac:
      lVar5 = (long)_DAT_11274a378;
      if (*(long *)(param_2 + lVar5) == 0) {
        puVar1 = PTR_PTR_1126ae810;
        _objc_alloc_init();
        uVar4 = *(undefined8 *)(param_2 + lVar5);
        *(undefined **)(param_2 + lVar5) = puVar1;
        _objc_release(uVar4);
        _objc_initWeak(auStack_48,param_2);
        uVar4 = *(undefined8 *)(param_2 + _DAT_11274a27c);
        _objc_copyWeak(auStack_50,auStack_48);
        func_0x00010c25ff60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      goto LAB_106541a10;
    }
  }
  else if (param_4 == 3) {
    lVar5 = (long)_DAT_11274a334;
    if (*(long *)(param_2 + lVar5) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3c0();
      *(long *)(param_2 + lVar5) = (long)(param_1 * 1000.0);
      _objc_release(puVar1);
    }
    *(undefined1 *)(param_2 + _DAT_11274a330) = 1;
  }
  else if (param_4 == 4) {
    lVar5 = (long)_DAT_11274a340;
    if (*(long *)(param_2 + lVar5) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3c0();
      *(long *)(param_2 + lVar5) = (long)(param_1 * 1000.0);
      _objc_release(puVar1);
    }
    *(undefined1 *)(param_2 + _DAT_11274a33c) = 1;
    goto LAB_1065418ac;
  }
  uVar4 = *(undefined8 *)(param_2 + _DAT_11274a378);
  *(undefined8 *)(param_2 + _DAT_11274a378) = 0;
  _objc_release(uVar4);
LAB_106541a10:
  _objc_release(puVar2);
  return;
}



/* Entry: 106541a4c; end: 106541b37;  */

void FUN_106541a4c(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [5];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf10fa0();
    if (lVar1 == 2) {
      puVar2 = auStack_58;
      pcVar3 = FUN_106541b38;
    }
    else {
      lVar1 = param_2;
      func_0x00010bf10fa0();
      puVar2 = auStack_58;
      pcVar3 = FUN_106541b38;
      if (lVar1 != 4) {
        lVar1 = param_2;
        func_0x00010bf10fa0();
        if (lVar1 != 3) {
          puVar2 = auStack_80;
        }
        if (lVar1 != 3) {
          pcVar3 = (code *)0x106541b6c;
        }
      }
    }
    *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puVar2[1] = 0xc2000000;
    puVar2[2] = pcVar3;
    puVar2[3] = &UNK_110842e18;
    puVar2[4] = param_1;
    func_0x0001000d76cc("APPSTORE",puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106541b38; end: 106541b9f;  */

void FUN_106541b38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106541ba0; end: 106541ccf; -[SCChatViewControllerV3 didTapBanner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541ba0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010bf36740(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x0001070712d8(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e539d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274a374);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (param_3 < 3) {
    if (param_3 == 1) {
      func_0x00010bebb420(param_1);
    }
    else if (param_3 == 2) {
      func_0x00010c14d6a0(*(undefined8 *)(param_1 + _DAT_11274a0a8));
    }
  }
  else if (param_3 == 3) {
    func_0x00010be4f8c0(param_1);
  }
  else if (param_3 == 4) {
    func_0x00010bdcf3e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106541cd0; end: 106541e97; -[SCChatViewControllerV3 didTapDismissBanner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541cd0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar3 = PTR_PTR_1126b0cd8;
  if (param_3 == 3) {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106541ea0;
    puStack_b0 = &UNK_110842e18;
    lStack_a8 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_c8);
    func_0x00010be892e0(param_1);
  }
  else if (param_3 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
    func_0x00010bf50280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106541e98;
    puStack_60 = &UNK_110842e18;
    _objc_retain(puVar3);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x106541e9c;
    puStack_88 = &UNK_110855e40;
    puStack_80 = puVar3;
    puStack_58 = puVar3;
    _objc_retain(puVar3);
    func_0x00010c04f4c0(puVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274a1d0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84620();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 106541e98; end: 106541eb3;  */

void FUN_106541e98(void)

{
  return;
}



/* Entry: 106541eb4; end: 106541f57; -[SCChatViewControllerV3 _registerChatLocationUpsellBannerWasShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541eb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
  func_0x00010c122da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132920();
  _objc_release(uVar1);
  func_0x00010be5a340(param_1,param_2,uVar2,6,*(undefined8 *)(param_1 + _DAT_11274a334));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106541f58; end: 106541ff7; -[SCChatViewControllerV3 _registerChatLocationUpsellBannerActionWasDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541f58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
  func_0x00010c122da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132920();
  _objc_release(uVar1);
  func_0x00010be5a320(param_1,param_2,4,*(undefined8 *)(param_1 + _DAT_11274a334));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106541ff8; end: 10654209b; -[SCChatViewControllerV3 _registerChatArrivalNotificationUpsellBannerWasShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106541ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
  func_0x00010c122da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132940();
  _objc_release(uVar1);
  func_0x00010be5a340(param_1,param_2,uVar2,10,*(undefined8 *)(param_1 + _DAT_11274a340));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10654209c; end: 10654226b; -[SCChatViewControllerV3 _locationUpsellBannerWasTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654209c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10654226c;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  func_0x00010be5a320(param_1);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126c59a0;
  _objc_alloc(PTR_PTR_1126c59a0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
  func_0x00010c122da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0583e0(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a1a4);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11274a380;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar4;
  _objc_release(uVar6);
  _objc_release(uVar3);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe22d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_11274a37c),
             PTR_s_hideLocationUpsellBannerIfShown_1125d6270);
  return;
}



/* Entry: 10654226c; end: 10654227f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654226c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe22d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a37c),
             PTR_s_hideLocationUpsellBannerIfShown_1125d6270);
  return;
}



/* Entry: 106542280; end: 1065422bb; -[SCChatViewControllerV3 _arrivalNotificationUpsellBannerWasTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542280(long param_1,undefined8 param_2)

{
  func_0x00010be5a320(param_1,param_2,2,*(undefined8 *)(param_1 + _DAT_11274a340));
                    /* WARNING: Could not recover jumptable at 0x00010c14d6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a0a8),PTR_s_sc_openNotificationSettings_112630fc8);
  return;
}



/* Entry: 1065422bc; end: 106542373; -[SCChatViewControllerV3 _logUpsellBannerWasSeenForFriendId:bannerType:bannerSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065422bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c5f40;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c16f140();
  func_0x00010c16f180(puVar1,param_2,param_4);
  func_0x00010c212400(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c206c40(puVar1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a384);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106542374; end: 1065423f3; -[SCChatViewControllerV3 _logUpsellBannerAction:bannerSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cb708;
  _objc_opt_new(PTR_PTR_1126cb708);
  func_0x00010c16f140();
  func_0x00010c161fe0(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a384);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065423f4; end: 10654240b; -[SCChatViewControllerV3 shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065423f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a380);
  *(undefined8 *)(param_1 + _DAT_11274a380) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654240c; end: 106542413; -[SCChatViewControllerV3 playbackPresenterDidTearDown:playbackScope:] */

void FUN_10654240c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be028b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissContentPlaybackScope__11255e3c8,param_4);
  return;
}



/* Entry: 106542414; end: 106542467; -[SCChatViewControllerV3 _dismissContentPlaybackScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542414(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be6dce0();
  *(undefined1 *)(param_1 + _DAT_11274a388) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a29c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ddd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106542468; end: 1065426af; -[SCChatViewControllerV3 playbackPresenter:didBeginPlayingStory:playbackScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542468(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c2118;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10653ac28;
  uStack_50 = 0x10653ac38;
  uStack_48 = 0;
  func_0x00010c0bdf40(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274a19c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9c0();
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065426b0; end: 10654286f;  */

void FUN_1065426b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106542870; end: 106542873;  */

void FUN_106542870(void)

{
  return;
}



/* Entry: 106542874; end: 106542877; -[SCChatViewControllerV3 playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_106542874(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresenterWillAppear_112579100);
  return;
}



/* Entry: 106542878; end: 10654288b; -[SCChatViewControllerV3 playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542878(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a388) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be6dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresenterDidAppear_1125790d0);
  return;
}



/* Entry: 10654288c; end: 10654289b; -[SCChatViewControllerV3 playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654288c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274a388) = 0;
  return;
}



/* Entry: 10654289c; end: 1065428cb; -[SCChatViewControllerV3 willDisplayAlertView] */

void FUN_10654289c(undefined8 param_1)

{
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065428cc; end: 1065428cf; -[SCChatViewControllerV3 didDismissAlertView] */

void FUN_1065428cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessary_11255fce8);
  return;
}



/* Entry: 1065428d0; end: 106542a5f; -[SCChatViewControllerV3 gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1065428d0(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  double dVar5;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074200();
  _objc_retain(0);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_5 != *(ulong *)(param_3 + (long)_DAT_11274a300)) {
      bVar4 = false;
      goto LAB_106542a30;
    }
    func_0x00010bf50280(*(undefined8 *)(param_3 + (long)_DAT_11274a1ec));
    _objc_retainAutoreleasedReturnValue();
    bVar4 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar1 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar3);
    if ((uVar1 & 1) == 0) {
      bVar4 = true;
      goto LAB_106542a30;
    }
    _objc_retain(param_5);
    uVar1 = param_3;
    func_0x00010c10ac60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5);
    dVar5 = param_2;
    _objc_release(uVar1);
    if (0.0 <= param_2) {
      bVar4 = false;
    }
    else {
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5);
      _objc_release(param_3);
      bVar4 = false;
      if (0.0 < param_1) {
        bVar4 = ABS(dVar5) < ABS(param_1);
      }
    }
  }
  _objc_release();
LAB_106542a30:
  _objc_release(0);
  _objc_release(param_5);
  return bVar4;
}



/* Entry: 106542a60; end: 106542b13; -[SCChatViewControllerV3 _shouldActivePlaybackConfigurationIgnoreScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106542a60(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106542b18;
  puStack_50 = &UNK_11085ee90;
  puStack_38 = puStack_48;
  func_0x00010c0bdfa0(*(undefined8 *)(param_1 + _DAT_11274a38c),param_2,
                      &PTR___NSConcreteGlobalBlock_11092a4b0,&puStack_68);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106542b14; end: 106542b3b;  */

void FUN_106542b14(void)

{
  return;
}



/* Entry: 106542b3c; end: 106542b3f; -[SCChatViewControllerV3 _shouldPresentingOperaContentIgnoreScreenshot] */

void FUN_106542b3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPlayingSnap_1125fc338);
  return;
}



/* Entry: 106542b40; end: 106542bcf; -[SCChatViewControllerV3 _shouldNotifyParticipantOfChatScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106542b40(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + (long)_DAT_11274a1ec) != 0) {
    if (((*(byte *)(param_1 + (long)_DAT_11274a390) & 1) == 0) &&
       (((*(char *)(param_1 + (long)_DAT_11274a394) != '\x01' ||
         (uVar2 = param_1, func_0x00010beb24a0(), (uVar2 & 1) == 0)) &&
        (uVar2 = param_1, func_0x00010c07a500(), (uVar2 & 1) == 0)))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11274a0a8);
      func_0x00010bf07b60(lVar3);
      bVar1 = lVar3 != 2;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 106542bd0; end: 106542c6b; -[SCChatViewControllerV3 _handleScreenCaptureWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542bd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010beb49a0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010c069180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a1ec);
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50380(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf726b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didAttemptToSendMessage_1125ba350);
    return;
  }
  return;
}



/* Entry: 106542c6c; end: 106542ca3; -[SCChatViewControllerV3 userDidTakeScreenshot] */

void FUN_106542c6c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bfe6840();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleScreenCaptureWithType__112569808,0);
  return;
}



/* Entry: 106542ca4; end: 106542d2b; -[SCChatViewControllerV3 userDidScreenRecord] */

void FUN_106542ca4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bfe6820();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf28300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c151340();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar3 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be2f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__handleScreenCaptureWithType__112569808,1);
      return;
    }
  }
  return;
}



/* Entry: 106542d2c; end: 106542dc3; -[SCChatViewControllerV3 _messageViewModelForCell:] */

void FUN_106542d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be5ffa0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106542dc4; end: 106542e2b; -[SCChatViewControllerV3 _updatedViewModelForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542dc4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11274a1ec);
  func_0x00010c29d580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106542e2c; end: 106542e93; -[SCChatViewControllerV3 _messageViewModelForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542e2c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11274a1ec);
  func_0x00010c29d580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb4d0;
  _objc_opt_class(PTR_PTR_1126cb4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106542e94; end: 106542ea3; -[SCChatViewControllerV3 addLifeCycleListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a17c),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106542ea4; end: 106542eb3; -[SCChatViewControllerV3 removeLifeCycleListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a17c),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106542eb4; end: 106542ec7; -[SCChatViewControllerV3 disableTableViewInteractionBeforeChatNotesRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2f4),PTR_s_setUserInteractionEnabled__112665468,0)
  ;
  return;
}



/* Entry: 106542ec8; end: 106542edb; -[SCChatViewControllerV3 enableTableViewInteractionAfterChatNotesRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2f4),PTR_s_setUserInteractionEnabled__112665468,1)
  ;
  return;
}



/* Entry: 106542edc; end: 106542f57; -[SCChatViewControllerV3 didRequestRetryFailedMessage:] */

void FUN_106542edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be96ea0(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106542f58; end: 106542fcf; -[SCChatViewControllerV3 _retryFailedMessageWithMessageId:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542f58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c069180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f680();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106542fd0; end: 1065430a7; -[SCChatViewControllerV3 didSelectPreserveMessageForMessageId:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106542fd0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11274a1ec;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c074920();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_106543088;
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010c069180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b8c0();
    _objc_release(uVar3);
  }
LAB_106543088:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065430a8; end: 10654312f; -[SCChatViewControllerV3 didShowCompleteDisplayForMessageId:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065430a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be426c0(param_1,param_2,param_4);
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010c069180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b800();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106543130; end: 1065431b7; -[SCChatViewControllerV3 didShowPendingDisplayForMessageId:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be426c0(param_1,param_2,param_4);
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
    func_0x00010c069180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b8c0();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065431b8; end: 106543307; -[SCChatViewControllerV3 didConsumeMediaForId:analyticsMessageId:conversationId:] */

void FUN_1065431b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106543308;
    puStack_70 = &UNK_110850cf8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_5);
    lStack_60 = param_5;
    _objc_retain(param_4);
    lStack_58 = param_4;
    func_0x00010007380c(uVar1,&puStack_88);
    _objc_release(uVar1);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106543308; end: 106543407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106543308(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126c6bc0;
    _objc_opt_new();
    func_0x00010c1c4880();
    uVar3 = *(undefined8 *)(uVar1 + (long)_DAT_11274a1e4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_3 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa380(uVar3,param_2,param_3,uVar6,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11274a1ec;
  uVar5 = *(ulong *)(uVar1 + lVar9);
  if ((uVar5 != 0) && (func_0x00010c074920(), (uVar5 & 1) == 0)) {
    uVar5 = *(ulong *)(uVar1 + (long)_DAT_11274a2f4);
    func_0x00010c074c20();
    if ((uVar5 & 1) == 0) {
      uVar3 = *(undefined8 *)(uVar1 + lVar9);
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar5 = uVar1;
        func_0x00010bef0700();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0720c0();
        if ((int)uVar7 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*(byte *)(uVar1 + (long)_DAT_11274a34c);
        }
        _objc_release(uVar5);
      }
      _objc_release(uVar3);
      goto LAB_106543458;
    }
  }
  uVar8 = 0;
LAB_106543458:
  _objc_release(param_3);
  return (ulong)(uVar8 & 1);
}



/* Entry: 106543408; end: 1065434e3; -[SCChatViewControllerV3 _isOneOnOneConversationActiveForConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106543408(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11274a1ec;
  uVar1 = *(ulong *)(param_1 + lVar6);
  if ((uVar1 != 0) && (func_0x00010c074920(), (uVar1 & 1) == 0)) {
    uVar1 = *(ulong *)(param_1 + _DAT_11274a2f4);
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((int)uVar3 == 0) {
        bVar5 = 0;
      }
      else {
        lVar6 = param_1;
        func_0x00010bef0700();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        func_0x00010c0720c0();
        if ((int)lVar4 == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = *(byte *)(param_1 + _DAT_11274a34c);
        }
        _objc_release(lVar6);
      }
      _objc_release(uVar2);
      goto LAB_106543458;
    }
  }
  bVar5 = 0;
LAB_106543458:
  _objc_release(param_3);
  return bVar5 & 1;
}



/* Entry: 1065434e4; end: 106543513; -[SCChatViewControllerV3 mediaWillGoFullscreen] */

void FUN_1065434e4(undefined8 param_1)

{
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106543514; end: 106543517; -[SCChatViewControllerV3 mediaDidGoFullscreen:] */

void FUN_106543514(void)

{
  return;
}



/* Entry: 106543518; end: 10654351b; -[SCChatViewControllerV3 mediaDidDismissFullscreen] */

void FUN_106543518(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessaryAsynch_11255fcf8);
  return;
}



/* Entry: 10654351c; end: 1065435ef; -[SCChatViewControllerV3 isPlayingSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10654351c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1065435f4;
  puStack_50 = &UNK_11085ee90;
  puStack_38 = puStack_48;
  func_0x00010c0bdfa0(*(undefined8 *)(param_1 + _DAT_11274a38c),param_2,
                      &PTR___NSConcreteGlobalBlock_11092a4d0,&puStack_68);
  if (*(char *)(param_1 + _DAT_11274a394) == '\x01') {
    bVar1 = *(byte *)(puStack_38 + 3);
  }
  else {
    bVar1 = 0;
  }
  __Block_object_dispose(&uStack_40,8);
  return bVar1 & 1;
}



/* Entry: 1065435f0; end: 10654360b;  */

void FUN_1065435f0(void)

{
  return;
}



/* Entry: 10654360c; end: 10654366b; -[SCChatViewControllerV3 isPlayingStoriesFromChatHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10654360c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a29c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c101240();
  if ((int)uVar2 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(param_1 + _DAT_11274a388);
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 10654366c; end: 10654366f; -[SCChatViewControllerV3 mediaBoundingFrame] */

void FUN_10654366c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__screenFrameExcludingHeader_1125848b8);
  return;
}



/* Entry: 106543670; end: 10654376b; -[SCChatViewControllerV3 _screenFrameExcludingHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106543670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + _DAT_11274a2f4);
  func_0x00010bf20c00(uVar2);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar2,param_6,lVar1);
  _objc_release(lVar1);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  uVar2 = param_1;
  _CGRectGetMinX();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  return uVar2;
}



/* Entry: 10654376c; end: 10654377b; -[SCChatViewControllerV3 activeGroupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654376c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf50290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a1ec),PTR_s_conversationId_1125b1a48);
  return;
}



/* Entry: 10654377c; end: 10654380f; -[SCChatViewControllerV3 currentGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654377c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = (long)_DAT_11274a1ec;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf50280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,uVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c074920();
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bfce400(*(undefined8 *)(param_1 + lVar4));
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106543810; end: 106543857; -[SCChatViewControllerV3 chatRecipientUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543810(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a1ec;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010c074920();
  if ((uVar1 & 1) == 0) {
    func_0x00010c122e00(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106543858; end: 1065438d7; -[SCChatViewControllerV3 _goRightWithAnimation:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106543858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a14c;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c9e0();
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065438d8; end: 1065438df; -[SCChatViewControllerV3 navigationController:animationControllerForOperation:fromViewController:toViewController:] */

undefined8 FUN_1065438d8(void)

{
  return 0;
}



/* Entry: 1065438e0; end: 1065438ef; -[SCChatViewControllerV3 didUpdateGroupsDataRequest:groupId:] */

void FUN_1065438e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfe690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didLeaveGroupId__11255d340,param_4);
  return;
}



/* Entry: 1065438f0; end: 106543acb; -[SCChatViewControllerV3 _didLeaveGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065438f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef0700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cb710;
    _objc_opt_class(PTR_PTR_1126cb710);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar5 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010bf84280(PTR_PTR_1126cb718);
      _objc_release(uVar3);
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106543acc;
    puStack_50 = &UNK_110842e18;
    ppuVar6 = &puStack_68;
    uStack_48 = param_1;
    _objc_retainBlock();
    lVar10 = (long)_DAT_11274a174;
    lVar7 = *(long *)(param_1 + lVar10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    if (lVar8 == 0) {
      (*(code *)ppuVar6[2])(ppuVar6);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c150520(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar9;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f440();
      _objc_release(uVar2);
      _objc_release(uVar9);
    }
    _objc_release(ppuVar6);
  }
  return;
}



/* Entry: 106543acc; end: 106543b1f;  */

void FUN_106543acc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103980();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be24270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__goRightWithAnimation_completion_112566a38,1,0);
  return;
}


