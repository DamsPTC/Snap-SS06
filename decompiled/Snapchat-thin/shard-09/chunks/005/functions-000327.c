/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e1bfb8; end: 106e1c057; -[SCPreviewFeatureUcoInMemoriesServicesEntryPoint _createPersistentStoreManagerWithLensCommandMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1bfb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d2be0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275f094;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c15fc40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045520(puVar1,param_2,lVar3,param_3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e1c058; end: 106e1c283; -[SCPreviewFeatureUcoInMemoriesServicesEntryPoint ucoInMemories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1c058(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_1;
  FUN_106e1bf94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae558;
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + (long)_DAT_11275f090;
    _objc_loadWeakRetained(lVar10);
  }
  lVar6 = lVar10;
  func_0x00010c27e5e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  puVar8 = PTR_PTR_1126d2be8;
  _objc_alloc_init(PTR_PTR_1126d2be8);
  func_0x00010bdf13e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d2398;
  _objc_alloc(PTR_PTR_1126d2398);
  func_0x00010c057fa0();
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106e1c284; end: 106e1c2c3;  */

void FUN_106e1c284(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe85a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e1c2c4; end: 106e1c33b; -[SCPreviewFeatureUcoInMemoriesServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1c2c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f0a4,0);
  _objc_destroyWeak(param_1 + _DAT_11275f0a0);
  _objc_destroyWeak(param_1 + _DAT_11275f09c);
  _objc_destroyWeak(param_1 + _DAT_11275f098);
  _objc_destroyWeak(param_1 + _DAT_11275f094);
  _objc_destroyWeak(param_1 + _DAT_11275f090);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275f08c);
  return;
}



/* Entry: 106e1c33c; end: 106e1c457; -[SCPreviewUCOGalleryVideoProvider newVideoAsset] */

undefined8 FUN_106e1c33c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106e1c458;
  uStack_40 = 0x106e1c468;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfad280(uVar1,param_2,&PTR____CFConstantStringClassReference_110f72758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1346e0(*(undefined8 *)(param_1 + 0x18));
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return uVar2;
}



/* Entry: 106e1c458; end: 106e1c46f;  */

void FUN_106e1c458(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e1c470; end: 106e1c4a7;  */

void FUN_106e1c470(long param_1,undefined8 param_2)

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



/* Entry: 106e1c4a8; end: 106e1c5ef; -[SCPreviewUCOGalleryVideoProvider newVideoAssetForQueue:resultHandler:] */

void FUN_106e1c4a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfad280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c1346e0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e1c5f0; end: 106e1c6c3;  */

void FUN_106e1c5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be572e0(lVar1);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,0,uVar2,0);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e1c6c4; end: 106e1c75b; -[SCPreviewUCOGalleryVideoProvider _logPreviewExportEventWithError:success:] */

void FUN_106e1c6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106e1c75c;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106e1c75c; end: 106e1c80f;  */

void FUN_106e1c75c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acba0(lVar1,param_2,lVar5,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x30));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e1c810; end: 106e1c82b; -[SCPreviewUCOGalleryVideoProvider videoDuration] */

double FUN_106e1c810(float param_1,long param_2)

{
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 8));
  return (double)param_1;
}



/* Entry: 106e1c82c; end: 106e1c89f; -[SCPreviewUCOGalleryVideoProvider codecType] */

void FUN_106e1c82c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0d9500(param_1);
    func_0x00010c299760();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 106e1c8a0; end: 106e1c8a7; -[SCPreviewUCOGalleryVideoProvider shouldIncludeURLInActiveVideoPaths] */

undefined8 FUN_106e1c8a0(void)

{
  return 0;
}



/* Entry: 106e1c8a8; end: 106e1c8af; -[SCPreviewUCOGalleryVideoProvider checkIsVideoReachable] */

undefined8 FUN_106e1c8a8(void)

{
  return 1;
}



/* Entry: 106e1c8b0; end: 106e1c93f; -[SCPreviewUCOGalleryVideoProvider hasAudioTrack] */

