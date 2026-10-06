/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10610225c; end: 10610235f; -[SCCameraDeepLinkViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610225c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f6e4,0);
  _objc_storeStrong(param_1 + _DAT_11273f6c4,0);
  _objc_storeStrong(param_1 + _DAT_11273f6c0,0);
  _objc_storeStrong(param_1 + _DAT_11273f6bc,0);
  _objc_destroyWeak(param_1 + _DAT_11273f6b8);
  _objc_storeStrong(param_1 + _DAT_11273f6e0,0);
  _objc_storeStrong(param_1 + _DAT_11273f700,0);
  _objc_storeStrong(param_1 + _DAT_11273f6ec,0);
  _objc_storeStrong(param_1 + _DAT_11273f6dc,0);
  _objc_storeStrong(param_1 + _DAT_11273f6d8,0);
  _objc_storeStrong(param_1 + _DAT_11273f6d4,0);
  _objc_storeStrong(param_1 + _DAT_11273f6b0,0);
  _objc_storeStrong(param_1 + _DAT_11273f6ac,0);
  _objc_destroyWeak(param_1 + _DAT_11273f6b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f6fc);
  return;
}



/* Entry: 106102360; end: 106102433; -[SCCreativeKitOnboardingTooltip initWithParentView:position:legacyCameraTooltipsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106102360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010becd1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126efbc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithView_appearance__11252f058,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273f704) = param_4;
    lVar3 = (long)_DAT_11273f708;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106102434; end: 10610244b; -[SCCreativeKitOnboardingTooltip resetTooltipFrame] */

void FUN_106102434(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c104290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x404e000000000000,0x405f400000000000,param_1,
             PTR_s_positionAtPoint_trianglePosition_11261eac0,7);
  return;
}



/* Entry: 10610244c; end: 10610244f; -[SCCreativeKitOnboardingTooltip willShow] */

void FUN_10610244c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1399d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetTooltipFrame_11262c090);
  return;
}



/* Entry: 106102450; end: 106102497; -[SCCreativeKitOnboardingTooltip needsToBeCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106102450(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273f708);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22f520();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106102498; end: 1061024eb; -[SCCreativeKitOnboardingTooltip markCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102498(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bef0100();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273f708);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1902c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1061024ec; end: 1061025d7; -[SCCreativeKitOnboardingTooltip _tooltipAppearance] */

void FUN_1061024ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c8098;
  _objc_alloc(PTR_PTR_1126c8098);
  uVar2 = param_1;
  func_0x00010becd340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010becd360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010becd200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051700(0x3fb999999999999a,puVar1,param_2,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ece80(puVar1,param_2,0);
  func_0x00010c213040(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061025d8; end: 1061025e7; -[SCCreativeKitOnboardingTooltip _tooltipText] */

void FUN_1061025d8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e41a58;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e41a58,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1061025e8; end: 1061025f7; -[SCCreativeKitOnboardingTooltip _tooltipTextColor] */

void FUN_1061025e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7b);
  return;
}



/* Entry: 1061025f8; end: 106102607; -[SCCreativeKitOnboardingTooltip _tooltipBackgroundColor] */

void FUN_1061025f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd5);
  return;
}



/* Entry: 106102608; end: 106102617; -[SCCreativeKitOnboardingTooltip _tooltipTextFont] */

void FUN_106102608(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 106102618; end: 10610262b; -[SCCreativeKitOnboardingTooltip .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f708,0);
  return;
}



