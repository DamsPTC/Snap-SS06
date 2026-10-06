/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a05938; end: 106a05a3f;  */

void FUN_106a05938(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8280();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c8e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121e00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a05a40; end: 106a05a93;  */

void FUN_106a05a40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a05a94; end: 106a05ad3; -[SCGalleryStoriesTabV2Controller consolidatedAutoSavedStoriesWillDimiss] */

void FUN_106a05a94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39fc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed8310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFocusedDisplayedTabTypeFo_112593a68);
  return;
}



/* Entry: 106a05ad4; end: 106a05b53; -[SCGalleryStoriesTabV2Controller _updateFocusedDisplayedTabTypeForGalleryLogger] */

void FUN_106a05ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  func_0x000108dfcaa4(uVar4);
  func_0x00010c2115c0(uVar3,param_2,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a05b54; end: 106a05c67; -[SCGalleryStoriesTabV2Controller consolidatedAutoSavedStoriesDidCreateStory:] */

void FUN_106a05b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf491e0(param_1);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf84b00(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a05c68; end: 106a05cc3;  */

void FUN_106a05c68(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2678a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a05cc4; end: 106a05d67; -[SCGalleryStoriesTabV2Controller consolidatedAutoSavedStoriesDidEndDimissing:] */

void FUN_106a05cc4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfdb8e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((param_3 & 1) == 0) && ((uVar4 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be04350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayConsolidatedStoriesMySto_11255ea70)
    ;
    return;
  }
  return;
}



/* Entry: 106a05d68; end: 106a05da7; -[SCGalleryStoriesTabV2Controller favoriteSnapsStoryWillDimiss] */

void FUN_106a05d68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a020();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed8310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFocusedDisplayedTabTypeFo_112593a68);
  return;
}



/* Entry: 106a05da8; end: 106a05ebb; -[SCGalleryStoriesTabV2Controller favoriteSnapsStoryDidCreateStory:] */

void FUN_106a05da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bfa1160(param_1);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf84b00(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a05ebc; end: 106a05f17;  */

void FUN_106a05ebc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2678a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a05f18; end: 106a05ff3; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperIsClientCompatibleForItem:] */

undefined8 FUN_106a05f18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x88);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106a05ff4;
    puStack_40 = &UNK_110953288;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfece40(lVar3,param_2,&puStack_58);
    if (lVar3 == 0x7fffffffffffffff) {
      uVar2 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c0dfd40(uVar1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c06ece0();
      _objc_release(uVar1);
    }
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106a05ff4; end: 106a06093;  */

undefined8 FUN_106a05ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfbd0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar3 != 0) {
    *param_4 = 1;
  }
  return uVar3;
}



/* Entry: 106a06094; end: 106a06117; -[SCGalleryStoriesTabV2Controller _isViewModelValidForUse:] */

