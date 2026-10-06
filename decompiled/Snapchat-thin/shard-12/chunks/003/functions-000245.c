/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10902d360; end: 10902d52f; -[SCUcoLoggerImpl _setSwipeFunnelForEvent:forLensId:shouldCleanupData:] */

void FUN_10902d360(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010c264a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c264aa0();
  _objc_retainAutoreleasedReturnValue();
  if (((lVar1 != 0) && (lVar2 != 0)) &&
     (lVar3 = lVar2, func_0x00010c0720c0(lVar2,param_3,param_5), (int)lVar3 != 0)) {
    lVar3 = lVar1;
    func_0x00010c0d3c80();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR_PTR_1126afec0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar4 == 0) {
      _CACurrentMediaTime();
      func_0x00010c155420(puVar6);
      func_0x00010c0df760(puVar5,param_3,(int)param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar3,param_3,puVar5,&PTR____CFConstantStringClassReference_110e45558);
      _objc_release(puVar5);
    }
    lStack_68 = 0;
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,lVar3,0,&lStack_68);
    _objc_retainAutoreleasedReturnValue();
    if ((lStack_68 == 0) && (puVar5 != (undefined *)0x0)) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      if ((puVar6 != (undefined *)0x0) &&
         (func_0x00010c1bcd40(param_4,param_3,puVar6), param_6 != 0)) {
        func_0x00010c210620(param_2,param_3,0);
        func_0x00010c210640(param_2,param_3,0);
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10902d530; end: 10902d8af; -[SCUcoLoggerImpl updateLensConfigBuilder:forLensId:] */

void FUN_10902d530(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_10902d8b0;
    uStack_50 = 0x10902d8c0;
    uStack_48 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0952e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
    _objc_release(uVar7);
    _objc_release(uVar1);
    lVar2 = puStack_68[5];
    if (lVar2 != 0) {
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c11fae0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      _objc_release(lVar2);
      if (lVar3 != 0) {
        uVar1 = puStack_68[5];
        func_0x00010c2813a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        func_0x00010c11fae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b6760(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar1);
      }
      lVar3 = puStack_68[5];
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c11fa40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar3);
      if (lVar6 != 0) {
        uVar1 = puStack_68[5];
        func_0x00010c2813a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        func_0x00010c11fa40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b6740(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar1);
      }
      lVar3 = puStack_68[5];
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar3);
      if (lVar6 != 0) {
        uVar4 = puStack_68[5];
        func_0x00010c2813a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010bef2c20();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar7;
        func_0x00010b70473c();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(uVar7);
        _objc_release(uVar4);
        func_0x00010c2a7840(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar5);
      }
      lVar6 = puStack_68[5];
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      if (lVar2 != 0) {
        uVar7 = puStack_68[5];
        func_0x00010c0d53e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b2aa0(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
    }
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10902d8b0; end: 10902d8c7;  */

void FUN_10902d8b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10902d8c8; end: 10902d8ff;  */

void FUN_10902d8c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10902d900; end: 10902d9b3; -[SCUcoLoggerImpl _updateLensPlusParameters:lens:] */

void FUN_10902d900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0765e0();
  func_0x00010c1b22e0(param_3,param_2,uVar1);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  uVar2 = uVar3;
  func_0x00010c094e00(uVar3,param_2,param_4,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1bc180(param_3,param_2,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10902d9b4; end: 10902da1b; -[SCUcoLoggerImpl _postCaptureLensTypeFromCarouselGroup:] */

undefined8 FUN_10902d9b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e77078);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e77098);
    uVar2 = 0xffffffffffffffff;
    if ((int)uVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10902da1c; end: 10902da7f; -[SCUcoLoggerImpl _cameraSourceFromUcoLoggingParameters:] */

long FUN_10902da1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c116000();
  if ((lVar1 - 2U < 0xc) && ((0xc0fU >> (ulong)((uint)(lVar1 - 2U) & 0x1f) & 1) != 0)) {
    lVar1 = 2;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfae540(param_3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10902da80; end: 10902da8b; -[SCUcoLoggerImpl lensReadyTracker] */

void FUN_10902da80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 10902da8c; end: 10902da93; -[SCUcoLoggerImpl setLensReadyTracker:] */

void FUN_10902da8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10902da94; end: 10902da9f; -[SCUcoLoggerImpl fpsTracker] */

void FUN_10902da94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 10902daa0; end: 10902daa7; -[SCUcoLoggerImpl setFpsTracker:] */

void FUN_10902daa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10902daa8; end: 10902dab3; -[SCUcoLoggerImpl swipeFunnel] */

void FUN_10902daa8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 10902dab4; end: 10902dabb; -[SCUcoLoggerImpl setSwipeFunnel:] */

void FUN_10902dab4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10902dabc; end: 10902dac7; -[SCUcoLoggerImpl swipeFunnelId] */

void FUN_10902dabc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 10902dac8; end: 10902dacf; -[SCUcoLoggerImpl setSwipeFunnelId:] */

void FUN_10902dac8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10902dad0; end: 10902db53; -[SCUcoLoggerImpl .cxx_destruct] */

void FUN_10902dad0(long param_1)

{
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



/* Entry: 10902db54; end: 10902dd6f;  */

void FUN_10902db54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_opt_self();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf29280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf07540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126b3898;
  uVar2 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf32760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bebdd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf32720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c2813a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebdea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a7e0();
  func_0x00010c07eda0();
  _objc_release(param_2);
  func_0x00010c27e700(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10902dd70; end: 10902de07; +[SCUcoEffectMapper _sojuCarouselGroupFromCarouselGroup:] */

void FUN_10902dd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3890;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf32a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0191e0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902de08; end: 10902de9f; +[SCUcoEffectMapper _carouselGroupFromSojuCarouselGroup:] */

void FUN_10902de08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb808;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf32a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0191e0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902dea0; end: 10902decf; +[SCUcoEffectMapper _unlockableTrackInfoFromSojuUnlockableTrackInfo:] */

void FUN_10902dea0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c2813c0(PTR_PTR_1126b38a0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902ded0; end: 10902deff; +[SCUcoEffectMapper _sojuUnlockableTrackInfoFromUnlockableTrackInfo:] */

void FUN_10902ded0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c2467a0(PTR_PTR_1126b38a0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902df00; end: 10902dffb; -[SCLensBasedUcoViewModelGenerator initWithUcoLensMetadataRepository:lensIconRepository:ucoCarouselConfigProvider:ucoStudySettingsProvider:] */

undefined1 *
FUN_10902df00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fff10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902dffc; end: 10902e147; -[SCLensBasedUcoViewModelGenerator ucoViewModelWithFilterId:filterCarouselGroupName:disableLoadingIndicator:completion:] */

void FUN_10902dffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0952e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_5;
  _objc_retain(param_6);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10902e148; end: 10902e19f;  */

void FUN_10902e148(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0be0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10902e1a0; end: 10902e35b; -[SCLensBasedUcoViewModelGenerator _ucoViewModelWithLens:filterCarouselGroupName:disableLoadingIndicator:completion:] */

void FUN_10902e1a0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    goto joined_r0x00010902e354;
  }
  func_0x00010bf0e9a0(*(undefined8 *)(param_2 + 0x20));
  uVar2 = param_4;
  uVar4 = param_1;
  func_0x00010c07f200();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bfed720();
    if (iVar1 != 0) goto LAB_10902e218;
  }
  else {
LAB_10902e218:
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3c0();
    _objc_release(puVar3);
    param_1 = uVar4;
  }
  func_0x00010c07f200();
  func_0x00010bfeda20();
  func_0x00010be41780();
  puVar3 = PTR_PTR_1126dcfe0;
  _objc_alloc(PTR_PTR_1126dcfe0);
  func_0x00010c09d000(*(undefined8 *)(param_2 + 0x18));
  func_0x00010bf63520(*(undefined8 *)(param_2 + 0x18));
  func_0x00010c07f200(param_4);
  func_0x00010bdf64e0();
  func_0x00010c0226e0(param_1,puVar3);
joined_r0x00010902e354:
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10902e35c; end: 10902e363; -[SCLensBasedUcoViewModelGenerator _isLensPlusExclusiveForLens:] */

void FUN_10902e35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isSnapchatPlusExclusive_1125fd578);
  return;
}



/* Entry: 10902e364; end: 10902e38b; -[SCLensBasedUcoViewModelGenerator _ctaTypeForLens:isLensPlusExclusive:] */

ulong FUN_10902e364(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return 1;
  }
  func_0x00010c074540(param_3);
  return param_3 & 0xffffffff;
}



/* Entry: 10902e38c; end: 10902e3d3; -[SCLensBasedUcoViewModelGenerator .cxx_destruct] */

void FUN_10902e38c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902e3d4; end: 10902e447; -[SCLensMetadataRepositoryToLensByIdRetrievableAdaptor initWithLensMetadataRepository:] */

undefined1 * FUN_10902e3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fff18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902e448; end: 10902e5b7; -[SCLensMetadataRepositoryToLensByIdRetrievableAdaptor lensForId:] */

void FUN_10902e448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10902e5b8;
  uStack_40 = 0x10902e5c8;
  uStack_38 = 0;
  uVar1 = 0;
  _dispatch_semaphore_create();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0952e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c297260(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = 0;
  _dispatch_time(0,9000000000);
  _dispatch_semaphore_wait(uVar1,uVar3);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10902e5b8; end: 10902e5cf;  */

void FUN_10902e5b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10902e5d0; end: 10902e62b;  */

void FUN_10902e5d0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10902e62c; end: 10902e637; -[SCLensMetadataRepositoryToLensByIdRetrievableAdaptor .cxx_destruct] */

void FUN_10902e62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902e638; end: 10902e90b; +[SCAlertViewCoordinator uco_presentSaveAsCopyAlertWithCompletion:] */

void FUN_10902e638(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af180;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e85c38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c38,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x00010c160fc0(puVar2);
    puVar3 = PTR_PTR_1126af180;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9ffd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9ffd8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x00010c160fc0(puVar3);
    puVar4 = PTR_PTR_1126af180;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcc5f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x00010c160fc0(puVar4);
    puVar5 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e85c78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c78,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar5);
    _objc_release(puVar6);
    _objc_release(ppuVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010902e918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 10902e90c; end: 10902e93b;  */

void FUN_10902e90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010902e918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10902e93c; end: 10902e96f;  */

void FUN_10902e93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10902e970; end: 10902ea2f; -[SCUcoLensDataFetchingStrategy initWithPriority:defaultFetchPolicy:strategyType:redownloadLogger:lensDownloadTracker:] */

undefined1 *
FUN_10902e970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fff20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10902ea30; end: 10902ea43; -[SCUcoLensDataFetchingStrategy orderingComparator] */

undefined ** FUN_10902ea30(void)

{
  return &PTR___NSConcreteGlobalBlock_110ad58b0;
}



/* Entry: 10902ea44; end: 10902ed5f; -[SCUcoLensDataFetchingStrategy lensRequestSettingsWithOperation:] */

void FUN_10902ea44(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  ppuVar8 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar8;
  func_0x00010b7295ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  ppuVar8 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar8;
  func_0x00010b729834();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  puVar6 = PTR_PTR_1126dcfe8;
  ppuVar8 = (undefined **)0x0;
  lVar1 = *(long *)(param_1 + 0x18);
  ppuVar5 = ppuVar2;
  ppuVar7 = ppuVar3;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110f600f8;
      _objc_retain(&PTR____CFConstantStringClassReference_110f600f8);
    }
    else if (lVar1 == 1) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110f60118;
      _objc_retain(&PTR____CFConstantStringClassReference_110f60118);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_3;
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c2a2360();
      _objc_release(ppuVar2);
      _objc_release(uVar4);
      if ((int)uVar9 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        ppuVar2 = param_3;
        func_0x00010c08fb40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad920(uVar9);
        _objc_release(ppuVar2);
      }
    }
  }
  else if (lVar1 == 2) {
    ppuVar8 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010b729684();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar8);
    ppuVar8 = &PTR_PTR_110ccc1c8;
LAB_10902ec14:
    ppuVar8 = (undefined **)*ppuVar8;
    _objc_retain(ppuVar8);
  }
  else if (lVar1 == 3) {
    _objc_retain(param_3);
    _objc_opt_class(puVar6);
    ppuVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    ppuVar8 = param_3;
    if (((ulong)ppuVar5 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain(ppuVar8);
    _objc_release(param_3);
    if (ppuVar8 == (undefined **)0x0) {
      puVar6 = (undefined *)0x0;
      goto LAB_10902ed20;
    }
    ppuVar8 = param_3;
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010b729798();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar8);
    ppuVar7 = &PTR____CFConstantStringClassReference_110f603b8;
    _objc_retain(&PTR____CFConstantStringClassReference_110f603b8);
    _objc_release(ppuVar3);
    ppuVar8 = &PTR____CFConstantStringClassReference_110f60378;
    _objc_retain(&PTR____CFConstantStringClassReference_110f60378);
    _objc_release(param_3);
  }
  else if (lVar1 == 4) {
    ppuVar8 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010b72972c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar8);
    ppuVar8 = &PTR_PTR_110ccc200;
    goto LAB_10902ec14;
  }
  puVar6 = PTR_PTR_1126bbb50;
  _objc_alloc(PTR_PTR_1126bbb50);
  func_0x00010c03a140();
  _objc_release(ppuVar8);
  ppuVar3 = ppuVar7;
  ppuVar2 = ppuVar5;
LAB_10902ed20:
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10902ed60; end: 10902ed8f; -[SCUcoLensDataFetchingStrategy .cxx_destruct] */

void FUN_10902ed60(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10902ed90; end: 10902ee33; -[SCUcoLensDataFetchingStrategyFactory initWithLensDownloadTracker:redownloadLogger:] */

undefined1 *
FUN_10902ed90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fff28;
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



/* Entry: 10902ee34; end: 10902ee67; -[SCUcoLensDataFetchingStrategyFactory warmupStrategy] */

void FUN_10902ee34(void)

{
  _objc_alloc(PTR_PTR_1126dcff0);
  func_0x00010c03a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902ee68; end: 10902eedb; -[SCUcoLensDataFetchingStrategyFactory lensContentStrategy] */

void FUN_10902ee68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dcff0;
  _objc_alloc(PTR_PTR_1126dcff0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a120(puVar1,param_2,3,0,1,uVar2,*(undefined8 *)(param_1 + 8));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902eedc; end: 10902ef0f; -[SCUcoLensDataFetchingStrategyFactory lensIconStrategy] */

void FUN_10902eedc(void)

{
  _objc_alloc(PTR_PTR_1126dcff0);
  func_0x00010c03a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902ef10; end: 10902ef43; -[SCUcoLensDataFetchingStrategyFactory lensAssetStrategy] */

void FUN_10902ef10(void)

{
  _objc_alloc(PTR_PTR_1126dcff0);
  func_0x00010c03a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902ef44; end: 10902ef77; -[SCUcoLensDataFetchingStrategyFactory externalDataDownloadingStrategy] */

void FUN_10902ef44(void)

{
  _objc_alloc(PTR_PTR_1126dcff0);
  func_0x00010c03a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902ef78; end: 10902efa7; -[SCUcoLensDataFetchingStrategyFactory .cxx_destruct] */

void FUN_10902ef78(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902efa8; end: 10902f0a7; -[SCLensUcoInfoViewModel initWithLens:attributionFadeOutDelay:lensIconRepository:loadingIndicatorEnabled:darkOverlayEnabled:arrowIconVisible:infoCardAction:ctaType:isLensPlusExclusive:shouldShowInfoCard:] */

undefined1 *
FUN_10902efa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126fff30;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined1 *)((long)puVar1 + 0x19) = param_6;
    *(undefined1 *)((long)puVar1 + 0x18) = param_7;
    *(undefined1 *)((long)puVar1 + 0x1a) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    *(undefined1 *)((long)puVar1 + 0x1b) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_11._1_1_;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10902f0a8; end: 10902f0af; -[SCLensUcoInfoViewModel isGenerativeAi] */

void FUN_10902f0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isGenerativeAiLens_1125fab60);
  return;
}



/* Entry: 10902f0b0; end: 10902f14b; -[SCLensUcoInfoViewModel iconImageFuture] */

void FUN_10902f0b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010be4af00(param_1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c094380(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0943c0(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10902f14c; end: 10902f153; -[SCLensUcoInfoViewModel placeholderIconImage] */

void FUN_10902f14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_lensIconPlaceholder_112602b28);
  return;
}



/* Entry: 10902f154; end: 10902f1df; -[SCLensUcoInfoViewModel name] */

void FUN_10902f154(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  if (lVar3 == 0) {
    func_0x00010c07f200();
    if (iVar1 != 0) {
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e44778,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10902f1e0; end: 10902f2bb; -[SCLensUcoInfoViewModel creatorString] */

void FUN_10902f1e0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c07f200();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06ecc0();
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010bf43020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf0ea80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c08fa60();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar3 == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        FUN_10902f4f0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar5,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
      }
      _objc_release(lVar4);
      goto LAB_10902f2a4;
    }
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_10902f2a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10902f2bc; end: 10902f2c3; -[SCLensUcoInfoViewModel filterId] */

void FUN_10902f2bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10902f2c4; end: 10902f343; -[SCLensUcoInfoViewModel loggingInfo] */

void FUN_10902f2c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dcff8;
  _objc_alloc(PTR_PTR_1126dcff8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2813a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cca0(puVar1,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902f344; end: 10902f47f; -[SCLensUcoInfoViewModel _lensIconKeyFromLens:] */

void FUN_10902f344(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b5928;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf3ec40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c079580(param_3);
  lVar6 = param_3;
  func_0x00010c083200(param_3);
  lVar7 = param_3;
  func_0x00010c06b200(param_3);
  lVar8 = param_3;
  func_0x00010c27dd80();
  func_0x00010c070fa0();
  func_0x00010c081dc0();
  _objc_release(param_3);
  func_0x00010c024560(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8 == 1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902f480; end: 10902f487; -[SCLensUcoInfoViewModel attributionFadeOutDelay] */

undefined8 FUN_10902f480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10902f488; end: 10902f48f; -[SCLensUcoInfoViewModel darkOverlayEnabled] */

undefined1 FUN_10902f488(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10902f490; end: 10902f497; -[SCLensUcoInfoViewModel loadingIndicatorEnabled] */

undefined1 FUN_10902f490(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10902f498; end: 10902f49f; -[SCLensUcoInfoViewModel arrowIconVisible] */

undefined1 FUN_10902f498(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 10902f4a0; end: 10902f4a7; -[SCLensUcoInfoViewModel infoCardAction] */

undefined8 FUN_10902f4a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10902f4a8; end: 10902f4af; -[SCLensUcoInfoViewModel ctaType] */

undefined8 FUN_10902f4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10902f4b0; end: 10902f4b7; -[SCLensUcoInfoViewModel isLensPlusExclusive] */

undefined1 FUN_10902f4b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 10902f4b8; end: 10902f4bf; -[SCLensUcoInfoViewModel shouldShowInfoCard] */

undefined1 FUN_10902f4b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 10902f4c0; end: 10902f4ef; -[SCLensUcoInfoViewModel .cxx_destruct] */

void FUN_10902f4c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902f4f0; end: 10902f507;  */

void FUN_10902f4f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1c3f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f1c3f8,
                      &PTR____CFConstantStringClassReference_110f1c418,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10902f508; end: 10902f6cf; -[SCUcoLoggingParameters initWithCoder:] */

undefined1 * FUN_10902f508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fff38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10902f6d0; end: 10902f867; -[SCUcoLoggingParameters initWithSnapSessionId:mediaType:snapSource:snapCreateTime:swipeDirection:tapCount:filterSwipeCameraType:filterScore:carouselGroupName:productMediaType:isFromPostCaptureLensExplorer:isSpinning:arBarTabCategoryId:] */

undefined8 *
FUN_10902f6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126fff38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_12;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 9) = param_13._1_1_;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10902f868; end: 10902f88b; -[SCUcoLoggingParameters copyWithZone:] */

undefined8 FUN_10902f868(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10902f88c; end: 10902f9c7; -[SCUcoLoggingParameters encodeWithCoder:] */

void FUN_10902f88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f1c438);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f1c458);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f1c478);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f1c498);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f1c4b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f1c4d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f1c4f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f1c518);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f1c538);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f1c558);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f1c578);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110ef1718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10902f9c8; end: 10902fa9b; -[SCUcoLoggingParameters hash] */

undefined8 * FUN_10902f9c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x58);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10902fbe4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10902fbf0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
          ((*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))))))) &&
        (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x48);
          if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x50);
            if ((lVar5 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x60);
              if (puVar6 != *(undefined1 **)(param_3 + 0x60)) {
                func_0x00010c071ae0();
                goto LAB_10902fbf0;
              }
              goto LAB_10902fbe4;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10902fbf0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10902fa9c; end: 10902fc0b; -[SCUcoLoggingParameters isEqual:] */

long FUN_10902fa9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10902fbe4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10902fbf0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
          ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) &&
        (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x48);
          if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x50);
            if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x60);
              if (lVar3 != *(long *)(param_3 + 0x60)) {
                func_0x00010c071ae0();
                goto LAB_10902fbf0;
              }
              goto LAB_10902fbe4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10902fbf0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10902fc0c; end: 10902fc13; -[SCUcoLoggingParameters snapSessionId] */