/* Entry: 10610262c; end: 1061026bf; -[SCFeatureSnapKitImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610262c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11273f738;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11273f73c));
  func_0x00010c256420(param_1);
  puStack_38 = PTR_PTR_1126efbd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061026c0; end: 1061026cf; -[SCFeatureSnapKitImpl metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061026c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273f738),PTR_s_metadata_112610a48);
  return;
}



/* Entry: 1061026d0; end: 10610273f; -[SCFeatureSnapKitImpl creativeKitMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061026d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273f738);
  func_0x00010c0cc0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108eca868();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106102740; end: 1061027ef; -[SCFeatureSnapKitImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102740(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273f744;
  lVar2 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c18a960();
  _objc_release(lVar2);
  _objc_storeWeak(param_1 + lVar3,0);
  lVar2 = (long)_DAT_11273f738;
  func_0x00010c1e2060(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1c73c0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = (long)_DAT_11273f73c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273f72c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061027f0; end: 106102867; -[SCFeatureSnapKitImpl hasActiveLensShare] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061027f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11273f738);
  func_0x00010c0cc0c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c096de0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 106102868; end: 1061028f7; -[SCFeatureSnapKitImpl getLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102868(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11273f738);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11273f748);
    _objc_retain(lVar1);
  }
  lVar2 = lVar1;
  func_0x00010c096de0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061028f8; end: 106102bb7; -[SCFeatureSnapKitImpl startToObserveLensChangeForLensId:activeLensObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061028f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c3dc8;
  lVar8 = (long)_DAT_11273f738;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0cc0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf29420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c80a0;
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0cc0c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c096de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ace0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c2b2860(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2ce0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(*(undefined8 *)(param_1 + lVar8));
  lVar8 = (long)_DAT_11273f748;
  _objc_retain(puVar6);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar6;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273f720);
  lVar8 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c241940();
  func_0x00010c0a4200(uVar1);
  _objc_release(lVar7);
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010bfc6f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar1 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273f73c);
    *(undefined8 *)(param_1 + _DAT_11273f73c) = uVar1;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106102bb8; end: 106102c07;  */

void FUN_106102bb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be69c80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106102c08; end: 106102d8f; -[SCFeatureSnapKitImpl _onLensChanged:] */

