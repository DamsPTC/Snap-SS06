/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a70d14; end: 107a70fb7; -[SCTopicViewerViewController _fetchMoreTopicsForDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a70d14(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f38);
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0e00;
  func_0x00010c2753e0(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar7 = *(long *)(param_1 + _DAT_112768f70);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126b1278;
    func_0x00010c1231a0(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf926c0();
    uVar8 = (uint)lVar5 ^ 1;
    _objc_release(lVar7);
    _objc_release(puVar3);
  }
  lVar7 = param_3;
  func_0x00010c08a260();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  if ((lVar7 == 0) || (_objc_release(), (((uint)uVar4 | uVar8) & 1) == 0)) {
    func_0x00010c137340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b0ee0(param_3);
    _objc_initWeak(auStack_58,param_1);
    lVar7 = param_3;
    func_0x00010c2751c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c08a260(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bfaa520(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010c08a260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee3de0(param_1);
  }
  _objc_release(lVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 107a70fb8; end: 107a7107b;  */

void FUN_107a70fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be297e0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a7107c; end: 107a711df; -[SCTopicViewerViewController _handleFetchCompletionWithProvider:topicStories:streamToken:hasMoreData:success:submissionCount:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7107c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c1b0ee0(param_3,param_2,0);
  lVar7 = param_3;
  func_0x00010c07b180();
  if ((int)lVar7 != 0) {
    lVar7 = (long)_DAT_112768f74;
    _objc_retain(param_9);
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = param_9;
    _objc_release(uVar1);
  }
  lVar7 = param_3;
  if ((param_7 & 1) == 0) {
    if (*(char *)(param_1 + _DAT_112768f44) == '\x01') {
      lVar2 = param_3;
      func_0x00010c275680();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        lVar7 = 0;
      }
      _objc_release(lVar2);
    }
    else {
      lVar7 = 0;
    }
    uVar1 = 0;
    param_6 = 0;
    uVar5 = 0;
    uVar6 = 1;
    puVar4 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    uVar6 = 0;
    puVar4 = param_4;
    uVar1 = param_5;
    uVar5 = param_8;
  }
  func_0x00010bee3de0(param_1,param_2,lVar7,puVar4,uVar1,param_6,uVar5,uVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a711e0; end: 107a7120f; -[SCTopicViewerViewController viewWillEnterForeground] */

void FUN_107a711e0(undefined8 param_1)

{
  func_0x00010be93440();
  func_0x00010be56c20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be54ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logImpressionForAllVisibleCells_112572c50);
  return;
}



/* Entry: 107a71210; end: 107a71217; -[SCTopicViewerViewController viewWillEnterBackground] */

void FUN_107a71210(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageExitWithExitType__1125734b8,2);
  return;
}



/* Entry: 107a71218; end: 107a7127f; -[SCTopicViewerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71218(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f98a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  func_0x00010be93440(param_1);
  func_0x00010be56c20(param_1);
  *(undefined8 *)(param_1 + _DAT_112768f10) = 0;
  return;
}



/* Entry: 107a71280; end: 107a712d3; -[SCTopicViewerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71280(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f98a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010be56c60(param_1);
  return;
}



/* Entry: 107a712d4; end: 107a7144f; -[SCTopicViewerViewController _updateViewWithDataProvider:topicStories:streamToken:hasMoreData:submissionCount:fetchFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a712d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112768f28);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_60 = param_6;
    _objc_retain(param_7);
    uStack_5f = param_8;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a71450; end: 107a7148f;  */

void FUN_107a71450(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a71490; end: 107a71803; -[SCTopicViewerViewController _updateViewInPerformerWithDataProvider:topicStories:streamToken:hasMoreData:submissionCount:fetchFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71490(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_3 != 0) {
    uVar4 = param_3;
    func_0x00010c07b180();
    uVar1 = param_3;
    func_0x00010c275680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    uVar6 = 0;
    if ((((param_6 & 1) == 0) && ((param_8 & 1) == 0)) && (uVar2 == 0)) {
      lVar3 = param_4;
      func_0x00010bf529e0();
      uVar6 = (uint)(lVar3 == 0);
    }
    _objc_initWeak(auStack_68,param_1);
    lVar3 = *(long *)(param_1 + (long)_DAT_112768f74);
    if (((lVar3 != 0) && (func_0x00010c08fa60(), lVar3 != 0)) &&
       ((*(char *)(param_1 + (long)_DAT_112768f14) == '\x01' &&
        (uVar1 = param_1, func_0x00010be43e60(), (uVar1 & 1) == 0)))) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107a71804;
      puStack_78 = &UNK_1108434b0;
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c0f7fc0(uVar1);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_70);
    }
    if ((((uint)uVar4 ^ 1) & uVar6) == 1) {
      func_0x00010be8ca60(param_1);
    }
    else {
      func_0x00010c28cf00(param_3);
      lVar3 = (long)_DAT_112768f2c;
      uVar4 = *(ulong *)(param_1 + lVar3);
      _objc_opt_respondsToSelector(uVar4,PTR_s_updateWithNumSnaps__112680cd0);
      if ((uVar4 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + lVar3);
        uVar4 = param_1;
        func_0x00010be23720(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28caa0(uVar5);
        _objc_release(uVar4);
      }
      uVar4 = *(ulong *)(param_1 + lVar3);
      _objc_opt_respondsToSelector(uVar4,PTR_s_updateWithSubmissionCount__112680da8);
      if ((uVar4 & 1) != 0) {
        func_0x00010c28ce00(*(undefined8 *)(param_1 + lVar3));
      }
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112768ed4);
      uVar4 = param_3;
      func_0x00010c275680(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b3a0(uVar5);
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x00010c275680();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf529e0();
      if (uVar1 < 0xd) {
        uVar1 = param_3;
        func_0x00010bfd9300();
        _objc_release(uVar4);
        if ((int)uVar1 != 0) {
          uVar4 = param_1;
          func_0x00010be12ba0(param_1);
        }
      }
      else {
        _objc_release(uVar4);
      }
      if (*(char *)(param_1 + (long)_DAT_112768f44) == '\x01') {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_98,auStack_68);
        func_0x00010c0f7fc0(uVar4);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_98);
      }
    }
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a71804; end: 107a71877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71804(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c228420(*(undefined8 *)(param_1 + _DAT_112768f54),param_2,
                        *(undefined8 *)(param_1 + _DAT_112768f34));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a71878; end: 107a7193b; -[SCTopicViewerViewController _removeNonPrimaryTopicSnapsSectionWithProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71878(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c07b180();
  if ((uVar2 & 1) == 0) {
    lVar5 = (long)_DAT_112768f60;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0d3c80();
    func_0x00010c12d440();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x00010be8d2e0(param_1,param_2,param_3);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112768f5c);
    func_0x00010c082320();
    _objc_release(uVar3);
    if (iVar1 == 0) {
      func_0x00010be8ac80(param_1);
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112768f50) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a7193c; end: 107a71ab3; -[SCTopicViewerViewController _removeSectionConfigWithProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7193c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar9 = (long)_DAT_112768f64;
    uVar1 = *(ulong *)(param_1 + lVar9);
    func_0x00010c0d3c80();
    uVar10 = uVar1;
    func_0x00010bf529e0();
    if (uVar10 != 0) {
      uVar10 = 0;
      do {
        uVar2 = uVar1;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b1108;
        _objc_opt_class(PTR_PTR_1126b1108);
        uVar5 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        uVar7 = uVar3;
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar3);
        if (uVar7 != 0) {
          func_0x00010c155a60();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126d61e8;
          _objc_opt_class(PTR_PTR_1126d61e8);
          uVar6 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar4);
          uVar5 = uVar3;
          if ((uVar6 & 1) == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar3);
          if ((uVar5 != 0) && (func_0x00010c071ae0(), (int)uVar3 != 0)) {
            func_0x00010c12d3c0(uVar1);
          }
          _objc_release(uVar5);
        }
        _objc_release(uVar7);
        _objc_release(uVar2);
        uVar10 = uVar10 + 1;
        uVar7 = uVar1;
        func_0x00010bf529e0();
      } while (uVar10 < uVar7);
    }
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar1;
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a71ab4; end: 107a71b63; -[SCTopicViewerViewController _getAbsolutePositionForSection:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107a71ab4(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (0 < (long)param_3) {
    uVar5 = 0;
    lVar6 = (long)_DAT_112768f60;
    do {
      uVar1 = *(ulong *)(param_1 + lVar6);
      func_0x00010bf529e0();
      if (uVar5 < uVar1) {
        lVar2 = *(long *)(param_1 + lVar6);
        func_0x00010c0dfd20(lVar2,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c275680();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        param_4 = lVar4 + param_4;
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
  }
  return param_4;
}



/* Entry: 107a71b64; end: 107a71b73; -[SCTopicViewerViewController presentSnapActionMenuForStory:position:section:] */

void FUN_107a71b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentSnapActionMenuForStory_s_11257d3f8,param_3,param_5,param_4);
  return;
}



/* Entry: 107a71b74; end: 107a71b77; -[SCTopicViewerViewController dismissSnapActionMenu] */

void FUN_107a71b74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSnapActionMenu_11255e740);
  return;
}



/* Entry: 107a71b78; end: 107a71bfb; -[SCTopicViewerViewController selectMusicTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71b78(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_112768f78;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107a71bfc;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  _objc_retain();
  func_0x00010c2759c0(param_1,param_2,&puStack_48);
  _objc_release(lStack_28);
  _objc_release(param_1);
  return;
}



/* Entry: 107a71bfc; end: 107a71c03;  */

void FUN_107a71bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2758b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_topicViewerDidTapAddToTopic_11267b050);
  return;
}



/* Entry: 107a71c04; end: 107a71c0b; -[SCTopicViewerViewController dismissTopicViewer] */

void FUN_107a71c04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissTopicViewerWithCompletion_1125bebc8,0)
  ;
  return;
}



/* Entry: 107a71c0c; end: 107a71cf7; -[SCTopicViewerViewController dismissTopicViewerWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  param_1 = param_1 + _DAT_112768f78;
  _objc_loadWeakRetained();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107a71cbc;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c2759c0(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 107a71cf8; end: 107a71dd3; -[SCTopicViewerViewController _prepareCameraWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71cf8(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112768f7c);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010be022e0(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebfa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startCameraWorkflow_11258d828);
  return;
}



/* Entry: 107a71dd4; end: 107a71dff;  */

void FUN_107a71dd4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebfa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a71e00; end: 107a71e93; -[SCTopicViewerViewController addToTopic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71e00(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_112768ef0) == '\x01') {
    *(undefined8 *)(param_1 + _DAT_112768f10) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010c158e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_selectMusicTrack_112633da8);
    return;
  }
  lVar2 = (long)_DAT_112768f2c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleTopicViewerHiddenDueToPres_1125d2560);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfd2ee0(*(undefined8 *)(param_1 + lVar2));
  }
  lVar2 = param_1;
  func_0x00010be43e60();
  if ((int)lVar2 != 0) {
    *(undefined8 *)(param_1 + _DAT_112768f10) = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be780d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareCameraWorkflow_11257b9d0);
  return;
}