undefined8 FUN_10902fc0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10902fc14; end: 10902fc1b; -[SCUcoLoggingParameters mediaType] */

undefined8 FUN_10902fc14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10902fc1c; end: 10902fc23; -[SCUcoLoggingParameters snapSource] */

undefined8 FUN_10902fc1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10902fc24; end: 10902fc2b; -[SCUcoLoggingParameters snapCreateTime] */

undefined8 FUN_10902fc24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10902fc2c; end: 10902fc33; -[SCUcoLoggingParameters swipeDirection] */

undefined8 FUN_10902fc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10902fc34; end: 10902fc3b; -[SCUcoLoggingParameters tapCount] */

undefined8 FUN_10902fc34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10902fc3c; end: 10902fc43; -[SCUcoLoggingParameters filterSwipeCameraType] */

undefined8 FUN_10902fc3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10902fc44; end: 10902fc4b; -[SCUcoLoggingParameters filterScore] */

undefined8 FUN_10902fc44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10902fc4c; end: 10902fc53; -[SCUcoLoggingParameters carouselGroupName] */

undefined8 FUN_10902fc4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10902fc54; end: 10902fc5b; -[SCUcoLoggingParameters productMediaType] */

undefined8 FUN_10902fc54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10902fc5c; end: 10902fc63; -[SCUcoLoggingParameters isFromPostCaptureLensExplorer] */

