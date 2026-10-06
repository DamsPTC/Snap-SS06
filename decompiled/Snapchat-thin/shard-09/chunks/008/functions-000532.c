/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071cae10; end: 1071cafef;  */

void FUN_1071cae10(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x30) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8260(uVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bdcc820(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf51e00(uVar4);
    func_0x00010be14700(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1071caff0; end: 1071cb1ef; -[SCDiscoverFeedStoryLoggingOperaPlugin _fetchStoriesAndHandleOperaEvent:page:params:extraData:storyDedupeToFetch:currentPlayingStoryFp:currentPlayingStoryIndex:triggeringStoryFp:triggeringStoryIndex:playableViewModel:isInterstitial:triggeringSection:] */

void FUN_1071caff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uStack_98 = param_10;
  uStack_a0 = param_8;
  _objc_retain(param_12);
  _objc_copyWeak(auStack_a8,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_78 = param_13;
  uStack_90 = param_9;
  uStack_88 = param_11;
  uStack_80 = param_15;
  func_0x00010bf00aa0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_12);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071cb1f0; end: 1071cb4f7;  */

void FUN_1071cb1f0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar6 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  puVar4 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar1);
  puVar1 = PTR_PTR_1126bdd30;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    puVar5 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar1);
    puVar4 = PTR_PTR_1126c2118;
    puVar1 = puVar6;
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      puVar5 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar4);
      puVar4 = PTR_PTR_1126bdd28;
      if (((ulong)puVar5 & 1) != 0) {
        _objc_retain(puVar6);
        _objc_opt_class(puVar4);
        puVar5 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar6);
        puVar4 = puVar1;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1071cb3f4;
      }
    }
    else {
      _objc_retain(puVar6);
      _objc_opt_class(puVar4);
      puVar5 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar4);
      if (((ulong)puVar5 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar6);
      puVar4 = puVar1;
      func_0x0001085357a4();
      _objc_retainAutoreleasedReturnValue();
LAB_1071cb3f4:
      _objc_release(puVar1);
      if (puVar4 != (undefined *)0x0) goto LAB_1071cb404;
    }
    puVar4 = puVar2;
    func_0x00010c0ea200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c1561c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
    _objc_opt_class(puVar1);
    puVar4 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar1);
    puVar1 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar6);
    puVar4 = puVar1;
    func_0x00010bfa4340(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
LAB_1071cb404:
    puVar1 = PTR_PTR_1126b1118;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010c067ec0(puVar4);
    func_0x000108f53fe8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043160();
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar6);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d6c0();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071cb4f8; end: 1071cb727; -[SCDiscoverFeedStoryLoggingOperaPlugin _isInterstitialTilePageLifecycleEvent:] */