/* Entry: 107a71e94; end: 107a71f77; -[SCTopicViewerViewController joinTopicChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71e94(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + (long)_DAT_112768f14) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112768ef8);
    uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112768ec4);
    FUN_107cb7e00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a91c0(uVar4);
    _objc_release(uVar1);
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2758c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107a71f78; end: 107a7207f; -[SCTopicViewerViewController showThirdPartyAppProductPageForAppId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a71f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112768f7c);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be7eae0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010be022e0(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a72080; end: 107a720b3;  */

void FUN_107a72080(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7eae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a720b4; end: 107a722b3; -[SCTopicViewerViewController _presentStoreKitViewControllerForAppId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a720b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **unaff_x23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_70,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112768f28);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107a722b4;
    puStack_80 = &UNK_1108434b0;
    unaff_x23 = &puStack_98;
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010c0f7fc0(uVar4);
    puVar2 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
    _objc_alloc_init(PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778);
    func_0x00010c18b5e0();
    uStack_68 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_60 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c09bf80(puVar2);
    _objc_release(puVar3);
    _objc_retain(param_3);
    func_0x00010c10eda0(param_1);
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be4fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a722b4; end: 107a722eb;  */

void FUN_107a722b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a722ec; end: 107a722f3;  */

void FUN_107a722ec(void)

{
  return;
}



/* Entry: 107a722f4; end: 107a72493; -[SCTopicViewerViewController _avatarViewModelWithBitmojiId:avatarId:] */

void FUN_107a722f4(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) ||
     (puVar7 = param_3, func_0x00010c08fa60(), puVar3 = PTR_PTR_1126b4858,
     puVar7 == (undefined *)0x0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1bb00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126b4860;
    func_0x00010bf1aee0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bd8e8;
    puVar2 = puVar4;
    func_0x00010bfe9660(PTR_PTR_1126bd8e8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x000108fec9ec();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107a72494; end: 107a724a3; -[SCTopicViewerViewController productViewControllerDidFinish:] */

void FUN_107a72494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107a724a4; end: 107a724a7; -[SCTopicViewerViewController _startCameraWorkflow] */

void FUN_107a724a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchCameraWorkflowPresenter_11256f740);
  return;
}



/* Entry: 107a724a8; end: 107a724bb; -[SCTopicViewerViewController _launchCameraWorkflowPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a724a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768efc),
             PTR_s_presentCameraWorkflowWithPresent_112620800,param_1);
  return;
}



/* Entry: 107a724bc; end: 107a724bf; -[SCTopicViewerViewController showMoreActionMenu] */

void FUN_107a724bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentActionMenu_11257c0f0);
  return;
}



