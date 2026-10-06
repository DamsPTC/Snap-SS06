/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109129830; end: 10912987f; -[SCFrameRateLogger reset] */

void FUN_109129830(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109129880; end: 109129883; -[SCFrameRateLogger logEventAndReetWithEventName:] */

void FUN_109129880(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reset_11262ba18);
  return;
}



/* Entry: 109129884; end: 1091298a7; -[SCFrameRateLogger frameRate] */

double FUN_109129884(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50);
  dVar1 = -1.0;
  if (0.0 < dVar2) {
    dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x20));
    dVar1 = dVar1 / dVar2;
  }
  return dVar1;
}



/* Entry: 1091298a8; end: 1091298bb; -[SCFrameRateLogger totalFrameDropCount] */

long FUN_1091298a8(long param_1)

{
  return (long)(*(double *)(param_1 + 0x18) / *(double *)(param_1 + 0x40));
}



/* Entry: 1091298bc; end: 1091298cf; -[SCFrameRateLogger maxFrameDropCount] */

long FUN_1091298bc(long param_1)

{
  return (long)(*(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x40));
}



/* Entry: 1091298d0; end: 1091298d7; -[SCFrameRateLogger largeFrameDropCount] */

undefined8 FUN_1091298d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091298d8; end: 109129907; -[SCFrameRateLogger _formattedStringForFloat:] */

void FUN_1091298d8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e29578);
  return;
}



/* Entry: 109129908; end: 10912990f; -[SCFrameRateLogger firstFrameTime] */

undefined8 FUN_109129908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109129910; end: 109129917; -[SCFrameRateLogger lastFrameTime] */

undefined8 FUN_109129910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109129918; end: 1091299c3;  */

void FUN_109129918(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_28 [8];
  
  if ((param_2 & 1) == 0) {
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    puVar1 = auStack_28;
    _objc_loadWeakRetained();
    _objc_release();
    if (puVar1 != (undefined1 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf07b60();
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x2) {
        puVar1 = auStack_28;
        _objc_loadWeakRetained(puVar1);
        func_0x00010be95c40();
        _objc_release(puVar1);
      }
    }
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1091299c4; end: 1091299cf; -[SCFrameRateMonitor applicationWillResignActive] */

void FUN_1091299c4(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0f5cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_pauseDisplay_11261b158);
  return;
}



/* Entry: 1091299d0; end: 1091299d3; -[SCFrameRateMonitor applicationDidEnterBackground] */

void FUN_1091299d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pauseDisplayLink_112579cc0);
  return;
}



/* Entry: 1091299d4; end: 109129a17; -[SCFrameRateMonitor dealloc] */

void FUN_1091299d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be3d8a0();
  puStack_28 = PTR_PTR_112700778;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109129a18; end: 109129a1b; -[SCFrameRateMonitor applicationWillEnterForeground] */

void FUN_109129a18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeDisplayLink_1125830b0);
  return;
}



/* Entry: 109129a1c; end: 109129a47; -[SCFrameRateMonitor _invalidateDisplayLink] */

void FUN_109129a1c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109129a48; end: 109129ac7; -[SCFrameRateMonitor _pauseDisplayLink] */

void FUN_109129a48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010c1d9980(*(undefined8 *)(param_1 + 8),param_2,1);
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c0f5ce0(*(undefined8 *)(param_1 + 0x48));
    *(undefined1 *)(param_1 + 0x10) = 0;
    puVar1 = PTR_PTR_1126dd6c0;
    func_0x00010bf73180(PTR_PTR_1126dd6c0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be64c40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 109129ac8; end: 109129c8f; -[SCFrameRateMonitor averageFrameRateInTheLastSecondsWithSeconds:] */

double FUN_109129ac8(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **unaff_x20;
  undefined8 unaff_x21;
  undefined **unaff_x22;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double unaff_d9;
  double dVar8;
  double dVar9;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  double dStack_190;
  double dStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar7 = param_1;
  _CACurrentMediaTime();
  func_0x00010bec9980(dVar7 - param_1,dVar7);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    lVar5 = *plStack_140;
    unaff_x20 = &PTR____CFConstantStringClassReference_110ee3d38;
    unaff_x22 = &PTR____CFConstantStringClassReference_110dd00b8;
    dVar8 = 0.0;
    dVar9 = 0.0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_140 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(undefined8 *)(lStack_148 + lVar6 * 8);
        uVar3 = uVar4;
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        unaff_d9 = dVar7;
        _objc_release(uVar3);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        _objc_release(uVar4);
        dVar9 = dVar9 + (double)(SUB84(dVar7,0) * SUB84(unaff_d9,0));
        dVar7 = (double)SUB84(unaff_d9,0);
        dVar8 = dVar8 + dVar7;
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    unaff_x21 = 0;
  }
  dVar9 = dVar9 / dVar8;
  if (dVar8 <= 0.0) {
    dVar9 = -1.0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return dVar9;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_109129c90;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_109129da0;
  uStack_1a0 = 0x109129db0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dStack_190 = unaff_d9;
  dStack_188 = dVar9;
  ppuStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  ppuStack_170 = unaff_x20;
  lStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar2;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 1.60807493534087e-314;
  func_0x00010c0f8240();
  _objc_release(puVar2);
  uVar3 = puStack_1b8[5];
  func_0x00010bf51e00(uVar3);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(puStack_198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return dVar7;
}



/* Entry: 109129c90; end: 109129d9f; -[SCFrameRateMonitor _syncFrameRatesWithinStartTime:endTime:] */

void FUN_109129c90(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_109129da0;
  uStack_50 = 0x109129db0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = puVar1;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8240();
  _objc_release(puVar1);
  uVar2 = puStack_68[5];
  func_0x00010bf51e00(uVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109129da0; end: 109129db7;  */

void FUN_109129da0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109129db8; end: 109129fdb;  */

void FUN_109129db8(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
  func_0x00010bf00560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(uVar3);
  func_0x00010bfb6f20(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38));
  if (0.0 <= param_1) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38);
    func_0x00010c271c40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar3);
  }
  dVar10 = 0.0;
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      fVar8 = SUB84(dVar10,0);
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      uVar3 = uVar6;
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar9 = fVar8;
      _objc_release(uVar3);
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar6);
      dVar10 = (double)fVar8;
      if ((*(double *)(param_2 + 0x30) <= dVar10) &&
         (dVar10 = (double)fVar9, dVar10 <= *(double *)(param_2 + 0x38))) {
        func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28));
      }
      puVar7 = puVar7 + 1;
    } while (puVar4 != puVar7);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x60,0);
  _objc_storeStrong(puVar2 + 0x58,0);
  _objc_storeStrong(puVar2 + 0x50,0);
  _objc_storeStrong(puVar2 + 0x48,0);
  _objc_storeStrong(puVar2 + 0x40,0);
  _objc_storeStrong(puVar2 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 109129fdc; end: 10912a047; -[SCFrameRateMonitor .cxx_destruct] */

void FUN_109129fdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10912a048; end: 10912a053; -[_FBKVOInfo initWithController:keyPath:options:block:] */

void FUN_10912a048(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c004990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithController_keyPath_optio_1125dec30);
  return;
}