ulong FUN_1071cb4f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2560(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((uVar10 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f2580(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    if ((uVar10 & 1) == 0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010c0e9c40(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar3);
      if ((uVar10 & 1) == 0) {
        puVar4 = PTR_PTR_1126b2330;
        func_0x00010c0e9c60(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar4);
        if ((uVar10 & 1) == 0) {
          puVar5 = PTR_PTR_1126b2330;
          func_0x00010bf3df00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar5);
          if ((uVar10 & 1) == 0) {
            puVar6 = PTR_PTR_1126b2330;
            func_0x00010c29e700(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar6);
            if ((uVar10 & 1) == 0) {
              puVar7 = PTR_PTR_1126b2338;
              func_0x00010c0c6900(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar10 = param_3;
              func_0x00010c0720c0(param_3,param_2,puVar7);
              if ((uVar10 & 1) == 0) {
                puVar8 = PTR_PTR_1126b2338;
                func_0x00010bfe8ca0(PTR_PTR_1126b2338);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = param_3;
                func_0x00010c0720c0(param_3,param_2,puVar8);
                if ((uVar10 & 1) == 0) {
                  puVar9 = PTR_PTR_1126b2338;
                  func_0x00010c12a660();
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = param_3;
                  func_0x00010c0720c0(param_3,param_2,puVar9);
                  _objc_release(puVar9);
                }
                else {
                  uVar10 = 1;
                }
                _objc_release(puVar8);
              }
              else {
                uVar10 = 1;
              }
              _objc_release(puVar7);
            }
            else {
              uVar10 = 1;
            }
            _objc_release(puVar6);
          }
          else {
            uVar10 = 1;
          }
          _objc_release(puVar5);
        }
        else {
          uVar10 = 1;
        }
        _objc_release(puVar4);
      }
      else {
        uVar10 = 1;
      }
      _objc_release(puVar3);
    }
    else {
      uVar10 = 1;
    }
    _objc_release(puVar2);
  }
  else {
    uVar10 = 1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 1071cb728; end: 1071cb943; -[SCDiscoverFeedStoryLoggingOperaPlugin _handleSynchronouslyOperaEventWithName:isInterstitial:] */

undefined8 FUN_1071cb728(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf17f80(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf18820(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf2e260(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010bfaf7a0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 == 0) {
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebd178);
          if ((int)uVar2 == 0) {
            puVar1 = PTR_PTR_1126b2330;
            func_0x00010bf96a00(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar1);
            _objc_release(puVar1);
            if ((int)uVar2 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
              *(undefined1 *)(param_1 + 0x31) = 1;
              *(undefined8 *)(param_1 + 0x38) = 0xb;
            }
            goto LAB_1071cb8d8;
          }
          *(undefined2 *)(param_1 + 0x88) = 0x100;
        }
        else {
          func_0x00010c1264a0(*(undefined8 *)(param_1 + 0x128),param_2,
                              *(undefined1 *)(param_1 + 0x140),*(undefined1 *)(param_1 + 0x141));
          func_0x00010bdcbc60(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x98) = 0;
      }
    }
    else {
      func_0x00010c127660(*(undefined8 *)(param_1 + 0x128));
    }
    uVar2 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x30) = param_4;
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x98) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c0f1b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06fc60();
    *(char *)(param_1 + 0x140) = (char)uVar4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c0f1b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd6040();
    *(char *)(param_1 + 0x141) = (char)uVar4;
    _objc_release(uVar3);
  }
LAB_1071cb8d8:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1071cb944; end: 1071cbcbb; -[SCDiscoverFeedStoryLoggingOperaPlugin _announceImpressionForInterstitialStory:tileIndex:feedType:impTimeSecs:isLong:] */

void FUN_1071cb944(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,int param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar2 = 0x78;
  if (param_7 == 0) {
    lVar2 = 0x80;
  }
  uVar5 = *(undefined8 *)((long)&PTR_PTR_110ca7ff8 + lVar2);
  _objc_retain(uVar5);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cb76d4(puVar1,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  lVar2 = param_4;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c1d0640(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  if (param_6 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010c1d0640(puVar1);
  if (param_7 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar6);
  _objc_release(uVar5);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071cbcbc; end: 1071cc14b; -[SCDiscoverFeedStoryLoggingOperaPlugin _announceTileViewForInterstitialStory:tileIndex:feedType:tileId:tilePlayTimeMs:mutedPlaybackMs:unmutedPlaybackMs:] */

void FUN_1071cbcbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cb76d4(puVar1,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  lVar2 = param_3;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (param_6 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  if (param_7 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  else {
    func_0x00010c1d0640(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  PTR__OBJC_CLASS___NSNull_1126aef28 = puVar3;
  if (param_8 == 0) {
    func_0x00010c0ddbe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  else {
    func_0x00010c1d0640(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  PTR__OBJC_CLASS___NSNull_1126aef28 = puVar3;
  if (param_9 == 0) {
    func_0x00010c0ddbe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010c1d0640(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  if (param_5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010c1d0640(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071cc14c; end: 1071cc327; -[SCDiscoverFeedStoryLoggingOperaPlugin _isSwipeUpOpenOrganicAttachmentEvent:page:] */

undefined4 FUN_1071cc14c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126b2330;
  _objc_retain(param_3);
  func_0x00010c0e9c40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar3);
  _objc_release(param_3);
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = param_4;
    func_0x0001071cc200(param_4);
    uVar2 = (undefined4)uVar4;
  }
  _objc_release(puVar3);
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x00010c27dd80();
  uVar1 = 0;
  if (lVar5 == 9) {
    uVar1 = uVar2;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 1071cc328; end: 1071cc57b; -[SCDiscoverFeedStoryLoggingOperaPlugin _announceViewingSessionStartWithInfoExtractor:] */

void FUN_1071cc328(double param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,int param_8,
                  undefined **param_9)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  long unaff_x25;
  undefined *unaff_x26;
  undefined **ppuVar22;
  int iStack_164;
  undefined **ppuStack_120;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2;
  if (((ulong)param_2[0x1b] & 1) == 0) {
    *(undefined1 *)(param_2 + 0x1b) = 1;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(param_4);
    _objc_opt_new();
    func_0x00010c1d0640();
    func_0x00010c1d0640(ppuVar4);
    puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    func_0x00010bef8260(param_4);
    _objc_release(param_4);
    puVar20 = puVar18;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d50c0;
    _objc_opt_class(PTR_PTR_1126d50c0);
    puVar17 = puVar20;
    _objc_opt_isKindOfClass(puVar20,puVar5);
    puVar5 = puVar20;
    if (((ulong)puVar17 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar20);
    if (puVar5 == (undefined *)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar4);
      _objc_release(puVar20);
    }
    else {
      func_0x00010c1d0640(ppuVar4);
    }
    if (param_2[0x1d] != (undefined *)0x0) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110dcad78;
      puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_2[0x1e];
      param_2[0x1e] = puVar20;
      _objc_release(puVar17);
      puVar20 = param_2[4];
      ppuVar6 = param_2;
      _objc_opt_class();
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(puVar20);
      _objc_release(ppuVar6);
    }
    puVar20 = param_2[4];
    param_4 = &PTR____CFConstantStringClassReference_110f416f8;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    param_5 = param_2;
    param_6 = ppuVar4;
    func_0x00010bf7dbc0(puVar20);
    _objc_release(param_2);
    _objc_release(puVar5);
    _objc_release(puVar18);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(puStack_70);
  _objc_retain(ppuStack_68);
  _objc_retain(unaff_x26);
  ppuVar6 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_9);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = ppuVar4[0x1f] + -0x49;
  if (((puVar18 < (undefined *)0x1a) && ((1L << ((ulong)puVar18 & 0x3f) & 0x2020001U) != 0)) ||
     ((puVar18 = ppuVar4[0x1f] + -0x57, uVar3 = (ulong)puVar18 >> 1,
      (uVar3 | (long)puVar18 << 0x3f) < 8 && ((0xb1U >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)))) {
LAB_1071cc680:
    iStack_164 = 1;
  }
  else {
    puVar18 = ppuVar4[0x1c];
    func_0x00010bf1f440();
    if (((ulong)puVar18 & 1) != 0) goto LAB_1071cc680;
    iStack_164 = (int)ppuVar4[0x1c];
    func_0x00010bf1f440();
  }
  puVar18 = ppuVar4[0xb];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar18 == (undefined *)0x0) {
    ppuVar21 = (undefined **)0x0;
  }
  else {
    ppuVar7 = (undefined **)ppuVar4[0xb];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar21 = ppuVar7;
    _objc_opt_isKindOfClass(ppuVar7,puVar18);
    ppuVar22 = ppuVar7;
    if (((ulong)ppuVar21 & 1) == 0) {
      ppuVar22 = (undefined **)0x0;
    }
    _objc_retain(ppuVar22);
    _objc_release(ppuVar7);
    ppuVar21 = ppuVar22;
    func_0x00010c08fa60();
    if (ppuVar21 == (undefined **)0x0) {
      ppuVar21 = (undefined **)0x0;
    }
    else {
      _objc_retain(ppuVar22);
      func_0x00010c1d0640(param_7);
      ppuVar21 = ppuVar22;
    }
    _objc_release(ppuVar22);
  }
  ppuVar22 = ppuVar21;
  func_0x00010c08fa60();
  ppuVar7 = ppuVar21;
  if ((ppuStack_68 != (undefined **)0x0) && (ppuVar22 == (undefined **)0x0)) {
    ppuVar22 = ppuStack_68;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar22;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar21);
    _objc_release(ppuVar22);
    if (ppuVar7 == (undefined **)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar18);
      ppuVar7 = (undefined **)0x0;
    }
    else {
      func_0x00010c1d0640(param_7);
    }
  }
  puVar17 = ppuVar4[0xb];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar20 = puVar17;
  _objc_opt_isKindOfClass(puVar17,puVar18);
  puVar18 = puVar17;
  if (((ulong)puVar20 & 1) == 0) {
    puVar18 = (undefined *)0x0;
  }
  _objc_retain(puVar18);
  _objc_release(puVar17);
  puVar20 = puVar18;
  func_0x00010c08fa60();
  if (puVar20 != (undefined *)0x0) {
    func_0x00010c1d0640(param_7);
  }
  if (ppuVar4[0x1d] != (undefined *)0x0) {
    func_0x00010c1d0640(param_7);
  }
  puVar20 = puStack_70;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar20 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar17);
  }
  else {
    func_0x00010c1d0640(param_7);
  }
  _objc_release(puVar20);
  puVar20 = puStack_70;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar20 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar17);
  }
  else {
    func_0x00010c1d0640(param_7);
  }
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bebe600(ppuVar4);
  func_0x00010c0df780(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar20);
  func_0x00010c1d0640(param_7);
  func_0x00010bea4ba0(ppuVar4);
  func_0x00010bea42c0(ppuVar4);
  _objc_retain(param_5);
  ppuVar21 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar21;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar21);
  ppuVar21 = param_5;
  if (ppuVar22 != (undefined **)0x0) {
    ppuVar22 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar22;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar12;
    func_0x00010c067fc0();
    _objc_release(ppuVar12);
    _objc_release(ppuVar22);
    if ((ppuVar11 < (undefined **)0xd) && ((0x12f7U >> (ulong)((uint)ppuVar11 & 0x1f) & 1) != 0)) {
      _objc_release(param_5);
      ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
    }
  }
  _objc_release(ppuVar21);
  if (param_8 != 0) {
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar20);
  }
  if (param_9 == (undefined **)0x0) {
    ppuVar22 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    ppuVar12 = ppuVar22;
    _objc_opt_isKindOfClass(ppuVar22,puVar20);
    ppuVar21 = ppuVar22;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar22);
    if (ppuVar21 != (undefined **)0x0) {
      ppuVar12 = ppuVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR_PTR_1126b47a0;
      _objc_opt_class(PTR_PTR_1126b47a0);
      ppuVar11 = ppuVar12;
      _objc_opt_isKindOfClass(ppuVar12,puVar20);
      ppuVar22 = ppuVar12;
      if (((ulong)ppuVar11 & 1) == 0) {
        ppuVar22 = (undefined **)0x0;
      }
      _objc_retain(ppuVar22);
      _objc_release(ppuVar12);
      ppuVar11 = ppuVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar8 = ppuVar11;
      _objc_opt_isKindOfClass(ppuVar11,puVar20);
      ppuVar12 = ppuVar11;
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar12 = (undefined **)0x0;
      }
      _objc_retain(ppuVar12);
      _objc_release(ppuVar11);
      puVar20 = PTR_PTR_1126c9310;
      func_0x00010c06dca0();
      if ((int)puVar20 != 0) {
        ppuVar11 = ppuVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar11 == (undefined **)0x0) {
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
          ppuVar12 = ppuVar11;
        }
      }
      puVar20 = ppuVar4[0xb];
      func_0x00010c0e00e0(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(puVar20);
      puVar17 = ppuVar4[0xb];
      func_0x00010c0e00e0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar17;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126d50c8;
      func_0x00010c25a180(PTR_PTR_1126d50c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar17);
      _objc_release(puVar20);
      _objc_release(ppuVar12);
      _objc_release(ppuVar22);
    }
    ppuVar22 = ppuVar21;
    func_0x000108538708();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar20);
    if (ppuVar22 == (undefined **)0x0) {
      ppuVar12 = ppuVar4;
      func_0x00010beb6ac0();
      if (((ulong)ppuVar12 & 1) == 0) {
        ppuVar12 = (undefined **)ppuVar4[0x1f];
        func_0x000108534aec();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar12 == &PTR____CFConstantStringClassReference_110db8b78) {
          ppuVar12 = &PTR____CFConstantStringClassReference_110eb3638;
          _objc_retain(&PTR____CFConstantStringClassReference_110eb3638);
          _objc_release(&PTR____CFConstantStringClassReference_110db8b78);
        }
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar12);
      }
      ppuVar12 = ppuVar4 + 1;
      _objc_loadWeakRetained();
      ppuVar8 = ppuVar12;
      func_0x00010c101260();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar9;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar12);
      if (ppuVar11 == (undefined **)0x0) {
        puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar20);
      }
      else {
        func_0x00010c1d0640(param_7);
      }
      _objc_retain(unaff_x26);
      puVar17 = unaff_x26;
      func_0x00010010fab4(unaff_x26,PTR_DAT_1126a5990);
      puVar20 = unaff_x26;
      if ((int)puVar17 == 0) {
        puVar20 = (undefined *)0x0;
      }
      _objc_retain(puVar20);
      _objc_release(unaff_x26);
      if (puVar20 != (undefined *)0x0) {
        func_0x00010c1d0640(param_7);
        ppuVar12 = ppuVar11;
        func_0x00010c08fa60();
        if (ppuVar12 != (undefined **)0x0) {
          func_0x00010c1d0640(param_7);
        }
        func_0x00010c1d0640(param_7);
        puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0673c0(unaff_x26);
        func_0x00010c0df780(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar17);
      }
      _objc_release(puVar20);
    }
    else {
      ppuVar12 = ppuVar22;
      func_0x00010c156360(ppuVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(ppuVar12);
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c156900(ppuVar22);
      func_0x00010c0df780(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    if (unaff_x25 == 0x2a) {
      _objc_retain(unaff_x26);
      puVar20 = PTR_PTR_1126c2118;
      _objc_opt_class(PTR_PTR_1126c2118);
      puVar17 = unaff_x26;
      _objc_opt_isKindOfClass(unaff_x26,puVar20);
      puVar20 = unaff_x26;
      if (((ulong)puVar17 & 1) == 0) {
        puVar20 = (undefined *)0x0;
      }
      _objc_retain(puVar20);
      _objc_release(unaff_x26);
      puVar17 = puVar20;
      func_0x000108535b00(puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(puVar17);
      _objc_release(puVar20);
      goto LAB_1071cd25c;
    }
  }
  else {
    ppuVar21 = param_9;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar21 == (undefined **)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar20);
    }
    else {
      func_0x00010c1d0640(param_7);
    }
    _objc_release(ppuVar21);
    ppuVar21 = param_9;
    func_0x00010c13bd00(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(ppuVar21);
    ppuVar21 = param_9;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar22 == (undefined **)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar20);
    }
    else {
      func_0x00010c1d0640(param_7);
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    func_0x00010be3cb00(ppuVar4);
    if (unaff_x25 == 0x2a) {
      _objc_retain(puVar5);
      puVar17 = puVar5;
LAB_1071cd25c:
      func_0x00010be3cb60(ppuVar4);
      _objc_release(puVar17);
    }
  }
  puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar17 = PTR_PTR_1126c9a78;
  func_0x00010bef5400(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar6;
  func_0x00010c0e00e0(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c0df6e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar20);
  _objc_release(ppuVar21);
  _objc_release(puVar17);
  func_0x00010be15be0(ppuVar4);
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    puVar20 = PTR_PTR_1126b5cb8;
    func_0x00010beedca0(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar12 = ppuVar22;
    _objc_opt_isKindOfClass(ppuVar22,puVar20);
    ppuVar21 = ppuVar22;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar22);
    puVar20 = PTR_PTR_1126b5c68;
    func_0x00010c22a700(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar20);
    if (((ulong)ppuVar22 & 1) == 0) {
      puVar20 = PTR_PTR_1126b5c68;
      func_0x00010c28efc0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar20);
      if ((int)ppuVar22 != 0) goto LAB_1071cd45c;
    }
    else {
LAB_1071cd45c:
      func_0x00010c1d0640(param_7);
    }
    func_0x00010c1d0640(param_7);
    puVar20 = PTR_PTR_1126b5cb8;
    func_0x00010c068440(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar20);
    ppuVar22 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar22 = (undefined **)0x0;
    }
    _objc_retain(ppuVar22);
    _objc_release(ppuVar12);
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar12 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar12);
    puVar10 = ppuVar4[0xb];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar17 = puVar10;
    _objc_opt_isKindOfClass(puVar10,puVar20);
    puVar20 = puVar10;
    if (((ulong)puVar17 & 1) == 0) {
      puVar20 = (undefined *)0x0;
    }
    _objc_retain(puVar20);
    _objc_release(puVar10);
    puVar10 = ppuVar4[0xd];
    func_0x00010c269d40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_9;
    func_0x000107bfa524(param_9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_9;
    func_0x00010bf454e0(param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puStack_70;
    func_0x00010bfa4340(puStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(puVar10);
    _objc_release(puVar17);
    _objc_release(ppuVar11);
    _objc_release(ppuVar12);
    _objc_release(puVar10);
    _objc_release(puVar20);
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010c22a700(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010bf91f40(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010bf80940(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010bf8f5a0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010bf7fac0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2d30;
  func_0x00010c22a860(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2ce8;
  func_0x00010beeeae0(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    puVar20 = PTR_PTR_1126b5cb8;
    func_0x00010c068440(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar12 = ppuVar22;
    _objc_opt_isKindOfClass(ppuVar22,puVar20);
    ppuVar21 = ppuVar22;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar22);
    if (ppuVar21 != (undefined **)0x0) {
      func_0x00010c1d0640(param_7);
    }
    puVar20 = PTR_PTR_1126b5cb8;
    func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar20);
    ppuVar22 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar22 = (undefined **)0x0;
    }
    _objc_retain(ppuVar22);
    _objc_release(ppuVar12);
    if (ppuVar22 != (undefined **)0x0) {
      func_0x00010c1d0640(param_7);
    }
    puVar20 = ppuVar4[4];
    ppuVar12 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar12);
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126c9400;
  func_0x00010c272ac0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    puVar20 = PTR_PTR_1126c9408;
    func_0x00010c0fe400(PTR_PTR_1126c9408);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar12 = ppuVar22;
    _objc_opt_isKindOfClass(ppuVar22,puVar20);
    ppuVar21 = ppuVar22;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar22);
    ppuVar22 = ppuVar21;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar21);
    uVar15 = 0x45;
    if ((int)ppuVar22 != 0) {
      uVar15 = 0x46;
    }
    ppuVar21 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar21 == (undefined **)0x0) {
      lVar19 = 5;
    }
    else {
      ppuVar22 = param_6;
      func_0x00010c0e00e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar22;
      func_0x00010c067ec0();
      lVar19 = (long)(int)ppuVar12;
      _objc_release(ppuVar22);
    }
    _objc_release(ppuVar21);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cb4ebc(uVar15,param_9,3,lVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(uVar15);
    _objc_release(ppuVar21);
  }
  ppuVar21 = ppuVar4;
  func_0x00010be44780();
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  if ((int)ppuVar21 != 0) {
    puVar20 = ppuVar4[0x12];
    func_0x00010c0cfb40(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfa60();
    _objc_release(puVar20);
  }
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  if ((int)ppuVar21 != 0) {
    puVar20 = ppuVar4[0x12];
    func_0x00010c0cfb40(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfba0();
    _objc_release(puVar20);
  }
  puVar20 = PTR_PTR_1126b2638;
  func_0x00010bf0a200(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    puVar20 = PTR_PTR_1126b5cb8;
    func_0x00010c06b7e0(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar12 = ppuVar22;
    _objc_opt_isKindOfClass(ppuVar22,puVar20);
    ppuVar21 = ppuVar22;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar22);
    puVar20 = PTR_PTR_1126b5cb8;
    func_0x00010bfbaa20(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar20);
    ppuVar22 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar22 = (undefined **)0x0;
    }
    _objc_retain(ppuVar22);
    _objc_release(ppuVar12);
    if (ppuVar22 == (undefined **)0x0) {
      func_0x00010bf1f3c0(ppuVar21);
    }
    else {
      func_0x00010bf1f3c0();
      ppuVar11 = ppuVar21;
      func_0x00010bf1f3c0();
      if ((((ulong)ppuVar11 & 1) == 0) && (((ulong)ppuVar12 & 1) == 0)) {
        func_0x00010c1d0640(param_7);
        puVar20 = PTR_PTR_1126b5cb8;
        func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar12);
        _objc_release(puVar20);
        puVar20 = ppuVar4[4];
        ppuVar12 = ppuVar4;
        _objc_opt_class(ppuVar4);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar20);
        _objc_release(ppuVar12);
      }
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2638;
  func_0x00010c24eb60(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2638;
  func_0x00010bf948a0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)ppuVar21 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  puVar20 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = param_4;
  func_0x00010c0720c0();
  ppuVar12 = ppuVar4;
  ppuVar22 = param_4;
  ppuStack_120 = param_4;
  if ((int)ppuVar21 == 0) {
    puVar17 = PTR_PTR_1126ca2c0;
    func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar17);
    _objc_release(puVar20);
    if ((int)ppuVar21 != 0) goto LAB_1071ce25c;
    puVar20 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_4;
    func_0x00010c0720c0();
    if ((int)ppuVar21 == 0) {
LAB_1071ce798:
      _objc_release(puVar20);
LAB_1071ce7a0:
      puVar20 = PTR_PTR_1126c9460;
      func_0x00010c0f2580(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = param_4;
      func_0x00010c0720c0();
      if ((int)ppuVar21 == 0) {
        puVar17 = PTR_PTR_1126c9460;
        func_0x00010c0f2560(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar17);
        _objc_release(puVar20);
        if ((int)ppuVar21 != 0) goto LAB_1071ce80c;
        puVar20 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar20);
        if ((int)ppuVar21 != 0) {
          ppuVar21 = ppuVar4;
          func_0x00010bee73a0();
          if (((((int)ppuVar21 != 0) && ((*(byte *)((long)ppuVar4 + 0x9a) & 1) == 0)) &&
              ((*(byte *)((long)ppuVar4 + 0x8a) & 1) == 0)) &&
             (ppuVar21 = ppuVar4, func_0x00010bdd9ae0(), (int)ppuVar21 != 0)) {
            *(undefined1 *)((long)ppuVar4 + 0x8a) = 1;
            func_0x00010c1d0640(param_7);
            func_0x00010c1d0640(param_7);
            func_0x00010be15be0(ppuVar4);
            func_0x00010be53780(ppuVar4);
            func_0x00010be5d760(ppuVar4);
          }
          if ((*(char *)(ppuVar4 + 0x24) == '\x01') &&
             (puVar20 = puVar5, func_0x00010c067fc0(), puVar20 != (undefined *)0x0)) {
            puVar17 = ppuVar4[0x2b];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar17;
            func_0x00010c067fc0();
            _objc_release(puVar17);
            if ((long)puVar20 < 3) {
              func_0x00010c1d0640(ppuVar4[0x2b]);
              puVar17 = ppuVar4[0x25];
              ppuVar21 = param_9;
              func_0x00010c25a160(param_9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c084c40();
              ppuVar12 = param_9;
              func_0x00010c25a160(param_9);
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar12;
              func_0x00010c084ca0();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = ppuVar4[0x12];
              func_0x00010c0f1b80(puVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c06fc60();
              func_0x00010c127180(puVar17);
              _objc_release(puVar20);
              _objc_release(ppuVar11);
              _objc_release(ppuVar12);
              _objc_release(ppuVar21);
            }
          }
          goto LAB_1071ce9ac;
        }
        puVar20 = PTR_PTR_1126c9460;
        func_0x00010c29ae40(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar20);
        if ((int)ppuVar21 != 0) {
          puVar20 = PTR_PTR_1126c9cf8;
          func_0x00010bf9a340(PTR_PTR_1126c9cf8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar11 = ppuVar12;
          _objc_opt_isKindOfClass(ppuVar12,puVar20);
          ppuVar21 = ppuVar12;
          if (((ulong)ppuVar11 & 1) == 0) {
            ppuVar21 = (undefined **)0x0;
          }
          _objc_retain(ppuVar21);
          _objc_release(ppuVar12);
          puVar20 = PTR_PTR_1126c9d08;
          func_0x00010bf35860(PTR_PTR_1126c9d08);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar21;
          func_0x00010c0720c0();
          if ((((ulong)ppuVar12 & 1) == 0) &&
             (ppuVar12 = ppuVar21, func_0x00010c0720c0(), ((ulong)ppuVar12 & 1) == 0)) {
            ppuVar12 = ppuVar21;
            func_0x00010c0720c0();
            _objc_release(puVar20);
            if (((ulong)ppuVar12 & 1) == 0) goto LAB_1071ceff0;
          }
          else {
            _objc_release(puVar20);
          }
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (ppuVar4[2] != (undefined *)0x0) {
            func_0x00010c27dd80();
            func_0x000107af8f48();
            func_0x00010c0df780(puVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar20);
            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27dd80(ppuVar4[2]);
            func_0x000107af8f6c();
            func_0x00010c0df780(puVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar20);
            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27dd80(ppuVar4[2]);
            func_0x000107af8f90();
            func_0x00010c0df780(puVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar20);
            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27dd80(ppuVar4[2]);
            func_0x000107cd46f8();
            func_0x00010c0df780(puVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar20);
          }
          puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_7);
          func_0x00010c1d0640(param_7);
          ppuVar12 = ppuVar21;
          func_0x00010c0720c0();
          if ((int)ppuVar12 != 0) {
            puVar17 = PTR_PTR_1126b2348;
            func_0x00010c156fa0(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = param_6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar17);
            if (ppuVar12 != (undefined **)0x0) {
              puVar17 = PTR_PTR_1126b2348;
              func_0x00010c156fa0(PTR_PTR_1126b2348);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(param_7);
              _objc_release(ppuVar12);
              _objc_release(puVar17);
            }
          }
          ppuVar12 = ppuVar4;
          func_0x00010be0d8a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_7);
          ppuVar11 = ppuVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar11 != (undefined **)0x0) {
            ppuVar11 = ppuVar12;
            func_0x00010c0e00e0(ppuVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar12);
            _objc_release(ppuVar11);
          }
          puVar17 = ppuVar4[4];
          ppuVar11 = ppuVar4;
          _objc_opt_class(ppuVar4);
          func_0x00010bf04780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7dbc0(puVar17);
          _objc_release(ppuVar11);
          *(undefined1 *)((long)ppuVar4 + 0x9a) = 0;
          _objc_release(puVar20);
          ppuVar4 = &PTR_PTR_110ca8110;
          param_7 = ppuVar12;
          ppuStack_120 = ppuVar21;
LAB_1071ceff0:
          _objc_release(ppuVar21);
          goto LAB_1071ce9ac;
        }
        puVar20 = PTR_PTR_1126c9400;
        func_0x00010c272ac0(PTR_PTR_1126c9400);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar20);
        if ((int)ppuVar21 == 0) {
          puVar20 = PTR_PTR_1126c9400;
          func_0x00010c15b3c0(PTR_PTR_1126c9400);
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar20);
          if ((int)ppuVar21 == 0) {
            puVar20 = PTR_PTR_1126c9400;
            func_0x00010c2999a0(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            ppuVar21 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar20);
            if ((int)ppuVar21 != 0) {
              func_0x00010c1d0640(param_7);
              puVar20 = PTR_PTR_1126c9408;
              func_0x00010c1570e0(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar11 = ppuVar12;
              _objc_opt_isKindOfClass(ppuVar12,puVar20);
              ppuVar21 = ppuVar12;
              if (((ulong)ppuVar11 & 1) == 0) {
                ppuVar21 = (undefined **)0x0;
              }
              _objc_retain(ppuVar21);
              _objc_release(ppuVar12);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (ppuVar21 != (undefined **)0x0) {
                func_0x00010bf885a0(ppuVar12);
                param_1 = param_1 / 1000.0;
                func_0x00010c0df720(param_1,puVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(param_7);
                _objc_release(puVar20);
              }
              puVar20 = PTR_PTR_1126c9408;
              func_0x00010c157360(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar8 = ppuVar11;
              _objc_opt_isKindOfClass(ppuVar11,puVar20);
              ppuVar12 = ppuVar11;
              if (((ulong)ppuVar8 & 1) == 0) {
                ppuVar12 = (undefined **)0x0;
              }
              _objc_retain(ppuVar12);
              _objc_release(ppuVar11);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (ppuVar12 != (undefined **)0x0) {
                func_0x00010bf885a0(ppuVar11);
                func_0x00010c0df720(param_1 / 1000.0,puVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(param_7);
                _objc_release(puVar20);
              }
              puVar20 = ppuVar4[4];
              ppuVar11 = ppuVar4;
              _objc_opt_class(ppuVar4);
              func_0x00010bf04780();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf7dbc0(puVar20);
              _objc_release(ppuVar11);
              _objc_release(ppuVar12);
              goto LAB_1071ceff0;
            }
            puVar20 = PTR_PTR_1126b2338;
            func_0x00010c0c6900(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            ppuVar21 = param_4;
            func_0x00010c0720c0();
            if (((ulong)ppuVar21 & 1) == 0) {
              puVar17 = PTR_PTR_1126b2338;
              func_0x00010bfe8ca0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              ppuVar21 = param_4;
              func_0x00010c0720c0();
              if (((ulong)ppuVar21 & 1) != 0) {
LAB_1071cf5b0:
                _objc_release(puVar17);
                goto LAB_1071cf5b8;
              }
              puVar10 = PTR_PTR_1126c9a00;
              func_0x00010c2a3ea0(PTR_PTR_1126c9a00);
              _objc_retainAutoreleasedReturnValue();
              ppuVar21 = param_4;
              func_0x00010c0720c0();
              if ((int)ppuVar21 != 0) {
                _objc_release(puVar10);
                goto LAB_1071cf5b0;
              }
              ppuVar21 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar10);
              _objc_release(puVar17);
              _objc_release(puVar20);
              if (((ulong)ppuVar21 & 1) == 0) {
                puVar20 = PTR_PTR_1126b2330;
                func_0x00010bf96940(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = param_4;
                func_0x00010c0720c0();
                _objc_release(puVar20);
                if ((int)ppuVar21 == 0) {
                  puVar20 = PTR_PTR_1126b2338;
                  func_0x00010c23c600(PTR_PTR_1126b2338);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar21 = param_4;
                  func_0x00010c0720c0();
                  _objc_release(puVar20);
                  if ((int)ppuVar21 == 0) {
                    puVar20 = PTR_PTR_1126b2338;
                    func_0x00010c23c620(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = param_4;
                    func_0x00010c0720c0();
                    _objc_release(puVar20);
                    if ((int)ppuVar21 == 0) {
                      puVar20 = PTR_PTR_1126c9a10;
                      func_0x00010c06d180(PTR_PTR_1126c9a10);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar21 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar20);
                      if ((int)ppuVar21 == 0) {
                        ppuVar21 = param_4;
                        func_0x00010c0720c0();
                        if ((int)ppuVar21 == 0) {
                          puVar20 = PTR_PTR_1126c9830;
                          func_0x00010beedca0(PTR_PTR_1126c9830);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar21 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar20);
                          if ((int)ppuVar21 != 0) {
                            ppuVar11 = &PTR_PTR_1126b5000;
                            puVar20 = PTR_PTR_1126b5cb8;
                            func_0x00010beedca0(PTR_PTR_1126b5cb8);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar22 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar20);
                            puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            ppuVar12 = ppuVar22;
                            _objc_opt_isKindOfClass(ppuVar22,puVar20);
                            ppuVar21 = ppuVar22;
                            if (((ulong)ppuVar12 & 1) == 0) {
                              ppuVar21 = (undefined **)0x0;
                            }
                            _objc_retain(ppuVar21);
                            _objc_release(ppuVar22);
                            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar20);
                            ppuVar22 = &PTR_PTR_1126b5000;
                            puVar20 = PTR_PTR_1126b5c68;
                            func_0x00010c131980(PTR_PTR_1126b5c68);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar12 = ppuVar21;
                            func_0x00010c0720c0();
                            _objc_release(puVar20);
                            if ((int)ppuVar12 == 0) goto LAB_1071d02f0;
                            func_0x00010c1d0640(param_7);
                            puVar20 = PTR_PTR_1126b5cb8;
                            func_0x00010c15ffa0(PTR_PTR_1126b5cb8);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar12 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar20);
                            puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            ppuVar11 = ppuVar12;
                            _objc_opt_isKindOfClass(ppuVar12,puVar20);
                            ppuVar22 = ppuVar12;
                            if (((ulong)ppuVar11 & 1) == 0) {
                              ppuVar22 = (undefined **)0x0;
                            }
                            _objc_retain(ppuVar22);
                            _objc_release(ppuVar12);
                            ppuVar12 = ppuVar22;
                            func_0x00010c08fa60();
                            if (ppuVar12 == (undefined **)0x0) goto LAB_1071d03e8;
                            goto LAB_1071d03e4;
                          }
                          if (iStack_164 != 0) {
                            puVar20 = PTR_PTR_1126b2330;
                            func_0x00010c29ef00(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar21 = param_4;
                            func_0x00010c0720c0();
                            if (((ulong)ppuVar21 & 1) == 0) {
                              _objc_release(puVar20);
                            }
                            else {
                              puVar17 = PTR_PTR_1126c9a20;
                              func_0x00010bf43ba0(PTR_PTR_1126c9a20);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar21 = param_6;
                              func_0x00010c0e00e0();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar12 = ppuVar21;
                              func_0x00010bf1f3c0();
                              _objc_release(ppuVar21);
                              _objc_release(puVar17);
                              _objc_release(puVar20);
                              if (((ulong)ppuVar12 & 1) == 0) {
                                ppuVar21 = ppuVar4;
                                func_0x00010bee73a0();
                                if (((int)ppuVar21 == 0) ||
                                   (*(char *)((long)ppuVar4 + 0x9a) == '\x01')) {
                                  puVar20 = ppuVar4[2];
                                  func_0x00010c27dd80();
                                  if (puVar20 == (undefined *)0x2) goto LAB_1071ce9ac;
                                }
                                if ((*(byte *)((long)ppuVar4 + 0x8a) & 1) == 0) {
                                  *(undefined1 *)((long)ppuVar4 + 0x8a) = 1;
                                  ppuVar21 = ppuVar4;
                                  func_0x00010bdd9ae0();
                                  if ((int)ppuVar21 != 0) {
                                    func_0x00010c1d0640(param_7);
                                    func_0x00010c1d0640(param_7);
                                    func_0x00010be15be0(ppuVar4);
                                    func_0x00010be53780(ppuVar4);
                                    func_0x00010be5d760(ppuVar4);
                                  }
                                }
                                goto LAB_1071ce9ac;
                              }
                            }
                          }
                          if (*(char *)((long)ppuVar4 + 0x8a) == '\x01') {
                            puVar20 = PTR_PTR_1126b2330;
                            func_0x00010c29eee0(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar21 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar20);
                            if ((int)ppuVar21 != 0) {
                              cVar1 = *(char *)((long)ppuVar4 + 0x9a);
                              *(undefined1 *)((long)ppuVar4 + 0x9a) = 0;
                              if ((cVar1 != '\x01') ||
                                 (ppuVar21 = ppuVar4, func_0x00010bee73a0(),
                                 ((ulong)ppuVar21 & 1) == 0)) {
                                ppuVar21 = ppuVar4;
                                func_0x00010be0d8a0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(param_7);
                                puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
                                func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c1d0640(ppuVar21);
                                func_0x00010c1d0640(ppuVar21);
                                func_0x00010c1d0640(ppuVar21);
                                puVar17 = ppuVar4[4];
                                ppuVar12 = ppuVar4;
                                _objc_opt_class(ppuVar4);
                                func_0x00010bf04780();
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010bf7dbc0(puVar17);
                                _objc_release(ppuVar12);
                                func_0x00010be5d780(ppuVar4);
                                *(undefined1 *)((long)ppuVar4 + 0x8a) = 0;
                                _objc_release(puVar20);
                                param_7 = ppuVar21;
                              }
                              goto LAB_1071ce9ac;
                            }
                          }
                          ppuVar21 = param_4;
                          func_0x00010c0720c0();
                          if (((((ulong)ppuVar21 & 1) != 0) ||
                              (ppuVar21 = param_4, func_0x00010c0720c0(), ((ulong)ppuVar21 & 1) != 0
                              )) || (ppuVar21 = param_4, func_0x00010c0720c0(), (int)ppuVar21 != 0))
                          {
                            ppuVar21 = param_4;
                            func_0x00010c0720c0();
                            if (((ulong)ppuVar21 & 1) == 0) {
                              ppuVar21 = param_4;
                              func_0x00010c0720c0();
                              if (((ulong)ppuVar21 & 1) == 0) {
                                func_0x00010c0720c0();
                                if ((int)param_4 == 0) {
                                  uVar15 = 0;
                                }
                                else {
                                  ppuVar21 = param_6;
                                  func_0x00010c0e00e0();
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar12 = ppuVar21;
                                  func_0x00010bf1f3c0();
                                  if ((int)ppuVar12 != 0) goto LAB_1071cfdf0;
                                  ppuVar12 = param_6;
                                  func_0x00010c0e00e0();
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar11 = ppuVar12;
                                  func_0x00010bf1f3c0();
                                  _objc_release(ppuVar12);
                                  _objc_release(ppuVar21);
                                  if (((ulong)ppuVar11 & 1) != 0) goto LAB_1071ce9ac;
                                  uVar15 = 1;
                                }
                              }
                              else {
                                uVar15 = 5;
                              }
                            }
                            else {
                              uVar15 = 4;
                            }
                            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x000107af8f48(uVar15);
                            func_0x00010c0df780(puVar20);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar20);
                            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x000107af8f6c(uVar15);
                            func_0x00010c0df780(puVar20);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar20);
                            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x000107af8f90(uVar15);
                            func_0x00010c0df780(puVar20);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar20);
                            puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x00010c27dd80(ppuVar4[2]);
                            func_0x000107cd46f8();
                            func_0x00010c0df780(puVar20);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar20);
                            puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
                            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            func_0x00010c1d0640(param_7);
                            ppuVar21 = ppuVar4;
                            func_0x00010be0d8a0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(param_7);
                            ppuVar12 = ppuVar21;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release();
                            if (ppuVar12 != (undefined **)0x0) {
                              ppuVar12 = ppuVar21;
                              func_0x00010c0e00e0(ppuVar21);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c1d0640(ppuVar21);
                              _objc_release(ppuVar12);
                            }
                            puVar17 = ppuVar4[4];
                            ppuVar12 = ppuVar4;
                            _objc_opt_class(ppuVar4);
                            func_0x00010bf04780();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bf7dbc0(puVar17);
                            _objc_release(ppuVar12);
                            _objc_release(puVar20);
                            param_7 = ppuVar21;
                          }
                        }
                        else {
                          *(undefined1 *)(ppuVar4 + 0x11) = 1;
                          func_0x00010c1d0640(param_7);
                          func_0x00010c1d0640(param_7);
                          ppuVar21 = param_6;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          if (ppuVar21 != (undefined **)0x0) {
                            ppuVar12 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c067ec0();
                            _objc_release(ppuVar12);
                            _objc_release(ppuVar21);
                          }
                          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1d0640(param_7);
                          _objc_release(puVar20);
                          puVar20 = ppuVar4[4];
                          ppuVar21 = ppuVar4;
                          _objc_opt_class(ppuVar4);
                          func_0x00010bf04780();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf7dbc0(puVar20);
                          _objc_release(ppuVar21);
                          puVar10 = ppuVar4[0xb];
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                          puVar17 = puVar10;
                          _objc_opt_isKindOfClass(puVar10,puVar20);
                          puVar20 = puVar10;
                          if (((ulong)puVar17 & 1) == 0) {
                            puVar20 = (undefined *)0x0;
                          }
                          _objc_retain(puVar20);
                          _objc_release(puVar10);
                          puVar10 = ppuVar4[0xd];
                          func_0x00010c269d40(puVar10);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar21 = param_9;
                          func_0x000107bfa524(param_9);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar12 = param_9;
                          func_0x00010bf454e0(param_9);
                          _objc_retainAutoreleasedReturnValue();
                          puVar17 = puStack_70;
                          func_0x00010bfa4340(puStack_70);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c285ba0(puVar10);
                          _objc_release(puVar17);
                          _objc_release(ppuVar12);
                          _objc_release(ppuVar21);
                          _objc_release(puVar10);
                          _objc_release(puVar20);
                        }
                      }
                      else {
                        func_0x00010be15be0(ppuVar4);
                        puVar20 = ppuVar4[4];
                        ppuVar21 = ppuVar4;
                        _objc_opt_class(ppuVar4);
                        func_0x00010bf04780();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar12 = ppuVar21;
                        func_0x000107cb6254();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf7dbc0(puVar20);
                        _objc_release(ppuVar12);
                        _objc_release(ppuVar21);
                        _objc_retain(puStack_70);
                        puVar20 = ppuVar4[0x27];
                        ppuVar4[0x27] = puStack_70;
                        _objc_release(puVar20);
                        puVar20 = ppuVar4[0x25];
                        ppuVar4 = param_9;
                        func_0x00010c25a160(param_9);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c084c40();
                        ppuVar21 = param_9;
                        func_0x00010c25a160(param_9);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar12 = ppuVar21;
                        func_0x00010c084ca0();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c126860(puVar20);
                        _objc_release(ppuVar12);
                        _objc_release(ppuVar21);
                        _objc_release(ppuVar4);
                        ppuVar4 = param_9;
                      }
                    }
                    else {
                      *(undefined1 *)((long)ppuVar4 + 0x31) = 1;
                      ppuVar21 = ppuVar4;
                      func_0x00010be0d8a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(param_7);
                      puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(ppuVar21);
                      _objc_release(puVar20);
                      func_0x00010bdd2140(ppuVar4);
                      if (*(char *)((long)ppuVar4 + 0x89) == '\x01') {
                        func_0x00010c1d0640(ppuVar21);
                        func_0x00010c1d0640(ppuVar21);
                        func_0x00010c1d0640(ppuVar21);
                        *(undefined1 *)((long)ppuVar4 + 0x89) = 0;
                      }
                      puVar20 = ppuVar4[4];
                      _objc_opt_class(ppuVar4);
                      func_0x00010bf04780();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf7dbc0(puVar20);
                      _objc_release(ppuVar12);
                      func_0x00010be5d780(ppuVar4);
                      *(undefined1 *)((long)ppuVar4 + 0x8a) = 0;
                      param_7 = ppuVar21;
                    }
                  }
                  else {
                    bVar2 = *(byte *)(ppuVar4 + 0x11);
                    if (bVar2 == 1) {
                      *(undefined1 *)(ppuVar4 + 0x11) = 0;
                      puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar20);
                    }
                    puVar20 = ppuVar4[0x1f] + -0x49;
                    if (((puVar20 < (undefined *)0x1a) &&
                        ((1L << ((ulong)puVar20 & 0x3f) & 0x2020001U) != 0)) ||
                       ((puVar20 = ppuVar4[0x1f] + -0x57, uVar3 = (ulong)puVar20 >> 1,
                        (uVar3 | (long)puVar20 << 0x3f) < 8 && ((1L << (uVar3 & 0x3f) & 0xb1U) != 0)
                        ))) {
                      *(undefined1 *)((long)ppuVar4 + 0x8a) = 1;
                      func_0x00010c1d0640(param_7);
                    }
                    ppuVar21 = ppuVar4;
                    func_0x00010bdd9ae0();
                    if ((int)ppuVar21 != 0) {
                      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar20);
                      puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar20);
                      func_0x00010c1d0640(param_7);
                      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar20);
                      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar20);
                      func_0x00010be15be0(ppuVar4);
                      func_0x00010be15e00(ppuVar4);
                      puVar20 = ppuVar4[4];
                      ppuVar21 = ppuVar4;
                      _objc_opt_class(ppuVar4);
                      func_0x00010bf04780();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf7dbc0(puVar20);
                      _objc_release(ppuVar21);
                      func_0x00010be5d760(ppuVar4);
                      if ((bVar2 & 1) == 0) {
                        puVar20 = ppuVar4[4];
                        ppuVar21 = ppuVar4;
                        _objc_opt_class(ppuVar4);
                        func_0x00010bf04780();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf7dbc0(puVar20);
                        goto LAB_1071cfdf0;
                      }
                    }
                  }
                }
                else {
                  *(undefined1 *)((long)ppuVar4 + 0x9a) = 1;
                  if (((*(char *)((long)ppuVar4 + 0x8a) != '\x01') ||
                      (ppuVar21 = ppuVar4, func_0x00010bee73a0(), ((ulong)ppuVar21 & 1) == 0)) &&
                     (ppuVar21 = ppuVar4, func_0x00010bdd9ae0(), (int)ppuVar21 != 0)) {
                    func_0x00010c1d0640(param_7);
                    func_0x00010c1d0640(param_7);
                    puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
                    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(param_7);
                    _objc_release(puVar20);
                    func_0x00010c1d0640(param_7);
                    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(param_7);
                    _objc_release(puVar20);
                    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(param_7);
                    _objc_release(puVar20);
                    func_0x00010be15be0(ppuVar4);
                    func_0x00010be15e00(ppuVar4);
                    puVar20 = ppuVar4[4];
                    ppuVar21 = ppuVar4;
                    _objc_opt_class(ppuVar4);
                    func_0x00010bf04780();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf7dbc0(puVar20);
                    _objc_release(ppuVar21);
                    func_0x00010be5d760(ppuVar4);
                    func_0x00010bdcbc60(ppuVar4);
                  }
                }
                goto LAB_1071ce9ac;
              }
            }
            else {
LAB_1071cf5b8:
              _objc_release(puVar20);
            }
            ppuVar12 = param_7;
            func_0x00010c0d3c80(param_7);
            ppuVar21 = ppuVar4;
            func_0x00010be0d8a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar12);
            ppuVar12 = ppuVar21;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (ppuVar12 != (undefined **)0x0) {
              ppuVar12 = ppuVar21;
              func_0x00010c0e00e0(ppuVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(param_7);
              _objc_release(ppuVar12);
            }
            puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar20);
            puVar20 = ppuVar4[4];
            ppuVar12 = ppuVar4;
            _objc_opt_class(ppuVar4);
            func_0x00010bf04780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf7dbc0(puVar20);
            _objc_release(ppuVar12);
            ppuStack_120 = param_4;
            if ((*(char *)(ppuVar4 + 0x24) == '\x01') &&
               (puVar20 = puVar5, func_0x00010c067fc0(), ppuStack_120 = param_4,
               puVar20 != (undefined *)0x0)) {
              puVar17 = ppuVar4[0x2b];
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar17;
              func_0x00010c067fc0();
              _objc_release(puVar17);
              ppuStack_120 = param_4;
              if ((long)puVar20 < 2) {
                puVar20 = ppuVar4[0x25];
                ppuVar12 = param_9;
                func_0x00010c25a160(param_9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c084c40();
                ppuVar11 = param_9;
                func_0x00010c25a160(param_9);
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar11;
                func_0x00010c084ca0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c127140(puVar20);
                _objc_release(ppuVar8);
                _objc_release(ppuVar11);
                _objc_release(ppuVar12);
                puVar20 = ppuVar4[0x2b];
                func_0x00010bf529e0();
                if (puVar20 < (undefined *)0x2) {
                  puVar20 = ppuVar4[0x25];
                  ppuVar12 = param_9;
                  func_0x00010c25a160(param_9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c084c40();
                  ppuVar11 = param_9;
                  func_0x00010c25a160(param_9);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar8 = ppuVar11;
                  func_0x00010c084ca0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c126500(puVar20);
                  _objc_release(ppuVar8);
                  _objc_release(ppuVar11);
                  _objc_release(ppuVar12);
                }
                func_0x00010c1d0640(ppuVar4[0x2b]);
                ppuStack_120 = param_4;
              }
            }
            goto LAB_1071ceff0;
          }
          goto LAB_1071ce93c;
        }
        puVar20 = PTR_PTR_1126c9408;
        func_0x00010c0fe400(PTR_PTR_1126c9408);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar20);
        ppuVar21 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar12);
        func_0x00010bf1f3c0();
        _objc_release(ppuVar21);
        puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c1d0640(param_7);
        _objc_release(puVar20);
      }
      else {
        _objc_release(puVar20);
LAB_1071ce80c:
        puVar20 = PTR_PTR_1126c9460;
        func_0x00010c0f2560(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(param_4);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(ppuVar4[2]);
        func_0x000107af8f48();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(ppuVar4[2]);
        func_0x000107af8f6c();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(ppuVar4[2]);
        func_0x000107af8f90();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(ppuVar4[2]);
        func_0x000107cd46f8();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar20);
LAB_1071ce93c:
        func_0x00010c1d0640(param_7);
      }
      puVar20 = ppuVar4[4];
      ppuVar21 = ppuVar4;
      _objc_opt_class(ppuVar4);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(puVar20);
      _objc_release(ppuVar21);
      goto LAB_1071ce9ac;
    }
    ppuVar11 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar8 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar17);
    ppuVar21 = ppuVar11;
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar11);
    ppuVar11 = ppuVar21;
    func_0x00010bf1f3c0();
    if (((ulong)ppuVar11 & 1) == 0) {
      _objc_release(ppuVar21);
      goto LAB_1071ce798;
    }
    cVar1 = *(char *)(ppuVar4 + 0x2c);
    _objc_release(ppuVar21);
    _objc_release(puVar20);
    if (cVar1 != '\x01') goto LAB_1071ce7a0;
    func_0x00010be0d8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar20);
    puVar20 = PTR_PTR_1126c9310;
    func_0x00010c06dca0();
    if ((int)puVar20 != 0) {
      puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar20);
    }
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(char *)((long)ppuVar4 + 0x8a) == '\x01') {
      func_0x00010c1d0640(ppuVar12);
    }
    else {
      func_0x00010c27dd80(ppuVar4[2]);
      func_0x000107cd49e8();
      func_0x00010c0df780(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar20);
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c27dd80(ppuVar4[2]);
      func_0x000107cd4718();
      func_0x00010c0df780(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar20);
    }
    if ((*(char *)(ppuVar4 + 0x24) == '\x01') &&
       (puVar20 = puVar5, func_0x00010c067fc0(), puVar20 != (undefined *)0x0)) {
      puVar17 = ppuVar4[0x2b];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar17;
      func_0x00010c067fc0();
      _objc_release(puVar17);
      if ((long)puVar20 < 1) {
        func_0x00010c1d0640(ppuVar4[0x2b]);
        puVar20 = ppuVar4[0x25];
        ppuVar21 = param_9;
        func_0x00010c25a160(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084c40();
        ppuVar11 = param_9;
        func_0x00010c25a160(param_9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010c084ca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1271a0(puVar20);
        _objc_release(ppuVar8);
        _objc_release(ppuVar11);
        _objc_release(ppuVar21);
      }
    }
    func_0x0001071cc200(param_5);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar20);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
  }
  else {
    _objc_release(puVar20);
LAB_1071ce25c:
    if ((*(char *)((long)ppuVar4 + 0x8a) == '\x01') && (*(char *)((long)ppuVar4 + 0x9a) == '\x01'))
    {
      puVar17 = ppuVar4[0xf];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar17;
      func_0x000108f4e0a0();
      _objc_release(puVar17);
      if (((ulong)puVar20 & 1) != 0) goto LAB_1071ce9ac;
    }
    if (*(char *)(ppuVar4 + 0x2c) == '\x01') {
      ppuVar11 = ppuVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar8 = ppuVar11;
      _objc_opt_isKindOfClass(ppuVar11,puVar20);
      ppuVar21 = ppuVar11;
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar21 = (undefined **)0x0;
      }
      _objc_retain(ppuVar21);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar21;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar21);
      if (((ulong)ppuVar11 & 1) != 0) goto LAB_1071ce9ac;
    }
    func_0x00010be0d8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar20);
    puVar20 = PTR_PTR_1126c9310;
    func_0x00010c06dca0();
    if ((int)puVar20 != 0) {
      puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar20);
    }
    func_0x00010bdd2140(ppuVar4);
    puVar20 = PTR_PTR_1126ca2c0;
    func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (((ulong)param_4 & 1) == 0) {
      if (*(char *)((long)ppuVar4 + 0x8a) == '\x01') {
        func_0x00010c1d0640(ppuVar12);
      }
      else {
        func_0x00010c27dd80(ppuVar4[2]);
        func_0x000107cd49e8();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar12);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(ppuVar4[2]);
        func_0x000107cd4718();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar12);
        _objc_release(puVar20);
      }
      if ((*(char *)(ppuVar4 + 0x24) == '\x01') &&
         (puVar20 = puVar5, func_0x00010c067fc0(), puVar20 != (undefined *)0x0)) {
        puVar17 = ppuVar4[0x2b];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar17;
        func_0x00010c067fc0();
        _objc_release(puVar17);
        if ((long)puVar20 < 1) {
          func_0x00010c1d0640(ppuVar4[0x2b]);
          puVar20 = ppuVar4[0x25];
          ppuVar21 = param_9;
          func_0x00010c25a160(param_9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c084c40();
          ppuVar11 = param_9;
          func_0x00010c25a160(param_9);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar11;
          func_0x00010c084ca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1271a0(puVar20);
          _objc_release(ppuVar8);
          _objc_release(ppuVar11);
          _objc_release(ppuVar21);
        }
      }
    }
    func_0x0001071cc200(param_5);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar20);
    puVar20 = ppuVar4[4];
    ppuVar21 = ppuVar4;
    _objc_opt_class(ppuVar4);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar20);
    _objc_release(ppuVar21);
    func_0x00010be5d780(ppuVar4);
  }
  *(undefined1 *)((long)ppuVar4 + 0x8a) = 0;
  *(undefined1 *)((long)ppuVar4 + 0x9a) = 0;
  param_7 = ppuVar12;