/* Entry: 107a724c0; end: 107a726cb; -[SCTopicViewerViewController _presentActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a724c0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112768f7c;
  puVar1 = param_1;
  if (*(long *)(param_1 + lVar7) == 0) {
    lVar5 = (long)_DAT_112768ec8;
    if (*(long *)(param_1 + lVar5) == 5) {
      if (*(long *)(param_1 + _DAT_112768f30) == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        ppuStack_68 = &PTR____CFConstantStringClassReference_110eab4f8;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        lStack_60 = *(long *)(param_1 + _DAT_112768f30);
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_60,&ppuStack_68
                            ,1);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar1 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      _objc_release(puVar4);
    }
    else {
      puVar1 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
    }
    puVar4 = PTR_PTR_1126d61f8;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + lVar5);
    lVar5 = *(long *)(param_1 + _DAT_112768f20);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054600(puVar4,param_2,uVar6,puVar1,lVar5 != 0);
    _objc_release(lVar5);
    puVar2 = PTR_PTR_1126b1208;
    _objc_alloc();
    param_4 = *(undefined8 *)(param_1 + _DAT_112768ef4);
    uVar6 = 0x12;
    func_0x00010bc9107c();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 0;
    func_0x00010c02b180(puVar2,param_2,puVar4,param_4,0,0,uVar6);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar6);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
    func_0x00010c10d0c0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
    _objc_release(puVar4);
    _objc_release();
    param_3 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = (long)_DAT_112768f80;
  if (*(long *)(puVar1 + lVar7) != 0) {
    return;
  }
  _objc_retain(param_3);
  func_0x00010be1ca00(puVar1,param_2,param_4,param_5);
  puVar4 = PTR_PTR_1126d6200;
  _objc_alloc(PTR_PTR_1126d6200);
  func_0x00010c0545c0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112768ef4);
  uVar6 = 0x12;
  func_0x00010bc9107c(0x12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar2,param_2,puVar4,uVar3,0,0,uVar6);
  uVar3 = *(undefined8 *)(puVar1 + lVar7);
  *(undefined **)(puVar1 + lVar7) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar6);
  func_0x00010c18b5e0(*(undefined8 *)(puVar1 + lVar7),param_2,puVar1);
  func_0x00010c10d0c0(*(undefined8 *)(puVar1 + lVar7),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107a726cc; end: 107a727e7; -[SCTopicViewerViewController _presentSnapActionMenuForStory:section:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a726cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112768f80;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  _objc_retain(param_3);
  func_0x00010be1ca00(param_1,param_2,param_4,param_5);
  puVar1 = PTR_PTR_1126d6200;
  _objc_alloc(PTR_PTR_1126d6200);
  func_0x00010c0545c0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112768ef4);
  uVar3 = 0x12;
  func_0x00010bc9107c(0x12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar2,param_2,puVar1,uVar4,0,0,uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c10d0c0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a727e8; end: 107a728bb; -[SCTopicViewerViewController showShareMenuForStory:] */

