/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e6eb20; end: 108e6eb6f;  */

void FUN_108e6eb20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
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



/* Entry: 108e6eb70; end: 108e6ec7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6eb70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = param_2;
    func_0x00010bdc2ac0(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    _objc_release(uVar3);
    dVar6 = 15.0;
    uVar4 = param_2;
    func_0x00010bdc2ac0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11277c8e8;
    uVar3 = *(undefined8 *)(lVar1 + lVar5);
    *(undefined8 *)(lVar1 + lVar5) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf2f960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    dVar7 = dVar6;
    func_0x00010bf2f960(*(undefined8 *)(lVar1 + lVar5));
    func_0x00010c0df720(dVar6 - dVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + _DAT_11277c8ec);
    *(undefined **)(lVar1 + _DAT_11277c8ec) = puVar2;
    _objc_release(uVar4);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e6ec7c; end: 108e6ed1f;  */

void FUN_108e6ec7c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e6ed20; end: 108e6f0bb; -[SCWeatherDailyView updateViewWithTemperatureScale:] */

/* WARNING: Possible PIC construction at 0x000108e6eed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e6ef90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e6efe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e6ef94) */
/* WARNING: Removing unreachable block (ram,0x000108e6eedc) */
/* WARNING: Removing unreachable block (ram,0x000108e6efec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6ed20(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = (long)_DAT_11277c8cc;
  dVar4 = 0.0;
  dVar6 = 0.0;
  if ((*(byte *)(param_5 + lVar2) & 1) == 0) {
    func_0x00010bf20c00(param_5);
    dVar6 = (param_3 - *(double *)(param_5 + _DAT_11277c8d8)) * 0.5;
    dVar4 = (param_4 + -130.0) * 0.5;
  }
  lVar3 = (long)_DAT_11277c8f4;
  *(double *)(param_5 + lVar3) = dVar6;
  ((double *)(param_5 + lVar3))[1] = dVar4;
  if (*(long *)(param_5 + _DAT_11277c8d4) < 1) {
    if ((*(byte *)(param_5 + lVar2) & 1) == 0) {
      return;
    }
    dVar4 = dVar6 + -8.0;
    dVar5 = 130.0;
    dVar6 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar4 = dVar4 + 130.0;
    dVar7 = dVar4 + -9.0;
    uVar1 = *(undefined8 *)(param_5 + _DAT_11277c8d0);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_5 + _DAT_11277c8e0);
    func_0x00010c0dfd40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdc00(uVar1);
    func_0x00010bec5660(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd0fc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(lVar2);
    _objc_release(param_5);
    func_0x00010c23d620(lVar2);
    func_0x00010bfb68e0(lVar2);
    _CGRectGetWidth();
    dVar5 = dVar4;
    func_0x00010bfb68e0(lVar2);
    _CGRectGetHeight();
    dVar6 = dVar6 + (54.0 - dVar4) * 0.5;
    dVar7 = dVar7 - dVar5;
    param_5 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar6,dVar7,dVar4,dVar5,param_5,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108e6f0bc; end: 108e6f10f; -[SCWeatherDailyView shouldResponseToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6f0bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c09ef00(param_5,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (*(undefined8 *)(param_3 + _DAT_11277c8f4),((undefined8 *)(param_3 + _DAT_11277c8f4))[1]
             ,*(undefined8 *)(param_3 + _DAT_11277c8d8),0x4060400000000000,param_1,param_2);
  return;
}



/* Entry: 108e6f110; end: 108e6f1a3; -[SCWeatherDailyView _imageFromWeatherCondition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6f110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110efc778);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c8c8);
  func_0x00010c118b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e6f1a4; end: 108e6f2d7; -[SCWeatherDailyView _stringForTemp:withCelsius:] */

