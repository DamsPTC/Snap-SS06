/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e62c48; end: 108e62cfb; -[SCTimestampStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e62c48(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_storeStrong(param_1 + _DAT_11277c74c,0);
  _objc_storeStrong(param_1 + _DAT_11277c750,0);
  _objc_storeStrong(param_1 + _DAT_11277c75c,0);
  _objc_storeStrong(param_1 + _DAT_11277c754,0);
  _objc_storeStrong(param_1 + _DAT_11277c760,0);
  lVar1 = _DAT_11277c764 + param_1 + 0x10;
  lVar2 = -0x18;
  do {
    _objc_storeStrong(lVar1,0);
    lVar1 = lVar1 + -8;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c758,0);
  return;
}



/* Entry: 108e62cfc; end: 108e63267; -[SCWeatherFilterInformationView initWithFrame:locationName:temperatureScale:isPreviewSticker:infoStickerViewProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e62cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_90 = PTR_PTR_1126fec30;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar13 = (long)_DAT_11277c768;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_10;
    _objc_release(uVar2);
    puStack_d0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_108e63268;
    uStack_a8 = 0x108e63278;
    uStack_a0 = 0;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_108e63280;
    puStack_d8 = &UNK_110847658;
    ppuVar3 = &puStack_f0;
    puStack_c0 = puStack_d0;
    _objc_retainBlock();
    ppuVar4 = ppuVar3;
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb380);
    ppuVar5 = ppuVar4;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar5;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010bfb3ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11277c76c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined ***)((long)puVar1 + lVar11) = ppuVar7;
    _objc_release(uVar2);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar5);
    lVar8 = 0;
    _dispatch_semaphore_create();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    uVar2 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar8);
    _objc_retain(ppuVar3);
    func_0x00010c09b520(uVar12);
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_time(0,500000000);
    lVar11 = lVar8;
    _dispatch_semaphore_wait(lVar8,uVar2);
    if (lVar11 != 0) {
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    dVar14 = *(double *)PTR__CGRectZero_110347608;
    dVar15 = *(double *)(PTR__CGRectZero_110347608 + 8);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(dVar14,dVar15,uVar12,uVar16);
    lVar11 = (long)_DAT_11277c770;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar9;
    _objc_release(uVar2);
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar11));
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar9);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010befbb60(puVar1);
    puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(dVar14,dVar15,uVar12,uVar16);
    lVar11 = (long)_DAT_11277c774;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar9;
    _objc_release(uVar2);
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar11));
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar9);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010befbb60(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c778) = param_9;
    puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(dVar14,dVar15,uVar12,uVar16);
    lVar10 = (long)_DAT_11277c77c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar9;
    _objc_release(uVar2);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c118b40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(uVar2);
    _objc_release(uVar12);
    lVar11 = *(long *)((long)puVar1 + lVar10);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) {
      dVar14 = 56.0;
    }
    else {
      uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
      func_0x00010bfe6ac0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      uVar12 = *(undefined8 *)((long)puVar1 + lVar10);
      func_0x00010bfe6ac0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      dVar14 = dVar15 / dVar14 + dVar15 / dVar14;
      _objc_release(uVar12);
      _objc_release(uVar2);
    }
    _objc_release(lVar11);
    *(double *)((long)puVar1 + (long)_DAT_11277c780) = dVar14;
    func_0x00010befbb60(puVar1);
    func_0x00010c28ace0(puVar1);
    _objc_release(ppuVar3);
    _objc_release(lVar8);
    _objc_release(lVar8);
    _objc_release(ppuVar3);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108e63268; end: 108e6327f;  */

void FUN_108e63268(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e63280; end: 108e6331b;  */

void FUN_108e63280(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110efb098);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e6331c; end: 108e63327;  */

void FUN_108e6331c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e63324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e63328; end: 108e6351b; -[SCWeatherFilterInformationView updateTemperatureScale:] */

/* WARNING: Possible PIC construction at 0x000108e6342c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e63460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e634a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e63464) */
/* WARNING: Removing unreachable block (ram,0x000108e63430) */
/* WARNING: Removing unreachable block (ram,0x000108e634a8) */
/* WARNING: Removing unreachable block (ram,0x000108e634fc) */
/* WARNING: Removing unreachable block (ram,0x000108e634b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e63328(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = param_5;
  func_0x00010bec56c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11277c774;
  func_0x00010c212f20(*(undefined8 *)(param_5 + lVar2));
  _objc_release(lVar3);
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(param_5);
  lVar3 = (long)_DAT_11277c770;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetWidth();
  dVar4 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetWidth();
  param_1 = param_1 + dVar4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetHeight();
  dVar5 = (param_3 - param_1) * 0.5;
  bVar1 = *(char *)(param_5 + _DAT_11277c778) == '\0';
  dVar7 = 0.0;
  if (bVar1) {
    dVar7 = (param_4 + -67.0) - dVar4;
  }
  dVar4 = 0.0;
  if (bVar1) {
    dVar4 = dVar5;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetWidth();
  dVar6 = dVar5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4,dVar7,dVar5,dVar6,*(undefined8 *)(param_5 + lVar3),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108e6351c; end: 108e635c7; -[SCWeatherFilterInformationView shouldResponseToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6351c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010c09ef00(param_5,param_4,param_3);
  lVar1 = (long)_DAT_11277c774;
  dVar2 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetMinX();
  dVar3 = dVar2 + -10.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetMinY();
  dVar4 = dVar2 + -10.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetHeight();
  dVar5 = dVar2 + 20.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)(dVar3,dVar4,dVar5,dVar2 + 20.0,param_1,param_2);
  return;
}



/* Entry: 108e635c8; end: 108e635eb; -[SCWeatherFilterInformationView _stringForTemperatureScale:] */

undefined ** FUN_108e635c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efc598;
  if (param_3 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110efc578;
  if (param_3 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 108e635ec; end: 108e6365b; -[SCWeatherFilterInformationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e635ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c768,0);
  _objc_storeStrong(param_1 + _DAT_11277c76c,0);
  _objc_storeStrong(param_1 + _DAT_11277c77c,0);
  _objc_storeStrong(param_1 + _DAT_11277c774,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c770,0);
  return;
}



/* Entry: 108e6365c; end: 108e63f6b; -[SCInfoStickerEditorViewController initWithStickerView:stickerType:defaultTitle:userSession:userTaggingFriendsProvider:customStoriesDataFetcher:imageDownloader:remixSettingsService:circumstanceEngine:valdiRuntimeProvider:userTaggingCarousel:creativeToolsABProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e6365c(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4,
             undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuStack_198;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
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
  puStack_80 = PTR_PTR_1126fec38;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  ppuVar10 = param_5;
  if (puVar1 == (undefined8 *)0x0) goto LAB_108e63e98;
  _objc_storeWeak((long)puVar1 + (long)_DAT_11277c784,param_10);
  lVar11 = (long)_DAT_11277c788;
  _objc_retain(param_11);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
  *(undefined8 *)((long)puVar1 + lVar11) = param_11;
  _objc_release(uVar2);
  lVar11 = (long)_DAT_11277c78c;
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
  *(undefined8 *)((long)puVar1 + lVar11) = param_7;
  _objc_release(uVar2);
  *(long *)((long)puVar1 + (long)_DAT_11277c790) = param_4;
  ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuVar10 = param_5;
  }
  _objc_retain(ppuVar10);
  _objc_release(param_5);
  if (param_4 < 0x10) {
    if (param_4 == 8) {
      lVar11 = (long)_DAT_11277c794;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
      *(undefined ***)((long)puVar1 + lVar11) = param_3;
      _objc_release(uVar2);
      puVar5 = PTR_PTR_1126bb310;
      _objc_alloc();
      func_0x00010c0511e0();
      uVar2 = param_13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)_DAT_11277c798;
      uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
      *(undefined8 *)((long)puVar1 + lVar11) = uVar2;
      _objc_release(uVar8);
      func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
      _objc_initWeak(auStack_90,puVar1);
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_108e63f6c;
      puStack_a0 = &UNK_110843540;
      _objc_copyWeak(auStack_98,auStack_90);
      func_0x00010c2134c0(puVar5);
      puStack_e0 = puVar6;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x108e63fc4;
      puStack_c8 = &UNK_1108434b0;
      _objc_copyWeak(auStack_c0,auStack_90);
      func_0x00010c2134e0(puVar5);
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c79c);
      *(undefined **)((long)puVar1 + (long)_DAT_11277c79c) = puVar5;
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_c0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      goto LAB_108e63e98;
    }
    if (param_4 != 10) goto LAB_108e63e98;
    lVar11 = (long)_DAT_11277c794;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined ***)((long)puVar1 + lVar11) = param_3;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126bb320;
    ppuVar9 = *(undefined ***)((long)puVar1 + lVar11);
    _objc_retain(ppuVar9);
    _objc_opt_class(puVar6);
    ppuVar7 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar6);
    ppuStack_198 = ppuVar9;
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuStack_198 = (undefined **)0x0;
    }
    _objc_retain(ppuStack_198);
    _objc_release(ppuVar9);
    ppuVar7 = (undefined **)PTR_PTR_1126bb320;
    _objc_alloc();
    func_0x00010c04c920();
    if (ppuStack_198 == (undefined **)0x0) {
      func_0x00010c212f20(ppuVar7);
    }
    else {
      ppuVar3 = ppuVar9;
      func_0x00010c26b700(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(ppuVar7);
      _objc_release(ppuVar3);
      func_0x00010c25b720(ppuVar9);
    }
    func_0x00010c20ddc0(ppuVar7);
    _objc_initWeak(auStack_90,puVar1);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x108e63ff8;
    puStack_f0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c2134e0(ppuVar7);
    lVar11 = (long)_DAT_11277c79c;
    _objc_retain(ppuVar7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined ***)((long)puVar1 + lVar11) = ppuVar7;
    _objc_release(uVar2);
    func_0x00010be39a80(puVar1);
    puVar6 = PTR_PTR_1126dc340;
    _objc_alloc();
    func_0x00010c00ed40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c7a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c7a0) = puVar6;
    _objc_release(uVar2);
    FUN_108ea24b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be39aa0(puVar1);
    _objc_release(uVar2);
    func_0x00010be3a640(puVar1);
    puVar6 = PTR_PTR_1126dc348;
    _objc_alloc();
    uVar2 = param_6;
    func_0x00010c2923e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c6a0();
    lVar11 = (long)_DAT_11277c7a8;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar6;
    _objc_release(uVar8);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_90);
  }
  else {
    if (param_4 != 0x10) {
      if (param_4 == 0x15) {
        lVar11 = (long)_DAT_11277c794;
        _objc_retain(param_3);
        uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
        *(undefined ***)((long)puVar1 + lVar11) = param_3;
        _objc_release(uVar2);
        puVar6 = PTR_PTR_1126dc350;
        _objc_retain(param_3);
        _objc_opt_class(puVar6);
        ppuVar9 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar6);
        ppuVar7 = param_3;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar7 = (undefined **)0x0;
        }
        _objc_retain(ppuVar7);
        _objc_release(param_3);
        uVar2 = param_12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x000108e73cf8();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126bb348;
        ppuVar9 = ppuVar7;
        func_0x00010c0846e0(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c142e00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8c720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(ppuVar9);
        _objc_initWeak(auStack_90,puVar1);
        _objc_copyWeak(auStack_138,auStack_90);
        func_0x00010c2134e0(puVar6);
        uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c79c);
        *(undefined **)((long)puVar1 + (long)_DAT_11277c79c) = puVar6;
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_138);
        _objc_destroyWeak(auStack_90);
        _objc_release(uVar8);
        _objc_release(uVar2);
        _objc_release(ppuVar7);
      }
      goto LAB_108e63e98;
    }
    lVar11 = (long)_DAT_11277c794;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined ***)((long)puVar1 + lVar11) = param_3;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126bb2f8;
    _objc_retain(param_3);
    _objc_opt_class(puVar6);
    ppuVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    ppuStack_198 = param_3;
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuStack_198 = (undefined **)0x0;
    }
    _objc_retain(ppuStack_198);
    _objc_release(param_3);
    ppuVar7 = ppuVar10;
    func_0x00010c08fa60();
    if (ppuVar7 == (undefined **)0x0) {
      func_0x000108e73a88();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar10);
      ppuVar7 = ppuVar10;
    }
    if (ppuStack_198 == (undefined **)0x0) {
      _objc_retain(ppuVar7);
      ppuVar9 = ppuVar7;
    }
    else {
      ppuVar9 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126bb2f8;
    _objc_alloc();
    func_0x00010bfef260();
    _objc_initWeak(auStack_90,puVar1);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x108e64024;
    puStack_118 = &UNK_1108434b0;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010c2134e0(puVar6);
    lVar11 = (long)_DAT_11277c79c;
    _objc_retain(puVar6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar6;
    _objc_release(uVar2);
    func_0x00010be393e0(puVar1);
    func_0x00010be39aa0(puVar1);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar6);
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar7);
  _objc_release(ppuStack_198);
LAB_108e63e98:
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar10);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e63f6c; end: 108e6407b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e63f6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0f8ea0(*(undefined8 *)(param_1 + _DAT_11277c798));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e6407c; end: 108e640ff; -[SCInfoStickerEditorViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6407c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec38;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277c7ac);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf407a0();
  func_0x00010c181140(param_2,*(undefined8 *)(param_3 + _DAT_11277c7b0));
  _objc_release(uVar1);
  return;
}



/* Entry: 108e64100; end: 108e64257; -[SCInfoStickerEditorViewController _initEditingSelectorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e64100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0x3ff0000000000000);
  func_0x00010c1c82c0(0x3ff0000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11277c7ac;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR_PTR_1126dc358;
  _objc_opt_class(PTR_PTR_1126dc358);
  puVar3 = PTR_PTR_1126dc358;
  _objc_opt_class(PTR_PTR_1126dc358);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4,param_2,puVar2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e64258; end: 108e64347; -[SCInfoStickerEditorViewController _initEditingTextLabelWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e64258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11277c790) == 0x10) {
    puVar1 = PTR_PTR_1126bb2f8;
    func_0x00010c11dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277c7b4);
    *(undefined **)(param_1 + _DAT_11277c7b4) = puVar1;
    _objc_release(uVar2);
  }
  else {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar3 = (long)_DAT_11277c7b4;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,0x17);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e64348; end: 108e643fb; -[SCInfoStickerEditorViewController _initStickerCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e64348(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11277c7a4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e643fc; end: 108e644eb; -[SCInfoStickerEditorViewController _initActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e643fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + _DAT_11277c790) == 0x10) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126dc360;
    _objc_alloc();
    func_0x00010bfeefc0();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c211ae0(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277c7b8);
    *(undefined **)(param_1 + _DAT_11277c7b8) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 108e644ec; end: 108e64593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e644ec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126bb2f8;
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + _DAT_11277c79c);
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010c212f20(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e64594; end: 108e6464f; -[SCInfoStickerEditorViewController viewDidLoad] */

void FUN_108e64594(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010beac3c0(param_1);
  func_0x00010beac3a0(param_1);
  func_0x00010beb0f60(param_1);
  func_0x00010beafea0(param_1);
  func_0x00010beac3e0(param_1);
  func_0x00010beaa5a0(param_1);
  return;
}



/* Entry: 108e64650; end: 108e6489f; -[SCInfoStickerEditorViewController _setupEditingSticker] */

/* WARNING: Possible PIC construction at 0x000108e646fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e64868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e64700) */
/* WARNING: Removing unreachable block (ram,0x000108e6476c) */
/* WARNING: Removing unreachable block (ram,0x000108e64730) */
/* WARNING: Removing unreachable block (ram,0x000108e64808) */
/* WARNING: Removing unreachable block (ram,0x000108e64738) */
/* WARNING: Removing unreachable block (ram,0x000108e64810) */
/* WARNING: Removing unreachable block (ram,0x000108e6486c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e64650(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277c79c;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf34860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 108e648a0; end: 108e64b53; -[SCInfoStickerEditorViewController _setupEditingSelectorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e648a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11277c7ac;
  if (*(long *)(param_1 + lVar9) != 0) {
    lVar7 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c08e400(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf493c0(0x4040000000000000,uVar1,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c1408a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf493c0(0xc040000000000000,uVar1,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c274200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277c79c);
    func_0x00010bf1ff80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf493c0(0x4030000000000000,uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11277c7a0;
    uVar3 = *(ulong *)(param_1 + lVar7);
    func_0x00010c29db80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    uVar5 = uVar1;
    func_0x00010bf49420((double)uVar4 * 58.5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277c7b0;
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar5;
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar8),param_2,1);
    puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c24efe0(uVar5);
    func_0x00010bfed020(puVar6,param_2,uVar5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158b60(uVar1,param_2,puVar6,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 108e64b54; end: 108e64e2b; -[SCInfoStickerEditorViewController _setupUserTaggingCarousel] */

/* WARNING: Possible PIC construction at 0x000108e64c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e64cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e64dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e64cdc) */
/* WARNING: Removing unreachable block (ram,0x000108e64c4c) */
/* WARNING: Removing unreachable block (ram,0x000108e64ddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e64b54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277c798;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf4b2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf4b2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf4b2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 108e64e2c; end: 108e65367; -[SCInfoStickerEditorViewController _setupStickerCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e64e2c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11277c7a4;
  if (*(long *)(param_1 + lVar8) != 0) {
    unaff_x20 = PTR_PTR_1126b1198;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_78 = puVar5;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(unaff_x20);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar1);
    func_0x00010c1677c0(0x3fe6666666666666,unaff_x20);
    func_0x00010c21e900(unaff_x20);
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(unaff_x20);
    puVar1 = unaff_x20;
    func_0x00010c08e400(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf493a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar1 = unaff_x20;
    func_0x00010c1408a0(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf493a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar1 = unaff_x20;
    func_0x00010bfe0660(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = &DAT_11277c7a8;
    unaff_x27 = (undefined *)(long)_DAT_11277c7a8;
    func_0x00010bf32740(*(undefined8 *)(param_1 + (long)unaff_x27));
    puVar9 = puVar1;
    func_0x00010bf49420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar1 = unaff_x20;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11277c7c4;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar1);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar7));
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c08e400(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(puVar9);
    _objc_release(puVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c1408a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(puVar9);
    _objc_release(puVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfe0660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32820(*(undefined8 *)(param_1 + (long)unaff_x27));
    uVar6 = uVar4;
    func_0x00010bf49420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar6);
    _objc_release(uVar4);
    unaff_x21 = *(undefined **)(param_1 + lVar8);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = (long)_DAT_11277c7c0;
    uVar6 = *(undefined8 *)(param_1 + unaff_x24);
    *(undefined **)(param_1 + unaff_x24) = puVar1;
    _objc_release(uVar6);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    func_0x00010c162480(*(undefined8 *)(param_1 + unaff_x24));
    param_1 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_108e65368;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (undefined *)(long)_DAT_11277c7b4;
  puVar1 = (undefined *)0x0;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + (long)puVar9) == 0) {
LAB_108e656d8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      return;
    }
  }
  else {
    func_0x00010c1cfce0();
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + (long)puVar9));
    puVar5 = *(undefined **)(param_1 + (long)puVar9);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    _objc_release(puVar5);
    lVar8 = (long)_DAT_11277c7ac;
    if (*(long *)(param_1 + lVar8) == 0) {
      lVar8 = *(long *)(param_1 + _DAT_11277c790);
      unaff_x20 = *(undefined **)(param_1 + (long)puVar9);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0x10) {
        puVar1 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = unaff_x20;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined *)(long)_DAT_11277c7c8;
        uVar6 = *(undefined8 *)(param_1 + (long)unaff_x23);
        *(undefined **)(param_1 + (long)unaff_x23) = puVar2;
        _objc_release(uVar6);
        _objc_release(puVar5);
        _objc_release(puVar1);
        _objc_release(unaff_x20);
        puStack_130 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar5 = *(undefined **)(param_1 + (long)puVar9);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        puStack_118 = puVar5;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        puStack_110 = puVar1;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_120 = puVar1;
        func_0x00010bf493c0(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = *(long *)(param_1 + (long)puVar9);
        puStack_128 = puVar5;
        puStack_108 = puVar5;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x26;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x24;
        func_0x00010bf493c0(0xc024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = *(undefined **)(param_1 + (long)puVar9);
        lStack_100 = unaff_x28;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = unaff_x20;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = puVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_f0 = *(undefined8 *)(param_1 + (long)unaff_x23);
        param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_f8 = unaff_x22;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puStack_130);
        _objc_release(param_1);
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
        _objc_release(unaff_x20);
        _objc_release(puVar9);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        _objc_release(unaff_x24);
        _objc_release(puStack_128);
        _objc_release(puStack_120);
        _objc_release(puStack_110);
        puVar1 = puStack_118;
        _objc_release();
        goto LAB_108e656d8;
      }
      param_1 = *(undefined **)(param_1 + _DAT_11277c79c);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0xc043400000000000;
    }
    else {
      unaff_x20 = *(undefined **)(param_1 + (long)puVar9);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      param_1 = *(undefined **)(param_1 + lVar8);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x4030000000000000;
    }
    unaff_x21 = unaff_x20;
    func_0x00010bf493c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(unaff_x21);
    puVar1 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108e657a4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11277c7b8;
  puVar5 = *(undefined **)(puVar1 + lVar8);
  lStack_190 = unaff_x28;
  puStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  puStack_178 = puVar9;
  lStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  puStack_150 = unaff_x20;
  puStack_148 = param_1;
  ppuStack_140 = &puStack_90;
  if ((puVar5 != (undefined *)0x0) && (*(long *)(puVar1 + _DAT_11277c790) == 0x10)) {
    func_0x00010c219b60();
    puVar9 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    param_1 = *(undefined **)(puVar1 + lVar8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(undefined **)(puVar1 + _DAT_11277c79c);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + lVar8);
    puStack_1a8 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1a0 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(unaff_x20);
    puVar5 = param_1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_108e6597c;
  puStack_1d8 = PTR_PTR_1126fec38;
  puStack_1e0 = puVar5;
  puStack_1d0 = unaff_x20;
  puStack_1c8 = param_1;
  ppuStack_1c0 = &ppuStack_140;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  func_0x00010beb8060(puVar5);
  func_0x00010bea6ba0(puVar5);
  return;
}



/* Entry: 108e65368; end: 108e657a3; -[SCInfoStickerEditorViewController _setupEditingTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e65368(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar7;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar8;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
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
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined *)(long)_DAT_11277c7b4;
  puVar1 = (undefined *)0x0;
  if (*(long *)(param_1 + (long)puVar7) == 0) {
LAB_108e656d8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    func_0x00010c1cfce0(*(long *)(param_1 + (long)puVar7),param_2,0);
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + (long)puVar7));
    lVar2 = *(long *)(param_1 + (long)puVar7);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    _objc_release(lVar2);
    lVar2 = (long)_DAT_11277c7ac;
    if (*(long *)(param_1 + lVar2) == 0) {
      lVar2 = *(long *)(param_1 + _DAT_11277c790);
      unaff_x20 = *(undefined **)(param_1 + (long)puVar7);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0x10) {
        puVar1 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = unaff_x20;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (long)_DAT_11277c7c8;
        uVar8 = *(undefined8 *)(param_1 + unaff_x23);
        *(undefined **)(param_1 + unaff_x23) = puVar3;
        _objc_release(uVar8);
        _objc_release(puVar4);
        _objc_release(puVar1);
        _objc_release(unaff_x20);
        puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar4 = *(undefined **)(param_1 + (long)puVar7);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        puStack_98 = puVar4;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar1;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = puVar1;
        func_0x00010bf493c0(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = *(undefined8 *)(param_1 + (long)puVar7);
        puStack_a8 = puVar4;
        puStack_88 = puVar4;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x26;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x24;
        func_0x00010bf493c0(0xc024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = *(undefined **)(param_1 + (long)puVar7);
        uStack_80 = unaff_x28;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = unaff_x20;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = puVar7;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_70 = *(undefined8 *)(param_1 + unaff_x23);
        param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_78 = unaff_x22;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puStack_b0);
        _objc_release(param_1);
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
        _objc_release(unaff_x20);
        _objc_release(puVar7);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        _objc_release(unaff_x24);
        _objc_release(puStack_a8);
        _objc_release(puStack_a0);
        _objc_release(puStack_90);
        puVar1 = puStack_98;
        _objc_release();
        goto LAB_108e656d8;
      }
      param_1 = *(undefined **)(param_1 + _DAT_11277c79c);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0xc043400000000000;
    }
    else {
      unaff_x20 = *(undefined **)(param_1 + (long)puVar7);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      param_1 = *(undefined **)(param_1 + lVar2);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0x4030000000000000;
    }
    unaff_x21 = unaff_x20;
    func_0x00010bf493c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(unaff_x21);
    puVar1 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_108e657a4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = (long)_DAT_11277c7b8;
  puVar4 = *(undefined **)(puVar1 + lVar2);
  uStack_110 = unaff_x28;
  puStack_108 = unaff_x27;
  puStack_100 = unaff_x26;
  puStack_f8 = puVar7;
  uStack_f0 = unaff_x24;
  lStack_e8 = unaff_x23;
  puStack_e0 = unaff_x22;
  puStack_d8 = unaff_x21;
  puStack_d0 = unaff_x20;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((puVar4 != (undefined *)0x0) && (*(long *)(puVar1 + _DAT_11277c790) == 0x10)) {
    func_0x00010c219b60();
    puVar7 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    param_1 = *(undefined **)(puVar1 + lVar2);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(undefined **)(puVar1 + _DAT_11277c79c);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar1 + lVar2);
    puStack_128 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_120 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(unaff_x20);
    puVar4 = param_1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108e6597c;
  puStack_158 = PTR_PTR_1126fec38;
  puStack_160 = puVar4;
  puStack_150 = unaff_x20;
  puStack_148 = param_1;
  ppuStack_140 = &puStack_c0;
  _objc_msgSendSuper2(&puStack_160,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  func_0x00010beb8060(puVar4);
  func_0x00010bea6ba0(puVar4);
  return;
}



/* Entry: 108e657a4; end: 108e6597b; -[SCInfoStickerEditorViewController _setupActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e657a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_11277c7b8;
  lVar1 = *(long *)(param_1 + lVar6);
  if ((lVar1 != 0) && (*(long *)(param_1 + _DAT_11277c790) == 0x10)) {
    func_0x00010c219b60(lVar1,param_2,0);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x19 = *(long *)(param_1 + lVar6);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(undefined8 *)(param_1 + _DAT_11277c79c);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = unaff_x19;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    lStack_78 = lVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(unaff_x20);
    lVar1 = unaff_x19;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_108e6597c;
  puStack_a8 = PTR_PTR_1126fec38;
  lStack_b0 = lVar1;
  uStack_a0 = unaff_x20;
  lStack_98 = unaff_x19;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_viewWillAppear__1126853f0);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar5);
  func_0x00010beb8060(lVar1);
  func_0x00010bea6ba0(lVar1);
  return;
}



/* Entry: 108e6597c; end: 108e65a0f; -[SCInfoStickerEditorViewController viewWillAppear:] */

void FUN_108e6597c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fec38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  func_0x00010beb8060(param_1);
  func_0x00010bea6ba0(param_1);
  return;
}



/* Entry: 108e65a10; end: 108e65b03; -[SCInfoStickerEditorViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e65a10(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fec38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_11277c79c));
  func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
  if (*(long *)(param_1 + _DAT_11277c798) != 0) {
    func_0x00010c0f8ea0();
  }
  return;
}



/* Entry: 108e65b04; end: 108e65b93; -[SCInfoStickerEditorViewController viewWillDisappear:] */

void FUN_108e65b04(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fec38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  func_0x00010bea6ba0(param_1);
  func_0x00010be35420(param_1);
  return;
}



/* Entry: 108e65b94; end: 108e65d33; -[SCInfoStickerEditorViewController _addTaggedSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e65b94(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bb310;
  uVar5 = *(ulong *)(param_1 + _DAT_11277c79c);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108e65d34;
  puStack_80 = &UNK_110850cf8;
  lStack_78 = param_1;
  _objc_retain(param_3);
  lStack_70 = param_3;
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar4 = &puStack_98;
  _objc_retainBlock();
  if ((param_3 != 0) && (uVar1 != 0)) {
    puStack_c8 = puVar2;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x108e65e7c;
    puStack_b0 = &UNK_11084aaa8;
    lStack_a8 = param_1;
    _objc_retain(ppuVar4);
    ppuStack_a0 = ppuVar4;
    func_0x000107c312cc("APPSTORE",&puStack_c8);
    _objc_release(ppuStack_a0);
  }
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_release(lStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108e65d34; end: 108e65f5b;  */

void FUN_108e65d34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bee6680();
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf85d80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      FUN_10901e6c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar1,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf85d80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(uVar1,param_2,uVar6);
      goto LAB_108e65e00;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c294420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar1,param_2,uVar6);
LAB_108e65e00:
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c294420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f760(uVar1,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(uVar1,param_2,uVar6);
  _objc_release(uVar6);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010beca9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e65f5c; end: 108e65f67;  */

void FUN_108e65f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e65f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e65f68; end: 108e660cf; -[SCInfoStickerEditorViewController _showBlackOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e65f68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_11277c7cc;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e660d0;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  return;
}



/* Entry: 108e660d0; end: 108e66107;  */

void FUN_108e660d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1c940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fe0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66108; end: 108e661f3; -[SCInfoStickerEditorViewController _setRemixExplanationLabelHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66108(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126dc0f8;
  if (*(long *)(param_1 + _DAT_11277c798) != 0) {
    lVar4 = (long)_DAT_11277c7d0;
    lVar1 = *(long *)(param_1 + lVar4);
    if (((int)param_3 == 0) || (lVar1 != 0)) {
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010c087740();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        *(undefined **)(param_1 + lVar4) = puVar2;
        _objc_release(uVar3);
        _objc_release(lVar1);
        lVar1 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066f80();
        _objc_release(lVar1);
        lVar1 = *(long *)(param_1 + lVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,param_3);
      return;
    }
  }
  return;
}



/* Entry: 108e661f4; end: 108e661f7; -[SCInfoStickerEditorViewController _tappedBackground] */

void FUN_108e661f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishEditing_112563528);
  return;
}



/* Entry: 108e661f8; end: 108e66403; -[SCInfoStickerEditorViewController _finishEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e661f8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126bb310;
  uVar5 = *(ulong *)(param_1 + _DAT_11277c79c);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  if (uVar5 == 0) {
    lVar6 = *(long *)(param_1 + _DAT_11277c78c);
    uVar3 = uVar1;
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    if (lVar4 == 0) {
      func_0x00010c212f20(uVar1);
    }
    else {
      lVar6 = lVar4;
      func_0x00010c2923e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(uVar1);
      _objc_release(lVar6);
      lVar6 = lVar4;
      func_0x00010c294420(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f760(uVar1);
      _objc_release(lVar6);
    }
    _objc_release(lVar4);
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010be35420(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 108e66404; end: 108e664ab;  */

void FUN_108e66404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108e664ac; end: 108e6650f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e664ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76800();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e66510; end: 108e66627; -[SCInfoStickerEditorViewController _hideBlackOverlayWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11277c7cc) != 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108e66628;
    puStack_48 = &UNK_110842e18;
    lStack_40 = param_1;
    _objc_copyWeak(auStack_68,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf03420(0x3fc999999999999a,puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108e66628; end: 108e6665f;  */

void FUN_108e66628(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1c940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66660; end: 108e666eb;  */

void FUN_108e66660(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf1c940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1718a0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108e666d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108e666ec; end: 108e666ef; -[SCInfoStickerEditorViewController _keyboardWillShow:] */

void FUN_108e666ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBottomLayoutConstraintWit_112592ac0);
  return;
}



/* Entry: 108e666f0; end: 108e6696b; -[SCInfoStickerEditorViewController _updateBottomLayoutConstraintWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e666f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar4 = param_1;
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,
                      *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,*(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_110345d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar1);
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(dVar4,param_2,param_3,param_4);
  dVar6 = dVar4;
  _objc_release(lVar3);
  if (*(long *)(param_5 + _DAT_11277c798) == 0) {
    if (*(long *)(param_5 + _DAT_11277c7a4) == 0) {
      dVar6 = 0.0;
    }
    else {
      func_0x00010bf32820(*(undefined8 *)(param_5 + _DAT_11277c7a8));
      dVar6 = (double)(int)dVar6;
    }
  }
  else {
    dVar6 = 60.0;
  }
  _CGRectGetMinY(dVar4,param_2,param_3,param_4);
  lVar3 = param_5;
  dVar5 = dVar4;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxY();
  dVar5 = dVar5 - dVar4;
  _objc_release(lVar3);
  func_0x00010c181140(((dVar5 * -0.5 - dVar5) + -15.0) - dVar6,
                      *(undefined8 *)(param_5 + _DAT_11277c7bc));
  func_0x00010c181140(-dVar5,*(undefined8 *)(param_5 + _DAT_11277c7c0));
  func_0x00010c181140(-dVar5,*(undefined8 *)(param_5 + _DAT_11277c7c4));
  func_0x00010c181140(-10.0 - dVar5,*(undefined8 *)(param_5 + _DAT_11277c7c8));
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108e6696c;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_5;
  func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,uVar2,&puStack_88,0);
  _objc_release(param_7);
  return;
}



/* Entry: 108e6696c; end: 108e6699f;  */

void FUN_108e6696c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e669a0; end: 108e669a3; -[SCInfoStickerEditorViewController stickerCarouselItemTapped] */

void FUN_108e669a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beca9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tappedBackground_112590418);
  return;
}



/* Entry: 108e669a4; end: 108e669a7; -[SCInfoStickerEditorViewController didSelectSnapchatter:] */

void FUN_108e669a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addTaggedSnapchatter__11254fbd0);
  return;
}



