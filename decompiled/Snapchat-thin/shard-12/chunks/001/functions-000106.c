/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108de7f04; end: 108de7f57; +[SCGalleryPasscodeAssetGenerator sharedGenerator] */

void FUN_108de7f04(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372e9c8 != -1) {
    func_0x000107c27d9c(0x11372e9c8,&PTR___NSConcreteGlobalBlock_110ac57a8);
  }
  uVar1 = uRam000000011372e9c0;
  _objc_retain(uRam000000011372e9c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108de7f58; end: 108de7f83;  */

void FUN_108de7f58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dbf20;
  _objc_alloc_init();
  uVar1 = puRam000000011372e9c0;
  puRam000000011372e9c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108de7f84; end: 108de802f; -[SCGalleryPasscodeAssetGenerator init] */

undefined1 * FUN_108de7f84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe8c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108de8030; end: 108de8173; -[SCGalleryPasscodeAssetGenerator strokedCircleImageWithSize:] */

void FUN_108de8030(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110ef86b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_2 + 8);
  func_0x00010c0e00e0(puVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _UIGraphicsBeginImageContextWithOptions(param_1,param_1,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8c0();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0x3fe0000000000000,0x3fe0000000000000,param_1 + -1.0,param_1 + -1.0,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(0x3ff0000000000000);
    puVar2 = puVar3;
    func_0x00010c25dba0(puVar3);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar2,puVar1);
    _objc_retain(puVar2);
    _objc_release(puVar3);
  }
  else {
    _objc_retain();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108de8174; end: 108de829f; -[SCGalleryPasscodeAssetGenerator filledCircleImageWithSize:] */

void FUN_108de8174(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110ef86d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_2 + 8);
  func_0x00010c0e00e0(puVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _UIGraphicsBeginImageContextWithOptions(param_1,param_1,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,param_1,param_1,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad4a0();
    _objc_release(puVar2);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar2,puVar1);
  }
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108de82a0; end: 108de83df; -[SCGalleryPasscodeAssetGenerator strokedBackImageWithSize:] */

void FUN_108de82a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110ef86f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c0e00e0(lVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _UIGraphicsBeginImageContextWithOptions(param_1,param_1,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8c0();
    _objc_release(puVar3);
    lVar2 = param_2;
    func_0x00010bdd20e0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dba0();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bdd20c0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dba0();
    _objc_release(lVar2);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,lVar2,puVar1);
  }
  _objc_retain(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108de83e0; end: 108de853f; -[SCGalleryPasscodeAssetGenerator filledBackImageWithSize:] */

void FUN_108de83e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110ef8718);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c0e00e0(lVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _UIGraphicsBeginImageContextWithOptions(param_1,param_1,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8c0();
    _objc_release(puVar3);
    lVar2 = param_2;
    func_0x00010bdd20e0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad4a0();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bdd20c0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dba0();
    _objc_release(lVar2);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,lVar2,puVar1);
  }
  _objc_retain(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108de8540; end: 108de8547; -[SCGalleryPasscodeAssetGenerator _didReceiveMemoryWarning:] */

void FUN_108de8540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108de8548; end: 108de8633; -[SCGalleryPasscodeAssetGenerator _backOutterPathWithSize:] */

void FUN_108de8548(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_70 [48];
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = param_1 / 5.0;
  func_0x00010c0d18c0(param_1 / -2.5,0);
  dVar3 = -dVar2;
  func_0x00010bef98c0(dVar3,dVar3,puVar1);
  func_0x00010bef98c0(dVar2,dVar3,puVar1);
  func_0x00010bef98c0(dVar2,dVar2,puVar1);
  func_0x00010bef98c0(dVar3,dVar2,puVar1);
  func_0x00010bf3dc80(puVar1);
  _CGAffineTransformMakeTranslation(auStack_70,param_1 * 0.5,param_1 * 0.5);
  func_0x00010bf08a40(puVar1,param_3,auStack_70);
  func_0x00010c1bdd00(0x3ff0000000000000,puVar1);
  func_0x00010c1bdca0(puVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108de8634; end: 108de86f7; -[SCGalleryPasscodeAssetGenerator _backInnerPathWithSize:] */

void FUN_108de8634(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_70 [48];
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = param_1 / 12.0;
  dVar3 = -dVar2;
  func_0x00010c0d18c0(dVar3,dVar3);
  func_0x00010bef98c0(dVar2,dVar2,puVar1);
  func_0x00010c0d18c0(dVar2,dVar3,puVar1);
  func_0x00010bef98c0(dVar3,dVar2,puVar1);
  _CGAffineTransformMakeTranslation(auStack_70,param_1 * 0.5,param_1 * 0.5);
  func_0x00010bf08a40(puVar1,param_3,auStack_70);
  func_0x00010c1bdd00(0x4000000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108de86f8; end: 108de8703; -[SCGalleryPasscodeAssetGenerator .cxx_destruct] */

void FUN_108de86f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de8704; end: 108de890b; -[SCGalleryPasscodeIndicatorView initWithIndicatorSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108de8704(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fe8d0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(0,0,param_1,param_1,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dbf20;
    func_0x00010c22ba00(PTR_PTR_1126dbf20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25ddc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfad720(param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11277bb9c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11277bba0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 108de890c; end: 108de89db;  */

void FUN_108de890c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108de89dc; end: 108de8a87; -[SCGalleryPasscodeIndicatorView setSelected:] */

void FUN_108de89dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c07d660();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126fe8d0;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598,param_3);
    func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  return;
}



/* Entry: 108de8a88; end: 108de8aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de8a88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bba0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108de8ab0; end: 108de8aef; -[SCGalleryPasscodeIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de8ab0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277bba0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bb9c,0);
  return;
}



/* Entry: 108de8af0; end: 108de8f9f; -[SCGalleryPasscodeNumericKeyView initWithKeySize:keyValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108de8af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_4);
  puStack_a0 = PTR_PTR_1126fe8d8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_2;
  _objc_msgSendSuper2(0,0,param_1,param_1,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar7 = param_4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bba4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277bba4) = uVar7;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126dbf20;
    func_0x00010c22ba00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25ddc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfad720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar8 = (long)_DAT_11277bba8;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar7);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar8 = (long)_DAT_11277bbac;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar7);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar8));
    puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar9,uVar10,uVar11);
    lVar8 = (long)_DAT_11277bbb0;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar7);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar8));
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4036000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar9,uVar10,uVar11);
    lVar8 = (long)_DAT_11277bbb4;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar7);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar8));
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4036000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar8));
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108de8fa0; end: 108de917b;  */

void FUN_108de8fa0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108de917c; end: 108de9203; -[SCGalleryPasscodeNumericKeyView setKeyHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de917c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(byte *)(param_1 + _DAT_11277bbb8) != param_3) {
    *(char *)(param_1 + _DAT_11277bbb8) = (char)param_3;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108de9204;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 108de9204; end: 108de9277;  */

/* WARNING: Possible PIC construction at 0x000108de9248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108de924c) */
/* WARNING: Removing unreachable block (ram,0x000108de9258) */
/* WARNING: Removing unreachable block (ram,0x000108de925c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de9204(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bbb8) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bbac),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108de9278; end: 108de9287; -[SCGalleryPasscodeNumericKeyView keyHighlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108de9278(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277bbb8);
}



/* Entry: 108de9288; end: 108de9297; -[SCGalleryPasscodeNumericKeyView keyValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108de9288(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bba4);
}



/* Entry: 108de9298; end: 108de9307; -[SCGalleryPasscodeNumericKeyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de9298(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277bba4,0);
  _objc_storeStrong(param_1 + _DAT_11277bbb4,0);
  _objc_storeStrong(param_1 + _DAT_11277bbb0,0);
  _objc_storeStrong(param_1 + _DAT_11277bbac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bba8,0);
  return;
}



/* Entry: 108de9308; end: 108de950f; -[SCGalleryPasscodBackKeyView initWithKeySize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108de9308(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fe8e0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(0,0,param_1,param_1,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dbf20;
    func_0x00010c22ba00(PTR_PTR_1126dbf20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25dda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfad6e0(param_1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11277bbbc;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11277bbc0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 108de9510; end: 108de95df;  */

void FUN_108de9510(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108de95e0; end: 108de9667; -[SCGalleryPasscodBackKeyView setKeyHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de95e0(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(byte *)(param_1 + _DAT_11277bbc4) != param_3) {
    *(char *)(param_1 + _DAT_11277bbc4) = (char)param_3;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108de9668;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,
                        &puStack_38,0);
  }
  return;
}



/* Entry: 108de9668; end: 108de9693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de9668(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bbc4) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bbc0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108de9694; end: 108de96a3; -[SCGalleryPasscodBackKeyView keyHighlighted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108de9694(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277bbc4);
}



/* Entry: 108de96a4; end: 108de96e3; -[SCGalleryPasscodBackKeyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de96a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277bbc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bbbc,0);
  return;
}



/* Entry: 108de96e4; end: 108de9d8b; -[SCGalleryPasscodeView initWithConfiguration:soundEffects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108de96e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a0 = PTR_PTR_1126fe8e8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11277bbc8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_3;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11277bbcc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c0f4da0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c25d900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bbd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277bbd0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bbd4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277bbd4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    lVar11 = (long)_DAT_11277bbd8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0f4da0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)((long)puVar1 + lVar9);
    func_0x00010c0f4da0();
    if (lVar8 != 0) {
      uVar10 = 0;
      do {
        puVar4 = PTR_PTR_1126dbf28;
        _objc_alloc(PTR_PTR_1126dbf28);
        func_0x00010bfed520(*(undefined8 *)((long)puVar1 + lVar9));
        func_0x00010c01d940(puVar4);
        func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar11));
        _objc_retain(puVar1);
        func_0x00010c0bbfc0(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar1);
        _objc_release(puVar4);
        uVar10 = uVar10 + 1;
        uVar5 = *(ulong *)((long)puVar1 + lVar9);
        func_0x00010c0f4da0();
      } while (uVar10 < uVar5);
    }
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bbdc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277bbdc) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    lVar8 = (long)_DAT_11277bbe0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar4;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    do {
      puVar7 = PTR_PTR_1126dbf30;
      if (uVar10 < 9) {
        _objc_alloc(PTR_PTR_1126dbf30);
        func_0x00010c086a60(*(undefined8 *)((long)puVar1 + lVar9));
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c020fc0(uVar12,puVar7);
        _objc_release(puVar6);
        func_0x00010befbd60(puVar7);
        func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
        _objc_retain(puVar1);
        func_0x00010c0bbfc0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
      }
      else if (uVar10 == 9) {
        _objc_alloc(PTR_PTR_1126dbf30);
        func_0x00010c086a60(*(undefined8 *)((long)puVar1 + lVar9));
        func_0x00010c020fc0(puVar7);
        func_0x00010befbd60();
        func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
        _objc_retain(puVar1);
        func_0x00010c0bbfc0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
      }
      else {
        puVar7 = PTR_PTR_1126dbf38;
        _objc_alloc(PTR_PTR_1126dbf38);
        func_0x00010c086a60(*(undefined8 *)((long)puVar1 + lVar9));
        func_0x00010c020fa0(puVar7);
        func_0x00010befbd60();
        func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
        _objc_retain(puVar1);
        func_0x00010c0bbfc0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
      }
      _objc_release(puVar1);
      _objc_release(puVar7);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0xb);
    puVar7 = puVar4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bbe4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277bbe4) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar8 = (long)_DAT_11277bbe8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar7;
    _objc_release(uVar2);
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c18b5a0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c18b5c0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1c8340(0,*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010bef9040(puVar1);
    puVar7 = PTR__OBJC_CLASS___UIDynamicAnimator_1126dbf40;
    _objc_alloc();
    func_0x00010c03d960();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bbec);
    *(undefined **)((long)puVar1 + (long)_DAT_11277bbec) = puVar7;
    _objc_release(uVar2);
    func_0x00010c160fc0(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108de9d8c; end: 108de9fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de9d8c(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = (long)_DAT_11277bbc8;
  func_0x00010bfed520(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6));
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(ulong *)(*(long *)(param_2 + 0x20) + lVar6);
  func_0x00010c0f4da0(uVar4);
  func_0x00010bfed520(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6));
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + lVar6);
  dVar7 = param_1;
  func_0x00010c0f4da0(lVar5);
  func_0x00010bfed540(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6));
  func_0x00010c0df720(dVar7 * (double)(lVar5 - 1) + param_1 * (double)uVar4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108de9fac; end: 108deaafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de9fac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = (long)_DAT_11277bbc8;
  func_0x00010bfed520(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar7 = *(double *)(param_1 + 0x28);
  dVar9 = (double)NEON_ucvtf(dVar7);
  func_0x00010bfed520(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  dVar8 = dVar7;
  func_0x00010bfed540(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  func_0x00010c0df720((dVar7 + dVar8) * dVar9,puVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108deaafc; end: 108deab87; -[SCGalleryPasscodeView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108deaafc(double param_1,long param_2)

{
  double dVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar2 = (long)_DAT_11277bbc8;
  func_0x00010c086a60(*(undefined8 *)(param_2 + lVar2));
  dVar3 = param_1;
  func_0x00010c086820(*(undefined8 *)(param_2 + lVar2));
  dVar3 = dVar3 + dVar3;
  dVar5 = dVar3 + param_1 * 3.0;
  func_0x00010bfed520(*(undefined8 *)(param_2 + lVar2));
  dVar4 = dVar3;
  func_0x00010c247fc0(*(undefined8 *)(param_2 + lVar2));
  dVar3 = dVar3 + dVar4;
  func_0x00010c086a60(*(undefined8 *)(param_2 + lVar2));
  dVar1 = dVar4 * 4.0;
  func_0x00010c086b60(*(undefined8 *)(param_2 + lVar2));
  auVar6._8_8_ = dVar3 + dVar1 + dVar4 * 3.0;
  auVar6._0_8_ = dVar5;
  return auVar6;
}



/* Entry: 108deab88; end: 108deaba7; -[SCGalleryPasscodeView passcode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deab88(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + _DAT_11277bbd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108deaba8; end: 108deabeb; -[SCGalleryPasscodeView reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deaba8(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11277bbf0) & 1) != 0) {
    return;
  }
  func_0x00010bfec280(*(undefined8 *)(param_1 + _DAT_11277bbd4));
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 108deabec; end: 108deadc3; -[SCGalleryPasscodeView resetForFailedPasscode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deabec(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if ((param_1[_DAT_11277bbf0] & 1) == 0) {
    param_1[_DAT_11277bbf0] = 1;
    func_0x00010bfec280(*(undefined8 *)(param_1 + _DAT_11277bbd4));
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277bbcc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299140();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIAttachmentBehavior_1126dbf48;
    _objc_alloc();
    lVar5 = (long)_DAT_11277bbd8;
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf345e0(uVar1);
    func_0x00010c01fc60(puVar2,param_2,uVar1);
    func_0x00010c1893a0(0x3fc999999999999a);
    func_0x00010c19f8a0(0x4020000000000000,puVar2);
    lVar6 = (long)_DAT_11277bbec;
    func_0x00010bef7180(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
    puVar3 = PTR__OBJC_CLASS___UIPushBehavior_1126dbf50;
    _objc_alloc();
    uStack_50 = *(undefined8 *)(param_1 + lVar5);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0204c0(puVar3,param_2,puVar4,1);
    _objc_release(puVar4);
    func_0x00010c1c18e0(0x4008000000000000,puVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bef7180(uVar1,param_2,puVar3);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fe0(0x3fe0000000000000);
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12ab40(*(undefined8 *)(*(long *)(puVar2 + 0x20) + (long)_DAT_11277bbec));
  lVar5 = (long)_DAT_11277bbd8;
  func_0x00010c1cbe20(*(undefined8 *)(*(long *)(puVar2 + 0x20) + lVar5));
  func_0x00010c08cdc0(*(undefined8 *)(*(long *)(puVar2 + 0x20) + lVar5));
  func_0x00010be92140(*(undefined8 *)(puVar2 + 0x20));
  *(undefined1 *)(*(long *)(puVar2 + 0x20) + (long)_DAT_11277bbf0) = 0;
  return;
}



/* Entry: 108deadc4; end: 108deae2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deadc4(long param_1)

{
  long lVar1;
  
  func_0x00010c12ab40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bbec));
  lVar1 = (long)_DAT_11277bbd8;
  func_0x00010c1cbe20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  func_0x00010c08cdc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  func_0x00010be92140(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bbf0) = 0;
  return;
}



/* Entry: 108deae30; end: 108deae37; -[SCGalleryPasscodeView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_108deae30(void)

{
  return 1;
}



/* Entry: 108deae38; end: 108deaf8b; -[SCGalleryPasscodeView _reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deae38(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + _DAT_11277bbdc);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar11 = *plStack_100;
    do {
      lVar12 = 0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c1fadc0(*(undefined8 *)(lStack_108 + lVar12 * 8),param_2,0);
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277bbc8);
  func_0x00010c0f4da0(uVar3);
  func_0x00010c25d900(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277bbd0);
  *(undefined **)(param_1 + _DAT_11277bbd0) = puVar4;
  _objc_release(uVar3);
  lVar8 = 1;
  func_0x00010c21e900();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar8);
  puVar9 = *(undefined1 **)(param_1 + _DAT_11277bbe0);
  func_0x00010c09ef00(lVar8,param_2,puVar9);
  lVar2 = lVar8;
  func_0x00010c252440();
  if (lVar2 - 3U < 2) {
    lVar2 = (long)_DAT_11277bbf4;
    if (*(long *)(param_1 + lVar2) == 0) goto LAB_108deb13c;
    puVar10 = (undefined8 *)0x0;
    func_0x00010c1b6c00(*(long *)(param_1 + lVar2),param_2,0);
    lVar11 = *(long *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  else {
    if (lVar2 == 2) {
      lVar2 = (long)_DAT_11277bbf4;
      puVar5 = *(undefined1 **)(param_1 + lVar2);
      if (puVar5 != (undefined1 *)0x0) {
        func_0x00010bfb68e0();
        _CGRectContainsPoint();
        func_0x00010c1b6c00(*(undefined8 *)(param_1 + lVar2),param_2,puVar5);
        puVar9 = puVar5;
      }
      goto LAB_108deb13c;
    }
    if (lVar2 != 1) goto LAB_108deb13c;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    lVar11 = *(long *)(param_1 + _DAT_11277bbe4);
    _objc_retain(lVar11);
    lVar2 = lVar11;
    func_0x00010bf52a60(lVar11,param_2,&uStack_240,auStack_1f8,0x10);
    if (lVar2 != 0) {
      lVar12 = *plStack_230;
      do {
        lVar14 = 0;
        do {
          if (*plStack_230 != lVar12) {
            _objc_enumerationMutation(lVar11);
          }
          uVar13 = *(undefined8 *)(lStack_238 + lVar14 * 8);
          uVar3 = uVar13;
          func_0x00010bfb68e0();
          iVar1 = (int)uVar3;
          _CGRectContainsPoint();
          if (iVar1 != 0) {
            lVar2 = (long)_DAT_11277bbf4;
            _objc_retain(uVar13);
            uVar3 = *(undefined8 *)(param_1 + lVar2);
            *(undefined8 *)(param_1 + lVar2) = uVar13;
            _objc_release(uVar3);
            puVar10 = (undefined8 *)0x1;
            func_0x00010c1b6c00(*(undefined8 *)(param_1 + lVar2),param_2,1);
            goto LAB_108deb138;
          }
          lVar14 = lVar14 + 1;
        } while (lVar2 != lVar14);
        lVar2 = lVar11;
        puVar10 = &uStack_240;
        func_0x00010bf52a60(lVar11,param_2,&uStack_240,auStack_1f8,0x10);
      } while (lVar2 != 0);
    }
  }
LAB_108deb138:
  _objc_release(lVar11);
  puVar9 = (undefined1 *)puVar10;
LAB_108deb13c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    lVar2 = (long)_DAT_11277bbd0;
    uVar6 = *(ulong *)(lVar8 + lVar2);
    func_0x00010c08fa60();
    lVar11 = (long)_DAT_11277bbc8;
    uVar7 = *(ulong *)(lVar8 + lVar11);
    func_0x00010c0f4da0();
    if (uVar6 < uVar7) {
      uVar3 = *(undefined8 *)(lVar8 + lVar2);
      puVar5 = puVar9;
      func_0x00010c086b20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf070e0(uVar3,param_2,puVar5);
      _objc_release(puVar5);
      lVar12 = *(long *)(lVar8 + lVar2);
      func_0x00010c08fa60(lVar12);
      func_0x00010bea4a60(lVar8,param_2,lVar12 + -1,1);
      lVar12 = lVar8 + _DAT_11277bbf8;
      _objc_loadWeakRetained(lVar12);
      func_0x00010bfbd280();
      _objc_release(lVar12);
      lVar2 = *(long *)(lVar8 + lVar2);
      func_0x00010c08fa60();
      lVar11 = *(long *)(lVar8 + lVar11);
      func_0x00010c0f4da0();
      if (lVar2 == lVar11) {
        func_0x00010c21e900(lVar8,param_2,0);
        uVar3 = *(undefined8 *)(lVar8 + _DAT_11277bbd4);
        func_0x00010c296d80();
        func_0x000107c30a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f7fe0(0x3fd3333333333333);
        _objc_release(uVar3);
      }
    }
    _objc_release(puVar9);
    return;
  }
  return;
}



/* Entry: 108deaf8c; end: 108deb17f; -[SCGalleryPasscodeView _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deaf8c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = *(undefined1 **)(param_1 + _DAT_11277bbe0);
  func_0x00010c09ef00(param_3,param_2,puVar5);
  lVar10 = param_3;
  func_0x00010c252440();
  if (lVar10 - 3U < 2) {
    lVar10 = (long)_DAT_11277bbf4;
    if (*(long *)(param_1 + lVar10) == 0) goto LAB_108deb13c;
    puVar6 = (undefined8 *)0x0;
    func_0x00010c1b6c00(*(long *)(param_1 + lVar10),param_2,0);
    lVar7 = *(long *)(param_1 + lVar10);
    *(undefined8 *)(param_1 + lVar10) = 0;
  }
  else {
    if (lVar10 == 2) {
      lVar10 = (long)_DAT_11277bbf4;
      puVar2 = *(undefined1 **)(param_1 + lVar10);
      if (puVar2 != (undefined1 *)0x0) {
        func_0x00010bfb68e0();
        _CGRectContainsPoint();
        func_0x00010c1b6c00(*(undefined8 *)(param_1 + lVar10),param_2,puVar2);
        puVar5 = puVar2;
      }
      goto LAB_108deb13c;
    }
    if (lVar10 != 1) goto LAB_108deb13c;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = *(long *)(param_1 + _DAT_11277bbe4);
    _objc_retain(lVar7);
    lVar10 = lVar7;
    func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar10 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar7);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          uVar8 = uVar9;
          func_0x00010bfb68e0();
          iVar1 = (int)uVar8;
          _CGRectContainsPoint();
          if (iVar1 != 0) {
            lVar10 = (long)_DAT_11277bbf4;
            _objc_retain(uVar9);
            uVar8 = *(undefined8 *)(param_1 + lVar10);
            *(undefined8 *)(param_1 + lVar10) = uVar9;
            _objc_release(uVar8);
            puVar6 = (undefined8 *)0x1;
            func_0x00010c1b6c00(*(undefined8 *)(param_1 + lVar10),param_2,1);
            goto LAB_108deb138;
          }
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
        lVar10 = lVar7;
        puVar6 = &uStack_130;
        func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar10 != 0);
    }
  }
LAB_108deb138:
  _objc_release(lVar7);
  puVar5 = (undefined1 *)puVar6;
LAB_108deb13c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    lVar10 = (long)_DAT_11277bbd0;
    uVar3 = *(ulong *)(param_3 + lVar10);
    func_0x00010c08fa60();
    lVar7 = (long)_DAT_11277bbc8;
    uVar4 = *(ulong *)(param_3 + lVar7);
    func_0x00010c0f4da0();
    if (uVar3 < uVar4) {
      uVar8 = *(undefined8 *)(param_3 + lVar10);
      puVar2 = puVar5;
      func_0x00010c086b20(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf070e0(uVar8,param_2,puVar2);
      _objc_release(puVar2);
      lVar11 = *(long *)(param_3 + lVar10);
      func_0x00010c08fa60(lVar11);
      func_0x00010bea4a60(param_3,param_2,lVar11 + -1,1);
      lVar11 = param_3 + _DAT_11277bbf8;
      _objc_loadWeakRetained(lVar11);
      func_0x00010bfbd280();
      _objc_release(lVar11);
      lVar10 = *(long *)(param_3 + lVar10);
      func_0x00010c08fa60();
      lVar7 = *(long *)(param_3 + lVar7);
      func_0x00010c0f4da0();
      if (lVar10 == lVar7) {
        func_0x00010c21e900(param_3,param_2,0);
        uVar8 = *(undefined8 *)(param_3 + _DAT_11277bbd4);
        func_0x00010c296d80();
        func_0x000107c30a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f7fe0(0x3fd3333333333333);
        _objc_release(uVar8);
      }
    }
    _objc_release(puVar5);
    return;
  }
  return;
}



/* Entry: 108deb180; end: 108deb2f3; -[SCGalleryPasscodeView _didPressNumericKeyView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deb180(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277bbd0;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c08fa60();
  lVar7 = (long)_DAT_11277bbc8;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c0f4da0();
  if (uVar1 < uVar2) {
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    uVar4 = param_3;
    func_0x00010c086b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(uVar5,param_2,uVar4);
    _objc_release(uVar4);
    lVar3 = *(long *)(param_1 + lVar6);
    func_0x00010c08fa60(lVar3);
    func_0x00010bea4a60(param_1,param_2,lVar3 + -1,1);
    lVar3 = param_1 + _DAT_11277bbf8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfbd280();
    _objc_release(lVar3);
    lVar6 = *(long *)(param_1 + lVar6);
    func_0x00010c08fa60();
    lVar7 = *(long *)(param_1 + lVar7);
    func_0x00010c0f4da0();
    if (lVar6 == lVar7) {
      func_0x00010c21e900(param_1,param_2,0);
      uVar4 = *(undefined8 *)(param_1 + _DAT_11277bbd4);
      func_0x00010c296d80();
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fe0(0x3fd3333333333333);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108deb2f4; end: 108deb35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deb2f4(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bbd4);
  func_0x00010c296d80();
  if (iVar1 == *(int *)(param_1 + 0x28)) {
    lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11277bbf8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfbd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108deb360; end: 108deb3ef; -[SCGalleryPasscodeView _didPressBackKeyView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deb360(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277bbd0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c08fa60(lVar1);
    func_0x00010bea4a60(param_1,param_2,lVar1 + -1,0);
    lVar2 = *(long *)(param_1 + lVar2);
    lVar1 = lVar2;
    func_0x00010c08fa60(lVar2);
    func_0x00010bf6b860(lVar2,param_2,lVar1 + -1,1);
    param_1 = param_1 + _DAT_11277bbf8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfbd280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108deb3f0; end: 108deb433; -[SCGalleryPasscodeView _setIndicatorViewAtIndex:selected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deb3f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277bbdc);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108deb434; end: 108deb453; -[SCGalleryPasscodeView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deb434(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277bbf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108deb454; end: 108deb467; -[SCGalleryPasscodeView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deb454(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277bbf8,param_3);
  return;
}



/* Entry: 108deb468; end: 108deb543; -[SCGalleryPasscodeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108deb468(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277bbf8);
  _objc_storeStrong(param_1 + _DAT_11277bbcc,0);
  _objc_storeStrong(param_1 + _DAT_11277bbec,0);
  _objc_storeStrong(param_1 + _DAT_11277bbf4,0);
  _objc_storeStrong(param_1 + _DAT_11277bbe8,0);
  _objc_storeStrong(param_1 + _DAT_11277bbe4,0);
  _objc_storeStrong(param_1 + _DAT_11277bbe0,0);
  _objc_storeStrong(param_1 + _DAT_11277bbdc,0);
  _objc_storeStrong(param_1 + _DAT_11277bbd8,0);
  _objc_storeStrong(param_1 + _DAT_11277bbd4,0);
  _objc_storeStrong(param_1 + _DAT_11277bbd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bbc8,0);
  return;
}



/* Entry: 108deb544; end: 108deb937; -[SCGalleryPassphraseView initWithFrame:effects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108deb544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_c0 = PTR_PTR_1126fe8f0;
  puVar1 = &uStack_c8;
  puVar10 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_c8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c640(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITextField_1126af060;
    _objc_alloc();
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    lVar11 = (long)_DAT_11277bbfc;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar12);
    uStack_b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar3;
    func_0x00010c14c5c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    func_0x00010c16b720(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar3);
    func_0x00010c18b280(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c1f9a00(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c17c7a0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c16d0a0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c16d0c0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c207da0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c1b6ec0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c1edbe0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010befbb60(puVar1);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(uVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIDynamicAnimator_1126dbf40;
    _objc_alloc();
    func_0x00010c03d960();
    uVar12 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bc00);
    *(undefined **)((long)puVar1 + (long)_DAT_11277bc00) = puVar3;
    _objc_release(uVar12);
    lVar11 = (long)_DAT_11277bc04;
    _objc_retain(param_7);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_7;
    _objc_release(uVar12);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar1 = puVar10;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)puVar9[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar1 = puVar10;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)puVar10[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 108deb938; end: 108debc1f;  */

void FUN_108deb938(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108debc20; end: 108debc33; -[SCGalleryPassphraseView intrinsicContentSize] */

undefined1  [16] FUN_108debc20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4040000000000000;
  auVar1._0_8_ = 0x4071800000000000;
  return auVar1;
}



/* Entry: 108debc34; end: 108debc6f; -[SCGalleryPassphraseView textFieldDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debc34(long param_1)

{
  param_1 = param_1 + _DAT_11277bc08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbd2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108debc70; end: 108debcab; -[SCGalleryPassphraseView textFieldDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debc70(long param_1)

{
  param_1 = param_1 + _DAT_11277bc08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbd300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108debcac; end: 108debdc3; -[SCGalleryPassphraseView textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108debcac(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + _DAT_11277bc0c) & 1) == 0) {
    param_1 = param_1 + _DAT_11277bc08;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bfbd340();
    _objc_release(param_1);
    if ((int)lVar2 == 0) {
      bVar1 = true;
      goto LAB_108debd9c;
    }
    uVar3 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if ((ulong)(param_5 + param_4) <= uVar4) {
      uVar3 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08fa60();
      lVar2 = param_6;
      func_0x00010c08fa60(param_6);
      bVar1 = (uVar4 - param_5) + lVar2 < 0x21;
      _objc_release(uVar3);
      goto LAB_108debd9c;
    }
  }
  bVar1 = false;
LAB_108debd9c:
  _objc_release(param_6);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108debdc4; end: 108debe17; -[SCGalleryPassphraseView textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108debdc4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11277bc0c) & 1) == 0) {
    param_1 = param_1 + _DAT_11277bc08;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfbd320();
    _objc_release(param_1);
  }
  return 0;
}



/* Entry: 108debe18; end: 108debe27; -[SCGalleryPassphraseView passphrase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debe18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277bbfc),PTR_s_text_1126787e8);
  return;
}



/* Entry: 108debe28; end: 108debe4b; -[SCGalleryPassphraseView startEditingPassphrase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debe28(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11277bc0c) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277bbfc),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 108debe4c; end: 108debe6f; -[SCGalleryPassphraseView stopEditingPassphrase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debe4c(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11277bc0c) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277bbfc),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 108debe70; end: 108debe7f; -[SCGalleryPassphraseView isEditingPassphrase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debe70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277bbfc),PTR_s_isFirstResponder_1125fa620);
  return;
}



/* Entry: 108debe80; end: 108debef3; -[SCGalleryPassphraseView setDoneKeyEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debe80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277bbfc);
  func_0x00010c065920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110ef8798);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108debef4; end: 108dec05b; -[SCGalleryPassphraseView setPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108debef4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c16b680(*(undefined8 *)(param_1 + _DAT_11277bbfc));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d720(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c680();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    func_0x00010c16b680(*(undefined8 *)(param_1 + _DAT_11277bbfc));
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1f9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11277bbfc),PTR_s_setSecureTextEntry__11265c0a8);
  return;
}



/* Entry: 108dec05c; end: 108dec06b; -[SCGalleryPassphraseView setPassphraseHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec05c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277bbfc),PTR_s_setSecureTextEntry__11265c0a8);
  return;
}



/* Entry: 108dec06c; end: 108dec097; -[SCGalleryPassphraseView reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec06c(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11277bc0c) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277bbfc),PTR_s_setText__1126625f0,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 108dec098; end: 108dec293; -[SCGalleryPassphraseView resetForFailedPassphrase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec098(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  if ((param_1[_DAT_11277bc0c] & 1) == 0) {
    param_1[_DAT_11277bc0c] = 1;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11277bbfc;
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277bc04);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299140();
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIAttachmentBehavior_1126dbf48;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf345e0(uVar2);
    func_0x00010c01fc60(puVar1,param_2,uVar2);
    func_0x00010c1893a0(0x3fc999999999999a);
    func_0x00010c19f8a0(0x4020000000000000,puVar1);
    lVar6 = (long)_DAT_11277bc00;
    func_0x00010bef7180(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
    puVar3 = PTR__OBJC_CLASS___UIPushBehavior_1126dbf50;
    _objc_alloc();
    uStack_50 = *(undefined8 *)(param_1 + lVar5);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0204c0(puVar3,param_2,puVar4,1);
    _objc_release(puVar4);
    func_0x00010c1c18e0(0x4008000000000000,puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bef7180(uVar2,param_2,puVar3);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fe0(0x3fe0000000000000);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12ab40(*(undefined8 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_11277bc00));
  lVar5 = (long)_DAT_11277bbfc;
  func_0x00010c212f20(*(undefined8 *)(*(long *)(puVar1 + 0x20) + lVar5),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(*(long *)(puVar1 + 0x20) + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1cbe20(*(undefined8 *)(*(long *)(puVar1 + 0x20) + lVar5));
  func_0x00010c08cdc0(*(undefined8 *)(*(long *)(puVar1 + 0x20) + lVar5));
  *(undefined1 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_11277bc0c) = 0;
  return;
}



/* Entry: 108dec294; end: 108dec33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec294(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010c12ab40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bc00));
  lVar2 = (long)_DAT_11277bbfc;
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cbe20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c08cdc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bc0c) = 0;
  return;
}



/* Entry: 108dec33c; end: 108dec377; -[SCGalleryPassphraseView _textFieldDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec33c(long param_1)

{
  param_1 = param_1 + _DAT_11277bc08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbd2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dec378; end: 108dec397; -[SCGalleryPassphraseView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec378(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277bc08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dec398; end: 108dec3ab; -[SCGalleryPassphraseView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec398(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277bc08,param_3);
  return;
}



/* Entry: 108dec3ac; end: 108dec407; -[SCGalleryPassphraseView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dec3ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277bc08);
  _objc_storeStrong(param_1 + _DAT_11277bc04,0);
  _objc_storeStrong(param_1 + _DAT_11277bc00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bbfc,0);
  return;
}



/* Entry: 108dec408; end: 108dec6cb; +[SCGalleryPrivateGalleryViewConfigurator configureHeaderView:titleLabel:title:backButton:target:action:] */

void FUN_108dec408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010bf3ae40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c0bbfc0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ac57c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e22358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(param_6,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(param_6,param_2,param_7,param_8,0x40);
  _objc_release(param_7);
  func_0x00010befbb60(param_3,param_2,param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108dec77c;
  puStack_70 = &UNK_1108471b0;
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x00010c0bbfc0(param_6,param_2,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(param_4,param_2,param_5);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_4,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(param_4,param_2,1);
  func_0x00010c165e20(param_4,param_2,1);
  func_0x00010c16f5a0(param_4,param_2,1);
  func_0x00010c1c83a0(0x3fe4000000000000,param_4);
  func_0x00010c213040(param_4,param_2,1);
  func_0x00010befbb60(param_3,param_2,param_4);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108dec8a0;
  puStack_a0 = &UNK_11084fc58;
  uStack_98 = param_3;
  uStack_90 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0bbfc0(param_4,param_2,&puStack_b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108dec6cc; end: 108dec77b;  */

void FUN_108dec6cc(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar3 = param_1;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c0df720(param_1 - dVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108dec77c; end: 108dec89f;  */

void FUN_108dec77c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dec8a0; end: 108deca83;  */

void FUN_108dec8a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108deca84; end: 108dece23; +[SCGalleryPrivateGalleryViewConfigurator configureHeaderView:titleLabel:title:backButton:backButtonTarget:backButtonAction:questionMarkButton:questionMarkButtonTarget:questionMarkButtonAction:] */

void FUN_108deca84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010bf3ae40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c0bbfc0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ac57e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e22358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(param_6,param_2,puVar1,0);
  _objc_release(puVar1);
  func_0x00010befbd60(param_6,param_2,param_7,param_8,0x40);
  _objc_release(param_7);
  func_0x00010befbb60(param_3,param_2,param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108deced4;
  puStack_88 = &UNK_1108471b0;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010c0bbfc0(param_6,param_2,&puStack_a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ef6658);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(param_9,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010befbd60(param_9,param_2,param_10,param_11,0x40);
  _objc_release(param_10);
  func_0x00010befbb60(param_3,param_2,param_9);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x108decff8;
  puStack_b0 = &UNK_1108471b0;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  func_0x00010c0bbfc0(param_9,param_2,&puStack_c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(param_4,param_2,param_5);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_4,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_4,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(param_4,param_2,1);
  func_0x00010c165e20(param_4,param_2,1);
  func_0x00010c16f5a0(param_4,param_2,1);
  func_0x00010c1c83a0(0x3fe4000000000000,param_4);
  func_0x00010c213040(param_4,param_2,1);
  func_0x00010befbb60(param_3,param_2,param_4);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_108ded11c;
  puStack_e8 = &UNK_11084fc88;
  uStack_d0 = param_9;
  uStack_e0 = param_3;
  uStack_d8 = param_6;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0bbfc0(param_4,param_2,&puStack_100);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108dece24; end: 108deced3;  */

void FUN_108dece24(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar3 = param_1;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c0df720(param_1 - dVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108deced4; end: 108ded11b;  */

void FUN_108deced4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ded11c; end: 108ded3eb;  */

void FUN_108ded11c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ded3ec; end: 108ded4f7; +[SCGalleryPrivateGalleryViewConfigurator configureBoldTitleLabel:title:] */

void FUN_108ded3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3ae40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c212f20(param_3,param_2,param_4);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x403a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(param_3,param_2,1);
  func_0x00010c165e20(param_3,param_2,1);
  func_0x00010c1c83a0(0x3fe0000000000000,param_3);
  func_0x00010c1cfce0(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ded4f8; end: 108ded60f; +[SCGalleryPrivateGalleryViewConfigurator configureInfoTextLabel:infoText:] */

void FUN_108ded4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3ae40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c212f20(param_3,param_2,param_4);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(param_3,param_2,1);
  func_0x00010c165e20(param_3,param_2,1);
  func_0x00010c16f5a0(param_3,param_2,1);
  func_0x00010c1c83a0(0x3fe0000000000000,param_3);
  func_0x00010c1cfce0(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ded610; end: 108ded853; +[SCGalleryPrivateGalleryViewConfigurator configureAcknowledgeView:dotView:label:text:target:action:] */

void FUN_108ded610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf3ae40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  _objc_release(param_7);
  func_0x00010bef9040(param_3,param_2,puVar2);
  func_0x00010befbb60(param_3,param_2,param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108ded854;
  puStack_78 = &UNK_11084fc58;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  func_0x00010c0bbfc0(param_4,param_2,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c212f20(param_5,param_2,param_6);
  _objc_release(param_6);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_5,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_5,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1cfce0(param_5,param_2,0);
  func_0x00010befbb60(param_3,param_2,param_5);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x108ded9f4;
  puStack_a8 = &UNK_11084fc58;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bbfc0(param_5,param_2,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ded854; end: 108dedbb7;  */

void FUN_108ded854(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4010000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c0699c0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c2971c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dedbb8; end: 108dede2f; +[SCGalleryPrivateGalleryViewConfigurator configureSwitchPassphraseView:dotView:label:text:target:action:] */

void FUN_108dedbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0bbfc0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ac5808);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  _objc_release(param_7);
  func_0x00010bef9040(param_3,param_2,puVar2);
  func_0x00010befbb60(param_3,param_2,param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108dede90;
  puStack_70 = &UNK_1108471b0;
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x00010c0bbfc0(param_4,param_2,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_5,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c212f20(param_5,param_2,param_6);
  _objc_release(param_6);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_5,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_5,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c213040(param_5,param_2,1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a89a0(param_5,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010befbb60(param_3,param_2,param_5);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108dedf30;
  puStack_a0 = &UNK_11084fc58;
  uStack_98 = param_4;
  uStack_90 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0bbfc0(param_5,param_2,&puStack_b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108dede30; end: 108dede8f;  */

void FUN_108dede30(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dede90; end: 108dedf2f;  */

void FUN_108dede90(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dedf30; end: 108dee0a7;  */

void FUN_108dedf30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108dee0a8; end: 108dee127; -[SCGallerySelectableDotView initWithFrame:] */

undefined1 * FUN_108dee0a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe8f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c182220(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108dee128; end: 108dee31b; -[SCGallerySelectableDotView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dee128(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar3 = param_1;
  _CGRectGetMidX();
  dVar4 = param_1;
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  dVar8 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  if (param_1 <= dVar8) {
    dVar8 = param_1;
  }
  dVar7 = dVar8 + -1.0;
  dVar5 = dVar3;
  dVar6 = dVar4;
  dVar9 = dVar7;
  func_0x00010b690910(dVar3,dVar4,dVar7,dVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x84);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(dVar5,dVar6,dVar7,dVar9,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0x3ff0000000000000);
  func_0x00010bfad4a0(puVar1);
  func_0x00010c25dba0(puVar1);
  if (*(char *)(param_5 + _DAT_11277bc10) == '\x01') {
    dVar8 = dVar8 * 0.6;
    dVar5 = dVar8;
    func_0x00010b690910(dVar3,dVar4,dVar8,dVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bbe0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(dVar3,dVar4,dVar8,dVar5,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad4a0();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108dee31c; end: 108dee327; -[SCGallerySelectableDotView intrinsicContentSize] */

undefined1  [16] FUN_108dee31c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4031000000000000;
  auVar1._0_8_ = 0x4031000000000000;
  return auVar1;
}



/* Entry: 108dee328; end: 108dee347; -[SCGallerySelectableDotView setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dee328(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11277bc10) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277bc10) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 108dee348; end: 108dee357; -[SCGallerySelectableDotView selected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108dee348(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277bc10);
}



/* Entry: 108dee358; end: 108dee4d3; -[SCKeyServiceListenerAnnouncer description] */

void FUN_108dee358(long param_1)

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
  
  FUN_108dee4d4(&plStack_60,param_1 + 0x48);
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



/* Entry: 108dee4d4; end: 108dee533;  */

void FUN_108dee4d4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108dee534; end: 108dee7df; -[SCKeyServiceListenerAnnouncer addListener:] */

undefined8 FUN_108dee534(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110ac5838;
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
    FUN_108dee7e0(plVar10,auStack_90);
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
    FUN_108dee920(puVar8,&plStack_a0);
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
LAB_108dee6e8:
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
      goto LAB_108dee708;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_108dee7e0(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_108dee7e0(plVar10,auStack_78);
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
    FUN_108dee920(puVar8,&plStack_88);
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
      goto LAB_108dee6e8;
    }
  }
  uVar9 = 1;
LAB_108dee708:
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



/* Entry: 108dee7e0; end: 108dee91f;  */

void FUN_108dee7e0(long *param_1,long *param_2)

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
      FUN_108deecf4();
LAB_108dee91c:
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
      if (uVar7 >> 0x3d != 0) goto LAB_108dee91c;
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



/* Entry: 108dee920; end: 108dee967;  */

void FUN_108dee920(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108dee968; end: 108deeb97; -[SCKeyServiceListenerAnnouncer removeListener:] */

void FUN_108dee968(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_108deeb1c;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108dee9d0;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_108dee920(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108deeb1c;
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
LAB_108dee9d0:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110ac5838;
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
          FUN_108dee7e0(plVar9,lVar7);
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
    FUN_108dee920(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_108deeb1c;
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
LAB_108deeb1c:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108deeb98; end: 108deecab; -[SCKeyServiceListenerAnnouncer keyService:didChangeAllowedFutureAuthorizationDate:errorCode:] */

void FUN_108deeb98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_108dee4d4(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c086a00();
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



/* Entry: 108deecac; end: 108deecd3; -[SCKeyServiceListenerAnnouncer .cxx_destruct] */

void FUN_108deecac(long param_1)

{
  FUN_108deed08(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108deecd4; end: 108deecf3; -[SCKeyServiceListenerAnnouncer .cxx_construct] */

void FUN_108deecd4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 108deecf4; end: 108deed07;  */

undefined * FUN_108deecf4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 108deed08; end: 108deed5f;  */

long FUN_108deed08(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}


