/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10685e944; end: 10685e9d3; -[SCSpotlightViewController playbackManagerWillBeginDismissingOpera:] */

void FUN_10685e944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c0ff100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c28a2c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bea7d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSpotlightBackgroundVisibleFo_1125878e8,0,1);
  return;
}



/* Entry: 10685e9d4; end: 10685e9df; -[SCSpotlightViewController playbackManagerDidCancelDismissingOpera:] */

void FUN_10685e9d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSpotlightBackgroundVisibleFo_1125878e8,1,1);
  return;
}



/* Entry: 10685e9e0; end: 10685e9f3; -[SCSpotlightViewController playbackManager:updatingListOfUnviewedStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685e9e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28b430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112752048),PTR_s_updateTrackedStories__112680730,param_4
            );
  return;
}



/* Entry: 10685e9f4; end: 10685ea33; -[SCSpotlightViewController latencyMeasurementWithoutBackgroundTimeIncluded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10685e9f4(double param_1,long param_2)

{
  double dVar1;
  
  _CACurrentMediaTime();
  dVar1 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(param_2 + _DAT_112751fd8));
  return param_1 - dVar1;
}



/* Entry: 10685ea34; end: 10685ea77; -[SCSpotlightViewController latencyMeasurementWithBackgroundTimeIncluded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ea34(void)

{
  func_0x00010c08ae40();
  return;
}



/* Entry: 10685ea78; end: 10685eb17; -[SCSpotlightViewController _recordSpotlightFirstPaint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ea78(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(param_2 + _DAT_112751fd8));
  *(double *)(param_2 + _DAT_112752044) = (param_1 - dVar3) * 1000.0;
  puVar1 = PTR_PTR_1126afdd8;
  uVar2 = *(undefined8 *)(param_2 + _DAT_112751f2c);
  func_0x00010c0f2220(param_2);
  func_0x00010bfc8740(puVar1,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1480(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10685eb18; end: 10685ed2b; -[SCSpotlightViewController playbackManagerDidTeardown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685eb18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_storeWeak(param_2 + _DAT_112751fb0,0);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11275204c);
  *(undefined8 *)(param_2 + _DAT_11275204c) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_2 + _DAT_112751fe0) = 0;
  func_0x00010be95480(param_2);
  *(undefined1 *)(param_2 + _DAT_112751fa4) = 0;
  uVar1 = *(undefined8 *)(param_2 + _DAT_112752000);
  *(undefined8 *)(param_2 + _DAT_112752000) = 0;
  _objc_release(uVar1);
  func_0x00010c251be0(*(undefined8 *)(param_2 + _DAT_112751e80));
  lVar2 = param_2 + _DAT_112752050;
  _objc_loadWeakRetained();
  lVar3 = param_2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf84160(lVar2);
  }
  else {
    func_0x00010c10fd00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010beb3a40(param_2);
    _objc_initWeak(auStack_58,param_2);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    _objc_retain(lVar2);
    func_0x00010bf84b00(param_2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  lVar3 = (long)_DAT_112751f90;
  if ((*(byte *)(param_2 + lVar3) & 1) == 0) {
    func_0x00010bf84540(*(undefined8 *)(param_2 + _DAT_112751f4c));
  }
  func_0x00010c12e4c0(param_4);
  func_0x00010bde0c80(param_2);
  if (*(char *)(param_2 + lVar3) == '\x01') {
    func_0x00010be7d340();
  }
  else {
    func_0x00010be93ea0(param_2);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 10685ed2c; end: 10685ed93;  */

void FUN_10685ed2c(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (0.0 < param_1) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110e4b998);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10685ed94; end: 10685ee03;  */

void FUN_10685ed94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  FUN_10685ed2c(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf84170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissPresentedSpotlightViewCon_1125bea00);
  return;
}



/* Entry: 10685ee04; end: 10685ef37; -[SCSpotlightViewController _updateOperaSizeWithTransitionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ee04(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_7);
  lVar6 = (long)_DAT_112751fb0;
  lVar5 = param_5 + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar7 = param_3;
    dVar8 = param_4;
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar5 = (long)_DAT_11275204c;
    if (*(long *)(param_5 + lVar5) != 0) {
      func_0x00010bdc10a0();
      bVar1 = false;
      if ((param_1 == param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
        bVar1 = param_2 == param_4;
      }
      if (bVar1) goto LAB_10685ef1c;
    }
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    *(undefined **)(param_5 + lVar5) = puVar3;
    _objc_release(uVar4);
    lVar6 = param_5 + lVar6;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c2882c0(dVar7,dVar8,lVar6,param_6,param_7);
    _objc_release(param_5);
    _objc_release(lVar6);
  }
LAB_10685ef1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10685ef38; end: 10685ef83; -[SCSpotlightViewController playbackManagerReachedEndOfPlaylist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ef38(long param_1,undefined8 param_2)

{
  func_0x00010c285840(*(undefined8 *)(param_1 + _DAT_112751e70),param_2,1);
  func_0x00010c1dd700(*(undefined8 *)(param_1 + _DAT_112751e6c));
                    /* WARNING: Could not recover jumptable at 0x00010c0ad570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751ee8),PTR_s_logReachEndOfPlaylist_112608f68);
  return;
}



/* Entry: 10685ef84; end: 10685ef97; -[SCSpotlightViewController playbackManagerDidDepletePlaylist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ef84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ddd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751e6c),PTR_s_setPlaylistDepleted__112655188,1);
  return;
}



/* Entry: 10685ef98; end: 10685eff7; -[SCSpotlightViewController playbackManagerExtendedPlaylist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685ef98(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c285840(*(undefined8 *)(param_1 + _DAT_112751e70),param_2,0);
  lVar1 = (long)_DAT_112751e6c;
  func_0x00010c1dd700(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1ddd80(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c139290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751ee8),PTR_s_resetPlaylist_11262bec0);
  return;
}



/* Entry: 10685eff8; end: 10685f007; -[SCSpotlightViewController playbackManagerReceivedNoNewStoriesInResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685eff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ad6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751ee8),
             PTR_s_logReceiveNoNewStoriesInResponse_112608fc8);
  return;
}



/* Entry: 10685f008; end: 10685f09b; -[SCSpotlightViewController playbackManager:didOpenAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f008(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112752040),param_2,1);
  if (param_4 != 0) {
    lVar1 = param_1;
    FUN_10685f09c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar3 = (long)_DAT_112752054;
      _objc_retain(lVar1);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = lVar1;
      _objc_release(uVar2);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10685f09c; end: 10685f1ef;  */

