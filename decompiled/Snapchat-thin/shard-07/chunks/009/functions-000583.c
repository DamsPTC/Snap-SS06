/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105aca8e0; end: 105aca94f;  */

void FUN_105aca8e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aca950; end: 105acab77; -[SCBitmojiOutfitSharingScopeWorkflow _fetchSceneOnBackgroundWithInfo:] */

void FUN_105aca950(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af5d8;
  _objc_alloc(PTR_PTR_1126af5d8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c14fa80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6040(puVar1,param_2,uVar6,puVar4,0,1,0x2d);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar4 = param_3;
  func_0x00010bfc0ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126afd80;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bf14060(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5e80(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126afd88;
    _objc_alloc(PTR_PTR_1126afd88);
    func_0x00010bff6380();
    puVar5 = *(undefined **)(param_1 + 0x58);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fa820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bfa9f40(puVar5,param_2,puVar1,puVar3,uVar6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0x58);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bfc0ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 8);
    func_0x00010c0fa820(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bfa9f60(puVar4,param_2,puVar1,puVar3,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105acab78; end: 105acac5f; -[SCBitmojiOutfitSharingScopeWorkflow _sceneIdObservable] */

void FUN_105acab78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c14fa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x60);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf6a1e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105acac60; end: 105acae2f; -[SCBitmojiOutfitSharingScopeWorkflow _backgroundIdObservable] */

void FUN_105acac60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf14660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126af5d0;
  puVar8 = PTR_PTR_1126ae6b8;
  if (lVar4 == 0) {
    puVar7 = *(undefined **)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf14060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar5;
    func_0x00010c08fa60();
    puVar8 = PTR_PTR_1126ae6b8;
    if (puVar7 == (undefined *)0x0) {
      puVar9 = *(undefined **)(param_1 + 0x60);
      func_0x00010c269d40(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010bf68dc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar8,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x50);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar8,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105acae30; end: 105acae37; -[SCBitmojiOutfitSharingScopeWorkflow didCancelFromPreview:] */

void FUN_105acae30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissOutfitSharingWithShouldR_11255e5a8,1)
  ;
  return;
}



/* Entry: 105acae38; end: 105acae47; -[SCBitmojiOutfitSharingScopeWorkflow didSendDiscoverSharedMessageWithParameters:] */

void FUN_105acae38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissOutfitSharingWithShouldR_11255e5a8,
             (*(byte *)(param_1 + 0xb8) ^ 0xff) & 1);
  return;
}



/* Entry: 105acae48; end: 105acaebb; -[SCBitmojiOutfitSharingScopeWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_105acae48(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  
  _objc_retain(param_4);
  bVar1 = *(byte *)(param_1 + 0xb8);
  *(byte *)(param_1 + 0x88) = bVar1;
  if ((param_3 & 1) == 0) {
    func_0x00010be7ccc0(param_1,param_2,0);
    bVar1 = *(byte *)(param_1 + 0xb8);
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(byte *)(param_1 + 0x98) = bVar1;
  }
  if ((bVar1 & 1) == 0) {
    func_0x00010be58860(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105acaebc; end: 105acaedb; -[SCBitmojiOutfitSharingScopeWorkflow didPostStoryWithStoryTypes:] */

void FUN_105acaebc(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be58870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logShareOutfitMediaSend_112573bb8);
  return;
}



/* Entry: 105acaedc; end: 105acafb3; -[SCBitmojiOutfitSharingScopeWorkflow _dismissOutfitSharingWithShouldRemoveSharingScope:] */

void FUN_105acaedc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105acafb4; end: 105acafe7;  */

void FUN_105acafb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105acafe8; end: 105acb067; -[SCBitmojiOutfitSharingScopeWorkflow _dismissPreviewWithShouldRemoveSharingScope:] */

void FUN_105acafe8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_3 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1be00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105acb068; end: 105acb093; -[SCBitmojiOutfitSharingScopeWorkflow _dismissPreviewWithError] */

void FUN_105acb068(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be7ccc0(param_1,param_2,0xc);
                    /* WARNING: Could not recover jumptable at 0x00010be03250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewWithShouldRemoveS_11255e630,1)
  ;
  return;
}



/* Entry: 105acb094; end: 105acb137; -[SCBitmojiOutfitSharingScopeWorkflow _logShareOutfitMediaSend] */

void FUN_105acb094(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be0fd40(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105acb138; end: 105acb17f;  */

void FUN_105acb138(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105acb180; end: 105acb253; -[SCBitmojiOutfitSharingScopeWorkflow _logShareOutfitMediaSendIfPossible] */

void FUN_105acb180(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x90);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    lVar1 = *(long *)(param_1 + 0xa0);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      return;
    }
  }
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be0fd40(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105acb254; end: 105acb29b;  */

void FUN_105acb254(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105acb29c; end: 105acb3af; -[SCBitmojiOutfitSharingScopeWorkflow _finishLoggingShareOutfitMediaSendWithAvatarData:] */

void FUN_105acb29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdfc140(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be46640(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be588c0(param_1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105acb3b0;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105acb3b0; end: 105acb3df;  */

void FUN_105acb3b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105acb3e0; end: 105acb597; -[SCBitmojiOutfitSharingScopeWorkflow _handleSendCompletedWithResult:] */

void FUN_105acb3e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf43e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf43e40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + lVar2;
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf50640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf43f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf43f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c261c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c15f5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf43f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + lVar3;
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  func_0x00010be58880(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105acb598; end: 105acb6bf; -[SCBitmojiOutfitSharingScopeWorkflow .cxx_destruct] */

void FUN_105acb598(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105acb6c0; end: 105acb797; -[SCBitmojiSceneBackgroundInfo initWithSceneId:backgroundId:generativeBackgroundURL:] */

undefined1 *
FUN_105acb6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ebc50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105acb798; end: 105acb7bb; -[SCBitmojiSceneBackgroundInfo copyWithZone:] */

undefined8 FUN_105acb798(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105acb7bc; end: 105acb83b; -[SCBitmojiSceneBackgroundInfo hash] */

undefined8 * FUN_105acb7bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105acb8d4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105acb8e0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105acb8e0;
          }
          goto LAB_105acb8d4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105acb8e0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105acb83c; end: 105acb8fb; -[SCBitmojiSceneBackgroundInfo isEqual:] */

long FUN_105acb83c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105acb8d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105acb8e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105acb8e0;
          }
          goto LAB_105acb8d4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105acb8e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105acb8fc; end: 105acb903; -[SCBitmojiSceneBackgroundInfo sceneId] */

undefined8 FUN_105acb8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105acb904; end: 105acb90b; -[SCBitmojiSceneBackgroundInfo backgroundId] */

undefined8 FUN_105acb904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105acb90c; end: 105acb913; -[SCBitmojiSceneBackgroundInfo generativeBackgroundURL] */

undefined8 FUN_105acb90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105acb914; end: 105acb94f; -[SCBitmojiSceneBackgroundInfo .cxx_destruct] */

void FUN_105acb914(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105acb950; end: 105acbc6b; -[SCBitmojiOutfitSharingPreviewView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105acb950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ebc58;
  puVar14 = &uStack_98;
  uStack_98 = param_2;
  _objc_msgSendSuper2(puVar14,PTR_s_initWithFrame__1125e2948);
  puVar12 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar16 = (long)_DAT_11272efb8;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar1;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c182220(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010befbb60(puVar14);
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar17 = (long)_DAT_11272efbc;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar17);
    *(undefined **)((long)puVar14 + lVar17) = puVar1;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c1a8560(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010befbb60(puVar14);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar15;
    uVar3 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar13;
    uVar5 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar14;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar11;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar15);
    _objc_release(puVar12);
    _objc_release(uVar2);
    func_0x00010bed3ac0(puVar14);
    puVar12 = puVar14;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0x3fe0000000000000;
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(puVar12);
    puVar12 = *(undefined8 **)((long)puVar14 + lVar17);
    func_0x00010c24dbc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar14 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640(param_4);
  puVar4 = puVar14;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar14);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11272efb8;
  uVar15 = *(undefined8 *)((long)puVar12 + lVar17);
  func_0x00010c274200(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298fc0(param_4);
  puVar4 = puVar14;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)((long)puVar12 + lVar17);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298fc0(param_4);
  puVar9 = puVar6;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar13);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar15);
  _objc_release(puVar14);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0(param_4);
  _objc_release(param_4);
  func_0x00010c1842e0(param_1,puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00010c1a9f00(*(undefined8 *)((long)puVar12 + (long)_DAT_11272efb8));
  puVar14 = *(undefined8 **)((long)puVar12 + (long)_DAT_11272efbc);
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_stopAnimating_112673058);
  return puVar14;
}



/* Entry: 105acbc6c; end: 105acbeaf; -[SCBitmojiOutfitSharingPreviewView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105acbc6c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640(param_4);
  lVar3 = lVar2;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11272efb8;
  uVar5 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c274200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298fc0(param_4);
  lVar3 = lVar2;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298fc0(param_4);
  lVar9 = lVar6;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0(param_4);
  _objc_release(param_4);
  func_0x00010c1842e0(param_1,param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1a9f00(*(undefined8 *)(param_2 + _DAT_11272efb8));
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11272efbc),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105acbeb0; end: 105acbee7; -[SCBitmojiOutfitSharingPreviewView setPreviewImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105acbeb0(long param_1)

{
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11272efb8));
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272efbc),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105acbee8; end: 105acbf7f; -[SCBitmojiOutfitSharingPreviewView traitCollectionDidChange:] */

void FUN_105acbee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_1126ebc58;
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
    func_0x00010bed3ac0(param_1);
  }
  return;
}



/* Entry: 105acbf80; end: 105acc04b; -[SCBitmojiOutfitSharingPreviewView _updateBackgroundColours] */

void FUN_105acbf80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c292b20();
  _objc_release(lVar2);
  uVar1 = 0x1d;
  if (lVar3 != 2) {
    uVar1 = 0x28;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c173280(param_1,param_2,puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105acc04c; end: 105acc08b; -[SCBitmojiOutfitSharingPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105acc04c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272efbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272efb8,0);
  return;
}



/* Entry: 105acc08c; end: 105acc0e7; -[SCBitmojiOutfitSharingPreviewViewModel initWithHeight:verticalPadding:cornerRadius:] */

void FUN_105acc08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ebc60;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 105acc0e8; end: 105acc10b; -[SCBitmojiOutfitSharingPreviewViewModel copyWithZone:] */

undefined8 FUN_105acc0e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105acc10c; end: 105acc1c3; -[SCBitmojiOutfitSharingPreviewViewModel hash] */

ulong * FUN_105acc10c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
          dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            if (dVar7 <= 2.2250738585072014e-308) {
              dVar7 = 2.2250738585072014e-308;
            }
            puVar6 = (undefined1 *)
                     (ulong)(ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18)) <
                            dVar7);
            goto LAB_105acc2bc;
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_105acc2bc:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 105acc1c4; end: 105acc2d7; -[SCBitmojiOutfitSharingPreviewViewModel isEqual:] */

bool FUN_105acc1c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
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
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar1 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
            goto LAB_105acc2bc;
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_105acc2bc:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105acc2d8; end: 105acc2df; -[SCBitmojiOutfitSharingPreviewViewModel height] */

undefined8 FUN_105acc2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105acc2e0; end: 105acc2e7; -[SCBitmojiOutfitSharingPreviewViewModel verticalPadding] */

undefined8 FUN_105acc2e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105acc2e8; end: 105acc2ef; -[SCBitmojiOutfitSharingPreviewViewModel cornerRadius] */

undefined8 FUN_105acc2e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105acc2f0; end: 105acc38b; -[SCCameraPageLaunchHandler initWithMainTabNavigationServices:lensUnlocker:] */

undefined1 *
FUN_105acc2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebc68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105acc38c; end: 105acc52f; -[SCCameraPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_105acc38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094640();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf2a020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105acc530;
    puStack_50 = &UNK_110842508;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010c2366c0(lVar3,param_2,&puStack_68);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(param_1);
    uVar1 = uStack_48;
  }
  else {
    uVar1 = param_3;
    func_0x00010c247940();
    if ((int)uVar1 == 6) {
      lVar4 = 6;
    }
    else {
      uVar1 = param_3;
      func_0x00010c247940();
      if ((int)uVar1 == 7) {
        uVar1 = param_3;
        func_0x00010bf67c00(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c247520();
        lVar4 = param_1;
        func_0x00010be1cb20(param_1,param_2,uVar2);
        _objc_release(uVar1);
      }
      else {
        lVar4 = 1;
      }
    }
    uVar1 = param_3;
    func_0x00010bf28e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb9840(param_1,param_2,uVar1,lVar4,param_5);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105acc530; end: 105acc597;  */

void FUN_105acc530(long param_1,ulong param_2)

{
  undefined *puVar1;
  
  if ((param_2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e1c698,
                        &PTR____CFConstantStringClassReference_110e1c6b8,3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105acc598; end: 105acc803; -[SCCameraPageLaunchHandler _showLens:activationSource:completion:] */

void FUN_105acc598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c20e8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c14f6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024920();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1ab0;
  func_0x00010c280b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar7);
    _objc_release(puVar7);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0f8040();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_5);
    puVar7 = puVar1;
    _objc_retain(puVar1);
    uStack_70 = param_4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(lVar6);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(puVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105acc804; end: 105acc963;  */

void FUN_105acc804(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      if (param_3 == (undefined *)0x0) {
        param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_3 == (undefined *)0x0) {
      lVar2 = lVar1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bf2a020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c094fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010bf56c80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2365c0(lVar4);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
      goto LAB_105acc940;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
  _objc_release(param_3);
LAB_105acc940:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105acc964; end: 105acc97f; -[SCCameraPageLaunchHandler _getActivationSourceFromDeepLinkSource:] */

undefined8 FUN_105acc964(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 9;
  if (param_3 != 2) {
    uVar2 = 1;
  }
  uVar1 = 10;
  if (param_3 != 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105acc980; end: 105acc987; -[SCCameraPageLaunchHandler screen] */

undefined4 FUN_105acc980(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 105acc988; end: 105acc9af; -[SCCameraPageLaunchHandler .cxx_destruct] */

void FUN_105acc988(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105acc9b0; end: 105accaab; -[SCCameraPageLauncherPlugin initWithMainTabNavigationServices:lensUnlocker:] */

undefined1 * FUN_105acc9b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ebc70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c20f0;
    _objc_alloc();
    func_0x00010c028000();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(param_3 + 8);
}



/* Entry: 105accaac; end: 105accab3; -[SCCameraPageLauncherPlugin handlers] */

undefined8 FUN_105accaac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105accab4; end: 105accae3; -[SCCameraPageLauncherPlugin setHandlers:] */

void FUN_105accab4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105accae4; end: 105accaef; -[SCCameraPageLauncherPlugin .cxx_destruct] */

void FUN_105accae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105accaf0; end: 105accb3f; -[SCStoriesCarouselStateTracker init] */

undefined1 * FUN_105accaf0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ebc78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea5e00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105accb40; end: 105accb63; -[SCStoriesCarouselStateTracker _setNewTrackingStates] */

void FUN_105accb40(undefined8 param_1)

{
  func_0x00010bea5d00();
                    /* WARNING: Could not recover jumptable at 0x00010bea5db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setNewP2rTrackingStates_112587110);
  return;
}



/* Entry: 105accb64; end: 105accbf7; -[SCStoriesCarouselStateTracker _setNewCarouselInteractionTrackingStates] */

void FUN_105accb64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  return;
}



/* Entry: 105accbf8; end: 105accc0b; -[SCStoriesCarouselStateTracker _setNewP2rTrackingStates] */

void FUN_105accbf8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x9c) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105accc0c; end: 105acd0f7; -[SCStoriesCarouselStateTracker updateNumStoriesAndThumbnailsVisible:userScrolled:leavingFeed:] */

void FUN_105accc0c(long param_1,int param_2,ulong param_3,int param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf529e0();
  if (uVar3 == 1) {
    uVar4 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c20f8;
    _objc_opt_class();
    param_2 = (int)puVar5;
    uVar6 = uVar4;
    _objc_opt_isKindOfClass();
    uVar3 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_retain(uVar6);
    uVar4 = uVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar6);
        }
        puVar5 = PTR_DAT_1126a4fe8;
        uVar13 = *(ulong *)(uVar14 * 8);
        _objc_retain(uVar13);
        uVar7 = uVar13;
        func_0x00010010fab4(uVar13,puVar5);
        uVar1 = uVar13;
        if ((int)uVar7 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar13);
        uVar7 = uVar1;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c2100;
        _objc_opt_class(PTR_PTR_1126c2100);
        uVar13 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar5);
        puVar11 = PTR_PTR_1126c2110;
        puVar5 = PTR_DAT_1126a4ff0;
        if (((uVar13 & 1) == 0) || (uVar7 == 0)) {
          _objc_retain(uVar7);
          _objc_retain(0);
          _objc_opt_class();
          param_2 = (int)puVar11;
          uVar13 = uVar7;
          _objc_opt_isKindOfClass();
          _objc_release(uVar7);
          _objc_release(0);
          if (((uVar13 & 1) != 0) &&
             ((uVar7 != 0 &&
              (*(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1, param_5 != 0)))) {
            *(undefined1 *)(param_1 + 0x99) = 1;
          }
        }
        else {
          _objc_retain(uVar1);
          _objc_retain(uVar7);
          uVar8 = uVar1;
          func_0x00010010fab4(uVar1,puVar5);
          uVar13 = uVar1;
          if ((int)uVar8 == 0) {
            uVar13 = 0;
          }
          _objc_retain(uVar13);
          _objc_release(uVar1);
          uVar8 = uVar7;
          func_0x00010c268c60();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          puVar5 = PTR_PTR_1126c2108;
          _objc_opt_class();
          param_2 = (int)puVar5;
          uVar10 = uVar9;
          _objc_opt_isKindOfClass();
          uVar8 = uVar9;
          if ((uVar10 & 1) == 0) {
            uVar8 = 0;
          }
          _objc_retain(uVar8);
          _objc_release(uVar9);
          uVar9 = uVar7;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar10 = uVar9;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          uVar9 = uVar10;
          func_0x00010c08fa60();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (uVar9 == 0) {
            _objc_release(uVar10);
            _objc_release(uVar8);
          }
          else {
            func_0x00010c25b5a0(uVar13);
            func_0x00010c0df6e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
            _objc_release(puVar5);
            uVar9 = uVar8;
            func_0x00010c0644a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(uVar10);
            _objc_retain(uVar13);
            _objc_retain(uVar10);
            _objc_retain(uVar13);
            func_0x00010c0bdf60(uVar9);
            _objc_release(uVar9);
            _objc_release(uVar13);
            _objc_release(uVar10);
            _objc_release(uVar13);
            _objc_release(uVar10);
            _objc_release(uVar10);
            _objc_release(uVar13);
            uVar13 = uVar8;
          }
          _objc_release(uVar13);
        }
        _objc_release(uVar7);
        _objc_release(uVar1);
        uVar14 = uVar14 + 1;
      } while (uVar4 != uVar14);
      uVar4 = uVar6;
      func_0x00010bf52a60();
    }
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c07fde0();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25b5a0(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 0x10;
  if (param_2 == 0) {
    lVar12 = 8;
  }
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar12));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105acd0f8; end: 105acd173;  */

void FUN_105acd0f8(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c07fde0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25b5a0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0x10;
  if (param_2 == 0) {
    lVar1 = 8;
  }
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105acd174; end: 105acd1e3;  */

void FUN_105acd174(long param_1,int param_2)

{
  undefined *puVar1;
  
  func_0x00010c080120();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 != 0) {
    func_0x00010c25b5a0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105acd1e4; end: 105acd6e3; -[SCStoriesCarouselStateTracker updateNumStoriesAvailable:] */

void FUN_105acd1e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar15 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar1 = uVar7;
  if ((uVar15 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(uVar1);
  uVar7 = uVar1;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    lVar16 = *plStack_130;
    do {
      uVar15 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(uVar1);
        }
        uVar9 = *(ulong *)(lStack_138 + uVar15 * 8);
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126c2100;
        _objc_opt_class(PTR_PTR_1126c2100);
        uVar10 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar8);
        uVar2 = uVar9;
        if ((uVar10 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar9);
        if (uVar2 != 0) {
          uVar10 = uVar9;
          func_0x00010c268c60();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          puVar8 = PTR_PTR_1126c2108;
          _objc_opt_class(PTR_PTR_1126c2108);
          uVar12 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar8);
          uVar10 = uVar11;
          if ((uVar12 & 1) == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          _objc_release(uVar11);
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar9;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          uVar9 = uVar11;
          func_0x00010c08fa60();
          if (uVar9 != 0) {
            uStack_160 = 0;
            uStack_150 = 0x2020000000;
            uStack_148 = 0;
            uVar9 = uVar10;
            puStack_158 = &uStack_160;
            func_0x00010c0644a0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_198 = 0xc2000000;
            pcStack_190 = FUN_105acd6e4;
            puStack_188 = &UNK_1108d3ab0;
            puStack_168 = &uStack_160;
            _objc_retain(puVar4);
            puStack_180 = puVar4;
            _objc_retain(uVar11);
            uStack_178 = uVar11;
            _objc_retain(puVar3);
            puStack_1d8 = puVar8;
            uStack_1d0 = 0xc2000000;
            uStack_1c8 = 0x105acd788;
            puStack_1c0 = &UNK_1108d3ae0;
            puStack_1a8 = &uStack_160;
            puStack_170 = puVar3;
            _objc_retain(puVar5);
            puStack_1b8 = puVar5;
            _objc_retain(uVar11);
            uStack_1b0 = uVar11;
            func_0x00010c0bdf60(uVar9);
            _objc_release(uVar9);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar6);
            _objc_release(puVar8);
            _objc_release(uStack_1b0);
            _objc_release(puStack_1b8);
            _objc_release(puStack_170);
            _objc_release(uStack_178);
            _objc_release(puStack_180);
            __Block_object_dispose(&uStack_160,8);
          }
          _objc_release(uVar11);
          _objc_release(uVar10);
        }
        _objc_release(uVar2);
        uVar15 = uVar15 + 1;
      } while (uVar7 != uVar15);
      uVar7 = uVar1;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uVar1);
  _objc_initWeak(&uStack_160,param_1);
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_105acd828;
  puStack_208 = &UNK_11085ae98;
  _objc_copyWeak(auStack_1e0,&uStack_160);
  _objc_retain(puVar3);
  puStack_200 = puVar3;
  _objc_retain(puVar4);
  puStack_1f8 = puVar4;
  _objc_retain(puVar5);
  puStack_1f0 = puVar5;
  _objc_retain(puVar6);
  puStack_1e8 = puVar6;
  func_0x000100162d98("APPSTORE",&puStack_220);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1f8);
  _objc_release(puStack_200);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(&uStack_160);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar14 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  _objc_retain(uVar14);
  uVar13 = uVar14;
  func_0x00010bfddf20();
  *(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 8) + 0x18) = (byte)uVar13 ^ 1;
  uVar13 = uVar14;
  func_0x00010c07fde0();
  _objc_release(uVar14);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = 0x20;
  if ((int)uVar13 == 0) {
    lVar16 = 0x30;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar16));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105acd6e4; end: 105acd827;  */

void FUN_105acd6e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfddf20();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (byte)uVar2 ^ 1;
  uVar2 = param_2;
  func_0x00010c07fde0();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0x20;
  if ((int)uVar2 == 0) {
    lVar1 = 0x30;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105acd828; end: 105acd8cf;  */

void FUN_105acd828(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf51e00(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf51e00(uVar5);
    func_0x00010bee0d80(lVar1,param_2,uVar2,uVar3,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105acd8d0; end: 105acd99f; -[SCStoriesCarouselStateTracker _updateStoriesAvailable:availableFoFStoriesWithViewState:availableSubsStoriesWithViewState:availableAllStoriesWithViewState:] */

void FUN_105acd8d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_6;
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    func_0x00010bea4ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105acd9a0; end: 105acdc77; -[SCStoriesCarouselStateTracker updateNumStoriesWatchedWithGroupDataModel:] */

void FUN_105acd9a0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd30;
      _objc_opt_class(PTR_PTR_1126bdd30);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar2 & 1) == 0) goto LAB_105acdba0;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
      puVar1 = PTR_PTR_1126bdd30;
    }
    else {
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
      puVar1 = PTR_PTR_1126bdd28;
    }
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar2 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar3 = uVar2;
    func_0x00010c077680();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
    }
  }
  else {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
    puVar1 = PTR_PTR_1126c2118;
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar2 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    _objc_retain(uVar2);
    func_0x00010c0bdf40(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
LAB_105acdba0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105acdc78; end: 105acdcb3;  */

void FUN_105acdc78(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x70) = *(long *)(*(long *)(param_1 + 0x20) + 0x70) + 1;
  return;
}



/* Entry: 105acdcb4; end: 105acdd0b; -[SCStoriesCarouselStateTracker _setInitialNumUnreads] */

void FUN_105acdcb4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010be20de0();
    *(long *)(param_1 + 0x50) = lVar1;
    lVar1 = param_1;
    func_0x00010be20dc0();
    *(long *)(param_1 + 0x58) = lVar1;
    lVar1 = param_1;
    func_0x00010be20e00();
    *(long *)(param_1 + 0x60) = lVar1;
    lVar1 = param_1;
    func_0x00010be20da0();
    *(long *)(param_1 + 0x68) = lVar1;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



/* Entry: 105acdd0c; end: 105acddaf; -[SCStoriesCarouselStateTracker _getNumUnreadFriendStories] */

undefined8 FUN_105acdd0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105acddb0;
  puStack_50 = &UNK_1108d3c40;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105acddb0; end: 105acddeb;  */

void FUN_105acddb0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010bf1f3c0();
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 105acddec; end: 105acde8f; -[SCStoriesCarouselStateTracker _getNumUnreadFoFStories] */

undefined8 FUN_105acddec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105acde90;
  puStack_50 = &UNK_1108d3c40;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105acde90; end: 105acdecb;  */

void FUN_105acde90(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010bf1f3c0();
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 105acdecc; end: 105acdf6f; -[SCStoriesCarouselStateTracker _getNumUnreadSubsStories] */

undefined8 FUN_105acdecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105acdf70;
  puStack_50 = &UNK_1108d3c40;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105acdf70; end: 105acdfab;  */

void FUN_105acdf70(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010bf1f3c0();
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 105acdfac; end: 105ace04f; -[SCStoriesCarouselStateTracker _getNumUnreadAllStories] */

undefined8 FUN_105acdfac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ace050;
  puStack_50 = &UNK_1108d3c40;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x40),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105ace050; end: 105ace08b;  */

void FUN_105ace050(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010bf1f3c0();
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 105ace08c; end: 105aceb73; -[SCStoriesCarouselStateTracker getStoriesCarouselInteractionsDict] */

void FUN_105ace08c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_298 = &uStack_290;
  uStack_290 = 0;
  uStack_280 = 0x2020000000;
  uStack_278 = 0;
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_105aceb74;
  puStack_2a0 = &UNK_1108d3c40;
  puStack_288 = puStack_298;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 8));
  func_0x00010be20de0(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e0 = PTR_PTR_113243c48;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 8));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR_PTR_113243c50;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar4;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = PTR_PTR_113243c30;
  puStack_a8 = puVar5;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR_PTR_113243c38;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR_PTR_113243c40;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar7;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR_PTR_113243c60;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar8;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puStack_2e0 = &uStack_2d8;
  uStack_2d8 = 0;
  uStack_2c8 = 0x2020000000;
  uStack_2c0 = 0;
  puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f8 = 0xc2000000;
  uStack_2f0 = 0x105acebb0;
  puStack_2e8 = &UNK_1108d3c40;
  puStack_2d0 = puStack_2e0;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010be20dc0(param_1);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_140 = PTR_PTR_113243c48;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR_PTR_113243c50;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar4;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_130 = PTR_PTR_113243c30;
  puStack_108 = puVar7;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR_PTR_113243c38;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = PTR_PTR_113243c40;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f8 = puVar12;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR_PTR_113243c60;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f0 = puVar10;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_e8 = puVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  puStack_328 = &uStack_320;
  uStack_320 = 0;
  uStack_310 = 0x2020000000;
  uStack_308 = 0;
  puStack_348 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_340 = 0xc2000000;
  uStack_338 = 0x105acebec;
  puStack_330 = &UNK_1108d3c40;
  puStack_318 = puStack_328;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010be20e00(param_1);
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a0 = PTR_PTR_113243c48;
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = PTR_PTR_113243c50;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_170 = puVar4;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_190 = PTR_PTR_113243c30;
  puStack_168 = puVar7;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = PTR_PTR_113243c38;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_160 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR_PTR_113243c40;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_158 = puVar8;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = PTR_PTR_113243c60;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_150 = puVar9;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_148 = puVar10;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  puStack_360 = &uStack_368;
  uStack_368 = 0;
  uStack_358 = 0x2020000000;
  uStack_350 = 0;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be20da0();
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_200 = PTR_PTR_113243c48;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = PTR_PTR_113243c50;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1d0 = puVar4;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1f0 = PTR_PTR_113243c30;
  puStack_1c8 = puVar12;
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = PTR_PTR_113243c38;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1c0 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = PTR_PTR_113243c40;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b8 = puVar10;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = PTR_PTR_113243c60;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1b0 = puVar9;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1a8 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puStack_270 = PTR_PTR_113243c58;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = PTR_PTR_113243c70;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_238 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = PTR_PTR_113243cb0;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_230 = puVar9;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = PTR_PTR_113243c90;
  puStack_250 = PTR_PTR_113243c98;
  puStack_248 = PTR_PTR_113243ca0;
  puStack_240 = PTR_PTR_113243ca8;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_228 = puVar8;
  puStack_220 = puVar3;
  puStack_218 = puVar5;
  puStack_210 = puVar11;
  puStack_208 = puVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  puVar10 = puVar4;
  func_0x00010c1d0640(puVar2);
  iVar1 = (int)puVar10;
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  func_0x00010bea5d00(param_1);
  _objc_release(puVar13);
  __Block_object_dispose(&uStack_368,8);
  _objc_release(puVar11);
  __Block_object_dispose(&uStack_320,8);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_2d8,8);
  _objc_release(puVar3);
  puVar14 = &uStack_290;
  __Block_object_dispose(puVar14,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_368,8);
  __Block_object_dispose(&uStack_320,8);
  __Block_object_dispose(&uStack_2d8,8);
  __Block_object_dispose(&uStack_290,8);
  __Unwind_Resume();
  func_0x00010bf1f3c0();
  if (iVar1 != 0) {
    *(long *)(*(long *)(puVar14[4] + 8) + 0x18) = *(long *)(*(long *)(puVar14[4] + 8) + 0x18) + 1;
  }
  return;
}



/* Entry: 105aceb74; end: 105acec63;  */

void FUN_105aceb74(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x00010bf1f3c0();
  if (param_3 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 105acec64; end: 105acecab; -[SCStoriesCarouselStateTracker updatePullToRefreshInfo] */

void FUN_105acec64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105acecac; end: 105acee03; -[SCStoriesCarouselStateTracker getPullToRefreshInfoDict] */

void FUN_105acecac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0xa0) == 0) {
    param_1 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 0xa0) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bea5da0(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0xa0,0);
  _objc_storeStrong(param_2 + 0x40,0);
  _objc_storeStrong(param_2 + 0x38,0);
  _objc_storeStrong(param_2 + 0x30,0);
  _objc_storeStrong(param_2 + 0x28,0);
  _objc_storeStrong(param_2 + 0x20,0);
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 105acee04; end: 105acee87; -[SCStoriesCarouselStateTracker .cxx_destruct] */

void FUN_105acee04(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 105acee88; end: 105acf25f; -[SCStoriesEverywhereNotificationHandler initWithDiscoverFeedDataFetcher:discoverFeedDataMutator:networkRequester:circumstanceEngine:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:adConfigProvider:snapchattersDataFetcher:actionHandler:networkConnectivityMonitor:locationProvider:storiesSyncNetworkRequester:friendStoriesDataCoordinator:docObjectContext:queryCoordinator:mixedStoriesDataCoordinator:adRenderDataParser:] */

undefined8 *
FUN_105acee88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126ebc80;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[2];
    puVar1[2] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar1[0x13] = 0;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105acf260; end: 105acf433; -[SCStoriesEverywhereNotificationHandler handleNotificationPressed:] */

void FUN_105acf260(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x98) = param_1;
  _objc_initWeak(auStack_58,param_2);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be840;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126c2128;
  func_0x00010c0dbb80(PTR_PTR_1126c2128);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2583a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bc80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c2a1620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 105acf434; end: 105acf467;  */

void FUN_105acf434(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105acf468; end: 105acf4ab; -[SCStoriesEverywhereNotificationHandler setPresentingViewController:] */

void FUN_105acf468(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xa8,param_3);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105acf4ac; end: 105acf65f; -[SCStoriesEverywhereNotificationHandler _handleNotificationPressed:] */

void FUN_105acf4ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  lVar2 = param_3;
  func_0x00010c11c420();
  lVar3 = param_3;
  func_0x00010c11c420();
  if ((lVar3 == 0x73) || (lVar3 = param_3, func_0x00010c11c420(), lVar3 == 0x71)) {
    lVar3 = param_3;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_105acf574;
    *(undefined1 *)(param_1 + 0xa0) = 1;
    lVar1 = param_3;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107afed24();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x000107b018f8(0x12,0x1a,*(undefined8 *)(param_1 + 0x68));
      func_0x00010be28760(param_1);
      goto LAB_105acf648;
    }
    lVar2 = param_3;
    func_0x00010bf38cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf52680(lVar1);
    func_0x000107b018f8(0x12,lVar2,*(undefined8 *)(param_1 + 0x68));
    func_0x00010be287e0(param_1);
  }
  else {
LAB_105acf574:
    lVar3 = param_3;
    func_0x00010c11c420();
    if (lVar3 != 0x16) {
      if ((lVar1 == 0x9a) || (lVar2 == 0x98)) {
        lVar1 = param_3;
        func_0x00010bf38cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          *(undefined1 *)(param_1 + 0xa0) = 0;
          func_0x00010be287e0(param_1);
        }
      }
      goto LAB_105acf648;
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
    lVar1 = param_3;
    func_0x000107aff0b4(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be28760(param_1);
  }
  _objc_release(lVar1);
LAB_105acf648:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105acf660; end: 105acf8e3; -[SCStoriesEverywhereNotificationHandler _handleMixedCarouselFriendStoryNotificationPressed:] */

void FUN_105acf660(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15f540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ced80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfab800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x000107b01540();
  if (((uVar4 != 0 && uVar1 <= uVar4) && (uVar4 == 0 || uVar4 != uVar1)) && (int)uVar3 != 0) {
    func_0x00010be60960(param_1);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105acf8e4;
    puStack_98 = &UNK_11085dbf8;
    _objc_retain();
    puStack_90 = puVar5;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    ppuVar6 = &puStack_b0;
    uStack_88 = param_3;
    _objc_retainBlock();
    puVar7 = PTR_PTR_1126c2130;
    _objc_alloc(PTR_PTR_1126c2130);
    func_0x00010c012700();
    puVar8 = PTR_PTR_1126b1158;
    _objc_alloc(PTR_PTR_1126b1158);
    func_0x00010c03c440();
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar6);
    func_0x00010c13cfe0(uVar9);
    _objc_release(uVar9);
    _objc_release(ppuVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puStack_90);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105acf8e4; end: 105acf9bb;  */

void FUN_105acf8e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 105acf9bc; end: 105acfa47;  */

void FUN_105acf9bc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar2);
  if (param_1 <= 10.0) {
    func_0x00010be60960(lVar2,param_3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    func_0x00010be6dfc0(lVar2,param_3,0x1a,0x13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105acfa48; end: 105acfa5b;  */

void FUN_105acfa48(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105acfa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3 != 0);
  return;
}



/* Entry: 105acfa5c; end: 105acfc1f; -[SCStoriesEverywhereNotificationHandler _handleDiscoverFeedFriendStoryNotificationPressed:] */

void FUN_105acfa5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar5 = &puStack_90;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15f540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c088c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000107b01540();
  if (((uVar3 != 0 && uVar1 <= uVar3) && (uVar3 == 0 || uVar3 != uVar1)) && (int)uVar2 != 0) {
    func_0x00010be60960(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105acfc20;
    puStack_78 = &UNK_11085dbf8;
    _objc_retain();
    puStack_70 = puVar4;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retainBlock(&puStack_90);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6cc0();
    _objc_release(uVar6);
    _objc_release(ppuVar5);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_release(puStack_70);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105acfc20; end: 105acfcf7;  */

void FUN_105acfc20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 105acfcf8; end: 105acfd83;  */

void FUN_105acfcf8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar2);
  if (param_1 <= 5.0) {
    func_0x00010be60960(lVar2,param_3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    func_0x00010be6dfc0(lVar2,param_3,0x1a,0x13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105acfd84; end: 105acfd93; -[SCStoriesEverywhereNotificationHandler _optInNotificationGrapheneIncrementStoryCorpus:metricType:] */

void FUN_105acfd84(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 == 0x10) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ead058;
  if (param_3 != 0x11) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e10178;
  if (param_3 != 0x1a) {
    ppuVar1 = ppuVar3;
  }
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0();
  iVar2 = (int)ppuVar3;
  switch(param_4) {
  case 0:
    if (iVar2 == 0) {
      func_0x000107b0881c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08990(uVar4,1);
    }
    break;
  case 1:
    if (iVar2 == 0) {
      func_0x000107b08a08(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08b7c(uVar4,1);
    }
    break;
  case 2:
    if (iVar2 == 0) {
      func_0x000107b08bf4(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08d68(uVar4,1);
    }
    break;
  case 3:
    if (iVar2 == 0) {
      func_0x000107b07094(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07208(uVar4,1);
    }
    break;
  case 4:
    if (iVar2 == 0) {
      func_0x000107b081e0(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08354(uVar4,1);
    }
    break;
  case 5:
    if (iVar2 == 0) {
      func_0x000107b0806c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07ff4(uVar4,1);
    }
    break;
  case 6:
    if (iVar2 == 0) {
      func_0x000107b06ad0(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06c44(uVar4,1);
    }
    break;
  case 7:
    if (iVar2 == 0) {
      func_0x000107b06cbc(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06e30(uVar4,1);
    }
    break;
  case 8:
    if (iVar2 == 0) {
      func_0x000107b07658(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b077cc(uVar4,1);
    }
    break;
  case 9:
    if (iVar2 != 0) {
      func_0x000107b06494(uVar4,1);
      break;
    }
    goto code_r0x000107b01a10;
  case 10:
    if (iVar2 == 0) {
      func_0x000107b07844(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b079b8(uVar4,1);
    }
    break;
  case 0xb:
    if (iVar2 == 0) {
      func_0x000107b0650c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06680(uVar4,1);
    }
    break;
  case 0xc:
    if (iVar2 == 0) {
      func_0x000107b07c1c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07d90(uVar4,1);
    }
    break;
  case 0xd:
    if (iVar2 == 0) {
      func_0x000107b066f8(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b0686c(uVar4,1);
    }
    break;
  case 0xe:
    if (iVar2 != 0) {
      func_0x000107b062a8(uVar4,1);
      break;
    }
code_r0x000107b01a10:
    func_0x000107b06320(uVar4,ppuVar1,1);
    break;
  case 0xf:
    if (iVar2 == 0) {
      func_0x000107b068e4(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06a58(uVar4,1);
    }
    break;
  case 0x10:
    if (iVar2 == 0) {
      func_0x000107b07a30(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07ba4(uVar4,1);
    }
    break;
  case 0x11:
    if (iVar2 == 0) {
      func_0x000107b083cc(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08540(uVar4,1);
    }
    break;
  case 0x12:
    if (iVar2 == 0) {
      func_0x000107b07e08(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07f7c(uVar4,1);
    }
    break;
  case 0x13:
    if (iVar2 == 0) {
      func_0x000107b0746c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b075e0(uVar4,1);
    }
    break;
  case 0x14:
    if (iVar2 == 0) {
      func_0x000107b06ea8(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b0701c(uVar4,1);
    }
    break;
  case 0x15:
    if (iVar2 == 0) {
      func_0x000107b07280(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b073f4(uVar4,1);
    }
    break;
  case 0x16:
    if (iVar2 == 0) {
      func_0x000107b08630(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b085b8(uVar4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105acfd94; end: 105acfeff; -[SCStoriesEverywhereNotificationHandler _fetchUncachedFriendStoryWithNotification:itemSource:triggeringSection:mixedCarouselStories:shouldPrependStory:] */

void FUN_105acfd94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15de20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_6);
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_7;
  func_0x00010bfab120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105acff00; end: 105ad007f;  */

void FUN_105acff00(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar2 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar2);
    func_0x00010be6dfc0();
  }
  else {
    lVar1 = param_2;
    func_0x00010bfddf20();
    if ((int)lVar1 == 0) goto LAB_105ad0068;
    puVar4 = *(undefined **)(param_1 + 0x28);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    }
    else {
      _objc_retain(puVar4);
    }
    puVar2 = puVar4;
    if (*(char *)(param_1 + 0x50) == '\x01') {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      lVar1 = param_2;
      func_0x00010c259cc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79a40(uVar5);
      _objc_release(lVar1);
      puVar3 = *(undefined **)(param_1 + 0x28);
      func_0x00010c0d3c80(puVar3);
      puVar2 = PTR_PTR_1126c2138;
      func_0x00010bfb8fe0(PTR_PTR_1126c2138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dc140(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be60980(lVar1);
    _objc_release(uVar5);
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
LAB_105ad0068:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ad0080; end: 105ad0177; -[SCStoriesEverywhereNotificationHandler _mixedCarouselFetchAvailableFriendStoryAndPlay:] */

void FUN_105ad0080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfa9a40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad0178; end: 105ad01d7;  */

void FUN_105ad0178(long param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108d3d90);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be60940();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ad01d8; end: 105ad01e7;  */

void FUN_105ad01d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c2138,PTR_s_friendStoryWithFriendStory__1125cbda0,param_2);
  return;
}



/* Entry: 105ad01e8; end: 105ad0497; -[SCStoriesEverywhereNotificationHandler _mixedCarouselCheckAvailableFriendStoryAndPlay:mixedCarouselStories:] */

void FUN_105ad01e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_105ad0498;
  uStack_110 = 0x105ad04a8;
  uStack_108 = 0;
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar3 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar4 = *(undefined8 *)(lVar3 * 8);
      _objc_retain(param_3);
      func_0x00010c0bdf60(uVar4);
      lVar2 = puStack_128[5];
      _objc_release(param_3);
      if (lVar2 != 0) goto LAB_105ad0350;
      lVar3 = lVar3 + 1;
    } while (lVar5 != lVar3);
    lVar5 = param_4;
    func_0x00010bf52a60();
  }
LAB_105ad0350:
  _objc_release(param_4);
  func_0x000107b01540();
  lVar5 = puStack_128[5];
  if (lVar5 != 0) {
    func_0x00010bfddf20();
    if ((int)lVar5 != 0) {
      lVar5 = param_3;
      func_0x00010c0dc140(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be60980(param_1);
      _objc_release(lVar5);
      goto LAB_105ad0404;
    }
    func_0x00010be6dfc0(param_1);
  }
  func_0x00010be15220(param_1);
LAB_105ad0404:
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar5 = 8;
    __Block_object_dispose(&uStack_130);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 105ad0498; end: 105ad04af;  */

void FUN_105ad0498(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


