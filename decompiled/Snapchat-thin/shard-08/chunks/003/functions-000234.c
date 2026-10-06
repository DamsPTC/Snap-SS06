/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10600fce0; end: 10600fce7; -[SCScanCategoryMetadata hash] */

void FUN_10600fce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10600fce8; end: 10600fd77; -[SCScanCategoryMetadata isEqual:] */

long FUN_10600fce8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10600fd5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10600fd5c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10600fd5c;
    }
  }
  lVar3 = 1;
LAB_10600fd5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10600fd78; end: 10600fd7f; -[SCScanCategoryMetadata categoryId] */

undefined8 FUN_10600fd78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10600fd80; end: 10600fd8b; -[SCScanCategoryMetadata .cxx_destruct] */

void FUN_10600fd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10600fd8c; end: 10600fe13; -[SCObservable snapcodeMetadataObservable] */

void FUN_10600fd8c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bfb2660(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10600fe14; end: 10600ff07;  */

void FUN_10600fe14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10600ff08;
  uStack_30 = 0x10600ff18;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = puVar1;
  func_0x00010c0c0140(param_2);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10600ff08; end: 10600ff1f;  */

void FUN_10600ff08(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10600ff20; end: 10600ff67;  */

void FUN_10600ff20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10600ff68; end: 10600ffef; -[SCObservable barcodeResultObservable] */

void FUN_10600ff68(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_retain();
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bfb2660(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10600fff0; end: 1060100e3;  */

void FUN_10600fff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10600ff08;
  uStack_30 = 0x10600ff18;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = puVar1;
  func_0x00010c0c0140(param_2);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060100e4; end: 10601012b;  */

void FUN_1060100e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10601012c; end: 1060101f7; -[SCScanResultSectionRowViewModel qrCodes] */

void FUN_10601012c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1060101f8;
  uStack_30 = 0x106010208;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106010210;
  puStack_60 = &UNK_110907b58;
  puStack_48 = puStack_58;
  func_0x00010c0bf780(param_1,param_2,&puStack_78,0,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060101f8; end: 10601020f;  */

void FUN_1060101f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106010210; end: 106010247;  */

void FUN_106010210(long param_1,undefined8 param_2)

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



/* Entry: 106010248; end: 106010313; -[SCScanResultSectionRowViewModel snapcodes] */

void FUN_106010248(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1060101f8;
  uStack_30 = 0x106010208;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106010314;
  puStack_60 = &UNK_110907b88;
  puStack_48 = puStack_58;
  func_0x00010c0bf780(param_1,param_2,0,&puStack_78,0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106010314; end: 10601034b;  */

void FUN_106010314(long param_1,undefined8 param_2)

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



/* Entry: 10601034c; end: 106010417; -[SCScanResultSectionRowViewModel lensCollection] */

void FUN_10601034c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1060101f8;
  uStack_30 = 0x106010208;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106010418;
  puStack_60 = &UNK_110907bb8;
  puStack_48 = puStack_58;
  func_0x00010c0bf780(param_1,param_2,0,0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106010418; end: 10601044f;  */

void FUN_106010418(long param_1,undefined8 param_2)

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



/* Entry: 106010450; end: 1060104ab; -[SCScanResultViewModel qrCodeUseCase] */

undefined8 FUN_106010450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1564c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c11cdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ff20();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1060104ac; end: 1060105a3; -[SCScanResultViewModel qrCodeTextPrefix] */

void FUN_1060104ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c1564c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c11cdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28ff20();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 == 2) {
    func_0x00010c1564c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c11cdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf67420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010c11f420(lVar1,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
    if (lVar2 == 0x7fffffffffffffff) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1;
      func_0x00010c260c20(lVar1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  else {
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1060105a4; end: 10601069f; -[SCScanResultViewModel resultType] */

undefined8 FUN_1060105a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010c1564c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf780();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1060106a0; end: 106010727;  */

void FUN_1060106a0(long param_1,ulong param_2)

{
  func_0x00010c28ff20();
  if (param_2 < 3) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined8 *)(&UNK_10ddd38e8 + param_2 * 8);
  }
  return;
}



/* Entry: 106010728; end: 10601073b;  */

void FUN_106010728(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x18;
  return;
}



/* Entry: 10601073c; end: 106010797; -[SCScanResultViewModel snapcodeUseCase] */

undefined8 FUN_10601073c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1564c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c245340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ff20();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106010798; end: 1060107fb; -[SCScanResultViewModel useCaseId] */

void FUN_106010798(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1564c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c245340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060107fc; end: 10601085f; -[SCScanResultViewModel decodedUuid] */

void FUN_1060107fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1564c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c245340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf67460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106010860; end: 1060108c3; -[SCScanResultViewModel scannableId] */

void FUN_106010860(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1564c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c245340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14f740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060108c4; end: 106010937; -[SCScanPassthroughView hitTest:withEvent:] */

void FUN_1060108c4(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126ef0c0;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106010938; end: 1060109ab; -[SCSnapcodeAdPreviewActionHandler initWithAdPreviewDisplayer:] */

undefined1 * FUN_106010938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef0c8;
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



/* Entry: 1060109ac; end: 106010a93; -[SCSnapcodeAdPreviewActionHandler handleActionForSnapcodeMetadata:modalUIContainer:] */

bool FUN_1060109ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 9) {
    puVar2 = PTR_PTR_1126aef20;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_48);
    lVar1 = lStack_48;
    _objc_release(lVar3);
    bVar4 = lVar1 == 0 && puVar2 != (undefined *)0x0;
    if (lVar1 == 0 && puVar2 != (undefined *)0x0) {
      func_0x00010be04140(param_1,param_2,puVar2,param_4);
    }
    _objc_release(puVar2);
  }
  else {
    bVar4 = false;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 106010a94; end: 106010b63; -[SCSnapcodeAdPreviewActionHandler _displayAdWithAdCreativePreview:uiContainer:] */

void FUN_106010a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c27dd80();
  iVar1 = (int)uVar4;
  if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (iVar1 == 2) {
      uVar4 = 2;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf96e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf85320(uVar2,param_2,uVar3,uVar4,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106010b64; end: 106010b6f; -[SCSnapcodeAdPreviewActionHandler .cxx_destruct] */

void FUN_106010b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106010b70; end: 106010c0f; -[SCSnapcodeMessageActionHandler initWithResourceDownloader:] */

undefined1 * FUN_106010b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef0d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1aa0(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106010c10; end: 106010d37; -[SCSnapcodeMessageActionHandler handleActionForSnapcodeMetadata:modalUIContainer:] */

bool FUN_106010c10(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c28ff20();
  if (lVar2 == 5) {
    puVar3 = PTR_PTR_1126b31f0;
    _objc_alloc(PTR_PTR_1126b31f0);
    lVar4 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c008360(puVar3,param_2,lVar4,&lStack_58);
    lVar2 = lStack_58;
    _objc_retain(lStack_58);
    _objc_release(lVar4);
    bVar1 = lVar2 == 0;
    if (lVar2 == 0) {
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = param_4;
      _objc_release(uVar5);
      puVar6 = puVar3;
      func_0x00010c0cb140(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2c400(param_1,param_2,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106010d38; end: 106010e4f; -[SCSnapcodeMessageActionHandler _handleMessage:] */

void FUN_106010d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be373c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0b6da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106010e50; end: 106010ea3;  */

void FUN_106010e50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106010ea4; end: 106011083; -[SCSnapcodeMessageActionHandler _presentDialogWithMessage:image:] */

void FUN_106010ea4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_68;
  _objc_copyWeak(auStack_70,puVar5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c420(puVar3);
  _objc_release(puVar4);
  func_0x00010bdd0840(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2d280();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106011084; end: 1060110cb;  */

void FUN_106011084(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060110cc; end: 1060110db; -[SCSnapcodeMessageActionHandler _handleOkay:] */

void FUN_1060110cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1060110dc; end: 1060110e3; -[SCSnapcodeMessageActionHandler _attachUI:] */

void FUN_1060110dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_attachUI__1125a0c08);
  return;
}



/* Entry: 1060110e4; end: 1060110ef; -[SCSnapcodeMessageActionHandler _detachUI] */

void FUN_1060110e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1060110f0; end: 10601124b; -[SCSnapcodeMessageActionHandler _imageFutureWithImageURL:] */

void FUN_1060110f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar4,param_2,param_1,0x17);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10601124c;
  puStack_50 = &UNK_11084d858;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf88c20(uVar3,param_2,puVar2,puVar4,&puStack_68);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10601124c; end: 106011257;  */

void FUN_10601124c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106011258; end: 10601125f; -[SCSnapcodeMessageActionHandler mainThreadPerformer] */

undefined8 FUN_106011258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106011260; end: 10601128f; -[SCSnapcodeMessageActionHandler setMainThreadPerformer:] */

void FUN_106011260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106011290; end: 1060112cb; -[SCSnapcodeMessageActionHandler .cxx_destruct] */

void FUN_106011290(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060112cc; end: 10601133f; -[SCSnapcodeAddFriendActionHandler initWithFriendProfileScopeExposer:] */

undefined1 * FUN_1060112cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef0d8;
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



/* Entry: 106011340; end: 106011447; -[SCSnapcodeAddFriendActionHandler handleActionForSnapcodeMetadata:modalUIContainer:] */

bool FUN_106011340(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c28ff20();
  if (lVar2 == 1) {
    puVar3 = PTR_PTR_1126b4bb8;
    _objc_alloc(PTR_PTR_1126b4bb8);
    lVar4 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c008360(puVar3,param_2,lVar4,&lStack_58);
    lVar2 = lStack_58;
    _objc_release(lVar4);
    bVar1 = lVar2 == 0;
    if (lVar2 == 0) {
      puVar5 = puVar3;
      func_0x00010c2923e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb9340(param_1,param_2,puVar5,param_4);
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106011448; end: 106011537; -[SCSnapcodeAddFriendActionHandler _showFriendProfile:modalUIContainer:] */

void FUN_106011448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c015a00();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106011538; end: 10601157f; -[SCSnapcodeAddFriendActionHandler friendProfileDidDismiss:] */

void FUN_106011538(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106011580; end: 106011583; -[SCSnapcodeAddFriendActionHandler friendProfileWillDismiss:] */

void FUN_106011580(void)

{
  return;
}



/* Entry: 106011584; end: 10601158f; -[SCSnapcodeAddFriendActionHandler .cxx_destruct] */

void FUN_106011584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106011590; end: 10601168f; -[SCSnapcodeActionHandlerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106011590(long param_1)

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
  puVar2 = PTR_PTR_1126c7108;
  _objc_alloc(PTR_PTR_1126c7108);
  func_0x00010bff0120();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273cdfc));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106011690; end: 1060116cf;  */

void FUN_106011690(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060116d0; end: 10601196f; -[SCSnapcodeActionHandlerServicesEntryPoint _actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060116d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7110;
  _objc_alloc();
  func_0x00010c0158a0();
  puVar2 = PTR_PTR_1126c7118;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11273ce08;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11273ce0c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062d20();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126c7120;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11273ce10;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f880();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_initWeak(auStack_90,param_1);
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c7128;
  _objc_alloc();
  func_0x00010bff1ae0();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  puStack_80 = puVar2;
  puStack_78 = puVar7;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c7130;
  _objc_alloc(PTR_PTR_1126c7130);
  func_0x00010bff0760();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume(puVar1);
    puVar1 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    puVar11 = puVar1;
    func_0x00010bdc56a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106011970; end: 1060119af;  */

void FUN_106011970(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc56a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060119b0; end: 106011abf; -[SCSnapcodeActionHandlerServicesEntryPoint _adPreviewDisplayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060119b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126aef18;
  _objc_alloc(PTR_PTR_1126aef18);
  lVar2 = param_1 + _DAT_11273ce14;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bef2620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273ce18;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273ce1c);
  lVar6 = param_1 + _DAT_11273ce20;
  _objc_loadWeakRetained(lVar6);
  param_1 = param_1 + _DAT_11273ce24;
  _objc_loadWeakRetained(param_1);
  func_0x00010bff1440(puVar1,param_2,lVar3,lVar5,uVar7,lVar6,param_1,0);
  _objc_release(param_1);
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



/* Entry: 106011ac0; end: 106011b7f; -[SCSnapcodeActionHandlerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106011ac0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ce1c,0);
  _objc_storeStrong(param_1 + _DAT_11273ce04,0);
  _objc_storeStrong(param_1 + _DAT_11273ce00,0);
  _objc_storeStrong(param_1 + _DAT_11273cdfc,0);
  _objc_destroyWeak(param_1 + _DAT_11273ce20);
  _objc_destroyWeak(param_1 + _DAT_11273ce24);
  _objc_destroyWeak(param_1 + _DAT_11273ce18);
  _objc_destroyWeak(param_1 + _DAT_11273ce14);
  _objc_destroyWeak(param_1 + _DAT_11273ce10);
  _objc_destroyWeak(param_1 + _DAT_11273ce0c);
  _objc_destroyWeak(param_1 + _DAT_11273ce08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273ce28);
  return;
}



/* Entry: 106011b80; end: 106011bf3; -[SCSnapcodeCompoundActionHandler initWithActionHandlers:] */

undefined1 * FUN_106011b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef0e0;
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



/* Entry: 106011bf4; end: 106011d2f; -[SCSnapcodeCompoundActionHandler handleActionForSnapcodeMetadata:modalUIContainer:] */

long FUN_106011bf4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar3 = *(ulong *)(lVar6 * 8);
        func_0x00010bfd0080();
        if ((uVar3 & 1) != 0) {
          lVar6 = 1;
          goto LAB_106011cdc;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar6 = 0;
  }
LAB_106011cdc:
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
    return param_3;
  }
  return lVar6;
}



/* Entry: 106011d30; end: 106011d3b; -[SCSnapcodeCompoundActionHandler .cxx_destruct] */

void FUN_106011d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106011d3c; end: 106011e33; -[SCSnapcodeURLActionHandler initWithWebBrowsingScopeExposer:deepLinkHandler:circumstanceEngine:] */

undefined1 *
FUN_106011d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ef0e8;
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
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1aa0(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106011e34; end: 106011feb; -[SCSnapcodeURLActionHandler handleActionForSnapcodeMetadata:modalUIContainer:] */

bool FUN_106011e34(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c28ff20();
  if (lVar2 == 3) {
    puVar3 = PTR_PTR_1126bc180;
    _objc_alloc();
    lVar4 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c008360();
    lVar2 = lStack_58;
    _objc_retain(lStack_58);
    _objc_release(lVar4);
    bVar1 = lVar2 == 0;
    if (lVar2 == 0) {
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = param_4;
      _objc_release(uVar5);
      _objc_initWeak(auStack_60,param_1);
      func_0x00010c0b6da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_68,auStack_60);
      _objc_retain(puVar3);
      func_0x00010c0f7fc0(param_1);
      _objc_release(param_1);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_60);
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106011fec; end: 10601203f;  */

void FUN_106011fec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d7a0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106012040; end: 1060122c7; -[SCSnapcodeURLActionHandler _openURL:] */

void FUN_106012040(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be6d0c0(param_1,param_2,param_3);
  if ((uVar1 & 1) != 0) goto LAB_1060122a4;
  puVar2 = PTR_PTR_1126c6ea0;
  func_0x00010c28f5a0(PTR_PTR_1126c6ea0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    if ((int)puVar4 == 0) {
      puVar4 = puVar2;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      if ((int)puVar5 == 0) goto LAB_10601229c;
    }
    else {
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar4 = puVar3;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1060122c8;
    puStack_60 = &UNK_110842308;
    _objc_retain(puVar2);
    uVar1 = param_1;
    puStack_58 = puVar2;
    func_0x00010c0b6da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar4,param_2,&puStack_78,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c6ed0;
    _objc_alloc(PTR_PTR_1126c6ed0);
    func_0x00010c00a4c0();
    puVar6 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    puVar7 = puVar6;
    func_0x00010bf22ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puStack_58);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
LAB_10601229c:
  _objc_release(puVar2);
LAB_1060122a4:
  _objc_release(param_3);
  return;
}



/* Entry: 1060122c8; end: 1060122df;  */

void FUN_1060122c8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1060122e0; end: 1060123c7; -[SCSnapcodeURLActionHandler _openDeeplinkURLIfNecessary:] */

undefined * FUN_1060122e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) || (puVar5 = puVar1, func_0x00010b7a39ec(), (int)puVar5 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b1068;
    _objc_alloc();
    func_0x00010c057c40();
    puVar5 = puVar2;
    func_0x00010c073580();
    if ((int)puVar5 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd1bc0(uVar3,param_2,puVar4,0,10,0);
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 1060123c8; end: 10601240f; -[SCSnapcodeURLActionHandler webBrowserDidDismiss:] */

void FUN_1060123c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106012410; end: 10601250f; -[SCSnapcodeURLActionHandler urlInterceptorWillExternalDeeplink:] */

void FUN_106012410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0b6da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106012510; end: 10601253b;  */

void FUN_106012510(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10601253c; end: 10601254f; -[SCSnapcodeURLActionHandler _detachUI] */

void FUN_10601253c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 106012550; end: 106012557; -[SCSnapcodeURLActionHandler mainThreadPerformer] */

undefined8 FUN_106012550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106012558; end: 106012587; -[SCSnapcodeURLActionHandler setMainThreadPerformer:] */

void FUN_106012558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106012588; end: 1060125db; -[SCSnapcodeURLActionHandler .cxx_destruct] */

void FUN_106012588(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060125dc; end: 1060125e3; -[SCAdPreviewDisplayerViewController pageViewName] */

undefined8 FUN_1060125dc(void)

{
  return 0xf8;
}



/* Entry: 1060125e4; end: 10601272f; -[SCAdPreviewDisplayer initWithAdCreativeFetcher:notificationPool:adOperaSessionScopeExposer:adOperaSessionScopeServices:audioSessionServices:delegate:] */

undefined1 *
FUN_1060125e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126ef0f0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106012730; end: 106012733; -[SCAdPreviewDisplayer end] */

void FUN_106012730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachUI_11255c768);
  return;
}



/* Entry: 106012734; end: 1060128b7; -[SCAdPreviewDisplayer displayAdCreativePreviewWithEntityId:previewType:uiContainer:] */

void FUN_106012734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1060128b8;
    puStack_68 = &UNK_110907c48;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010bfa4a60(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1060128b8; end: 106012947;  */

void FUN_1060128b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106012948; end: 106012aaf; -[SCAdPreviewDisplayer _handleAdResponseFetchSuccess:] */

void FUN_106012948(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar7 = &puStack_50;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c7138;
    _objc_alloc_init();
    func_0x00010c1c8b80();
    func_0x00010bdd0840(param_1);
    ppuVar4 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bf22960();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
    _objc_release(ppuVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar7);
  ppuVar4 = ppuVar7;
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == (undefined **)0x0) {
    _objc_release(ppuVar4);
  }
  puVar5 = PTR_PTR_1126afde0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar6);
  puVar2 = param_3 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    param_3 = param_3 + 0x30;
    _objc_loadWeakRetained(param_3);
    func_0x00010bef4180();
    _objc_release(param_3);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar7[7] != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(ppuVar7[7],PTR_s_attachUI__1125a0c08);
    return;
  }
  return;
}



/* Entry: 106012ab0; end: 106012c2b; -[SCAdPreviewDisplayer _handleAdResponseFetchFailureWithError:] */

void FUN_106012ab0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126afde0;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar4);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar5 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bef4180();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_3 + 0x38),PTR_s_attachUI__1125a0c08);
    return;
  }
  return;
}



/* Entry: 106012c2c; end: 106012c3b; -[SCAdPreviewDisplayer _attachUI:] */

void FUN_106012c2c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x38),PTR_s_attachUI__1125a0c08);
    return;
  }
  return;
}



/* Entry: 106012c3c; end: 106012c4f; -[SCAdPreviewDisplayer _detachUI] */

void FUN_106012c3c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x38),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 106012c50; end: 106012d7b; -[SCAdPreviewDisplayer operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_106012c50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf55480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d3da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106012d7c;
  puStack_50 = &UNK_110849810;
  uVar5 = uVar2;
  lStack_48 = param_1;
  func_0x00010bf47660(uVar2,param_2,uVar3,uVar1,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 106012d7c; end: 106012d7f;  */

void FUN_106012d7c(void)

{
  return;
}



/* Entry: 106012d80; end: 106012d83; -[SCAdPreviewDisplayer operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_106012d80(void)

{
  return;
}



/* Entry: 106012d84; end: 106012d87; -[SCAdPreviewDisplayer operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_106012d84(void)

{
  return;
}



/* Entry: 106012d88; end: 106012d8b; -[SCAdPreviewDisplayer operaPresenterDidCancelDismissing:] */

void FUN_106012d88(void)

{
  return;
}



/* Entry: 106012d8c; end: 106012d8f; -[SCAdPreviewDisplayer operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_106012d8c(void)

{
  return;
}



/* Entry: 106012d90; end: 106012d93; -[SCAdPreviewDisplayer operaPresenterDidFailToPresent:] */

void FUN_106012d90(void)

{
  return;
}



/* Entry: 106012d94; end: 106012d97; -[SCAdPreviewDisplayer operaPresenterDidFinishDismissing:] */

void FUN_106012d94(void)

{
  return;
}



/* Entry: 106012d98; end: 106012e7f; -[SCAdPreviewDisplayer operaPresenterDidTearDown:] */

void FUN_106012d98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bdfb720(param_1);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0d3da0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar3);
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bef41a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106012e80; end: 106012e83; -[SCAdPreviewDisplayer operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_106012e80(void)

{
  return;
}



/* Entry: 106012e84; end: 106012e87; -[SCAdPreviewDisplayer operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_106012e84(void)

{
  return;
}



/* Entry: 106012e88; end: 106012efb; -[SCAdPreviewDisplayer .cxx_destruct] */

void FUN_106012e88(long param_1)

{
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



/* Entry: 106012efc; end: 106012fbf; -[SCScanCardsURLInterceptor initWithDelegate:circumstanceEngine:deepLinkHandling:] */

undefined1 *
FUN_106012efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ef0f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 106012fc0; end: 1060130fb; -[SCScanCardsURLInterceptor interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

undefined8
FUN_106012fc0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
             ulong param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000008);
  if (((param_6 & 1) == 0) &&
     (uVar5 = param_3, func_0x000108b8fb14(param_3,*(undefined8 *)(param_1 + 8)), (int)uVar5 != 0))
  {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c28f680();
    _objc_release(lVar1);
    func_0x00010be6d7a0(param_1);
LAB_1060130bc:
    uVar5 = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18);
    if (uVar2 != 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c082da0();
        _objc_release(uVar5);
        _objc_release(uVar2);
        uVar5 = 0;
        if ((param_4 == 0) || ((int)uVar4 == 0)) goto LAB_1060130d0;
        param_1 = param_1 + 0x10;
        _objc_loadWeakRetained(param_1);
        func_0x00010c28f6a0();
        _objc_release(param_1);
        goto LAB_1060130bc;
      }
      _objc_release(uVar2);
    }
    uVar5 = 0;
  }
LAB_1060130d0:
  _objc_release(in_stack_00000008);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1060130fc; end: 10601315b; -[SCScanCardsURLInterceptor _openURL:] */

void FUN_1060130fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_3);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10601315c; end: 106013173; -[SCScanCardsURLInterceptor interceptorDelegate] */

void FUN_10601315c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106013174; end: 10601317f; -[SCScanCardsURLInterceptor setInterceptorDelegate:] */

void FUN_106013174(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}


