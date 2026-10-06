/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104edf240; end: 104edf2ef; -[SCMapPlaceProfileV2Controller onTrayPositionUpdatedWithTrayPosition:exitType:] */

void FUN_104edf240(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar4 = 3;
  if (param_3 == 0x10) {
    uVar4 = 4;
  }
  uVar2 = 2;
  if (param_3 != 4) {
    uVar2 = uVar4;
  }
  uVar4 = 1;
  if (param_3 != 2) {
    uVar4 = 3;
  }
  uVar1 = 0;
  if (param_3 != 1) {
    uVar1 = uVar4;
  }
  if (param_3 < 4) {
    uVar2 = uVar1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar3);
  _objc_release(puVar3);
  if (param_4 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x120),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104edf2f0; end: 104edf42b; -[SCMapPlaceProfileV2Controller _createTrayLifecycleWithViewController:] */

void FUN_104edf2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104eefa3c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_104eefaf8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf2a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d26a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf59b80(0x406ae00000000000,0x3fe19999a0000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x30,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27b480();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104edf42c; end: 104edf5c7; -[SCMapPlaceProfileV2Controller _addFloatingExternalPlaceLinkButton] */

void FUN_104edf42c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1fb0;
    _objc_alloc(PTR_PTR_1126b1fb0);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fd160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c272480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9f60(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1c0340(puVar2);
    puVar5 = PTR_PTR_1126b1fb8;
    _objc_alloc(PTR_PTR_1126b1fb8);
    func_0x00010c061d40();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d26a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef85a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104edf5c8; end: 104edf5ff;  */

void FUN_104edf5c8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfd1280(*(undefined8 *)(param_1 + 0x90),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104edf600; end: 104edf64b; -[SCMapPlaceProfileV2Controller _removeFloatingExternalPlaceLinkButton] */

void FUN_104edf600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d26a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c700();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104edf64c; end: 104edf747; -[SCMapPlaceProfileV2Controller _setTrayPosition:] */

void FUN_104edf64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf5fb20();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 4) {
      _objc_initWeak(auStack_48,param_1);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104edf748;
      puStack_60 = &UNK_110846540;
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = param_3;
      func_0x0001000d76cc("APPSTORE",&puStack_78);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 104edf748; end: 104edf807;  */

void FUN_104edf748(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x30;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf5fb20();
    _objc_release(lVar2);
    if (lVar3 != 2) {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c0d26a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1 + 0x30;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c219f40(uVar5,param_2,lVar2,*(undefined8 *)(param_1 + 0x28),1);
      _objc_release(lVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104edf808; end: 104edf8ff; -[SCMapPlaceProfileV2Controller _venueProfileViewModelV2WithPlaceId:metricsData:onlyShowHeader:isPromoted:] */

void FUN_104edf808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1e30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0305c0(0);
  puVar2 = PTR_PTR_1126b1fc0;
  _objc_alloc(PTR_PTR_1126b1fc0);
  func_0x00010c036520();
  _objc_release(param_3);
  func_0x00010c170a80(puVar2,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c220a80(puVar2,param_2,param_4);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b39c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104edf900; end: 104edf9e3; -[SCMapPlaceProfileV2Controller _updateVenueProfileViewModelV2WithPlaceId:onlyShowHeader:metricsData:] */

void FUN_104edf900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be7fba0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c297fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220a80(lVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c220a80(lVar1,param_2,param_5);
  }
  func_0x00010c170a80(lVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c1be860(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be3a8);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x40),param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104edf9e4; end: 104edfd77; -[SCMapPlaceProfileV2Controller _prevViewModelForV2WithPlaceId:onlyShowHeader:] */

void FUN_104edf9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR_PTR_1126b1e30;
    _objc_alloc(PTR_PTR_1126b1e30);
    func_0x00010c0305c0(0);
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0x40);
    func_0x00010c29d560(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c259320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b1fc0;
  _objc_alloc(PTR_PTR_1126b1fc0);
  func_0x00010c036520();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c29d560(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170a80(puVar4,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if ((int)uVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c09c260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be860(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c297b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2207a0(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c297fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220a80(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0fd3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc6e0(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf25060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174520(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0fd340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc620(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf2c3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c177b60(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf444c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17fde0(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c07b500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b39c0(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104edfd78; end: 104edff1b; -[SCMapPlaceProfileV2Controller _basemapDebugInfo] */

void FUN_104edfd78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_2 + 0xe0);
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0xe0);
      func_0x00010c0ed7e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010676a178();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010c0dff20(uVar2,param_3,&PTR____CFConstantStringClassReference_110e5bbd8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c27e100();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010c0dff20(uVar2,param_3,&PTR____CFConstantStringClassReference_110e5bc98);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c27e100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar6);
      puVar8 = PTR_PTR_1126b1fc8;
      _objc_alloc_init(PTR_PTR_1126b1fc8);
      func_0x00010c189f20();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18a060(puVar8,param_3,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_release(uVar2);
      goto LAB_104edff00;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_104edff00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104edff1c; end: 104ee012f; -[SCMapPlaceProfileV2Controller _placeTrayConfigurationWithPlaceIdentifier:openSource:sourceSessionId:sourceType:viewportSessionData:layerSource:hasMediaPin:] */

void FUN_104edff1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar2 = PTR_PTR_1126b1fd0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_6 != (undefined **)0x0) {
    ppuVar1 = param_6;
  }
  func_0x00010bb0197c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15ffa0();
  uVar5 = param_7;
  func_0x00010c29f6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c067fc0();
  uVar7 = param_7;
  func_0x00010c0d8020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar8 = uVar7;
  func_0x00010c067fc0();
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0bac20();
  uVar11 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0ba460(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf200();
  func_0x00010c031ba0(puVar2,param_2,param_4,ppuVar1,0,param_8,uVar4,uVar6,uVar8,uVar10,param_5,
                      param_3,param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ee0130; end: 104ee021f; -[SCMapPlaceProfileV2Controller _registerLoadStateObservable] */

void FUN_104ee0130(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c09c2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ee0220; end: 104ee0267;  */

void FUN_104ee0220(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ee0268; end: 104ee0707; -[SCMapPlaceProfileV2Controller _onLoadStateChange:] */

void FUN_104ee0268(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  func_0x00010c259340(*(undefined8 *)(param_2 + 8));
  uVar1 = param_4;
  func_0x00010c067ec0();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c09c260();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c067ec0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1e30;
  _objc_alloc(PTR_PTR_1126b1e30);
  func_0x00010c0de240(*(undefined8 *)(param_2 + 8));
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c259320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c11f900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0305c0(param_1,puVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c259320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd7e20();
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a60e0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b1fc0;
  _objc_alloc(PTR_PTR_1126b1fc0);
  func_0x00010c036520();
  func_0x00010c1be860();
  lVar6 = *(long *)(param_2 + 8);
  func_0x00010c297b80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c09e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar7 == 0) {
    func_0x00010c2207a0(puVar5);
  }
  else {
    puVar8 = PTR_PTR_1126b1fd8;
    _objc_alloc_init(PTR_PTR_1126b1fd8);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c297b80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c09e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf5a0(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c297b80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297f80();
    func_0x00010c1c8c60(puVar8);
    _objc_release(uVar4);
    func_0x00010c2207a0(puVar5);
    _objc_release(puVar8);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c297fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220a80(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0fd3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc6e0(puVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf25060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174520(puVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0fd340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc620(puVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf444c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fde0(puVar5);
  _objc_release(uVar4);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07b500(*(undefined8 *)(param_2 + 0x28));
  func_0x00010c0df6e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b39c0(puVar5);
  _objc_release(puVar8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0fd160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c272480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc460(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c2226c0(*(undefined8 *)(param_2 + 0x40));
  if (((int)uVar1 != (int)uVar9) && (uVar1 = param_4, func_0x00010c067ec0(), (int)uVar1 == 2)) {
    uVar9 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0fd3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010bfedda0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0f4be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar9);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104ee0708;
    puStack_88 = &UNK_110841f80;
    lStack_80 = param_2;
    uStack_78 = uVar4;
    _objc_retain(uVar4);
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    _objc_release(uStack_78);
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee0708; end: 104ee078f;  */

void FUN_104ee0708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c247d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc6c0(uVar3,param_2,uVar1,*(undefined8 *)(param_1 + 0x28),uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ee0790; end: 104ee09ef; -[SCMapPlaceProfileV2Controller _setupVenueProfileV2ContextWithConfiguration:] */

void FUN_104ee0790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b1fe0;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x90) = puVar2;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    lVar3 = param_1;
    func_0x00010bea1780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59ea0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b7620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c220a60(uVar7);
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c220a20(uVar7);
    _objc_release(lVar3);
    func_0x00010c161e00(uVar7);
    puVar2 = PTR_PTR_1126b1fe8;
    _objc_alloc();
    func_0x00010c001d80();
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined **)(param_1 + 0xb8) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219d80(*(undefined8 *)(param_1 + 0xb8));
    func_0x00010c20d160(uVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x120);
    func_0x00010c272120(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d540(uVar7);
    _objc_release(uVar4);
    func_0x00010c220980(uVar7);
    puVar2 = PTR_DAT_1126a4eb8;
    uVar8 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar8);
    uVar6 = uVar8;
    func_0x00010010fab4(uVar8,puVar2);
    uVar4 = uVar8;
    if ((int)uVar6 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar8);
    func_0x00010c17fe80(uVar7);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfcd5a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3e60(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 104ee09f0; end: 104ee0a37; -[SCMapPlaceProfileV2Controller _sessionIdsHolderObservable] */

void FUN_104ee09f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c1600c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104ee0a38; end: 104ee0a3b; -[SCMapPlaceProfileV2Controller onVenueLoadStateChangedWithState:] */

void FUN_104ee0a38(void)

{
  return;
}



/* Entry: 104ee0a3c; end: 104ee0e3f; -[SCMapPlaceProfileV2Controller onVenueLoadedWithName:lat:lng:boundingBox:categoryIconUrl:kind:analyticsData:placePivots:placeLoyaltyData:] */

void FUN_104ee0a3c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  dVar12 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010be55980(param_3);
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c259320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df1e0();
  if (1.0 <= dVar12) {
    uVar11 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010c259320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11f900();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar9;
    func_0x00010c26e500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar11);
  }
  else {
    uStack_80 = 0;
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0fd3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bfedda0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c072ac0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release();
  iVar1 = (int)uVar4;
  _CLLocationCoordinate2DIsValid(*(undefined8 *)(param_3 + 0xf0),*(undefined8 *)(param_3 + 0xf8));
  if (iVar1 == 0) {
    _CLLocationCoordinate2DMake(param_1,param_2);
  }
  else {
    param_1 = *(double *)(param_3 + 0xf0);
    param_2 = *(undefined8 *)(param_3 + 0xf8);
  }
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_3 + 0xe8);
  *(undefined8 *)(param_3 + 0xe8) = param_6;
  _objc_release(uVar5);
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010bf16500();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    puVar7 = PTR_PTR_1126b1ff0;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bfe5ec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 == 0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      puStack_88 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = param_10;
    func_0x0001067684f4(param_10,param_11 != 0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_11;
    func_0x00010c11f520();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf16500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b520(param_1,param_2);
    uVar11 = *(undefined8 *)(param_3 + 0xe0);
    *(undefined **)(param_3 + 0xe0) = puVar7;
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      _objc_release(puStack_88);
    }
  }
  else {
    _objc_retain(lVar6);
    uVar5 = *(undefined8 *)(param_3 + 0xe0);
    *(long *)(param_3 + 0xe0) = lVar6;
  }
  _objc_release(uVar5);
  _objc_release(lVar6);
  uVar10 = *(ulong *)(param_3 + 0x28);
  func_0x00010bf51c80();
  _CLLocationCoordinate2DIsValid();
  if ((uVar10 & 1) == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  lVar6 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c0fd420();
  _objc_release(lVar6);
  func_0x00010bea8b20(param_3);
  _objc_release(uStack_80);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ee0e40; end: 104ee0e47; -[SCMapPlaceProfileV2Controller onTrayPositionUpdate] */

void FUN_104ee0e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x118),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 104ee0e48; end: 104ee0eff; -[SCMapPlaceProfileV2Controller getPrefetchedRankedStoryPlaylistForPlaceID:] */

void FUN_104ee0e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c11f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4bb00();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    func_0x00010c11f8e0(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ee0f00; end: 104ee0f07; -[SCMapPlaceProfileV2Controller shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104ee0f00(void)

{
  return 0;
}



/* Entry: 104ee0f08; end: 104ee0fb3; -[SCMapPlaceProfileV2Controller _logMapPlaceProfileReadyWithAnalyticsData:] */

void FUN_104ee0f08(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126afec0;
  _objc_retain(param_4);
  func_0x00010bf604c0(puVar1);
  uVar2 = param_4;
  func_0x00010c27efa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c2827c0(uVar2);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c0b9ce0(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  func_0x00010c0fd4a0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c0b9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,PTR_s_mapPlaceProfileReadyWithMapSessi_11260c020,uVar4,uVar5,
             (long)(param_1 - (double)uVar3));
  return;
}



/* Entry: 104ee0fb4; end: 104ee0fbf; -[SCMapPlaceProfileV2Controller _prefetchPlaylist:] */

void FUN_104ee0fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c109d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_preparePlaylistForPlaceID_source_112620170,
             param_3,1);
  return;
}



/* Entry: 104ee0fc0; end: 104ee0fc7; -[SCMapPlaceProfileV2Controller metricHandler] */

undefined8 FUN_104ee0fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 104ee0fc8; end: 104ee0fdf; -[SCMapPlaceProfileV2Controller trayLifecycle] */

void FUN_104ee0fc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ee0fe0; end: 104ee0fe7; -[SCMapPlaceProfileV2Controller mapPlace] */

undefined8 FUN_104ee0fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 104ee0fe8; end: 104ee0fef; -[SCMapPlaceProfileV2Controller trayData] */

undefined8 FUN_104ee0fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104ee0ff0; end: 104ee1193; -[SCMapPlaceProfileV2Controller .cxx_destruct] */

void FUN_104ee0ff0(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
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
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ee1194; end: 104ee12e7; -[SCMapPlaceProfileV2ComponentFetcher initWithPlaceProfileDataFetcher:storyFetcher:placeDiscoveryDataFetcher:circumstanceEngine:mapInstance:] */

undefined1 *
FUN_104ee1194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e4e28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x000109021e98();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ee12e8; end: 104ee132f; -[SCMapPlaceProfileV2ComponentFetcher dealloc] */

void FUN_104ee12e8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126e4e28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ee1330; end: 104ee1357; -[SCMapPlaceProfileV2ComponentFetcher componentSectionsUpdateObservable] */

void FUN_104ee1330(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ee1358; end: 104ee1657; -[SCMapPlaceProfileV2ComponentFetcher onPlaceComponentVisibleWithPlaceId:sectionIndex:requestId:] */

void FUN_104ee1358(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_e0 [8];
  double dStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010bf51e00();
  if (param_1 != -1.0) {
    uVar2 = *(ulong *)(param_2 + 0x30);
    func_0x00010bf529e0();
    if (param_1 < (double)uVar2) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0fdc60();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104ee1658;
      puStack_88 = &UNK_110858fe0;
      _objc_retain(param_4);
      uVar4 = uVar2;
      uStack_80 = param_4;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar4 != 0) {
        uVar2 = uVar4;
        func_0x00010c259320();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf09a20();
        _objc_release(uVar2);
        if ((uVar5 & 1) == 0) {
          lVar6 = param_2;
          func_0x00010bdf1ea0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_2;
          func_0x00010bdf4100();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7);
          _objc_initWeak(auStack_a8,param_2);
          puVar9 = PTR_PTR_1126ae6b8;
          puStack_d0 = puVar10;
          uStack_c8 = 0xc2000000;
          pcStack_c0 = FUN_104ee16a0;
          puStack_b8 = &UNK_110859758;
          _objc_retain(param_4);
          uStack_b0 = param_4;
          func_0x00010bf41860(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_e0,auStack_a8);
          _objc_retain(param_4);
          dStack_d8 = param_1;
          _objc_retain(uVar1);
          puVar10 = puVar9;
          func_0x00010c25ff60(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(uVar1);
          _objc_release(param_4);
          _objc_destroyWeak(auStack_e0);
          _objc_release(uStack_b0);
          _objc_destroyWeak(auStack_a8);
          _objc_release(lVar8);
          _objc_release(puVar7);
          _objc_release(lVar6);
        }
      }
      _objc_release(uVar4);
      _objc_release(uStack_80);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee1658; end: 104ee169f;  */

undefined8 FUN_104ee1658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104ee16a0; end: 104ee1803;  */

void FUN_104ee16a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf529e0();
  lVar5 = 0;
  if (lVar2 == 2) {
    lVar5 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b1ef0;
  _objc_alloc(PTR_PTR_1126b1ef0);
  lVar2 = lVar1;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de340(lVar1);
  lVar4 = lVar5;
  func_0x00010c259360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd7e20(lVar5);
  func_0x00010c251000(lVar5);
  func_0x00010c036560(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ee1804; end: 104ee1867;  */

void FUN_104ee1804(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be329e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee1868; end: 104ee1a37; -[SCMapPlaceProfileV2ComponentFetcher fetchPlaceComponentsForPlaceId:] */

void FUN_104ee1868(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  uVar1 = param_3;
  func_0x00010c08fa60();
  if ((uVar1 != 0) && (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1530a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfcae40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c25e140();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bfa5be0(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ee1a38; end: 104ee1ad3;  */

void FUN_104ee1a38(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_3 == 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
      lVar1 = param_2;
      func_0x00010c0d3c80();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar1;
      _objc_release(uVar2);
      func_0x00010be11d80(param_1);
    }
    else {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee1ad4; end: 104ee1b8b; -[SCMapPlaceProfileV2ComponentFetcher _fetchInitialDataForComponentSections:parentPlaceId:] */

void FUN_104ee1ad4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,*(undefined8 *)(param_1 + 0x48));
  if (((int)uVar1 != 0) && (uVar3 = param_3, func_0x00010bf529e0(), uVar3 != 0)) {
    uVar3 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be11d60(param_1,param_2,uVar2,uVar3,param_4);
      _objc_release(uVar2);
      uVar3 = uVar3 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar3 < uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ee1b8c; end: 104ee1d4b; -[SCMapPlaceProfileV2ComponentFetcher _fetchInitialDataForComponentSection:sectionIndex:parentPlaceId:] */

void FUN_104ee1b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be1ddc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104ee1d4c;
  puStack_78 = &UNK_110854bd0;
  _objc_retain(param_3);
  uStack_70 = param_3;
  func_0x00010bf41860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_a0,auStack_68);
  uStack_98 = param_4;
  _objc_retain(param_5);
  puVar3 = puVar2;
  func_0x00010c25ff60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_3);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee1d4c; end: 104ee1e77;  */

void FUN_104ee1d4c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf529e0();
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar2 == (undefined *)0x2) {
    puVar3 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fdc60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  uVar5 = uVar4;
  func_0x00010c0b8600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104ee1e78; end: 104ee1fdf;  */

void FUN_104ee1e78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar4 = *(undefined **)(param_2 + 0x20);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  ppuVar5 = *(undefined ***)(param_2 + 0x28);
  uVar3 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be3c0;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar2 = ppuVar5;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b1e30;
  _objc_alloc(PTR_PTR_1126b1e30);
  func_0x00010bf885a0(ppuVar2);
  _objc_release(ppuVar2);
  func_0x00010c0305c0(param_1,puVar4);
  uVar3 = param_3;
  FUN_104eef604(param_3,puVar4,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104ee1fe0; end: 104ee203f;  */

void FUN_104ee1fe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_104eef958(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd0a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ee2040; end: 104ee2103; -[SCMapPlaceProfileV2ComponentFetcher _fetchPlacePivotsForPlaceIds:observer:] */

void FUN_104ee2040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ee2104;
  puStack_40 = &UNK_1108597e8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa9360(uVar1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee2104; end: 104ee213b;  */

void FUN_104ee2104(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ee213c; end: 104ee234b; -[SCMapPlaceProfileV2ComponentFetcher _getCombinedInitialDataObservableForSection:parentPlaceId:] */

void FUN_104ee213c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0fdc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104ee2354;
  puStack_90 = &UNK_110851360;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(uVar2);
  uStack_88 = uVar2;
  func_0x00010bf54280(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  puVar5 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar4);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ee234c; end: 104ee2353;  */

void FUN_104ee234c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_placeId_11261ce58);
  return;
}



/* Entry: 104ee2354; end: 104ee2463;  */

void FUN_104ee2354(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010be13160(param_1);
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee2464; end: 104ee254f; -[SCMapPlaceProfileV2ComponentFetcher _createPreviewThumbnailObservableForPlaceID:] */

void FUN_104ee2464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee2550; end: 104ee25d3;  */

void FUN_104ee2550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfa9660(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee25d4; end: 104ee26e7; -[SCMapPlaceProfileV2ComponentFetcher _createStoryCarouselDataObservableForPlaceID:requestID:] */

void FUN_104ee25d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee26e8; end: 104ee276b;  */

void FUN_104ee26e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfa9a60(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee276c; end: 104ee28d3; -[SCMapPlaceProfileV2ComponentFetcher _handleUpdateThumbnailsDataForPlaceId:sectionIndex:thumbnailsData:parentPlaceId:] */

void FUN_104ee276c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0dfd20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fdc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    uVar4 = uVar3;
    func_0x00010c0b8600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    FUN_104eef958(uVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd0a0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ee28d4; end: 104ee2a43;  */

void FUN_104ee28d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar1 = param_2;
  if ((int)uVar5 == 0) {
    _objc_retain(param_2);
  }
  else {
    puVar2 = PTR_PTR_1126b1e30;
    _objc_alloc(PTR_PTR_1126b1e30);
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c259360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c259360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0305c0((double)uVar4,puVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfd7e20(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0df6e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a60e0(puVar2);
    _objc_release(puVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c111f00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_104eef604(param_2,puVar2,0,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ee2a44; end: 104ee2b33; -[SCMapPlaceProfileV2ComponentFetcher _updatePlaceComponentsWithSection:sectionIndex:parentPlaceId:] */

void FUN_104ee2a44(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c0720c0(param_5,param_2,*(undefined8 *)(param_1 + 0x48));
  if ((((int)param_5 != 0) && (uVar1 = *(ulong *)(param_1 + 0x30), uVar1 != 0)) &&
     (func_0x00010bf529e0(), param_4 < uVar1)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0dfd20(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf44540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf44540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      func_0x00010c130f40(*(undefined8 *)(param_1 + 0x30),param_2,param_4,param_3);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ee2b34; end: 104ee2b3b; -[SCMapPlaceProfileV2ComponentFetcher currentPlaceId] */

undefined8 FUN_104ee2b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104ee2b3c; end: 104ee2bb3; -[SCMapPlaceProfileV2ComponentFetcher .cxx_destruct] */

void FUN_104ee2b3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104ee2bb4; end: 104ee2e8f; -[SCMapPlaceProfileV2DataProvider initWithMapPlacesContentServices:previewStoryFetcher:mapNavigationRouteFetcher:storyFetcher:profilesProvider:locationProvider:circumstanceEngine:mapPeopleFriendsProvider:mapInstance:] */

undefined8 *
FUN_104ee2bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e4e30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x000109021e98();
    puVar1[0x11] = uVar2;
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1ff8;
    _objc_alloc();
    func_0x00010c03b360();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2000;
    _objc_alloc();
    func_0x00010c028420();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2008;
    _objc_alloc();
    func_0x00010c039c80();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2010;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c0fd400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0fcf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036740();
    uVar5 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bdf0a60(puVar1);
  }
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



/* Entry: 104ee2e90; end: 104ee3083; -[SCMapPlaceProfileV2DataProvider fetchPlaceProfileForPlaceId:placeSessionId:] */

void FUN_104ee2e90(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar2;
    _objc_release(uVar7);
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x78) = 0;
    func_0x00010be93e40(param_1);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fd400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c1530a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfcae40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25e140();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bfa9380(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ee3084; end: 104ee317b;  */

void FUN_104ee3084(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      _objc_retain(param_2);
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = param_2;
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126b2018;
      _objc_alloc();
      func_0x00010c026b20();
      uVar1 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined **)(param_1 + 0xb8) = puVar2;
      _objc_retain();
      _objc_release(uVar1);
      func_0x00010be840c0(param_1);
      func_0x00010be11dc0(param_1);
      _objc_release(puVar2);
      uVar1 = param_2;
      func_0x00010bfedda0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0fbe0(param_1);
      _objc_release(uVar1);
    }
    else {
      func_0x00010be840c0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee317c; end: 104ee32b3; -[SCMapPlaceProfileV2DataProvider removeVisitForPlaceID:completion:] */

void FUN_104ee317c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fd6e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c12f1e0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee32b4; end: 104ee334b;  */

void FUN_104ee32b4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0xa8);
      *(undefined8 *)(lVar1 + 0xa8) = uVar2;
      _objc_release(uVar3);
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x48));
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee334c; end: 104ee3393;  */

uint FUN_104ee334c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fc8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 104ee3394; end: 104ee348b; -[SCMapPlaceProfileV2DataProvider googlePlaceProfileDataObservable] */

void FUN_104ee3394(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104ee348c; end: 104ee34ef;  */

void FUN_104ee348c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ee34f0; end: 104ee3563; -[SCMapPlaceProfileV2DataProvider _resetStoredData] */

void FUN_104ee34f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 104ee3564; end: 104ee363f; -[SCMapPlaceProfileV2DataProvider _fetchPlacePivotsForPlaceIds:observer:] */

void FUN_104ee3564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0fcf60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ee3640;
  puStack_40 = &UNK_1108597e8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa9360(uVar1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee3640; end: 104ee3677;  */

void FUN_104ee3640(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ee3678; end: 104ee38c3; -[SCMapPlaceProfileV2DataProvider _fetchInitialPlaceProfileDataForPlaceId:] */

void FUN_104ee3678(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x24;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x50));
    lVar1 = param_1;
    func_0x00010bdf0a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(ulong *)(param_1 + 0x40);
    func_0x000109022308();
    if ((uVar4 & 1) == 0) {
      lVar5 = param_1;
      func_0x00010bdf0aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(lVar5);
    }
    _objc_initWeak(auStack_68,param_1);
    puVar6 = PTR_PTR_1126ae6b8;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104ee38c4;
    puStack_78 = &UNK_1108598e8;
    _objc_retain(param_3);
    lStack_70 = param_3;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar2;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x104ee39fc;
    puStack_a8 = &UNK_110851330;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_98);
    _objc_retain(param_3);
    puVar2 = puVar6;
    lStack_a0 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(lStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(lVar1);
    unaff_x24 = &puStack_c0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x28));
    _objc_destroyWeak(auStack_68);
    __Unwind_Resume();
    _objc_retain(param_2);
    puVar3 = param_2;
    func_0x00010bf529e0();
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar3 != (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR____NSArray0__struct_11034ab48;
      if (puVar2 != (undefined *)0x0) {
        puVar3 = puVar2;
      }
      _objc_retain(puVar3);
      _objc_release(puVar2);
      func_0x00010c1d0560(puVar6);
      _objc_release(puVar3);
      puVar3 = param_2;
      func_0x00010bf529e0();
      if (puVar3 == (undefined *)0x2) {
        puVar3 = param_2;
        func_0x00010c14da60(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar6);
        _objc_release(puVar3);
      }
      puVar2 = puVar6;
      func_0x00010bf51e00(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104ee38c4; end: 104ee3ae3;  */

void FUN_104ee38c4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf529e0();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar1 = puVar4;
    }
    _objc_retain(puVar1);
    _objc_release(puVar4);
    func_0x00010c1d0560(puVar2);
    _objc_release(puVar1);
    puVar1 = param_2;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x2) {
      puVar1 = param_2;
      func_0x00010c14da60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar2);
      _objc_release(puVar1);
    }
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104ee3ae4; end: 104ee3d0f; -[SCMapPlaceProfileV2DataProvider _fetchAsyncPlaceProfileDataForPlaceInfo:] */

void FUN_104ee3ae4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_88,param_2);
  func_0x00010c08aca0(param_4);
  uVar6 = param_1;
  func_0x00010c09abe0(param_4);
  _CLLocationCoordinate2DMake(param_1,uVar6);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar7 = param_1;
  uVar8 = uVar6;
  func_0x00010c09ea00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ee3d10;
  puStack_98 = &UNK_110859918;
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010bfa66e0(param_1,uVar6,uVar7,uVar8,uVar5);
  _objc_release(uVar2);
  lVar3 = param_4;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    lVar3 = param_4;
    func_0x00010bf24ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010bfa9880(uVar6);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_b8);
  }
  func_0x00010bfa9320(*(undefined8 *)(param_2 + 0x28));
  puVar4 = auStack_88;
  _objc_loadWeakRetained(puVar4);
  func_0x00010be77540();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee3d10; end: 104ee3e07;  */

void FUN_104ee3d10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b2018;
  _objc_alloc();
  func_0x00010c026b20();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined **)(lVar1 + 0xb8) = puVar2;
  _objc_release(uVar3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be840c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ee3e08; end: 104ee3f27; -[SCMapPlaceProfileV2DataProvider _prefetchRankedStoriesForPlaceId:] */

void FUN_104ee3e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x60);
  if (uVar1 != 0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_104ee3eec;
  }
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c107ca0(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_104ee3eec:
  _objc_release(param_3);
  return;
}



/* Entry: 104ee3f28; end: 104ee3f8b;  */

void FUN_104ee3f28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = param_2;
    _objc_release(uVar1);
    func_0x00010be840c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee3f8c; end: 104ee408b; -[SCMapPlaceProfileV2DataProvider _fetchRankedStoryThumbnailsForPlaceId:] */

void FUN_104ee3f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x70));
  lVar1 = param_1;
  func_0x00010bdf40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee408c; end: 104ee4127;  */

void FUN_104ee408c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(ulong *)(param_1 + 0xd0) = param_2;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x90) = 1;
    uVar2 = param_2;
    func_0x00010c11f900();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    *(double *)(param_1 + 200) = (double)uVar3;
    _objc_release(uVar2);
    func_0x00010be840c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee4128; end: 104ee4213; -[SCMapPlaceProfileV2DataProvider _createStoryCarouselDataObservableForPlaceID:] */

void FUN_104ee4128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee4214; end: 104ee429b;  */

void FUN_104ee4214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfa9a60(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee429c; end: 104ee4387; -[SCMapPlaceProfileV2DataProvider _createObservableForPlaceAnnotationsForPlaceId:] */

void FUN_104ee429c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee4388; end: 104ee4473;  */

void FUN_104ee4388(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be13160(param_1);
    _objc_release(puVar2);
    param_3 = 0;
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_initWeak(auStack_78,param_2);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ee4474; end: 104ee455f; -[SCMapPlaceProfileV2DataProvider _createObservableForRankedPreviewDataForPlaceId:] */

void FUN_104ee4474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee4560; end: 104ee45eb;  */

void FUN_104ee4560(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa9660(*(undefined8 *)(param_1 + 0x20));
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee45ec; end: 104ee46ef; -[SCMapPlaceProfileV2DataProvider _createObservableForPlaceComponentsData] */

void FUN_104ee45ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf444e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf444e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104ee46f0; end: 104ee4753;  */

void FUN_104ee46f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = param_2;
    _objc_release(uVar1);
    func_0x00010be840c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee4754; end: 104ee483f; -[SCMapPlaceProfileV2DataProvider _createObservableForGooglePlaceDataWithPlaceID:] */

void FUN_104ee4754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee4840; end: 104ee495b;  */

void FUN_104ee4840(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c0fd400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    func_0x00010bfa93c0(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_2);
    _objc_release(uVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee495c; end: 104ee49d7;  */

void FUN_104ee495c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2020;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c036360();
  func_0x00010c1a3e40();
  _objc_release(param_2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be11800(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ee49d8; end: 104ee4b07; -[SCMapPlaceProfileV2DataProvider _fetchGooglePlacePhotosForPlaceID:googlePlaceData:observer:] */

void FUN_104ee49d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bfcd580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf436e0(param_5);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fd400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104ee4b08;
    puStack_58 = &UNK_1108599d8;
    _objc_retain(param_4);
    lStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010bfa9340(uVar3,param_2,param_3,&puStack_70);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee4b08; end: 104ee4b73;  */

void FUN_104ee4b08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfcd580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db600();
  _objc_release(param_2);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ee4b74; end: 104ee4b9b; -[SCMapPlaceProfileV2DataProvider loadStateObservable] */

void FUN_104ee4b74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ee4b9c; end: 104ee4bef; -[SCMapPlaceProfileV2DataProvider _publishLoadState:] */

void FUN_104ee4b9c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 2;
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = param_3;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ee4bf0; end: 104ee4bff; -[SCMapPlaceProfileV2DataProvider onPlaceComponentVisibleWithPlaceId:sectionIndex:] */

void FUN_104ee4bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e57f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_onPlaceComponentVisibleWithPlace_112617010,
             param_3,*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 104ee4c00; end: 104ee4c0b; -[SCMapPlaceProfileV2DataProvider pushToValdiMarshaller:] */

undefined8 FUN_104ee4c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d20f0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000106ccf450();
  func_0x000106ccf3a8();
  return param_3;
}



/* Entry: 104ee4c0c; end: 104ee4c13; -[SCMapPlaceProfileV2DataProvider placeProfileData] */

undefined8 FUN_104ee4c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104ee4c14; end: 104ee4c1b; -[SCMapPlaceProfileV2DataProvider componentSections] */

undefined8 FUN_104ee4c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 104ee4c1c; end: 104ee4c23; -[SCMapPlaceProfileV2DataProvider placePivots] */

undefined8 FUN_104ee4c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 104ee4c24; end: 104ee4c2b; -[SCMapPlaceProfileV2DataProvider businessProfileData] */

undefined8 FUN_104ee4c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 104ee4c2c; end: 104ee4c33; -[SCMapPlaceProfileV2DataProvider venueETAData] */

undefined8 FUN_104ee4c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 104ee4c34; end: 104ee4c3b; -[SCMapPlaceProfileV2DataProvider rankedStorySequences] */

undefined8 FUN_104ee4c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}