LAB_1071ce9ac:
  do {
    _objc_release(puVar18);
    _objc_release(puVar5);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(unaff_x26);
    _objc_release(ppuStack_68);
    _objc_release(puStack_70);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(ppuVar22);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      return;
    }
    ___stack_chk_fail();
    ppuVar11 = param_5;
    ppuVar21 = ppuStack_68;
LAB_1071d02f0:
    puVar20 = ppuVar22[0x18d];
    func_0x00010c085ae0(puVar20);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar20);
    if ((int)ppuVar12 == 0) {
      puVar20 = ppuVar22[0x18d];
      func_0x00010bf0cb60(puVar20);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar20);
      if ((int)ppuVar12 != 0) goto LAB_1071d0634;
      puVar20 = ppuVar22[0x18d];
      func_0x00010bf1f640(puVar20);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar20);
LAB_1071d0ae8:
        puVar20 = ppuVar22[0x18d];
        func_0x00010c27f560(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar20);
        ppuVar11 = (undefined **)ppuVar4[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar20);
        ppuVar22 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar11);
        func_0x00010c1d0640(param_7);
        puVar20 = ppuVar4[4];
        ppuVar12 = ppuVar4;
        _objc_opt_class(ppuVar4);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar20);
        _objc_release(ppuVar12);
        ppuVar12 = (undefined **)ppuVar4[0xd];
        func_0x00010c269d40(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_9;
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = param_9;
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puStack_70;
        func_0x00010bfa4340(puStack_70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c285ba0(ppuVar12);
        _objc_release(puVar20);
        _objc_release(ppuVar8);
        _objc_release(ppuVar11);
        goto LAB_1071d0428;
      }
      puVar17 = ppuVar22[0x18d];
      func_0x00010c27f560(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      _objc_release(puVar20);
      if ((int)ppuVar12 != 0) goto LAB_1071d0ae8;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c11a640(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      ppuVar8 = param_9;
      ppuVar9 = param_9;
      puVar20 = puStack_70;
      if (((ulong)ppuVar12 & 1) != 0) {
LAB_1071d0cb8:
        _objc_release(puVar17);
LAB_1071d0cc0:
        func_0x00010c1d0640(param_7);
        puVar17 = ppuVar4[4];
        ppuVar22 = ppuVar4;
        _objc_opt_class(ppuVar4);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar17);
        _objc_release(ppuVar22);
        ppuVar11 = (undefined **)ppuVar4[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar17);
        ppuVar22 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar11);
        ppuVar12 = (undefined **)ppuVar4[0xd];
        func_0x00010c269d40(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(puStack_70);
        _objc_retainAutoreleasedReturnValue();
LAB_1071d0dc8:
        func_0x00010c285ba0(ppuVar12);
        _objc_release(puVar20);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        goto LAB_1071d0428;
      }
      puVar10 = ppuVar22[0x18d];
      func_0x00010c0ca400(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar10);
        goto LAB_1071d0cb8;
      }
      puVar13 = ppuVar22[0x18d];
      func_0x00010c0ee2e0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar17);
      if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d0cc0;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c2751c0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) != 0) {
LAB_1071d0eb8:
        _objc_release(puVar17);
LAB_1071d0ec0:
        func_0x00010c1d0640(param_7);
        puVar20 = ppuVar22[0x18d];
        func_0x00010c2751c0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar20);
        if (((ulong)ppuVar12 & 1) == 0) {
          puVar20 = ppuVar22[0x18d];
          func_0x00010c0d2940(puVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar20);
          if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d1058;
          puVar20 = ppuVar22[0x18d];
          func_0x00010c269b40(puVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar20);
          if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d1058;
          puVar20 = ppuVar22[0x18d];
          func_0x00010c0ed9c0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar20);
          if ((int)ppuVar22 != 0) goto LAB_1071d1058;
        }
        else {
LAB_1071d1058:
          func_0x00010c1d0640(param_7);
        }
        puVar20 = ppuVar11[0x197];
        func_0x00010beee760(puVar20);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar8 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar20);
        ppuVar22 = ppuVar12;
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar22;
        func_0x00010c08fa60();
        if (ppuVar12 != (undefined **)0x0) {
          func_0x00010c1d0640(param_7);
        }
        puVar20 = ppuVar11[0x197];
        func_0x00010bf4e920(puVar20);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar8 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar20);
        ppuVar12 = ppuVar11;
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar12 = (undefined **)0x0;
        }
        _objc_retain(ppuVar12);
        _objc_release(ppuVar11);
        if (ppuVar12 != (undefined **)0x0) {
          func_0x00010c1d0640(param_7);
        }
        puVar20 = ppuVar4[4];
        ppuVar11 = ppuVar4;
        _objc_opt_class(ppuVar4);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar20);
        _objc_release(ppuVar11);
        goto LAB_1071d0428;
      }
      puVar10 = ppuVar22[0x18d];
      func_0x00010c0d2940(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) != 0) {
LAB_1071d0eb0:
        _objc_release(puVar10);
        goto LAB_1071d0eb8;
      }
      puVar13 = ppuVar22[0x18d];
      func_0x00010c269b40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar13);
        goto LAB_1071d0eb0;
      }
      puVar14 = ppuVar22[0x18d];
      func_0x00010c0ed9c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar17);
      if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d0ec0;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c27b9a0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) {
LAB_1071d12d8:
        func_0x00010c1d0640(param_7);
LAB_1071d0634:
        func_0x00010c1d0640(param_7);
        puVar20 = ppuVar4[4];
        ppuVar22 = ppuVar4;
        _objc_opt_class(ppuVar4);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar20);
        goto LAB_1071d0430;
      }
      puVar17 = ppuVar22[0x18d];
      func_0x00010c27ba20(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c27b9e0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar17 = ppuVar22[0x18d];
      func_0x00010bf05d00(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c0fce80(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c25fd00(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar17);
LAB_1071d1358:
        func_0x00010c1d0640(param_7);
        func_0x00010c1d0640(param_7);
        puVar17 = ppuVar11[0x197];
        func_0x00010bf4eb20(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar17);
        ppuVar22 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar22;
        func_0x00010c067ec0();
        if ((int)ppuVar12 == 6) {
          ppuVar12 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar12 == (undefined **)0x0) {
LAB_1071d1458:
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          }
          else {
            puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar12;
            func_0x00010c071ae0();
            _objc_release(puVar17);
            if ((int)ppuVar11 != 0) goto LAB_1071d1458;
            ppuVar11 = ppuVar12;
            func_0x00010c0d3c80(ppuVar12);
          }
          uVar15 = 8;
          func_0x00010bc9107c(8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar11);
          _objc_release(uVar15);
          func_0x00010c1d0640(param_7);
          _objc_release(ppuVar11);
          _objc_release(ppuVar12);
        }
        puVar13 = ppuVar4[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar10 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar17);
        puVar17 = puVar13;
        if (((ulong)puVar10 & 1) == 0) {
          puVar17 = (undefined *)0x0;
        }
        _objc_retain(puVar17);
        _objc_release(puVar13);
        puVar10 = ppuVar4[0xd];
        func_0x00010c269d40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(puStack_70);
        _objc_retainAutoreleasedReturnValue();
LAB_1071d1714:
        func_0x00010c285ba0(puVar10);
        _objc_release(puVar20);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(puVar10);
        puVar20 = ppuVar4[4];
        ppuVar12 = ppuVar4;
        _objc_opt_class(ppuVar4);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar20);
        _objc_release(ppuVar12);
        _objc_release(puVar17);
        goto LAB_1071d0430;
      }
      puVar10 = ppuVar22[0x18d];
      func_0x00010c260020(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) goto LAB_1071d1358;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c2829e0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) != 0) {
        ppuVar12 = ppuVar4;
        func_0x00010beb2660();
        _objc_release(puVar17);
        if ((int)ppuVar12 == 0) goto LAB_1071d17ac;
LAB_1071d14f4:
        func_0x00010c1d0640(param_7);
        func_0x00010c1d0640(param_7);
        puVar17 = ppuVar11[0x197];
        func_0x00010bf4eb20(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar17);
        ppuVar22 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar22;
        func_0x00010c067ec0();
        if ((int)ppuVar12 == 6) {
          ppuVar12 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar12 == (undefined **)0x0) {
LAB_1071d15f4:
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          }
          else {
            puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar12;
            func_0x00010c071ae0();
            _objc_release(puVar17);
            if ((int)ppuVar11 != 0) goto LAB_1071d15f4;
            ppuVar11 = ppuVar12;
            func_0x00010c0d3c80(ppuVar12);
          }
          uVar15 = 8;
          func_0x00010bc9107c(8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar11);
          _objc_release(uVar15);
          func_0x00010c1d0640(param_7);
          _objc_release(ppuVar11);
          _objc_release(ppuVar12);
        }
        puVar13 = ppuVar4[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar10 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar17);
        puVar17 = puVar13;
        if (((ulong)puVar10 & 1) == 0) {
          puVar17 = (undefined *)0x0;
        }
        _objc_retain(puVar17);
        _objc_release(puVar13);
        puVar10 = ppuVar4[0xd];
        func_0x00010c269d40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(puStack_70);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1071d1714;
      }
      puVar10 = ppuVar22[0x18d];
      func_0x00010c282ac0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) == 0) {
        _objc_release(puVar10);
        _objc_release(puVar17);
      }
      else {
        ppuVar12 = ppuVar4;
        func_0x00010beb2660();
        _objc_release(puVar10);
        _objc_release(puVar17);
        if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d14f4;
      }
LAB_1071d17ac:
      puVar17 = ppuVar22[0x18d];
      func_0x00010bfa0ee0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar17);
LAB_1071d1814:
        puVar20 = ppuVar22[0x18d];
        func_0x00010c27fa80(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar20);
        func_0x00010c1d0640(param_7);
        ppuVar11 = (undefined **)ppuVar4[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar20);
        ppuVar22 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar11);
        puVar17 = ppuVar4[0xd];
        func_0x00010c269d40(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_9;
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_9;
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puStack_70;
        func_0x00010bfa4340(puStack_70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c285ba0(puVar17);
        _objc_release(puVar20);
        _objc_release(ppuVar11);
        _objc_release(ppuVar12);
        _objc_release(puVar17);
        goto LAB_1071d03e8;
      }
      puVar10 = ppuVar22[0x18d];
      func_0x00010c27fa80(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) goto LAB_1071d1814;
      puVar17 = ppuVar22[0x18d];
      func_0x00010c08fb40(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      if ((int)ppuVar12 != 0) {
        func_0x00010c1d0640(param_7);
        func_0x00010c1d0640(param_7);
        puVar20 = ppuVar11[0x197];
        func_0x00010bfae080(puVar20);
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar22);
        _objc_release(puVar20);
        puVar20 = ppuVar11[0x197];
        func_0x00010bf4e920(puVar20);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar20);
        ppuVar22 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar12);
        if (ppuVar22 != (undefined **)0x0) goto LAB_1071d03e4;
        goto LAB_1071d03e8;
      }
      puVar17 = ppuVar22[0x18d];
      func_0x00010c0e93e0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar17);
      if ((int)ppuVar12 == 0) {
        puVar17 = ppuVar22[0x18d];
        func_0x00010c1323e0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar17);
        if ((int)ppuVar12 != 0) {
          puVar20 = ppuVar11[0x197];
          func_0x00010c134200(puVar20);
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          ppuVar11 = ppuVar22;
          _objc_opt_isKindOfClass(ppuVar22,puVar20);
          ppuVar12 = ppuVar22;
          if (((ulong)ppuVar11 & 1) == 0) {
            ppuVar12 = (undefined **)0x0;
          }
          _objc_retain(ppuVar12);
          _objc_release(ppuVar22);
          if (ppuVar12 == (undefined **)0x0) goto LAB_1071cfdf0;
          puVar10 = ppuVar4[0xb];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar17 = puVar10;
          _objc_opt_isKindOfClass(puVar10,puVar20);
          puVar20 = puVar10;
          if (((ulong)puVar17 & 1) == 0) {
            puVar20 = (undefined *)0x0;
          }
          _objc_retain(puVar20);
          _objc_release(puVar10);
          ppuVar4[7] = (undefined *)0x18;
          puVar14 = ppuVar4[0xd];
          func_0x00010c269d40(puVar14);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = param_9;
          func_0x000107bfa524();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_9;
          func_0x00010bf454e0(param_9);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = PTR_PTR_1126c90c8;
          func_0x00010c132440();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puStack_70;
          func_0x00010bfa4340(puStack_70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c285ba0(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar10);
          _objc_release(puVar17);
          _objc_release(ppuVar12);
          _objc_release(ppuVar4);
          _objc_release(puVar14);
          _objc_release(puVar20);
          goto LAB_1071d0430;
        }
        puVar17 = ppuVar22[0x18d];
        func_0x00010bf8ac60(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar17);
        if ((int)ppuVar12 != 0) goto LAB_1071d0634;
        puVar17 = ppuVar22[0x18d];
        func_0x00010c1230a0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar21;
        func_0x00010c0720c0();
        if ((int)ppuVar12 != 0) {
          _objc_release(puVar17);
LAB_1071d1e98:
          puVar20 = ppuVar22[0x18d];
          func_0x00010c1230a0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(puVar20);
          func_0x00010c1d0640(param_7);
          puVar20 = ppuVar4[4];
          ppuVar22 = ppuVar4;
          _objc_opt_class(ppuVar4);
          func_0x00010bf04780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7dbc0(puVar20);
          _objc_release(ppuVar22);
          ppuVar11 = (undefined **)ppuVar4[0xb];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar12 = ppuVar11;
          _objc_opt_isKindOfClass(ppuVar11,puVar20);
          ppuVar22 = ppuVar11;
          if (((ulong)ppuVar12 & 1) == 0) {
            ppuVar22 = (undefined **)0x0;
          }
          _objc_retain(ppuVar22);
          _objc_release(ppuVar11);
          puVar17 = ppuVar4[0xd];
          func_0x00010c269d40(puVar17);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_9;
          func_0x000107bfa524(param_9);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = param_9;
          func_0x00010bf454e0(param_9);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puStack_70;
          func_0x00010bfa4340(puStack_70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c285ba0(puVar17);
          _objc_release(puVar20);
          _objc_release(ppuVar11);
          _objc_release(ppuVar12);
          _objc_release(puVar17);
          goto LAB_1071d0430;
        }
        puVar10 = ppuVar22[0x18d];
        func_0x00010c281f40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar10);
        _objc_release(puVar17);
        if ((int)ppuVar12 != 0) goto LAB_1071d1e98;
        puVar17 = ppuVar22[0x18d];
        func_0x00010c08bc40(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(puVar17);
        if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
        puVar17 = ppuVar22[0x18d];
        func_0x00010c11e8e0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar21;
        func_0x00010c0720c0();
        if ((int)ppuVar12 == 0) {
          puVar10 = ppuVar22[0x18d];
          func_0x00010c28ef60(puVar10);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          _objc_release(puVar17);
          if ((int)ppuVar12 != 0) goto LAB_1071d20d0;
          puVar17 = ppuVar22[0x18d];
          func_0x00010bf7f020(puVar17);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar17);
          if ((int)ppuVar12 == 0) {
            puVar20 = ppuVar22[0x18d];
            func_0x00010c2620e0(puVar20);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar21;
            func_0x00010c0720c0();
            _objc_release(puVar20);
            if ((int)ppuVar12 == 0) {
              puVar20 = ppuVar22[0x18d];
              func_0x00010c0fe8a0(puVar20);
              _objc_retainAutoreleasedReturnValue();
              ppuVar22 = ppuVar21;
              func_0x00010c0720c0();
              _objc_release(puVar20);
              if ((int)ppuVar22 == 0) goto LAB_1071cfdf0;
            }
            else if (param_9 != (undefined **)0x0) {
              ppuVar22 = param_9;
              func_0x000107cb6b2c();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar22;
              func_0x000107cb65e8();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar12;
              func_0x00010c08fa60();
              if (ppuVar11 != (undefined **)0x0) {
                func_0x00010c1d0640(param_7);
              }
              _objc_release(ppuVar12);
              _objc_release(ppuVar22);
            }
            goto LAB_1071d0634;
          }
        }
        else {
          _objc_release(puVar17);
LAB_1071d20d0:
          puVar17 = ppuVar22[0x18d];
          func_0x00010c28ef60(puVar17);
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar21;
          func_0x00010c0720c0();
          _objc_release(puVar17);
          if ((int)ppuVar22 != 0) {
            func_0x00010c1d0640(param_7);
          }
        }
        func_0x00010c1d0640(param_7);
        puVar17 = ppuVar4[4];
        ppuVar22 = ppuVar4;
        _objc_opt_class(ppuVar4);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar17);
        _objc_release(ppuVar22);
        ppuVar11 = (undefined **)ppuVar4[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar17);
        ppuVar22 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        _objc_retain(ppuVar22);
        _objc_release(ppuVar11);
        ppuVar12 = (undefined **)ppuVar4[0xd];
        func_0x00010c269d40(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(puStack_70);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1071d0dc8;
      }
      func_0x00010c1d0640(param_7);
      func_0x00010be15be0(ppuVar4);
      func_0x00010be53780(ppuVar4);
    }
    else {
      func_0x00010c1d0640(param_7);
      func_0x00010c1d0640(param_7);
      ppuVar22 = param_9;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar22;
      func_0x00010c275280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar12;
      func_0x00010c08fa60();
      _objc_release(ppuVar12);
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar12 = ppuVar22;
        func_0x00010c275280(ppuVar22);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar12;
        func_0x000107cb7e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar11);
        _objc_release(ppuVar12);
LAB_1071d03e4:
        func_0x00010c1d0640(param_7);
      }
LAB_1071d03e8:
      puVar20 = ppuVar4[4];
      ppuVar12 = ppuVar4;
      _objc_opt_class(ppuVar4);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(puVar20);
LAB_1071d0428:
      _objc_release(ppuVar12);
LAB_1071d0430:
      _objc_release(ppuVar22);
    }
LAB_1071cfdf0:
    _objc_release(ppuVar21);
    ppuVar22 = ppuStack_120;
  } while( true );
}



/* Entry: 1071cc57c; end: 1071d235b; -[SCDiscoverFeedStoryLoggingOperaPlugin _handleOperaEventWithName:page:params:extraData:isInterstitial:currentPlayingStory:currentStorySectionKey:triggeringStory:currentStoryIndex:triggeringStoryIndex:playableViewModel:triggeringSection:] */

