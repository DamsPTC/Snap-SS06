/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ee4780; end: 108ee481f; -[SCActionBarSaveButton savedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126b0c40;
  lVar5 = (long)_DAT_11277d79c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x82,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108ee4820; end: 108ee48ab; -[SCActionBarSaveButton setSaved:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4820(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  *(byte *)(param_1 + _DAT_11277d7a0) = param_3;
  if ((param_3 & 1) == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277d798),param_2,
                        *(undefined8 *)(param_1 + _DAT_11277d794));
    ppuVar2 = &PTR____CFConstantStringClassReference_110dba718;
  }
  else {
    lVar1 = param_1;
    func_0x00010c14b960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277d798));
    _objc_release(lVar1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f02e18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessibilityLabel__112635e28,ppuVar2);
  return;
}



/* Entry: 108ee48ac; end: 108ee4933; -[SCActionBarSaveButton setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee48ac(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(char *)(param_1 + (long)_DAT_11277d790) = (char)param_3;
  uVar3 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar3 = 0x3fe0000000000000;
  }
  func_0x00010c1677c0(uVar3);
  func_0x00010c21e900(param_1);
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x00010beecfa0(param_1);
    uVar1 = *(ulong *)PTR__UIAccessibilityTraitNotEnabled_110345950 | uVar1;
  }
  else {
    uVar2 = *(ulong *)PTR__UIAccessibilityTraitNotEnabled_110345950;
    uVar1 = param_1;
    func_0x00010beecfa0(param_1);
    uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c161090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessibilityTraits__112635e40,uVar1);
  return;
}



/* Entry: 108ee4934; end: 108ee4947; -[SCActionBarSaveButton startAnimationForSaving] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,*(undefined8 *)(param_1 + _DAT_11277d798),PTR_s_setAlpha__112637810)
  ;
  return;
}



/* Entry: 108ee4948; end: 108ee497f; -[SCActionBarSaveButton startAnimationForSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4948(long param_1)

{
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11277d798));
                    /* WARNING: Could not recover jumptable at 0x00010c1f5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSaved__11265b0e8,1);
  return;
}



/* Entry: 108ee4980; end: 108ee4983; -[SCActionBarSaveButton updateLabelWithText:shouldShow:] */

void FUN_108ee4980(void)

{
  return;
}



/* Entry: 108ee4984; end: 108ee49b7; -[SCActionBarSaveButton reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4984(long param_1,undefined8 param_2)

{
  func_0x00010c1f5b00(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11277d798),PTR_s_setAlpha__112637810)
  ;
  return;
}



/* Entry: 108ee49b8; end: 108ee49c7; -[SCActionBarSaveButton isSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ee49b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d7a0);
}



/* Entry: 108ee49c8; end: 108ee49d7; -[SCActionBarSaveButton isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ee49c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d790);
}



/* Entry: 108ee49d8; end: 108ee4a27; -[SCActionBarSaveButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee49d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d79c,0);
  _objc_storeStrong(param_1 + _DAT_11277d794,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d798,0);
  return;
}



/* Entry: 108ee4a28; end: 108ee4b1b; -[SCSendConfirmationContainerView allPersonRecipients] */

void FUN_108ee4a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb8920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c11e2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4a3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c294720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ee4b1c; end: 108ee4b3f; -[SCSendConfirmationContainerView setAddToMyStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4b1c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11277d7ac) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277d7ac) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bede650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRecipientsAnimated__112595338,1);
  return;
}



/* Entry: 108ee4b40; end: 108ee4baf; -[SCSendConfirmationContainerView setFriendRecipients:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4b40(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277d7b0;
  uVar1 = param_3;
  func_0x00010c071b60(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010bede640(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee4bb0; end: 108ee4c1f; -[SCSendConfirmationContainerView setSharedStoriesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4bb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277d7b4;
  uVar1 = param_3;
  func_0x00010c071b60(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010bede640(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee4c20; end: 108ee4c8f; -[SCSendConfirmationContainerView setMischiefsSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4c20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277d7b8;
  uVar1 = param_3;
  func_0x00010c071b60(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010bede640(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee4c90; end: 108ee4cff; -[SCSendConfirmationContainerView setGroupStoriesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4c90(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277d7bc;
  uVar1 = param_3;
  func_0x00010c071b60(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010bede640(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee4d00; end: 108ee4d6f; -[SCSendConfirmationContainerView setBusinessProfilesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4d00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277d7c0;
  uVar1 = param_3;
  func_0x00010c071b60(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010bede640(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee4d70; end: 108ee4d8f; -[SCSendConfirmationContainerView setQuickSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4d70(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11277d7a4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277d7a4) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010beaac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBackground_1125884a8);
  return;
}



/* Entry: 108ee4d90; end: 108ee4d93; -[SCSendConfirmationContainerView _updateRecipientsAnimated:] */

void FUN_108ee4d90(void)

{
  return;
}



/* Entry: 108ee4d94; end: 108ee4d97; -[SCSendConfirmationContainerView _setupBackground] */

void FUN_108ee4d94(void)

{
  return;
}



/* Entry: 108ee4d98; end: 108ee4d9b; -[SCSendConfirmationContainerView showTapToAddLabel] */

void FUN_108ee4d98(void)

{
  return;
}