void FUN_108e6f1a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 == 1) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110efc798);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMeasurement_1126bab70;
    _objc_alloc(PTR__OBJC_CLASS___NSMeasurement_1126bab70);
    puVar3 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
    func_0x00010bf34540(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e380(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
    func_0x00010bf9fa60(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0c3f80(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110efc798);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e6f2d8; end: 108e6f39b; -[SCWeatherDailyView _attributedStringForTemperature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6f2d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    func_0x00010c04e820();
    lVar1 = param_3;
    func_0x00010c08fa60(param_3);
    _objc_release(param_3);
    func_0x00010bef6f20(puVar2,param_2,*(undefined8 *)PTR__NSFontAttributeName_1103457f0,
                        *(undefined8 *)(param_1 + _DAT_11277c8e8),lVar1 + -1,1);
    func_0x00010bef6f20(puVar2,param_2,*(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0,
                        *(undefined8 *)(param_1 + _DAT_11277c8ec),lVar1 + -1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e6f39c; end: 108e6f43b; -[SCWeatherDailyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6f39c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c8c8,0);
  _objc_storeStrong(param_1 + _DAT_11277c8f0,0);
  _objc_storeStrong(param_1 + _DAT_11277c8ec,0);
  _objc_storeStrong(param_1 + _DAT_11277c8e8,0);
  _objc_storeStrong(param_1 + _DAT_11277c8d0,0);
  _objc_storeStrong(param_1 + _DAT_11277c8e4,0);
  _objc_storeStrong(param_1 + _DAT_11277c8e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c8dc,0);
  return;
}



/* Entry: 108e6f43c; end: 108e6fc7f; -[SCWeatherHourlyView initWithFrame:hourlyForecasts:temperatureScale:isPreviewSticker:infoStickerViewProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e6f43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_b0 = PTR_PTR_1126fec98;
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar21 = (long)_DAT_11277c8f8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined8 *)((long)puVar1 + lVar21) = param_10;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_11277c8fc;
    *(undefined1 *)((long)puVar1 + lVar22) = param_9;
    lVar19 = (long)_DAT_11277c900;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar19);
    *(long *)((long)puVar1 + lVar19) = param_7;
    _objc_release(uVar2);
    lVar21 = param_7;
    func_0x00010bf529e0();
    lVar18 = (long)_DAT_11277c904;
    *(long *)((long)puVar1 + lVar18) = lVar21;
    dVar25 = 54.0;
    lVar20 = (long)_DAT_11277c908;
    *(double *)((long)puVar1 + lVar20) = (double)(lVar21 + -1) * 8.0 + (double)lVar21 * 54.0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar21 = (long)_DAT_11277c90c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar23 = (long)_DAT_11277c910;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar3;
    _objc_release(uVar2);
    dVar27 = 0.0;
    dVar26 = 0.0;
    if ((*(byte *)((long)puVar1 + lVar22) & 1) == 0) {
      func_0x00010bf20c00(puVar1);
      dVar26 = (dVar25 - *(double *)((long)puVar1 + lVar20)) * 0.5;
      dVar27 = (param_4 + -106.0) * 0.5;
    }
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_108e6fc80;
    uStack_c8 = 0x108e6fc90;
    uStack_c0 = 0;
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_108e6fc80;
    uStack_f8 = 0x108e6fc90;
    uStack_f0 = 0;
    puStack_110 = &uStack_118;
    puStack_e0 = &uStack_e8;
    _objc_initWeak(auStack_120,puVar1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_108e6fc98;
    puStack_138 = &UNK_110850308;
    _objc_copyWeak(auStack_128,auStack_120);
    ppuVar4 = &puStack_150;
    puStack_130 = &uStack_e8;
    _objc_retainBlock();
    puStack_178 = puVar3;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108e6fd9c;
    puStack_160 = &UNK_110847658;
    ppuVar5 = &puStack_178;
    puStack_158 = &uStack_118;
    _objc_retainBlock();
    ppuVar6 = ppuVar5;
    _dispatch_group_create();
    ppuVar7 = ppuVar6;
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb380);
    ppuVar8 = ppuVar7;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar8;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar7;
    func_0x00010bfb3ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_11277c91c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined ***)((long)puVar1 + lVar20) = ppuVar10;
    _objc_release(uVar2);
    _objc_release(ppuVar9);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    _dispatch_group_enter(ppuVar6);
    uVar24 = *(undefined8 *)((long)puVar1 + lVar20);
    uVar2 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_120);
    _objc_retain(puVar1);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar4);
    _objc_retain(ppuVar6);
    func_0x00010c09b520(uVar24);
    _objc_release(uVar2);
    _dispatch_group_enter(ppuVar6);
    uVar24 = *(undefined8 *)((long)puVar1 + lVar20);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar5);
    _objc_retain(ppuVar6);
    func_0x00010c09b520(uVar24);
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_time(0,500000000);
    ppuVar7 = ppuVar6;
    _dispatch_group_wait(ppuVar6,uVar2);
    if (ppuVar7 != (undefined **)0x0) {
      (*(code *)ppuVar4[2])();
      (*(code *)ppuVar5[2])();
    }
    if (0 < *(long *)((long)puVar1 + lVar18)) {
      lVar20 = 0;
      uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      do {
        uVar11 = *(undefined8 *)((long)puVar1 + lVar19);
        func_0x00010c0dfd40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
        func_0x00010c013de0(uVar2,uVar24,uVar28,uVar29);
        uVar12 = uVar11;
        func_0x00010c2a2c40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar1;
        func_0x00010be37360(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(puVar3);
        _objc_release(puVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        func_0x00010befbb60(puVar1);
        func_0x00010c19f0e0(dVar26,dVar27,0x404b000000000000,0x405a800000000000,puVar3);
        puVar15 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
        func_0x00010c013de0(uVar2,uVar24,uVar28,uVar29);
        uVar12 = uVar11;
        func_0x00010bf86680(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(puVar15);
        _objc_release(uVar12);
        func_0x00010c19e480(puVar15);
        puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(puVar15);
        _objc_release(puVar16);
        func_0x00010c23d620(puVar15);
        func_0x00010befbb60(puVar1);
        func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar21));
        puVar16 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
        func_0x00010c013de0(uVar2,uVar24,uVar28,uVar29);
        func_0x00010c19e480();
        puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(puVar16);
        _objc_release(puVar17);
        func_0x00010befbb60(puVar1);
        func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar23));
        dVar26 = dVar26 + 62.0;
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar3);
        _objc_release(uVar11);
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(long *)((long)puVar1 + lVar18));
    }
    func_0x00010c28c0c0(puVar1);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar6);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_180);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_120);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108e6fc80; end: 108e6fc97;  */

void FUN_108e6fc80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e6fc98; end: 108e6fd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6fc98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x403c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                        &PTR____CFConstantStringClassReference_110efb098);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    dVar5 = 15.0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                        &PTR____CFConstantStringClassReference_110efb098);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11277c914;
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
    *(undefined **)(lVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf2f960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    dVar6 = dVar5;
    func_0x00010bf2f960(*(undefined8 *)(lVar1 + lVar4));
    func_0x00010c0df720(dVar5 - dVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11277c918);
    *(undefined **)(lVar1 + _DAT_11277c918) = puVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e6fd9c; end: 108e6fdeb;  */

void FUN_108e6fd9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
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



/* Entry: 108e6fdec; end: 108e6fefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6fdec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = param_2;
    func_0x00010bdc2ac0(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    _objc_release(uVar3);
    dVar6 = 15.0;
    uVar4 = param_2;
    func_0x00010bdc2ac0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11277c914;
    uVar3 = *(undefined8 *)(lVar1 + lVar5);
    *(undefined8 *)(lVar1 + lVar5) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf2f960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    dVar7 = dVar6;
    func_0x00010bf2f960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
    func_0x00010c0df720(dVar6 - dVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + _DAT_11277c918);
    *(undefined **)(lVar1 + _DAT_11277c918) = puVar2;
    _objc_release(uVar4);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e6fefc; end: 108e6ff9f;  */

void FUN_108e6fefc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e6ffa0; end: 108e6fff3; -[SCWeatherHourlyView shouldResponseToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6ffa0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c09ef00(param_5,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (*(undefined8 *)(param_3 + _DAT_11277c920),((undefined8 *)(param_3 + _DAT_11277c920))[1]
             ,*(undefined8 *)(param_3 + _DAT_11277c908),0x405a800000000000,param_1,param_2);
  return;
}



/* Entry: 108e6fff4; end: 108e702ab; -[SCWeatherHourlyView updateViewWithTemperatureScale:] */

/* WARNING: Possible PIC construction at 0x000108e70198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e701f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e7019c) */
/* WARNING: Removing unreachable block (ram,0x000108e701f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6fff4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = (long)_DAT_11277c8fc;
  dVar3 = 0.0;
  dVar6 = 0.0;
  if ((*(byte *)(param_5 + lVar1) & 1) == 0) {
    func_0x00010bf20c00(param_5);
    dVar6 = (param_3 - *(double *)(param_5 + _DAT_11277c908)) * 0.5;
    dVar3 = (param_4 + -106.0) * 0.5;
  }
  lVar2 = (long)_DAT_11277c920;
  *(double *)(param_5 + lVar2) = dVar6;
  ((double *)(param_5 + lVar2))[1] = dVar3;
  if (*(long *)(param_5 + _DAT_11277c904) < 1) {
    if ((*(byte *)(param_5 + lVar1) & 1) == 0) {
      return;
    }
    dVar5 = 106.0;
    dVar4 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar3 = dVar3 + 106.0;
    dVar7 = dVar3 + -12.0;
    func_0x00010c0dfd40(0x404f000000000000,*(undefined8 *)(param_5 + _DAT_11277c900));
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_5 + _DAT_11277c910);
    func_0x00010c0dfd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec56a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd0fc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(lVar1);
    _objc_release(param_5);
    func_0x00010c23d620(lVar1);
    func_0x00010bfb68e0(lVar1);
    _CGRectGetWidth();
    dVar5 = dVar3;
    func_0x00010bfb68e0(lVar1);
    _CGRectGetHeight();
    dVar4 = dVar6 + (54.0 - dVar3) * 0.5;
    dVar7 = dVar7 - dVar5;
    param_5 = lVar1;
    dVar6 = dVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar4,dVar7,dVar6,dVar5,param_5,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108e702ac; end: 108e7033f; -[SCWeatherHourlyView _imageFromWeatherCondition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e702ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110efc7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c8f8);
  func_0x00010c118b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e70340; end: 108e704a3; -[SCWeatherHourlyView _stringForTemperature:withData:] */

void FUN_108e70340(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 1) {
    func_0x00010bf34540(param_4);
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110efc798);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMeasurement_1126bab70;
    _objc_alloc(PTR__OBJC_CLASS___NSMeasurement_1126bab70);
    func_0x00010bf34540(param_4);
    puVar3 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
    func_0x00010bf34540(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e380(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
    func_0x00010bf9fa60(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0c3f80(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110efc798);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e704a4; end: 108e70567; -[SCWeatherHourlyView _attributedStringForTemperature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e704a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    func_0x00010c04e820();
    lVar1 = param_3;
    func_0x00010c08fa60(param_3);
    _objc_release(param_3);
    func_0x00010bef6f20(puVar2,param_2,*(undefined8 *)PTR__NSFontAttributeName_1103457f0,
                        *(undefined8 *)(param_1 + _DAT_11277c914),lVar1 + -1,1);
    func_0x00010bef6f20(puVar2,param_2,*(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0,
                        *(undefined8 *)(param_1 + _DAT_11277c918),lVar1 + -1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e70568; end: 108e705f7; -[SCWeatherHourlyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e70568(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c8f8,0);
  _objc_storeStrong(param_1 + _DAT_11277c91c,0);
  _objc_storeStrong(param_1 + _DAT_11277c918,0);
  _objc_storeStrong(param_1 + _DAT_11277c914,0);
  _objc_storeStrong(param_1 + _DAT_11277c900,0);
  _objc_storeStrong(param_1 + _DAT_11277c910,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c90c,0);
  return;
}



/* Entry: 108e705f8; end: 108e70907; -[SCWeatherStickerView initWithItemInstance:infoStickerViewProperties:stickerPreferenceAdaptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e705f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126feca0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11277c928,param_6);
    lVar9 = (long)_DAT_11277c92c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11277c930;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c934) = 1;
    puVar3 = PTR_PTR_1126ba8d8;
    _objc_alloc();
    func_0x00010c01dac0();
    puVar4 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c938);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c938) = puVar4;
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c0cc0c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c2a2e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126dc3a8;
    _objc_alloc();
    func_0x00010bf34540(uVar6);
    uVar8 = param_1;
    func_0x00010bf34540(uVar6);
    func_0x00010be0e140(puVar1);
    uVar2 = uVar6;
    func_0x00010c09f000(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bfe47e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf632a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd3c0(param_1,uVar8);
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c940);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c940) = puVar4;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010bf34540(uVar6);
    func_0x00010c0c3fa0(uVar6);
    func_0x00010c27dd80(uVar6);
    func_0x00010beb1660(param_1,puVar1);
    uVar2 = uVar6;
    func_0x00010c09f000(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf632a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfe47e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee7980(puVar1);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010beb15a0(puVar1);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108e70908; end: 108e70be3; -[SCWeatherStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e70908(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126feca0;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  iVar1 = *(int *)(param_5 + _DAT_11277c93c);
  if (iVar1 == 3) {
    lVar3 = *(long *)(param_5 + _DAT_11277c948);
    _objc_retain(lVar3);
LAB_108e709c4:
    lVar4 = *(long *)(param_5 + _DAT_11277c94c);
  }
  else {
    if (iVar1 == 2) {
      lVar3 = *(long *)(param_5 + _DAT_11277c950);
      _objc_retain(lVar3);
      goto LAB_108e709c4;
    }
    if (iVar1 != 1) {
      lVar4 = 0;
      lVar3 = 0;
      goto LAB_108e70bb0;
    }
    lVar4 = 0;
    lVar3 = *(long *)(param_5 + _DAT_11277c944);
  }
  _objc_retain();
  if (lVar3 != 0) {
    func_0x00010bf20c00(lVar3);
    _CGRectGetWidth();
    dVar5 = param_1;
    func_0x00010bf20c00(lVar3);
    _CGRectGetHeight();
    if ((0.0 < param_1) && (0.0 < dVar5)) {
      dVar17 = 0.0;
      dVar18 = 0.0;
      dVar6 = dVar5;
      dVar16 = 0.0;
      if (lVar4 != 0) {
        func_0x00010bf20c00(lVar4);
        _CGRectGetHeight();
        dVar18 = dVar6 + 10.0;
        func_0x00010bf20c00(lVar4);
        _CGRectGetWidth();
        dVar16 = dVar6;
      }
      func_0x00010bf20c00(param_5);
      dVar13 = param_3;
      dVar14 = param_4;
      func_0x00010bf20c00(lVar3);
      dVar15 = 1.0;
      bVar2 = false;
      if ((param_3 == dVar13) && (bVar2 = false, !NAN(param_4) && !NAN(dVar14))) {
        bVar2 = param_4 == dVar14;
      }
      if (!bVar2) {
        if (dVar16 <= param_1) {
          dVar16 = param_1;
        }
        func_0x00010bf20c00(param_5);
        _CGRectGetWidth();
        dVar15 = dVar6 / dVar16;
        func_0x00010bf20c00(param_5);
        _CGRectGetHeight();
        dVar6 = dVar6 / (dVar5 + dVar18);
        if (dVar6 <= dVar15) {
          dVar15 = dVar6;
        }
        func_0x00010bf20c00(param_5);
        _CGRectGetHeight();
        dVar17 = (dVar6 - dVar15 * (dVar5 + dVar18)) * 0.5;
      }
      uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      uStack_e0 = uVar7;
      uStack_d8 = uVar9;
      uStack_d0 = uVar11;
      uStack_c8 = uVar12;
      dStack_c0 = (double)uVar8;
      uStack_b8 = uVar10;
      _CGAffineTransformScale(&uStack_b0,dVar15,dVar15,&uStack_e0);
      uStack_d8 = uStack_a8;
      uStack_e0 = uStack_b0;
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      dStack_c0 = dStack_90;
      func_0x00010c219960(lVar3);
      func_0x00010bf20c00(param_5);
      _CGRectGetWidth();
      func_0x00010c17a6a0(dStack_90 * 0.5,dVar17 + dVar5 * dVar15 * 0.5,lVar3);
      if (lVar4 != 0) {
        uStack_e0 = uVar7;
        uStack_d8 = uVar9;
        uStack_d0 = uVar11;
        uStack_c8 = uVar12;
        dStack_c0 = (double)uVar8;
        uStack_b8 = uVar10;
        _CGAffineTransformScale(&uStack_110,dVar15,dVar15,&uStack_e0);
        uStack_d8 = uStack_108;
        uStack_e0 = uStack_110;
        uStack_c8 = uStack_f8;
        uStack_d0 = uStack_100;
        uStack_b8 = uStack_e8;
        dStack_c0 = dStack_f0;
        func_0x00010c219960(lVar4);
        func_0x00010bf20c00(param_5);
        _CGRectGetWidth();
        dVar6 = 10.0;
        func_0x00010bf20c00(lVar4);
        _CGRectGetHeight();
        func_0x00010c17a6a0(dStack_f0 * 0.5,dVar17 + dVar15 * (dVar5 + 10.0 + dVar6 * 0.5),lVar4);
      }
    }
  }
LAB_108e70bb0:
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 108e70be4; end: 108e70ccf; -[SCWeatherStickerView _setupWithCelsius:measurementSystem:weatherType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e70be4(float param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = param_1;
  func_0x00010be0e140();
  *(long *)(param_2 + _DAT_11277c954) = (long)param_1;
  *(long *)(param_2 + _DAT_11277c958) = (long)fVar3;
  *(undefined4 *)(param_2 + _DAT_11277c93c) = param_5;
  if (param_4 < 1) {
    if ((param_4 == -0x4524111) || (param_4 == 0)) {
      lVar1 = param_2 + _DAT_11277c928;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c26aee0();
      *(long *)(param_2 + _DAT_11277c95c) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  else if (param_4 == 2) {
    *(undefined8 *)(param_2 + _DAT_11277c95c) = 0;
  }
  else if (param_4 == 1) {
    *(undefined8 *)(param_2 + _DAT_11277c95c) = 1;
  }
  return;
}



/* Entry: 108e70cd0; end: 108e7115f; -[SCWeatherStickerView _setupViewsWithTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e70cd0(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar12,uVar14,uVar15,uVar17);
  lVar7 = (long)_DAT_11277c944;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar12,uVar14,uVar15,uVar17);
  lVar8 = (long)_DAT_11277c960;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar5);
  uVar5 = 0x4051800000000000;
  if (param_3 == 0) {
    uVar5 = 0x405e000000000000;
  }
  dVar19 = 30.0;
  if (param_3 == 0) {
    dVar19 = 42.0;
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(uVar5,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110efc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar8),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar8),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
  _objc_alloc_init();
  func_0x00010c21b920();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf34540(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d5c0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c964);
  *(undefined **)(param_1 + _DAT_11277c964) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf9fa60(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d5c0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c968);
  *(undefined **)(param_1 + _DAT_11277c968) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar12,uVar14,uVar15,uVar17);
  lVar6 = (long)_DAT_11277c96c;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(dVar19,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110efc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  lVar9 = (long)_DAT_11277c95c;
  lVar4 = param_1;
  func_0x00010bec56c0(param_1,param_2,*(undefined8 *)(param_1 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
  _objc_release(lVar4);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,*(undefined8 *)(param_1 + lVar6));
  func_0x00010bea8480(param_1);
  if (param_3 == 0) {
    func_0x00010bee4300(param_1,param_2,*(undefined8 *)(param_1 + lVar9));
  }
  else {
    lVar4 = param_1;
    func_0x00010bec5680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8),param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar8));
    lVar4 = param_1;
    func_0x00010bec56c0(param_1,param_2,*(undefined8 *)(param_1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar6));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    _CGRectGetWidth();
    dVar10 = dVar19;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar6));
    _CGRectGetWidth();
    dVar19 = dVar19 + dVar10;
    dVar13 = dVar19 + -5.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    _CGRectGetHeight();
    dVar10 = dVar19;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    _CGRectGetWidth();
    dVar16 = dVar10;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    _CGRectGetHeight();
    dVar11 = 3.0;
    func_0x00010c19f0e0(0x4008000000000000,0x402e000000000000,dVar10,dVar16,
                        *(undefined8 *)(param_1 + lVar8));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    _CGRectGetMaxX();
    dVar16 = dVar11 + -5.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    _CGRectGetMinY();
    dVar18 = dVar11 + 8.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar6));
    _CGRectGetWidth();
    dVar10 = dVar11;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar6));
    _CGRectGetHeight();
    func_0x00010c19f0e0(dVar16,dVar18,dVar11,dVar10,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c19f0e0(0,0,dVar13,dVar19 + 30.0,*(undefined8 *)(param_1 + lVar7));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c19f0e0(param_1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e71160; end: 108e7130b; -[SCWeatherStickerView _setTemperatureToDisplay] */

/* WARNING: Possible PIC construction at 0x000108e71264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e712c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e71268) */
/* WARNING: Removing unreachable block (ram,0x000108e712c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e71160(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_2;
  func_0x00010bec5680(param_2,param_3,*(undefined8 *)(param_2 + _DAT_11277c95c));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11277c960;
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar3));
  _objc_release(lVar1);
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar3));
  lVar1 = param_2;
  func_0x00010bec56c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11277c96c;
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar2));
  _objc_release(lVar1);
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetWidth();
  dVar4 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  param_1 = param_1 + dVar4;
  func_0x00010bfb68e0(param_1,0xc014000000000000,*(undefined8 *)(param_2 + lVar3));
  _CGRectGetHeight();
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetWidth();
  dVar4 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,dVar4,*(undefined8 *)(param_2 + lVar3),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108e7130c; end: 108e7139f; -[SCWeatherStickerView _onTapInformationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e7130c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bec9500();
  func_0x00010c28ace0(*(undefined8 *)(param_1 + _DAT_11277c94c));
  if (*(int *)(param_1 + _DAT_11277c93c) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bed94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateHourlyForecastView_isInPr_112593ee0,param_3,1);
    return;
  }
  if (*(int *)(param_1 + _DAT_11277c93c) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bed69b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateDailyForecastView_isInPre_112593410,param_3,1);
    return;
  }
  return;
}



/* Entry: 108e713a0; end: 108e714f7; -[SCWeatherStickerView shouldRespondToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108e713a0(double param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  iVar1 = *(int *)(param_3 + _DAT_11277c93c);
  iVar2 = _DAT_11277c948;
  if ((iVar1 == 3) || (iVar2 = _DAT_11277c950, iVar1 == 2)) {
    uVar4 = *(ulong *)(param_3 + iVar2);
    func_0x00010c232aa0(uVar4,param_4,param_5);
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_3 + _DAT_11277c94c);
      func_0x00010c232aa0(uVar3,param_4,param_5);
    }
    else {
      uVar3 = 1;
    }
  }
  else if (iVar1 == 1) {
    func_0x00010c09ef00(param_5,param_4,*(undefined8 *)(param_3 + _DAT_11277c944));
    lVar5 = (long)_DAT_11277c960;
    dVar6 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar5));
    _CGRectGetMinX();
    dVar7 = dVar6;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar5));
    _CGRectGetMinY();
    dVar9 = dVar7;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_11277c96c));
    _CGRectGetMaxX();
    dVar8 = dVar9;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar5));
    _CGRectGetMinX();
    dVar9 = dVar9 - dVar8;
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfb68e0(uVar3);
    _CGRectGetHeight();
    _CGRectContainsPoint(dVar6,dVar7,dVar9,dVar8,param_1,param_2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_5);
  return uVar3;
}



/* Entry: 108e714f8; end: 108e7154b; -[SCWeatherStickerView _stringForTemperatureScale:] */

void FUN_108e714f8(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    piVar1 = (int *)&DAT_11277c968;
  }
  else {
    if (param_3 != 1) {
      uVar2 = 0;
      goto LAB_108e7153c;
    }
    piVar1 = (int *)&DAT_11277c964;
  }
  uVar2 = *(undefined8 *)(param_1 + *piVar1);
  _objc_retain(uVar2);
LAB_108e7153c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e7154c; end: 108e715b7; -[SCWeatherStickerView _stringForTemperature:] */

void FUN_108e7154c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 == 0) || (param_3 == 1)) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dcfe58);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e715b8; end: 108e7187f; -[SCWeatherStickerView _validateForecastDataForlocationName:dailyForecasts:hourlyForecasts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e715b8(float param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined *param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  int iVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar8 = param_4;
  func_0x00010c08fa60();
  *(bool *)(param_2 + _DAT_11277c970) = lVar8 != 0;
  if (lVar8 != 0) {
    lVar8 = (long)_DAT_11277c974;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + lVar8);
    *(long *)(param_2 + lVar8) = param_4;
    _objc_release(uVar1);
  }
  puVar2 = param_6;
  func_0x00010bf529e0();
  if ((puVar2 < (undefined *)0x5) || (uVar10 = param_5, func_0x00010bf529e0(), uVar10 < 3)) {
    *(undefined1 *)(param_2 + _DAT_11277c978) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar8 = 0;
    do {
      puVar3 = param_6;
      func_0x00010c0dfd40(param_6,param_3,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34540();
      if (param_1 == 0.0) {
        *(undefined1 *)(param_2 + _DAT_11277c978) = 0;
        goto LAB_108e7183c;
      }
      puVar4 = puVar3;
      func_0x00010c2a2c40();
      _objc_retainAutoreleasedReturnValue();
      iVar11 = _DAT_11277c978;
      if (puVar4 == (undefined *)0x0) {
        pcVar9 = (char *)(param_2 + _DAT_11277c978);
        *pcVar9 = '\0';
      }
      else {
        puVar5 = puVar3;
        func_0x00010bf86680();
        _objc_retainAutoreleasedReturnValue();
        iVar11 = _DAT_11277c978;
        pcVar9 = (char *)(param_2 + _DAT_11277c978);
        *pcVar9 = puVar5 != (undefined *)0x0;
        _objc_release();
      }
      _objc_release(puVar4);
      if (*pcVar9 != '\x01') goto LAB_108e7183c;
      func_0x00010befa120(puVar2,param_3,puVar3);
      _objc_release(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 5);
    puVar3 = puVar2;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_2 + _DAT_11277c97c);
    *(undefined **)(param_2 + _DAT_11277c97c) = puVar3;
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar8 = 0;
    do {
      uVar10 = param_5;
      func_0x00010c0dfd40(param_5,param_3,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cdc00();
      if ((param_1 == 0.0) || (func_0x00010c0c2fc0(uVar10), param_1 == 0.0)) {
        *(undefined1 *)(param_2 + iVar11) = 0;
        goto LAB_108e71834;
      }
      uVar6 = uVar10;
      func_0x00010c2a2c40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
        *(undefined1 *)(param_2 + iVar11) = 0;
      }
      else {
        uVar7 = uVar10;
        func_0x00010bf86680();
        _objc_retainAutoreleasedReturnValue();
        *(bool *)(param_2 + iVar11) = uVar7 != 0;
        _objc_release();
      }
      _objc_release(uVar6);
      if (*(char *)(param_2 + iVar11) != '\x01') goto LAB_108e71834;
      func_0x00010befa120(puVar3,param_3,uVar10);
      _objc_release(uVar10);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 3);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar10 = *(ulong *)(param_2 + _DAT_11277c980);
    *(undefined **)(param_2 + _DAT_11277c980) = puVar4;
LAB_108e71834:
    _objc_release(uVar10);
LAB_108e7183c:
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e71880; end: 108e718fb; -[SCWeatherStickerView _switchTemperatureScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e71880(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(ulong *)(param_1 + _DAT_11277c95c) = (ulong)(param_3 == 0);
  lVar1 = param_1 + _DAT_11277c928;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c28ace0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bed9f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c92c);
  *(long *)(param_1 + _DAT_11277c92c) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e718fc; end: 108e719b3; -[SCWeatherStickerView _updateHourlyForecastView:isInPreviewSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e718fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11277c978) == '\x01') {
    lVar3 = (long)_DAT_11277c948;
    if (*(long *)(param_1 + lVar3) == 0) {
      puVar1 = PTR_PTR_1126dc3b8;
      _objc_alloc();
      func_0x00010bfb68e0(param_1);
      func_0x00010c014660();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar1;
      _objc_release(uVar2);
    }
    else {
      func_0x00010c28c0c0(*(long *)(param_1 + lVar3),param_2,param_3);
    }
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 108e719b4; end: 108e71a6b; -[SCWeatherStickerView _updateDailyForecastView:isInPreviewSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e719b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11277c978) == '\x01') {
    lVar3 = (long)_DAT_11277c950;
    if (*(long *)(param_1 + lVar3) == 0) {
      puVar1 = PTR_PTR_1126dc3c0;
      _objc_alloc();
      func_0x00010bfb68e0(param_1);
      func_0x00010c014280();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar1;
      _objc_release(uVar2);
    }
    else {
      func_0x00010c28c0c0(*(long *)(param_1 + lVar3),param_2,param_3);
    }
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 108e71a6c; end: 108e71b9f; -[SCWeatherStickerView _updateInformationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e71a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  if (*(char *)(param_5 + _DAT_11277c970) == '\x01') {
    lVar5 = (long)_DAT_11277c94c;
    if (*(long *)(param_5 + lVar5) == 0) {
      puVar3 = PTR_PTR_1126dc3c8;
      _objc_alloc();
      func_0x00010bfb68e0(param_5);
      func_0x00010c014880();
      uVar4 = *(undefined8 *)(param_5 + lVar5);
      *(undefined **)(param_5 + lVar5) = puVar3;
      _objc_release(uVar4);
    }
    else {
      func_0x00010c28ace0(*(long *)(param_5 + lVar5),param_6,param_7);
    }
    lVar1 = 0x20;
    if (*(int *)(param_5 + _DAT_11277c93c) != 3) {
      lVar1 = 0x28;
    }
    iVar2 = *(int *)(&DAT_11277c928 + lVar1);
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + iVar2));
    dVar6 = param_4 + 10.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c19f0e0(0,dVar6,param_4,param_3,*(undefined8 *)(param_5 + lVar5));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + iVar2));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_4 * 0.5,*(undefined8 *)(param_5 + lVar5),PTR_s_setCenter__11263c3c8);
    return;
  }
  return;
}



/* Entry: 108e71ba0; end: 108e71c87; -[SCWeatherStickerView _updateWeatherFilterView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e71ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + _DAT_11277c93c);
  if (iVar1 == 3) {
    func_0x00010bed94e0(param_1,param_2,param_3,1);
    iVar1 = _DAT_11277c948;
LAB_108e71c2c:
    piVar4 = (int *)&DAT_11277c94c;
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + iVar1));
    func_0x00010bed9ae0(param_1,param_2,param_3);
  }
  else {
    if (iVar1 == 2) {
      func_0x00010bed69a0(param_1,param_2,param_3,1);
      iVar1 = _DAT_11277c950;
      goto LAB_108e71c2c;
    }
    if (iVar1 != 1) goto LAB_108e71c54;
    func_0x00010bea8480(param_1);
    piVar4 = (int *)&DAT_11277c944;
  }
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + *piVar4));
LAB_108e71c54:
  lVar2 = param_1;
  func_0x00010bed9f80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c92c);
  *(long *)(param_1 + _DAT_11277c92c) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108e71c88; end: 108e71d0f; -[SCWeatherStickerView _regenerateViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e71c88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = (long)_DAT_11277c948;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  lVar3 = (long)_DAT_11277c950;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_11277c94c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee4310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateWeatherFilterView__112596a68,
             *(undefined8 *)(param_1 + _DAT_11277c95c));
  return;
}



/* Entry: 108e71d10; end: 108e71e37; -[SCWeatherStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e71d10(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_11277c978) & 1) == 0) {
    func_0x00010bec9500(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277c95c));
                    /* WARNING: Could not recover jumptable at 0x00010bea8490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setTemperatureToDisplay_112587ac8);
    return;
  }
  lVar2 = (long)_DAT_11277c93c;
  iVar1 = *(int *)(param_1 + lVar2);
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + lVar2) = 2;
    iVar1 = _DAT_11277c948;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + lVar2) = 1;
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277c950));
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277c94c));
      func_0x00010bec9500(param_1);
      goto LAB_108e71de8;
    }
    if (iVar1 != 1) goto LAB_108e71de8;
    *(undefined4 *)(param_1 + lVar2) = 3;
    iVar1 = _DAT_11277c944;
  }
  func_0x00010c12c960(*(undefined8 *)(param_1 + iVar1));
LAB_108e71de8:
  func_0x00010bee4300(param_1);
  func_0x00010c0cc2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e71e38; end: 108e71ecf; -[SCWeatherStickerView imageView] */

void FUN_108e71e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e71ed0; end: 108e71ed3; -[SCWeatherStickerView willDisplay] */

void FUN_108e71ed0(void)

{
  return;
}



/* Entry: 108e71ed4; end: 108e71ed7; -[SCWeatherStickerView didEndDisplay] */

void FUN_108e71ed4(void)

{
  return;
}



/* Entry: 108e71ed8; end: 108e71edb; -[SCWeatherStickerView encodeWithCoder:] */

void FUN_108e71ed8(void)

{
  return;
}



/* Entry: 108e71edc; end: 108e71eff; -[SCWeatherStickerView copyWithZone:] */

undefined8 FUN_108e71edc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e71f00; end: 108e71f07; -[SCWeatherStickerView loggingParameters] */

undefined8 FUN_108e71f00(void)

{
  return 0;
}



/* Entry: 108e71f08; end: 108e71f13; -[SCWeatherStickerView packId] */

undefined ** FUN_108e71f08(void)

{
  return &PTR____CFConstantStringClassReference_110dea618;
}



/* Entry: 108e71f14; end: 108e71f1f; -[SCWeatherStickerView shortLoggingName] */

undefined ** FUN_108e71f14(void)

{
  return &PTR____CFConstantStringClassReference_110efc7d8;
}



/* Entry: 108e71f20; end: 108e71f27; -[SCWeatherStickerView stickerId] */

undefined8 FUN_108e71f20(void)

{
  return 0;
}



/* Entry: 108e71f28; end: 108e71f57; -[SCWeatherStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e71f28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c92c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e71f58; end: 108e71f5f; -[SCWeatherStickerView toCTPItem] */

undefined8 FUN_108e71f58(void)

{
  return 0;
}



/* Entry: 108e71f60; end: 108e71f67; -[SCWeatherStickerView infoType] */

undefined8 FUN_108e71f60(void)

{
  return 1;
}



/* Entry: 108e71f68; end: 108e71f6f; -[SCWeatherStickerView type] */

undefined8 FUN_108e71f68(void)

{
  return 6;
}



/* Entry: 108e71f70; end: 108e71f7f; -[SCWeatherStickerView intrinsicSize] */

undefined1  [16] FUN_108e71f70(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108e71f80; end: 108e72043; -[SCWeatherStickerView _fahrenheitValueForCelsius:] */

float FUN_108e71f80(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMeasurement_1126bab70;
  _objc_alloc(PTR__OBJC_CLASS___NSMeasurement_1126bab70);
  dVar4 = (double)param_1;
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf34540(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e380(dVar4,puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSUnitTemperature_1126bab78;
  func_0x00010bf9fa60(PTR__OBJC_CLASS___NSUnitTemperature_1126bab78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0c3f80(puVar1,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (float)dVar4;
}



/* Entry: 108e72044; end: 108e7223f; -[SCWeatherStickerView _updateItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e72044(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  puVar5 = PTR_PTR_1126bab58;
  _objc_opt_new(PTR_PTR_1126bab58);
  lVar11 = *(long *)(param_1 + _DAT_11277c95c);
  func_0x00010c21acc0(puVar4,param_2,0xe);
  uVar10 = 1;
  if (lVar11 == 0) {
    uVar10 = 2;
  }
  func_0x00010c1c3fe0(puVar5,param_2,uVar10);
  lVar11 = (long)_DAT_11277c940;
  func_0x00010bf34540(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c17a640(puVar5);
  func_0x00010c21acc0(puVar5,param_2,*(undefined4 *)(param_1 + _DAT_11277c93c));
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c09f000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bfa60(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfe4800(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0d3c80();
  func_0x00010c1a9340(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf632c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0d3c80();
  func_0x00010c189340(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar7);
  func_0x00010c1ac500(puVar3,param_2,puVar4);
  func_0x00010c196600(puVar2,param_2,puVar3);
  func_0x00010c1b5d40(puVar1,param_2,puVar2);
  puVar8 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224c00();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e72240; end: 108e7224f; -[SCWeatherStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e72240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c938);
}



/* Entry: 108e72250; end: 108e7225f; -[SCWeatherStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e72250(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c92c);
}



/* Entry: 108e72260; end: 108e7226f; -[SCWeatherStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e72260(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c934);
}



/* Entry: 108e72270; end: 108e7227f; -[SCWeatherStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e72270(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c934) = param_3;
  return;
}



/* Entry: 108e72280; end: 108e7228f; -[SCWeatherStickerView weatherType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108e72280(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277c93c);
}



/* Entry: 108e72290; end: 108e723ab; -[SCWeatherStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e72290(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c92c,0);
  _objc_storeStrong(param_1 + _DAT_11277c938,0);
  _objc_storeStrong(param_1 + _DAT_11277c930,0);
  _objc_destroyWeak(param_1 + _DAT_11277c928);
  _objc_storeStrong(param_1 + _DAT_11277c944,0);
  _objc_storeStrong(param_1 + _DAT_11277c974,0);
  _objc_storeStrong(param_1 + _DAT_11277c980,0);
  _objc_storeStrong(param_1 + _DAT_11277c97c,0);
  _objc_storeStrong(param_1 + _DAT_11277c94c,0);
  _objc_storeStrong(param_1 + _DAT_11277c950,0);
  _objc_storeStrong(param_1 + _DAT_11277c948,0);
  _objc_storeStrong(param_1 + _DAT_11277c96c,0);
  _objc_storeStrong(param_1 + _DAT_11277c960,0);
  _objc_storeStrong(param_1 + _DAT_11277c968,0);
  _objc_storeStrong(param_1 + _DAT_11277c964,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c940,0);
  return;
}



/* Entry: 108e723ac; end: 108e729e3;  */

void FUN_108e723ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110efbd18;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110efbd58;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110efbd38;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110efbd78;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110efbd98;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110efbdd8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110efbdb8;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110efbdf8;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110efbe18;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110efbe58;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110efbe38;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110efbe78;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110efbe98;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110efbed8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110efbeb8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110efbef8;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110efbf18;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110efbf58;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110efbf38;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110efbf78;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110efbf98;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110efbfd8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110efbfb8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110efbff8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110efc018;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110efc058;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110efc038;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110efc078;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110efc098;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110efc0d8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110efc0b8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110efc0f8;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110efc118;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110efc158;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110efc138;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110efc178;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110efc198;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110efc1d8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110efc1b8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110efc1f8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110efc218;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110efc258;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110efc238;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110efc278;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110efc298;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110efc2b8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _dispatch_group_create();
  if (lRam000000011372ea48 != -1) {
    func_0x000107c27d9c(0x11372ea48,&PTR___NSConcreteGlobalBlock_110ac76e8);
  }
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  puVar4 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar12 = *plStack_2b0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_2b0 != lVar12) {
          _objc_enumerationMutation(puVar4);
        }
        uVar10 = *(undefined8 *)(lStack_2b8 + (long)puVar11 * 8);
        puVar6 = puVar2;
        func_0x00010c0e00e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b08b0;
        func_0x00010bf33760(PTR_PTR_1126b08b0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b17d8;
        _objc_alloc(PTR_PTR_1126b17d8);
        func_0x00010c003a80();
        _dispatch_group_enter(puVar3);
        uVar9 = param_2;
        func_0x00010c269d40(param_2);
        _objc_retainAutoreleasedReturnValue();
        puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2f0 = 0xc2000000;
        pcStack_2e8 = FUN_108e729f0;
        puStack_2e0 = &UNK_110ac7708;
        _objc_retain(puVar1);
        puStack_2d8 = puVar1;
        uStack_2d0 = uVar10;
        _objc_retain(puVar3);
        puStack_2c8 = puVar3;
        func_0x00010c13e600(uVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(puStack_2c8);
        _objc_release(puStack_2d8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar11 = puVar11 + 1;
      } while (puVar5 != puVar11);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_330 = 0xc2000000;
  pcStack_328 = FUN_108e72ab0;
  puStack_320 = &UNK_1108465d0;
  puStack_318 = puVar1;
  uStack_310 = param_1;
  uStack_308 = param_3;
  uStack_300 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(puVar1);
  func_0x000107c27d98(puVar3,PTR___dispatch_main_q_11034be20,&puStack_338);
  _objc_release(uStack_300);
  _objc_release(uStack_308);
  _objc_release(uStack_310);
  _objc_release(puStack_318);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uRam000000011372ea50 = 0;
  return;
}



/* Entry: 108e729e4; end: 108e729ef;  */

void FUN_108e729e4(void)

{
  uRam000000011372ea50 = 0;
  return;
}



/* Entry: 108e729f0; end: 108e72aaf;  */

void FUN_108e729f0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(0x11372ea50);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c008240();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _os_unfair_lock_unlock(0x11372ea50);
    _objc_release(lVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e72ab0; end: 108e72b4b;  */

void FUN_108e72ab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126dc3d0;
  _objc_alloc(PTR_PTR_1126dc3d0);
  func_0x00010c03b740();
  puVar2 = PTR_PTR_1126dc3d8;
  _objc_alloc(PTR_PTR_1126dc3d8);
  func_0x00010c020200();
  lVar4 = *(long *)(param_1 + 0x38);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e72b4c; end: 108e72cd3;  */

void FUN_108e72b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108e72cd4;
  puStack_80 = &UNK_110ac7768;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_2);
  uStack_78 = param_2;
  uStack_68 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  ppuVar1 = &puStack_98;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___LPMetadataProvider_1126dc3e0;
  _objc_opt_new(PTR__OBJC_CLASS___LPMetadataProvider_1126dc3e0);
  _objc_retain(ppuVar1);
  _objc_retain(param_2);
  _objc_retain(param_4);
  func_0x00010c24ec20(puVar2);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e72cd4; end: 108e72f1b;  */

void FUN_108e72cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c09b300(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 108e72f1c; end: 108e72f2b;  */

void FUN_108e72f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e72f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e72f2c; end: 108e72f87;  */

void FUN_108e72f2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e72f88; end: 108e73177;  */

void FUN_108e72f88(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = param_2;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bfd8240();
    _objc_release(lVar4);
    lVar4 = param_2;
    if ((int)lVar3 == 0) {
      lVar3 = param_2;
      func_0x00010bfe5980();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bfd8240();
      _objc_release(lVar3);
      if ((int)lVar1 == 0) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0) goto LAB_108e730f8;
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        uStack_88 = 0x108e73188;
        puStack_80 = &UNK_110849530;
        _objc_retain(lVar4);
        lStack_78 = lVar4;
        func_0x000107c27d8c(uVar2,&puStack_98);
        lVar4 = lStack_78;
        goto LAB_108e730f4;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010bfe5980(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010bfe8840(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar4,lVar1);
    _objc_release(lVar1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) goto LAB_108e730f8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108e73178;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(lVar4);
    lStack_48 = lVar4;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x000107c27d8c(uVar2,&puStack_70);
    _objc_release(lStack_50);
    lVar4 = lStack_48;
  }
LAB_108e730f4:
  _objc_release(lVar4);
LAB_108e730f8:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108e73178; end: 108e73197;  */

void FUN_108e73178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e73184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108e73198; end: 108e73297;  */

void FUN_108e73198(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfda7c0();
  _objc_release(lVar2);
  lVar2 = lVar1;
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010bfe4420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e36198);
    lVar2 = lVar3;
    func_0x00010c260c00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  lVar3 = param_2;
  func_0x00010c08fa60();
  lVar1 = lVar2;
  if (lVar3 != 0) {
    lVar1 = param_2;
  }
  _objc_retain(lVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108e73298; end: 108e733f3;  */

void FUN_108e73298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  puVar5 = PTR_PTR_1126ba900;
  _objc_opt_new(PTR_PTR_1126ba900);
  func_0x00010c21acc0(puVar4);
  func_0x00010c16b3a0(puVar5);
  _objc_release(param_1);
  func_0x00010c1ffea0(puVar5);
  _objc_release(param_3);
  func_0x00010c216240(puVar5);
  _objc_release(param_2);
  func_0x00010c1ac500(puVar3);
  func_0x00010c196600(puVar2);
  func_0x00010c1b5d40(puVar1);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b260();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e733f4; end: 108e73503; -[SCWebAttachmentStickerView initWithViewModel:] */

undefined1 * FUN_108e733f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126feca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c22d9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffec0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puVar1);
    _objc_release(uVar2);
    func_0x00010bead1a0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e73504; end: 108e736fb; -[SCWebAttachmentStickerView initWithItemInstance:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e73504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126feca8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf0d340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar4 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c984);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c984) = puVar4;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11277c988;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c98c) = 1;
    uVar5 = uVar2;
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(uVar5);
    func_0x00010c1a9f00(puVar1);
    uVar5 = uVar2;
    func_0x00010c22d960(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffec0(puVar1);
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar5 = uVar2;
    func_0x00010bf0d660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar4);
    func_0x00010c21d340(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar5);
    func_0x00010bead1a0(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e736fc; end: 108e7383f; -[SCWebAttachmentStickerView _setupImageView] */

void FUN_108e736fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c160fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110efc818);
  lVar2 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar2 = param_1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c28f340(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108e73840;
    puStack_48 = &UNK_110a10688;
    _objc_copyWeak(auStack_40,auStack_38);
    FUN_108e72b4c(param_1,puVar1,&puStack_60,0);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 108e73840; end: 108e7388f;  */

void FUN_108e73840(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2865a0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e73890; end: 108e73927; -[SCWebAttachmentStickerView imageView] */

void FUN_108e73890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e73928; end: 108e7392b; -[SCWebAttachmentStickerView didEndDisplay] */

void FUN_108e73928(void)

{
  return;
}



/* Entry: 108e7392c; end: 108e7392f; -[SCWebAttachmentStickerView willDisplay] */

void FUN_108e7392c(void)

{
  return;
}



/* Entry: 108e73930; end: 108e7393f; -[SCWebAttachmentStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e73930(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c98c);
}



/* Entry: 108e73940; end: 108e7394f; -[SCWebAttachmentStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e73940(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c98c) = param_3;
  return;
}



/* Entry: 108e73950; end: 108e7395f; -[SCWebAttachmentStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e73950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c984);
}



/* Entry: 108e73960; end: 108e7396f; -[SCWebAttachmentStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e73960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c988);
}



/* Entry: 108e73970; end: 108e739af; -[SCWebAttachmentStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e73970(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c988,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c984,0);
  return;
}



/* Entry: 108e739b0; end: 108e73d0f;  */

void FUN_108e739b0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efc838;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efc838,
                      &PTR____CFConstantStringClassReference_110efc858,0);
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



/* Entry: 108e73d10; end: 108e73e1b; -[SCWebAttachmentStickerViewModel initWithImage:url:title:shortenedUrl:] */

undefined1 *
FUN_108e73d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fecb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e73e1c; end: 108e73e3f; -[SCWebAttachmentStickerViewModel copyWithZone:] */

undefined8 FUN_108e73e1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e73e40; end: 108e73ecb; -[SCWebAttachmentStickerViewModel hash] */

undefined8 * FUN_108e73e40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108e73f7c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e73f88;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_108e73f88;
            }
            goto LAB_108e73f7c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108e73f88:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108e73ecc; end: 108e73fa3; -[SCWebAttachmentStickerViewModel isEqual:] */

long FUN_108e73ecc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e73f7c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e73f88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_108e73f88;
            }
            goto LAB_108e73f7c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e73f88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e73fa4; end: 108e73fab; -[SCWebAttachmentStickerViewModel image] */

undefined8 FUN_108e73fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e73fac; end: 108e73fb3; -[SCWebAttachmentStickerViewModel url] */

undefined8 FUN_108e73fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e73fb4; end: 108e73fbb; -[SCWebAttachmentStickerViewModel title] */

undefined8 FUN_108e73fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e73fbc; end: 108e73fc3; -[SCWebAttachmentStickerViewModel shortenedUrl] */

undefined8 FUN_108e73fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e73fc4; end: 108e7400b; -[SCWebAttachmentStickerViewModel .cxx_destruct] */

void FUN_108e73fc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e7400c; end: 108e7411f; -[SCPreviewInfoStickerData initWithLocation:weather:timestamp:batteryStatus:altitude:] */

undefined1 *
FUN_108e7400c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fecb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e74120; end: 108e74143; -[SCPreviewInfoStickerData copyWithZone:] */

undefined8 FUN_108e74120(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e74144; end: 108e741d3; -[SCPreviewInfoStickerData hash] */

undefined8 * FUN_108e74144(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108e74294:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e742a0;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20)))
    {
      lVar6 = *(long *)((long)puVar4 + 8);
      if ((lVar6 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x18);
          if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = *(undefined1 **)((long)puVar4 + 0x28);
            if (puVar7 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108e742a0;
            }
            goto LAB_108e74294;
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_108e742a0:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 108e741d4; end: 108e742bb; -[SCPreviewInfoStickerData isEqual:] */

long FUN_108e741d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108e74294:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e742a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108e742a0;
            }
            goto LAB_108e74294;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108e742a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e742bc; end: 108e742c3; -[SCPreviewInfoStickerData location] */

undefined8 FUN_108e742bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e742c4; end: 108e742cb; -[SCPreviewInfoStickerData weather] */

undefined8 FUN_108e742c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