/* WARNING: Possible PIC construction at 0x000106102c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106102c8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102c08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfc6f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(lVar4);
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    lVar4 = param_1 + _DAT_11273f744;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c18a960();
    _objc_release(lVar4);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273f72c);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9de0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273f738);
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + _DAT_11273f748);
    if (lVar4 == 0) {
      uVar3 = 0;
      func_0x00010c13c9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bfe23e0();
      _objc_release(uVar3);
      if ((int)uVar2 != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_11273f72c);
        func_0x00010bfa1820(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c9de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273f738);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1c73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setMetadata__11264f718,lVar4);
  return;
}



/* Entry: 106102d90; end: 106102e7b; -[SCFeatureSnapKitImpl setDeepLinkMetadata:userSession:toggleCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102d90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf2a2c0(param_3);
  func_0x00010beab560(param_1,param_2,uVar3,param_5);
  _objc_release(param_5);
  lVar1 = param_1;
  func_0x00010bf29440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010c13c9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bfe23e0();
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273f72c);
    func_0x00010bfa1820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106102e7c; end: 106102f33; -[SCFeatureSnapKitImpl logCameraLoadEventWithDeepLinkUrl:cameraDeepLinkMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5840;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c0b3ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048220(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + _DAT_11273f71c));
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0b3ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c137880(uVar2);
  func_0x00010c0a40a0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106102f34; end: 10610311b; -[SCFeatureSnapKitImpl lensFailedToUnlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106102f34(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  func_0x00010c137fe0();
  uVar9 = *(undefined8 *)(param_1 + (long)_DAT_11273f720);
  uVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241940();
  if (uVar3 < 5) {
    ppuVar8 = (undefined **)(&PTR_PTR_11090eef0)[uVar3];
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dd2518;
  }
  func_0x00010c0a41e0(uVar9,param_2,ppuVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b5840;
  _objc_alloc(PTR_PTR_1126b5840);
  uVar1 = param_1;
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048220(puVar4,param_2,uVar2,*(undefined8 *)(param_1 + (long)_DAT_11273f71c));
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c096de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c094320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c096de0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c097980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013ce0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e41ab8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0a40e0(puVar4,param_2,0xc,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10610311c; end: 10610312b; -[SCFeatureSnapKitImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610311c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273f738),PTR_s_shouldBlockTouchAtPoint__112669390);
  return;
}



/* Entry: 10610312c; end: 10610313b; -[SCFeatureSnapKitImpl forwardCameraOverlayTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610312c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273f738),PTR_s_hideTooltip_1125d64c8);
  return;
}



/* Entry: 10610313c; end: 10610314b; -[SCFeatureSnapKitImpl forwardCameraTimerGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610313c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273f738),PTR_s_hideTooltip_1125d64c8);
  return;
}



/* Entry: 10610314c; end: 10610316b; -[SCFeatureSnapKitImpl setCanEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610314c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11273f714) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11273f714) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be01390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didToggleAvailability_11255de80);
  return;
}



/* Entry: 10610316c; end: 1061031cf; -[SCFeatureSnapKitImpl _didToggleAvailability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610316c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11273f738);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1061031d0; end: 10610330b; -[SCFeatureSnapKitImpl cameraDeepLinkViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061031d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11273f738;
  lVar3 = *(long *)(param_1 + lVar6);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c80a8;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273f718);
    lVar3 = param_1 + _DAT_11273f728;
    _objc_loadWeakRetained(lVar3);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273f71c);
    lVar2 = param_1 + _DAT_11273f724;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c022180(puVar1,param_2,uVar4,lVar3,uVar5,lVar2,
                        *(undefined8 *)(param_1 + _DAT_11273f730),
                        *(undefined8 *)(param_1 + _DAT_11273f734));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273f740);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fc0(uVar5,param_2,uVar4,0);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    lVar3 = param_1 + _DAT_11273f744;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1e2060(uVar4,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10610330c; end: 10610336b; -[SCFeatureSnapKitImpl _setupCameraPosition:toggleCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610330c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if ((param_3 != -1) && (*(long *)(param_1 + _DAT_11273f70c) != param_3)) {
    func_0x00010c272720(param_4,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10610336c; end: 10610337b; -[SCFeatureSnapKitImpl canEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10610336c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273f714);
}



/* Entry: 10610337c; end: 1061033bb; -[SCFeatureSnapKitImpl setCameraDeepLinkViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610337c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273f738;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061033bc; end: 1061034bf; -[SCFeatureSnapKitImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061033bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f738,0);
  _objc_storeStrong(param_1 + _DAT_11273f74c,0);
  _objc_storeStrong(param_1 + _DAT_11273f734,0);
  _objc_storeStrong(param_1 + _DAT_11273f730,0);
  _objc_storeStrong(param_1 + _DAT_11273f748,0);
  _objc_storeStrong(param_1 + _DAT_11273f72c,0);
  _objc_destroyWeak(param_1 + _DAT_11273f728);
  _objc_destroyWeak(param_1 + _DAT_11273f724);
  _objc_storeStrong(param_1 + _DAT_11273f720,0);
  _objc_storeStrong(param_1 + _DAT_11273f71c,0);
  _objc_storeStrong(param_1 + _DAT_11273f750,0);
  _objc_storeStrong(param_1 + _DAT_11273f718,0);
  _objc_storeStrong(param_1 + _DAT_11273f73c,0);
  _objc_destroyWeak(param_1 + _DAT_11273f744);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f740,0);
  return;
}



/* Entry: 1061034c0; end: 10610370b;  */

void FUN_1061034c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10610370c;
  puStack_80 = &UNK_11090b530;
  _objc_copyWeak(auStack_78,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106103774;
  puStack_a8 = &UNK_11090b590;
  _objc_copyWeak(auStack_a0,param_1 + 0x20);
  func_0x00010c0e3ae0(param_2);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1061037f4;
  puStack_d0 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_c8,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x106103874;
  puStack_f8 = &UNK_11090b530;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1061038dc;
  puStack_120 = &UNK_11090eec0;
  _objc_copyWeak(auStack_118,param_1 + 0x20);
  func_0x00010c0e3b00(param_2);
  _objc_copyWeak(auStack_140,param_1 + 0x20);
  func_0x00010c0e3860(param_2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 10610370c; end: 10610394b;  */

void FUN_10610370c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc4c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10610394c; end: 106103977;  */

void FUN_10610394c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106103978; end: 1061039ab; -[SCFeatureSnapKitImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106103978(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273f74c;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061039ac; end: 1061039b3; -[SCFeatureSnapKitImpl _didBeginVideoRecording:session:] */

void FUN_1061039ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,0);
  return;
}



/* Entry: 1061039b4; end: 1061039e7; -[SCFeatureSnapKitImpl _didFinishRecording:session:recordedVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061039b4(long param_1)

{
  func_0x00010bf72ea0(*(undefined8 *)(param_1 + _DAT_11273f738));
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,1);
  return;
}



/* Entry: 1061039e8; end: 1061039ef; -[SCFeatureSnapKitImpl _didFailRecording:session:error:] */

void FUN_1061039e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,1);
  return;
}



