/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fa0794; end: 107fa07ab;  */

void FUN_107fa0794(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107fa07ac; end: 107fa0a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa07ac(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_6);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_60 = param_2[2];
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    _objc_release(puVar2);
    if (lVar7 != 0x7fffffffffffffff) {
      if (param_3 != 0 && param_6 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9240();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c2485a0();
        puVar3 = puVar2;
        if ((uVar4 & 1) == 0) {
          if (*(char *)(uVar1 + (long)_DAT_112772800) == '\x01') {
            func_0x00010c14e6c0(*(undefined8 *)(uVar1 + (long)_DAT_112772758),
                                ((undefined8 *)(uVar1 + (long)_DAT_112772758))[1],0x3ff0000000000000
                                ,puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
          }
          uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
          func_0x00010c0dfd40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf43d60();
          _objc_release(uVar6);
        }
        else {
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0xc2000000;
          pcStack_a0 = FUN_107fa0a58;
          puStack_98 = &UNK_110889e90;
          _objc_copyWeak(auStack_80,param_1 + 0x48);
          _objc_retain(puVar2);
          uStack_88 = *(undefined8 *)(param_1 + 0x30);
          puStack_90 = puVar2;
          lStack_78 = lVar7;
          func_0x000100162d98("APPSTORE",&puStack_b0);
          _objc_release(puStack_90);
          _objc_destroyWeak(auStack_80);
        }
      }
      else {
        puVar3 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        func_0x00010c0dfd40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0();
      }
      _objc_release(puVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      _objc_sync_enter(uVar6);
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + (ulong)(param_3 == 0 || param_6 != 0);
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      lVar7 = *(long *)(lVar5 + 0x18) + -1;
      *(long *)(lVar5 + 0x18) = lVar7;
      if (lVar7 == 0) {
        func_0x00010bf956e0(*(undefined8 *)(uVar1 + (long)_DAT_112772740));
      }
      _objc_sync_exit(uVar6);
      _objc_release(uVar6);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 107fa0a58; end: 107fa0b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0a58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  ulong uVar7;
  double dVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double adStack_70 [6];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112772748) == 0) {
      adStack_70[3] = 0.0;
      adStack_70[2] = 0.0;
      adStack_70[5] = 0.0;
      adStack_70[4] = 0.0;
      adStack_70[1] = 0.0;
      adStack_70[0] = 0.0;
      fVar6 = 0.0;
      fVar4 = 0.0;
    }
    else {
      func_0x00010c27a460(adStack_70);
      fVar4 = (float)adStack_70[0];
      fVar6 = (float)adStack_70[2];
    }
    uVar7 = (ulong)(uint)fVar6;
    dVar5 = (double)(ulong)(uint)fVar4;
    _hypotf(dVar5,uVar7);
    dVar8 = 1.0;
    if (SUB84(dVar5,0) != 0.0) {
      dVar5 = (double)SUB84(dVar5,0);
      uVar7 = 0x3ff0000000000000;
      dVar8 = 1.0 / dVar5;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010c1245e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c2bc40();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107fa0b80;
    puStack_88 = &UNK_110a15fe8;
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    FUN_107fb9efc(dVar8,dVar5,uVar7,uVar3,lVar2,&puStack_a0);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107fa0b80; end: 107fa0be3;  */

void FUN_107fa0b80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fa0be4; end: 107fa0c57; -[SCSmartVideoSwipeFilterView currentPlayingAVAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0be4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_1127727b8) == '\x01') {
    param_1 = param_1 + _DAT_1127727a8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0ed3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_1127727b4);
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107fa0c58; end: 107fa0c9f; -[SCSmartVideoSwipeFilterView currentTimelineVideoAVAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0c58(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127727a8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0b060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107fa0ca0; end: 107fa0ce7; -[SCSmartVideoSwipeFilterView currentTimelineAssetVideoComposition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0ca0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127727a8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0b960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107fa0ce8; end: 107fa0d2f; -[SCSmartVideoSwipeFilterView currentTimelineVideoSourceRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_107fa0ce8(double param_1,long param_2)

{
  param_2 = param_2 + _DAT_1127727a8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c11fdc0();
  _objc_release(param_2);
  return (float)param_1;
}



/* Entry: 107fa0d30; end: 107fa0dcf; -[SCSmartVideoSwipeFilterView setSnapAtIndex:enabled:] */

/* WARNING: Possible PIC construction at 0x000107fa0d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fa0d80) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0d30(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + _DAT_1127727b8) == '\x01') {
    if (param_4 == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010be9dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectSnapAtIndexPath__1125850a8,puVar1);
    return;
  }
  if (param_4 == 0) {
    func_0x00010c12cb40(*(undefined8 *)(param_1 + _DAT_1127727f4));
  }
  else {
    func_0x00010bef92c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee3450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateVideoLoopStartTimestamp_1125966b8);
  return;
}



/* Entry: 107fa0dd0; end: 107fa0f87; -[SCSmartVideoSwipeFilterView seekToStartOfSnapAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + _DAT_1127727b8) == '\x01') {
    lVar4 = (long)_DAT_1127727ac;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127727a4);
      func_0x00010bfb70c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bfecde0(uVar1,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(uVar1);
      func_0x00010bdd2d20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c157220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112772798);
    uVar1 = uVar3;
    func_0x00010c07cb00();
    if ((int)uVar1 == 0) {
      lVar2 = *(long *)(param_1 + _DAT_1127727bc);
      func_0x00010c0dfd40(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_c0,lVar2);
      }
      uStack_58 = uStack_b8;
      uStack_60 = uStack_c0;
      uStack_50 = uStack_b0;
    }
    else {
      lVar2 = *(long *)(param_1 + _DAT_1127727bc);
      func_0x00010c0dfd40(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_90,lVar2);
      }
      _CMTimeRangeGetEnd(&uStack_60,&uStack_90);
    }
    func_0x00010c157260(uVar3,param_2,&uStack_60);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 107fa0f88; end: 107fa0f97; -[SCSmartVideoSwipeFilterView seekToBeginning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1573b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772798),PTR_s_seekVideoAndAudioToBeginning_112633708)
  ;
  return;
}



/* Entry: 107fa0f98; end: 107fa1103; -[SCSmartVideoSwipeFilterView stopPlayingAndSeekSmoothlyToSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa0f98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  uStack_50 = *(undefined4 *)(PTR__kCMTimeInvalid_110348648 + 8);
  if (*(long *)(param_2 + _DAT_1127727b4) == 0) {
    lVar10 = (long)_DAT_1127727ac;
    uVar8 = param_2 + lVar10;
    _objc_loadWeakRetained();
    uVar7 = uVar8;
    _objc_release();
    if (uVar8 == 0) {
      uVar11 = uStack_70;
      uVar2 = uStack_68;
      uVar5 = *(uint *)(puVar1 + 0xc);
      uVar3 = uStack_64;
      uVar6 = *(undefined8 *)(puVar1 + 0x10);
      uVar4 = uStack_60;
      uStack_70 = uStack_58;
      uStack_68 = uStack_50;
    }
    else {
      uVar7 = param_2 + lVar10;
      _objc_loadWeakRetained();
      if (uVar7 == 0) {
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_88,uVar7);
      }
      _CMTimeMakeWithSeconds(&uStack_70,param_1);
      uVar6 = uStack_60;
      uVar5 = uStack_64;
      uStack_58 = uStack_70;
      uStack_50 = uStack_68;
      _objc_release();
      uVar11 = uStack_70;
      uVar2 = uStack_68;
      uVar3 = uStack_64;
      uVar4 = uStack_60;
      uStack_70 = uStack_58;
      uStack_68 = uStack_50;
    }
  }
  else {
    func_0x00010bf8b160(&uStack_88);
    uVar7 = uStack_80 & 0xffffffff;
    _CMTimeMakeWithSeconds(&uStack_70,param_1);
    uVar11 = uStack_70;
    uVar2 = uStack_68;
    uVar5 = uStack_64;
    uVar3 = uStack_64;
    uVar6 = uStack_60;
    uVar4 = uStack_60;
  }
  uStack_60 = uVar6;
  uStack_64 = uVar5;
  uStack_58 = uStack_70;
  uStack_50 = uStack_68;
  if ((uStack_64 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + _DAT_112772798);
    param_4 = &uStack_70;
    func_0x00010c256620();
    uVar11 = uStack_70;
    uVar2 = uStack_68;
    uVar3 = uStack_64;
    uVar4 = uStack_60;
  }
  uStack_60 = uVar4;
  uStack_64 = uVar3;
  uStack_68 = uVar2;
  uStack_70 = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  lVar10 = (long)_DAT_112772798;
  if (*(long *)(uVar7 + lVar10) == 0) {
    if (param_4 != (undefined8 *)0x0) {
      (*(code *)param_4[2])(param_4);
    }
  }
  else {
    *(undefined1 *)(uVar7 + (long)_DAT_11277280c) = 1;
    func_0x00010c2504a0(*(undefined8 *)(uVar7 + lVar10));
    puVar9 = param_4;
    _objc_retainBlock();
    uVar11 = *(undefined8 *)(uVar7 + (long)_DAT_112772810);
    *(undefined8 **)(uVar7 + (long)_DAT_112772810) = puVar9;
    _objc_release(uVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107fa1104; end: 107fa1193; -[SCSmartVideoSwipeFilterView startRunningFromBeginning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1104(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = (long)_DAT_112772798;
  if (*(long *)(param_1 + lVar1) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    *(undefined1 *)(param_1 + _DAT_11277280c) = 1;
    func_0x00010c2504a0(*(undefined8 *)(param_1 + lVar1));
    lVar1 = param_3;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112772810);
    *(long *)(param_1 + _DAT_112772810) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa1194; end: 107fa1247; -[SCSmartVideoSwipeFilterView _updateVideoLoopStartTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1194(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar3 = (long)_DAT_1127727f4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfb16e0(uVar2);
  }
  lVar1 = *(long *)(param_1 + _DAT_1127727bc);
  func_0x00010c0dfd40(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_50,lVar1);
  }
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_60 = uStack_40;
  func_0x00010c209aa0(*(undefined8 *)(param_1 + _DAT_112772798),param_2,&uStack_70);
  _objc_release(lVar1);
  return;
}



/* Entry: 107fa1248; end: 107fa130f; -[SCSmartVideoSwipeFilterView _nextSnapIndexForSnapAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fa1248(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_1;
  func_0x00010be42080();
  if ((int)lVar6 == 0) {
    uVar5 = param_1 + _DAT_1127727a8;
    _objc_loadWeakRetained();
    uVar4 = uVar5;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    uVar4 = *(ulong *)(param_1 + _DAT_1127727bc);
    _objc_retain(uVar4);
  }
  if (uVar4 == 0) {
    lVar6 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112772798);
    func_0x00010c07cb00();
    if (iVar2 == 0) {
      uVar5 = param_3 + 1;
    }
    else {
      uVar5 = uVar4;
      func_0x00010bf529e0(uVar4);
      uVar5 = (param_3 + uVar5) - 1;
    }
    uVar3 = uVar4;
    func_0x00010bf529e0();
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar5 / uVar3;
    }
    lVar6 = uVar5 - uVar1 * uVar3;
  }
  _objc_release(uVar4);
  return lVar6;
}



/* Entry: 107fa1310; end: 107fa17f3; -[SCSmartVideoSwipeFilterView videoPlaybackSession:willRenderFrame:atTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1310(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  _objc_retain(param_3);
  if ((*(byte *)((long)param_5 + 0xc) & 1) == 0) {
    uStack_a8 = param_5[1];
    uStack_b0 = *param_5;
    uStack_a0 = param_5[2];
    _CMTimeCopyDescription(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,&uStack_b0);
    goto LAB_107fa1738;
  }
  uStack_a8 = param_5[1];
  uStack_b0 = *param_5;
  uStack_a0 = param_5[2];
  func_0x00010c29ab60(*(undefined8 *)(param_1 + (long)_DAT_11277274c));
  if (param_3 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bf5f0c0(&uStack_b0,param_3);
  }
  uStack_f8 = param_5[1];
  uStack_100 = *param_5;
  uStack_f0 = param_5[2];
  _CMTimeSubtract(&uStack_c8,&uStack_100,&uStack_b0);
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_a0 = uStack_b8;
  func_0x00010c114ae0(*(undefined8 *)(param_1 + (long)_DAT_1127727e0));
  if (*(char *)(param_1 + (long)_DAT_11277280c) == '\x01') {
    func_0x00010be172c0(param_1);
  }
  puVar7 = (undefined8 *)(param_1 + (long)_DAT_112772814);
  uVar9 = param_5[2];
  uVar10 = *param_5;
  puVar7[1] = param_5[1];
  *puVar7 = uVar10;
  puVar7[2] = uVar9;
  lVar13 = param_3;
  func_0x00010c07a400();
  if ((int)lVar13 == 0) goto LAB_107fa173c;
  uVar4 = param_1;
  func_0x00010be42080();
  if ((int)uVar4 == 0) {
    uVar4 = param_1 + (long)_DAT_1127727a8;
    _objc_loadWeakRetained();
    uVar11 = uVar4;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    uVar11 = *(ulong *)(param_1 + (long)_DAT_1127727bc);
    _objc_retain(uVar11);
  }
  if (uVar11 != 0) {
    lVar13 = (long)_DAT_1127727f8;
    uVar12 = *(ulong *)(param_1 + lVar13);
    uVar4 = uVar11;
    func_0x00010bf529e0();
    if (uVar12 < uVar4) {
      do {
        uVar4 = uVar11;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_100,uVar4);
        }
        uVar16 = param_5[1];
        uVar9 = *param_5;
        uVar10 = param_5[2];
        uStack_a8 = uStack_f8;
        uStack_b0 = uStack_100;
        uStack_a0 = uStack_f0;
        uStack_78 = param_5[1];
        uVar15 = *param_5;
        uStack_70 = param_5[2];
        puVar5 = &uStack_b0;
        uStack_80 = uVar15;
        _CMTimeCompare(puVar5,&uStack_80);
        if ((int)puVar5 < 1) {
          uStack_a8 = uStack_f8;
          uStack_b0 = uStack_100;
          uStack_98 = uStack_e8;
          uStack_a0 = uStack_f0;
          uStack_88 = uStack_d8;
          uStack_90 = uStack_e0;
          _CMTimeRangeGetEnd(&uStack_80,&uStack_b0);
          puVar5 = &uStack_80;
          uStack_b0 = uVar9;
          uStack_a8 = uVar16;
          uStack_a0 = uVar10;
          _CMTimeCompare(puVar5,&uStack_b0);
          _objc_release(uVar4);
          if (-1 < (int)puVar5) {
            bVar2 = true;
            goto LAB_107fa15c8;
          }
        }
        else {
          _objc_release(uVar4);
          uVar9 = uVar15;
        }
        uVar12 = param_1;
        func_0x00010be63b80();
      } while (uVar12 != *(ulong *)(param_1 + lVar13));
      uVar12 = param_1;
      func_0x00010be63b80();
      bVar2 = false;
LAB_107fa15c8:
      if ((*(byte *)(param_1 + (long)_DAT_1127727b8) & 1) == 0) {
        lVar14 = (long)_DAT_1127727f4;
        lVar6 = *(long *)(param_1 + lVar14);
        func_0x00010bf529e0();
        uVar4 = uVar12;
        while (lVar6 != 0) {
          uVar11 = *(ulong *)(param_1 + lVar14);
          func_0x00010bf4b800();
          if ((uVar11 & 1) != 0) break;
          uVar4 = param_1;
          func_0x00010be63b80();
          lVar6 = *(long *)(param_1 + lVar14);
          func_0x00010bf529e0();
        }
        lVar6 = (long)_DAT_112772798;
        iVar3 = (int)*(undefined8 *)(param_1 + lVar6);
        func_0x00010c07cb40();
        if (iVar3 == 0) {
LAB_107fa1678:
          bVar1 = false;
          if (uVar4 == uVar12) {
            bVar1 = bVar2;
          }
          if (!bVar1) {
            _CACurrentMediaTime();
            *(undefined8 *)(param_1 + (long)_DAT_112772818) = uVar9;
            func_0x00010c157240(param_1);
            uVar12 = uVar4;
          }
        }
        else {
          bVar1 = false;
          if (uVar12 == *(ulong *)(param_1 + lVar13)) {
            bVar1 = bVar2;
          }
          if (bVar1) goto LAB_107fa1678;
          func_0x00010bfafb20(*(undefined8 *)(param_1 + lVar6));
          uVar12 = *(ulong *)(param_1 + lVar13);
        }
        if ((*(ulong *)(param_1 + lVar13) == uVar12) &&
           (*(char *)(param_1 + (long)_DAT_112772804) != '\x01')) {
          if (!bVar2) {
            lVar13 = *(long *)(param_1 + (long)_DAT_1127727bc);
            func_0x00010bf529e0();
            if (lVar13 == 1) {
              uStack_a8 = param_5[1];
              uStack_b0 = *param_5;
              uStack_a0 = param_5[2];
              uStack_f8 = puVar7[1];
              uStack_100 = *puVar7;
              uStack_f0 = puVar7[2];
              puVar7 = &uStack_b0;
              _CMTimeCompare(puVar7,&uStack_100);
              if (0 < (int)puVar7) {
                uVar9 = *(undefined8 *)(param_1 + (long)_DAT_112772794);
                puVar8 = PTR_PTR_1126d8a10;
                func_0x00010c2a6720(PTR_PTR_1126d8a10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0d9840(uVar9);
                _objc_release(puVar8);
              }
            }
          }
        }
        else {
          *(ulong *)(param_1 + lVar13) = uVar12;
          iVar3 = (int)*(undefined8 *)(param_1 + lVar6);
          func_0x00010c07cb40();
          lVar13 = (long)_DAT_112772804;
          if (iVar3 == 0) {
            puVar8 = PTR_PTR_1126d8a10;
            func_0x00010bf78460(PTR_PTR_1126d8a10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(*(undefined8 *)(param_1 + (long)_DAT_112772794));
            _objc_release(puVar8);
          }
          *(undefined1 *)(param_1 + lVar13) = 0;
        }
      }
      else {
        iVar3 = (int)*(undefined8 *)(param_1 + (long)_DAT_112772798);
        func_0x00010c07cb40();
        if (iVar3 != 0) {
          bVar2 = (bool)(bVar2 ^ 1);
          if (uVar12 == *(ulong *)(param_1 + lVar13)) {
            bVar2 = true;
          }
          if (!bVar2) {
            *(ulong *)(param_1 + lVar13) = uVar12;
          }
        }
      }
    }
  }
LAB_107fa1738:
  _objc_release();
LAB_107fa173c:
  _objc_release(param_3);
  return;
}



/* Entry: 107fa17f4; end: 107fa1a0f; -[SCSmartVideoSwipeFilterView videoPlaybackSession:didRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa17f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_1127727b8) & 1) == 0) {
    if ((*(byte *)(param_1 + _DAT_11277281c) & 1) != 0) goto LAB_107fa19ac;
    *(undefined1 *)(param_1 + _DAT_11277281c) = 1;
    func_0x00010be52460(param_1);
    uVar4 = 0;
  }
  else {
    lVar7 = (long)_DAT_1127727ac;
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained();
    if (lVar1 == 0) goto LAB_107fa19ac;
    uVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bf78c40();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) goto LAB_107fa19ac;
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c18da00();
    _objc_release(lVar1);
    if ((*(byte *)(param_1 + _DAT_11277281c) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_11277281c) = 1;
      lVar1 = param_1;
      func_0x00010be3e5e0();
      if ((int)lVar1 != 0) {
        uVar4 = *(undefined8 *)(param_1 + _DAT_112772760);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1840();
        _objc_release(uVar4);
      }
      lVar1 = param_1 + _DAT_1127727a8;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010be52460(param_1);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127727a4);
    func_0x00010bfb70c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    uVar4 = uVar5;
    func_0x00010bfecde0(uVar5,param_2,lVar7);
    _objc_release(lVar7);
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112772794);
  puVar6 = PTR_PTR_1126d8a10;
  func_0x00010bf79be0(PTR_PTR_1126d8a10,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar6);
  _objc_release(puVar6);
LAB_107fa19ac:
  if (0.0 < *(double *)(param_1 + _DAT_112772818)) {
    *(undefined8 *)(param_1 + _DAT_112772818) = 0;
  }
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  func_0x00010c29ab40(*(undefined8 *)(param_1 + _DAT_11277274c),param_2,param_3,&uStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 107fa1a10; end: 107fa1a1f; -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidStartRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277274c),
             PTR_s_videoPlaybackSessionDidStartRunn_112684518);
  return;
}



/* Entry: 107fa1a20; end: 107fa1a2f; -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidStopRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277274c),
             PTR_s_videoPlaybackSessionDidStopRunni_112684520);
  return;
}



/* Entry: 107fa1a30; end: 107fa1a3f; -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidPauseRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277274c),
             PTR_s_videoPlaybackSessionDidPauseRunn_112684508);
  return;
}



/* Entry: 107fa1a40; end: 107fa1a4f; -[SCSmartVideoSwipeFilterView videoPlaybackSessionDidResumeRunning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277274c),
             PTR_s_videoPlaybackSessionDidResumeRun_112684510);
  return;
}



/* Entry: 107fa1a50; end: 107fa1aaf; -[SCSmartVideoSwipeFilterView videoPlaybackSessionPlayerItemFailedToSetup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1a50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_1127727b8) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772794);
  puVar1 = PTR_PTR_1126d8a10;
  func_0x00010c100b80(PTR_PTR_1126d8a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fa1ab0; end: 107fa1afb; -[SCSmartVideoSwipeFilterView videoPlaybackSessionPlayerItemStatusFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1ab0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772794);
  puVar1 = PTR_PTR_1126d8a10;
  func_0x00010c100bc0(PTR_PTR_1126d8a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fa1afc; end: 107fa1b63; -[SCSmartVideoSwipeFilterView cancelRewinding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1afc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar3 = (long)_DAT_112772798;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c07cb40();
  if (iVar2 != 0) {
    func_0x00010bfafb20(*(undefined8 *)(param_1 + lVar3));
    puVar1 = (undefined8 *)(param_1 + _DAT_112772814);
    uStack_38 = puVar1[1];
    uStack_40 = *puVar1;
    uStack_30 = puVar1[2];
    func_0x00010c157260(*(undefined8 *)(param_1 + lVar3),param_2,&uStack_40);
  }
  return;
}



/* Entry: 107fa1b64; end: 107fa1bf7; -[SCSmartVideoSwipeFilterView currentPlayingFrameSourceIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa1b64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127727ac;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127727a4);
    func_0x00010bfb70c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    uVar3 = uVar2;
    func_0x00010bfecde0(uVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 107fa1bf8; end: 107fa1c6b; -[SCSmartVideoSwipeFilterView currentPlayingVideoIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fa1bf8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_1127727f8);
  lVar1 = param_1 + _DAT_112772780;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 == 3) {
    func_0x00010bf5e820();
    lVar3 = 0;
    if (param_1 != 0x7fffffffffffffff) {
      lVar3 = param_1;
    }
  }
  return lVar3;
}



/* Entry: 107fa1c6c; end: 107fa1e63; -[SCSmartVideoSwipeFilterView currentEditingVideoSegmentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fa1c6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112772780;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 < 3) {
    if (lVar2 != 1) {
      if (lVar2 != 2) {
        return 0x7fffffffffffffff;
      }
      param_1 = param_1 + _DAT_112772784;
      _objc_loadWeakRetained();
      lVar1 = param_1;
      func_0x00010bf16da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      lVar4 = lVar1;
      func_0x00010010fab4(lVar1,PTR_DAT_1126a5aa8);
      lVar2 = lVar1;
      if ((int)lVar4 == 0) {
        lVar2 = 0;
      }
      _objc_retain(lVar2);
      _objc_release(lVar1);
      lVar4 = lVar2;
      func_0x00010bf8c820(lVar2);
      goto LAB_107fa1e48;
    }
    param_1 = param_1 + _DAT_112772784;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c0d2600();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar2 != 3) {
      if (lVar2 != 4) {
        return 0x7fffffffffffffff;
      }
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained();
      lVar2 = param_1;
      func_0x00010bf7f7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      lVar1 = lVar2;
      func_0x00010c159f00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar4 = 0x7fffffffffffffff;
      }
      else {
        lVar4 = lVar2;
        func_0x00010c0c45a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar4 = lVar3;
        func_0x00010bfecde0(lVar3);
        _objc_release(lVar3);
      }
      _objc_release(lVar1);
      goto LAB_107fa1e48;
    }
    param_1 = param_1 + _DAT_112772784;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c270400();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  lVar4 = lVar1;
  func_0x00010010fab4(lVar1,PTR_DAT_1126a5aa0);
  lVar2 = lVar1;
  if ((int)lVar4 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar1);
  lVar4 = lVar2;
  func_0x00010bf8c7a0(lVar2);
LAB_107fa1e48:
  _objc_release(lVar2);
  return lVar4;
}



/* Entry: 107fa1e64; end: 107fa1f33; -[SCSmartVideoSwipeFilterView setBackgroundCommandWithColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfba8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c274320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf20040(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0541c0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c2004e0(puVar1,param_2,1);
  func_0x00010c16e3c0(*(undefined8 *)(param_1 + _DAT_112772798),param_2,puVar1);
  func_0x00010c16e660(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fa1f34; end: 107fa1f87; -[SCSmartVideoSwipeFilterView _finishStartRunningFromBeginningRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1f34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_11277280c) = 0;
  lVar2 = (long)_DAT_112772810;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107fa1f88; end: 107fa20b7; -[SCSmartVideoSwipeFilterView videoPlaybackSessionWillLoopVideo:currentPlayerTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa1f88(long param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112772798;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c07cb40();
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  if (iVar1 == 0) {
    func_0x00010c072a00();
    if (iVar2 == 0) {
      if (*(char *)(param_1 + _DAT_11277280c) == '\x01') {
        func_0x00010be172c0(param_1);
      }
      else {
        dStack_48 = param_4[1];
        dStack_50 = *param_4;
        dStack_40 = param_4[2];
        func_0x00010c29ac80(*(undefined8 *)(param_1 + _DAT_11277274c),param_2,param_3,&dStack_50);
        uVar4 = *(undefined8 *)(param_1 + _DAT_112772794);
        puVar3 = PTR_PTR_1126d8a10;
        func_0x00010c2a6720(PTR_PTR_1126d8a10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4,param_2,puVar3);
        _objc_release(puVar3);
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010c07cb00();
      if ((int)uVar4 != 0) {
        dStack_48 = param_4[1];
        dVar6 = *param_4;
        dStack_40 = param_4[2];
        dStack_50 = dVar6;
        _CMTimeGetSeconds(&dStack_50);
        if (0.1 < dVar6) goto LAB_107fa209c;
      }
      func_0x00010bfaf8a0(*(undefined8 *)(param_1 + lVar5));
    }
  }
  else {
    func_0x00010bfafb20();
  }
LAB_107fa209c:
  _objc_release(param_3);
  return;
}



/* Entry: 107fa20b8; end: 107fa20c7; -[SCSmartVideoSwipeFilterView resetOverlayAndPlaybackSessionSpeed] */

void FUN_107fa20b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resetOverlayLookAndPlaybackSess_112582720,0,0,0);
  return;
}



/* Entry: 107fa20c8; end: 107fa233b; -[SCSmartVideoSwipeFilterView _updatePlaybackSpeedForClipLevelEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa20c8(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = param_2;
  func_0x00010be44a40();
  if ((int)lVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_2 + _DAT_1127727a4);
  func_0x00010bfb70c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bf608;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 == 0) goto LAB_107fa2310;
  lVar1 = param_2;
  func_0x00010be75140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fff40();
  uVar5 = uVar3;
  if (*(long *)(param_2 + _DAT_1127727e8) == 0) {
LAB_107fa2240:
    uVar6 = uVar3;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf00880();
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010c26fea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(uVar8);
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      func_0x00010c1e7640(param_1,uVar3);
      func_0x00010bf0b060(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1609c0(uVar3);
      goto LAB_107fa2300;
    }
  }
  else {
    uVar8 = *(ulong *)(param_2 + _DAT_1127727f8);
    uVar6 = uVar3;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c1581e0();
    _objc_release(uVar6);
    if (uVar7 <= uVar8) goto LAB_107fa2240;
    func_0x00010c26fea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd7c0(param_1);
    _objc_release(uVar7);
    _objc_release(uVar6);
LAB_107fa2300:
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
LAB_107fa2310:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107fa233c; end: 107fa2347;  */

void FUN_107fa233c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dd7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),param_2,PTR_s_setPlaybackRate__112655018);
  return;
}



/* Entry: 107fa2348; end: 107fa297f; -[SCSmartVideoSwipeFilterView _resetOverlayLookAndPlaybackSessionSpeedForRewindToBeginning:fastForwardToEnd:initialFilterSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa2348(double param_1,ulong param_2,undefined8 param_3,int param_4,int param_5,
                  ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  
  uVar1 = param_2;
  func_0x00010be75140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fff40();
  uVar2 = uVar1;
  func_0x00010c247c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar2 != 0) &&
     ((uVar2 = param_2, func_0x00010beb6ec0(), puVar4 = PTR__OBJC_CLASS___UIView_1126aec20,
      (param_6 & 1) != 0 || ((int)uVar2 != 0)))) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107fa2980;
    puStack_90 = &UNK_110842e18;
    _objc_retain(uVar1);
    uStack_88 = uVar1;
    func_0x00010bf03400(0x3fd3333333333333,puVar4);
    _objc_release(uStack_88);
  }
  dVar14 = 2.0;
  if (param_1 <= 2.0) {
    dVar13 = 1.0;
  }
  else {
    dVar13 = param_1 * 0.5;
    param_1 = dVar14;
    if ((*(double *)(param_2 + (long)_DAT_1127727d8) == 0.0) &&
       (lVar11 = (long)_DAT_1127727f0, (*(byte *)(param_2 + lVar11) & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_2 + (long)_DAT_1127727e4);
      func_0x00010bf0f320(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c100(*(undefined8 *)(param_2 + (long)_DAT_112772798));
      _objc_release(uVar3);
      *(undefined1 *)(param_2 + lVar11) = 1;
    }
  }
  uVar6 = param_2;
  func_0x00010bf5eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d89a8;
  _objc_opt_class(PTR_PTR_1126d89a8);
  uVar5 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar2 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar6);
  if (uVar2 != 0) {
    uVar5 = param_2;
    func_0x00010beb6ec0();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (((param_6 & 1) != 0) || ((int)uVar5 != 0)) {
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_107fa29b8;
      puStack_b8 = &UNK_110842e18;
      _objc_retain(uVar6);
      uStack_b0 = uVar2;
      func_0x00010bf03400(0x3fd3333333333333,puVar4);
      _objc_release(uStack_b0);
    }
    if (*(long *)(param_2 + (long)_DAT_112772820) == 0) {
      func_0x00010beaf780(param_2);
    }
  }
  dVar14 = 2.0;
  if (param_5 == 0) {
    dVar14 = param_1;
  }
  dVar12 = 2.0;
  if (param_1 + param_1 <= 2.0) {
    dVar12 = param_1 + param_1;
  }
  if (param_4 != 0) {
    dVar14 = dVar12;
  }
  lVar11 = (long)_DAT_112772798;
  func_0x00010bf17e40(*(undefined8 *)(param_2 + lVar11));
  uVar6 = param_2;
  func_0x00010be44a40();
  if ((int)uVar6 == 0) {
    func_0x00010c1ddb40(dVar14,*(undefined8 *)(param_2 + lVar11));
    func_0x00010c1ddae0(dVar13,*(undefined8 *)(param_2 + lVar11));
    func_0x00010c1ede00(*(undefined8 *)(param_2 + lVar11));
    func_0x00010bf427e0(*(undefined8 *)(param_2 + lVar11));
  }
  else {
    uVar6 = param_2 + (long)_DAT_1127727a8;
    _objc_loadWeakRetained();
    uVar5 = uVar6;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if ((*(long *)(param_2 + (long)_DAT_1127727e8) == 0) ||
       (uVar9 = *(ulong *)(param_2 + (long)_DAT_1127727f8), uVar6 = uVar5, func_0x00010bf529e0(),
       uVar6 <= uVar9)) {
      uVar6 = *(ulong *)(param_2 + (long)_DAT_1127727a4);
      func_0x00010bfb70c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar4 = PTR_PTR_1126bf608;
      _objc_retain(uVar9);
      _objc_opt_class(puVar4);
      uVar7 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar4);
      uVar6 = uVar9;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar9);
      uVar7 = uVar6;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar7;
      func_0x00010bf00880();
      _objc_release(uVar7);
      if ((int)uVar6 == 0) {
        dVar14 = 1.0;
        dVar13 = 1.0;
      }
      func_0x00010c1ddb40(dVar14,*(undefined8 *)(param_2 + lVar11));
      func_0x00010c1ddae0(dVar13,*(undefined8 *)(param_2 + lVar11));
      uVar6 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_100,uVar6);
      }
      func_0x00010c209aa0(*(undefined8 *)(param_2 + lVar11));
      _objc_release(uVar6);
      func_0x00010bf427e0(*(undefined8 *)(param_2 + lVar11));
      _objc_release(uVar9);
    }
    else {
      func_0x00010c1ddb40(dVar14,*(undefined8 *)(param_2 + lVar11));
      func_0x00010c1ddae0(dVar13,*(undefined8 *)(param_2 + lVar11));
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_100,uVar6);
      }
      func_0x00010c209aa0(*(undefined8 *)(param_2 + lVar11));
      _objc_release(uVar6);
      func_0x00010bf427e0(*(undefined8 *)(param_2 + lVar11));
    }
    _objc_release(uVar5);
  }
  if (*(char *)(param_2 + (long)_DAT_1127727b8) == '\x01') {
    lVar10 = (long)_DAT_1127727ac;
    lVar8 = param_2 + lVar10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar8 != 0) {
      uVar6 = param_2;
      func_0x00010be44a40();
      if ((uVar6 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_2 + (long)_DAT_1127727a4);
        func_0x00010bfb70c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_2 + lVar10;
        _objc_loadWeakRetained(lVar10);
        func_0x00010bfecde0(uVar3);
        _objc_release(lVar10);
        _objc_release(uVar3);
        uVar6 = param_2;
        func_0x00010be44a40();
        if ((int)uVar6 != 0) {
          uVar6 = param_2;
          func_0x00010bdd2d20();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010c075740();
          _objc_release(uVar6);
          if ((uVar5 & 1) == 0) {
            *(undefined8 *)(param_2 + (long)_DAT_1127727f8) = 0;
          }
        }
        func_0x00010bdd2d20(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c157220();
        _objc_release(param_2);
      }
      goto LAB_107fa2948;
    }
  }
  uVar6 = param_2;
  func_0x00010be42080();
  if (((uVar6 & 1) != 0) || (*(char *)(param_2 + (long)_DAT_112772808) == '\x01')) {
    func_0x00010c1dfc40(*(undefined8 *)(param_2 + lVar11));
    func_0x00010bee3440(param_2);
  }
LAB_107fa2948:
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107fa2980; end: 107fa29b7;  */

void FUN_107fa2980(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c247c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fa29b8; end: 107fa29c3;  */

void FUN_107fa29b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107fa29c4; end: 107fa2a6f; -[SCSmartVideoSwipeFilterView _playerRateAppliedByUser] */

void FUN_107fa29c4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf5eb00(param_1,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d89a8;
  _objc_opt_class(PTR_PTR_1126d89a8);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126d8a18;
  _objc_alloc(PTR_PTR_1126d8a18);
  if (uVar1 != 0) {
    func_0x00010c11fdc0(param_1);
  }
  func_0x00010c036dc0(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fa2a70; end: 107fa2c9f; -[SCSmartVideoSwipeFilterView _setupReverseAudioPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa2a70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [48];
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc();
  func_0x00010c0082a0();
  lVar8 = (long)_DAT_112772824;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127727b4);
  func_0x00010c279200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600(PTR__OBJC_CLASS___AVMutableComposition_1126beaa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277e40(uVar7);
  puVar3 = puVar1;
  func_0x00010bef9f20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + lVar8) == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_a0);
  }
  uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar10 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_c0 = uVar10;
  uStack_b8 = uVar11;
  uStack_b0 = uVar9;
  _CMTimeRangeMake(auStack_80,&uStack_c0,&uStack_a0);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c279200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar10;
  uStack_98 = uVar11;
  uStack_90 = uVar9;
  func_0x00010c067160(puVar3);
  _objc_retain(0);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4c0();
  puVar6 = PTR_PTR_1126c9e68;
  _objc_alloc();
  func_0x00010c0370a0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772820);
  *(undefined **)(param_1 + _DAT_112772820) = puVar6;
  _objc_release(uVar2);
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(puVar5);
  return;
}