/* Entry: 10912a054; end: 10912a063; -[_FBKVOInfo initWithController:keyPath:options:context:] */

void FUN_10912a054(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c004990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithController_keyPath_optio_1125dec30);
  return;
}



/* Entry: 10912a064; end: 10912a077; -[_FBKVOInfo initWithController:keyPath:] */

void FUN_10912a064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c004990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithController_keyPath_optio_1125dec30,param_3,param_4,0,0,0,0);
  return;
}



/* Entry: 10912a078; end: 10912a0ef; -[_FBKVOInfo isEqual:] */

undefined8 FUN_10912a078(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_1 == param_3) {
      uVar3 = 1;
      goto LAB_10912a0d8;
    }
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0720c0(uVar3);
      goto LAB_10912a0d8;
    }
  }
  uVar3 = 0;
LAB_10912a0d8:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10912a0f0; end: 10912a2b7; -[_FBKVOInfo debugDescription] */

void FUN_10912a0f0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lVar4 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f22778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  uVar6 = *(ulong *)(param_1 + 0x18);
  if (uVar6 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    do {
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      uVar1 = 1 << (ulong)((uint)uVar7 & 0x1f);
      puVar5 = puVar3;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        if (3 < uVar7) goto LAB_10912a1d0;
LAB_10912a1bc:
        puVar5 = (&PTR_PTR_110add5d8)[uVar1 - 1];
      }
      else {
        func_0x00010bf070e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e57298);
        if (uVar7 < 4) goto LAB_10912a1bc;
LAB_10912a1d0:
        puVar5 = (undefined *)0x0;
      }
      uVar6 = uVar6 & (long)(int)~uVar1;
      func_0x00010bf070e0(puVar3,param_2,puVar5);
    } while (uVar6 != 0);
    func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f22798);
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f227b8);
    _objc_release(lVar4);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f227d8);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    _objc_retainBlock();
    func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f227f8);
    _objc_release(lVar4);
  }
  func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10912a2b8; end: 10912a2ef; -[_FBKVOInfo .cxx_destruct] */

void FUN_10912a2b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10912a2f0; end: 10912a337; -[_FBKVOSharedController dealloc] */

void FUN_10912a2f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _pthread_mutex_destroy(param_1 + 0x10);
  puStack_28 = PTR_PTR_112700788;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10912a338; end: 10912a507; -[_FBKVOSharedController debugDescription] */