/* Entry: 108ee4d9c; end: 108ee4e57; -[SCSendConfirmationContainerView hasSelectedRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ee4d9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf00680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if ((lVar1 == 0) && ((*(byte *)(param_1 + _DAT_11277d7ac) & 1) == 0)) {
    lVar1 = *(long *)(param_1 + _DAT_11277d7b4);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + _DAT_11277d7b8);
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        lVar1 = *(long *)(param_1 + _DAT_11277d7c0);
        func_0x00010bf529e0();
        _objc_release(lVar2);
        if (lVar1 != 0) {
          return true;
        }
        lVar2 = *(long *)(param_1 + _DAT_11277d7bc);
        func_0x00010bf529e0(lVar2);
        return lVar2 != 0;
      }
    }
  }
  _objc_release(lVar2);
  return true;
}



/* Entry: 108ee4e58; end: 108ee4ee3; -[SCSendConfirmationContainerView hasSelectedStories] */

bool FUN_108ee4e58(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010befc200();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c22c040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (uVar3 == 0) {
      func_0x00010bfcf340(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf529e0();
      bVar1 = uVar3 != 0;
      _objc_release(param_1);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 108ee4ee4; end: 108ee4ee7; -[SCSendConfirmationContainerView scrollToLeft] */

void FUN_108ee4ee4(void)

{
  return;
}



/* Entry: 108ee4ee8; end: 108ee4eef; -[SCSendConfirmationContainerView forceUpdateRecipients] */

void FUN_108ee4ee8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bede650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRecipientsAnimated__112595338,0);
  return;
}



/* Entry: 108ee4ef0; end: 108ee4ef7; -[SCSendConfirmationContainerView updateViewModel:] */

void FUN_108ee4ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateViewModel_orderedItemIds__112680a00,param_3,0);
  return;
}



/* Entry: 108ee4ef8; end: 108ee50cb; -[SCSendConfirmationContainerView updateViewModel:orderedItemIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee4ef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277d7c4);
  *(undefined8 *)(param_1 + _DAT_11277d7c4) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010befc200();
  *(char *)(param_1 + _DAT_11277d7ac) = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c0d4bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7c8);
  *(undefined8 *)(param_1 + _DAT_11277d7c8) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010bfb8920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7b0);
  *(undefined8 *)(param_1 + _DAT_11277d7b0) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c11e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7cc);
  *(undefined8 *)(param_1 + _DAT_11277d7cc) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010bf4a3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7d0);
  *(undefined8 *)(param_1 + _DAT_11277d7d0) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c294720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7d4);
  *(undefined8 *)(param_1 + _DAT_11277d7d4) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c22c040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7b4);
  *(undefined8 *)(param_1 + _DAT_11277d7b4) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c0ce9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7b8);
  *(undefined8 *)(param_1 + _DAT_11277d7b8) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010bfcf340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7bc);
  *(undefined8 *)(param_1 + _DAT_11277d7bc) = uVar2;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010bf25220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7c0);
  *(undefined8 *)(param_1 + _DAT_11277d7c0) = uVar2;
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bede650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateRecipientsAnimated__112595338,1);
  return;
}



/* Entry: 108ee50cc; end: 108ee50eb; -[SCSendConfirmationContainerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee50cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ee50ec; end: 108ee50ff; -[SCSendConfirmationContainerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee50ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d7d8,param_3);
  return;
}



/* Entry: 108ee5100; end: 108ee510f; -[SCSendConfirmationContainerView addToMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ee5100(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d7ac);
}



/* Entry: 108ee5110; end: 108ee511f; -[SCSendConfirmationContainerView quickSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ee5110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d7a4);
}



/* Entry: 108ee5120; end: 108ee5137; -[SCSendConfirmationContainerView extendedTapZoneInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee5120(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7a8);
}



/* Entry: 108ee5138; end: 108ee514f; -[SCSendConfirmationContainerView setExtendedTapZoneInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee5138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277d7a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108ee5150; end: 108ee515f; -[SCSendConfirmationContainerView myStoryCustomTTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee5150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7c8);
}



/* Entry: 108ee5160; end: 108ee516f; -[SCSendConfirmationContainerView friendRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee5160(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7b0);
}



/* Entry: 108ee5170; end: 108ee517f; -[SCSendConfirmationContainerView quickAddRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee5170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7cc);
}



/* Entry: 108ee5180; end: 108ee518f; -[SCSendConfirmationContainerView contactSnapchatterRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee5180(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7d0);
}



/* Entry: 108ee5190; end: 108ee519f; -[SCSendConfirmationContainerView usernameSearchedRecipients] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee5190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7d4);
}



/* Entry: 108ee51a0; end: 108ee51af; -[SCSendConfirmationContainerView mischiefsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee51a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7b8);
}



/* Entry: 108ee51b0; end: 108ee51bf; -[SCSendConfirmationContainerView sharedStoriesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee51b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7b4);
}



/* Entry: 108ee51c0; end: 108ee51cf; -[SCSendConfirmationContainerView groupStoriesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee51c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7bc);
}



/* Entry: 108ee51d0; end: 108ee51df; -[SCSendConfirmationContainerView businessProfilesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee51d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7c0);
}



/* Entry: 108ee51e0; end: 108ee51ef; -[SCSendConfirmationContainerView orderedItemIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee51e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d7c4);
}



/* Entry: 108ee51f0; end: 108ee51fb; -[SCSendConfirmationContainerView setOrderedItemIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee51f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ee51fc; end: 108ee52c7; -[SCSendConfirmationContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee51fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d7c4,0);
  _objc_storeStrong(param_1 + _DAT_11277d7c0,0);
  _objc_storeStrong(param_1 + _DAT_11277d7bc,0);
  _objc_storeStrong(param_1 + _DAT_11277d7b4,0);
  _objc_storeStrong(param_1 + _DAT_11277d7b8,0);
  _objc_storeStrong(param_1 + _DAT_11277d7d4,0);
  _objc_storeStrong(param_1 + _DAT_11277d7d0,0);
  _objc_storeStrong(param_1 + _DAT_11277d7cc,0);
  _objc_storeStrong(param_1 + _DAT_11277d7b0,0);
  _objc_storeStrong(param_1 + _DAT_11277d7c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277d7d8);
  return;
}



/* Entry: 108ee52c8; end: 108ee5417; -[SCSendConfirmationRecipientCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ee52c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar5 = (long)_DAT_11277d7dc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar4);
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ee5418; end: 108ee54e7; -[SCSendConfirmationRecipientCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee5418(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff220;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar1 = *(long *)(param_2 + _DAT_11277d7e0);
  func_0x00010c27dd80();
  func_0x00010bf20c00(param_2);
  if (lVar1 != 3) {
    param_1 = param_1 + 0.0;
  }
  lVar1 = (long)_DAT_11277d7dc;
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  uVar2 = *(undefined8 *)(param_2 + lVar1);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 108ee54e8; end: 108ee57ef; -[SCSendConfirmationRecipientCell setLabelInfo:contentHorizontalAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee54e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277d7e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_3;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11277d7dc;
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar6),param_2,uVar2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fe2d2d2d2d2d2d3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar1);
  func_0x00010c161020(param_1,param_2,uVar2);
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010c27dd80();
  if (lVar3 == 3) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar6),param_2,0,0);
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar10 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x00010c181e40(uVar1,uVar9,uVar10,uVar8,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c1aa240(uVar1,uVar9,uVar10,uVar8,*(undefined8 *)(param_1 + lVar6));
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fc3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar5);
    _objc_release(puVar5);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    uVar4 = *(ulong *)(param_1 + lVar7);
    func_0x00010c27dd80();
    puVar5 = (undefined *)0x0;
    if ((uVar4 < 6) && ((0x37U >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,(&PTR_PTR_110aca438)[uVar4]);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9fc0(uVar1,param_2,puVar5,0);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    lVar3 = param_1;
    func_0x00010c15b1c0(param_1);
    func_0x00010c292b00(puVar5,param_2,lVar3);
    uVar1 = 0;
    func_0x00010c181e40(0,0x4028000000000000,0,0x4028000000000000,*(undefined8 *)(param_1 + lVar6));
    uVar8 = 0x4020000000000000;
    if (puVar5 != (undefined *)0x1) {
      uVar8 = 0;
    }
    uVar9 = 0;
    if (puVar5 != (undefined *)0x1) {
      uVar9 = 0x4020000000000000;
    }
    func_0x00010c1aa240(0,uVar8,0,uVar9,*(undefined8 *)(param_1 + lVar6));
    param_4 = 0;
    uVar10 = 0;
  }
  func_0x00010c2163a0(uVar1,uVar9,uVar10,uVar8,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c181ee0(*(undefined8 *)(param_1 + lVar6),param_2,param_4);
  func_0x00010c1cbd40(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee57f0; end: 108ee586f; +[SCSendConfirmationRecipientCell cellWidthForLabelInfo:] */

