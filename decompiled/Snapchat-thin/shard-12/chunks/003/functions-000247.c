/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109035dac; end: 109035e87;  */

void FUN_109035dac(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c094540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf98c00();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      _objc_release(lVar2);
      _objc_release(uVar1);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109035e88; end: 109035eb7;  */

void FUN_109035e88(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be64f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyRemovedEffects__112576d78,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 109035eb8; end: 10903608f; -[SCLensEffectApplicator _notifyRemovedEffects:] */

void FUN_109035eb8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x28));
  puVar1 = &UNK_10f54837e;
  func_0x000107c31820(&UNK_10f54837e);
  lVar2 = param_2;
  func_0x00010bf07da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  func_0x00010c12d500(lVar3,param_3,param_4);
  lVar2 = lVar3;
  func_0x00010bf51e00(lVar3);
  func_0x00010c169a40(param_2,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c09c900(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  func_0x00010c12d500(lVar4,param_3,param_4);
  lVar2 = lVar4;
  func_0x00010bf51e00(lVar4);
  func_0x00010c1be980(param_2,param_3,lVar2);
  _objc_release(lVar2);
  _CACurrentMediaTime();
  puVar5 = PTR_PTR_1126db840;
  _objc_alloc(PTR_PTR_1126db840);
  lVar2 = param_2;
  func_0x00010bf07da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f120(param_1,puVar5,param_3,lVar2);
  _objc_release(lVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x50),param_3,puVar5);
  puVar6 = PTR_PTR_1126db840;
  _objc_alloc(PTR_PTR_1126db840);
  func_0x00010c00f120(param_1);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x48),param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109036090; end: 1090361eb; -[SCLensEffectApplicator _shouldForceReloadLayer:] */

undefined1 * FUN_109036090(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x22;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x28));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_3;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_e8;
  lVar9 = lVar1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar8 = *plStack_120;
    unaff_x22 = lVar9;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        puVar7 = *(undefined8 **)(lStack_128 + lVar9 * 8);
        uVar2 = param_1;
        func_0x00010bf8ce60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb4e80();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          puVar6 = (undefined1 *)0x1;
          goto LAB_10903619c;
        }
        lVar9 = lVar9 + 1;
      } while (unaff_x22 != lVar9);
      puVar5 = auStack_e8;
      unaff_x22 = lVar1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,puVar5,0x10);
    } while (unaff_x22 != 0);
  }
  puVar6 = (undefined1 *)0x0;
LAB_10903619c:
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  pcStack_138 = FUN_1090361ec;
  lStack_160 = unaff_x22;
  lStack_158 = lVar1;
  puStack_150 = puVar6;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  func_0x00010c225c20(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1090362ac;
  puStack_170 = &UNK_110857a38;
  puStack_168 = puVar4;
  _objc_retain();
  puVar5 = (undefined1 *)puVar7;
  func_0x00010bfaea20(puVar7,param_2,&puStack_188);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puStack_168);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1090361ec; end: 1090362ab; -[SCLensEffectApplicator _turnedOnEffectsFromEffects:appliedEffects:] */

