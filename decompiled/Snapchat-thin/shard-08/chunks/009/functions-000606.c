/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10677811c; end: 10677814b; -[SCMapStoryMediaFetcher .cxx_destruct] */

void FUN_10677811c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10677814c; end: 10677822f; -[SCMapStoryMediaServiceProvider provide] */

void FUN_10677814c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdb88;
  _objc_alloc(PTR_PTR_1126cdb88);
  func_0x00010c029460();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106778230; end: 10677826f;  */

void FUN_106778230(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5cee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106778270; end: 10677832b; -[SCMapStoryMediaServiceProvider _mapStoryMediaFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106778270(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cdb90;
  _objc_alloc(PTR_PTR_1126cdb90);
  lVar2 = param_1 + _DAT_11274f88c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274f890;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d220(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10677832c; end: 10677836f; -[SCMapStoryMediaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677832c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f88c);
  _objc_destroyWeak(param_1 + _DAT_11274f890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f894);
  return;
}



/* Entry: 106778370; end: 1067784eb; -[SCPlacesContextCardContextCreator initWithVenueFavoriteStore:networkingClient:placesStoryPlayerVendor:userLocationHelpers:composerBlizzardLogger:placeDiscoveryDataFetcher:mapStoryPreviewFetcher:] */

undefined1 *
FUN_106778370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f2f78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067784ec; end: 10677891f; -[SCPlacesContextCardContextCreator createPlaceContextCardContextWithSessionId:baseViewController:] */

void FUN_1067784ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_4);
  _objc_copyWeak(auStack_88,auStack_80);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_88;
  _objc_loadWeakRetained(puVar2);
  uVar3 = uVar1;
  func_0x00010c0b75c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126cdb98;
  _objc_alloc(PTR_PTR_1126cdb98);
  func_0x00010c02e460();
  _objc_initWeak(auStack_90,param_1);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106778920;
  puStack_a0 = &UNK_11093a338;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c1a3680(puVar4);
  puStack_e0 = puVar8;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x106778970;
  puStack_c8 = &UNK_11093a368;
  _objc_copyWeak(auStack_c0,auStack_90);
  func_0x00010c1a3980(puVar4);
  puStack_108 = puVar8;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1067789c0;
  puStack_f0 = &UNK_110859210;
  _objc_copyWeak(auStack_e8,auStack_90);
  func_0x00010c1a3460(puVar4);
  puStack_130 = puVar8;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106778a48;
  puStack_118 = &UNK_110862fe8;
  _objc_copyWeak(auStack_110,auStack_90);
  func_0x00010c1a31e0(puVar4);
  lVar5 = param_1;
  func_0x00010bdf1620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180820(puVar4);
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126ae6b8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1804c0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puStack_160 = puVar8;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_106778a98;
  puStack_148 = &UNK_11092f448;
  _objc_copyWeak(auStack_138,auStack_90);
  _objc_retain(puVar6);
  puStack_140 = puVar6;
  func_0x00010c1a3720(puVar4);
  puVar8 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  _objc_copyWeak(auStack_168,auStack_90);
  _objc_retain(puVar8);
  func_0x00010c1a3860(puVar4);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_168);
  _objc_release(puVar8);
  _objc_release(puStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106778920; end: 1067789bf;  */

void FUN_106778920(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067789c0; end: 106778a47;  */

void FUN_1067789c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfc5c20(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106778a48; end: 106778a97;  */

void FUN_106778a48(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106778a98; end: 106778b97;  */

void FUN_106778a98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010be13120(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c272120(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106778b98; end: 106778df3; -[SCPlacesContextCardContextCreator _fetchPlacePivotsForPlaceID:dataSubject:] */

void FUN_106778b98(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cdba0;
  _objc_alloc();
  func_0x00010c026840();
  func_0x00010c0d9840(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar5 = puVar3;
  func_0x00010bfa9360(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar5);
  if (puVar5 == (undefined *)0x0) {
    lVar6 = param_2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      puVar3 = PTR_PTR_1126cdba0;
      _objc_alloc(PTR_PTR_1126cdba0);
      func_0x00010c026840();
      lVar6 = param_2;
      func_0x00010c0dff20(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc5a0(puVar3);
      _objc_release(lVar4);
      _objc_release(lVar6);
      goto LAB_106778dc0;
    }
  }
  puVar3 = PTR_PTR_1126cdba0;
  _objc_alloc(PTR_PTR_1126cdba0);
  func_0x00010c026840();
LAB_106778dc0:
  func_0x00010c0d9840(*(undefined8 *)(puVar1 + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106778df4; end: 106778ebf; -[SCPlacesContextCardContextCreator _fetchPreviewStoryThumbnailForPlaceID:dataSubject:] */

void FUN_106778df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106778ec0;
  puStack_40 = &UNK_1108f3650;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa9680(uVar1,param_2,param_3,0,0,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106778ec0; end: 106778f83;  */

void FUN_106778ec0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cdba8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = param_3;
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010c04df00((double)lVar3,puVar1);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106778f84; end: 106779007; -[SCPlacesContextCardContextCreator _createPlaceContextCardConfigWithSessionId:] */

void FUN_106778f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cdbb0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0046e0();
  _objc_release(param_3);
  func_0x000109021e0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c720(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c201da0(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106779008; end: 1067790bf; -[SCPlacesContextCardContextCreator .cxx_destruct] */

void FUN_106779008(long param_1)

{
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



/* Entry: 1067790c0; end: 106779357; -[SCPlacesContextCardServiceProvider _createPlacesContextCardContextCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067790c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdbc0;
  _objc_alloc();
  lVar3 = param_1;
  FUN_1067793e4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fd080();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11274f8c0;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar11;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11274f8cc;
    _objc_loadWeakRetained(lVar12);
  }
  lVar6 = lVar12;
  func_0x00010bf44e60(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11274f8bc;
    _objc_loadWeakRetained(lVar13);
  }
  lVar7 = lVar13;
  func_0x00010c292d00(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_1067793e4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0fcf60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11274f8d0;
    _objc_loadWeakRetained();
  }
  lVar10 = param_1;
  func_0x00010c110e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060760(puVar2);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106779358; end: 1067793e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106779358(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11274f8c4;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bf1cf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1067793e4; end: 106779407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067793e4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274f8c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779408; end: 10677947b; -[SCPlacesContextCardServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106779408(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f8d0);
  _objc_destroyWeak(param_1 + _DAT_11274f8cc);
  _objc_destroyWeak(param_1 + _DAT_11274f8c8);
  _objc_destroyWeak(param_1 + _DAT_11274f8c4);
  _objc_destroyWeak(param_1 + _DAT_11274f8c0);
  _objc_destroyWeak(param_1 + _DAT_11274f8bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f8b8);
  return;
}



/* Entry: 10677947c; end: 1067794ef; -[SCGrapheneValisPublishingMetric2 init] */

undefined1 * FUN_10677947c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067794f0; end: 106779673;  */

char ** FUN_1067794f0(long param_1,undefined *param_2,char *param_3,char *param_4,undefined8 param_5
                     ,undefined8 param_6,undefined8 param_7,char *param_8)

{
  char *pcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char ***pppcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char **ppcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x21;
  char **ppcVar13;
  char *unaff_x22;
  char **ppcStack_1f0;
  undefined *puStack_1e8;
  char *pcStack_180;
  char *pcStack_178;
  undefined8 uStack_170;
  char *pcStack_168;
  char **appcStack_160 [2];
  char cStack_149;
  long lStack_148;
  char *pcStack_140;
  char *pcStack_138;
  long *plStack_130;
  char **ppcStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_110 [24];
  char *pcStack_f8;
  char **appcStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  char **ppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar2 = (char **)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    unaff_x22 = "false";
    pcVar9 = "true";
    if ((int)param_2 == 0) {
      pcVar9 = unaff_x22;
    }
    func_0x00010002b838(auStack_78,pcVar9);
    pcVar9 = "true";
    if ((int)param_3 == 0) {
      pcVar9 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,pcVar9);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    param_2 = &UNK_11093a3c8;
    unaff_x21 = acStack_98;
    param_3 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppcVar2 = &pcStack_80;
    pcStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        ppcVar2 = *(char ***)((long)alStack_60 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppcVar2;
  }
  ___stack_chk_fail();
  pcStack_80 = unaff_x21;
  func_0x00010007e5dc(&pcStack_80);
  lVar11 = -0x30;
  pcVar9 = &cStack_49;
  do {
    ppcVar13 = (char **)(pcVar9 + -0x18);
    if (*pcVar9 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar9 + -0x17));
    }
    iVar7 = (int)param_2;
    lVar11 = lVar11 + 0x18;
    pcVar9 = (char *)ppcVar13;
  } while (lVar11 != 0);
  ppcVar3 = ppcVar2;
  __Unwind_Resume();
  pcVar8 = acStack_110;
  pcStack_a8 = FUN_106779674;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)0x0;
  ppcVar4 = (char **)0x0;
  pcVar9 = param_3;
  pcStack_d0 = unaff_x22;
  pcStack_c8 = (char *)ppcVar13;
  lStack_c0 = lVar11;
  ppcStack_b8 = ppcVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppcVar3 != (char **)0x0) {
    plVar12 = (long *)ppcVar3[1];
    pcVar9 = "true";
    if (iVar7 == 0) {
      pcVar9 = "false";
    }
    func_0x00010002b838(appcStack_f0,pcVar9);
    acStack_110[0] = '\0';
    acStack_110[1] = '\0';
    acStack_110[2] = '\0';
    acStack_110[3] = '\0';
    acStack_110[4] = '\0';
    acStack_110[5] = '\0';
    acStack_110[6] = '\0';
    acStack_110[7] = '\0';
    acStack_110[8] = '\0';
    acStack_110[9] = '\0';
    acStack_110[10] = '\0';
    acStack_110[0xb] = '\0';
    acStack_110[0xc] = '\0';
    acStack_110[0xd] = '\0';
    acStack_110[0xe] = '\0';
    acStack_110[0xf] = '\0';
    acStack_110[0x10] = '\0';
    acStack_110[0x11] = '\0';
    acStack_110[0x12] = '\0';
    acStack_110[0x13] = '\0';
    acStack_110[0x14] = '\0';
    acStack_110[0x15] = '\0';
    acStack_110[0x16] = '\0';
    acStack_110[0x17] = '\0';
    func_0x00010007e1e8(acStack_110,appcStack_f0,&lStack_d8,1);
    iVar7 = 0x1093a418;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppcVar4 = &pcStack_f8;
    pcStack_f8 = acStack_110;
    func_0x00010007e5dc();
    pcVar9 = pcVar8;
    param_4 = param_3;
    ppcVar13 = (char **)acStack_110;
    if (cStack_d9 < '\0') {
      ppcVar4 = appcStack_f0[0];
      __ZdlPv();
      pcVar9 = pcVar8;
      param_4 = param_3;
      ppcVar13 = (char **)acStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppcVar4;
  }
  ___stack_chk_fail();
  pcStack_f8 = (char *)ppcVar13;
  func_0x00010007e5dc(&pcStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appcStack_f0[0]);
  }
  ppcVar3 = ppcVar4;
  __Unwind_Resume();
  ppcVar10 = &pcStack_180;
  pcStack_118 = FUN_10677978c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar2 = (char **)0x0;
  pcVar8 = pcVar9;
  pcStack_140 = unaff_x22;
  pcStack_138 = (char *)ppcVar13;
  plStack_130 = plVar12;
  ppcStack_128 = ppcVar4;
  ppuStack_120 = &puStack_b0;
  if (ppcVar3 != (char **)0x0) {
    plVar12 = (long *)ppcVar3[1];
    pcVar8 = "true";
    if (iVar7 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(appcStack_160,pcVar8);
    pcStack_180 = (char *)0x0;
    pcStack_178 = (char *)0x0;
    uStack_170 = 0;
    func_0x00010007e1e8(&pcStack_180,appcStack_160,&lStack_148,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11093a468);
    ppcVar2 = &pcStack_168;
    pcStack_168 = (char *)&pcStack_180;
    func_0x00010007e5dc();
    pcVar8 = (char *)ppcVar10;
    param_4 = pcVar9;
    ppcVar13 = &pcStack_180;
    if (cStack_149 < '\0') {
      ppcVar2 = appcStack_160[0];
      __ZdlPv();
      pcVar8 = (char *)ppcVar10;
      param_4 = pcVar9;
      ppcVar13 = &pcStack_180;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return ppcVar2;
  }
  ___stack_chk_fail();
  pcStack_168 = (char *)ppcVar13;
  func_0x00010007e5dc(&pcStack_168);
  if (cStack_149 < '\0') {
    __ZdlPv(appcStack_160[0]);
  }
  __Unwind_Resume();
  pcVar1 = pcStack_178;
  pcVar9 = pcStack_180;
  pppcVar5 = &ppcStack_1f0;
  _objc_retain(pcVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pcVar9);
  _objc_retain(pcVar1);
  puStack_1e8 = PTR_PTR_1126f2f88;
  ppcStack_1f0 = ppcVar2;
  _objc_msgSendSuper2(&ppcStack_1f0,PTR_s_init_1125d9248);
  if (pppcVar5 != (char ***)0x0) {
    _objc_retain(pcVar8);
    pcVar6 = (char *)pppcVar5[1];
    pppcVar5[1] = (char **)pcVar8;
    _objc_release(pcVar6);
    _objc_retain(param_4);
    pcVar6 = (char *)pppcVar5[2];
    pppcVar5[2] = (char **)param_4;
    _objc_release(pcVar6);
    _objc_storeWeak(pppcVar5 + 3,param_5);
    _objc_storeWeak(pppcVar5 + 4,param_7);
    _objc_storeWeak(pppcVar5 + 5,param_6);
    _objc_retain(param_8);
    pcVar6 = (char *)pppcVar5[6];
    pppcVar5[6] = (char **)param_8;
    _objc_release(pcVar6);
    _objc_retain(pcVar9);
    pcVar6 = (char *)pppcVar5[7];
    pppcVar5[7] = (char **)pcVar9;
    _objc_release(pcVar6);
    _objc_retain(pcVar1);
    pcVar6 = (char *)pppcVar5[8];
    pppcVar5[8] = (char **)pcVar1;
    _objc_release(pcVar6);
  }
  _objc_release(pcVar1);
  _objc_release(pcVar9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(pcVar8);
  return (char **)pppcVar5;
}



/* Entry: 106779674; end: 10677978b;  */

undefined1 **
FUN_106779674(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 ***pppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 **ppuVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 **unaff_x21;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar7 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puVar8 = param_3;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x1093a418;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    ppuVar3 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar8 = (undefined1 *)puVar7;
    param_4 = param_3;
    unaff_x21 = (undefined1 **)&uStack_70;
    if (cStack_39 < '\0') {
      ppuVar3 = appuStack_50[0];
      __ZdlPv();
      puVar8 = (undefined1 *)puVar7;
      param_4 = param_3;
      unaff_x21 = (undefined1 **)&uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  ppuVar9 = &puStack_e0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined1 **)0x0;
  puVar10 = puVar8;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar11 = (long *)ppuVar3[1];
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    puStack_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&puStack_e0,appuStack_c0,&lStack_a8,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11093a468);
    ppuVar4 = &puStack_c8;
    puStack_c8 = (undefined1 *)&puStack_e0;
    func_0x00010007e5dc();
    puVar10 = (undefined1 *)ppuVar9;
    param_4 = puVar8;
    unaff_x21 = &puStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar4 = appuStack_c0[0];
      __ZdlPv();
      puVar10 = (undefined1 *)ppuVar9;
      param_4 = puVar8;
      unaff_x21 = &puStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  puVar2 = puStack_d8;
  puVar8 = puStack_e0;
  pppuVar5 = &ppuStack_150;
  _objc_retain(puVar10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  puStack_148 = PTR_PTR_1126f2f88;
  ppuStack_150 = ppuVar4;
  _objc_msgSendSuper2(&ppuStack_150,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined1 ***)0x0) {
    _objc_retain(puVar10);
    puVar6 = (undefined1 *)pppuVar5[1];
    pppuVar5[1] = (undefined1 **)puVar10;
    _objc_release(puVar6);
    _objc_retain(param_4);
    puVar6 = (undefined1 *)pppuVar5[2];
    pppuVar5[2] = (undefined1 **)param_4;
    _objc_release(puVar6);
    _objc_storeWeak(pppuVar5 + 3,param_5);
    _objc_storeWeak(pppuVar5 + 4,param_7);
    _objc_storeWeak(pppuVar5 + 5,param_6);
    _objc_retain(param_8);
    puVar6 = (undefined1 *)pppuVar5[6];
    pppuVar5[6] = (undefined1 **)param_8;
    _objc_release(puVar6);
    _objc_retain(puVar8);
    puVar6 = (undefined1 *)pppuVar5[7];
    pppuVar5[7] = (undefined1 **)puVar8;
    _objc_release(puVar6);
    _objc_retain(puVar2);
    puVar6 = (undefined1 *)pppuVar5[8];
    pppuVar5[8] = (undefined1 **)puVar2;
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar10);
  return (undefined1 **)pppuVar5;
}



/* Entry: 10677978c; end: 1067798a3;  */

undefined1 **
FUN_10677978c(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 ***pppuVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 **unaff_x21;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar7 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined1 **)0x0;
  puVar8 = param_3;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    puStack_70 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093a468);
    ppuVar4 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    puVar8 = (undefined1 *)ppuVar7;
    param_4 = param_3;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar4 = appuStack_50[0];
      __ZdlPv();
      puVar8 = (undefined1 *)ppuVar7;
      param_4 = param_3;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar3 = puStack_68;
  puVar2 = puStack_70;
  pppuVar5 = &ppuStack_e0;
  _objc_retain(puVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puStack_d8 = PTR_PTR_1126f2f88;
  ppuStack_e0 = ppuVar4;
  _objc_msgSendSuper2(&ppuStack_e0,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined1 ***)0x0) {
    _objc_retain(puVar8);
    puVar6 = (undefined1 *)pppuVar5[1];
    pppuVar5[1] = (undefined1 **)puVar8;
    _objc_release(puVar6);
    _objc_retain(param_4);
    puVar6 = (undefined1 *)pppuVar5[2];
    pppuVar5[2] = (undefined1 **)param_4;
    _objc_release(puVar6);
    _objc_storeWeak(pppuVar5 + 3,param_5);
    _objc_storeWeak(pppuVar5 + 4,param_7);
    _objc_storeWeak(pppuVar5 + 5,param_6);
    _objc_retain(param_8);
    puVar6 = (undefined1 *)pppuVar5[6];
    pppuVar5[6] = (undefined1 **)param_8;
    _objc_release(puVar6);
    _objc_retain(puVar2);
    puVar6 = (undefined1 *)pppuVar5[7];
    pppuVar5[7] = (undefined1 **)puVar2;
    _objc_release(puVar6);
    _objc_retain(puVar3);
    puVar6 = (undefined1 *)pppuVar5[8];
    pppuVar5[8] = (undefined1 **)puVar3;
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  return (undefined1 **)pppuVar5;
}



/* Entry: 1067798a4; end: 106779a33; -[SCCommerceCheckoutScope initWithCart:uiContainer:parentDeckContainer:eventLogger:delegate:preloadedPaymentMethod:preloadedShippingAddress:preloadedContactDetails:] */

undefined1 *
FUN_1067798a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f2f88;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106779a34; end: 106779a3b; -[SCCommerceCheckoutScope cart] */

undefined8 FUN_106779a34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106779a3c; end: 106779a43; -[SCCommerceCheckoutScope uiContainer] */

undefined8 FUN_106779a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106779a44; end: 106779a5b; -[SCCommerceCheckoutScope parentDeckContainer] */

void FUN_106779a44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779a5c; end: 106779a73; -[SCCommerceCheckoutScope delegate] */

void FUN_106779a5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779a74; end: 106779a8b; -[SCCommerceCheckoutScope eventLogger] */

void FUN_106779a74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779a8c; end: 106779a93; -[SCCommerceCheckoutScope preloadedPaymentMethod] */

undefined8 FUN_106779a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106779a94; end: 106779a9b; -[SCCommerceCheckoutScope preloadedShippingAddress] */

undefined8 FUN_106779a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106779a9c; end: 106779aa3; -[SCCommerceCheckoutScope preloadedContactDetails] */

undefined8 FUN_106779a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106779aa4; end: 106779b0f; -[SCCommerceCheckoutScope .cxx_destruct] */

void FUN_106779aa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106779b10; end: 106779c13; -[SCCommerceReviewOrderHalfScope initWithCart:uiContainer:presentationSource:eventLogger:delegate:] */

undefined1 *
FUN_106779b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2f90;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),0);
    *(undefined8 *)((long)puVar1 + 0x20) = 2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106779c14; end: 106779c1b; -[SCCommerceReviewOrderHalfScope cart] */

undefined8 FUN_106779c14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106779c1c; end: 106779c23; -[SCCommerceReviewOrderHalfScope uiContainer] */

undefined8 FUN_106779c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106779c24; end: 106779c3b; -[SCCommerceReviewOrderHalfScope parentDeckContainer] */

void FUN_106779c24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779c3c; end: 106779c43; -[SCCommerceReviewOrderHalfScope presentationType] */

undefined8 FUN_106779c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106779c44; end: 106779c4b; -[SCCommerceReviewOrderHalfScope presentationSource] */

undefined8 FUN_106779c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106779c4c; end: 106779c63; -[SCCommerceReviewOrderHalfScope eventLogger] */

void FUN_106779c4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779c64; end: 106779c7b; -[SCCommerceReviewOrderHalfScope delegate] */

void FUN_106779c64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779c7c; end: 106779cc3; -[SCCommerceReviewOrderHalfScope .cxx_destruct] */

void FUN_106779c7c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106779cc4; end: 106779d5f; -[SCMemoriesSnapshotSnapPickerScope initWithUIContainer:delegate:] */

undefined1 *
FUN_106779cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2f98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106779d60; end: 106779d67; -[SCMemoriesSnapshotSnapPickerScope uiContainer] */

undefined8 FUN_106779d60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106779d68; end: 106779d7f; -[SCMemoriesSnapshotSnapPickerScope delegate] */

void FUN_106779d68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106779d80; end: 106779dab; -[SCMemoriesSnapshotSnapPickerScope .cxx_destruct] */

void FUN_106779d80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106779dac; end: 106779f47; -[SCImmediateUserFeatureLaunchServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106779dac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f964,0);
  _objc_storeStrong(param_1 + _DAT_11274f960,0);
  _objc_storeStrong(param_1 + _DAT_11274f95c,0);
  _objc_storeStrong(param_1 + _DAT_11274f958,0);
  _objc_storeStrong(param_1 + _DAT_11274f954,0);
  _objc_storeStrong(param_1 + _DAT_11274f950,0);
  _objc_storeStrong(param_1 + _DAT_11274f94c,0);
  _objc_storeStrong(param_1 + _DAT_11274f948,0);
  _objc_storeStrong(param_1 + _DAT_11274f944,0);
  _objc_storeStrong(param_1 + _DAT_11274f940,0);
  _objc_storeStrong(param_1 + _DAT_11274f93c,0);
  _objc_storeStrong(param_1 + _DAT_11274f938,0);
  _objc_storeStrong(param_1 + _DAT_11274f934,0);
  _objc_storeStrong(param_1 + _DAT_11274f92c,0);
  _objc_storeStrong(param_1 + _DAT_11274f928,0);
  _objc_storeStrong(param_1 + _DAT_11274f930,0);
  _objc_storeStrong(param_1 + _DAT_11274f924,0);
  _objc_storeStrong(param_1 + _DAT_11274f920,0);
  _objc_storeStrong(param_1 + _DAT_11274f91c,0);
  _objc_storeStrong(param_1 + _DAT_11274f97c,0);
  _objc_destroyWeak(param_1 + _DAT_11274f978);
  _objc_destroyWeak(param_1 + _DAT_11274f974);
  _objc_destroyWeak(param_1 + _DAT_11274f970);
  _objc_destroyWeak(param_1 + _DAT_11274f96c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f968);
  return;
}



/* Entry: 106779f48; end: 106779fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106779f48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b5f28;
    _objc_alloc(PTR_PTR_1126b5f28);
    lVar1 = (long)_DAT_11274fa8c;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274fa88);
    _objc_retain(uVar3);
    lVar1 = param_1 + lVar1;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c025f60(puVar2,param_2,uVar3,lVar1);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106779fe4; end: 10677a46b; -[SCUserFeatureLaunchServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106779fe4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274fa9c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa70,0);
  _objc_storeStrong(param_1 + _DAT_11274fa6c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa68,0);
  _objc_storeStrong(param_1 + _DAT_11274fa64,0);
  _objc_storeStrong(param_1 + _DAT_11274fa60,0);
  _objc_storeStrong(param_1 + _DAT_11274fa5c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa58,0);
  _objc_storeStrong(param_1 + _DAT_11274fa54,0);
  _objc_storeStrong(param_1 + _DAT_11274fa50,0);
  _objc_storeStrong(param_1 + _DAT_11274fa4c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa48,0);
  _objc_storeStrong(param_1 + _DAT_11274fa44,0);
  _objc_storeStrong(param_1 + _DAT_11274fa40,0);
  _objc_storeStrong(param_1 + _DAT_11274fa3c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa38,0);
  _objc_storeStrong(param_1 + _DAT_11274fa34,0);
  _objc_storeStrong(param_1 + _DAT_11274fa30,0);
  _objc_storeStrong(param_1 + _DAT_11274fa2c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa28,0);
  _objc_storeStrong(param_1 + _DAT_11274fa24,0);
  _objc_storeStrong(param_1 + _DAT_11274fa20,0);
  _objc_storeStrong(param_1 + _DAT_11274fa1c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa18,0);
  _objc_storeStrong(param_1 + _DAT_11274f9f0,0);
  _objc_storeStrong(param_1 + _DAT_11274fa14,0);
  _objc_storeStrong(param_1 + _DAT_11274fa10,0);
  _objc_storeStrong(param_1 + _DAT_11274fa0c,0);
  _objc_storeStrong(param_1 + _DAT_11274fa08,0);
  _objc_storeStrong(param_1 + _DAT_11274fa04,0);
  _objc_storeStrong(param_1 + _DAT_11274fa00,0);
  _objc_storeStrong(param_1 + _DAT_11274f9fc,0);
  _objc_storeStrong(param_1 + _DAT_11274f9f8,0);
  _objc_storeStrong(param_1 + _DAT_11274fa98,0);
  _objc_storeStrong(param_1 + _DAT_11274f9f4,0);
  _objc_storeStrong(param_1 + _DAT_11274f9ec,0);
  _objc_storeStrong(param_1 + _DAT_11274f9e8,0);
  _objc_storeStrong(param_1 + _DAT_11274f9e4,0);
  _objc_storeStrong(param_1 + _DAT_11274f9e0,0);
  _objc_storeStrong(param_1 + _DAT_11274f9dc,0);
  _objc_storeStrong(param_1 + _DAT_11274f9d8,0);
  _objc_storeStrong(param_1 + _DAT_11274f9d4,0);
  _objc_storeStrong(param_1 + _DAT_11274fa94,0);
  _objc_storeStrong(param_1 + _DAT_11274f9d0,0);
  _objc_storeStrong(param_1 + _DAT_11274fa90,0);
  _objc_storeStrong(param_1 + _DAT_11274f9cc,0);
  _objc_storeStrong(param_1 + _DAT_11274f9c8,0);
  _objc_storeStrong(param_1 + _DAT_11274f9c4,0);
  _objc_storeStrong(param_1 + _DAT_11274f9c0,0);
  _objc_storeStrong(param_1 + _DAT_11274f9bc,0);
  _objc_storeStrong(param_1 + _DAT_11274f9b8,0);
  _objc_storeStrong(param_1 + _DAT_11274f9b4,0);
  _objc_storeStrong(param_1 + _DAT_11274f9b0,0);
  _objc_storeStrong(param_1 + _DAT_11274f9ac,0);
  _objc_storeStrong(param_1 + _DAT_11274f9a4,0);
  _objc_storeStrong(param_1 + _DAT_11274f9a0,0);
  _objc_storeStrong(param_1 + _DAT_11274f9a8,0);
  _objc_storeStrong(param_1 + _DAT_11274f99c,0);
  _objc_storeStrong(param_1 + _DAT_11274f998,0);
  _objc_storeStrong(param_1 + _DAT_11274f990,0);
  _objc_storeStrong(param_1 + _DAT_11274f994,0);
  _objc_storeStrong(param_1 + _DAT_11274f98c,0);
  _objc_storeStrong(param_1 + _DAT_11274f988,0);
  _objc_storeStrong(param_1 + _DAT_11274f984,0);
  _objc_destroyWeak(param_1 + _DAT_11274fa8c);
  _objc_storeStrong(param_1 + _DAT_11274fa88,0);
  _objc_storeStrong(param_1 + _DAT_11274f980,0);
  _objc_destroyWeak(param_1 + _DAT_11274fa84);
  _objc_destroyWeak(param_1 + _DAT_11274fa74);
  _objc_destroyWeak(param_1 + _DAT_11274fa80);
  _objc_destroyWeak(param_1 + _DAT_11274fa7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fa78);
  return;
}



/* Entry: 10677a46c; end: 10677a687; -[SCMemoriesDebugViewerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677a46c(long param_1,undefined8 param_2)

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
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126cdbd0;
  _objc_alloc(PTR_PTR_1126cdbd0);
  lVar2 = param_1;
  FUN_10677a688();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_10677a688();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_10677a688();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11274faa4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar11;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11274faa8;
    _objc_loadWeakRetained(lVar12);
  }
  lVar9 = lVar12;
  func_0x00010c0c9740(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11274faac;
    _objc_loadWeakRetained(lVar13);
  }
  lVar10 = lVar13;
  func_0x00010c0c8880(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0096e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  FUN_10677a688(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10677a688; end: 10677a6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677a688(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274faa0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10677a6ac; end: 10677a733; -[SCMemoriesDebugViewerEntryPoint end] */

void FUN_10677a6ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_10677a688();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f2fa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10677a734; end: 10677a783; -[SCMemoriesDebugViewerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677a734(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274faac);
  _objc_destroyWeak(param_1 + _DAT_11274faa8);
  _objc_destroyWeak(param_1 + _DAT_11274faa4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274faa0);
  return;
}



/* Entry: 10677a784; end: 10677a98b; -[SCMemoriesEntryInfoDebugViewerController initWithDebugViewerDelegate:selectedGalleryItems:selectedGallerySnaps:memoriesMergedDataSource:memoriesSearchDatabase:memoriesEncryptedDatabase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10677a784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f2fa8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11274fab0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274fab4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274fab8),param_3);
    lVar5 = (long)_DAT_11274fabc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274fac0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274fac4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11274fac8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c189b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274facc);
    *(undefined **)((long)puVar1 + (long)_DAT_11274facc) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10677a98c; end: 10677a9ff; -[SCMemoriesEntryInfoDebugViewerController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677a98c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2fa8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be1b4c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274fad0);
  _objc_opt_class(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  func_0x00010c125fe0(uVar1);
  return;
}



/* Entry: 10677aa00; end: 10677abbf; -[SCMemoriesEntryInfoDebugViewerController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677aa00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2fa8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11274fad0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10677abc0; end: 10677ad37;  */

void FUN_10677abc0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10677ad38; end: 10677ad3f; -[SCMemoriesEntryInfoDebugViewerController numberOfSectionsInTableView:] */

undefined8 FUN_10677ad38(void)

{
  return 1;
}



/* Entry: 10677ad40; end: 10677ad57; -[SCMemoriesEntryInfoDebugViewerController tableView:viewForHeaderInSection:] */

void FUN_10677ad40(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c29cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0710,PTR_s_viewForTableHeaderInSection_text_112684e08,in_x3,
             &PTR____CFConstantStringClassReference_110e5d758);
  return;
}



/* Entry: 10677ad58; end: 10677ad67; -[SCMemoriesEntryInfoDebugViewerController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677ad58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274fad4),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10677ad68; end: 10677af7f; -[SCMemoriesEntryInfoDebugViewerController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677ad68(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274fad0);
  _objc_retain(param_4);
  func_0x00010bf6e060(uVar5,param_2,&PTR____CFConstantStringClassReference_110e5d718);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0708;
  _objc_alloc(PTR_PTR_1126b0708);
  func_0x00010c040040();
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1faee0(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274fad4);
  puVar3 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar3);
  _objc_release(uVar5);
  puVar3 = param_4;
  func_0x00010c142240();
  _objc_release(param_4);
  if (((ulong)puVar3 & 1) == 0) {
    param_4 = puVar1;
    func_0x00010bf15840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  else {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
    func_0x00010c11b960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf15840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10677af80; end: 10677b0a7; -[SCMemoriesEntryInfoDebugViewerController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677af80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfbedc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274fad4);
  uVar3 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar6,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126afca8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5d778,puVar4,puVar5)
  ;
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10677b0a8; end: 10677b11b; -[SCMemoriesEntryInfoDebugViewerController tableView:willDisplayCell:forRowAtIndexPath:] */

void FUN_10677b0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010c142240();
  uVar1 = 0x28;
  if ((param_5 & 1) != 0) {
    uVar1 = 0x21;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_4,param_2,puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10677b11c; end: 10677b167; -[SCMemoriesEntryInfoDebugViewerController viewDidDisappear:] */

void FUN_10677b11c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2fa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010be02280(param_1);
  return;
}



/* Entry: 10677b168; end: 10677b16b; -[SCMemoriesEntryInfoDebugViewerController _dismiss:] */

void FUN_10677b168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willDismiss_112598590);
  return;
}



/* Entry: 10677b16c; end: 10677b19f; -[SCMemoriesEntryInfoDebugViewerController _willDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677b16c(long param_1)

{
  param_1 = param_1 + _DAT_11274fab8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf66540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10677b1a0; end: 10677b1ff; -[SCMemoriesEntryInfoDebugViewerController _generateList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677b1a0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10677b200;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11274facc),param_2,&puStack_38);
  return;
}



/* Entry: 10677b200; end: 10677b353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677b200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar5 = (long)_DAT_11274fab0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar5 = (long)_DAT_11274fab4;
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010bf529e0();
    if (lVar1 == 0) goto LAB_10677b2fc;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010bf00560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be1f680();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010bf00560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be1f640();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274fad4);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274fad4) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_10677b2fc:
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10677b354;
  puStack_40 = &UNK_110842e18;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_58);
  return;
}



/* Entry: 10677b354; end: 10677b367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677b354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274fad0),
             PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 10677b368; end: 10677bc7f; -[SCMemoriesEntryInfoDebugViewerController _getGalleryItemDetails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677b368(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bfbd100();
  puVar6 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  puVar9 = PTR_DAT_1126a4ec8;
  uVar10 = param_3;
  if (uVar2 == 2) {
    _objc_retain(param_3);
    _objc_opt_class(puVar6);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((uVar2 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(param_3);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010c09da80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar2);
    uVar2 = uVar10;
    func_0x00010c0c6c20();
    if ((long)uVar2 < 2) {
      if ((uVar2 == 0) || (uVar2 == 1)) goto LAB_10677ba94;
    }
    else {
      if (uVar2 != 2) {
        if (uVar2 != 3) goto LAB_10677bab0;
        func_0x00010befa120(puVar1);
        func_0x00010befa120(puVar1);
      }
LAB_10677ba94:
      func_0x00010befa120(puVar1);
      func_0x00010befa120(puVar1);
    }
LAB_10677bab0:
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bf5a700(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010be1e760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar7);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010c0d0320(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010be1e760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar7);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0fcaa0(uVar10);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0fce40(uVar10);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    func_0x00010befa120(puVar1);
    func_0x00010c0ed100(uVar10);
    func_0x00010be231a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
  }
  else {
    if (uVar2 != 1) goto LAB_10677bc54;
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar9);
    if ((int)uVar2 == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(param_3);
    lVar3 = *(long *)(param_1 + _DAT_11274fabc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bf97200(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bfbdda0(uVar10);
    func_0x000108dfc9dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c15e520(uVar10);
    func_0x00010c0df7c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar9);
    func_0x00010befa120(puVar1);
    func_0x00010c07b240();
    func_0x00010befa120(puVar1);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bf59960(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be1e760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bf8be20(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be1e760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010c08b1e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be1e760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274fac4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bfb1920(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c135bc0(uVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(uVar4);
    lVar3 = lVar7;
    func_0x00010bfb1920(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be09600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bf977c0();
    lVar3 = (long)(int)uVar2;
    func_0x00010b5f5864(lVar3,uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    func_0x00010befa120(puVar1);
    uVar2 = uVar10;
    func_0x00010bf6e340(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar2);
    func_0x00010befa120(puVar1);
    lVar3 = lVar7;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = lVar7;
      func_0x00010bfb1920(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
    func_0x00010befa120(puVar1);
    lVar3 = param_1;
    func_0x00010be23e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    func_0x00010befa120(puVar1);
    lVar3 = param_1;
    func_0x00010be203e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    func_0x00010befa120(puVar1);
    lVar3 = param_1;
    func_0x00010bdca1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    func_0x00010befa120(puVar1);
    lVar3 = param_1;
    func_0x00010bdc9f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
    func_0x00010befa120(puVar1);
    lVar3 = lVar7;
    func_0x00010bfb1920(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebca40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(puVar1);
    param_1 = lVar7;
  }
  _objc_release(param_1);
  _objc_release(uVar10);
LAB_10677bc54:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10677bc80; end: 10677bccb;  */

void FUN_10677bc80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10677bccc; end: 10677c173; -[SCMemoriesEntryInfoDebugViewerController _getGallerySnapDetails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677bccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010befa120();
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar2);
  func_0x00010befa120(puVar1);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar2);
  func_0x00010befa120(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c5040(param_3);
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010befa120(puVar1);
  uVar2 = param_3;
  func_0x00010bf313a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be1e760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(lVar5);
  _objc_release(uVar2);
  func_0x00010befa120(puVar1);
  uVar2 = param_3;
  func_0x00010c0d21e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274fabc);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfa7040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010befa120(puVar1);
  uVar6 = param_3;
  func_0x00010b5fa20c(param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar6);
  func_0x00010befa120(puVar1);
  func_0x00010bfed740();
  func_0x00010befa120(puVar1);
  func_0x00010befa120(puVar1);
  func_0x00010bfd9dc0();
  func_0x00010befa120(puVar1);
  func_0x00010befa120(puVar1);
  uVar6 = param_3;
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar6);
  func_0x00010befa120(puVar1);
  uVar6 = param_3;
  func_0x00010bf70720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar6);
  func_0x00010befa120(puVar1);
  uVar6 = param_3;
  func_0x00010bf704c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar6);
  lVar5 = param_1;
  func_0x00010be09600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(lVar5);
  func_0x00010befa120(puVar1);
  uVar6 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar6);
  func_0x00010befa120(puVar1);
  lVar5 = param_1;
  func_0x00010be23e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(lVar5);
  func_0x00010befa120(puVar1);
  lVar5 = param_1;
  func_0x00010be20400(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010befa120(puVar1);
  _objc_release(lVar5);
  func_0x00010befa120(puVar1);
  lVar5 = param_1;
  func_0x00010bdca1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(lVar5);
  func_0x00010befa120(puVar1);
  func_0x00010bdc9f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10677c174; end: 10677c343; -[SCMemoriesEntryInfoDebugViewerController _getVisualTagsForEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677c174(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_11274fabc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = param_1;
        func_0x00010be23e40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  ppuVar5 = ppuVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar8 = ppuVar5;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar5);
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10677c344;
    lStack_160 = lVar3;
    ppuStack_158 = ppuVar8;
    ppuStack_150 = ppuVar1;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_10677c48c;
    uStack_170 = 0x10677c49c;
    uStack_168 = 0;
    puVar6 = (undefined1 *)puVar9;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + _DAT_11274fac0);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaac80();
    _objc_release(uVar7);
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((undefined **)puStack_188[5] != (undefined **)0x0) {
      ppuVar8 = (undefined **)puStack_188[5];
    }
    _objc_retain(ppuVar8);
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 10677c344; end: 10677c48b; -[SCMemoriesEntryInfoDebugViewerController _getVisualTagsForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677c344(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
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
  pcStack_48 = FUN_10677c48c;
  uStack_40 = 0x10677c49c;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274fac0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaac80();
  _objc_release(uVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((undefined **)puStack_58[5] != (undefined **)0x0) {
    ppuVar1 = (undefined **)puStack_58[5];
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10677c48c; end: 10677c4a3;  */

void FUN_10677c48c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10677c4a4; end: 10677c4e7;  */

void FUN_10677c4a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdfc100(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10677c4e8; end: 10677c68f; -[SCMemoriesEntryInfoDebugViewerController _encryptionDetailRowsForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677c4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10677c48c;
  uStack_50 = 0x10677c49c;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274fac4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c135a60(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _dispatch_group_wait(uVar1,0xffffffffffffffff);
  puVar5 = (undefined *)puStack_68[5];
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126cdbd0;
    func_0x00010be60820(PTR_PTR_1126cdbd0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
  }
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10677c690; end: 10677c6df;  */

void FUN_10677c690(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cdbd0;
  func_0x00010be09620(PTR_PTR_1126cdbd0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10677c6e0; end: 10677c87f; +[SCMemoriesEntryInfoDebugViewerController _encryptionDetailRowsForSnapEncryption:] */

undefined ** FUN_10677c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdd29c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bdc1800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd29c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e5dc58;
  uVar1 = param_3;
  func_0x00010c0719c0(param_3);
  _objc_release(param_3);
  func_0x00010c25d8c0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e5dc78;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e5dc98;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e5dcb8;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_80 = puVar3;
  uStack_70 = uVar2;
  uStack_60 = param_1;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dde098);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_88,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
    return ppuVar5;
  }
  ___stack_chk_fail();
  return &PTR__OBJC_CLASS___NSConstantArray_111180ad0;
}



/* Entry: 10677c880; end: 10677c88b; +[SCMemoriesEntryInfoDebugViewerController _missingEncryptionDetailRows] */

undefined ** FUN_10677c880(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111180ad0;
}



/* Entry: 10677c88c; end: 10677c8df; +[SCMemoriesEntryInfoDebugViewerController _base64StringForEncryptionData:] */

void FUN_10677c88c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf15da0(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10677c8e0; end: 10677caaf; -[SCMemoriesEntryInfoDebugViewerController _getLocationTagsForEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677c8e0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_11274fabc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = param_1;
        func_0x00010be20400(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  ppuVar5 = ppuVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar8 = ppuVar5;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar5);
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10677cab0;
    lStack_160 = lVar3;
    ppuStack_158 = ppuVar8;
    ppuStack_150 = ppuVar1;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_10677c48c;
    uStack_170 = 0x10677c49c;
    uStack_168 = 0;
    puVar6 = (undefined1 *)puVar9;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + _DAT_11274fac0);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa81e0();
    _objc_release(uVar7);
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((undefined **)puStack_188[5] != (undefined **)0x0) {
      ppuVar8 = (undefined **)puStack_188[5];
    }
    _objc_retain(ppuVar8);
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 10677cab0; end: 10677cbf3; -[SCMemoriesEntryInfoDebugViewerController _getLocationTagsForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677cab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
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
  pcStack_48 = FUN_10677c48c;
  uStack_40 = 0x10677c49c;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274fac0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa81e0();
  _objc_release(uVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((undefined **)puStack_58[5] != (undefined **)0x0) {
    ppuVar1 = (undefined **)puStack_58[5];
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10677cbf4; end: 10677cc2b;  */

void FUN_10677cbf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10677cc2c; end: 10677ccc7; -[SCMemoriesEntryInfoDebugViewerController _allVisualTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677cc2c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)((long)param_1 + (long)_DAT_11274fac0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf45ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be191a0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10677ccc8; end: 10677cd63; -[SCMemoriesEntryInfoDebugViewerController _allLocationTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677ccc8(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)((long)param_1 + (long)_DAT_11274fac0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be191a0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10677cd64; end: 10677ce33; -[SCMemoriesEntryInfoDebugViewerController _snapDocInfoForSnap:] */

void FUN_10677cd64(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lStack_38;
  
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc94b8;
  }
  else {
    lStack_38 = 0;
    ppuVar2 = param_3;
    func_0x000108020568(param_3,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_38;
    _objc_retain(lStack_38);
    if ((lVar1 == 0) && (ppuVar2 != (undefined **)0x0)) {
      ppuVar3 = ppuVar2;
      func_0x00010bf6e340(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10677ce34; end: 10677d03b; -[SCMemoriesEntryInfoDebugViewerController _frequencyMapToString:] */

undefined ** FUN_10677ce34(undefined8 param_1,undefined **param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10677d03c;
  puStack_100 = &UNK_1108eb540;
  _objc_retain(param_3);
  lVar2 = lVar1;
  lStack_f8 = param_3;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  _objc_retain(lVar2);
  puVar7 = &uStack_160;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar10 = *plStack_150;
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar11 = 0;
      do {
        if (*plStack_150 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        lVar9 = *(long *)(lStack_158 + lVar11 * 8);
        func_0x00010c08fa60();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar9 != 0) {
          lVar9 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar8);
          _objc_release(lVar9);
          ppuVar8 = ppuVar3;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar7 = &uStack_160;
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lStack_f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(puVar7);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067ec0();
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c067ec0();
    _objc_release(uVar6);
    if ((int)uVar5 < (int)uVar4) {
      ppuVar8 = (undefined **)0x1;
    }
    else if ((int)uVar4 < (int)uVar5) {
      ppuVar8 = (undefined **)0xffffffffffffffff;
    }
    else {
      ppuVar8 = param_2;
      func_0x00010bf433a0(param_2);
    }
    _objc_release(puVar7);
    _objc_release(param_2);
    return ppuVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return ppuVar8;
}



/* Entry: 10677d03c; end: 10677d10f;  */

undefined8 FUN_10677d03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c067ec0();
  _objc_release(uVar2);
  if ((int)uVar3 < (int)uVar1) {
    uVar3 = 1;
  }
  else if ((int)uVar1 < (int)uVar3) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = param_2;
    func_0x00010bf433a0(param_2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10677d110; end: 10677d317; -[SCMemoriesEntryInfoDebugViewerController _dictToString:] */

undefined ** FUN_10677d110(undefined8 param_1,undefined **param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10677d318;
  puStack_100 = &UNK_1108eb540;
  _objc_retain(param_3);
  lVar2 = lVar1;
  lStack_f8 = param_3;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  dVar10 = 0.0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  _objc_retain(lVar2);
  puVar5 = &uStack_160;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar8 = *plStack_150;
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar7 = *(long *)(lStack_158 + lVar9 * 8);
        func_0x00010c08fa60();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar7 != 0) {
          lVar7 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          _objc_release(lVar7);
          ppuVar6 = ppuVar3;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar5 = &uStack_160;
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lStack_f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar5);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar11 = dVar10;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar4);
  if (dVar11 <= dVar10) {
    if (dVar10 <= dVar11) {
      ppuVar6 = param_2;
      func_0x00010bf433a0(param_2);
    }
    else {
      ppuVar6 = (undefined **)0xffffffffffffffff;
    }
  }
  else {
    ppuVar6 = (undefined **)0x1;
  }
  _objc_release(puVar5);
  _objc_release(param_2);
  return ppuVar6;
}



/* Entry: 10677d318; end: 10677d3eb;  */

undefined8 FUN_10677d318(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  if (dVar2 <= param_1) {
    if (param_1 <= dVar2) {
      uVar1 = param_3;
      func_0x00010bf433a0(param_3);
    }
    else {
      uVar1 = 0xffffffffffffffff;
    }
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10677d3ec; end: 10677d3fb; -[SCMemoriesEntryInfoDebugViewerController _getDateStringFromDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677d3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274fac8),PTR_s_stringFromDate__112674f28);
  return;
}



/* Entry: 10677d3fc; end: 10677d41f; -[SCMemoriesEntryInfoDebugViewerController _getStringFromUIImageOrientation:] */

undefined ** FUN_10677d3fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    return (undefined **)(&PTR_PTR_11093a558)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110e5de58;
}



/* Entry: 10677d420; end: 10677d427; -[SCMemoriesEntryInfoDebugViewerController pageViewName] */

undefined8 FUN_10677d420(void)

{
  return 0x99;
}



/* Entry: 10677d428; end: 10677d433; -[SCMemoriesEntryInfoDebugViewerController getTitle] */

undefined ** FUN_10677d428(void)

{
  return &PTR____CFConstantStringClassReference_110e265b8;
}



/* Entry: 10677d434; end: 10677d4ef; -[SCMemoriesEntryInfoDebugViewerController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677d434(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274facc,0);
  _objc_storeStrong(param_1 + _DAT_11274fac4,0);
  _objc_storeStrong(param_1 + _DAT_11274fac0,0);
  _objc_storeStrong(param_1 + _DAT_11274fabc,0);
  _objc_storeStrong(param_1 + _DAT_11274fac8,0);
  _objc_storeStrong(param_1 + _DAT_11274fad4,0);
  _objc_storeStrong(param_1 + _DAT_11274fab4,0);
  _objc_storeStrong(param_1 + _DAT_11274fab0,0);
  _objc_destroyWeak(param_1 + _DAT_11274fab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274fad0,0);
  return;
}



/* Entry: 10677d4f0; end: 10677d5e3; -[SCMemoriesDebugViewerScope initWithSelectedGalleryItems:selectedGallerySnaps:delegate:uiContainer:] */

undefined1 *
FUN_10677d4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f2fb0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
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



/* Entry: 10677d5e4; end: 10677d5eb; -[SCMemoriesDebugViewerScope selectedGalleryItems] */

undefined8 FUN_10677d5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10677d5ec; end: 10677d5f3; -[SCMemoriesDebugViewerScope selectedGallerySnaps] */

undefined8 FUN_10677d5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