undefined8
FUN_108ee57f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf85d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c27dd80(param_4);
  _objc_release(param_4);
  func_0x00010bf34440(param_2,param_3,uVar1,uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ee5870; end: 108ee5987; +[SCSendConfirmationRecipientCell cellWidthForDisplayName:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ee5870(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f02e38,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = 17.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  dVar5 = dVar4 + 72.0;
  if (param_4 != 3) {
    dVar4 = dVar5;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return dVar4;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_11277d7e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_11277d7dc,0);
  return dVar5;
}



/* Entry: 108ee5988; end: 108ee59c7; -[SCSendConfirmationRecipientCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee5988(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d7e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d7dc,0);
  return;
}



/* Entry: 108ee59c8; end: 108ee5adb; -[SCSendConfirmationRecipientCellSeparator initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ee59c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11277d7e4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ee5adc; end: 108ee5b33; -[SCSendConfirmationRecipientCellSeparator layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee5adc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff228;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277d7e4));
  return;
}



/* Entry: 108ee5b34; end: 108ee5b8f; +[SCSendConfirmationRecipientCellSeparator viewWidth] */

undefined8 FUN_108ee5b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x4031000000000000;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dce0(&PTR____CFConstantStringClassReference_110dbf078,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 108ee5b90; end: 108ee5ba3; -[SCSendConfirmationRecipientCellSeparator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee5b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d7e4,0);
  return;
}



/* Entry: 108ee5ba4; end: 108ee665f; -[SCSendConfirmationView initWithFrame:showHintLabel:sendToCTAButtonEnabled:showSaveButton:saveButtonEnabled:saveButtonPromise:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ee5ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined1 param_8,
             undefined1 param_9,long param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_a0 = PTR_PTR_1126ff230;
  puVar1 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar13 = (long)_DAT_11277d7f0;
    *(undefined1 *)((long)puVar1 + lVar13) = param_8;
    lVar12 = (long)_DAT_11277d7f4;
    *(undefined1 *)((long)puVar1 + lVar12) = param_9;
    lVar10 = (long)_DAT_11277d7f8;
    *(ulong *)((long)puVar1 + lVar10) = param_7 & 0xffffffff;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d7fc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d7fc) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d800);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d800) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar11 = (long)_DAT_11277d804;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar9);
    _objc_initWeak(auStack_b0,puVar1);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar11);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_108ee6660;
    puStack_c0 = &UNK_110842c58;
    _objc_copyWeak(auStack_b8,auStack_b0);
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bde8180(puVar1);
    func_0x00010c013de0();
    lVar11 = (long)_DAT_11277d808;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar9);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010befbb60(puVar1);
    if (*(char *)((long)puVar1 + lVar12) == '\x01') {
      func_0x00010beaa580(puVar1);
      uVar9 = param_11;
      func_0x00010bf43d60(param_11);
      if (param_10 != 0) {
        func_0x000107c30a80();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_10;
        func_0x00010c0e0ec0(param_10);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_e0,auStack_b0);
        lVar3 = lVar12;
        func_0x00010c25ff60(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar3);
        _objc_release(lVar12);
        _objc_release(uVar9);
        _objc_destroyWeak(auStack_e0);
      }
    }
    if (*(char *)((long)puVar1 + lVar13) == '\x01') {
      func_0x00010bdc7760(puVar1);
    }
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    func_0x00010c1f7ac0();
    func_0x00010c1c82c0(0,puVar2);
    func_0x00010c1c8300(0,puVar2);
    puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010be87100(puVar1);
    func_0x00010c014040();
    lVar12 = (long)_DAT_11277d810;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar4;
    _objc_release(uVar9);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar12));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar4);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    _objc_opt_class(PTR_PTR_1126dc710);
    puVar4 = PTR_PTR_1126dc710;
    _objc_opt_class(PTR_PTR_1126dc710);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(uVar9);
    _objc_release(puVar4);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    _objc_opt_class(PTR_PTR_1126dc718);
    puVar4 = PTR_PTR_1126dc718;
    _objc_opt_class(PTR_PTR_1126dc718);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126060(uVar9);
    _objc_release(puVar4);
    dVar14 = 12.0;
    dVar18 = 10.0;
    func_0x00010c181f80(0x4028000000000000,0x4024000000000000,0x4028000000000000,0x4024000000000000,
                        *(undefined8 *)((long)puVar1 + lVar12));
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c16e9a0(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar4);
    func_0x00010c066fa0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010bf14800(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar9);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010be9ea20(puVar1);
    func_0x00010c013de0();
    lVar12 = (long)_DAT_11277d814;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar5;
    _objc_release(uVar9);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar12));
    puVar5 = *(undefined **)((long)puVar1 + lVar11);
    func_0x00010befbb60(puVar5);
    if (*(long *)((long)puVar1 + lVar10) == 1) {
      FUN_108ee9698();
      _objc_retainAutoreleasedReturnValue();
      dVar14 = 13.0;
      puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dce0(puVar5);
      _objc_release(puVar8);
      if (30.0 < dVar14) {
        *(double *)((long)puVar1 + (long)_DAT_11277d818) = dVar14 + -30.0;
      }
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfe77e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
      _objc_alloc();
      func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar12));
      func_0x00010c013de0();
      lVar10 = (long)_DAT_11277d81c;
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      *(undefined **)((long)puVar1 + lVar10) = puVar8;
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x402e000000000000);
      _objc_release(uVar9);
      func_0x000108ee96b0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar10));
      _objc_release(uVar9);
      func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar10));
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar12));
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      _objc_retain(puVar1);
      func_0x00010c0bbfc0(uVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1a9fc0(*(undefined8 *)((long)puVar1 + lVar10));
      func_0x00010c216260(*(undefined8 *)((long)puVar1 + lVar10));
      puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      func_0x00010c271420(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480();
      _objc_release(uVar9);
      _objc_release(puVar8);
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(uVar9);
      _objc_release(puVar8);
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar9);
      _objc_release(puVar8);
      func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar10));
      puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010c15b1c0(puVar1);
      func_0x00010c292b00();
      if (puVar8 != (undefined *)0x1) {
        dVar14 = -10.0;
        func_0x00010c1aa240(0xc024000000000000,0,0xc024000000000000,
                            *(double *)((long)puVar1 + (long)_DAT_11277d818) * -2.0 + -70.0,
                            *(undefined8 *)((long)puVar1 + lVar10));
        uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
        func_0x00010c23d0a0(puVar7);
        func_0x00010c2163a0(0,dVar14 * -2.0 + 10.0,0,0,uVar9);
      }
      _objc_release(puVar1);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bfe77e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126b6138;
      _objc_alloc();
      func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar12));
      func_0x00010c013de0();
      lVar10 = (long)_DAT_11277d820;
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      *(undefined **)((long)puVar1 + lVar10) = puVar8;
      _objc_release(uVar9);
      func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar10));
      func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar10));
      _CGRectGetWidth();
      dVar15 = dVar14;
      func_0x00010be9ea60(puVar1);
      dVar16 = dVar15;
      func_0x00010c23d0a0(puVar5);
      dVar17 = dVar16;
      func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar10));
      _CGRectGetHeight();
      func_0x00010c23d0a0(puVar5);
      func_0x00010c1aa420(((dVar14 - dVar15) - dVar16) * 0.5,(dVar17 - dVar18) * 0.5,
                          *(undefined8 *)((long)puVar1 + lVar10));
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      func_0x00010c1c3c80(0x3ff3333333333333,uVar9);
      func_0x000108ee96b0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar10));
      _objc_release(uVar9);
      func_0x00010befbd40(*(undefined8 *)((long)puVar1 + lVar10));
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar12));
      uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
      _objc_retain(puVar1);
      func_0x00010c0bbfc0(uVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar7 = puVar1;
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    func_0x00010beaac00(puVar1);
    func_0x00010c1ad9a0(puVar1);
    func_0x00010c1e1600(puVar1);
    func_0x00010c18e200(*(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8,
                        *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8),
                        *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10),
                        *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18),puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 108ee6660; end: 108ee671b;  */

void FUN_108ee6660(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_108ee671c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x00010bcbe2c4("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108ee671c; end: 108ee67b3;  */

void FUN_108ee671c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ee67b4; end: 108ee689b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee67b4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ee689c; end: 108ee69cb; -[SCSendConfirmationView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee689c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff230;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bde8180(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277d808));
  func_0x00010be9ea20(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277d814));
  func_0x00010bdc4220(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277d80c));
  func_0x00010bed2cc0(param_5);
  func_0x00010be87100(param_5);
  lVar3 = (long)_DAT_11277d810;
  uVar1 = *(ulong *)(param_5 + lVar3);
  func_0x00010bfb68e0();
  _CGRectEqualToRect();
  if ((uVar1 & 1) == 0) {
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar3));
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010bf408e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar2);
  }
  func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
                      *(undefined8 *)(param_5 + _DAT_11277d824));
  return;
}



