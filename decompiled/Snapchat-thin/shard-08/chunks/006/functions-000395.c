/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062fa884; end: 1062fa887; -[SCOperaMediaLoadStateFetcher releaseDateForItemId:] */

void FUN_1062fa884(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf8990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__decreaseUsageForItemId__11255bc00);
  return;
}



/* Entry: 1062fa888; end: 1062fa88b; -[SCOperaMediaLoadStateFetcher fetchLoadStateForLongformShowWithMediaID:playbackMediaPrefetcher:completion:] */

void FUN_1062fa888(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be124b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchLongformShowLoadState_play_1125622c8);
  return;
}



/* Entry: 1062fa88c; end: 1062fa967; -[SCOperaMediaLoadStateFetcher _fetchLongformShowLoadState:playbackMediaPrefetcher:completion:] */

void FUN_1062fa88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0001084769f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1062fa968;
  puStack_40 = &UNK_11091c378;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfc8f60(uVar1,param_2,param_3,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1062fa968; end: 1062faa87;  */

void FUN_1062fa968(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010c0bf7a0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,puStack_38[3]);
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return;
}



/* Entry: 1062faa88; end: 1062faad3;  */

void FUN_1062faa88(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1062faad4; end: 1062fab27; -[SCOperaMediaLoadStateFetcher _checkInternalHealth] */

/* WARNING: Possible PIC construction at 0x0001062faaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062fab08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062faafc) */
/* WARNING: Removing unreachable block (ram,0x0001062fab0c) */

void FUN_1062faad4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (300 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
    return;
  }
  return;
}



/* Entry: 1062fab28; end: 1062fac5f; +[SCOperaMediaLoadStateFetcher _isStaticLoadingState:params:] */

uint FUN_1062fab28(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf27580(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_3;
      func_0x00010c118b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126c99e0;
      func_0x00010bf24be0(PTR_PTR_1126c99e0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0e00e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(lVar4);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar4 = lVar5;
      _objc_opt_isKindOfClass(lVar5,puVar1);
      _objc_release(lVar5);
      uVar6 = (uint)lVar4 & (uint)(lVar5 != 0);
    }
    else {
      uVar6 = 1;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1062fac60; end: 1062fadef; -[SCOperaMediaLoadStateFetcher _captureStaticLoadingState:params:itemId:date:] */

void FUN_1062fac60(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010bf27580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5620;
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c99e0;
    func_0x00010bf24be0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) goto LAB_1062fadcc;
    uVar2 = uVar3;
    func_0x00010bf1f3c0();
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5638;
    if ((int)uVar2 == 0) {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5620;
    }
    _objc_retain(ppuVar5);
    _objc_release(uVar3);
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
  _objc_release(ppuVar5);
LAB_1062fadcc:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fadf0; end: 1062fae83; -[SCOperaMediaLoadStateFetcher _increaseUsageForItemId:] */

void FUN_1062fadf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar3;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar2,param_2,lVar1 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1062fae84; end: 1062faf6b; -[SCOperaMediaLoadStateFetcher _decreaseUsageForItemId:] */

void FUN_1062fae84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c067fc0();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar2 == 1) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      }
      else {
        lVar2 = lVar1;
        func_0x00010c067fc0(lVar1);
        func_0x00010c0df780(puVar3,param_2,lVar2 + -1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar3,param_3);
        _objc_release(puVar3);
      }
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062faf6c; end: 1062fb0bf; -[SCOperaMediaLoadStateFetcher _captureDownloadStateForRequestKey:isLoaded:itemId:date:] */

void FUN_1062faf6c(long param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      lVar1 = param_3;
      func_0x00010c08fa60();
      if (lVar1 != 0) {
        _objc_initWeak(auStack_48,param_1);
        _objc_opt_class(param_1);
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_5);
        func_0x00010bfa8100(param_1);
        _objc_release(param_5);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1062fb0c0; end: 1062fb103;  */

void FUN_1062fb0c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec3f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062fb104; end: 1062fb15b; -[SCOperaMediaLoadStateFetcher _storeDate:forItemId:] */

void FUN_1062fb104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c1d0640(uVar1,param_2,param_3,param_4);
  func_0x00010be38200(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062fb15c; end: 1062fb1e7; -[SCOperaMediaLoadStateFetcher _storeDownloadState:forItemId:] */

void FUN_1062fb15c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062fb1e8; end: 1062fb22f; -[SCOperaMediaLoadStateFetcher .cxx_destruct] */

void FUN_1062fb1e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062fb230; end: 1062fb637;  */

void FUN_1062fb230(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c0c71c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_4);
  _objc_release(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  dVar11 = 1.60807493534087e-314;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1062fb638;
  puStack_80 = &UNK_110842e18;
  _objc_retain(param_5);
  uStack_78 = param_5;
  if (lRam00000001136c37b0 != -1) {
    func_0x00010002a2fc(0x1136c37b0,&puStack_98);
  }
  if ((bRam00000001136c37a8 & 1) != 0) {
    func_0x00010c09be40(param_3);
  }
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  uVar1 = param_3;
  func_0x00010c29e220();
  uVar2 = param_3;
  func_0x00010c0c6c20();
  uVar3 = param_3;
  func_0x00010c084780();
  uVar4 = param_3;
  func_0x00010c09be40();
  uVar5 = param_3;
  func_0x00010c084c40();
  func_0x00010c29ad40(param_3);
  _objc_retain(param_2);
  if ((0x20 < uVar2 + 1) || ((1L << (uVar2 + 1 & 0x3f) & 0x1dfffd7f1U) == 0)) {
    uVar6 = uVar3;
    func_0x00010baf6424();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bab1744();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bc90ccc(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    FUN_106369e5c(param_2,uVar6,uVar7,uVar8,uVar9,uVar10,1);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010baf6424();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bb06dfc();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bab1744();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010baf2e2c(uVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10636a230(param_2,uVar6,uVar7,uVar8,uVar9,uVar10,(long)(param_1 * 1000.0));
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((uVar2 | 8) != 10) {
      func_0x00010baf6424(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bb06dfc(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bab1744(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bc90ccc(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010baf2e2c(uVar1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10636b464(param_2,uVar3,uVar5,uVar4,uVar2,uVar1,(long)dVar11);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fb638; end: 1062fb667;  */

void FUN_1062fb638(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e49f18,0,0);
  uRam00000001136c37a8 = (char)uVar1;
  return;
}



/* Entry: 1062fb668; end: 1062fb83b; -[SCOperaPlaybackIntentToNextTrackingPlugin initWithFeatureMajorName:viewSource:playSource:entryEvent:entryIntent:operaSessionId:intentDate:intentToOpenOperaTs:playbackMediaPrefetcher:] */

undefined1 *
FUN_1062fb668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f0e30;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    uVar4 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x80) = 1;
    *(undefined1 *)((long)puVar1 + 0x112) = 0;
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar4);
    lVar5 = param_9;
    if (param_9 == 0) {
      lVar5 = *(long *)((long)puVar1 + 0x48);
    }
    _objc_retain(lVar5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x70);
    *(long *)((long)puVar1 + 0x70) = lVar5;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x100);
    *(undefined8 *)((long)puVar1 + 0x100) = param_11;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x90) = 0;
    *(undefined8 *)((long)puVar1 + 0x98) = 0;
    *(undefined8 *)((long)puVar1 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0xb0) = param_6;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar3;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x168) = param_10;
    *(undefined2 *)((long)puVar1 + 0x68) = 0;
    *(undefined1 *)((long)puVar1 + 0x6a) = 0;
    *(undefined8 *)((long)puVar1 + 0xc0) = 0;
    *(undefined8 *)((long)puVar1 + 200) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0xb8) = param_7;
    puVar2 = PTR_PTR_1126c99e8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0xf0);
    *(undefined **)((long)puVar1 + 0xf0) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x170) = 0;
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1062fb83c; end: 1062fba7f; -[SCOperaPlaybackIntentToNextTrackingPlugin setOperaControlling:] */

void FUN_1062fb83c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c99f0;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010c0ea360(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0274a0(puVar4,param_2,lVar5,lVar6,*(undefined8 *)(param_1 + 0x18));
  uVar7 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = lVar1;
  _objc_release(uVar7);
  lVar1 = lVar3;
  func_0x00010bf90ae0();
  *(char *)(param_1 + 0x128) = (char)lVar1;
  lVar1 = lVar3;
  func_0x00010bf90f40();
  *(char *)(param_1 + 0x110) = (char)lVar1;
  lVar1 = lVar3;
  func_0x00010bf90420();
  *(char *)(param_1 + 0x171) = (char)lVar1;
  lVar1 = lVar3;
  func_0x00010c0847a0();
  *(char *)(param_1 + 0x172) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_retain(lVar3);
    uVar7 = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar3;
    _objc_release(uVar7);
    lVar1 = lVar3;
    func_0x00010c0d8060();
    if ((int)lVar1 != 0) {
      lVar1 = lVar3;
      func_0x00010c0d8080(lVar3);
      puVar4 = PTR_PTR_1126c99f8;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010c0ea360(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0d78a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6940(puVar4,param_2,lVar5,lVar1,*(undefined8 *)(param_1 + 0x88));
      uVar7 = *(undefined8 *)(param_1 + 0x178);
      *(undefined **)(param_1 + 0x178) = puVar4;
      _objc_release(uVar7);
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fba80; end: 1062fbaaf; -[SCOperaPlaybackIntentToNextTrackingPlugin setPlaylistItemController:] */

void FUN_1062fba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062fbab0; end: 1062fbdb7; -[SCOperaPlaybackIntentToNextTrackingPlugin registeredEventsForOperaSession] */

void FUN_1062fbab0(void)

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
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
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
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_108 = puVar1;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_100 = puVar2;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_f8 = puVar3;
  func_0x00010c12a660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_f0 = puVar4;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  puStack_e8 = puVar5;
  func_0x00010c12a640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2338;
  puStack_e0 = puVar6;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2338;
  puStack_d8 = puVar7;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9a00;
  puStack_d0 = puVar8;
  func_0x00010c2a4400();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9a08;
  puStack_c8 = puVar9;
  func_0x00010c0e31c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9460;
  puStack_c0 = puVar10;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c9460;
  puStack_b8 = puVar11;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c9460;
  puStack_b0 = puVar12;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9460;
  puStack_a8 = puVar13;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9460;
  puStack_a0 = puVar14;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c9460;
  puStack_98 = puVar15;
  func_0x00010c0f2600();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c9a10;
  puStack_90 = puVar16;
  func_0x00010c29dbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c9a10;
  puStack_88 = puVar17;
  func_0x00010c101880();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c9a18;
  puStack_80 = puVar18;
  func_0x00010c29b500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = &puStack_108;
  uVar25 = 0x13;
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar19;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar24);
  _objc_retain(uVar25);
  ppuVar21 = ppuVar24;
  FUN_1062fbee4();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(puVar1 + 0x60);
  *(undefined ***)(puVar1 + 0x60) = ppuVar21;
  _objc_release(uVar26);
  puVar1[0x6a] = 1;
  puVar2 = PTR_PTR_1126c9a20;
  func_0x00010c0d6c60(PTR_PTR_1126c9a20);
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar24;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar23 = ppuVar22;
  _objc_opt_isKindOfClass(ppuVar22,puVar2);
  ppuVar21 = ppuVar22;
  if (((ulong)ppuVar23 & 1) == 0) {
    ppuVar21 = (undefined **)0x0;
  }
  _objc_retain(ppuVar21);
  _objc_release(ppuVar22);
  ppuVar22 = ppuVar21;
  func_0x00010c067fc0();
  _objc_release(ppuVar21);
  *(ulong *)(puVar1 + 0x30) = (ulong)(ppuVar22 != (undefined **)0x0);
  if (*(long *)(puVar1 + 0x178) != 0) {
    func_0x00010c2513a0();
  }
  _objc_opt_class(puVar1);
  func_0x00010bddb6a0();
  _objc_release(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar24);
  return;
}



/* Entry: 1062fbdb8; end: 1062fbee3; -[SCOperaPlaybackIntentToNextTrackingPlugin _onOpenViewer:page:] */

void FUN_1062fbdb8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_1062fbee4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + 0x6a) = 1;
  puVar2 = PTR_PTR_1126c9a20;
  func_0x00010c0d6c60(PTR_PTR_1126c9a20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  *(ulong *)(param_1 + 0x30) = (ulong)(uVar3 != 0);
  if (*(long *)(param_1 + 0x178) != 0) {
    func_0x00010c2513a0();
  }
  _objc_opt_class(param_1);
  func_0x00010bddb6a0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fbee4; end: 1062fbfcb;  */

void FUN_1062fbee4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain();
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2e48;
  func_0x00010c2709c0(PTR_PTR_1126b2e48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(puVar3);
  _objc_opt_class(puVar2);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  _objc_release(puVar3);
  puVar2 = puVar1;
  if ((((ulong)puVar4 & 1) != 0) && (puVar3 != (undefined *)0x0)) {
    puVar2 = puVar3;
    FUN_1062fcd00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062fbfcc; end: 1062fc3e7; -[SCOperaPlaybackIntentToNextTrackingPlugin operaViewDidSendEvent:page:params:] */

void FUN_1062fbfcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar3 != 0) {
    func_0x00010be6a7e0(param_1,param_2,param_5,param_4);
    goto LAB_1062fc178;
  }
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c12a660(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)uVar3 == 0) {
      puVar1 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar3 == 0) {
        puVar1 = PTR_PTR_1126c9a18;
        func_0x00010c29b500(PTR_PTR_1126c9a18);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar3 == 0) {
          puVar1 = PTR_PTR_1126c9a08;
          func_0x00010c0e31c0(PTR_PTR_1126c9a08);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar3 == 0) {
            puVar1 = PTR_PTR_1126b2338;
            func_0x00010bfe8ca0(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar1);
            if ((int)uVar3 == 0) {
              puVar2 = PTR_PTR_1126c9a00;
              func_0x00010c2a4400(PTR_PTR_1126c9a00);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_3;
              func_0x00010c0720c0(param_3,param_2,puVar2);
              _objc_release(puVar2);
              _objc_release(puVar1);
              if ((int)uVar3 == 0) {
                puVar1 = PTR_PTR_1126b2330;
                func_0x00010bf3df00(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = param_3;
                func_0x00010c0720c0(param_3,param_2,puVar1);
                if ((int)uVar3 == 0) {
                  puVar2 = PTR_PTR_1126b2338;
                  func_0x00010c12a640(PTR_PTR_1126b2338);
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = param_3;
                  func_0x00010c0720c0(param_3,param_2,puVar2);
                  _objc_release(puVar2);
                  _objc_release(puVar1);
                  if ((int)uVar3 == 0) {
                    uVar3 = param_3;
                    func_0x000107cd420c();
                    if ((int)uVar3 == 0) {
                      puVar1 = PTR_PTR_1126c9a10;
                      func_0x00010c29dbc0(PTR_PTR_1126c9a10);
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = param_3;
                      func_0x00010c0720c0(param_3,param_2,puVar1);
                      _objc_release(puVar1);
                      if ((int)uVar3 == 0) {
                        puVar1 = PTR_PTR_1126c9a10;
                        func_0x00010c101880(PTR_PTR_1126c9a10);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = param_3;
                        func_0x00010c0720c0(param_3,param_2,puVar1);
                        _objc_release(puVar1);
                        if ((int)uVar3 == 0) {
                          puVar1 = PTR_PTR_1126b2330;
                          func_0x00010bf3df20(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = param_3;
                          func_0x00010c0720c0(param_3,param_2,puVar1);
                          _objc_release(puVar1);
                          if ((int)uVar3 != 0) {
                            *(undefined1 *)(param_1 + 0x112) = 0;
                          }
                        }
                        else {
                          func_0x00010be6ac80(param_1,param_2,param_3,param_4,param_5);
                        }
                      }
                      else {
                        func_0x00010be6ac60(param_1,param_2,param_3,param_4,param_5);
                      }
                    }
                    else {
                      func_0x00010be6a940(param_1,param_2,param_3,param_4,param_5);
                    }
                    goto LAB_1062fc178;
                  }
                }
                else {
                  _objc_release(puVar1);
                }
                func_0x00010be684e0(param_1,param_2,param_3,param_4,param_5);
                goto LAB_1062fc178;
              }
            }
            else {
              _objc_release(puVar1);
            }
            func_0x00010be69420(param_1,param_2,param_3,param_4,param_5);
            goto LAB_1062fc178;
          }
          uVar3 = 1;
          goto LAB_1062fc120;
        }
        uVar3 = 0;
        uVar4 = 1;
      }
      else {
        uVar3 = 0;
LAB_1062fc120:
        uVar4 = 0;
      }
      func_0x00010be6a060(param_1,param_2,param_3,param_4,param_5,uVar3,uVar4);
      goto LAB_1062fc178;
    }
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010be6a760(param_1,param_2,param_3,param_4,param_5);
LAB_1062fc178:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fc3e8; end: 1062fc52b; -[SCOperaPlaybackIntentToNextTrackingPlugin _onPlaylistViewModelsDidUpdate:page:params:] */

void FUN_1062fc3e8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong in_x4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c9898;
  _objc_retain(in_x4);
  func_0x00010c250a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_x4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  uVar5 = param_1;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0xc0) = param_1;
  puVar2 = PTR_PTR_1126c9898;
  func_0x00010c2299a0(PTR_PTR_1126c9898);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_x4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 200) = uVar5;
  return;
}



/* Entry: 1062fc52c; end: 1062fc5f3; -[SCOperaPlaybackIntentToNextTrackingPlugin _onPlaylistWithFirstVMReady:page:params:] */

void FUN_1062fc52c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong in_x4;
  
  puVar2 = PTR_PTR_1126b2e48;
  if (*(long *)(param_1 + 0x160) != 0) {
    return;
  }
  _objc_retain(in_x4);
  func_0x00010c270aa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_x4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  *(ulong *)(param_1 + 0x160) = uVar3;
  return;
}