bool FUN_106e1c8b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x00010c0d9500();
  uStack_38 = 0;
  func_0x00010c266c80(PTR_PTR_1126b0010,param_2,&PTR__OBJC_CLASS___NSConstantArray_1111812b0,param_1
                      ,&uStack_38);
  lVar1 = param_1;
  func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 106e1c940; end: 106e1c947; -[SCPreviewUCOGalleryVideoProvider writableURLRequiresSynchronousExport] */

undefined8 FUN_106e1c940(void)

{
  return 1;
}



/* Entry: 106e1c948; end: 106e1ca2f; -[SCPreviewUCOGalleryVideoProvider writableURL] */

void FUN_106e1c948(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
    lVar5 = param_1;
    func_0x0001000f73a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = lVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e87938);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106e1ca30; end: 106e1ca57; -[SCPreviewUCOGalleryVideoProvider cachedWritableURL] */

void FUN_106e1ca30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e1ca58; end: 106e1cafb; -[SCPreviewUCOGalleryVideoProvider removeBackingTemporaryVideo] */

void FUN_106e1ca58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)puVar3 != 0) {
    uStack_38 = 0;
    func_0x00010c12cc60(puVar1,param_2,*(undefined8 *)(param_1 + 0x28),&uStack_38);
    uVar2 = uStack_38;
    _objc_retain(uStack_38);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106e1cafc; end: 106e1ccbf; -[SCPreviewUCOGalleryVideoProvider exportVideoForURL:] */

void FUN_106e1cafc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106e1c458;
  uStack_70 = 0x106e1c468;
  uStack_68 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfad280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106e1c458;
  uStack_a0 = 0x106e1c468;
  uStack_98 = 0;
  func_0x00010c1351c0(*(undefined8 *)(param_1 + 0x18));
  uVar2 = puStack_88[5];
  func_0x00010c14e060();
  if (puStack_88[5] != 0 && (uVar2 & 1) == 0) {
    uVar3 = puStack_b8[5];
    puStack_b8[5] = &PTR____CFConstantStringClassReference_110e87958;
    _objc_release(uVar3);
  }
  func_0x00010be572e0(param_1);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106e1ccc0; end: 106e1cd2f;  */

void FUN_106e1ccc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e1cd30; end: 106e1ce9f; -[SCPreviewUCOGalleryVideoProvider exportVideoData] */

void FUN_106e1cd30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106e1c458;
  uStack_60 = 0x106e1c468;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfad280(uVar1,param_2,&PTR____CFConstantStringClassReference_110f72758);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_88,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010c1351c0(uVar2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e1cea0; end: 106e1cf53;  */

void FUN_106e1cea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be572e0(lVar1);
    _objc_release(uVar2);
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e1cf54; end: 106e1cf5b; -[SCPreviewUCOGalleryVideoProvider createTimeUtc] */

void FUN_106e1cf54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 106e1cf5c; end: 106e1d027; -[SCPreviewUCOGalleryVideoProvider initWithSnap:cloudFile:contentDataProvider:] */

undefined1 *
FUN_106e1cf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f7000;
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



/* Entry: 106e1d028; end: 106e1d04b; -[SCPreviewUCOGalleryVideoProvider copyWithZone:] */

undefined8 FUN_106e1d028(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e1d04c; end: 106e1d063; -[SCPreviewUCOGalleryVideoProvider previewLoggingCommon] */

void FUN_106e1d04c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e1d064; end: 106e1d06f; -[SCPreviewUCOGalleryVideoProvider setPreviewLoggingCommon:] */

void FUN_106e1d064(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106e1d070; end: 106e1d087; -[SCPreviewUCOGalleryVideoProvider previewBlizzardLogger] */

void FUN_106e1d070(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e1d088; end: 106e1d093; -[SCPreviewUCOGalleryVideoProvider setPreviewBlizzardLogger:] */

void FUN_106e1d088(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106e1d094; end: 106e1d173; -[SCPreviewUCOGalleryVideoProvider .cxx_destruct] */

void FUN_106e1d094(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 106e1d174; end: 106e1d293; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup initWithItemId:playbackItems:memoriesCRFeaturedStory:firstPlaybackItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e1d174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar2 = param_5;
  func_0x00010bf97860(param_5);
  puStack_48 = PTR_PTR_1126f7008;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithItemId_entryType_isFavor_112535248,param_3,uVar2,0,1,0,2,
                      0);
  _objc_release(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275f0c8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275f0cc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275f0d0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106e1d294; end: 106e1d2b7; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup copyWithZone:] */

undefined8 FUN_106e1d294(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e1d2b8; end: 106e1d46b; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup isEqualToCRFeaturedStoryPlaylistGroup:] */

undefined1 * FUN_106e1d2b8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long unaff_x22;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar6 = &uStack_60;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb1a00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    unaff_x22 = param_3;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 != 0) goto LAB_106e1d314;
  }
  else {
LAB_106e1d314:
    uVar2 = param_1;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfb1a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      _objc_release(unaff_x22);
      if ((uVar4 & 1) == 0) goto LAB_106e1d410;
    }
    else {
      _objc_release(uVar1);
      if ((int)uVar4 == 0) {
LAB_106e1d410:
        puVar6 = (ulong *)0x0;
        goto LAB_106e1d444;
      }
    }
  }
  uVar1 = param_1;
  func_0x00010c0ff4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0ff4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071b60();
  if ((int)uVar2 == 0) {
    puVar6 = (ulong *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0c7f00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0c7f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071ae0();
    if ((int)uVar4 == 0) {
      puVar6 = (ulong *)0x0;
    }
    else {
      puStack_58 = PTR_PTR_1126f7008;
      uStack_60 = param_1;
      _objc_msgSendSuper2(&uStack_60,PTR_s_isEqual__1125fa0c8,param_3);
    }
    _objc_release(lVar5);
    _objc_release(uVar2);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
LAB_106e1d444:
  _objc_release(param_3);
  return (undefined1 *)puVar6;
}



/* Entry: 106e1d46c; end: 106e1d4e7; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup isEqual:] */

ulong FUN_106e1d46c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_1 == param_3) {
      param_1 = 1;
      goto LAB_106e1d4d0;
    }
    puVar1 = PTR_PTR_1126cdc50;
    _objc_opt_class(PTR_PTR_1126cdc50);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c071be0(param_1);
      goto LAB_106e1d4d0;
    }
  }
  param_1 = 0;
LAB_106e1d4d0:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e1d4e8; end: 106e1d5ab; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup hash] */