/* Entry: 107fa2ca0; end: 107fa2d7f; -[SCSmartVideoSwipeFilterView currentFilterSpeedForType:] */

long FUN_107fa2ca0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf5ea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 4;
    goto LAB_107fa2d64;
  }
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf45e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
LAB_107fa2d50:
    lVar4 = 4;
  }
  else {
    lVar4 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,PTR_PTR_11329cf70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) goto LAB_107fa2d50;
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,PTR_PTR_11329cf70);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_107fa2d64:
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 107fa2d80; end: 107fa2d83; -[SCSmartVideoSwipeFilterView videoTracker:rewindingTargetNeedToStopRewinding:] */

void FUN_107fa2d80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelRewinding_1125a9588);
  return;
}



/* Entry: 107fa2d84; end: 107fa2edf; -[SCSmartVideoSwipeFilterView scrollViewWillBeginDragging:] */

void FUN_107fa2d84(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar4 = PTR_s_scrollViewWillBeginDragging__112632548;
  puVar2 = PTR_PTR_1126b37a0;
  func_0x00010c067bc0();
  if ((int)puVar2 != 0) {
    puStack_48 = PTR_PTR_1126fbed0;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,puVar4,param_3);
  }
  uVar3 = param_1;
  func_0x00010bf5eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d89a8;
  _objc_opt_class(PTR_PTR_1126d89a8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if ((uVar1 != 0) && (uVar5 = param_1, func_0x00010beb6ec0(), (int)uVar5 != 0)) {
    func_0x00010c1677c0(0x3ff0000000000000,uVar3);
  }
  uVar5 = param_1;
  func_0x00010bf5eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d89a8;
  _objc_opt_class(PTR_PTR_1126d89a8);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if ((uVar3 != 0) && (func_0x00010beb6ec0(), (int)param_1 != 0)) {
    func_0x00010c1677c0(0x3ff0000000000000,uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107fa2ee0; end: 107fa2f13; -[SCSmartVideoSwipeFilterView clearStackedFiltersIsMultiSnapCleanUp:] */

void FUN_107fa2ee0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fbed0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_clearStackedFiltersIsMultiSnapCl_1125aca00);
  return;
}



/* Entry: 107fa2f14; end: 107fa2f5b; -[SCSmartVideoSwipeFilterView removeStackedFilterForType:filterName:] */

void FUN_107fa2f14(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbed0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_removeStackedFilterForType_filte_112629360);
  func_0x00010c139120(param_1);
  return;
}