void FUN_10685f09c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar2 = PTR_s_footerItem_1125caa78;
  puVar1 = PTR_DAT_1126a5648;
  do {
    PTR_DAT_1126a5648 = puVar1;
    if (param_1 == 0) {
      uVar4 = 0;
LAB_10685f1d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
      return;
    }
    _objc_retain(param_1);
    uVar4 = param_1;
    func_0x00010010fab4(param_1,puVar1);
    uVar5 = param_1;
    if ((int)uVar4 == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_1);
    if (((int)uVar4 != 0) &&
       (uVar4 = param_1, _objc_opt_respondsToSelector(param_1,puVar2), (uVar4 & 1) != 0)) {
      uVar4 = param_1;
      func_0x00010bfb4340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 == 0) goto LAB_10685f12c;
      uVar4 = param_1;
      func_0x00010bfb4340(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
LAB_10685f1c8:
      _objc_release(uVar5);
      _objc_release(param_1);
      goto LAB_10685f1d8;
    }
LAB_10685f12c:
    uVar4 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = param_1;
    if (uVar4 == 0) {
      uVar4 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 == 0) {
        uVar4 = 0;
        goto LAB_10685f1c8;
      }
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
    _objc_release(uVar5);
    param_1 = uVar3;
    puVar1 = PTR_DAT_1126a5648;
  } while( true );
}



/* Entry: 10685f1f0; end: 10685f24b; -[SCSpotlightViewController playbackManagerDidCloseAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f1f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112752040),param_2,0);
  lVar2 = (long)_DAT_112752054;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c1a7f60(*(long *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10685f24c; end: 10685f2ab; -[SCSpotlightViewController playbackManager:userDidInteract:] */

void FUN_10685f24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar1 = 1;
  }
  else {
    if (param_4 != 1) goto LAB_10685f298;
    uVar1 = 0;
  }
  func_0x00010c1cb860(param_1,param_2,uVar1,1,4);
LAB_10685f298:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10685f2ac; end: 10685f2bb; -[SCSpotlightViewController playbackManager:replyViewPresentationDidChange:] */

void FUN_10685f2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setNavigationHidden_animated_tri_112650840,param_4,1,4);
  return;
}



/* Entry: 10685f2bc; end: 10685f2cb; -[SCSpotlightViewController playbackManager:didSetInitialSoundState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f2bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + _DAT_112751f3c) = param_4;
  return;
}



/* Entry: 10685f2cc; end: 10685f373; -[SCSpotlightViewController playbackManagerPITNReadyAndMediaFetched:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f2cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_112751fe0) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112751fe0) = 0;
    func_0x00010bfe2480(*(undefined8 *)(param_1 + _DAT_112751e80),param_2,
                        &PTR____CFConstantStringClassReference_110e62138);
    func_0x00010be95480(param_1,param_2,&PTR____CFConstantStringClassReference_110e62138);
  }
  puVar1 = PTR_PTR_1126afdd8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751f2c);
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1560(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10685f374; end: 10685f58f; -[SCSpotlightViewController playbackManager:didUpdateCurrentSectionKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f374(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + _DAT_112751eac) & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112751f6c);
    func_0x00010bfa3d80();
    lVar2 = param_4;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c2827c0();
    _objc_release(lVar2);
    if (lVar1 != lVar10) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar10 = *(long *)(param_1 + _DAT_112751f68);
      _objc_retain(lVar10);
      lVar2 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
      if (lVar2 != 0) {
        lVar1 = *plStack_120;
        do {
          lVar8 = 0;
          do {
            if (*plStack_120 != lVar1) {
              _objc_enumerationMutation(lVar10);
            }
            lVar11 = *(long *)(lStack_128 + lVar8 * 8);
            lVar3 = param_4;
            func_0x00010bfa4340();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c2827c0();
            lVar5 = lVar11;
            func_0x00010bfa3d80();
            _objc_release(lVar3);
            if (lVar4 == lVar5) {
              func_0x00010be72aa0(param_1,param_2,lVar11,1);
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              uVar9 = *(undefined8 *)(param_1 + _DAT_112751ee8);
              func_0x00010bfa3d80(lVar11);
              func_0x00010c0df780(puVar6,param_2,lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0a6400(uVar9,param_2,puVar6);
              _objc_release(puVar6);
              goto LAB_10685f538;
            }
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
          lVar2 = lVar10;
          func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar2 != 0);
      }
LAB_10685f538:
      _objc_release(lVar10);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10685f09c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c0841c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c084de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  return;
}



/* Entry: 10685f590; end: 10685f5f3; -[SCSpotlightViewController sigFooterViewForPlaybackManagerExtendedTouch:] */