ulong FUN_106e1d4e8(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f7008;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_hash_1125d5420);
  uVar2 = param_1;
  func_0x00010c0ff4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde980();
  uVar4 = param_1;
  func_0x00010c0c7f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfde980();
  func_0x00010bfb1a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return uVar3 ^ uVar5 ^ uVar6 ^ (ulong)puVar1;
}



/* Entry: 106e1d5ac; end: 106e1d5bb; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup playbackItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1d5ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0c8);
}



/* Entry: 106e1d5bc; end: 106e1d5cb; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup memoriesCRFeaturedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1d5bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0cc);
}



/* Entry: 106e1d5cc; end: 106e1d5db; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup firstPlaybackItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1d5cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0d0);
}



/* Entry: 106e1d5dc; end: 106e1d62b; -[SCMemoriesOperaCRFeaturedStoryPlaylistGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1d5dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f0d0,0);
  _objc_storeStrong(param_1 + _DAT_11275f0cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f0c8,0);
  return;
}



/* Entry: 106e1d62c; end: 106e1d6df; -[SCMemoriesOperaCameraRollPlaylistGroup initWithAsset:itemId:entryType:snapFeedItemLevelPriorityAndStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e1d62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f7010;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithItemId_entryType_isFavor_112535248,param_4,param_5,0,1,0,
                      1,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275f0d4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e1d6e0; end: 106e1d703; -[SCMemoriesOperaCameraRollPlaylistGroup copyWithZone:] */

undefined8 FUN_106e1d6e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e1d704; end: 106e1d7bb; -[SCMemoriesOperaCameraRollPlaylistGroup isEqualToCameraRollPlaylistGroup:] */