/* Entry: 107fa2f5c; end: 107fa3723; -[SCSmartVideoSwipeFilterView replaceFiltersWithState:lastState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa2f5c(double param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010c2a0460();
  if (lVar11 != 0x7fffffffffffffff) {
    lVar11 = param_4;
    func_0x00010c2a04c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0460(param_4);
    lVar6 = lVar11;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    if (lVar6 != 0) {
      lVar11 = param_4;
      func_0x00010c2a04c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a0460(param_4);
      lVar6 = lVar11;
      func_0x00010c0dfd40(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar11);
      func_0x00010befa120(puVar2);
    }
  }
  lVar11 = param_4;
  func_0x00010c249d80();
  if (lVar11 != 0x7fffffffffffffff) {
    lVar11 = param_4;
    func_0x00010c249de0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c249d80(param_4);
    lVar6 = lVar11;
    func_0x00010c0dfd40(lVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar11 = lVar6;
    func_0x00010c0e00e0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010c067fc0();
    _objc_release(lVar11);
    func_0x000108edf4d4(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    func_0x00010befa120(puVar2);
    _objc_release(lVar6);
  }
  lVar11 = param_4;
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010bf529e0();
  _objc_release(lVar11);
  uVar13 = 0;
  if (lVar6 != 0) {
    param_1 = 0.0;
    lVar6 = param_4;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    if (lVar3 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(lVar6);
          }
          uVar14 = *(ulong *)(lVar12 * 8);
          uVar7 = uVar14;
          func_0x00010bf8c860(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar7);
          func_0x00010c081f00();
          if ((uVar13 & 1) == 0) {
            func_0x00010bfadea0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(param_2 + (long)_DAT_112772788);
            func_0x00010c297ee0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar14;
            func_0x00010c0720c0();
            _objc_release(uVar4);
            _objc_release(uVar14);
          }
          else {
            uVar13 = 1;
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
  }
  lVar11 = param_4;
  func_0x00010c082fa0();
  if (((int)lVar11 != 0) && ((uVar13 & 1) == 0)) {
    func_0x00010befa120(puVar1);
    func_0x00010befa120(puVar2);
    lVar11 = param_4;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar11);
    lVar11 = param_5;
    func_0x00010c297ce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar11);
    if (lVar3 == 0) {
      uVar10 = 0;
    }
    else {
      lVar11 = lVar3;
      func_0x00010c0720c0();
      uVar10 = (uint)lVar11 ^ 1;
    }
    lVar11 = param_4;
    func_0x00010c297ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60();
    lVar6 = param_5;
    dVar15 = param_1;
    func_0x00010c297ce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60();
    _objc_release(lVar6);
    _objc_release(lVar11);
    if (((uVar10 & 1) != 0) || (param_1 != dVar15)) {
      func_0x00010c28bd40(param_2);
    }
    _objc_release(lVar12);
    _objc_release(lVar3);
  }
  lVar11 = param_4;
  func_0x00010c25bfa0();
  if ((int)lVar11 != 0) {
    func_0x00010befa120(puVar1);
    func_0x00010befa120(puVar2);
  }
  func_0x00010c1589e0(param_2);
  if (param_5 == 0) {
    lVar11 = 0x7fffffffffffffff;
  }
  else {
    lVar11 = param_5;
    func_0x00010c249d80();
  }
  if (param_4 == 0) {
    lVar6 = 0x7fffffffffffffff;
  }
  else {
    lVar6 = param_4;
    func_0x00010c249d80();
  }
  if (lVar6 != lVar11) {
    uVar7 = param_2;
    func_0x00010bf5eb00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d89a8;
    _objc_opt_class(PTR_PTR_1126d89a8);
    uVar14 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar5);
    uVar13 = uVar7;
    if ((uVar14 & 1) == 0) {
      uVar13 = 0;
    }
    _objc_retain(uVar13);
    _objc_release(uVar7);
    dVar15 = 1.0;
    if (uVar13 != 0) {
      uVar14 = param_2;
      func_0x00010beb6ec0();
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      if ((int)uVar14 != 0) {
        _objc_retain(uVar7);
        dVar15 = 0.3;
        func_0x00010bf03400(puVar5);
        _objc_release(uVar13);
      }
      func_0x00010c11fdc0(uVar7);
    }
    dVar16 = dVar15 * 0.5;
    dVar17 = 2.0;
    if (dVar15 <= 2.0) {
      dVar16 = 1.0;
      dVar17 = dVar15;
    }
    lVar11 = (long)_DAT_112772798;
    func_0x00010bf17e40(*(undefined8 *)(param_2 + lVar11));
    uVar7 = param_2;
    func_0x00010be44a40();
    if ((int)uVar7 != 0) {
      uVar7 = *(ulong *)(param_2 + (long)_DAT_1127727a4);
      func_0x00010bfb70c0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126bf608;
      _objc_retain(uVar14);
      _objc_opt_class(puVar5);
      uVar8 = uVar14;
      _objc_opt_isKindOfClass(uVar14,puVar5);
      uVar7 = uVar14;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar14);
      uVar8 = uVar7;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar8;
      func_0x00010bf00880();
      _objc_release(uVar8);
      _objc_release(uVar14);
      if (*(long *)(param_2 + (long)_DAT_1127727e8) == 0 && (uVar7 & 1) == 0) {
        dVar17 = 1.0;
        dVar16 = 1.0;
      }
    }
    func_0x00010c1ddb40(dVar17,*(undefined8 *)(param_2 + lVar11));
    func_0x00010c1ddae0(dVar16,*(undefined8 *)(param_2 + lVar11));
    func_0x00010bf427e0(*(undefined8 *)(param_2 + lVar11));
    func_0x00010c1dfc40(*(undefined8 *)(param_2 + lVar11));
    func_0x00010c157240(param_2);
    _objc_release(uVar13);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_4 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107fa3724; end: 107fa372f;  */

