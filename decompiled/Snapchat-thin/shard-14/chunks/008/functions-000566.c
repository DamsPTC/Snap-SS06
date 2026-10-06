/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b682938; end: 10b682953;  */

void FUN_10b682938(long param_1)

{
  if (*(long *)(param_1 + 0x20) != *(long *)(*(long *)(param_1 + 0x28) + 0x50)) {
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b682954; end: 10b682a43;  */

void FUN_10b682954(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar2 + 0x50) != *(long *)(param_2 + 0x28)) {
    return;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  func_0x00010bdc3540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c13e940(param_1 - *(double *)(param_2 + 0x40),uVar3,param_3,8,uVar1);
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar2 != 0 && lVar2 != *(long *)(lVar4 + 0x28)) {
    func_0x00010beebc80(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),lVar4,
                        param_3,lVar2,*(undefined8 *)(param_2 + 0x48),1);
    lVar4 = *(long *)(param_2 + 0x20);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar4 + 0x68);
  *(undefined8 *)(lVar4 + 0x68) = uVar3;
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x30),param_3,*(undefined8 *)(param_2 + 0x20));
  func_0x00010c0f9520(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50),param_3,
                      *(long *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x60),1);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b682a44; end: 10b682adb; -[SCCachingMediaItem cachingImageGenerating:sourceLevel:imagesGenerated:saveToDisk:] */

void FUN_10b682a44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b682adc;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_5);
  return;
}



/* Entry: 10b682adc; end: 10b682bfb;  */

void FUN_10b682adc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x30) < *(long *)(*(long *)(param_1 + 0x20) + 0x78)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (0 < *(long *)(*(long *)(param_1 + 0x20) + 0x70)) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar5,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (lVar5 == 0) break;
      func_0x00010befa120(puVar1,param_2,lVar5);
      _objc_release(lVar5);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(long *)(*(long *)(param_1 + 0x20) + 0x70));
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf529e0();
  if (puVar3 < puVar2) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010beebc80(*(undefined8 *)(lVar4 + 0x98),*(undefined8 *)(lVar4 + 0xa0),lVar4,param_2,
                        puVar1,*(undefined8 *)(param_1 + 0x30),*(long *)(lVar4 + 0x28) != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b682bfc; end: 10b682d07; -[SCCachingMediaItem cachingImageGeneratingIsAccessed:] */

void FUN_10b682bfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b682c94;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b682d08; end: 10b682d37; -[SCCachingMediaItem evict] */

void FUN_10b682d08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b682d38; end: 10b682e13; -[SCCachingMediaItem cachingEntityKey] */

void FUN_10b682d38(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  bVar1 = false;
  if ((*(double *)(param_1 + 0x98) == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false,
     !NAN(*(double *)(param_1 + 0xa0)) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = *(double *)(param_1 + 0xa0) == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    puVar2 = *(undefined **)(param_1 + 0x60);
    func_0x00010bdc3540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51e00();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x60);
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110f6d3f8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b682e14; end: 10b682fff; -[SCCachingMediaItem _writeToDiskWithDataImages:sourceLevel:targetSize:faultToMemory:] */

void FUN_10b682e14(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_3 + 0x58) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x88);
    func_0x00010bf51e00();
    uVar3 = uVar2;
    FUN_10b686a58();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10b683000;
    puStack_88 = &UNK_1108e74c8;
    _objc_retain(param_5);
    uStack_80 = param_5;
    lStack_78 = param_3;
    uStack_70 = uVar2;
    dStack_68 = param_1;
    dStack_60 = param_2;
    uStack_58 = param_6;
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3,param_4,&puStack_a0);
    _objc_release(uVar3);
    _objc_release(uStack_70);
    _objc_release(uStack_80);
    _objc_release(uVar2);
  }
  if (param_7 != 0) {
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x28) = param_5;
    _objc_release(uVar3);
  }
  *(undefined8 *)(param_3 + 0x78) = param_6;
  *(undefined1 *)(param_3 + 0x40) = 1;
  *(undefined1 *)(param_3 + 0x59) = 1;
  dVar4 = *(double *)PTR__CGSizeZero_110347620;
  dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((dVar4 == param_1) && (bVar1 = false, !NAN(dVar6) && !NAN(param_2))) {
    bVar1 = dVar6 == param_2;
  }
  if (bVar1) {
    uVar3 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    FUN_10b686308();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c23d0a0(uVar2);
    dVar5 = dVar4;
    func_0x00010c14e120(uVar2);
    dVar4 = dVar4 * dVar5;
    func_0x00010c23d0a0(uVar2);
    func_0x00010c14e120(uVar2);
    *(double *)(param_3 + 0x98) = dVar4;
    *(double *)(param_3 + 0xa0) = dVar6 * dVar5;
    _objc_release(uVar2);
    param_1 = *(double *)(param_3 + 0x98);
    param_2 = *(double *)(param_3 + 0xa0);
  }
  else {
    *(double *)(param_3 + 0x98) = param_1;
    *(double *)(param_3 + 0xa0) = param_2;
  }
  *(long *)(param_3 + 0x80) =
       (long)(((double)*(long *)(param_3 + 0x70) * 0.1 + 1.0) *
             (double)(((long)(param_1 * 4.0) + 0x1fU & 0xffffffffffffffe0) * (long)param_2));
  _objc_release(param_5);
  return;
}



/* Entry: 10b683000; end: 10b6832af;  */

long FUN_10b683000(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x20);
  FUN_10b6867c0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  lVar11 = *(long *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  lVar5 = *(long *)(lVar11 + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x10);
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  lVar11 = *(long *)(lVar11 + 0x30);
  dVar13 = param_1;
  _objc_retain(lVar1);
  _objc_retain(lVar11);
  _objc_retain(uVar9);
  if (lVar5 != 0) {
    puVar2 = PTR_PTR_1126e0460;
    func_0x00010bf82d60(PTR_PTR_1126e0460,param_3,uVar10,uVar12,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    lVar5 = lVar1;
    if (lVar11 != 0) {
      lVar3 = lVar11;
      func_0x00010bf93ec0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar11;
      func_0x00010c0646e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c156ce0(lVar1,param_3,lVar3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar6);
    lVar3 = lVar5;
    func_0x00010c14e060(lVar5,param_3,puVar2,1);
    if ((int)lVar3 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)PTR__NSFileModificationDate_110345418;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_80 = uVar9;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_80,&uStack_88,1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0f5800(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b7e0(puVar6,param_3,puVar7,puVar8,0);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(lVar5);
    _objc_release(puVar2);
  }
  _objc_release(uVar9);
  _objc_release(lVar11);
  _objc_release(lVar1);
  lVar11 = *(long *)(param_2 + 0x28) + 0x18;
  _objc_loadWeakRetained(lVar11);
  lVar5 = lVar1;
  func_0x00010c08fa60(lVar1);
  func_0x00010c284040(lVar11,param_3,lVar5);
  _objc_release(lVar11);
  uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x48);
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x60);
  func_0x00010bdc3540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c13e940(dVar13 - param_1,uVar10,param_3,1,uVar9);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + 0x60);
}



/* Entry: 10b6832b0; end: 10b6832b7; -[SCCachingMediaItem entity] */

undefined8 FUN_10b6832b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b6832b8; end: 10b6832e7; -[SCCachingMediaItem setEntity:] */

void FUN_10b6832b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6832e8; end: 10b6832ef; -[SCCachingMediaItem imageGenerating] */

undefined8 FUN_10b6832e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b6832f0; end: 10b6832f7; -[SCCachingMediaItem maxImageCount] */

undefined8 FUN_10b6832f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b6832f8; end: 10b6832ff; -[SCCachingMediaItem sourceLevel] */

undefined8 FUN_10b6832f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b683300; end: 10b683307; -[SCCachingMediaItem targetSize] */

undefined1  [16] FUN_10b683300(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x98);
}



/* Entry: 10b683308; end: 10b68330f; -[SCCachingMediaItem cost] */