void FUN_10685f590(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10685f09c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0841c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c084de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10685f5f4; end: 10685f61b; -[SCSpotlightViewController discoverQueryCoordinator:didReceiveServerResponseForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f5f4(long param_1)

{
  func_0x00010c269d40(*(undefined8 *)(param_1 + _DAT_112751ed0));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10685f61c; end: 10685f643; -[SCSpotlightViewController discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f61c(long param_1)

{
  func_0x00010c269d40(*(undefined8 *)(param_1 + _DAT_112751ed0));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10685f644; end: 10685f67f; -[SCSpotlightViewController isPlayingStory] */

undefined8 FUN_10685f644(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07ab40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10685f680; end: 10685f693; -[SCSpotlightViewController exit:] */

void FUN_10685f680(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010685f68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10685f694; end: 10685f76f; -[SCSpotlightViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f694(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112751f58;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aecb0;
  if ((int)uVar2 < 0) {
    func_0x00010bdf6ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c07ab40();
    func_0x00010c26f120(param_1);
    puVar4 = PTR_PTR_1126aecb0;
    if ((uVar3 & 1) == 0) {
      func_0x00010bf9b820(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10685f740;
    }
  }
  else {
    param_1 = *(ulong *)(param_1 + lVar5);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
  }
  func_0x00010bf9b4c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_10685f740:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10685f770; end: 10685f993; -[SCSpotlightViewController _currentPlaybackManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f770(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + _DAT_112751ea8) & 1) == 0) {
    lVar2 = *(long *)(param_1 + _DAT_112751ebc);
  }
  else {
    if (*(char *)(param_1 + _DAT_112751eac) == '\x01') {
      lVar1 = *(long *)(param_1 + _DAT_112751fec);
      if (lVar1 == 0) {
        lVar1 = *(long *)(param_1 + _DAT_112751f74);
        func_0x00010bfb1920(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010c0ff740();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
      else {
        func_0x00010c0ff740();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar1);
      goto LAB_10685f978;
    }
    lVar1 = (long)_DAT_112751ebc;
    lVar2 = *(long *)(param_1 + lVar1);
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112751eb0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf57a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c18b5e0(uVar4,param_2,param_1);
      lVar5 = param_1;
      func_0x00010be9cec0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfecde0();
      lVar2 = 0;
      if (lVar6 != 0x7fffffffffffffff) {
        lVar2 = lVar6;
      }
      lVar6 = param_1;
      func_0x00010be0e560(param_1,param_2,lVar5);
      func_0x00010c1f9480(uVar4,param_2,lVar5,lVar2,lVar6);
      puVar7 = PTR_PTR_1126ae720;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10685f994;
      puStack_50 = &UNK_110944768;
      uStack_48 = uVar4;
      _objc_retain(uVar4);
      func_0x00010bf11fe0(puVar7,param_2,&puStack_68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar7;
      _objc_release(uVar3);
      _objc_release(uStack_48);
      _objc_release(uVar4);
      _objc_release(lVar5);
      lVar2 = *(long *)(param_1 + lVar1);
    }
  }
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_10685f978:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10685f994; end: 10685f9bb;  */

void FUN_10685f994(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10685f9bc; end: 10685fa43; -[SCSpotlightViewController _sectionKeysForPlaybackManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685f9bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120();
  if (*(char *)(param_1 + _DAT_112751ea4) == '\x01') {
    if (*(long *)(param_1 + _DAT_112752058) != 0) {
      func_0x00010befa120(puVar1);
    }
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10685fa44; end: 10685fa77; -[SCSpotlightViewController _fallbackSectionIndexForSectionKeys:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10685fa44(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + _DAT_112751ea4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bfecdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_indexOfObject__1125d8d40,*(undefined8 *)(param_1 + _DAT_112751e88));
    return param_3;
  }
  return 0x7fffffffffffffff;
}



/* Entry: 10685fa78; end: 10685fa8f; -[SCSpotlightViewController _hasPlaybackManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10685fa78(long param_1)

{
  return *(long *)(param_1 + _DAT_112751ebc) != 0;
}



/* Entry: 10685fa90; end: 10685fabf; -[SCSpotlightViewController _clearPlaybackManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685fa90(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_112751ea8) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751ebc);
    *(undefined8 *)(param_1 + _DAT_112751ebc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10685fac0; end: 10685fac7; -[SCSpotlightViewController pageViewName] */

undefined8 FUN_10685fac0(void)

{
  return 0x13c;
}



/* Entry: 10685fac8; end: 10685fcd7; -[SCSpotlightViewController defaultProjectNameV3] */

void FUN_10685fac8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aedf8;
  func_0x00010befddc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar2 = PTR_s_defaultProjectNameV3_1125b81a0;
  do {
    PTR_s_defaultProjectNameV3_1125b81a0 = puVar2;
    if (lVar5 == 0) {
      uVar10 = 0;
LAB_10685fc88:
      _objc_release(lVar4);
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c24acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_spotlight_112670560);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      puVar7 = PTR_DAT_1126a5038;
      uVar9 = *(ulong *)(lVar11 * 8);
      _objc_retain(uVar9);
      uVar6 = uVar9;
      func_0x00010010fab4(uVar9,puVar7);
      uVar10 = uVar9;
      if ((int)uVar6 == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar9);
      if (uVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar10 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar2);
        if ((uVar10 & 1) != 0) {
          uVar10 = uVar9;
          func_0x00010bf69fe0();
          _objc_retainAutoreleasedReturnValue();
          if ((uVar10 != 0) && (puVar7 = puVar3, func_0x00010bf4b900(), ((ulong)puVar7 & 1) != 0)) {
            _objc_release(uVar9);
            goto LAB_10685fc88;
          }
          _objc_release(uVar10);
        }
      }
      _objc_release(uVar9);
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = lVar4;
    func_0x00010bf52a60();
    puVar2 = PTR_s_defaultProjectNameV3_1125b81a0;
  } while( true );
}



/* Entry: 10685fcd8; end: 10685fce3; -[SCSpotlightViewController defaultProjectNameV2] */

void FUN_10685fcd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_spotlight_112670560);
  return;
}



/* Entry: 10685fce4; end: 10685fd93; -[SCSpotlightViewController defaultSubProjectName] */

undefined ** FUN_10685fce4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_1;
  func_0x00010bf69fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bf69fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126aedf8;
  func_0x00010c24ace0(PTR_PTR_1126aedf8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e62158;
  if ((int)lVar2 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_release(param_1);
  return ppuVar1;
}



/* Entry: 10685fd94; end: 10685fe9b; -[SCSpotlightViewController jiraMetaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685fd94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751e90);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined4 *)(param_1 + _DAT_112751e8c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e62178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10685fe9c; end: 106860013; -[SCSpotlightViewController _configureBadgingWithDidOpenFromNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10685fe9c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_112751f48);
  func_0x00010c2581c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c24b7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (((param_3 & 1) == 0) && (0 < lVar3)) {
    if (((*(byte *)(param_1 + _DAT_112751e9c) & 1) != 0) ||
       (*(char *)(param_1 + _DAT_112751e98) == '\x01')) {
      func_0x00010c238b40(*(undefined8 *)(param_1 + _DAT_112751f78));
    }
  }
  else {
    func_0x00010bf3aa20(*(undefined8 *)(param_1 + _DAT_112751f78));
  }
  if (*(long *)(param_1 + _DAT_112751f24) == -1) {
    uVar4 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106860014;
    puStack_50 = &UNK_110842e18;
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    func_0x00010007380c(uVar4,&puStack_68);
    _objc_release(uVar4);
    _objc_release(lStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106860014; end: 10686001b;  */

void FUN_106860014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3aa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_clearBadge_1125ac428)
  ;
  return;
}



/* Entry: 10686001c; end: 1068600cf; -[SCSpotlightViewController _handlePageOpen:enterAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686001c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275205c;
  if ((*(byte *)(param_1 + lVar3) & 1) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + _DAT_112751fbc) = param_3;
  *(undefined1 *)(param_1 + lVar3) = 1;
  func_0x00010bec0820();
  func_0x00010c139700(*(undefined8 *)(param_1 + _DAT_112751ee8));
  puVar2 = PTR_PTR_1126afdd8;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751f28);
  func_0x00010bfcbb00(uVar1);
  func_0x00010bfc8740(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdc3960(param_1,param_2,param_4,puVar2);
  func_0x00010bdcc2e0(param_1,param_2,param_4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068600d0; end: 10686021b; -[SCSpotlightViewController _SCAFeedPageEntryTypeFromEnterAction:previousPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1068600d0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + _DAT_112751f80);
  if (*(long *)(param_1 + _DAT_112751f80) == -1) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f59ad8);
    if ((int)uVar1 == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110eb57b8);
      if ((int)uVar1 == 0) {
        uVar1 = param_4;
        func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_4;
          func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e30ab8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_4;
            func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f59bd8);
            if ((uVar1 & 1) == 0) {
              if ((*(char *)(param_1 + _DAT_112751e74) == '\x01') &&
                 (uVar3 = *(long *)(param_1 + _DAT_112751e84) - 0x57, uVar1 = uVar3 >> 1,
                 (uVar1 | uVar3 << 0x3f) < 8)) {
                lVar4 = *(long *)(&UNK_10dde1880 + uVar1 * 8);
              }
              else {
                lVar4 = 0;
              }
            }
            else {
              lVar4 = 0x20;
            }
          }
          else {
            lVar4 = 0x17;
          }
        }
        else {
          lVar4 = 0x18;
        }
        goto LAB_106860158;
      }
      lVar2 = 0x1a;
      lVar4 = 0x15;
    }
    else {
      lVar2 = 0x19;
      lVar4 = 0x14;
    }
    if (param_3 != 2) {
      lVar4 = lVar2;
    }
  }
LAB_106860158:
  _objc_release(param_4);
  return lVar4;
}



/* Entry: 10686021c; end: 106860293; -[SCSpotlightViewController _handlePageClose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686021c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275205c;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010bdcc2a0();
    *(undefined1 *)(param_1 + lVar1) = 0;
    lVar1 = (long)_DAT_112751ee8;
    func_0x00010c0a5800(*(undefined8 *)(param_1 + lVar1));
    if (*(long *)(param_1 + _DAT_112751f7c) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b03b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar1),PTR_s_logSpotlightAbandonDiskNotLoaded_112609af8);
      return;
    }
  }
  return;
}



/* Entry: 106860294; end: 10686061b; -[SCSpotlightViewController _announcePageOpen:entryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106860294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 uStack_84;
  undefined8 uStack_80;
  
  lVar9 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b100();
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139140();
  _objc_release(lVar9);
  *(undefined8 *)(param_1 + _DAT_112751e68) = param_3;
  if (*(long *)(param_1 + _DAT_112751f24) == -1) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112751f48);
    func_0x00010c2581c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar11;
    func_0x00010bfd3ac0();
    uStack_84 = (undefined1)uVar1;
    _objc_release(uVar11);
  }
  else {
    uStack_84 = 0;
  }
  lVar9 = (long)_DAT_112752004;
  uStack_80 = *(ulong *)(param_1 + lVar9);
  if (uStack_80 == 0) {
    lVar10 = (long)_DAT_112752008;
    uVar5 = *(ulong *)(param_1 + lVar10);
    if (uVar5 == 0) {
      uVar5 = 0;
      uVar1 = 0;
      uStack_80 = 0;
      goto LAB_1068604a8;
    }
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uStack_80 = uVar2;
    if ((uVar5 & 1) == 0) {
      uStack_80 = 0;
    }
    _objc_retain();
    _objc_release(uVar2);
    uVar5 = *(ulong *)(param_1 + lVar10);
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    uVar1 = 0;
  }
  else {
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c06a4a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar5 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf38cc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      uVar5 = uVar2;
    }
  }
  _objc_release(uVar2);
LAB_1068604a8:
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112751fb4);
  lVar10 = param_1;
  func_0x00010c247980(param_1);
  lVar7 = param_1;
  func_0x00010c247a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x000107cb392c(puVar3,param_4,param_3,uVar11,lVar10,lVar7,uStack_80,uVar1,uVar5,uStack_84);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc40(param_1);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar6);
  func_0x00010c206f20(param_1);
  func_0x00010c206f80(param_1);
  *(undefined8 *)(param_1 + _DAT_112751f80) = 0xffffffffffffffff;
  uVar11 = *(undefined8 *)(param_1 + _DAT_112752008);
  *(undefined8 *)(param_1 + _DAT_112752008) = 0;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = 0;
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_80);
  return;
}



/* Entry: 10686061c; end: 1068607bb; -[SCSpotlightViewController _announcePageClose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686061c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_112751e70);
  lVar8 = (long)_DAT_112751ebc;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb520();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd6020();
  func_0x00010c1264a0(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar8 = (long)_DAT_112751e6c;
  uVar4 = *(ulong *)(param_1 + lVar8);
  func_0x00010c0ffaa0();
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + lVar8);
    func_0x00010bf52f00();
    if (lVar5 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
      func_0x00010c1012a0();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        lVar5 = *(long *)(param_1 + lVar8);
        func_0x00010bf52ec0();
        uVar2 = 1;
        if (lVar5 != 0) {
          uVar2 = 2;
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112751fb4);
  func_0x00010bf52ec0(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c0df840(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cb3d20(param_3,0x5c,0,uVar3,puVar6,*(undefined8 *)(param_1 + _DAT_112751f3c),uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010bdcbc40(param_1);
  func_0x00010be53ca0(param_1);
  func_0x00010be55f60(param_1);
  func_0x00010be4fb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068607bc; end: 106860877; -[SCSpotlightViewController _logFullScreenContentViewAbandonment:] */

void FUN_1068607bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010be40b20();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010be19da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f41b38);
    _objc_release(puVar3);
    func_0x00010bdcbc40(param_1,param_2,&PTR____CFConstantStringClassReference_110f414d8,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106860878; end: 10686098b; -[SCSpotlightViewController _logMetadataAndMediaAvailableCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106860878(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_112751ee8;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar1 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cc120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  lVar7 = (long)_DAT_112751e88;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfa4340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa400(uVar5,param_2,lVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar1 = param_1;
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c41c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfa4340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa0e0(uVar5,param_2,lVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10686098c; end: 106860a87; -[SCSpotlightViewController _logAbandonmentReasonIfApplicable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686098c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112751e70;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bfb1da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c063d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e621d8;
    }
    else {
      lVar1 = *(long *)(param_1 + lVar3);
      func_0x00010c0eb620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar2 = &PTR____CFConstantStringClassReference_110e621f8;
      if (lVar1 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e62218;
      }
    }
  }
  else if (param_3 == 2) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e62238;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e62258;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751ee8),
             PTR_s_logSpotlightAbandonmentReason_fe_112609b00,ppuVar2,
             (long)*(int *)(param_1 + _DAT_112751e8c),*(undefined8 *)(param_1 + _DAT_112751e84));
  return;
}



/* Entry: 106860a88; end: 106860f37; -[SCSpotlightViewController _fullscreenConentViewAbandonmentDictionary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106860a88(undefined *param_1)

{
  bool bVar1;
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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puStack_138;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5f6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + _DAT_112751e70);
    func_0x00010c0eb400();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = (undefined *)0x0;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      puStack_138 = puVar3;
    }
  }
  else {
    bVar1 = false;
    puStack_138 = puVar3;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4060();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112751e88;
  puVar5 = *(undefined **)(param_1 + lVar25);
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf52ec0(*(undefined8 *)(param_1 + _DAT_112751e6c));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar8 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1bc0();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = *(undefined **)(param_1 + _DAT_112751fb4);
  puVar11 = puVar24;
  if (puVar24 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = *(undefined **)(param_1 + lVar25);
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c0cc120();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  if (puVar15 == (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar17 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c0c41c0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  if (puVar18 == (undefined *)0x0) {
    puVar19 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c0d3c80();
  _objc_release(puVar20);
  if (puVar18 == (undefined *)0x0) {
    _objc_release(puVar19);
  }
  _objc_release(puVar18);
  _objc_release(puVar17);
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar16);
  }
  _objc_release(puVar15);
  _objc_release(puVar14);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  _objc_release(puVar12);
  if (puVar24 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  if (bVar1) {
    _objc_release(puVar3);
  }
  uVar22 = *(undefined8 *)(param_1 + _DAT_112751e70);
  func_0x00010bfbf960(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar21);
  _objc_release(uVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puStack_138 + _DAT_112751f18),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e62278,0,0);
  return;
}



/* Entry: 106860f38; end: 106860f57; -[SCSpotlightViewController _isFullscreenAbandonmentLoggingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106860f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751f18),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e62278,0,0);
  return;
}



/* Entry: 106860f58; end: 106861603; -[SCSpotlightViewController _announcePlaybackStartWithInitialStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106860f58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = param_3;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  _objc_release(lVar3);
  lVar9 = (long)_DAT_112751e88;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_1;
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1bc0();
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c72b8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dcad78;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e5f1f8;
  puVar8 = *(undefined **)(param_1 + _DAT_112751fb4);
  puVar2 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eb3738;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar2;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  func_0x00010bef7f60(puVar7);
  puVar2 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  lVar3 = param_3;
  func_0x00010c09ab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 != 0) {
    func_0x00010c24be00(param_3);
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    lVar3 = param_3;
    func_0x00010c09ab40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar3);
  }
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_106861604;
  uStack_b0 = 0x106861614;
  uStack_a8 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  lVar3 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(lVar3);
  if (*(char *)(puStack_e8 + 3) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  lVar9 = puStack_c8[5];
  func_0x00010c27ba00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c27bb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar3;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010bdcbc40(param_1);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_f0,8);
    lVar3 = 8;
    __Block_object_dispose(&uStack_d0);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 106861604; end: 10686161b;  */

void FUN_106861604(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10686161c; end: 106861803;  */

void FUN_10686161c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar5 != 0;
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106861804; end: 10686188b; -[SCSpotlightViewController _announceEventWithName:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106861804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e50);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,param_3,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686188c; end: 106861bab; -[SCSpotlightViewController _configureHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686188c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f39ccde;
  func_0x0001000ba800();
  puVar3 = PTR_PTR_1126af080;
  _objc_alloc_init();
  lVar12 = (long)_DAT_112752040;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar3;
  _objc_release(uVar9);
  func_0x00010c1a9d60(*(undefined8 *)(param_1 + lVar12),param_2,1);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar12),param_2,2);
  lVar11 = (long)_DAT_112751f54;
  uVar4 = *(ulong *)(param_1 + lVar11);
  func_0x00010081f998();
  uVar9 = 3;
  if ((uint)uVar4 == 0) {
    uVar9 = 4;
  }
  func_0x00010c216600(*(undefined8 *)(param_1 + lVar12),param_2,uVar9);
  if (*(char *)(param_1 + _DAT_112751ea8) == '\x01') {
    if (*(long *)(param_1 + _DAT_112751f78) != 0) {
      func_0x00010c216620(*(undefined8 *)(param_1 + lVar12));
      uVar8 = 2;
      goto LAB_1068619a0;
    }
  }
  lVar5 = param_1;
  func_0x00010be34da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar12),param_2,lVar5);
  _objc_release(lVar5);
  uVar8 = uVar4 & 0xffffffff;
LAB_1068619a0:
  func_0x00010c1dee80(*(undefined8 *)(param_1 + lVar12),param_2,uVar8);
  lVar5 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010083f4d0();
  if (lVar5 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c24bc40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      uVar9 = 0;
      if (iVar1 == 0) {
        uVar9 = 2;
      }
      func_0x00010c20eaa0(lVar11,param_2,uVar9);
      func_0x00010c213a60(lVar11,param_2,1);
      func_0x00010befa120(puVar3,param_2,lVar11);
    }
    uVar9 = *(undefined8 *)(param_1 + _DAT_112751e5c);
    puVar6 = PTR_PTR_1126c22a8;
    func_0x00010bf82860(PTR_PTR_1126c22a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f360(uVar9,param_2,puVar6);
    _objc_release(puVar6);
    if ((((uint)uVar9 | (uint)uVar4) & 1) == 0) {
      lVar10 = lVar5;
      func_0x00010c24c120();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 != 0) {
        uVar7 = 0;
        if (iVar1 == 0) {
          uVar7 = 2;
        }
        func_0x00010c20eaa0(lVar10,param_2,uVar7);
        func_0x00010c213a60(lVar10,param_2,1);
        func_0x00010befa120(puVar3,param_2,lVar10);
      }
      _objc_release(lVar10);
    }
    puVar6 = PTR_PTR_1126b6550;
    _objc_alloc();
    func_0x00010bff9fe0();
    lVar10 = (long)_DAT_112752060;
    _objc_retain();
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar6;
    _objc_release(uVar7);
    func_0x00010c188540(*(undefined8 *)(param_1 + lVar12),param_2,*(undefined8 *)(param_1 + lVar10))
    ;
    func_0x00010bde5180(param_1,param_2,param_3,uVar9,iVar1,uVar4);
    _objc_release(puVar6);
    _objc_release(lVar11);
    _objc_release(puVar3);
  }
  _objc_release(lVar5);
  func_0x0001000e2a84(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106861bac; end: 106861f3b; -[SCSpotlightViewController _configureHeaderTrailingButtons:searchButtonDisabled:removeHeaderButtonBackgroundFill:useLeadingTitleHeaderLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106861bac(undefined *param_1,undefined8 param_2,undefined *param_3,uint param_4,
                  undefined8 param_5,int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  uVar11 = param_4;
  _objc_retain(param_3);
  puVar2 = &UNK_10f39ccfd;
  func_0x0001000ba800();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((((param_4 & 1) == 0) && (param_6 != 0)) && (puVar4 != (undefined *)0x0)) {
    puVar14 = puVar4;
    func_0x00010c24c120();
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 != (undefined *)0x0) {
      func_0x00010c20eaa0(puVar14);
      func_0x00010c213a60(puVar14);
      puVar10 = puVar14;
      func_0x00010befa120(puVar3);
    }
    _objc_release(puVar14);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112751f18);
  func_0x0001009703d0(uVar5,*(undefined8 *)(param_1 + _DAT_112751f1c));
  lVar13 = (long)_DAT_112751f54;
  uVar1 = (uint)*(undefined8 *)(param_1 + lVar13);
  func_0x000108f4b238();
  if (((uVar1 | (uint)uVar5 ^ 0xffffffff) & 1) == 0) {
    puVar14 = PTR_PTR_1126c2d70;
    _objc_alloc_init();
    func_0x00010c20eaa0();
    func_0x00010c213a60(puVar14);
    puVar7 = param_1;
    func_0x00010be769a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c2d78;
    _objc_alloc();
    func_0x00010c01ae60();
    uVar5 = *(undefined8 *)(param_1 + lVar13);
    func_0x000108f4b224();
    if ((int)uVar5 != 0) {
      func_0x0001068678c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar8);
      _objc_release(uVar5);
      func_0x00010c213600(puVar8);
    }
    func_0x00010c21ad00(puVar8);
    func_0x00010c160fc0(puVar8);
    uVar11 = 1;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c1d5fe0(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    uVar6 = *(ulong *)(param_1 + lVar13);
    func_0x000108f4b224();
  }
  else {
    puVar14 = (undefined *)0x0;
    uVar6 = 0;
  }
  if ((puVar4 != (undefined *)0x0) && ((uVar6 & 1) == 0)) {
    uVar11 = 0;
    puVar7 = param_1;
    func_0x00010bdc6ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010befa120(puVar3);
    _objc_release(puVar7);
  }
  if (puVar14 != (undefined *)0x0) {
    puVar10 = puVar14;
    func_0x00010befa120(puVar3);
    func_0x00010be9b540(param_1);
  }
  puVar7 = puVar3;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b6550;
    _objc_alloc();
    func_0x00010bff9fe0();
    lVar13 = (long)_DAT_112752064;
    _objc_retain();
    uVar5 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar7;
    _objc_release(uVar5);
    puVar10 = *(undefined **)(param_1 + lVar13);
    func_0x00010c2194c0(*(undefined8 *)(param_1 + _DAT_112752040));
    _objc_release(puVar7);
  }
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar2);
    __Unwind_Resume(param_3);
    _objc_terminate();
    func_0x00010c24adc0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0();
    func_0x00010c213a60(puVar10);
    if (uVar11 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1882a0(puVar10);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c188e60(puVar10);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  return;
}



/* Entry: 106861f3c; end: 10686200b; -[SCSpotlightViewController _addFriendsHeaderButtonItem:shouldHighlightWhite:removeHeaderButtonBackgroundFill:] */

void FUN_106861f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c24adc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = 2;
  }
  func_0x00010c20eaa0();
  func_0x00010c213a60(param_3,param_2,uVar1);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1882a0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188e60(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10686200c; end: 10686200f; -[SCSpotlightViewController _headerItemTitle] */

void FUN_10686200c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebf0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__spotlightTabTitle_11258d5d8);
  return;
}



/* Entry: 106862010; end: 10686216f; -[SCSpotlightViewController _sendQueryWithQuerySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106862010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_112751ea8) & 1) == 0) {
    func_0x00010bea0560(param_1,param_2,param_3);
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf6ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5ff00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c067fc0();
    lVar4 = *(long *)(param_1 + _DAT_112751e5c);
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfa4340();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = lVar2;
    if (lVar3 != lVar6) {
      if (*(char *)(param_1 + _DAT_112751eac) == '\x01') {
        lVar3 = param_1;
        func_0x00010bdf6ee0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010bf6eaa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(lVar3);
      }
      func_0x00010bea0560(param_1,param_2,param_3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106862170; end: 1068622db; -[SCSpotlightViewController _sendSpotlightQueryWithQuerySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106862170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b1138;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined4 *)(param_1 + _DAT_112751e8c));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0127e0(puVar1,param_2,puVar3,0,*(undefined8 *)(param_1 + _DAT_112751fb4),5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112751ed0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1158;
  _objc_alloc();
  func_0x00010c03c440();
  _objc_release(param_3);
  uVar9 = 0;
  puVar3 = puVar2;
  func_0x00010c13cfe0(uVar4,param_2,puVar2,0);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  puVar2 = puVar1;
  func_0x00010bdf6a00();
  uVar4 = 2;
  if ((long)puVar2 < 0x102) {
    if (puVar2 == (undefined *)0x2) goto LAB_10686236c;
    if (puVar2 == (undefined *)0x3) {
      uVar4 = 4;
      goto LAB_10686236c;
    }
  }
  else {
    if ((puVar2 == (undefined *)0x102) || (puVar2 == (undefined *)0x107)) {
      uVar4 = 0x1c;
      goto LAB_10686236c;
    }
    if (puVar2 == (undefined *)0x109) goto LAB_10686236c;
  }
  uVar4 = 0;
LAB_10686236c:
  uVar10 = *(undefined8 *)(puVar1 + _DAT_112751f60);
  puVar5 = puVar1;
  func_0x00010bdf6ee0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf60f80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + _DAT_112751fb4);
  puVar2 = puVar1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf5f6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1360(uVar10,param_2,puVar3,puVar6,puVar7,uVar11,0x5c,uVar4,0xffffffffffffffff,
                      puVar8);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c0a63c0(*(undefined8 *)(puVar1 + _DAT_112751ee8),param_2,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1068622dc; end: 106862473; -[SCSpotlightViewController _logSubfeedActionWithActionType:toFeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068622dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdf6a00();
  uVar6 = 2;
  if (lVar1 < 0x102) {
    if (lVar1 == 2) goto LAB_10686236c;
    if (lVar1 == 3) {
      uVar6 = 4;
      goto LAB_10686236c;
    }
  }
  else {
    if ((lVar1 == 0x102) || (lVar1 == 0x107)) {
      uVar6 = 0x1c;
      goto LAB_10686236c;
    }
    if (lVar1 == 0x109) goto LAB_10686236c;
  }
  uVar6 = 0;
LAB_10686236c:
  uVar7 = *(undefined8 *)(param_1 + _DAT_112751f60);
  lVar2 = param_1;
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112751fb4);
  lVar1 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf5f6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1360(uVar7,param_2,param_3,lVar3,puVar4,uVar8,0x5c,uVar6,0xffffffffffffffff,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c0a63c0(*(undefined8 *)(param_1 + _DAT_112751ee8),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106862474; end: 10686251f; -[SCSpotlightViewController _logFeedSwitcherTransistionEndWithDirection:toBundle:shouldLogAction:] */

void FUN_106862474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_5 != 0) {
    _objc_retain(param_4);
    uVar1 = param_1;
    func_0x00010bec5c60(param_1,param_2,param_3);
    uVar2 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar3 = uVar2;
    func_0x00010bfa3d80(uVar2);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be59500(param_1,param_2,uVar1,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106862520; end: 106862537; -[SCSpotlightViewController _subfeedActionLoggerFromContainerPanDirection:] */

undefined8 FUN_106862520(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 4;
  if (param_3 == 2) {
    uVar1 = 5;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106862538; end: 10686283b; -[SCSpotlightViewController _handleInteractionHistoryForDynamicRanking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106862538(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_2 + _DAT_112751e5c);
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf80580();
  fVar11 = 0.0;
  if ((uVar1 & 1) != 0) goto LAB_1068625ac;
  uVar1 = param_4;
  func_0x00010c07dc00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c296d80();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_4;
    func_0x00010c06d760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c296d80();
    if ((int)uVar4 != 0) {
      _objc_release(uVar3);
      goto LAB_10686260c;
    }
    uVar4 = param_4;
    func_0x00010c080120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c296d80();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    fVar10 = 1.0;
    if ((uVar6 & 1) == 0) {
      func_0x00010c1044a0(uVar2);
      if (0.0 < param_1) {
        uVar1 = param_4;
        func_0x00010c2770a0();
        param_1 = (double)(uVar1 & 0xffffffff);
        dVar9 = param_1 / 1000.0;
        func_0x00010c1044a0(uVar2);
        dVar9 = dVar9 - param_1;
        if (dVar9 <= 0.0) goto LAB_1068625ac;
        func_0x00010c104480(uVar2);
        if ((param_1 <= 0.0) || (func_0x00010c104480(uVar2), param_1 <= dVar9)) goto LAB_1068626fc;
        func_0x00010c104480(uVar2);
        param_1 = dVar9 / param_1;
        fVar11 = (float)param_1;
        if (fVar11 == 0.0) goto LAB_1068625ac;
LAB_1068625b8:
        uVar8 = 1;
LAB_1068625bc:
        fVar10 = fVar11;
        if (fVar11 <= 0.0) goto LAB_106862694;
        goto LAB_106862644;
      }
LAB_1068625ac:
      uVar1 = uVar2;
      func_0x00010bf803e0();
      if ((uVar1 & 1) != 0) goto LAB_1068625b8;
      uVar1 = param_4;
      func_0x00010c132440();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c296d80();
      if ((long)uVar3 < 1) {
        uVar3 = param_4;
        func_0x00010c074c20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c296d80();
        _objc_release(uVar3);
        _objc_release(uVar1);
        fVar10 = 1.0;
        if ((uVar4 & 1) != 0) {
LAB_106862738:
          uVar8 = 0;
          goto LAB_106862644;
        }
        if ((fVar11 != 0.0) || (func_0x00010c0d7600(uVar2), param_1 <= 0.0)) {
LAB_106862834:
          uVar8 = 0;
        }
        else {
          uVar1 = param_4;
          func_0x00010c2770a0();
          dVar9 = (double)(uVar1 & 0xffffffff);
          dVar12 = dVar9 / -1000.0;
          func_0x00010c0d7600(uVar2);
          dVar12 = dVar9 + dVar12;
          if (dVar12 <= 0.0) goto LAB_106862834;
          func_0x00010c0d75e0(uVar2);
          if ((dVar9 <= 0.0) || (func_0x00010c0d75e0(uVar2), dVar9 <= dVar12)) goto LAB_106862738;
          func_0x00010c0d75e0(uVar2);
          uVar8 = 0;
          fVar11 = (float)(dVar12 / dVar9);
        }
        goto LAB_1068625bc;
      }
      uVar8 = 0;
      goto LAB_106862638;
    }
LAB_1068626fc:
    uVar8 = 1;
  }
  else {
LAB_10686260c:
    uVar8 = 1;
LAB_106862638:
    _objc_release(uVar1);
    fVar10 = 1.0;
  }
LAB_106862644:
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_2 + _DAT_112752048);
  uVar1 = param_4;
  func_0x00010c259740(param_4);
  func_0x00010c0df880(puVar5,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd14a0(fVar10,uVar7,param_3,puVar5,uVar8);
  _objc_release(puVar5);
LAB_106862694:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10686283c; end: 106862957; -[SCSpotlightViewController handleUserTriggeredNavigationAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686283c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112751f54);
    func_0x000108f4b238();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112751f18);
      func_0x0001009703d0(uVar2,*(undefined8 *)(param_1 + _DAT_112751f1c));
      if ((int)uVar2 != 0) {
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_106862958;
        puStack_40 = &UNK_110842e18;
        lStack_38 = param_1;
        func_0x000100162d98("APPSTORE",&puStack_58);
        return;
      }
    }
    lVar4 = (long)_DAT_112751ebc;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c07ab40();
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      func_0x00010beba940(param_1);
      *(undefined8 *)(param_1 + _DAT_112751f30) = 5;
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1255c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 106862958; end: 10686295f;  */

void FUN_106862958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchPostToSpotlight_11256f978);
  return;
}



/* Entry: 106862960; end: 106862bc3; -[SCSpotlightViewController _showRefreshLoadingSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106862960(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112752068;
  if (*(long *)(param_1 + lVar12) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar1;
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800(*(undefined8 *)(param_1 + lVar12));
    _objc_release(puVar1);
    func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar12));
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar11);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300();
  _objc_release(lVar2);
  lVar12 = *(long *)(param_1 + lVar12);
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar12 + _DAT_112752068),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106862bc4; end: 106862bd3; -[SCSpotlightViewController _hideRefreshLoadingSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106862bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112752068),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106862bd4; end: 106862c0b; -[SCSpotlightViewController didTapNewTabToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106862bd4(long param_1)

{
  func_0x00010be191c0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + _DAT_112752030) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106862c0c; end: 106862cc7; -[SCSpotlightViewController didTapDebugListButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106862c0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112751ed8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar1);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106862cc8;
  puStack_40 = &UNK_110844b80;
  uStack_30 = 0;
  lStack_38 = param_2;
  uStack_28 = param_1;
  _objc_retain(0);
  func_0x00010c10eda0(param_2,param_3,0,1,&puStack_58);
  _objc_release(uStack_30);
  _objc_release(0);
  return;
}



/* Entry: 106862cc8; end: 106862ccf;  */

void FUN_106862cc8(long param_1,undefined8 param_2)

{
  if (0.0 < *(double *)(param_1 + 0x30)) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e4b998);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106862cd0; end: 106862cd3; -[SCSpotlightViewController _maybeInstallRankerDebugView] */

void FUN_106862cd0(void)

{
  return;
}



/* Entry: 106862cd4; end: 106862cd7; -[SCSpotlightViewController _maybeUpdateDynamicRankerDebugView] */

void FUN_106862cd4(void)

{
  return;
}



/* Entry: 106862cd8; end: 106862e23; -[SCSpotlightViewController _topicViewerUIContainerWithPresentingViewController:] */

void FUN_106862cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_3);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106862e24;
  puStack_60 = &UNK_11084d918;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_80,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0311a0(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106862e24; end: 106862f1b;  */

void FUN_106862e24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_loadWeakRetained(param_2 + 0x28);
  _objc_release();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c1c8b80(param_3);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_50,param_2 + 0x28);
  _objc_retain(param_3);
  uStack_48 = param_1;
  func_0x00010c10eda0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 106862f1c; end: 10686302b;  */

void FUN_106862f1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  FUN_10685ed2c(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10686302c; end: 10686309f; -[SCSpotlightViewController interactiveDismissalDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686302c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e5c);
  func_0x000108f4e0a0(uVar1,*(undefined8 *)(param_1 + _DAT_112751e84));
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010bf2e880();
  }
  else {
    func_0x00010c0f5e20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068630a0; end: 1068630a3; -[SCSpotlightViewController interactiveDismissalWillBegin:] */

void FUN_1068630a0(void)

{
  return;
}



/* Entry: 1068630a4; end: 1068630cb; -[SCSpotlightViewController interactionControllerPercentageDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068630a4(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)(param_2 + _DAT_112751e58);
  dVar4 = ABS(param_1 - dVar3);
  bVar1 = false;
  bVar2 = false;
  if (0.0 <= dVar3) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar4)) {
      bVar1 = dVar4 < 0.5;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    *(double *)(param_2 + _DAT_112751e58) = param_1;
  }
  return;
}



/* Entry: 1068630cc; end: 106863207; -[SCSpotlightViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1068630cc(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar5 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar4);
  uVar2 = param_5;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  if (uVar2 != 0) {
    func_0x00010c297a00(param_5);
    dVar6 = ABS(param_1);
    dVar7 = ABS(param_2);
    uVar5 = (ulong)(dVar7 < dVar6);
    if (uVar2 == *(ulong *)(param_3 + (long)_DAT_112751fc4)) {
      uVar3 = 0;
      if (dVar6 <= dVar7) {
        uVar3 = (uint)*(byte *)(param_3 + (long)_DAT_112751fa4);
      }
      uVar1 = 0;
      if (0.0 < param_2) {
        uVar1 = uVar3;
      }
      uVar5 = (ulong)uVar1;
      goto LAB_1068631dc;
    }
    if (((*(byte *)(param_3 + (long)_DAT_112751fa4) == 0) ||
        (uVar3 = *(byte *)(param_3 + (long)_DAT_112751e74) ^ 1,
        uVar5 = (ulong)(uVar3 & dVar7 < dVar6), (uVar3 & 1) != 0)) || (dVar6 <= dVar7))
    goto LAB_1068631dc;
    if (*(char *)(param_3 + (long)_DAT_112751e78) != '\x01') {
      uVar5 = 1;
      goto LAB_1068631dc;
    }
    if (0.0 < param_1) {
      func_0x00010bdf6ee0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c06c780();
      _objc_release(param_3);
      goto LAB_1068631dc;
    }
  }
  uVar5 = 0;
LAB_1068631dc:
  _objc_release(uVar2);
  _objc_release(param_5);
  return uVar5;
}



/* Entry: 106863208; end: 10686320f; -[SCSpotlightViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_106863208(void)

{
  return 0;
}



/* Entry: 106863210; end: 10686325b; -[SCSpotlightViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined4 FUN_106863210(void)

{
  long lVar1;
  long in_x3;
  undefined4 uVar2;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = in_x3;
  func_0x00010010fab4();
  _objc_release(in_x3);
  uVar2 = 0;
  if (in_x3 != 0) {
    uVar2 = (undefined4)lVar1;
  }
  return uVar2;
}



/* Entry: 10686325c; end: 1068632ab; -[SCSpotlightViewController _getBackgroundPopTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686325c(long param_1,undefined8 param_2)

{
  func_0x00010c0b5020(*(undefined8 *)(param_1 + _DAT_112751f18),param_2,
                      &PTR____CFConstantStringClassReference_110e61ed8,0xffffffffffffffff,0);
  _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c027bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068632ac; end: 1068632f7; -[SCSpotlightViewController didTapPostToSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068632ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751f10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208960();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be47f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchPostToSpotlight_11256f978);
  return;
}



/* Entry: 1068632f8; end: 1068633fb; -[SCSpotlightViewController _launchPostToSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068632f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_112751ef0;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c2a4ae0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPostToSpotlight_11257cf48);
  return;
}



/* Entry: 1068633fc; end: 10686342f;  */

void FUN_1068633fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7d6a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106863430; end: 1068635bf; -[SCSpotlightViewController _presentPostToSpotlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106863430(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  
  lVar6 = (long)_DAT_112752050;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar2 = lVar6;
    func_0x00010c27ed40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010bdf6ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bf60f80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar6);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112751f18);
    func_0x000108f4949c();
    if (iVar1 == 0) {
      piVar7 = (int *)&DAT_112751ef0;
      uVar5 = *(undefined8 *)(param_1 + _DAT_112751ef4);
      func_0x00010bf24260(uVar5,param_2,lVar2,param_1,lVar4,0x5c);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112751efc);
      func_0x00010bf24240(uVar5,param_2,lVar2,param_1,*(undefined8 *)(param_1 + _DAT_112751e60),0x5c
                          ,0,lVar4,0x72,1);
      _objc_retainAutoreleasedReturnValue();
      piVar7 = (int *)&DAT_112751ef8;
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + *piVar7),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1068635c0; end: 106863683; -[SCSpotlightViewController _schedulePostToSpotlightButtonTooltipIfRequired] */

void FUN_1068635c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  func_0x00010beb4f40();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x106863658;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100c749e0(0x40000000,"APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106863684; end: 1068637bb; -[SCSpotlightViewController _shouldPresentPostToSpotlightTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106863684(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  lVar7 = (long)_DAT_112751f10;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24b400();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c24bb00();
    uVar1 = *(ulong *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c24b3e0();
    _objc_release(uVar1);
    _objc_release(lVar3);
    lVar6 = (long)_DAT_112751f18;
    lVar3 = *(long *)(param_1 + lVar6);
    func_0x000108f4a594();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((long)(lVar4 + (uVar2 & 0xffffffff)) < lVar3) {
      lVar4 = *(long *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c24bae0();
      dVar8 = (double)lVar7;
      func_0x00010bf655e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      func_0x00010c26f3a0(puVar5);
      lVar7 = *(long *)(param_1 + lVar6);
      func_0x000108f4a5bc();
      _objc_release(puVar5);
      return (double)lVar7 < ABS(dVar8);
    }
  }
  return false;
}



/* Entry: 1068637bc; end: 10686398b; -[SCSpotlightViewController _presentPostToSpotlightTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068637bc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112752040);
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6550;
  _objc_opt_class(PTR_PTR_1126b6550);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010bf257c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x0001006372a4();
      uVar6 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (uVar6 != 0) {
        FUN_106867838();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10e900(uVar6);
        _objc_release(uVar2);
        lVar9 = (long)_DAT_112751f10;
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24bb00();
        func_0x00010c2089a0(uVar7);
        _objc_release(uVar8);
        _objc_release(uVar7);
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c208980(uVar7);
        _objc_release(puVar3);
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10686398c; end: 1068639d3;  */

undefined8 FUN_10686398c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beecec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1068639d4; end: 1068639ef; -[SCSpotlightViewController _postToSpotlightButtonIcon] */

void FUN_1068639d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,
             PTR_s_imageFromIconType_size_sigColor__1125d7888,0x236,0xd5);
  return;
}



