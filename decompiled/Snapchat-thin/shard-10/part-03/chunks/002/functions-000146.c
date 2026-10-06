/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fcde28; end: 107fcdeaf; -[SCAppNotification shouldUseCommStyle] */

ulong FUN_107fcde28(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010c11c420();
    func_0x000107fcc2d4();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010c11c420();
      func_0x000107fcc348();
      if ((uVar3 & 1) == 0) {
        func_0x00010c11c420(param_1);
        if (lRam0000000113728a28 != -1) {
          func_0x00010002a2fc(0x113728a28,&PTR___NSConcreteGlobalBlock_110a16848);
        }
        uVar3 = uRam0000000113728a20;
        _objc_retain(uRam0000000113728a20);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bf4b900(uVar3);
        _objc_release(puVar1);
        _objc_release(uVar3);
        return uVar2;
      }
    }
    uVar3 = 1;
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf85480();
    _objc_release(param_1);
  }
  return uVar3;
}



/* Entry: 107fcdeb0; end: 107fce02b; -[SCAppNotification commStyleTitle] */

void FUN_107fcdeb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar4 = lVar2;
    func_0x00010c08fa60();
    lVar6 = lVar2;
    if (((lVar4 == 0) && (lVar4 = lVar3, func_0x00010c08fa60(), lVar6 = lVar3, lVar4 == 0)) &&
       (lVar4 = lVar1, func_0x00010c08fa60(), lVar6 = lVar1, lVar4 == 0)) {
      lVar6 = 0;
    }
    else {
      _objc_retain(lVar6);
    }
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c267400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b1370;
  func_0x00010c25d9c0(PTR_PTR_1126b1370,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fce02c; end: 107fce0d3; -[SCAppNotification commStyleSubtitle] */

void FUN_107fce02c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2673c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d9c0(PTR_PTR_1126b1370,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fce0d4; end: 107fce217; -[SCAppNotification commStyleBody] */

void FUN_107fce0d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      _objc_retain(lVar2);
      lVar3 = lVar2;
      goto LAB_107fce1b8;
    }
    lVar1 = param_1;
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c266e80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be9c3e0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
LAB_107fce1b8:
  _objc_release(lVar2);
  func_0x00010bdc67e0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b1370;
  func_0x00010c25d9c0(PTR_PTR_1126b1370,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fce218; end: 107fce2bf; -[SCAppNotification alertTitle] */

void FUN_107fce218(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c267400();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d9c0(PTR_PTR_1126b1370,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fce2c0; end: 107fce33f; -[SCAppNotification alertSubtitle] */

void FUN_107fce2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fce340; end: 107fce433; -[SCAppNotification alertBody] */

void FUN_107fce340(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  uVar3 = param_1;
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c266e80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010be9c3e0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
  func_0x00010bdc67e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b1370;
  func_0x00010c25d9c0(PTR_PTR_1126b1370,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fce434; end: 107fce67f; -[SCAppNotification _getSoundNameWithBestFriendIds:bestFriendSoundEnabled:customSoundEnabled:] */

void FUN_107fce434(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  ppuVar6 = param_1;
  func_0x00010c07cda0();
  if ((int)ppuVar6 == 0) {
    ppuVar6 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar2;
    func_0x00010c08fa60();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
    }
    else {
      ppuVar3 = param_1;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c067fc0();
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      if (((int)param_5 != 0) && (0 < (long)ppuVar6)) {
        FUN_107fd4124();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar6;
        func_0x00010c08fa60();
        if (ppuVar3 != (undefined **)0x0) goto LAB_107fce654;
        _objc_release(ppuVar6);
      }
      ppuVar6 = ppuVar2;
      if (((int)param_4 != 0) && (lVar5 = param_3, func_0x00010bf529e0(), lVar5 != 0)) {
        func_0x00010c15de20(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010bf4b900(param_3,param_2,param_1);
        _objc_release(param_1);
        ppuVar6 = &PTR____CFConstantStringClassReference_110ecda18;
        if ((int)lVar5 == 0) {
          ppuVar6 = ppuVar2;
        }
      }
      _objc_retain(ppuVar6);
    }
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR_PTR_1126d8b88;
    _objc_alloc(PTR_PTR_1126d8b88);
    ppuVar6 = param_1;
    func_0x00010c247260(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010c15df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a4e0(ppuVar2,param_2,ppuVar6,ppuVar3,puVar1,param_4,param_5);
    _objc_release(puVar1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar2;
    func_0x00010c247020(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
  }
LAB_107fce654:
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 107fce680; end: 107fce91f; -[SCAppNotification _isTimeSenstive:] */

undefined * FUN_107fce680(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar6 = param_1;
  func_0x00010c07cda0();
  if ((int)puVar6 != 0) {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d8b90;
    _objc_alloc(PTR_PTR_1126d8b90);
    func_0x00010c26f720(param_1);
    puVar5 = param_1;
    func_0x00010c15df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052600(puVar6);
    _objc_release(puVar5);
    puVar7 = puVar6;
    func_0x00010c0810c0(puVar6);
    puVar5 = param_1;
    goto LAB_107fce8d4;
  }
  puVar6 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    if (puVar5 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar2 = puVar6;
  func_0x00010c08fa60();
  if ((puVar2 != (undefined *)0x0) &&
     (puVar2 = puVar6, func_0x00010c0720c0(), ((ulong)puVar2 & 1) != 0)) {
    puVar7 = (undefined *)0x1;
    goto LAB_107fce8d4;
  }
  func_0x00010c11c420(param_1);
  if (lRam0000000113728a38 != -1) {
    func_0x00010002a2fc(0x113728a38,&PTR___NSConcreteGlobalBlock_110a16868);
  }
  uVar1 = uRam0000000113728a30;
  _objc_retain(uRam0000000113728a30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
LAB_107fce8c0:
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar4 = param_3;
      func_0x00010bf529e0();
      _objc_release(puVar2);
      if (lVar4 == 0) goto LAB_107fce8c0;
      func_0x00010c15de20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c0720c0(param_1);
      _objc_release(lVar4);
      puVar2 = param_1;
    }
    _objc_release(puVar2);
  }
LAB_107fce8d4:
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 107fce920; end: 107fce9cb; -[SCAppNotification receiveDate] */

void FUN_107fce920(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bf5a700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107fce9cc; end: 107fcea33; -[SCAppNotification receiveTimestamp] */

undefined8 FUN_107fce9cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107fcea34; end: 107fcea77; -[SCAppNotification serverSentTimeBasedOnSource] */

void FUN_107fcea34(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c247520();
  if (uVar1 < 6 && uVar1 != 2) {
    func_0x00010c15f540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fcea78; end: 107fceb4f; -[SCAppNotification serverSentTime] */

void FUN_107fcea78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b4ca0();
    func_0x00010bf655e0((double)lVar2 / 1000.0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fceb50; end: 107fcec1b; -[SCAppNotification suggestedFriendIds] */

void FUN_107fceb50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uStack_38 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar3,0,&uStack_38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fcec1c; end: 107fcecfb; -[SCAppNotification promotedAddedMeFriendIds] */

void FUN_107fcec1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_38 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar3,0,&uStack_38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fcecfc; end: 107fced8b; -[SCAppNotification deliveryDelay] */

double FUN_107fcecfc(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_2;
  func_0x00010c15f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0.0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf5a700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar2 = param_1;
    func_0x00010c15f560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    param_1 = param_1 - dVar2;
    _objc_release(param_2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 107fced8c; end: 107fcee17; -[SCAppNotification senderDisplayName] */

void FUN_107fced8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c15df60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107fcee18; end: 107fcee67; -[SCAppNotification senderUsername] */

void FUN_107fcee18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcee68; end: 107fceeeb; -[SCAppNotification senderId] */

void FUN_107fcee68(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15df40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fceeec; end: 107fcef6f; -[SCAppNotification bitmojiActorId] */

void FUN_107fceeec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf1aa20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcef70; end: 107fcefbf; -[SCAppNotification username] */

void FUN_107fcef70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcefc0; end: 107fcf00f; -[SCAppNotification userid] */

void FUN_107fcefc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf010; end: 107fcf0d3; -[SCAppNotification inAppIconImage] */

void FUN_107fcf010(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    func_0x00010bf5e620();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      _objc_retain(param_1);
      lVar2 = param_1;
    }
  }
  else {
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107fcf0d4; end: 107fcf173; -[SCAppNotification outOfAppIconImage] */

void FUN_107fcf0d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107fcf174; end: 107fcf1cf; -[SCAppNotification inAppLeftSideIconUrl] */

void FUN_107fcf174(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfeb000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf1d0; end: 107fcf22b; -[SCAppNotification systemLeftSideIconUrl] */

void FUN_107fcf1d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c267080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf22c; end: 107fcf2af; -[SCAppNotification deeplinkURL] */

void FUN_107fcf22c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf68980();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf2b0; end: 107fcf30b; -[SCAppNotification pageLaunchCommand] */

void FUN_107fcf2b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0f14c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf30c; end: 107fcf367; -[SCAppNotification navigationRoute] */

void FUN_107fcf30c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf368; end: 107fcf3cf; -[SCAppNotification inAppIconImageShouldScaleAspectFit] */

undefined8 FUN_107fcf368(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
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



/* Entry: 107fcf3d0; end: 107fcf4b3; -[SCAppNotification inAppTitle] */

void FUN_107fcf3d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010c15dba0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
      param_1 = lVar2;
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfeb320();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    param_1 = lVar2;
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d9c0(PTR_PTR_1126b1370,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fcf4b4; end: 107fcf53f; -[SCAppNotification inAppTitleMaxLines] */

void FUN_107fcf4b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c067fc0();
  if (lVar2 < 1) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107fcf540; end: 107fcf633; -[SCAppNotification inAppSubtitle] */

void FUN_107fcf540(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  uVar3 = param_1;
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfeaf40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010be9c3e0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
  func_0x00010bdc67e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b1370;
  func_0x00010c25d9c0(PTR_PTR_1126b1370,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fcf634; end: 107fcf68f; -[SCAppNotification colorResource] */

void FUN_107fcf634(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf412a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf690; end: 107fcf6c3; -[SCAppNotification hasUserVisibleLocalMessage] */

bool FUN_107fcf690(long param_1)

{
  func_0x00010beff3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 107fcf6c4; end: 107fcf6ef; -[SCAppNotification isHighPriority] */

uint FUN_107fcf6c4(ulong param_1)

{
  func_0x00010c11c420();
  return (uint)(param_1 < 0x23) & (uint)(0x630000000 >> (param_1 & 0x3f));
}



/* Entry: 107fcf6f0; end: 107fcf72f; -[SCAppNotification shouldRemoveOnAppStateChange] */

bool FUN_107fcf6f0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c11c420();
  if (lVar2 == 0x73) {
    bVar1 = false;
  }
  else {
    func_0x00010c11c420(param_1);
    bVar1 = param_1 != 0x71;
  }
  return bVar1;
}



/* Entry: 107fcf730; end: 107fcf733; -[SCAppNotification shouldReplayNotificationOnBackgrounding] */

void FUN_107fcf730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isHighPriority_1125fad40);
  return;
}



/* Entry: 107fcf734; end: 107fcf7b7; -[SCAppNotification groupConversationId] */

void FUN_107fcf734(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf7b8; end: 107fcf83b; -[SCAppNotification arroyoConversationId] */

void FUN_107fcf7b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf83c; end: 107fcf89f; -[SCAppNotification arroyoConversationVersion] */

undefined8 FUN_107fcf83c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c067fc0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107fcf8a0; end: 107fcf953; -[SCAppNotification arroyoMessageId] */

undefined8 FUN_107fcf8a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010c067fc0(uVar1);
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067fc0();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107fcf954; end: 107fcf9d7; -[SCAppNotification analyticsMessageId] */

void FUN_107fcf954(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcf9d8; end: 107fcfa3f; -[SCAppNotification isRinging] */

undefined8 FUN_107fcf9d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
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



/* Entry: 107fcfa40; end: 107fcfb17; -[SCAppNotification shouldDisplayInApp] */

ulong FUN_107fcfa40(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010c073d60();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c07cda0();
    if ((int)uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      _objc_release(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_107fcfa5c;
      func_0x00010bfeb320(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c08fa60();
      uVar3 = (ulong)(uVar3 != 0);
    }
    else {
      func_0x00010be1dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf85840();
    }
    _objc_release(param_1);
  }
  else {
LAB_107fcfa5c:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 107fcfb18; end: 107fcfb33; -[SCAppNotification isFromRecovery] */

bool FUN_107fcfb18(long param_1)

{
  func_0x00010c247520();
  return param_1 == 4;
}



/* Entry: 107fcfb34; end: 107fcfb9b; -[SCAppNotification isServerSuppressed] */

undefined8 FUN_107fcfb34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
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



/* Entry: 107fcfb9c; end: 107fcfc1f; -[SCAppNotification isLogoutEligible] */

undefined8 FUN_107fcfb9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3fa8;
  func_0x00010c0b3700(PTR_PTR_1126d3fa8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107fcfc20; end: 107fcfc7b; -[SCAppNotification shouldDisplayAsLocal] */

byte FUN_107fcfc20(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010c073d60();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bfde220();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c26a060(), uVar1 != 0xd)) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x41) ^ 1;
    }
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 107fcfc7c; end: 107fcfdb3; -[SCAppNotification shouldDisplayBitmojiWithAppInForeground:] */

bool FUN_107fcfc7c(ulong param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 == 0) {
    uVar3 = param_1;
    func_0x00010c234d20();
    if ((uVar3 & 1) != 0) {
      return false;
    }
LAB_107fcfccc:
    uVar3 = param_1;
    func_0x00010c11c420();
    if (uVar3 < 0x37) {
      if ((1L << (uVar3 & 0x3f) & 0x7ffffff8263d1eU) == 0) {
        if ((1L << (uVar3 & 0x3f) & 0x1804000U) != 0) {
          return true;
        }
        goto LAB_107fcfd18;
      }
    }
    else {
LAB_107fcfd18:
      if (((0x3b < uVar3 - 0x7b) || ((1L << (uVar3 - 0x7b & 0x3f) & 0xf0380800000003bU) == 0)) &&
         ((8 < uVar3 - 0xef || ((1L << (uVar3 - 0xef & 0x3f) & 0x1e7U) == 0)))) {
        return false;
      }
    }
    uVar3 = param_1;
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      bVar1 = true;
      goto LAB_107fcfd9c;
    }
    func_0x00010bfce860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
  }
  else {
    uVar3 = param_1;
    func_0x00010c07cda0();
    if ((int)uVar3 == 0) goto LAB_107fcfccc;
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf1aa20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
  }
  bVar1 = uVar2 != 0;
  _objc_release();
LAB_107fcfd9c:
  _objc_release(uVar3);
  return bVar1;
}



/* Entry: 107fcfdb4; end: 107fcfe1b; -[SCAppNotification shouldSuppressBitmoji] */

undefined8 FUN_107fcfdb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
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



/* Entry: 107fcfe1c; end: 107fcfef7; -[SCAppNotification category:] */

void FUN_107fcfe1c(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = param_1;
  func_0x00010c11c420();
  if ((puVar1 < (undefined *)0x23) && ((1L << ((ulong)puVar1 & 0x3f) & 0x630000000U) != 0)) {
    ppuVar3 = &PTR_PTR_110d7f158;
  }
  else {
    puVar1 = param_1;
    func_0x00010bf334a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bf334a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107fcfe6c;
    }
    if ((param_3 == 0) ||
       (puVar1 = param_1, func_0x00010c22f3c0(param_1,param_2,0), (int)puVar1 == 0)) {
      func_0x00010c11c420(param_1);
      func_0x0001008fcbdc();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107fcfe6c;
    }
    ppuVar3 = &PTR_PTR_110d7f150;
  }
  param_1 = *ppuVar3;
  _objc_retain(param_1);
LAB_107fcfe6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107fcfef8; end: 107fcff37; -[SCAppNotification shouldVibrate] */

bool FUN_107fcfef8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c11c420();
  if (lVar2 == 0x1f) {
    bVar1 = true;
  }
  else {
    func_0x00010c11c420(param_1);
    bVar1 = param_1 == 0x20;
  }
  return bVar1;
}



/* Entry: 107fcff38; end: 107fcff8f; -[SCAppNotification hasExpiration] */

bool FUN_107fcff38(long param_1)

{
  long lVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 107fcff90; end: 107fd004b; -[SCAppNotification expirationInterval] */

undefined8 FUN_107fcff90(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c292820(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf885a0(lVar1);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 107fd004c; end: 107fd015b; -[SCAppNotification displayInterval] */

double FUN_107fd004c(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = param_2;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    dVar5 = 3.0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    dVar4 = 0.0;
    if ((uVar1 & 1) != 0) {
      func_0x00010bf885a0(uVar2);
      dVar4 = param_1;
    }
    uVar1 = param_2;
    func_0x00010bfd6e60();
    if ((int)uVar1 != 0) {
      func_0x00010bf9c7a0(param_2);
      if (param_1 == dVar4) {
        dVar4 = dVar4 + 1.0;
      }
    }
    dVar5 = 3.0;
    if (1.0 <= dVar4) {
      dVar5 = dVar4;
    }
    _objc_release(uVar2);
  }
  return dVar5;
}



/* Entry: 107fd015c; end: 107fd01c3; -[SCAppNotification expiresAt] */

void FUN_107fd015c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010bfd6e60();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf5a700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c7a0(param_1);
    uVar2 = uVar1;
    func_0x00010bf64e40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107fd01c4; end: 107fd01cb; -[SCAppNotification pushType] */

undefined8 FUN_107fd01c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107fd01cc; end: 107fd0247; -[SCAppNotification pushTypeName] */

void FUN_107fd01cc(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  ppuVar3 = ppuVar1;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db54d8;
    _objc_retain(&PTR____CFConstantStringClassReference_110db54d8);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107fd0248; end: 107fd024f; -[SCAppNotification addFriendPushNotificationReasonString] */

void FUN_107fd0248(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (lRam0000000113728a78 != -1) {
    func_0x00010002a2fc(0x113728a78,&PTR___NSConcreteGlobalBlock_110a169e0);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuRam0000000113728a70;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fd0250; end: 107fd029f; -[SCAppNotification revokeKey] */

void FUN_107fd0250(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd02a0; end: 107fd0307; -[SCAppNotification revokeType] */

undefined8 FUN_107fd02a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107fd3b4c();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107fd0308; end: 107fd032f; -[SCAppNotification lastAudibleInterrupt] */

void FUN_107fd0308(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd0330; end: 107fd0357; -[SCAppNotification groupedSenders] */

void FUN_107fd0330(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd0358; end: 107fd03e3; -[SCAppNotification addedParticipants] */

long FUN_107fd0358(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar1 == 0) && (func_0x00010c11c420(), param_1 == 0x34)) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c2827c0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107fd03e4; end: 107fd0427; -[SCAppNotification dontDisplayIfRevokingWithin] */

undefined8 FUN_107fd03e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c11c420();
  uVar2 = 0x4000000000000000;
  if (lVar1 != 0x20) {
    func_0x00010c11c420(0x4000000000000000);
    uVar2 = 0x4000000000000000;
    if (param_1 != 0x1f) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 107fd0428; end: 107fd0437; -[SCAppNotification targetScreen] */

undefined8 FUN_107fd0428(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar2);
  uVar7 = 5;
  if ((lVar1 != 0x94) && (lVar1 != 0xe || lVar6 == 1)) {
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar4 & 1) != 0) {
        _objc_retain(uVar2);
        if (lRam0000000113728a88 != -1) {
          func_0x00010002a2fc(0x113728a88,&PTR___NSConcreteGlobalBlock_110a16a20);
        }
        uVar5 = uRam0000000113728a80;
        func_0x00010c0e00e0(uRam0000000113728a80);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c2827c0();
        _objc_release(uVar5);
        _objc_release(uVar2);
        goto LAB_107fd3b18;
      }
    }
    uVar7 = 0;
  }
LAB_107fd3b18:
  _objc_release(uVar2);
  return uVar7;
}



/* Entry: 107fd0438; end: 107fd0487; -[SCAppNotification discardStyle] */

undefined8 FUN_107fd0438(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c11c420();
  if (lVar1 - 1U < 0xf7) {
    uVar2 = *(undefined8 *)(&UNK_10deeba90 + (lVar1 - 1U) * 8);
  }
  else {
    func_0x00010c07cda0();
    uVar2 = 0;
    if ((int)param_1 == 0) {
      uVar2 = 9;
    }
  }
  return uVar2;
}



/* Entry: 107fd0488; end: 107fd053f; -[SCAppNotification _isVideoSnapWithSound] */

undefined8 FUN_107fd0488(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c07cda0();
  if ((int)uVar1 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db93f8);
  }
  else {
    func_0x00010be1dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c083360();
    uVar2 = param_1;
  }
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 107fd0540; end: 107fd0607; -[SCAppNotification pushTypeForInAppIconPath] */

long FUN_107fd0540(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107fd3b4c();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  else {
    lVar4 = lVar2;
    func_0x000107fd3b4c(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 107fd0608; end: 107fd0aeb; -[SCAppNotification currentDefaultInAppIcon] */

void FUN_107fd0608(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  
  puVar2 = param_1;
  func_0x00010c153100();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if ((puVar2 == (undefined *)0x0) || (puVar10 = puVar2, func_0x00010bfa2960(), (int)puVar10 != 4))
  {
LAB_107fd06b0:
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar2;
    func_0x00010bf35d60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010c07b1c0();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if ((int)puVar3 == 0) goto LAB_107fd06b0;
    puVar3 = PTR_PTR_1126d8b98;
    func_0x00010c113d00(PTR_PTR_1126d8b98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8220(puVar10,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  if (puVar10 != (undefined *)0x0) {
    _objc_retain(puVar10);
    puVar2 = puVar10;
    goto LAB_107fd0914;
  }
  puVar4 = param_1;
  func_0x00010c11c440();
  puVar5 = PTR_PTR_1126b0c40;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = (undefined *)0x0;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  switch(puVar4) {
  case (undefined *)0x1:
  case (undefined *)0x2:
  case (undefined *)0x3:
  case (undefined *)0x4:
  case (undefined *)0x15:
  case (undefined *)0x1e:
  case (undefined *)0x27:
  case (undefined *)0x28:
  case (undefined *)0x29:
  case (undefined *)0x2a:
  case (undefined *)0x30:
  case (undefined *)0x33:
  case (undefined *)0x34:
  case (undefined *)0x35:
  case (undefined *)0x36:
  case (undefined *)0x5d:
  case (undefined *)0xaa:
  case (undefined *)0xab:
  case (undefined *)0xac:
  case (undefined *)0xad:
  case (undefined *)0xb3:
  case (undefined *)0xb4:
  case (undefined *)0xb5:
  case (undefined *)0xb6:
  case (undefined *)0xd5:
  case (undefined *)0xd6:
  case (undefined *)0xd7:
  case (undefined *)0xd8:
  case (undefined *)0xd9:
  case (undefined *)0xda:
  case (undefined *)0xdb:
  case (undefined *)0xdc:
  case (undefined *)0xdd:
  case (undefined *)0xde:
  case (undefined *)0xdf:
  case (undefined *)0xe0:
  case (undefined *)0xe3:
  case (undefined *)0xe9:
  case (undefined *)0xea:
  case (undefined *)0xec:
  case (undefined *)0xf1:
  case (undefined *)0xf4:
  case (undefined *)0xf5:
  case (undefined *)0xf6:
  case (undefined *)0xf7:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbb58;
    break;
  default:
    goto LAB_107fd0914;
  case (undefined *)0x6:
  case (undefined *)0x7:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbb98;
    goto code_r0x000107fd0a70;
  case (undefined *)0x8:
  case (undefined *)0x2b:
    func_0x00010be45820();
    iVar1 = (int)param_1;
    ppuVar8 = &PTR____CFConstantStringClassReference_110e9b678;
    ppuVar9 = &PTR____CFConstantStringClassReference_110e9b638;
    goto code_r0x000107fd08f4;
  case (undefined *)0x9:
    ppuVar9 = &PTR____CFConstantStringClassReference_110e9b5f8;
code_r0x000107fd0a70:
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000107fd0a8c;
  case (undefined *)0xa:
  case (undefined *)0x31:
    func_0x00010be45820();
    iVar1 = (int)param_1;
    ppuVar8 = &PTR____CFConstantStringClassReference_110ecbcd8;
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbcb8;
    goto code_r0x000107fd08f4;
  case (undefined *)0xb:
  case (undefined *)0x2e:
    func_0x00010be45820();
    iVar1 = (int)param_1;
    ppuVar8 = &PTR____CFConstantStringClassReference_110ecbc58;
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbc38;
    goto code_r0x000107fd08f4;
  case (undefined *)0xc:
  case (undefined *)0x2f:
    func_0x00010be45820();
    iVar1 = (int)param_1;
    ppuVar8 = &PTR____CFConstantStringClassReference_110ecbc98;
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbc78;
    goto code_r0x000107fd08f4;
  case (undefined *)0xd:
  case (undefined *)0x32:
    func_0x00010be45820();
    iVar1 = (int)param_1;
    ppuVar8 = &PTR____CFConstantStringClassReference_110ecbd18;
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbcf8;
code_r0x000107fd08f4:
    if (iVar1 == 0) {
      ppuVar9 = ppuVar8;
    }
    break;
  case (undefined *)0xe:
  case (undefined *)0x17:
  case (undefined *)0x18:
  case (undefined *)0x37:
  case (undefined *)0x38:
  case (undefined *)0x81:
  case (undefined *)0x82:
  case (undefined *)0x83:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbd38;
    break;
  case (undefined *)0x11:
  case (undefined *)0x13:
  case (undefined *)0x2c:
  case (undefined *)0x51:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbd78;
    break;
  case (undefined *)0x12:
  case (undefined *)0x14:
  case (undefined *)0x2d:
  case (undefined *)0x52:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbd98;
    break;
  case (undefined *)0x1b:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbd58;
    break;
  case (undefined *)0x1c:
  case (undefined *)0x21:
  case (undefined *)0x26:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbbd8;
    break;
  case (undefined *)0x1d:
  case (undefined *)0x22:
  case (undefined *)0x25:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbbb8;
    break;
  case (undefined *)0x1f:
  case (undefined *)0x23:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbc18;
    break;
  case (undefined *)0x20:
  case (undefined *)0x24:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbbf8;
    break;
  case (undefined *)0x3a:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbdb8;
    break;
  case (undefined *)0x3c:
  case (undefined *)0x42:
  case (undefined *)0x43:
  case (undefined *)0x44:
  case (undefined *)0x45:
  case (undefined *)0x46:
  case (undefined *)0x47:
  case (undefined *)0x60:
  case (undefined *)0x68:
  case (undefined *)0x93:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbdd8;
    break;
  case (undefined *)0x3d:
  case (undefined *)0x3e:
  case (undefined *)0x3f:
  case (undefined *)0x40:
  case (undefined *)0x41:
  case (undefined *)0x48:
  case (undefined *)0x49:
  case (undefined *)0x4a:
  case (undefined *)0x4b:
  case (undefined *)0x77:
  case (undefined *)0x78:
  case (undefined *)0x79:
  case (undefined *)0x9b:
  case (undefined *)0x9c:
  case (undefined *)0x9d:
  case (undefined *)0xa3:
  case (undefined *)0xa4:
  case (undefined *)0xa6:
  case (undefined *)0xa8:
  case (undefined *)0xa9:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbdf8;
    break;
  case (undefined *)0x50:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbe38;
    break;
  case (undefined *)0x53:
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x27a;
    goto code_r0x000107fd09c4;
  case (undefined *)0x54:
  case (undefined *)0x55:
  case (undefined *)0x56:
  case (undefined *)0xed:
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0xea;
    goto code_r0x000107fd09c4;
  case (undefined *)0x57:
  case (undefined *)0x58:
  case (undefined *)0x59:
  case (undefined *)0x5a:
  case (undefined *)0x5b:
  case (undefined *)0x8a:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbe18;
    break;
  case (undefined *)0x61:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbb78;
    break;
  case (undefined *)0x64:
  case (undefined *)0x65:
  case (undefined *)0x66:
  case (undefined *)0x6a:
  case (undefined *)0x6b:
  case (undefined *)0x6c:
  case (undefined *)0x96:
  case (undefined *)0x97:
  case (undefined *)0xe4:
  case (undefined *)0xe5:
  case (undefined *)0xe6:
  case (undefined *)0xe7:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbe58;
    break;
  case (undefined *)0x71:
  case (undefined *)0x8b:
  case (undefined *)0x8c:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbe78;
    break;
  case (undefined *)0x76:
  case (undefined *)0x7b:
  case (undefined *)0x7c:
  case (undefined *)0x7d:
  case (undefined *)0x7e:
  case (undefined *)0x7f:
  case (undefined *)0x80:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbe98;
    break;
  case (undefined *)0x84:
  case (undefined *)0x85:
  case (undefined *)0x86:
  case (undefined *)0x87:
  case (undefined *)0x88:
  case (undefined *)0x9e:
  case (undefined *)0x9f:
  case (undefined *)0xa0:
  case (undefined *)0xa1:
    ppuVar9 = &PTR____CFConstantStringClassReference_110e9b5f8;
    break;
  case (undefined *)0x89:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbeb8;
    break;
  case (undefined *)0xa7:
    func_0x00010be36840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    goto LAB_107fd0914;
  case (undefined *)0xb8:
  case (undefined *)0xca:
  case (undefined *)0xcb:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbed8;
    break;
  case (undefined *)0xbc:
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x276;
code_r0x000107fd09c4:
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar5,param_2,uVar7,puVar6);
    _objc_retainAutoreleasedReturnValue();
code_r0x000107fd0a8c:
    _objc_release(puVar6);
    puVar2 = puVar5;
    goto LAB_107fd0914;
  case (undefined *)0xe1:
    ppuVar9 = &PTR____CFConstantStringClassReference_110ecbef8;
    break;
  case (undefined *)0xef:
    puVar6 = PTR_PTR_1126d8b98;
    func_0x00010c113d00(PTR_PTR_1126d8b98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8220(puVar3,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    goto code_r0x000107fd0a8c;
  case (undefined *)0xf0:
    ppuVar9 = &PTR____CFConstantStringClassReference_110e9b678;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
LAB_107fd0914:
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fd0aec; end: 107fd0bbf; -[SCAppNotification delayStyle] */

undefined8 FUN_107fd0aec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c11c420();
  if (((((lVar1 != 0x60) && (lVar1 = param_1, func_0x00010c11c420(), lVar1 != 0x52)) &&
       (lVar1 = param_1, func_0x00010c11c420(), lVar1 != 0x76)) &&
      ((lVar1 = param_1, func_0x00010c11c420(), lVar1 != 0x53 &&
       (lVar1 = param_1, func_0x00010c11c420(), lVar1 != 0x54)))) &&
     ((lVar1 = param_1, func_0x00010c11c420(), lVar1 != 0xed &&
      ((lVar1 = param_1, func_0x00010c11c420(), lVar1 != 0x55 &&
       (lVar1 = param_1, func_0x00010c11c420(), lVar1 != 0x56)))))) {
    lVar1 = param_1;
    func_0x00010c11c420();
    if ((6 < lVar1 - 0x1cU) || ((99U >> (ulong)((uint)(lVar1 - 0x1cU) & 0x1f) & 1) == 0)) {
      func_0x00010c074cc0();
      if ((int)param_1 != 0) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}



/* Entry: 107fd0bc0; end: 107fd0bf7; -[SCAppNotification sourceAsString] */

undefined ** FUN_107fd0bc0(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c247520();
  if (param_1 - 1U < 8) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a16980)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ecbf18;
  }
  return ppuVar1;
}



/* Entry: 107fd0bf8; end: 107fd0ce3; -[SCAppNotification notificationId] */

void FUN_107fd0bf8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
      lVar5 = *(long *)(param_1 + 0x50);
    }
    _objc_retain(lVar5);
  }
  else {
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107fd0ce4; end: 107fd0ddb; -[SCAppNotification notificationKey] */

void FUN_107fd0ce4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c15df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110eacf98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fd0ddc; end: 107fd0eb3; -[SCAppNotification debugString] */

void FUN_107fd0ddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c11c460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c247620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110ecc038);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fd0eb4; end: 107fd1023; -[SCAppNotification shouldRevokeNotification:] */

long FUN_107fd0eb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010c140560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010c1405e0();
    if (lVar4 != 0) {
      lVar4 = param_1;
      func_0x00010c15df60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar1 = param_1;
        func_0x00010c15df60();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010c15df60(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0720c0(lVar1,param_2,lVar2);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(lVar4);
        if ((int)lVar3 != 0) {
          func_0x00010c1405e0();
          lVar4 = param_3;
          func_0x00010c11c420();
          if (param_1 == lVar4) {
            lVar4 = 1;
            goto LAB_107fd1004;
          }
        }
      }
      lVar4 = 0;
      goto LAB_107fd1004;
    }
  }
  else {
    _objc_release();
  }
  lVar1 = param_1;
  func_0x00010c140560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x00010c140560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0dc200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0720c0(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
LAB_107fd1004:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107fd1024; end: 107fd10df; -[SCAppNotification shouldSuppressNotification:] */

bool FUN_107fd1024(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (((lVar1 == 1) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x2a)) &&
     (uVar2 = param_1, func_0x00010c232ca0(param_1,param_2,param_3), (int)uVar2 != 0)) {
    func_0x00010bf5a700(param_1);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = 1200.0;
    uVar2 = param_1;
    func_0x00010bf64e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    bVar3 = 0.0 < dVar4;
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    bVar3 = false;
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 107fd10e0; end: 107fd1133; -[SCAppNotification wasDismissed] */

undefined8 FUN_107fd10e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010bfda7c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f9eb98);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_isEqualToString__1125fa240,
             *(undefined8 *)PTR__UNNotificationDismissActionIdentifier_1103481f8);
  return uVar2;
}



/* Entry: 107fd1134; end: 107fd11eb; -[SCAppNotification wasCustomActioned] */

uint FUN_107fd1134(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf334a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010beef200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010beef200();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        func_0x00010c2a23a0(param_1);
        return (uint)param_1 ^ 1;
      }
    }
  }
  return 0;
}



/* Entry: 107fd11ec; end: 107fd1207; -[SCAppNotification isServerNotification] */

bool FUN_107fd11ec(ulong param_1)

{
  func_0x00010c247520();
  return param_1 < 2;
}



/* Entry: 107fd1208; end: 107fd126f; -[SCAppNotification doNotPrefetch] */

undefined8 FUN_107fd1208(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
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



/* Entry: 107fd1270; end: 107fd133b; -[SCAppNotification isForegrounding] */

ulong FUN_107fd1270(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010beef200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010beef200();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    if ((uVar1 == 0) || (uVar2 = param_1, func_0x00010c2a23a0(), (uVar2 & 1) != 0)) {
      uVar2 = 0;
    }
    else {
      func_0x00010beef200(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf4bb00();
      _objc_release(param_1);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 107fd133c; end: 107fd1347; -[SCAppNotification createReplacement] */

void FUN_107fd133c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf58490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_createReplacementAsExpired_updat_1125b3ac8,1,0);
  return;
}



/* Entry: 107fd1348; end: 107fd1603; -[SCAppNotification createReplacementAsExpired:updateFields:] */

void FUN_107fd1348(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  if ((param_3 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f9e978);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f9e998);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f9e9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110dad058);
    func_0x00010c1d0640(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110f9e878);
    func_0x00010c1d0640(uVar2,param_2,uVar5,&PTR____CFConstantStringClassReference_110e63558);
    func_0x00010c1d0640(uVar2,param_2,uVar6,&PTR____CFConstantStringClassReference_110dad858);
    param_3 = param_3 & 0xffffffff;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f9e978);
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f9e998);
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f9e8f8);
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f9e9b8);
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e12538);
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f9e918);
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f9ea18);
  func_0x00010c12d3e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f9e958);
  if (param_4 != 0) {
    func_0x00010c2203a0(uVar2,param_2,param_4);
  }
  puVar7 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  func_0x00010c247520(param_1);
  func_0x00010c030320(puVar7,param_2,uVar2,param_1);
  func_0x00010c1eace0();
  func_0x00010c1ead40(puVar7,param_2,param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107fd1604; end: 107fd1b3b; -[SCAppNotification updateBecauseReplacing:] */

void FUN_107fd1604(undefined **param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
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
  ppuVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0d3c80();
  _objc_release(ppuVar1);
  puVar10 = param_3;
  func_0x00010c088340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar10 != (undefined *)0x0) {
    puVar10 = param_3;
    func_0x00010c088340(param_3);
    _objc_retainAutoreleasedReturnValue();
    dVar13 = 1200.0;
    puVar3 = puVar10;
    func_0x00010bf64e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    func_0x00010c26f3a0(puVar3);
    if ((0.0 < dVar13) && (ppuVar1 = param_1, func_0x00010c07cb80(), ((ulong)ppuVar1 & 1) == 0)) {
      func_0x00010c1d0640(ppuVar2,param_2,0,&PTR____CFConstantStringClassReference_110e63558);
      puVar10 = param_3;
      func_0x00010c088340();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1[4];
      param_1[4] = puVar10;
      _objc_release(puVar9);
    }
    _objc_release(puVar3);
  }
  puVar10 = param_3;
  func_0x00010c26a060();
  if (puVar10 == (undefined *)0x2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e12ff8;
    func_0x00010bf51e00();
    puVar10 = param_1[2];
    param_1[2] = (undefined *)ppuVar1;
    _objc_release(puVar10);
    func_0x00010c1d0640(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e12ff8,
                        &PTR____CFConstantStringClassReference_110e12eb8);
  }
  ppuVar4 = param_1;
  func_0x00010c292820(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c0b7100(param_1,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar4 = param_1;
    func_0x00010c11c420();
    if (ppuVar4 == (undefined **)0x34) {
      puVar10 = param_3;
      func_0x00010befccc0(param_3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f9edd8);
      _objc_release(puVar3);
      ppuVar4 = ppuVar1;
      func_0x00010c0e00e0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110ddcc18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar4 == (undefined **)0x0) goto LAB_107fd1ab8;
      ppuVar4 = ppuVar1;
      func_0x00010c0e00e0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110ddcc18);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      func_0x00010bf22000(param_1,param_2,ppuVar4,puVar10 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar2,param_2,ppuVar5,&PTR____CFConstantStringClassReference_110f9e878);
      _objc_release(ppuVar5);
    }
    else {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar10 = param_3;
      ppuStack_140 = ppuVar1;
      ppuStack_138 = ppuVar2;
      func_0x00010bfcf740();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar10;
      func_0x00010bf52a60();
      if (puVar3 != (undefined *)0x0) {
        lVar11 = *plStack_120;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar11) {
              _objc_enumerationMutation(puVar10);
            }
            uVar12 = *(ulong *)(lStack_128 + (long)puVar9 * 8);
            uVar6 = uVar12;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = param_1;
            func_0x00010c15df60(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c0720c0(uVar6,param_2,ppuVar2);
            _objc_release(ppuVar2);
            _objc_release(uVar6);
            if ((uVar7 & 1) == 0) {
              func_0x00010befa120(param_1[3],param_2,uVar12);
            }
            puVar9 = puVar9 + 1;
          } while (puVar3 != puVar9);
          puVar3 = puVar10;
          func_0x00010bf52a60(puVar10,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar10);
      puVar10 = param_1[3];
      func_0x00010bf529e0();
      ppuVar2 = ppuStack_138;
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar10 == (undefined *)0x1) {
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuStack_138);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar10;
        func_0x00010c21e7c0(param_1);
        _objc_release(puVar10);
        ppuVar1 = ppuStack_140;
        goto LAB_107fd1ae8;
      }
      puVar10 = param_1[3];
      func_0x00010bf529e0();
      puStack_150 = puVar10;
      func_0x00010c14de00(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110daea58);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuStack_140;
      ppuVar5 = ppuStack_140;
      func_0x00010c0e00e0(ppuStack_140,param_2,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar2 = ppuStack_138;
      if (ppuVar5 == (undefined **)0x0) {
        _objc_release(ppuVar4);
        ppuVar4 = &PTR____CFConstantStringClassReference_110dae918;
      }
      ppuVar5 = ppuVar1;
      func_0x00010c0e00e0(ppuVar1,param_2,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar5 = ppuVar1;
        func_0x00010c0e00e0(ppuVar1,param_2,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = param_1;
        func_0x00010bf222a0(param_1,param_2,ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2,param_2,ppuVar8,&PTR____CFConstantStringClassReference_110f9e878
                           );
        _objc_release(ppuVar8);
        _objc_release(ppuVar5);
      }
    }
    _objc_release(ppuVar4);
  }
LAB_107fd1ab8:
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010c21e7c0(param_1);
  _objc_release(puVar10);
LAB_107fd1ae8:
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_107fd1b3c;
  ppuStack_170 = ppuVar2;
  puStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  if (puVar3 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010bf64920(puVar3,param_2,10);
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = 0;
    puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,0,&uStack_178
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107fd1b3c; end: 107fd1bb3; -[SCAppNotification makeDictionary:] */

void FUN_107fd1b3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010bf64920(param_3,param_2,10);
    _objc_retainAutoreleasedReturnValue();
    uStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,&uStack_28
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fd1bb4; end: 107fd1ccb; -[SCAppNotification buildAddedMultipleParticipantsMessageBodyFromTemplate:addedParticipants:] */

void FUN_107fd1bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110ecc058);
  uVar2 = param_3;
  if ((int)uVar1 != 0) {
    func_0x00010c15dba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecc058,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
  }
  uVar1 = uVar2;
  func_0x00010bf4bb00(uVar2,param_2,&PTR____CFConstantStringClassReference_110ecc078);
  uVar4 = uVar2;
  if ((int)uVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daea58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cfc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ecc078,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107fd1ccc; end: 107fd1e97; -[SCAppNotification buildGroupedSendersMessageBodyFromTemplate:] */

void FUN_107fd1ccc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar5 = param_3;
  if (lVar1 != 0) {
    uVar8 = 0;
    uVar7 = param_3;
    do {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e96898);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf4bb00(uVar7,param_2,puVar2);
      uVar5 = uVar7;
      if ((uVar6 & 1) == 0) {
        _objc_release(puVar2);
        break;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0dfd20(uVar3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25cfc0(uVar7,param_2,puVar2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar8 = uVar8 + 1;
      uVar6 = *(ulong *)(param_1 + 0x18);
      func_0x00010bf529e0();
      uVar7 = uVar5;
    } while (uVar8 < uVar6);
  }
  uVar8 = uVar5;
  func_0x00010bf4bb00(uVar5,param_2,&PTR____CFConstantStringClassReference_110e968b8);
  uVar7 = uVar5;
  if ((int)uVar8 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daea58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cfc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e968b8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 107fd1e98; end: 107fd1f0f; -[SCAppNotification systemText] */

void FUN_107fd1e98(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fd1f10; end: 107fd1f5f; -[SCAppNotification deliveryTrackingToken] */

void FUN_107fd1f10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd1f60; end: 107fd1faf; -[SCAppNotification deliveryTrackingId] */

void FUN_107fd1f60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd1fb0; end: 107fd1fff; -[SCAppNotification backgroundFetchToken] */

void FUN_107fd1fb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd2000; end: 107fd204f; -[SCAppNotification deliveryTrackingData] */

void FUN_107fd2000(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fd2050; end: 107fd20b7; -[SCAppNotification replacementType] */

undefined8 FUN_107fd2050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107fd3b4c();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107fd20b8; end: 107fd20cf; -[SCAppNotification replacementTimeout] */

long FUN_107fd20b8(double param_1)

{
  func_0x00010bf9c7a0();
  return (long)param_1;
}



/* Entry: 107fd20d0; end: 107fd2147; -[SCAppNotification replacementText] */

void FUN_107fd20d0(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fd2148; end: 107fd21bf; -[SCAppNotification replacementSubtitle] */

void FUN_107fd2148(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fd21c0; end: 107fd2237; -[SCAppNotification replacementSoundName] */

void FUN_107fd21c0(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fd2238; end: 107fd2313; -[SCAppNotification condensedInfoAsDictionary] */

void FUN_107fd2238(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar3 = param_1;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e60d98);
  _objc_release(ppuVar3);
  ppuVar3 = param_1;
  func_0x00010c11c460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110dad058);
  _objc_release(ppuVar3);
  func_0x00010c15df60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110ecc098);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


