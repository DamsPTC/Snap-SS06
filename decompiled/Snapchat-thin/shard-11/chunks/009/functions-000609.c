/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bb7f70; end: 108bb807f; -[SCMemoryUsageReporter _didReceiveLowMemoryWarning:] */

void FUN_108bb7f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010be8f460(param_1);
  func_0x00010be8fa60(param_1);
  _objc_release(param_3);
  func_0x00010be8fc20(param_1);
  func_0x00010be8ff40(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  _dispatch_time(0,5000000000);
  uVar2 = 9;
  _dispatch_get_global_queue(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bb8080;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000107c27d84(uVar1,uVar2,&puStack_60);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108bb8080; end: 108bb80af;  */

void FUN_108bb8080(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8fc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bb80b0; end: 108bb8207; -[SCMemoryUsageReporter _reportBlizzardLowMemoryUsage:] */

void FUN_108bb80b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c275180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133260(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  func_0x00010c0bf100(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c0ca3a0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010becbec0(param_1);
  func_0x00010be8f400(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return;
}



/* Entry: 108bb8208; end: 108bb822f;  */

void FUN_108bb8208(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108bb8230; end: 108bb832b; -[SCMemoryUsageReporter _reportGrapheneLowMemoryUsage:] */

void FUN_108bb8230(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126b9eb0;
  func_0x00010bf05ac0(PTR_PTR_1126b9eb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de5f98,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x000108bbaf28(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110eeb538,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x60);
  func_0x00010c0ca3a0();
  lVar1 = lVar5 + 0x3ff;
  if (-1 < lVar5) {
    lVar1 = lVar5;
  }
  func_0x00010bef9180(uVar3,param_2,puVar2,lVar1 >> 10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108bb832c; end: 108bb846b; -[SCMemoryUsageReporter _reportLowMemoryWarningExceeded:] */

void FUN_108bb832c(long param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_PTR_1126b9eb0;
  if (*(byte *)(param_1 + 0x48) == param_3) {
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eeb5f8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eeb618;
  }
  _objc_retain(ppuVar1);
  func_0x00010bf05a80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110de5f98,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar5);
  puVar4 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar6);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  if (param_3 == 0) {
    lVar8 = *(long *)(param_1 + 0xa8);
    lVar7 = *(long *)(param_1 + 0x60);
    func_0x00010c0ca3a0();
    lVar3 = lVar8 - lVar7;
    lVar2 = lVar3 + 0x3ff;
    if (lVar7 <= lVar8) {
      lVar2 = lVar3;
    }
    func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar4,lVar2 >> 10);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0ca3a0();
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
  }
  *(char *)(param_1 + 0x48) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108bb846c; end: 108bb84eb; -[SCMemoryUsageReporter _willEnterForeground] */

void FUN_108bb846c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = uVar3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined **)(param_2 + 0xe8) = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setApplicationState__112586150,0);
  return;
}



/* Entry: 108bb84ec; end: 108bb84f3; -[SCMemoryUsageReporter _didBecomeActive] */

void FUN_108bb84ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setApplicationState__112586150,0);
  return;
}



/* Entry: 108bb84f4; end: 108bb84fb; -[SCMemoryUsageReporter _willResignActive] */

void FUN_108bb84f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setApplicationState__112586150,1);
  return;
}



/* Entry: 108bb84fc; end: 108bb8523; -[SCMemoryUsageReporter _didEnterBackground] */

void FUN_108bb84fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bea1ea0(param_1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bedb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMemoryPressureAggregate_1125947c0);
  return;
}



/* Entry: 108bb8524; end: 108bb853f; -[SCMemoryUsageReporter _isFirstPageVisit:] */