void FUN_1071cc57c(double param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,int param_8,
                  undefined **param_9,undefined *param_10,undefined **param_11)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *in_stack_00000020;
  long in_stack_00000028;
  int iStack_f4;
  undefined **ppuStack_b0;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(in_stack_00000020);
  ppuVar4 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_9);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = param_2[0x1f] + -0x49;
  if (((puVar17 < (undefined *)0x1a) && ((1L << ((ulong)puVar17 & 0x3f) & 0x2020001U) != 0)) ||
     ((puVar17 = param_2[0x1f] + -0x57, uVar3 = (ulong)puVar17 >> 1,
      (uVar3 | (long)puVar17 << 0x3f) < 8 && ((0xb1U >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)))) {
LAB_1071cc680:
    iStack_f4 = 1;
  }
  else {
    puVar17 = param_2[0x1c];
    func_0x00010bf1f440();
    if (((ulong)puVar17 & 1) != 0) goto LAB_1071cc680;
    iStack_f4 = (int)param_2[0x1c];
    func_0x00010bf1f440();
  }
  puVar17 = param_2[0xb];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar17 == (undefined *)0x0) {
    ppuVar20 = (undefined **)0x0;
  }
  else {
    ppuVar6 = (undefined **)param_2[0xb];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar20 = ppuVar6;
    _objc_opt_isKindOfClass(ppuVar6,puVar17);
    ppuVar21 = ppuVar6;
    if (((ulong)ppuVar20 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar6);
    ppuVar20 = ppuVar21;
    func_0x00010c08fa60();
    if (ppuVar20 == (undefined **)0x0) {
      ppuVar20 = (undefined **)0x0;
    }
    else {
      _objc_retain(ppuVar21);
      func_0x00010c1d0640(param_7);
      ppuVar20 = ppuVar21;
    }
    _objc_release(ppuVar21);
  }
  ppuVar21 = ppuVar20;
  func_0x00010c08fa60();
  ppuVar6 = ppuVar20;
  if ((param_11 != (undefined **)0x0) && (ppuVar21 == (undefined **)0x0)) {
    ppuVar21 = param_11;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar21;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    _objc_release(ppuVar21);
    if (ppuVar6 == (undefined **)0x0) {
      puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar17);
      ppuVar6 = (undefined **)0x0;
    }
    else {
      func_0x00010c1d0640(param_7);
    }
  }
  puVar7 = param_2[0xb];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar18 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar17);
  puVar17 = puVar7;
  if (((ulong)puVar18 & 1) == 0) {
    puVar17 = (undefined *)0x0;
  }
  _objc_retain(puVar17);
  _objc_release(puVar7);
  puVar18 = puVar17;
  func_0x00010c08fa60();
  if (puVar18 != (undefined *)0x0) {
    func_0x00010c1d0640(param_7);
  }
  if (param_2[0x1d] != (undefined *)0x0) {
    func_0x00010c1d0640(param_7);
  }
  puVar18 = param_10;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar18 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(param_7);
  }
  _objc_release(puVar18);
  puVar18 = param_10;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar18 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c1d0640(param_7);
  }
  _objc_release(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bebe600(param_2);
  func_0x00010c0df780(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar18);
  func_0x00010c1d0640(param_7);
  func_0x00010bea4ba0(param_2);
  func_0x00010bea42c0(param_2);
  _objc_retain(param_5);
  ppuVar20 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar20;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar20);
  ppuVar20 = param_5;
  if (ppuVar21 != (undefined **)0x0) {
    ppuVar21 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar12;
    func_0x00010c067fc0();
    _objc_release(ppuVar12);
    _objc_release(ppuVar21);
    if ((ppuVar11 < (undefined **)0xd) && ((0x12f7U >> (ulong)((uint)ppuVar11 & 0x1f) & 1) != 0)) {
      _objc_release(param_5);
      ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
    }
  }
  _objc_release(ppuVar20);
  if (param_8 != 0) {
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar18);
  }
  if (param_9 == (undefined **)0x0) {
    ppuVar21 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c2118;
    _objc_opt_class(PTR_PTR_1126c2118);
    ppuVar12 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar18);
    ppuVar20 = ppuVar21;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_retain(ppuVar20);
    _objc_release(ppuVar21);
    if (ppuVar20 != (undefined **)0x0) {
      ppuVar12 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126b47a0;
      _objc_opt_class(PTR_PTR_1126b47a0);
      ppuVar11 = ppuVar12;
      _objc_opt_isKindOfClass(ppuVar12,puVar18);
      ppuVar21 = ppuVar12;
      if (((ulong)ppuVar11 & 1) == 0) {
        ppuVar21 = (undefined **)0x0;
      }
      _objc_retain(ppuVar21);
      _objc_release(ppuVar12);
      ppuVar11 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar8 = ppuVar11;
      _objc_opt_isKindOfClass(ppuVar11,puVar18);
      ppuVar12 = ppuVar11;
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar12 = (undefined **)0x0;
      }
      _objc_retain(ppuVar12);
      _objc_release(ppuVar11);
      puVar18 = PTR_PTR_1126c9310;
      func_0x00010c06dca0();
      if ((int)puVar18 != 0) {
        ppuVar11 = ppuVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar11 == (undefined **)0x0) {
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
          ppuVar12 = ppuVar11;
        }
      }
      puVar18 = param_2[0xb];
      func_0x00010c0e00e0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(puVar18);
      puVar7 = param_2[0xb];
      func_0x00010c0e00e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126d50c8;
      func_0x00010c25a180(PTR_PTR_1126d50c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar7);
      _objc_release(puVar18);
      _objc_release(ppuVar12);
      _objc_release(ppuVar21);
    }
    ppuVar21 = ppuVar20;
    func_0x000108538708();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(puVar18);
    if (ppuVar21 == (undefined **)0x0) {
      ppuVar12 = param_2;
      func_0x00010beb6ac0();
      if (((ulong)ppuVar12 & 1) == 0) {
        ppuVar12 = (undefined **)param_2[0x1f];
        func_0x000108534aec();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar12 == &PTR____CFConstantStringClassReference_110db8b78) {
          ppuVar12 = &PTR____CFConstantStringClassReference_110eb3638;
          _objc_retain(&PTR____CFConstantStringClassReference_110eb3638);
          _objc_release(&PTR____CFConstantStringClassReference_110db8b78);
        }
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar12);
      }
      ppuVar12 = param_2 + 1;
      _objc_loadWeakRetained();
      ppuVar8 = ppuVar12;
      func_0x00010c101260();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar9;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar12);
      if (ppuVar11 == (undefined **)0x0) {
        puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar18);
      }
      else {
        func_0x00010c1d0640(param_7);
      }
      _objc_retain(in_stack_00000020);
      puVar7 = in_stack_00000020;
      func_0x00010010fab4(in_stack_00000020,PTR_DAT_1126a5990);
      puVar18 = in_stack_00000020;
      if ((int)puVar7 == 0) {
        puVar18 = (undefined *)0x0;
      }
      _objc_retain(puVar18);
      _objc_release(in_stack_00000020);
      if (puVar18 != (undefined *)0x0) {
        func_0x00010c1d0640(param_7);
        ppuVar12 = ppuVar11;
        func_0x00010c08fa60();
        if (ppuVar12 != (undefined **)0x0) {
          func_0x00010c1d0640(param_7);
        }
        func_0x00010c1d0640(param_7);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0673c0(in_stack_00000020);
        func_0x00010c0df780(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar7);
      }
      _objc_release(puVar18);
    }
    else {
      ppuVar12 = ppuVar21;
      func_0x00010c156360(ppuVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(ppuVar12);
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c156900(ppuVar21);
      func_0x00010c0df780(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
    if (in_stack_00000028 == 0x2a) {
      _objc_retain(in_stack_00000020);
      puVar18 = PTR_PTR_1126c2118;
      _objc_opt_class(PTR_PTR_1126c2118);
      puVar7 = in_stack_00000020;
      _objc_opt_isKindOfClass(in_stack_00000020,puVar18);
      puVar18 = in_stack_00000020;
      if (((ulong)puVar7 & 1) == 0) {
        puVar18 = (undefined *)0x0;
      }
      _objc_retain(puVar18);
      _objc_release(in_stack_00000020);
      puVar7 = puVar18;
      func_0x000108535b00(puVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(puVar7);
      _objc_release(puVar18);
      goto LAB_1071cd25c;
    }
  }
  else {
    ppuVar20 = param_9;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar20 == (undefined **)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar18);
    }
    else {
      func_0x00010c1d0640(param_7);
    }
    _objc_release(ppuVar20);
    ppuVar20 = param_9;
    func_0x00010c13bd00(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_7);
    _objc_release(ppuVar20);
    ppuVar20 = param_9;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar20;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar21 == (undefined **)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_7);
      _objc_release(puVar18);
    }
    else {
      func_0x00010c1d0640(param_7);
    }
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
    func_0x00010be3cb00(param_2);
    if (in_stack_00000028 == 0x2a) {
      _objc_retain(puVar5);
      puVar7 = puVar5;
LAB_1071cd25c:
      func_0x00010be3cb60(param_2);
      _objc_release(puVar7);
    }
  }
  puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR_PTR_1126c9a78;
  func_0x00010bef5400(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar4;
  func_0x00010c0e00e0(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c0df6e0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_7);
  _objc_release(puVar18);
  _objc_release(ppuVar20);
  _objc_release(puVar7);
  func_0x00010be15be0(param_2);
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    puVar18 = PTR_PTR_1126b5cb8;
    func_0x00010beedca0(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar12 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar18);
    ppuVar20 = ppuVar21;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_retain(ppuVar20);
    _objc_release(ppuVar21);
    puVar18 = PTR_PTR_1126b5c68;
    func_0x00010c22a700(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar20;
    func_0x00010c0720c0();
    _objc_release(puVar18);
    if (((ulong)ppuVar21 & 1) == 0) {
      puVar18 = PTR_PTR_1126b5c68;
      func_0x00010c28efc0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar18);
      if ((int)ppuVar21 != 0) goto LAB_1071cd45c;
    }
    else {
LAB_1071cd45c:
      func_0x00010c1d0640(param_7);
    }
    func_0x00010c1d0640(param_7);
    puVar18 = PTR_PTR_1126b5cb8;
    func_0x00010c068440(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar18);
    ppuVar21 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar12);
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar12 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar12);
    puVar10 = param_2[0xb];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar7 = puVar10;
    _objc_opt_isKindOfClass(puVar10,puVar18);
    puVar18 = puVar10;
    if (((ulong)puVar7 & 1) == 0) {
      puVar18 = (undefined *)0x0;
    }
    _objc_retain(puVar18);
    _objc_release(puVar10);
    puVar10 = param_2[0xd];
    func_0x00010c269d40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_9;
    func_0x000107bfa524(param_9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_9;
    func_0x00010bf454e0(param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_10;
    func_0x00010bfa4340(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(puVar10);
    _objc_release(puVar7);
    _objc_release(ppuVar11);
    _objc_release(ppuVar12);
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010c22a700(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010bf91f40(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010bf80940(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010bf8f5a0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010bf7fac0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2d30;
  func_0x00010c22a860(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2ce8;
  func_0x00010beeeae0(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    puVar18 = PTR_PTR_1126b5cb8;
    func_0x00010c068440(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar12 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar18);
    ppuVar20 = ppuVar21;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_retain(ppuVar20);
    _objc_release(ppuVar21);
    if (ppuVar20 != (undefined **)0x0) {
      func_0x00010c1d0640(param_7);
    }
    puVar18 = PTR_PTR_1126b5cb8;
    func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar18);
    ppuVar21 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar12);
    if (ppuVar21 != (undefined **)0x0) {
      func_0x00010c1d0640(param_7);
    }
    puVar18 = param_2[4];
    ppuVar12 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar12);
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126c9400;
  func_0x00010c272ac0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    puVar18 = PTR_PTR_1126c9408;
    func_0x00010c0fe400(PTR_PTR_1126c9408);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar12 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar18);
    ppuVar20 = ppuVar21;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_retain(ppuVar20);
    _objc_release(ppuVar21);
    ppuVar21 = ppuVar20;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar20);
    uVar15 = 0x45;
    if ((int)ppuVar21 != 0) {
      uVar15 = 0x46;
    }
    ppuVar20 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar20 == (undefined **)0x0) {
      lVar19 = 5;
    }
    else {
      ppuVar21 = param_6;
      func_0x00010c0e00e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c067ec0();
      lVar19 = (long)(int)ppuVar12;
      _objc_release(ppuVar21);
    }
    _objc_release(ppuVar20);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cb4ebc(uVar15,param_9,3,lVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(uVar15);
    _objc_release(ppuVar20);
  }
  ppuVar20 = param_2;
  func_0x00010be44780();
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  if ((int)ppuVar20 != 0) {
    puVar18 = param_2[0x12];
    func_0x00010c0cfb40(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfa60();
    _objc_release(puVar18);
  }
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  if ((int)ppuVar20 != 0) {
    puVar18 = param_2[0x12];
    func_0x00010c0cfb40(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfba0();
    _objc_release(puVar18);
  }
  puVar18 = PTR_PTR_1126b2638;
  func_0x00010bf0a200(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    puVar18 = PTR_PTR_1126b5cb8;
    func_0x00010c06b7e0(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar12 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar18);
    ppuVar20 = ppuVar21;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_retain(ppuVar20);
    _objc_release(ppuVar21);
    puVar18 = PTR_PTR_1126b5cb8;
    func_0x00010bfbaa20(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar11 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar18);
    ppuVar21 = ppuVar12;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar12);
    if (ppuVar21 == (undefined **)0x0) {
      func_0x00010bf1f3c0(ppuVar20);
    }
    else {
      func_0x00010bf1f3c0();
      ppuVar11 = ppuVar20;
      func_0x00010bf1f3c0();
      if ((((ulong)ppuVar11 & 1) == 0) && (((ulong)ppuVar12 & 1) == 0)) {
        func_0x00010c1d0640(param_7);
        puVar18 = PTR_PTR_1126b5cb8;
        func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar12);
        _objc_release(puVar18);
        puVar18 = param_2[4];
        ppuVar12 = param_2;
        _objc_opt_class(param_2);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar18);
        _objc_release(ppuVar12);
      }
    }
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2638;
  func_0x00010c24eb60(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2638;
  func_0x00010bf948a0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar18);
  if ((int)ppuVar20 != 0) {
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    func_0x00010c1d0640(param_7);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  puVar18 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_4;
  func_0x00010c0720c0();
  ppuVar12 = param_2;
  ppuVar21 = param_4;
  ppuStack_b0 = param_4;
  if ((int)ppuVar20 == 0) {
    puVar7 = PTR_PTR_1126ca2c0;
    func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    _objc_release(puVar18);
    if ((int)ppuVar20 != 0) goto LAB_1071ce25c;
    puVar18 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = param_4;
    func_0x00010c0720c0();
    if ((int)ppuVar20 == 0) {
LAB_1071ce798:
      _objc_release(puVar18);
LAB_1071ce7a0:
      puVar18 = PTR_PTR_1126c9460;
      func_0x00010c0f2580(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = param_4;
      func_0x00010c0720c0();
      if ((int)ppuVar20 == 0) {
        puVar7 = PTR_PTR_1126c9460;
        func_0x00010c0f2560(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar7);
        _objc_release(puVar18);
        if ((int)ppuVar20 != 0) goto LAB_1071ce80c;
        puVar18 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar18);
        if ((int)ppuVar20 != 0) {
          ppuVar20 = param_2;
          func_0x00010bee73a0();
          if (((((int)ppuVar20 != 0) && ((*(byte *)((long)param_2 + 0x9a) & 1) == 0)) &&
              ((*(byte *)((long)param_2 + 0x8a) & 1) == 0)) &&
             (ppuVar20 = param_2, func_0x00010bdd9ae0(), (int)ppuVar20 != 0)) {
            *(undefined1 *)((long)param_2 + 0x8a) = 1;
            func_0x00010c1d0640(param_7);
            func_0x00010c1d0640(param_7);
            func_0x00010be15be0(param_2);
            func_0x00010be53780(param_2);
            func_0x00010be5d760(param_2);
          }
          if ((*(char *)(param_2 + 0x24) == '\x01') &&
             (puVar18 = puVar5, func_0x00010c067fc0(), puVar18 != (undefined *)0x0)) {
            puVar7 = param_2[0x2b];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar7;
            func_0x00010c067fc0();
            _objc_release(puVar7);
            if ((long)puVar18 < 3) {
              func_0x00010c1d0640(param_2[0x2b]);
              puVar7 = param_2[0x25];
              ppuVar20 = param_9;
              func_0x00010c25a160(param_9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c084c40();
              ppuVar12 = param_9;
              func_0x00010c25a160(param_9);
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar12;
              func_0x00010c084ca0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = param_2[0x12];
              func_0x00010c0f1b80(puVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c06fc60();
              func_0x00010c127180(puVar7);
              _objc_release(puVar18);
              _objc_release(ppuVar11);
              _objc_release(ppuVar12);
              _objc_release(ppuVar20);
            }
          }
          goto LAB_1071ce9ac;
        }
        puVar18 = PTR_PTR_1126c9460;
        func_0x00010c29ae40(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar18);
        if ((int)ppuVar20 != 0) {
          puVar18 = PTR_PTR_1126c9cf8;
          func_0x00010bf9a340(PTR_PTR_1126c9cf8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar18);
          puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar11 = ppuVar12;
          _objc_opt_isKindOfClass(ppuVar12,puVar18);
          ppuVar20 = ppuVar12;
          if (((ulong)ppuVar11 & 1) == 0) {
            ppuVar20 = (undefined **)0x0;
          }
          _objc_retain(ppuVar20);
          _objc_release(ppuVar12);
          puVar18 = PTR_PTR_1126c9d08;
          func_0x00010bf35860(PTR_PTR_1126c9d08);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar20;
          func_0x00010c0720c0();
          if ((((ulong)ppuVar12 & 1) == 0) &&
             (ppuVar12 = ppuVar20, func_0x00010c0720c0(), ((ulong)ppuVar12 & 1) == 0)) {
            ppuVar12 = ppuVar20;
            func_0x00010c0720c0();
            _objc_release(puVar18);
            if (((ulong)ppuVar12 & 1) == 0) goto LAB_1071ceff0;
          }
          else {
            _objc_release(puVar18);
          }
          puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (param_2[2] != (undefined *)0x0) {
            func_0x00010c27dd80();
            func_0x000107af8f48();
            func_0x00010c0df780(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar18);
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27dd80(param_2[2]);
            func_0x000107af8f6c();
            func_0x00010c0df780(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar18);
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27dd80(param_2[2]);
            func_0x000107af8f90();
            func_0x00010c0df780(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar18);
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27dd80(param_2[2]);
            func_0x000107cd46f8();
            func_0x00010c0df780(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar18);
          }
          puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_7);
          func_0x00010c1d0640(param_7);
          ppuVar12 = ppuVar20;
          func_0x00010c0720c0();
          if ((int)ppuVar12 != 0) {
            puVar7 = PTR_PTR_1126b2348;
            func_0x00010c156fa0(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = param_6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar7);
            if (ppuVar12 != (undefined **)0x0) {
              puVar7 = PTR_PTR_1126b2348;
              func_0x00010c156fa0(PTR_PTR_1126b2348);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(param_7);
              _objc_release(ppuVar12);
              _objc_release(puVar7);
            }
          }
          ppuVar12 = param_2;
          func_0x00010be0d8a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_7);
          ppuVar11 = ppuVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar11 != (undefined **)0x0) {
            ppuVar11 = ppuVar12;
            func_0x00010c0e00e0(ppuVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar12);
            _objc_release(ppuVar11);
          }
          puVar7 = param_2[4];
          ppuVar11 = param_2;
          _objc_opt_class(param_2);
          func_0x00010bf04780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7dbc0(puVar7);
          _objc_release(ppuVar11);
          *(undefined1 *)((long)param_2 + 0x9a) = 0;
          _objc_release(puVar18);
          param_2 = &PTR_PTR_110ca8110;
          param_7 = ppuVar12;
          ppuStack_b0 = ppuVar20;
LAB_1071ceff0:
          _objc_release(ppuVar20);
          goto LAB_1071ce9ac;
        }
        puVar18 = PTR_PTR_1126c9400;
        func_0x00010c272ac0(PTR_PTR_1126c9400);
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar18);
        if ((int)ppuVar20 == 0) {
          puVar18 = PTR_PTR_1126c9400;
          func_0x00010c15b3c0(PTR_PTR_1126c9400);
          _objc_retainAutoreleasedReturnValue();
          ppuVar20 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar18);
          if ((int)ppuVar20 == 0) {
            puVar18 = PTR_PTR_1126c9400;
            func_0x00010c2999a0(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar18);
            if ((int)ppuVar20 != 0) {
              func_0x00010c1d0640(param_7);
              puVar18 = PTR_PTR_1126c9408;
              func_0x00010c1570e0(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar18);
              puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar11 = ppuVar12;
              _objc_opt_isKindOfClass(ppuVar12,puVar18);
              ppuVar20 = ppuVar12;
              if (((ulong)ppuVar11 & 1) == 0) {
                ppuVar20 = (undefined **)0x0;
              }
              _objc_retain(ppuVar20);
              _objc_release(ppuVar12);
              puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (ppuVar20 != (undefined **)0x0) {
                func_0x00010bf885a0(ppuVar12);
                param_1 = param_1 / 1000.0;
                func_0x00010c0df720(param_1,puVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(param_7);
                _objc_release(puVar18);
              }
              puVar18 = PTR_PTR_1126c9408;
              func_0x00010c157360(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar18);
              puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppuVar8 = ppuVar11;
              _objc_opt_isKindOfClass(ppuVar11,puVar18);
              ppuVar12 = ppuVar11;
              if (((ulong)ppuVar8 & 1) == 0) {
                ppuVar12 = (undefined **)0x0;
              }
              _objc_retain(ppuVar12);
              _objc_release(ppuVar11);
              puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (ppuVar12 != (undefined **)0x0) {
                func_0x00010bf885a0(ppuVar11);
                func_0x00010c0df720(param_1 / 1000.0,puVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(param_7);
                _objc_release(puVar18);
              }
              puVar18 = param_2[4];
              ppuVar11 = param_2;
              _objc_opt_class(param_2);
              func_0x00010bf04780();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf7dbc0(puVar18);
              _objc_release(ppuVar11);
              _objc_release(ppuVar12);
              goto LAB_1071ceff0;
            }
            puVar18 = PTR_PTR_1126b2338;
            func_0x00010c0c6900(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            ppuVar20 = param_4;
            func_0x00010c0720c0();
            if (((ulong)ppuVar20 & 1) == 0) {
              puVar7 = PTR_PTR_1126b2338;
              func_0x00010bfe8ca0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              ppuVar20 = param_4;
              func_0x00010c0720c0();
              if (((ulong)ppuVar20 & 1) != 0) {
LAB_1071cf5b0:
                _objc_release(puVar7);
                goto LAB_1071cf5b8;
              }
              puVar10 = PTR_PTR_1126c9a00;
              func_0x00010c2a3ea0(PTR_PTR_1126c9a00);
              _objc_retainAutoreleasedReturnValue();
              ppuVar20 = param_4;
              func_0x00010c0720c0();
              if ((int)ppuVar20 != 0) {
                _objc_release(puVar10);
                goto LAB_1071cf5b0;
              }
              ppuVar20 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar10);
              _objc_release(puVar7);
              _objc_release(puVar18);
              if (((ulong)ppuVar20 & 1) == 0) {
                puVar18 = PTR_PTR_1126b2330;
                func_0x00010bf96940(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar20 = param_4;
                func_0x00010c0720c0();
                _objc_release(puVar18);
                if ((int)ppuVar20 == 0) {
                  puVar18 = PTR_PTR_1126b2338;
                  func_0x00010c23c600(PTR_PTR_1126b2338);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar20 = param_4;
                  func_0x00010c0720c0();
                  _objc_release(puVar18);
                  if ((int)ppuVar20 == 0) {
                    puVar18 = PTR_PTR_1126b2338;
                    func_0x00010c23c620(PTR_PTR_1126b2338);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar20 = param_4;
                    func_0x00010c0720c0();
                    _objc_release(puVar18);
                    if ((int)ppuVar20 == 0) {
                      puVar18 = PTR_PTR_1126c9a10;
                      func_0x00010c06d180(PTR_PTR_1126c9a10);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar20 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar18);
                      if ((int)ppuVar20 == 0) {
                        ppuVar20 = param_4;
                        func_0x00010c0720c0();
                        if ((int)ppuVar20 == 0) {
                          puVar18 = PTR_PTR_1126c9830;
                          func_0x00010beedca0(PTR_PTR_1126c9830);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar20 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar18);
                          if ((int)ppuVar20 != 0) {
                            ppuVar11 = &PTR_PTR_1126b5000;
                            puVar18 = PTR_PTR_1126b5cb8;
                            func_0x00010beedca0(PTR_PTR_1126b5cb8);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar21 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar18);
                            puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            ppuVar12 = ppuVar21;
                            _objc_opt_isKindOfClass(ppuVar21,puVar18);
                            ppuVar20 = ppuVar21;
                            if (((ulong)ppuVar12 & 1) == 0) {
                              ppuVar20 = (undefined **)0x0;
                            }
                            _objc_retain(ppuVar20);
                            _objc_release(ppuVar21);
                            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar18);
                            ppuVar21 = &PTR_PTR_1126b5000;
                            puVar18 = PTR_PTR_1126b5c68;
                            func_0x00010c131980(PTR_PTR_1126b5c68);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar12 = ppuVar20;
                            func_0x00010c0720c0();
                            _objc_release(puVar18);
                            if ((int)ppuVar12 == 0) goto LAB_1071d02f0;
                            func_0x00010c1d0640(param_7);
                            puVar18 = PTR_PTR_1126b5cb8;
                            func_0x00010c15ffa0(PTR_PTR_1126b5cb8);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar12 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(puVar18);
                            puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            ppuVar11 = ppuVar12;
                            _objc_opt_isKindOfClass(ppuVar12,puVar18);
                            ppuVar21 = ppuVar12;
                            if (((ulong)ppuVar11 & 1) == 0) {
                              ppuVar21 = (undefined **)0x0;
                            }
                            _objc_retain(ppuVar21);
                            _objc_release(ppuVar12);
                            ppuVar12 = ppuVar21;
                            func_0x00010c08fa60();
                            if (ppuVar12 == (undefined **)0x0) goto LAB_1071d03e8;
                            goto LAB_1071d03e4;
                          }
                          if (iStack_f4 != 0) {
                            puVar18 = PTR_PTR_1126b2330;
                            func_0x00010c29ef00(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar20 = param_4;
                            func_0x00010c0720c0();
                            if (((ulong)ppuVar20 & 1) == 0) {
                              _objc_release(puVar18);
                            }
                            else {
                              puVar7 = PTR_PTR_1126c9a20;
                              func_0x00010bf43ba0(PTR_PTR_1126c9a20);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar20 = param_6;
                              func_0x00010c0e00e0();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar12 = ppuVar20;
                              func_0x00010bf1f3c0();
                              _objc_release(ppuVar20);
                              _objc_release(puVar7);
                              _objc_release(puVar18);
                              if (((ulong)ppuVar12 & 1) == 0) {
                                ppuVar20 = param_2;
                                func_0x00010bee73a0();
                                if (((int)ppuVar20 == 0) ||
                                   (*(char *)((long)param_2 + 0x9a) == '\x01')) {
                                  puVar18 = param_2[2];
                                  func_0x00010c27dd80();
                                  if (puVar18 == (undefined *)0x2) goto LAB_1071ce9ac;
                                }
                                if ((*(byte *)((long)param_2 + 0x8a) & 1) == 0) {
                                  *(undefined1 *)((long)param_2 + 0x8a) = 1;
                                  ppuVar20 = param_2;
                                  func_0x00010bdd9ae0();
                                  if ((int)ppuVar20 != 0) {
                                    func_0x00010c1d0640(param_7);
                                    func_0x00010c1d0640(param_7);
                                    func_0x00010be15be0(param_2);
                                    func_0x00010be53780(param_2);
                                    func_0x00010be5d760(param_2);
                                  }
                                }
                                goto LAB_1071ce9ac;
                              }
                            }
                          }
                          if (*(char *)((long)param_2 + 0x8a) == '\x01') {
                            puVar18 = PTR_PTR_1126b2330;
                            func_0x00010c29eee0(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar20 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar18);
                            if ((int)ppuVar20 != 0) {
                              cVar1 = *(char *)((long)param_2 + 0x9a);
                              *(undefined1 *)((long)param_2 + 0x9a) = 0;
                              if ((cVar1 != '\x01') ||
                                 (ppuVar20 = param_2, func_0x00010bee73a0(),
                                 ((ulong)ppuVar20 & 1) == 0)) {
                                ppuVar20 = param_2;
                                func_0x00010be0d8a0();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(param_7);
                                puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
                                func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c1d0640(ppuVar20);
                                func_0x00010c1d0640(ppuVar20);
                                func_0x00010c1d0640(ppuVar20);
                                puVar7 = param_2[4];
                                ppuVar12 = param_2;
                                _objc_opt_class(param_2);
                                func_0x00010bf04780();
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010bf7dbc0(puVar7);
                                _objc_release(ppuVar12);
                                func_0x00010be5d780(param_2);
                                *(undefined1 *)((long)param_2 + 0x8a) = 0;
                                _objc_release(puVar18);
                                param_7 = ppuVar20;
                              }
                              goto LAB_1071ce9ac;
                            }
                          }
                          ppuVar20 = param_4;
                          func_0x00010c0720c0();
                          if (((((ulong)ppuVar20 & 1) != 0) ||
                              (ppuVar20 = param_4, func_0x00010c0720c0(), ((ulong)ppuVar20 & 1) != 0
                              )) || (ppuVar20 = param_4, func_0x00010c0720c0(), (int)ppuVar20 != 0))
                          {
                            ppuVar20 = param_4;
                            func_0x00010c0720c0();
                            if (((ulong)ppuVar20 & 1) == 0) {
                              ppuVar20 = param_4;
                              func_0x00010c0720c0();
                              if (((ulong)ppuVar20 & 1) == 0) {
                                func_0x00010c0720c0();
                                if ((int)param_4 == 0) {
                                  uVar15 = 0;
                                }
                                else {
                                  ppuVar20 = param_6;
                                  func_0x00010c0e00e0();
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar12 = ppuVar20;
                                  func_0x00010bf1f3c0();
                                  if ((int)ppuVar12 != 0) goto LAB_1071cfdf0;
                                  ppuVar12 = param_6;
                                  func_0x00010c0e00e0();
                                  _objc_retainAutoreleasedReturnValue();
                                  ppuVar11 = ppuVar12;
                                  func_0x00010bf1f3c0();
                                  _objc_release(ppuVar12);
                                  _objc_release(ppuVar20);
                                  if (((ulong)ppuVar11 & 1) != 0) goto LAB_1071ce9ac;
                                  uVar15 = 1;
                                }
                              }
                              else {
                                uVar15 = 5;
                              }
                            }
                            else {
                              uVar15 = 4;
                            }
                            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x000107af8f48(uVar15);
                            func_0x00010c0df780(puVar18);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar18);
                            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x000107af8f6c(uVar15);
                            func_0x00010c0df780(puVar18);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar18);
                            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x000107af8f90(uVar15);
                            func_0x00010c0df780(puVar18);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar18);
                            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            func_0x00010c27dd80(param_2[2]);
                            func_0x000107cd46f8();
                            func_0x00010c0df780(puVar18);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            _objc_release(puVar18);
                            puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
                            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(param_7);
                            func_0x00010c1d0640(param_7);
                            ppuVar20 = param_2;
                            func_0x00010be0d8a0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(param_7);
                            ppuVar12 = ppuVar20;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release();
                            if (ppuVar12 != (undefined **)0x0) {
                              ppuVar12 = ppuVar20;
                              func_0x00010c0e00e0(ppuVar20);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c1d0640(ppuVar20);
                              _objc_release(ppuVar12);
                            }
                            puVar7 = param_2[4];
                            ppuVar12 = param_2;
                            _objc_opt_class(param_2);
                            func_0x00010bf04780();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bf7dbc0(puVar7);
                            _objc_release(ppuVar12);
                            _objc_release(puVar18);
                            param_7 = ppuVar20;
                          }
                        }
                        else {
                          *(undefined1 *)(param_2 + 0x11) = 1;
                          func_0x00010c1d0640(param_7);
                          func_0x00010c1d0640(param_7);
                          ppuVar20 = param_6;
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          if (ppuVar20 != (undefined **)0x0) {
                            ppuVar12 = param_6;
                            func_0x00010c0e00e0();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c067ec0();
                            _objc_release(ppuVar12);
                            _objc_release(ppuVar20);
                          }
                          puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c1d0640(param_7);
                          _objc_release(puVar18);
                          puVar18 = param_2[4];
                          ppuVar20 = param_2;
                          _objc_opt_class(param_2);
                          func_0x00010bf04780();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bf7dbc0(puVar18);
                          _objc_release(ppuVar20);
                          puVar10 = param_2[0xb];
                          func_0x00010c0e00e0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                          puVar7 = puVar10;
                          _objc_opt_isKindOfClass(puVar10,puVar18);
                          puVar18 = puVar10;
                          if (((ulong)puVar7 & 1) == 0) {
                            puVar18 = (undefined *)0x0;
                          }
                          _objc_retain(puVar18);
                          _objc_release(puVar10);
                          puVar10 = param_2[0xd];
                          func_0x00010c269d40(puVar10);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar20 = param_9;
                          func_0x000107bfa524(param_9);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar12 = param_9;
                          func_0x00010bf454e0(param_9);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = param_10;
                          func_0x00010bfa4340(param_10);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010c285ba0(puVar10);
                          _objc_release(puVar7);
                          _objc_release(ppuVar12);
                          _objc_release(ppuVar20);
                          _objc_release(puVar10);
                          _objc_release(puVar18);
                        }
                      }
                      else {
                        func_0x00010be15be0(param_2);
                        puVar18 = param_2[4];
                        ppuVar20 = param_2;
                        _objc_opt_class(param_2);
                        func_0x00010bf04780();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar12 = ppuVar20;
                        func_0x000107cb6254();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf7dbc0(puVar18);
                        _objc_release(ppuVar12);
                        _objc_release(ppuVar20);
                        _objc_retain(param_10);
                        puVar18 = param_2[0x27];
                        param_2[0x27] = param_10;
                        _objc_release(puVar18);
                        puVar18 = param_2[0x25];
                        ppuVar20 = param_9;
                        func_0x00010c25a160(param_9);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c084c40();
                        ppuVar12 = param_9;
                        func_0x00010c25a160(param_9);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar11 = ppuVar12;
                        func_0x00010c084ca0();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c126860(puVar18);
                        _objc_release(ppuVar11);
                        _objc_release(ppuVar12);
                        _objc_release(ppuVar20);
                        param_2 = param_9;
                      }
                    }
                    else {
                      *(undefined1 *)((long)param_2 + 0x31) = 1;
                      ppuVar20 = param_2;
                      func_0x00010be0d8a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(param_7);
                      puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(ppuVar20);
                      _objc_release(puVar18);
                      func_0x00010bdd2140(param_2);
                      if (*(char *)((long)param_2 + 0x89) == '\x01') {
                        func_0x00010c1d0640(ppuVar20);
                        func_0x00010c1d0640(ppuVar20);
                        func_0x00010c1d0640(ppuVar20);
                        *(undefined1 *)((long)param_2 + 0x89) = 0;
                      }
                      puVar18 = param_2[4];
                      _objc_opt_class(param_2);
                      func_0x00010bf04780();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf7dbc0(puVar18);
                      _objc_release(ppuVar12);
                      func_0x00010be5d780(param_2);
                      *(undefined1 *)((long)param_2 + 0x8a) = 0;
                      param_7 = ppuVar20;
                    }
                  }
                  else {
                    bVar2 = *(byte *)(param_2 + 0x11);
                    if (bVar2 == 1) {
                      *(undefined1 *)(param_2 + 0x11) = 0;
                      puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar18);
                    }
                    puVar18 = param_2[0x1f] + -0x49;
                    if (((puVar18 < (undefined *)0x1a) &&
                        ((1L << ((ulong)puVar18 & 0x3f) & 0x2020001U) != 0)) ||
                       ((puVar18 = param_2[0x1f] + -0x57, uVar3 = (ulong)puVar18 >> 1,
                        (uVar3 | (long)puVar18 << 0x3f) < 8 && ((1L << (uVar3 & 0x3f) & 0xb1U) != 0)
                        ))) {
                      *(undefined1 *)((long)param_2 + 0x8a) = 1;
                      func_0x00010c1d0640(param_7);
                    }
                    ppuVar20 = param_2;
                    func_0x00010bdd9ae0();
                    if ((int)ppuVar20 != 0) {
                      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar18);
                      puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar18);
                      func_0x00010c1d0640(param_7);
                      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar18);
                      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_7);
                      _objc_release(puVar18);
                      func_0x00010be15be0(param_2);
                      func_0x00010be15e00(param_2);
                      puVar18 = param_2[4];
                      ppuVar20 = param_2;
                      _objc_opt_class(param_2);
                      func_0x00010bf04780();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf7dbc0(puVar18);
                      _objc_release(ppuVar20);
                      func_0x00010be5d760(param_2);
                      if ((bVar2 & 1) == 0) {
                        puVar18 = param_2[4];
                        ppuVar20 = param_2;
                        _objc_opt_class(param_2);
                        func_0x00010bf04780();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf7dbc0(puVar18);
                        goto LAB_1071cfdf0;
                      }
                    }
                  }
                }
                else {
                  *(undefined1 *)((long)param_2 + 0x9a) = 1;
                  if (((*(char *)((long)param_2 + 0x8a) != '\x01') ||
                      (ppuVar20 = param_2, func_0x00010bee73a0(), ((ulong)ppuVar20 & 1) == 0)) &&
                     (ppuVar20 = param_2, func_0x00010bdd9ae0(), (int)ppuVar20 != 0)) {
                    func_0x00010c1d0640(param_7);
                    func_0x00010c1d0640(param_7);
                    puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
                    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(param_7);
                    _objc_release(puVar18);
                    func_0x00010c1d0640(param_7);
                    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(param_7);
                    _objc_release(puVar18);
                    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(param_7);
                    _objc_release(puVar18);
                    func_0x00010be15be0(param_2);
                    func_0x00010be15e00(param_2);
                    puVar18 = param_2[4];
                    ppuVar20 = param_2;
                    _objc_opt_class(param_2);
                    func_0x00010bf04780();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf7dbc0(puVar18);
                    _objc_release(ppuVar20);
                    func_0x00010be5d760(param_2);
                    func_0x00010bdcbc60(param_2);
                  }
                }
                goto LAB_1071ce9ac;
              }
            }
            else {
LAB_1071cf5b8:
              _objc_release(puVar18);
            }
            ppuVar12 = param_7;
            func_0x00010c0d3c80(param_7);
            ppuVar20 = param_2;
            func_0x00010be0d8a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar12);
            ppuVar12 = ppuVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (ppuVar12 != (undefined **)0x0) {
              ppuVar12 = ppuVar20;
              func_0x00010c0e00e0(ppuVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(param_7);
              _objc_release(ppuVar12);
            }
            puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_7);
            _objc_release(puVar18);
            puVar18 = param_2[4];
            ppuVar12 = param_2;
            _objc_opt_class(param_2);
            func_0x00010bf04780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf7dbc0(puVar18);
            _objc_release(ppuVar12);
            ppuStack_b0 = param_4;
            if ((*(char *)(param_2 + 0x24) == '\x01') &&
               (puVar18 = puVar5, func_0x00010c067fc0(), ppuStack_b0 = param_4,
               puVar18 != (undefined *)0x0)) {
              puVar7 = param_2[0x2b];
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar7;
              func_0x00010c067fc0();
              _objc_release(puVar7);
              ppuStack_b0 = param_4;
              if ((long)puVar18 < 2) {
                puVar18 = param_2[0x25];
                ppuVar12 = param_9;
                func_0x00010c25a160(param_9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c084c40();
                ppuVar11 = param_9;
                func_0x00010c25a160(param_9);
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar11;
                func_0x00010c084ca0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c127140(puVar18);
                _objc_release(ppuVar8);
                _objc_release(ppuVar11);
                _objc_release(ppuVar12);
                puVar18 = param_2[0x2b];
                func_0x00010bf529e0();
                if (puVar18 < (undefined *)0x2) {
                  puVar18 = param_2[0x25];
                  ppuVar12 = param_9;
                  func_0x00010c25a160(param_9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c084c40();
                  ppuVar11 = param_9;
                  func_0x00010c25a160(param_9);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar8 = ppuVar11;
                  func_0x00010c084ca0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c126500(puVar18);
                  _objc_release(ppuVar8);
                  _objc_release(ppuVar11);
                  _objc_release(ppuVar12);
                }
                func_0x00010c1d0640(param_2[0x2b]);
                ppuStack_b0 = param_4;
              }
            }
            goto LAB_1071ceff0;
          }
          goto LAB_1071ce93c;
        }
        puVar18 = PTR_PTR_1126c9408;
        func_0x00010c0fe400(PTR_PTR_1126c9408);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar18);
        ppuVar20 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar20 = (undefined **)0x0;
        }
        _objc_retain(ppuVar20);
        _objc_release(ppuVar12);
        func_0x00010bf1f3c0();
        _objc_release(ppuVar20);
        puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c1d0640(param_7);
        _objc_release(puVar18);
      }
      else {
        _objc_release(puVar18);
LAB_1071ce80c:
        puVar18 = PTR_PTR_1126c9460;
        func_0x00010c0f2560(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(param_4);
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(param_2[2]);
        func_0x000107af8f48();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(param_2[2]);
        func_0x000107af8f6c();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(param_2[2]);
        func_0x000107af8f90();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(param_2[2]);
        func_0x000107cd46f8();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(puVar18);
LAB_1071ce93c:
        func_0x00010c1d0640(param_7);
      }
      puVar18 = param_2[4];
      ppuVar20 = param_2;
      _objc_opt_class(param_2);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(puVar18);
      _objc_release(ppuVar20);
      goto LAB_1071ce9ac;
    }
    ppuVar11 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar8 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar7);
    ppuVar20 = ppuVar11;
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar20 = (undefined **)0x0;
    }
    _objc_retain(ppuVar20);
    _objc_release(ppuVar11);
    ppuVar11 = ppuVar20;
    func_0x00010bf1f3c0();
    if (((ulong)ppuVar11 & 1) == 0) {
      _objc_release(ppuVar20);
      goto LAB_1071ce798;
    }
    cVar1 = *(char *)(param_2 + 0x2c);
    _objc_release(ppuVar20);
    _objc_release(puVar18);
    if (cVar1 != '\x01') goto LAB_1071ce7a0;
    func_0x00010be0d8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar18);
    puVar18 = PTR_PTR_1126c9310;
    func_0x00010c06dca0();
    if ((int)puVar18 != 0) {
      puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar18);
    }
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(char *)((long)param_2 + 0x8a) == '\x01') {
      func_0x00010c1d0640(ppuVar12);
    }
    else {
      func_0x00010c27dd80(param_2[2]);
      func_0x000107cd49e8();
      func_0x00010c0df780(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar18);
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c27dd80(param_2[2]);
      func_0x000107cd4718();
      func_0x00010c0df780(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar18);
    }
    if ((*(char *)(param_2 + 0x24) == '\x01') &&
       (puVar18 = puVar5, func_0x00010c067fc0(), puVar18 != (undefined *)0x0)) {
      puVar7 = param_2[0x2b];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar7;
      func_0x00010c067fc0();
      _objc_release(puVar7);
      if ((long)puVar18 < 1) {
        func_0x00010c1d0640(param_2[0x2b]);
        puVar18 = param_2[0x25];
        ppuVar20 = param_9;
        func_0x00010c25a160(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084c40();
        ppuVar11 = param_9;
        func_0x00010c25a160(param_9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010c084ca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1271a0(puVar18);
        _objc_release(ppuVar8);
        _objc_release(ppuVar11);
        _objc_release(ppuVar20);
      }
    }
    func_0x0001071cc200(param_5);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar18);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
  }
  else {
    _objc_release(puVar18);
LAB_1071ce25c:
    if ((*(char *)((long)param_2 + 0x8a) == '\x01') && (*(char *)((long)param_2 + 0x9a) == '\x01'))
    {
      puVar7 = param_2[0xf];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar7;
      func_0x000108f4e0a0();
      _objc_release(puVar7);
      if (((ulong)puVar18 & 1) != 0) goto LAB_1071ce9ac;
    }
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      ppuVar11 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar8 = ppuVar11;
      _objc_opt_isKindOfClass(ppuVar11,puVar18);
      ppuVar20 = ppuVar11;
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar20 = (undefined **)0x0;
      }
      _objc_retain(ppuVar20);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar20;
      func_0x00010bf1f3c0();
      _objc_release(ppuVar20);
      if (((ulong)ppuVar11 & 1) != 0) goto LAB_1071ce9ac;
    }
    func_0x00010be0d8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar18);
    puVar18 = PTR_PTR_1126c9310;
    func_0x00010c06dca0();
    if ((int)puVar18 != 0) {
      puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar18);
    }
    func_0x00010bdd2140(param_2);
    puVar18 = PTR_PTR_1126ca2c0;
    func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (((ulong)param_4 & 1) == 0) {
      if (*(char *)((long)param_2 + 0x8a) == '\x01') {
        func_0x00010c1d0640(ppuVar12);
      }
      else {
        func_0x00010c27dd80(param_2[2]);
        func_0x000107cd49e8();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar12);
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(param_2[2]);
        func_0x000107cd4718();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar12);
        _objc_release(puVar18);
      }
      if ((*(char *)(param_2 + 0x24) == '\x01') &&
         (puVar18 = puVar5, func_0x00010c067fc0(), puVar18 != (undefined *)0x0)) {
        puVar7 = param_2[0x2b];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar7;
        func_0x00010c067fc0();
        _objc_release(puVar7);
        if ((long)puVar18 < 1) {
          func_0x00010c1d0640(param_2[0x2b]);
          puVar18 = param_2[0x25];
          ppuVar20 = param_9;
          func_0x00010c25a160(param_9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c084c40();
          ppuVar11 = param_9;
          func_0x00010c25a160(param_9);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar11;
          func_0x00010c084ca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1271a0(puVar18);
          _objc_release(ppuVar8);
          _objc_release(ppuVar11);
          _objc_release(ppuVar20);
        }
      }
    }
    func_0x0001071cc200(param_5);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar12);
    _objc_release(puVar18);
    puVar18 = param_2[4];
    ppuVar20 = param_2;
    _objc_opt_class(param_2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar18);
    _objc_release(ppuVar20);
    func_0x00010be5d780(param_2);
  }
  *(undefined1 *)((long)param_2 + 0x8a) = 0;
  *(undefined1 *)((long)param_2 + 0x9a) = 0;
  param_7 = ppuVar12;