/* Entry: 1062fc5f4; end: 1062fcb83; -[SCOperaPlaybackIntentToNextTrackingPlugin _mediaTypeForMediaWithPage:] */

undefined8 FUN_1062fc5f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
LAB_1062fc6e8:
      _objc_release();
      goto LAB_1062fc6f0;
    }
    uVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
LAB_1062fc6e0:
      _objc_release();
      goto LAB_1062fc6e8;
    }
    uVar4 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 != 0) {
      _objc_release();
      goto LAB_1062fc6e0;
    }
    uVar5 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar6 != 0) {
      uVar7 = 2;
      goto LAB_1062fc700;
    }
    uVar1 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067fc0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar7 = 1;
      if ((0x1b < uVar3 + 1) || ((1L << (uVar3 + 1 & 0x3f) & 0xd8de5fdU) == 0)) goto LAB_1062fc700;
      uVar7 = 2;
      if ((0x1b < uVar3 + 1) || ((1L << (uVar3 + 1 & 0x3f) & 0xb4b5dbbU) == 0)) goto LAB_1062fc700;
      uVar7 = 2;
      if ((0x1a < uVar3 + 1) || ((1L << (uVar3 + 1 & 0x3f) & 0x6c6bd77U) == 0)) goto LAB_1062fc700;
    }
    uVar1 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar7 = 3;
      goto LAB_1062fc700;
    }
    uVar1 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 == 0) {
LAB_1062fc978:
      uVar1 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 == 0) {
LAB_1062fca48:
        uVar1 = param_3;
        FUN_1062fcb84();
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 != 0) {
          uVar2 = uVar1;
          func_0x00010c0c5340();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c27dd80();
          uVar7 = 1;
          if ((uVar3 + 1 < 0x1c) && ((1L << (uVar3 + 1 & 0x3f) & 0xd8de4fdU) != 0)) {
            uVar7 = 2;
            if ((uVar3 + 1 < 0x1c) && ((1L << (uVar3 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
              uVar7 = 2;
              if ((uVar3 + 1 < 0x1b) && ((1L << (uVar3 + 1 & 0x3f) & 0x6c6bd77U) != 0)) {
                _objc_release(uVar2);
                goto LAB_1062fcaf8;
              }
            }
          }
          goto LAB_1062fcb6c;
        }
LAB_1062fcaf8:
        uVar2 = param_3;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar2);
        uVar7 = 4;
        if (uVar3 != 0) {
          uVar7 = 1;
        }
      }
      else {
        uVar1 = param_3;
        FUN_1062fe67c();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c27dd80();
        uVar7 = 1;
        if ((uVar2 + 1 < 0x1c) && ((1L << (uVar2 + 1 & 0x3f) & 0xd8de4fdU) != 0)) {
          uVar7 = 2;
          if ((uVar2 + 1 < 0x1c) && ((1L << (uVar2 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
            uVar7 = 2;
            if ((uVar2 + 1 < 0x1b) && ((1L << (uVar2 + 1 & 0x3f) & 0x6c6bd77U) != 0)) {
              _objc_release(uVar1);
              goto LAB_1062fca48;
            }
          }
        }
      }
    }
    else {
      uVar1 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2827c0();
      uVar7 = 1;
      if (uVar3 < 0x21) {
        if ((1L << (uVar3 & 0x3f) & 0x1ffcffd81U) != 0) {
          _objc_release(uVar2);
          _objc_release(uVar1);
          goto LAB_1062fc978;
        }
        if ((1L << (uVar3 & 0x3f) & 0x300070U) == 0) {
          if (uVar3 == 9) {
            uVar7 = 3;
          }
        }
        else {
          uVar7 = 2;
        }
      }
LAB_1062fcb6c:
      _objc_release(uVar2);
    }
  }
  else {
LAB_1062fc6f0:
    _objc_release();
    uVar7 = 2;
  }
  _objc_release(uVar1);
LAB_1062fc700:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1062fcb84; end: 1062fcbff;  */

void FUN_1062fcb84(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
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



/* Entry: 1062fcc00; end: 1062fccff; -[SCOperaPlaybackIntentToNextTrackingPlugin _mediaViewingIntentDateForNonFirstPage:] */

void FUN_1062fcc00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar3);
  lVar4 = *(long *)(param_1 + 0xa8);
  puVar1 = PTR_PTR_1126c9a28;
  func_0x00010c29d260(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar4 == 0) {
    func_0x00010be0ab00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    lVar4 = param_1;
    if (param_1 == 0) goto LAB_1062fccb0;
  }
  lVar2 = lVar4;
  FUN_1062fcd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar4);
LAB_1062fccb0:
  if (lVar2 == 0) {
    lVar4 = param_3;
    FUN_1062fbee4(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1062fcd00; end: 1062fcd7f;  */

void FUN_1062fcd00(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain();
  _CACurrentMediaTime();
  dVar3 = param_1;
  func_0x00010bf885a0(param_2);
  _objc_release(param_2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e40(-(param_1 - dVar3));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062fcd80; end: 1062fd0c7; -[SCOperaPlaybackIntentToNextTrackingPlugin _onOpenMedia:page:params:] */

void FUN_1062fcd80(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_5;
    FUN_1062fbee4();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar2;
    _objc_release(uVar7);
    if (*(long *)(param_1 + 0x140) == 0) {
      puVar4 = PTR_PTR_1126b2e48;
      func_0x00010c270aa0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c2827c0();
      _objc_release(uVar2);
      *(ulong *)(param_1 + 0x140) = uVar3;
    }
    puVar1 = PTR_PTR_1126c98e0;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x69) = 1;
    uVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((((int)uVar5 == 0) || (*(char *)(param_1 + 0x171) != '\x01')) ||
       (*(long *)(param_1 + 0x90) != 2)) {
      func_0x00010bedb780(param_1);
    }
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      lVar6 = param_1;
      func_0x00010be5ee20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar6;
      _objc_release(uVar7);
      _objc_opt_class(param_1);
      func_0x00010bddb6a0();
    }
    puVar4 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = uVar2;
    _objc_release(uVar7);
    _objc_release(puVar4);
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      uVar7 = 0;
      if (*(long *)(param_1 + 0xa0) != -1) {
        uVar7 = 3;
      }
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa0);
    }
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = 0;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    _objc_release(uVar7);
    *(undefined1 *)(param_1 + 0x111) = 0;
    if (*(char *)(param_1 + 0x128) == '\x01') {
      lVar6 = param_1;
      _objc_opt_class(param_1);
      func_0x00010be45d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddb6c0(param_1);
      _objc_release(lVar6);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062fd0c8; end: 1062fd2cb; -[SCOperaPlaybackIntentToNextTrackingPlugin _onMediaStartsToDisplay:page:params:isGenericPlayback:isVideoStartsPlayingEvent:] */

void FUN_1062fd0c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb2f40();
  uVar7 = (uint)lVar1;
  if ((((param_7 ^ 1) & 1) != 0) || (uVar7 != 0)) {
    lVar1 = param_1;
    func_0x00010be5ece0();
    *(long *)(param_1 + 0x98) = lVar1;
    if (((param_7 ^ 1) & uVar7) == 1) {
      uVar2 = param_5;
      FUN_1062fbee4();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x118);
      *(ulong *)(param_1 + 0x118) = uVar2;
      _objc_release(uVar6);
      _objc_retain(param_5);
      uVar6 = *(undefined8 *)(param_1 + 0x120);
      *(ulong *)(param_1 + 0x120) = param_5;
      _objc_release(uVar6);
    }
    puVar3 = PTR_PTR_1126b2330;
    if (*(long *)(param_1 + 0x158) == 0) {
      puVar3 = PTR_PTR_1126b2e48;
      func_0x00010c270aa0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar2 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010c2827c0();
      _objc_release(uVar2);
      *(ulong *)(param_1 + 0x158) = uVar4;
      puVar3 = PTR_PTR_1126b2330;
    }
    PTR_PTR_1126b2330 = puVar3;
    if (((param_6 & 1) != 0) || (*(long *)(param_1 + 0x98) == 2)) {
      if (*(long *)(param_1 + 0x90) != 1) {
        func_0x00010c0e9c40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be6a760(param_1);
        _objc_release(puVar3);
      }
      func_0x00010be086a0(param_1);
      if (((param_7 ^ uVar7) & 1) == 0) {
        *(undefined8 *)(param_1 + 0x90) = 2;
      }
      func_0x00010bf04340(PTR_PTR_1126c98e0);
      func_0x00010be904e0(param_1);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062fd2cc; end: 1062fd43f; -[SCOperaPlaybackIntentToNextTrackingPlugin _onFirstFrameStartsToDisplay:page:params:] */

void FUN_1062fd2cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x150) == 0) {
    puVar1 = PTR_PTR_1126b2e48;
    func_0x00010c270aa0(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar4 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c2827c0();
    _objc_release(uVar4);
    *(ulong *)(param_1 + 0x150) = uVar2;
  }
  uVar4 = param_5;
  FUN_1062fbee4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(ulong *)(param_1 + 0x50) = uVar4;
  _objc_release(uVar5);
  func_0x00010bf04340(PTR_PTR_1126c98e0);
  *(undefined1 *)(param_1 + 0x68) = 1;
  func_0x00010be086a0(param_1);
  uVar4 = param_1;
  func_0x00010be5ece0();
  *(ulong *)(param_1 + 0x98) = uVar4;
  if ((uVar4 | 2) == 3) {
    func_0x00010bedb780(param_1);
    func_0x00010be904e0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fd440; end: 1062fd577; -[SCOperaPlaybackIntentToNextTrackingPlugin _onPaged:page:params:] */

void FUN_1062fd440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_5;
  FUN_1062fbee4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  *(ulong *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + 0x6a) = 1;
  puVar2 = PTR_PTR_1126c9a28;
  func_0x00010c29d280(PTR_PTR_1126c9a28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c2827c0(uVar3);
  }
  func_0x00010beda4e0(param_1);
  func_0x00010bed7900(param_1);
  _objc_release(param_3);
  func_0x00010bed9d20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1062fd578; end: 1062fd5a7; -[SCOperaPlaybackIntentToNextTrackingPlugin _updateInteractionTimestampsWithParams:] */

void FUN_1062fd578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062fd5a8; end: 1062fd733; -[SCOperaPlaybackIntentToNextTrackingPlugin _onCloseMedia:page:params:] */

void FUN_1062fd5a8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b2e48;
    func_0x00010c270aa0(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c2827c0();
    _objc_release(uVar1);
    *(ulong *)(param_1 + 0x148) = uVar2;
    if (*(long *)(param_1 + 0x90) != 3) {
      lVar5 = param_1;
      func_0x00010bdddaa0();
      *(undefined8 *)(param_1 + 0x90) = 3;
      if ((int)lVar5 != 0) {
        if (((*(char *)(param_1 + 0x110) == '\x01') &&
            (lVar5 = param_1, func_0x00010beb2f40(), (int)lVar5 != 0)) &&
           (*(long *)(param_1 + 0x118) != 0)) {
          func_0x00010be904e0(param_1);
        }
        else {
          func_0x00010be8f2a0(param_1);
        }
      }
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062fd734; end: 1062fd78b; -[SCOperaPlaybackIntentToNextTrackingPlugin _emitViewerFirstFrameEventIfNeeded] */

void FUN_1062fd734(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x112) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x112) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c29ef40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062fd78c; end: 1062fd84b; -[SCOperaPlaybackIntentToNextTrackingPlugin _reportSuccessfullyDisplayedMediaWithPage:params:shouldReportBlizzard:shouldEmitOperaPITNEvent:] */

void FUN_1062fd78c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  FUN_1062fbee4(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fc40(param_2,param_3,param_4,param_5,uVar1,0,param_6);
  _objc_release(uVar1);
  if ((param_7 != 0) && (0.0 <= param_1)) {
    func_0x00010bdcc340(param_1,param_2,param_3,param_4,param_5,0);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062fd84c; end: 1062fd90b; -[SCOperaPlaybackIntentToNextTrackingPlugin _reportAbandondedMediaWithPage:params:shouldReportBlizzard:shouldEmitOperaPITNEvent:] */

void FUN_1062fd84c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  FUN_1062fbee4(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fc40(param_2,param_3,param_4,param_5,uVar1,1,param_6);
  _objc_release(uVar1);
  if ((param_7 != 0) && (0.0 <= param_1)) {
    func_0x00010bdcc340(param_1,param_2,param_3,param_4,param_5,1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062fd90c; end: 1062fe67b; -[SCOperaPlaybackIntentToNextTrackingPlugin _reportMediaWithPage:params:when:isAbandoned:shouldReportBlizzard:] */

double FUN_1062fd90c(double param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                    undefined8 param_6,undefined1 param_7,int param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  double dStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  FUN_10630d2d4(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  FUN_10630cf00(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bdc3980();
  puVar6 = PTR_PTR_1126b2340;
  uVar5 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079440();
  _objc_release(uVar5);
  dVar22 = -1.0;
  if ((((ulong)puVar6 & 1) == 0) &&
     (uVar5 = param_4, func_0x00010c23e300(), puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0,
     (uVar5 & 1) == 0)) {
    func_0x00010bc90ccc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010bf04340(PTR_PTR_1126c98e0);
    uVar5 = param_4;
    FUN_1062fcb84();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + 0xd0);
    *(ulong *)(param_2 + 0xd0) = uVar5;
    _objc_release(uVar18);
    uVar5 = param_4;
    FUN_1062fe67c();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + 0xd8);
    *(ulong *)(param_2 + 0xd8) = uVar5;
    _objc_release(uVar18);
    uVar5 = param_4;
    func_0x0001062fe6f0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + 0xe0);
    *(ulong *)(param_2 + 0xe0) = uVar5;
    _objc_release(uVar18);
    uVar5 = param_4;
    FUN_1062fe764();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + 0xe8);
    *(ulong *)(param_2 + 0xe8) = uVar5;
    _objc_release(uVar18);
    lVar4 = param_2;
    _objc_opt_class();
    func_0x00010be45d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c99d8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf64f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      lVar9 = *(long *)(param_2 + 0x70);
      func_0x00010bf433a0();
      if (lVar9 == 1) {
        _objc_retain(puVar8);
        uVar18 = *(undefined8 *)(param_2 + 0x70);
        *(undefined **)(param_2 + 0x70) = puVar8;
        _objc_release(uVar18);
      }
    }
    func_0x00010c26f380(param_6);
    dVar22 = param_1 * 1000.0;
    puVar7 = PTR_PTR_1126c9a30;
    func_0x00010c0eaba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1a60();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3860(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aade0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b53a0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c077160(PTR_PTR_1126c9a38);
    func_0x00010c2b3240(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be4e380(param_2);
    func_0x00010c2b2ee0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3ba0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2adb00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be0e900(param_2);
    func_0x00010c2adb20(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be45f40(param_2);
    func_0x00010c2b1b00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bebcb60(param_2);
    func_0x00010c2b9340(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ad400(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ad480(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bc940(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3b00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    FUN_10630d890(param_4);
    func_0x00010c2b1b80(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be75180(param_2);
    func_0x00010c2b5780(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be5ebc0(param_2);
    func_0x00010c2b3a00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b5680(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010be45ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1a40(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    func_0x00010bec53e0(param_2);
    func_0x00010c2ba840(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4580(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b39c0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c0ffc00(PTR_PTR_1126c9a40);
    func_0x00010c2b56e0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4ec0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2348;
    func_0x00010c0c4c80(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3740(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar10);
    dVar21 = dVar22;
    func_0x00010c2bcc00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010bdd2920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a91a0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    puVar10 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd920();
    func_0x00010c2b4980(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (*(long *)(param_2 + 0x180) != 0) {
      lVar9 = param_2;
      func_0x00010be9a820(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b4600(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
    puVar10 = PTR_PTR_1126c9a48;
    _objc_opt_new();
    if (*(long *)(param_2 + 0x188) != 0) {
      func_0x00010c0b4ca0();
    }
    if (*(long *)(param_2 + 400) != 0) {
      func_0x00010c0b4ca0();
    }
    func_0x00010c1cc740(puVar10);
    func_0x00010c1cc700(puVar10);
    func_0x00010c2b4640(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b53c0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b5300(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3940(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3840(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((*(byte *)(param_2 + 0x170) & 1) == 0) {
      func_0x00010c2afdc0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2aff40(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      *(undefined1 *)(param_2 + 0x170) = 1;
    }
    puVar11 = PTR_PTR_1126c9a50;
    _objc_opt_new();
    func_0x00010bdc39c0(param_2);
    func_0x00010c1e3cc0(puVar11);
    puVar12 = PTR_PTR_1126c9a58;
    uVar5 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4220(puVar12);
    func_0x00010c163f80(puVar11);
    _objc_release(uVar5);
    puVar12 = PTR_PTR_1126c9a58;
    uVar5 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60e0(puVar12);
    func_0x00010c164dc0(puVar11);
    _objc_release(uVar5);
    puVar12 = PTR_PTR_1126b2340;
    uVar5 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (puVar12 != (undefined *)0x0) {
      puVar13 = puVar12;
      func_0x00010c0844e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b5f60(puVar11);
      _objc_release(puVar13);
      puVar13 = puVar12;
      func_0x00010c084c60(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6360(puVar11);
      _objc_release(puVar13);
      puVar13 = puVar12;
      func_0x00010c084c80(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b63c0(puVar11);
      _objc_release(puVar13);
    }
    func_0x00010c2b6100(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010630dac4(param_4);
    func_0x00010c2b57a0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b2e48;
    func_0x00010c2709c0(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar5);
    _objc_release(puVar13);
    if (*(double *)(param_2 + 0xc0) != 0.0) {
      func_0x00010c2affa0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (*(double *)(param_2 + 200) != 0.0) {
      func_0x00010c2b57c0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (*(char *)(param_2 + 0x69) == '\x01') {
      func_0x00010c2aff80(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (*(char *)(param_2 + 0x6a) == '\x01') {
      func_0x00010c2aff60(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (*(char *)(param_2 + 0x68) == '\x01') {
      func_0x00010c2ae2a0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar13 = PTR_PTR_1126b2348;
    func_0x00010c29b4e0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(uVar5);
    _objc_opt_class(puVar13);
    uVar14 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar13);
    _objc_release(uVar5);
    if (((uVar14 & 1) != 0) && (uVar5 != 0)) {
      func_0x00010bf885a0(uVar5);
      func_0x00010c2bc720(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar13 = PTR_PTR_1126b2348;
    func_0x00010c29ad40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(uVar14);
    _objc_opt_class(puVar13);
    uVar15 = uVar14;
    _objc_opt_isKindOfClass(uVar14,puVar13);
    _objc_release(uVar14);
    if (((uVar15 & 1) != 0) && (uVar14 != 0)) {
      func_0x00010bf885a0(uVar14);
      func_0x00010c2bc740(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar19 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar19);
    uVar20 = *(undefined8 *)(param_2 + 0xf0);
    _objc_retain(uVar20);
    uVar18 = *(undefined8 *)(param_2 + 0xf8);
    _objc_retain(uVar18);
    _objc_initWeak(auStack_90,param_2);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1062fe8c4;
    puStack_f0 = &UNK_11091c3e8;
    _objc_retain(puVar7);
    uStack_98 = (undefined1)param_8;
    puStack_e8 = puVar7;
    uStack_97 = param_7;
    _objc_retain(uVar1);
    uStack_e0 = uVar1;
    _objc_retain(uVar2);
    uStack_d8 = uVar2;
    _objc_retain(uVar19);
    uStack_d0 = uVar19;
    dStack_a0 = dVar21;
    _objc_copyWeak(auStack_a8,auStack_90);
    _objc_retain(uVar20);
    uStack_c8 = uVar20;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    _objc_retain(uVar18);
    uStack_b8 = uVar18;
    _objc_retain(lVar4);
    ppuVar16 = &puStack_108;
    lStack_b0 = lVar4;
    _objc_retainBlock();
    if (param_8 != 0) {
      if (*(char *)(param_2 + 0x128) == '\x01') {
        (*(code *)ppuVar16[2])
                  (ppuVar16,*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138));
      }
      else {
        func_0x00010be45f20(param_2);
      }
    }
    uVar17 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_2 + 0xd8) = 0;
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_2 + 0xe0) = 0;
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_2 + 0xd0) = 0;
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_2 + 0xe8) = 0;
    _objc_release(uVar17);
    *(undefined1 *)(param_2 + 0x6a) = 0;
    *(undefined2 *)(param_2 + 0x68) = 0;
    _objc_release(ppuVar16);
    _objc_release(lStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(puStack_e8);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar18);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar14);
    _objc_release(uVar5);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(lVar4);
    _objc_release(puVar6);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return dVar22;
}



/* Entry: 1062fe67c; end: 1062fe763;  */

void FUN_1062fe67c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a52f8);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062fe764; end: 1062fe8c3;  */

void FUN_1062fe764(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106300b20;
  uStack_40 = 0x106300b30;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c9a80;
  _objc_opt_class(PTR_PTR_1126c9a80);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c0bebc0(uVar1);
  uVar5 = puStack_58[5];
  _objc_retain(uVar5);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1062fe8c4; end: 1062fea97;  */

void FUN_1062fe8c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c2b1ac0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1ae0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0b8600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3b60(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf21f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac600(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x38));
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be8ff60();
    _objc_release(lVar1);
    FUN_1062fb230(*(undefined8 *)(param_1 + 0x40),uVar2,*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50));
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010be926a0();
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126c99d8;
  func_0x00010c22ba80(PTR_PTR_1126c99d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128540();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fea98; end: 1062fecfb; -[SCOperaPlaybackIntentToNextTrackingPlugin _reportPerfMetricForPITN:isAbandoned:] */

void FUN_1062fea98(long param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126b1600;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c22bdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b15f8;
  _objc_alloc(PTR_PTR_1126b15f8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e49f58;
  if (*(char *)(param_1 + 0x80) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e49f78;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dbe758;
  func_0x00010c2a1420(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110db9478;
  ppuVar6 = param_3;
  func_0x00010c0c6c20();
  func_0x00010bc90ccc();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110db6c78;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_98 = ppuVar6;
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_4 == 0) {
    ppuStack_90 = &PTR____CFConstantStringClassReference_110db8138;
  }
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e4a078;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e4a098;
  ppuVar7 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110db6c78;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_88 = ppuVar7;
  }
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e4a0b8;
  ppuVar8 = param_3;
  func_0x00010c100f80();
  _objc_release(param_3);
  func_0x00010bb06e3c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_80 = ppuVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_98,&ppuStack_b8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010c80(puVar3,param_2,ppuVar1,0,puVar5,puVar9);
  func_0x00010c0aa440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar2 + 0x158) = 0;
  *(undefined8 *)(puVar2 + 0x150) = 0;
  *(undefined8 *)(puVar2 + 0x168) = 0;
  *(undefined8 *)(puVar2 + 0x160) = 0;
  *(undefined8 *)(puVar2 + 0x148) = 0;
  *(undefined8 *)(puVar2 + 0x140) = 0;
  return;
}



/* Entry: 1062fecfc; end: 1062fed0b; -[SCOperaPlaybackIntentToNextTrackingPlugin _resetCheckpointTimestamps] */

void FUN_1062fecfc(long param_1)

{
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  return;
}



/* Entry: 1062fed0c; end: 1062ff0d3; -[SCOperaPlaybackIntentToNextTrackingPlugin _announcePitnOperaEventWithPage:params:isAbandoned:waitMs:] */

void FUN_1062fed0c(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  if ((param_2[0x111] & 1) == 0) {
    param_2[0x111] = 1;
    puVar1 = PTR_PTR_1126c9a68;
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    dVar15 = param_1;
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c072fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b8 = puVar1;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_2[0x80]);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a68;
    puStack_98 = puVar2;
    func_0x00010c06b400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = puVar3;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9a68;
    puStack_90 = puVar4;
    func_0x00010c2a1420();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar5;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9a68;
    puStack_88 = puVar6;
    func_0x00010bf157a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar8 = PTR_PTR_1126b7410;
    puStack_a0 = puVar7;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0dd920();
    func_0x00010c0df780(puVar14,param_3,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar14;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_98,&puStack_b8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar10,param_3,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar14);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar14 = PTR_PTR_1126b2e48;
    func_0x00010c2709c0(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010c0e00e0(param_5,param_3,puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar1 = PTR_PTR_1126b2e48;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar10,param_3,uVar12,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar12);
    _objc_release(puVar14);
    lVar11 = *(long *)(param_2 + 0x178);
    if (lVar11 != 0) {
      func_0x00010c0897c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_2 + 0x180);
      *(long *)(param_2 + 0x180) = lVar11;
      _objc_release(uVar12);
      lVar11 = *(long *)(param_2 + 0x178);
      func_0x00010c137300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 != 0) {
        uVar12 = *(undefined8 *)(param_2 + 0x178);
        func_0x00010bf316e0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_2 + 0x188);
        *(undefined8 *)(param_2 + 0x188) = uVar12;
        _objc_release(uVar13);
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((*(long *)(param_2 + 0x188) != 0) && (*(long *)(param_2 + 0x180) != 0)) {
          func_0x00010bd55f40();
          uVar12 = *(undefined8 *)(param_2 + 0x178);
          dVar16 = dVar15;
          func_0x00010c137300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          func_0x00010c0df720(dVar15 - dVar16);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_2 + 400);
          *(undefined **)(param_2 + 400) = puVar14;
          _objc_release(uVar13);
          _objc_release(uVar12);
        }
      }
      func_0x00010c256ce0(*(undefined8 *)(param_2 + 0x178));
    }
    uVar12 = *(undefined8 *)(param_2 + 0x108);
    puVar14 = PTR_PTR_1126c9a08;
    func_0x00010c0fc7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar12,param_3,puVar14,param_4,puVar10);
    _objc_release(param_4);
    _objc_release(puVar14);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined **)(puVar10 + 0xa8);
  if (puVar14 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c9a28;
    func_0x00010c29d1e0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar14,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar14 == (undefined *)0x0) {
      puVar14 = *(undefined **)(puVar10 + 0xa8);
      puVar10 = PTR_PTR_1126b2e48;
      func_0x00010c2709c0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar14,param_3,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar14 == (undefined *)0x0) {
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar10;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1062ff0d4; end: 1062ff19f; -[SCOperaPlaybackIntentToNextTrackingPlugin _entryInteractionBeginTimestamp] */

void FUN_1062ff0d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0xa8);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c9a28;
    func_0x00010c29d1e0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)(param_1 + 0xa8);
      puVar1 = PTR_PTR_1126b2e48;
      func_0x00010c2709c0(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(puVar2,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar2 == (undefined *)0x0) {
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062ff1a0; end: 1062ff1a7; -[SCOperaPlaybackIntentToNextTrackingPlugin _updateMediaViewingStageTo:page:] */

void FUN_1062ff1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 1062ff1a8; end: 1062ff227; -[SCOperaPlaybackIntentToNextTrackingPlugin _shouldDecouplePITNTriggeringVideoStartEvents:params:] */

undefined8
FUN_1062ff1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010c0d8d60(puVar1);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bf1f3c0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 1062ff228; end: 1062ff4a7; +[SCOperaPlaybackIntentToNextTrackingPlugin _captureLoadState:params:playlistItemController:storiesMediaCoordinator:playbackMediaPrefetcher:] */

void FUN_1062ff228(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 != 0) {
    uVar1 = param_4;
    FUN_1062fbee4(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c99d8;
    func_0x00010c22ba80(PTR_PTR_1126c99d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x0001062fe6f0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x0001062fe67c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar7 = param_3;
      FUN_1062fcb84();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        lVar6 = param_3;
        FUN_1062fe764();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010be45d40(param_1,param_2,param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf30dc0(puVar2,param_2,param_3,param_4,param_1,uVar1);
          _objc_release(param_1);
        }
        else {
          func_0x00010bf30e40(puVar2,param_2,lVar6,param_7);
        }
        lVar7 = 0;
      }
      else {
        lVar6 = lVar7;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        FUN_1062ff4a8();
        if ((int)lVar5 == 0) {
          func_0x00010bf30e00(puVar2,param_2,lVar7,param_6,lVar6,uVar1);
        }
        else {
          func_0x00010bf30de0(puVar2,param_2,param_3,param_5,lVar6,uVar1);
        }
      }
    }
    else {
      lVar7 = lVar3;
      func_0x00010c135a00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c076b80(lVar3);
      lVar6 = lVar4;
      func_0x00010c0a7de0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf31340(puVar2,param_2,lVar7,lVar5,lVar6,uVar1,param_3,param_4);
    }
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ff4a8; end: 1062ff50f;  */

undefined8 FUN_1062ff4a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1062ff510; end: 1062ff54b; -[SCOperaPlaybackIntentToNextTrackingPlugin _updateLastPagingEntryEventForEvent:viewInteractionType:] */

void FUN_1062ff510(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_4 == 0) {
    func_0x000107cd41a8(param_3,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x000107cd4718();
    param_3 = param_4;
  }
  *(long *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 1062ff54c; end: 1062ff577; -[SCOperaPlaybackIntentToNextTrackingPlugin _updateEntryIntentForPagingEvent:viewInteractionType:] */

void FUN_1062ff54c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107cd49e8(param_4,*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  return;
}



/* Entry: 1062ff578; end: 1062ff587; -[SCOperaPlaybackIntentToNextTrackingPlugin _checkIfMediaAbandonedOnClosing:] */

bool FUN_1062ff578(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffe) != 2;
}



/* Entry: 1062ff588; end: 1062ff5eb; -[SCOperaPlaybackIntentToNextTrackingPlugin _itemGroupId:] */

void FUN_1062ff588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((*(long *)(param_1 + 0xd8) == 0) && (*(long *)(param_1 + 0xd0) == 0)) &&
     (lVar1 = *(long *)(param_1 + 0xe8), lVar1 != 0)) {
    func_0x00010c29a460();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062ff5ec; end: 1062ff65b; -[SCOperaPlaybackIntentToNextTrackingPlugin _streamingFailureCode:] */

undefined8 FUN_1062ff5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0xd0) == 0) && (lVar1 = *(long *)(param_1 + 0xd8), lVar1 != 0)) {
    func_0x00010c25c7c0();
    if (lVar1 + 1U < 4) {
      uVar2 = *(undefined8 *)(&UNK_10dddb420 + (lVar1 + 1U) * 8);
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1062ff65c; end: 1062ff677; -[SCOperaPlaybackIntentToNextTrackingPlugin _playerSessionTimeStamp] */

long FUN_1062ff65c(double param_1,long param_2)

{
  func_0x00010c26f320(*(undefined8 *)(param_2 + 0x48));
  return (long)param_1;
}



/* Entry: 1062ff678; end: 1062ff71b; -[SCOperaPlaybackIntentToNextTrackingPlugin _featureMinorName:] */

ulong FUN_1062ff678(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0xd8);
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(param_1 + 0xd0);
    if (uVar2 == 0) {
      uVar2 = 0xffffffffffffffff;
      goto LAB_1062ff704;
    }
    func_0x000108539800();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0xd0);
      func_0x000108539a68();
      if ((uVar2 & 1) == 0) {
        uVar2 = (ulong)(*(long *)(param_1 + 0x18) == 8 || *(long *)(param_1 + 0x18) == 0x25);
      }
      else {
        uVar2 = 2;
      }
      goto LAB_1062ff704;
    }
  }
  else {
    func_0x00010c074980();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0xd8);
      func_0x00010c07dc60();
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      goto LAB_1062ff704;
    }
  }
  uVar2 = 4;
LAB_1062ff704:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1062ff71c; end: 1062ff72f; -[SCOperaPlaybackIntentToNextTrackingPlugin _itemLoadedCount:] */

undefined8 FUN_1062ff71c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 1062ff730; end: 1062ff7b7; -[SCOperaPlaybackIntentToNextTrackingPlugin _snapDuration:] */

undefined8 FUN_1062ff730(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = 0;
  if (*(long *)(param_2 + 0x98) == 2) {
    if (*(long *)(param_2 + 0xd8) == 0) {
      lVar1 = *(long *)(param_2 + 0xd0);
      if (lVar1 != 0) {
        func_0x00010c26f2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160();
        _objc_release(lVar1);
        uVar2 = param_1;
      }
    }
    else {
      func_0x00010c26f000();
      uVar2 = param_1;
    }
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 1062ff7b8; end: 1062ff7cf; -[SCOperaPlaybackIntentToNextTrackingPlugin _mediaSizeInBytes:] */

undefined8 FUN_1062ff7b8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010c0ddcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_numBytes_112615150);
    return uVar1;
  }
  return 0;
}



/* Entry: 1062ff7d0; end: 1062ff7ef; -[SCOperaPlaybackIntentToNextTrackingPlugin _loadPhase:isAbandoned:] */

undefined8 FUN_1062ff7d0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 4;
  if (param_3 == 0) {
    uVar1 = 5;
  }
  uVar2 = 1;
  if (param_3 == 0) {
    uVar2 = 2;
  }
  if (param_4 == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1062ff7f0; end: 1062ff83b; -[SCOperaPlaybackIntentToNextTrackingPlugin _bandwidthRangeClass:] */

void FUN_1062ff7f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062ff83c; end: 1062ff9d7; -[SCOperaPlaybackIntentToNextTrackingPlugin _scaNetworkSnapshots] */

void FUN_1062ff83c(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar14 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c136340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x180);
  func_0x00010c136340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar3);
        }
        puVar5 = PTR_PTR_1126c9a70;
        func_0x00010c0d8100(*(undefined8 *)(param_1 + 0x178));
        func_0x00010c2b4620();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar2);
        _objc_release(puVar5);
        lVar16 = lVar16 + 1;
      } while (lVar4 != lVar16);
      lVar4 = lVar3;
      ppuVar14 = &puStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  ppuVar6 = ppuVar2;
  func_0x00010bf51e00();
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  ppuVar2 = (undefined **)PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar7 = ppuVar14;
    FUN_1062fe67c();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
LAB_1062ffa7c:
      ppuVar8 = ppuVar14;
      FUN_1062fcb84();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar9 = ppuVar14;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c99e0;
        func_0x00010bf24b40(PTR_PTR_1126c99e0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(ppuVar9);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar10 = ppuVar6;
        _objc_opt_isKindOfClass(ppuVar6,puVar5);
        ppuVar9 = ppuVar6;
        if (((ulong)ppuVar10 & 1) == 0) {
          ppuVar9 = (undefined **)0x0;
        }
        _objc_retain(ppuVar9);
        _objc_release(ppuVar6);
        if (ppuVar9 == (undefined **)0x0) {
          ppuVar10 = ppuVar14;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126c9a78;
          func_0x00010bef5320(PTR_PTR_1126c9a78);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(ppuVar10);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar11 = ppuVar6;
          _objc_opt_isKindOfClass(ppuVar6,puVar5);
          ppuVar10 = ppuVar6;
          if (((ulong)ppuVar11 & 1) == 0) {
            ppuVar10 = (undefined **)0x0;
          }
          _objc_retain(ppuVar10);
          _objc_release(ppuVar6);
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar11 = ppuVar14;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar11;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar11);
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            ppuVar12 = ppuVar6;
            _objc_opt_isKindOfClass(ppuVar6,puVar5);
            ppuVar11 = ppuVar6;
            if (((ulong)ppuVar12 & 1) == 0) {
              ppuVar11 = (undefined **)0x0;
            }
            _objc_retain(ppuVar11);
            _objc_release(ppuVar6);
            if (ppuVar11 == (undefined **)0x0) {
              ppuVar12 = ppuVar14;
              func_0x00010c118b40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar12);
              puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
              ppuVar13 = ppuVar6;
              _objc_opt_isKindOfClass(ppuVar6,puVar5);
              ppuVar12 = ppuVar6;
              if (((ulong)ppuVar13 & 1) == 0) {
                ppuVar12 = (undefined **)0x0;
              }
              _objc_retain(ppuVar12);
              _objc_release(ppuVar6);
              if (ppuVar12 == (undefined **)0x0) {
                ppuVar13 = ppuVar14;
                FUN_1062fe764();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar13 == (undefined **)0x0) {
                  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
                }
                else {
                  ppuVar6 = ppuVar13;
                  func_0x00010c29a460(ppuVar13);
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(ppuVar13);
              }
              else {
                _objc_retain(ppuVar6);
              }
              _objc_release(ppuVar12);
            }
            else {
              _objc_retain(ppuVar6);
            }
            _objc_release(ppuVar11);
          }
          else {
            _objc_retain(ppuVar6);
          }
          _objc_release(ppuVar10);
        }
        else {
          _objc_retain(ppuVar6);
        }
        _objc_release(ppuVar9);
      }
      else {
        ppuVar6 = ppuVar8;
        func_0x00010bf3cf60(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar8);
    }
    else {
      ppuVar6 = ppuVar7;
      func_0x00010c0a7de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar6 == (undefined **)0x0) goto LAB_1062ffa7c;
      ppuVar6 = ppuVar7;
      func_0x00010c0a7de0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar7);
  }
  else {
    _objc_retain(ppuVar2);
    ppuVar6 = ppuVar2;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar14);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1062ff9d8; end: 1062ffd57; +[SCOperaPlaybackIntentToNextTrackingPlugin _itemId:] */

void FUN_1062ff9d8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined **)0x0) {
    _objc_retain(ppuVar1);
    ppuVar6 = ppuVar1;
    goto LAB_1062ffd28;
  }
  ppuVar2 = param_3;
  FUN_1062fe67c();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
LAB_1062ffa7c:
    ppuVar3 = param_3;
    FUN_1062fcb84();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c99e0;
      func_0x00010bf24b40(PTR_PTR_1126c99e0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar7 = ppuVar6;
      _objc_opt_isKindOfClass(ppuVar6,puVar5);
      ppuVar4 = ppuVar6;
      if (((ulong)ppuVar7 & 1) == 0) {
        ppuVar4 = (undefined **)0x0;
      }
      _objc_retain(ppuVar4);
      _objc_release(ppuVar6);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar7 = param_3;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c9a78;
        func_0x00010bef5320(PTR_PTR_1126c9a78);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(ppuVar7);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar8 = ppuVar6;
        _objc_opt_isKindOfClass(ppuVar6,puVar5);
        ppuVar7 = ppuVar6;
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar7 = (undefined **)0x0;
        }
        _objc_retain(ppuVar7);
        _objc_release(ppuVar6);
        if (ppuVar7 == (undefined **)0x0) {
          ppuVar8 = param_3;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar8);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar9 = ppuVar6;
          _objc_opt_isKindOfClass(ppuVar6,puVar5);
          ppuVar8 = ppuVar6;
          if (((ulong)ppuVar9 & 1) == 0) {
            ppuVar8 = (undefined **)0x0;
          }
          _objc_retain(ppuVar8);
          _objc_release(ppuVar6);
          if (ppuVar8 == (undefined **)0x0) {
            ppuVar9 = param_3;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar9);
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            ppuVar10 = ppuVar6;
            _objc_opt_isKindOfClass(ppuVar6,puVar5);
            ppuVar9 = ppuVar6;
            if (((ulong)ppuVar10 & 1) == 0) {
              ppuVar9 = (undefined **)0x0;
            }
            _objc_retain(ppuVar9);
            _objc_release(ppuVar6);
            if (ppuVar9 == (undefined **)0x0) {
              ppuVar10 = param_3;
              FUN_1062fe764();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar10 == (undefined **)0x0) {
                ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
              }
              else {
                ppuVar6 = ppuVar10;
                func_0x00010c29a460(ppuVar10);
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(ppuVar10);
            }
            else {
              _objc_retain(ppuVar6);
            }
            _objc_release(ppuVar9);
          }
          else {
            _objc_retain(ppuVar6);
          }
          _objc_release(ppuVar8);
        }
        else {
          _objc_retain(ppuVar6);
        }
        _objc_release(ppuVar7);
      }
      else {
        _objc_retain(ppuVar6);
      }
      _objc_release(ppuVar4);
    }
    else {
      ppuVar6 = ppuVar3;
      func_0x00010bf3cf60(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x00010c0a7de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 == (undefined **)0x0) goto LAB_1062ffa7c;
    ppuVar6 = ppuVar2;
    func_0x00010c0a7de0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
LAB_1062ffd28:
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1062ffd58; end: 1062ffdeb; -[SCOperaPlaybackIntentToNextTrackingPlugin _storyLoadStateWithMedia:completion:] */

void FUN_1062ffd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c076b80();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c135a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8100(PTR_PTR_1126c99d8);
    _objc_release(uVar1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ffdec; end: 1062ffe03; -[SCOperaPlaybackIntentToNextTrackingPlugin _snapPlaybackLoadState:completion:] */

void FUN_1062ffdec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa80f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c99d8,PTR_s_fetchLoadStateForSnapPlayback_st_1125c79e0,param_3,
             *(undefined8 *)(param_1 + 0x198),param_4);
  return;
}



/* Entry: 1062ffe04; end: 1062ffe97; -[SCOperaPlaybackIntentToNextTrackingPlugin _loadStateFromPageLoadingState:] */

undefined8 FUN_1062ffe04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_3;
    func_0x00010c09d3c0();
    uVar3 = 2;
    if (lVar1 == 0) {
      uVar3 = 3;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1062ffe98; end: 1063001ef; -[SCOperaPlaybackIntentToNextTrackingPlugin _itemLoadState:params:itemId:completion:] */

void FUN_1062ffe98(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_1;
  func_0x00010c0c5fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
LAB_1062fff2c:
    uVar3 = param_3;
    FUN_1062ff4a8();
    puVar1 = PTR_PTR_1126c99d8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c09c280();
    _objc_release(puVar1);
    if ((int)uVar3 == 0) {
      if (puVar2 != (undefined *)0xffffffffffffffff) goto LAB_106300034;
      puVar1 = param_6;
      if (*(long *)(param_1 + 0xe0) == 0) {
        if (*(long *)(param_1 + 0xd0) == 0) {
          if (*(long *)(param_1 + 0xe8) == 0) {
            func_0x00010be4e820(param_1);
            pcVar5 = *(code **)(param_6 + 0x10);
            goto LAB_106300040;
          }
          puVar2 = PTR_PTR_1126c99d8;
          func_0x00010c22ba80(PTR_PTR_1126c99d8);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_6);
          func_0x00010bfa80c0(puVar2);
          _objc_release(puVar2);
        }
        else {
          _objc_retain(param_6);
          func_0x00010bebcfe0(param_1);
        }
      }
      else {
        _objc_retain(param_6);
        func_0x00010bec4b00(param_1);
      }
    }
    else {
      if ((param_1[0x172] == '\x01') && (puVar2 == (undefined *)0xffffffffffffffff)) {
        func_0x00010be4e820();
        puVar2 = param_1;
      }
      puVar4 = PTR_PTR_1126c99d8;
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c107880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar1 == (undefined *)0x0) {
        (**(code **)(param_6 + 0x10))(param_6,puVar2,0);
      }
      else {
        puVar2 = param_6;
        _objc_retain(param_6);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(puVar1);
        _objc_release(puVar2);
        _objc_release(param_6);
      }
    }
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_1;
    func_0x00010c0c5fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c107ee0();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0xffffffffffffffff) goto LAB_1062fff2c;
LAB_106300034:
    param_1 = puVar2;
    pcVar5 = *(code **)(param_6 + 0x10);
LAB_106300040:
    (*pcVar5)(param_6,param_1,0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1063001f0; end: 10630023b;  */

void FUN_1063001f0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106300200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10630023c; end: 106300663; -[SCOperaPlaybackIntentToNextTrackingPlugin _captureMediaLoadState:params:itemId:] */

void FUN_10630023c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
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
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x138) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c0c5fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c0c5fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c107ee0();
    _objc_release(lVar2);
    if (lVar3 != -1) {
      *(long *)(param_1 + 0x130) = lVar3;
      goto LAB_1063005d8;
    }
  }
  _objc_initWeak(auStack_68,param_1);
  puVar4 = param_3;
  FUN_1062ff4a8();
  if ((int)puVar4 == 0) {
    puVar4 = PTR_PTR_1126c99d8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c09c280();
    _objc_release(puVar4);
    if (puVar6 == (undefined *)0xffffffffffffffff) {
      puVar4 = param_3;
      func_0x0001062fe6f0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar6 = param_3;
        FUN_1062fcb84();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          puVar7 = param_3;
          FUN_1062fe764();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == (undefined *)0x0) {
            lVar2 = param_1;
            func_0x00010be4e820();
            *(long *)(param_1 + 0x130) = lVar2;
          }
          else {
            puVar8 = PTR_PTR_1126c99d8;
            func_0x00010c22ba80(PTR_PTR_1126c99d8);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_e8,auStack_68);
            func_0x00010bfa80c0(puVar8);
            _objc_release(puVar8);
            _objc_destroyWeak(auStack_e8);
          }
          _objc_release(puVar7);
        }
        else {
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0xc2000000;
          uStack_d0 = 0x1063006e8;
          puStack_c8 = &UNK_110850658;
          _objc_copyWeak(auStack_c0,auStack_68);
          func_0x00010bebcfe0(param_1);
          _objc_destroyWeak(auStack_c0);
        }
        _objc_release(puVar6);
      }
      else {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x1063006bc;
        puStack_a0 = &UNK_110850658;
        _objc_copyWeak(auStack_98,auStack_68);
        func_0x00010bec4b00(param_1);
        _objc_destroyWeak(auStack_98);
      }
      goto LAB_1063005cc;
    }
    *(undefined **)(param_1 + 0x130) = puVar6;
  }
  else {
    puVar4 = PTR_PTR_1126c99d8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c09c280();
    *(undefined **)(param_1 + 0x130) = puVar6;
    _objc_release(puVar4);
    if ((*(char *)(param_1 + 0x172) == '\x01') && (*(long *)(param_1 + 0x130) == -1)) {
      lVar2 = param_1;
      func_0x00010be4e820();
      *(long *)(param_1 + 0x130) = lVar2;
    }
    puVar6 = PTR_PTR_1126c99d8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c107880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar4 != (undefined *)0x0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106300664;
      puStack_78 = &UNK_1108434e0;
      puVar5 = auStack_70;
      _objc_copyWeak(puVar5,auStack_68);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar4);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_70);
    }
LAB_1063005cc:
    _objc_release(puVar4);
  }
  _objc_destroyWeak(auStack_68);
LAB_1063005d8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106300664; end: 10630073f;  */

void FUN_106300664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106300740; end: 106300763; -[SCOperaPlaybackIntentToNextTrackingPlugin _SCAMediaType:] */

undefined8 FUN_106300740(long param_1)

{
  if (*(ulong *)(param_1 + 0x98) < 5) {
    return *(undefined8 *)(&UNK_10dddb440 + *(ulong *)(param_1 + 0x98) * 8);
  }
  return 2;
}



/* Entry: 106300764; end: 10630095f; -[SCOperaPlaybackIntentToNextTrackingPlugin _SCAProductMediaType:] */

ulong FUN_106300764(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xd8);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_1 + 0xd0);
    if (uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        uVar2 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar1);
        if (uVar2 == 0) {
          uVar2 = 0xffffffffffffffff;
        }
        else {
          uVar1 = param_3;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar4 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar3);
          uVar1 = uVar2;
          if ((uVar4 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar2);
          uVar2 = uVar1;
          func_0x00010c067ec0(uVar1);
          _objc_release(uVar1);
          uVar2 = (ulong)(int)uVar2;
        }
        goto LAB_10630088c;
      }
      uVar4 = uVar1;
      func_0x00010c0e00e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c067fc0();
      func_0x000108442d48();
      _objc_release(uVar4);
    }
    else {
      func_0x00010c12fc80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010853cb54();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_1063007d4;
      uVar1 = *(ulong *)(param_1 + 0xd0);
      func_0x00010c0c5340(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c27dd80();
      func_0x000108442d48();
    }
    _objc_release(uVar1);
  }
  else {
    func_0x00010c073a00();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0xd8);
      func_0x00010c27dd80(uVar2);
      func_0x000108442d48();
      goto LAB_10630088c;
    }
LAB_1063007d4:
    uVar2 = 1;
  }
LAB_10630088c:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106300960; end: 106300967; -[SCOperaPlaybackIntentToNextTrackingPlugin storiesMediaCoordinator] */

undefined8 FUN_106300960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 106300968; end: 106300997; -[SCOperaPlaybackIntentToNextTrackingPlugin setStoriesMediaCoordinator:] */

void FUN_106300968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106300998; end: 1063009af; -[SCOperaPlaybackIntentToNextTrackingPlugin mediaPrefetchStateProvider] */

void FUN_106300998(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063009b0; end: 1063009bb; -[SCOperaPlaybackIntentToNextTrackingPlugin setMediaPrefetchStateProvider:] */

void FUN_1063009b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1a0,param_3);
  return;
}