undefined8 FUN_10b683308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b683310; end: 10b683317; -[SCCachingMediaItem lastAccessTime] */

undefined8 FUN_10b683310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b683318; end: 10b68331f; -[SCCachingMediaItem imageInfoAvailable] */

undefined1 FUN_10b683318(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



/* Entry: 10b683320; end: 10b683327; -[SCCachingMediaItem identifier] */

undefined8 FUN_10b683320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b683328; end: 10b68332f; -[SCCachingMediaItem setIdentifier:] */

void FUN_10b683328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b683330; end: 10b6833d3; -[SCCachingMediaItem .cxx_destruct] */

void FUN_10b683330(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6833d4; end: 10b6833db; +[SCCachingMediaItemGroup contentURLForUUID:cacheURL:] */

void FUN_10b6833d4(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x3,PTR_s_URLByAppendingPathComponent__11254e4b8);
  return;
}



/* Entry: 10b6833dc; end: 10b68346b; +[SCCachingMediaItemGroup diskFileURLForUUID:sourceLevel:contentURL:] */

void FUN_10b6833dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6d4d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bdc2c60(param_5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b68346c; end: 10b68379b; -[SCCachingMediaItemGroup initWithEntity:cachingMediaManager:performer:contentURL:logger:shouldEnableMemoryOptimization:shouldSkipFileIO:] */

/* WARNING: Removing unreachable block (ram,0x00010b6835f4) */

undefined8 *
FUN_10b68346c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_112709b60;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0x59) = param_9;
    puVar3 = PTR_PTR_1126e0460;
    if (param_6 != 0) {
      lVar7 = param_3;
      func_0x00010bdc3540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4dba0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[3];
      puVar1[3] = puVar3;
      _objc_release(uVar2);
      _objc_release(lVar7);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[3];
      func_0x00010c0f5800(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfacc00();
      _objc_release(uVar2);
      if ((int)puVar4 == 0) {
        uVar2 = puVar1[3];
        func_0x00010c0f5800(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf55d80(puVar3);
        _objc_release(uVar2);
      }
      else {
        func_0x00010c12cc60(puVar3);
      }
      _objc_release(puVar3);
    }
    puVar3 = PTR_DAT_1126a5c50;
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x000107c318f8(param_3,puVar3);
    _objc_release(param_3);
    if ((param_3 == 0) || ((int)lVar7 == 0)) {
      lVar7 = 0;
      lVar5 = puVar1[5];
      puVar1[5] = 0;
    }
    else {
      _objc_retain(param_3);
      lVar7 = param_3;
      func_0x00010c0c4ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[5];
      puVar1[5] = lVar7;
      _objc_release(uVar2);
      lVar7 = param_3;
      func_0x00010c0c2ec0();
      lVar5 = param_3;
    }
    _objc_release(lVar5);
    puVar1[4] = lVar7;
    puVar6 = puVar1;
    func_0x00010be630c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
    uVar2 = puVar1[6];
    puVar1[6] = puVar6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b68379c; end: 10b68447f; -[SCCachingMediaItemGroup imagesForTargetSize:requestOptions:cacheMissHandler:resultHandler:] */

void FUN_10b68379c(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  undefined1 uStack_28c;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  long lStack_248;
  double dStack_240;
  double dStack_238;
  undefined1 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  ulong uStack_200;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  long lStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [8];
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  dVar17 = param_1;
  dVar18 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar4 = *(ulong *)(param_3 + 0x30);
  func_0x00010bfe7f40();
  if ((uVar4 & 1) == 0) {
    func_0x00010c121580(*(undefined8 *)(param_3 + 0x30));
  }
  lVar5 = *(long *)(param_3 + 0x30);
  func_0x00010c2478a0();
  puVar1 = PTR_DAT_1126a5c50;
  lVar13 = *(long *)(param_3 + 0x60);
  _objc_retain(lVar13);
  lVar9 = lVar13;
  func_0x000107c318f8(lVar13,puVar1);
  _objc_release(lVar13);
  if (((int)lVar9 != 0) && (lVar13 != 0)) {
    lVar13 = *(long *)(param_3 + 0x60);
    _objc_retain(lVar13);
    lVar9 = param_5;
    func_0x00010bfe90a0();
    if (lVar9 == 0) {
      dVar18 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      dVar17 = 270.0;
      if ((270.0 < param_1) ||
         (dVar18 == param_2 && *(double *)PTR__CGSizeZero_110347620 == param_1)) {
        if (dVar18 != param_2 || *(double *)PTR__CGSizeZero_110347620 != param_1) {
          iVar3 = (int)*(undefined8 *)(param_3 + 0x30);
          func_0x00010bfe7f40();
          if ((iVar3 != 0) &&
             (func_0x00010c26a0e0(*(undefined8 *)(param_3 + 0x30)), param_1 < dVar17)) {
            lVar5 = *(long *)(param_3 + 0x30);
            func_0x00010c2478a0();
            goto LAB_10b6838e4;
          }
        }
        lVar5 = lVar13;
        func_0x00010bfe3040();
      }
      else {
        lVar5 = 0;
      }
    }
    else if (lVar9 == 1) {
      lVar5 = 1;
    }
LAB_10b6838e4:
    _objc_release(lVar13);
  }
  iVar3 = (int)*(undefined8 *)(param_3 + 0x30);
  func_0x00010bfe7f40();
  uVar4 = param_3;
  if ((iVar3 == 0) ||
     ((func_0x00010c26a0e0(*(undefined8 *)(param_3 + 0x30)), param_1 < dVar17 &&
      (func_0x00010c26a0e0(*(undefined8 *)(param_3 + 0x30)), param_2 < dVar18)))) {
    dVar17 = *(double *)PTR__CGSizeZero_110347620;
    dVar18 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    bVar2 = false;
    if ((dVar17 == param_1) && (bVar2 = false, !NAN(dVar18) && !NAN(param_2))) {
      bVar2 = dVar18 == param_2;
    }
    if (bVar2) goto LAB_10b683a5c;
    uVar4 = *(ulong *)(param_3 + 0x38);
    uVar8 = param_3;
    func_0x00010be36c40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (uVar4 == 0) {
      uVar4 = param_3;
      func_0x00010be630c0(param_1,param_2);
      uVar14 = *(undefined8 *)(param_3 + 0x38);
      uVar8 = param_3;
      func_0x00010be36c40(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar14);
      _objc_release(uVar8);
    }
    uVar8 = uVar4;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar7 = uVar4;
    func_0x00010c2478a0();
    if (uVar8 == 0) {
      if (((long)uVar7 < lVar5) && (uVar8 = uVar4, func_0x00010bfe7f40(), (int)uVar8 != 0))
      goto LAB_10b683e3c;
      uStack_28c = 0;
LAB_10b683f6c:
      uVar8 = param_3;
      func_0x00010bdd4100(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar7;
      func_0x00010bfd62c0();
      _objc_release(uVar7);
      if ((int)uVar15 != 0) {
        uVar7 = uVar8;
        func_0x00010bfe7dc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar8;
        func_0x00010c2478a0(uVar8);
        (**(code **)(param_7 + 0x10))(param_7,uVar7,1,uVar15,0);
        _objc_release(uVar7);
      }
      uVar7 = param_3;
      func_0x00010bdd4120(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar7;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar15 == 0) {
        lVar9 = *(long *)(param_3 + 0x30);
        func_0x00010bfe7dc0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) goto LAB_10b684050;
        lVar13 = *(long *)(param_3 + 0x30);
        func_0x00010c2478a0();
        if (lVar13 < lVar5) goto LAB_10b684050;
        _objc_release(lVar9);
LAB_10b684104:
        uVar15 = *(ulong *)(param_3 + 0x30);
        _objc_retain(uVar15);
        _objc_release(uVar7);
        uVar7 = uVar15;
      }
      else {
LAB_10b684050:
        _objc_release();
        if (uVar7 == 0) goto LAB_10b684104;
      }
      func_0x00010c121340(uVar7);
      _objc_initWeak(auStack_90,uVar4);
      uVar10 = *(ulong *)(param_3 + 0x30);
      uVar15 = uVar4;
      if ((uVar7 == uVar10) && (func_0x00010c2478a0(), (long)uVar10 < lVar5)) {
        uVar16 = *(ulong *)(param_3 + 0x30);
        _objc_retain(uVar16);
        uVar10 = uVar16;
        func_0x00010bfe7f40();
        if ((uVar10 & 1) == 0) {
          uVar10 = uVar16;
          func_0x00010bfe7dc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar11 = uVar16;
          if (uVar10 == 0) goto LAB_10b68417c;
        }
        else {
LAB_10b68417c:
          uVar11 = param_3;
          func_0x00010becc6c0(dVar17,dVar18,param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
        }
        _objc_initWeak(auStack_1b8,param_3);
        _objc_initWeak(auStack_1c0,uVar11);
        puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_220 = 0xc2000000;
        pcStack_218 = FUN_10b684cd8;
        puStack_210 = &UNK_110d587e8;
        _objc_copyWeak(auStack_1f8,auStack_1b8);
        _objc_copyWeak(auStack_1f0,auStack_1c0);
        _objc_retain(param_5);
        lStack_208 = param_5;
        lStack_1e0 = lVar5;
        _objc_retain(param_7);
        uStack_200 = param_7;
        dStack_1d8 = param_1;
        dStack_1d0 = param_2;
        uStack_1c8 = uStack_28c;
        _objc_copyWeak(auStack_1e8,auStack_90);
        func_0x00010bf222e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_destroyWeak(auStack_1e8);
        _objc_release(uStack_200);
        _objc_release(lStack_208);
        _objc_destroyWeak(auStack_1f0);
        _objc_destroyWeak(auStack_1f8);
        _objc_destroyWeak(auStack_1c0);
        _objc_destroyWeak(auStack_1b8);
        _objc_release(uVar11);
      }
      else {
        _objc_initWeak(auStack_1b8,param_3);
        _objc_copyWeak(auStack_258,auStack_1b8);
        _objc_retain(param_5);
        lStack_248 = lVar5;
        _objc_retain(param_7);
        dStack_240 = param_1;
        dStack_238 = param_2;
        uStack_230 = uStack_28c;
        _objc_copyWeak(auStack_250,auStack_90);
        func_0x00010bf222e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_destroyWeak(auStack_250);
        _objc_release(param_7);
        _objc_release(param_5);
        _objc_destroyWeak(auStack_258);
        _objc_destroyWeak(auStack_1b8);
      }
      _objc_destroyWeak(auStack_90);
LAB_10b68437c:
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
    else {
      uVar8 = uVar4;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar8;
      func_0x00010bfd62c0();
      _objc_release(uVar8);
      if ((long)uVar7 < lVar5) {
        if ((int)uVar15 != 0) {
          uVar8 = uVar4;
          func_0x00010bfe7dc0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c2478a0(uVar4);
          (**(code **)(param_7 + 0x10))(param_7,uVar8,1,uVar7,0);
          _objc_release(uVar8);
        }
LAB_10b683e3c:
        uVar8 = param_3;
        func_0x00010becc6c0(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uStack_28c = 1;
        uVar4 = uVar8;
        goto LAB_10b683f6c;
      }
      if ((int)uVar15 == 0) {
        uVar8 = uVar4;
        func_0x00010bfe7dc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar8 == 0) {
          uVar8 = uVar4;
          func_0x00010c2478a0(uVar4);
          (**(code **)(param_7 + 0x10))(param_7,0,0,uVar8,1);
          uVar15 = 0;
          goto LAB_10b684388;
        }
        uVar8 = uVar4;
        func_0x00010bfe7dc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a8 = 0xc2000000;
        uStack_1a0 = 0x10b684c78;
        puStack_198 = &UNK_110853880;
        _objc_retain(param_7);
        uStack_188 = param_7;
        _objc_retain(uVar4);
        uVar15 = uVar8;
        uStack_190 = uVar4;
        func_0x00010bf66ec0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uStack_190);
        uVar7 = uStack_188;
        goto LAB_10b68437c;
      }
      uVar8 = uVar4;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c2478a0(uVar4);
      (**(code **)(param_7 + 0x10))(param_7,uVar8,1,uVar7,1);
      _objc_release(uVar8);
      uVar15 = 0;
    }
LAB_10b684388:
    _objc_release(uVar4);
  }
  else {
LAB_10b683a5c:
    lVar9 = *(long *)(param_3 + 0x30);
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) {
      uVar8 = param_3;
      func_0x00010bdd4100(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar7;
      func_0x00010bfd62c0();
      _objc_release(uVar7);
      if ((int)uVar15 != 0) {
        uVar7 = uVar8;
        func_0x00010bfe7dc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar8;
        func_0x00010c2478a0(uVar8);
        (**(code **)(param_7 + 0x10))(param_7,uVar7,1,uVar15,0);
        _objc_release(uVar7);
      }
      _objc_release(uVar8);
      lVar9 = *(long *)(param_3 + 0x30);
      func_0x00010c2478a0();
      if (lVar9 < lVar5) {
        uVar8 = *(ulong *)(param_3 + 0x30);
        func_0x00010bfe7f40();
        if ((uVar8 & 1) != 0) {
          func_0x00010becc6c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                              *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_initWeak(auStack_90,param_3);
          puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_10b6849e0;
          puStack_168 = &UNK_110d587b8;
          ppuVar12 = &puStack_180;
          _objc_copyWeak(auStack_150,auStack_90);
          _objc_retain(param_5);
          lStack_160 = param_5;
          lStack_148 = lVar5;
          _objc_retain(param_7);
          uVar15 = uVar4;
          uStack_158 = param_7;
          func_0x00010bf222e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uStack_158);
          lVar9 = lStack_160;
          goto LAB_10b683d10;
        }
      }
      func_0x00010c121340(*(undefined8 *)(param_3 + 0x30));
      _objc_initWeak(auStack_90,param_3);
      uVar15 = *(ulong *)(param_3 + 0x30);
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_10b6847b0;
      puStack_128 = &UNK_110d587b8;
      _objc_copyWeak(auStack_110,auStack_90);
      _objc_retain(param_5);
      lStack_120 = param_5;
      lStack_108 = lVar5;
      _objc_retain(param_7);
      uStack_118 = param_7;
      func_0x00010bf222e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_118);
      _objc_release(lStack_120);
      _objc_destroyWeak(auStack_110);
    }
    else {
      lVar9 = *(long *)(param_3 + 0x30);
      func_0x00010c2478a0();
      uVar6 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar6;
      func_0x00010bfd62c0();
      _objc_release(uVar6);
      if (lVar9 < lVar5) {
        if ((int)uVar14 != 0) {
          uVar14 = *(undefined8 *)(param_3 + 0x30);
          func_0x00010bfe7dc0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_3 + 0x30);
          func_0x00010c2478a0(uVar6);
          (**(code **)(param_7 + 0x10))(param_7,uVar14,1,uVar6,0);
          _objc_release(uVar14);
        }
        func_0x00010becc6c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                            *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_90,param_3);
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_10b6844fc;
        puStack_e8 = &UNK_110d587b8;
        ppuVar12 = &puStack_100;
        _objc_copyWeak(auStack_d0,auStack_90);
        _objc_retain(param_5);
        lStack_e0 = param_5;
        lStack_c8 = lVar5;
        _objc_retain(param_7);
        uVar15 = uVar4;
        uStack_d8 = param_7;
        func_0x00010bf222e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uStack_d8);
        lVar9 = lStack_e0;
LAB_10b683d10:
        _objc_release(lVar9);
        _objc_destroyWeak(ppuVar12 + 6);
        _objc_destroyWeak(auStack_90);
        goto LAB_10b684388;
      }
      if ((int)uVar14 != 0) {
        uVar14 = *(undefined8 *)(param_3 + 0x30);
        func_0x00010bfe7dc0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_3 + 0x30);
        func_0x00010c2478a0(uVar6);
        (**(code **)(param_7 + 0x10))(param_7,uVar14,1,uVar6,1);
        _objc_release(uVar14);
        uVar15 = 0;
        goto LAB_10b684390;
      }
      _objc_initWeak(auStack_90,param_3);
      uVar4 = *(ulong *)(param_3 + 0x30);
      func_0x00010bfe7dc0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_10b684480;
      puStack_a8 = &UNK_110851440;
      _objc_copyWeak(auStack_98,auStack_90);
      _objc_retain(param_7);
      uVar15 = uVar4;
      uStack_a0 = param_7;
      func_0x00010bf66ec0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_98);
      _objc_release(uVar4);
    }
    _objc_destroyWeak(auStack_90);
  }