/* Entry: 108ee69cc; end: 108ee6a37; -[SCSendConfirmationView _contentViewFrame] */

double FUN_108ee69cc(double param_1,double param_2,undefined8 param_3)

{
  func_0x00010bf20c00();
  func_0x00010c08cec0(param_3);
  return param_1 + param_2;
}



/* Entry: 108ee6a38; end: 108ee6ae3; -[SCSendConfirmationView _setupActionBarSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee6a38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dc720;
  _objc_alloc();
  func_0x00010bdc4220(param_1);
  func_0x00010c013de0();
  lVar3 = (long)_DAT_11277d80c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d808),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108ee6ae4; end: 108ee6b23; -[SCSendConfirmationView _actionBarSaveButtonFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee6ae4(long param_1)

{
  func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_11277d808));
  _CGRectGetMidY();
  return 0x4024000000000000;
}



/* Entry: 108ee6b24; end: 108ee6b53; -[SCSendConfirmationView _saveButtonTapped] */

void FUN_108ee6b24(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ee6b54; end: 108ee6e9b; -[SCSendConfirmationView _addMoreButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee6b54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  func_0x00010bdc7780(param_1);
  func_0x00010c013de0();
  lVar7 = (long)_DAT_11277d828;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(0x4024000000000000,0,0x4014000000000000,0x4014000000000000);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110f02f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c181e40(0,0x4032000000000000,0,0x4024000000000000,*(undefined8 *)(param_1 + lVar7));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7),param_2,puVar1);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c173280(uVar5,param_2,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar5);
  dVar8 = 11.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c271420(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar5);
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7),param_2,
                      &PTR____CFConstantStringClassReference_110f031d8);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar7));
  _CGRectGetHeight();
  dVar8 = dVar8 * 0.5;
  func_0x00010c1842e0(dVar8,uVar5);
  _objc_release(uVar5);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7),param_2,param_1,
                      PTR_s__addMoreButtonTouchUpInside__11253e4b0,0x40);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7),param_2,param_1,
                      PTR_s__addMoreButtonTouchUpOutside_11253e4b8,0x80);
  puVar1 = PTR_s__addMoreButtonTouchDown_11253e4c0;
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7),param_2,param_1,
                      PTR_s__addMoreButtonTouchDown_11253e4c0,1);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010befbd60(uVar5,param_2,param_1,puVar1,0x20);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010b0af284();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar6,param_2,uVar5,0);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar5,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277d808),param_2,
                      *(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,puVar2);
  func_0x00010bf345e0(puVar2);
  dVar9 = dVar8;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar7));
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar8,dVar9,puVar2);
  func_0x00010bed2cc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ee6e9c; end: 108ee6f0b; -[SCSendConfirmationView _updateAddMoreButtonFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee6e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_11277d828;
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bdc7780(param_5);
  uVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetWidth();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,uVar2,param_4,*(undefined8 *)(param_5 + lVar1),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108ee6f0c; end: 108ee7087; -[SCSendConfirmationView _sendButtonFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ee6f0c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (*(char *)(param_2 + _DAT_11277d7f0) == '\x01') {
    func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11277d808));
    _CGRectGetMaxX();
    dVar3 = param_1;
    func_0x00010be9eaa0(param_2);
    param_1 = param_1 - dVar3;
    func_0x00010be9ea80(param_2);
  }
  else {
    lVar2 = *(long *)(param_2 + _DAT_11277d7f8);
    lVar1 = (long)_DAT_11277d808;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
    _CGRectGetMaxX();
    if (lVar2 == 1) {
      dVar3 = *(double *)(param_2 + _DAT_11277d818);
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
      _CGRectGetMinY();
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
      _CGRectGetHeight();
      return ((param_1 + -70.0) - dVar3) + -13.0;
    }
    dVar3 = param_1;
    func_0x00010be9eaa0(param_2);
    param_1 = param_1 - dVar3;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
    _CGRectGetMinY();
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
    _CGRectGetHeight();
    func_0x00010be9ea40(param_2);
  }
  func_0x00010be9eaa0(param_2);
  func_0x00010be9ea40(param_2);
  return param_1;
}