/* Entry: 1063009bc; end: 106300b1f; -[SCOperaPlaybackIntentToNextTrackingPlugin .cxx_destruct] */

void FUN_1063009bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106300b20; end: 106300b37;  */

void FUN_106300b20(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106300b38; end: 106300b6f;  */

void FUN_106300b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106300b70; end: 106300b9b;  */

void FUN_106300b70(void)

{
  return;
}



/* Entry: 106300b9c; end: 106300c0b; -[SCOperaBlackSnapsWatchdogTrackingPlugin init] */

undefined1 * FUN_106300b9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0e38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106300c0c; end: 106300c3f; -[SCOperaBlackSnapsWatchdogTrackingPlugin dealloc] */

void FUN_106300c0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0e38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106300c40; end: 106300c43; -[SCOperaBlackSnapsWatchdogTrackingPlugin setPlaylistItemController:] */

void FUN_106300c40(void)

{
  return;
}



/* Entry: 106300c44; end: 106300cfb; -[SCOperaBlackSnapsWatchdogTrackingPlugin setOperaControlling:] */

void FUN_106300c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f440();
  *(char *)(param_1 + 8) = (char)uVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 8) == '\x01') {
    _objc_storeWeak(param_1 + 0x10,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106300cfc; end: 106300d0f; -[SCOperaBlackSnapsWatchdogTrackingPlugin teardown] */

void FUN_106300cfc(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bec3210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopMonitoring_11258e628);
    return;
  }
  return;
}