void FUN_107fa3724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107fa3730; end: 107fa379f; -[SCSmartVideoSwipeFilterView updateMediaFiltersAndOutputCommandsWithFilterItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa3730(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2878c0(param_1);
  func_0x00010c1d6f00(*(undefined8 *)(param_1 + _DAT_11277279c),param_2,
                      *(undefined8 *)(param_1 + _DAT_1127727a0));
  func_0x00010c23eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285c40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa37a0; end: 107fa38d3; -[SCSmartVideoSwipeFilterView selectFilterNames:forTypes:completion:] */

void FUN_107fa37a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_90;
  undefined *puStack_88;
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
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107fa38d4;
  puStack_68 = &UNK_110848378;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  uStack_58 = param_5;
  _objc_retain(param_3);
  puStack_88 = PTR_PTR_1126fbed0;
  uStack_90 = param_1;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_90,PTR_s_selectFilterNames_forTypes_compl_112633c98,param_3,param_4,
                      &puStack_80);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fa38d4; end: 107fa39a7;  */

void FUN_107fa38d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010bfad800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c24d460();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf9cce0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar5 != 0) {
        func_0x00010be93600(lVar1,param_2,0,0,1);
        goto LAB_107fa3980;
      }
    }
    func_0x00010c139120(lVar1);
  }