LAB_1071ce9ac:
  do {
    _objc_release(puVar17);
    _objc_release(puVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(in_stack_00000020);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(ppuVar21);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      return;
    }
    ___stack_chk_fail();
    ppuVar11 = param_5;
    ppuVar20 = param_11;
LAB_1071d02f0:
    puVar18 = ppuVar21[0x18d];
    func_0x00010c085ae0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar20;
    func_0x00010c0720c0();
    _objc_release(puVar18);
    if ((int)ppuVar12 == 0) {
      puVar18 = ppuVar21[0x18d];
      func_0x00010bf0cb60(puVar18);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar18);
      if ((int)ppuVar12 != 0) goto LAB_1071d0634;
      puVar18 = ppuVar21[0x18d];
      func_0x00010bf1f640(puVar18);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar18);
LAB_1071d0ae8:
        puVar18 = ppuVar21[0x18d];
        func_0x00010c27f560(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar18);
        ppuVar11 = (undefined **)param_2[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar18);
        ppuVar21 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar11);
        func_0x00010c1d0640(param_7);
        puVar18 = param_2[4];
        ppuVar12 = param_2;
        _objc_opt_class(param_2);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar18);
        _objc_release(ppuVar12);
        ppuVar12 = (undefined **)param_2[0xd];
        func_0x00010c269d40(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_9;
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = param_9;
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = param_10;
        func_0x00010bfa4340(param_10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c285ba0(ppuVar12);
        _objc_release(puVar18);
        _objc_release(ppuVar8);
        _objc_release(ppuVar11);
        goto LAB_1071d0428;
      }
      puVar7 = ppuVar21[0x18d];
      func_0x00010c27f560(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      _objc_release(puVar18);
      if ((int)ppuVar12 != 0) goto LAB_1071d0ae8;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c11a640(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      ppuVar8 = param_9;
      ppuVar9 = param_9;
      puVar18 = param_10;
      if (((ulong)ppuVar12 & 1) != 0) {
LAB_1071d0cb8:
        _objc_release(puVar7);
LAB_1071d0cc0:
        func_0x00010c1d0640(param_7);
        puVar7 = param_2[4];
        ppuVar21 = param_2;
        _objc_opt_class(param_2);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar7);
        _objc_release(ppuVar21);
        ppuVar11 = (undefined **)param_2[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar7);
        ppuVar21 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar11);
        ppuVar12 = (undefined **)param_2[0xd];
        func_0x00010c269d40(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(param_10);
        _objc_retainAutoreleasedReturnValue();
LAB_1071d0dc8:
        func_0x00010c285ba0(ppuVar12);
        _objc_release(puVar18);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        goto LAB_1071d0428;
      }
      puVar10 = ppuVar21[0x18d];
      func_0x00010c0ca400(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar10);
        goto LAB_1071d0cb8;
      }
      puVar13 = ppuVar21[0x18d];
      func_0x00010c0ee2e0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar7);
      if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d0cc0;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c2751c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) != 0) {
LAB_1071d0eb8:
        _objc_release(puVar7);
LAB_1071d0ec0:
        func_0x00010c1d0640(param_7);
        puVar18 = ppuVar21[0x18d];
        func_0x00010c2751c0(puVar18);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar20;
        func_0x00010c0720c0();
        _objc_release(puVar18);
        if (((ulong)ppuVar12 & 1) == 0) {
          puVar18 = ppuVar21[0x18d];
          func_0x00010c0d2940(puVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar20;
          func_0x00010c0720c0();
          _objc_release(puVar18);
          if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d1058;
          puVar18 = ppuVar21[0x18d];
          func_0x00010c269b40(puVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar20;
          func_0x00010c0720c0();
          _objc_release(puVar18);
          if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d1058;
          puVar18 = ppuVar21[0x18d];
          func_0x00010c0ed9c0(puVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar20;
          func_0x00010c0720c0();
          _objc_release(puVar18);
          if ((int)ppuVar21 != 0) goto LAB_1071d1058;
        }
        else {
LAB_1071d1058:
          func_0x00010c1d0640(param_7);
        }
        puVar18 = ppuVar11[0x197];
        func_0x00010beee760(puVar18);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar8 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar18);
        ppuVar21 = ppuVar12;
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar21;
        func_0x00010c08fa60();
        if (ppuVar12 != (undefined **)0x0) {
          func_0x00010c1d0640(param_7);
        }
        puVar18 = ppuVar11[0x197];
        func_0x00010bf4e920(puVar18);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar8 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar18);
        ppuVar12 = ppuVar11;
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar12 = (undefined **)0x0;
        }
        _objc_retain(ppuVar12);
        _objc_release(ppuVar11);
        if (ppuVar12 != (undefined **)0x0) {
          func_0x00010c1d0640(param_7);
        }
        puVar18 = param_2[4];
        ppuVar11 = param_2;
        _objc_opt_class(param_2);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar18);
        _objc_release(ppuVar11);
        goto LAB_1071d0428;
      }
      puVar10 = ppuVar21[0x18d];
      func_0x00010c0d2940(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) != 0) {
LAB_1071d0eb0:
        _objc_release(puVar10);
        goto LAB_1071d0eb8;
      }
      puVar13 = ppuVar21[0x18d];
      func_0x00010c269b40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar13);
        goto LAB_1071d0eb0;
      }
      puVar14 = ppuVar21[0x18d];
      func_0x00010c0ed9c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar7);
      if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d0ec0;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c27b9a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) {
LAB_1071d12d8:
        func_0x00010c1d0640(param_7);
LAB_1071d0634:
        func_0x00010c1d0640(param_7);
        puVar18 = param_2[4];
        ppuVar21 = param_2;
        _objc_opt_class(param_2);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar18);
        goto LAB_1071d0430;
      }
      puVar7 = ppuVar21[0x18d];
      func_0x00010c27ba20(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c27b9e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar7 = ppuVar21[0x18d];
      func_0x00010bf05d00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c0fce80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c25fd00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar7);
LAB_1071d1358:
        func_0x00010c1d0640(param_7);
        func_0x00010c1d0640(param_7);
        puVar7 = ppuVar11[0x197];
        func_0x00010bf4eb20(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar7);
        ppuVar21 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar21;
        func_0x00010c067ec0();
        if ((int)ppuVar12 == 6) {
          ppuVar12 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar12 == (undefined **)0x0) {
LAB_1071d1458:
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          }
          else {
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar12;
            func_0x00010c071ae0();
            _objc_release(puVar7);
            if ((int)ppuVar11 != 0) goto LAB_1071d1458;
            ppuVar11 = ppuVar12;
            func_0x00010c0d3c80(ppuVar12);
          }
          uVar15 = 8;
          func_0x00010bc9107c(8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar11);
          _objc_release(uVar15);
          func_0x00010c1d0640(param_7);
          _objc_release(ppuVar11);
          _objc_release(ppuVar12);
        }
        puVar13 = param_2[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar10 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar7);
        puVar7 = puVar13;
        if (((ulong)puVar10 & 1) == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain(puVar7);
        _objc_release(puVar13);
        puVar10 = param_2[0xd];
        func_0x00010c269d40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(param_10);
        _objc_retainAutoreleasedReturnValue();
LAB_1071d1714:
        func_0x00010c285ba0(puVar10);
        _objc_release(puVar18);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(puVar10);
        puVar18 = param_2[4];
        ppuVar12 = param_2;
        _objc_opt_class(param_2);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar18);
        _objc_release(ppuVar12);
        _objc_release(puVar7);
        goto LAB_1071d0430;
      }
      puVar10 = ppuVar21[0x18d];
      func_0x00010c260020(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) goto LAB_1071d1358;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c2829e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) != 0) {
        ppuVar12 = param_2;
        func_0x00010beb2660();
        _objc_release(puVar7);
        if ((int)ppuVar12 == 0) goto LAB_1071d17ac;
LAB_1071d14f4:
        func_0x00010c1d0640(param_7);
        func_0x00010c1d0640(param_7);
        puVar7 = ppuVar11[0x197];
        func_0x00010bf4eb20(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar7);
        ppuVar21 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar21;
        func_0x00010c067ec0();
        if ((int)ppuVar12 == 6) {
          ppuVar12 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar12 == (undefined **)0x0) {
LAB_1071d15f4:
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          }
          else {
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar12;
            func_0x00010c071ae0();
            _objc_release(puVar7);
            if ((int)ppuVar11 != 0) goto LAB_1071d15f4;
            ppuVar11 = ppuVar12;
            func_0x00010c0d3c80(ppuVar12);
          }
          uVar15 = 8;
          func_0x00010bc9107c(8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar11);
          _objc_release(uVar15);
          func_0x00010c1d0640(param_7);
          _objc_release(ppuVar11);
          _objc_release(ppuVar12);
        }
        puVar13 = param_2[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar10 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar7);
        puVar7 = puVar13;
        if (((ulong)puVar10 & 1) == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain(puVar7);
        _objc_release(puVar13);
        puVar10 = param_2[0xd];
        func_0x00010c269d40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(param_10);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1071d1714;
      }
      puVar10 = ppuVar21[0x18d];
      func_0x00010c282ac0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if (((ulong)ppuVar12 & 1) == 0) {
        _objc_release(puVar10);
        _objc_release(puVar7);
      }
      else {
        ppuVar12 = param_2;
        func_0x00010beb2660();
        _objc_release(puVar10);
        _objc_release(puVar7);
        if (((ulong)ppuVar12 & 1) != 0) goto LAB_1071d14f4;
      }