LAB_10b684390:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return;
}



/* Entry: 10b684480; end: 10b6844fb;  */

void FUN_10b684480(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bfe7dc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c2478a0(uVar3);
    (**(code **)(lVar4 + 0x10))(lVar4,uVar2,0,uVar3,1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b6844fc; end: 10b68474f;  */

void FUN_10b6844fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10b6846fc;
  lVar6 = *(long *)(param_1 + 0x20);
  lVar3 = param_2;
  func_0x00010c2478a0();
  lVar8 = *(long *)(param_1 + 0x38);
  func_0x00010bfe90a0();
  lVar5 = param_2;
  func_0x00010bfe7dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfd62c0();
  _objc_release(lVar5);
  if ((int)lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_2;
      func_0x00010bfe7dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar5);
      _objc_retain(param_2);
      func_0x00010bf66ec0(lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(param_2);
      goto LAB_10b684674;
    }
    lVar5 = *(long *)(param_1 + 0x28);
    lVar3 = param_2;
    func_0x00010c2478a0(param_2);
    (**(code **)(lVar5 + 0x10))(lVar5,0,0,lVar3,1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = param_2;
    func_0x00010bfe7dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c2478a0(param_2);
    (**(code **)(lVar4 + 0x10))(lVar4,lVar5,0,lVar2,lVar8 <= lVar3 || lVar6 != 1);
LAB_10b684674:
    _objc_release(lVar5);
  }
  lVar3 = *(long *)(lVar1 + 0x30);
  if (lVar3 != param_2) {
    func_0x00010c2478a0();
    lVar5 = param_2;
    func_0x00010c2478a0();
    if (lVar3 <= lVar5) {
      uVar7 = *(undefined8 *)(lVar1 + 0x40);
      lVar3 = lVar1;
      func_0x00010be36c40(*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7);
      _objc_release(lVar3);
      func_0x00010be8c340(lVar1);
      _objc_retain(param_2);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      *(long *)(lVar1 + 0x30) = param_2;
      _objc_release(uVar7);
    }
  }
LAB_10b6846fc:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b684750; end: 10b6847af;  */

void FUN_10b684750(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfe7dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2478a0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0,uVar3,*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6847b0; end: 10b68497f;  */

void FUN_10b6847b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010c2478a0();
    lVar7 = *(long *)(param_1 + 0x38);
    func_0x00010bfe90a0();
    lVar5 = param_2;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bfd62c0();
    _objc_release(lVar5);
    if ((int)lVar3 == 0) {
      lVar2 = param_2;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        lVar5 = *(long *)(param_1 + 0x28);
        lVar2 = param_2;
        func_0x00010c2478a0(param_2);
        (**(code **)(lVar5 + 0x10))(lVar5,0,0,lVar2,1);
        goto LAB_10b68492c;
      }
      lVar2 = param_2;
      func_0x00010bfe7dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar5);
      _objc_retain(param_2);
      func_0x00010bf66ec0(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_2);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x28);
      lVar5 = param_2;
      func_0x00010bfe7dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c2478a0(param_2);
      (**(code **)(lVar4 + 0x10))(lVar4,lVar5,0,lVar3,lVar7 <= lVar2 || lVar6 != 1);
    }
    _objc_release(lVar5);
  }