byte FUN_106a06094(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte unaff_w20;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    unaff_w20 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80();
    lVar2 = param_3;
    if (lVar1 - 1U < 2) {
      func_0x00010c25fc20(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 0) goto LAB_106a06100;
      func_0x00010bf97060(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    unaff_w20 = lVar2 != 0;
    _objc_release();
  }
LAB_106a06100:
  _objc_release(param_3);
  return unaff_w20 & 1;
}



/* Entry: 106a06118; end: 106a0618f; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidHideLegacyAutoSavedStories:] */

undefined8 FUN_106a06118(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe2200();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106a06190; end: 106a06537; -[SCGalleryStoriesTabV2Controller storiesTabDataSourceDidReceiveData:viewModels:coordinator:] */

void FUN_106a06190(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_108 [8];
  undefined1 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfbd160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    func_0x00010c0b0e80(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar4);
  }
  uVar4 = param_5;
  func_0x00010bfd6b60();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a06538;
  puStack_88 = &UNK_1109532b8;
  uVar2 = param_4;
  uStack_80 = param_1;
  func_0x000100504554(param_4,&puStack_a0);
  _objc_release(param_4);
  uVar5 = param_1;
  func_0x00010c0834c0();
  if ((uVar5 & 1) == 0) {
    _objc_retain(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    _objc_release(uVar4);
    func_0x00010bed76c0(param_1);
    lVar6 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf529e0(uVar2);
    func_0x00010c267780(lVar6);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x88);
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106a06590;
    puStack_b0 = &UNK_1109532b8;
    uStack_a8 = param_1;
    func_0x000100504554(lVar6,&puStack_c8);
    puStack_f0 = puVar3;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x106a065f4;
    puStack_d8 = &UNK_1109532b8;
    uVar1 = uVar2;
    uStack_d0 = param_1;
    func_0x000100504554(uVar2,&puStack_f0);
    lVar7 = lVar6;
    func_0x000107ea50c8(lVar6,uVar1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c13cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar8;
    func_0x00010bfd5320();
    if ((int)lVar7 == 0) {
      if ((uint)*(byte *)(param_1 + 0x50) != (uint)uVar4) {
        func_0x00010bed76c0(param_1);
      }
    }
    else if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
      _objc_retain(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
      _objc_release(uVar4);
      func_0x00010bed76c0(param_1);
      func_0x00010c128b60(*(undefined8 *)(param_1 + 0x20));
      lVar7 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf529e0(uVar2);
      func_0x00010c267780(lVar7);
      _objc_release(lVar7);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf408e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069fe0();
      _objc_release(uVar9);
      _objc_initWeak(auStack_f8,param_1);
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_copyWeak(auStack_108,auStack_f8);
      _objc_retain(uVar2);
      _objc_retain(lVar8);
      uStack_100 = (undefined1)uVar4;
      func_0x00010c0f9680(puVar3);
      _objc_release(lVar8);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_108);
      _objc_destroyWeak(auStack_f8);
    }
    _objc_release(lVar8);
    _objc_release(uVar1);
  }
  _objc_release(lVar6);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106a06538; end: 106a06657;  */

void FUN_106a06538(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be45840();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a06658; end: 106a067af;  */

void FUN_106a06658(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_58,lVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0f8420(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106a067b0; end: 106a06a3b;  */

void FUN_106a067b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = uVar7;
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6d000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be38e80(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c100(uVar7,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0674e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be38e80(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066a40(uVar7,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be38e80(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128de0(uVar7,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c0d19c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar4);
          }
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          uVar2 = uVar7;
          func_0x00010bfba9a0(uVar7);
          func_0x00010bfed020(puVar5,param_2,uVar2,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010c2719c0(uVar7);
          func_0x00010bfed020(puVar6,param_2,uVar7,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d1540(*(undefined8 *)(lVar1 + 0x20),param_2,puVar5,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bed76c0(*(undefined8 *)(lVar1 + 0x20),param_2,*(undefined1 *)(lVar1 + 0x30));
  lVar3 = *(long *)(lVar1 + 0x20) + 0xa8;
  _objc_loadWeakRetained(lVar3);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010bf529e0(uVar7);
  func_0x00010c267780(lVar3,param_2,uVar2,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106a06a3c; end: 106a06a97;  */

void FUN_106a06a3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bed76c0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x20) + 0xa8;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf529e0(uVar3);
  func_0x00010c267780(lVar2,param_2,uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a06a98; end: 106a06b7f; -[SCGalleryStoriesTabV2Controller _indexPathsFromIndexSet:] */

void FUN_106a06a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a06b34;
  puStack_30 = &UNK_110866258;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010bf97bc0(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a06b80; end: 106a06be7; -[SCGalleryStoriesTabV2Controller emptyStateViewDidTapButton] */

void FUN_106a06b80(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2678a0();
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152300();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a06be8; end: 106a06cbb; -[SCGalleryStoriesTabV2Controller _setUpEmptyStateForActiveSearchIfNeeded] */

/* WARNING: Possible PIC construction at 0x000106a06ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a06ca8) */

void FUN_106a06be8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x88);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc();
        func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x18));
        func_0x00010c013de0();
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        *(undefined **)(param_1 + 0x40) = puVar3;
        _objc_release(uVar2);
        puVar3 = PTR_PTR_1126cfba8;
        _objc_alloc();
        func_0x00010c055880();
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        *(undefined **)(param_1 + 0x48) = puVar3;
        _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_addSubview__11259c880,
                   *(undefined8 *)(param_1 + 0x48));
        return;
      }
    }
    else if (*(long *)(param_1 + 0x40) != 0) {
      func_0x00010c12c960();
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 106a06cbc; end: 106a06cff; -[SCGalleryStoriesTabV2Controller _cleanUpEmptyStateForActiveSearchIfNeeded] */

void FUN_106a06cbc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x40));
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a06d00; end: 106a07163; -[SCGalleryStoriesTabV2Controller _updateEmptyStateView:] */

undefined8 FUN_106a06d00(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x80);
  func_0x00010c07d540();
  if ((int)lVar1 != 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bea92f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__setUpEmptyStateForActiveSearchI_112587e60);
      return param_1;
    }
    goto LAB_106a07160;
  }
  lVar1 = param_2;
  func_0x00010bddf0e0();
  *(undefined1 *)(param_2 + 0x50) = param_4;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar1 = *(long *)(param_2 + 0x88);
    if ((lVar1 == 0) || (func_0x00010bf529e0(), lVar1 != 0)) {
      if (*(long *)(param_2 + 0x40) != 0) {
        lVar1 = param_2 + 8;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c12b760();
        _objc_release(lVar1);
        uVar2 = *(undefined8 *)(param_2 + 0x38);
        *(undefined8 *)(param_2 + 0x38) = 0;
        _objc_release(uVar2);
        func_0x00010c12c960(*(undefined8 *)(param_2 + 0x40));
        lVar1 = *(long *)(param_2 + 0x40);
        *(undefined8 *)(param_2 + 0x40) = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)();
          return param_1;
        }
        goto LAB_106a07160;
      }
    }
    else {
      if (*(long *)(param_2 + 0x40) != 0) {
        lVar1 = *(long *)(param_2 + 0x38);
        uVar2 = 2;
        if (*(char *)(param_2 + 0x50) == '\0') {
          uVar2 = 3;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010c28b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (lVar1,PTR_s_updateToNewStoriesViewType_deleg_1126806c0,uVar2,param_2);
          return param_1;
        }
        goto LAB_106a07160;
      }
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x18));
      func_0x00010c013de0();
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      *(undefined **)(param_2 + 0x40) = puVar3;
      _objc_release(uVar2);
      if (*(long *)(param_2 + 0x38) == 0) {
        puVar3 = PTR_PTR_1126c3a20;
        _objc_alloc();
        func_0x00010c062200();
        uVar2 = *(undefined8 *)(param_2 + 0x38);
        *(undefined **)(param_2 + 0x38) = puVar3;
        _objc_release(uVar2);
      }
      lVar1 = param_2 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bef76e0();
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0;
      uVar6 = uVar2;
      func_0x00010bf493c0(0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c2793a0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010bf1ff80(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar16;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar19);
      _objc_release(uVar18);
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
      _objc_release(uVar2);
      _objc_release(uVar4);
      lVar1 = *(long *)(param_2 + 0x18);
      func_0x00010befbb60();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return param_1;
  }
LAB_106a07160:
  ___stack_chk_fail();
  return *(undefined8 *)(lVar1 + 0xb8);
}



/* Entry: 106a07164; end: 106a0716f; -[SCGalleryStoriesTabV2Controller scrollContentInset] */

undefined8 FUN_106a07164(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106a07170; end: 106a07177; -[SCGalleryStoriesTabV2Controller visible] */

undefined1 FUN_106a07170(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



/* Entry: 106a07178; end: 106a0717f; -[SCGalleryStoriesTabV2Controller focused] */

undefined1 FUN_106a07178(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa1);
}



/* Entry: 106a07180; end: 106a07187; -[SCGalleryStoriesTabV2Controller loading] */

undefined1 FUN_106a07180(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa2);
}



/* Entry: 106a07188; end: 106a0718f; -[SCGalleryStoriesTabV2Controller selectMode] */

undefined1 FUN_106a07188(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa3);
}



/* Entry: 106a07190; end: 106a071a7; -[SCGalleryStoriesTabV2Controller delegate] */

void FUN_106a07190(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a071a8; end: 106a071b3; -[SCGalleryStoriesTabV2Controller setDelegate:] */

void FUN_106a071a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106a071b4; end: 106a071bb; -[SCGalleryStoriesTabV2Controller tabType] */

undefined8 FUN_106a071b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106a071bc; end: 106a0728f; -[SCGalleryStoriesTabV2Controller .cxx_destruct] */

void FUN_106a071bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a07290; end: 106a072e3; -[SCMemoriesStoriesTabDataSourceCoordinator updateEntries:] */

void FUN_106a07290(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c071b60(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a072e4; end: 106a0741f; -[SCMemoriesStoriesTabDataSourceCoordinator hasEnoughEligibleEntriesForStoryEditing] */

long FUN_106a072e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    lVar7 = 0;
    if (lVar3 != 0) {
      do {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          uVar6 = *(ulong *)(lVar7 * 8);
          uVar4 = uVar6;
          func_0x00010c07b240();
          if (((uVar4 & 1) == 0) && (uVar4 = uVar6, func_0x00010c080ca0(), (uVar4 & 1) == 0)) {
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if ((uVar6 & 0xfffffffffffffffb) == 0) {
              lVar7 = 1;
              goto LAB_106a073e0;
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      lVar7 = 0;
    }
LAB_106a073e0:
    _objc_release(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar2 = lVar2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar2,0);
    return lVar2;
  }
  return lVar7;
}



/* Entry: 106a07420; end: 106a0742b; -[SCMemoriesStoriesTabDataSourceCoordinator .cxx_destruct] */

void FUN_106a07420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a0742c; end: 106a078cb; -[SCMemoriesStoriesTabService initWithMemoriesInlineSearchDataServices:musicMediaLoader:featureSettingsService:encryptedContentManager:cachingMediaManager:editDataMutator:memoriesMergedDataSource:galleryLogger:memoriesExperimentService:dataObjectContext:favoriteSnapsStoryScopeExposer:consolidatedAutoSavedStoriesScopeExposer:legacyOperaPresenterBuilder:memoriesActionMenuScopeExposer:memoriesActionMenuScopeServices:memoriesEntryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:favoriteSnapsStoryDataCoordinator:consolidatedAutoSavedStoriesDataCoordinator:circumstanceEngine:memoriesMonetizationServices:] */

undefined8 *
FUN_106a0742c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126f4330;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[7];
    puVar1[7] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[4];
    puVar1[4] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[5];
    puVar1[5] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[2];
    puVar1[2] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[6];
    puVar1[6] = param_16;
    _objc_release(uVar2);
    puVar1[1] = 0;
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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



/* Entry: 106a078cc; end: 106a07a97; -[SCMemoriesStoriesTabService presentConsolidatedAutoSaveStoriesFromViewController:scopeDelegate:isMyStory:customStoryEntryExternalId:storyTitle:dataCoordinator:] */

void FUN_106a078cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_3);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0311a0(puVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126cfbb0;
  _objc_alloc(PTR_PTR_1126cfbb0);
  func_0x00010c041f40();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a07a98; end: 106a07b07;  */

void FUN_106a07a98(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a07b08; end: 106a07b1b;  */

void FUN_106a07b08(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a07b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 106a07b1c; end: 106a07b63; -[SCMemoriesStoriesTabService cleanUpConsolidatedAutoSaveStoriesScope] */

void FUN_106a07b1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a07b64; end: 106a07cbf; -[SCMemoriesStoriesTabService presentFavoriteSnapsStoryFromViewController:scopeDelegate:dataCoordinator:] */

void FUN_106a07b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_3);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126cfbb8;
  _objc_alloc(PTR_PTR_1126cfbb8);
  func_0x00010c041f20();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a07cc0; end: 106a07d2f;  */

void FUN_106a07cc0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a07d30; end: 106a07d43;  */

void FUN_106a07d30(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a07d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 106a07d44; end: 106a07d8b; -[SCMemoriesStoriesTabService cleanUpFavoriteSnapsStoryScope] */

void FUN_106a07d44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a07d8c; end: 106a07f1b; -[SCMemoriesStoriesTabService presentActionMenuForGalleryItem:storyCellType:dataSource:delegate:sourcePageName:sourceView:viewController:] */

void FUN_106a07d8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b2230;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01fce0();
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010bdc45a0(param_1,param_2,param_4);
  lVar3 = param_1;
  func_0x00010bdc4560(param_1,param_2,param_4);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = param_9;
  func_0x00010c0d66a0(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22900(uVar6,param_2,puVar1,param_7,param_8,uVar5,lVar2,lVar3,2,param_6,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 106a07f1c; end: 106a080f3; -[SCMemoriesStoriesTabService _presentOperaForGalleryItems:initialIndex:galleryItemIdToSnapsMap:snapId:delegate:viewController:pageHeight:sourcePageName:sourceView:sourceImage:topInset:transitionMode:browseStyle:] */

void FUN_106a07f1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_3 + 8) = param_16;
  puVar1 = PTR_PTR_1126b2208;
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x000108ec17a8(*(undefined8 *)(param_3 + 0xb8),0x200);
  func_0x00010bff9720(puVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf22080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c10d600(param_1,param_2,*(undefined8 *)(param_3 + 0x18));
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a080f4; end: 106a08123; -[SCMemoriesStoriesTabService presentOperaForGalleryItems:initialIndex:galleryItemIdToSnapsMap:snapId:delegate:viewController:pageHeight:sourcePageName:sourceView:sourceImage:topInset:transitionMode:] */

void FUN_106a080f4(void)

{
  func_0x00010be7cfc0();
  return;
}



/* Entry: 106a08124; end: 106a082fb; -[SCMemoriesStoriesTabService presentOperaForGalleryItem:snaps:snapId:delegate:viewController:pageHeight:sourcePageName:sourceView:sourceImage:topInset:transitionMode:] */

long FUN_106a08124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_5;
    func_0x00010bfbd0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_88 = lVar1;
    lStack_80 = param_6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&lStack_80,&lStack_88,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7cfc0(param_1,param_2,param_3,param_4,puVar2,0,puVar3,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_5;
  }
  ___stack_chk_fail();
  return *(long *)(param_5 + 8);
}



/* Entry: 106a082fc; end: 106a08303; -[SCMemoriesStoriesTabService currentTransitionMode] */

undefined8 FUN_106a082fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a08304; end: 106a08317; -[SCMemoriesStoriesTabService cleanUpOperaPresenter] */

void FUN_106a08304(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a08318; end: 106a0832b; -[SCMemoriesStoriesTabService _actionMenuTypeForStoryCellType:] */

undefined8 FUN_106a08318(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (1 < param_3 - 1U) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106a0832c; end: 106a0833f; -[SCMemoriesStoriesTabService _actionMenuSubTypeForStoryCellType:] */

ulong FUN_106a0832c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 != 2) {
    param_3 = (ulong)(param_3 == 1);
  }
  return param_3;
}



/* Entry: 106a08340; end: 106a08347; -[SCMemoriesStoriesTabService memoriesInlineSearchDataServices] */

undefined8 FUN_106a08340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106a08348; end: 106a0834f; -[SCMemoriesStoriesTabService musicMediaLoader] */

undefined8 FUN_106a08348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106a08350; end: 106a08357; -[SCMemoriesStoriesTabService featureSettingsService] */

undefined8 FUN_106a08350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106a08358; end: 106a0835f; -[SCMemoriesStoriesTabService encryptedContentManager] */

undefined8 FUN_106a08358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106a08360; end: 106a08367; -[SCMemoriesStoriesTabService cachingMediaManager] */

undefined8 FUN_106a08360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106a08368; end: 106a0836f; -[SCMemoriesStoriesTabService editDataMutator] */

undefined8 FUN_106a08368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106a08370; end: 106a08377; -[SCMemoriesStoriesTabService memoriesMergedDataSource] */

undefined8 FUN_106a08370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106a08378; end: 106a0837f; -[SCMemoriesStoriesTabService galleryLogger] */

undefined8 FUN_106a08378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106a08380; end: 106a08387; -[SCMemoriesStoriesTabService memoriesExperimentService] */

undefined8 FUN_106a08380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106a08388; end: 106a0838f; -[SCMemoriesStoriesTabService dataObjectContext] */

undefined8 FUN_106a08388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106a08390; end: 106a08397; -[SCMemoriesStoriesTabService memoriesEntryThumbnailGeneratorBuilder] */

undefined8 FUN_106a08390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106a08398; end: 106a0839f; -[SCMemoriesStoriesTabService memoriesSnapThumbnailGeneratorBuilder] */

undefined8 FUN_106a08398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106a083a0; end: 106a083a7; -[SCMemoriesStoriesTabService memoriesEntrySyncStatusGeneratorBuilder] */

undefined8 FUN_106a083a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106a083a8; end: 106a083af; -[SCMemoriesStoriesTabService favoriteSnapsStoryDataCoordinator] */

undefined8 FUN_106a083a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106a083b0; end: 106a083b7; -[SCMemoriesStoriesTabService consolidatedAutoSavedStoriesDataCoordinator] */

undefined8 FUN_106a083b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106a083b8; end: 106a083bf; -[SCMemoriesStoriesTabService circumstanceEngine] */

undefined8 FUN_106a083b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106a083c0; end: 106a083c7; -[SCMemoriesStoriesTabService memoriesMonetizationServices] */

undefined8 FUN_106a083c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106a083c8; end: 106a084f3; -[SCMemoriesStoriesTabService .cxx_destruct] */

void FUN_106a083c8(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106a084f4; end: 106a08567; -[SCMemoriesStoriesTabServices initWithMemoriesStoriesTabService:] */

undefined1 * FUN_106a084f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4338;
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



/* Entry: 106a08568; end: 106a0856f; -[SCMemoriesStoriesTabServices memoriesStoriesTabService] */

undefined8 FUN_106a08568(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a08570; end: 106a0857b; -[SCMemoriesStoriesTabServices .cxx_destruct] */

void FUN_106a08570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a0857c; end: 106a08693; -[SCMemoriesStoriesTabServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a0857c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cfbc0;
  _objc_alloc(PTR_PTR_1126cfbc0);
  func_0x00010c02af80();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112755cac);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a08694; end: 106a086d3;  */

void FUN_106a08694(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a086d4; end: 106a08be3; -[SCMemoriesStoriesTabServicesEntryPoint _memoriesStoriesTabService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a086d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uStack_c8;
  undefined8 uStack_78;
  
  lVar1 = param_1;
  func_0x00010bded9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdec480();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cfbc8;
  _objc_alloc();
  if (param_1 == 0) {
    uStack_78 = 0;
    lVar23 = 0;
  }
  else {
    uStack_78 = param_1 + _DAT_112755c6c;
    _objc_loadWeakRetained();
    lVar23 = param_1 + _DAT_112755c78;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar23;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_106a08be4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112755c84;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar24;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112755c80;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar25;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112755c70;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar26;
  func_0x00010bf8c440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106a08c08();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112755c88;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar27;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112755c8c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar28;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112755c74;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar29;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar15 = 0;
    uStack_c8 = 0;
    lVar30 = 0;
  }
  else {
    uStack_c8 = *(undefined8 *)(param_1 + _DAT_112755ca4);
    _objc_retain();
    uVar15 = *(undefined8 *)(param_1 + _DAT_112755ca8);
    _objc_retain();
    lVar30 = param_1 + _DAT_112755c90;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar30;
  func_0x00010c0eada0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar34 = 0;
    uVar35 = 0;
    lVar31 = 0;
  }
  else {
    uVar35 = *(undefined8 *)(param_1 + _DAT_112755cb4);
    _objc_retain(uVar35);
    lVar34 = param_1 + _DAT_112755cb8;
    _objc_loadWeakRetained();
    lVar31 = param_1 + _DAT_112755c94;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar31;
  func_0x00010bf97800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112755c9c;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar32;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112755c98;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar33;
  func_0x00010c2666c0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x000106a08c2c();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = 0;
  if (param_1 != 0) {
    lVar22 = param_1 + _DAT_112755cb0;
    _objc_loadWeakRetained();
  }
  func_0x00010c02a700(puVar3,param_2,uStack_78,lVar4,lVar6,lVar7,lVar8,lVar9,lVar11,lVar12,lVar13,
                      lVar14,uStack_c8,uVar15,lVar16,uVar35,lVar34,lVar17,lVar18,lVar19,lVar1,lVar2,
                      lVar21,lVar22);
  _objc_release(uVar35);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar33);
  _objc_release(lVar18);
  _objc_release(lVar32);
  _objc_release(lVar17);
  _objc_release(lVar31);
  _objc_release(lVar34);
  _objc_release(uVar15);
  _objc_release(lVar16);
  _objc_release(lVar30);
  _objc_release(uStack_c8);
  _objc_release(lVar14);
  _objc_release(lVar29);
  _objc_release(lVar13);
  _objc_release(lVar28);
  _objc_release(lVar12);
  _objc_release(lVar27);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar26);
  _objc_release(lVar8);
  _objc_release(lVar25);
  _objc_release(lVar7);
  _objc_release(lVar24);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar23);
  _objc_release(uStack_78);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a08be4; end: 106a08c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a08be4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112755c68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a08c50; end: 106a08d4b; -[SCMemoriesStoriesTabServicesEntryPoint _createFavoriteSnapsStoryDataCoordinator] */

void FUN_106a08c50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cfbd0;
  _objc_alloc(PTR_PTR_1126cfbd0);
  uVar2 = param_1;
  FUN_106a08be4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x000106a08c08(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106a08c2c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ee0(puVar1,param_2,uVar3,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a08d4c; end: 106a08e6f; -[SCMemoriesStoriesTabServicesEntryPoint _createConsolidatedAutoSavedStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a08d4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126cfbd8;
  _objc_alloc(PTR_PTR_1126cfbd8);
  lVar2 = param_1;
  func_0x000106a08c08(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112755ca0;
    _objc_loadWeakRetained(lVar7);
  }
  lVar5 = lVar7;
  func_0x00010bf62060(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106a08c2c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b220(puVar1,param_2,lVar4,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a08e70; end: 106a08fb3; -[SCMemoriesStoriesTabServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a08e70(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112755cb8);
  _objc_storeStrong(param_1 + _DAT_112755cb4,0);
  _objc_destroyWeak(param_1 + _DAT_112755cb0);
  _objc_storeStrong(param_1 + _DAT_112755cac,0);
  _objc_storeStrong(param_1 + _DAT_112755ca8,0);
  _objc_storeStrong(param_1 + _DAT_112755ca4,0);
  _objc_destroyWeak(param_1 + _DAT_112755ca0);
  _objc_destroyWeak(param_1 + _DAT_112755c9c);
  _objc_destroyWeak(param_1 + _DAT_112755c98);
  _objc_destroyWeak(param_1 + _DAT_112755c94);
  _objc_destroyWeak(param_1 + _DAT_112755c90);
  _objc_destroyWeak(param_1 + _DAT_112755c8c);
  _objc_destroyWeak(param_1 + _DAT_112755c88);
  _objc_destroyWeak(param_1 + _DAT_112755c84);
  _objc_destroyWeak(param_1 + _DAT_112755c80);
  _objc_destroyWeak(param_1 + _DAT_112755c7c);
  _objc_destroyWeak(param_1 + _DAT_112755c78);
  _objc_destroyWeak(param_1 + _DAT_112755c74);
  _objc_destroyWeak(param_1 + _DAT_112755c70);
  _objc_destroyWeak(param_1 + _DAT_112755c6c);
  _objc_destroyWeak(param_1 + _DAT_112755c68);
  _objc_destroyWeak(param_1 + _DAT_112755c64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112755c60);
  return;
}



/* Entry: 106a08fb4; end: 106a092b7; -[SCChatMediaDrawerCollectionViewCellSelectionBadgingView initWithRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a08fb4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126f4340;
  puVar1 = &uStack_a8;
  uStack_a8 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  puVar9 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112755cbc) = 0x7fffffffffffffff;
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar11 = (long)_DAT_112755cc0;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010befbb60(puVar1);
    func_0x00010be06780(param_1,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf34860(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puStack_88 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf348e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar10);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf49420(param_1 + param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puStack_98 = puVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf49420(param_1 + param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c1f5ec0(param_1,puVar1);
    param_4 = 0;
    func_0x00010bea72a0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_112755cbc;
  puVar1 = puVar9;
  if (param_4 != *(long *)((long)puVar9 + lVar11)) {
    func_0x00010bea72a0();
    if (param_4 != 0x7fffffffffffffff) {
      puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)((long)puVar9 + (long)_DAT_112755cc0));
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
    *(long *)((long)puVar9 + lVar11) = param_4;
  }
  return puVar1;
}



/* Entry: 106a092b8; end: 106a09367; -[SCChatMediaDrawerCollectionViewCellSelectionBadgingView setIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a092b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112755cbc;
  if (param_3 != *(long *)(param_1 + lVar3)) {
    func_0x00010bea72a0(param_1,param_2,param_3 != 0x7fffffffffffffff);
    if (param_3 != 0x7fffffffffffffff) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 + 1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112755cc0),param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    *(long *)(param_1 + lVar3) = param_3;
  }
  return;
}



/* Entry: 106a09368; end: 106a094bf; -[SCChatMediaDrawerCollectionViewCellSelectionBadgingView _drawSelectingIndicatorLayerWithRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a09368(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112755cc4;
  if (*(long *)(param_2 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,param_1 + param_1,param_1 + param_1,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(uVar3,param_3,puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_2 + lVar4),param_3,puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_2 + lVar4),param_3,puVar2);
  _objc_release(puVar1);
  func_0x00010c1bdd00(0x3ff0000000000000,*(undefined8 *)(param_2 + lVar4));
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a094c0; end: 106a09563; -[SCChatMediaDrawerCollectionViewCellSelectionBadgingView _setSelectedMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a094c0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  bVar3 = param_3 == 0;
  uVar5 = 0x3ff0000000000000;
  if (bVar3) {
    uVar5 = 0;
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = 0x3f800000;
  }
  uVar1 = 0x6a;
  if (bVar3) {
    uVar1 = 0xd6;
  }
  func_0x00010c1677c0(uVar5,*(undefined8 *)(param_1 + _DAT_112755cc0));
  func_0x00010c1d4bc0(uVar2,*(undefined8 *)(param_1 + _DAT_112755cc4));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106a09564; end: 106a095a3; -[SCChatMediaDrawerCollectionViewCellSelectionBadgingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a09564(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755cc4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755cc0,0);
  return;
}



/* Entry: 106a095a4; end: 106a099c7; -[SCChatMediaDrawerCollectionViewEditButton initWithRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a095a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f4348;
  puVar18 = &uStack_b8;
  uStack_b8 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar18,
                      PTR_s_initWithFrame__1125e2948);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puVar17 = puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar1);
    func_0x00010befbb60(puVar18);
    func_0x00010c219b60(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf49420(param_1 + param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar18;
    puStack_88 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49420(param_1 + param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar18;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_a8 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_a0 = puVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar18;
    func_0x00010c274200(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    puStack_98 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x00010bf1ff80(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1f5ec0(param_1,puVar3);
    func_0x00010c1f5ec0(param_1,puVar18);
    param_4 = puVar18;
    func_0x00010befbd60(puVar3);
    uVar16 = *(undefined8 *)((long)puVar18 + (long)_DAT_112755cc8);
    *(undefined **)((long)puVar18 + (long)_DAT_112755cc8) = puVar3;
    _objc_release(uVar16);
    func_0x00010c1677c0(0);
    *(undefined1 *)((long)puVar18 + (long)_DAT_112755ccc) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar18;
  }
  ___stack_chk_fail();
  _objc_retainBlock();
  puVar18 = *(undefined8 **)((long)puVar17 + (long)_DAT_112755cd0);
  *(undefined8 **)((long)puVar17 + (long)_DAT_112755cd0) = param_4;
  _objc_release(puVar18);
  *(undefined1 *)((long)puVar17 + (long)_DAT_112755ccc) = 1;
  return puVar18;
}



/* Entry: 106a099c8; end: 106a09a13; -[SCChatMediaDrawerCollectionViewEditButton setEditActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a099c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755cd0);
  *(undefined8 *)(param_1 + _DAT_112755cd0) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112755ccc) = 1;
  return;
}



/* Entry: 106a09a14; end: 106a09a2b; -[SCChatMediaDrawerCollectionViewEditButton setSelectedIndex:] */

void FUN_106a09a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0x7fffffffffffffff) {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a09a2c; end: 106a09aef; -[SCChatMediaDrawerCollectionViewEditButton hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a09a2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_5);
  puVar2 = *(undefined1 **)(param_3 + _DAT_112755cc8);
  func_0x00010bf51200(param_1,param_2,puVar2);
  func_0x00010bfe3a40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1126f4348;
    lStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&lStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)plVar1;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a09af0; end: 106a09b0b; -[SCChatMediaDrawerCollectionViewEditButton _editTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a09af0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112755cd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a09b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112755cd0) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106a09b0c; end: 106a09b4b; -[SCChatMediaDrawerCollectionViewEditButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a09b0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755cd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755cc8,0);
  return;
}



/* Entry: 106a09b4c; end: 106a09b57; -[SCFeatureSettingsService isHasSeenConsolidatedStoryPageAvailable] */

void FUN_106a09b4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e67718);
  return;
}



/* Entry: 106a09b58; end: 106a09b63; -[SCFeatureSettingsService hasSeenConsolidatedStoryPageServerParam] */

undefined ** FUN_106a09b58(void)

{
  return &PTR____CFConstantStringClassReference_110e67718;
}



/* Entry: 106a09b64; end: 106a09b73; -[SCFeatureSettingsService setHasSeenConsolidatedStoryPage:] */

void FUN_106a09b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e67718,param_3);
  return;
}



/* Entry: 106a09b74; end: 106a09b7b; -[SCFeatureSettingsService has_seen_consolidated_story_page_client_value:] */

undefined * FUN_106a09b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106a09b7c; end: 106a09b83; -[SCFeatureSettingsService has_seen_consolidated_story_page_server_value:] */

void FUN_106a09b7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a09b84; end: 106a09b93; -[SCFeatureSettingsService hasSeenConsolidatedStoryPage] */

void FUN_106a09b84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e67718,0);
  return;
}



/* Entry: 106a09b94; end: 106a09b9f; -[SCFeatureSettingsService isHideLegacyAutoSavedStoriesAvailable] */

void FUN_106a09b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e67738);
  return;
}



/* Entry: 106a09ba0; end: 106a09bab; -[SCFeatureSettingsService hideLegacyAutoSavedStoriesServerParam] */

undefined ** FUN_106a09ba0(void)

{
  return &PTR____CFConstantStringClassReference_110e67738;
}