LAB_1071d17ac:
      puVar7 = ppuVar21[0x18d];
      func_0x00010bfa0ee0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      if ((int)ppuVar12 != 0) {
        _objc_release(puVar7);
LAB_1071d1814:
        puVar18 = ppuVar21[0x18d];
        func_0x00010c27fa80(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar18);
        func_0x00010c1d0640(param_7);
        ppuVar11 = (undefined **)param_2[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar18);
        ppuVar21 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar11);
        puVar7 = param_2[0xd];
        func_0x00010c269d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_9;
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_9;
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = param_10;
        func_0x00010bfa4340(param_10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c285ba0(puVar7);
        _objc_release(puVar18);
        _objc_release(ppuVar11);
        _objc_release(ppuVar12);
        _objc_release(puVar7);
        goto LAB_1071d03e8;
      }
      puVar10 = ppuVar21[0x18d];
      func_0x00010c27fa80(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) goto LAB_1071d1814;
      puVar7 = ppuVar21[0x18d];
      func_0x00010c08fb40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar12 != 0) {
        func_0x00010c1d0640(param_7);
        func_0x00010c1d0640(param_7);
        puVar18 = ppuVar11[0x197];
        func_0x00010bfae080(puVar18);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar21);
        _objc_release(puVar18);
        puVar18 = ppuVar11[0x197];
        func_0x00010bf4e920(puVar18);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar18);
        ppuVar21 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar12);
        if (ppuVar21 != (undefined **)0x0) goto LAB_1071d03e4;
        goto LAB_1071d03e8;
      }
      puVar7 = ppuVar21[0x18d];
      func_0x00010c0e93e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar20;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)ppuVar12 == 0) {
        puVar7 = ppuVar21[0x18d];
        func_0x00010c1323e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar20;
        func_0x00010c0720c0();
        _objc_release(puVar7);
        if ((int)ppuVar12 != 0) {
          puVar18 = ppuVar11[0x197];
          func_0x00010c134200(puVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = param_6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar18);
          puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          ppuVar11 = ppuVar21;
          _objc_opt_isKindOfClass(ppuVar21,puVar18);
          ppuVar12 = ppuVar21;
          if (((ulong)ppuVar11 & 1) == 0) {
            ppuVar12 = (undefined **)0x0;
          }
          _objc_retain(ppuVar12);
          _objc_release(ppuVar21);
          if (ppuVar12 == (undefined **)0x0) goto LAB_1071cfdf0;
          puVar10 = param_2[0xb];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar7 = puVar10;
          _objc_opt_isKindOfClass(puVar10,puVar18);
          puVar18 = puVar10;
          if (((ulong)puVar7 & 1) == 0) {
            puVar18 = (undefined *)0x0;
          }
          _objc_retain(puVar18);
          _objc_release(puVar10);
          param_2[7] = (undefined *)0x18;
          puVar14 = param_2[0xd];
          func_0x00010c269d40(puVar14);
          _objc_retainAutoreleasedReturnValue();
          param_2 = param_9;
          func_0x000107bfa524();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_9;
          func_0x00010bf454e0(param_9);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126c90c8;
          func_0x00010c132440();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = param_10;
          func_0x00010bfa4340(param_10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c285ba0(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar10);
          _objc_release(puVar7);
          _objc_release(ppuVar12);
          _objc_release(param_2);
          _objc_release(puVar14);
          _objc_release(puVar18);
          goto LAB_1071d0430;
        }
        puVar7 = ppuVar21[0x18d];
        func_0x00010bf8ac60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar20;
        func_0x00010c0720c0();
        _objc_release(puVar7);
        if ((int)ppuVar12 != 0) goto LAB_1071d0634;
        puVar7 = ppuVar21[0x18d];
        func_0x00010c1230a0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar20;
        func_0x00010c0720c0();
        if ((int)ppuVar12 != 0) {
          _objc_release(puVar7);
LAB_1071d1e98:
          puVar18 = ppuVar21[0x18d];
          func_0x00010c1230a0(puVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(puVar18);
          func_0x00010c1d0640(param_7);
          puVar18 = param_2[4];
          ppuVar21 = param_2;
          _objc_opt_class(param_2);
          func_0x00010bf04780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7dbc0(puVar18);
          _objc_release(ppuVar21);
          ppuVar11 = (undefined **)param_2[0xb];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar12 = ppuVar11;
          _objc_opt_isKindOfClass(ppuVar11,puVar18);
          ppuVar21 = ppuVar11;
          if (((ulong)ppuVar12 & 1) == 0) {
            ppuVar21 = (undefined **)0x0;
          }
          _objc_retain(ppuVar21);
          _objc_release(ppuVar11);
          puVar7 = param_2[0xd];
          func_0x00010c269d40(puVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_9;
          func_0x000107bfa524(param_9);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = param_9;
          func_0x00010bf454e0(param_9);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = param_10;
          func_0x00010bfa4340(param_10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c285ba0(puVar7);
          _objc_release(puVar18);
          _objc_release(ppuVar11);
          _objc_release(ppuVar12);
          _objc_release(puVar7);
          goto LAB_1071d0430;
        }
        puVar10 = ppuVar21[0x18d];
        func_0x00010c281f40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar20;
        func_0x00010c0720c0();
        _objc_release(puVar10);
        _objc_release(puVar7);
        if ((int)ppuVar12 != 0) goto LAB_1071d1e98;
        puVar7 = ppuVar21[0x18d];
        func_0x00010c08bc40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar20;
        func_0x00010c0720c0();
        _objc_release(puVar7);
        if ((int)ppuVar12 != 0) goto LAB_1071d12d8;
        puVar7 = ppuVar21[0x18d];
        func_0x00010c11e8e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar20;
        func_0x00010c0720c0();
        if ((int)ppuVar12 == 0) {
          puVar10 = ppuVar21[0x18d];
          func_0x00010c28ef60(puVar10);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar20;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          _objc_release(puVar7);
          if ((int)ppuVar12 != 0) goto LAB_1071d20d0;
          puVar7 = ppuVar21[0x18d];
          func_0x00010bf7f020(puVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar20;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          if ((int)ppuVar12 == 0) {
            puVar18 = ppuVar21[0x18d];
            func_0x00010c2620e0(puVar18);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar20;
            func_0x00010c0720c0();
            _objc_release(puVar18);
            if ((int)ppuVar12 == 0) {
              puVar18 = ppuVar21[0x18d];
              func_0x00010c0fe8a0(puVar18);
              _objc_retainAutoreleasedReturnValue();
              ppuVar21 = ppuVar20;
              func_0x00010c0720c0();
              _objc_release(puVar18);
              if ((int)ppuVar21 == 0) goto LAB_1071cfdf0;
            }
            else if (param_9 != (undefined **)0x0) {
              ppuVar21 = param_9;
              func_0x000107cb6b2c();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar21;
              func_0x000107cb65e8();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar12;
              func_0x00010c08fa60();
              if (ppuVar11 != (undefined **)0x0) {
                func_0x00010c1d0640(param_7);
              }
              _objc_release(ppuVar12);
              _objc_release(ppuVar21);
            }
            goto LAB_1071d0634;
          }
        }
        else {
          _objc_release(puVar7);
LAB_1071d20d0:
          puVar7 = ppuVar21[0x18d];
          func_0x00010c28ef60(puVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar20;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          if ((int)ppuVar21 != 0) {
            func_0x00010c1d0640(param_7);
          }
        }
        func_0x00010c1d0640(param_7);
        puVar7 = param_2[4];
        ppuVar21 = param_2;
        _objc_opt_class(param_2);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(puVar7);
        _objc_release(ppuVar21);
        ppuVar11 = (undefined **)param_2[0xb];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass(ppuVar11,puVar7);
        ppuVar21 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar21 = (undefined **)0x0;
        }
        _objc_retain(ppuVar21);
        _objc_release(ppuVar11);
        ppuVar12 = (undefined **)param_2[0xd];
        func_0x00010c269d40(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107bfa524(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf454e0(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(param_10);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1071d0dc8;
      }
      func_0x00010c1d0640(param_7);
      func_0x00010be15be0(param_2);
      func_0x00010be53780(param_2);
    }
    else {
      func_0x00010c1d0640(param_7);
      func_0x00010c1d0640(param_7);
      ppuVar21 = param_9;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c275280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar12;
      func_0x00010c08fa60();
      _objc_release(ppuVar12);
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar12 = ppuVar21;
        func_0x00010c275280(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar12;
        func_0x000107cb7e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_7);
        _objc_release(ppuVar11);
        _objc_release(ppuVar12);
LAB_1071d03e4:
        func_0x00010c1d0640(param_7);
      }
LAB_1071d03e8:
      puVar18 = param_2[4];
      ppuVar12 = param_2;
      _objc_opt_class(param_2);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(puVar18);
LAB_1071d0428:
      _objc_release(ppuVar12);
LAB_1071d0430:
      _objc_release(ppuVar21);
    }
LAB_1071cfdf0:
    _objc_release(ppuVar20);
    ppuVar21 = ppuStack_b0;
  } while( true );
}



/* Entry: 1071d235c; end: 1071d28b7; -[SCDiscoverFeedStoryLoggingOperaPlugin _fillContextAndLensInfoForExtraData:page:] */

void FUN_1071d235c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = uVar2;
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010befd0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010befd0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c096600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf62d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf62d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c25a6e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25b160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbafa0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (uVar8 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
    if (uVar9 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
    _objc_release(uVar2);
    if (uVar7 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar3);
    uVar2 = uVar4;
    func_0x00010bfd95a0();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar2 != 0) {
      uVar2 = uVar4;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar4;
      func_0x00010c0d3a00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0d3900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar4;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bfdb000();
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)uVar6 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        uVar6 = uVar4;
        func_0x00010c0d3a00();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c128040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c277e80();
        func_0x00010c14de00(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar6);
      }
      _objc_release(uVar2);
      func_0x00010c1d0640(param_3);
      func_0x00010c1d0640(param_3);
      func_0x00010c1d0640(param_3);
      _objc_release(puVar11);
      _objc_release(uVar5);
      _objc_release(puVar3);
    }
    uVar2 = uVar4;
    func_0x00010bf0f360();
    if (uVar2 != 0) {
      uVar2 = uVar4;
      func_0x00010bf0f340(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(uVar2);
    }
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d28b8; end: 1071d28ff; -[SCDiscoverFeedStoryLoggingOperaPlugin _usesRetainedSpotlightSessionHandling] */

undefined8 FUN_1071d28b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f4e0a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1071d2900; end: 1071d292b; -[SCDiscoverFeedStoryLoggingOperaPlugin _markRetainedSpotlightViewingSessionStarted] */

void FUN_1071d2900(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  func_0x00010bee73a0();
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x9b) = 1;
  }
  return;
}



/* Entry: 1071d292c; end: 1071d2957; -[SCDiscoverFeedStoryLoggingOperaPlugin _markRetainedSpotlightViewingSessionFinished] */

void FUN_1071d292c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  func_0x00010bee73a0();
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x9b) = 0x100;
  }
  return;
}



/* Entry: 1071d2958; end: 1071d29a3; -[SCDiscoverFeedStoryLoggingOperaPlugin _canFinishRetainedSpotlightViewingSession] */

byte FUN_1071d2958(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010bee73a0();
  if ((int)lVar1 == 0) {
    bVar2 = 1;
  }
  else if (*(char *)(param_1 + 0x9b) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x9c) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 1071d29a4; end: 1071d2a8b; -[SCDiscoverFeedStoryLoggingOperaPlugin _backfillRetainedSpotlightStartTimestampsIfNeeded:shouldSeedMediaStart:] */

void FUN_1071d29a4(int param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bee73a0();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42498);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f42498);
    }
    if (param_4 != 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f424b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f424b8)
        ;
      }
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d2a8c; end: 1071d2c8b; -[SCDiscoverFeedStoryLoggingOperaPlugin teardown] */

void FUN_1071d2a8c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  ulong param_5,ulong param_6,long param_7)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined **ppuVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_e8;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_1;
  if ((((*(long *)(param_1 + 0xa0) == 0) || (param_1[0xd8] == '\x01')) && ((param_1[0x9a] & 1) == 0)
      ) && (func_0x00010bdd9ae0(), (int)puVar6 != 0)) {
    puVar29 = *(undefined **)(param_1 + 0x58);
    puVar7 = puVar29;
    if (puVar29 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    param_5 = 1;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    if (puVar29 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010c1d0640(puVar6);
    }
    else {
      func_0x00010c27dd80();
      func_0x000107af8f48();
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x28));
      func_0x000107af8f6c();
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar7);
    param_4 = &PTR____CFConstantStringClassReference_110eb5938;
    func_0x00010c1d0640(puVar6);
    param_3 = puVar6;
    func_0x00010be53780(param_1);
    func_0x00010be5d760(param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar9 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar10 = uVar28;
  _objc_opt_isKindOfClass(uVar28,puVar7);
  uVar1 = uVar28;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain();
  _objc_release(uVar28);
  puVar7 = PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b2348;
  func_0x00010c0c5ec0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar13 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar29);
  uVar10 = uVar12;
  if ((uVar13 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain();
  _objc_release(uVar12);
  uVar13 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar14 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar29);
  uVar12 = uVar13;
  if ((uVar14 & 1) == 0) {
    uVar12 = 0;
  }
  _objc_retain(uVar12);
  _objc_release(uVar13);
  uVar13 = uVar12;
  func_0x00010bf1f3c0();
  _objc_release(uVar12);
  puVar29 = PTR_PTR_1126c9a78;
  func_0x00010bef5320(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar15 = uVar14;
  _objc_opt_isKindOfClass(uVar14,puVar29);
  uVar12 = uVar14;
  if ((uVar15 & 1) == 0) {
    uVar12 = 0;
  }
  _objc_retain();
  _objc_release(uVar14);
  puVar29 = PTR_PTR_1126b2d20;
  func_0x00010beeebc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar16 = uVar15;
  _objc_opt_isKindOfClass(uVar15,puVar29);
  uVar14 = uVar15;
  if ((uVar16 & 1) == 0) {
    uVar14 = 0;
  }
  _objc_retain(uVar14);
  _objc_release(uVar15);
  puVar29 = PTR_PTR_1126b2d20;
  func_0x00010beeea00(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar17 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar29);
  uVar15 = uVar16;
  if ((uVar17 & 1) == 0) {
    uVar15 = 0;
  }
  _objc_retain();
  _objc_release(uVar16);
  if (uVar14 != 0) {
    func_0x00010c1d0640(param_3);
  }
  if (uVar15 != 0) {
    func_0x00010c1d0640(param_3);
  }
  uVar17 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126c9448;
  _objc_opt_class(PTR_PTR_1126c9448);
  uVar18 = uVar17;
  _objc_opt_isKindOfClass(uVar17,puVar29);
  uVar16 = uVar17;
  if ((uVar18 & 1) == 0) {
    uVar16 = 0;
  }
  _objc_retain(uVar16);
  _objc_release(uVar17);
  uVar18 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar16 != 0) && (uVar18 == 0)) {
    func_0x00010bf125a0(uVar17);
    func_0x00010c0df6e0(puVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar29);
    if (puVar6[0x110] == '\x01') {
      uVar18 = uVar17;
      func_0x00010bef0a00();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010c08fa60();
      _objc_release(uVar18);
      if (uVar19 != 0) {
        func_0x00010bef0a00();
        _objc_retainAutoreleasedReturnValue();
        uVar27 = *(undefined8 *)(puVar6 + 0x118);
        *(ulong *)(puVar6 + 0x118) = uVar17;
        _objc_release(uVar27);
        func_0x00010c1d0640(param_3);
      }
    }
  }
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar29);
  uVar18 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126c9a80;
  _objc_opt_class(PTR_PTR_1126c9a80);
  uVar19 = uVar18;
  _objc_opt_isKindOfClass(uVar18,puVar29);
  uVar17 = uVar18;
  if ((uVar19 & 1) == 0) {
    uVar17 = 0;
  }
  _objc_retain();
  _objc_release(uVar18);
  if (uVar1 == 0) {
    if (param_7 != 0) {
      lVar26 = param_7;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar26;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar26);
      _objc_retain(puVar7);
      if (lVar25 == 0) {
        _objc_release(puVar7);
      }
      else {
        lVar21 = lVar25;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        lVar26 = lVar21;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        while (lVar26 != 0) {
          lVar30 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar21);
            }
            lVar31 = *(long *)(lVar30 * 8);
            lVar22 = lVar31;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            lVar23 = lVar22;
            func_0x00010c0720c0();
            _objc_release(lVar22);
            if ((int)lVar23 != 0) {
              _objc_retain(lVar31);
              goto LAB_1071d3354;
            }
            lVar30 = lVar30 + 1;
          } while (lVar26 != lVar30);
          lVar26 = lVar21;
          func_0x00010bf52a60();
        }
        lVar31 = 0;
LAB_1071d3354:
        _objc_release(lVar21);
        _objc_release(puVar7);
        puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar31 != 0) {
          func_0x00010c0c6ce0(lVar31);
          func_0x00010c0df760(puVar29);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_3);
          _objc_release(puVar29);
          _objc_release(lVar31);
        }
      }
      _objc_release(lVar25);
    }
  }
  else {
    uVar19 = uVar28;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c27dd80();
    if (uVar20 != 1) {
      func_0x00010c0c5340(uVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      _objc_release(uVar28);
    }
    _objc_release(uVar19);
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar29);
  }
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_1071d3e58;
  uStack_148 = 0x1071d3e68;
  uStack_140 = 0;
  uVar28 = uVar1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar28;
  func_0x00010c08fa60();
  _objc_release(uVar28);
  if (uVar19 != 0) {
    uVar28 = uVar1;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = puStack_160[5];
    puStack_160[5] = uVar28;
    _objc_release(uVar27);
  }
  puVar29 = puVar7;
  func_0x00010c08fa60();
  puVar5 = puStack_160;
  if (puVar29 == (undefined *)0x0) {
    puVar29 = puVar6;
    func_0x00010beb6ac0();
    if ((int)puVar29 != 0) {
      uVar19 = uVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010010fab4();
      uVar28 = uVar19;
      if ((int)uVar20 == 0) {
        uVar28 = 0;
      }
      _objc_retain(uVar28);
      _objc_release(uVar19);
      uVar19 = uVar28;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c08fa60();
      _objc_release(uVar19);
      if (uVar20 != 0) {
        uVar19 = uVar28;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar27 = puStack_160[5];
        puStack_160[5] = uVar19;
        _objc_release(uVar27);
      }
      goto LAB_1071d3468;
    }
  }
  else {
    _objc_retain(puVar7);
    uVar28 = puVar5[5];
    puVar5[5] = puVar7;
LAB_1071d3468:
    _objc_release(uVar28);
  }
  if ((int)uVar13 == 0) {
    if (uVar17 != 0) {
      func_0x00010c0bebc0(uVar18);
    }
  }
  else {
    puVar29 = PTR_PTR_1126c9460;
    func_0x00010c29ae40(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar29);
    bVar3 = false;
    if ((int)ppuVar24 == 0) goto LAB_1071d3598;
    puVar29 = PTR_PTR_1126c9cf8;
    func_0x00010bfe5ec0(PTR_PTR_1126c9cf8);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
    puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar18 = uVar13;
    _objc_opt_isKindOfClass(uVar13,puVar29);
    uVar28 = uVar13;
    if ((uVar18 & 1) == 0) {
      uVar28 = 0;
    }
    _objc_retain(uVar28);
    _objc_release(uVar13);
    uVar13 = uVar28;
    func_0x00010c08fa60();
    puVar5 = puStack_160;
    if (uVar13 != 0) {
      _objc_retain(uVar28);
      uVar27 = puVar5[5];
      puVar5[5] = uVar28;
      _objc_release(uVar27);
    }
    _objc_release(uVar28);
  }
  bVar3 = true;
LAB_1071d3598:
  uVar28 = uVar12;
  func_0x00010c08fa60();
  puVar5 = puStack_160;
  if (uVar28 != 0) {
    _objc_retain(uVar12);
    uVar27 = puVar5[5];
    puVar5[5] = uVar12;
    _objc_release(uVar27);
  }
  lVar26 = puStack_160[5];
  func_0x00010c08fa60();
  if (lVar26 != 0) {
    func_0x00010c1d0640(param_3);
  }
  if (uVar11 != 0) {
    func_0x00010c1d0640(param_3);
  }
  uVar28 = uVar10;
  func_0x00010c08fa60();
  if (uVar28 != 0) {
    func_0x00010c1d0640(param_3);
  }
  if (puVar6[0x31] == '\x01') {
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar29);
    puVar6[0x31] = 0;
  }
  if (bVar3) {
    func_0x00010c1d0640(param_3);
  }
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(puVar6 + 0x10) != 0) {
    if (puVar6[0x99] == '\x01') {
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar29);
    }
    else if (*(long *)(puVar6 + 0x40) == -1) {
      func_0x00010c27dd80();
      func_0x000107af8f48();
      func_0x00010c0df780(puVar29);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar29);
      uVar27 = *(undefined8 *)(puVar6 + 0x10);
      func_0x00010c27dd80();
      func_0x000107af8f48();
      *(undefined8 *)(puVar6 + 0xa8) = uVar27;
    }
    else {
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar29);
      *(undefined8 *)(puVar6 + 0xa8) = *(undefined8 *)(puVar6 + 0x40);
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
    }
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(*(undefined8 *)(puVar6 + 0x10));
    func_0x000107af8f6c();
    func_0x00010c0df780(puVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar29);
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar26 = *(long *)(puVar6 + 0xc0);
    if (puVar6[0x99] == '\x01') {
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar29);
    }
    else {
      uVar27 = *(undefined8 *)(puVar6 + 0x10);
      func_0x00010c27dd80();
      cVar2 = puVar6[0xda];
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x000107cd46f8(uVar27,lVar26 != 0);
      if (cVar2 == '\x01') {
        puVar8 = PTR_PTR_1126b2330;
        func_0x00010c0e9c40(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = param_4;
        func_0x00010c0720c0();
        if ((int)ppuVar24 != 0) {
          func_0x0001071cc200();
        }
        _objc_release(puVar8);
      }
      _objc_release(param_5);
      _objc_release(param_4);
      func_0x00010c0df780(puVar29);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar29);
      uVar27 = *(undefined8 *)(puVar6 + 0x10);
      func_0x00010c27dd80();
      func_0x000107cd46f8();
      *(undefined8 *)(puVar6 + 0xb0) = uVar27;
    }
    puVar29 = PTR_PTR_1126ca2c0;
    func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar29);
    if ((int)ppuVar24 != 0) {
      func_0x00010c1d0640(param_3);
      func_0x00010c1d0640(param_3);
    }
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(*(undefined8 *)(puVar6 + 0x10));
    func_0x000107af8f90();
    func_0x00010c0df780(puVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar29);
    if (*(long *)(puVar6 + 0x38) != -1) {
      puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar29);
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
    }
  }
  uVar28 = uVar12;
  func_0x00010c08fa60();
  puVar6[0x99] = uVar28 != 0;
  puVar29 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar29);
  if ((int)ppuVar24 != 0) {
    func_0x00010c1d0640(param_3);
  }
  uVar28 = uVar1;
  func_0x00010bf0e700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0c1320(uVar28);
  _objc_release(uVar28);
  uVar28 = uVar1;
  func_0x00010bfeb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar28 != 0) {
    uVar28 = uVar1;
    func_0x00010bfeb4a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(uVar28);
  }
  lVar26 = puStack_160[5];
  func_0x00010c08fa60();
  if (lVar26 != 0) {
    puVar29 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar29 == (undefined *)0x0) {
      lVar25 = *(long *)(puVar6 + 0x168);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar25;
      func_0x00010c08fa60();
      if (lVar26 != 0) {
        puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_3);
        _objc_release(puVar29);
      }
      _objc_release(lVar25);
    }
  }
  func_0x00010be15be0(puVar6);
  _objc_retain(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  _objc_release(param_3);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    lVar26 = 8;
    __Block_object_dispose(&uStack_168);
    __Unwind_Resume();
    param_4[5] = *(undefined **)(lVar26 + 0x28);
    *(undefined8 *)(lVar26 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1071d2c8c; end: 1071d3e57; -[SCDiscoverFeedStoryLoggingOperaPlugin _extraDataDictForNewViewSessionWithExtraData:event:page:params:discoverFeedStory:] */

void FUN_1071d2c8c(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  ulong param_6,long param_7)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar6 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar8 = uVar27;
  _objc_opt_isKindOfClass(uVar27,puVar7);
  uVar1 = uVar27;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain();
  _objc_release(uVar27);
  puVar7 = PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2348;
  func_0x00010c0c5ec0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar10);
  uVar8 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain();
  _objc_release(uVar11);
  uVar12 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar13 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar10);
  uVar11 = uVar12;
  if ((uVar13 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain(uVar11);
  _objc_release(uVar12);
  uVar12 = uVar11;
  func_0x00010bf1f3c0();
  _objc_release(uVar11);
  puVar10 = PTR_PTR_1126c9a78;
  func_0x00010bef5320(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar14 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar10);
  uVar11 = uVar13;
  if ((uVar14 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain();
  _objc_release(uVar13);
  puVar10 = PTR_PTR_1126b2d20;
  func_0x00010beeebc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar15 = uVar14;
  _objc_opt_isKindOfClass(uVar14,puVar10);
  uVar13 = uVar14;
  if ((uVar15 & 1) == 0) {
    uVar13 = 0;
  }
  _objc_retain(uVar13);
  _objc_release(uVar14);
  puVar10 = PTR_PTR_1126b2d20;
  func_0x00010beeea00(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar16 = uVar15;
  _objc_opt_isKindOfClass(uVar15,puVar10);
  uVar14 = uVar15;
  if ((uVar16 & 1) == 0) {
    uVar14 = 0;
  }
  _objc_retain();
  _objc_release(uVar15);
  if (uVar13 != 0) {
    func_0x00010c1d0640(param_3);
  }
  if (uVar14 != 0) {
    func_0x00010c1d0640(param_3);
  }
  uVar16 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9448;
  _objc_opt_class(PTR_PTR_1126c9448);
  uVar17 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar10);
  uVar15 = uVar16;
  if ((uVar17 & 1) == 0) {
    uVar15 = 0;
  }
  _objc_retain(uVar15);
  _objc_release(uVar16);
  uVar17 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar15 != 0) && (uVar17 == 0)) {
    func_0x00010bf125a0(uVar16);
    func_0x00010c0df6e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar10);
    if (*(char *)(param_1 + 0x110) == '\x01') {
      uVar17 = uVar16;
      func_0x00010bef0a00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c08fa60();
      _objc_release(uVar17);
      if (uVar18 != 0) {
        func_0x00010bef0a00();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = *(undefined8 *)(param_1 + 0x118);
        *(ulong *)(param_1 + 0x118) = uVar16;
        _objc_release(uVar26);
        func_0x00010c1d0640(param_3);
      }
    }
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar10);
  uVar17 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9a80;
  _objc_opt_class(PTR_PTR_1126c9a80);
  uVar18 = uVar17;
  _objc_opt_isKindOfClass(uVar17,puVar10);
  uVar16 = uVar17;
  if ((uVar18 & 1) == 0) {
    uVar16 = 0;
  }
  _objc_retain();
  _objc_release(uVar17);
  if (uVar1 == 0) {
    if (param_7 != 0) {
      lVar23 = param_7;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar23;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar23);
      _objc_retain(puVar7);
      if (lVar25 == 0) {
        _objc_release(puVar7);
      }
      else {
        lVar20 = lVar25;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = lVar20;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        while (lVar23 != 0) {
          lVar28 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar20);
            }
            lVar29 = *(long *)(lVar28 * 8);
            lVar21 = lVar29;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            lVar22 = lVar21;
            func_0x00010c0720c0();
            _objc_release(lVar21);
            if ((int)lVar22 != 0) {
              _objc_retain(lVar29);
              goto LAB_1071d3354;
            }
            lVar28 = lVar28 + 1;
          } while (lVar23 != lVar28);
          lVar23 = lVar20;
          func_0x00010bf52a60();
        }
        lVar29 = 0;
