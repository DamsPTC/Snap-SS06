/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10608a250; end: 10608a277; -[SCCoreCameraLogger _cancelBatchCaptureCreationEvent] */

/* WARNING: Possible PIC construction at 0x00010608a264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010608a268) */

void FUN_10608a250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10608a278; end: 10608a507; -[SCCoreCameraLogger _completeLogCameraCreationDelayEventWithIsImage:atTime:] */

void FUN_10608a278(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de7678;
  }
  _objc_retain(ppuVar1);
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10));
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar7 = param_1;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10));
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar8 = uVar7;
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar9 = uVar8;
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be47320(uVar7,uVar8,uVar9,param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010be51040(param_2);
    func_0x00010be510c0(param_2);
    func_0x00010be51100(param_2);
  }
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar3);
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x48));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x38));
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  _objc_release(uVar7);
  _objc_initWeak(auStack_68,param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10608a508;
  puStack_88 = &UNK_110842a68;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_1;
  _objc_retain(ppuVar1);
  ppuStack_80 = ppuVar1;
  func_0x000100162d98("APPSTORE",&puStack_a0);
  _objc_release(ppuStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10608a508; end: 10608a567;  */

void FUN_10608a508(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c77a8;
    _objc_alloc(PTR_PTR_1126c77a8);
    func_0x00010c0523c0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x78),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10608a568; end: 10608a583; -[SCCoreCameraLogger _latencyMillisWithStartTime:endTime:timeAdjustment:] */

long FUN_10608a568(double param_1,double param_2,double param_3)

{
  return (long)(((param_2 - param_1) + param_3) * 1000.0);
}



/* Entry: 10608a584; end: 10608a6ab; -[SCCoreCameraLogger _addSplitPointForKey:atTime:] */

void FUN_10608a584(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    dVar5 = param_1;
    _objc_retain(param_4);
    func_0x00010c0e00e0(uVar4,param_3,&PTR____CFConstantStringClassReference_110e15918);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 - dVar5;
    _objc_release(uVar4);
    ppuVar2 = *(undefined ***)(param_2 + 0x10);
    func_0x00010c0e00e0(ppuVar2,param_3,&PTR____CFConstantStringClassReference_110f4b8f8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4600;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf885a0(ppuVar1);
    _objc_release(ppuVar1);
    func_0x00010c0df840(puVar3,param_3,(long)((param_1 + dVar5) * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20),param_3,puVar3,param_4);
    _objc_release(puVar3);
    func_0x00010bed4a60(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 10608a6ac; end: 10608a847; -[SCCoreCameraLogger _updateCameraCreationDelayTraceForSplitKey:] */

void FUN_10608a6ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4c058);
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4c078);
    if ((int)uVar2 != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3c498;
LAB_10608a720:
      func_0x00010bf94220(puVar1,param_2,ppuVar3);
      goto LAB_10608a784;
    }
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4bf58);
    if ((((uVar2 & 1) == 0) &&
        (uVar2 = param_3,
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4bf18),
        (uVar2 & 1) == 0)) &&
       (uVar2 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4be58),
       (int)uVar2 == 0)) {
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4bf78);
      if ((((uVar2 & 1) == 0) &&
          (uVar2 = param_3,
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4bf98),
          (uVar2 & 1) == 0)) &&
         (uVar2 = param_3,
         func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4be78),
         (int)uVar2 == 0)) {
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4bdb8);
        if ((int)uVar2 == 0) {
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f4bd98);
          if ((int)uVar2 == 0) goto LAB_10608a784;
          ppuVar3 = &PTR____CFConstantStringClassReference_110e3c4f8;
        }
        else {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e3c4d8;
        }
        goto LAB_10608a720;
      }
      func_0x00010bf94220(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3c4b8);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3c4d8;
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e3c4b8;
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e3c498;
  }
  func_0x00010bf17ba0(puVar1,param_2,ppuVar3);
LAB_10608a784:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10608a848; end: 10608ada7; -[SCCoreCameraLogger _buildSharedCameraMetricsParams] */