void FUN_10912a338(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110ee4438);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _pthread_mutex_lock(param_1 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf529e0(uVar3);
  func_0x00010bf0a0e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  puVar6 = auStack_e8;
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_130,puVar6,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010bf660a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,uVar3);
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar6 = auStack_e8;
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,puVar6,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f22818);
  _pthread_mutex_unlock(param_1 + 0x10);
  ppuVar5 = &PTR____CFConstantStringClassReference_110db9a98;
  func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9a98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  _objc_retain(puVar6);
  if (puVar6 != (undefined1 *)0x0) {
    _pthread_mutex_lock(puVar4 + 0x10);
    func_0x00010c12d360(*(undefined8 *)(puVar4 + 8),param_2,puVar6);
    _pthread_mutex_unlock(puVar4 + 0x10);
    if (puVar6[0x38] == '\x01') {
      func_0x00010c12d5a0(ppuVar5,param_2,puVar4,*(undefined8 *)(puVar6 + 0x10),puVar6);
    }
    puVar6[0x38] = 2;
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 10912a508; end: 10912a597; -[_FBKVOSharedController unobserve:info:] */

void FUN_10912a508(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _pthread_mutex_lock(param_1 + 0x10);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_4);
    _pthread_mutex_unlock(param_1 + 0x10);
    if (*(char *)(param_4 + 0x38) == '\x01') {
      func_0x00010c12d5a0(param_3,param_2,param_1,*(undefined8 *)(param_4 + 0x10),param_4);
    }
    *(undefined1 *)(param_4 + 0x38) = 2;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10912a598; end: 10912a793; -[_FBKVOSharedController unobserve:infos:] */

void FUN_10912a598(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [256];
  long lStack_68;
  
  puVar5 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar9 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = param_4;
  func_0x00010bf529e0();
  if (puVar8 != (undefined1 *)0x0) {
    _pthread_mutex_lock(param_1 + 0x10);
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(param_4);
    puVar9 = param_4;
    func_0x00010bf52a60();
    if (puVar9 != (undefined1 *)0x0) {
      lVar6 = *plStack_1a0;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_1a0 != lVar6) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010c12d360(*(undefined8 *)(param_1 + 8));
          puVar8 = puVar8 + 1;
        } while (puVar9 != puVar8);
        puVar9 = param_4;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    _pthread_mutex_unlock(param_1 + 0x10);
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(param_4);
    puVar9 = auStack_168;
    param_5 = (undefined *)0x10;
    puVar8 = param_4;
    func_0x00010bf52a60();
    if (puVar8 != (undefined1 *)0x0) {
      lVar6 = *plStack_1e0;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_1e0 != lVar6) {
            _objc_enumerationMutation(param_4);
          }
          lVar7 = *(long *)(lStack_1e8 + (long)puVar9 * 8);
          if (*(char *)(lVar7 + 0x38) == '\x01') {
            func_0x00010c12d5a0(param_3);
          }
          *(undefined1 *)(lVar7 + 0x38) = 2;
          puVar9 = puVar9 + 1;
        } while (puVar8 != puVar9);
        puVar9 = auStack_168;
        param_5 = (undefined *)0x10;
        puVar8 = param_4;
        puVar5 = &uStack_1f0;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    puVar4 = (undefined1 *)puVar5;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  _pthread_mutex_lock(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 8);
  func_0x00010c0c7760();
  _objc_retainAutoreleasedReturnValue();
  _pthread_mutex_unlock(param_3 + 0x10);
  if (lVar6 != 0) {
    lVar7 = lVar6 + 8;
    _objc_loadWeakRetained();
    if (lVar7 != 0) {
      lVar1 = lVar7;
      func_0x00010c0e1300();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        if (*(long *)(lVar6 + 0x30) == 0) {
          if (*(long *)(lVar6 + 0x20) == 0) {
            func_0x00010c0e11c0(lVar1);
          }
          else {
            func_0x00010c0f8f80(lVar1);
          }
        }
        else {
          _objc_retain(param_5);
          puVar3 = param_5;
          if (puVar4 != (undefined1 *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf72040(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef7f60();
            puVar3 = puVar2;
            func_0x00010bf51e00(puVar2);
            _objc_release(param_5);
            _objc_release(puVar2);
          }
          (**(code **)(*(long *)(lVar6 + 0x30) + 0x10))(*(long *)(lVar6 + 0x30),lVar1,puVar9,puVar3)
          ;
          _objc_release(puVar3);
        }
      }
      _objc_release(lVar1);
    }
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
  _objc_release(param_5);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10912a794; end: 10912a927; -[_FBKVOSharedController observeValueForKeyPath:ofObject:change:context:] */

void FUN_10912a794(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _pthread_mutex_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0c7760();
  _objc_retainAutoreleasedReturnValue();
  _pthread_mutex_unlock(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c0e1300();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        if (*(long *)(lVar1 + 0x30) == 0) {
          if (*(long *)(lVar1 + 0x20) == 0) {
            func_0x00010c0e11c0(lVar3);
          }
          else {
            func_0x00010c0f8f80(lVar3);
          }
        }
        else {
          _objc_retain(param_5);
          puVar5 = param_5;
          if (param_3 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf72040(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef7f60();
            puVar5 = puVar4;
            func_0x00010bf51e00(puVar4);
            _objc_release(param_5);
            _objc_release(puVar4);
          }
          (**(code **)(*(long *)(lVar1 + 0x30) + 0x10))
                    (*(long *)(lVar1 + 0x30),lVar3,param_4,puVar5);
          _objc_release(puVar5);
        }
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10912a928; end: 10912a933; -[_FBKVOSharedController .cxx_destruct] */

void FUN_10912a928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10912a934; end: 10912a97b; +[FBKVOController controllerWithObserver:] */

void FUN_10912a934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c030dc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10912a97c; end: 10912a9c7; -[FBKVOController dealloc] */

void FUN_10912a97c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20();
  _pthread_mutex_destroy(param_1 + 0x10);
  puStack_28 = PTR_PTR_112700790;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10912a9c8; end: 10912ac5b; -[FBKVOController debugDescription] */

void FUN_10912a9c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  func_0x00010bf06ba0(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _pthread_mutex_lock(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010bf070e0(puVar1);
  }
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar7);
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dff20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010bf97e80(uVar4);
      func_0x00010bf06ba0(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  _pthread_mutex_unlock(param_1 + 0x10);
  puVar5 = puVar1;
  func_0x00010bf070e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar5 + 0x20);
  func_0x00010bf660a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10912ac5c; end: 10912ac9b;  */

void FUN_10912ac5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf660a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10912ac9c; end: 10912ad8b; -[FBKVOController _unobserve:info:] */

void FUN_10912ac9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _pthread_mutex_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c7760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar2 != 0) {
    func_0x00010c12d360(lVar1,param_2,lVar2);
    lVar3 = lVar1;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
  }
  _pthread_mutex_unlock(param_1 + 0x10);
  puVar4 = PTR_PTR_1126dd6c8;
  func_0x00010c22b8e0(PTR_PTR_1126dd6c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281aa0();
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10912ad8c; end: 10912ae27; -[FBKVOController _unobserve:] */

void FUN_10912ad8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _pthread_mutex_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _pthread_mutex_unlock(param_1 + 0x10);
  puVar2 = PTR_PTR_1126dd6c8;
  func_0x00010c22b8e0(PTR_PTR_1126dd6c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281ac0();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10912ae28; end: 10912af97; -[FBKVOController _unobserveAll] */

void FUN_10912ae28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long in_x5;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _pthread_mutex_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  _pthread_mutex_unlock(param_1 + 0x10);
  puVar2 = PTR_PTR_1126dd6c8;
  func_0x00010c22b8e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(lVar1);
  puVar7 = auStack_d8;
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        lVar4 = lVar1;
        func_0x00010c0dff20(lVar1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c281ac0(puVar2,param_2,uVar8,lVar4);
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar7 = auStack_d8;
      lVar3 = lVar1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(in_x5);
  if (((puVar6 != (undefined8 *)0x0) && (puVar5 = puVar7, func_0x00010c08fa60(), in_x5 != 0)) &&
     (puVar5 != (undefined1 *)0x0)) {
    puVar2 = PTR_PTR_1126dd6d0;
    _objc_alloc(PTR_PTR_1126dd6d0);
    func_0x00010c004960();
    func_0x00010be65940(lVar1,param_2,puVar6,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(in_x5);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10912af98; end: 10912b04f; -[FBKVOController observe:keyPath:options:block:] */

void FUN_10912af98(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), param_6 != 0)) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126dd6d0;
    _objc_alloc(PTR_PTR_1126dd6d0);
    func_0x00010c004960();
    func_0x00010be65940(param_1,param_2,param_3,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10912b050; end: 10912b1b3; -[FBKVOController observe:keyPaths:options:block:] */

void FUN_10912b050(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar9 = param_4;
  uVar6 = param_5;
  lVar7 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (((param_3 != (undefined1 *)0x0) && (puVar10 = param_4, func_0x00010bf529e0(), param_6 != 0))
     && (puVar10 != (undefined1 *)0x0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    puVar9 = auStack_e8;
    uVar6 = 0x10;
    puVar1 = param_4;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_4);
          }
          lVar7 = param_6;
          func_0x00010c0e0780(param_1,param_2,param_3,*(undefined8 *)(lStack_128 + (long)puVar9 * 8)
                              ,param_5);
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar9 = auStack_e8;
        uVar6 = 0x10;
        puVar1 = param_4;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    puVar1 = (undefined1 *)puVar5;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar10 = puVar9;
  _objc_retain(puVar1);
  _objc_retain(puVar9);
  if (((puVar1 != (undefined1 *)0x0) && (puVar2 = puVar9, func_0x00010bf529e0(), lVar7 != 0)) &&
     (puVar2 != (undefined1 *)0x0)) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar9);
    puVar10 = auStack_218;
    puVar3 = puVar9;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar8 = *plStack_250;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar8) {
            _objc_enumerationMutation(puVar9);
          }
          func_0x00010c0e0760(param_3,param_2,puVar1,*(undefined8 *)(lStack_258 + (long)puVar10 * 8)
                              ,uVar6,lVar7);
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar10 = auStack_218;
        puVar3 = puVar9;
        puVar5 = &uStack_260;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar9);
    puVar3 = (undefined1 *)puVar5;
  }
  _objc_release(puVar9);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  if ((puVar3 != (undefined1 *)0x0) &&
     (puVar9 = puVar10, func_0x00010c08fa60(), puVar9 != (undefined1 *)0x0)) {
    puVar4 = PTR_PTR_1126dd6d0;
    _objc_alloc(PTR_PTR_1126dd6d0);
    func_0x00010c0049a0();
    func_0x00010be65940(puVar1,param_2,puVar3,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10912b1b4; end: 10912b307; -[FBKVOController observe:keyPaths:options:action:] */

void FUN_10912b1b4(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != (undefined1 *)0x0) && (puVar1 = param_4, func_0x00010bf529e0(), param_6 != 0)) &&
     (puVar1 != (undefined1 *)0x0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    puVar6 = auStack_e8;
    puVar2 = param_4;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010c0e0760(param_1,param_2,param_3,*(undefined8 *)(lStack_128 + (long)puVar6 * 8)
                              ,param_5,param_6);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar6 = auStack_e8;
        puVar2 = param_4;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    puVar2 = (undefined1 *)puVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  if ((puVar2 != (undefined1 *)0x0) &&
     (puVar1 = puVar6, func_0x00010c08fa60(), puVar1 != (undefined1 *)0x0)) {
    puVar3 = PTR_PTR_1126dd6d0;
    _objc_alloc(PTR_PTR_1126dd6d0);
    func_0x00010c0049a0();
    func_0x00010be65940(param_3,param_2,puVar2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10912b308; end: 10912b3ab; -[FBKVOController observe:keyPath:options:context:] */

void FUN_10912b308(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126dd6d0;
    _objc_alloc(PTR_PTR_1126dd6d0);
    func_0x00010c0049a0();
    func_0x00010be65940(param_1,param_2,param_3,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10912b3ac; end: 10912b4fb; -[FBKVOController observe:keyPaths:options:context:] */

void FUN_10912b3ac(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != (undefined1 *)0x0) &&
     (puVar1 = param_4, func_0x00010bf529e0(), puVar1 != (undefined1 *)0x0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    puVar6 = auStack_e8;
    puVar2 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar6,0x10);
    if (puVar2 != (undefined1 *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010c0e07a0(param_1,param_2,param_3,*(undefined8 *)(lStack_128 + (long)puVar6 * 8)
                              ,param_5,param_6);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar6 = auStack_e8;
        puVar2 = param_4;
        puVar4 = &uStack_130;
        func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar6,0x10);
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    puVar2 = (undefined1 *)puVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126dd6d0;
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  _objc_alloc(puVar3);
  func_0x00010c004920();
  _objc_release(puVar6);
  func_0x00010bed1a60(param_3,param_2,puVar2,puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10912b4fc; end: 10912b57b; -[FBKVOController unobserve:keyPath:] */

void FUN_10912b4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd6d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c004920();
  _objc_release(param_4);
  func_0x00010bed1a60(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10912b57c; end: 10912b587; -[FBKVOController unobserve:] */

void FUN_10912b57c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unobserve__112592030);
    return;
  }
  return;
}



/* Entry: 10912b588; end: 10912b58b; -[FBKVOController unobserveAll] */

void FUN_10912b588(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed1ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unobserveAll_112592050);
  return;
}



/* Entry: 10912b58c; end: 10912b5a3; -[FBKVOController observer] */

void FUN_10912b58c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10912b5a4; end: 10912b633; -[FBKVOController .cxx_destruct] */

void FUN_10912b5a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10912b634; end: 10912b643;  */

void FUN_10912b634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,PTR_LOOP_1132c2548,param_3,1);
  return;
}



/* Entry: 10912b644; end: 10912b6a7;  */

void FUN_10912b644(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  _objc_getAssociatedObject(param_1,PTR_LOOP_1132c2550);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b44c8;
    _objc_alloc(PTR_PTR_1126b44c8);
    func_0x00010c030ec0();
    func_0x00010c1b6a20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10912b6a8; end: 10912b6b7;  */

void FUN_10912b6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,PTR_LOOP_1132c2550,param_3,1);
  return;
}



/* Entry: 10912b6b8; end: 10912b7af; -[SCLensUserDataProvider initWithLensUserProvider:userInfoServices:userIPInferredLocationServices:] */

undefined1 *
FUN_10912b6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700798;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10912b7b0; end: 10912b81f;  */

void FUN_10912b7b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_opt_new(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c09e2e0(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,
                      &PTR____CFConstantStringClassReference_110e70358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c189b60(puVar1,param_2,&PTR____CFConstantStringClassReference_110e126d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10912b820; end: 10912b953; -[SCLensUserDataProvider getUserCountryCode] */

void FUN_10912b820(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf534e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  puVar2 = puVar3;
  func_0x00010c0720c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f13d78);
  puVar4 = puVar3;
  if ((int)puVar2 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10912b954; end: 10912bcbb; -[SCLensUserDataProvider lensUserData] */

void FUN_10912b954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126d0828;
  _objc_opt_new(PTR_PTR_1126d0828);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c097c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d3fd0;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = *(undefined ***)(param_1 + 0x10);
  func_0x00010c2946e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  puVar8 = puVar4;
  func_0x00010c0e19a0(puVar4,param_2,ppuVar7);
  if ((int)puVar8 != 0) {
    _objc_release(ppuVar7);
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  func_0x00010c21f760(puVar1,param_2,ppuVar7);
  lVar9 = *(long *)(param_1 + 8);
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08fa60();
  _objc_release(lVar10);
  if (lVar11 != 0) {
    puVar8 = PTR_PTR_1126d0830;
    _objc_alloc_init(PTR_PTR_1126d0830);
    lVar10 = lVar9;
    func_0x00010bf1acc0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar8,param_2,lVar10);
    _objc_release(lVar10);
    lVar10 = lVar9;
    func_0x00010bf1c0a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbc60(puVar8,param_2,lVar10);
    _objc_release(lVar10);
    func_0x00010c171180(puVar1,param_2,puVar8);
    _objc_release(puVar8);
  }
  ppuVar12 = *(undefined ***)(param_1 + 0x10);
  func_0x00010bf85f80(ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar12);
  puVar8 = puVar4;
  func_0x00010c0e19a0(puVar4,param_2,ppuVar6);
  if ((int)puVar8 != 0) {
    _objc_release(ppuVar6);
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  func_0x00010c18fca0(puVar1,param_2,ppuVar6);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c150cc0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c276ac0();
  func_0x00010c1f6cc0(puVar1,param_2,uVar14);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar13);
  lVar10 = param_1;
  func_0x00010bfcbd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184bc0(puVar1,param_2,lVar10);
  _objc_release(lVar10);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1a840(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(ppuVar6);
  _objc_release(lVar9);
  _objc_release(ppuVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10912bcbc; end: 10912bd43; -[SCLensUserDataProvider .cxx_destruct] */

void FUN_10912bcbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10912bd44; end: 10912be23; -[SCLensUserDataServiceProvider _makeLensUserDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10912bd44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126dd6e0;
  _objc_alloc(PTR_PTR_1126dd6e0);
  lVar2 = param_1 + _DAT_112781c94;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112781c98;
  _objc_loadWeakRetained(lVar5);
  param_1 = param_1 + _DAT_112781c9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c025ce0(puVar1,param_2,lVar4,lVar5,param_1);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10912be24; end: 10912be73; -[SCLensUserDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10912be24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112781c9c);
  _objc_destroyWeak(param_1 + _DAT_112781c98);
  _objc_destroyWeak(param_1 + _DAT_112781c94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112781ca0);
  return;
}



/* Entry: 10912be74; end: 10912bf17; -[SCLensProcessingURIServiceWeatherDataRequestHandler initWithWeatherServiceProvider:weatherLocalizationProvider:] */

undefined1 *
FUN_10912be74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127007a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10912bf18; end: 10912c003; -[SCLensProcessingURIServiceWeatherDataRequestHandler handleWithRequest:completion:] */

void FUN_10912bf18(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c069c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c135e00();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      func_0x00010be1e600(param_1);
      goto LAB_10912bfd8;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,lVar1);
LAB_10912bfd8:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10912c004; end: 10912c007; -[SCLensProcessingURIServiceWeatherDataRequestHandler reset] */

void FUN_10912c004(void)

{
  return;
}



/* Entry: 10912c008; end: 10912c02f; +[SCLensProcessingURIServiceWeatherDataRequestHandler weatherConditionFromWeatherCondition:] */

undefined ** FUN_10912c008(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_110add6b8)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 10912c030; end: 10912c31b; -[SCLensProcessingURIServiceWeatherDataRequestHandler _getCurrentWeatherConditionWithCompletion:request:] */

void FUN_10912c030(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c069c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf4dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,uVar1);
  }
  else {
    puVar4 = PTR_PTR_1126dd6e8;
    _objc_alloc();
    uVar2 = param_5;
    func_0x00010bf1e9c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_retain(0);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae790;
    if (puVar4 == (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,uVar1);
    }
    else {
      lVar5 = param_2;
      _objc_opt_class(param_2);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcd0e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar5);
      puVar6 = puVar4;
      func_0x00010c08b3e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      puVar8 = puVar4;
      uVar11 = param_1;
      func_0x00010c08b3e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      _CLLocationCoordinate2DMake(param_1,uVar11);
      _objc_release(puVar8);
      _objc_release(puVar6);
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(uVar1);
      _objc_retain(puVar4);
      _objc_retain(param_5);
      _objc_retain(uVar9);
      func_0x00010bfab640(param_1,uVar11,uVar10);
      _objc_release(uVar10);
      _objc_release(param_5);
      _objc_release(puVar4);
      _objc_release(uVar9);
      _objc_release(uVar1);
      _objc_release(param_4);
      _objc_release(uVar9);
      _objc_release(puVar7);
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10912c31c; end: 10912c543;  */

void FUN_10912c31c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((param_2 == 0) && (param_3 != 0)) {
    puVar1 = PTR_PTR_1126dd6f0;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126dd6f8;
    _objc_alloc_init(PTR_PTR_1126dd6f8);
    puVar3 = puVar2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf64de0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189a20(puVar3);
    _objc_release(lVar4);
    _objc_release(puVar3);
    func_0x00010c26ae40(param_3);
    func_0x00010c212b40(puVar2);
    puVar3 = PTR_PTR_1126d0818;
    func_0x00010bf45ce0(param_3);
    func_0x00010c2a2cc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224b80(puVar2);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = puVar2;
    func_0x00010c2a2c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e9a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224ba0(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010c224b40(puVar1);
    puVar3 = puVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c28f280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c059e80(puVar1);
    (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
              (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10912c544; end: 10912ca43; -[SCLensProcessingURIServiceWeatherDataRequestHandler .cxx_destruct] */

void FUN_10912c544(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10912ca44; end: 10912ca6b; +[SCDevice blizzardDeviceClass] */

long FUN_10912ca44(ulong param_1)

{
  _objc_opt_class();
  func_0x00010bf70060();
  if (2 < param_1) {
    param_1 = 3;
  }
  return param_1 + 1;
}



/* Entry: 10912ca6c; end: 10912ca8f; +[SCDevice lsaDeviceClass] */

ulong FUN_10912ca6c(ulong param_1)

{
  _objc_opt_class();
  func_0x00010bf70060();
  if (2 < param_1) {
    param_1 = 3;
  }
  return param_1;
}



/* Entry: 10912ca90; end: 10912cafb; +[SCDevice startupType] */

void FUN_10912ca90(double param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  _CACurrentMediaTime();
  ppuVar1 = param_2;
  func_0x00010c0b5b40();
  if (ppuVar1 < (undefined **)0x4) {
    param_2 = &PTR____CFConstantStringClassReference_110dd8078;
    if (*(double *)(&UNK_10dfb7cc0 + (long)ppuVar1 * 8) <= param_1) {
      param_2 = &PTR____CFConstantStringClassReference_110dd8098;
    }
    _objc_retain(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10912cafc; end: 10912cb07; +[SCDevice defaultFieldOfView] */

undefined4 FUN_10912cafc(void)

{
  return 0x428720e1;
}



/* Entry: 10912cb08; end: 10912cbbf; -[SCLensProcessingURIRequest requestMethod] */

long FUN_10912cb08(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0cc940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lRam0000000113730a90 != -1) {
    func_0x000107c27d9c(0x113730a90,&PTR___NSConcreteGlobalBlock_110add740);
  }
  lVar2 = lRam0000000113730a98;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c067ec0(lVar2);
    lVar3 = (long)(int)lVar3;
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  return lVar3;
}



/* Entry: 10912cbc0; end: 10912cbd7;  */

void FUN_10912cbc0(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000113730a98;
  ppuRam0000000113730a98 = &PTR__OBJC_CLASS___NSConstantDictionary_1111753c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10912cbd8; end: 10912cc97; -[SCLensProcessingURIRequest errorResponseWithErrorCode:description:] */

void FUN_10912cbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b1ce0;
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  func_0x00010c28f280(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f229b8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c059e80(puVar2,param_2,param_1,param_3,ppuVar1,puVar3,0);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10912cc98; end: 10912cca7; -[SCLensProcessingURIRequest invalidRequestResponse] */

void FUN_10912cc98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,400,
             &PTR____CFConstantStringClassReference_110dbeaf8);
  return;
}



/* Entry: 10912cca8; end: 10912ccb7; -[SCLensProcessingURIRequest forbiddenRequestResponse] */

void FUN_10912cca8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,0x193,
             &PTR____CFConstantStringClassReference_110f229d8);
  return;
}



/* Entry: 10912ccb8; end: 10912ccc7; -[SCLensProcessingURIRequest notFoundResponse] */

void FUN_10912ccb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,0x194,
             &PTR____CFConstantStringClassReference_110f229f8);
  return;
}



/* Entry: 10912ccc8; end: 10912ccd7; -[SCLensProcessingURIRequest methodNotAllowedResponse] */

void FUN_10912ccc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,0x195,
             &PTR____CFConstantStringClassReference_110f22a18);
  return;
}



/* Entry: 10912ccd8; end: 10912cce7; -[SCLensProcessingURIRequest notAcceptableResponse] */

void FUN_10912ccd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,0x195,
             &PTR____CFConstantStringClassReference_110f22a38);
  return;
}



/* Entry: 10912cce8; end: 10912ccf7; -[SCLensProcessingURIRequest conflictResponse] */

void FUN_10912cce8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,0x199,
             &PTR____CFConstantStringClassReference_110f22a58);
  return;
}



/* Entry: 10912ccf8; end: 10912cd07; -[SCLensProcessingURIRequest internalServerErrorResponse] */

void FUN_10912ccf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,500,
             &PTR____CFConstantStringClassReference_110f22a78);
  return;
}



/* Entry: 10912cd08; end: 10912cd17; -[SCLensProcessingURIRequest serviceUnavailableResponse] */

void FUN_10912cd08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,500,
             &PTR____CFConstantStringClassReference_110f22a98);
  return;
}



/* Entry: 10912cd18; end: 10912cd27; -[SCLensProcessingURIRequest internalErrorResponse] */

void FUN_10912cd18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf98ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_errorResponseWithErrorCode_descr_1125c3d60,500,
             &PTR____CFConstantStringClassReference_110db9898);
  return;
}



/* Entry: 10912cd28; end: 10912cd8f; +[SCLensWeather descriptor] */

void FUN_10912cd28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730aa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be8060,
                        &PTR____CFConstantStringClassReference_110e33078,
                        &PTR_s_snapchat_lenses_1132c25b8,&PTR_DAT_1132c2610,4,0x20,0x1c);
    puRam0000000113730aa0 = puVar1;
  }
  return;
}



/* Entry: 10912cd90; end: 10912cdf7; +[SCLensCurrentWeatherRequest descriptor] */

void FUN_10912cd90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730aa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be80b0,
                        &PTR____CFConstantStringClassReference_110f22ab8,
                        &PTR_s_snapchat_lenses_1132c25b8,&PTR_DAT_1132c25d0,1,0x10,0x1c);
    puRam0000000113730aa8 = puVar1;
  }
  return;
}