/* Entry: 108ee7088; end: 108ee70c3; -[SCSendConfirmationView _sendButtonWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ee7088(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277d7f8) == 1) {
    return *(double *)(param_1 + _DAT_11277d818) + 70.0;
  }
  return 62.0;
}



/* Entry: 108ee70c4; end: 108ee70cf; -[SCSendConfirmationView _sendButtonHeight] */

undefined8 FUN_108ee70c4(void)

{
  return 0x404c000000000000;
}



/* Entry: 108ee70d0; end: 108ee70d7; -[SCSendConfirmationView _sendButtonImageRightOffset] */

undefined8 FUN_108ee70d0(void)

{
  return 0;
}



/* Entry: 108ee70d8; end: 108ee7123; -[SCSendConfirmationView _refreshBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee70d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277d828),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ee7124; end: 108ee719f; -[SCSendConfirmationView _addMoreButtonTouchDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee7124(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + _DAT_11277d7f0) == '\x01') {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108ee71a0;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,0)
    ;
  }
  return;
}



/* Entry: 108ee71a0; end: 108ee721b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee71a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277d828);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ee721c; end: 108ee72bf; -[SCSendConfirmationView _addMoreButtonTouchUpInside:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee721c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_11277d7f0) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108ee72c0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,0)
    ;
  }
  func_0x00010be87120(param_1,param_2,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 108ee72c0; end: 108ee72c7;  */