void FUN_10608a848(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar2 = PTR_PTR_1126c77b0;
  _objc_alloc_init(PTR_PTR_1126c77b0);
  func_0x00010c167ce0();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110db9478);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = param_1;
    func_0x00010c0c6dc0(param_1,param_2,lVar3);
    func_0x00010c1c5440(puVar2,param_2,lVar4);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110f4b918);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110f4b938);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110f4b918);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110f4b938);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      uVar6 = 2;
      if ((int)uVar7 != 0) {
        uVar6 = 3;
      }
      if ((int)uVar11 == 0) {
        uVar6 = 1;
      }
      func_0x00010c1c1040(puVar2,param_2,uVar6);
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0772e0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3c578;
  if ((int)puVar9 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3c598;
  }
  func_0x00010c1df8c0(puVar2,param_2,ppuVar1);
  _objc_release(puVar8);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110eb5d58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c19c240(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110ea05f8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c179280(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110f4b958);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c176200(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110f4b998);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c176b80(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110f4b9b8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c176b00(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110f4b978);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c176960(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110f4b9f8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c209b60(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  ppuVar10 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c0e00e0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110f4ba18);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar1 = ppuVar10;
  }
  func_0x00010c209900(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110e42df8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf1f3c0();
  func_0x00010c19daa0(puVar2,param_2,uVar6);
  _objc_release(uVar11);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_10608ada8(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207ee0(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010c1ffc60(puVar2,param_2,*(undefined8 *)(param_1 + 0x68));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110f4bd78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19db40(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110f4bc58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar12 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar12,param_2,&PTR____CFConstantStringClassReference_110f4bc58);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c067ec0();
    _objc_release(uVar12);
    if ((uint)uVar13 < 4) {
      uVar6 = *(undefined8 *)(&UNK_10ddd3c10 + (uVar13 & 0xffffffff) * 8);
      goto LAB_10608aca4;
    }
  }
  uVar6 = 0xffffffffffffffff;
LAB_10608aca4:
  func_0x00010c1bda00(puVar2,param_2,uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110f4bc98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c91e0(puVar2);
  _objc_release(uVar6);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110f4bcb8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf1f3c0();
  func_0x00010c1b06a0(puVar2,param_2,uVar6);
  _objc_release(uVar11);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110f4bcd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    func_0x00010c1764a0(puVar2,param_2,0xffffffffffffffff);
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar11,param_2,&PTR____CFConstantStringClassReference_110f4bcd8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010c067ec0();
    func_0x00010c1764a0(puVar2,param_2,(long)(int)uVar6);
    _objc_release(uVar11);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10608ada8; end: 10608ae0b;  */

void FUN_10608ada8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10608ae0c; end: 10608b29f; -[SCCoreCameraLogger _buildCapturePhotoSettings] */

void FUN_10608ae0c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c77b8;
    _objc_alloc_init(PTR_PTR_1126c77b8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4ba98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c19dae0(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bb98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    func_0x00010c1db5e0(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bbb8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    func_0x00010c1db420(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bbd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    func_0x00010c1e24a0(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bbf8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    func_0x00010c1e1d60(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4ba58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1a86a0(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bb18);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c20bec0(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f4bb58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bb58);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      func_0x00010c1bcd20(puVar4,param_2,uVar3);
      _objc_release(uVar2);
    }
    func_0x00010c173a40(puVar4,param_2,lVar1 != 0);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f4bb38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bb38);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      func_0x00010c192220(puVar4,param_2,uVar3);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4ba78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    func_0x00010c198960(puVar4,param_2,uVar3);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f4bab8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bab8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      func_0x00010c1e9200(puVar4,param_2,uVar3);
      _objc_release(uVar2);
    }
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f4bad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bad8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      func_0x00010c2236c0(puVar4,param_2,uVar3);
      _objc_release(uVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f4bc18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1db540(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f4bc38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1db520(puVar4);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4bb78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    lVar1 = param_1;
    func_0x00010be73bc0(param_1,param_2,(long)(int)uVar3);
    func_0x00010c1db560(puVar4,param_2,lVar1);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f4baf8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f4baf8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      func_0x00010c181be0(puVar4,param_2,uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10608b2a0; end: 10608b5e3; -[SCCoreCameraLogger _logCameraCreationDelayBlizzardEventWithLatencyMillis:] */

void FUN_10608b2a0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar1 = PTR_PTR_1126c77c0;
  _objc_alloc_init(PTR_PTR_1126c77c0);
  func_0x00010c1b92c0();
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f4b9d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010c181e00(puVar1,param_3,0);
    fVar5 = SUB84(param_1,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110f4b9d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * 1000.0;
    func_0x00010c181e00(puVar1,param_3,(long)param_1);
    fVar5 = SUB84(param_1,0);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f4bcf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110f4bcf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar1,param_3,uVar3);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f4bd18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0e00e0(uVar4,param_3,&PTR____CFConstantStringClassReference_110f4bd18);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c067ec0();
    func_0x00010c178da0(puVar1,param_3,(long)(int)uVar3);
    _objc_release(uVar4);
  }
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f4bd58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0e00e0(uVar4,param_3,&PTR____CFConstantStringClassReference_110f4bd58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c067ec0();
    func_0x00010c177420(puVar1,param_3,(long)(int)uVar3);
    _objc_release(uVar4);
  }
  lVar2 = param_2;
  func_0x00010bdd6aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fefc0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bdd5de0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179100(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f4bd38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0e00e0(uVar4,param_3,&PTR____CFConstantStringClassReference_110f4bd38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c067ec0();
    func_0x00010c174200(puVar1,param_3,(long)(int)uVar3);
    _objc_release(uVar4);
  }
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110f4bc78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110f4bc78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c199000((double)fVar5,puVar1);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_2 + 0x38);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    FUN_10608ada8(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176980(puVar1,param_3,uVar3);
    _objc_release(uVar3);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf1cf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10608b5e4; end: 10608b747; -[SCCoreCameraLogger _logCameraCreationDelayGrapheneEventWithLatencyMillis:] */

void FUN_10608b5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e42df8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085aa328(uVar4,uVar1,puVar2,uVar3,param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085aa5e8(uVar4,uVar1,puVar2,uVar3,1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10608b748; end: 10608b74b; -[SCCoreCameraLogger _logCameraCreationDelayPerformanceEventWithLatencyMillis:] */

void FUN_10608b748(void)

{
  return;
}



/* Entry: 10608b74c; end: 10608b7b3; -[SCCoreCameraLogger mediaTypeWithString:] */

undefined8 FUN_10608b74c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db6dd8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de7678);
    uVar2 = 0xffffffffffffffff;
    if ((int)uVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10608b7b4; end: 10608b7c7; -[SCCoreCameraLogger _photoQualityPrioritizationWithValue:] */

ulong FUN_10608b7b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 != 2) {
    param_3 = (ulong)(param_3 == 3);
  }
  return param_3;
}



/* Entry: 10608b7c8; end: 10608b9bf; -[SCCoreCameraLogger logDirectSnapCreate:creationTime:] */

void FUN_10608b7c8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar12);
  if (param_3 != (undefined **)0x0) {
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    ppuVar7 = param_3;
    func_0x00010bf29de0();
    func_0x00010baee46c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7;
    }
    ppuVar8 = param_3;
    func_0x00010bfb2520();
    func_0x00010baf9e00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    ppuVar9 = param_3;
    func_0x00010bfce300();
    func_0x00010bafe658();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar3 = ppuVar9;
    }
    ppuVar10 = param_3;
    func_0x00010c0c6c20();
    func_0x000108442d24();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar4 = ppuVar10;
    }
    ppuVar11 = param_3;
    func_0x00010c247520();
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar5 = ppuVar11;
    }
    func_0x0001085a929c(uVar12,ppuVar1,ppuVar2,ppuVar3,ppuVar4,ppuVar5,1);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10608b9c0; end: 10608badf;  */

void FUN_10608b9c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c096b60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc81a0(uVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c45c0;
  _objc_alloc(PTR_PTR_1126c45c0);
  func_0x00010c047280();
  func_0x00010c161fc0();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2b3080(uVar3);
  func_0x00010bed6e40(uVar6,param_2,puVar2,uVar3);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x00010c067fc0(lVar4);
    func_0x00010c206c40(puVar2,param_2,lVar5);
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
  func_0x00010bf1cf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608bae0; end: 10608bba3; -[SCCoreCameraLogger logDirectSegmentCreate:segmentSource:creationTime:] */

void FUN_10608bae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10608bba4;
  puStack_68 = &UNK_11084d788;
  uStack_60 = param_3;
  uStack_58 = param_5;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10608bba4; end: 10608bc9b;  */

void FUN_10608bba4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126c77c8;
  _objc_alloc(PTR_PTR_1126c77c8);
  func_0x00010c047280();
  func_0x00010c161fc0();
  func_0x00010c1faae0(puVar2,param_2,*(undefined8 *)(param_1 + 0x38));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2b3080();
  if (iVar1 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x88);
    func_0x00010c292d20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c09eaa0();
    lVar8 = -(ulong)(lVar5 != 1);
    if (lVar5 == 2) {
      lVar8 = 1;
    }
    func_0x00010c1bf740(puVar2,param_2,lVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58);
  func_0x00010bf1cf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10608bc9c; end: 10608bd33; -[SCCoreCameraLogger _updateDirectSnapCreate:withLocationEnabled:] */

void FUN_10608bc9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c1bf7e0(param_3,param_2,param_4);
  if ((int)param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x88);
    func_0x00010c292d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c09eaa0();
    lVar4 = -(ulong)(lVar3 != 1);
    if (lVar3 == 2) {
      lVar4 = 1;
    }
    func_0x00010c1bf740(param_3,param_2,lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10608bd34; end: 10608be13; -[SCCoreCameraLogger logCameraNotFoundAlertShownWithDevicePosition:discoverySessionId:] */

void FUN_10608bd34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10608be14; end: 10608be4b;  */

void FUN_10608be14(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be512a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608be4c; end: 10608beff; -[SCCoreCameraLogger _logCameraNotFoundAlertShownWithDevicePosition:discoverySessionId:] */

void FUN_10608be4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c77d0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1764e0();
  func_0x00010c21acc0(puVar1,param_2,4);
  func_0x00010c18d000(puVar1,param_2,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf1cf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10608bf00; end: 10608bfef; -[SCCoreCameraLogger .cxx_destruct] */

void FUN_10608bf00(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10608bff0; end: 10608c057; -[SCCoreCameraOpenLogger logCameraOpenEventCameraRunning] */

void FUN_10608bff0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10608c058;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 10608c058; end: 10608c067;  */

void FUN_10608c058(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 10608c068; end: 10608c0bf; -[SCCoreCameraOpenLogger logCameraOpenEventFirstFrameReceiveSuccessfully] */

void FUN_10608c068(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10608c0c0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10608c0c0; end: 10608c137;  */

void FUN_10608c0c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x0001008cc21c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x0001008cc2b4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085a9e50(uVar3,uVar1,uVar2,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608c138; end: 10608c13f; -[SCCoreCameraOpenLogger logCameraOpenEventCameraFailedToOpen] */

void FUN_10608c138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logCameraOpenEventCameraFailedTo_112606280,1)
  ;
  return;
}



/* Entry: 10608c140; end: 10608c147; -[SCCoreCameraOpenLogger logCameraOpenFailurePermissionIncomplete] */

void FUN_10608c140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logCameraOpenEventCameraFailedTo_112606280,0x11);
  return;
}



/* Entry: 10608c148; end: 10608c14b; -[SCCoreCameraOpenLogger logCameraOpenFailurePermissionNotGranted] */

void FUN_10608c148(void)

{
  return;
}



/* Entry: 10608c14c; end: 10608c1a3; -[SCCoreCameraOpenLogger logCameraOpenEventCameraFailedToOpenWithReason:] */

void FUN_10608c14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10608c1a4;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10608c1a4; end: 10608c253;  */

void FUN_10608c1a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b7018;
  func_0x00010bf11000(PTR_PTR_1126b7018,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  lVar1 = *(long *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x0001008cc21c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x0001008cc2b4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 1 && puVar2 != (undefined *)0x3) {
    func_0x0001085a99f0(uVar5,uVar3,uVar4,1);
  }
  else {
    func_0x0001085a9c20();
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10608c254; end: 10608c29b; -[SCCoreCameraOpenLogger .cxx_destruct] */

void FUN_10608c254(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10608c29c; end: 10608c43b; -[SCVideoNoSoundLogger initWithCameraUserLoggingServices:audioSessionServices:] */

undefined1 *
FUN_10608c29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef768;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar4);
    puVar2 = PTR__kCMTimeInvalid_110348648;
    uVar4 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    *(undefined8 *)((long)puVar1 + 0x80) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x88) = *(undefined8 *)(puVar2 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10608c43c; end: 10608c44b; -[SCVideoNoSoundLogger increaseNoSoundCount] */

void FUN_10608c43c(long param_1)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return;
}



/* Entry: 10608c44c; end: 10608c457; -[SCVideoNoSoundLogger startCountingVideoNoSoundHaveBeenFixed] */

void FUN_10608c44c(long param_1)

{
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



/* Entry: 10608c458; end: 10608c4a7; -[SCVideoNoSoundLogger appSessionIdForNoSound] */

void FUN_10608c458(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10608c4a8; end: 10608c4cf; -[SCVideoNoSoundLogger logVideoNoSoundHaveBeenFixedWithMicInUseWarningShowed:] */

void FUN_10608c4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 9) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0aaef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logNoAudioErrorEventWithIsFixed__1126085c8,1,param_3,1,
               0xffffffffffffffff,0);
    return;
  }
  return;
}



/* Entry: 10608c4d0; end: 10608c4e7; -[SCVideoNoSoundLogger logAudioSessionCategoryHaveBeenFixedWithMicInUseWarningShowed:] */

void FUN_10608c4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aaef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logNoAudioErrorEventWithIsFixed__1126085c8,1,param_3,2,0xffffffffffffffff
             ,0);
  return;
}



/* Entry: 10608c4e8; end: 10608c553; -[SCVideoNoSoundLogger logAudioSessionBrokenMicHaveBeenFixed:micInUseWarningShowed:] */

void FUN_10608c4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10608c554(0,0,0,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aaee0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608c554; end: 10608c77b;  */

void FUN_10608c554(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf6e340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c292820(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar2);
  }
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_5 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10608c77c; end: 10608c87f; -[SCVideoNoSoundLogger logNoAudioErrorEventWithIsFixed:micInUseWarningShowed:fixedErrorType:unfixableErrorType:errorMessage:] */

void FUN_10608c77c(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_3;
  _objc_retain(param_7);
  uStack_5f = param_4;
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  return;
}



/* Entry: 10608c880; end: 10608cb83;  */

void FUN_10608c880(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  long lStack_138;
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
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    unaff_x20 = PTR_PTR_1126c77d8;
    _objc_alloc_init();
    func_0x00010c179280();
    func_0x00010c1b1120(unaff_x20);
    func_0x00010c19d900(unaff_x20);
    func_0x00010c21b5a0(unaff_x20);
    func_0x00010c1971a0(unaff_x20);
    func_0x00010c1c7920(unaff_x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x00010bf3ec40();
      func_0x00010c0df780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c160(unaff_x20);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(long *)(param_1 + 0x40) != 0) {
      func_0x00010bf3ec40();
      func_0x00010c0df780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c3c0(unaff_x20);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(long *)(param_1 + 0x50) != 0) {
      func_0x00010bf3ec40();
      func_0x00010c0df780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16aac0(unaff_x20);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___CXCallObserver_1126b6e20;
    _objc_alloc_init();
    puVar3 = puVar2;
    func_0x00010bf289e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar7 = *plStack_110;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(puVar3);
          }
          iVar1 = (int)*(undefined8 *)(lStack_118 + (long)puVar8 * 8);
          func_0x00010bfd6ae0();
          if (iVar1 == 0) {
            _objc_release(puVar3);
            func_0x00010c1c7900(unaff_x20);
            goto LAB_10608caf0;
          }
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
LAB_10608caf0:
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf1cf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x20);
  }
  lVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10608cb84;
  puStack_140 = unaff_x20;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_148,lVar7);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  _objc_copyWeak(auStack_150,auStack_148);
  func_0x00010c0f88c0(uVar6);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 10608cb84; end: 10608cc2b; -[SCVideoNoSoundLogger resetAll] */

void FUN_10608cb84(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10608cc2c; end: 10608cccb;  */

void FUN_10608cc2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar2);
    *(undefined2 *)(param_1 + 0x38) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x3a) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    func_0x00010c162840(param_1,param_2,0);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar2);
    puVar1 = PTR__kCMTimeInvalid_110348648;
    uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(puVar1 + 0x10);
    *(undefined1 *)(param_1 + 0x3b) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608cccc; end: 10608cda3; -[SCVideoNoSoundLogger setCaptureSessionId:] */

void FUN_10608cccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10608cda4; end: 10608cdf7;  */

void FUN_10608cda4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x70) != lVar3) {
      _objc_retain(lVar3);
      uVar2 = *(undefined8 *)(lVar1 + 0x70);
      *(long *)(lVar1 + 0x70) = lVar3;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10608cdf8; end: 10608ced7; -[SCVideoNoSoundLogger checkVideoFileAndLogIfNeeded:hasShownMicInUseWarning:] */

void FUN_10608cdf8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uStack_40 = param_4;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10608ced8; end: 10608cff3;  */

void FUN_10608ced8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,*(undefined8 *)(param_1 + 0x20)
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    _objc_copyWeak(auStack_40,param_1 + 0x30);
    _objc_retain(puVar1);
    uStack_38 = *(undefined1 *)(param_1 + 0x38);
    func_0x00010c09c640(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
  }
  else {
    func_0x00010be8fd60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 10608cff4; end: 10608d083;  */

void FUN_10608cff4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    lStack_38 = 0;
    func_0x00010c2533c0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e3c5d8,&lStack_38);
    lVar1 = lStack_38;
    _objc_retain(lStack_38);
    if (lVar3 == 2 && lVar1 == 0) {
      func_0x00010be8fd60(lVar2,param_2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined1 *)(param_1 + 0x30));
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10608d084; end: 10608d163; -[SCVideoNoSoundLogger _reportNoAudioIfNeeded:hasShownMicInUseWarning:] */

void FUN_10608d084(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10608d164; end: 10608d8d7;  */

undefined ** FUN_10608d164(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
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
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = (undefined **)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (ppuVar26 != (undefined **)0x0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar3 = ppuVar26[4];
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c1238e0();
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar5 = ppuVar26[8];
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c067fc0();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      if (puVar4 == (undefined *)0x67726e74) {
        ppuStack_180 = &PTR____CFConstantStringClassReference_110e3c5f8;
        ppuVar7 = (undefined **)ppuVar26[10];
        ppuVar8 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar8 = ppuVar7;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuStack_178 = &PTR____CFConstantStringClassReference_110e3c618;
        ppuVar9 = (undefined **)ppuVar26[8];
        ppuStack_f8 = ppuVar8;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_f0 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar9 != (undefined **)0x0) {
          ppuStack_f0 = ppuVar9;
        }
        ppuStack_170 = &PTR____CFConstantStringClassReference_110e3c638;
        ppuVar10 = (undefined **)ppuVar26[9];
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar10 != (undefined **)0x0) {
          ppuStack_e8 = ppuVar10;
        }
        ppuStack_168 = &PTR____CFConstantStringClassReference_110e3c658;
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_160 = &PTR____CFConstantStringClassReference_110e3c678;
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puStack_e0 = puVar11;
        func_0x00010c25d8c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_158 = &PTR____CFConstantStringClassReference_110e3c698;
        puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puStack_d8 = puVar12;
        func_0x00010c25d8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_150 = &PTR____CFConstantStringClassReference_110e3c6b8;
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110dad378;
        if (*(char *)(ppuVar26 + 1) == '\0') {
          ppuStack_c8 = &PTR____CFConstantStringClassReference_110dad398;
        }
        ppuStack_148 = &PTR____CFConstantStringClassReference_110e3c6d8;
        puStack_d0 = puVar27;
        if (*(long *)(param_1 + 0x20) == 0) {
          uStack_198 = 0;
          uStack_190 = 0;
          uStack_188 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_198);
        }
        _CMTimeGetSeconds(&uStack_198);
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_140 = &PTR____CFConstantStringClassReference_110e3c6f8;
        puVar13 = ppuVar26[4];
        puStack_c0 = puVar4;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c0da920();
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_b8 = &PTR____CFConstantStringClassReference_110dad378;
        if ((int)puVar15 == 0) {
          ppuStack_b8 = &PTR____CFConstantStringClassReference_110dad398;
        }
        ppuStack_138 = &PTR____CFConstantStringClassReference_110e3c718;
        func_0x00010c098220(ppuVar26);
        func_0x00010c25d8c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_130 = &PTR____CFConstantStringClassReference_110e3c738;
        ppuVar17 = ppuVar26;
        puStack_b0 = puVar16;
        func_0x00010bef0aa0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_a8 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar17 != (undefined **)0x0) {
          ppuStack_a8 = ppuVar17;
        }
        ppuStack_128 = &PTR____CFConstantStringClassReference_110e3c758;
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_120 = &PTR____CFConstantStringClassReference_110e3c778;
        puStack_a0 = puVar18;
        func_0x00010bfb2060(&uStack_198,ppuVar26);
        _CMTimeGetSeconds(&uStack_198);
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_118 = &PTR____CFConstantStringClassReference_110e3c798;
        ppuVar19 = (undefined **)ppuVar26[4];
        puStack_98 = puVar15;
        func_0x00010c0d3da0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar19;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar20;
        func_0x00010c089be0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_90 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar21 != (undefined **)0x0) {
          ppuStack_90 = ppuVar21;
        }
        ppuStack_110 = &PTR____CFConstantStringClassReference_110e3c7b8;
        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_108 = &PTR____CFConstantStringClassReference_110e3c7d8;
        ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_88 = puVar22;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = ppuVar23;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_80 = &PTR____CFConstantStringClassReference_110dcf238;
        if (ppuVar24 != (undefined **)0x0) {
          ppuStack_80 = ppuVar24;
        }
        ppuStack_100 = &PTR____CFConstantStringClassReference_110ddfed8;
        ppuStack_78 = &PTR____CFConstantStringClassReference_110dcf238;
        if ((undefined **)ppuVar26[5] != (undefined **)0x0) {
          ppuStack_78 = (undefined **)ppuVar26[5];
        }
        puVar25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf72020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar25);
        _objc_release(ppuVar24);
        _objc_release(ppuVar23);
        _objc_release(puVar22);
        _objc_release(ppuVar21);
        _objc_release(ppuVar20);
        _objc_release(ppuVar19);
        _objc_release(puVar15);
        _objc_release(puVar18);
        _objc_release(ppuVar17);
        _objc_release(puVar16);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar4);
        _objc_release(puVar27);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        if (ppuVar7 != (undefined **)0x0) {
          _objc_release(ppuVar8);
        }
        if ((puVar6 == (undefined *)0x21726573) &&
           (ppuVar8 = ppuVar26, func_0x00010be40fc0(), (int)ppuVar8 != 0)) {
          func_0x00010c1d0560(puVar5);
        }
        else {
          func_0x00010c1d0560(puVar5);
        }
        func_0x00010bfec240(ppuVar26);
        puVar4 = ppuVar26[9];
        puVar6 = ppuVar26[10];
        puVar27 = ppuVar26[8];
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        FUN_10608c554(puVar6,puVar27,puVar4,0,puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0aaee0(ppuVar26);
        _objc_release(puVar6);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar5);
      }
      else {
        func_0x00010bfec240(ppuVar26);
        func_0x00010c0aaee0(ppuVar26);
      }
      _objc_release(puVar3);
    }
    else if (*(char *)(ppuVar26 + 7) == '\x01') {
      func_0x00010c0a13a0(ppuVar26);
    }
    else if (*(char *)((long)ppuVar26 + 0x39) == '\x01') {
      func_0x00010c0a1380(ppuVar26);
    }
    else {
      func_0x00010c0b3000(ppuVar26);
    }
  }
  _objc_release(ppuVar26);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c075d00();
    if ((int)puVar4 == 0) {
      ppuVar26 = (undefined **)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126b2930;
      func_0x00010bf5e640(PTR_PTR_1126b2930);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bfd3880();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c11f420();
      ppuVar26 = (undefined **)(ulong)(puVar6 != (undefined *)0x7fffffffffffffff);
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    _objc_release(puVar5);
    return ppuVar26;
  }
  return ppuVar26;
}