undefined1 * FUN_106e1d704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar4 = &uStack_40;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf0af00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126f7010;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar4;
}



/* Entry: 106e1d7bc; end: 106e1d837; -[SCMemoriesOperaCameraRollPlaylistGroup isEqual:] */

ulong FUN_106e1d7bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_1 == param_3) {
      param_1 = 1;
      goto LAB_106e1d820;
    }
    puVar1 = PTR_PTR_1126cdc58;
    _objc_opt_class(PTR_PTR_1126cdc58);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c071c00(param_1);
      goto LAB_106e1d820;
    }
  }
  param_1 = 0;
LAB_106e1d820:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e1d838; end: 106e1d8ab; -[SCMemoriesOperaCameraRollPlaylistGroup hash] */

ulong FUN_106e1d838(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f7010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_hash_1125d5420);
  func_0x00010bf0af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar2 ^ (ulong)puVar1;
}



/* Entry: 106e1d8ac; end: 106e1d8bb; -[SCMemoriesOperaCameraRollPlaylistGroup asset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1d8ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0d4);
}



/* Entry: 106e1d8bc; end: 106e1d8cf; -[SCMemoriesOperaCameraRollPlaylistGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1d8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f0d4,0);
  return;
}



/* Entry: 106e1d8d0; end: 106e1db17; -[SCMemoriesOperaLegacyMultiSnapPlaylistGroup initWithItemId:entryType:isPrivate:playbackItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e1d8d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = param_6;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    uVar6 = 1;
    uVar7 = 1;
    uVar8 = 1;
  }
  else {
    lVar4 = *plStack_120;
    uVar6 = 1;
    uVar7 = 1;
    uVar9 = 1;
    do {
      lVar3 = 0;
      uVar10 = uVar9;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(param_6);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar3 * 8);
        if ((uVar6 & 1) == 0) {
          uVar6 = 0;
          if ((uVar7 & 1) == 0) goto LAB_106e1d998;
LAB_106e1d9b0:
          uVar7 = uVar9;
          func_0x00010c079e60();
          if ((uVar10 & 1) == 0) goto LAB_106e1d9a0;
LAB_106e1d9c0:
          func_0x00010c06bee0();
        }
        else {
          uVar6 = uVar9;
          func_0x00010c072ac0();
          if ((uVar7 & 1) != 0) goto LAB_106e1d9b0;
LAB_106e1d998:
          uVar7 = 0;
          if ((uVar10 & 1) != 0) goto LAB_106e1d9c0;
LAB_106e1d9a0:
          uVar9 = 0;
        }
        uVar8 = (undefined1)uVar9;
        lVar3 = lVar3 + 1;
        uVar10 = uVar9;
      } while (lVar5 != lVar3);
      lVar5 = param_6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  lVar5 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  puStack_138 = PTR_PTR_1126f7018;
  puVar1 = &uStack_140;
  uStack_140 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithItemId_entryId_entryType_1125e5978,param_3,param_3,
                      param_4,uVar6,uVar7,param_5,uVar8);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11275f0d8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    return param_3;
  }
  return puVar1;
}



/* Entry: 106e1db18; end: 106e1db3b; -[SCMemoriesOperaLegacyMultiSnapPlaylistGroup copyWithZone:] */

undefined8 FUN_106e1db18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e1db3c; end: 106e1dbf3; -[SCMemoriesOperaLegacyMultiSnapPlaylistGroup isEqualToLegacyMultiSnapPlaylistGroup:] */

undefined1 * FUN_106e1db3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar4 = &uStack_40;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ff4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ff4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071b60();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126f7018;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_isEqualToMemoriesPlaylistGroup__1125fa1c0,param_3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar4;
}



/* Entry: 106e1dbf4; end: 106e1dc6f; -[SCMemoriesOperaLegacyMultiSnapPlaylistGroup isEqual:] */

ulong FUN_106e1dbf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_1 == param_3) {
      param_1 = 1;
      goto LAB_106e1dc58;
    }
    puVar1 = PTR_PTR_1126cdc38;
    _objc_opt_class(PTR_PTR_1126cdc38);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c071de0(param_1);
      goto LAB_106e1dc58;
    }
  }
  param_1 = 0;