/* Entry: 1068639f0; end: 106863a83; -[SCSpotlightViewController creatorsSpotlightSubmissionDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068639f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4e0a0(*(undefined8 *)(param_1 + _DAT_112751e5c),
                      *(undefined8 *)(param_1 + _DAT_112751e84));
  func_0x00010c13d560(lVar1);
  _objc_release(lVar1);
  lVar2 = (long)_DAT_112751ef0;
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



/* Entry: 106863a84; end: 106863abb; -[SCSpotlightViewController creatorsSpotlightSubmissionV2DidBegin] */

void FUN_106863a84(undefined8 param_1)

{
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106863abc; end: 106863b4f; -[SCSpotlightViewController creatorsSpotlightSubmissionV2DidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106863abc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdf6ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4e0a0(*(undefined8 *)(param_1 + _DAT_112751e5c),
                      *(undefined8 *)(param_1 + _DAT_112751e84));
  func_0x00010c13d560(lVar1);
  _objc_release(lVar1);
  lVar2 = (long)_DAT_112751ef8;
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



/* Entry: 106863b50; end: 106863c2b; -[SCSpotlightViewController spotlightInteractionHistoryDidFinishUpdatingViewState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106863b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010be2adc0(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751e7c);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c28b5c0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106863c2c; end: 106863d03;  */

void FUN_106863c2c(long param_1,int param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106863ca8;
    puStack_30 = &UNK_1108434b0;
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106863d04; end: 106863d53; -[SCSpotlightViewController _debugSpotlightPostNotification:] */

void FUN_106863d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdf6ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66440();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106863d54; end: 106863d6b; -[SCSpotlightViewController shouldBeSilentlyPresentedAndPauseOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106863d54(long param_1)

{
  return *(long *)(param_1 + _DAT_112751e84) == 0x61;
}