LAB_107fa3980:
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107fa39a8; end: 107fa3a2f; -[SCSmartVideoSwipeFilterView scrollViewDidEndDecelerating:] */

void FUN_107fa39a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  func_0x00010bedd460(param_1);
  func_0x00010c139120(param_1);
  puVar1 = PTR_s_scrollViewDidEndDecelerating__1126324c0;
  puVar2 = PTR_PTR_1126b37a0;
  func_0x00010c067bc0();
  if ((int)puVar2 != 0) {
    puStack_38 = PTR_PTR_1126fbed0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107fa3a30; end: 107fa3ac3; -[SCSmartVideoSwipeFilterView scrollViewDidEndDragging:willDecelerate:] */

void FUN_107fa3a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_s_scrollViewDidEndDragging_willDec_1126324c8;
  puVar2 = PTR_PTR_1126b37a0;
  func_0x00010c067bc0();
  if ((int)puVar2 != 0) {
    puStack_38 = PTR_PTR_1126fbed0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,puVar1,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    func_0x00010bedd460(param_1);
    func_0x00010c139120(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107fa3ac4; end: 107fa3b13; -[SCSmartVideoSwipeFilterView scrollToInitSectionAndReloadToIndex:] */

void FUN_107fa3ac4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbed0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_scrollToInitSectionAndReloadToIn_112632368);
  func_0x00010bedd460(param_1);
  func_0x00010c139120(param_1);
  return;
}



/* Entry: 107fa3b14; end: 107fa3b6f; -[SCSmartVideoSwipeFilterView filterViewDidReplaceVisibleFilters] */

void FUN_107fa3b14(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbed0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_filterViewDidReplaceVisibleFilte_1125c93c0);
  uVar1 = param_1;
  func_0x00010c07d460();
  if ((uVar1 & 1) == 0) {
    func_0x00010bedd460(param_1);
    func_0x00010c139120(param_1);
  }
  return;
}