LAB_106e1dc58:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e1dc70; end: 106e1dce3; -[SCMemoriesOperaLegacyMultiSnapPlaylistGroup hash] */

ulong FUN_106e1dc70(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f7018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_hash_1125d5420);
  func_0x00010c0ff4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar2 ^ (ulong)puVar1;
}



/* Entry: 106e1dce4; end: 106e1dcf3; -[SCMemoriesOperaLegacyMultiSnapPlaylistGroup playbackItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1dce4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0d8);
}



/* Entry: 106e1dcf4; end: 106e1dd07; -[SCMemoriesOperaLegacyMultiSnapPlaylistGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1dcf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f0d8,0);
  return;
}



/* Entry: 106e1dd08; end: 106e1de6f; -[SCMemoriesOperaMemoriesPlaylistGroup initWithItemId:entryId:entryType:isFavorited:isPersisted:isPrivate:isAllMediaLocal:mediaId:mediaType:playbackType:width:height:progressBarModel:snapFeedItemLevelPriorityAndStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e1dd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_11);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f7020;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithItemId_entryType_isFavor_112535248,param_3,param_5,
                      param_6,param_7,param_8,0,param_17);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275f0dc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275f0e0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275f0e4) = param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275f0e8) = param_13;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275f0ec) = param_9;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275f0f0) = param_14;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275f0f4) = param_15;
    lVar3 = (long)_DAT_11275f0f8;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_11);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106e1de70; end: 106e1de93; -[SCMemoriesOperaMemoriesPlaylistGroup copyWithZone:] */

undefined8 FUN_106e1de70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e1de94; end: 106e1dfff; -[SCMemoriesOperaMemoriesPlaylistGroup isEqualToMemoriesPlaylistGroup:] */

undefined1 * FUN_106e1de94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  undefined *puStack_58;
  
  plVar7 = &lStack_60;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    plVar7 = (long *)0x0;
    goto LAB_106e1dfa0;
  }
  lVar3 = param_1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  if ((int)lVar5 == 0) {
LAB_106e1df84:
    plVar7 = (long *)0x0;
  }
  else {
    lVar5 = param_1;
    func_0x00010c0c6c20();
    lVar6 = param_3;
    func_0x00010c0c6c20();
    if (lVar5 != lVar6) goto LAB_106e1df84;
    lVar5 = param_1;
    func_0x00010c1005a0();
    lVar6 = param_3;
    func_0x00010c1005a0();
    if (lVar5 != lVar6) goto LAB_106e1df84;
    lVar5 = param_1;
    func_0x00010c06bee0();
    lVar6 = param_3;
    func_0x00010c06bee0();
    if ((int)lVar5 != (int)lVar6) goto LAB_106e1df84;
    puStack_58 = PTR_PTR_1126f7020;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_isEqual__1125fa0c8,param_3);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_106e1dfa0:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return (undefined1 *)plVar7;
}



/* Entry: 106e1e000; end: 106e1e07b; -[SCMemoriesOperaMemoriesPlaylistGroup isEqual:] */

ulong FUN_106e1e000(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_1 == param_3) {
      param_1 = 1;
      goto LAB_106e1e064;
    }
    puVar1 = PTR_PTR_1126cdc18;
    _objc_opt_class(PTR_PTR_1126cdc18);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c071ec0(param_1);
      goto LAB_106e1e064;
    }
  }
  param_1 = 0;
LAB_106e1e064:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e1e07c; end: 106e1e133; -[SCMemoriesOperaMemoriesPlaylistGroup hash] */

ulong FUN_106e1e07c(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f7020;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_hash_1125d5420);
  uVar2 = param_1;
  func_0x00010bf97200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde980();
  uVar4 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfde980();
  uVar6 = param_1;
  func_0x00010c0c6c20(param_1);
  func_0x00010c1005a0(param_1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return uVar3 ^ uVar5 ^ uVar6 ^ param_1 ^ (ulong)puVar1;
}



