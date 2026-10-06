/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106680000; end: 106680007; -[PlayGamesLensLoggerAdapter setGamePlayInfo:] */

void FUN_106680000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a1fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setGamePlayInfo__112646208);
  return;
}



/* Entry: 106680008; end: 1066800bf; -[PlayGamesLensLoggerAdapter updateSwipeFunnelForCurrentLens:] */

void FUN_106680008(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_1066800a0;
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar2 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28aa40(uVar4,param_2,param_3,lVar2);
  }
  _objc_release(lVar2);
LAB_1066800a0:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066800c0; end: 10668012f; -[PlayGamesLensLoggerAdapter reset] */

void FUN_1066800c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c2569c0();
  func_0x00010bec0800(param_1);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106680130; end: 10668025f; -[PlayGamesLensLoggerAdapter _startNewSession] */

void FUN_106680130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cc8d0;
  _objc_alloc(PTR_PTR_1126cc8d0);
  func_0x00010bff3f00();
  puVar3 = PTR_PTR_1126cc8d8;
  _objc_alloc(PTR_PTR_1126cc8d8);
  func_0x00010bff0cc0();
  puVar4 = PTR_PTR_1126cc8e0;
  _objc_alloc();
  func_0x00010bff6fe0();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar4;
  _objc_retain();
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126cc8c8;
  func_0x00010c251f40(PTR_PTR_1126cc8c8,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010be07bc0(param_1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106680260; end: 1066802ef; -[PlayGamesLensLoggerAdapter _emitFlowStateTransitionTo:] */

void FUN_106680260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126cc8e8;
  _objc_alloc(PTR_PTR_1126cc8e8);
  func_0x00010bffd6a0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066802f0; end: 106680337; -[PlayGamesLensLoggerAdapter .cxx_destruct] */

void FUN_1066802f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106680338; end: 1066803db; -[SCLensExplorerLoggerProvider initWithLoggerFactory:isLensPickerModeActive:] */

undefined1 *
FUN_106680338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2458;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066803dc; end: 106680567; -[SCLensExplorerLoggerProvider mrcImpressionLoggerWithLoggingConfiguration:] */

void FUN_1066803dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be9cf20(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0f1860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5ab40(param_1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6f940(param_1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c156400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126cc8f0;
  _objc_alloc(PTR_PTR_1126cc8f0);
  func_0x00010c043520();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf568c0(0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106680568; end: 10668056b; -[SCLensExplorerLoggerProvider lensExplorerImpressionLoggerWithLoggingConfiguration:] */

void FUN_106680568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lensExplorerLoggerWithLoggingCo_112570490);
  return;
}



/* Entry: 10668056c; end: 10668056f; -[SCLensExplorerLoggerProvider lensExplorerPageLoggerWithLoggingConfiguration:] */

void FUN_10668056c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lensExplorerLoggerWithLoggingCo_112570490);
  return;
}



/* Entry: 106680570; end: 106680573; -[SCLensExplorerLoggerProvider lensExplorerActionLoggerWithLoggingConfiguration:] */

void FUN_106680570(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lensExplorerLoggerWithLoggingCo_112570490);
  return;
}



/* Entry: 106680574; end: 1066807df; -[SCLensExplorerLoggerProvider _lensExplorerLoggerWithLoggingConfiguration:] */

void FUN_106680574(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x20);
    puVar1 = *(undefined **)(param_1 + 0x18);
    func_0x00010c0e00e0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      uVar2 = param_3;
      func_0x00010c0f1860();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c155f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c130180(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c155f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010be5ab20(param_1,param_2,uVar4,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar7 = param_1;
      func_0x00010be6f8c0(param_1,param_2,param_3);
      uVar4 = param_3;
      func_0x00010c155f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,uVar4);
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x00010c156400(param_3);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar5 & 1) == 0) {
        puVar1 = PTR_PTR_1126cc8f8;
        _objc_alloc(PTR_PTR_1126cc8f8);
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0276c0(puVar1,param_2,uVar8,uVar3,uVar2,lVar7,lVar6,uVar4);
      }
      else {
        puVar1 = PTR_PTR_1126cc900;
        _objc_alloc(PTR_PTR_1126cc900);
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0276e0(puVar1,param_2,uVar8,uVar3,uVar2,lVar7,lVar6,uVar4,
                            *(undefined1 *)(param_1 + 0x10));
      }
      _objc_release(uVar8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_3);
      _objc_retain(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066807e0; end: 10668086b; -[SCLensExplorerLoggerProvider _pageNameFromPageType:] */

void FUN_1066807e0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30c38);
  ppuVar3 = &PTR_PTR_110c90ac0;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30bb8);
    puVar2 = param_3;
    if ((int)puVar1 == 0) goto LAB_106680850;
    ppuVar3 = &PTR_PTR_110c90ad0;
  }
  puVar2 = *ppuVar3;
  _objc_retain(puVar2);
  _objc_release(param_3);