LAB_10b68492c:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b684980; end: 10b6849df;  */

void FUN_10b684980(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfe7dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2478a0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0,uVar3,*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6849e0; end: 10b684c17;  */

void FUN_10b6849e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10b684bc4;
  lVar6 = *(long *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c2478a0();
  lVar8 = *(long *)(param_1 + 0x38);
  func_0x00010bfe90a0();
  lVar5 = param_2;
  func_0x00010bfe7dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bfd62c0();
  _objc_release(lVar5);
  if ((int)lVar3 == 0) {
    lVar2 = param_2;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bfe7dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar5);
      _objc_retain(param_2);
      func_0x00010bf66ec0(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_2);
      goto LAB_10b684b58;
    }
    lVar5 = *(long *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010c2478a0(param_2);
    (**(code **)(lVar5 + 0x10))(lVar5,0,0,lVar2,1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar5 = param_2;
    func_0x00010bfe7dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c2478a0(param_2);
    (**(code **)(lVar4 + 0x10))(lVar4,lVar5,0,lVar3,lVar8 <= lVar2 || lVar6 != 1);
LAB_10b684b58:
    _objc_release(lVar5);
  }
  if (*(long *)(lVar1 + 0x30) != param_2) {
    uVar7 = *(undefined8 *)(lVar1 + 0x40);
    lVar2 = lVar1;
    func_0x00010be36c40(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(lVar2);
    func_0x00010be8c340(lVar1);
    _objc_retain(param_2);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    *(long *)(lVar1 + 0x30) = param_2;
    _objc_release(uVar7);
  }
LAB_10b684bc4:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b684c18; end: 10b684cd7;  */

void FUN_10b684c18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfe7dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2478a0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0,uVar3,*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b684cd8; end: 10b685067;  */

void FUN_10b684cd8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10b685038;
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar5 = param_2;
    func_0x00010c2478a0();
    lVar8 = *(long *)(param_1 + 0x48);
    func_0x00010bfe90a0();
    lVar10 = param_2;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010bfd62c0();
    _objc_release(lVar10);
    if ((int)lVar3 == 0) {
      lVar5 = param_2;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        lVar5 = param_2;
        func_0x00010bfe7dc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = *(long *)(param_1 + 0x28);
        _objc_retain(lVar10);
        _objc_retain(param_2);
        func_0x00010bf66ec0(lVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(param_2);
        goto LAB_10b684e68;
      }
      lVar10 = *(long *)(param_1 + 0x28);
      lVar5 = param_2;
      func_0x00010c2478a0(param_2);
      (**(code **)(lVar10 + 0x10))(lVar10,0,0,lVar5,1);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x28);
      lVar10 = param_2;
      func_0x00010bfe7dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c2478a0(param_2);
      (**(code **)(lVar7 + 0x10))(lVar7,lVar10,0,lVar3,lVar8 <= lVar5 || lVar6 != 1);
LAB_10b684e68:
      _objc_release(lVar10);
    }
    if (*(char *)(param_1 + 0x60) == '\x01') {
      lVar10 = lVar1;
      func_0x00010be36c40(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(lVar1 + 0x38);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + 0x40;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        lVar6 = param_1 + 0x40;
        _objc_loadWeakRetained();
        if (lVar3 == lVar6) {
          _objc_release(lVar6);
        }
        else {
          lVar7 = lVar3;
          func_0x00010c2478a0();
          lVar8 = param_1 + 0x40;
          _objc_loadWeakRetained();
          lVar4 = lVar8;
          func_0x00010c2478a0();
          _objc_release(lVar8);
          _objc_release(lVar6);
          _objc_release(lVar5);
          if (lVar4 < lVar7) goto LAB_10b684f9c;
          func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x40));
          lVar5 = param_1 + 0x40;
          _objc_loadWeakRetained(lVar5);
          func_0x00010be8c340(lVar1);
          _objc_release(lVar5);
          lVar5 = param_1 + 0x40;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x38));
        }
        _objc_release(lVar5);
      }