/* Entry: 106e1e134; end: 106e1e143; -[SCMemoriesOperaMemoriesPlaylistGroup entryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e134(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0dc);
}



/* Entry: 106e1e144; end: 106e1e153; -[SCMemoriesOperaMemoriesPlaylistGroup mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e144(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0e0);
}



/* Entry: 106e1e154; end: 106e1e163; -[SCMemoriesOperaMemoriesPlaylistGroup mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e154(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0e4);
}



/* Entry: 106e1e164; end: 106e1e173; -[SCMemoriesOperaMemoriesPlaylistGroup playbackType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e164(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0e8);
}



/* Entry: 106e1e174; end: 106e1e183; -[SCMemoriesOperaMemoriesPlaylistGroup isAllMediaLocal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e1e174(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f0ec);
}



/* Entry: 106e1e184; end: 106e1e193; -[SCMemoriesOperaMemoriesPlaylistGroup width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106e1e184(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275f0f0);
}



/* Entry: 106e1e194; end: 106e1e1a3; -[SCMemoriesOperaMemoriesPlaylistGroup height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106e1e194(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275f0f4);
}



/* Entry: 106e1e1a4; end: 106e1e1b3; -[SCMemoriesOperaMemoriesPlaylistGroup progressBarModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e1a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0f8);
}



/* Entry: 106e1e1b4; end: 106e1e203; -[SCMemoriesOperaMemoriesPlaylistGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1e1b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f0f8,0);
  _objc_storeStrong(param_1 + _DAT_11275f0e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f0dc,0);
  return;
}



/* Entry: 106e1e204; end: 106e1e3d7; -[SCMemoriesOperaStoryPlaylistGroup initWithItemId:entryType:isPrivate:firstPlaybackItemId:playbackItems:storyId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e1e204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_a0 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 1;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106e1e3d8;
  puStack_a8 = &UNK_11097ea80;
  puStack_88 = puStack_98;
  puStack_68 = puStack_a0;
  func_0x00010bf97e80(param_7);
  puStack_c8 = PTR_PTR_1126f7028;
  puVar1 = &uStack_d0;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithItemId_entryType_isFavor_112535248,param_3,param_4,
                      *(undefined1 *)(puStack_68 + 3),*(undefined1 *)(puStack_88 + 3),param_5,2,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275f0fc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275f100;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275f104;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e1e3d8; end: 106e1e497;  */

void FUN_106e1e3d8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  long lVar3;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(char *)(lVar3 + 0x18) == '\x01') {
    uVar2 = param_2;
    func_0x00010c072ac0();
    uVar1 = (undefined1)uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(lVar3 + 0x18) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if (*(char *)(lVar3 + 0x18) == '\x01') {
    uVar2 = param_2;
    func_0x00010c079e60();
    uVar1 = (undefined1)uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(lVar3 + 0x18) = uVar1;
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0)) {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e1e498; end: 106e1e4a7; -[SCMemoriesOperaStoryPlaylistGroup initWithItemId:entryType:isPrivate:playbackItems:storyId:] */

void FUN_106e1e498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithItemId_entryType_isPriva_1125e5980);
  return;
}



/* Entry: 106e1e4a8; end: 106e1e65b; -[SCMemoriesOperaStoryPlaylistGroup isEqualToStoryPlaylistGroup:] */

undefined1 * FUN_106e1e4a8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long unaff_x22;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar6 = &uStack_60;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb1a00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    unaff_x22 = param_3;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 != 0) goto LAB_106e1e504;
  }
  else {
LAB_106e1e504:
    uVar2 = param_1;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfb1a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      _objc_release(unaff_x22);
      if ((uVar4 & 1) == 0) goto LAB_106e1e600;
    }
    else {
      _objc_release(uVar1);
      if ((int)uVar4 == 0) {
LAB_106e1e600:
        puVar6 = (ulong *)0x0;
        goto LAB_106e1e634;
      }
    }
  }
  uVar1 = param_1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    puVar6 = (ulong *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ff4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0ff4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071b60();
    if ((int)uVar4 == 0) {
      puVar6 = (ulong *)0x0;
    }
    else {
      puStack_58 = PTR_PTR_1126f7028;
      uStack_60 = param_1;
      _objc_msgSendSuper2(&uStack_60,PTR_s_isEqual__1125fa0c8,param_3);
    }
    _objc_release(lVar5);
    _objc_release(uVar2);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
LAB_106e1e634:
  _objc_release(param_3);
  return (undefined1 *)puVar6;
}