LAB_106680850:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10668086c; end: 10668091f; -[SCLensExplorerLoggerProvider _sectionNameFromSectionIdentifier:] */

void FUN_10668086c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cc908;
  func_0x00010c080260(PTR_PTR_1126cc908,param_2,param_3);
  ppuVar3 = param_3;
  if ((int)puVar1 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ee15d8;
    _objc_retain(&PTR____CFConstantStringClassReference_110ee15d8);
    _objc_release(param_3);
  }
  ppuVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e04238);
  if ((((ulong)ppuVar2 & 1) != 0) ||
     (ppuVar2 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30bb8),
     ppuVar4 = ppuVar3, (int)ppuVar2 != 0)) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e04238;
    _objc_retain(&PTR____CFConstantStringClassReference_110e04238);
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106680920; end: 106680987; -[SCLensExplorerLoggerProvider _pageTypeFromSectionIdentifier:] */

undefined8 FUN_106680920(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30c38);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30bb8);
    uVar2 = 1;
    if ((int)uVar1 != 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 2;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106680988; end: 106680a0f; -[SCLensExplorerLoggerProvider _loggingLayoutTypeFromSectionIdentifier:] */

undefined8 FUN_106680988(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e04238);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee15d8);
    uVar3 = 1;
    if ((int)uVar2 != 0) {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 2;
  }
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f307d8);
  uVar1 = 3;
  if ((int)uVar2 == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106680a10; end: 106680b33; -[SCLensExplorerLoggerProvider _loggingLayoutTypeFromRenderStrategy:sectionIdentifier:] */

undefined8
FUN_106680a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010c0ed100(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0be340(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  _objc_release(param_4);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106680b34; end: 106680b47;  */

void FUN_106680b34(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  return;
}



/* Entry: 106680b48; end: 106680b8f;  */

void FUN_106680b48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f307d8);
  uVar1 = 3;
  if ((int)uVar2 == 0) {
    uVar1 = 1;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 106680b90; end: 106680be7; -[SCLensExplorerLoggerProvider _pageTypeForLoggingConfiguration:] */

undefined8 FUN_106680b90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0764c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c073f80();
    uVar2 = 1;
    if ((int)uVar1 != 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106680be8; end: 106680c17; -[SCLensExplorerLoggerProvider .cxx_destruct] */

void FUN_106680be8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106680c18; end: 106680d37; -[SCLensExplorerLoggingAggregator initWithLoggerFactory:sectionName:pageName:lensExplorerPageType:layoutType:sectionPosition:isLensPickerMode:] */

undefined1 *
FUN_106680c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2460;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106680d38; end: 106680d3f; -[SCLensExplorerLoggingAggregator willAppearItemWithLoggingData:] */

void FUN_106680d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a58b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_willAppearItemWithLoggingData__112687050);
  return;
}



/* Entry: 106680d40; end: 106680d47; -[SCLensExplorerLoggingAggregator didDisappearItemWithLoggingData:] */

void FUN_106680d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_didDisappearItemWithLoggingData__1125bac48);
  return;
}