LAB_1071d3354:
        _objc_release(lVar20);
        _objc_release(puVar7);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar29 != 0) {
          func_0x00010c0c6ce0(lVar29);
          func_0x00010c0df760(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_3);
          _objc_release(puVar10);
          _objc_release(lVar29);
        }
      }
      _objc_release(lVar25);
    }
  }
  else {
    uVar18 = uVar27;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c27dd80();
    if (uVar19 != 1) {
      func_0x00010c0c5340(uVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      _objc_release(uVar27);
    }
    _objc_release(uVar18);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar10);
  }
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1071d3e58;
  uStack_e8 = 0x1071d3e68;
  uStack_e0 = 0;
  uVar27 = uVar1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar27;
  func_0x00010c08fa60();
  _objc_release(uVar27);
  if (uVar18 != 0) {
    uVar27 = uVar1;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = puStack_100[5];
    puStack_100[5] = uVar27;
    _objc_release(uVar26);
  }
  puVar10 = puVar7;
  func_0x00010c08fa60();
  puVar5 = puStack_100;
  if (puVar10 == (undefined *)0x0) {
    lVar23 = param_1;
    func_0x00010beb6ac0();
    if ((int)lVar23 != 0) {
      uVar18 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010010fab4();
      uVar27 = uVar18;
      if ((int)uVar19 == 0) {
        uVar27 = 0;
      }
      _objc_retain(uVar27);
      _objc_release(uVar18);
      uVar18 = uVar27;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010c08fa60();
      _objc_release(uVar18);
      if (uVar19 != 0) {
        uVar18 = uVar27;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = puStack_100[5];
        puStack_100[5] = uVar18;
        _objc_release(uVar26);
      }
      goto LAB_1071d3468;
    }
  }
  else {
    _objc_retain(puVar7);
    uVar27 = puVar5[5];
    puVar5[5] = puVar7;
LAB_1071d3468:
    _objc_release(uVar27);
  }
  if ((int)uVar12 == 0) {
    if (uVar16 != 0) {
      func_0x00010c0bebc0(uVar17);
    }
  }
  else {
    puVar10 = PTR_PTR_1126c9460;
    func_0x00010c29ae40(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    bVar3 = false;
    if ((int)lVar23 == 0) goto LAB_1071d3598;
    puVar10 = PTR_PTR_1126c9cf8;
    func_0x00010bfe5ec0(PTR_PTR_1126c9cf8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar17 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar10);
    uVar27 = uVar12;
    if ((uVar17 & 1) == 0) {
      uVar27 = 0;
    }
    _objc_retain(uVar27);
    _objc_release(uVar12);
    uVar12 = uVar27;
    func_0x00010c08fa60();
    puVar5 = puStack_100;
    if (uVar12 != 0) {
      _objc_retain(uVar27);
      uVar26 = puVar5[5];
      puVar5[5] = uVar27;
      _objc_release(uVar26);
    }
    _objc_release(uVar27);
  }
  bVar3 = true;
LAB_1071d3598:
  uVar27 = uVar11;
  func_0x00010c08fa60();
  puVar5 = puStack_100;
  if (uVar27 != 0) {
    _objc_retain(uVar11);
    uVar26 = puVar5[5];
    puVar5[5] = uVar11;
    _objc_release(uVar26);
  }
  lVar23 = puStack_100[5];
  func_0x00010c08fa60();
  if (lVar23 != 0) {
    func_0x00010c1d0640(param_3);
  }
  if (uVar9 != 0) {
    func_0x00010c1d0640(param_3);
  }
  uVar27 = uVar8;
  func_0x00010c08fa60();
  if (uVar27 != 0) {
    func_0x00010c1d0640(param_3);
  }
  if (*(char *)(param_1 + 0x31) == '\x01') {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar10);
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  if (bVar3) {
    func_0x00010c1d0640(param_3);
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x99) == '\x01') {
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar10);
    }
    else if (*(long *)(param_1 + 0x40) == -1) {
      func_0x00010c27dd80();
      func_0x000107af8f48();
      func_0x00010c0df780(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar10);
      uVar26 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c27dd80();
      func_0x000107af8f48();
      *(undefined8 *)(param_1 + 0xa8) = uVar26;
    }
    else {
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar10);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x10));
    func_0x000107af8f6c();
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar23 = *(long *)(param_1 + 0xc0);
    if (*(char *)(param_1 + 0x99) == '\x01') {
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar10);
    }
    else {
      uVar26 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c27dd80();
      cVar2 = *(char *)(param_1 + 0xda);
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x000107cd46f8(uVar26,lVar23 != 0);
      if (cVar2 == '\x01') {
        puVar24 = PTR_PTR_1126b2330;
        func_0x00010c0e9c40(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        lVar23 = param_4;
        func_0x00010c0720c0();
        if ((int)lVar23 != 0) {
          func_0x0001071cc200();
        }
        _objc_release(puVar24);
      }
      _objc_release(param_5);
      _objc_release(param_4);
      func_0x00010c0df780(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar10);
      uVar26 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c27dd80();
      func_0x000107cd46f8();
      *(undefined8 *)(param_1 + 0xb0) = uVar26;
    }
    puVar10 = PTR_PTR_1126ca2c0;
    func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if ((int)lVar23 != 0) {
      func_0x00010c1d0640(param_3);
      func_0x00010c1d0640(param_3);
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x10));
    func_0x000107af8f90();
    func_0x00010c0df780(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar10);
    if (*(long *)(param_1 + 0x38) != -1) {
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar10);
      *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
    }
  }
  uVar27 = uVar11;
  func_0x00010c08fa60();
  *(bool *)(param_1 + 0x99) = uVar27 != 0;
  puVar10 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar10);
  if ((int)lVar23 != 0) {
    func_0x00010c1d0640(param_3);
  }
  uVar27 = uVar1;
  func_0x00010bf0e700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0c1320(uVar27);
  _objc_release(uVar27);
  uVar27 = uVar1;
  func_0x00010bfeb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar27 != 0) {
    uVar27 = uVar1;
    func_0x00010bfeb4a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(uVar27);
  }
  lVar23 = puStack_100[5];
  func_0x00010c08fa60();
  if (lVar23 != 0) {
    lVar23 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar23 == 0) {
      lVar25 = *(long *)(param_1 + 0x168);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar25;
      func_0x00010c08fa60();
      if (lVar23 != 0) {
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_3);
        _objc_release(puVar10);
      }
      _objc_release(lVar25);
    }
  }
  func_0x00010be15be0(param_1);
  _objc_retain(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  _objc_release(param_3);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    lVar23 = 8;
    __Block_object_dispose(&uStack_108);
    __Unwind_Resume();
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar23 + 0x28);
    *(undefined8 *)(lVar23 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1071d3e58; end: 1071d3e73;  */

void FUN_1071d3e58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1071d3e74; end: 1071d3ef7;  */

void FUN_1071d3e74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071d3ef8; end: 1071d3f07;  */

void FUN_1071d3ef8(void)

{
  return;
}



/* Entry: 1071d3f08; end: 1071d4237;  */

void FUN_1071d3f08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long in_x5;
  
  func_0x000107cb65e8();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = in_x5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5b080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x000107cb6690(lVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = lVar2;
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    lVar1 = lVar2;
    func_0x00010bf28980(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cb6858();
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar6);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf28980();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x000107cb68ac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar7;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(lVar7);
  }
  lVar1 = lVar2;
  func_0x00010c27ba00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c27bb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar7;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 1071d4238; end: 1071d423b;  */

void FUN_1071d4238(void)

{
  return;
}



/* Entry: 1071d423c; end: 1071d4243; -[SCDiscoverFeedStoryLoggingOperaPlugin _sourceForCurrentEvent:] */

undefined8 FUN_1071d423c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1071d4244; end: 1071d449f; -[SCDiscoverFeedStoryLoggingOperaPlugin _logFinishViewingSessionWithExtraData:] */

undefined ** FUN_1071d4244(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar3);
  func_0x00010be15e00(param_1);
  if (*(long *)(param_1 + 0xe8) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined **)(param_1 + 0xf0) = puVar3;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar7);
    _objc_release(lVar2);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  ppuVar9 = &PTR____CFConstantStringClassReference_110f41558;
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar7);
  _objc_release(lVar2);
  if (*(long *)(param_1 + 0xf0) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    ppuVar9 = &PTR____CFConstantStringClassReference_110f417d8;
    lVar2 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar7);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    _objc_release(uVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  puVar3 = param_3[0x1c];
  func_0x000108f4b260();
  if (puVar3 == (undefined *)0x0) {
    ppuVar4 = ppuVar9;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar3 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    ppuVar5 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar3);
    ppuVar4 = ppuVar8;
    if (((ulong)ppuVar5 & 1) == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar8);
    iVar1 = (int)param_3[0x1c];
    func_0x000108f48110();
    if ((iVar1 == 0) || (ppuVar8 = ppuVar4, func_0x00010853a5d4(), ((ulong)ppuVar8 & 1) != 0)) {
      ppuVar8 = (undefined **)0x1;
    }
    else {
      ppuVar8 = ppuVar4;
      func_0x00010853a378(ppuVar4);
    }
    _objc_release(ppuVar4);
  }
  else {
    ppuVar8 = (undefined **)0x1;
  }
  _objc_release(ppuVar9);
  return ppuVar8;
}



/* Entry: 1071d44a0; end: 1071d4587; -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldAllowUnsubscribeEmissionFromPage:] */

ulong FUN_1071d44a0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0xe0);
  func_0x000108f4b260();
  if (lVar2 == 0) {
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar5 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar3 = uVar6;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    iVar1 = (int)*(undefined8 *)(param_1 + 0xe0);
    func_0x000108f48110();
    if ((iVar1 == 0) || (uVar6 = uVar3, func_0x00010853a5d4(), (uVar6 & 1) != 0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = uVar3;
      func_0x00010853a378(uVar3);
    }
    _objc_release(uVar3);
  }
  else {
    uVar6 = 1;
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1071d4588; end: 1071d476f; -[SCDiscoverFeedStoryLoggingOperaPlugin _insertUpNextLoggingInfoForStory:extraData:triggeringStoryIndex:currentStoryIndex:] */

void FUN_1071d4588(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0ea200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c247d20();
  _objc_release(lVar1);
  if (lVar2 < 5) {
    if (lVar2 != 2) {
      if (lVar2 != 4) goto LAB_1071d465c;
      func_0x00010c1d0640(param_4,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110f42278);
    }
    ppuVar5 = &PTR_PTR_110ca8438;
  }
  else {
    if (lVar2 != 5) {
      if (lVar2 != 6) goto LAB_1071d465c;
      func_0x00010c1d0640(param_4,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110f42278);
    }
    ppuVar5 = &PTR_PTR_110ca8448;
  }
  func_0x00010c1d0640(param_4,param_2,PTR____kCFBooleanTrue_11034ab68,*ppuVar5);
LAB_1071d465c:
  lVar1 = param_3;
  func_0x00010c0ea200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c123220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_3;
    func_0x00010c0ea200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c123220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb6298);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0ea200();
    _objc_retainAutoreleasedReturnValue();
    param_5 = lVar1;
    func_0x00010c123240();
    _objc_release(lVar1);
  }
  if ((param_6 != 0x7fffffffffffffff) && (param_5 != 0x7fffffffffffffff)) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5 - param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,puVar4,&PTR____CFConstantStringClassReference_110f422b8);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d4770; end: 1071d4817; -[SCDiscoverFeedStoryLoggingOperaPlugin _insertVirtualSectionLoggingInfoForId:extraData:] */