/* Entry: 106e1e65c; end: 106e1e6d7; -[SCMemoriesOperaStoryPlaylistGroup isEqual:] */

ulong FUN_106e1e65c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_1 == param_3) {
      param_1 = 1;
      goto LAB_106e1e6c0;
    }
    puVar1 = PTR_PTR_1126cdc40;
    _objc_opt_class(PTR_PTR_1126cdc40);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c0720a0(param_1);
      goto LAB_106e1e6c0;
    }
  }
  param_1 = 0;
LAB_106e1e6c0:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e1e6d8; end: 106e1e76f; -[SCMemoriesOperaStoryPlaylistGroup hash] */

ulong FUN_106e1e6d8(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f7028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_hash_1125d5420);
  uVar2 = param_1;
  func_0x00010c0ff4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde980();
  func_0x00010bfb1a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  _objc_release(uVar2);
  return uVar3 ^ uVar4 ^ (ulong)puVar1;
}



/* Entry: 106e1e770; end: 106e1e77f; -[SCMemoriesOperaStoryPlaylistGroup playbackItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e770(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f100);
}



/* Entry: 106e1e780; end: 106e1e78f; -[SCMemoriesOperaStoryPlaylistGroup firstPlaybackItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e780(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f0fc);
}



/* Entry: 106e1e790; end: 106e1e79f; -[SCMemoriesOperaStoryPlaylistGroup storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1e790(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f104);
}



/* Entry: 106e1e7a0; end: 106e1e7ef; -[SCMemoriesOperaStoryPlaylistGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1e7a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f104,0);
  _objc_storeStrong(param_1 + _DAT_11275f0fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f100,0);
  return;
}



/* Entry: 106e1e7f0; end: 106e1ea37; -[SCMemoriesOperaTimelinePlaylistGroup initWithItemId:entryType:isPrivate:playbackItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e1e7f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = param_6;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    uVar6 = 1;
    uVar7 = 1;
    uVar8 = 1;
  }
  else {
    lVar4 = *plStack_120;
    uVar6 = 1;
    uVar7 = 1;
    uVar9 = 1;
    do {
      lVar3 = 0;
      uVar10 = uVar9;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(param_6);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar3 * 8);
        if ((uVar6 & 1) == 0) {
          uVar6 = 0;
          if ((uVar7 & 1) == 0) goto LAB_106e1e8b8;
LAB_106e1e8d0:
          uVar7 = uVar9;
          func_0x00010c079e60();
          if ((uVar10 & 1) == 0) goto LAB_106e1e8c0;
LAB_106e1e8e0:
          func_0x00010c06bee0();
        }
        else {
          uVar6 = uVar9;
          func_0x00010c072ac0();
          if ((uVar7 & 1) != 0) goto LAB_106e1e8d0;
LAB_106e1e8b8:
          uVar7 = 0;
          if ((uVar10 & 1) != 0) goto LAB_106e1e8e0;
LAB_106e1e8c0:
          uVar9 = 0;
        }
        uVar8 = (undefined1)uVar9;
        lVar3 = lVar3 + 1;
        uVar10 = uVar9;
      } while (lVar5 != lVar3);
      lVar5 = param_6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  lVar5 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  puStack_138 = PTR_PTR_1126f7030;
  puVar1 = &uStack_140;
  uStack_140 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithItemId_entryId_entryType_1125e5978,param_3,param_3,
                      param_4,uVar6,uVar7,param_5,uVar8);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11275f108;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    return param_3;
  }
  return puVar1;
}



/* Entry: 106e1ea38; end: 106e1ea5b; -[SCMemoriesOperaTimelinePlaylistGroup copyWithZone:] */