/* Entry: 106680d48; end: 106680d4f; -[SCLensExplorerLoggingAggregator didHandleInterfactionWithLoggingData:] */

void FUN_106680d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf772b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_didHandleInterfactionWithLogging_1125bb650);
  return;
}



/* Entry: 106680d50; end: 106680d73; -[SCLensExplorerLoggingAggregator logPageOpenEvent] */

void FUN_106680d50(long param_1)

{
  func_0x00010beea6e0();
                    /* WARNING: Could not recover jumptable at 0x00010c0abc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_logPageOpenEvent_112608928);
  return;
}



/* Entry: 106680d74; end: 106680d7b; -[SCLensExplorerLoggingAggregator logPageClosedEvent] */

void FUN_106680d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0abb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_logPageClosedEvent_1126088f0);
  return;
}



/* Entry: 106680d7c; end: 106680d83; -[SCLensExplorerLoggingAggregator logUnlockActionWithLoggingData:] */

void FUN_106680d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_logUnlockActionWithLoggingData__11260a2e0);
  return;
}



/* Entry: 106680d84; end: 106680d8b; -[SCLensExplorerLoggingAggregator logOpenProfileActionWithLoggingData:] */

void FUN_106680d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_logOpenProfileActionWithLoggingD_112608838);
  return;
}



/* Entry: 106680d8c; end: 106680d93; -[SCLensExplorerLoggingAggregator logOpenHeroTileActionWithLoggingData:] */

void FUN_106680d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_logOpenHeroTileActionWithLogging_112608820);
  return;
}



/* Entry: 106680d94; end: 106680d9b; -[SCLensExplorerLoggingAggregator logOpenPageActionWithLoggingData:] */

void FUN_106680d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_logOpenPageActionWithLoggingData_112608830);
  return;
}



/* Entry: 106680d9c; end: 106680e57; -[SCLensExplorerLoggingAggregator _warmup] */

void FUN_106680d9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cc8f0;
  _objc_alloc(PTR_PTR_1126cc8f0);
  func_0x00010c043520();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf568a0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf57700(uVar2,param_2,puVar1,*(undefined1 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf545a0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106680e58; end: 106680ec3; -[SCLensExplorerLoggingAggregator .cxx_destruct] */

void FUN_106680e58(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106680ec4; end: 106680fdb; -[SCLensExplorerSectionLoggingAggregator initWithLoggerFactory:sectionName:pageName:lensExplorerPageType:layoutType:sectionPosition:] */

undefined1 *
FUN_106680ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2468;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106680fdc; end: 106680fe3; -[SCLensExplorerSectionLoggingAggregator willAppearItemWithLoggingData:] */

void FUN_106680fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a58b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_willAppearItemWithLoggingData__112687050);
  return;
}



/* Entry: 106680fe4; end: 106680feb; -[SCLensExplorerSectionLoggingAggregator didDisappearItemWithLoggingData:] */

void FUN_106680fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_didDisappearItemWithLoggingData__1125bac48);
  return;
}



/* Entry: 106680fec; end: 106680ff3; -[SCLensExplorerSectionLoggingAggregator didHandleInterfactionWithLoggingData:] */

void FUN_106680fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf772b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_didHandleInterfactionWithLogging_1125bb650);
  return;
}



/* Entry: 106680ff4; end: 106680ff7; -[SCLensExplorerSectionLoggingAggregator logPageOpenEvent] */

void FUN_106680ff4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beea6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__warmup_112598360);
  return;
}



/* Entry: 106680ff8; end: 106680ffb; -[SCLensExplorerSectionLoggingAggregator logPageClosedEvent] */

void FUN_106680ff8(void)