void FUN_1090361ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_3);
  func_0x00010c225c20(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1090362ac;
  puStack_40 = &UNK_110857a38;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x00010bfaea20(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090362ac; end: 1090362cb;  */

uint FUN_1090362ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1090362cc; end: 1090364ab; -[SCLensEffectApplicator lensComponent:didLoadResourcesForLensId:applyDelay:] */

void FUN_1090362cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f548397;
  func_0x000107c31820(&UNK_10f548397);
  uVar2 = param_1;
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = 0xc2000000;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1090364ac;
  puStack_70 = &UNK_110857a38;
  _objc_retain(param_4);
  uVar3 = uVar2;
  uStack_68 = param_4;
  func_0x00010bfb2040(uVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c09c900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  if ((uVar3 != 0) && (uVar2 = uVar4, func_0x00010bf4b900(uVar4,param_2,uVar3), (uVar2 & 1) == 0)) {
    func_0x00010befa120(uVar4,param_2,uVar3);
    uVar2 = uVar4;
    func_0x00010bf51e00(uVar4);
    func_0x00010c1be980(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  puVar5 = PTR_PTR_1126dd038;
  _objc_alloc(PTR_PTR_1126dd038);
  _CACurrentMediaTime();
  uVar2 = uVar3;
  func_0x00010c07f200(uVar3);
  func_0x00010c00f040(uVar6,puVar5,param_2,param_4,uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_68);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090364ac; end: 1090364f3;  */

undefined8 FUN_1090364ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1090364f4; end: 1090365f3; -[SCLensEffectApplicator lensComponent:firstFrameDidBecomeReadyWithLensId:] */

void FUN_1090364f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f5483b2;
  func_0x000107c31820(&UNK_10f5483b2);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1090365f4;
  puStack_70 = &UNK_110844b80;
  lStack_68 = param_2;
  _objc_retain(param_5);
  uStack_60 = param_5;
  uStack_58 = param_1;
  func_0x00010c0f7fc0(uVar2,param_3,&puStack_88);
  _objc_release(uStack_60);
  func_0x000107c31828(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1090365f4; end: 1090366f3;  */

void FUN_1090365f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf07da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1090366f4;
  puStack_50 = &UNK_110857a38;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = uVar1;
  uStack_48 = uVar4;
  func_0x00010bfb2040(uVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126dd038;
  _objc_alloc(PTR_PTR_1126dd038);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = uVar2;
  func_0x00010c07f200(uVar2);
  func_0x00010c00f040(uVar5,puVar3,param_2,uVar4,uVar1);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_48);
  return;
}



/* Entry: 1090366f4; end: 10903673b;  */

undefined8 FUN_1090366f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10903673c; end: 109036743; -[SCLensEffectApplicator willTurnOnEffectsObservable] */

undefined8 FUN_10903673c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109036744; end: 10903674b; -[SCLensEffectApplicator willTurnOffEffectsObservable] */

undefined8 FUN_109036744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10903674c; end: 109036753; -[SCLensEffectApplicator didTurnOnEffectsObservable] */

undefined8 FUN_10903674c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109036754; end: 10903675b; -[SCLensEffectApplicator didTurnOffEffectsObservable] */

undefined8 FUN_109036754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10903675c; end: 109036763; -[SCLensEffectApplicator appliedEffectsObservable] */

undefined8 FUN_10903675c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109036764; end: 10903676b; -[SCLensEffectApplicator failedEffectsObservable] */

undefined8 FUN_109036764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10903676c; end: 109036773; -[SCLensEffectApplicator didLoadEffectObservable] */

undefined8 FUN_10903676c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 109036774; end: 10903677b; -[SCLensEffectApplicator didProcessFirstFrameObservable] */

undefined8 FUN_109036774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10903677c; end: 109036787; -[SCLensEffectApplicator effectInfoProvider] */

void FUN_10903677c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 109036788; end: 10903678f; -[SCLensEffectApplicator setEffectInfoProvider:] */

void FUN_109036788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 109036790; end: 10903679b; -[SCLensEffectApplicator appliedEffects] */

void FUN_109036790(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x80,1);
  return;
}



/* Entry: 10903679c; end: 1090367a3; -[SCLensEffectApplicator setAppliedEffects:] */

void FUN_10903679c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1090367a4; end: 1090367af; -[SCLensEffectApplicator currentApplyingEffects] */

void FUN_1090367a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x88,1);
  return;
}



/* Entry: 1090367b0; end: 1090367b7; -[SCLensEffectApplicator setCurrentApplyingEffects:] */

void FUN_1090367b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1090367b8; end: 1090367c3; -[SCLensEffectApplicator loadedEffects] */

void FUN_1090367b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 1090367c4; end: 1090367cb; -[SCLensEffectApplicator setLoadedEffects:] */

void FUN_1090367c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1090367cc; end: 1090368bb; -[SCLensEffectApplicator .cxx_destruct] */

void FUN_1090367cc(long param_1)

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



/* Entry: 1090368bc; end: 109036973;  */

void FUN_1090368bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfb2040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109036974; end: 109036a1b;  */

undefined8 FUN_109036974(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf8cea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 109036a1c; end: 109036acb; -[SCLensEffectDefaultApplicationStrategy init] */

undefined8 * FUN_109036a1c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fff70;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[1];
    puVar1[1] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
  }
  return puVar1;
}



/* Entry: 109036acc; end: 109036c93; -[SCLensEffectDefaultApplicationStrategy isAppliedEffectLayer:] */

long * FUN_109036acc(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  _objc_retain(param_3);
  plVar6 = param_3;
  func_0x00010bf8cea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  plVar7 = param_1;
  func_0x00010be446c0(param_1,param_2,plVar6);
  _objc_release(plVar6);
  if ((int)plVar7 != 0) {
    plVar6 = param_3;
    func_0x00010bf8cea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be072a0(param_1,param_2,plVar6);
    param_1 = (long *)*param_1;
    _objc_retain(param_1);
    _objc_release(plVar6);
    plVar6 = param_1;
    func_0x00010bf529e0();
    plVar7 = param_3;
    func_0x00010bf8d080();
    _objc_retainAutoreleasedReturnValue();
    plVar1 = plVar7;
    func_0x00010bf529e0();
    _objc_release(plVar7);
    if (plVar6 == plVar1) {
      plVar6 = param_1;
      func_0x00010bf529e0();
      if (plVar6 == (long *)0x0) {
        plVar7 = (long *)0x1;
      }
      else {
        plVar6 = (long *)0x0;
        do {
          plVar1 = param_1;
          func_0x00010c0dfd40(param_1,param_2,plVar6);
          _objc_retainAutoreleasedReturnValue();
          plVar2 = plVar1;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          plVar3 = param_3;
          func_0x00010bf8d080(param_3);
          _objc_retainAutoreleasedReturnValue();
          plVar4 = plVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          plVar5 = plVar4;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          plVar7 = plVar2;
          func_0x00010c0720c0(plVar2,param_2,plVar5);
          _objc_release(plVar5);
          _objc_release(plVar4);
          _objc_release(plVar3);
          _objc_release(plVar2);
          _objc_release(plVar1);
          if (((ulong)plVar7 & 1) == 0) break;
          plVar6 = (long *)((long)plVar6 + 1);
          plVar1 = param_1;
          func_0x00010bf529e0();
        } while (plVar6 < plVar1);
      }
    }
    else {
      plVar7 = (long *)0x0;
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return plVar7;
}



/* Entry: 109036c94; end: 109036cb7; -[SCLensEffectDefaultApplicationStrategy isEffectLayerEmpty:] */

bool FUN_109036c94(long *param_1)

{
  long lVar1;
  
  func_0x00010be072a0();
  lVar1 = *param_1;
  func_0x00010bf529e0(lVar1);
  return lVar1 == 0;
}



/* Entry: 109036cb8; end: 109036d03; -[SCLensEffectDefaultApplicationStrategy isEmpty] */

bool FUN_109036cb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      func_0x00010bf529e0(lVar1);
      return lVar1 == 0;
    }
  }
  return false;
}