void FUN_1071d4770(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    _objc_retain(param_3);
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110f433f8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (lVar1 != 0) {
      func_0x00010bef7f60(param_4,param_2,lVar1);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071d4818; end: 1071d495f; -[SCDiscoverFeedStoryLoggingOperaPlugin _announceFSCVS] */

void FUN_1071d4818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((*(char *)(param_1 + 0x120) == '\x01') && (*(long *)(param_1 + 0x128) != 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c27dd80();
    if (lVar2 - 2U < 0x13) {
      uVar8 = *(undefined8 *)(&UNK_10de1ff48 + (lVar2 - 2U) * 8);
    }
    else {
      uVar8 = 0xffffffffffffffff;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x128);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c067fc0(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010bfa4340(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x108);
    uVar5 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf044a0(uVar6,param_2,uVar7,lVar2,uVar3,0,uVar1,uVar4,0x1a,5,uVar8,uVar9,uVar5,
                        *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150));
    _objc_release(uVar5);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1071d4960; end: 1071d49f7; -[SCDiscoverFeedStoryLoggingOperaPlugin _fillSubtitlesFieldsWhenFinishViewSession:] */

void FUN_1071d4960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x110))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f43698);
  _objc_release(puVar1);
  if (*(char *)(param_1 + 0x110) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x118);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c1d0640(param_3,param_2,*(undefined8 *)(param_1 + 0x118),
                          &PTR____CFConstantStringClassReference_110f436d8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d49f8; end: 1071d4b83; -[SCDiscoverFeedStoryLoggingOperaPlugin _calculateMediaAvailableAtStartCount] */

void FUN_1071d49f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (*(char *)(param_1 + 0x120) == '\x01') {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1071d4b84;
    puStack_60 = &UNK_1109923f8;
    lVar4 = lVar3;
    lStack_58 = param_1;
    func_0x000100504554();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x150);
      *(undefined ***)(param_1 + 0x150) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca900;
      _objc_release(uVar5);
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010bf00aa0(uVar5);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1071d4b84; end: 1071d4c93;  */

void FUN_1071d4b84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar2 = lVar2 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x000107d005a8(), lVar2 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071d4c94; end: 1071d4ddf; -[SCDiscoverFeedStoryLoggingOperaPlugin _calculateMediaAvailableAtStartCount:] */

void FUN_1071d4c94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x150);
    *(undefined ***)(param_1 + 0x150) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca900;
  }
  else {
    lVar2 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110992428);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf170e0(uVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1071d4de0; end: 1071d4e7f;  */

void FUN_1071d4de0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000108f4bad8();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107d03060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1071d4e80; end: 1071d4fe7;  */

void FUN_1071d4e80(long param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = param_2;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_d8;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar4 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = 0;
      do {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar3);
          }
          iVar2 = (int)*(undefined8 *)(lVar9 * 8);
          func_0x00010c067ec0();
          uVar8 = (uint)param_3;
          if (0 < iVar2) {
            uVar8 = uVar8 + 1;
          }
          param_3 = (ulong)uVar8;
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        param_4 = auStack_d8;
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x150);
    *(undefined **)(param_1 + 0x150) = puVar5;
    _objc_release(uVar7);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar5 = PTR_PTR_1126b5cb8;
    func_0x00010c068440(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (uVar6 != 0) {
      puVar5 = PTR_PTR_1126b5cb8;
      func_0x00010c068440(PTR_PTR_1126b5cb8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1071d4fe8; end: 1071d50c7; -[SCDiscoverFeedStoryLoggingOperaPlugin _setInteractionContextWithParams:extraData:] */

void FUN_1071d4fe8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5cb8;
  func_0x00010c068440(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126b5cb8;
    func_0x00010c068440(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,lVar2,&PTR____CFConstantStringClassReference_110f41cd8);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d50c8; end: 1071d51a7; -[SCDiscoverFeedStoryLoggingOperaPlugin _setGestureTypeIfAvailableWithParams:extraData:] */

void FUN_1071d50c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5cb8;
  func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126b5cb8;
    func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4,param_2,lVar2,&PTR____CFConstantStringClassReference_110ed79b8);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d51a8; end: 1071d52f3; -[SCDiscoverFeedStoryLoggingOperaPlugin .cxx_destruct] */

void FUN_1071d51a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1071d52f4; end: 1071d5363; -[SCFullScreenViewContentStoryVisibility initWithItemType:itemTypeSpecific:] */

long FUN_1071d52f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bfee200();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1071d5364; end: 1071d537f; -[SCFullScreenViewContentStoryVisibility registerStoryWillPlay] */

void FUN_1071d5364(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 1071d5380; end: 1071d5393; -[SCFullScreenViewContentStoryVisibility registerStoryDidPlay] */

void FUN_1071d5380(long param_1)

{
  if (0 < *(long *)(param_1 + 0x18)) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  }
  return;
}



/* Entry: 1071d5394; end: 1071d53a3; -[SCFullScreenViewContentStoryVisibility registerStorySkippedOnSpinner] */

void FUN_1071d5394(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 1071d53a4; end: 1071d5533; -[SCFullScreenViewContentStoryVisibility generateLoggingDictionary] */

undefined * FUN_1071d53a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ea1ad8;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bb14c74();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ea1af8;
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar2 = puVar7;
  lStack_80 = lVar1;
  if (puVar7 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ea1b18;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar2;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ea1b38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ea1b58;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar4;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_80,&ppuStack_a8,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  return *(undefined **)(lVar1 + 8);
}



/* Entry: 1071d5534; end: 1071d553b; -[SCFullScreenViewContentStoryVisibility itemType] */

undefined8 FUN_1071d5534(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1071d553c; end: 1071d5543; -[SCFullScreenViewContentStoryVisibility itemTypeSpecific] */

undefined8 FUN_1071d553c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071d5544; end: 1071d554b; -[SCFullScreenViewContentStoryVisibility numberOfStoriesNeverPlayed] */

undefined8 FUN_1071d5544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1071d554c; end: 1071d5553; -[SCFullScreenViewContentStoryVisibility numberOfStoriesSkippedOnSpinner] */

undefined8 FUN_1071d554c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1071d5554; end: 1071d555b; -[SCFullScreenViewContentStoryVisibility totalNumberOfStories] */

undefined8 FUN_1071d5554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1071d555c; end: 1071d5567; -[SCFullScreenViewContentStoryVisibility .cxx_destruct] */

void FUN_1071d555c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1071d5568; end: 1071d55cb; -[SCFullscreenContentViewAbandonmentTracker init] */

undefined1 * FUN_1071d5568(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8bd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1071d55cc; end: 1071d55fb; -[SCFullscreenContentViewAbandonmentTracker registerStoryWillDisplayWithItemType:itemTypeSpecific:] */

void FUN_1071d55cc(undefined8 param_1)

{
  func_0x00010bdf0da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1271c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071d55fc; end: 1071d5683; -[SCFullscreenContentViewAbandonmentTracker registerStoryPlaybackStartedWithItemType:itemTypeSpecific:] */

void FUN_1071d55fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  func_0x00010bdf0da0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c127120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071d5684; end: 1071d56bb; -[SCFullscreenContentViewAbandonmentTracker registerStoryStoppedPlayingWithItemType:itemTypeSpecific:spinnerIsVisible:] */

void FUN_1071d5684(undefined8 param_1)

{
  int in_w4;
  
  if (in_w4 != 0) {
    func_0x00010bdf0da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071d56bc; end: 1071d56ef; -[SCFullscreenContentViewAbandonmentTracker registerFeedPageOpen] */

void FUN_1071d56bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071d56f0; end: 1071d5773; -[SCFullscreenContentViewAbandonmentTracker registerFeedPageClosedSpinnerWasVisible:isMidPlayback:] */

void FUN_1071d56f0(long param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  *(char *)(param_1 + 9) = (char)param_3;
  *(undefined1 *)(param_1 + 10) = param_4;
  if (param_3 != 0) {
    func_0x00010bdf0da0(param_1,param_2,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071d5774; end: 1071d57a7; -[SCFullscreenContentViewAbandonmentTracker registerWillBeginPresentingOperaUI] */

void FUN_1071d5774(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071d57a8; end: 1071d5823; -[SCFullscreenContentViewAbandonmentTracker registerFirstPlaybackStartedWithItemType:itemTypeSpecific:] */

void FUN_1071d57a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 *)(param_1 + 0x48) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_4;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071d5824; end: 1071d5897; -[SCFullscreenContentViewAbandonmentTracker registerInitialDataLoadedWithItemType:itemTypeSpecific:] */

void FUN_1071d5824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x48) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_4;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071d5898; end: 1071d589f; -[SCFullscreenContentViewAbandonmentTracker updateEndOfPlaylistStatus:] */

void FUN_1071d5898(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1071d58a0; end: 1071d5d4f; -[SCFullscreenContentViewAbandonmentTracker generateLoggingData] */

void FUN_1071d58a0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  uint uVar22;
  undefined *puVar23;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
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
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f418b8;
  puVar1 = param_1;
  func_0x00010c0f18e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f41918;
  puVar3 = param_1;
  puStack_e0 = puVar2;
  func_0x00010c0eb620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f41978;
  puVar5 = param_1;
  puStack_d8 = puVar4;
  func_0x00010bfb1da0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f41998;
  puVar7 = param_1;
  puStack_d0 = puVar6;
  func_0x00010c063d60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f419b8;
  puVar9 = param_1;
  puStack_c8 = puVar8;
  func_0x00010c089a20(param_1);
  func_0x00010c0df780(puVar10,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f41938;
  puVar11 = param_1;
  puStack_c0 = puVar10;
  func_0x00010bfb1a20(param_1);
  func_0x00010c0df780(puVar9,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f41958;
  puVar11 = param_1;
  puStack_b8 = puVar9;
  func_0x00010bfb1a40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e1fbd8;
  puVar13 = param_1;
  puStack_b0 = puVar12;
  func_0x00010bf52ee0(param_1);
  func_0x00010c0df780(puVar14,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110e724b8;
  puVar15 = param_1;
  puStack_a8 = puVar14;
  func_0x00010c0f0d40();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_1;
  func_0x00010c0f18e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar15,param_2,puVar16);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f41e38;
  puVar17 = param_1;
  puStack_a0 = puVar13;
  func_0x00010c089a40();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  if (puVar17 == (undefined *)0x0) {
    puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f419d8;
  puVar19 = param_1;
  puStack_98 = puVar18;
  func_0x00010c06c760(param_1);
  func_0x00010c0df6e0(puVar20,param_2,puVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f419f8;
  puVar21 = param_1;
  puStack_90 = puVar20;
  func_0x00010c249f40();
  if ((int)puVar21 == 0) {
    uVar22 = 0;
  }
  else {
    puVar21 = param_1;
    func_0x00010c0f0d20(param_1);
    uVar22 = (uint)puVar21 ^ 1;
  }
  func_0x00010c0df760(puVar19,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f41a18;
  puVar23 = param_1;
  puStack_88 = puVar19;
  func_0x00010c249f40();
  if ((int)puVar23 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar23 = param_1;
    func_0x00010c0f0d20(param_1);
  }
  func_0x00010c0df760(puVar21,param_2,puVar23);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f41a38;
  puStack_80 = puVar21;
  func_0x00010be1bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e0,&ppuStack_150,0xe
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar20);
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar18);
  }
  _objc_release(puVar17);
  _objc_release(puVar13);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar10);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c29fb80();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1071d5d50; end: 1071d5d93; -[SCFullscreenContentViewAbandonmentTracker _allStoryPlaybackMetricsByItemType] */

void FUN_1071d5d50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29fb80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071d5d94; end: 1071d61bf; -[SCFullscreenContentViewAbandonmentTracker announceFullScreenContentViewSessionTo:announcerIdentifier:pageType:pageSessionId:operaSessionId:feedType:entryType:entryGesture:exitGesture:triggeringSection:sectionIdentifier:metadataAvailableAtStartCount:mediaAvailableAtStartCount:] */

void FUN_1071d5d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined *param_14,undefined *param_15,undefined *param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  int iStack_15c;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  uStack_170 = param_13;
  uStack_178 = param_10;
  puStack_168 = (undefined *)param_9;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_120 = param_8;
  _objc_retain(param_8);
  puStack_128 = param_14;
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_150 = param_16;
  _objc_retain(param_16);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dcad78;
  uStack_140 = param_4;
  _objc_retain(param_4);
  uStack_138 = param_3;
  _objc_retain(param_3);
  func_0x00010c0df780(puVar3,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f42e78;
  puStack_158 = puVar3;
  lStack_148 = param_1;
  puStack_c0 = puVar3;
  if (param_7 == (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x60);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      iStack_15c = 1;
    }
    else {
      iStack_15c = 0;
    }
  }
  else {
    iStack_15c = 0;
    puVar3 = param_7;
  }
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e29c38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_180 = puVar3;
  puStack_130 = param_7;
  puStack_b8 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puStack_168);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_150;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f41c38;
  puStack_188 = puStack_120;
  puStack_168 = puVar4;
  puStack_b0 = puVar4;
  if (puStack_120 == (undefined *)0x0) {
    puStack_188 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f41b18;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puStack_188;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_178);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f41c78;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar4;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_170);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e5f1f8;
  puVar6 = puStack_118;
  puStack_98 = puVar5;
  if (puStack_118 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f41cb8;
  puVar7 = puStack_128;
  puStack_90 = puVar6;
  if (puStack_128 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f427b8;
  puVar8 = param_15;
  puStack_88 = puVar7;
  if (param_15 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f427d8;
  puVar9 = puVar3;
  puStack_80 = puVar8;
  if (puVar3 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&ppuStack_110,10)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0d3c80();
  _objc_release(puVar10);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  if (param_15 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  if (puStack_128 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (puStack_118 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puStack_120 == (undefined *)0x0) {
    _objc_release(puStack_188);
  }
  _objc_release(puStack_168);
  puVar4 = puStack_130;
  lVar12 = lStack_148;
  if (iStack_15c != 0) {
    _objc_release(puStack_180);
  }
  _objc_release(puStack_158);
  func_0x00010bfbf960(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar11,param_2,lVar12);
  _objc_release(lVar12);
  uVar2 = uStack_138;
  uVar1 = uStack_140;
  func_0x00010bf7dbc0(uStack_138,param_2,&PTR____CFConstantStringClassReference_110f414d8,uStack_140
                      ,puVar11);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(param_15);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puVar4);
  puVar5 = puStack_118;
  _objc_release(puStack_118);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_1c0 = puVar4;
  puStack_1b8 = puVar3;
  puStack_1b0 = param_15;
  uStack_1a8 = uVar2;
  pcStack_198 = FUN_1071d61c0;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x00010bdca100();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = puVar5;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_1071d62c4;
  puStack_1d0 = &UNK_110992448;
  puStack_1c8 = puVar3;
  _objc_retain();
  func_0x00010bf97e80(puVar5,param_2,&puStack_1e8);
  uStack_1f0 = 0;
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,8,&uStack_1f0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar4);
  _objc_release(puStack_1c8);
  _objc_release(puVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1071d61c0; end: 1071d62c3; -[SCFullscreenContentViewAbandonmentTracker _generateStoryPlaybackMetricsByItemJsonString] */

void FUN_1071d61c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  func_0x00010bdca100();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1071d62c4;
  puStack_40 = &UNK_110992448;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_1,param_2,&puStack_58);
  uStack_60 = 0;
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar2,8,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar3);
  _objc_release(puStack_38);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1071d62c4; end: 1071d6303;  */

void FUN_1071d62c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbf980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071d6304; end: 1071d63f7; -[SCFullscreenContentViewAbandonmentTracker _createOrGetStoryVisibilityForItemType:itemTypeSpecific:] */

void FUN_1071d6304(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ea1b78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c29fb80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d50d0;
    _objc_alloc(PTR_PTR_1126d50d0);
    func_0x00010c0203a0();
    func_0x00010c29fb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071d63f8; end: 1071d63ff; -[SCFullscreenContentViewAbandonmentTracker pageOpenTime] */

undefined8 FUN_1071d63f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071d6400; end: 1071d6407; -[SCFullscreenContentViewAbandonmentTracker pageClosedTime] */

undefined8 FUN_1071d6400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1071d6408; end: 1071d640f; -[SCFullscreenContentViewAbandonmentTracker operaUIPresentedTime] */

undefined8 FUN_1071d6408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1071d6410; end: 1071d6417; -[SCFullscreenContentViewAbandonmentTracker firstStoryplaybackTime] */

undefined8 FUN_1071d6410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1071d6418; end: 1071d641f; -[SCFullscreenContentViewAbandonmentTracker initialDataLoadTime] */

undefined8 FUN_1071d6418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1071d6420; end: 1071d6427; -[SCFullscreenContentViewAbandonmentTracker lastPlayedStoryItemType] */

undefined8 FUN_1071d6420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1071d6428; end: 1071d642f; -[SCFullscreenContentViewAbandonmentTracker lastPlayedStoryItemTypeSpecific] */

undefined8 FUN_1071d6428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1071d6430; end: 1071d6437; -[SCFullscreenContentViewAbandonmentTracker firstPlayedStoryItemType] */

undefined8 FUN_1071d6430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1071d6438; end: 1071d643f; -[SCFullscreenContentViewAbandonmentTracker firstPlayedStoryItemTypeSpecific] */

undefined8 FUN_1071d6438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1071d6440; end: 1071d6447; -[SCFullscreenContentViewAbandonmentTracker isAtEndOfPlaylist] */

undefined1 FUN_1071d6440(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1071d6448; end: 1071d644f; -[SCFullscreenContentViewAbandonmentTracker spinnerWasVisble] */

undefined1 FUN_1071d6448(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1071d6450; end: 1071d6457; -[SCFullscreenContentViewAbandonmentTracker countOfStoriesStartedPlayback] */

undefined8 FUN_1071d6450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1071d6458; end: 1071d645f; -[SCFullscreenContentViewAbandonmentTracker operaSessionIdDuringPlayback] */

undefined8 FUN_1071d6458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1071d6460; end: 1071d648f; -[SCFullscreenContentViewAbandonmentTracker setOperaSessionIdDuringPlayback:] */

void FUN_1071d6460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071d6490; end: 1071d6497; -[SCFullscreenContentViewAbandonmentTracker pageClosedMidPlayback] */

undefined1 FUN_1071d6490(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1071d6498; end: 1071d649f; -[SCFullscreenContentViewAbandonmentTracker visibilityTracking] */

undefined8 FUN_1071d6498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1071d64a0; end: 1071d64cf; -[SCFullscreenContentViewAbandonmentTracker setVisibilityTracking:] */

void FUN_1071d64a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071d64d0; end: 1071d6553; -[SCFullscreenContentViewAbandonmentTracker .cxx_destruct] */

void FUN_1071d64d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1071d6554; end: 1071d6783; -[SCOperaSubtitlesPlugin initWithImageDownloader:imageFetchingService:circumstanceEngine:preferences:viewLocation:] */

undefined1 *
FUN_1071d6554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f8bd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9448;
    _objc_alloc();
    func_0x00010c00f960();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x68),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x70),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c087ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x80) = (char)uVar2;
    *(bool *)((long)puVar1 + 0xa0) = param_7 == 0x62 || param_7 == 0x65;
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = 0;
    _objc_release();
    func_0x000108f4a948();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    _objc_release(uVar6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071d6784; end: 1071d678f; -[SCOperaSubtitlesPlugin setPlaylistItemController:] */

void FUN_1071d6784(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1071d6790; end: 1071d682b; -[SCOperaSubtitlesPlugin setOperaControlling:] */

void FUN_1071d6790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x58,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf99b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x50,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071d682c; end: 1071d68bf; -[SCOperaSubtitlesPlugin audioSession:didChangeVolume:] */

void FUN_1071d682c(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bef0a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010beb3500(param_2,param_3,uVar1);
  _objc_release(uVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x10);
    func_0x00010bf926c0();
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf125a0(uVar1);
  func_0x00010bdd19e0(param_2,param_3,lVar2,uVar1);
  lVar2 = param_2 + 0x48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0ef220();
  *(undefined4 *)(param_2 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1071d68c0; end: 1071d68c3; -[SCOperaSubtitlesPlugin extraPropertiesProvider] */

void FUN_1071d68c0(void)

{
  return;
}



/* Entry: 1071d68c4; end: 1071d6d07; -[SCOperaSubtitlesPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_1071d68c4(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *unaff_x23;
  undefined *unaff_x25;
  long lVar17;
  undefined *unaff_x26;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 != 0) {
    unaff_x23 = param_5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x23;
    func_0x00010c0720c0();
    _objc_release(unaff_x23);
    if ((int)unaff_x25 != 0) {
      uStack_70 = *(undefined8 *)(param_2 + 0x10);
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f0c698;
      uVar16 = 1;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar2;
      if ((param_2[0x80] & 1) == 0) {
        unaff_x25 = *(undefined **)(param_2 + 0x98);
        unaff_x26 = param_5;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x26);
        if (unaff_x25 != (undefined *)0x0) goto LAB_1071d69d8;
      }
      else {
LAB_1071d69d8:
        iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
        func_0x00010bf125a0();
        if (iVar1 != 0) {
          lVar17 = *(long *)(param_2 + 0x90);
          unaff_x26 = param_5;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(unaff_x26);
          unaff_x25 = (undefined *)0x0;
          if (lVar17 != 0) {
            unaff_x25 = *(undefined **)(param_2 + 0x98);
            puVar3 = param_5;
            func_0x00010be36bc0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            unaff_x26 = puVar2;
            func_0x00010c0d3c80();
            iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
            func_0x00010bf926c0();
            if (iVar1 == 0) {
LAB_1071d6b90:
              uVar7 = *(ulong *)(param_2 + 0x10);
              func_0x00010bf926c0();
              if (((uVar7 & 1) == 0) && (unaff_x25 != (undefined *)0x0)) {
                puVar3 = unaff_x25;
                func_0x00010c0e00e0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(unaff_x26);
                goto LAB_1071d6bd4;
              }
            }
            else {
              lVar17 = *(long *)(param_2 + 0x10);
              func_0x00010bef0a00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar17 == 0) goto LAB_1071d6b90;
              if (unaff_x25 != (undefined *)0x0) {
                uVar4 = *(undefined8 *)(param_2 + 0x10);
                func_0x00010bef0a00(uVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = unaff_x25;
                func_0x00010c0e00e0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(unaff_x26);
                _objc_release(puVar3);
                _objc_release(uVar4);
              }
              puVar3 = param_2 + 0x60;
              _objc_loadWeakRetained();
              puVar5 = puVar3;
              func_0x00010c0d5720();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
              _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
              puVar6 = puVar5;
              _objc_opt_isKindOfClass(puVar5,puVar3);
              puVar3 = puVar5;
              if (((ulong)puVar6 & 1) == 0) {
                puVar3 = (undefined *)0x0;
              }
              _objc_retain(puVar3);
              _objc_release(puVar5);
              puVar5 = puVar3;
              func_0x00010bdc2b80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar5 != (undefined *)0x0) {
                puVar5 = puVar3;
                func_0x00010bdc2b80(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(unaff_x26);
                _objc_release(puVar5);
              }
LAB_1071d6bd4:
              _objc_release(puVar3);
            }
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar4 = *(undefined8 *)(param_2 + 0x90);
            puVar5 = param_5;
            func_0x00010be36bc0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            func_0x00010c0df720(param_1 / 1000.0,puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(unaff_x26);
            _objc_release(puVar3);
            _objc_release(uVar4);
            _objc_release(puVar5);
            unaff_x23 = unaff_x26;
            func_0x00010bf51e00();
            _objc_release(puVar2);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            param_2 = unaff_x23;
          }
        }
      }
      (**(code **)(param_7 + 0x10))(param_7,unaff_x23,0);
      _objc_release(unaff_x23);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1071d6d08;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2338;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  puStack_c0 = param_2;
  puStack_b8 = unaff_x23;
  lStack_b0 = param_7;
  uStack_a8 = param_6;
  puStack_a0 = param_5;
  uStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_108 = puVar2;
  func_0x00010c261280();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_100 = puVar3;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  puStack_f8 = puVar5;
  func_0x00010c29aaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2338;
  puStack_f0 = puVar6;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2338;
  puStack_e8 = puVar8;
  func_0x00010c24ce60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &puStack_108;
  uVar4 = 6;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e0 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar15);
  _objc_retain(uVar4);
  _objc_retain(uVar16);
  puVar3 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar15;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)ppuVar11 == 0) {
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c261280(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar15;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)ppuVar11 == 0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar15;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)ppuVar11 == 0) {
        puVar3 = PTR_PTR_1126b2338;
        func_0x00010c29aaa0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar15;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)ppuVar11 != 0) {
          func_0x00010bed6600(puVar2);
          goto LAB_1071d6ff0;
        }
        puVar3 = PTR_PTR_1126b2338;
        func_0x00010c0c4dc0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar15;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)ppuVar11 == 0) {
          puVar3 = PTR_PTR_1126b2338;
          func_0x00010c24ce60(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar15;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)ppuVar11 != 0) {
            func_0x00010be2f700(puVar2);
          }
          goto LAB_1071d6ff0;
        }
        puVar3 = PTR_PTR_1126b2348;
        func_0x00010c120300(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar16;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar13 = uVar12;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126ba158;
        func_0x00010bf87dc0(PTR_PTR_1126ba158);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(uVar13);
        if ((int)uVar14 != 0) {
          func_0x00010c16d840(puVar2);
          func_0x00010bdd19e0(puVar2);
          puVar2 = puVar2 + 0x48;
          _objc_loadWeakRetained(puVar2);
          func_0x00010c12cf80();
          _objc_release(puVar2);
        }
      }
      else {
        func_0x00010c16d840(puVar2);
        func_0x00010bdd19e0(puVar2);
        func_0x00010be8bd00(puVar2);
        puVar3 = puVar2 + 0x48;
        _objc_loadWeakRetained(puVar3);
        func_0x00010c12cf80();
        _objc_release(puVar3);
        uVar12 = *(undefined8 *)(puVar2 + 0xa8);
        *(undefined8 *)(puVar2 + 0xa8) = 0;
      }
      _objc_release(uVar12);
    }
    else {
      func_0x00010be7c100(puVar2);
    }
  }
  else {
    uVar12 = *(undefined8 *)(puVar2 + 0xa8);
    *(undefined8 *)(puVar2 + 0xa8) = 0;
    _objc_release(uVar12);
    func_0x00010bdde3a0(puVar2);
  }
LAB_1071d6ff0:
  _objc_release(uVar16);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar15);
  return;
}



/* Entry: 1071d6d08; end: 1071d6e57; -[SCOperaSubtitlesPlugin registeredEventsForOperaSession] */

void FUN_1071d6d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_88 = puVar1;
  func_0x00010c261280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_80 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_78 = puVar3;
  func_0x00010c29aaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2338;
  puStack_70 = puVar4;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  puStack_68 = puVar5;
  func_0x00010c24ce60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_88;
  uVar13 = 6;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(uVar13);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar12;
  func_0x00010c0720c0(ppuVar12,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar8 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c261280(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar12;
    func_0x00010c0720c0(ppuVar12,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar8 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar12;
      func_0x00010c0720c0(ppuVar12,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)ppuVar8 == 0) {
        puVar2 = PTR_PTR_1126b2338;
        func_0x00010c29aaa0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar12;
        func_0x00010c0720c0(ppuVar12,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)ppuVar8 != 0) {
          func_0x00010bed6600(puVar1,param_2,param_5,uVar13);
          goto LAB_1071d6ff0;
        }
        puVar2 = PTR_PTR_1126b2338;
        func_0x00010c0c4dc0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar12;
        func_0x00010c0720c0(ppuVar12,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)ppuVar8 == 0) {
          puVar2 = PTR_PTR_1126b2338;
          func_0x00010c24ce60(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar12;
          func_0x00010c0720c0(ppuVar12,param_2,puVar2);
          _objc_release(puVar2);
          if ((int)ppuVar8 != 0) {
            func_0x00010be2f700(puVar1,param_2,param_5,ppuVar12);
          }
          goto LAB_1071d6ff0;
        }
        puVar2 = PTR_PTR_1126b2348;
        func_0x00010c120300(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar10 = uVar9;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126ba158;
        func_0x00010bf87dc0(PTR_PTR_1126ba158);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c0720c0(uVar10,param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(uVar10);
        if ((int)uVar11 != 0) {
          func_0x00010c16d840(puVar1,param_2,0);
          func_0x00010bdd19e0(puVar1,param_2,0,0);
          puVar1 = puVar1 + 0x48;
          _objc_loadWeakRetained(puVar1);
          func_0x00010c12cf80();
          _objc_release(puVar1);
        }
      }
      else {
        func_0x00010c16d840(puVar1,param_2,0);
        func_0x00010bdd19e0(puVar1,param_2,0,0);
        func_0x00010be8bd00(puVar1,param_2,uVar13);
        puVar2 = puVar1 + 0x48;
        _objc_loadWeakRetained(puVar2);
        func_0x00010c12cf80();
        _objc_release(puVar2);
        uVar9 = *(undefined8 *)(puVar1 + 0xa8);
        *(undefined8 *)(puVar1 + 0xa8) = 0;
      }
      _objc_release(uVar9);
    }
    else {
      func_0x00010be7c100(puVar1);
    }
  }
  else {
    uVar9 = *(undefined8 *)(puVar1 + 0xa8);
    *(undefined8 *)(puVar1 + 0xa8) = 0;
    _objc_release(uVar9);
    func_0x00010bdde3a0(puVar1,param_2,uVar13,param_5);
  }
LAB_1071d6ff0:
  _objc_release(param_5);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 1071d6e58; end: 1071d7157; -[SCOperaSubtitlesPlugin operaViewDidSendEvent:page:params:] */

void FUN_1071d6e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c261280(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b2338;
        func_0x00010c29aaa0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 != 0) {
          func_0x00010bed6600(param_1,param_2,param_5,param_4);
          goto LAB_1071d6ff0;
        }
        puVar1 = PTR_PTR_1126b2338;
        func_0x00010c0c4dc0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 == 0) {
          puVar1 = PTR_PTR_1126b2338;
          func_0x00010c24ce60(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
            func_0x00010be2f700(param_1,param_2,param_5,param_3);
          }
          goto LAB_1071d6ff0;
        }
        puVar1 = PTR_PTR_1126b2348;
        func_0x00010c120300(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_5;
        func_0x00010c0e00e0(param_5,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        uVar4 = uVar2;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126ba158;
        func_0x00010bf87dc0(PTR_PTR_1126ba158);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0(uVar4,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(uVar4);
        if ((int)uVar5 != 0) {
          func_0x00010c16d840(param_1,param_2,0);
          func_0x00010bdd19e0(param_1,param_2,0,0);
          param_1 = param_1 + 0x48;
          _objc_loadWeakRetained(param_1);
          func_0x00010c12cf80();
          _objc_release(param_1);
        }
      }
      else {
        func_0x00010c16d840(param_1,param_2,0);
        func_0x00010bdd19e0(param_1,param_2,0,0);
        func_0x00010be8bd00(param_1,param_2,param_4);
        lVar3 = param_1 + 0x48;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c12cf80();
        _objc_release(lVar3);
        uVar2 = *(undefined8 *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      _objc_release(uVar2);
    }
    else {
      func_0x00010be7c100(param_1);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    _objc_release(uVar2);
    func_0x00010bdde3a0(param_1,param_2,param_4,param_5);
  }
LAB_1071d6ff0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d7158; end: 1071d72c3; -[SCOperaSubtitlesPlugin _handleSSPSubtitlesTextChangeWithParams:event:] */

void FUN_1071d7158(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = PTR_PTR_1126b2348;
  _objc_retain(param_3);
  func_0x00010bf30940(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if ((uVar1 == 0) || (uVar7 = uVar6, func_0x00010c08fa60(), uVar7 == 0)) {
    uVar6 = 0;
  }
  else {
    func_0x00010bf51e00();
  }
  uVar7 = *(ulong *)(param_1 + 0xa8);
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  if (uVar7 == uVar6) {
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  else {
    if (uVar6 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar4 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(uVar7);
      if ((uVar4 & 1) != 0) goto LAB_1071d72a4;
    }
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *(ulong *)(param_1 + 0xa8) = uVar6;
    _objc_release(uVar5);
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bf926c0();
    if (iVar2 != 0) {
      func_0x00010bdcc600(param_1);
    }
  }
LAB_1071d72a4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1071d72c4; end: 1071d73cb; -[SCOperaSubtitlesPlugin _updateCurrentMediaTimeIfNecessary:page:] */

void FUN_1071d72c4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf885a0(uVar3);
    if (param_1 != 0.0) {
      lVar4 = *(long *)(param_2 + 0x90);
      func_0x00010c0e00e0(lVar4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x90),param_3,uVar3,puVar1);
      if (lVar4 == 0) {
        param_2 = param_2 + 0x40;
        _objc_loadWeakRetained(param_2);
        func_0x00010c101400();
        _objc_release(param_2);
      }
      _objc_release(lVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071d73cc; end: 1071d7413; -[SCOperaSubtitlesPlugin _removeCurrentMediaTimeIfNecessary:] */

void FUN_1071d73cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x90),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071d7414; end: 1071d755b; -[SCOperaSubtitlesPlugin unifiedActionMenuPresenterDidDismiss:] */

void FUN_1071d7414(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bef0a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bef0a00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(lVar1);
    if ((int)uVar4 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bef0a00();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)(param_1 + 0x78) = 2;
      _objc_retain();
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = uVar4;
      _objc_release(uVar3);
      uVar3 = 1;
      goto LAB_1071d74e0;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bef0a00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x78) = 1;
LAB_1071d74e0:
  lVar2 = param_1;
  func_0x00010bf12aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c23a560(uVar5);
  func_0x00010bee1540(param_1,param_2,uVar3,uVar4,lVar1 != 0,1,uVar5);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1071d755c; end: 1071d756b; -[SCOperaSubtitlesPlugin didTapDone:] */

void FUN_1071d755c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_dismissMenuViewWithAnimation_com_1125be918,1,0);
  return;
}



/* Entry: 1071d756c; end: 1071d757b; -[SCOperaSubtitlesPlugin didFinishItemSelection:] */

void FUN_1071d756c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_dismissMenuViewWithAnimation_com_1125be918,1,0);
  return;
}



/* Entry: 1071d757c; end: 1071d7723; -[SCOperaSubtitlesPlugin _presentLanguageSelection] */

void FUN_1071d757c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf926c0();
  if ((uVar1 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd32f8;
    _objc_retain(&PTR____CFConstantStringClassReference_110dd32f8);
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x10);
    func_0x00010bef0a00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126d50d8;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010bf12aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021680(puVar3,param_2,lVar5,ppuVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c161940(*(undefined8 *)(param_1 + 0x30),param_2,param_1);
  puVar3 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar5);
  uVar6 = 0x13;
  func_0x00010bc9107c(0x13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar3,param_2,uVar7,uVar7,lVar4,lVar5,uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d0c0(uVar6,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1071d7724; end: 1071d7bc3; -[SCOperaSubtitlesPlugin _checkSubtitlesAvailabilityWithPage:params:] */

void FUN_1071d7724(long param_1,undefined1 *param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf1f3c0();
  _objc_release(puVar9);
  _objc_release(puVar1);
  puVar1 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    _objc_storeWeak(param_1 + 0x38,param_3);
    puVar1 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9448;
    _objc_opt_class(PTR_PTR_1126c9448);
    puVar4 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar1);
    puVar2 = puVar9;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar9);
    puVar1 = puVar2;
    func_0x00010c072720();
    if ((int)puVar1 == 0) {
      puVar1 = PTR_PTR_1126b2348;
      func_0x00010c29ab20(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      param_2 = puVar5;
      _objc_storeWeak(param_1 + 0x60,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b2340;
      puVar9 = param_3;
      func_0x00010c118b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077200();
      _objc_release(puVar9);
      if ((int)puVar1 == 0) {
        puVar9 = PTR_PTR_1126c9310;
        func_0x00010c0700c0();
        if ((int)puVar9 != 0) {
          puVar9 = PTR_PTR_1126c9310;
          func_0x00010bf631e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          *(undefined **)(param_1 + 0x18) = puVar9;
          _objc_release(uVar6);
          func_0x00010be825e0(param_1);
          _objc_release(puVar2);
          goto LAB_1071d7b58;
        }
      }
      else {
        puVar1 = PTR_PTR_1126c9310;
        func_0x00010c0b5560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        *(undefined **)(param_1 + 0x18) = puVar1;
        _objc_release(uVar6);
      }
      _objc_initWeak(auStack_68,param_1);
      param_1 = param_1 + 0x60;
      _objc_loadWeakRetained();
      _objc_retain();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1071d7bc4;
      puStack_88 = &UNK_110992478;
      param_2 = auStack_68;
      _objc_copyWeak(auStack_78,param_2);
      _objc_retain(param_1);
      uStack_70 = SUB81(puVar3,0);
      lStack_80 = param_1;
      func_0x00010c09c3e0(param_1);
      _objc_release(param_1);
      _objc_release(lStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_68);
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0xb0);
      puVar5 = *(undefined1 **)(param_1 + 8);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      param_2 = puVar5;
      func_0x000108f4a954(uVar8,puVar5);
      _objc_release(puVar5);
      puVar1 = puVar2;
      if ((uVar8 & 1) == 0) {
        puVar1 = PTR_PTR_1126c9448;
        _objc_alloc();
        func_0x00010bf125a0(puVar2);
        puVar9 = puVar2;
        func_0x00010bef0a00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c072720(puVar2);
        func_0x00010c23a560(puVar2);
        func_0x00010c00f960();
        _objc_release(puVar2);
        _objc_release(puVar9);
      }
      _objc_retain(puVar1);
      puVar10 = (undefined8 *)(param_1 + 0x10);
      uVar6 = *puVar10;
      *puVar10 = puVar1;
      _objc_release(uVar6);
      uVar6 = *puVar10;
      func_0x00010bef0a00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_60 = uVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d840(param_1);
      _objc_release(ppuVar7);
      _objc_release(uVar6);
      uVar6 = *puVar10;
      func_0x00010bef0a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b0c0(param_1);
      _objc_release(uVar6);
      func_0x00010bdcc600(param_1);
      puVar2 = puVar1;
    }
    _objc_release(puVar2);
    puVar1 = (undefined *)ppuVar7;
  }
LAB_1071d7b58:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar1 + 0x28);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1 + 0x60;
    _objc_loadWeakRetained();
    puVar9 = *(undefined **)(param_3 + 0x20);
    _objc_release();
    if (puVar2 == puVar9) {
      func_0x00010c23a560(*(undefined8 *)(puVar1 + 0x10));
      func_0x00010be825c0(puVar1);
    }
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071d7bc4; end: 1071d7c53;  */

void FUN_1071d7bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x60;
    _objc_loadWeakRetained();
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_release();
    if (lVar2 == lVar3) {
      func_0x00010c23a560(*(undefined8 *)(lVar1 + 0x10));
      func_0x00010be825c0(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