{
  return;
}



/* Entry: 106680ffc; end: 106681003; -[SCLensExplorerSectionLoggingAggregator logUnlockActionWithLoggingData:] */

void FUN_106680ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_logUnlockActionWithLoggingData__11260a2e0);
  return;
}



/* Entry: 106681004; end: 10668100b; -[SCLensExplorerSectionLoggingAggregator logOpenProfileActionWithLoggingData:] */

void FUN_106681004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_logOpenProfileActionWithLoggingD_112608838);
  return;
}



/* Entry: 10668100c; end: 106681013; -[SCLensExplorerSectionLoggingAggregator logOpenHeroTileActionWithLoggingData:] */

void FUN_10668100c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_logOpenHeroTileActionWithLogging_112608820);
  return;
}



/* Entry: 106681014; end: 10668101b; -[SCLensExplorerSectionLoggingAggregator logOpenPageActionWithLoggingData:] */

void FUN_106681014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_logOpenPageActionWithLoggingData_112608830);
  return;
}



/* Entry: 10668101c; end: 1066810af; -[SCLensExplorerSectionLoggingAggregator _warmup] */

void FUN_10668101c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cc8f0;
  _objc_alloc(PTR_PTR_1126cc8f0);
  func_0x00010c043520();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf568a0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf545a0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066810b0; end: 10668110f; -[SCLensExplorerSectionLoggingAggregator .cxx_destruct] */

void FUN_1066810b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106681110; end: 1066811db; -[SCLensExplorerBadgeUsageTracker initWithPreferences:timeProvider:studySettingsProvider:] */

undefined1 *
FUN_106681110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f2470;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066811dc; end: 1066812bb; -[SCLensExplorerBadgeUsageTracker shouldDisplayButtonBadge] */

bool FUN_1066811dc(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf64fa0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e58e98);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf5e5e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c26f380();
    func_0x00010bf65600(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf433a0(puVar4,param_2,puVar5);
    bVar1 = puVar6 == (undefined *)0x1;
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1066812bc; end: 1066812bf; -[SCLensExplorerBadgeUsageTracker shouldDisplayLensBadge] */

void FUN_1066812bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldDisplayButtonBadge_112669720);
  return;
}



/* Entry: 1066812c0; end: 106681303; -[SCLensExplorerBadgeUsageTracker fulfilLensExplorerBadge] */

void FUN_1066812c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5e5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e58e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106681304; end: 10668133f; -[SCLensExplorerBadgeUsageTracker .cxx_destruct] */