/* Entry: 106300d10; end: 106300f4b; -[SCOperaBlackSnapsWatchdogTrackingPlugin registeredEventsForOperaSession] */

void FUN_106300d10(void)

{
  ulong uVar1;
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
  undefined8 uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  ulong in_x4;
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
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_d0 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_c8 = puVar3;
  func_0x00010bf17980();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_c0 = puVar4;
  func_0x00010c13a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9a88;
  puStack_b8 = puVar5;
  func_0x00010bf4cf80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9a88;
  puStack_b0 = puVar6;
  func_0x00010bf4c380();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9460;
  puStack_a8 = puVar7;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9460;
  puStack_a0 = puVar8;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9460;
  puStack_98 = puVar9;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9460;
  puStack_90 = puVar10;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2338;
  puStack_88 = puVar11;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2338;
  puStack_80 = puVar12;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2338;
  puStack_78 = puVar13;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = &puStack_d0;
  uVar21 = 0xd;
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar20);
  _objc_retain(uVar21);
  _objc_retain(in_x4);
  if (puVar2[8] != '\x01') goto LAB_106301024;
  _objc_retain(uVar21);
  uVar16 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = uVar21;
  _objc_release(uVar16);
  puVar3 = puVar2;
  func_0x00010beb4220();
  if (((ulong)puVar3 & 1) != 0) goto LAB_106301024;
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar20;
  func_0x00010c0720c0();
  if (((ulong)ppuVar17 & 1) == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf17980(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar20;
    func_0x00010c0720c0();
    if ((int)ppuVar17 != 0) {
      _objc_release(puVar4);
      goto LAB_106301014;
    }
    puVar5 = PTR_PTR_1126c9a88;
    func_0x00010bf4c380(PTR_PTR_1126c9a88);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar20;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (((ulong)ppuVar17 & 1) == 0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar20;
      func_0x00010c0720c0();
      if (((ulong)ppuVar17 & 1) == 0) {
        puVar4 = PTR_PTR_1126b2330;
        func_0x00010c13a0c0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar20;
        func_0x00010c0720c0();
        if ((int)ppuVar17 != 0) {
          _objc_release(puVar4);
          goto LAB_1063010e8;
        }
        puVar5 = PTR_PTR_1126c9a88;
        func_0x00010bf4cf80(PTR_PTR_1126c9a88);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar20;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        if (((ulong)ppuVar17 & 1) == 0) {
          puVar3 = PTR_PTR_1126c9460;
          func_0x00010c0f2620(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar20;
          func_0x00010c0720c0();
          if (((ulong)ppuVar17 & 1) == 0) {
            puVar4 = PTR_PTR_1126c9460;
            func_0x00010c0f25e0(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = ppuVar20;
            func_0x00010c0720c0();
            if (((ulong)ppuVar17 & 1) != 0) {
LAB_1063011b4:
              _objc_release(puVar4);
              goto LAB_1063011bc;
            }
            puVar5 = PTR_PTR_1126c9460;
            func_0x00010c0f2560(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = ppuVar20;
            func_0x00010c0720c0();
            if ((int)ppuVar17 != 0) {
              _objc_release(puVar5);
              goto LAB_1063011b4;
            }
            puVar6 = PTR_PTR_1126c9460;
            func_0x00010c0f2580(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = ppuVar20;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar3);
            if (((ulong)ppuVar17 & 1) == 0) {
              puVar3 = PTR_PTR_1126b2338;
              func_0x00010bfe8ca0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = ppuVar20;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)ppuVar17 != 0) {
                if (puVar2[0x20] == '\x01') {
                  puVar3 = PTR_PTR_1126b2348;
                  func_0x00010bfe6ac0(PTR_PTR_1126b2348);
                  _objc_retainAutoreleasedReturnValue();
                  uVar19 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar3);
                  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
                  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
                  uVar18 = uVar19;
                  _objc_opt_isKindOfClass(uVar19,puVar3);
                  uVar1 = uVar19;
                  if ((uVar18 & 1) == 0) {
                    uVar1 = 0;
                  }
                  _objc_retain(uVar1);
                  _objc_release(uVar19);
                  if (uVar1 != 0) {
                    uVar19 = *(ulong *)(puVar2 + 0x30);
                    func_0x00010bf4b900();
                    if ((uVar19 & 1) == 0) {
                      func_0x00010befa120(*(undefined8 *)(puVar2 + 0x30));
                    }
                  }
                  _objc_release(uVar1);
                }
                goto LAB_106301024;
              }
              puVar3 = PTR_PTR_1126b2338;
              func_0x00010c0c6900(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = ppuVar20;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)ppuVar17 != 0) {
                if (puVar2[0x20] == '\x01') {
                  puVar2[0x38] = 1;
                }
                goto LAB_106301024;
              }
              puVar3 = PTR_PTR_1126b2338;
              func_0x00010c0c4dc0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              ppuVar17 = ppuVar20;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)ppuVar17 == 0) goto LAB_106301024;
              goto LAB_1063010f0;
            }
          }
          else {
LAB_1063011bc:
            _objc_release(puVar3);
          }
          func_0x00010be93cc0(puVar2);
        }
      }
      else {
LAB_1063010e8:
        _objc_release(puVar3);
      }