undefined8 FUN_106e1ea38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e1ea5c; end: 106e1eb13; -[SCMemoriesOperaTimelinePlaylistGroup isEqualToTimelinePlaylistGroup:] */

undefined1 * FUN_106e1ea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar4 = &uStack_40;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ff4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ff4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071b60();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126f7030;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_isEqualToMemoriesPlaylistGroup__1125fa1c0,param_3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar4;
}



/* Entry: 106e1eb14; end: 106e1eb8f; -[SCMemoriesOperaTimelinePlaylistGroup isEqual:] */

ulong FUN_106e1eb14(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_1 == param_3) {
      param_1 = 1;
      goto LAB_106e1eb78;
    }
    puVar1 = PTR_PTR_1126cdc30;
    _objc_opt_class(PTR_PTR_1126cdc30);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c072100(param_1);
      goto LAB_106e1eb78;
    }
  }
  param_1 = 0;
LAB_106e1eb78:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e1eb90; end: 106e1ec03; -[SCMemoriesOperaTimelinePlaylistGroup hash] */

ulong FUN_106e1eb90(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f7030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_hash_1125d5420);
  func_0x00010c0ff4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar2 ^ (ulong)puVar1;
}



/* Entry: 106e1ec04; end: 106e1ec13; -[SCMemoriesOperaTimelinePlaylistGroup playbackItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e1ec04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f108);
}



/* Entry: 106e1ec14; end: 106e1ec27; -[SCMemoriesOperaTimelinePlaylistGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1ec14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f108,0);
  return;
}



/* Entry: 106e1ec28; end: 106e1ec9b; -[SCMemoriesOperaSessionFactoryServices initWithMemoriesOperaSessionFactory:] */

undefined1 * FUN_106e1ec28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7038;
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



/* Entry: 106e1ec9c; end: 106e1eca3; -[SCMemoriesOperaSessionFactoryServices memoriesOperaSessionFactory] */

undefined8 FUN_106e1ec9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e1eca4; end: 106e1ecaf; -[SCMemoriesOperaSessionFactoryServices .cxx_destruct] */

void FUN_106e1eca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e1ecb0; end: 106e1ed23; -[SCMemoriesOperaSessionServices initWithMemoriesOperaSessionPresenter:] */

undefined1 * FUN_106e1ecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7040;
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



/* Entry: 106e1ed24; end: 106e1ed2b; -[SCMemoriesOperaSessionServices memoriesOperaSessionPresenter] */

undefined8 FUN_106e1ed24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e1ed2c; end: 106e1ed37; -[SCMemoriesOperaSessionServices .cxx_destruct] */

void FUN_106e1ed2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e1ed38; end: 106e1edb3; -[SCMemoriesOperaViewDismissAnimationConfig initWithBaseView:topInset:] */

undefined1 *
FUN_106e1ed38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7048;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e1edb4; end: 106e1edcb; -[SCMemoriesOperaViewDismissAnimationConfig baseView] */

void FUN_106e1edb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e1edcc; end: 106e1edd3; -[SCMemoriesOperaViewDismissAnimationConfig topInset] */

undefined8 FUN_106e1edcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e1edd4; end: 106e1eddb; -[SCMemoriesOperaViewDismissAnimationConfig .cxx_destruct] */

void FUN_106e1edd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106e1eddc; end: 106e1ee4f; -[SCUserNavigationScopedMemoriesOperaSessionServices initWithMemoriesOperaSessionServices:] */

undefined1 * FUN_106e1eddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7050;
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



/* Entry: 106e1ee50; end: 106e1ee57; -[SCUserNavigationScopedMemoriesOperaSessionServices memoriesOperaSessionServices] */

undefined8 FUN_106e1ee50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e1ee58; end: 106e1ee63; -[SCUserNavigationScopedMemoriesOperaSessionServices .cxx_destruct] */

void FUN_106e1ee58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e1ee64; end: 106e1ef43; -[SCMemoriesOperaPlaybackItem initWithItemId:entryType:isFavorited:isPersisted:isPrivate:operaFeatureType:snapFeedItemLevelPriorityAndStoryId:] */

undefined1 *
FUN_106e1ee64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f7058;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