LAB_10b684f9c:
      lVar5 = *(long *)(lVar1 + 0x30);
      if (lVar5 != lVar2) {
        func_0x00010c2478a0();
        lVar6 = lVar2;
        func_0x00010c2478a0();
        if (lVar5 <= lVar6) {
          uVar9 = *(undefined8 *)(lVar1 + 0x40);
          lVar5 = lVar1;
          func_0x00010be36c40(*(undefined8 *)PTR__CGSizeZero_110347620,
                              *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar9);
          _objc_release(lVar5);
          func_0x00010be8c340(lVar1);
          _objc_retain(lVar2);
          uVar9 = *(undefined8 *)(lVar1 + 0x30);
          *(long *)(lVar1 + 0x30) = lVar2;
          _objc_release(uVar9);
        }
      }
      _objc_release(lVar3);
      _objc_release(lVar10);
    }
  }
  _objc_release(lVar2);
LAB_10b685038:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b685068; end: 10b6850c7;  */

void FUN_10b685068(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfe7dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2478a0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0,uVar3,*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6850c8; end: 10b6853b7;  */

void FUN_10b6850c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10b685388;
  lVar5 = *(long *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c2478a0();
  lVar7 = *(long *)(param_1 + 0x40);
  func_0x00010bfe90a0();
  lVar8 = param_2;
  func_0x00010bfe7dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bfd62c0();
  _objc_release(lVar8);
  if ((int)lVar3 == 0) {
    lVar2 = param_2;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bfe7dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar8);
      _objc_retain(param_2);
      func_0x00010bf66ec0(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_2);
      goto LAB_10b685248;
    }
    lVar8 = *(long *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010c2478a0(param_2);
    (**(code **)(lVar8 + 0x10))(lVar8,0,0,lVar2,1);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    lVar8 = param_2;
    func_0x00010bfe7dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c2478a0(param_2);
    (**(code **)(lVar6 + 0x10))(lVar6,lVar8,0,lVar3,lVar7 <= lVar2 || lVar5 != 1);
LAB_10b685248:
    _objc_release(lVar8);
  }
  if (*(char *)(param_1 + 0x58) != '\x01') goto LAB_10b685388;
  lVar8 = lVar1;
  func_0x00010be36c40(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(lVar1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar3 == lVar5) {
      _objc_release(lVar5);
    }
    else {
      lVar6 = lVar3;
      func_0x00010c2478a0();
      lVar7 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar4 = lVar7;
      func_0x00010c2478a0();
      _objc_release(lVar7);
      _objc_release(lVar5);
      _objc_release(lVar2);
      if (lVar4 < lVar6) goto LAB_10b685378;
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x40));
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
      func_0x00010be8c340(lVar1);
      _objc_release(lVar2);
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x38));
    }
    _objc_release(lVar2);
  }
LAB_10b685378:
  _objc_release(lVar3);
  _objc_release(lVar8);
LAB_10b685388:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b6853b8; end: 10b685417;  */

void FUN_10b6853b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfe7dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2478a0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0,uVar3,*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b685418; end: 10b685467; -[SCCachingMediaItemGroup evict] */

void FUN_10b685418(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bf9a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_evict_1125c4340);
    return;
  }
  return;
}



/* Entry: 10b685468; end: 10b68585b; -[SCCachingMediaItemGroup trimDiskItemsByDate:shouldSkipHighestLevelSource:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b685468(long param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_230;
  long alStack_208 [3];
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  plVar10 = *(long **)(param_1 + 0x18);
  uStack_78 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = 0;
  puVar4 = puVar2;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_180;
  _objc_retain(lStack_180);
  _objc_release(puVar3);
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar5;
    func_0x00010bf52a60();
    if (lVar15 != 0) {
      lVar12 = *plStack_1b0;
      do {
        lVar14 = 0;
        do {
          if (*plStack_1b0 != lVar12) {
            _objc_enumerationMutation(lVar5);
          }
          puVar11 = *(undefined **)(lStack_1b8 + lVar14 * 8);
          puVar6 = puVar11;
          func_0x00010c0881c0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar6;
          func_0x00010bf433a0();
          _objc_release(puVar6);
          if (puVar13 == (undefined *)0xffffffffffffffff) {
            func_0x00010c0881c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar3 = puVar11;
          }
          lVar14 = lVar14 + 1;
        } while (lVar15 != lVar14);
        lVar15 = lVar5;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    _objc_release(lVar5);
    puVar6 = puVar3;
    func_0x00010bf433a0();
    puStack_230 = param_3;
    if (puVar6 == (undefined *)0xffffffffffffffff) {
      _objc_retain(puVar3);
      _objc_release(param_3);
      puStack_230 = puVar3;
    }
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    alStack_208[2] = 0;
    alStack_208[1] = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(puVar4);
    plVar10 = alStack_208 + 1;
    puVar6 = puVar4;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar15 = *plStack_1f0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_1f0 != lVar15) {
            _objc_enumerationMutation(puVar4);
          }
          uVar16 = *(undefined8 *)(alStack_208[2] + (long)puVar13 * 8);
          if (param_4 == 0) {
LAB_10b685754:
            func_0x00010bfc99e0(uVar16);
            lVar5 = 0;
            _objc_retain(0);
            _objc_retain(0);
            func_0x00010bf433a0();
            if (lVar5 == -1) {
              func_0x00010c12cc60(puVar2);
            }
            _objc_release(0);
            _objc_release(0);
          }
          else {
            uVar7 = uVar16;
            func_0x00010c0899c0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(param_1 + 0x60);
            func_0x00010bdc3540(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar7;
            func_0x00010bfda7c0();
            _objc_release(uVar8);
            _objc_release(uVar7);
            if ((int)uVar9 == 0) goto LAB_10b685754;
            alStack_208[0] = -1;
            FUN_10b6869a0(uVar16,0,alStack_208);
            lVar5 = alStack_208[0];
            lVar12 = *(long *)(param_1 + 0x30);
            func_0x00010c2478a0();
            if (lVar5 != lVar12) goto LAB_10b685754;
          }
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        plVar10 = alStack_208 + 1;
        puVar6 = puVar4;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    param_3 = puStack_230;
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(plVar10);
    uVar16 = *(undefined8 *)(param_3 + 0x60);
    *(long **)(param_3 + 0x60) = plVar10;
    _objc_retain(plVar10);
    _objc_release(uVar16);
    func_0x00010c196600(*(undefined8 *)(param_3 + 0x30));
    puVar2 = param_3;
    func_0x00010be36c40(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010c0e00e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196600();
    _objc_release(plVar10);
    _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b68585c; end: 10b685903; -[SCCachingMediaItemGroup setEntity:] */

