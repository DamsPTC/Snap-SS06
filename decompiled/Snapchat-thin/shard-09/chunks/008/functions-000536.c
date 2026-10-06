/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071ef058; end: 1071ef0e3; -[Story cacheMediaId] */

void FUN_1071ef058(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0833a0();
  if ((int)uVar1 == 0) {
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25c7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2bf000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
    param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071ef0e4; end: 1071ef15b; -[Story setClientId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ef0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127655dc);
  *(undefined8 *)(param_1 + _DAT_1127655dc) = 0;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f8c18;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setClientId__11263cd68,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1071ef15c; end: 1071ef1d3; -[Story clientIdSnapComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ef15c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127655dc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1071ef1d4; end: 1071ef233; -[Story storyId] */

void FUN_1071ef1d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c22c180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c074980(param_1);
    func_0x00010bf0c4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c22c180(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071ef234; end: 1071ef323; -[Story isReportable] */

ulong FUN_1071ef234(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c06d9a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      func_0x00010bf25280(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c1340e0();
      uVar2 = param_1;
      goto LAB_1071ef300;
    }
  }
  uVar1 = param_1;
  func_0x00010c074980();
  if ((int)uVar1 == 0) {
    return 1;
  }
  FUN_10723fdb8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf0e960(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22c0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  uVar3 = (ulong)((uint)uVar3 ^ 1);
  _objc_release(uVar1);
  _objc_release(param_1);
LAB_1071ef300:
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 1071ef324; end: 1071ef39b; -[Story isSaveable] */

long FUN_1071ef324(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c06d9a0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bf25280(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c14b740();
      _objc_release(param_1);
      return lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c06f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCreatedByCurrentUser_1125f9838);
  return param_1;
}



/* Entry: 1071ef39c; end: 1071ef417; -[Story canBusinessProfilePerformSpotlightDeleteAction] */

undefined8 FUN_1071ef39c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf251c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf01740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  if ((int)uVar3 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c07f5e0(param_1);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1071ef418; end: 1071ef4cf; -[Story isDeletable] */

ulong FUN_1071ef418(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = param_1;
  func_0x00010c06d9a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010bf2c5e0();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010bf25280();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf6b200();
        _objc_release(uVar1);
        iVar3 = (int)uVar2;
        if (1 < iVar3 - 1U) {
          if ((iVar3 == 0) || (iVar3 == -0x4524111)) {
            return 0;
          }
          goto LAB_1071ef4a8;
        }
      }
      return 1;
    }
  }
LAB_1071ef4a8:
                    /* WARNING: Could not recover jumptable at 0x00010c06f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCreatedByCurrentUser_1125f9838);
  return param_1;
}



/* Entry: 1071ef4d0; end: 1071ef537; -[Story isShareable] */

ulong FUN_1071ef4d0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c074980();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCreatedByCurrentUser_1125f9838);
    return param_1;
  }
  func_0x00010bf0c4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return (ulong)((uint)uVar1 ^ 1);
}



/* Entry: 1071ef538; end: 1071ef56b; -[Story isBusinessStory] */

bool FUN_1071ef538(long param_1)

{
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1071ef56c; end: 1071ef59f; -[Story isSavedStory] */

bool FUN_1071ef56c(long param_1)

{
  func_0x00010bfe32e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1071ef5a0; end: 1071ef60f; -[Story isExpired] */

bool FUN_1071ef5a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf433a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return lVar2 == -1;
}



/* Entry: 1071ef610; end: 1071ef683; -[Story isLensAssetUploadOperationComplete] */

bool FUN_1071ef610(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c08ffc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010c08ffc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c252440();
    bVar1 = lVar3 == 3;
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1071ef684; end: 1071ef753; -[Story timeToSendHasExpired] */

undefined1 * FUN_1071ef684(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar4 = &lStack_40;
  lVar1 = param_1;
  func_0x00010bfb1aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0xc0f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c105720();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010bf433a0(puVar2);
      plVar4 = (long *)(ulong)(puVar3 == (undefined *)0x1);
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  else {
    puStack_38 = PTR_PTR_1126f8c18;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_timeToSendHasExpired_11252cc68);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 1071ef754; end: 1071ef807; -[Story persistingFailuresURL] */

void FUN_1071ef754(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ea2718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071ef808; end: 1071ef993; -[Story reportSaveIfNecessary] */

void FUN_1071ef808(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x00010c06f8a0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c1f5b20(param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222fc0(param_1);
  _objc_release(puVar2);
  uVar1 = param_1;
  func_0x00010c105880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_10723fdb8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1072140dc(param_1,2,uVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (uVar5 != 0) {
    if (lRam00000001136ca090 != -1) {
      func_0x00010002a2fc(0x1136ca090,&PTR___NSConcreteGlobalBlock_110992b20);
    }
    uVar6 = uRam00000001136ca098;
    func_0x00010bfe63a0(uRam00000001136ca098);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14af00(uVar7);
    _objc_release(param_1);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1071ef994; end: 1071ef99b; -[Story isStoryMedia] */

undefined8 FUN_1071ef994(void)

{
  return 1;
}



/* Entry: 1071ef99c; end: 1071efa13; -[Story mediaIdForMedia:] */

void FUN_1071ef99c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 == lVar1) {
    func_0x00010bf26a40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071efa14; end: 1071efa17; -[Story mediaURL] */

void FUN_1071efa14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaAPPURL_11260ea18);
  return;
}



/* Entry: 1071efa18; end: 1071efa5b; -[Story setMediaURL:] */

void FUN_1071efa18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1c4440(param_1,param_2,0);
  func_0x00010c1c4060(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071efa5c; end: 1071efadf; -[Story usingD2SForMedia:] */

bool FUN_1071efa5c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (param_3 == lVar2) {
    func_0x00010c0c47e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1071efae0; end: 1071efbdb; -[Story URLForMedia:] */

void FUN_1071efae0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_3) {
    lVar1 = param_1;
    func_0x00010c294bc0(param_1,param_2,param_3);
    if ((int)lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c0c6e00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        param_1 = 0;
      }
      else {
        lVar2 = param_1;
        func_0x00010c0833a0();
        if ((int)lVar2 == 0) {
          _objc_retain(lVar1);
          param_1 = lVar1;
        }
        else {
          func_0x00010c25c7e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_1;
          func_0x00010c2bf000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          param_1 = lVar2;
        }
      }
      _objc_release(lVar1);
    }
    else {
      func_0x00010c0c47e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071efbdc; end: 1071efcd7; -[Story decryptData:forMedia:] */

void FUN_1071efbdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (param_4 == lVar1) {
    lVar1 = param_1;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = param_3;
    if (lVar1 == 0) {
      _objc_retain(param_3);
    }
    else {
      lVar1 = param_1;
      func_0x00010c0c54a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c5480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c156c60(param_3,param_2,lVar1,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(lVar1);
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071efcd8; end: 1071efcdb; -[Story expirationForMedia:] */

void FUN_1071efcd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_expirationDate_1125c4b70);
  return;
}



/* Entry: 1071efcdc; end: 1071efcdf; -[Story encryptionKeyForMedia:] */

void FUN_1071efcdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c54b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaKey_11260ef40);
  return;
}



/* Entry: 1071efce0; end: 1071efd53; -[Story encryptionIvForMedia:] */

void FUN_1071efce0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 == lVar1) {
    func_0x00010c0c5480(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071efd54; end: 1071efdb3; -[Story shouldEncryptOnDiskForMedia:] */

bool FUN_1071efd54(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 1071efdb4; end: 1071efe3f; -[Story isMediaAlreadyEncrypted:] */

uint FUN_1071efdb4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    _objc_release(lVar1);
  }
  func_0x00010c0833a0(param_1);
  return (uint)param_1 ^ 1;
}



/* Entry: 1071efe40; end: 1071effb3; -[Story encryptionDictionaryForMedia:] */

undefined * FUN_1071efe40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == lVar1) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110ea22b8;
    lVar1 = param_1;
    func_0x00010c0c54a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110dc1778;
    puStack_58 = puVar2;
    func_0x00010c0c5480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520(puVar3,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1071effb4; end: 1071effbb; -[Story persist] */

undefined8 FUN_1071effb4(void)

{
  return 1;
}



/* Entry: 1071effbc; end: 1071effc3; -[Story encrypt] */

undefined8 FUN_1071effbc(void)

{
  return 1;
}



/* Entry: 1071effc4; end: 1071efff3; -[Story requestPriorityUserInitiated:] */

undefined8 FUN_1071effc4(int param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = 3;
  }
  func_0x00010c07dc60();
  if (param_1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1071efff4; end: 1071f0043; -[Story trackingId] */

void FUN_1071efff4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278ee0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071f0044; end: 1071f00b7; -[Story trackingIdForMedia:] */

void FUN_1071f0044(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 == lVar1) {
    func_0x00010be36bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071f00b8; end: 1071f016f; -[Story trackingTypeForMedia:] */

void FUN_1071f00b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  if (param_3 == uVar1) {
    uVar1 = param_1;
    func_0x00010c07b540();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c07dc60();
      if ((uVar1 & 1) != 0) goto LAB_1071f0104;
      func_0x00010c0d7240();
      ppuVar2 = &PTR_PTR_110ccc1a8;
      if ((int)param_1 == 0) {
        ppuVar2 = &PTR_PTR_110ccc1a0;
      }
    }
    else {
      ppuVar2 = &PTR_PTR_110ccc178;
    }
    puVar3 = *ppuVar2;
    _objc_retain(puVar3);
  }
  else {
LAB_1071f0104:
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071f0170; end: 1071f01bf; -[Story storyType] */

void FUN_1071f0170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279140(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071f01c0; end: 1071f026b; -[Story trackingMediaTypeForMedia:] */

void FUN_1071f01c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == param_1) {
    lVar1 = param_3;
    func_0x00010c074fe0();
    if ((int)lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0830a0();
      if ((int)lVar1 == 0) goto LAB_1071f01fc;
      lVar1 = param_3;
      func_0x00010c0efce0();
      ppuVar2 = &PTR_PTR_110ccc1e8;
      if ((int)lVar1 == 0) {
        ppuVar2 = &PTR_PTR_110ccc1f0;
      }
    }
    else {
      ppuVar2 = &PTR_PTR_110ccc1c8;
    }
    puVar3 = *ppuVar2;
    _objc_retain(puVar3);
  }
  else {
LAB_1071f01fc:
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071f026c; end: 1071f0273; -[Story trackingExpirationInDaysForMedia:] */

undefined8 FUN_1071f026c(void)

{
  return 2;
}



/* Entry: 1071f0274; end: 1071f02ff; -[Story isFromCameraRoll] */

bool FUN_1071f0274(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bfb73c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c247e00();
    bVar1 = (int)lVar4 == 0;
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1071f0300; end: 1071f035b; -[Story isRemix] */

undefined8 FUN_1071f0300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb060();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1071f035c; end: 1071f03cf; -[Story isCreatedByCurrentUser] */

long FUN_1071f035c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000109175acc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c105880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0720c0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1071f03d0; end: 1071f059b; -[Story fetchMediaResponseHandlerCustom:request:response:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f03d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined *param_6)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar2 = param_5;
  func_0x00010c252ee0();
  bVar1 = (uVar2 & 0xfffffffffffffffb) == 400;
  lVar3 = param_1;
  func_0x00010c0833a0();
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127655e4);
    *(undefined8 *)(param_1 + _DAT_1127655e4) = 0;
    _objc_release(uVar4);
    *(undefined8 *)(param_1 + _DAT_1127655e8) = 2;
    bVar1 = uVar2 == 0x193 || (uVar2 & 0xfffffffffffffffb) == 400;
  }
  _objc_retain(param_6);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar5 = param_6;
  if (param_5 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
  }
  lVar3 = param_3;
  if (bVar1) {
    puVar7 = puVar5;
    func_0x00010bfd1860();
    iVar8 = (int)puVar7;
  }
  else {
    puVar7 = puVar5;
    func_0x00010bfa8500(param_1);
    iVar8 = (int)puVar7;
  }
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = 3;
  if (iVar8 == 0) {
    uVar4 = 1;
  }
  _objc_retain(lVar3);
  lVar9 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar9);
  if ((lVar3 == lVar9) && (lVar3 = param_3, func_0x00010c0c6960(), lVar3 != 3)) {
                    /* WARNING: Could not recover jumptable at 0x00010c287a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_updateMediaState_error__11267f8a8,uVar4,0);
    return;
  }
  return;
}



/* Entry: 1071f059c; end: 1071f062f; -[Story fetchMediaIsLoadingForMedia:userInitiated:] */

void FUN_1071f059c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 3;
  if (param_4 == 0) {
    uVar1 = 1;
  }
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if ((param_3 == lVar2) && (lVar2 = param_1, func_0x00010c0c6960(), lVar2 != 3)) {
                    /* WARNING: Could not recover jumptable at 0x00010c287a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateMediaState_error__11267f8a8,uVar1,0);
    return;
  }
  return;
}



/* Entry: 1071f0630; end: 1071f06ab; -[Story fetchMediaDidFailForMedia:error:] */

void FUN_1071f0630(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 == lVar1) {
    func_0x00010c287a00(param_1,param_2,0,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071f06ac; end: 1071f072b; -[Story fetchMediaNotFoundForMedia:] */

void FUN_1071f06ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_3);
  func_0x00010bf99240(puVar1,param_2,&PTR____CFConstantStringClassReference_110f43b18,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1860(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071f072c; end: 1071f07ab; -[Story fetchMediaBadRequestForMedia:] */

void FUN_1071f072c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_3);
  func_0x00010bf99240(puVar1,param_2,&PTR____CFConstantStringClassReference_110f43b18,2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1860(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071f07ac; end: 1071f0833; -[Story handleMediaNotFoundOrBadRequestForMedia:error:] */

void FUN_1071f07ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    func_0x00010c287a00(param_1,param_2,0,param_4);
  }
  else {
    func_0x00010bfa8500(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f0834; end: 1071f08ab; -[Story fetchMediaDidSucceedForMedia:] */

void FUN_1071f0834(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 != lVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c287a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateMediaState_error__11267f8a8,2,0);
  return;
}



/* Entry: 1071f08ac; end: 1071f08af; -[Story didStartDownload:] */

void FUN_1071f08ac(void)

{
  return;
}



/* Entry: 1071f08b0; end: 1071f08e3; -[Story isVideoStreaming] */

bool FUN_1071f08b0(long param_1)

{
  func_0x00010c25c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1071f08e4; end: 1071f08e7; -[Story mediaType] */

void FUN_1071f08e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_type_11267d188);
  return;
}



/* Entry: 1071f08e8; end: 1071f08eb; -[Story uploadMediaIdForMedia:] */

void FUN_1071f08e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clientId_1125acd80);
  return;
}



/* Entry: 1071f08ec; end: 1071f09bf; -[Story mediaUploadDidSucceedForMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f08ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c105980();
  if (lVar1 < 1) {
    lVar1 = param_1;
    func_0x00010c288ae0(param_1,param_2,0xfffffffffffffffe);
    if (*(char *)(param_1 + _DAT_112765574) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_112765574) = 0;
      func_0x00010c28e800(param_1);
    }
    else {
      func_0x000107a30ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c105980(param_1);
      func_0x00010c0b0c40(lVar1,param_2,lVar2);
      _objc_release(lVar1);
    }
    func_0x00010c2836a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98400();
  }
  else {
    func_0x000107a30ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c105980(param_1);
    func_0x00010c0b0c80(lVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110ea2738);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f09c0; end: 1071f0a23; -[Story mediaUploadDidFailForMedia:] */

void FUN_1071f09c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c2836a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf983c0();
  _objc_release(uVar1);
  func_0x00010c288ae0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be76670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cbca0,PTR_s__postNotificationWithName_object_11257b338,
             &PTR____CFConstantStringClassReference_110f43b38,0,0);
  return;
}



/* Entry: 1071f0a24; end: 1071f0aa7; -[Story imageProcessingDidCompleteForMedia:] */

void FUN_1071f0a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1071f0aa8;
  puStack_38 = &UNK_110848bd8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be995e0(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f0aa8; end: 1071f0ab3;  */

void FUN_1071f0aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be37670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__imageProcessingDidCompleteForMe_11256b738,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071f0ab4; end: 1071f0bc3; -[Story _imageProcessingDidCompleteForMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f0ab4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c105980();
  if (lVar1 == -6) {
    lVar1 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf64840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    func_0x000107a30ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar2 == 0) {
      func_0x00010c105980();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0ca0(lVar1);
      _objc_release(puVar3);
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be5d190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__markAndRemoveUnrecoverableStory_112574e00);
      return;
    }
    func_0x00010c0b0d20(lVar1);
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + _DAT_112765574) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c28e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uploadMedia_112681298);
  return;
}



/* Entry: 1071f0bc4; end: 1071f0c33; -[Story _streamingMediaInfoCanBePrefetched:] */

bool FUN_1071f0bc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010c2bf000(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    bVar1 = lVar3 != 0;
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  return bVar1;
}



/* Entry: 1071f0c34; end: 1071f0def; -[Story fetchStoryMediaUserInitiated:completion:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f0c34(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c072440();
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010c1350c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b19f8;
    puVar3 = param_1;
    func_0x00010bf3cfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    func_0x00010c1ebb80(param_1);
    puVar1 = param_1;
    func_0x00010c0c5040();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0x0;
      if ((*(long *)(param_1 + _DAT_1127655e4) == 0) ||
         (puVar1 = param_1, func_0x00010bec5400(), (int)puVar1 != 0)) {
        FUN_10723fdb8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa8780();
        _objc_release(param_1);
        _objc_release(puVar1);
      }
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0c3fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1860(param_1);
    _objc_release(puVar1);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(0,param_4,0,puVar2);
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071f0df0; end: 1071f0eb7; -[Story verifyMediaState] */

void FUN_1071f0df0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076b80();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0c6960();
  if ((uVar1 != 2) || ((uint)uVar2 != 0)) {
    uVar1 = param_1;
    func_0x00010c0c6960();
    if (((uint)(uVar1 != 2) & (uint)uVar2) != 0) {
      uVar3 = 2;
      goto LAB_1071f0e5c;
    }
    uVar1 = param_1;
    func_0x00010c0c6960();
    if (uVar1 != 1) {
      return;
    }
    uVar1 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c076be0();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  uVar3 = 0;
LAB_1071f0e5c:
                    /* WARNING: Could not recover jumptable at 0x00010c1c5350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setMediaState__11264eef8,uVar3);
  return;
}



/* Entry: 1071f0eb8; end: 1071f0f4f; -[Story postedTimestamp] */

void FUN_1071f0eb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bfb1aa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010c293200(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
      param_1 = lVar2;
    }
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071f0f50; end: 1071f1067; -[Story _captureDate] */

void FUN_1071f0f50(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c250280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010bfb73c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c105720(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfb73c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf59920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65140(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(param_1);
      param_1 = puVar1;
    }
  }
  else {
    param_1 = puVar2;
    func_0x00010c250280(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071f1068; end: 1071f10cb; -[Story _cameraMode] */

undefined ** FUN_1071f1068(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c0811a0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e29ef8;
  if ((int)uVar3 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_release(uVar2);
  return ppuVar1;
}



/* Entry: 1071f10cc; end: 1071f120b; -[Story _subscribeOnLensUploadOperationEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f10cc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127655ec);
  func_0x00010c28e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127655f0);
  *(undefined8 *)(param_1 + _DAT_1127655f0) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1071f120c; end: 1071f12c3;  */

void FUN_1071f120c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd700(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071f12c4; end: 1071f12f3;  */

void FUN_1071f12c4(void)

{
  return;
}



/* Entry: 1071f12f4; end: 1071f13a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f12f4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112765578) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112765578) = 0;
    iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c234660();
    puVar1 = PTR_PTR_1126afca8;
    if (iVar2 != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e65b98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e65b98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      _objc_release(ppuVar3);
    }
    func_0x00010c288ae0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be76670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126cbca0,PTR_s__postNotificationWithName_object_11257b338,
               &PTR____CFConstantStringClassReference_110f43b38,0,0);
    return;
  }
  return;
}



/* Entry: 1071f13a4; end: 1071f13a7; -[Story taggedUsernames] */

void FUN_1071f13a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifiedUsernames_112614d68);
  return;
}



/* Entry: 1071f13a8; end: 1071f144b; -[Story _removeUnrecoverablePendingStory] */

void FUN_1071f13a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c12d9a0();
  uVar1 = param_1;
  func_0x00010c06a0a0(param_1);
  func_0x000107a0478c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b6c0(uVar2,param_2,uVar3,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071f144c; end: 1071f1553; -[Story uploadMedia] */

/* WARNING: Possible PIC construction at 0x0001071f14f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001071f14f8) */
/* WARNING: Removing unreachable block (ram,0x0001071f1528) */

void FUN_1071f144c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb44a0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c105980();
    if (lVar1 < 1) {
      lVar1 = param_1;
      func_0x00010c105980();
      if (lVar1 != -4) goto code_r0x00010c288ae0;
      func_0x000107a30ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0d20();
    }
    else {
      func_0x000107a30ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c105980(param_1);
      func_0x00010c0b0c80(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
code_r0x00010c288ae0:
                    /* WARNING: Could not recover jumptable at 0x00010c288af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updatePostingState__11267fce0,0xfffffffffffffffc);
  return;
}



/* Entry: 1071f1554; end: 1071f155b; -[Story _shouldLetPostMasterUploadMedia] */

undefined8 FUN_1071f1554(void)

{
  return 0;
}



/* Entry: 1071f155c; end: 1071f155f; -[Story uploadStoryWithMediaUploaded] */

void FUN_1071f155c(void)

{
  return;
}



/* Entry: 1071f1560; end: 1071f164b; -[Story invalidateLensAssetUploadOperation] */

void FUN_1071f1560(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c08ffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae790;
  if (lVar1 != 0) {
    lVar2 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar3,param_2,0x11,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1071f164c;
    puStack_40 = &UNK_110842e18;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x00010c0f7fc0(puVar3,param_2,&puStack_58);
    func_0x00010c1baa60(param_1,param_2,0);
    _objc_release(lStack_38);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1071f164c; end: 1071f1683;  */

void FUN_1071f164c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c082b20();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_invalidate_1125f8150);
    return;
  }
  return;
}



/* Entry: 1071f1684; end: 1071f16bf; -[Story saveStory] */

void FUN_1071f1684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b340(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071f16c0; end: 1071f1bdf; -[Story saveStoryWithGrapheneRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f16c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d4fe8);
  uVar2 = uVar1;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000108e00cf8();
  _objc_release(uVar6);
  _objc_release(uVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ea27d8;
  if ((int)uVar7 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e222d8;
  }
  func_0x00010bcbeaa8(ppuVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_1072401ec(ppuVar3,puVar4);
  _objc_release(puVar4);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar14 = param_1;
  func_0x00010c07d060();
  if ((uVar14 & 1) != 0) {
    uVar1 = uVar2;
    func_0x00010bfc1d60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000108e00cf8();
    if ((int)uVar7 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = param_1;
      func_0x00010c06d9a0();
    }
    _objc_release(uVar6);
    _objc_release();
    _dispatch_group_create();
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x2020000000;
    uStack_a0 = 1;
    uVar5 = param_1;
    func_0x00010c074980(param_1);
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127655d4);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 1;
    func_0x00010795da60(1,0,uVar14,uVar5,uVar6,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_1071f1be8;
    puStack_e0 = &UNK_1108a76b8;
    uStack_c0 = 0;
    uStack_d8 = param_1;
    puStack_c8 = &uStack_b8;
    _objc_retain(uVar2);
    ppuVar8 = &puStack_f8;
    uStack_d0 = uVar2;
    _objc_retainBlock();
    _objc_initWeak(auStack_100,param_1);
    puStack_150 = puVar4;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_1071f1f98;
    puStack_138 = &UNK_110992ac0;
    _objc_retain(uVar1);
    uStack_130 = uVar1;
    _objc_copyWeak(auStack_108,auStack_100);
    uStack_128 = param_1;
    puStack_118 = &uStack_b8;
    puStack_110 = &uStack_98;
    _objc_retain(uVar7);
    ppuVar9 = &puStack_150;
    uStack_120 = uVar7;
    _objc_retainBlock();
    puStack_1a0 = puVar4;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x1071f242c;
    puStack_188 = &UNK_110992af0;
    puStack_168 = &uStack_b8;
    _objc_retain(uVar1);
    uStack_180 = uVar1;
    _objc_copyWeak(auStack_158,auStack_100);
    uStack_178 = param_1;
    _objc_retain(uVar7);
    ppuVar10 = &puStack_1a0;
    uStack_170 = uVar7;
    puStack_160 = &uStack_98;
    _objc_retainBlock(ppuVar10);
    ppuVar11 = ppuVar10;
    func_0x000107a0478c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    func_0x00010bf3cfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250680(ppuVar12);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    uVar5 = param_1;
    func_0x00010c074fe0();
    if ((int)uVar5 == 0) {
      if ((int)uVar14 != 0) {
        _dispatch_group_enter(uVar1);
        func_0x0001071dc60c(param_1,0,ppuVar10);
      }
    }
    else if ((int)uVar14 != 0) {
      _dispatch_group_enter(uVar1);
      FUN_1071dc40c(param_1,ppuVar9);
    }
    func_0x000100bc0718(uVar1,PTR___dispatch_main_q_11034be20,ppuVar8);
    if (*(char *)(puStack_90 + 3) == '\x01') {
      func_0x000107d9f7c8();
    }
    _objc_release(ppuVar10);
    _objc_release(uStack_170);
    _objc_destroyWeak(auStack_158);
    _objc_release(uStack_180);
    _objc_release(ppuVar9);
    _objc_release(uStack_120);
    _objc_destroyWeak(auStack_108);
    _objc_release(uStack_130);
    _objc_destroyWeak(auStack_100);
    _objc_release(ppuVar8);
    _objc_release(uStack_d0);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_98,8);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f1be0; end: 1071f1be7;  */

void FUN_1071f1be0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_featureSettingsService_1125c6488);
  return;
}



/* Entry: 1071f1be8; end: 1071f1f97;  */

void FUN_1071f1be8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e06ff8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e06ff8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    FUN_1072401ec(ppuVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    puVar2 = PTR_PTR_1126b1360;
    _objc_opt_new(PTR_PTR_1126b1360);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0a7de0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba680(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c105860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5900(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c2b7800(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c2b3b00(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c25b780(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c2ba700(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c074980();
    if ((int)lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000107d6fa04();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf625c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar7 != 0) {
        func_0x00010853351c(lVar7);
      }
      func_0x00010c2b6440(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ba720(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar4);
    }
    func_0x000107a30e30();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1180(lVar4);
    _objc_release(puVar8);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  uVar9 = *(ulong *)(param_1 + 0x28);
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x000108e00cf8();
  _objc_release(uVar10);
  _objc_release(uVar9);
  if ((uVar11 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x20);
    func_0x00010c105020(uVar9);
  }
  func_0x000107a0478c();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3cfc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafb80(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1071f1f98; end: 1071f2243;  */

void FUN_1071f1f98(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1071f2244;
  puStack_80 = &UNK_110992618;
  _objc_copyWeak(auStack_78,param_1 + 0x48);
  ppuVar4 = &puStack_98;
  _objc_retainBlock();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_2 != 0;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c07f0e0();
    ppuVar8 = ppuVar5;
    if (iVar3 != 0) {
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(ulong *)(param_1 + 0x28);
      func_0x00010c27dd80();
      bVar2 = false;
      if ((uVar7 < 0x1b) && ((1L << (uVar7 & 0x3f) & 0x7e7fc60U) != 0)) {
        func_0x000108544644();
        bVar2 = (uint)uVar7 < 9;
      }
      func_0x000107d9f9cc(ppuVar5,puVar6,bVar2,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(puVar6);
    }
    puVar6 = PTR_PTR_1126b1348;
    func_0x00010c22b6a0(PTR_PTR_1126b1348);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1071f22e8;
    puStack_c0 = &UNK_11098da88;
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(ppuVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    ppuStack_a8 = ppuVar4;
    _objc_retain(uVar9);
    uStack_b0 = uVar9;
    func_0x00010c14ae40(puVar6);
    _objc_release(puVar6);
    _objc_release(uStack_b0);
    _objc_release(ppuStack_a8);
  }
  else {
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1071f236c;
    puStack_f0 = &UNK_11084aaa8;
    _objc_retain(ppuVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    ppuStack_e0 = ppuVar4;
    _objc_retain(uVar9);
    uStack_e8 = uVar9;
    func_0x0001000d76cc("APPSTORE",&puStack_108);
    _objc_release(uStack_e8);
    ppuVar8 = ppuStack_e0;
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1071f2244; end: 1071f22e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f2244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127655d4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010795e04c(param_4,param_2,param_3,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f22e8; end: 1071f236b;  */

void FUN_1071f22e8(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010bf76ea0(0xbff0000000000000,*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    lVar2 = param_2;
    func_0x000107ffa0b8();
    uVar1 = (undefined1)lVar2;
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(lVar2 + 0x18) = uVar1;
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),param_2 == 0,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071f236c; end: 1071f253f;  */

void FUN_1071f236c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7738,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_1072401ec(ppuVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071f2540; end: 1071f273f;  */

void FUN_1071f2540(long param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1071f2740;
  puStack_60 = &UNK_110992618;
  _objc_copyWeak(auStack_58,param_1 + 0x48);
  ppuVar2 = &puStack_78;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126b1348;
    func_0x00010c22b6a0(PTR_PTR_1126b1348);
    _objc_retainAutoreleasedReturnValue();
    auVar8 = *(undefined1 (*) [16])(param_1 + 0x28);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
    auVar8 = NEON_ext(auVar8,auVar8,8,1);
    _objc_retain(ppuVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    func_0x00010c14af80(puVar4);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(ppuVar2);
    _objc_release(auVar8._8_8_);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    if ((*(byte *)(lVar6 + 0x18) & 1) == 0) {
      func_0x000107ffa0b8();
      uVar1 = (undefined1)lVar3;
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(lVar6 + 0x18) = uVar1;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db7738;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7738,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      FUN_1072401ec(ppuVar5,puVar4);
      _objc_release(puVar4);
      _objc_release(ppuVar5);
    }
    (*(code *)ppuVar2[2])(ppuVar2,0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38))
    ;
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1071f2740; end: 1071f285f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f2740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127655d4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010795e04c(param_4,param_2,param_3,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f2860; end: 1071f2867; -[Story exportToVideoURLCompletion:progressBlock:spectaclesExportSettings:snapVideoFilterAdaptor:previewAssetVideoProviderFactory:] */

void FUN_1071f2860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c074fe0();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010bf26a40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000107d9f928();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1071dcc30;
    puStack_a0 = &UNK_110992708;
    uStack_98 = uVar2;
    uStack_90 = param_1;
    uStack_88 = param_5;
    uStack_80 = param_3;
    _objc_retain(param_5);
    _objc_retain(param_1);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    ppuVar3 = &puStack_b8;
    _objc_retainBlock(ppuVar3);
    FUN_1071dc1c0(param_1,uVar2,ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_80);
    _objc_release(uStack_98);
    uVar1 = param_5;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1071dc7c8;
    puStack_60 = &UNK_1109926d8;
    uStack_58 = param_1;
    uStack_50 = param_5;
    uStack_48 = param_3;
    _objc_retain(param_5);
    _objc_retain(param_1);
    _objc_retain(param_3);
    FUN_1071dc40c(param_1,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    uVar1 = uStack_58;
    uVar2 = param_3;
    param_3 = param_1;
    param_1 = param_5;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1071f2868; end: 1071f28ef; -[Story didFinishSavingSnapToAlbumWithError:isVideo:videoDuration:] */

void FUN_1071f2868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1071f28f0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f28f0; end: 1071f29e7;  */

void FUN_1071f28f0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126afca8;
  if (*(long *)(param_1 + 0x20) != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db7738;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7738,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
    _objc_release(ppuVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c105020(uVar3);
  func_0x000107a0478c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c259cc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf3cfc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafb80(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1071f29e8; end: 1071f29f3; -[Story postSaveWithSuccess:] */

void FUN_1071f29e8(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c133b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reportSaveIfNecessary_11262a8e0);
    return;
  }
  return;
}



/* Entry: 1071f29f4; end: 1071f2a9b; -[Story _saveMediaToCacheAndPersistentStoreWithCompletion:] */

void FUN_1071f29f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1071f2a9c;
  puStack_48 = &UNK_11085a638;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf64860(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f2a9c; end: 1071f2b9b;  */

void FUN_1071f2a9c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1071f2b9c;
    puStack_30 = &UNK_110849530;
    lVar2 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    lVar2 = lStack_28;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1071f2bac;
    puStack_68 = &UNK_11084a9e8;
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lStack_58 = param_2;
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(uStack_50);
    lVar2 = lStack_58;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1071f2b9c; end: 1071f2bab;  */

void FUN_1071f2b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001071f2ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1071f2bac; end: 1071f2c37;  */

void FUN_1071f2bac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1071f2c38;
  puStack_48 = &UNK_110858070;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010be99ec0(uVar1,param_2,uVar2,PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1071f2c38; end: 1071f2c77;  */

void FUN_1071f2c38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((int)param_2 == 0) {
    uVar1 = 0;
  }
  func_0x00010c1c5340(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001071f2c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 1071f2c78; end: 1071f2da7; -[Story _saveStoryDataToPersistentStoreWithData:completionQueue:completion:] */

void FUN_1071f2c78(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain(param_5);
  if (param_3 == 0) {
    if ((param_4 == 0) || (param_5 == 0)) goto LAB_1071f2d78;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1071f2da8;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010007380c(param_4,&puStack_68);
    lVar1 = lStack_48;
  }
  else {
    FUN_10723ff2c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    FUN_1071ea420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14b180(lVar2);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_1071f2d78:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f2da8; end: 1071f2db7;  */

void FUN_1071f2da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001071f2db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1071f2db8; end: 1071f2f5b; -[Story _saveThumbnailDataToThumbnailCoordinatorIfPossible] */

void FUN_1071f2db8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c26e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lRam00000001136ca0a0 != -1) {
      func_0x00010002a2fc(0x1136ca0a0,&PTR___NSConcreteGlobalBlock_110992b80);
    }
    uVar4 = uRam00000001136ca0a8;
    func_0x00010bfe63a0(uRam00000001136ca0a8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x0001071ea7d0(param_1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0c4980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbec0(uVar4);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1071f2f5c; end: 1071f2f5f; -[Story removePersistedFailedStoryData] */

void FUN_1071f2f5c(void)

{
  return;
}



/* Entry: 1071f2f60; end: 1071f2fe3; -[Story markAsViewed] */

void FUN_1071f2f60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c222e60(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010c29ee60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222fc0(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c222fc0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071f2fe4; end: 1071f2fe7; -[Story mediaLoadError] */

void FUN_1071f2fe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0895d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lastMediaLoadError_1125fff80);
  return;
}



/* Entry: 1071f2fe8; end: 1071f30ab; -[Story isEqual:] */

ulong FUN_1071f2fe8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      _objc_retain(param_3);
      func_0x00010bf3cf60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      uVar2 = param_1;
      func_0x00010c0720c0(param_1);
      _objc_release(uVar1);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return uVar2;
}