/* Entry: 10608d8d8; end: 10608d977; -[SCVideoNoSoundLogger _isIPhone7Or7Plus] */

bool FUN_10608d8d8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075d00();
  if ((int)puVar3 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c11f420();
    bVar1 = puVar5 != (undefined *)0x7fffffffffffffff;
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10608d978; end: 10608da1f; -[SCVideoNoSoundLogger _audioSessionWillDeactivate] */

void FUN_10608d978(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10608da20; end: 10608da43;  */

void FUN_10608da20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10608da44; end: 10608daeb; -[SCVideoNoSoundLogger _audioSessionDidActivate] */

void FUN_10608da44(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10608daec; end: 10608db0b;  */

void FUN_10608daec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10608db0c; end: 10608dbb3; -[SCVideoNoSoundLogger managedLensesProcessorDidCallResumeAllSounds] */

void FUN_10608db0c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10608dbb4; end: 10608dbdb;  */

void FUN_10608dbb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10608dbdc; end: 10608dbe3; -[SCVideoNoSoundLogger audioSessionError] */

undefined8 FUN_10608dbdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10608dbe4; end: 10608dc13; -[SCVideoNoSoundLogger setAudioSessionError:] */

void FUN_10608dbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608dc14; end: 10608dc1b; -[SCVideoNoSoundLogger audioQueueError] */

undefined8 FUN_10608dc14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10608dc1c; end: 10608dc4b; -[SCVideoNoSoundLogger setAudioQueueError:] */

void FUN_10608dc1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608dc4c; end: 10608dc53; -[SCVideoNoSoundLogger assetWriterError] */

undefined8 FUN_10608dc4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10608dc54; end: 10608dc83; -[SCVideoNoSoundLogger setAssetWriterError:] */

void FUN_10608dc54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608dc84; end: 10608dc8b; -[SCVideoNoSoundLogger retryAudioQueueSuccess] */

undefined1 FUN_10608dc84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10608dc8c; end: 10608dc93; -[SCVideoNoSoundLogger setRetryAudioQueueSuccess:] */

void FUN_10608dc8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10608dc94; end: 10608dc9b; -[SCVideoNoSoundLogger retryAudioQueueSuccessSetDataSource] */

undefined1 FUN_10608dc94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 10608dc9c; end: 10608dca3; -[SCVideoNoSoundLogger setRetryAudioQueueSuccessSetDataSource:] */

void FUN_10608dc9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 10608dca4; end: 10608dcab; -[SCVideoNoSoundLogger brokenMicCodeType] */

undefined8 FUN_10608dca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10608dcac; end: 10608dcdb; -[SCVideoNoSoundLogger setBrokenMicCodeType:] */

void FUN_10608dcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608dcdc; end: 10608dce3; -[SCVideoNoSoundLogger lenseActiveWhileRecording] */

undefined1 FUN_10608dcdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}



/* Entry: 10608dce4; end: 10608dceb; -[SCVideoNoSoundLogger setLenseActiveWhileRecording:] */

void FUN_10608dce4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3a) = param_3;
  return;
}