void FUN_107a727e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be036a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107a728bc; end: 107a728ef;  */

void FUN_107a728bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebae80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a728f0; end: 107a729b3; -[SCTopicViewerViewController _showShareMenuForStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a728f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112768edc);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112768ed0);
  uVar3 = param_3;
  func_0x00010c2756a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c22b160(uVar4,param_2,uVar2,param_1,uVar5,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a729b4; end: 107a72a57; -[SCTopicViewerViewController showReportSoundMenu] */

void FUN_107a729b4(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be022e0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a72a58; end: 107a72a83;  */

void FUN_107a72a58(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebaa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a72a84; end: 107a72b37; -[SCTopicViewerViewController _showReportSoundMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a72a84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768ec4);
  func_0x00010c067fc0(uVar1);
  func_0x00010c0df780(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c282800();
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af28d88(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133c20(uVar1,param_2,puVar3,0,param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a72b38; end: 107a72c1f; -[SCTopicViewerViewController showReportMenuForStory:position:section:] */

void FUN_107a72b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010be036a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107a72c20; end: 107a72c57;  */

void FUN_107a72c20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebaa40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a72c58; end: 107a72dc3; -[SCTopicViewerViewController _showReportMenuForStory:position:section:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a72c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768ed8);
  func_0x00010bdd58e0(param_1);
  func_0x00010c133e60(uVar3);
  lVar2 = param_1;
  func_0x00010be1ca00();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768f28);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  lStack_60 = lVar2;
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107a72dc4; end: 107a72dff;  */

void FUN_107a72dc4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a72e00; end: 107a72e07; -[SCTopicViewerViewController _dismissSnapActionMenu] */

void FUN_107a72e00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be036b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSnapActionMenuWithComple_11255e748,0)
  ;
  return;
}



/* Entry: 107a72e08; end: 107a72e1f; -[SCTopicViewerViewController _dismissSnapActionMenuWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a72e08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768f80),
             PTR_s_dismissMenuViewWithAnimation_com_1125be918,1,param_3);
  return;
}



/* Entry: 107a72e20; end: 107a72e27; -[SCTopicViewerViewController dismissActionMenu] */

void FUN_107a72e20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be022f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissActionMenuWithCompletion_11255e258,0)
  ;
  return;
}



/* Entry: 107a72e28; end: 107a72e3f; -[SCTopicViewerViewController _dismissActionMenuWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a72e28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112768f7c),
             PTR_s_dismissMenuViewWithAnimation_com_1125be918,1,param_3);
  return;
}



/* Entry: 107a72e40; end: 107a730ef; -[SCTopicViewerViewController playTopicSnapAtPosition:section:baseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a72e40(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  lVar7 = (long)_DAT_112768f60;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c275680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bf529e0();
    if (param_3 < uVar2) {
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bfb2660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ca00();
      lVar7 = param_1;
      func_0x00010be43e60();
      if ((int)lVar7 != 0) {
        uVar5 = *(undefined8 *)(param_1 + _DAT_112768f1c);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010bf1f3c0();
        _objc_release(uVar5);
        if ((int)uVar8 != 0) {
          func_0x00010bedc720(param_1);
        }
      }
      uVar8 = *(undefined8 *)(param_1 + _DAT_112768ed4);
      uVar2 = uVar1;
      func_0x00010c2751c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10e9c0(uVar8);
      _objc_release(puVar6);
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      uVar8 = *(undefined8 *)(param_1 + _DAT_112768f28);
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(uVar2);
      uStack_70 = param_3;
      func_0x00010c0f7fc0(uVar8);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 107a730f0; end: 107a730f7;  */

void FUN_107a730f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c275690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_topicStories_11267afc8);
  return;
}



/* Entry: 107a730f8; end: 107a73133;  */