void FUN_108ee72c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be882b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__refreshBackgroundColor_11257fa48);
  return;
}



/* Entry: 108ee72c8; end: 108ee7343; -[SCSendConfirmationView _addMoreButtonTouchUpOutside] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee72c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + _DAT_11277d7f0) == '\x01') {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108ee7344;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,0)
    ;
  }
  return;
}



/* Entry: 108ee7344; end: 108ee734b;  */

void FUN_108ee7344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be882b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__refreshBackgroundColor_11257fa48);
  return;
}



/* Entry: 108ee734c; end: 108ee7383; -[SCSendConfirmationView _addMoreButtonLeftOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ee734c(long param_1)

{
  double dVar1;
  
  dVar1 = 10.0;
  if (*(char *)(param_1 + _DAT_11277d7f4) == '\x01') {
    func_0x00010bdc4220(0x4024000000000000);
    _CGRectGetMaxX();
    dVar1 = dVar1 + 10.0;
  }
  return dVar1;
}



/* Entry: 108ee7384; end: 108ee73ff; -[SCSendConfirmationView _addMoreButtonFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ee7384(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + _DAT_11277d7f0) & 1) == 0) {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  else {
    func_0x00010bdc77a0();
    func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11277d808));
    _CGRectGetMidY();
  }
  return param_1;
}



/* Entry: 108ee7400; end: 108ee744f; -[SCSendConfirmationView _sendButtonTopMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ee7400(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11277d808));
  _CGRectGetMidY();
  dVar1 = param_1;
  func_0x00010be9ea40(param_2);
  return param_1 + dVar1 * -0.5;
}



/* Entry: 108ee7450; end: 108ee761b; -[SCSendConfirmationView showTapToAddLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee7450(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_1 + _DAT_11277d7f0);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar3 = puVar2;
  if (cVar1 == '\x01') {
    func_0x000108ee96e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_58 = puVar4;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &puStack_58;
    puVar8 = &uStack_68;
    puStack_50 = puVar5;
  }
  else {
    func_0x000108ee96c8();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_78 = puVar4;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &puStack_78;
    puVar8 = &uStack_88;
    puStack_70 = puVar5;
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar7,puVar8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2,param_2,puVar3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x00010c11e820();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((int)puVar3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar4);
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108ee761c; end: 108ee76bb; -[SCSendConfirmationView _setupBackground] */

void FUN_108ee761c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c11e820();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((int)uVar1 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar3);
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108ee76bc; end: 108ee7703; -[SCSendConfirmationView scrollToLeft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee76bc(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277d810;
  func_0x00010bf4c7c0(*(undefined8 *)(param_3 + lVar1));
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (-param_2,*(undefined8 *)(param_3 + lVar1),PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 108ee7704; end: 108ee77d7; -[SCSendConfirmationView setExtendedTapZoneInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee7704(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff230;
  lStack_30 = param_5;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setExtendedTapZoneInsets__112643eb8);
  uVar4 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                       *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                              CONCAT24(-(ushort)(param_3 ==
                                                *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10))
                                       ,CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                 -(ushort)(param_1 ==
                                                          *(double *)PTR__UIEdgeInsetsZero_110345bb0
                                                          )))),2);
  if (((uVar4 & 1) == 0) && (lVar3 = (long)_DAT_11277d82c, *(long *)(param_5 + lVar3) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    *(undefined **)(param_5 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bef9040(param_5);
  }
  return;
}



/* Entry: 108ee77d8; end: 108ee78a7; -[SCSendConfirmationView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee77d8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  puStack_48 = PTR_PTR_1126ff230;
  puStack_50 = param_3;
  _objc_msgSendSuper2(&puStack_50,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)ppuVar1;
  if (ppuVar1 == (undefined1 **)0x0) {
    puVar4 = param_3;
    func_0x00010be756e0(param_1,param_2);
    if ((int)puVar4 == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_108ee7834;
    }
    lVar3 = (long)_DAT_11277d820;
    puVar4 = param_3;
    if ((*(long *)(param_3 + lVar3) != 0) &&
       (puVar2 = param_3, func_0x00010be404c0(param_1,param_2), (int)puVar2 != 0)) {
      puVar4 = *(undefined1 **)(param_3 + lVar3);
    }
  }
  _objc_retain(puVar4);
LAB_108ee7834:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ee78a8; end: 108ee792b; -[SCSendConfirmationView _activeSendButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee78a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11277d820);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11277d81c);
    _objc_retain(uVar1);
    if (uVar1 != 0) goto LAB_108ee78e8;
  }
  else {
    _objc_retain(uVar1);
LAB_108ee78e8:
    uVar2 = uVar1;
    func_0x00010c074c20();
    if (((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c082800(), (int)uVar2 != 0)) {
      _objc_retain(uVar1);
      uVar2 = uVar1;
      goto LAB_108ee7914;
    }
  }
  uVar2 = 0;
LAB_108ee7914:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ee792c; end: 108ee7a73; -[SCSendConfirmationView _isExtendedTapZonePointInSendColumn:] */

long FUN_108ee792c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar1 = param_5;
  dVar2 = param_1;
  dVar6 = param_2;
  func_0x00010bdc52c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_5 = 0;
  }
  else {
    func_0x00010bf20c00(lVar1);
    func_0x00010bf51460(lVar1,param_6,param_5);
    dVar11 = dVar2;
    dVar7 = dVar6;
    dVar9 = param_3;
    dVar10 = param_4;
    func_0x00010bf20c00(param_5);
    dVar3 = dVar11;
    dVar4 = dVar7;
    dVar5 = dVar9;
    dVar8 = dVar10;
    func_0x00010bf9dc40(param_5);
    dVar11 = dVar11 + dVar4;
    dVar9 = dVar9 - (dVar4 + dVar8);
    dVar10 = dVar10 - (dVar3 + dVar5);
    dVar4 = dVar2;
    _CGRectGetMinX(dVar2,dVar6,param_3,param_4);
    dVar5 = dVar11;
    _CGRectGetMinY(dVar11,dVar7 + dVar3,dVar9,dVar10);
    _CGRectGetWidth(dVar2,dVar6,param_3,param_4);
    _CGRectGetHeight(dVar11,dVar7 + dVar3,dVar9,dVar10);
    _CGRectContainsPoint(dVar4,dVar5,dVar2,dVar11,param_1,param_2);
  }
  _objc_release(lVar1);
  return param_5;
}