LAB_1063010f0:
      func_0x00010bec3200(puVar2);
      goto LAB_106301024;
    }
  }
  else {
LAB_106301014:
    _objc_release(puVar3);
  }
  func_0x00010bec05c0(puVar2);
LAB_106301024:
  _objc_release(in_x4);
  _objc_release(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar20);
  return;
}



/* Entry: 106300f4c; end: 106301363; -[SCOperaBlackSnapsWatchdogTrackingPlugin operaViewDidSendEvent:page:params:] */

void FUN_106300f4c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 8) != '\x01') goto LAB_106301024;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010beb4220();
  if ((uVar2 & 1) != 0) goto LAB_106301024;
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf17980(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      _objc_release(puVar4);
      goto LAB_106301014;
    }
    puVar5 = PTR_PTR_1126c9a88;
    func_0x00010bf4c380(PTR_PTR_1126c9a88);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010bf3df00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        puVar4 = PTR_PTR_1126b2330;
        func_0x00010c13a0c0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar2 != 0) {
          _objc_release(puVar4);
          goto LAB_1063010e8;
        }
        puVar5 = PTR_PTR_1126c9a88;
        func_0x00010bf4cf80(PTR_PTR_1126c9a88);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        if ((uVar2 & 1) == 0) {
          puVar3 = PTR_PTR_1126c9460;
          func_0x00010c0f2620(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) {
            puVar4 = PTR_PTR_1126c9460;
            func_0x00010c0f25e0(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0();
            if ((uVar2 & 1) != 0) {
LAB_1063011b4:
              _objc_release(puVar4);
              goto LAB_1063011bc;
            }
            puVar5 = PTR_PTR_1126c9460;
            func_0x00010c0f2560(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0();
            if ((int)uVar2 != 0) {
              _objc_release(puVar5);
              goto LAB_1063011b4;
            }
            puVar6 = PTR_PTR_1126c9460;
            func_0x00010c0f2580(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar3);
            if ((uVar2 & 1) == 0) {
              puVar3 = PTR_PTR_1126b2338;
              func_0x00010bfe8ca0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)uVar2 != 0) {
                if (*(char *)(param_1 + 0x20) == '\x01') {
                  puVar3 = PTR_PTR_1126b2348;
                  func_0x00010bfe6ac0(PTR_PTR_1126b2348);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = param_5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar3);
                  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
                  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
                  uVar7 = uVar8;
                  _objc_opt_isKindOfClass(uVar8,puVar3);
                  uVar2 = uVar8;
                  if ((uVar7 & 1) == 0) {
                    uVar2 = 0;
                  }
                  _objc_retain(uVar2);
                  _objc_release(uVar8);
                  if (uVar2 != 0) {
                    uVar8 = *(ulong *)(param_1 + 0x30);
                    func_0x00010bf4b900();
                    if ((uVar8 & 1) == 0) {
                      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
                    }
                  }
                  _objc_release(uVar2);
                }
                goto LAB_106301024;
              }
              puVar3 = PTR_PTR_1126b2338;
              func_0x00010c0c6900(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)uVar2 != 0) {
                if (*(char *)(param_1 + 0x20) == '\x01') {
                  *(undefined1 *)(param_1 + 0x38) = 1;
                }
                goto LAB_106301024;
              }
              puVar3 = PTR_PTR_1126b2338;
              func_0x00010c0c4dc0(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)uVar2 == 0) goto LAB_106301024;
              goto LAB_1063010f0;
            }
          }
          else {
LAB_1063011bc:
            _objc_release(puVar3);
          }
          func_0x00010be93cc0(param_1);
        }
      }
      else {
LAB_1063010e8:
        _objc_release(puVar3);
      }