void FUN_107a730f8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a73134; end: 107a731df; -[SCTopicViewerViewController _updateOperaPresenterWithUseSoundBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73134(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c21db00(*(undefined8 *)(param_1 + _DAT_112768ed4));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a731e0; end: 107a7320b;  */

void FUN_107a731e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010befc440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a7320c; end: 107a73227; -[SCTopicViewerViewController _isSoundTopic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107a7320c(long param_1)

{
  return *(long *)(param_1 + _DAT_112768ec8) - 3U < 2;
}



/* Entry: 107a73228; end: 107a7324b; -[SCTopicViewerViewController _broadcastViewLocation] */

undefined8 FUN_107a73228(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be43e60();
  uVar1 = 0x68;
  if (param_1 == 0) {
    uVar1 = 0x42;
  }
  return uVar1;
}



/* Entry: 107a7324c; end: 107a73253; -[SCTopicViewerViewController pageViewName] */

undefined8 FUN_107a7324c(void)

{
  return 0x149;
}



/* Entry: 107a73254; end: 107a73347; -[SCTopicViewerViewController _cellIsCompletelyVisibleInCollectionView:atIndexPath:] */

ulong FUN_107a73254(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) goto LAB_107a73320;
  uVar1 = param_4;
  func_0x00010bf33b60(param_4,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_107a732ec:
    uVar2 = 0;
  }
  else {
    func_0x00010bf20c00(param_4);
    _CGRectGetMinY();
    dVar3 = param_1;
    func_0x00010bfb68e0(uVar1);
    _CGRectGetMinY();
    if (dVar3 < param_1) goto LAB_107a732ec;
    func_0x00010bfb68e0(uVar1);
    _CGRectGetMaxY();
    dVar4 = dVar3;
    func_0x00010bf20c00(param_4);
    _CGRectGetMaxY();
    uVar2 = (ulong)(dVar3 <= dVar4);
  }
  _objc_release(uVar1);
LAB_107a73320:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107a73348; end: 107a733eb; -[SCTopicViewerViewController willDismissOperaForTopicStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73348(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010be38e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112768f54);
  func_0x00010c245740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 != 0) &&
     (uVar3 = param_1, func_0x00010bddc2e0(param_1,param_2,uVar2,uVar1), (uVar3 & 1) == 0)) {
    func_0x00010c1525a0(uVar2,param_2,uVar1,2,0);
    func_0x00010c1cbe20(uVar2);
    func_0x00010c08cdc0(uVar2);
  }
  *(undefined1 *)(param_1 + (long)_DAT_112768f84) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a733ec; end: 107a7358b; -[SCTopicViewerViewController _indexPathForSnapWithTopicStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a733ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_112768f60;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar7 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + lVar9);
      func_0x00010c0dfd20(uVar2,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c275680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf529e0();
      _objc_release(uVar8);
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          uVar3 = uVar2;
          func_0x00010c275680();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          uVar3 = uVar4;
          func_0x00010c2756a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((int)uVar5 != 0) {
            puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar8,
                                uVar7 + *(byte *)(param_1 + _DAT_112768f24));
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar2);
            goto LAB_107a73564;
          }
          _objc_release(uVar4);
          uVar8 = uVar8 + 1;
          uVar3 = uVar2;
          func_0x00010c275680();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf529e0();
          _objc_release(uVar3);
        } while (uVar8 < uVar4);
      }
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar8 = *(ulong *)(param_1 + lVar9);
      func_0x00010bf529e0();
    } while (uVar7 < uVar8);
  }
  puVar6 = (undefined *)0x0;
LAB_107a73564:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a7358c; end: 107a7360f; -[SCTopicViewerViewController baseViewForTopicStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7358c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be38e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112768f54);
    func_0x00010c245740(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107a73610; end: 107a73717; -[SCTopicViewerViewController didBeginPlayingStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73610(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112768f2c;
  uVar1 = *(ulong *)(param_1 + lVar6);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleTopicViewerHiddenDueToPres_1125d2560);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfd2ee0(*(undefined8 *)(param_1 + lVar6));
  }
  *(undefined1 *)(param_1 + (long)_DAT_112768f84) = 1;
  uVar1 = param_1;
  func_0x00010be38e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be22c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9300();
  if (((int)uVar3 != 0) && (uVar3 = uVar2, func_0x00010c072d80(), (uVar3 & 1) == 0)) {
    uVar3 = uVar2;
    func_0x00010c275680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    uVar5 = uVar1;
    func_0x00010c0840e0();
    _objc_release(uVar3);
    if (uVar4 - uVar5 < 10) {
      func_0x00010be12ba0(param_1);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a73718; end: 107a73757; -[SCTopicViewerViewController unifiedActionMenuPresenterDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73718(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f7c);
  *(undefined8 *)(param_1 + _DAT_112768f7c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f80);
  *(undefined8 *)(param_1 + _DAT_112768f80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a73758; end: 107a7392f; -[SCTopicViewerViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar8 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar8 != 0) {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      lVar5 = param_1;
      func_0x00010be22c20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c275680();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      if (lVar7 != 0) {
        _objc_initWeak(auStack_68,param_1);
        uVar8 = *(undefined8 *)(param_1 + _DAT_112768f28);
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(uVar2);
        func_0x00010c0f7fc0(uVar8);
        _objc_release(uVar1);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar5);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a73930; end: 107a73963;  */

void FUN_107a73930(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a73964; end: 107a7396f; -[SCTopicViewerViewController defaultProjectNameV2] */

void FUN_107a73964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_spotlight_112670560);
  return;
}



/* Entry: 107a73970; end: 107a73a1f; -[SCTopicViewerViewController _resetMetricsSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73970(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107a73a20; end: 107a73a4b;  */

void FUN_107a73a20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a73a4c; end: 107a73b1f; -[SCTopicViewerViewController _resetMetricsSessionInPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73a4c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112768f68;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar5;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + _DAT_112768f88) = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768f8c);
  *(undefined **)(param_1 + _DAT_112768f8c) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768f90);
  *(undefined **)(param_1 + _DAT_112768f90) = puVar1;
  _objc_release(uVar3);
  lVar5 = (long)_DAT_112768f2c;
  uVar2 = *(ulong *)(param_1 + lVar5);
  _objc_opt_respondsToSelector(uVar2,PTR_s_updateWithSessionId__112680d68);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c28cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar5),PTR_s_updateWithSessionId__112680d68,
               *(undefined8 *)(param_1 + lVar4));
    return;
  }
  return;
}



/* Entry: 107a73b20; end: 107a73bab; -[SCTopicViewerViewController _getSnapsDataProviderForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73b20(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  bVar1 = *(byte *)(param_1 + _DAT_112768f24);
  lVar5 = param_3;
  func_0x00010c1554e0();
  uVar4 = lVar5 - (ulong)bVar1;
  lVar5 = (long)_DAT_112768f60;
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (uVar4 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0dfd20(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107a73bac; end: 107a73cb3; -[SCTopicViewerViewController _logImpressionForAllVisibleCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73bac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f54);
  func_0x00010c245740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 107a73cb4; end: 107a73ce7;  */