/* Entry: 10608dcec; end: 10608dcf7; -[SCVideoNoSoundLogger activeLensId] */

void FUN_10608dcec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 10608dcf8; end: 10608dcff; -[SCVideoNoSoundLogger setActiveLensId:] */

void FUN_10608dcf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10608dd00; end: 10608dd13; -[SCVideoNoSoundLogger firstWrittenAudioBufferDelay] */

void FUN_10608dd00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[1] = *(undefined8 *)(param_2 + 0x80);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x88);
  return;
}



/* Entry: 10608dd14; end: 10608dd27; -[SCVideoNoSoundLogger setFirstWrittenAudioBufferDelay:] */

void FUN_10608dd14(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x88) = param_3[2];
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}



/* Entry: 10608dd28; end: 10608dd2f; -[SCVideoNoSoundLogger audioQueueStarted] */

undefined1 FUN_10608dd28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}



/* Entry: 10608dd30; end: 10608dd37; -[SCVideoNoSoundLogger setAudioQueueStarted:] */

void FUN_10608dd30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3b) = param_3;
  return;
}



/* Entry: 10608dd38; end: 10608dd3f; -[SCVideoNoSoundLogger audioSamplesReceived] */

undefined8 FUN_10608dd38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10608dd40; end: 10608dd47; -[SCVideoNoSoundLogger setAudioSamplesReceived:] */