LAB_1063010f0:
      func_0x00010bec3200(param_1);
      goto LAB_106301024;
    }
  }
  else {
LAB_106301014:
    _objc_release(puVar3);
  }
  func_0x00010bec05c0(param_1);
LAB_106301024:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106301364; end: 1063013d7; -[SCOperaBlackSnapsWatchdogTrackingPlugin _shouldIgnoreMonitoringForPage:] */

bool FUN_106301364(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2 - 0x10U < 3;
}



/* Entry: 1063013d8; end: 106301437; -[SCOperaBlackSnapsWatchdogTrackingPlugin _startMonitoring] */

void FUN_1063013d8(ulong param_1)

{
  ulong uVar1;
  
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) &&
     (uVar1 = param_1, _arc4random(),
     (uint)((int)uVar1 + (int)((uVar1 & 0xffffffff) / 100) * -100) < 10)) {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be9b350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleNextCheck_112584678);
    return;
  }
  return;
}



/* Entry: 106301438; end: 106301477; -[SCOperaBlackSnapsWatchdogTrackingPlugin _stopMonitoring] */

void FUN_106301438(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x00010be93cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSObject_1126b1300,PTR_s_cancelPreviousPerformRequestsWit_1125a9488
               ,param_1);
    return;
  }
  return;
}