/* Entry: 10912cdf8; end: 10912ce5f; +[SCLensCurrentWeatherRequestResponse descriptor] */

void FUN_10912cdf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730ab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be8100,
                        &PTR____CFConstantStringClassReference_110f22ad8,
                        &PTR_s_snapchat_lenses_1132c25b8,&PTR_DAT_1132c25f0,1,0x10,0x1c);
    puRam0000000113730ab0 = puVar1;
  }
  return;
}



/* Entry: 10912ce60; end: 10912cec7; +[SCLensLatLng descriptor] */

void FUN_10912ce60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730ab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be81a0,
                        &PTR____CFConstantStringClassReference_110e5b098,
                        &PTR_s_snapchat_lenses_1132c2690,&PTR_s_lat_1132c26a8,2,0x18,0x1c);
    puRam0000000113730ab8 = puVar1;
  }
  return;
}



/* Entry: 10912cec8; end: 10912d057; +[SCAudioDependencyFetcher fetchDependenciesForAudio:completion:] */

void FUN_10912cec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126dd700;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c00e2a0();
  puVar3 = PTR_PTR_1126dd708;
  _objc_opt_new();
  func_0x00010c1c73c0();
  uVar4 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10912d058;
  puStack_60 = &UNK_110850738;
  _objc_retain(puVar3);
  puStack_58 = puVar3;
  func_0x00010bfaafe0(puVar2,param_2,uVar4,&puStack_78);
  _objc_release(uVar4);
  puVar5 = puVar2;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10912d064;
  puStack_98 = &UNK_110866910;
  puStack_90 = puVar3;
  puStack_88 = puVar5;
  uStack_80 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar5);
  _objc_retain(puVar3);
  func_0x00010c1a46a0(puVar2,param_2,&puStack_b0);
  _objc_release(uStack_80);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puVar5);
  _objc_release(puStack_58);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10912d058; end: 10912d063;  */