void FUN_10b68585c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c196600(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  lVar1 = param_1;
  func_0x00010be36c40(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e00e0(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196600();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b685904; end: 10b685b43; -[SCCachingMediaItemGroup _bestRepresentedItemForTargetSize:items:retiredItems:] */

void FUN_10b685904(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b685b44;
  uStack_80 = 0x10b685b54;
  uStack_78 = 0;
  dVar8 = *(double *)PTR__CGSizeZero_110347620;
  dVar9 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar2 = false;
  if ((param_1 == dVar8) && (bVar2 = false, !NAN(param_2) && !NAN(dVar9))) {
    bVar2 = param_2 == dVar9;
  }
  if (bVar2) {
    uVar3 = *(ulong *)(param_3 + 0x30);
    func_0x00010bfe7f40();
    if ((uVar3 & 1) == 0) {
      lVar7 = 0;
      goto LAB_10b685ad8;
    }
    func_0x00010c26a0e0(*(undefined8 *)(param_3 + 0x30));
    param_2 = dVar9;
    param_1 = dVar8;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bfe7dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfd62c0();
  _objc_release(uVar4);
  puVar1 = puStack_98;
  if ((int)uVar5 != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar4);
    uVar5 = puVar1[5];
    puVar1[5] = uVar4;
    _objc_release(uVar5);
  }
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10b685b5c;
  puStack_c0 = &UNK_110d58848;
  puStack_b8 = &uStack_a0;
  ppuVar6 = &puStack_d8;
  dStack_b0 = param_1;
  dStack_a8 = param_2;
  _objc_retainBlock();
  _objc_retain();
  func_0x00010bf97ce0(param_5);
  lVar7 = puStack_98[5];
  if (lVar7 == 0) {
    _objc_retain(ppuVar6);
    func_0x00010bf97ce0(param_6);
    lVar7 = puStack_98[5];
    _objc_retain(lVar7);
    _objc_release(ppuVar6);
  }
  else {
    _objc_retain(lVar7);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
LAB_10b685ad8:
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10b685b44; end: 10b685b5b;  */

void FUN_10b685b44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b685b5c; end: 10b685d0f;  */

void FUN_10b685b5c(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe7dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd62c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    dVar4 = *(double *)(param_3 + 0x28);
    dVar6 = 0.0;
    dVar7 = 0.0;
    if (dVar4 != 0.0) {
      param_2 = *(double *)(param_3 + 0x30);
      if (param_2 == 0.0) {
        dVar7 = INFINITY;
      }
      else {
        dVar7 = dVar4 / param_2;
      }
    }
    func_0x00010c26a0e0(param_4);
    if (dVar4 != 0.0) {
      if (param_2 == 0.0) {
        dVar6 = INFINITY;
      }
      else {
        dVar6 = dVar4 / param_2;
      }
    }
    if (0.0 < dVar7) {
      dVar4 = ABS((dVar6 - dVar7) / dVar7);
      param_2 = 0.3;
      if (0.3 <= dVar4) goto LAB_10b685cf4;
    }
    func_0x00010c26a0e0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
    dVar5 = 0.0;
    if (dVar4 != 0.0) {
      if (param_2 == 0.0) {
        dVar5 = INFINITY;
      }
      else {
        dVar5 = dVar4 / param_2;
      }
    }
    dVar4 = ABS(dVar7 - dVar5) + -0.001;
    dVar6 = ABS(dVar7 - dVar6);
    if (dVar4 <= dVar6) {
      dVar7 = *(double *)(param_3 + 0x28);
      dVar5 = *(double *)(param_3 + 0x30);
      func_0x00010c26a0e0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
      func_0x00010c26a0e0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
      dVar4 = -(dVar6 * dVar4) + dVar5 * dVar7;
      dVar7 = ABS(dVar4);
      dVar5 = *(double *)(param_3 + 0x28);
      dVar8 = *(double *)(param_3 + 0x30);
      func_0x00010c26a0e0(param_4);
      func_0x00010c26a0e0(param_4);
      if (dVar7 <= ABS(-(dVar6 * dVar4) + dVar8 * dVar5)) goto LAB_10b685cf4;
    }
    lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    _objc_release(uVar2);
  }
LAB_10b685cf4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b685d10; end: 10b685d2f;  */

void FUN_10b685d10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010b685d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 10b685d30; end: 10b685e2f; -[SCCachingMediaItemGroup _bestSourceItemForTargetSize:sourceLevel:items:] */

void FUN_10b685d30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10b685b44;
  uStack_50 = 0x10b685b54;
  uStack_48 = 0;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x38));
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b685e30; end: 10b686017;  */

void FUN_10b685e30(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bfe7dc0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar1 = param_4, func_0x00010c2478a0(), *(long *)(param_2 + 0x28) <= lVar1))
  {
    func_0x00010c26a0e0(param_4);
    dVar4 = *(double *)(param_2 + 0x30);
    if (dVar4 <= param_1) {
      func_0x00010c26a0e0(param_4);
      dVar3 = *(double *)(param_2 + 0x38);
      if (dVar3 <= dVar4) {
        func_0x00010c26a0e0(param_4);
        dVar5 = 0.0;
        if (dVar3 != 0.0) {
          if (dVar4 == 0.0) {
            dVar5 = INFINITY;
          }
          else {
            dVar5 = dVar3 / dVar4;
          }
        }
        dVar3 = 0.0;
        if (*(double *)(param_2 + 0x30) != 0.0) {
          dVar4 = *(double *)(param_2 + 0x38);
          dVar3 = INFINITY;
          if (dVar4 != 0.0) {
            dVar3 = *(double *)(param_2 + 0x30) / dVar4;
          }
        }
        dVar3 = ABS(dVar5 - dVar3);
        if (0.001 <= dVar3) {
          func_0x00010c26a0e0(param_4);
          dVar5 = 0.0;
          dVar6 = 0.0;
          if (dVar3 != 0.0) {
            if (dVar4 == 0.0) {
              dVar6 = INFINITY;
            }
            else {
              dVar6 = dVar3 / dVar4;
            }
          }
          func_0x00010c26a0e0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
          if (dVar3 != 0.0) {
            if (dVar4 == 0.0) {
              dVar5 = INFINITY;
            }
            else {
              dVar5 = dVar3 / dVar4;
            }
          }
          _objc_release(lVar2);
          if (0.001 <= ABS(dVar6 - dVar5)) goto LAB_10b685ffc;
        }
        else {
          _objc_release(lVar2);
        }
        func_0x00010c26a0e0(param_4);
        dVar5 = dVar3;
        func_0x00010c26a0e0(param_4);
        dVar3 = dVar3 * dVar4;
        func_0x00010c26a0e0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
        func_0x00010c26a0e0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
        if (dVar5 * dVar4 <= dVar3) goto LAB_10b685ffc;
        lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
        _objc_retain(param_4);
        lVar2 = *(long *)(lVar1 + 0x28);
        *(long *)(lVar1 + 0x28) = param_4;
      }
    }
  }
  _objc_release(lVar2);
LAB_10b685ffc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b686018; end: 10b6860c3; -[SCCachingMediaItemGroup _newItemForTargetSize:] */

undefined * FUN_10b686018(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e0458;
  _objc_alloc(PTR_PTR_1126e0458);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_3 + 0x60);
  lVar2 = param_3 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c003e80(param_1,param_2,puVar1,param_4,uVar3,uVar4,lVar2,
                      *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28),
                      *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x50),
                      *(undefined1 *)(param_3 + 0x59));
  _objc_release(lVar2);
  return puVar1;
}



/* Entry: 10b6860c4; end: 10b68615b; -[SCCachingMediaItemGroup _toBeItemForTargetSize:] */

void FUN_10b6860c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  func_0x00010be36c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_3 + 0x48);
  func_0x00010c0e00e0(lVar2,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010be630c0(param_1,param_2,param_3);
    func_0x00010c1a99e0();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x48),param_4,lVar2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b68615c; end: 10b6861df; -[SCCachingMediaItemGroup _removeFromToBeItemsForItem:] */

void FUN_10b68615c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar2 == param_3) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x48),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b6861e0; end: 10b6861f7; -[SCCachingMediaItemGroup _identifierForTargetSize:] */

void FUN_10b6861e0(double param_1,double param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithUnsignedInt__112615820,
             (int)param_1 + (int)param_2 * 0x10000);
  return;
}



/* Entry: 10b6861f8; end: 10b6861ff; -[SCCachingMediaItemGroup entity] */

undefined8 FUN_10b6861f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b686200; end: 10b68628b; -[SCCachingMediaItemGroup .cxx_destruct] */