/* Entry: 107fa3b70; end: 107fa3bf7; -[SCSmartVideoSwipeFilterView _getAudioTrackForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa3b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277277c;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772778);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fa3bf8; end: 107fa3c67; -[SCSmartVideoSwipeFilterView _getAudioTrackKeys] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa3bf8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277277c;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772778);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fa3c68; end: 107fa3ccf; -[SCSmartVideoSwipeFilterView _getAudioTracksCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa3c68(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277277c;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772778);
  func_0x00010bf529e0(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar2);
  return uVar1;
}



/* Entry: 107fa3cd0; end: 107fa3d63; -[SCSmartVideoSwipeFilterView _setAudioTrack:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa3cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = (long)_DAT_11277277c;
  _os_unfair_lock_lock(param_1 + lVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112772778),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa3d64; end: 107fa3e17; -[SCSmartVideoSwipeFilterView _audioMixProcessingSessionWithAudioAssetTrack:processingWrapper:usageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa3d64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112772770);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0f880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf54ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107fa3e18; end: 107fa3e8f; -[SCSmartVideoSwipeFilterView _checkVideoDurationFromAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107fa3e18(double param_1,long param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uStack_38;
  
  if (param_4 != 0) {
    uStack_38 = 0;
    func_0x00010c299e00(PTR_PTR_1126b0010,param_3,*(undefined8 *)(param_2 + _DAT_1127727b4),1,
                        &uStack_38);
    dVar1 = param_1;
    func_0x00010bf60b40(param_2);
    dVar2 = -dVar1;
    if (0.0 <= dVar1) {
      dVar2 = dVar1;
    }
    return param_1 / dVar2;
  }
  return 0.0;
}



/* Entry: 107fa3e90; end: 107fa3e9b; -[SCSmartVideoSwipeFilterView _selectSnapAtIndexPath:] */

