/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10621a658; end: 10621a663;  */

void FUN_10621a658(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10621a664; end: 10621a6c7; -[SCViewfinderRenderingPipelineImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10621a664(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743954);
  _objc_destroyWeak(param_1 + _DAT_112743950);
  _objc_storeStrong(param_1 + _DAT_112743948,0);
  _objc_destroyWeak(param_1 + _DAT_11274394c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743940,0);
  return;
}



/* Entry: 10621a6c8; end: 10621a737; -[SCViewfinderDataSourceCoordinatorImpl addDataSource:] */

void FUN_10621a6c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) == 0) {
    func_0x00010c18b5e0(param_3,param_2,param_1);
    _os_unfair_lock_lock(param_1 + 0x18);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10621a738; end: 10621a79b; -[SCViewfinderDataSourceCoordinatorImpl removeDataSource:] */

void FUN_10621a738(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) == 0) {
    func_0x00010c18b5e0(param_3,param_2,0);
    _os_unfair_lock_lock(param_1 + 0x18);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10621a79c; end: 10621a843; -[SCViewfinderDataSourceCoordinatorImpl dataSource:didReceiveAudioSampleBuffer:] */

void FUN_10621a79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bef07a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64420();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10621a844; end: 10621a8cb; -[SCViewfinderDataSourceCoordinatorImpl dataSourceDidStop:] */

void FUN_10621a844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef07a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64540();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10621a8cc; end: 10621a903; -[SCViewfinderDataSourceCoordinatorImpl .cxx_destruct] */

void FUN_10621a8cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621a904; end: 10621a977; -[SCViewfinderPassThroughOverlayView hitTest:withEvent:] */

void FUN_10621a904(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f0858;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10621a978; end: 10621aa37; -[SCViewfinderTouchController initWithGestureView:gestureRecognizerDelegate:] */

undefined1 *
FUN_10621a978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0860;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10621aa38; end: 10621aa3f; -[SCViewfinderTouchController registerTouchProcessor:] */

void FUN_10621aa38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 10621aa40; end: 10621aa47; -[SCViewfinderTouchController unregisterTouchProcessor:] */

void FUN_10621aa40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__112628ef8)
  ;
  return;
}



/* Entry: 10621aa48; end: 10621ab6b; -[SCViewfinderTouchController isTouchProcessingEnabledForSource:] */