void FUN_10b686200(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b68628c; end: 10b686307;  */

void FUN_10b68628c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  FUN_10b686308();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  if (param_1 <= dVar2) {
    func_0x00010c23d0a0(param_3);
  }
  uVar1 = param_3;
  func_0x00010bf673c0(param_1,param_2,0x3ff0000000000000,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b686308; end: 10b68639b;  */

void FUN_10b686308(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  puVar1 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    puVar1 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      _objc_retain(param_1);
      puVar2 = param_1;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b68639c; end: 10b68648f;  */

void FUN_10b68639c(double param_1,double param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010c105b00();
    if (uVar2 == 3) {
      uVar2 = param_3;
      FUN_10b696b1c(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b686468;
    }
    _objc_release(param_3);
  }
  FUN_10b686308(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar4 = param_1;
  func_0x00010c14e120(uVar3);
  param_1 = param_1 * dVar4;
  func_0x00010c23d0a0(uVar3);
  func_0x00010c14e120(uVar3);
  uVar2 = uVar3;
  FUN_10b68628c(param_1,param_2 * dVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_10b686468:
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b686490; end: 10b68659f;  */

bool FUN_10b686490(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uStack_38;
  uint uStack_34;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010c08fa60();
  if (3 < uVar4) {
    uStack_34 = 0;
    func_0x00010bfc3360(param_1,param_2,&uStack_34,0,4);
    uVar1 = uStack_34 + 1;
    uVar4 = param_1;
    func_0x00010c08fa60();
    if (((ulong)uVar1 << 2 <= uVar4) && (uStack_34 != 0)) {
      lVar2 = (ulong)uStack_34 * 4 + 4;
      uStack_38 = 0;
      func_0x00010bfc3360(param_1,param_2,&uStack_38,4,4);
      uVar6 = (ulong)uStack_38;
      uVar4 = param_1;
      func_0x00010c08fa60();
      bVar3 = false;
      if (lVar2 + uVar6 <= uVar4) {
        uVar4 = param_1;
        func_0x00010c25eac0(param_1,param_2,lVar2,uStack_38);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = puVar5 != (undefined *)0x0;
        _objc_release();
        _objc_release(uVar4);
      }
      goto LAB_10b686580;
    }
  }
  bVar3 = false;
LAB_10b686580:
  _objc_release(param_1);
  return bVar3;
}



/* Entry: 10b6865a0; end: 10b6865cb;  */

uint FUN_10b6865a0(ulong param_1)

{
  func_0x00010c105b00();
  return (uint)(8 < param_1) | 0x1eU >> (ulong)((uint)param_1 & 0x1f) & 1;
}



/* Entry: 10b6865cc; end: 10b6867bf;  */

/* WARNING: Removing unreachable block (ram,0x00010b686650) */
/* WARNING: Removing unreachable block (ram,0x00010b686670) */
/* WARNING: Removing unreachable block (ram,0x00010b686684) */
/* WARNING: Removing unreachable block (ram,0x00010b68668c) */
/* WARNING: Removing unreachable block (ram,0x00010b68676c) */
/* WARNING: Removing unreachable block (ram,0x00010b6866bc) */
/* WARNING: Removing unreachable block (ram,0x00010b6866f4) */
/* WARNING: Removing unreachable block (ram,0x00010b686700) */
/* WARNING: Removing unreachable block (ram,0x00010b68672c) */
/* WARNING: Removing unreachable block (ram,0x00010b686770) */

void FUN_10b6865cc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (3 < uVar1) {
    uVar1 = param_1;
    func_0x00010c105b00();
    if ((3 < uVar1 - 5) && (uVar1 != 0)) {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b686778;
    }
    func_0x00010bfc3360(param_1);
  }
  puVar4 = (undefined *)0x0;
LAB_10b686778:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_retain();
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf06a40(puVar2);
    uVar1 = param_1;
    func_0x00010bf529e0();
    lVar3 = uVar1 << 2;
    _malloc();
    func_0x00010bf529e0(param_1);
    func_0x00010bf06a40(puVar2);
    _objc_retain(puVar2);
    func_0x00010bf97e80(param_1);
    func_0x00010bf529e0(param_1);
    _objc_release(param_1);
    func_0x00010c130cc0(puVar2);
    _free(lVar3);
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6867c0; end: 10b6868e7;  */

void FUN_10b6867c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_retain();
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf529e0();
  uStack_34 = (undefined4)lVar2;
  func_0x00010bf06a40(puVar1,param_2,&uStack_34,4);
  lVar2 = param_1;
  func_0x00010bf529e0();
  lVar2 = lVar2 << 2;
  _malloc();
  lVar3 = param_1;
  func_0x00010bf529e0(param_1);
  func_0x00010bf06a40(puVar1,param_2,lVar2,lVar3 << 2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b6868e8;
  puStack_50 = &UNK_110d588d8;
  puStack_48 = puVar1;
  lStack_40 = lVar2;
  _objc_retain(puVar1);
  func_0x00010bf97e80(param_1,param_2,&puStack_68);
  lVar3 = param_1;
  func_0x00010bf529e0(param_1);
  _objc_release(param_1);
  func_0x00010c130cc0(puVar1,param_2,4,lVar3 << 2,lVar2);
  _free(lVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6868e8; end: 10b68699f;  */

void FUN_10b6868e8(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  _objc_autoreleasePoolPush();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar4 = param_2;
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_2);
  }
  else {
    _UIImageJPEGRepresentation(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar4;
  func_0x00010c08fa60();
  *(int *)(*(long *)(param_1 + 0x28) + param_3 * 4) = (int)uVar3;
  func_0x00010bf06ae0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_autoreleasePoolPop(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b6869a0; end: 10b686a57;  */

void FUN_10b6869a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bdc2ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c11f440(uVar1);
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = uVar1;
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_2 = uVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = uVar1;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    *param_3 = uVar3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b686a58; end: 10b686aab;  */

void FUN_10b686a58(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7828 != -1) {
    func_0x000107c27d9c(0x1137f7828,&PTR___NSConcreteGlobalBlock_110d58908);
  }
  uVar1 = uRam00000001137f7820;
  _objc_retain(uRam00000001137f7820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b686aac; end: 10b686aef;  */

void FUN_10b686aac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar1 = puRam00000001137f7820;
  puRam00000001137f7820 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b686af0; end: 10b686bef; -[SCCachingMediaCacheItemInfo initWithEntityUUID:fileSize:lastAccessTime:fileURL:sourceLevel:isSource:] */

undefined1 *
FUN_10b686af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112709b68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b686bf0; end: 10b686bf7; -[SCCachingMediaCacheItemInfo entityUUID] */

undefined8 FUN_10b686bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b686bf8; end: 10b686bff; -[SCCachingMediaCacheItemInfo fileSizeInBytes] */

undefined8 FUN_10b686bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b686c00; end: 10b686c07; -[SCCachingMediaCacheItemInfo lastAccessTime] */

undefined8 FUN_10b686c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b686c08; end: 10b686c0f; -[SCCachingMediaCacheItemInfo fileURL] */

undefined8 FUN_10b686c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b686c10; end: 10b686c17; -[SCCachingMediaCacheItemInfo sourceLevel] */

undefined8 FUN_10b686c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b686c18; end: 10b686c1f; -[SCCachingMediaCacheItemInfo isSource] */

undefined1 FUN_10b686c18(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b686c20; end: 10b686c5b; -[SCCachingMediaCacheItemInfo .cxx_destruct] */

void FUN_10b686c20(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b686c5c; end: 10b686cbf; -[SCCachingMediaSimpleRequest init] */

undefined1 * FUN_10b686c5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112709b70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b686cc0; end: 10b686cdf; -[SCCachingMediaSimpleRequest isCancelled] */

bool FUN_10b686cc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 10b686ce0; end: 10b686ce7; -[SCCachingMediaSimpleRequest cancel] */

void FUN_10b686ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 10b686ce8; end: 10b686cff; -[SCCachingMediaSimpleRequest progressReceiver] */

void FUN_10b686ce8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b686d00; end: 10b686d0b; -[SCCachingMediaSimpleRequest setProgressReceiver:] */

void FUN_10b686d00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10b686d0c; end: 10b686d37; -[SCCachingMediaSimpleRequest .cxx_destruct] */

void FUN_10b686d0c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b686d38; end: 10b686d8f; +[SCCacheRequestOptions createRequestWithOptions:imageVersion:shouldCacheMediaInMemory:] */

void FUN_10b686d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_alloc_init();
  func_0x00010c18ba80();
  func_0x00010c1aac00(param_1,param_2,param_4);
  func_0x00010c2001c0(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b686d90; end: 10b686d97; -[SCCacheRequestOptions deliveryMode] */

undefined8 FUN_10b686d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b686d98; end: 10b686d9f; -[SCCacheRequestOptions setDeliveryMode:] */

void FUN_10b686d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b686da0; end: 10b686da7; -[SCCacheRequestOptions imageVersion] */

undefined8 FUN_10b686da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b686da8; end: 10b686daf; -[SCCacheRequestOptions setImageVersion:] */

void FUN_10b686da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b686db0; end: 10b686db7; -[SCCacheRequestOptions requestTargetSize] */

undefined1  [16] FUN_10b686db0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10b686db8; end: 10b686dbf; -[SCCacheRequestOptions setRequestTargetSize:] */

void FUN_10b686db8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x20) = param_1;
  *(undefined8 *)(param_3 + 0x28) = param_2;
  return;
}



/* Entry: 10b686dc0; end: 10b686dc7; -[SCCacheRequestOptions networkDownloadDelayEnabled] */

undefined1 FUN_10b686dc0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b686dc8; end: 10b686dcf; -[SCCacheRequestOptions setNetworkDownloadDelayEnabled:] */

void FUN_10b686dc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b686dd0; end: 10b686dd7; -[SCCacheRequestOptions shouldCacheMediaInMemory] */

undefined1 FUN_10b686dd0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b686dd8; end: 10b686ddf; -[SCCacheRequestOptions setShouldCacheMediaInMemory:] */

void FUN_10b686dd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b686de0; end: 10b687153; -[SCCachingMediaManager initWithCacheURL:defaultSizeMB:kindName:logger:coreConfigProvider:] */

undefined8 *
FUN_10b686de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_112709b78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
    puVar1[3] = param_4 << 0x14;
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar2);
    puVar1[5] = 0;
    if (puVar1[1] != 0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[1];
      func_0x00010c0f5800(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfacbe0();
      _objc_release(uVar2);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010bf55da0(puVar3);
      }
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b24d0;
    func_0x00010c22b6a0(PTR_PTR_1126b24d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9b40();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    uVar2 = puVar1[2];
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
    _objc_release(param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b687154; end: 10b6871bf;  */

void FUN_10b687154(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110f6d598,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 10b6871c0; end: 10b68738f; -[SCCachingMediaManager requestCachingMediaForEntity:targetSize:requestOptions:queue:cacheMissHandler:resultHandler:] */

void FUN_10b6871c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126e0478;
  _objc_alloc();
  func_0x00010bf6d200(param_6);
  func_0x00010c00b520();
  func_0x00010c1ec180(param_1,param_2,param_6);
  _objc_initWeak(auStack_68,param_3);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  uStack_78 = param_1;
  uStack_70 = param_2;
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar2);
  _objc_retain(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b687390; end: 10b687933;  */

void FUN_10b687390(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(lVar2 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == (undefined *)0x0) {
        func_0x00010befa120(*(undefined8 *)(lVar2 + 0x38));
        puVar6 = PTR_PTR_1126e0480;
        _objc_alloc(PTR_PTR_1126e0480);
        uVar7 = *(undefined8 *)(lVar2 + 0x10);
        func_0x00010c11de00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0xc2000000;
        pcStack_c8 = FUN_10b68796c;
        puStack_c0 = &UNK_110848218;
        _objc_copyWeak(auStack_a8,param_1 + 0x38);
        _objc_retain(puVar4);
        puStack_b8 = puVar4;
        _objc_retain(uVar3);
        uStack_b0 = uVar3;
        func_0x00010c03c640(puVar6);
        func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x30));
        _objc_release(uVar7);
        func_0x00010c1ebc40(*(undefined8 *)(param_1 + 0x20));
        func_0x00010befafa0(puVar6);
        puVar8 = *(undefined **)(lVar2 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          func_0x00010be849a0(lVar2);
          puVar9 = PTR_PTR_1126e0460;
          _objc_alloc(PTR_PTR_1126e0460);
          uVar7 = *(undefined8 *)(lVar2 + 0x68);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          func_0x00010c00ffc0(puVar9);
          _objc_release(uVar7);
          uVar10 = *(undefined8 *)(lVar2 + 0x40);
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bdc3540(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar10);
          _objc_release(uVar7);
          uVar10 = *(undefined8 *)(lVar2 + 0x48);
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bdc3540(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar10);
          _objc_release(uVar7);
        }
        else {
          func_0x00010c196600(puVar8);
          puVar9 = puVar8;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c1179e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_10b6879b4;
        puStack_e8 = &UNK_110847450;
        _objc_retain(puVar5);
        puStack_e0 = puVar5;
        func_0x00010c1341e0(uVar7);
        _objc_release(uVar7);
        _objc_initWeak(auStack_108,puVar6);
        _objc_initWeak(auStack_110,lVar2);
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_10b6879ec;
        puStack_120 = &UNK_1108434b0;
        _objc_copyWeak(auStack_118,auStack_108);
        _objc_copyWeak(auStack_150,auStack_108);
        _objc_copyWeak(auStack_148,auStack_110);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar7);
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        uStack_140 = puVar8 == (undefined *)0x0;
        _objc_retain(uVar10);
        puVar8 = puVar9;
        func_0x00010bfe99a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21d2e0(puVar6);
        _objc_release(puVar8);
        _objc_release(uVar10);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_148);
        _objc_destroyWeak(auStack_150);
        _objc_destroyWeak(auStack_118);
        _objc_destroyWeak(auStack_110);
        _objc_destroyWeak(auStack_108);
        _objc_release(puStack_e0);
        _objc_release(puVar9);
        _objc_release(uStack_b0);
        _objc_release(puStack_b8);
        _objc_destroyWeak(auStack_a8);
      }
      else {
        func_0x00010c1ebc40(*(undefined8 *)(param_1 + 0x20));
        func_0x00010befafa0(puVar6);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c1179e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_10b687934;
        puStack_88 = &UNK_110847450;
        _objc_retain(puVar5);
        puStack_80 = puVar5;
        func_0x00010c1341e0(uVar7);
        _objc_release(uVar7);
        _objc_release(puStack_80);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
    else {
      func_0x00010c0f8020(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b687934; end: 10b68796b;  */

void FUN_10b687934(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6d558);
  return;
}



/* Entry: 10b68796c; end: 10b6879b3;  */

void FUN_10b68796c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b6879b4; end: 10b6879eb;  */

void FUN_10b6879b4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f6d578);
  return;
}



/* Entry: 10b6879ec; end: 10b687a17;  */

void FUN_10b6879ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f84a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b687a18; end: 10b687b13;  */

void FUN_10b687a18(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f8020();
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c22e7a0();
    if (((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
      uVar4 = *(undefined8 *)(lVar1 + 0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bdc3540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(lVar1 + 0x48);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bdc3540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar4);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b687b14; end: 10b687b9f; -[SCCachingMediaManager _purgeCacheIfNecessary] */

void FUN_10b687b14(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf529e0();
  if (299 < uVar1) {
    lVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0dfd40(uVar2,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf4b900(uVar1,param_2,uVar2);
      if ((uVar1 & 1) == 0) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x40),param_2,uVar2);
        func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x48),param_2,lVar3);
      }
      _objc_release(uVar2);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x96);
  }
  return;
}



/* Entry: 10b687ba0; end: 10b687cdf; -[SCCachingMediaManager totalSizeOfCacheFilesWithQueue:handler:] */

void FUN_10b687ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b687c58;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b687ce0; end: 10b687cef;  */

void FUN_10b687ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b687cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b687cf0; end: 10b687d47; -[SCCachingMediaManager _totalSizeInBytes] */

undefined * FUN_10b687cf0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b24e8;
  lVar1 = *(long *)(param_1 + 8);
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf278a0(puVar2,param_2,lVar1,0);
    _objc_release(lVar1);
    puVar3 = puVar2;
  }
  return puVar3;
}