uint FUN_108bb8524(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf4b900(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108bb8540; end: 108bb8557; -[SCMemoryUsageReporter _pageActiveMemoryUsage] */

long FUN_108bb8540(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78);
  lVar1 = lVar2 + 0x3ff;
  if (*(long *)(param_1 + 0x78) <= *(long *)(param_1 + 0x80)) {
    lVar1 = lVar2;
  }
  return lVar1 >> 10;
}



/* Entry: 108bb8558; end: 108bb858f; -[SCMemoryUsageReporter _pageInactiveMemory] */

long FUN_108bb8558(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x00010c0ca3a0();
  lVar2 = lVar3 - *(long *)(param_1 + 0x78);
  lVar1 = lVar2 + 0x3ff;
  if (*(long *)(param_1 + 0x78) <= lVar3) {
    lVar1 = lVar2;
  }
  return lVar1 >> 10;
}



/* Entry: 108bb8590; end: 108bb85cf; -[SCMemoryUsageReporter _pageAvgDeltaMemoryUsage] */

long FUN_108bb8590(double param_1,long param_2)

{
  func_0x00010c0c3e20(*(undefined8 *)(param_2 + 0x90));
  return (long)((param_1 - (double)*(long *)(param_2 + 0x88)) * 0.0009765625);
}



/* Entry: 108bb85d0; end: 108bb86e7; -[SCMemoryUsageReporter _didChangeCurrentPageEvent:] */

void FUN_108bb85d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108bb86e8;
  puStack_58 = &UNK_1108c9cf0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c02c0(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108bb86e8; end: 108bb8743;  */

void FUN_108bb86e8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6b9a0(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bb8744; end: 108bb87e7;  */

void FUN_108bb8744(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69000(param_1,param_2,param_3,param_4,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb87e8; end: 108bb87ef;  */

void FUN_108bb87e8(void)

{
  return;
}



/* Entry: 108bb87f0; end: 108bb886f; -[SCMemoryUsageReporter _onStartPage:] */

void FUN_108bb87f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0ca3a0();
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar1 = PTR_PTR_1126dafa0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb8870; end: 108bb88df; -[SCMemoryUsageReporter _onEndPage:prevPageName:startTimestamp:endTimestamp:] */

void FUN_108bb8870(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  func_0x00010be8f480(param_1,param_2,param_3,param_4,param_5,param_6);
  if (param_5 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x98),param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108bb88e0; end: 108bb8a2f; -[SCMemoryUsageReporter _reportBackgroundMemoryUsageWithSnapshot:maxMemoryUsageInBytes:timeBucket:memoryPressureStateDurations:maxMemoryPressureState:] */

void FUN_108bb88e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x40) == 2) {
    if ((param_3 != 0) && (0 < *(long *)(param_1 + 0x50))) {
      puVar1 = PTR_PTR_1126b9eb0;
      func_0x00010bf05b80(PTR_PTR_1126b9eb0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0ca3a0();
      lVar3 = lVar2 + 0x3ff;
      if (-1 < lVar2) {
        lVar3 = lVar2;
      }
      func_0x00010be8f360(param_1,param_2,puVar1,lVar3 >> 10,param_5);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b9eb0;
      func_0x00010bf05b60(PTR_PTR_1126b9eb0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0ca2c0();
      lVar3 = lVar2 + 0x3ff;
      if (-1 < lVar2) {
        lVar3 = lVar2;
      }
      func_0x00010be8f360(param_1,param_2,puVar1,lVar3 >> 10,param_5);
      _objc_release(puVar1);
      lVar3 = param_3;
      func_0x00010c0ca3a0(param_3);
      func_0x00010be8f400(param_1,param_2,3,lVar3,param_4,param_5,param_6,param_7);
    }
    func_0x00010be8fc60(param_1);
    func_0x00010be8ff40(param_1,param_2,3);
    func_0x00010be93420(param_1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb8a30; end: 108bb8b17; -[SCMemoryUsageReporter _reportBackgroundMemoryUsageGrapheneMetric:value:timeBucket:] */

void FUN_108bb8a30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  if (param_5 != -1) {
    func_0x00010b9ea1a8(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110eeb578,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_5);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110de5f98,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,uVar3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108bb8b18; end: 108bb8c9f; -[SCMemoryUsageReporter _reportBlizzardPerPageMemoryUsageWithFinishedPageName:prevPageName:startTimestamp:endTimestamp:] */

void FUN_108bb8b18(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    if (5.0 < param_2 - param_1 && 0 < *(long *)(param_3 + 0x80)) {
      func_0x00010be8fac0(param_3);
      func_0x00010be8faa0(param_3);
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 0xffffffffffffffff;
      func_0x00010c0bf100(*(undefined8 *)(param_3 + 0xd8));
      func_0x00010c0ca3a0(*(undefined8 *)(param_3 + 0x60));
      func_0x00010becbec0(param_3);
      func_0x00010be8f400(param_3);
      __Block_object_dispose(&uStack_70,8);
    }
    func_0x00010be8ff40(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108bb8ca0; end: 108bb8cc7;  */

void FUN_108bb8ca0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108bb8cc8; end: 108bb8ee3; -[SCMemoryUsageReporter _reportGraphenePageDeltaMemoryUsage:] */

void FUN_108bb8cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126b9eb0;
  _objc_retain(param_3);
  func_0x00010bf05a40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010be407e0(param_1,param_2,param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)lVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110eeb5d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar4 = param_1;
  func_0x00010be6efc0(param_1);
  func_0x00010bef9180(uVar7,param_2,puVar2,lVar4);
  puVar3 = PTR_PTR_1126b9eb0;
  func_0x00010bf05aa0(PTR_PTR_1126b9eb0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar4 = param_1;
  func_0x00010be407e0(param_1,param_2,param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)lVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110eeb5d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar4 = param_1;
  func_0x00010be6f240(param_1);
  func_0x00010bef9180(uVar7,param_2,puVar3,lVar4);
  puVar5 = PTR_PTR_1126b9eb0;
  func_0x00010bf05a60(PTR_PTR_1126b9eb0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar4 = param_1;
  func_0x00010be407e0(param_1,param_2,param_3);
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)lVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar5 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110eeb5d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010be6efe0(param_1);
  func_0x00010bef9180(uVar7,param_2,puVar5,param_1);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108bb8ee4; end: 108bb8f93; -[SCMemoryUsageReporter _reportGraphenePageMaxMemoryUsage:] */

void FUN_108bb8ee4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9eb0;
  func_0x00010bf05b80(PTR_PTR_1126b9eb0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x000100c6e490();
  puVar3 = puVar1;
  if (lVar2 != -1) {
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110eeb598,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  lVar4 = *(long *)(param_1 + 0x50);
  lVar2 = lVar4 + 0x3ff;
  if (-1 < lVar4) {
    lVar2 = lVar4;
  }
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar3,lVar2 >> 10);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb8f94; end: 108bb903b; -[SCMemoryUsageReporter _reportRealtimeMemoryUsage] */

void FUN_108bb8f94(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa3a0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108bb903c; end: 108bb915b;  */

void FUN_108bb903c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010c0ca3a0();
    if (-1 < lVar2) {
      iVar1 = *(int *)(param_1 + 0xb8);
      _arc4random_uniform();
      if (iVar1 == 0) {
        puStack_38 = &uStack_40;
        uStack_40 = 0;
        uStack_30 = 0x2020000000;
        uStack_28 = 0xffffffffffffffff;
        func_0x00010c0bf100(*(undefined8 *)(param_1 + 0xd8));
        func_0x00010c0ca3a0(*(undefined8 *)(param_1 + 0x60));
        func_0x00010becbec0(param_1);
        func_0x00010be8f400(param_1);
        __Block_object_dispose(&uStack_40,8);
      }
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 108bb915c; end: 108bb9183;  */

void FUN_108bb915c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108bb9184; end: 108bb944f; -[SCMemoryUsageReporter _reportBlizzardAppMemoryUsageForCategory:totalMemoryUsageInBytes:maxMemoryUsageInBytes:timeBucket:memoryPressureStateDurations:maxMemoryPressureState:] */

void FUN_108bb9184(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126dafa8;
  _objc_alloc_init(PTR_PTR_1126dafa8);
  func_0x00010c1c67e0();
  lVar2 = param_1;
  func_0x00010be3e500(param_1);
  func_0x00010c1af640(puVar1,param_2,lVar2);
  if (param_3 == 1) {
    lVar7 = *(long *)(param_1 + 0x80);
    lVar2 = lVar7 + 0x3ff;
    if (-1 < lVar7) {
      lVar2 = lVar7;
    }
    func_0x00010c1c3420(puVar1,param_2,lVar2 >> 10);
  }
  else {
    if (param_3 == 0) {
      if (0 < *(long *)(param_1 + 0x100)) {
        func_0x00010c1c3060(puVar1);
      }
      bVar8 = true;
      goto LAB_108bb9268;
    }
    if (param_3 == 3) {
      lVar2 = param_5 + 0x3ff;
      if (-1 < param_5) {
        lVar2 = param_5;
      }
      func_0x00010c1c3420(puVar1,param_2,lVar2 >> 10);
      func_0x00010c1c6780(puVar1,param_2,param_7);
      func_0x00010c1c31a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
      if (0 < *(long *)(param_1 + 0x100)) {
        func_0x00010c1c3060(puVar1);
      }
    }
  }
  bVar8 = false;
LAB_108bb9268:
  func_0x00010c1c33e0(puVar1,param_2,param_8);
  if (param_8 != -1) {
    func_0x00010c1c3400(puVar1,param_2,*(undefined8 *)(param_1 + 0xf0));
  }
  func_0x00010c1d84e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x000100c6e490(uVar3);
  func_0x00010c1d8800(puVar1,param_2,uVar3);
  func_0x00010c214c80(puVar1,param_2,param_6);
  lVar2 = param_4 + 0x3ff;
  if (-1 < param_4) {
    lVar2 = param_4;
  }
  func_0x00010c218600(puVar1,param_2,lVar2 >> 10);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x000108bbaf28(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1691e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cb80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  if (bVar8) {
    bVar6 = 1;
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x48);
  }
  func_0x00010c1b1ce0(puVar1,param_2,bVar6 & 1);
  if (param_3 == 1) {
    lVar2 = param_1;
    func_0x00010be407e0(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1b1060(puVar1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010be6efc0(param_1);
    func_0x00010c1d7ec0(puVar1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010be6f240(param_1);
    func_0x00010c1d8280(puVar1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010be6efe0(param_1);
    func_0x00010c1d7ee0(puVar1,param_2,lVar2);
  }
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf22880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d69a0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (0 < *(long *)(param_1 + 0x108)) {
    func_0x00010c2180e0(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108bb9450; end: 108bb9453; -[SCMemoryUsageReporter _reportPerfMemoryUsageWithCategory:] */

void FUN_108bb9450(void)

{
  return;
}



/* Entry: 108bb9454; end: 108bb9577; -[SCMemoryUsageReporter _reportMemoryPressureSessionMetrics] */

void FUN_108bb9454(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126b9eb0;
  func_0x00010bf05b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de5f98,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108bb957c;
  puStack_68 = &UNK_110841f80;
  lStack_60 = param_1;
  _objc_retain(puVar3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108bb958c;
  puStack_98 = &UNK_110841f80;
  lStack_90 = param_1;
  puStack_88 = puVar3;
  puStack_58 = puVar3;
  _objc_retain(puVar3);
  func_0x00010c0bf100(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110ab5988,&puStack_80,&puStack_b0);
  _objc_release(puStack_88);
  _objc_release(puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108bb9578; end: 108bb959b;  */

void FUN_108bb9578(void)

{
  return;
}



/* Entry: 108bb959c; end: 108bb998f; -[SCMemoryUsageReporter _handleMemoryPressureState:] */

void FUN_108bb959c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bedb860(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108bb964c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x108bb96bc;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x108bb97e8;
  puStack_80 = &UNK_110842e18;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bf100(param_3,param_2,&puStack_48,&puStack_70,&puStack_98);
  _objc_release(param_3);
  return;
}



/* Entry: 108bb9990; end: 108bb9abf; -[SCMemoryUsageReporter _logGrapheneMemoryPressureIncreasedToState:] */

void FUN_108bb9990(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126b9eb0;
  func_0x00010bf05b00(PTR_PTR_1126b9eb0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de5f98,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010af88ebc(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110eeb5b8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110eeb598,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x60);
  func_0x00010c0ca3a0();
  lVar1 = lVar5 + 0x3ff;
  if (-1 < lVar5) {
    lVar1 = lVar5;
  }
  func_0x00010bef9180(uVar3,param_2,puVar4,lVar1 >> 10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108bb9ac0; end: 108bb9ca7; -[SCMemoryUsageReporter _memoryPressureStateDurations] */

void FUN_108bb9ac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0xe0);
  uVar1 = 0;
  func_0x00010af88ebc(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar8 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = 1;
  func_0x00010af88ebc(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = 2;
  func_0x00010af88ebc(2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126dafb0;
  _objc_opt_new();
  func_0x00010c1c67a0();
  lVar3 = lVar7;
  func_0x00010c0b4ca0(lVar7);
  func_0x00010c192e60(puVar2,param_2,lVar3);
  puVar4 = PTR_PTR_1126dafb0;
  _objc_opt_new();
  func_0x00010c1c67a0();
  uVar1 = uVar8;
  func_0x00010c0b4ca0(uVar8);
  func_0x00010c192e60(puVar4,param_2,uVar1);
  puVar5 = PTR_PTR_1126dafb0;
  _objc_opt_new();
  func_0x00010c1c67a0();
  uVar1 = uVar9;
  func_0x00010c0b4ca0(uVar9);
  func_0x00010c192e60(puVar5,param_2,uVar1);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  puStack_68 = puVar4;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_108bb9ca8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108bb9d34;
  puStack_90 = &UNK_110842e18;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x108bb9d40;
  puStack_b8 = &UNK_110842e18;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x108bb9d4c;
  puStack_e0 = &UNK_110842e18;
  lStack_d8 = lVar7;
  lStack_b0 = lVar7;
  lStack_88 = lVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010c0bf100(*(undefined8 *)(lVar7 + 0xd0),param_2,&puStack_a8,&puStack_d0,&puStack_f8);
  return;
}



/* Entry: 108bb9ca8; end: 108bb9d33; -[SCMemoryUsageReporter _updateMemoryPressureAggregate] */

void FUN_108bb9ca8(long param_1,undefined8 param_2)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108bb9d34;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108bb9d40;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x108bb9d4c;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_1;
  lStack_40 = param_1;
  lStack_18 = param_1;
  func_0x00010c0bf100(*(undefined8 *)(param_1 + 0xd0),param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 108bb9d34; end: 108bb9d57;  */

void FUN_108bb9d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateMemoryPressureAggregateFo_1125947c8,0);
  return;
}



/* Entry: 108bb9d58; end: 108bb9e63; -[SCMemoryUsageReporter _updateMemoryPressureAggregateForLevel:] */

void FUN_108bb9d58(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  lVar4 = *(long *)(param_2 + 0xe0);
  uVar5 = param_4;
  func_0x00010af88ebc(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0b4ca0();
  _objc_release(lVar4);
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar2 + (long)(param_1 * 1000.0))
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010af88ebc(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_3,puVar3,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined **)(param_2 + 0xe8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108bb9e64; end: 108bb9f13; -[SCMemoryUsageReporter _resetMemoryPressureAggregate] */

void FUN_108bb9e64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = 0;
  func_0x00010af88ebc(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,0,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = 1;
  func_0x00010af88ebc(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,0,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = 2;
  func_0x00010af88ebc(2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bb9f14; end: 108bb9f3b; -[SCMemoryUsageReporter currentMemoryPressureState] */

void FUN_108bb9f14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bb9f3c; end: 108bba05b; -[SCMemoryUsageReporter .cxx_destruct] */

void FUN_108bb9f3c(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bba05c; end: 108bba063; -[SCMemoryUsageReporterServices memoryUsageReporter] */

undefined8 FUN_108bba05c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bba064; end: 108bba06f; -[SCMemoryUsageReporterServices .cxx_destruct] */

void FUN_108bba064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bba070; end: 108bba12b; -[SCRealtimeMemoryMonitor initWithTimeInterval:composerTimeInterval:] */

undefined1 * FUN_108bba070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd878;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f506674;
    _dispatch_queue_create(&UNK_10f506674,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108bba12c; end: 108bba153; -[SCRealtimeMemoryMonitor memoryUsageSnapshot] */

void FUN_108bba12c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bba154; end: 108bba2d3; -[SCRealtimeMemoryMonitor startRealtimeTracking] */

void FUN_108bba154(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create
            (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar3);
  _dispatch_source_set_timer
            (*(undefined8 *)(param_1 + 0x10),0,(long)(*(double *)(param_1 + 0x28) * 1000000000.0),0)
  ;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108bba2d4;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  _dispatch_source_set_event_handler(uVar3,&puStack_80);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x10));
  _dispatch_source_create(puVar2,0,0,*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar3);
  _dispatch_source_set_timer
            (*(undefined8 *)(param_1 + 0x18),0,(long)(*(double *)(param_1 + 0x30) * 1000000000.0),0)
  ;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x108bba304;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_58);
  _dispatch_source_set_event_handler(uVar3,&puStack_a8);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x18));
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108bba2d4; end: 108bba333;  */

void FUN_108bba2d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becdf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bba334; end: 108bba36f; -[SCRealtimeMemoryMonitor stopRealtimeTracking] */

void FUN_108bba334(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    _dispatch_source_cancel();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_source_cancel_11034c160)();
    return;
  }
  return;
}



/* Entry: 108bba370; end: 108bba4e3; -[SCRealtimeMemoryMonitor _trackMemoryUsageWithAllowComposerMemoryUsageUpdate:] */

void FUN_108bba370(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [372];
  undefined4 uStack_44;
  
  puVar1 = PTR_PTR_1126dafb8;
  func_0x00010c0ca380(PTR_PTR_1126dafb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__mach_task_self__11034c5c8;
  uStack_44 = 0x5d;
  _task_info(*(undefined4 *)PTR__mach_task_self__11034c5c8,0x17,auStack_1b8,&uStack_44);
  func_0x00010c2b3d60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af88ee8();
  func_0x00010c2b3d00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _malloc_zone_statistics(0,auStack_1b8);
  func_0x00010c2b3d40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uStack_44 = 10;
  _task_info(*(undefined4 *)puVar2,0x12,auStack_1b8,&uStack_44);
  func_0x00010c2b3d20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000107c2bc3c();
  func_0x00010c2b3ce0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _os_proc_available_memory();
  func_0x00010c2a8e00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a80c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108bba4e4; end: 108bba52b; -[SCRealtimeMemoryMonitor .cxx_destruct] */

void FUN_108bba4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bba52c; end: 108bba5a7; -[SCMemoryUsageStatsSnapshot initWithMemoryUsageXcodeInBytes:memoryUsageInstrumentsInBytes:memoryUsageMallocatedInBytes:memoryUsageLegacyUsedInBytes:memoryUsageFreeInBytes:availableMemory:allowComposerMemoryUsageUpdate:] */

void FUN_108bba52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fd880;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  return;
}



/* Entry: 108bba5a8; end: 108bba5cb; -[SCMemoryUsageStatsSnapshot copyWithZone:] */

undefined8 FUN_108bba5a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bba5cc; end: 108bba63f; -[SCMemoryUsageStatsSnapshot hash] */

undefined8 * FUN_108bba5cc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  func_0x000107c3191c(&uStack_50,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         (((*(long *)((long)puVar1 + 0x28) != *(long *)(param_3 + 0x28) ||
           (*(long *)((long)puVar1 + 0x30) != *(long *)(param_3 + 0x30))) ||
          (*(long *)((long)puVar1 + 0x38) != *(long *)(param_3 + 0x38))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 8) == param_3[8]);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 108bba640; end: 108bba727; -[SCMemoryUsageStatsSnapshot isEqual:] */

bool FUN_108bba640(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         (((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
           (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))) ||
          (*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108bba728; end: 108bba72f; -[SCMemoryUsageStatsSnapshot memoryUsageXcodeInBytes] */

undefined8 FUN_108bba728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bba730; end: 108bba737; -[SCMemoryUsageStatsSnapshot memoryUsageInstrumentsInBytes] */

undefined8 FUN_108bba730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bba738; end: 108bba73f; -[SCMemoryUsageStatsSnapshot memoryUsageMallocatedInBytes] */

undefined8 FUN_108bba738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bba740; end: 108bba747; -[SCMemoryUsageStatsSnapshot memoryUsageLegacyUsedInBytes] */

undefined8 FUN_108bba740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bba748; end: 108bba74f; -[SCMemoryUsageStatsSnapshot memoryUsageFreeInBytes] */

undefined8 FUN_108bba748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bba750; end: 108bba757; -[SCMemoryUsageStatsSnapshot availableMemory] */

undefined8 FUN_108bba750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108bba758; end: 108bba75f; -[SCMemoryUsageStatsSnapshot allowComposerMemoryUsageUpdate] */

undefined1 FUN_108bba758(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bba760; end: 108bba77b; +[SCMemoryUsageStatsSnapshotBuilder memoryUsageStatsSnapshot] */

void FUN_108bba760(void)

{
  _objc_alloc_init(PTR_PTR_1126dafb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bba77c; end: 108bba903; +[SCMemoryUsageStatsSnapshotBuilder memoryUsageStatsSnapshotFromExistingMemoryUsageStatsSnapshot:] */

void FUN_108bba77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126dafb8;
  _objc_retain(param_3);
  func_0x00010c0ca380(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ca3a0(param_3);
  puVar3 = puVar1;
  func_0x00010c2b3d60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ca2c0(param_3);
  puVar4 = puVar3;
  func_0x00010c2b3d00(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ca300(param_3);
  puVar5 = puVar4;
  func_0x00010c2b3d40(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ca2e0(param_3);
  puVar6 = puVar5;
  func_0x00010c2b3d20(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ca280(param_3);
  puVar7 = puVar6;
  func_0x00010c2b3ce0(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf128a0(param_3);
  puVar8 = puVar7;
  func_0x00010c2a8e00(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf01020(param_3);
  _objc_release(param_3);
  puVar9 = puVar8;
  func_0x00010c2a80c0(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108bba904; end: 108bba94b; -[SCMemoryUsageStatsSnapshotBuilder build] */

void FUN_108bba904(void)

{
  _objc_alloc(PTR_PTR_1126dafc0);
  func_0x00010c02b120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bba94c; end: 108bba953; -[SCMemoryUsageStatsSnapshotBuilder withMemoryUsageXcodeInBytes:] */

void FUN_108bba94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108bba954; end: 108bba95b; -[SCMemoryUsageStatsSnapshotBuilder withMemoryUsageInstrumentsInBytes:] */

void FUN_108bba954(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108bba95c; end: 108bba963; -[SCMemoryUsageStatsSnapshotBuilder withMemoryUsageMallocatedInBytes:] */

void FUN_108bba95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108bba964; end: 108bba96b; -[SCMemoryUsageStatsSnapshotBuilder withMemoryUsageLegacyUsedInBytes:] */

void FUN_108bba964(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108bba96c; end: 108bba973; -[SCMemoryUsageStatsSnapshotBuilder withMemoryUsageFreeInBytes:] */

void FUN_108bba96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108bba974; end: 108bba97b; -[SCMemoryUsageStatsSnapshotBuilder withAvailableMemory:] */

void FUN_108bba974(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108bba97c; end: 108bba983; -[SCMemoryUsageStatsSnapshotBuilder withAllowComposerMemoryUsageUpdate:] */

void FUN_108bba97c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108bba984; end: 108bba9af; +[SCGrapheneMemoryusageMetric appMemoryUseXcodeKb] */

void FUN_108bba984(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bba9b0; end: 108bba9db; +[SCGrapheneMemoryusageMetric appMemoryAvgDeltaKb] */

void FUN_108bba9b0(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bba9dc; end: 108bbaa07; +[SCGrapheneMemoryusageMetric appMemoryUseInstrumentsKb] */

void FUN_108bba9dc(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbaa08; end: 108bbaa33; +[SCGrapheneMemoryusageMetric appMemoryLow] */

void FUN_108bbaa08(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbaa34; end: 108bbaa5f; +[SCGrapheneMemoryusageMetric appMemoryExceededThreshold] */

void FUN_108bbaa34(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbaa60; end: 108bbaa8b; +[SCGrapheneMemoryusageMetric appMemoryActiveKb] */

void FUN_108bbaa60(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbaa8c; end: 108bbaab7; +[SCGrapheneMemoryusageMetric appMemoryInactiveKb] */

void FUN_108bbaa8c(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbaab8; end: 108bbaae3; +[SCGrapheneMemoryusageMetric appMemoryUsedKb] */

void FUN_108bbaab8(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbaae4; end: 108bbab0f; +[SCGrapheneMemoryusageMetric appMemoryMaxKb] */

void FUN_108bbaae4(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbab10; end: 108bbab3b; +[SCGrapheneMemoryusageMetric appMemoryPressureIncreased] */

void FUN_108bbab10(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbab3c; end: 108bbab67; +[SCGrapheneMemoryusageMetric appMemoryPressureSession] */

void FUN_108bbab3c(void)

{
  _objc_alloc(PTR_PTR_1126b9eb0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbab68; end: 108bbac07; -[SCGrapheneMemoryusageMetric description] */

void FUN_108bbab68(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eeb638;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110eeb638,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fd888;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108bbac08; end: 108bbadaf; -[SCGrapheneRegistry memoryusageGraphene] */

void FUN_108bbac08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108bbac90;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372ddb8 != -1) {
    func_0x000107c27d9c(0x11372ddb8,&puStack_48);
  }
  uVar1 = uRam000000011372ddb0;
  _objc_retain(uRam000000011372ddb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bbadb0; end: 108bbae67;  */

void FUN_108bbadb0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar2 = lRam000000011372ddc8;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bbae68;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x11372ddc8,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam000000011372ddc0;
  _objc_retain(uRam000000011372ddc0);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bbae68; end: 108bbaec3;  */

void FUN_108bbae68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110eeb7b8,0,0);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372ddc0;
  puRam000000011372ddc0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bbaec4; end: 108bbaf4b;  */

undefined8 FUN_108bbaec4(void)

{
  return 0;
}



/* Entry: 108bbaf4c; end: 108bbaf53; -[SCSnapSavingServices snapSavingService] */

undefined8 FUN_108bbaf4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bbaf54; end: 108bbaf5f; -[SCSnapSavingServices .cxx_destruct] */

void FUN_108bbaf54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bbaf60; end: 108bbafcb; -[SCSnapSavingEventScope initWithSnapSavingEventObservable:] */

undefined1 * FUN_108bbaf60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd898;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bbafcc; end: 108bbafe3; -[SCSnapSavingEventScope snapSavingEventObservable] */

void FUN_108bbafcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bbafe4; end: 108bbafeb; -[SCSnapSavingEventScope .cxx_destruct] */

void FUN_108bbafe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108bbafec; end: 108bbb097; -[SCSnapSavingEvent initWithSnapId:phAssetLocalIdentifier:] */

undefined1 *
FUN_108bbafec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd8a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bbb098; end: 108bbb0bb; -[SCSnapSavingEvent copyWithZone:] */

undefined8 FUN_108bbb098(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bbb0bc; end: 108bbb12f; -[SCSnapSavingEvent hash] */

undefined8 * FUN_108bbb0bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108bbb1b0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bbb1bc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108bbb1bc;
        }
        goto LAB_108bbb1b0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108bbb1bc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108bbb130; end: 108bbb1d7; -[SCSnapSavingEvent isEqual:] */

long FUN_108bbb130(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bbb1b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bbb1bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108bbb1bc;
        }
        goto LAB_108bbb1b0;
      }
    }
    lVar3 = 0;
  }
LAB_108bbb1bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bbb1d8; end: 108bbb1df; -[SCSnapSavingEvent snapId] */

undefined8 FUN_108bbb1d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bbb1e0; end: 108bbb1e7; -[SCSnapSavingEvent phAssetLocalIdentifier] */

undefined8 FUN_108bbb1e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bbb1e8; end: 108bbb217; -[SCSnapSavingEvent .cxx_destruct] */

void FUN_108bbb1e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