undefined1 FUN_10902fc5c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10902fc64; end: 10902fc6b; -[SCUcoLoggingParameters isSpinning] */

undefined1 FUN_10902fc64(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10902fc6c; end: 10902fc73; -[SCUcoLoggingParameters arBarTabCategoryId] */

undefined8 FUN_10902fc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10902fc74; end: 10902fcc7; -[SCUcoLoggingParameters .cxx_destruct] */

void FUN_10902fc74(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10902fcc8; end: 10902fd73; -[SCUcoThrottleDataFetcherResultContainer initWithLens:expirationDate:] */

undefined1 *
FUN_10902fcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fff40;
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



/* Entry: 10902fd74; end: 10902fd97; -[SCUcoThrottleDataFetcherResultContainer copyWithZone:] */

undefined8 FUN_10902fd74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10902fd98; end: 10902fe0b; -[SCUcoThrottleDataFetcherResultContainer hash] */

undefined8 * FUN_10902fd98(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10902fe8c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10902fe98;
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
          goto LAB_10902fe98;
        }
        goto LAB_10902fe8c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10902fe98:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10902fe0c; end: 10902feb3; -[SCUcoThrottleDataFetcherResultContainer isEqual:] */

long FUN_10902fe0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10902fe8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10902fe98;
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
          goto LAB_10902fe98;
        }
        goto LAB_10902fe8c;
      }
    }
    lVar3 = 0;
  }