/* Entry: 108ee7a74; end: 108ee7b7b; -[SCSendConfirmationView _pointInsideExtendedTapZone:] */

ulong FUN_108ee7a74(undefined8 param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double dVar1;
  ulong uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x30);
  uVar7 = (undefined2)((ulong)param_1 >> 0x20);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  dVar8 = param_2;
  func_0x00010bf9dc40();
  uVar3 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                       *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                              CONCAT24(-(ushort)(param_3 ==
                                                *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10))
                                       ,CONCAT22(-(ushort)(dVar8 == *(double *)
                                                                     (
                                                  PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar6,CONCAT24(uVar7,
                                                  CONCAT22(uVar5,uVar4))) ==
                                                  *(double *)PTR__UIEdgeInsetsZero_110345bb0)))),2);
  uVar4 = 0;
  uVar5 = 0;
  uVar7 = 0;
  if ((((uVar3 & 1) == 0) && (uVar2 = param_5, func_0x00010c082800(), (int)uVar2 != 0)) &&
     (uVar2 = param_5, func_0x00010c074c20(), (uVar2 & 1) == 0)) {
    func_0x00010bf01b40(param_5);
    dVar8 = 0.01;
    if (0.01 <= (double)CONCAT26(uVar7,CONCAT24(uVar5,CONCAT22(uVar4,uVar3)))) {
      func_0x00010bf20c00(param_5);
      dVar1 = (double)CONCAT26(uVar7,CONCAT24(uVar5,CONCAT22(uVar4,uVar3)));
      dVar9 = dVar8;
      dVar10 = param_3;
      dVar11 = param_4;
      func_0x00010bf9dc40(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CGRectContainsPoint_110347550)
                (SUB82(dVar1 + dVar9,0),
                 dVar8 + (double)CONCAT26(uVar7,CONCAT24(uVar5,CONCAT22(uVar4,uVar3))),
                 param_3 - (dVar9 + dVar11),
                 param_4 - ((double)CONCAT26(uVar7,CONCAT24(uVar5,CONCAT22(uVar4,uVar3))) + dVar10),
                 param_1,param_2);
      return param_5;
    }
  }
  return 0;
}



/* Entry: 108ee7b7c; end: 108ee7bff; -[SCSendConfirmationView _extendedTapZoneTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee7b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11277d820) == 0) {
    func_0x00010c09ef00(param_3,param_2,param_1);
    lVar1 = param_1;
    func_0x00010be404c0();
    if ((int)lVar1 != 0) {
      func_0x00010be9f5e0(param_1);
      goto LAB_108ee7bf0;
    }
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78a80();
  _objc_release(param_1);
LAB_108ee7bf0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ee7c00; end: 108ee7c9f; -[SCSendConfirmationView gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ee7c00(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  
  if (param_5 == *(long *)(param_3 + (long)_DAT_11277d82c)) {
    func_0x00010c09ef00(param_6,param_4,param_3);
    uVar2 = param_3;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bfe3a40(param_1,param_2,param_3,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar2 == param_3;
      _objc_release();
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 108ee7ca0; end: 108ee7cd3; -[SCSendConfirmationView _sendButtonPressed] */

void FUN_108ee7ca0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ee7cd4; end: 108ee7d07; -[SCSendConfirmationView _sendLabelButtonPressed] */

void FUN_108ee7cd4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ee7d08; end: 108ee7d3b; -[SCSendConfirmationView _recipientsScrollViewTapped:] */