void FUN_107fa3e90(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__seekToSnapAtIndexPath_withLoopi_112584e60,param_3,param_3 != 0);
  return;
}



/* Entry: 107fa3e9c; end: 107fa3f4f; -[SCSmartVideoSwipeFilterView _seekToSnapAtIndexPath:withLooping:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa3e9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd2d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1dc0();
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127727e8);
    *(undefined8 *)(param_1 + _DAT_1127727e8) = 0;
  }
  else {
    lVar4 = param_3;
    func_0x00010c1554e0(param_3);
    lVar2 = param_3;
    func_0x00010c142240(param_3);
    func_0x00010c157200(lVar1,param_2,lVar4,lVar2);
    lVar4 = (long)_DAT_1127727e8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa3f50; end: 107fa3fc3; -[SCSmartVideoSwipeFilterView _shouldUpdateFilterAlphaStatusForType:] */

bool FUN_107fa3f50(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c24d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 0;
}



/* Entry: 107fa3fc4; end: 107fa4053; -[SCSmartVideoSwipeFilterView updateMediaFiltersAndCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa3fc4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbed0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_updateMediaFiltersAndCommands_11267f858);
  func_0x00010bedbb20(param_1);
  lVar1 = param_1;
  func_0x00010bf41b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be5e4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127727a0);
  *(long *)(param_1 + _DAT_1127727a0) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 107fa4054; end: 107fa416b; -[SCSmartVideoSwipeFilterView areResourcesDownloadedForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107fa4054(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bfae5a0();
  if (lVar4 == 7) {
    uVar3 = param_1;
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfae640();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf0a800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (uVar1 == 0) {
      uVar3 = param_1;
      func_0x00010c0c4f80(param_1,param_2,param_3);
      lVar4 = (long)_DAT_1127727a0;
      uVar2 = *(ulong *)(param_1 + lVar4);
      func_0x00010bf529e0();
      if (uVar3 < uVar2) {
        uVar2 = *(ulong *)(param_1 + lVar4);
        func_0x00010c0dfd40(uVar2,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c07c780();
        _objc_release(uVar2);
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = uVar1;
      func_0x00010c072d20(uVar1);
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107fa416c; end: 107fa41eb; -[SCSmartVideoSwipeFilterView _mediaCommandsForCommandConfigurations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa416c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772750);
  _objc_retain(param_3);
  func_0x00010c0918e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b73a0(uVar1,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fa41ec; end: 107fa4313; -[SCSmartVideoSwipeFilterView _updateMidCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa41ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf5f160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c720(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf41b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112772750);
  lVar3 = param_1;
  func_0x00010c0918e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b73a0(uVar6,param_2,lVar4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277279c);
  puVar5 = puVar2;
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x00010c1c7980(uVar6,param_2,puVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112772828);
  *(undefined **)(param_1 + _DAT_112772828) = puVar2;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107fa4314; end: 107fa4383; -[SCSmartVideoSwipeFilterView _batchCapturePlaybackSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4314(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126bf5d0;
  uVar3 = *(ulong *)(param_1 + _DAT_112772798);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(uVar3);
    _objc_opt_class(puVar1);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar4 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107fa4384; end: 107fa43df; -[SCSmartVideoSwipeFilterView _logDidRenderFirstFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4384(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772760);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2000();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b3050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772744),PTR_s_logVideoPlaybackFirstFrame_11260a620);
  return;
}



/* Entry: 107fa43e0; end: 107fa44a7; -[SCSmartVideoSwipeFilterView _makeRenderSessionCommandManagerWithImageProcessQueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa43e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d89d8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277275c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127727a0);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112772828);
  lVar2 = param_1;
  func_0x00010be5c5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffd60(puVar1,param_2,uVar3,param_3,uVar4,uVar5,param_1,lVar2);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277279c);
  *(undefined **)(param_1 + _DAT_11277279c) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107fa44a8; end: 107fa4537; -[SCSmartVideoSwipeFilterView _makeUCOCommandGenerationRulesProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa44a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d89e0;
  _objc_alloc(PTR_PTR_1126d89e0);
  lVar2 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012fe0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + _DAT_112772764));
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d89e8;
  _objc_alloc(PTR_PTR_1126d89e8);
  func_0x00010c058060();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fa4538; end: 107fa460b; -[SCSmartVideoSwipeFilterView _setFrameSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4538(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127727ac;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 != uVar1) {
    _objc_storeWeak(param_1 + lVar3,param_3);
    puVar2 = PTR_PTR_1126d4d68;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    _objc_release(param_3);
    if ((param_3 == 0) || ((uVar1 & 1) == 0)) {
      _objc_storeWeak(param_1 + _DAT_1127727a8,0);
    }
    else {
      _objc_storeWeak(param_1 + _DAT_1127727a8,param_3);
      uVar1 = param_3;
      func_0x00010c07ef20();
      if ((int)uVar1 != 0) {
        func_0x00010bee8c60(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa460c; end: 107fa4623; -[SCSmartVideoSwipeFilterView _isBatchCapturePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fa460c(long param_1)

{
  return *(long *)(param_1 + _DAT_1127727fc) == 2;
}



/* Entry: 107fa4624; end: 107fa463b; -[SCSmartVideoSwipeFilterView _isTimelinePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fa4624(long param_1)

{
  return *(long *)(param_1 + _DAT_1127727fc) == 3;
}



/* Entry: 107fa463c; end: 107fa4653; -[SCSmartVideoSwipeFilterView _isMultiSnapPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fa463c(long param_1)

{
  return *(long *)(param_1 + _DAT_1127727fc) == 1;
}



/* Entry: 107fa4654; end: 107fa4663; -[SCSmartVideoSwipeFilterView _makeUnfilteredCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772750),PTR_s_makeUnfilteredCommand_11260b8a8);
  return;
}



/* Entry: 107fa4664; end: 107fa477f; -[SCSmartVideoSwipeFilterView SCImageProcessVideoPlaybackSessionImpl:didChangeFromSource:snapIndex:toSource:snapIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bea4120(param_1,param_2,param_6);
  *(undefined8 *)(param_1 + _DAT_1127727f8) = param_7;
  puVar5 = PTR_PTR_1126d8a10;
  lVar6 = (long)_DAT_1127727a4;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfb70c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfb70c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfecde0();
  _objc_release(param_6);
  func_0x00010bf73620(puVar5,param_2,uVar2,param_5,uVar4,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112772794),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107fa4780; end: 107fa4787; -[SCSmartVideoSwipeFilterView SCImageProcessVideoPlaybackSessionImpl:didLoadFrameSource:] */