void FUN_10608dd40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10608dd48; end: 10608dd4f; -[SCVideoNoSoundLogger captureSessionId] */

undefined8 FUN_10608dd48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10608dd50; end: 10608dddf; -[SCVideoNoSoundLogger .cxx_destruct] */

void FUN_10608dd50(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10608dde0; end: 10608dde3;  */

void FUN_10608dde0(void)

{
  return;
}



/* Entry: 10608dde4; end: 10608de53;  */

void FUN_10608dde4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed1e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608de54; end: 10608de57;  */

void FUN_10608de54(void)

{
  return;
}



/* Entry: 10608de58; end: 10608dee3;  */

void FUN_10608de58(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be90a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10608dee4; end: 10608def7;  */

void FUN_10608dee4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10608def8; end: 10608df23; -[SCCameraUIHardwareOwnershipRequestHandler _unrequestCameraHandwareOwnership] */

void FUN_10608def8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608df24; end: 10608dfdf; -[SCCameraUIHardwareOwnershipRequestHandler .cxx_destruct] */

void FUN_10608df24(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10608dfe0; end: 10608e02b; -[SCCameraUIServicesEntryPoint end] */

void FUN_10608dfe0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bdd9620();
  puStack_28 = PTR_PTR_1126ef778;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10608e02c; end: 10608e0bb; -[SCCameraUIServicesEntryPoint _cameraUIServicesDidEnd] */

void FUN_10608e02c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x0001005d3348();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d6b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005d34b4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf74b80(uVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10608e0bc; end: 10608e163;  */

void FUN_10608e0bc(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29fb60();
  uVar4 = param_3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29fb60();
  uVar1 = param_2;
  if (uVar3 <= uVar5) {
    uVar1 = param_3;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10608e164; end: 10608e21f; -[SCCameraUIServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10608e164(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e3fc,0);
  _objc_destroyWeak(param_1 + _DAT_11273e3f8);
  _objc_destroyWeak(param_1 + _DAT_11273e3f4);
  _objc_destroyWeak(param_1 + _DAT_11273e3f0);
  _objc_destroyWeak(param_1 + _DAT_11273e3ec);
  _objc_destroyWeak(param_1 + _DAT_11273e3e8);
  _objc_destroyWeak(param_1 + _DAT_11273e3e4);
  _objc_destroyWeak(param_1 + _DAT_11273e3e0);
  _objc_destroyWeak(param_1 + _DAT_11273e3dc);
  _objc_destroyWeak(param_1 + _DAT_11273e3d8);
  _objc_storeStrong(param_1 + _DAT_11273e3d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e3d0,0);
  return;
}



/* Entry: 10608e220; end: 10608e267; -[SCameraUICriticalSectionMonitorImpl dealloc] */

void FUN_10608e220(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf94540(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_1126ef780;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10608e268; end: 10608e4a7; -[SCameraUICriticalSectionMonitorImpl startMonitor] */

void FUN_10608e268(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(long *)(param_1 + 0x30) == 0) {
    func_0x00010bdd33c0();
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar6);
    _objc_initWeak(auStack_68,param_1);
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10608e4a8;
    puStack_78 = &UNK_110872b60;
    _objc_copyWeak(auStack_70,auStack_68);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10608e4f0;
    puStack_a0 = &UNK_11084e590;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_c0,auStack_68);
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 10608e4a8; end: 10608e4ef;  */

void FUN_10608e4a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ce40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608e4f0; end: 10608e623;  */

void FUN_10608e4f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10608e628;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10608e654;
  puStack_88 = &UNK_110849200;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10608e624; end: 10608e627;  */

void FUN_10608e624(void)

{
  return;
}



/* Entry: 10608e628; end: 10608e67f;  */

void FUN_10608e628(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd33c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