/* Entry: 108e669a8; end: 108e669ef; -[SCInfoStickerEditorViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e669a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c7a0);
  func_0x00010c29db80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108e669f0; end: 108e66ae7; -[SCInfoStickerEditorViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e669f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126dc358;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c7a0);
  func_0x00010c29db80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  uVar5 = uVar3;
  func_0x00010c0dfd40(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar2,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e66ae8; end: 108e66b1b; -[SCInfoStickerEditorViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c7a0);
  func_0x00010c0840e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0ec4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_optionSelectedAtIndex__112618b50,param_4);
  return;
}



/* Entry: 108e66b1c; end: 108e66c27; -[SCInfoStickerEditorViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e66b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_PTR_1126dc358;
  uVar3 = *(undefined8 *)(param_5 + _DAT_11277c7a0);
  _objc_retain(param_9);
  _objc_retain(param_7);
  func_0x00010c29db80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_9;
  func_0x00010c0840e0(param_9);
  _objc_release(param_9);
  uVar2 = uVar3;
  func_0x00010c0dfd40(uVar3,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  uVar4 = 0x7fefffffffffffff;
  func_0x00010c23d6e0(puVar1,param_6,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108e66c28; end: 108e66c47; -[SCInfoStickerEditorViewController _useFirstNameForTagging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c788),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110efc5b8,0,0);
  return;
}



/* Entry: 108e66c48; end: 108e66c67; -[SCInfoStickerEditorViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66c48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c7d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e66c68; end: 108e66c7b; -[SCInfoStickerEditorViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66c68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277c7d4,param_3);
  return;
}



/* Entry: 108e66c7c; end: 108e66c8b; -[SCInfoStickerEditorViewController blackOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66c7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7cc);
}



/* Entry: 108e66c8c; end: 108e66ccb; -[SCInfoStickerEditorViewController setBlackOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66ccc; end: 108e66cdb; -[SCInfoStickerEditorViewController oldSticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66ccc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c794);
}



/* Entry: 108e66cdc; end: 108e66d1b; -[SCInfoStickerEditorViewController setOldSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c794;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66d1c; end: 108e66d2b; -[SCInfoStickerEditorViewController editingSticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c79c);
}



/* Entry: 108e66d2c; end: 108e66d6b; -[SCInfoStickerEditorViewController setEditingSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c79c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66d6c; end: 108e66d7b; -[SCInfoStickerEditorViewController selectorManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66d6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7a0);
}



/* Entry: 108e66d7c; end: 108e66dbb; -[SCInfoStickerEditorViewController setSelectorManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66dbc; end: 108e66dcb; -[SCInfoStickerEditorViewController editingSelectorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66dbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7ac);
}



/* Entry: 108e66dcc; end: 108e66e0b; -[SCInfoStickerEditorViewController setEditingSelectorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66e0c; end: 108e66e1b; -[SCInfoStickerEditorViewController stickerCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66e0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7a4);
}



/* Entry: 108e66e1c; end: 108e66e5b; -[SCInfoStickerEditorViewController setStickerCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66e5c; end: 108e66e6b; -[SCInfoStickerEditorViewController stickerCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66e5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7a8);
}



/* Entry: 108e66e6c; end: 108e66eab; -[SCInfoStickerEditorViewController setStickerCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66eac; end: 108e66ebb; -[SCInfoStickerEditorViewController editingTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66eac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7b4);
}



/* Entry: 108e66ebc; end: 108e66efb; -[SCInfoStickerEditorViewController setEditingTextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66efc; end: 108e66f0b; -[SCInfoStickerEditorViewController stickerBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66efc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7bc);
}



/* Entry: 108e66f0c; end: 108e66f4b; -[SCInfoStickerEditorViewController setStickerBottomConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66f4c; end: 108e66f5b; -[SCInfoStickerEditorViewController carouselBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7c0);
}



/* Entry: 108e66f5c; end: 108e66f9b; -[SCInfoStickerEditorViewController setCarouselBottomConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66f9c; end: 108e66fab; -[SCInfoStickerEditorViewController carouselGradientBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66f9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7c4);
}



/* Entry: 108e66fac; end: 108e66feb; -[SCInfoStickerEditorViewController setCarouselGradientBottomConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e66fec; end: 108e66ffb; -[SCInfoStickerEditorViewController editingTextLabelBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e66fec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c7c8);
}



/* Entry: 108e66ffc; end: 108e6703b; -[SCInfoStickerEditorViewController setEditingTextLabelBottomConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e66ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c7c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6703c; end: 108e67193; -[SCInfoStickerEditorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6703c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c7c8,0);
  _objc_storeStrong(param_1 + _DAT_11277c7c4,0);
  _objc_storeStrong(param_1 + _DAT_11277c7c0,0);
  _objc_storeStrong(param_1 + _DAT_11277c7bc,0);
  _objc_storeStrong(param_1 + _DAT_11277c7b4,0);
  _objc_storeStrong(param_1 + _DAT_11277c7a8,0);
  _objc_storeStrong(param_1 + _DAT_11277c7a4,0);
  _objc_storeStrong(param_1 + _DAT_11277c7ac,0);
  _objc_storeStrong(param_1 + _DAT_11277c7a0,0);
  _objc_storeStrong(param_1 + _DAT_11277c79c,0);
  _objc_storeStrong(param_1 + _DAT_11277c794,0);
  _objc_storeStrong(param_1 + _DAT_11277c7cc,0);
  _objc_destroyWeak(param_1 + _DAT_11277c7d4);
  _objc_storeStrong(param_1 + _DAT_11277c7b0,0);
  _objc_storeStrong(param_1 + _DAT_11277c7b8,0);
  _objc_storeStrong(param_1 + _DAT_11277c7d0,0);
  _objc_storeStrong(param_1 + _DAT_11277c798,0);
  _objc_storeStrong(param_1 + _DAT_11277c788,0);
  _objc_storeStrong(param_1 + _DAT_11277c78c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c784);
  return;
}



/* Entry: 108e67194; end: 108e672fb; -[SCStoryInviteStickerCarouselManager initWithStickerCarousel:editingSticker:userId:customStoriesDataFetcher:imageDownloader:] */