/* Entry: 106301478; end: 1063014a3; -[SCOperaBlackSnapsWatchdogTrackingPlugin _resetState] */

void FUN_106301478(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1063014a4; end: 1063018df; -[SCOperaBlackSnapsWatchdogTrackingPlugin check] */

void FUN_1063014a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 *puStack_88;
  
  if (*(char *)(param_5 + 0x20) != '\x01') {
    return;
  }
  uVar2 = param_5 + 0x10;
  _objc_loadWeakRetained();
  uVar7 = uVar2;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar2);
  if (uVar3 == 0) {
    func_0x00010bec3200(param_5);
    goto LAB_106301888;
  }
  uVar2 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = uVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    if (uVar7 != 0) {
      _objc_initWeak(auStack_b8,param_5);
      uVar2 = uVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (uVar2 == 0) {
LAB_1063015b4:
        uVar7 = 0;
      }
      else {
        uVar7 = uVar2;
        func_0x00010bf20c00();
        _CGRectEqualToRect();
        if ((uVar7 & 1) != 0) goto LAB_1063015b4;
        func_0x00010bf20c00(uVar2);
        _CGRectGetWidth();
        dVar8 = param_1;
        func_0x00010bf20c00(uVar2);
        _CGRectGetHeight();
        if (dVar8 <= param_1) {
          param_1 = dVar8;
        }
        func_0x00010bf20c00(uVar2);
        _CGRectGetWidth();
        dVar9 = dVar8;
        func_0x00010bf20c00(uVar2);
        _CGRectGetHeight();
        dVar10 = dVar9;
        func_0x00010bf20c00(uVar2);
        _CGRectInset();
        _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0x3fe0000000000000,1);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19bbe0();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
        dVar11 = dVar10;
        _CGRectGetWidth(dVar10,param_2,param_3,param_4);
        _CGRectGetHeight(dVar10,param_2,param_3,param_4);
        func_0x00010bf199c0(0,0,dVar11,dVar10,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfad4a0();
        _objc_release(puVar4);
        _UIGraphicsGetCurrentContext();
        _CGContextTranslateCTM(-((dVar8 - param_1) * 0.5),-((dVar9 - param_1) * 0.5));
        uVar7 = uVar2;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12fc60();
        _objc_release();
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        _UIGraphicsEndImageContext();
      }
      _objc_release(uVar2);
      _objc_release(uVar2);
      uVar5 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010bf51e00();
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      uVar1 = *(undefined1 *)(param_5 + 0x38);
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_1063018e0;
      puStack_d8 = &UNK_110853630;
      _objc_copyWeak(auStack_c8,auStack_b8);
      uStack_c0 = uVar1;
      _objc_retain(uVar5);
      uStack_d0 = uVar5;
      _objc_retain(uVar7);
      _objc_retain(&puStack_f0);
      if (uVar7 == 0) {
        (*pcStack_e0)(&puStack_f0,1);
      }
      else {
        uVar6 = 0x15;
        func_0x0001000819a8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = puVar4;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_10630210c;
        puStack_98 = &UNK_11084aaa8;
        _objc_retain(uVar7);
        uStack_90 = uVar7;
        _objc_retain(&puStack_f0);
        puStack_88 = (undefined1 *)&puStack_f0;
        func_0x00010007380c(uVar6,&puStack_b0);
        _objc_release(uVar6);
        _objc_release(puStack_88);
        _objc_release(uStack_90);
      }
      _objc_release(&puStack_f0);
      _objc_release(uVar7);
      _objc_release(uStack_d0);
      _objc_destroyWeak(auStack_c8);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_b8);
      goto LAB_106301888;
    }
  }
  func_0x00010be266e0(param_5);