LAB_10902fe98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10902feb4; end: 10902febb; -[SCUcoThrottleDataFetcherResultContainer lens] */

undefined8 FUN_10902feb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10902febc; end: 10902fec3; -[SCUcoThrottleDataFetcherResultContainer expirationDate] */

undefined8 FUN_10902febc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10902fec4; end: 10902fef3; -[SCUcoThrottleDataFetcherResultContainer .cxx_destruct] */

void FUN_10902fec4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10902fef4; end: 10903006f; -[SCUcoStateListenerAnnouncer description] */

void FUN_10902fef4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_109030070(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109030070; end: 1090300cf;  */

void FUN_109030070(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1090300d0; end: 10903037b; -[SCUcoStateListenerAnnouncer addListener:] */

undefined8 FUN_1090300d0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110ad58e0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10903037c(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_1090304bc(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_109030284:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_1090302a4;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10903037c(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10903037c(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_1090304bc(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_109030284;
    }
  }
  uVar9 = 1;
LAB_1090302a4:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10903037c; end: 1090304bb;  */

void FUN_10903037c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_109030888();
LAB_1090304b8:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_1090304b8;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 1090304bc; end: 109030503;  */

void FUN_1090304bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 109030504; end: 109030733; -[SCUcoStateListenerAnnouncer removeListener:] */

void FUN_109030504(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_1090306b8;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10903056c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_1090304bc(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_1090306b8;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10903056c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110ad58e0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10903037c(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_1090304bc(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_1090306b8;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_1090306b8:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109030734; end: 10903083f; -[SCUcoStateListenerAnnouncer ucoStateProvider:didFinishProcessingFrameWithFilterId:] */

void FUN_109030734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_109030070(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c27e960();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