void FUN_107fa4780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee8c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__videoFrameSourceDidLoad__112597cc0,param_4);
  return;
}



/* Entry: 107fa4788; end: 107fa4a53; -[SCSmartVideoSwipeFilterView _videoFrameSourceDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4788(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_1127727ac;
  _objc_loadWeakRetained();
  _objc_release();
  puVar2 = PTR_PTR_1126d4d68;
  if (param_3 != uVar1) goto LAB_107fa499c;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar7 = uVar1;
  func_0x00010c29b800();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112772794);
    puVar2 = PTR_PTR_1126d8a10;
    func_0x00010c139c40(PTR_PTR_1126d8a10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x00010c0ed3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar7 != 0) {
      _objc_release(uVar3);
      goto LAB_107fa48b4;
    }
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    uVar7 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    if ((uVar7 & 1) != 0) {
      uVar7 = uVar3;
      func_0x00010bdc2b80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(puVar2);
    }
    uStack_58 = 0;
    func_0x00010c2533c0(uVar3);
    _objc_release(uVar3);
    uVar7 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
LAB_107fa48b4:
    func_0x00010c106f40(&uStack_90,uVar7);
  }
  func_0x00010b691288(&uStack_90);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127727e0);
  func_0x00010c0d5d20(uVar7);
  func_0x00010c221fa0(uVar6);
  uVar3 = uVar1;
  func_0x00010bf15e80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126d24a8;
    _objc_alloc_init(PTR_PTR_1126d24a8);
    lVar5 = param_1;
    func_0x00010bdd1180();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_1127727e4;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(long *)(param_1 + lVar8) = lVar5;
    _objc_release(uVar6);
    *(undefined1 *)(param_1 + _DAT_1127727f0) = 0;
    func_0x00010c1d8f60(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar2);
  }
  func_0x00010c16bf60(*(undefined8 *)(param_1 + _DAT_112772798));
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar1);
LAB_107fa499c:
  _objc_release(param_3);
  return;
}



/* Entry: 107fa4a54; end: 107fa4b37; -[SCSmartVideoSwipeFilterView commandManager:didUpdateMappedCommands:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112772768));
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fa4b38;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fa4b38; end: 107fa4c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar2 = lVar1;
    func_0x00010bf9b340();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_d8;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010c286640(*(undefined8 *)(lStack_118 + lVar5 * 8),param_2,
                              *(undefined8 *)(param_1 + 0x20));
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        param_4 = auStack_d8;
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_120,param_4,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)((long)param_4 + 0xc) & 1) != 0) {
    pcStack_128 = FUN_107fa4c54;
    uStack_148 = param_4[1];
    uStack_150 = *param_4;
    uStack_140 = param_4[2];
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010c256620(*(undefined8 *)(lVar1 + _DAT_112772798),param_2,&uStack_150);
  }
  return;
}



/* Entry: 107fa4c54; end: 107fa4c97; -[SCSmartVideoSwipeFilterView batchCaptureStopPlayingSnapAtIndexPath:andSeekSmoothlyToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4c54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((*(byte *)((long)param_4 + 0xc) & 1) != 0) {
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
    uStack_20 = param_4[2];
    func_0x00010c256620(*(undefined8 *)(param_1 + _DAT_112772798),param_2,&uStack_30);
  }
  return;
}



/* Entry: 107fa4c98; end: 107fa4ca3; -[SCSmartVideoSwipeFilterView batchCaptureSetSnapEnabled:atIndexPath:] */

void FUN_107fa4c98(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectSnapAtIndexPath__1125850a8,param_4);
  return;
}



/* Entry: 107fa4ca4; end: 107fa4cfb; -[SCSmartVideoSwipeFilterView timelinePlaySegmentAtIndex:withLooping:] */

void FUN_107fa4ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9d2e0(param_1,param_2,puVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fa4cfc; end: 107fa4d07; -[SCSmartVideoSwipeFilterView timelinePlayDisableLooping] */

void FUN_107fa4cfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__seekToSnapAtIndexPath_withLoopi_112584e60,0,0);
  return;
}



/* Entry: 107fa4d08; end: 107fa4d3f; -[SCSmartVideoSwipeFilterView timelineResetVideoAssetWithDeletingSegmentAtIndex:] */

void FUN_107fa4d08(undefined8 param_1)

{
  func_0x00010bdd2d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa4d40; end: 107fa4d6f; -[SCSmartVideoSwipeFilterView timelineBeginEditing] */

void FUN_107fa4d40(undefined8 param_1)

{
  func_0x00010bdd2d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa4d70; end: 107fa4d9f; -[SCSmartVideoSwipeFilterView timelineEndEditing] */

void FUN_107fa4d70(undefined8 param_1)

{
  func_0x00010bdd2d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa4da0; end: 107fa4e17; -[SCSmartVideoSwipeFilterView batchCaptureUpdateMultiSnapTimeRanges:includesDeletion:forSegmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127727a8;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1c9a00();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bdd2d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa4e18; end: 107fa4f77; -[SCSmartVideoSwipeFilterView batchCaptureDidDeleteSnapAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010c1554e0(param_3);
  func_0x00010c142240(param_3);
  _objc_release(param_3);
  lVar6 = (long)_DAT_1127727a4;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010bfb70c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d4d68;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c12e360(uVar2);
    func_0x00010c18d580(uVar2);
    uVar4 = uVar2;
    func_0x00010c0d2640();
    if (uVar4 != 0) goto LAB_107fa4f04;
  }
  func_0x00010c12c7c0(*(undefined8 *)(param_1 + lVar6));
LAB_107fa4f04:
  lVar5 = *(long *)(param_1 + lVar6);
  func_0x00010bfb70c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    func_0x00010bdd2d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c157220();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fa4f78; end: 107fa4fdf; -[SCSmartVideoSwipeFilterView batchCaptureDidUpdateImageSegmentDuration:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4f78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x00010c286620(*(undefined8 *)(param_1 + _DAT_1127727a4),param_2,&uStack_40);
  func_0x00010bdd2d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157160();
  _objc_release(param_1);
  return;
}



/* Entry: 107fa4fe0; end: 107fa4ff7; -[SCSmartVideoSwipeFilterView _needsHighFramerate] */

uint FUN_107fa4fe0(uint param_1)

{
  func_0x00010c2485a0();
  return param_1 & 1;
}



/* Entry: 107fa4ff8; end: 107fa5007; -[SCSmartVideoSwipeFilterView defaultLensCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa4ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b70f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772750),PTR_s_makeDefaultLensCommand_11260b650);
  return;
}



/* Entry: 107fa5008; end: 107fa5093; -[SCSmartVideoSwipeFilterView imageProcessCommandForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa5008(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c142240();
  lVar4 = (long)_DAT_112772828;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    uVar1 = param_3;
    func_0x00010c142240(param_3);
    func_0x00010c0dfd40(uVar3,param_2,uVar1);
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



/* Entry: 107fa5094; end: 107fa50a3; -[SCSmartVideoSwipeFilterView playbackMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa5094(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127727fc);
}



/* Entry: 107fa50a4; end: 107fa50b3; -[SCSmartVideoSwipeFilterView setPlaybackMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa50a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127727fc) = param_3;
  return;
}



/* Entry: 107fa50b4; end: 107fa50c3; -[SCSmartVideoSwipeFilterView imageProcessCommandsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa50b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772768);
}



/* Entry: 107fa50c4; end: 107fa50d3; -[SCSmartVideoSwipeFilterView NGSMESnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa50c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127727c0);
}



/* Entry: 107fa50d4; end: 107fa50e3; -[SCSmartVideoSwipeFilterView useBatchCapturePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fa50d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127727b8);
}



/* Entry: 107fa50e4; end: 107fa50f3; -[SCSmartVideoSwipeFilterView setUseBatchCapturePlayback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa50e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127727b8) = param_3;
  return;
}



/* Entry: 107fa50f4; end: 107fa5103; -[SCSmartVideoSwipeFilterView videoPlaybackLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa50f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772744);
}



/* Entry: 107fa5104; end: 107fa5113; -[SCSmartVideoSwipeFilterView isAudioMixed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fa5104(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127727c8);
}