LAB_106301888:
  _objc_release(uVar3);
  return;
}



/* Entry: 1063018e0; end: 106301a57;  */

void FUN_1063018e0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  if ((param_2 & 1) == 0) {
LAB_106301a10:
    func_0x00010be266e0(lVar2);
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (lVar3 == 0) goto LAB_106301a10;
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) goto LAB_106301934;
    }
    else {
LAB_106301934:
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (lVar3 == 0) goto LAB_106301a10;
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106301a58;
    puStack_90 = &UNK_110849200;
    _objc_copyWeak(auStack_88,param_1 + 0x28);
    _objc_retain(uVar5);
    _objc_retain(&puStack_a8);
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar1;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106301f9c;
    puStack_68 = &UNK_11084aaa8;
    uStack_60 = uVar5;
    ppuStack_58 = &puStack_a8;
    _objc_retain(uVar5);
    func_0x00010007380c(uVar4,&puStack_80);
    _objc_release(uVar4);
    _objc_release(ppuStack_58);
    _objc_release(uStack_60);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106301a58; end: 106301a93;  */

void FUN_106301a58(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be266e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106301a94; end: 106301b1f; -[SCOperaBlackSnapsWatchdogTrackingPlugin _handleBlackView:] */

void FUN_106301a94(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x20) != '\x01') {
    return;
  }
  if (param_3 != 0) {
    uVar1 = *(long *)(param_1 + 0x28) + 1;
    *(ulong *)(param_1 + 0x28) = uVar1;
    if ((param_3 == 4) && (1 < uVar1)) {
      func_0x00010bee7b60(param_1);
      uVar1 = *(ulong *)(param_1 + 0x28);
    }
    if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be9b350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleNextCheck_112584678);
      return;
    }
    func_0x00010be64500(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopMonitoring_11258e628);
  return;
}



/* Entry: 106301b20; end: 106301db7; -[SCOperaBlackSnapsWatchdogTrackingPlugin _validatePageAndTriggerAlertIfNeeded] */

void FUN_106301b20(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bf74940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c2827c0();
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (lVar4 == 6) {
    puVar3 = *(undefined **)(param_1 + 0x18);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x18);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        _objc_release(lVar4);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        goto joined_r0x000106301d34;
      }
      _objc_release();
    }
  }
  else {
    if (lVar4 != 1) {
      return;
    }
    puVar3 = *(undefined **)(param_1 + 0x18);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
joined_r0x000106301d34:
      if (lVar1 != 0) {
        PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar3;
        return;
      }
      PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar3;
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bf74940();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
      func_0x00010c18d5c0(param_1);
      goto LAB_106301cc4;
    }
  }
  _objc_release();
LAB_106301cc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106301db8; end: 106301e3b; -[SCOperaBlackSnapsWatchdogTrackingPlugin _notifiyBlackSnapOccurred:] */

void FUN_106301db8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf74920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf74920();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDidDetectBlock__112640f88,0);
    return;
  }
  return;
}



/* Entry: 106301e3c; end: 106301f2b; -[SCOperaBlackSnapsWatchdogTrackingPlugin _scheduleNextCheck] */

undefined * FUN_106301e3c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x28) == 0) {
    dVar4 = 2.0;
  }
  else {
    uVar2 = param_1;
    _arc4random();
    dVar4 = ((double)(uVar2 & 0xffffffff) / 4294967295.0) * 0.2 + 1.0;
  }
  puVar1 = PTR_s_check_112530498;
  uStack_50 = *(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8f60(dVar4,param_1,param_2,puVar1,0,puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + 0x40);
}