undefined8 FUN_10621aa48(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong unaff_x22;
  long lVar11;
  ulong unaff_x23;
  long lVar12;
  long unaff_x24;
  ulong uVar13;
  undefined8 uStack_6a0;
  long lStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined1 auStack_658 [128];
  long lStack_5d8;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 auStack_538 [128];
  long lStack_4b8;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  long lStack_398;
  long lStack_390;
  ulong uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  undefined1 *puStack_368;
  undefined8 **ppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  long lStack_348;
  ulong *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_288;
  long lStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  puVar2 = auStack_d8;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x23 = *puStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x22 = *(ulong *)(lStack_118 + unaff_x24 * 8);
        uVar13 = unaff_x22;
        func_0x00010c0815e0();
        if (((int)uVar13 != 0) &&
           (uVar13 = unaff_x22, func_0x00010c247520(), (uVar13 & param_3) != 0)) {
          uVar9 = 1;
          goto LAB_10621ab28;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (lVar1 != unaff_x24);
      puVar2 = auStack_d8;
      lVar1 = lVar8;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar9 = 0;
LAB_10621ab28:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar9;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_240;
  pcStack_128 = FUN_10621ab6c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uVar10 = *(ulong *)(lVar8 + 8);
  _objc_retain(uVar10);
  uVar13 = uVar10;
  func_0x00010bf52a60();
  if (uVar13 != 0) {
    unaff_x24 = *plStack_230;
    unaff_x22 = uVar13;
    do {
      uVar13 = 0;
      do {
        if (*plStack_230 != unaff_x24) {
          _objc_enumerationMutation(uVar10);
        }
        unaff_x23 = *(ulong *)(lStack_238 + uVar13 * 8);
        uVar3 = unaff_x23;
        puVar6 = puVar5;
        func_0x00010c06c340();
        if (((int)uVar3 != 0) &&
           (uVar3 = unaff_x23, func_0x00010c247520(), (uVar3 & (ulong)puVar2) != 0)) {
          uVar9 = 1;
          goto LAB_10621ac60;
        }
        uVar13 = uVar13 + 1;
      } while (unaff_x22 != uVar13);
      unaff_x22 = uVar10;
      puVar6 = &uStack_240;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  uVar9 = 0;
LAB_10621ac60:
  _objc_release(uVar10);
  puVar2 = (undefined1 *)puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return uVar9;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_350;
  pcStack_248 = FUN_10621acac;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_280 = unaff_x24;
  uStack_278 = unaff_x23;
  uStack_270 = unaff_x22;
  uStack_268 = uVar9;
  uStack_260 = uVar10;
  puStack_258 = (undefined1 *)puVar5;
  ppuStack_250 = &puStack_130;
  _objc_retain(puVar6);
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  puStack_340 = (ulong *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uVar10 = *(ulong *)(puVar2 + 8);
  _objc_retain(uVar10);
  uVar13 = uVar10;
  func_0x00010bf52a60();
  uVar9 = 0;
  if (uVar13 != 0) {
    unaff_x22 = *puStack_340;
    do {
      unaff_x23 = 0;
      do {
        if (*puStack_340 != unaff_x22) {
          _objc_enumerationMutation(uVar10);
        }
        uVar3 = *(ulong *)(lStack_348 + unaff_x23 * 8);
        puVar4 = puVar6;
        func_0x00010c29f240();
        if ((uVar3 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621ad80;
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar13 != unaff_x23);
      uVar13 = uVar10;
      puVar4 = &uStack_350;
      func_0x00010bf52a60();
    } while (uVar13 != 0);
    uVar9 = 0;
  }
LAB_10621ad80:
  _objc_release(uVar10);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return uVar9;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_460;
  pcStack_358 = FUN_10621adc8;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_390 = unaff_x24;
  uStack_388 = unaff_x23;
  uStack_380 = unaff_x22;
  uStack_378 = uVar9;
  uStack_370 = uVar10;
  puStack_368 = (undefined1 *)puVar6;
  ppuStack_360 = &ppuStack_250;
  _objc_retain(puVar4);
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  plStack_450 = (long *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  lVar8 = *(long *)(puVar2 + 8);
  _objc_retain(lVar8);
  puVar2 = auStack_418;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  uVar9 = 0;
  if (lVar1 != 0) {
    lVar11 = *plStack_450;
    do {
      lVar12 = 0;
      do {
        if (*plStack_450 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar13 = *(ulong *)(lStack_458 + lVar12 * 8);
        puVar5 = puVar4;
        func_0x00010c0835c0();
        if ((uVar13 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621ae9c;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar2 = auStack_418;
      lVar1 = lVar8;
      puVar5 = &uStack_460;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar9 = 0;
  }
LAB_10621ae9c:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return uVar9;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_580;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  plStack_570 = (long *)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  lVar8 = *(long *)((long)puVar4 + 8);
  _objc_retain(lVar8);
  puVar7 = auStack_538;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar11 = *plStack_570;
    do {
      lVar12 = 0;
      do {
        if (*plStack_570 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar13 = *(ulong *)(lStack_578 + lVar12 * 8);
        puVar6 = puVar5;
        puVar7 = puVar2;
        func_0x00010c074640();
        if ((uVar13 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621afc8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar7 = auStack_538;
      lVar1 = lVar8;
      puVar6 = &uStack_580;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar9 = 0;
LAB_10621afc8:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return uVar9;
  }
  ___stack_chk_fail();
  lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  lStack_698 = 0;
  uStack_6a0 = 0;
  uStack_688 = 0;
  plStack_690 = (long *)0x0;
  uStack_678 = 0;
  uStack_680 = 0;
  uStack_668 = 0;
  uStack_670 = 0;
  lVar8 = *(long *)((long)puVar5 + 8);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_6a0,auStack_658,0x10);
  if (lVar1 != 0) {
    lVar11 = *plStack_690;
    do {
      lVar12 = 0;
      do {
        if (*plStack_690 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar13 = *(ulong *)(lStack_698 + lVar12 * 8);
        func_0x00010bf1d560(uVar13,param_2,puVar6,puVar7);
        if ((uVar13 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621b0f8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_6a0,auStack_658,0x10);
    } while (lVar1 != 0);
  }
  uVar9 = 0;
LAB_10621b0f8:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
    return uVar9;
  }
  ___stack_chk_fail();
  return *(undefined8 *)((long)puVar6 + 0x10);
}



/* Entry: 10621ab6c; end: 10621acab; -[SCViewfinderTouchController isGestureRecognizer:ofSource:] */

undefined8 FUN_10621ab6c(long param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  ulong unaff_x23;
  long lVar12;
  long unaff_x24;
  long lVar13;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 auStack_538 [128];
  long lStack_4b8;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  long lStack_398;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  long lStack_270;
  ulong uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined1 *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined1 *puStack_138;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  lVar13 = lVar8;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x24 = *plStack_110;
    unaff_x22 = lVar13;
    do {
      lVar13 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x23 = *(ulong *)(lStack_118 + lVar13 * 8);
        uVar3 = unaff_x23;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c06c340();
        if (((int)uVar3 != 0) && (uVar3 = unaff_x23, func_0x00010c247520(), (uVar3 & param_4) != 0))
        {
          uVar10 = 1;
          goto LAB_10621ac60;
        }
        lVar13 = lVar13 + 1;
      } while (unaff_x22 != lVar13);
      unaff_x22 = lVar8;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  uVar10 = 0;
LAB_10621ac60:
  _objc_release(lVar8);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar10;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_230;
  pcStack_128 = FUN_10621acac;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = unaff_x24;
  uStack_158 = unaff_x23;
  lStack_150 = unaff_x22;
  uStack_148 = uVar10;
  lStack_140 = lVar8;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uVar9 = *(ulong *)(puVar1 + 8);
  _objc_retain(uVar9);
  uVar3 = uVar9;
  func_0x00010bf52a60();
  uVar10 = 0;
  if (uVar3 != 0) {
    unaff_x22 = *plStack_220;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_220 != unaff_x22) {
          _objc_enumerationMutation(uVar9);
        }
        uVar2 = *(ulong *)(lStack_228 + unaff_x23 * 8);
        puVar4 = puVar6;
        func_0x00010c29f240();
        if ((uVar2 & 1) != 0) {
          uVar10 = 1;
          goto LAB_10621ad80;
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar3 != unaff_x23);
      uVar3 = uVar9;
      puVar4 = &uStack_230;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
    uVar10 = 0;
  }
LAB_10621ad80:
  _objc_release(uVar9);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar10;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_340;
  pcStack_238 = FUN_10621adc8;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_270 = unaff_x24;
  uStack_268 = unaff_x23;
  lStack_260 = unaff_x22;
  uStack_258 = uVar10;
  uStack_250 = uVar9;
  puStack_248 = (undefined1 *)puVar6;
  ppuStack_240 = &puStack_130;
  _objc_retain(puVar4);
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lVar8 = *(long *)(puVar1 + 8);
  _objc_retain(lVar8);
  puVar1 = auStack_2f8;
  lVar13 = lVar8;
  func_0x00010bf52a60();
  uVar10 = 0;
  if (lVar13 != 0) {
    lVar11 = *plStack_330;
    do {
      lVar12 = 0;
      do {
        if (*plStack_330 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(ulong *)(lStack_338 + lVar12 * 8);
        puVar5 = puVar4;
        func_0x00010c0835c0();
        if ((uVar3 & 1) != 0) {
          uVar10 = 1;
          goto LAB_10621ae9c;
        }
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      puVar1 = auStack_2f8;
      lVar13 = lVar8;
      puVar5 = &uStack_340;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
    uVar10 = 0;
  }
LAB_10621ae9c:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return uVar10;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_460;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  plStack_450 = (long *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  lVar8 = *(long *)((long)puVar4 + 8);
  _objc_retain(lVar8);
  puVar7 = auStack_418;
  lVar13 = lVar8;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar11 = *plStack_450;
    do {
      lVar12 = 0;
      do {
        if (*plStack_450 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(ulong *)(lStack_458 + lVar12 * 8);
        puVar6 = puVar5;
        puVar7 = puVar1;
        func_0x00010c074640();
        if ((uVar3 & 1) != 0) {
          uVar10 = 1;
          goto LAB_10621afc8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      puVar7 = auStack_418;
      lVar13 = lVar8;
      puVar6 = &uStack_460;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  uVar10 = 0;
LAB_10621afc8:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return uVar10;
  }
  ___stack_chk_fail();
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  lStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  plStack_570 = (long *)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  lVar8 = *(long *)((long)puVar5 + 8);
  _objc_retain(lVar8);
  lVar13 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_580,auStack_538,0x10);
  if (lVar13 != 0) {
    lVar11 = *plStack_570;
    do {
      lVar12 = 0;
      do {
        if (*plStack_570 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(ulong *)(lStack_578 + lVar12 * 8);
        func_0x00010bf1d560(uVar3,param_2,puVar6,puVar7);
        if ((uVar3 & 1) != 0) {
          uVar10 = 1;
          goto LAB_10621b0f8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_580,auStack_538,0x10);
    } while (lVar13 != 0);
  }
  uVar10 = 0;
LAB_10621b0f8:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return uVar10;
  }
  ___stack_chk_fail();
  return *(undefined8 *)((long)puVar6 + 0x10);
}



/* Entry: 10621acac; end: 10621adc7; -[SCViewfinderTouchController viewfinderShouldBlockTouchesForGestureRecognizer:] */

undefined8 FUN_10621acac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_418 [128];
  long lStack_398;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  uVar9 = 0;
  if (lVar1 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar11 * 8);
        puVar3 = (undefined8 *)param_3;
        func_0x00010c29f240();
        if ((uVar2 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621ad80;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar8;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar9 = 0;
  }
LAB_10621ad80:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar9;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar8 = *(long *)(param_3 + 8);
  _objc_retain(lVar8);
  puVar6 = auStack_1d8;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  uVar9 = 0;
  if (lVar1 != 0) {
    lVar10 = *plStack_210;
    do {
      lVar11 = 0;
      do {
        if (*plStack_210 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar2 = *(ulong *)(lStack_218 + lVar11 * 8);
        puVar4 = puVar3;
        func_0x00010c0835c0();
        if ((uVar2 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621ae9c;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar6 = auStack_1d8;
      lVar1 = lVar8;
      puVar4 = &uStack_220;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar9 = 0;
  }
LAB_10621ae9c:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return uVar9;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_340;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lVar8 = *(long *)((long)puVar3 + 8);
  _objc_retain(lVar8);
  puVar7 = auStack_2f8;
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_330;
    do {
      lVar11 = 0;
      do {
        if (*plStack_330 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar2 = *(ulong *)(lStack_338 + lVar11 * 8);
        puVar5 = puVar4;
        puVar7 = puVar6;
        func_0x00010c074640();
        if ((uVar2 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621afc8;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar7 = auStack_2f8;
      lVar1 = lVar8;
      puVar5 = &uStack_340;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar9 = 0;
LAB_10621afc8:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return uVar9;
  }
  ___stack_chk_fail();
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  plStack_450 = (long *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  lVar8 = *(long *)((long)puVar4 + 8);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_460,auStack_418,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_450;
    do {
      lVar11 = 0;
      do {
        if (*plStack_450 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar2 = *(ulong *)(lStack_458 + lVar11 * 8);
        func_0x00010bf1d560(uVar2,param_2,puVar5,puVar7);
        if ((uVar2 & 1) != 0) {
          uVar9 = 1;
          goto LAB_10621b0f8;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_460,auStack_418,0x10);
    } while (lVar1 != 0);
  }
  uVar9 = 0;
LAB_10621b0f8:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return uVar9;
  }
  ___stack_chk_fail();
  return *(undefined8 *)((long)puVar5 + 0x10);
}



/* Entry: 10621adc8; end: 10621aee3; -[SCViewfinderTouchController isViewfinderTouchProcessingGestureRecognizer:] */

undefined8 FUN_10621adc8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  puVar5 = auStack_c8;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  uVar8 = 0;
  if (lVar1 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar10 * 8);
        puVar3 = (undefined8 *)param_3;
        func_0x00010c0835c0();
        if ((uVar2 & 1) != 0) {
          uVar8 = 1;
          goto LAB_10621ae9c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar5 = auStack_c8;
      lVar1 = lVar7;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar8 = 0;
  }
LAB_10621ae9c:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar8;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar7 = *(long *)(param_3 + 8);
  _objc_retain(lVar7);
  puVar6 = auStack_1e8;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_220;
    do {
      lVar10 = 0;
      do {
        if (*plStack_220 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(ulong *)(lStack_228 + lVar10 * 8);
        puVar4 = puVar3;
        puVar6 = puVar5;
        func_0x00010c074640();
        if ((uVar2 & 1) != 0) {
          uVar8 = 1;
          goto LAB_10621afc8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar6 = auStack_1e8;
      lVar1 = lVar7;
      puVar4 = &uStack_230;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar8 = 0;
LAB_10621afc8:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return uVar8;
  }
  ___stack_chk_fail();
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lVar7 = *(long *)((long)puVar3 + 8);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_350,auStack_308,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_340;
    do {
      lVar10 = 0;
      do {
        if (*plStack_340 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(ulong *)(lStack_348 + lVar10 * 8);
        func_0x00010bf1d560(uVar2,param_2,puVar4,puVar6);
        if ((uVar2 & 1) != 0) {
          uVar8 = 1;
          goto LAB_10621b0f8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_350,auStack_308,0x10);
    } while (lVar1 != 0);
  }
  uVar8 = 0;
LAB_10621b0f8:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return uVar8;
  }
  ___stack_chk_fail();
  return *(undefined8 *)((long)puVar4 + 0x10);
}



/* Entry: 10621aee4; end: 10621b013; -[SCViewfinderTouchController isGestureRecognizer:ofType:] */

undefined8 FUN_10621aee4(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  puVar4 = auStack_d8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar2 = *(ulong *)(lStack_118 + lVar8 * 8);
        puVar3 = (undefined8 *)param_3;
        puVar4 = param_4;
        func_0x00010c074640();
        if ((uVar2 & 1) != 0) {
          uVar6 = 1;
          goto LAB_10621afc8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar4 = auStack_d8;
      lVar1 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar6 = 0;
LAB_10621afc8:
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar5 = *(long *)(param_3 + 8);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_230;
    do {
      lVar8 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar2 = *(ulong *)(lStack_238 + lVar8 * 8);
        func_0x00010bf1d560(uVar2,param_2,puVar3,puVar4);
        if ((uVar2 & 1) != 0) {
          uVar6 = 1;
          goto LAB_10621b0f8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  uVar6 = 0;
LAB_10621b0f8:
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return uVar6;
  }
  ___stack_chk_fail();
  return *(undefined8 *)((long)puVar3 + 0x10);
}



/* Entry: 10621b014; end: 10621b143; -[SCViewfinderTouchController blockTouchesWithNormalizedTouchPoints:touchTypeMask:] */

undefined8 FUN_10621b014(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(ulong *)(lStack_118 + lVar6 * 8);
        func_0x00010bf1d560(uVar2,param_2,param_3,param_4);
        if ((uVar2 & 1) != 0) {
          uVar4 = 1;
          goto LAB_10621b0f8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar4 = 0;
LAB_10621b0f8:
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(param_3 + 0x10);
}



/* Entry: 10621b144; end: 10621b14b; -[SCViewfinderTouchController gestureView] */

undefined8 FUN_10621b144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10621b14c; end: 10621b17b; -[SCViewfinderTouchController setGestureView:] */

void FUN_10621b14c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10621b17c; end: 10621b193; -[SCViewfinderTouchController gestureRecognizerDelegate] */

void FUN_10621b17c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10621b194; end: 10621b19f; -[SCViewfinderTouchController setGestureRecognizerDelegate:] */

void FUN_10621b194(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10621b1a0; end: 10621b1d7; -[SCViewfinderTouchController .cxx_destruct] */

void FUN_10621b1a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621b1d8; end: 10621b36f; -[SCViewfinderUIHandlerImpl initWithRenderTarget:] */

undefined8 * FUN_10621b1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f0868;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10621b370;
    puStack_88 = &UNK_110858d90;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10621b370; end: 10621b3ef;  */

void FUN_10621b370(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10621b3f0; end: 10621b47b; -[SCViewfinderUIHandlerImpl setBlurEnabled:] */

void FUN_10621b3f0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0x10) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x10) = (char)param_3;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300(uVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10621b47c; end: 10621b73b; -[SCViewfinderUIHandlerImpl addRenderView:moduleType:] */

undefined * FUN_10621b47c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    unaff_x21 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = *(undefined **)(param_1 + 8);
    _objc_release();
    if (unaff_x21 != unaff_x22) {
      unaff_x21 = *(undefined **)(param_1 + 8);
      unaff_x22 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(unaff_x21,param_2,param_3,unaff_x22);
      _objc_release(unaff_x22);
      if (param_4 == (undefined *)0x3) {
        func_0x00010bf20c00(*(undefined8 *)(param_1 + 8));
        func_0x00010c19f0e0(param_3);
      }
      else {
        func_0x00010c219b60(param_3,param_2,0);
        puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar1 = param_3;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 8);
        puStack_90 = puVar1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uStack_98 = uVar4;
        func_0x00010bf493a0(puVar1,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = param_3;
        puStack_a0 = puVar1;
        puStack_88 = puVar1;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = *(undefined8 *)(param_1 + 8);
        puStack_a8 = unaff_x27;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf493a0(unaff_x27,param_2,unaff_x25);
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = param_3;
        puStack_80 = unaff_x27;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        param_4 = unaff_x28;
        func_0x00010bf493a0(unaff_x28,param_2,unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = param_3;
        puStack_78 = param_4;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = *(long *)(param_1 + 8);
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x21;
        func_0x00010bf493a0(unaff_x21,param_2,param_1);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = unaff_x22;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puStack_b0,param_2,unaff_x24);
        _objc_release(unaff_x24);
        _objc_release(unaff_x22);
        _objc_release(param_1);
        _objc_release(unaff_x21);
        _objc_release(param_4);
        _objc_release(unaff_x26);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(unaff_x25);
        _objc_release(puStack_a8);
        _objc_release(puStack_a0);
        _objc_release(uStack_98);
        _objc_release(puStack_90);
      }
    }
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_10621b73c;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126c9010;
    puStack_110 = unaff_x28;
    puStack_108 = unaff_x27;
    uStack_100 = unaff_x26;
    uStack_f8 = unaff_x25;
    puStack_f0 = unaff_x24;
    lStack_e8 = param_1;
    puStack_e0 = unaff_x22;
    puStack_d8 = unaff_x21;
    puStack_d0 = param_4;
    puStack_c8 = param_3;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)(puVar1 + 8),param_2,puVar2);
    puStack_168 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + 8);
    puStack_140 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar4;
    func_0x00010bf493a0(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_150 = puVar3;
    puStack_138 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + 8);
    puStack_158 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uVar4;
    func_0x00010bf493a0(puVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_130 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + 8);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf493a0(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_128 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0(puVar7,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_138,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_168,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(uStack_160);
    _objc_release(puStack_158);
    _objc_release(puStack_150);
    _objc_release(uStack_148);
    _objc_release(puStack_140);
    lVar11 = *(long *)(puVar1 + 8);
    func_0x00010bf21300(lVar11,param_2,puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      pcStack_178 = FUN_10621b9dc;
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_1d0 = puVar3;
      puStack_1c8 = puVar5;
      uStack_1c0 = uVar4;
      puStack_1b8 = puVar10;
      puStack_1b0 = puVar9;
      uStack_1a8 = uVar8;
      puStack_1a0 = puVar7;
      puStack_198 = puVar6;
      puStack_190 = puVar2;
      puStack_188 = puVar1;
      ppuStack_180 = &puStack_c0;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c1a7f60();
      func_0x00010c21e900(puVar12,param_2,0);
      func_0x00010c219b60(puVar12,param_2,0);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar12,param_2,puVar1);
      _objc_release(puVar1);
      puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
      func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
      _objc_alloc();
      func_0x00010c00ee20();
      func_0x00010bf20c00(puVar12);
      func_0x00010c19f0e0(puVar2);
      func_0x00010c16d4a0(puVar2,param_2,0x12);
      func_0x00010befbb60(puVar12,param_2,puVar2);
      func_0x00010befbb60(*(undefined8 *)(lVar11 + 8),param_2,puVar12);
      func_0x00010befbb60(*(undefined8 *)(lVar11 + 8),param_2,puVar12);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar5 = puVar12;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar11 + 8);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf493a0(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar12;
      puStack_1f8 = puVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar11 + 8);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf493a0(puVar7,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar12;
      puStack_1f0 = puVar9;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(lVar11 + 8);
      func_0x00010c2793a0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar10;
      func_0x00010bf493a0(puVar10,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar12;
      puStack_1e8 = puVar14;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(lVar11 + 8);
      func_0x00010c08de00(uVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      func_0x00010bf493a0(puVar15,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1e0 = puVar17;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1f8,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_2,puVar18);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(uVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(puVar5);
      func_0x00010bf21300(*(undefined8 *)(lVar11 + 8),param_2,puVar12);
      _objc_release(puVar2);
      _objc_release();
      puVar2 = puVar12;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
        ___stack_chk_fail();
        return *(undefined **)(puVar3 + 0x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  return puVar1;
}



/* Entry: 10621b73c; end: 10621b9db; -[SCViewfinderUIHandlerImpl _createOverlayView] */

undefined * FUN_10621b73c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9010;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_90 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar3;
  func_0x00010bf493a0(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_a0 = puVar2;
  puStack_88 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar3;
  func_0x00010bf493a0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_80 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf493a0(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b8,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uStack_b0);
  _objc_release(puStack_a8);
  _objc_release(puStack_a0);
  _objc_release(uStack_98);
  _objc_release(puStack_90);
  lVar10 = *(long *)(param_1 + 8);
  func_0x00010bf21300(lVar10,param_2,puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_c8 = FUN_10621b9dc;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_120 = puVar2;
    puStack_118 = puVar4;
    uStack_110 = uVar3;
    puStack_108 = puVar9;
    puStack_100 = puVar8;
    uStack_f8 = uVar7;
    puStack_f0 = puVar6;
    puStack_e8 = puVar5;
    puStack_e0 = puVar1;
    lStack_d8 = param_1;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c1a7f60();
    func_0x00010c21e900(puVar11,param_2,0);
    func_0x00010c219b60(puVar11,param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar11,param_2,puVar1);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    func_0x00010bf20c00(puVar11);
    func_0x00010c19f0e0(puVar4);
    func_0x00010c16d4a0(puVar4,param_2,0x12);
    func_0x00010befbb60(puVar11,param_2,puVar4);
    func_0x00010befbb60(*(undefined8 *)(lVar10 + 8),param_2,puVar11);
    func_0x00010befbb60(*(undefined8 *)(lVar10 + 8),param_2,puVar11);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar10 + 8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0(puVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    puStack_148 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar10 + 8);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0(puVar8,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    puStack_140 = puVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar10 + 8);
    func_0x00010c2793a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0(puVar12,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar11;
    puStack_138 = puVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar10 + 8);
    func_0x00010c08de00(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0(puVar15,param_2,uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_130 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(uVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(puVar5);
    func_0x00010bf21300(*(undefined8 *)(lVar10 + 8),param_2,puVar11);
    _objc_release(puVar4);
    _objc_release();
    puVar1 = puVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      return *(undefined **)(puVar2 + 0x20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10621b9dc; end: 10621bd13; -[SCViewfinderUIHandlerImpl _createBlurEffectView] */

undefined * FUN_10621b9dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1a7f60();
  func_0x00010c21e900(puVar1,param_2,0);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  func_0x00010bf20c00(puVar1);
  func_0x00010c19f0e0(puVar4);
  func_0x00010c16d4a0(puVar4,param_2,0x12);
  func_0x00010befbb60(puVar1,param_2,puVar4);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_88 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_80 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2793a0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_78 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08de00(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  func_0x00010bf21300(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + 0x20);
}



/* Entry: 10621bd14; end: 10621bd1b; -[SCViewfinderUIHandlerImpl overlayView] */

undefined8 FUN_10621bd14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10621bd1c; end: 10621bd57; -[SCViewfinderUIHandlerImpl .cxx_destruct] */

void FUN_10621bd1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621bd58; end: 10621bdf3; -[SCViewfinderDataSourceTokenHandlerImpl removeToken:] */

void FUN_10621bd58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      _os_unfair_lock_unlock(param_1 + 0x20);
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf77700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 10621bdf4; end: 10621bdf7; -[SCViewfinderDataSourceTokenHandlerImpl didInvalidateToken:] */

void FUN_10621bdf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeToken__112629500);
  return;
}



/* Entry: 10621bdf8; end: 10621be2f; -[SCViewfinderDataSourceTokenHandlerImpl .cxx_destruct] */

void FUN_10621bdf8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621be30; end: 10621be5f; -[SCViewfinderDataSourceTokenImpl setIsValid:] */

void FUN_10621be30(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 10621be60; end: 10621be93; -[SCViewfinderDataSourceTokenImpl isValid] */

undefined1 FUN_10621be60(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  _os_unfair_lock_unlock(param_1 + 0x20);
  return uVar1;
}



/* Entry: 10621be94; end: 10621bf4f; -[SCViewfinderDataSourceTokenImpl invalidateWithCompletion:] */

void FUN_10621be94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1b5900(param_1,param_2,0);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf77720();
  _objc_release(lVar1);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10621bf50;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_58);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10621bf50; end: 10621bf5b;  */

void FUN_10621bf50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010621bf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10621bf5c; end: 10621bfcb; -[SCViewfinderDataSourceTokenImpl dealloc] */

void FUN_10621bf5c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c082b20();
  if ((int)lVar1 != 0) {
    func_0x00010c1b5900(param_1);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf77720();
    _objc_release(lVar1);
  }
  puStack_28 = PTR_PTR_1126f0878;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10621bfcc; end: 10621c003; -[SCViewfinderDataSourceTokenImpl .cxx_destruct] */

void FUN_10621bfcc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621c004; end: 10621c00b; -[SCSpotlightSnapModalViewController pageViewName] */

undefined8 FUN_10621c004(void)

{
  return 0;
}



/* Entry: 10621c00c; end: 10621c363; -[SCSpotlightCommentsSnapRepliesActionHandler initWithSpotlightPostingCameraScopeExposer:spotlightPostingCameraScopeServices:myStoriesDataCoordinator:spotlightRepliesMutator:spotlightRepliesFetcher:repliesDelegate:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:safetyReportScopeExposer:snapRepliesInteractionInfo:spotlightRepliesRequestSender:commentsSnapRepliesLogger:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:notificationPool:] */

undefined8 *
FUN_10621c00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126f0880;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[6];
    puVar1[6] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[7];
    puVar1[7] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = 0;
    uVar2 = puVar1[10];
    puVar1[10] = 0;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
  }
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



/* Entry: 10621c364; end: 10621c3a7; -[SCSpotlightCommentsSnapRepliesActionHandler dealloc] */

void FUN_10621c364(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec3460();
  puStack_28 = PTR_PTR_1126f0880;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10621c3a8; end: 10621c497; -[SCSpotlightCommentsSnapRepliesActionHandler launchCameraWithOriginalPostCompositeStoryId:interactionContext:] */

void FUN_10621c3a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bec0b80(param_1);
    func_0x00010be8d540(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23500(uVar2,param_2,param_3,lVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf420e0();
    _objc_release(lVar1);
    func_0x00010c0a36c0(*(undefined8 *)(param_1 + 0x88),param_2,5,0,param_4,0,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c50e0);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10621c498; end: 10621c5f7; -[SCSpotlightCommentsSnapRepliesActionHandler playSnapReply:baseView:itemPos:] */

void FUN_10621c498(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c9020;
    _objc_opt_new();
    func_0x00010c1c8b80();
    uVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42140();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10621c5f8;
    puStack_70 = &UNK_1108475b0;
    uStack_68 = param_1;
    _objc_retain(param_3);
    lStack_60 = param_3;
    puStack_58 = puVar1;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    _objc_retain(puVar1);
    func_0x00010c10eda0(uVar2,param_2,puVar1,0,&puStack_88);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(puStack_58);
    _objc_release(lStack_60);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10621c5f8; end: 10621c60b;  */

void FUN_10621c5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__playSnapReply_presentingViewCon_11257abf8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10621c60c; end: 10621caf7; -[SCSpotlightCommentsSnapRepliesActionHandler showActionMenu:itemPos:] */

void FUN_10621c60c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_initWeak(auStack_70,param_1);
    uVar2 = param_1;
    func_0x00010bdf5fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf60940(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b10a0;
    if ((uVar4 & 1) == 0) {
      func_0x000106262178();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f180(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10621caf8;
      puStack_90 = &UNK_110917678;
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_3);
      lStack_88 = param_3;
      _objc_retain(param_4);
      puVar6 = puVar5;
      uStack_80 = param_4;
      func_0x00010bf1d200(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar2);
      func_0x00010befa120(puVar1);
      _objc_release(puVar6);
      _objc_release(uStack_80);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_78);
    }
    puVar7 = *(undefined1 **)(param_1 + 0x78);
    func_0x00010bf60940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c23fc20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(puVar7);
    puVar5 = PTR_PTR_1126b10a0;
    if ((int)puVar8 != 0) {
      func_0x000106262190();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f180(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10621cc04;
      puStack_c8 = &UNK_110917678;
      _objc_copyWeak(auStack_b0,auStack_70);
      _objc_retain(param_3);
      lStack_c0 = param_3;
      _objc_retain(param_4);
      puVar6 = puVar5;
      uStack_b8 = param_4;
      func_0x00010bf1d200(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar7);
      func_0x00010befa120(puVar1);
      _objc_release(puVar6);
      _objc_release(uStack_b8);
      _objc_release(lStack_c0);
      puVar7 = auStack_b0;
      _objc_destroyWeak(puVar7);
    }
    puVar5 = PTR_PTR_1126b10a0;
    if ((int)uVar4 != 0) {
      func_0x0001062621a8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f180(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_e8,auStack_70);
      _objc_retain(param_3);
      _objc_retain(param_4);
      puVar6 = puVar5;
      func_0x00010bf1d200(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar7);
      func_0x00010befa120(puVar1);
      _objc_release(puVar6);
      _objc_release(param_4);
      _objc_release(param_3);
      puVar7 = auStack_e8;
      _objc_destroyWeak(puVar7);
    }
    puVar5 = PTR_PTR_1126b10a0;
    func_0x000106261bf0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar7);
    puVar5 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    func_0x00010c019f40();
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10af80();
    _objc_release(param_1);
    puVar9 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10621caf8; end: 10621cbcb;  */

void FUN_10621caf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10621cbcc; end: 10621cc03;  */

void FUN_10621cbcc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be903c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10621cc04; end: 10621ccd7;  */

void FUN_10621cc04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10621ccd8; end: 10621cd0f;  */

void FUN_10621ccd8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10621cd10; end: 10621cde3;  */

void FUN_10621cd10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10621cde4; end: 10621ce1b;  */

void FUN_10621cde4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10621ce1c; end: 10621ce27;  */

void FUN_10621ce1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheetWithCompletion_1125be5a8,0)
  ;
  return;
}



/* Entry: 10621ce28; end: 10621cf27; -[SCSpotlightCommentsSnapRepliesActionHandler fetchSnapRepliesWithCompletion:] */

void FUN_10621ce28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e45c38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010be123a0(param_1,param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f2760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5b80();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10621cf28; end: 10621cf43; -[SCSpotlightCommentsSnapRepliesActionHandler scrollSnapRepliesWithGesture:] */

void FUN_10621cf28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_logCommentsSnapReplyAction_onSpo_1126067c0,6,0,3,
             0,param_3);
  return;
}



/* Entry: 10621cf44; end: 10621cfdb; -[SCSpotlightCommentsSnapRepliesActionHandler dismissPlaybackIfNecessary] */

void FUN_10621cf44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10621cfdc; end: 10621d0bf; -[SCSpotlightCommentsSnapRepliesActionHandler _fetchLocalSnapRepliesOnOriginalPostWithCompositeStoryId:] */

void FUN_10621cfdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10621d0c0;
  puStack_60 = &UNK_1108623c8;
  uStack_58 = param_4;
  lStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c11d120(uVar2,param_3,PTR___dispatch_main_q_11034be20,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 10621d0c0; end: 10621d2ef;  */

void FUN_10621d0c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  dVar13 = 0.0;
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar10 = *(long *)(lVar12 * 8);
      lVar3 = lVar10;
      func_0x00010c25b720();
      if (lVar3 == 3) {
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar10;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf42120();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0ed760();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0720c0();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if ((int)lVar6 != 0) {
          lVar4 = lVar3;
          func_0x00010c26f2a0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0();
          _objc_release(lVar4);
          dVar13 = *(double *)(param_1 + 0x30) - dVar13;
          if ((dVar13 <= 60.0) && (0.0 <= dVar13)) {
            uVar7 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010bded2a0(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = *(undefined8 *)(param_1 + 0x28);
            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc8460(uVar11);
            _objc_release(puVar8);
            _objc_release(uVar7);
          }
        }
        _objc_release(lVar3);
        _objc_release(lVar10);
      }
      lVar12 = lVar12 + 1;
    } while (lVar2 != lVar12);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be8d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10621d2f0; end: 10621d2f3; -[SCSpotlightCommentsSnapRepliesActionHandler spotlightPostingCameraDidComplete] */

void FUN_10621d2f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeSpotlightSubmissionScopeI_112580ef0);
  return;
}



/* Entry: 10621d2f4; end: 10621d38b; -[SCSpotlightCommentsSnapRepliesActionHandler didUpdateMyStoriesDataRequest:] */

void FUN_10621d2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10621d38c;
  puStack_20 = &UNK_1109176c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10621d3e4;
  puStack_48 = &UNK_110848678;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0be260(param_3,param_2,0,0,0,0,0,0,0,&puStack_38,&puStack_60,0);
  return;
}



/* Entry: 10621d38c; end: 10621d3e3;  */

void FUN_10621d38c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb50e0();
  if (iVar1 != 0) {
    func_0x00010be2e460(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10621d3e4; end: 10621d417;  */

void FUN_10621d3e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10621d418; end: 10621d45f; -[SCSpotlightCommentsSnapRepliesActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_10621d418(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10621d460; end: 10621d4a7; -[SCSpotlightCommentsSnapRepliesActionHandler didCancelDeleteStorySnap] */

void FUN_10621d460(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10621d4a8; end: 10621d4ab; -[SCSpotlightCommentsSnapRepliesActionHandler didDeleteSnapProStorySnaps:] */

void FUN_10621d4a8(void)

{
  return;
}



/* Entry: 10621d4ac; end: 10621d627; -[SCSpotlightCommentsSnapRepliesActionHandler _deleteSnapWithClientId:serverId:] */

void FUN_10621d4ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b10b8;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bfff000();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar9 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf239c0(lVar9,param_2,puVar4,puVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar2 = lVar9;
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar9);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  lVar9 = lVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar7 = lVar2;
    func_0x00010bf82560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  else {
    _objc_retain(lVar6);
    lVar8 = lVar6;
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10621d628; end: 10621d6f3; -[SCSpotlightCommentsSnapRepliesActionHandler _creatorIdFromSnapReply:] */

void FUN_10621d628(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_3;
    func_0x00010bf82560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    _objc_retain(lVar3);
    lVar5 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10621d6f4; end: 10621d763; -[SCSpotlightCommentsSnapRepliesActionHandler _removeSpotlightSubmissionScopeIfNecessary] */

void FUN_10621d6f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf420c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10621d764; end: 10621d7b3; -[SCSpotlightCommentsSnapRepliesActionHandler _startObservingMyStories] */

void FUN_10621d764(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



/* Entry: 10621d7b4; end: 10621d80f; -[SCSpotlightCommentsSnapRepliesActionHandler _stopObservingMyStories] */

void FUN_10621d7b4(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x48) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10621d810; end: 10621d877; -[SCSpotlightCommentsSnapRepliesActionHandler _shouldProcessPostedSnap:storyType:] */

bool FUN_10621d810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
  if ((int)param_3 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_4;
    func_0x00010c067ec0(param_4);
    bVar1 = (int)uVar2 == 3;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10621d878; end: 10621d8ff; -[SCSpotlightCommentsSnapRepliesActionHandler _handlePostedSnapReply:] */

void FUN_10621d878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_10621d900;
  puStack_38 = &UNK_1109176f8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be14aa0(param_1,param_2,param_3,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10621d900; end: 10621d96b;  */

void FUN_10621d900(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bdc8460(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010bec3460(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10621d96c; end: 10621dab3; -[SCSpotlightCommentsSnapRepliesActionHandler _fetchStorySnapForClientId:completion:] */

void FUN_10621d96c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c11d120(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10621dab4; end: 10621db07;  */

void FUN_10621dab4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10621db08; end: 10621dd13; -[SCSpotlightCommentsSnapRepliesActionHandler _findSnapInStories:clientId:completion:] */

void FUN_10621db08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar11 = *(long *)(lVar10 * 8);
      lVar3 = lVar11;
      func_0x00010c25b720();
      if (lVar3 == 3) {
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar11;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0720c0();
        _objc_release(lVar4);
        if ((int)lVar5 != 0) {
          uVar8 = param_1;
          func_0x00010bded2a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_5 + 0x10))(param_5,puVar6,uVar8);
          _objc_release(puVar6);
          _objc_release(uVar8);
        }
        _objc_release(lVar3);
        _objc_release(lVar11);
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  uVar8 = 0;
  (**(code **)(param_5 + 0x10))(param_5,PTR____NSArray0__struct_11034ab48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126c9028;
  _objc_alloc(PTR_PTR_1126c9028);
  func_0x00010c000ac0();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10621dd14; end: 10621ddd7; -[SCSpotlightCommentsSnapRepliesActionHandler _createDiscoverMetadataFromPlaybackInfo:] */

void FUN_10621dd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e45c38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c9028;
  _objc_alloc(PTR_PTR_1126c9028);
  func_0x00010c000ac0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10621ddd8; end: 10621ded7; -[SCSpotlightCommentsSnapRepliesActionHandler _addSnapReplyWithSnaps:metadata:] */

void FUN_10621ddd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  puVar1 = PTR_PTR_1126c0f98;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04a120();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  puVar12 = puVar3;
  func_0x00010befb920(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = puVar12;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if ((puVar4 != (undefined *)0x0) && (*(long *)(puVar1 + 0x60) != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_10621e2d8;
    uStack_c8 = 0x10621e2e8;
    uStack_c0 = 0;
    uVar5 = *(undefined8 *)(puVar1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfaa660();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = 1.60807493534087e-314;
    _objc_retain(puVar3);
    _objc_retain(puVar4);
    func_0x00010bf97e80(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126b4d30;
    _objc_alloc();
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    dVar15 = dVar15 * 1000.0;
    func_0x00010c04bca0();
    puVar7 = PTR_PTR_1126b4d40;
    _objc_alloc();
    func_0x00010bff7200();
    puVar8 = PTR_PTR_1126b5ff0;
    _objc_alloc(PTR_PTR_1126b5ff0);
    lVar9 = *(long *)(puVar1 + 0x78);
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    if (lVar9 == 0) {
      lVar14 = *(long *)(puVar1 + 0x78);
      func_0x00010c241220(lVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c027960(puVar8);
    if (lVar9 == 0) {
      _objc_release(lVar14);
    }
    _objc_release(lVar9);
    puVar10 = PTR_PTR_1126b4d38;
    uVar5 = *(undefined8 *)(puVar1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c242c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41f60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar11 = PTR_PTR_1126b4d48;
    _objc_alloc(PTR_PTR_1126b4d48);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010bff0a00(dVar15 * 1000.0,puVar11);
    uVar2 = *(undefined8 *)(puVar1 + 0x68);
    func_0x00010bf22a20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(puVar1 + 0x60));
    func_0x00010c0a36c0(*(undefined8 *)(puVar1 + 0x88));
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar13);
  _objc_release(puVar12);
  return;
}



/* Entry: 10621ded8; end: 10621e2d7; -[SCSpotlightCommentsSnapRepliesActionHandler _playSnapReply:presentingViewController:baseView:itemPos:] */

void FUN_10621ded8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar8 = param_3;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_10621e2d8;
    uStack_88 = 0x10621e2e8;
    uStack_80 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bfaa660();
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 1.60807493534087e-314;
    _objc_retain(puVar2);
    _objc_retain(lVar1);
    func_0x00010bf97e80(uVar11);
    _objc_release(uVar11);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b4d30;
    _objc_alloc();
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    dVar12 = dVar12 * 1000.0;
    func_0x00010c04bca0();
    puVar5 = PTR_PTR_1126b4d40;
    _objc_alloc();
    func_0x00010bff7200();
    puVar6 = PTR_PTR_1126b5ff0;
    _objc_alloc(PTR_PTR_1126b5ff0);
    lVar7 = *(long *)(param_1 + 0x78);
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    if (lVar7 == 0) {
      lVar8 = *(long *)(param_1 + 0x78);
      func_0x00010c241220(lVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c027960(puVar6);
    if (lVar7 == 0) {
      _objc_release(lVar8);
    }
    _objc_release(lVar7);
    puVar9 = PTR_PTR_1126b4d38;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010c242c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar3);
    puVar10 = PTR_PTR_1126b4d48;
    _objc_alloc(PTR_PTR_1126b4d48);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010bff0a00(dVar12 * 1000.0,puVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf22a20(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60));
    func_0x00010c0a36c0(*(undefined8 *)(param_1 + 0x88));
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10621e2d8; end: 10621e2ef;  */

void FUN_10621e2d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10621e2f0; end: 10621e40b;  */

void FUN_10621e2f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_2);
  _objc_alloc();
  uVar4 = param_2;
  func_0x00010bf82560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dcc0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  uVar4 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar4;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(puVar1);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar1;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10621e40c; end: 10621e55b; -[SCSpotlightCommentsSnapRepliesActionHandler _reportSnapReply:interactionContext:itemPos:] */

void FUN_10621e40c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126c9030;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdf5fa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047d00(puVar1,param_2,uVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b2e98;
  func_0x00010c24c3a0(PTR_PTR_1126b2e98,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90640(param_1,param_2,puVar6);
  func_0x00010c0a36c0(*(undefined8 *)(param_1 + 0x88),param_2,1,param_3,param_4,param_5,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c50e0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10621e55c; end: 10621e627; -[SCSpotlightCommentsSnapRepliesActionHandler _reportWithReportParams:] */

void FUN_10621e55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  func_0x00010c0587e0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10621e628; end: 10621e89f; -[SCSpotlightCommentsSnapRepliesActionHandler _hideSnapReply:interactionContext:itemPos:] */

void FUN_10621e628(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0a36c0(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bdf5fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf60940(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bfe1ca0(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10621e8a0; end: 10621e98b;  */

void FUN_10621e8a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 == 0) {
    puVar2 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x0001062621c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    puVar5 = puVar3;
    func_0x00010beba140(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uStack_30 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = 1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c12e4a0(uVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126afde0;
  if ((uVar6 & 1) == 0) {
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(puVar3 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10621ea6c;
    puStack_78 = &UNK_110841f80;
    lStack_70 = lVar4;
    puStack_68 = puVar2;
    func_0x000100162d98("APPSTORE",&puStack_90);
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
  return;
}



/* Entry: 10621e98c; end: 10621ea6b; -[SCSpotlightCommentsSnapRepliesActionHandler _showNotificationWithText:success:] */

void FUN_10621e98c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afde0;
  if ((param_4 & 1) == 0) {
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10621ea6c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = lVar2;
    puStack_38 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_60);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10621ea6c; end: 10621ea77;  */

void FUN_10621ea6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_submitNotificationWithPresenter__1126756f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10621ea78; end: 10621ec2f; -[SCSpotlightCommentsSnapRepliesActionHandler _deleteSnapReply:interactionContext:itemPos:] */

void FUN_10621ea78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e4a0(uVar8);
  _objc_release(puVar1);
  _objc_release(uVar8);
  func_0x00010c0a36c0(*(undefined8 *)(param_1 + 0x88));
  _objc_release(param_5);
  uVar8 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bfb1920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa780(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf840d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10621ec30; end: 10621ec33; -[SCSpotlightCommentsSnapRepliesActionHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_10621ec30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf840d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissPlaybackIfNecessary_1125be9d8);
  return;
}



/* Entry: 10621ec34; end: 10621ec37; -[SCSpotlightCommentsSnapRepliesActionHandler playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_10621ec34(void)

{
  return;
}



/* Entry: 10621ec38; end: 10621ec3b; -[SCSpotlightCommentsSnapRepliesActionHandler playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_10621ec38(void)

{
  return;
}



/* Entry: 10621ec3c; end: 10621ec83; -[SCSpotlightCommentsSnapRepliesActionHandler reportDidCompleteWithCancelled:] */

void FUN_10621ec3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10621ec84; end: 10621ec9b; -[SCSpotlightCommentsSnapRepliesActionHandler presentingViewController] */

void FUN_10621ec84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10621ec9c; end: 10621eca7; -[SCSpotlightCommentsSnapRepliesActionHandler setPresentingViewController:] */

void FUN_10621ec9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10621eca8; end: 10621ecbf; -[SCSpotlightCommentsSnapRepliesActionHandler delegate] */

void FUN_10621eca8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10621ecc0; end: 10621eccb; -[SCSpotlightCommentsSnapRepliesActionHandler setDelegate:] */

void FUN_10621ecc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 10621eccc; end: 10621edaf; -[SCSpotlightCommentsSnapRepliesActionHandler .cxx_destruct] */

void FUN_10621eccc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 10621edb0; end: 10621f557; -[SCSpotlightRepliesActionHandler initWithRepliesMutator:isCreatorMode:isCommentAdmin:notificationPool:spotlightRepliesRequestSender:reactionManager:userId:snapCreatorUserId:snapCreatorProfileId:safetyReportScopeExposer:spotlightRepliesViewCountManager:snapID:repliesLogger:repliesFetcher:unifiedPublicProfilesPresenterScopeLauncher:spotlightRepliesSettingPageScopeExposer:spotlightRepliesUpdateAnnouncer:friendProfileScopeExposer:repliesActionConfig:bitmojiSelfieFetcher:chatCameraScopeExposer:chatCameraScopeServices:repliesShareManager:compositeStoryId:communitiesReportStoryCommentService:communityMetadata:circumstanceEngine:storyType:snapchattersSynchronousDataFetcher:quotingCameraPresenter:contentViewSource:contentBlocker:snapchattersDataTracker:commentsSnapRepliesAntionHandler:repliesDelegate:searchScopeExposer:searchScopeServices:commentsAttachmentFetcher:mediaPlaybackSessionId:] */

undefined8 *
FUN_10621edb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  puStack_70 = PTR_PTR_1126f0888;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_31);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[2];
    puVar1[2] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 3) = param_4;
    *(undefined1 *)((long)puVar1 + 0x19) = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    uVar2 = param_21;
    func_0x00010bf91460();
    *(char *)(puVar1 + 0x12) = (char)uVar2;
    uVar2 = param_21;
    func_0x00010bf91a40();
    *(char *)(puVar1 + 0x1a) = (char)uVar2;
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[0x17]);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    uVar2 = param_26;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x19];
    puVar1[0x19] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
    puVar1[0x1e] = param_30;
    _objc_retain(param_10);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_29;
    _objc_release(uVar2);
    uVar2 = param_21;
    func_0x00010bf91480();
    *(char *)(puVar1 + 0x24) = (char)uVar2;
    puVar1[0x25] = param_33;
    _objc_retain(param_34);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_34;
    _objc_release(uVar2);
    lVar4 = param_11;
    func_0x00010c08fa60();
    *(bool *)(puVar1 + 0x27) = lVar4 != 0;
    uVar2 = param_9;
    func_0x00010c0720c0();
    *(char *)((long)puVar1 + 0x139) = (char)uVar2;
    uVar2 = param_35;
    func_0x00010c269d40(param_35);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_36;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[0x28]);
    _objc_storeWeak(puVar1 + 0x29,param_37);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_41;
    _objc_release(uVar2);
  }
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10621f558; end: 10622027b; -[SCSpotlightRepliesActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_10621f558(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

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
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_148;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e98;
  _objc_opt_class(PTR_PTR_1126c0e98);
  puVar16 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar2);
  puVar2 = puVar4;
  if (((ulong)puVar16 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar4);
  puVar16 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar5 = puVar16;
  _objc_opt_isKindOfClass(puVar16,puVar4);
  puVar4 = puVar16;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar16);
  puVar6 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar7 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar5);
  puVar5 = puVar6;
  if (((ulong)puVar7 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar6);
  puVar7 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar8 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar6);
  puVar6 = puVar7;
  if (((ulong)puVar8 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puStack_148 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar8 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar8;
    func_0x00010c067fc0();
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar15 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar7);
  puVar7 = puVar8;
  if (((ulong)puVar15 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010c0e00e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar8);
  puVar15 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c0f98;
  _objc_opt_class(PTR_PTR_1126c0f98);
  puVar9 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar8);
  puVar8 = puVar15;
  if (((ulong)puVar9 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain();
  _objc_release(puVar15);
  puVar15 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar15);
  _objc_initWeak(auStack_70,param_1);
  puVar15 = puVar1;
  func_0x00010c0720c0();
  if ((int)puVar15 == 0) {
    puVar15 = puVar1;
    func_0x00010c0720c0();
    if ((int)puVar15 == 0) {
      puVar15 = puVar1;
      func_0x00010c0720c0();
      if ((int)puVar15 == 0) {
        puVar15 = puVar1;
        func_0x00010c0720c0();
        if ((int)puVar15 == 0) {
          puVar15 = puVar1;
          func_0x00010c0720c0();
          if ((int)puVar15 == 0) {
            puVar15 = puVar1;
            func_0x00010c0720c0();
            if ((int)puVar15 == 0) {
              puVar16 = puVar1;
              func_0x00010c0720c0();
              if ((int)puVar16 == 0) {
                puVar16 = puVar1;
                func_0x00010c0720c0();
                if ((int)puVar16 == 0) {
                  puVar16 = puVar1;
                  func_0x00010c0720c0();
                  if ((int)puVar16 == 0) {
                    puVar16 = puVar1;
                    func_0x00010c0720c0();
                    if ((int)puVar16 == 0) {
                      puVar16 = puVar1;
                      func_0x00010c0720c0();
                      if ((int)puVar16 == 0) {
                        puVar16 = puVar1;
                        func_0x00010c0720c0();
                        if ((int)puVar16 != 0) {
                          func_0x00010be31c40(param_1);
                          lVar14 = param_1;
                          goto LAB_10621fae0;
                        }
                        puVar16 = puVar1;
                        func_0x00010c0720c0();
                        if ((int)puVar16 == 0) {
                          puVar16 = puVar1;
                          func_0x00010c0720c0();
                          if ((int)puVar16 != 0) {
                            func_0x000106261d70();
                            _objc_retainAutoreleasedReturnValue();
                            puVar15 = puVar16;
                            func_0x000106261d88();
                            _objc_retainAutoreleasedReturnValue();
                            puVar9 = puVar15;
                            func_0x000106261b60();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010beb8ae0(param_1);
                            _objc_release(puVar9);
                            _objc_release(puVar15);
                            goto LAB_10621fd2c;
                          }
                          puVar16 = puVar1;
                          func_0x00010c0720c0();
                          if ((int)puVar16 == 0) {
                            puVar16 = puVar1;
                            func_0x00010c0720c0();
                            if ((int)puVar16 == 0) {
                              puVar16 = puVar1;
                              func_0x00010c0720c0();
                              if ((int)puVar16 == 0) {
                                puVar16 = puVar1;
                                func_0x00010c0720c0();
                                if ((int)puVar16 == 0) {
                                  puVar16 = puVar1;
                                  func_0x00010c0720c0();
                                  if ((int)puVar16 == 0) {
                                    puVar16 = puVar1;
                                    func_0x00010c0720c0();
                                    if ((int)puVar16 == 0) {
                                      puVar16 = puVar1;
                                      func_0x00010c0720c0();
                                      if ((int)puVar16 == 0) {
                                        puVar16 = puVar1;
                                        func_0x00010c0720c0();
                                        if ((int)puVar16 == 0) {
                                          puVar16 = puVar1;
                                          func_0x00010c0720c0();
                                          if ((int)puVar16 == 0) {
                                            puVar16 = puVar1;
                                            func_0x00010c0720c0();
                                            if ((int)puVar16 == 0) {
                                              puVar16 = puVar1;
                                              func_0x00010c0720c0();
                                              if ((int)puVar16 == 0) {
                                                puVar16 = puVar1;
                                                func_0x00010c0720c0();
                                                if ((int)puVar16 != 0) {
                                                  _objc_initWeak(&puStack_d8,param_1);
                                                  uVar13 = *(undefined8 *)(param_1 + 0x140);
                                                  _objc_copyWeak(auStack_e0,&puStack_d8);
                                                  func_0x00010bfaa380(uVar13);
                                                  _objc_destroyWeak(auStack_e0);
                                                  ppuVar11 = &puStack_d8;
                                                  goto LAB_10621fad8;
                                                }
                                                puVar16 = puVar1;
                                                func_0x00010c0720c0();
                                                if ((int)puVar16 == 0) {
                                                  puVar16 = puVar1;
                                                  func_0x00010c0720c0();
                                                  if ((int)puVar16 == 0) {
                                                    puVar16 = puVar1;
                                                    func_0x00010c0720c0();
                                                    if ((int)puVar16 == 0) goto LAB_106220118;
                                                    puVar15 = puVar3;
                                                    func_0x00010c0e00e0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                                                    _objc_opt_class(
                                                  PTR__OBJC_CLASS___NSString_1126ae4d0);
                                                  puVar9 = puVar15;
                                                  _objc_opt_isKindOfClass(puVar15,puVar16);
                                                  puVar16 = puVar15;
                                                  if (((ulong)puVar9 & 1) == 0) {
                                                    puVar16 = (undefined *)0x0;
                                                  }
                                                  _objc_retain(puVar16);
                                                  _objc_release(puVar15);
                                                  func_0x00010be483c0(param_1);
                                                  }
                                                  else {
                                                    if (puStack_148 ==
                                                        (undefined *)0xffffffffffffffff) {
                                                      puVar16 = (undefined *)0x0;
                                                    }
                                                    else {
                                                      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570
                                                      ;
                                                      func_0x00010c0df780(
                                                  PTR__OBJC_CLASS___NSNumber_1126ae570);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  }
                                                  func_0x00010c152260(*(undefined8 *)
                                                                       (param_1 + 0x140));
                                                  }
                                                  goto LAB_10621fd2c;
                                                }
                                                func_0x00010be26c80(param_1);
                                              }
                                              else if (puVar8 != (undefined *)0x0) {
                                                puVar15 = puVar3;
                                                func_0x00010c0e00e0();
                                                _objc_retainAutoreleasedReturnValue();
                                                if (puVar15 == (undefined *)0x0) {
                                                  puVar16 = (undefined *)0x0;
                                                }
                                                else {
                                                  puVar9 = puVar3;
                                                  func_0x00010c0e00e0();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                                  _objc_opt_class(
                                                  PTR__OBJC_CLASS___NSNumber_1126ae570);
                                                  puVar12 = puVar9;
                                                  _objc_opt_isKindOfClass(puVar9,puVar16);
                                                  puVar16 = puVar9;
                                                  if (((ulong)puVar12 & 1) == 0) {
                                                    puVar16 = (undefined *)0x0;
                                                  }
                                                  _objc_retain(puVar16);
                                                  _objc_release(puVar9);
                                                }
                                                _objc_release(puVar15);
                                                func_0x00010c2358e0(*(undefined8 *)(param_1 + 0x140)
                                                                   );
                                                goto LAB_10621fd2c;
                                              }
                                            }
                                            else if (puVar8 != (undefined *)0x0) {
                                              puVar16 = puVar3;
                                              func_0x00010c0e00e0();
                                              _objc_retainAutoreleasedReturnValue();
                                              if (puVar16 == (undefined *)0x0) {
                                                puVar15 = (undefined *)0x0;
                                              }
                                              else {
                                                puVar9 = puVar3;
                                                func_0x00010c0e00e0();
                                                _objc_retainAutoreleasedReturnValue();
                                                puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570
                                                               );
                                                puVar12 = puVar9;
                                                _objc_opt_isKindOfClass(puVar9,puVar15);
                                                puVar15 = puVar9;
                                                if (((ulong)puVar12 & 1) == 0) {
                                                  puVar15 = (undefined *)0x0;
                                                }
                                                _objc_retain(puVar15);
                                                _objc_release(puVar9);
                                              }
                                              _objc_release(puVar16);
                                              func_0x00010c0fe800(*(undefined8 *)(param_1 + 0x140));
                                              _objc_release(puVar15);
LAB_106220118:
                                              lVar14 = 0;
                                              goto LAB_10621fae0;
                                            }
                                            goto LAB_10621fadc;
                                          }
                                          puVar15 = puVar3;
                                          func_0x00010c0e00e0();
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar16 = PTR_PTR_1126c9038;
                                          _objc_opt_class(PTR_PTR_1126c9038);
                                          puVar9 = puVar15;
                                          _objc_opt_isKindOfClass(puVar15,puVar16);
                                          puVar16 = puVar15;
                                          if (((ulong)puVar9 & 1) == 0) {
                                            puVar16 = (undefined *)0x0;
                                          }
                                          _objc_retain(puVar16);
                                          _objc_release(puVar15);
                                          func_0x00010be48080(param_1);
                                        }
                                        else {
                                          puVar15 = puVar3;
                                          func_0x00010c0e00e0();
                                          _objc_retainAutoreleasedReturnValue();
                                          puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
                                          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
                                          puVar9 = puVar15;
                                          _objc_opt_isKindOfClass(puVar15,puVar16);
                                          puVar16 = puVar15;
                                          if (((ulong)puVar9 & 1) == 0) {
                                            puVar16 = (undefined *)0x0;
                                          }
                                          _objc_retain(puVar16);
                                          _objc_release(puVar15);
                                          func_0x00010be5af60(param_1);
                                        }
LAB_10621fd2c:
                                        _objc_release(puVar16);
                                      }
                                      else {
                                        func_0x00010be8da40(param_1);
                                      }
                                    }
                                    else {
                                      func_0x00010be12fa0(param_1);
                                    }
                                  }
                                  else {
                                    func_0x00010be0c2a0(param_1);
                                  }
                                }
                                else {
                                  func_0x00010be8f220(param_1);
                                }
                              }
                              else {
                                func_0x00010beb1b20(param_1);
                              }
                            }
                            else {
                              func_0x00010beb1e20(param_1);
                            }
                          }
                          else {
                            puVar16 = puVar2;
                            func_0x00010c131f60();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release();
                            if (puVar16 != (undefined *)0x0) {
                              puVar16 = puVar2;
                              func_0x00010c131f60(puVar2);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010be48880(param_1);
                              _objc_release(puVar16);
                              lVar14 = 1;
                              func_0x00010be55240(param_1);
                              goto LAB_10621fae0;
                            }
                          }
                        }
                        else {
                          func_0x00010be48220(param_1);
                        }
                      }
                      else if (puVar2 != (undefined *)0x0) {
                        func_0x00010be90160(param_1);
                      }
                    }
                    else {
                      puVar15 = puVar3;
                      func_0x00010c0e00e0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      puVar9 = puVar15;
                      _objc_opt_isKindOfClass(puVar15,puVar16);
                      puVar16 = puVar15;
                      if (((ulong)puVar9 & 1) == 0) {
                        puVar16 = (undefined *)0x0;
                      }
                      _objc_retain(puVar16);
                      _objc_release(puVar15);
                      func_0x00010c067ec0(puVar16);
                      _objc_release(puVar16);
                      func_0x00010be139c0(param_1);
                    }
                  }
                  else {
                    func_0x00010beb8480(param_1);
                  }
                }
                else if (puVar2 != (undefined *)0x0) {
                  func_0x00010be860c0(param_1);
                  lVar14 = 1;
                  goto LAB_10621fae0;
                }
              }
              else if (puVar2 != (undefined *)0x0) {
                func_0x00010be767e0(param_1);
              }
            }
            else if (puVar4 != (undefined *)0x0) {
              func_0x000106261cc8();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar15;
              func_0x000106261cf8();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar9;
              func_0x000106261bc0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar12;
              func_0x000106261b18();
              _objc_retainAutoreleasedReturnValue();
              puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_c8 = 0xc2000000;
              uStack_c0 = 0x1062202b0;
              puStack_b8 = &UNK_110841fb0;
              ppuVar11 = &puStack_d0;
              _objc_copyWeak(auStack_a8,auStack_70);
              _objc_retain(puVar16);
              puStack_b0 = puVar4;
              func_0x00010beb8ae0(param_1);
              _objc_release(puVar10);
              _objc_release(puVar12);
              _objc_release(puVar9);
              _objc_release(puVar15);
              puVar16 = puStack_b0;
              goto LAB_10621fad0;
            }
          }
          else if (puVar4 != (undefined *)0x0) {
            func_0x000106261cb0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar15;
            func_0x000106261ce0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar9;
            func_0x000106261ba8();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar12;
            func_0x000106261b18();
            _objc_retainAutoreleasedReturnValue();
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0xc2000000;
            pcStack_90 = FUN_10622027c;
            puStack_88 = &UNK_110841fb0;
            ppuVar11 = &puStack_a0;
            _objc_copyWeak(auStack_78,auStack_70);
            _objc_retain(puVar16);
            puStack_80 = puVar4;
            func_0x00010beb8ae0(param_1);
            _objc_release(puVar10);
            _objc_release(puVar12);
            _objc_release(puVar9);
            _objc_release(puVar15);
            puVar16 = puStack_80;
LAB_10621fad0:
            _objc_release(puVar16);
            ppuVar11 = ppuVar11 + 5;
LAB_10621fad8:
            _objc_destroyWeak(ppuVar11);
          }
        }
        else if (puVar2 != (undefined *)0x0) {
          func_0x00010bdfa560(param_1);
        }
      }
      else if (puVar2 != (undefined *)0x0) {
        func_0x00010be8a260(param_1);
      }
    }
    else if (puVar2 != (undefined *)0x0) {
      func_0x00010bdcefa0(param_1);
    }
  }
  else if (puVar2 != (undefined *)0x0) {
    func_0x00010beb7700(param_1);
  }
LAB_10621fadc:
  lVar14 = 1;
LAB_10621fae0:
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar14;
}



/* Entry: 10622027c; end: 1062202e3;  */

void FUN_10622027c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcef80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