/* Entry: 109036d04; end: 109036ddb; -[SCLensEffectDefaultApplicationStrategy lensesWithEffectLayer:] */

void FUN_109036d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf8cea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be446c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  puVar4 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
  if ((int)puVar2 != 0) {
    uVar1 = param_3;
    func_0x00010bf8cea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010be072a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf8d080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *puVar2;
    *puVar2 = uVar1;
    _objc_release(uVar3);
    func_0x00010be07300(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109036ddc; end: 109036e5b; -[SCLensEffectDefaultApplicationStrategy removeEffectLayerWithType:] */

void FUN_109036ddc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010be446c0(param_1,param_2,param_3);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar2 != 0) {
    func_0x00010be072a0(param_1,param_2,param_3);
    puVar4 = (undefined *)*param_1;
    _objc_retain(puVar4);
    uVar3 = *param_1;
    *param_1 = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109036e5c; end: 109036ef7; -[SCLensEffectDefaultApplicationStrategy _effectsToApply] */

void FUN_109036e5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar2);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0(lVar3);
  func_0x00010bf0a0e0(puVar4,param_2,lVar2 + lVar1 + lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  func_0x00010befa160(puVar4,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010befa160(puVar4,param_2,*(undefined8 *)(param_1 + 0x18));
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109036ef8; end: 109036f4f; -[SCLensEffectDefaultApplicationStrategy _isSupportedEffectType:] */

undefined8 FUN_109036ef8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4b900(uVar2,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 109036f50; end: 109036fdf; -[SCLensEffectDefaultApplicationStrategy _effectsForType:] */

long FUN_109036f50(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f771d8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f771b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f77198);
      lVar2 = 0x18;
      if ((int)uVar1 == 0) {
        lVar2 = 8;
      }
    }
    else {
      lVar2 = 0x10;
    }
  }
  else {
    lVar2 = 8;
  }
  _objc_release(param_3);
  return param_1 + lVar2;
}



/* Entry: 109036fe0; end: 109037183; -[SCLensEffectDefaultApplicationStrategy _checkDuplicatedEffects] */

long FUN_109036fe0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be07300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0();
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar6 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      lVar6 = 1;
LAB_10903712c:
      _objc_release(param_1);
      _objc_release(puVar2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return lVar6;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_1 + 0x20,0);
      _objc_storeStrong(param_1 + 0x18,0);
      _objc_storeStrong(param_1 + 0x10,0);
      param_1 = param_1 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
      return param_1;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar3 = uVar7;
      func_0x00010c094540(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf4b900();
      _objc_release(uVar3);
      if (((ulong)puVar4 & 1) != 0) {
        lVar6 = 0;
        goto LAB_10903712c;
      }
      func_0x00010c094540(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 109037184; end: 1090371cb; -[SCLensEffectDefaultApplicationStrategy .cxx_destruct] */

void FUN_109037184(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090371cc; end: 1090372db; -[SCLensComponentManagerFactory initWithConfiguration:appInsightsMetadataStorage:aspectRatioNominator:aspectRatioDenominator:trackingDataHandler:performer:] */

undefined1 *
FUN_1090371cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fff78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090372dc; end: 1090374db; -[SCLensComponentManagerFactory createCameraProcessorForPostCapture:] */

void FUN_1090372dc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  func_0x00010bded4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd058;
  _objc_alloc(PTR_PTR_1126dd058);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c13b400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c291980(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fa40(puVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126db560;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = PTR_PTR_1126dd060;
  func_0x00010beffb20(PTR_PTR_1126dd060);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf468a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69060(puVar6,param_2,lVar1,uVar4,puVar5,uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010c278d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(puVar5);
  puVar5 = puVar6;
  if ((param_3 & 1) == 0) {
    func_0x00010bf70b60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126dd068;
    _objc_opt_new(PTR_PTR_1126dd068);
    func_0x00010c189680(puVar5,param_2,puVar7);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c29ad60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3940();
  }
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010c29ad60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222ae0();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b2930;
  func_0x00010c0981c0(PTR_PTR_1126b2930);
  func_0x00010c18c7e0(puVar6,param_2,puVar5,0);
  func_0x00010c201460(puVar6,param_2,1);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1090374dc; end: 1090376ab; -[SCLensComponentManagerFactory createPlainProcessorWithDeviceMotion:] */

void FUN_1090374dc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1;
  func_0x00010bded4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd058;
  _objc_alloc(PTR_PTR_1126dd058);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c13b400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c291980(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fa40(puVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126dd060;
  if ((param_3 & 1) == 0) {
    func_0x00010c0db140(PTR_PTR_1126dd060);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf70bc0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126db560;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf468a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69060(puVar6,param_2,lVar1,uVar4,puVar5,uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (param_3 != 0) {
    puVar7 = puVar6;
    func_0x00010bf70b60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126dd068;
    _objc_opt_new(PTR_PTR_1126dd068);
    func_0x00010c189680(puVar7,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  puVar7 = puVar6;
  func_0x00010c29ad60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3940();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b2930;
  func_0x00010c0981c0(PTR_PTR_1126b2930);
  func_0x00010c18c7e0(puVar6,param_2,puVar7,0);
  func_0x00010c201460(puVar6,param_2,1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1090376ac; end: 10903793f; -[SCLensComponentManagerFactory createThumbnailProcessor] */

void FUN_1090376ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bded4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd058;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c13b400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c291980(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fa40(puVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126db560;
  _objc_alloc(PTR_PTR_1126db560);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar6 = PTR_PTR_1126dd060;
  func_0x00010c0db140(PTR_PTR_1126dd060);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf468a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126db530;
  _objc_opt_class();
  puVar8 = PTR_PTR_1126dd070;
  puStack_a0 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126dd078;
  puStack_98 = puVar8;
  _objc_opt_class();
  puVar8 = PTR_PTR_1126db508;
  puStack_90 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126db4f0;
  puStack_88 = puVar8;
  _objc_opt_class();
  puVar8 = PTR_PTR_1126db540;
  puStack_80 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126db4f8;
  puStack_78 = puVar8;
  _objc_opt_class();
  puVar8 = PTR_PTR_1126db538;
  puStack_70 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126dd080;
  puStack_68 = puVar8;
  _objc_opt_class();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0042e0(puVar5,param_2,lVar1,uVar4,puVar6,1,uVar3,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010c29ad60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222ae0();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010c29ad60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3940();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b2930;
  func_0x00010c0981c0(PTR_PTR_1126b2930);
  func_0x00010c18c7e0(puVar5,param_2,puVar6,0);
  func_0x00010c201460(puVar5,param_2,1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
    _objc_alloc();
    func_0x00010bfefb80();
    if (puVar5 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e120();
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109037940; end: 1090379a3; -[SCLensComponentManagerFactory _createEGLContextWithParentContext] */

void FUN_109037940(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
  _objc_alloc();
  func_0x00010bfefb80();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e120();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090379a4; end: 1090379eb; -[SCLensComponentManagerFactory .cxx_destruct] */

void FUN_1090379a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090379ec; end: 109037a8f; -[SCLensBaseProcessingStrategy initWithEffectProcessor:effectApplicator:] */

undefined1 *
FUN_1090379ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fff80;
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



/* Entry: 109037a90; end: 109037a93; -[SCLensBaseProcessingStrategy setLensProcessingActive:] */

void FUN_109037a90(void)

{
  return;
}



/* Entry: 109037a94; end: 109037abf; -[SCLensBaseProcessingStrategy setUseOutputTexture:] */

void FUN_109037a94(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010c21d960(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 109037ac0; end: 109037ac7; -[SCLensBaseProcessingStrategy useOutputTexture] */

undefined1 FUN_109037ac0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 109037ac8; end: 109037b27; -[SCLensBaseProcessingStrategy setupForSampleBuffer:] */

void FUN_109037ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c072e20(param_3);
  func_0x00010c1e38c0(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c0ed100(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d6450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setOrientation__112653338,uVar1);
  return;
}



/* Entry: 109037b28; end: 109037b4f; -[SCLensBaseProcessingStrategy processSampleBuffer:inputSource:error:] */

void FUN_109037b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 109037b50; end: 109037b7f; -[SCLensBaseProcessingStrategy resetProcessor] */

void FUN_109037b50(undefined8 param_1)

{
  func_0x00010bf8cee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109037b80; end: 109037b87; -[SCLensBaseProcessingStrategy processPixelBufferToImage:orientation:inputSource:timestamp:error:] */

undefined8 FUN_109037b80(void)

{
  return 0;
}



/* Entry: 109037b88; end: 109037b8b; -[SCLensBaseProcessingStrategy cancelEffectApplicationIfPossible] */

void FUN_109037b88(void)

{
  return;
}



/* Entry: 109037b8c; end: 109037b93; -[SCLensBaseProcessingStrategy isCanceled] */

undefined8 FUN_109037b8c(void)

{
  return 0;
}



/* Entry: 109037b94; end: 109037bbb; -[SCLensBaseProcessingStrategy effectProcessor] */

void FUN_109037b94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109037bbc; end: 109037be3; -[SCLensBaseProcessingStrategy effectApplicator] */

void FUN_109037bbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109037be4; end: 109037c33; -[SCLensBaseProcessingStrategy retainSampleBuffer:] */

void FUN_109037be4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1494c0();
  _CMSampleBufferGetImageBuffer();
  if (lVar1 != 0) {
    func_0x00010c1494c0(param_3);
    _CFRetain();
    _CVPixelBufferRetain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109037c34; end: 109037c7b; -[SCLensBaseProcessingStrategy releaseSampleBuffer:] */

void FUN_109037c34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1494c0();
  _CMSampleBufferGetImageBuffer();
  if (lVar1 != 0) {
    _CVPixelBufferRelease();
    func_0x00010c1494c0(param_3);
    _CFRelease();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109037c7c; end: 109037c93; -[SCLensBaseProcessingStrategy delegate] */

void FUN_109037c7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109037c94; end: 109037c9f; -[SCLensBaseProcessingStrategy setDelegate:] */

void FUN_109037c94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 109037ca0; end: 109037cd7; -[SCLensBaseProcessingStrategy .cxx_destruct] */

void FUN_109037ca0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109037cd8; end: 109037d0b; -[SCLensEffectPlainProcessingStrategy initWithEffectProcessor:effectApplicator:] */

void FUN_109037cd8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fff88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithEffectProcessor_effectAp_1125e15f8);
  return;
}



/* Entry: 109037d0c; end: 109037fcf; -[SCLensEffectPlainProcessingStrategy processSampleBuffer:inputSource:error:] */

void FUN_109037d0c(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  double adStack_88 [3];
  
  _objc_retain(param_4);
  func_0x00010c228aa0(param_2,param_3,param_4);
  puVar1 = &UNK_10f54840d;
  func_0x000107c31820(&UNK_10f54840d);
  _CACurrentMediaTime();
  lVar2 = param_2;
  func_0x00010bf8cd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09c900();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1494c0(param_4);
  _CMSampleBufferGetImageBuffer();
  _CMClockGetHostTimeClock();
  _CMClockGetTime(adStack_88);
  lVar2 = param_2;
  func_0x00010bf8cee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c115100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf8cd20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c09c900();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
    dVar10 = adStack_88[0];
  }
  else {
    puVar9 = PTR_PTR_1126dd088;
    _objc_alloc();
    func_0x00010c051b80();
    _objc_release(lVar3);
    dVar10 = adStack_88[0];
  }
  lVar2 = lVar6;
  func_0x00010c072060(lVar6,param_3,lVar4);
  if ((int)lVar2 != 0) {
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf78c00(dVar10 - param_1,param_2,param_3,lVar6,param_5);
    _objc_release(param_2);
  }
  if (puVar9 == (undefined *)0x0) {
    _objc_retain(param_4);
    puVar7 = param_4;
  }
  else {
    puVar7 = PTR_PTR_1126d3390;
    _objc_alloc(PTR_PTR_1126d3390);
    puVar8 = PTR_PTR_1126b6ca8;
    func_0x00010c0928c0(PTR_PTR_1126b6ca8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c041360(puVar7,param_3,param_4,puVar8,puVar9);
    _objc_release(puVar8);
  }
  _objc_release(lVar6);
  _objc_release(puVar9);
  _objc_release(lVar4);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 109037fd0; end: 109037fdf;  */

void FUN_109037fd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 109037fe0; end: 1090380bf; -[SCLensEffectPlainProcessingStrategy processPixelBufferToImage:orientation:inputSource:timestamp:error:] */

void FUN_109037fe0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_10f548428;
  func_0x000107c31820(&UNK_10f548428);
  func_0x00010bf8cee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c115120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090380c0; end: 10903822f; -[SCLensProcessingOnDemandStrategyV3 initWithEffectProcessor:effectApplicator:renderingStrategy:configuration:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1090380c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fff90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithEffectProcessor_effectAp_1125e15f8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277ff94;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11277ff98;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11277ff9c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ffa0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277ffa0) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ffa4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ffa4) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277ffa8) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277ffac) = 0;
    func_0x00010bec6b00(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109038230; end: 10903836f; -[SCLensProcessingOnDemandStrategyV3 _subscribeOnApplicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109038230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277ffa0);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c2a6680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar3);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 109038370; end: 10903842b;  */

void FUN_109038370(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010c06e0c0(), (uVar2 & 1) == 0)) {
    func_0x00010c169ba0(uVar1);
    func_0x00010c1e38e0(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10903842c;
    puStack_40 = &UNK_1108434b0;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    func_0x000107c27d8c(uVar3,&puStack_58);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10903842c; end: 1090384ab;  */

void FUN_10903842c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c169ba0(param_1,param_2,0);
    puVar1 = &UNK_10f548443;
    func_0x000107c31820(&UNK_10f548443);
    func_0x00010be715c0(param_1);
    func_0x000107c31828(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090384ac; end: 1090384ef; -[SCLensProcessingOnDemandStrategyV3 dealloc] */

void FUN_1090384ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bde0bc0();
  puStack_28 = PTR_PTR_1126fff90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090384f0; end: 109038527; -[SCLensProcessingOnDemandStrategyV3 setLensProcessingActive:] */

void FUN_1090384f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c162480();
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde0bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearPixelBuffer_112555c90);
  return;
}



/* Entry: 109038528; end: 10903884f; -[SCLensProcessingOnDemandStrategyV3 processSampleBuffer:inputSource:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109038528(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef03e0();
  uVar5 = param_3;
  if ((uVar1 & 1) == 0) {
LAB_109038654:
    _objc_retain(param_3);
  }
  else {
    func_0x00010c228aa0(param_1);
    uVar1 = param_1;
    func_0x00010bf080c0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf8cd20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf07da0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar3 != 0) {
        uVar1 = param_1;
        func_0x00010c115900();
        lVar4 = *(long *)(param_1 + (long)_DAT_11277ff9c);
        func_0x00010c0c1d80();
        if ((long)uVar1 < lVar4) {
          uVar5 = param_1;
          func_0x00010c06e0c0();
          if ((int)uVar5 == 0) {
            lVar4 = (long)_DAT_11277ffa8;
            _os_unfair_lock_lock(param_1 + lVar4);
            func_0x00010bea6f00(param_1);
            puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_70 = 0xc2000000;
            pcStack_68 = FUN_109038850;
            puStack_60 = &UNK_110842e18;
            uStack_58 = param_1;
            func_0x000107c27d8c(*(undefined8 *)(param_1 + (long)_DAT_11277ffa0),&puStack_78);
            uVar5 = param_1;
            func_0x00010be08900(param_1);
            _objc_retainAutoreleasedReturnValue();
            _os_unfair_lock_unlock(param_1 + lVar4);
          }
          else {
            func_0x00010be08900(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_1;
          }
          goto LAB_109038660;
        }
        func_0x00010bde0bc0(param_1);
        uVar1 = param_1;
        func_0x00010c06e0c0();
        if ((int)uVar1 == 0) {
          puVar6 = &UNK_10f54840d;
          func_0x000107c31820(&UNK_10f54840d);
          puStack_f0 = &uStack_a8;
          uStack_a8 = 0;
          uStack_98 = 0x3032000000;
          pcStack_90 = FUN_1090388e8;
          uStack_88 = 0x1090388f8;
          uStack_80 = 0;
          uStack_d8 = 0;
          uStack_c8 = 0x3032000000;
          pcStack_c0 = FUN_1090388e8;
          uStack_b8 = 0x1090388f8;
          uStack_b0 = 0;
          uVar7 = *(undefined8 *)(param_1 + (long)_DAT_11277ffa0);
          puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_118 = 0xc2000000;
          pcStack_110 = FUN_109038900;
          puStack_108 = &UNK_1109831c8;
          uStack_100 = param_1;
          puStack_d0 = &uStack_d8;
          puStack_a0 = puStack_f0;
          _objc_retain(param_3);
          uStack_f8 = param_3;
          puStack_e8 = &uStack_d8;
          uStack_e0 = param_4;
          func_0x000107c27da4(uVar7,&puStack_120);
          if (param_5 != (undefined8 *)0x0) {
            uVar7 = puStack_d0[5];
            _objc_retainAutorelease();
            *param_5 = uVar7;
          }
          if (puStack_a0[5] != 0) {
            uVar5 = puStack_a0[5];
          }
          _objc_retain(uVar5);
          _objc_release(uStack_f8);
          __Block_object_dispose(&uStack_d8,8);
          _objc_release(uStack_b0);
          __Block_object_dispose(&uStack_a8,8);
          _objc_release(uStack_80);
          func_0x000107c31828(puVar6);
          goto LAB_109038660;
        }
        goto LAB_109038654;
      }
    }
    lVar4 = (long)_DAT_11277ffa8;
    _os_unfair_lock_lock(param_1 + lVar4);
    func_0x00010bea6f00(param_1);
    _objc_retain(param_3);
    _os_unfair_lock_unlock(param_1 + lVar4);
  }
LAB_109038660:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 109038850; end: 1090388e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109038850(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c115900();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ff9c);
  func_0x00010c0c1d80();
  if (lVar2 < lVar3) {
    func_0x000107c31820(&UNK_10f548463);
    func_0x00010be715c0(*(undefined8 *)(param_1 + 0x20));
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1090388e8; end: 1090388ff;  */

void FUN_1090388e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109038900; end: 10903898b;  */

void FUN_109038900(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0c0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uStack_38 = *(undefined8 *)(lVar5 + 0x28);
    func_0x00010be82180(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x40),&uStack_38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_38;
    _objc_retain(uStack_38);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    _objc_release(uVar3);
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 10903898c; end: 109038a2f; -[SCLensProcessingOnDemandStrategyV3 _emptySampleBufferForSkippedFrame:] */

void FUN_10903898c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d3390;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b6ca8;
  func_0x00010c23e3e0(PTR_PTR_1126b6ca8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd088;
  func_0x00010c0db840(PTR_PTR_1126dd088);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041360(puVar1,param_2,param_3,puVar2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109038a30; end: 109038cd3; -[SCLensProcessingOnDemandStrategyV3 _performApplyAndRender] */

/* WARNING: Removing unreachable block (ram,0x000109038c50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109038a30(ulong param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar3 = param_1;
  func_0x00010c06e0c0();
  if ((uVar3 & 1) == 0) {
    lVar11 = (long)_DAT_11277ffa8;
    _os_unfair_lock_lock(param_1 + lVar11);
    lVar8 = (long)_DAT_11277ffb0;
    lVar9 = *(long *)(param_1 + lVar8);
    _objc_retain(lVar9);
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar11);
      return;
    }
    func_0x00010c13dda0(param_1);
    func_0x00010bea6f00(param_1);
    _os_unfair_lock_unlock(param_1 + lVar11);
    bVar2 = true;
    do {
      bVar1 = bVar2;
      uVar3 = param_1;
      func_0x00010c06e0c0();
      lVar10 = lVar9;
      if ((int)uVar3 != 0) break;
      uVar4 = param_1;
      func_0x00010be82180();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      puVar5 = PTR_PTR_1126d3390;
      _objc_retain(uVar4);
      _objc_opt_class(puVar5);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar3 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      if (uVar3 == 0) {
        func_0x00010c115900(param_1);
        func_0x00010c1e38e0(param_1);
      }
      else {
        uVar6 = uVar4;
        func_0x00010c092900();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c070ee0();
        _objc_release(uVar6);
        func_0x00010c115900(param_1);
        func_0x00010c1e38e0(param_1);
        if ((int)uVar7 != 0) {
          func_0x00010c12ffc0(*(undefined8 *)(param_1 + (long)_DAT_11277ff94));
          _objc_release(uVar3);
          _objc_release(uVar4);
          _objc_release(0);
          break;
        }
      }
      _os_unfair_lock_lock(param_1 + lVar11);
      if (*(long *)(param_1 + lVar8) != 0 && !(bool)(bVar1 ^ 1)) {
        func_0x00010c1286e0(param_1);
        lVar10 = *(long *)(param_1 + lVar8);
        _objc_retain(lVar10);
        _objc_release(lVar9);
        func_0x00010c13dda0(param_1);
        func_0x00010bea6f00(param_1);
      }
      _os_unfair_lock_unlock(param_1 + lVar11);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(0);
      lVar9 = lVar10;
      bVar2 = false;
    } while (bVar1);
    func_0x00010c1286e0(param_1);
    _objc_release(lVar10);
  }
  return;
}



/* Entry: 109038cd4; end: 10903903b; -[SCLensProcessingOnDemandStrategyV3 _processSampleBuffer:inputSource:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109038cd4(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  double adStack_88 [3];
  
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = param_2;
    func_0x00010bf8cd20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf07da0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar11 = param_4;
    if (lVar5 == 0) {
      _objc_retain(param_4);
    }
    else {
      func_0x00010bf0ae40(*(undefined8 *)(param_2 + _DAT_11277ff98));
      _CACurrentMediaTime();
      lVar3 = param_2;
      func_0x00010bf8cd20(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c09c900();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0ba200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010c1494c0(param_4);
      _CMSampleBufferGetImageBuffer();
      func_0x00010c1494c0(param_4);
      _CMSampleBufferGetPresentationTimeStamp(adStack_88);
      lVar3 = param_2;
      func_0x00010bf8cee0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c115100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        _objc_retain(param_4);
      }
      else {
        lVar3 = param_2;
        func_0x00010bf8cd20(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010bf07da0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0ba200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010bf8cd20();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c09c900();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010c0ba200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar3);
        lVar3 = lVar8;
        func_0x00010bf529e0();
        if (lVar3 == 0) {
          uVar1 = 0;
          dVar12 = adStack_88[0];
        }
        else {
          lVar3 = lVar8;
          func_0x00010c072060(lVar8,param_3,lVar7);
          uVar1 = (uint)lVar3;
          dVar12 = adStack_88[0];
        }
        lVar3 = lVar8;
        func_0x00010bf529e0();
        if (lVar3 == 0) {
          uVar2 = 1;
        }
        else {
          lVar3 = lVar8;
          func_0x00010c072060(lVar8,param_3,lVar5);
          uVar2 = (uint)lVar3;
        }
        puVar9 = PTR_PTR_1126dd088;
        _objc_alloc(PTR_PTR_1126dd088);
        func_0x00010c051b80();
        _objc_release(lVar4);
        if ((uVar1 & uVar2) == 1) {
          func_0x00010bf6b020(param_2);
          _objc_retainAutoreleasedReturnValue();
          _CACurrentMediaTime();
          func_0x00010bf78c00(dVar12 - param_1,param_2,param_3,lVar8,param_5);
          _objc_release(param_2);
        }
        puVar11 = PTR_PTR_1126d3390;
        _objc_alloc(PTR_PTR_1126d3390);
        puVar10 = PTR_PTR_1126b6ca8;
        func_0x00010c0928c0(PTR_PTR_1126b6ca8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c041360(puVar11,param_3,param_4,puVar10,puVar9);
        _objc_release(puVar10);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(puVar9);
      }
      _objc_release(lVar5);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10903903c; end: 109039053;  */

void FUN_10903903c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 109039054; end: 1090391bf; -[SCLensProcessingOnDemandStrategyV3 processPixelBufferToImage:orientation:inputSource:timestamp:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109039054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = &UNK_10f548428;
  func_0x000107c31820(&UNK_10f548428);
  puStack_f0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1090388e8;
  uStack_60 = 0x1090388f8;
  uStack_58 = 0;
  puStack_e8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1090388e8;
  uStack_90 = 0x1090388f8;
  uStack_88 = 0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1090391c0;
  puStack_100 = &UNK_110ad5cc0;
  uStack_c0 = param_6[1];
  uStack_c8 = *param_6;
  uStack_b8 = param_6[2];
  lStack_f8 = param_1;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  puStack_a8 = puStack_e8;
  puStack_78 = puStack_f0;
  func_0x000107c27da4(*(undefined8 *)(param_1 + _DAT_11277ffa0),&puStack_118);
  if (param_7 != (undefined8 *)0x0) {
    uVar2 = puStack_a8[5];
    _objc_retainAutorelease();
    *param_7 = uVar2;
  }
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  func_0x000107c31828(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090391c0; end: 109039273;  */

void FUN_1090391c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8cee0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  uVar2 = uVar1;
  func_0x00010c115120();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 109039274; end: 1090392ff; -[SCLensProcessingOnDemandStrategyV3 _setSampleBuffer:inputSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109039274(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + _DAT_11277ffa8);
  if (param_3 != 0) {
    func_0x00010c13dda0(param_1,param_2,param_3);
  }
  lVar2 = (long)_DAT_11277ffb0;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c1286e0(param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11277ffb4) = param_4;
  return;
}



/* Entry: 109039300; end: 109039357; -[SCLensProcessingOnDemandStrategyV3 _clearPixelBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109039300(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277ffa8;
  _os_unfair_lock_lock(param_1 + lVar1);
  func_0x00010bea6f00(param_1,param_2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar1);
  return;
}



/* Entry: 109039358; end: 1090393fb; -[SCLensProcessingOnDemandStrategyV3 cancelEffectApplicationIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109039358(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf2f580();
  func_0x00010c178160(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1090393d0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + _DAT_11277ffa0),&puStack_48);
  return;
}



/* Entry: 1090393fc; end: 109039417; -[SCLensProcessingOnDemandStrategyV3 isCanceled] */

bool FUN_1090393fc(int param_1)

{
  func_0x00010bf2f580();
  return 0 < param_1;
}



/* Entry: 109039418; end: 10903942b; -[SCLensProcessingOnDemandStrategyV3 active] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_109039418(long param_1)

{
  return *(byte *)(param_1 + _DAT_11277ff88) & 1;
}



/* Entry: 10903942c; end: 10903943b; -[SCLensProcessingOnDemandStrategyV3 setActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903942c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277ff88) = param_3;
  return;
}



/* Entry: 10903943c; end: 10903944f; -[SCLensProcessingOnDemandStrategyV3 applingLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10903943c(long param_1)

{
  return *(byte *)(param_1 + _DAT_11277ff8c) & 1;
}



/* Entry: 109039450; end: 10903945f; -[SCLensProcessingOnDemandStrategyV3 setApplingLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109039450(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277ff8c) = param_3;
  return;
}



/* Entry: 109039460; end: 10903946f; -[SCLensProcessingOnDemandStrategyV3 processingFrameNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109039460(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ffac);
}



/* Entry: 109039470; end: 10903947f; -[SCLensProcessingOnDemandStrategyV3 setProcessingFrameNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109039470(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277ffac) = param_3;
  return;
}



/* Entry: 109039480; end: 10903948f; -[SCLensProcessingOnDemandStrategyV3 cancelationCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_109039480(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277ff90);
}



/* Entry: 109039490; end: 10903949f; -[SCLensProcessingOnDemandStrategyV3 setCancelationCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109039490(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_11277ff90) = param_3;
  return;
}



/* Entry: 1090394a0; end: 10903951f; -[SCLensProcessingOnDemandStrategyV3 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090394a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ffb0,0);
  _objc_storeStrong(param_1 + _DAT_11277ffa4,0);
  _objc_storeStrong(param_1 + _DAT_11277ffa0,0);
  _objc_storeStrong(param_1 + _DAT_11277ff9c,0);
  _objc_storeStrong(param_1 + _DAT_11277ff94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ff98,0);
  return;
}



/* Entry: 109039520; end: 10903956b; +[SCDevice lens_deviceCluster] */

undefined8 FUN_109039520(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c07e1a0();
  _objc_release(puVar2);
  uVar1 = 2;
  if ((int)puVar3 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10903956c; end: 109039673; -[SCLensEffectAudioProcessor initWithAudioProcessingComponent:audioPlayer:performer:] */

undefined1 *
FUN_10903956c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fff98;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109039674; end: 10903971f; -[SCLensEffectAudioProcessor activateAudioPlayers] */

void FUN_109039674(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = 0;
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}