void FUN_10912d058(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAudioData__1126388e8,param_2);
  return;
}



/* Entry: 10912d064; end: 10912d0cb;  */

void FUN_10912d064(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c296bc0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      pcVar4 = *(code **)(lVar2 + 0x10);
      goto LAB_10912d0b4;
    }
  }
  pcVar4 = *(code **)(lVar2 + 0x10);
  uVar3 = 0;
LAB_10912d0b4:
  (*pcVar4)(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10912d0cc; end: 10912d11f; -[SCAudioDownloadedInput validationErrors] */

undefined ** FUN_10912d0cc(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22b18;
  if (lVar2 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10912d120; end: 10912d127; -[SCAudioDownloadedInput audioData] */

undefined8 FUN_10912d120(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10912d128; end: 10912d157; -[SCAudioDownloadedInput setAudioData:] */

void FUN_10912d128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10912d158; end: 10912d15f; -[SCAudioDownloadedInput metadata] */

undefined8 FUN_10912d158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10912d160; end: 10912d18f; -[SCAudioDownloadedInput setMetadata:] */

void FUN_10912d160(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10912d190; end: 10912d1bf; -[SCAudioDownloadedInput .cxx_destruct] */

void FUN_10912d190(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10912d1c0; end: 10912d47f; +[SCArSegmentationDependencyFetcher fetchDependenciesForArSegmentation:completion:] */

void FUN_10912d1c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126dd710;
  _objc_alloc();
  func_0x00010c00e2a0();
  puVar6 = PTR_PTR_1126dd718;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010c234c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f3c0();
  func_0x00010c201420(puVar6,param_2,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c23e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 == 0) {
    _objc_release(puVar6);
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126dd720;
    _objc_opt_new();
    lVar3 = param_3;
    func_0x00010c23e720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0(puVar5,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c23e720(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1313a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10912d480;
    puStack_88 = &UNK_11084d858;
    _objc_retain(puVar5);
    puStack_80 = puVar5;
    func_0x00010bfab080(puVar2,param_2,lVar4,&puStack_a0);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c23e720(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1cc60();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x10912d48c;
    puStack_b0 = &UNK_11084d858;
    puStack_a8 = puVar5;
    _objc_retain(puVar5);
    func_0x00010bfab080(puVar2,param_2,lVar4,&puStack_c8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c2031a0(puVar6,param_2,puVar5);
    _objc_release(puStack_a8);
    _objc_release(puStack_80);
    _objc_release(puVar5);
  }
  puVar5 = puVar2;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_10912d498;
  puStack_e8 = &UNK_110866910;
  puStack_e0 = puVar6;
  puStack_d8 = puVar5;
  uStack_d0 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  func_0x00010c1a46a0(puVar2,param_2,&puStack_100);
  _objc_release(uStack_d0);
  _objc_release(puStack_d8);
  _objc_release(puStack_e0);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10912d480; end: 10912d497;  */

void FUN_10912d480(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ead10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setReplacementSkyImage__112658568,param_2);
  return;
}



/* Entry: 10912d498; end: 10912d4ff;  */

void FUN_10912d498(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c296bc0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      pcVar4 = *(code **)(lVar2 + 0x10);
      goto LAB_10912d4e8;
    }
  }
  pcVar4 = *(code **)(lVar2 + 0x10);
  uVar3 = 0;
LAB_10912d4e8:
  (*pcVar4)(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10912d500; end: 10912d56b; -[SCArSegmentationDownloadedInput validationErrors] */

void FUN_10912d500(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c23e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c23e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c296bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