void FUN_108ee7d08(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ee7d3c; end: 108ee7dfb; -[SCSendConfirmationView _updateRecipientsAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee7d3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d7fc);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108ee7dfc; end: 108ee7e2f;  */

void FUN_108ee7dfc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ee7e30; end: 108ee805f; -[SCSendConfirmationView _publishLabelInfosWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee7e30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = param_1;
  func_0x00010befc200();
  uVar5 = 0;
  if ((int)lVar3 != 0) {
    func_0x000108f5923c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x00010bdc6980(0,param_1,param_2,lVar3,puVar1,puVar2,0,0,
                        &PTR____CFConstantStringClassReference_110f11bf8);
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010c22c040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd660(uVar5,param_1,param_2,lVar3,puVar1,puVar2,1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bfcf340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd660(uVar5,param_1,param_2,lVar3,puVar1,puVar2,2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf00680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd660(uVar5,param_1,param_2,lVar3,puVar1,puVar2,3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0ce9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd660(uVar5,param_1,param_2,lVar3,puVar1,puVar2,4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf25220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd660(uVar5,param_1,param_2,lVar3,puVar1,puVar2,2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be6e3e0(param_1,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  _objc_release(lVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11277d804),param_2,lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 108ee8060; end: 108ee8237; -[SCSendConfirmationView _updateViewWithLabelInfos:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee8060(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(param_1 + _DAT_11277d7f0) == '\x01') {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11277d830);
    *(undefined8 *)(param_1 + _DAT_11277d830) = uVar1;
    _objc_release(uVar6);
    func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11277d810));
  }
  else {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_11277d830));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf433a0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_initWeak(auStack_48,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108ee8238;
    puStack_70 = &UNK_11087b9c8;
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(param_3);
    ppuVar5 = &puStack_88;
    uStack_68 = param_3;
    puStack_58 = puVar4;
    uStack_50 = param_4;
    _objc_retainBlock();
    if (puVar4 == (undefined *)0x1) {
      func_0x00010be9c120(param_1);
    }
    else {
      (*(code *)ppuVar5[2])(ppuVar5);
    }
    _objc_release(ppuVar5);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ee8238; end: 108ee82c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee8238(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11277d830);
    *(undefined8 *)(lVar1 + _DAT_11277d830) = uVar2;
    _objc_release(uVar3);
    func_0x00010c128b60(*(undefined8 *)(lVar1 + _DAT_11277d810));
    if (*(long *)(param_1 + 0x30) == -1) {
      func_0x00010be9c120(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined1 *)(param_1 + 0x38),&PTR___NSConcreteGlobalBlock_110aca468);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ee82c4; end: 108ee82c7;  */

void FUN_108ee82c4(void)

{
  return;
}



/* Entry: 108ee82c8; end: 108ee8537; -[SCSendConfirmationView _orderedLabelInfos:labelInfoMaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ee82c8(double param_1,double param_2,double param_3,double param_4,undefined8 *param_5,
                  undefined8 param_6,undefined8 *param_7,long param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_1f0 [8];
  double dStack_1e8;
  double dStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_7;
  lVar12 = param_8;
  _objc_retain(param_7);
  iVar11 = (int)lVar12;
  _objc_retain(param_8);
  puVar2 = param_5;
  func_0x00010c0ecbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar9 = param_7;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = param_5;
    func_0x00010c0ecbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    puVar4 = param_7;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar3 == puVar4) {
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      param_1 = 0.0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      puVar4 = param_5;
      func_0x00010c0ecbe0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = &uStack_140;
      puVar2 = auStack_100;
      param_9 = 0x10;
      puVar5 = puVar4;
      func_0x00010bf52a60();
      iVar11 = (int)puVar2;
      if (puVar5 != (undefined8 *)0x0) {
        lVar12 = *plStack_130;
        dVar20 = 0.0;
        do {
          puVar13 = (undefined8 *)0x0;
          do {
            iVar11 = (int)puVar2;
            if (*plStack_130 != lVar12) {
              _objc_enumerationMutation(puVar4);
            }
            puVar10 = *(undefined8 **)(lStack_138 + (long)puVar13 * 8);
            lVar6 = param_8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 == 0) {
              _objc_retain(param_7);
              _objc_release(puVar4);
              goto LAB_108ee84dc;
            }
            lVar7 = lVar6;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27dd80(lVar6);
            lVar8 = lVar6;
            func_0x00010c153ba0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            param_9 = 0;
            puVar2 = puVar3;
            func_0x00010bdc6980(param_5);
            param_1 = dVar20;
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(lVar6);
            puVar13 = (undefined8 *)((long)puVar13 + 1);
          } while (puVar5 != puVar13);
          puVar10 = &uStack_140;
          puVar2 = auStack_100;
          param_9 = 0x10;
          puVar5 = puVar4;
          func_0x00010bf52a60();
          iVar11 = (int)puVar2;
        } while (puVar5 != (undefined8 *)0x0);
      }
      _objc_release(puVar4);
      puVar9 = puVar3;
      func_0x00010bf51e00();
LAB_108ee84dc:
      _objc_release(puVar3);
      goto LAB_108ee84e4;
    }
  }
  _objc_retain(param_7);
LAB_108ee84e4:
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(param_9);
  lVar12 = (long)_DAT_11277d810;
  func_0x00010bf4c7c0(*(undefined8 *)((long)param_7 + lVar12));
  dVar16 = param_2;
  func_0x00010bf4cdc0(*(undefined8 *)((long)param_7 + lVar12));
  dVar17 = dVar16;
  func_0x00010bf20c00(*(undefined8 *)((long)param_7 + lVar12));
  dVar20 = param_1;
  dVar18 = dVar17;
  dVar14 = param_3;
  dVar19 = param_4;
  func_0x00010bf4c7c0(*(undefined8 *)((long)param_7 + lVar12));
  param_1 = param_1 + dVar18;
  dVar14 = dVar20 + dVar14;
  param_4 = param_4 - dVar14;
  puVar2 = puVar10;
  func_0x00010c089820(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0();
  _CGRectGetWidth(param_1,dVar17 + dVar20,param_3 - (dVar18 + dVar19),param_4);
  _objc_release(puVar2);
  dVar20 = 0.0;
  if (0.0 <= dVar14 - param_1) {
    dVar20 = dVar14 - param_1;
  }
  _objc_initWeak(auStack_1d8,param_7);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar15 = 0x3fc999999999999a;
  if (iVar11 == 0) {
    uVar15 = 0;
  }
  _objc_copyWeak(auStack_1f0,auStack_1d8);
  dStack_1e8 = dVar20 - param_2;
  dStack_1e0 = dVar16;
  _objc_retain(param_9);
  func_0x00010bf03420(uVar15,puVar1);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(param_9);
  _objc_release(puVar10);
  return;
}


