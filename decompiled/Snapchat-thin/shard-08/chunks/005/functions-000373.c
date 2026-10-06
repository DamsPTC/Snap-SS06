/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10627c9b8; end: 10627cc0f; -[SCContextSpotlightHeaderViewController _updateAvatarProfileButtonThumbnailWithImageUrl:shouldResizeToCircle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627c9b8(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be35380(param_1);
  }
  else {
    puVar2 = PTR_PTR_1126b08b0;
    func_0x00010bf33760(PTR_PTR_1126b08b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    func_0x00010c1c5440();
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b85a0;
    puVar5 = puVar3;
    func_0x00010bf220e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23c900(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b85a8;
    _objc_alloc(PTR_PTR_1126b85a8);
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c01cf00(puVar5);
    _objc_release(puVar7);
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + _DAT_112744610);
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_4;
    func_0x00010bfa7900(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10627cc10; end: 10627ccd3;  */

void FUN_10627cc10(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10627ccd4;
  puStack_50 = &UNK_1108488f8;
  _objc_retain(param_2);
  uStack_48 = param_2;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = *(undefined1 *)(param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10627ccd4; end: 10627cdb7;  */

void FUN_10627ccd4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10627cdb8;
  puStack_58 = &UNK_110919480;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  uStack_48 = *(undefined1 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_78,param_1 + 0x28);
  func_0x00010c0c0800(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  return;
}



/* Entry: 10627cdb8; end: 10627ce2b;  */

void FUN_10627cdb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea2160(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627ce2c; end: 10627ce57;  */

void FUN_10627ce2c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627ce58; end: 10627cebf; -[SCContextSpotlightHeaderViewController _setAvatarProfileButtonImage:shouldResizeToCircle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627ce58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744658;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c1a7f60(uVar1,param_2,0);
  func_0x00010c1e40c0(*(undefined8 *)(param_1 + lVar2),param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10627cec0; end: 10627ced3; -[SCContextSpotlightHeaderViewController _hideAvatarProfileButtonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627cec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744658),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10627ced4; end: 10627d00f; -[SCContextSpotlightHeaderViewController _fetchPublicStoryDataIfNecessaryWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627ced4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && ((*(byte *)(param_1 + _DAT_11274465c) & 1) == 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744608);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa9900(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10627d010; end: 10627d103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d010(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c0ddc60();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010bfddf20();
      if ((int)lVar1 == 0) {
        func_0x00010bf86500(*(undefined8 *)(param_1 + _DAT_112744658));
      }
      else {
        func_0x00010bf86500(*(undefined8 *)(param_1 + _DAT_112744658));
        uVar2 = *(undefined8 *)(param_1 + _DAT_11274460c);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9980();
        _objc_release(uVar2);
      }
      lVar1 = param_2;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112744660);
      *(long *)(param_1 + _DAT_112744660) = lVar1;
      _objc_release(uVar2);
    }
    *(undefined1 *)(param_1 + _DAT_11274465c) = 1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10627d104; end: 10627d3a7; -[SCContextSpotlightHeaderViewController toggleSubscription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d104(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  lVar10 = (long)_DAT_11274464c;
  func_0x00010c1a5aa0(*(undefined8 *)(param_1 + lVar10));
  lVar12 = (long)_DAT_112744664;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar12));
  uVar2 = *(ulong *)(param_1 + lVar10);
  func_0x00010c074c20();
  if (((uVar2 & 1) == 0) && (lVar11 = (long)_DAT_112744644, *(long *)(param_1 + lVar11) != 0)) {
    uVar9 = *(ulong *)(param_1 + _DAT_112744630);
    if (uVar9 == 0) {
      func_0x0001062ccdd4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar9);
      uVar2 = uVar9;
    }
    uVar9 = *(ulong *)(param_1 + lVar10);
    func_0x00010c159240();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar9 & 1) == 0) {
      func_0x0001062ccda4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001062ccdbc();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = *(ulong *)(param_1 + lVar10);
    func_0x00010c159240();
    puVar3 = PTR_PTR_1126afde0;
    if ((uVar9 & 1) == 0) {
      func_0x00010bf54760();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf57f80();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar9 = *(ulong *)(param_1 + lVar10);
    func_0x00010c159240();
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    if ((uVar9 & 1) == 0) {
      func_0x00010c25fd00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2829e0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = auStack_68;
    _objc_initWeak(puVar5,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar12);
    *(undefined8 *)(param_1 + lVar12) = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10627d3a8; end: 10627d3e3;  */

void FUN_10627d3a8(long param_1,long param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bec6300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10627d3e4; end: 10627d43b; -[SCContextSpotlightHeaderViewController _submitNotificationWithPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744614);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627d43c; end: 10627d4d7; -[SCContextSpotlightHeaderViewController didTapAvatarSubsButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d43c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112744660;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c08fa60();
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = *(undefined **)(param_1 + _DAT_112744648);
    func_0x00010bf51e00(puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126b5b00;
    func_0x00010c08bc60(PTR_PTR_1126b5b00,param_2,*(undefined8 *)(param_1 + lVar4));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfe0240(lVar2,param_2,param_1,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10627d4d8; end: 10627d59b; -[SCContextSpotlightHeaderViewController didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_10627d4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0bc800(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10627d59c; end: 10627d603;  */

void FUN_10627d59c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14a80();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627d604; end: 10627d74f; -[SCContextSpotlightHeaderViewController _fetchStoryRemotelyIfNecessaryWithStoryId:storyOwnerId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d604(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + _DAT_112744660)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112744608);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfaa9a0(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10627d750; end: 10627d7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d750(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((((param_3 == 0) && (param_1 != 0)) && (uVar1 = param_2, func_0x00010c0ddc60(), uVar1 != 0))
     && (uVar1 = param_2, func_0x00010bfddf20(), (uVar1 & 1) == 0)) {
    func_0x00010bf86500(*(undefined8 *)(param_1 + _DAT_112744658));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10627d7d0; end: 10627d7ef; -[SCContextSpotlightHeaderViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d7d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10627d7f0; end: 10627d803; -[SCContextSpotlightHeaderViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744668,param_3);
  return;
}



/* Entry: 10627d804; end: 10627d9ef; -[SCContextSpotlightHeaderViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627d804(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744668);
  _objc_storeStrong(param_1 + _DAT_1127445f0,0);
  _objc_storeStrong(param_1 + _DAT_1127445ec,0);
  _objc_storeStrong(param_1 + _DAT_112744614,0);
  _objc_storeStrong(param_1 + _DAT_112744610,0);
  _objc_storeStrong(param_1 + _DAT_112744660,0);
  _objc_storeStrong(param_1 + _DAT_11274460c,0);
  _objc_storeStrong(param_1 + _DAT_112744608,0);
  _objc_storeStrong(param_1 + _DAT_112744604,0);
  _objc_storeStrong(param_1 + _DAT_112744648,0);
  _objc_storeStrong(param_1 + _DAT_112744658,0);
  _objc_storeStrong(param_1 + _DAT_11274464c,0);
  _objc_storeStrong(param_1 + _DAT_112744618,0);
  _objc_storeStrong(param_1 + _DAT_112744630,0);
  _objc_storeStrong(param_1 + _DAT_112744640,0);
  _objc_storeStrong(param_1 + _DAT_112744638,0);
  _objc_storeStrong(param_1 + _DAT_112744634,0);
  _objc_storeStrong(param_1 + _DAT_112744628,0);
  _objc_storeStrong(param_1 + _DAT_11274462c,0);
  _objc_storeStrong(param_1 + _DAT_112744654,0);
  _objc_storeStrong(param_1 + _DAT_11274463c,0);
  _objc_storeStrong(param_1 + _DAT_112744650,0);
  _objc_storeStrong(param_1 + _DAT_112744624,0);
  _objc_storeStrong(param_1 + _DAT_112744664,0);
  _objc_storeStrong(param_1 + _DAT_112744644,0);
  _objc_storeStrong(param_1 + _DAT_1127445f8,0);
  _objc_storeStrong(param_1 + _DAT_1127445e8,0);
  _objc_storeStrong(param_1 + _DAT_1127445fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127445f4,0);
  return;
}



/* Entry: 10627d9f0; end: 10627d9f7; +[SCContextSpotlightHeroContextLabelHelper contextLabelTypeFromCardType:] */

undefined8 FUN_10627d9f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 1U < 0x14) {
    return *(undefined8 *)(&UNK_10dddd090 + (param_3 + 1U) * 8);
  }
  return 0x13;
}



/* Entry: 10627d9f8; end: 10627da17; +[SCContextSpotlightHeroContextLabelHelper contextLabelLoggingStringFromCardType:] */

undefined * FUN_10627d9f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x13) {
    return (&PTR_PTR_110919540)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 10627da18; end: 10627dadb; +[SCContextSpotlightHeroContextLabelHelper soundTitleWithTitle:subtitle:] */

void FUN_10627da18(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = param_3;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar1 = param_4;
    func_0x00010c08fa60();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0) {
      _objc_retain(param_3);
      ppuVar2 = param_3;
    }
    else {
      func_0x0001062ccef4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10627dadc; end: 10627dbe3; -[SCContextSpotlightHeroContextLabelRowViewController initWithHeroContextLabelViewController:madeOnSnapchatViewController:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10627dadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f0a80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274466c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112744670;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744674;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10627dbe4; end: 10627dc3f; -[SCContextSpotlightHeroContextLabelRowViewController loadView] */

void FUN_10627dbe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x00010c16e060();
  func_0x00010c207380(0x4024000000000000,puVar1);
  func_0x00010c166c00(puVar1,param_2,3);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10627dc40; end: 10627dee3; -[SCContextSpotlightHeroContextLabelRowViewController viewDidLoad] */

/* WARNING: Possible PIC construction at 0x00010627df00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010627df04) */
/* WARNING: Removing unreachable block (ram,0x00010627df20) */
/* WARNING: Removing unreachable block (ram,0x00010627df08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627dc40(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lStack_128;
  undefined *puStack_120;
  undefined8 auStack_98 [2];
  undefined8 auStack_88 [2];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_1126f0a80;
  lStack_128 = param_1;
  _objc_msgSendSuper2(&lStack_128,PTR_s_viewDidLoad_112684cd8);
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112744674);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b12d0;
  func_0x00010c0b61e0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf1f320();
  _objc_release(puVar7);
  _objc_release(uVar6);
  bVar4 = (int)uVar9 == 0;
  lVar1 = 4;
  puVar2 = auStack_88;
  if (bVar4) {
    lVar1 = 0;
    puVar2 = auStack_98;
  }
  lVar3 = 0;
  if (bVar4) {
    lVar3 = 4;
  }
  uVar9 = *(undefined8 *)(param_1 + *(int *)(&DAT_11274466c + lVar3));
  *puVar2 = *(undefined8 *)(param_1 + *(int *)(&DAT_11274466c + lVar1));
  puVar2[1] = uVar9;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar7 = puVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar8);
      }
      uVar6 = *(undefined8 *)((long)puVar10 * 8);
      func_0x00010bef7700(param_1);
      uVar9 = uVar6;
      func_0x00010c29bf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(uVar9);
      uVar9 = uVar6;
      func_0x00010c29bf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6d60(lVar5);
      _objc_release(uVar9);
      func_0x00010bf77e80(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar7 != puVar10);
    puVar7 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c219b60();
  func_0x00010c181f00(0x437a0000,puVar7);
  func_0x00010c181cc0(0x437a0000,puVar7);
  func_0x00010bef6d60(lVar5);
  func_0x00010bedece0(param_1);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar5 + _DAT_11274466c),PTR_s_isEmpty_1125f9ff0);
    return;
  }
  return;
}



/* Entry: 10627dee4; end: 10627df2b; -[SCContextSpotlightHeroContextLabelRowViewController isEmpty] */

/* WARNING: Possible PIC construction at 0x00010627df00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010627df04) */
/* WARNING: Removing unreachable block (ram,0x00010627df20) */
/* WARNING: Removing unreachable block (ram,0x00010627df08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627dee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274466c),PTR_s_isEmpty_1125f9ff0);
  return;
}



/* Entry: 10627df2c; end: 10627df97; -[SCContextSpotlightHeroContextLabelRowViewController _updateRowVisibility] */

void FUN_10627df2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c071780();
  lVar2 = param_1;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar3 = lVar2, func_0x00010c074c20(), (int)lVar1 != (int)lVar3)) {
    func_0x00010c1a7f60(lVar2,param_2,lVar1);
  }
  func_0x00010bedb0e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10627df98; end: 10627dfd7; -[SCContextSpotlightHeroContextLabelRowViewController _updateMadeOnSnapchatInlineLabelCollapse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627df98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274466c);
  func_0x00010c071780(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c286950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744670),
             PTR_s_updateInlineLabelCollapseForAdja_11267f478,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10627dfd8; end: 10627e017; -[SCContextSpotlightHeroContextLabelRowViewController _didFinishChildVisibilityTransition] */

void FUN_10627dfd8(undefined8 param_1)

{
  func_0x00010bedece0();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627e018; end: 10627e08b; -[SCContextSpotlightHeroContextLabelRowViewController heroContextLabelViewController:didSelectAction:cardType:tapZone:] */

void FUN_10627e018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0d20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627e08c; end: 10627e08f; -[SCContextSpotlightHeroContextLabelRowViewController heroContextLabelViewControllerDidFinishVisibilityTransition:] */

void FUN_10627e08c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didFinishChildVisibilityTransit_11255d208);
  return;
}



/* Entry: 10627e090; end: 10627e093; -[SCContextSpotlightHeroContextLabelRowViewController madeOnSnapchatViewControllerDidFinishVisibilityTransition] */

void FUN_10627e090(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didFinishChildVisibilityTransit_11255d208);
  return;
}



/* Entry: 10627e094; end: 10627e0b3; -[SCContextSpotlightHeroContextLabelRowViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627e094(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10627e0b4; end: 10627e0c7; -[SCContextSpotlightHeroContextLabelRowViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627e0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744678,param_3);
  return;
}



/* Entry: 10627e0c8; end: 10627e123; -[SCContextSpotlightHeroContextLabelRowViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627e0c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744678);
  _objc_storeStrong(param_1 + _DAT_112744674,0);
  _objc_storeStrong(param_1 + _DAT_112744670,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274466c,0);
  return;
}



/* Entry: 10627e124; end: 10627e587; -[SCContextSpotlightHeroContextLabelViewController initWithHeroContextCardDataProvider:snapchattersDataFetcher:groupAvatarScopeExposer:currentUserId:avatarProvider:spotlightLogger:imageDownloader:imagePerformer:circumstanceEngine:bloopsCTATargetsService:ctpItemViewService:storiesConfigProvider:contextExperimentService:contextSpotlightParams:operaEventAnnouncer:profileImageProvider:hasTrailingAccessoryContent:viewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10627e124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  puStack_70 = PTR_PTR_1126f0a88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274467c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274467c) = puVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744680;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744684;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744688;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11274468c;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744690;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744694;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112744698;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11274469c;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446a0;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446a4;
    _objc_retain(param_12);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446a8;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446ac;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446b0;
    _objc_retain(param_15);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446b4;
    _objc_retain(param_16);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446b8;
    _objc_retain(param_17);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127446bc;
    _objc_retain(param_18);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127446c0) = param_19;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127446c4) = param_21;
    uVar4 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b12d0;
    func_0x00010bfe0d00(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1f320();
    *(char *)((long)puVar1 + (long)_DAT_1127446c8) = (char)uVar3;
    _objc_release(puVar2);
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127446cc) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127446d0) = 1;
  }
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



/* Entry: 10627e588; end: 10627e5d7; -[SCContextSpotlightHeroContextLabelViewController loadView] */

void FUN_10627e588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9380;
  _objc_alloc(PTR_PTR_1126c9380);
  func_0x00010c01a8a0(0xc024000000000000,0xc024000000000000,0xc014000000000000,0xc024000000000000);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10627e5d8; end: 10627e827; -[SCContextSpotlightHeroContextLabelViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627e5d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f0a88;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  _objc_initWeak(auStack_88,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744680);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe0c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0e80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10627e828;
  puStack_98 = &UNK_110842c58;
  _objc_copyWeak(auStack_90,auStack_88);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127446b4);
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_88);
  uVar1 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 10627e828; end: 10627e86f;  */

void FUN_10627e828(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627e870; end: 10627e8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627e870(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127446d4);
    *(undefined8 *)(param_1 + _DAT_1127446d4) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10627e8fc; end: 10627f117; -[SCContextSpotlightHeroContextLabelViewController _createLabelWithCardType:isRecommended:dataModel:cardsCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627e8fc(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
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
  _objc_retain(param_8);
  if (param_6 == -1) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126c9388;
    _objc_alloc();
    lVar1 = param_8;
    func_0x00010bfb9180(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_8;
    func_0x00010bf4e3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_1127446c0;
    func_0x00010c01a520();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c219b60(puVar21);
    func_0x00010c21e900(puVar21);
    func_0x00010c1a7f60(puVar21);
    lVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c181f00(0x447a0000,puVar21);
    func_0x00010c181f00(0x447a0000,puVar21);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar21);
    _objc_initWeak(auStack_c8,param_4);
    _objc_initWeak(auStack_d0,puVar21);
    _objc_copyWeak(auStack_e0,auStack_c8);
    _objc_copyWeak(auStack_d8,auStack_d0);
    func_0x00010c1d3140(puVar21);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (*(char *)(param_4 + lVar22) == '\x01') {
      puVar8 = puVar21;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = param_4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar22;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar21;
      puStack_a0 = puVar9;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar21;
      puStack_98 = puVar12;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar21;
      puStack_90 = puVar14;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(lVar4);
      _objc_release(lVar17);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(lVar11);
      _objc_release(lVar2);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(lVar1);
      _objc_release(lVar22);
      _objc_release(puVar8);
      lVar22 = (long)_DAT_1127446d8;
      if (*(long *)(param_4 + lVar22) == 0) {
        puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _objc_release(puVar7);
        lVar1 = param_4;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar2;
        func_0x00010bf49420(param_3 * 0.8);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(undefined8 *)(param_4 + lVar22);
        *(long *)(param_4 + lVar22) = lVar11;
        _objc_release(uVar20);
        _objc_release(lVar2);
        _objc_release(lVar1);
        func_0x00010c1e3380(0x447a0000,*(undefined8 *)(param_4 + lVar22));
        func_0x00010c162480(*(undefined8 *)(param_4 + lVar22));
      }
    }
    else {
      puVar8 = puVar21;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = param_4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar22;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar21;
      puStack_c0 = puVar9;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar21;
      puStack_b8 = puVar12;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      puVar15 = puVar13;
      func_0x00010bf49580(param_3 * 0.8);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar21;
      puStack_b0 = puVar15;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar18;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(lVar17);
      _objc_release(param_4);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(lVar11);
      _objc_release(lVar2);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(lVar1);
      _objc_release(lVar22);
      _objc_release(puVar8);
    }
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume(param_8);
  lVar22 = param_8 + 0x20;
  _objc_loadWeakRetained(lVar22);
  param_8 = param_8 + 0x28;
  _objc_loadWeakRetained(param_8);
  func_0x00010be35180(lVar22);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar22);
  return;
}



/* Entry: 10627f118; end: 10627f173;  */

void FUN_10627f118(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35180(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10627f174; end: 10627f1cf; -[SCContextSpotlightHeroContextLabelViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627f174(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  if (*(char *)(param_1 + _DAT_1127446c0) == '\x01') {
    func_0x00010bee3da0(param_1);
  }
  return;
}



/* Entry: 10627f1d0; end: 10627f317; -[SCContextSpotlightHeroContextLabelViewController _updateViewWidthConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627f1d0(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = 0x60;
  if (*(long *)(param_4 + _DAT_1127446cc) != 0) {
    lVar3 = 100;
  }
  lVar3 = *(long *)(param_4 + *(int *)(&DAT_11274467c + lVar3));
  _objc_retain(lVar3);
  if ((lVar3 != 0) && (lVar4 = (long)_DAT_1127446d8, *(long *)(param_4 + lVar4) != 0)) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar5 = 0.8;
    _objc_release(puVar1);
    func_0x00010c0699c0(lVar3);
    dVar6 = dVar5;
    if (param_3 * 0.8 <= dVar5) {
      dVar6 = param_3 * 0.8;
    }
    func_0x00010bf49220(*(undefined8 *)(param_4 + lVar4));
    if (0.5 < ABS(dVar5 - dVar6)) {
      func_0x00010c181140(dVar6,*(undefined8 *)(param_4 + lVar4));
      lVar4 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(lVar2);
      _objc_release(lVar4);
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(lVar4);
      _objc_release(param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10627f318; end: 10627f547; -[SCContextSpotlightHeroContextLabelViewController didSelectLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627f318(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar7 = (uint)uVar1;
  if (*(long *)(param_1 + _DAT_1127446cc) != -1) {
    uVar1 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c9388;
    _objc_opt_class(PTR_PTR_1126c9388);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar9);
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
LAB_10627f3dc:
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        func_0x00010c09ef00(param_3);
        uVar1 = uVar2;
        func_0x00010c07a660();
        uVar7 = (uint)uVar1;
        uVar1 = uVar2;
        goto LAB_10627f3dc;
      }
      uVar7 = 0;
    }
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf4e940(PTR_PTR_1126c9390);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar7 = uVar7 & 1;
    uVar4 = *(undefined8 *)(param_1 + _DAT_112744694);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b04c0();
    _objc_release(uVar4);
    lVar5 = param_1;
    func_0x00010be94dc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar6 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0d80();
      uVar7 = (uint)param_1;
      _objc_release(lVar6);
    }
    _objc_release(lVar5);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (uVar7 == 0) {
    lVar8 = (long)_DAT_1127446cc;
    uVar1 = param_3;
    func_0x00010beb7180();
    if ((int)uVar1 != 0) {
      puVar9 = PTR_PTR_1126b5b00;
      func_0x00010bf4c900(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10627f5a0;
    }
    uVar1 = param_3;
    func_0x00010beb7140();
    if ((int)uVar1 != 0) {
      puVar9 = *(undefined **)(param_3 + (long)_DAT_1127446e4);
      _objc_retain(puVar9);
      goto LAB_10627f5a0;
    }
    if ((*(long *)(param_3 + (long)_DAT_1127446e8) < 2) || (*(long *)(param_3 + lVar8) == 0)) {
      puVar9 = (undefined *)0x0;
      goto LAB_10627f5a0;
    }
  }
  puVar9 = PTR_PTR_1126b5b00;
  func_0x00010bfe0de0(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
LAB_10627f5a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10627f548; end: 10627f5fb; -[SCContextSpotlightHeroContextLabelViewController _resolveTapActionForTrailingZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627f548(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = (long)_DAT_1127446cc;
    lVar1 = param_1;
    func_0x00010beb7180(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    if ((int)lVar1 != 0) {
      puVar2 = PTR_PTR_1126b5b00;
      func_0x00010bf4c900(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10627f5a0;
    }
    lVar1 = param_1;
    func_0x00010beb7140(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    if ((int)lVar1 != 0) {
      puVar2 = *(undefined **)(param_1 + _DAT_1127446e4);
      _objc_retain(puVar2);
      goto LAB_10627f5a0;
    }
    if ((*(long *)(param_1 + _DAT_1127446e8) < 2) || (*(long *)(param_1 + lVar3) == 0)) {
      puVar2 = (undefined *)0x0;
      goto LAB_10627f5a0;
    }
  }
  puVar2 = PTR_PTR_1126b5b00;
  func_0x00010bfe0de0(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
LAB_10627f5a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10627f5fc; end: 10627f60b; -[SCContextSpotlightHeroContextLabelViewController _shouldUseContentLabelActionForType:] */

bool FUN_10627f5fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffe) == 4;
}



/* Entry: 10627f60c; end: 10627f62f; -[SCContextSpotlightHeroContextLabelViewController _shouldUseCardActionForType:] */

uint FUN_10627f60c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (uint)(0x13 < param_3 + 1U) | 0x7ff98U >> (ulong)((uint)(param_3 + 1U) & 0x1f) & 1;
}



/* Entry: 10627f630; end: 10627f917; -[SCContextSpotlightHeroContextLabelViewController _setHeroContextCardDataModelWithDataModelArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627f630(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  if (*(long *)(param_1 + _DAT_1127446c4) != 0x1e) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127446b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c132220();
    _objc_release(uVar2);
    if ((int)uVar6 != 0) {
      func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1109195f8);
      _objc_release(param_3);
    }
  }
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_10627f76c:
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127446dc));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127446e0));
    func_0x00010bea3a60(param_1);
    goto LAB_10627f8f4;
  }
  lVar8 = lVar4;
  func_0x00010bf32060();
  if ((lVar8 == 5) || (lVar8 = lVar4, func_0x00010bf32060(), lVar8 == 1)) {
    lVar8 = lVar4;
    func_0x00010bfb9180();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    if (lVar7 == 0) goto LAB_10627f76c;
  }
  lVar7 = (long)_DAT_1127446cc;
  lVar9 = *(long *)(param_1 + lVar7);
  lVar8 = lVar4;
  func_0x00010bf32060();
  if (*(char *)(param_1 + _DAT_1127446c8) == '\x01') {
    bVar1 = lVar9 != -1 && (lVar9 == 0) != (lVar8 == 0);
  }
  else {
    lVar5 = lVar4;
    func_0x00010bf32060();
    bVar1 = lVar9 != lVar5;
  }
  lVar9 = lVar4;
  func_0x00010bf32060();
  *(long *)(param_1 + lVar7) = lVar9;
  lVar7 = lVar4;
  func_0x00010bf31980();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127446e4);
  *(long *)(param_1 + _DAT_1127446e4) = lVar7;
  _objc_release(uVar6);
  lVar7 = lVar3;
  func_0x00010bf529e0();
  *(long *)(param_1 + _DAT_1127446e8) = lVar7;
  if (lVar8 == 0) {
    lVar7 = (long)_DAT_1127446dc;
    lVar8 = *(long *)(param_1 + lVar7);
    if (lVar8 == 0) {
      func_0x00010bf32060(lVar4);
      goto LAB_10627f854;
    }
  }
  else {
    lVar7 = (long)_DAT_1127446e0;
    lVar8 = *(long *)(param_1 + lVar7);
    if (lVar8 == 0) {
      func_0x00010bf32060(lVar4);
LAB_10627f854:
      lVar8 = param_1;
      func_0x00010bdeeec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      *(long *)(param_1 + lVar7) = lVar8;
      _objc_release(uVar6);
      lVar8 = *(long *)(param_1 + lVar7);
    }
  }
  _objc_retain(lVar8);
  func_0x00010bfdb360(lVar8);
  func_0x00010bea3a60(param_1);
  if (bVar1) {
    func_0x00010bdcae20(param_1);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127446dc));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127446e0));
  }
  func_0x00010bf32060(lVar4);
  func_0x00010be9ed80(param_1);
  _objc_release(lVar8);
LAB_10627f8f4:
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10627f918; end: 10627f937;  */

bool FUN_10627f918(undefined8 param_1,long param_2)

{
  func_0x00010bf32060(param_2);
  return param_2 != 4;
}



/* Entry: 10627f938; end: 10627f9af; -[SCContextSpotlightHeroContextLabelViewController _heroContextLabelView:didResolveRenderableText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627f938(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = 0x60;
    if (*(long *)(param_1 + _DAT_1127446cc) != 0) {
      lVar1 = 100;
    }
    if (param_3 == *(long *)(param_1 + *(int *)(&DAT_11274467c + lVar1))) {
      func_0x00010bea3a60(param_1,param_2,param_4 ^ 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10627f9b0; end: 10627fb1b; -[SCContextSpotlightHeroContextLabelViewController _sendContextLabelsToLogging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627f9b0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 uStack_e8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127446b8;
  puVar2 = param_1;
  puVar4 = param_3;
  if (*(long *)(param_1 + lVar10) != 0) {
    puVar2 = *(undefined **)(param_1 + _DAT_1127446d4);
    func_0x00010c08fa60();
    if ((param_3 != (undefined *)0xffffffffffffffff) && (puVar2 != (undefined *)0x0)) {
      puVar2 = PTR_PTR_1126c9390;
      func_0x00010bf4e900();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      puVar4 = param_3;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126b2cf0;
        func_0x00010bfe0ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b2cf0;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar4);
        uVar9 = *(undefined8 *)(param_1 + lVar10);
        puVar3 = PTR_PTR_1126b2ce8;
        func_0x00010bfe0dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0eb7e0(uVar9);
        _objc_release(puVar3);
        _objc_release(puVar5);
      }
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2[_DAT_1127446d0] = (char)puVar4;
  lVar8 = *(long *)(puVar2 + _DAT_1127446ec);
  *(long *)(puVar2 + _DAT_1127446ec) = lVar8 + 1;
  puVar3 = puVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c074c20();
  _objc_release(puVar3);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)puVar4 == (int)puVar5) {
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar2;
      func_0x00010c29bf00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(puVar3);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c29bf00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(puVar4);
    }
    if ((puVar2[_DAT_1127446f0] & 1) == 0) {
      puVar2[_DAT_1127446f0] = 1;
    }
  }
  else {
    lVar10 = (long)_DAT_1127446f0;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_10627fd50;
    puStack_f8 = &UNK_110845ce0;
    bVar1 = puVar2[lVar10];
    ppuVar6 = &puStack_110;
    puStack_f0 = puVar2;
    uStack_e8 = (char)puVar4;
    _objc_retainBlock();
    puStack_138 = puVar3;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x10627fd8c;
    puStack_120 = &UNK_110841f20;
    ppuVar7 = &puStack_138;
    puStack_118 = puVar2;
    _objc_retainBlock();
    if (((int)puVar4 == 0) || ((bVar1 & 1) == 0)) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
      (*(code *)ppuVar7[2])(ppuVar7,1);
    }
    else {
      puStack_178 = puVar3;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_10627fdc8;
      puStack_160 = &UNK_11084dfe0;
      puStack_158 = puVar2;
      lStack_140 = lVar8 + 1;
      _objc_retain(ppuVar6);
      ppuStack_150 = ppuVar6;
      _objc_retain(ppuVar7);
      ppuStack_148 = ppuVar7;
      func_0x0001000d76cc("APPSTORE",&puStack_178);
      _objc_release(ppuStack_148);
      _objc_release(ppuStack_150);
    }
    if ((puVar2[lVar10] & 1) == 0) {
      puVar2[lVar10] = 1;
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
  }
  return;
}



/* Entry: 10627fb1c; end: 10627fd4f; -[SCContextSpotlightHeroContextLabelViewController _setEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627fb1c(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  *(char *)(param_1 + _DAT_1127446d0) = (char)param_3;
  lVar6 = *(long *)(param_1 + _DAT_1127446ec) + 1;
  *(long *)(param_1 + _DAT_1127446ec) = lVar6;
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c074c20();
  _objc_release(lVar7);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == (uint)lVar3) {
    if ((param_3 & 1) == 0) {
      lVar6 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar6 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(lVar6);
    }
    if ((*(byte *)(param_1 + _DAT_1127446f0) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_1127446f0) = 1;
    }
  }
  else {
    lVar7 = (long)_DAT_1127446f0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10627fd50;
    puStack_88 = &UNK_110845ce0;
    bVar1 = *(byte *)(param_1 + lVar7);
    ppuVar4 = &puStack_a0;
    lStack_80 = param_1;
    uStack_78 = (char)param_3;
    _objc_retainBlock();
    puStack_c8 = puVar2;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x10627fd8c;
    puStack_b0 = &UNK_110841f20;
    ppuVar5 = &puStack_c8;
    lStack_a8 = param_1;
    _objc_retainBlock();
    if ((param_3 == 0) || ((bVar1 & 1) == 0)) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
      (*(code *)ppuVar5[2])(ppuVar5,1);
    }
    else {
      puStack_108 = puVar2;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_10627fdc8;
      puStack_f0 = &UNK_11084dfe0;
      lStack_e8 = param_1;
      lStack_d0 = lVar6;
      _objc_retain(ppuVar4);
      ppuStack_e0 = ppuVar4;
      _objc_retain(ppuVar5);
      ppuStack_d8 = ppuVar5;
      func_0x0001000d76cc("APPSTORE",&puStack_108);
      _objc_release(ppuStack_d8);
      _objc_release(ppuStack_e0);
    }
    if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar7) = 1;
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  return;
}



/* Entry: 10627fd50; end: 10627fdc7;  */

void FUN_10627fd50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627fdc8; end: 10627fea3;  */

void FUN_10627fdc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10627fea4;
  puStack_40 = &UNK_110842e18;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10627fedc;
  puStack_80 = &UNK_110919618;
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uStack_78;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar1;
  _objc_retain(uVar3);
  uStack_68 = uVar3;
  func_0x00010bf03440(0x3fd3333333333333,0,puVar2,param_2,0,&puStack_58,&puStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  return;
}



/* Entry: 10627fea4; end: 10627fedb;  */

void FUN_10627fea4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627fedc; end: 10627ff5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627fedc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + _DAT_1127446ec) == *(long *)(param_1 + 0x38)) {
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,*(undefined8 *)(param_1 + 0x28));
    lVar1 = *(long *)(param_1 + 0x20);
  }
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010627ff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 10627ff60; end: 1062801d7; -[SCContextSpotlightHeroContextLabelViewController _animateLabelViewWithRecommendStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627ff60(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = (long)_DAT_1127446dc;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar4);
  lVar7 = (long)_DAT_1127446e0;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar4);
  bVar3 = param_3 == 0;
  lVar5 = lVar8;
  if (bVar3) {
    lVar5 = lVar7;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  if (bVar3) {
    lVar7 = lVar8;
  }
  uVar15 = 0x4030000000000000;
  if (bVar3) {
    uVar15 = 0xc030000000000000;
  }
  _objc_retain(uVar4);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar6);
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar9 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar13;
  uStack_78 = uVar14;
  uStack_70 = uVar10;
  uStack_68 = uVar12;
  func_0x00010c219960(uVar4,param_2,&uStack_90);
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar13;
  uStack_78 = uVar14;
  uStack_70 = uVar10;
  uStack_68 = uVar12;
  func_0x00010c219960(uVar6,param_2,&uStack_90);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300();
  _objc_release(lVar5);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_1);
  func_0x00010c1677c0(0,uVar4);
  func_0x00010c1a7f60(uVar4,param_2,0);
  _CGAffineTransformMakeTranslation(&uStack_c0,0,uVar15);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  func_0x00010c219960(uVar4,param_2,&uStack_90);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1062801d8;
  puStack_e0 = &UNK_110844b80;
  _objc_retain(uVar6);
  uStack_d8 = uVar6;
  uStack_c8 = uVar15;
  _objc_retain(uVar4);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x106280268;
  puStack_110 = &UNK_110848bd8;
  uStack_108 = uVar6;
  uStack_100 = uVar4;
  uStack_d0 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(uVar6);
  func_0x00010bf03460(0x3fe999999999999a,0,0x3fe6666666666666,0,puVar2,param_2,4,&puStack_f8,
                      &puStack_128);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  return;
}



/* Entry: 1062801d8; end: 1062802e3;  */

void FUN_1062801d8(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  _CGAffineTransformMakeTranslation(&uStack_50,0,-*(double *)(param_1 + 0x30));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28));
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_80);
  return;
}



/* Entry: 1062802e4; end: 106280303; -[SCContextSpotlightHeroContextLabelViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062802e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127446f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106280304; end: 106280317; -[SCContextSpotlightHeroContextLabelViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106280304(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127446f4,param_3);
  return;
}



/* Entry: 106280318; end: 106280327; -[SCContextSpotlightHeroContextLabelViewController isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106280318(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127446d0);
}



/* Entry: 106280328; end: 1062804b3; -[SCContextSpotlightHeroContextLabelViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106280328(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127446f4);
  _objc_storeStrong(param_1 + _DAT_1127446d8,0);
  _objc_storeStrong(param_1 + _DAT_1127446bc,0);
  _objc_storeStrong(param_1 + _DAT_1127446e4,0);
  _objc_storeStrong(param_1 + _DAT_1127446e0,0);
  _objc_storeStrong(param_1 + _DAT_1127446dc,0);
  _objc_storeStrong(param_1 + _DAT_1127446b8,0);
  _objc_storeStrong(param_1 + _DAT_1127446d4,0);
  _objc_storeStrong(param_1 + _DAT_1127446b4,0);
  _objc_storeStrong(param_1 + _DAT_1127446b0,0);
  _objc_storeStrong(param_1 + _DAT_1127446ac,0);
  _objc_storeStrong(param_1 + _DAT_1127446a8,0);
  _objc_storeStrong(param_1 + _DAT_1127446a4,0);
  _objc_storeStrong(param_1 + _DAT_1127446a0,0);
  _objc_storeStrong(param_1 + _DAT_11274469c,0);
  _objc_storeStrong(param_1 + _DAT_112744698,0);
  _objc_storeStrong(param_1 + _DAT_112744694,0);
  _objc_storeStrong(param_1 + _DAT_112744690,0);
  _objc_storeStrong(param_1 + _DAT_11274468c,0);
  _objc_storeStrong(param_1 + _DAT_112744688,0);
  _objc_storeStrong(param_1 + _DAT_112744684,0);
  _objc_storeStrong(param_1 + _DAT_112744680,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274467c,0);
  return;
}



/* Entry: 1062804b4; end: 1062805af; -[SCContextSpotlightHeroContextMenuController initWithHeroContextCardProvider:composerServices:snapchatterServices:storiesConfigProvider:] */

undefined1 *
FUN_1062804b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f0a90;
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



/* Entry: 1062805b0; end: 106280857; -[SCContextSpotlightHeroContextMenuController presentFromViewController:withParams:sessionParams:] */

void FUN_1062805b0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    _objc_storeWeak(param_1 + 0x30,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
    puVar3 = PTR_DAT_1126a4f30;
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010010fab4(param_3,puVar3);
    _objc_release(param_3);
    if ((int)lVar2 != 0) {
      func_0x00010c237b40(param_3);
    }
    _objc_initWeak(auStack_68,param_1);
    puVar3 = PTR_PTR_1126b5bb8;
    _objc_alloc();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c038ee0(0x3ff0000000000000);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar1);
    uVar4 = param_4;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2d20;
    func_0x00010c24afc0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    _objc_opt_class(PTR_PTR_1126ae720);
    uVar5 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar4 = uVar6;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c9398;
    _objc_alloc(PTR_PTR_1126c9398);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00a520(puVar3);
    _objc_release(uVar1);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106280858; end: 106280883;  */

void FUN_106280858(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106280884; end: 10628088f; -[SCContextSpotlightHeroContextMenuController dismissHeroContextMenu:] */

void FUN_106280884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106280890; end: 1062808bf; -[SCContextSpotlightHeroContextMenuController performContextAction:] */

void FUN_106280890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062808c0; end: 106280983; -[SCContextSpotlightHeroContextMenuController _didDismissTrayContainer] */

void FUN_1062808c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR_DAT_1126a4f30;
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,puVar1);
  _objc_release(lVar2);
  if ((int)lVar3 != 0 && lVar2 != 0) {
    func_0x00010bfe2020(lVar2);
  }
  puVar1 = PTR_DAT_1126a4f30;
  if (*(long *)(param_1 + 0x38) != 0) {
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010010fab4(lVar2,puVar1);
    _objc_release(lVar2);
    if (((int)lVar3 != 0) && (lVar2 != 0)) {
      func_0x00010c0f8640(lVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      _objc_release(uVar4);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106280984; end: 1062809eb; -[SCContextSpotlightHeroContextMenuController .cxx_destruct] */

void FUN_106280984(long param_1)

{
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



/* Entry: 1062809ec; end: 106280b13; -[SCContextSpotlightMadeOnSnapchatViewController initWithSessionParams:spotlightLogger:storiesConfigProvider:userPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062809ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f0a98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744714;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744718;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274471c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744720;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744724) = 1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106280b14; end: 106280d13; -[SCContextSpotlightMadeOnSnapchatViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106280b14(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f0a98;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274471c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b12d0;
  func_0x00010c0b61a0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  *(char *)(param_1 + _DAT_112744728) = (char)uVar3;
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b12d0;
  func_0x00010c0b61c0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067e20();
  *(undefined8 *)(param_1 + _DAT_11274472c) = uVar3;
  _objc_release(puVar2);
  func_0x00010beaed60(param_1);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744730);
  *(undefined **)(param_1 + _DAT_112744730) = puVar2;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744714);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  return;
}



/* Entry: 106280d14; end: 106280d5b;  */

void FUN_106280d14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be19b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106280d5c; end: 10628141b; -[SCContextSpotlightMadeOnSnapchatViewController _setupPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106280d5c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  
  lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar44 = (long)_DAT_112744734;
  uVar42 = *(undefined8 *)(param_1 + lVar44);
  *(undefined **)(param_1 + lVar44) = puVar1;
  _objc_release(uVar42);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar44));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar44));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar44));
  lVar43 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar43);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar44));
  uVar42 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010c08c0e0(uVar42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x401c000000000000);
  _objc_release(uVar42);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar44));
  func_0x00010c1af000(*(undefined8 *)(param_1 + lVar44));
  lVar43 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar43);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar44));
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ee20();
  lVar43 = (long)_DAT_112744738;
  uVar42 = *(undefined8 *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar1;
  _objc_release(uVar42);
  _objc_release(puVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar43));
  func_0x00010c1677c0(0x3feccccccccccccd,*(undefined8 *)(param_1 + lVar43));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar43));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar44));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010c274200(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar42);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar43 = (long)_DAT_11274473c;
  uVar42 = *(undefined8 *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar1;
  _objc_release(uVar42);
  puVar1 = PTR_PTR_1126b0c40;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x402e000000000000,0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar43));
  _objc_release(puVar1);
  _objc_release(puVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar43));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar43));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar44));
  lVar43 = param_1;
  func_0x00010be36a00();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + _DAT_112744740);
  *(long *)(param_1 + _DAT_112744740) = lVar43;
  _objc_release(uVar42);
  lVar43 = (long)_DAT_112744728;
  if (*(char *)(param_1 + lVar43) == '\x01') {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar45 = (long)_DAT_112744744;
    uVar42 = *(undefined8 *)(param_1 + lVar45);
    *(undefined **)(param_1 + lVar45) = puVar1;
    _objc_release(uVar42);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar45));
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar45));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar45));
    _objc_release(puVar1);
    func_0x0001062ccf6c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar45));
    _objc_release(puVar1);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar45));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar45));
    func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar45));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar44));
    lVar44 = param_1;
    func_0x00010be3c080();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)(param_1 + _DAT_112744748);
    *(long *)(param_1 + _DAT_112744748) = lVar44;
    _objc_release(uVar42);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar45));
    *(undefined1 *)(param_1 + _DAT_11274474c) = 1;
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar44 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f00(0x447a0000);
  _objc_release(lVar44);
  lVar44 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f00(0x447a0000);
  _objc_release(lVar44);
  lVar44 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  _objc_release(lVar44);
  lVar44 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  _objc_release(lVar44);
  if (*(char *)(param_1 + lVar43) == '\x01') {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181cc0(0x437a0000);
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar41) {
    ___stack_chk_fail();
    lVar43 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar3;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010c1e3380(0x447a0000,puVar15);
    puVar1 = puVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010c1e3380(0x447a0000,puVar16);
    lVar41 = (long)_DAT_11274473c;
    uVar9 = *(undefined8 *)(puVar2 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = (long)_DAT_112744734;
    uVar10 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = uVar9;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar2 + lVar41);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010bf493c0(0xc018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar2 + lVar41);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar17;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar2 + lVar41);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar19;
    func_0x00010bf493c0(0xc018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar21;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar22;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar2 + lVar44);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar25);
    _objc_release(puVar2);
    _objc_release(uVar24);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(uVar23);
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(uVar4);
    _objc_release(uVar21);
    _objc_release(uVar14);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar11);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar42);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar16);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar43) {
      ___stack_chk_fail();
      lVar43 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = puVar15;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x00010c1e3380(0x447a0000,puVar3);
      lVar44 = (long)_DAT_11274473c;
      uVar17 = *(undefined8 *)(puVar15 + lVar44);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar41 = (long)_DAT_112744734;
      uVar18 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar42 = uVar17;
      func_0x00010bf493c0(0x4018000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(puVar15 + lVar44);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar19;
      func_0x00010bf49420(0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar15 + lVar44);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar20;
      func_0x00010bf49420(0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(puVar15 + lVar44);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar21;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar45 = (long)_DAT_112744744;
      uVar23 = *(undefined8 *)(puVar15 + lVar45);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(puVar15 + lVar44);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar23;
      func_0x00010bf493c0(0x4018000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar27 = *(undefined8 *)(puVar15 + lVar45);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar28 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar27;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = *(undefined8 *)(puVar15 + lVar45);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar29;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar31;
      func_0x00010bf49420(0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar32 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar15;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar32;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar33 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar16;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar33;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = puVar15;
      func_0x00010c29bf00(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar35;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar34;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = *(undefined8 *)(puVar15 + lVar41);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar38 = puVar15;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar37;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = 0;
      puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      _objc_release(puVar38);
      _objc_release(puVar15);
      _objc_release(uVar37);
      _objc_release(uVar12);
      _objc_release(puVar36);
      _objc_release(puVar35);
      _objc_release(uVar34);
      _objc_release(uVar10);
      _objc_release(puVar25);
      _objc_release(puVar16);
      _objc_release(uVar33);
      _objc_release(uVar9);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(uVar32);
      _objc_release(uVar7);
      _objc_release(uVar31);
      _objc_release(uVar6);
      _objc_release(uVar30);
      _objc_release(uVar29);
      _objc_release(uVar5);
      _objc_release(uVar28);
      _objc_release(uVar27);
      _objc_release(uVar4);
      _objc_release(uVar24);
      _objc_release(uVar23);
      _objc_release(uVar14);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar11);
      _objc_release(uVar20);
      _objc_release(uVar8);
      _objc_release(uVar19);
      _objc_release(uVar42);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar43) {
        ___stack_chk_fail();
        if (puVar3[_DAT_112744728] != '\x01') {
          return;
        }
        if ((puVar3[_DAT_112744750] & 1) == 0) {
          puVar1 = puVar3;
          func_0x00010be44ee0(puVar3);
          uVar40 = (uint)puVar1 ^ 1;
        }
        else {
          uVar40 = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bea4b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (puVar3,PTR_s__setInlineLabelCollapsed__112586c80,(uVar39 | uVar40) & 1);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
    return;
  }
  return;
}



/* Entry: 10628141c; end: 106281883; -[SCContextSpotlightMadeOnSnapchatViewController _iconOnlyLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628141c(long param_1)

{
  long lVar1;
  long lVar2;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  
  lVar37 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar39 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar39;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar42;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar42);
  _objc_release(lVar39);
  func_0x00010c1e3380(0x447a0000,lVar1);
  lVar39 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar39;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar42;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar42);
  _objc_release(lVar39);
  func_0x00010c1e3380(0x447a0000,lVar2);
  lVar39 = (long)_DAT_11274473c;
  uVar3 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = (long)_DAT_112744734;
  uVar4 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar39;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  _objc_release(lVar41);
  _objc_release(param_1);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(lVar42);
  _objc_release(lVar39);
  _objc_release(uVar19);
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
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar37) {
    ___stack_chk_fail();
    lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar39 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = lVar39;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar42;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar42);
    _objc_release(lVar39);
    func_0x00010c1e3380(0x447a0000,lVar2);
    lVar39 = (long)_DAT_11274473c;
    uVar9 = *(undefined8 *)(lVar1 + lVar39);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = (long)_DAT_112744734;
    uVar10 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar1 + lVar39);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar1 + lVar39);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar1 + lVar39);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = (long)_DAT_112744744;
    uVar19 = *(undefined8 *)(lVar1 + lVar42);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar1 + lVar39);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar19;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(lVar1 + lVar42);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar24;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(lVar1 + lVar42);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar28;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar42 = lVar39;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar29;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar41;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar1;
    func_0x00010c29bf00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar32;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar31;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(lVar1 + lVar40);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = lVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = 0;
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(lVar40);
    _objc_release(lVar1);
    _objc_release(uVar34);
    _objc_release(uVar6);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(uVar31);
    _objc_release(uVar4);
    _objc_release(lVar37);
    _objc_release(lVar41);
    _objc_release(uVar30);
    _objc_release(uVar3);
    _objc_release(lVar42);
    _objc_release(lVar39);
    _objc_release(uVar29);
    _objc_release(uVar22);
    _objc_release(uVar28);
    _objc_release(uVar20);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar18);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar16);
    _objc_release(uVar21);
    _objc_release(uVar19);
    _objc_release(uVar14);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar38) {
      ___stack_chk_fail();
      if (*(char *)(lVar2 + _DAT_112744728) != '\x01') {
        return;
      }
      if ((*(byte *)(lVar2 + _DAT_112744750) & 1) == 0) {
        lVar39 = lVar2;
        func_0x00010be44ee0(lVar2);
        uVar36 = (uint)lVar39 ^ 1;
      }
      else {
        uVar36 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bea4b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar2,PTR_s__setInlineLabelCollapsed__112586c80,(uVar35 | uVar36) & 1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 106281884; end: 106281e07; -[SCContextSpotlightMadeOnSnapchatViewController _inlineLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106281884(long param_1)

{
  long lVar1;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  
  lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar40 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar41;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar41);
  _objc_release(lVar40);
  func_0x00010c1e3380(0x447a0000,lVar1);
  lVar40 = (long)_DAT_11274473c;
  uVar2 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = (long)_DAT_112744734;
  uVar3 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = (long)_DAT_112744744;
  uVar12 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = 0;
  puVar35 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar34);
  _objc_release(lVar39);
  _objc_release(param_1);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
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
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar1 + _DAT_112744728) == '\x01') {
    if ((*(byte *)(lVar1 + _DAT_112744750) & 1) == 0) {
      lVar40 = lVar1;
      func_0x00010be44ee0(lVar1);
      uVar37 = (uint)lVar40 ^ 1;
    }
    else {
      uVar37 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bea4b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s__setInlineLabelCollapsed__112586c80,(uVar36 | uVar37) & 1);
    return;
  }
  return;
}



/* Entry: 106281e08; end: 106281e6f; -[SCContextSpotlightMadeOnSnapchatViewController updateInlineLabelCollapseForAdjacentContextCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106281e08(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + _DAT_112744728) == '\x01') {
    if ((*(byte *)(param_1 + _DAT_112744750) & 1) == 0) {
      lVar1 = param_1;
      func_0x00010be44ee0(param_1);
      uVar2 = (uint)lVar1 ^ 1;
    }
    else {
      uVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bea4b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setInlineLabelCollapsed__112586c80,(param_3 | uVar2) & 1);
    return;
  }
  return;
}



/* Entry: 106281e70; end: 106281f43; -[SCContextSpotlightMadeOnSnapchatViewController _setInlineLabelCollapsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106281e70(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11274474c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11274474c) = (char)param_3;
  if (param_3 == 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_112744740));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744744),param_2,0);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_112744748));
    func_0x00010be87760(param_1);
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_112744748));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744744),param_2,1);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_112744740));
  }
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106281f44; end: 106281f8b; -[SCContextSpotlightMadeOnSnapchatViewController _isUnderInlineLabelImpressionCap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106281f44(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274472c;
  if (*(long *)(param_1 + lVar3) < 1) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010be3c060();
    bVar1 = uVar2 < *(ulong *)(param_1 + lVar3);
  }
  return bVar1;
}



/* Entry: 106281f8c; end: 10628203f; -[SCContextSpotlightMadeOnSnapchatViewController _inlineLabelImpressionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106281f8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112744720);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c2827c0(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 106282040; end: 10628212b; -[SCContextSpotlightMadeOnSnapchatViewController _recordInlineLabelImpressionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106282040(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((((*(char *)(param_1 + (long)_DAT_112744728) == '\x01') &&
       (lVar3 = (long)_DAT_112744750, (*(byte *)(param_1 + lVar3) & 1) == 0)) &&
      ((*(byte *)(param_1 + (long)_DAT_11274474c) & 1) == 0)) &&
     ((uVar1 = param_1, func_0x00010c071780(), (uVar1 & 1) == 0 &&
      (*(undefined1 *)(param_1 + lVar3) = 1, 0 < *(long *)(param_1 + (long)_DAT_11274472c))))) {
    lVar3 = *(long *)(param_1 + (long)_DAT_112744720);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010be3c060(param_1);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e47b78);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 10628212c; end: 106282367; -[SCContextSpotlightMadeOnSnapchatViewController _setVisible:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628212c(ulong param_1,undefined8 param_2,byte param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [48];
  
  *(byte *)(param_1 + (long)_DAT_112744724) = param_3 ^ 1;
  if (((param_3 ^ 1) & 1) == 0) {
    func_0x00010be87760(param_1);
    uVar5 = 0x3ff0000000000000;
    if ((param_4 & 1) == 0) {
LAB_106282280:
      lVar4 = (long)_DAT_112744734;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
      func_0x00010c1677c0(uVar5,*(undefined8 *)(param_1 + lVar4));
      uVar1 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        return;
      }
      uVar2 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        return;
      }
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b6240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112744734;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    _CGAffineTransformMakeTranslation(auStack_80,0,0x4030000000000000);
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar4));
  }
  else {
    uVar5 = 0;
    if ((param_4 & 1) == 0) goto LAB_106282280;
  }
  func_0x00010bf03460(0x3fe999999999999a,0,0x3fe6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 106282368; end: 10628240b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106282368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  lVar1 = (long)_DAT_112744734;
  func_0x00010c1677c0(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    _CGAffineTransformMakeTranslation(&uStack_50,0,0xc030000000000000);
  }
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,&uStack_80);
  return;
}



/* Entry: 10628240c; end: 1062824f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628240c(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = _DAT_112744734;
  if (((param_2 & 1) != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744734),param_2,1)
    ;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar1));
  if ((int)param_2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 != 0) &&
       (uVar4 = uVar3,
       _objc_opt_respondsToSelector(uVar3,PTR_s_madeOnSnapchatViewControllerDidF_11260b2a8),
       (uVar4 & 1) != 0)) {
      func_0x00010c0b6240(uVar3);
    }
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 1062824f8; end: 1062826af; -[SCContextSpotlightMadeOnSnapchatViewController _fromSnapchatCameraWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062824f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  lVar5 = (long)_DAT_112744754;
  lVar3 = *(long *)(param_1 + lVar5);
  lVar1 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == lVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(undefined8 *)(param_1 + lVar5);
    lVar3 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    uVar4 = uVar4 ^ 1;
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar1;
  _objc_release(uVar2);
  if (uVar4 != 0) {
    *(undefined1 *)(param_1 + _DAT_112744750) = 0;
    if (*(char *)(param_1 + _DAT_112744728) == '\x01') {
      func_0x00010bea4b60(param_1);
    }
  }
  lVar1 = param_3;
  func_0x00010bfa29a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(lVar1);
  func_0x00010beaa260(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1062826b0; end: 1062826c3;  */

void FUN_1062826b0(long param_1)

{
  undefined1 in_stack_00000008;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_stack_00000008;
  return;
}



/* Entry: 1062826c4; end: 10628289f; -[SCContextSpotlightMadeOnSnapchatViewController _didTapPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062826c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112744758;
  if (*(long *)(param_1 + lVar6) == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274473c);
    _objc_retain(uVar5);
    func_0x00010bf20c00(uVar5);
    func_0x00010bf51460(uVar5,param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar1);
    if ((*(char *)(param_1 + _DAT_112744728) == '\x01') &&
       (*(char *)(param_1 + _DAT_11274474c) != '\x01')) {
      func_0x0001062ccf84();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001062ccf6c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126b09c0;
    _objc_alloc();
    func_0x00010c051640();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    func_0x00010bf20c00(uVar5);
    _CGRectGetMidX();
    func_0x00010bf51200(lVar3,param_2,uVar5);
    func_0x00010c10c340(*(undefined8 *)(param_1 + lVar6),param_2,lVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112744718);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3e60();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf82f40();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1062828a0; end: 10628290b; -[SCContextSpotlightMadeOnSnapchatViewController tooltipDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062828a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c12c960(param_3);
  lVar2 = (long)_DAT_112744758;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_release(param_3);
  if (param_3 != lVar1) {
    return;
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10628290c; end: 106282913; -[SCContextSpotlightMadeOnSnapchatViewController tooltipTapped:] */

void FUN_10628290c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 106282914; end: 106282933; -[SCContextSpotlightMadeOnSnapchatViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106282914(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274475c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106282934; end: 106282947; -[SCContextSpotlightMadeOnSnapchatViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106282934(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274475c,param_3);
  return;
}



/* Entry: 106282948; end: 106282957; -[SCContextSpotlightMadeOnSnapchatViewController isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106282948(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112744724);
}



/* Entry: 106282958; end: 106282a53; -[SCContextSpotlightMadeOnSnapchatViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106282958(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274475c);
  _objc_storeStrong(param_1 + _DAT_112744740,0);
  _objc_storeStrong(param_1 + _DAT_112744748,0);
  _objc_storeStrong(param_1 + _DAT_112744758,0);
  _objc_storeStrong(param_1 + _DAT_112744730,0);
  _objc_storeStrong(param_1 + _DAT_112744744,0);
  _objc_storeStrong(param_1 + _DAT_11274473c,0);
  _objc_storeStrong(param_1 + _DAT_112744738,0);
  _objc_storeStrong(param_1 + _DAT_112744734,0);
  _objc_storeStrong(param_1 + _DAT_112744754,0);
  _objc_storeStrong(param_1 + _DAT_112744720,0);
  _objc_storeStrong(param_1 + _DAT_11274471c,0);
  _objc_storeStrong(param_1 + _DAT_112744718,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744714,0);
  return;
}



/* Entry: 106282a54; end: 106282b8f; -[SCContextSpotlightMetricsViewController initWithEngagementMetadata:circumstanceEngine:storiesConfigProvider:viewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106282a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f0aa0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744760);
    *(undefined **)((long)puVar1 + (long)_DAT_112744760) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112744764;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112744768;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274476c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744770) = param_6;
    func_0x00010be660c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106282b90; end: 106282bdf; -[SCContextSpotlightMetricsViewController loadView] */

void FUN_106282b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9380;
  _objc_alloc(PTR_PTR_1126c9380);
  func_0x00010c01a8a0(0xc014000000000000,0xc034000000000000,0,0);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106282be0; end: 106282bef; -[SCContextSpotlightMetricsViewController _setTrendingBadgeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106282be0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112744774) = param_3;
  return;
}



/* Entry: 106282bf0; end: 106283c0b; -[SCContextSpotlightMetricsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106282bf0(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined *puVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  long lStack_138;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = PTR_PTR_1126f0aa0;
  lStack_138 = param_1;
  _objc_msgSendSuper2(&lStack_138,PTR_s_viewDidLoad_112684cd8);
  puVar1 = auStack_140;
  _objc_initWeak(puVar1,param_1);
  uVar47 = *(undefined8 *)(param_1 + _DAT_11274476c);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_106283c0c;
  puStack_150 = &UNK_110849200;
  _objc_copyWeak(auStack_148,auStack_140);
  func_0x00010bf1f400(uVar47);
  _objc_release(puVar1);
  lVar50 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar50);
  puVar2 = PTR_PTR_1126c9380;
  _objc_alloc();
  func_0x00010c01a8a0(0xc014000000000000,0xc034000000000000,0,0);
  lVar42 = (long)_DAT_112744778;
  uVar47 = *(undefined8 *)(param_1 + lVar42);
  *(undefined **)(param_1 + lVar42) = puVar2;
  _objc_release(uVar47);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar42));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar42));
  lVar50 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar50);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar42));
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar43 = (long)_DAT_11274477c;
  uVar47 = *(undefined8 *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar2;
  _objc_release(uVar47);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar43));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar42));
  _objc_initWeak(auStack_170,param_1);
  uVar47 = *(undefined8 *)(param_1 + _DAT_112744760);
  _objc_copyWeak(auStack_178,auStack_170);
  func_0x00010c0f7fc0(uVar47);
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  lVar50 = (long)_DAT_112744780;
  uVar47 = *(undefined8 *)(param_1 + lVar50);
  *(undefined **)(param_1 + lVar50) = puVar2;
  _objc_release(uVar47);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fdccccccccccccd,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(*(undefined8 *)(param_1 + lVar50));
  _objc_release(puVar2);
  func_0x00010c1fe7a0(0,0,*(undefined8 *)(param_1 + lVar50));
  func_0x00010c1fe720(0x4018000000000000,*(undefined8 *)(param_1 + lVar50));
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar44 = (long)_DAT_112744784;
  uVar47 = *(undefined8 *)(param_1 + lVar44);
  *(undefined **)(param_1 + lVar44) = puVar2;
  _objc_release(uVar47);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar44));
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar44));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar44));
  _objc_release(puVar2);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar44));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar42));
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar45 = (long)_DAT_112744788;
  uVar47 = *(undefined8 *)(param_1 + lVar45);
  *(undefined **)(param_1 + lVar45) = puVar2;
  _objc_release(uVar47);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar45));
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar45));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar45));
  _objc_release(puVar2);
  puVar40 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uStack_90 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
  uStack_88 = *(undefined8 *)(param_1 + lVar50);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar45));
  _objc_release(puVar40);
  _objc_release(puVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar45));
  lVar50 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar50);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar46 = (long)_DAT_11274478c;
  uVar47 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar2;
  _objc_release(uVar47);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar46));
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar46));
  _objc_release(puVar2);
  lVar50 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar50);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar49 = (long)_DAT_112744790;
  uVar47 = *(undefined8 *)(param_1 + lVar49);
  *(undefined **)(param_1 + lVar49) = puVar2;
  _objc_release(uVar47);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar49));
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar49));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar49));
  _objc_release(puVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar49));
  lVar50 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar50);
  uVar47 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar47;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar50);
  _objc_release(lVar17);
  _objc_release(uVar47);
  func_0x00010c1e3380(0x437a0000,uVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar46);
  uStack_c8 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar49);
  uStack_c0 = uVar41;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar6;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar49);
  uStack_b8 = uVar35;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar8;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar49);
  uStack_b0 = uVar31;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar49);
  uStack_a8 = uVar48;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar49);
  uStack_a0 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar15;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar47;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar40);
  _objc_release(uVar47);
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(lVar50);
  _objc_release(lVar17);
  _objc_release(uVar14);
  _objc_release(uVar48);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar31);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar35);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar41);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar5);
  uVar47 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar47;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar47);
  func_0x00010c1e3380(0x443b8000,uVar5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + lVar42);
  uStack_128 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar42);
  uStack_120 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar42);
  uStack_118 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar42);
  uStack_110 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar43);
  uStack_108 = uVar41;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar43);
  uStack_100 = uVar16;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar27;
  func_0x00010bf493c0(0xbff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar44);
  uStack_f8 = uVar47;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar44);
  uStack_f0 = uVar31;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar32;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar45);
  uStack_e8 = uVar48;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar45);
  uStack_e0 = uVar35;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar36;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar45);
  uStack_d8 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + lVar42);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(puVar40);
  _objc_release(uVar11);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar14);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar48);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar47);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar16);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar41);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar7);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar8);
  _objc_release(lVar50);
  _objc_release(lVar17);
  _objc_release(uVar15);
  puVar40 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bff4000();
  lVar50 = (long)_DAT_112744794;
  uVar47 = *(undefined8 *)(param_1 + lVar50);
  *(undefined **)(param_1 + lVar50) = puVar40;
  _objc_release(uVar47);
  uVar48 = *(undefined8 *)(param_1 + lVar50);
  uVar16 = *(undefined8 *)(param_1 + lVar44);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar16;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar41);
  _objc_release(uVar16);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_148);
  puVar1 = auStack_140;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_140);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bea8b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106283c0c; end: 106283c3f;  */

void FUN_106283c0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106283c40; end: 106283ceb;  */

void FUN_106283c40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e47bb8);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106283cec;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  puStack_40 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}