void FUN_106681304(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106681340; end: 1066813e3; -[SCLensExplorerRemoteAssetsProvider initWithMediaDownloaderFactory:lensPerformerProvider:] */

undefined1 *
FUN_106681340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066813e4; end: 1066813eb; -[SCLensExplorerRemoteAssetsProvider lensPerformerProvider] */

void FUN_1066813e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1066813ec; end: 10668145f; -[SCLensExplorerRemoteAssetsProvider mediaDownloader] */

void FUN_1066813ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf570a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106681460; end: 106681617; -[SCLensExplorerRemoteAssetsProvider pressAndHoldOnboardingPreviews] */

void FUN_106681460(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bde7c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be9ab80(0x4052000000000000,0x4060800000000000,param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bde7c80(param_1,param_2,&PTR____CFConstantStringClassReference_110e58ed8,
                      &PTR____CFConstantStringClassReference_110e58ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010be9ab80(0x4052000000000000,0x4060800000000000,param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bde7c80(param_1,param_2,&PTR____CFConstantStringClassReference_110e58ef8,
                      &PTR____CFConstantStringClassReference_110e58ef8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9ab80(0x4052000000000000,0x4060800000000000,param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae558;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  puStack_68 = puVar3;
  puStack_60 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = puVar2;
    func_0x00010bde7c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9ab80(0x4060800000000000,0x405c800000000000,puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106681618; end: 106681683; -[SCLensExplorerRemoteAssetsProvider pressAndHoldHand] */

void FUN_106681618(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bde7c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9ab80(0x4060800000000000,0x405c800000000000,param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106681684; end: 1066816ef; -[SCLensExplorerRemoteAssetsProvider favortiesOnboardingBackground] */

void FUN_106681684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bde7c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9ab80(0x4075000000000000,0x4053000000000000,param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066816f0; end: 10668178b; -[SCLensExplorerRemoteAssetsProvider recentOnboardingBackground] */

void FUN_1066816f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122500();
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010bde7c80(param_3,param_4,&PTR____CFConstantStringClassReference_110e58f58,
                      &PTR____CFConstantStringClassReference_110e58f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9ab80(param_1,param_2,param_3,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10668178c; end: 1066818fb; -[SCLensExplorerRemoteAssetsProvider _contentForURLString:cacheKey:] */

void FUN_10668178c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010c0c4b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126ae558;
  if (puVar1 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e58f98;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0(param_3,param_4,&PTR____CFConstantStringClassReference_110e58f78,3,puVar1);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bfe9c80(puVar2,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c4b00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    puVar1 = param_5;
    func_0x00010bf4c580();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    uVar4 = param_1;
    _objc_retain(puVar1);
    func_0x00010c0b6c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc0000000;
    pcStack_d8 = FUN_106681a08;
    puStack_d0 = &UNK_110932a38;
    uStack_c8 = param_1;
    uStack_c0 = param_2;
    uStack_b8 = uVar4;
    func_0x00010c095b60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010c0680e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0b8640(puVar1,param_4,&puStack_e8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066818fc; end: 106681a07; -[SCLensExplorerRemoteAssetsProvider _scaledImageFromFutureData:prefferedSize:] */

void FUN_1066818fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar2 = param_1;
  _objc_retain(param_5);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc0000000;
  pcStack_78 = FUN_106681a08;
  puStack_70 = &UNK_110932a38;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = uVar2;
  func_0x00010c095b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0b8640(param_5,param_4,&puStack_88,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106681a08; end: 106681c5f;  */

void FUN_106681a08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d080(0x4008000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0(puVar7);
    _objc_release(puVar2);
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = puVar1;
    func_0x00010c14e6c0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    if (puVar7 == (undefined *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar4 = puVar2;
      _NSStringFromCGSize(uVar8,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e2e0(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar4);
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar7 = (undefined *)0x0;
    }
    else {
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_storeStrong(puVar1 + 0x18,0);
    _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106681c60; end: 106681c9b; -[SCLensExplorerRemoteAssetsProvider .cxx_destruct] */

void FUN_106681c60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106681c9c; end: 10668245f; -[SCLensExplorerDependencyProviderImpl initWithUserSession:lensExplorerStudySettings:lensFavoritesMockedObservable:lensFavoritesUpdater:featureSettingsService:searchScopeExposer:lensExplorerStoryScopeExposer:lensExplorerStoryScopeServices:creatorProfileScopeExposer:creatorProfileScopeServices:infoCardsScopeExposer:lensInfoCardActionHandlerProvider:modularCameraScopeExposer:modularCameraScopeServices:collectionsCameraScopeExposer:lensTopicPagePresenter:contentDelivery:lensMediaDownloaderFactory:lensPerformerProvider:storiesReadReceiptCoordinator:countryCodeProvider:applicationLifecycleEvents:unlockableDataStoreFilterFactory:lensUserProvider:lensAttachmentLauncher:imageDownloader:userPreferences:networkConnectivityMonitor:circumstanceEngine:storiesThumbnailCoordinator:dynamicLayoutFetcher:dynamicLayoutBuilder:customDynamicLayoutBuilder:activityCenterPresenter:logger:infoCardsScopeServices:infoCardReportServices:lensCreatorSubscriptionProviderServices:lensTopicsServices:spectaclesLensServices:] */

undefined8 *
FUN_106681c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42)

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
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  puStack_70 = PTR_PTR_1126f2480;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_21);
    uVar2 = puVar1[5];
    puVar1[5] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[2];
    puVar1[2] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_37;
    _objc_release(uVar2);
  }
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106682460; end: 106682487; -[SCLensExplorerDependencyProviderImpl storiesReadReceiptCoordinator] */

void FUN_106682460(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106682488; end: 10668248f; -[SCLensExplorerDependencyProviderImpl countryCodeProvider] */

void FUN_106682488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb8),PTR_s_target_112678178);
  return;
}



/* Entry: 106682490; end: 106682497; -[SCLensExplorerDependencyProviderImpl imageDownloader] */

void FUN_106682490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 106682498; end: 1066824bf; -[SCLensExplorerDependencyProviderImpl lensActivityCenterPresenter] */

void FUN_106682498(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066824c0; end: 106682563; -[SCLensExplorerDependencyProviderImpl animationCache] */

void FUN_1066824c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x148);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b9940;
    _objc_alloc(PTR_PTR_1126b9940);
    func_0x00010c02d5c0();
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar4;
    func_0x00010bf26300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x148);
    *(long *)(param_1 + 0x148) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x148);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106682564; end: 10668256b; -[SCLensExplorerDependencyProviderImpl lensFavoritesMockedObservable] */

void FUN_106682564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 10668256c; end: 106682573; -[SCLensExplorerDependencyProviderImpl lensFavoritesUpdater] */

void FUN_10668256c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 106682574; end: 10668265b; -[SCLensExplorerDependencyProviderImpl createSearchViewPresenterWithPickerModeEnabled:pickerDelegate:searchType:disableScreenInsetPadding:useTransparentBackground:styleOverride:lensInfoCardEnabled:dismissBlock:] */

void FUN_106682574(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_PTR_1126cc918;
  uVar1 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  func_0x00010c042aa0();
  _objc_release(uVar1);
  _objc_release(in_stack_00000008);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10668265c; end: 106682683; -[SCLensExplorerDependencyProviderImpl contentDelivery] */

void FUN_10668265c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106682684; end: 1066826ab; -[SCLensExplorerDependencyProviderImpl lensPerformerProvider] */

void FUN_106682684(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066826ac; end: 1066826db; -[SCLensExplorerDependencyProviderImpl modularCameraPresenter] */

void FUN_1066826ac(void)

{
  _objc_alloc(PTR_PTR_1126b5f28);
  func_0x00010c025fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066826dc; end: 106682723; -[SCLensExplorerDependencyProviderImpl blocklistFilter] */

void FUN_1066826dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1dac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106682724; end: 10668272b; -[SCLensExplorerDependencyProviderImpl lensUserProvider] */

void FUN_106682724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xd0),PTR_s_target_112678178);
  return;
}



/* Entry: 10668272c; end: 106682733; -[SCLensExplorerDependencyProviderImpl userPreferences] */

void FUN_10668272c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe0),PTR_s_target_112678178);
  return;
}



/* Entry: 106682734; end: 1066827a7; -[SCLensExplorerDependencyProviderImpl storyPresenterWithStoryConfiguration:storyDataSourceFactory:] */

void FUN_106682734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc920;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c023ee0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066827a8; end: 1066827d7; -[SCLensExplorerDependencyProviderImpl creatorProfilePresenter] */

void FUN_1066827a8(void)

{
  _objc_alloc(PTR_PTR_1126b6890);
  func_0x00010c042040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066827d8; end: 106682917; -[SCLensExplorerDependencyProviderImpl infoCardPresenter] */

void FUN_1066827d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf54520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b6888;
  _objc_alloc(PTR_PTR_1126b6888);
  func_0x00010c042180();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106682918; end: 106682957;  */

void FUN_106682918(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf5b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106682958; end: 10668295f; -[SCLensExplorerDependencyProviderImpl lensTopicPagePresenter] */

void FUN_106682958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_target_112678178);
  return;
}



/* Entry: 106682960; end: 106682967; -[SCLensExplorerDependencyProviderImpl studySettingsProvider] */

void FUN_106682960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 106682968; end: 10668297f; -[SCLensExplorerDependencyProviderImpl userSession] */

void FUN_106682968(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106682980; end: 106682987; -[SCLensExplorerDependencyProviderImpl featureSettingsService] */

void FUN_106682980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 106682988; end: 1066829af; -[SCLensExplorerDependencyProviderImpl applicationLifecycleEvents] */

void FUN_106682988(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066829b0; end: 1066829d7; -[SCLensExplorerDependencyProviderImpl lensMediaDownloaderFactory] */

void FUN_1066829b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066829d8; end: 1066829ff; -[SCLensExplorerDependencyProviderImpl storiesThumbnailCoordinator] */

void FUN_1066829d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106682a00; end: 106682a27; -[SCLensExplorerDependencyProviderImpl networkConnectivityMonitor] */

void FUN_106682a00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106682a28; end: 106682a4f; -[SCLensExplorerDependencyProviderImpl dynamicLayoutFetcher] */

void FUN_106682a28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106682a50; end: 106682a77; -[SCLensExplorerDependencyProviderImpl dynamicLayoutBuilder] */

void FUN_106682a50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106682a78; end: 106682a9f; -[SCLensExplorerDependencyProviderImpl customDynamicLayoutBuilder] */

void FUN_106682a78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106682aa0; end: 106682cab; -[SCLensExplorerDependencyProviderImpl .cxx_destruct] */

void FUN_106682aa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106682cac; end: 106682daf; -[SCLensExplorerUserSettings initWithUserPreferences:studySettingsProvider:featureSettingsService:timeProvider:] */

undefined1 *
FUN_106682cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f2488;
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
    func_0x00010be96a40(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106682db0; end: 106682dc7; -[SCLensExplorerUserSettings setSeenSubscribeTooltip] */

void FUN_106682db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKeyedSubscript__112651bb8,
             PTR____kCFBooleanTrue_11034ab68,&PTR____CFConstantStringClassReference_110e59018);
  return;
}



/* Entry: 106682dc8; end: 106682e0f; -[SCLensExplorerUserSettings shouldSeeSubscribeTooltip] */

uint FUN_106682dc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e59018);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106682e10; end: 106682e23; -[SCLensExplorerUserSettings registerFavoritesActivation] */

void FUN_106682e10(long param_1)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010c1bb7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setLensExplorerFavoritesEmptySta_11264c810);
  return;
}



/* Entry: 106682e24; end: 106682e57; -[SCLensExplorerUserSettings completeFavoritesOnboarding] */

void FUN_106682e24(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc928;
  func_0x00010c0e8120();
  *(undefined **)(param_1 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010c1bb7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setLensExplorerFavoritesEmptySta_11264c810,puVar1
            );
  return;
}



/* Entry: 106682e58; end: 106682ea3; -[SCLensExplorerUserSettings shouldShowFavoritesOnboarding] */

undefined * FUN_106682e58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cc928;
  _objc_alloc(PTR_PTR_1126cc928);
  func_0x00010c011820();
  puVar2 = puVar1;
  func_0x00010c2337e0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106682ea4; end: 106682eeb; -[SCLensExplorerUserSettings showTokenOnboardingBadge] */

uint FUN_106682ea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e59078);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106682eec; end: 106682f03; -[SCLensExplorerUserSettings registerTokenButtonActivation] */

void FUN_106682eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKeyedSubscript__112651bb8,
             PTR____kCFBooleanTrue_11034ab68,&PTR____CFConstantStringClassReference_110e59078);
  return;
}