undefined1 *
FUN_108e67194(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fec40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010beafec0(puVar2);
    puVar3 = PTR_PTR_1126bb320;
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x10);
    *(ulong *)((long)puVar2 + 0x10) = uVar1;
    _objc_release(uVar5);
    func_0x00010beb06c0(puVar2);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_6;
    _objc_release(uVar5);
    func_0x00010be146c0(puVar2);
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_7;
    _objc_release(uVar5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 108e672fc; end: 108e67307; -[SCStoryInviteStickerCarouselManager carouselHeight] */

undefined8 FUN_108e672fc(void)

{
  return 0x404a800000000000;
}



/* Entry: 108e67308; end: 108e67313; -[SCStoryInviteStickerCarouselManager carouselGradientHeight] */

undefined8 FUN_108e67308(void)

{
  return 0x4052000000000000;
}



/* Entry: 108e67314; end: 108e6731b; -[SCStoryInviteStickerCarouselManager collectionView:numberOfItemsInSection:] */

void FUN_108e67314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108e6731c; end: 108e673bf; -[SCStoryInviteStickerCarouselManager collectionView:cellForItemAtIndexPath:] */

void FUN_108e6731c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110efc5d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(param_3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108e673c0; end: 108e67483; -[SCStoryInviteStickerCarouselManager collectionView:didSelectItemAtIndexPath:] */

void FUN_108e673c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c11ac00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5a60(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c25b720(uVar2);
  func_0x00010c20ddc0(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c253a40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e67484; end: 108e67517; -[SCStoryInviteStickerCarouselManager collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_108e67484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_5 + 0x30);
  _objc_retain(param_7);
  func_0x00010c0840e0(param_9);
  func_0x00010c0dfd40(uVar1,param_6,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  FUN_108ea0de4(param_4,uVar1);
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_4;
  return auVar2;
}



/* Entry: 108e67518; end: 108e6752b; -[SCStoryInviteStickerCarouselManager collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_108e67518(void)

{
  return 0;
}



/* Entry: 108e6752c; end: 108e67533; -[SCStoryInviteStickerCarouselManager collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_108e6752c(void)

{
  return 0x4030000000000000;
}



/* Entry: 108e67534; end: 108e675bb; -[SCStoryInviteStickerCarouselManager _setupStickerCarousel:] */

void FUN_108e67534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + 8),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8),param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126dc368;
  _objc_opt_class(PTR_PTR_1126dc368);
  func_0x00010c126000(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110efc5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e675bc; end: 108e6765f; -[SCStoryInviteStickerCarouselManager _setupTextFiltering] */

void FUN_108e675bc(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c2134c0(*(undefined8 *)(param_1 + 0x10));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108e67660; end: 108e676e3;  */

void FUN_108e67660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1e5a60(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_108e676e4(uVar1,param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar2);
    func_0x00010c128b60(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e676e4; end: 108e6779b;  */

void FUN_108e676e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e67b58;
  puStack_48 = &UNK_110ac7608;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000107c31908(param_1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e6779c; end: 108e6788f; -[SCStoryInviteStickerCarouselManager _fetchStories] */

void FUN_108e6779c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1055a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108e67890; end: 108e67937;  */

void FUN_108e67890(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e67938;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e67938; end: 108e6796b;  */

void FUN_108e67938(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e6796c; end: 108e67abf; -[SCStoryInviteStickerCarouselManager _filterAndReloadWithFetchedStories:] */

void FUN_108e6796c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x108e67a54;
  puStack_40 = &UNK_1108531a0;
  lStack_38 = param_1;
  func_0x000107c31910(param_3,&puStack_58);
  uVar1 = param_3;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108e676e4(uVar2,uVar1,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c128b60(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  return;
}



/* Entry: 108e67ac0; end: 108e67ad7; -[SCStoryInviteStickerCarouselManager delegate] */

void FUN_108e67ac0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e67ad8; end: 108e67ae3; -[SCStoryInviteStickerCarouselManager setDelegate:] */

void FUN_108e67ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 108e67ae4; end: 108e67b57; -[SCStoryInviteStickerCarouselManager .cxx_destruct] */

void FUN_108e67ae4(long param_1)

{
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



/* Entry: 108e67b58; end: 108e67f33;  */

undefined * FUN_108e67b58(long param_1,undefined *param_2,undefined *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar4 == 0) {
LAB_108e67c08:
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    _objc_retain(uVar11);
    puVar12 = param_2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf529e0();
    _objc_release();
    if (puVar13 < (undefined *)0x2) {
      func_0x000108e73a10();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = param_2;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar13;
      func_0x00010bf529e0();
      _objc_release(puVar13);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar6 + -1 < (undefined *)0x2) {
        func_0x000108e73a28();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108e73a40();
        _objc_retainAutoreleasedReturnValue();
      }
      param_3 = puVar13;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
    }
    puVar13 = param_2;
    func_0x00010c27dd80();
    if (puVar13 == (undefined *)0x1) {
      puVar6 = param_2;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      in_b0 = 0;
      in_register_00005001 = 0;
      in_register_00005002 = 0;
      in_register_00005003 = 0;
      in_register_00005004 = 0;
      in_register_00005005 = 0;
      in_register_00005006 = 0;
      in_register_00005007 = 0;
      _objc_retain();
      puVar13 = puVar6;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (puVar5 = puVar6, puVar13 != (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(puVar6);
          }
          uVar14 = *(undefined8 *)((long)puVar5 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar14;
          func_0x00010c071ae0();
          _objc_release(uVar14);
          if ((int)uVar7 != 0) {
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            goto LAB_108e67e20;
          }
          puVar5 = puVar5 + 1;
        } while (puVar13 != puVar5);
        puVar13 = puVar6;
        func_0x00010bf52a60();
      }
LAB_108e67e20:
      _objc_release(puVar6);
LAB_108e67e2c:
      puVar13 = puVar5;
      func_0x00010bf529e0();
      puVar6 = puVar5;
      if ((undefined *)0x3 < puVar13) {
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      puVar13 = PTR_PTR_1126dc370;
      _objc_alloc();
      puVar5 = param_2;
      func_0x00010c11ac00(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar5;
      func_0x00010c03bf20();
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    else {
      if ((puVar13 == (undefined *)0x2) || (puVar13 == (undefined *)0x6)) {
        puVar5 = param_2;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108e67e2c;
      }
      puVar13 = (undefined *)0x0;
    }
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(param_2);
  }
  else {
    puVar12 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    param_3 = puVar5;
    func_0x00010bf4bb00();
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar12);
    if ((int)puVar6 != 0) goto LAB_108e67c08;
    puVar13 = (undefined *)0x0;
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(param_3);
  puVar12 = puVar9;
  func_0x00010c246f40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  bVar3 = false;
  if (!NAN((double)CONCAT17(in_register_00005007,
                            CONCAT16(in_register_00005006,
                                     CONCAT15(in_register_00005005,
                                              CONCAT14(in_register_00005004,
                                                       CONCAT13(in_register_00005003,
                                                                CONCAT12(in_register_00005002,
                                                                         CONCAT11(
                                                  in_register_00005001,in_b0))))))))) {
    bVar3 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))) == 0.0;
  }
  if (bVar3) {
    puVar13 = param_3;
    func_0x00010c246f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    dVar1 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
    _objc_release(puVar13);
    _objc_release(puVar12);
    if (dVar1 != 0.0) goto LAB_108e68068;
    puVar12 = puVar9;
    func_0x00010bf5a820(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ab40();
    dVar1 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
    puVar13 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ab40();
    dVar2 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
    _objc_release(puVar13);
    _objc_release(puVar12);
    if (dVar1 <= dVar2) {
      puVar12 = puVar9;
      func_0x00010bf5a820(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      dVar1 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0)))))));
      puVar13 = param_3;
      func_0x00010bf5a820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      dVar2 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0)))))));
      _objc_release(puVar13);
      _objc_release(puVar12);
      if (dVar1 < dVar2) {
        puVar12 = (undefined *)0x1;
        goto LAB_108e6810c;
      }
      goto LAB_108e68068;
    }
  }
  else {
    _objc_release(puVar12);
LAB_108e68068:
    puVar12 = puVar9;
    func_0x00010c246f40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    dVar1 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
    puVar13 = param_3;
    func_0x00010c246f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    dVar2 = (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
    _objc_release(puVar13);
    _objc_release(puVar12);
    if (dVar1 <= dVar2) {
      puVar13 = puVar9;
      func_0x00010c246f40(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      dVar1 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0)))))));
      puVar6 = param_3;
      func_0x00010c246f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      bVar3 = false;
      if (!NAN(dVar1) &&
          !NAN((double)CONCAT17(in_register_00005007,
                                CONCAT16(in_register_00005006,
                                         CONCAT15(in_register_00005005,
                                                  CONCAT14(in_register_00005004,
                                                           CONCAT13(in_register_00005003,
                                                                    CONCAT12(in_register_00005002,
                                                                             CONCAT11(
                                                  in_register_00005001,in_b0))))))))) {
        bVar3 = dVar1 < (double)CONCAT17(in_register_00005007,
                                         CONCAT16(in_register_00005006,
                                                  CONCAT15(in_register_00005005,
                                                           CONCAT14(in_register_00005004,
                                                                    CONCAT13(in_register_00005003,
                                                                             CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
      }
      puVar12 = (undefined *)(ulong)bVar3;
      _objc_release(puVar6);
      _objc_release(puVar13);
      goto LAB_108e6810c;
    }
  }
  puVar12 = (undefined *)0xffffffffffffffff;
LAB_108e6810c:
  _objc_release(param_3);
  _objc_release(puVar9);
  return puVar12;
}



/* Entry: 108e67f34; end: 108e68137;  */

ulong FUN_108e67f34(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c246f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  if (param_1 == 0.0) {
    uVar3 = param_4;
    func_0x00010c246f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    dVar5 = param_1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    bVar1 = param_1 != 0.0;
    param_1 = dVar5;
    if (bVar1) goto LAB_108e68068;
    uVar2 = param_3;
    func_0x00010bf5a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ab40();
    uVar3 = param_4;
    dVar6 = dVar5;
    func_0x00010bf5a820(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ab40();
    dVar7 = dVar6;
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (dVar5 <= dVar6) {
      uVar2 = param_3;
      func_0x00010bf5a820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      uVar3 = param_4;
      dVar5 = dVar7;
      func_0x00010bf5a820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      param_1 = dVar5;
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (dVar7 < dVar5) {
        uVar4 = 1;
        goto LAB_108e6810c;
      }
      goto LAB_108e68068;
    }
  }
  else {
    _objc_release(uVar2);
LAB_108e68068:
    uVar2 = param_3;
    func_0x00010c246f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    uVar3 = param_4;
    dVar5 = param_1;
    func_0x00010c246f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4780();
    dVar6 = dVar5;
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (param_1 <= dVar5) {
      uVar2 = param_3;
      func_0x00010c246f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      uVar3 = param_4;
      dVar5 = dVar6;
      func_0x00010c246f40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      uVar4 = (ulong)(dVar6 < dVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_108e6810c;
    }
  }
  uVar4 = 0xffffffffffffffff;
LAB_108e6810c:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108e68138; end: 108e681cf; -[SCInfoStickerEditorSelectorOptionCell initWithFrame:] */

undefined1 * FUN_108e68138(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fec48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010beaf4c0(puVar1);
    func_0x00010beb09c0(puVar1);
    func_0x00010beb0140(puVar1);
  }
  return (undefined1 *)puVar1;
}