void FUN_107a73cb4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a73ce8; end: 107a73ddf; -[SCTopicViewerViewController _logImpressionInPerformerForIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73ce8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar4;
  undefined1 auStack_158 [8];
  undefined1 *puStack_150;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be54ae0(param_1);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107a73de0;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  uStack_130 = param_1;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_148,lVar1);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112768f28);
  _objc_copyWeak(auStack_158,auStack_148);
  puStack_150 = (undefined1 *)puVar2;
  func_0x00010c0f7fc0(uVar3);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 107a73de0; end: 107a73e9f; -[SCTopicViewerViewController _logPageEntryWithEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f28);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a73ea0; end: 107a73ed3;  */

void FUN_107a73ea0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a73ed4; end: 107a73f77; -[SCTopicViewerViewController _logPageEntryInPerformerWithEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768ef8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112768ec4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768f68);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112768f04);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112768f00);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112768ec8);
  func_0x00010be1eee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1c40(uVar1,param_2,uVar2,uVar3,uVar4,uVar5,param_3,uVar6,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a73f78; end: 107a74037; -[SCTopicViewerViewController _logPageExitWithExitType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a73f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f28);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a74038; end: 107a7406b;  */

void FUN_107a74038(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a7406c; end: 107a7421b; -[SCTopicViewerViewController _logPageExitInPerformerWithExitType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7406c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_2 + _DAT_112768f74);
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (*(char *)(param_2 + _DAT_112768f14) == '\x01')) {
    func_0x00010be43e60();
  }
  uVar2 = *(ulong *)(param_2 + _DAT_112768f2c);
  _objc_opt_respondsToSelector(uVar2,PTR_s_hasSoundShareButton_1125d4b70);
  if ((uVar2 & 1) != 0) {
    func_0x00010bfdc6c0();
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar3);
  lVar8 = (long)_DAT_112768ef8;
  uVar6 = *(undefined8 *)(param_2 + lVar8);
  lVar1 = (long)_DAT_112768ec4;
  lVar4 = param_2;
  func_0x00010be23720(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010be1eee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1c60(param_1,uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  uVar6 = *(undefined8 *)(param_2 + lVar1);
  FUN_107cb7e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6340(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107a7421c; end: 107a742cf; -[SCTopicViewerViewController _itemLogParametersForTopicStory:position:] */

void FUN_107a7421c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6208;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2756a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0ed8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01fee0(puVar1,param_2,uVar2,param_4,0xc,0,0,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a742d0; end: 107a744ab; -[SCTopicViewerViewController _logImpressionForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a742d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be22c20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0840e0();
    uVar3 = uVar1;
    func_0x00010c275680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar2 < uVar4) {
      uVar2 = param_3;
      func_0x00010c0840e0(param_3);
      uVar3 = uVar1;
      func_0x00010c275680(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar8 = (long)_DAT_112768f8c;
      uVar5 = *(ulong *)(param_1 + lVar8);
      uVar3 = uVar4;
      func_0x00010c2756a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar5,param_2,uVar3);
      _objc_release(uVar3);
      if ((uVar5 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + lVar8);
        uVar3 = uVar4;
        func_0x00010c2756a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar6,param_2,uVar3);
        _objc_release(uVar3);
        uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112768ef8);
        uVar3 = uVar1;
        func_0x00010c2751c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + (long)_DAT_112768f68);
        uVar5 = param_1;
        func_0x00010be45f60(param_1,param_2,uVar4,uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = 1;
        if (*(char *)(param_1 + (long)_DAT_112768f88) != '\0') {
          uVar6 = 2;
        }
        func_0x00010c0b1c20(uVar7,param_2,uVar3,uVar9,uVar5,uVar6,
                            *(undefined8 *)(param_1 + (long)_DAT_112768ec8));
        _objc_release(uVar5);
        _objc_release(uVar3);
      }
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a744ac; end: 107a74597; -[SCTopicViewerViewController _logActionForTopicStory:actionType:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a744ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768ef8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112768ec4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112768f68);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112768f00);
  lVar1 = param_1;
  func_0x00010be45f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112768ec8);
  lVar2 = param_1;
  func_0x00010be23720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1eee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1c00(uVar3,param_2,uVar4,uVar5,uVar6,lVar1,param_4,uVar7,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a74598; end: 107a745e7; -[SCTopicViewerViewController _getExtraLoggingParamsFromHeaderProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a74598(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768f2c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_extraLoggingParams_1125c53f8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf9e940(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a745e8; end: 107a745fb; -[SCTopicViewerViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a745e8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112768f88) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be12b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMoreIfNearBottom__112562460);
  return;
}



/* Entry: 107a745fc; end: 107a747e7; -[SCTopicViewerViewController _fetchMoreIfNearBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a745fc(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined1 *param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  puVar5 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_7;
  _objc_retain(param_7);
  if (*(char *)(param_5 + _DAT_112768f44) == '\x01') {
    func_0x00010bf4d5e0(param_7);
    dVar11 = param_2;
    func_0x00010bf4cdc0(param_7);
    func_0x00010bf20c00(param_7);
    dVar11 = (param_2 - dVar11) - param_4;
    func_0x00010bf20c00(param_7);
    if (dVar11 < param_4) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar6 = *(long *)(param_5 + _DAT_112768f60);
      _objc_retain(lVar6);
      lVar1 = lVar6;
      func_0x00010bf52a60();
      if (lVar1 == 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7 = (undefined1 *)0x0;
        lVar9 = *plStack_130;
        do {
          lVar10 = 0;
          do {
            if (*plStack_130 != lVar9) {
              _objc_enumerationMutation(lVar6);
            }
            puVar8 = *(undefined1 **)(lStack_138 + lVar10 * 8);
            puVar2 = puVar8;
            func_0x00010c07b180();
            if (((ulong)puVar2 & 1) == 0) {
              puVar2 = puVar8;
              func_0x00010c275680();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar2;
              func_0x00010bf529e0();
              _objc_release(puVar2);
              if (puVar3 != (undefined1 *)0x0) goto LAB_107a74728;
            }
            else {
LAB_107a74728:
              _objc_retain(puVar8);
              _objc_release(puVar7);
              puVar7 = puVar8;
            }
            lVar10 = lVar10 + 1;
          } while (lVar1 != lVar10);
          lVar1 = lVar6;
          puVar5 = &uStack_140;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(lVar6);
      puVar2 = puVar7;
      func_0x00010bfd9300();
      if (((int)puVar2 != 0) && (puVar2 = puVar7, func_0x00010c072d80(), ((ulong)puVar2 & 1) == 0))
      {
        puVar5 = (undefined8 *)puVar7;
        func_0x00010be12ba0(param_5);
      }
      _objc_release(puVar7);
      puVar7 = (undefined1 *)puVar5;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  if ((param_7[_DAT_112768f24] != '\x01') ||
     (puVar2 = puVar7, func_0x00010c1554e0(), puVar2 != (undefined1 *)0x0)) {
    puVar2 = param_7;
    func_0x00010be22c20(param_7,param_6,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bfd9300();
    if (((int)puVar8 != 0) && (puVar8 = puVar2, func_0x00010c072d80(), ((ulong)puVar8 & 1) == 0)) {
      puVar8 = puVar2;
      func_0x00010c275680();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010bf529e0();
      puVar4 = puVar7;
      func_0x00010c0840e0();
      _objc_release(puVar8);
      if ((long)puVar3 - (long)puVar4 < 0xd) {
        func_0x00010be12ba0(param_7,param_6,puVar2);
      }
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107a747e8; end: 107a748bb; -[SCTopicViewerViewController _fetchMoreForProviderAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a747e8(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + (long)_DAT_112768f24) != '\x01') ||
     (lVar1 = param_3, func_0x00010c1554e0(), lVar1 != 0)) {
    uVar2 = param_1;
    func_0x00010be22c20(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd9300();
    if (((int)uVar3 != 0) && (uVar3 = uVar2, func_0x00010c072d80(), (uVar3 & 1) == 0)) {
      uVar3 = uVar2;
      func_0x00010c275680();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      lVar1 = param_3;
      func_0x00010c0840e0();
      _objc_release(uVar3);
      if ((long)(uVar4 - lVar1) < 0xd) {
        func_0x00010be12ba0(param_1,param_2,uVar2);
      }
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a748bc; end: 107a748db; -[SCTopicViewerViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a748bc(long param_1)

{
  undefined8 in_x4;
  
  if (*(char *)(param_1 + _DAT_112768f44) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be12ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fetchMoreForProviderAtIndexPath_112562450,in_x4);
    return;
  }
  return;
}



/* Entry: 107a748dc; end: 107a74a3f; -[SCTopicViewerViewController _fetchMoreForVisiblePlaceholdersIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a748dc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  if (*(char *)(param_1 + _DAT_112768f44) == '\x01') {
    lVar13 = (long)_DAT_112768f54;
    lVar2 = *(long *)(param_1 + lVar13);
    func_0x00010c245740();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    param_4 = auStack_d8;
    lVar2 = lVar12;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010be12ac0(param_1);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      param_4 = auStack_d8;
      lVar2 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
    lVar2 = *(long *)(param_1 + lVar13);
    func_0x00010c245740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be12b00(param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar3 = param_4;
  func_0x00010c0ba1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar5 == (undefined1 *)0x0) {
      _objc_release(puVar3);
      _objc_retain(puVar4);
      puVar8 = puVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      do {
        if (puVar8 == (undefined *)0x0) {
          _objc_release(puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(param_4);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
            return;
          }
          ___stack_chk_fail();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c1554e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_numberWithInteger__1126157f8,param_2);
          return;
        }
        puVar14 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar4);
          }
          uVar16 = *(ulong *)((long)puVar14 * 8);
          uVar9 = uVar16;
          func_0x00010bfd9300();
          if (((int)uVar9 != 0) && (uVar9 = uVar16, func_0x00010c072d80(), (uVar9 & 1) == 0)) {
            _objc_retain(param_4);
            puVar5 = param_4;
            func_0x00010bf52a60();
            lVar13 = lRam0000000000000000;
            while (puVar5 != (undefined1 *)0x0) {
              puVar17 = (undefined1 *)0x0;
              do {
                if (lRam0000000000000000 != lVar13) {
                  _objc_enumerationMutation(param_4);
                }
                uVar10 = *(ulong *)((long)puVar17 * 8);
                func_0x00010c0840e0();
                uVar9 = uVar16;
                func_0x00010c275680();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar9;
                func_0x00010bf529e0();
                _objc_release(uVar9);
                if (uVar11 <= uVar10) {
                  _objc_release(param_4);
                  func_0x00010be12ba0(lVar2);
                  goto LAB_107a74d1c;
                }
                puVar17 = puVar17 + 1;
              } while (puVar5 != puVar17);
              puVar5 = param_4;
              func_0x00010bf52a60();
            }
            _objc_release(param_4);
          }
LAB_107a74d1c:
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar8);
        puVar8 = puVar4;
        func_0x00010bf52a60();
      } while( true );
    }
    puVar17 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      lVar13 = *(long *)((long)puVar17 * 8);
      lVar15 = (long)_DAT_112768f24;
      if (*(char *)(lVar2 + lVar15) == '\x01') {
        lVar6 = lVar13;
        func_0x00010c067fc0();
        if (lVar6 != 0) {
          if (*(char *)(lVar2 + lVar15) != '\x01') goto LAB_107a74b58;
          func_0x00010c067fc0(lVar13);
          goto LAB_107a74b64;
        }
      }
      else {
LAB_107a74b58:
        func_0x00010c067fc0(lVar13);
LAB_107a74b64:
        uVar7 = *(undefined8 *)(lVar2 + _DAT_112768f60);
        func_0x00010c0dfd20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar7);
      }
      puVar17 = puVar17 + 1;
    } while (puVar5 != puVar17);
    puVar5 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107a74a40; end: 107a74da3; -[SCTopicViewerViewController collectionView:prefetchItemsAtIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a74a40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0ba1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar1);
      _objc_retain(puVar2);
      puVar6 = puVar2;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      do {
        if (puVar6 == (undefined *)0x0) {
          _objc_release(puVar2);
          _objc_release(puVar2);
          _objc_release(lVar1);
          _objc_release(param_4);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
            return;
          }
          ___stack_chk_fail();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c1554e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_numberWithInteger__1126157f8,param_2);
          return;
        }
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar2);
          }
          uVar14 = *(ulong *)((long)puVar12 * 8);
          uVar7 = uVar14;
          func_0x00010bfd9300();
          if (((int)uVar7 != 0) && (uVar7 = uVar14, func_0x00010c072d80(), (uVar7 & 1) == 0)) {
            _objc_retain(param_4);
            lVar8 = param_4;
            func_0x00010bf52a60();
            lVar15 = lRam0000000000000000;
            while (lVar8 != 0) {
              lVar13 = 0;
              do {
                if (lRam0000000000000000 != lVar15) {
                  _objc_enumerationMutation(param_4);
                }
                uVar9 = *(ulong *)(lVar13 * 8);
                func_0x00010c0840e0();
                uVar7 = uVar14;
                func_0x00010c275680();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar7;
                func_0x00010bf529e0();
                _objc_release(uVar7);
                if (uVar10 <= uVar9) {
                  _objc_release(param_4);
                  func_0x00010be12ba0(param_1);
                  goto LAB_107a74d1c;
                }
                lVar13 = lVar13 + 1;
              } while (lVar8 != lVar13);
              lVar8 = param_4;
              func_0x00010bf52a60();
            }
            _objc_release(param_4);
          }
LAB_107a74d1c:
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar6);
        puVar6 = puVar2;
        func_0x00010bf52a60();
      } while( true );
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar1);
      }
      lVar13 = *(long *)(lVar15 * 8);
      lVar16 = (long)_DAT_112768f24;
      if (*(char *)(param_1 + lVar16) == '\x01') {
        lVar4 = lVar13;
        func_0x00010c067fc0();
        if (lVar4 != 0) {
          if (*(char *)(param_1 + lVar16) != '\x01') goto LAB_107a74b58;
          func_0x00010c067fc0(lVar13);
          goto LAB_107a74b64;
        }
      }
      else {
LAB_107a74b58:
        func_0x00010c067fc0(lVar13);
LAB_107a74b64:
        uVar5 = *(undefined8 *)(param_1 + _DAT_112768f60);
        func_0x00010c0dfd20(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar5);
      }
      lVar15 = lVar15 + 1;
    } while (lVar3 != lVar15);
    lVar3 = lVar1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107a74da4; end: 107a74dd3;  */

void FUN_107a74da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c1554e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 107a74dd4; end: 107a74e7f; -[SCTopicViewerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107a74dd4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + _DAT_112768f84) & 1) == 0) {
    lVar1 = *(long *)(param_3 + _DAT_112768f54);
    if (param_5 == lVar1) {
      func_0x00010c245740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cdc0();
      func_0x00010befda00(lVar1);
      bVar2 = param_2 + param_1 <= 0.0;
      _objc_release(lVar1);
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_5);
  return bVar2;
}



/* Entry: 107a74e80; end: 107a74e83; -[SCTopicViewerViewController cardToExpandTransition] */

void FUN_107a74e80(void)

{
  return;
}



/* Entry: 107a74e84; end: 107a74ef3; -[SCTopicViewerViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a74e84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f54);
  func_0x00010c245740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112768f78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2759c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a74ef4; end: 107a74f7b; -[SCTopicViewerViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a74ef4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768f54);
  func_0x00010c245740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar1);
  if (param_4 == 1) {
    param_1 = param_1 + _DAT_112768f78;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2759a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a74f7c; end: 107a7502b; -[SCTopicViewerViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_107a74f7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f98a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc20(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 107a7502c; end: 107a75033; -[SCTopicViewerViewController preferredStatusBarStyle] */

undefined8 FUN_107a7502c(void)

{
  return 0;
}



/* Entry: 107a75034; end: 107a7503b; -[SCTopicViewerViewController prefersStatusBarHidden] */

undefined8 FUN_107a75034(void)

{
  return 0;
}



/* Entry: 107a7503c; end: 107a75093; -[SCTopicViewerViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a7503c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768f0c;
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



/* Entry: 107a75094; end: 107a7509b; -[SCTopicViewerViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_107a75094(void)

{
  return 1;
}