/* Entry: 1061039f0; end: 1061039f7; -[SCFeatureSnapKitImpl _didCancelRecording:session:] */

void FUN_1061039f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,1);
  return;
}



/* Entry: 1061039f8; end: 1061039ff; -[SCFeatureSnapKitImpl _didGetError:forType:session:] */

void FUN_1061039f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,1);
  return;
}



/* Entry: 106103a00; end: 106103a0f; -[SCFeatureSnapKitImpl _didCapturePhoto] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106103a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273f738),PTR_s_didCaptureSnap_1125ba550);
  return;
}



/* Entry: 106103a10; end: 106103a3b; +[SCGrapheneSnapKitCameraMetric ckLensUnlockError] */

void FUN_106103a10(void)

{
  _objc_alloc(PTR_PTR_1126c8070);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103a3c; end: 106103a67; +[SCGrapheneSnapKitCameraMetric ckLensUnlockSuccess] */

void FUN_106103a3c(void)

{
  _objc_alloc(PTR_PTR_1126c8070);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103a68; end: 106103b07; -[SCGrapheneSnapKitCameraMetric description] */

void FUN_106103a68(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e41b58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e41b58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126efbd8;
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



/* Entry: 106103b08; end: 106103b33; +[SCGrapheneWidgetsMetric widgetAdded] */

void FUN_106103b08(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103b34; end: 106103b5f; +[SCGrapheneWidgetsMetric widgetRemoved] */

void FUN_106103b34(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103b60; end: 106103b8b; +[SCGrapheneWidgetsMetric widgetEdited] */

void FUN_106103b60(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103b8c; end: 106103bb7; +[SCGrapheneWidgetsMetric widgetPmfUsage] */

void FUN_106103b8c(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103bb8; end: 106103be3; +[SCGrapheneWidgetsMetric widgetCameraUsage] */

void FUN_106103bb8(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103be4; end: 106103c0f; +[SCGrapheneWidgetsMetric widgetBirthdayUsage] */

void FUN_106103be4(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103c10; end: 106103c3b; +[SCGrapheneWidgetsMetric widgetMemUsage] */

void FUN_106103c10(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103c3c; end: 106103c67; +[SCGrapheneWidgetsMetric widgetFriendLocationUsage] */

void FUN_106103c3c(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103c68; end: 106103c93; +[SCGrapheneWidgetsMetric configWidgetUsage] */

void FUN_106103c68(void)

{
  _objc_alloc(PTR_PTR_1126c80b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106103c94; end: 106103d33; -[SCGrapheneWidgetsMetric description] */

void FUN_106103c94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e41bb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e41bb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126efbe0;
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



/* Entry: 106103d34; end: 106103ec7; -[SCGrapheneRegistry widgetsGraphene] */

void FUN_106103d34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106103dbc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3380 != -1) {
    func_0x00010002a2fc(0x1136c3380,&puStack_48);
  }
  uVar1 = uRam00000001136c3378;
  _objc_retain(uRam00000001136c3378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106103ec8; end: 1061040ab; -[SCWidgetAPIImpl initWithUnifiedGRPCClientFactory:] */

undefined8 * FUN_106103ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126efbe8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061040ac; end: 106104213; -[SCWidgetAPIImpl sendPinnedNotificationTo:completion:] */

void FUN_1061040ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c80c0;
  _objc_alloc_init(PTR_PTR_1126c80c0);
  puVar2 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  puVar3 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c212620(puVar1,param_2,puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106104214;
  puStack_68 = &UNK_11090ef48;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c15c340(uVar5,param_2,puVar1,0,&puStack_80);
  _objc_release(uVar5);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106104214; end: 106104227;  */

void FUN_106104214(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106104220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106104228; end: 106104233; -[SCWidgetAPIImpl .cxx_destruct] */

void FUN_106104228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106104234; end: 1061042cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106104234(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c80c8;
    _objc_alloc(PTR_PTR_1126c80c8);
    lVar1 = param_1 + _DAT_11273f758;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcfa00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058ca0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061042cc; end: 106104313; -[SCWidgetServicesImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061042cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f75c,0);
  _objc_destroyWeak(param_1 + _DAT_11273f758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f760);
  return;
}



/* Entry: 106104314; end: 106104387; -[UNISCMessagingWidgetService initWithUnifiedGrpcService:] */

undefined1 * FUN_106104314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efbf0;
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



/* Entry: 106104388; end: 10610446b; -[UNISCMessagingWidgetService sendPinMyFriendNotificationWithRequest:callOptionsBuilder:handler:] */

void FUN_106104388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c80d8;
  _objc_opt_class(PTR_PTR_1126c80d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e41d38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10610446c; end: 106104477; -[UNISCMessagingWidgetService .cxx_destruct] */

void FUN_10610446c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106104478; end: 106104483; -[SCWidgetServices .cxx_destruct] */

void FUN_106104478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106104484; end: 10610457b; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl initWithCameraHardwareResource:cameraHardwareServicesAPI:lensLogger:ngsmePlaybackServices:] */

undefined1 *
FUN_106104484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126efc00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c0c6c20();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x28) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10610457c; end: 1061046eb; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl updateCameraWithMediaSource:completion:] */

void FUN_10610457c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010bea2800(param_1);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1061046ec;
    puStack_60 = &UNK_11090efa8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    lStack_58 = param_4;
    _objc_copyWeak(auStack_80,auStack_48);
    _objc_retain(param_4);
    func_0x00010c0bdd80(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061046ec; end: 1061047a3;  */

void FUN_1061046ec(long param_1,undefined8 param_2,int param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010bed4c20();
  }
  else {
    func_0x00010bed4c40();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061047a4; end: 106104863; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl restoreCameraStreamWithCompletion:] */

void FUN_1061047a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    pcVar3 = *(code **)(param_3 + 0x10);
    _objc_retain(param_3);
    (*pcVar3)(param_3);
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 1;
    _objc_retain(param_3);
    func_0x00010be95500(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b81e0(uVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bed9c00(param_1,param_2,0,*(undefined8 *)(param_1 + 0x38),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106104864; end: 10610492f; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl managedVideoDataSource:sampleBufferAtTime:isRecording:] */

undefined8
FUN_106104864(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1[0x28] & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0b81a0();
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    param_3 = param_1;
    _CMSetAttachment(uVar4,*(undefined8 *)PTR__kCGImagePropertyExifDictionary_110349cd0,param_1);
    _objc_release();
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return uVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  if ((param_1[0x28] & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = param_1 + 8;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ae40();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_4;
    _objc_release(uVar4);
    func_0x00010c0b81c0(*(undefined8 *)(param_1 + 0x18));
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return param_4;
}



/* Entry: 106104930; end: 1061049db; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl managedVideoDataSourceDidStartStreaming:performer:] */

void FUN_106104930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    _objc_retain(param_3);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ae40();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_4;
    _objc_release(uVar3);
    func_0x00010c0b81c0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061049dc; end: 106104a57; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl managedVideoDataSourceDidStopStreaming:] */

void FUN_1061049dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0b81e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106104a58; end: 106104a5f; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl mediaSizeOfManagedVideoDataSource] */

void FUN_106104a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c6790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_mediaSizeOfManagedVideoDataSourc_11260f3f8);
  return;
}



/* Entry: 106104a60; end: 106104a67; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl mediaAspectRatioOfManagedVideoDataSource] */

void FUN_106104a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c40d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_mediaAspectRatioOfManagedVideoDa_11260ea48);
  return;
}



/* Entry: 106104a68; end: 106104bc7; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateCameraWithVideoURL:completion:] */

void FUN_106104a68(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (*(char *)(param_1 + 0x28) == '\x01')) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    lVar1 = param_3;
    FUN_106121008(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bf678;
    _objc_alloc(PTR_PTR_1126bf678);
    func_0x00010af1f598();
    puVar3 = PTR_PTR_1126c80e0;
    _objc_alloc(PTR_PTR_1126c80e0);
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c0da2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02d3a0(puVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    func_0x00010c250c00(puVar3);
    func_0x00010bed9c00(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106104bc8; end: 106104c8b; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateCameraWithImageURL:completion:] */

void FUN_106104bc8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((param_3 == 0) || (*(char *)(param_1 + 0x28) == '\x01')) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d020(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bed4c00(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106104c8c; end: 106104d5f; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateCameraWithImage:completion:] */

void FUN_106104c8c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (*(char *)(param_1 + 0x28) == '\x01')) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puVar1 = PTR_PTR_1126c80e8;
    _objc_alloc(PTR_PTR_1126c80e8);
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c200(puVar1,param_2,puVar2,8);
    _objc_release(puVar2);
    func_0x00010bed9c00(param_1,param_2,puVar1,2,param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106104d60; end: 106104df7; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _restoreCameraHardwareResourceStreamProvider] */

void FUN_106104d60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106104df8;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  _objc_retain(param_1);
  func_0x00010c0f7fc0(lVar1,param_2,&puStack_48);
  _objc_release(lVar1);
  _objc_release(lStack_28);
  _objc_release(param_1);
  return;
}



/* Entry: 106104df8; end: 106104e03;  */

void FUN_106104df8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c221530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setVideoDataSourceStreamProvider_112665f70,0);
  return;
}



/* Entry: 106104e04; end: 106104ef7; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _setCameraHardwareResourceStreamProviderToSelf] */

void FUN_106104e04(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106104ef8; end: 106104f2f;  */

void FUN_106104ef8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c221520(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106104f30; end: 10610506b; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl _updateInnerStreamProvider:mediaType:completion:] */

void FUN_106104f30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10610506c; end: 1061050c7;  */

void FUN_10610506c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061050c8; end: 10610511b; -[SCAlwaysOnMediaPickerCameraSourceControllerImpl .cxx_destruct] */

void FUN_1061050c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10610511c; end: 106105227; -[SCAlwaysOnMediaPickerCameraServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610511c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273f78c);
  *(undefined **)(param_1 + _DAT_11273f78c) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c80f0;
  _objc_alloc(PTR_PTR_1126c80f0);
  func_0x00010bffbbc0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273f790));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106105228; end: 106105267;  */

void FUN_106105228(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106105268; end: 1061052df; -[SCAlwaysOnMediaPickerCameraServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106105268(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273f78c);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c240();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126efc08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061052e0; end: 1061052e3;  */

void FUN_1061052e0(void)

{
  return;
}



/* Entry: 1061052e4; end: 10610546b; -[SCAlwaysOnMediaPickerCameraServicesEntryPoint _createPickerCameraSourceController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061052e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126c80f8;
  _objc_alloc(PTR_PTR_1126c80f8);
  lVar2 = param_1;
  FUN_10610546c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_10610546c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11273f79c;
    _objc_loadWeakRetained(lVar11);
  }
  lVar8 = lVar11;
  func_0x00010c094e60(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = 0;
  if (param_1 != 0) {
    lVar10 = param_1 + _DAT_11273f7a0;
    _objc_loadWeakRetained(lVar10);
  }
  func_0x00010bffb3a0(puVar1,param_2,lVar4,lVar7,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10610546c; end: 10610548f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610546c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273f798);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106105490; end: 1061054ff; -[SCAlwaysOnMediaPickerCameraServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106105490(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f790,0);
  _objc_destroyWeak(param_1 + _DAT_11273f7a0);
  _objc_destroyWeak(param_1 + _DAT_11273f79c);
  _objc_destroyWeak(param_1 + _DAT_11273f798);
  _objc_destroyWeak(param_1 + _DAT_11273f794);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f78c,0);
  return;
}



/* Entry: 106105500; end: 10610575b; -[SCCameraPreviewPresenterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106105500(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f840,0);
  _objc_storeStrong(param_1 + _DAT_11273f83c,0);
  _objc_storeStrong(param_1 + _DAT_11273f838,0);
  _objc_destroyWeak(param_1 + _DAT_11273f834);
  _objc_destroyWeak(param_1 + _DAT_11273f830);
  _objc_destroyWeak(param_1 + _DAT_11273f82c);
  _objc_destroyWeak(param_1 + _DAT_11273f828);
  _objc_destroyWeak(param_1 + _DAT_11273f824);
  _objc_destroyWeak(param_1 + _DAT_11273f820);
  _objc_destroyWeak(param_1 + _DAT_11273f81c);
  _objc_destroyWeak(param_1 + _DAT_11273f818);
  _objc_destroyWeak(param_1 + _DAT_11273f814);
  _objc_destroyWeak(param_1 + _DAT_11273f810);
  _objc_destroyWeak(param_1 + _DAT_11273f80c);
  _objc_destroyWeak(param_1 + _DAT_11273f808);
  _objc_destroyWeak(param_1 + _DAT_11273f804);
  _objc_destroyWeak(param_1 + _DAT_11273f800);
  _objc_destroyWeak(param_1 + _DAT_11273f7fc);
  _objc_destroyWeak(param_1 + _DAT_11273f7f8);
  _objc_destroyWeak(param_1 + _DAT_11273f7f4);
  _objc_destroyWeak(param_1 + _DAT_11273f7f0);
  _objc_destroyWeak(param_1 + _DAT_11273f7ec);
  _objc_destroyWeak(param_1 + _DAT_11273f7e8);
  _objc_destroyWeak(param_1 + _DAT_11273f7e4);
  _objc_destroyWeak(param_1 + _DAT_11273f7e0);
  _objc_destroyWeak(param_1 + _DAT_11273f7dc);
  _objc_destroyWeak(param_1 + _DAT_11273f7d8);
  _objc_destroyWeak(param_1 + _DAT_11273f7d4);
  _objc_destroyWeak(param_1 + _DAT_11273f7d0);
  _objc_destroyWeak(param_1 + _DAT_11273f7cc);
  _objc_destroyWeak(param_1 + _DAT_11273f7c8);
  _objc_destroyWeak(param_1 + _DAT_11273f7c4);
  _objc_destroyWeak(param_1 + _DAT_11273f7c0);
  _objc_destroyWeak(param_1 + _DAT_11273f7bc);
  _objc_destroyWeak(param_1 + _DAT_11273f7b8);
  _objc_destroyWeak(param_1 + _DAT_11273f7b4);
  _objc_destroyWeak(param_1 + _DAT_11273f7b0);
  _objc_destroyWeak(param_1 + _DAT_11273f7ac);
  _objc_destroyWeak(param_1 + _DAT_11273f7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f7a4);
  return;
}



/* Entry: 10610575c; end: 106105863; -[SCCameraPreviewNavigationEventsLensLoggerTracker _subscribeOnNavigationEventsProvider:] */

void FUN_10610575c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf2a400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106105864; end: 10610598b;  */

void FUN_106105864(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd4a0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10610598c; end: 1061059c7; -[SCCameraPreviewNavigationEventsLensLoggerTracker .cxx_destruct] */

void FUN_10610598c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061059c8; end: 106105a4b; -[SCCameraPreviewDestinationStrategy initWithCircumstanceEngine:cameraType:] */

undefined1 *
FUN_1061059c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126efc18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106105a4c; end: 106105a73; -[SCCameraPreviewDestinationStrategy _shouldReturnToMainCameraAfterSnapSend:groupCount:] */

undefined8 FUN_106105a4c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_3 == 1) && (param_4 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e41d58,0,0);
    return uVar1;
  }
  return 0;
}


