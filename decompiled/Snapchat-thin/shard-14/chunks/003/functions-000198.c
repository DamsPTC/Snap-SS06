/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0b24f0; end: 10b0b257b;  */

byte FUN_10b0b24f0(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c09faa0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  lVar2 = *(long *)(param_1 + 0x20);
  bVar1 = *(byte *)(lVar2 + 0x20);
  if ((bVar1 & 1) == 0) {
    lVar2 = *(long *)(lVar2 + 0x10);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    *(long *)(*(long *)(param_1 + 0x20) + 0x18) = lVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
    _objc_release(uVar3);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 1;
    lVar2 = *(long *)(param_1 + 0x20);
  }
  func_0x00010c280b40(*(undefined8 *)(lVar2 + 8));
  return bVar1 ^ 1;
}



/* Entry: 10b0b257c; end: 10b0b2583; -[ObjcLazy providerType] */

undefined8 FUN_10b0b257c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0b2584; end: 10b0b258b; -[ObjcLazy setProviderType:] */

void FUN_10b0b2584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b0b258c; end: 10b0b25d3; -[ObjcLazy .cxx_destruct] */

void FUN_10b0b258c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b25d4; end: 10b0b2613;  */

void FUN_10b0b25d4(ulong param_1,undefined8 param_2)

{
  if (param_1 < 0xb) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,(&PTR_PTR_110cb8158)[param_1]);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0b2614; end: 10b0b268f;  */

void FUN_10b0b2614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126df8f8;
  _objc_opt_class(PTR_PTR_1126df8f8);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f5d478,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0b2690; end: 10b0b2703; -[SCStoriesDebugViewerImpl initWithLogViewer:] */

undefined1 * FUN_10b0b2690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127057d8;
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



/* Entry: 10b0b2704; end: 10b0b2963; -[SCStoriesDebugViewerImpl appendPrefetchStoryInfo:] */

void FUN_10b0b2704(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar7 = PTR_PTR_1126ca858;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca858;
  func_0x00010c259cc0(PTR_PTR_1126ca858);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c08fa60();
  puVar2 = puVar7;
  if (uVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126ca858;
  func_0x00010c108020(PTR_PTR_1126ca858);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar7);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  puVar7 = PTR_PTR_1126ca860;
  func_0x00010bf13c20(PTR_PTR_1126ca860);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)uVar4 == 0) {
    puVar7 = PTR_PTR_1126ca860;
    func_0x00010bfb5340(PTR_PTR_1126ca860);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2bee40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c0ec920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  func_0x00010bf06d60(uVar6);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b2964; end: 10b0b2b53; -[SCStoriesDebugViewerImpl appendStoryMediaLoadState:] */

void FUN_10b0b2964(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126df900;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126df900;
  func_0x00010c259cc0(PTR_PTR_1126df900);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c08fa60();
  puVar3 = puVar2;
  if (uVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126df900;
  func_0x00010c076b80(PTR_PTR_1126df900);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((uVar5 & 1) == 0) {
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfce1e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf06d60(uVar7);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b2b54; end: 10b0b2b97; -[SCStoriesDebugViewerImpl isDebugViewerEnabled] */

undefined8 FUN_10b0b2b54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b8a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b0b2b98; end: 10b0b2ba3; -[SCStoriesDebugViewerImpl .cxx_destruct] */

void FUN_10b0b2b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b2ba4; end: 10b0b2c73; -[SCLensUnlockerMock setLensMetadata:] */

void FUN_10b0b2ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bfeea60();
  _objc_release(param_3);
  func_0x00010c1ec620(puVar1);
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c1c8a80(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b2c74; end: 10b0b2d43; -[SCLensUnlockerMock setLensData:] */

void FUN_10b0b2c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bfeea60();
  _objc_release(param_3);
  func_0x00010c1ec620(puVar1);
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c1c8a80(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b2d44; end: 10b0b2d73; -[SCLensUnlockerMock setDataStoreWriter:] */

void FUN_10b0b2d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b2d74; end: 10b0b2ed3; -[SCLensUnlockerMock performAction:] */

void FUN_10b0b2d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0be900(param_3);
  if (puStack_48[3] == 1) {
    func_0x00010be64da0(param_1);
  }
  puVar1 = PTR_PTR_1126df908;
  _objc_alloc(PTR_PTR_1126df908);
  func_0x00010c0cf860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024e40(puVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0b2ed4; end: 10b0b2f03;  */

void FUN_10b0b2ed4(long param_1,undefined8 param_2)

{
  func_0x00010beef1e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10b0b2f04; end: 10b0b2f13;  */

void FUN_10b0b2f04(long param_1)

{
  undefined8 in_x5;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_x5;
  return;
}



/* Entry: 10b0b2f14; end: 10b0b3043; -[SCLensUnlockerMock performAction:completion:completionQueue:] */

void FUN_10b0b2f14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0b3044;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_70);
  puVar3 = PTR___dispatch_main_q_11034be20;
  if (param_5 == (undefined *)0x0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
  }
  else {
    _objc_retain(param_5);
    puVar3 = param_5;
  }
  lVar2 = param_3;
  func_0x00010beef1e0();
  if (lVar2 != 2) {
    if (lVar2 == 1) {
      func_0x000107c27d8c(puVar3,ppuVar1);
      func_0x00010be64da0(param_1);
      goto LAB_10b0b2ffc;
    }
    if (lVar2 != 0) goto LAB_10b0b2ffc;
  }
  func_0x000107c27d8c(puVar3,ppuVar1);
LAB_10b0b2ffc:
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b3044; end: 10b0b3113;  */

void FUN_10b0b3044(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0cf860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126df910;
      _objc_alloc(PTR_PTR_1126df910);
      func_0x00010c010760();
      _objc_release(puVar2);
    }
    else {
      puVar3 = PTR_PTR_1126df910;
      _objc_alloc(PTR_PTR_1126df910);
      func_0x00010c022a20();
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b0b3114; end: 10b0b317f; -[SCLensUnlockerMock _notifyMetadataStore] */

void FUN_10b0b3114(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1;
  func_0x00010c0cf860();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284f80(uVar2,param_2,lVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0b3180; end: 10b0b3187; -[SCLensUnlockerMock unlockedLensMetadataObservable] */

undefined8 FUN_10b0b3180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0b3188; end: 10b0b3193; -[SCLensUnlockerMock mockedLens] */

void FUN_10b0b3188(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10b0b3194; end: 10b0b319b; -[SCLensUnlockerMock setMockedLens:] */

void FUN_10b0b3194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b0b319c; end: 10b0b31d7; -[SCLensUnlockerMock .cxx_destruct] */

void FUN_10b0b319c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b31d8; end: 10b0b324b; -[SCLensUnlockerMockUpdaterService initWithLensUnlockerMock:] */

undefined1 * FUN_10b0b31d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127057e0;
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



/* Entry: 10b0b324c; end: 10b0b3253; -[SCLensUnlockerMockUpdaterService lensUnlockerMock] */

undefined8 FUN_10b0b324c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0b3254; end: 10b0b325f; -[SCLensUnlockerMockUpdaterService .cxx_destruct] */

void FUN_10b0b3254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b3260; end: 10b0b32cb; -[SCSocialLensDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_10b0b3260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127057e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b32cc; end: 10b0b33cb; -[SCSocialLensDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_10b0b32cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0f5820(param_3,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c11d6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar3);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010bed14a0(param_1,param_2,uVar3,param_3,param_5);
    }
    else {
      param_1 = 0;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b0b33cc; end: 10b0b33d3; -[SCSocialLensDeepLinkProcessor needsNavigationDelegate] */

undefined8 FUN_10b0b33cc(void)

{
  return 0;
}



/* Entry: 10b0b33d4; end: 10b0b34d3; -[SCSocialLensDeepLinkProcessor _unlockAndActivateLensWithID:deepLinkURL:additionalInfo:] */

undefined8
FUN_10b0b33d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  if (param_5 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
    puVar1 = param_5;
  }
  _objc_release(param_5);
  func_0x00010c1d0640(puVar1,param_2,param_3,&PTR____CFConstantStringClassReference_110e68af8);
  _objc_release(param_3);
  func_0x00010c0d6760(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c10d100(param_1,param_2,1,param_4,puVar2,0);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 10b0b34d4; end: 10b0b34eb; -[SCSocialLensDeepLinkProcessor navigationDelegate] */

void FUN_10b0b34d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0b34ec; end: 10b0b34f7; -[SCSocialLensDeepLinkProcessor setNavigationDelegate:] */

void FUN_10b0b34ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10b0b34f8; end: 10b0b34ff; -[SCSocialLensDeepLinkProcessor .cxx_destruct] */

void FUN_10b0b34f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b0b3500; end: 10b0b3587; +[SCAlertViewActionButtonController lensScannable_removeUnlockedLensActionWithActionHandlerBlock:] */

void FUN_10b0b3500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af180;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010b0b9140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320(puVar2,param_2,uVar1,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010c160fc0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f5d4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0b3588; end: 10b0b35ff; +[SCAlertViewActionButtonController lensScannable_cancelRemovingUnlockedLensActionWithActionHandlerBlock:] */

void FUN_10b0b3588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af180;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010b75e3ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320(puVar2,param_2,uVar1,4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0b3600; end: 10b0b37b3; -[SCAlertViewCoordinator lensScannable_showRemoveUnlockedLensAlertWithCompletion:] */

void FUN_10b0b3600(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af180;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c096940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af180;
    _objc_retain(param_3);
    func_0x00010c096920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_10b0b9110();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010b0b9128();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010b0b37c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),1);
  return;
}



/* Entry: 10b0b37b4; end: 10b0b37d3;  */

void FUN_10b0b37b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0b37c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 10b0b37d4; end: 10b0b38b7; -[SCLensUnlockAction toLegacyUnlockerAction] */

void FUN_10b0b37d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
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
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b0b38b8;
  uStack_30 = 0x10b0b38c8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b0b38d0;
  puStack_60 = &UNK_110cb81b0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b0b3a0c;
  puStack_88 = &UNK_110cb81e0;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0be900(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0b38b8; end: 10b0b38cf;  */

void FUN_10b0b38b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b0b38d0; end: 10b0b3b7b;  */

void FUN_10b0b38d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b1be0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef1e0(param_2);
  func_0x00010c280e20(param_2);
  func_0x00010c247520(param_2);
  uVar3 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0915a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c281320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c024720();
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b0b3b7c; end: 10b0b3d7b; -[SCLensUnlockerAction toUnlockAction] */

void FUN_10b0b3b7c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c0b60c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c14f7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1ab0;
    puVar3 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c281320(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c120080(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf3ee00(puVar2);
    puVar7 = param_1;
    func_0x00010beef1e0(param_1);
    func_0x00010c280dc0(param_1);
    func_0x00010c14f560(puVar1,param_2,puVar3,puVar4,puVar5,(long)(int)puVar6,puVar7,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126b1ab8;
    _objc_alloc(PTR_PTR_1126b1ab8);
    puVar1 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c281320(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010beef1e0(param_1);
    puVar6 = param_1;
    func_0x00010c280e20(param_1);
    func_0x00010c280dc0();
    func_0x00010c024960(puVar2,param_2,puVar1,puVar3,0,puVar4,puVar5,puVar6,param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b1ab0;
    func_0x00010c094620(PTR_PTR_1126b1ab0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0b3d7c; end: 10b0b3dfb; -[SCLensUnlockResult toLegacyUnlockerResult] */

void FUN_10b0b3d7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  uVar2 = param_1;
  func_0x00010c094fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13cde0(param_1);
  func_0x00010c280e20(param_1);
  func_0x00010c022a20(puVar1,param_2,uVar2,uVar3,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0b3dfc; end: 10b0b3f97; -[SCLensUnlockerResult toUnlockResult] */

void FUN_10b0b3dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126df908;
  _objc_alloc(PTR_PTR_1126df908);
  uVar2 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13cde0(param_1);
  func_0x00010c280e20(param_1);
  func_0x00010c024e40(puVar1,param_2,uVar2,uVar3,param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0b3f98; end: 10b0b40df; -[SCEventTrackingLensUnlocker performAction:] */

void FUN_10b0b3f98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0f8040(uVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b0b40e0;
  puStack_78 = &UNK_110cb8218;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puStack_70 = puVar1;
  uStack_68 = param_4;
  lStack_60 = param_2;
  uStack_58 = param_1;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2,param_3,&puStack_90,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0b40e0; end: 10b0b41c7;  */

void FUN_10b0b40e0(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined *)0x0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_2 + 0x20));
    puVar1 = PTR_PTR_1126df910;
    _objc_alloc(PTR_PTR_1126df910);
    func_0x00010c010760();
  }
  else {
    func_0x00010bf43d60();
    puVar1 = param_3;
    func_0x00010c271f00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c271ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _CACurrentMediaTime();
  func_0x00010c0a9800(param_1 - *(double *)(param_2 + 0x38),uVar3);
  func_0x00010c0a7a20(*(undefined8 *)(param_2 + 0x30));
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b41c8; end: 10b0b42ab; -[SCEventTrackingLensUnlocker performAction:completion:completionQueue:] */

void FUN_10b0b41c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b0b42ac;
  puStack_68 = &UNK_110cb8248;
  lStack_60 = param_2;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f8060(uVar1,param_3,param_4,&puStack_80,param_6);
  _objc_release(param_6);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 10b0b42ac; end: 10b0b431f;  */

void FUN_10b0b42ac(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _CACurrentMediaTime();
  func_0x00010c0a9800(param_1 - *(double *)(param_2 + 0x38),uVar1);
  func_0x00010c0a7a20(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b4320; end: 10b0b4523; -[SCEventTrackingLensUnlocker logLensWasUnlockedWithResult:unlockerAction:duration:] */

void FUN_10b0b4320(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010beef1e0(), lVar1 == 1)) {
      lVar1 = param_5;
      func_0x00010c280dc0(param_5);
      func_0x00010b0b87f4();
      puVar2 = PTR_PTR_1126df920;
      _objc_opt_new(PTR_PTR_1126df920);
      lVar3 = param_4;
      func_0x00010c08fb40(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c100(puVar2,param_3,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010c1bd240(puVar2,param_3,lVar1);
      func_0x00010c192e60(puVar2,param_3,(long)(param_1 * 1000.0));
      lVar1 = param_5;
      func_0x00010c0915a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb200(puVar2,param_3,lVar1);
      _objc_release(lVar1);
      lVar1 = param_5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_5;
        func_0x00010c241220(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c204680(puVar2,param_3,lVar1);
        _objc_release(lVar1);
      }
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      lVar1 = param_4;
      func_0x00010c08fb40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5,param_3,lVar1);
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0b4524; end: 10b0b4687; -[SCEventTrackingLensUnlocker logGrapheneEventWithResult:unlockerAction:] */

void FUN_10b0b4524(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_10b0b4664;
  }
  else {
    _objc_release();
  }
  lVar1 = param_4;
  func_0x00010beef1e0();
  if (lVar1 == 1) {
    puVar2 = PTR_PTR_1126bb928;
    func_0x00010c280c20(PTR_PTR_1126bb928);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c280e20(param_3);
    lVar3 = param_1;
    func_0x00010be245e0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar1 = param_4;
    func_0x00010c280dc0(param_4);
    func_0x00010b0b8818();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f5d4d8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar1);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
LAB_10b0b4664:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b4688; end: 10b0b46a3; -[SCEventTrackingLensUnlocker _grapheneEventTypeForUnlockType:] */

undefined ** FUN_10b0b4688(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110def6b8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbeb38;
  }
  return ppuVar1;
}



/* Entry: 10b0b46a4; end: 10b0b46f7; -[SCEventTrackingLensUnlocker .cxx_destruct] */

void FUN_10b0b46a4(long param_1)

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



/* Entry: 10b0b46f8; end: 10b0b48bf; -[SCLensCompoundUnlocker performAction:] */

void FUN_10b0b46f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c271ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b0b47fc;
  puStack_40 = &UNK_110857858;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8060(param_1,param_2,uVar2,&puStack_58,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0b48c0; end: 10b0b4a63; -[SCLensCompoundUnlocker performAction:completion:completionQueue:] */

void FUN_10b0b48c0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0b60c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if ((lVar4 == 0) || (lVar2 != 0)) {
    lVar4 = lVar1;
    func_0x00010c08fa60();
    if ((lVar4 != 0) || (lVar2 == 0)) {
      lVar4 = lVar1;
      func_0x00010c08fa60();
      if ((lVar4 == 0) || (lVar2 == 0)) {
        if (param_4 != 0) {
          if (param_5 == 0) {
            lVar4 = *(long *)(param_1 + 0x20);
            func_0x00010c11de00(lVar4);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(param_5);
            lVar4 = param_5;
          }
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0xc2000000;
          pcStack_60 = FUN_10b0b4a64;
          puStack_58 = &UNK_11084aaa8;
          _objc_retain(param_3);
          lStack_50 = param_3;
          _objc_retain(param_4);
          lStack_48 = param_4;
          func_0x000107c27d8c(lVar4,&puStack_70);
          _objc_release(lStack_48);
          _objc_release(lStack_50);
          _objc_release(lVar4);
        }
      }
      else {
        func_0x00010c24e580(param_1);
      }
      goto LAB_10b0b4964;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  func_0x00010c0f8060(uVar3);
LAB_10b0b4964:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b4a64; end: 10b0b4baf;  */

void FUN_10b0b4a64(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar1);
  lVar8 = *(long *)(param_1 + 0x28);
  puVar4 = PTR_PTR_1126df910;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  uVar1 = 0xffffffffffffff9b;
  puVar6 = puVar2;
  func_0x00010c00e2e0();
  puVar5 = puVar3;
  func_0x00010c010760();
  (**(code **)(lVar8 + 0x10))(lVar8,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(uVar1);
  _objc_retain(puVar6);
  if (puVar6 == (undefined *)0x0) {
    puVar4 = *(undefined **)(puVar2 + 0x20);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
    puVar4 = puVar6;
  }
  if (*(long *)(puVar2 + 0x18) == 0) {
    lVar8 = 8;
    lVar7 = 0x10;
  }
  else {
    if (*(long *)(puVar2 + 0x18) != 1) {
      uVar9 = 0;
      uVar11 = 0;
      goto LAB_10b0b4c64;
    }
    lVar8 = 0x10;
    lVar7 = 8;
  }
  uVar9 = *(undefined8 *)(puVar2 + lVar7);
  _objc_retain(uVar9);
  uVar11 = *(undefined8 *)(puVar2 + lVar8);
  _objc_retain(uVar11);
LAB_10b0b4c64:
  uVar10 = *(undefined8 *)(puVar2 + 0x20);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(uVar11);
  _objc_retain(puVar4);
  _objc_retain(uVar1);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8060(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar6);
  return;
}



/* Entry: 10b0b4bb0; end: 10b0b4d6b; -[SCLensCompoundUnlocker startCompoundUnlockerFlowForAction:completion:completionQueue:] */

void FUN_10b0b4bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
    lVar1 = param_5;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar5 = 8;
    lVar2 = 0x10;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 1) {
      uVar3 = 0;
      uVar6 = 0;
      goto LAB_10b0b4c64;
    }
    lVar5 = 0x10;
    lVar2 = 8;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(uVar3);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar6);
LAB_10b0b4c64:
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b0b4d6c;
  puStack_80 = &UNK_110cb8278;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = lVar1;
  uStack_70 = uVar6;
  uStack_68 = param_3;
  lStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8060(uVar3,param_2,param_3,&puStack_98,uVar4);
  _objc_release(uVar4);
  _objc_release(lStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_release(uStack_58);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 10b0b4d6c; end: 10b0b4e43;  */

void FUN_10b0b4d6c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010c0f8060(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10b0b4e44;
      puStack_48 = &UNK_11084aaa8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      lStack_40 = param_2;
      func_0x000107c27d8c(uVar1,&puStack_60);
      _objc_release(lStack_40);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b0b4e44; end: 10b0b4e53;  */

void FUN_10b0b4e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0b4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0b4e54; end: 10b0b4e5b; -[SCLensCompoundUnlocker unlockedLensMetadataObservable] */

undefined8 FUN_10b0b4e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0b4e5c; end: 10b0b4ea3; -[SCLensCompoundUnlocker .cxx_destruct] */

void FUN_10b0b4e5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0b4ea4; end: 10b0b510b; -[SCScannableLensUnlocker performAction:completion:completionQueue:] */

void FUN_10b0b4ea4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) goto LAB_10b0b50d0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b0b510c;
  puStack_90 = &UNK_110cb82a8;
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(param_4);
  ppuVar2 = &puStack_a8;
  lStack_80 = param_4;
  _objc_retainBlock();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10b0b51dc;
  puStack_c0 = &UNK_11084aaa8;
  _objc_retain(param_3);
  lStack_b8 = param_3;
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_d8;
  ppuStack_b0 = ppuVar2;
  _objc_retainBlock();
  lVar4 = param_3;
  func_0x00010c0b60c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14f7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_release(lVar5);
    _objc_release(lVar4);
LAB_10b0b5094:
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  else {
    lVar7 = param_3;
    func_0x00010c0b60c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c14f3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((lVar8 == 0) || (lVar4 = param_3, func_0x00010c280e20(), lVar4 != 1)) goto LAB_10b0b5094;
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_10b0b5288;
    puStack_f8 = &UNK_11084a9e8;
    lStack_f0 = param_1;
    _objc_retain(param_3);
    lStack_e8 = param_3;
    _objc_retain(ppuVar2);
    ppuStack_e0 = ppuVar2;
    func_0x00010c0f7fc0(uVar9,param_2,&puStack_110);
    _objc_release(ppuStack_e0);
    _objc_release(lStack_e8);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuStack_b0);
  _objc_release(lStack_b8);
  _objc_release(ppuVar2);
  _objc_release(lStack_80);
  _objc_release(uStack_88);
LAB_10b0b50d0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b510c; end: 10b0b51cb;  */

void FUN_10b0b510c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b0b51cc;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x000107c27d8c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b0b51cc; end: 10b0b51db;  */

void FUN_10b0b51cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0b51d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0b51dc; end: 10b0b5287;  */

void FUN_10b0b51dc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b60c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bbbd0;
  func_0x00010bed1620(PTR_PTR_1126bbbd0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b0b5288; end: 10b0b5297;  */

void FUN_10b0b5288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performAction_completion__112579e98,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b0b5298; end: 10b0b537f; -[SCScannableLensUnlocker _performAction:completion:] */

void FUN_10b0b5298(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar1 = param_3;
  func_0x00010c0b60c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c14f3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010beef1e0(), lVar1 == 1)) {
    func_0x00010be967a0(param_1,param_2,param_3,param_4);
  }
  else {
    func_0x00010be967c0(param_1,param_2,lVar3,param_4);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b5380; end: 10b0b547b; -[SCScannableLensUnlocker _retrieveLensMetadataForLensId:completion:] */

void FUN_10b0b5380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0952c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0b547c;
  puStack_58 = &UNK_110cb82d8;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2,param_2,&puStack_70,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b547c; end: 10b0b574f;  */

void FUN_10b0b547c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10b0b5750;
  uStack_60 = 0x10b0b5760;
  uStack_58 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10b0b5750;
  uStack_b0 = 0x10b0b5760;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  func_0x00010c0c0760(param_2);
  if (puStack_78[5] == 0) {
    if (puStack_c8[5] == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bbbd0;
      func_0x00010be0b260();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puStack_c8[5];
      puStack_c8[5] = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126df910;
    _objc_alloc(PTR_PTR_1126df910);
    func_0x00010c010760();
  }
  else {
    puVar3 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbd20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar2 = PTR_PTR_1126df910;
    _objc_alloc(PTR_PTR_1126df910);
    func_0x00010c022a20();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar2);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10b0b5750; end: 10b0b5767;  */

void FUN_10b0b5750(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b0b5768; end: 10b0b57d3;  */

void FUN_10b0b5768(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3 == 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0b57d4; end: 10b0b580b;  */

void FUN_10b0b57d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b580c; end: 10b0b58b7; -[SCScannableLensUnlocker _retrieveLensIdWithAction:completion:] */

void FUN_10b0b580c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b60c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf9c720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010beef1e0(param_3);
  _objc_release(param_3);
  func_0x00010be12140(param_1,param_2,uVar1,uVar2,uVar3,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b58b8; end: 10b0b5b1f; -[SCScannableLensUnlocker _fetchLensForMachineReadableCode:expirationDate:actionType:completion:] */

void FUN_10b0b58b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
  uVar2 = param_3;
  func_0x00010c14f7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c120080();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c057e80(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c14f7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ee00();
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3230;
  _objc_alloc(PTR_PTR_1126b3230);
  puVar5 = puVar1;
  func_0x00010bdc3580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0(puVar3);
  func_0x00010c05fa40(puVar4);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0cc3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_70 = param_5;
  _objc_retain(param_6);
  func_0x00010c297260(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b5b20; end: 10b0b5bb7;  */

void FUN_10b0b5b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2b560(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0b5bb8; end: 10b0b5d3b; -[SCScannableLensUnlocker _handleLensSnapcodeMetadata:error:machineReadableCode:actionType:completion:] */

void FUN_10b0b5bb8(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010c25d140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_retain(param_4);
    puVar4 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126bbbd0;
      func_0x00010be0b260(PTR_PTR_1126bbbd0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126df910;
    _objc_alloc(PTR_PTR_1126df910);
    func_0x00010c010760();
    (**(code **)(param_7 + 0x10))(param_7,puVar3);
    _objc_release(param_7);
    _objc_release(puVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = param_5;
    func_0x00010c14f3e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(uVar2);
    func_0x00010be2f560(param_1);
    puVar4 = param_7;
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0b5d3c; end: 10b0b5d4f; -[SCScannableLensUnlocker _handleRetrievedLensId:forMachineReadableCode:actionType:completion:] */

void FUN_10b0b5d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  if ((param_5 & 0xfffffffffffffffd) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be72c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performUnlockForLensId_completi_11257a4b0)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be967d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__retrieveLensMetadataForLensId_c_112583390,param_3,param_6);
  return;
}



/* Entry: 10b0b5d50; end: 10b0b5efb; -[SCScannableLensUnlocker _performUnlockForLensId:completion:] */

void FUN_10b0b5d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c0d58;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c025a00();
  puVar3 = PTR_PTR_1126bbee0;
  _objc_alloc(PTR_PTR_1126bbee0);
  func_0x00010c024fa0();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b0b5efc;
  puStack_78 = &UNK_110cb8338;
  uStack_70 = uVar6;
  _objc_retain(param_4);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10b0b5f14;
  puStack_a0 = &UNK_11089dec8;
  uStack_98 = param_4;
  uStack_68 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar6);
  func_0x00010befc720(uVar4,param_2,uVar5,0,puVar3,0,0,0,uVar7,&puStack_90,&puStack_b8);
  _objc_release(uVar4);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b0b5efc; end: 10b0b5f13;  */

void FUN_10b0b5efc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be31790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bbbd0,PTR_s__handleSuccessfulUnlock_dataWrit_112569f80,param_2,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0b5f14; end: 10b0b5f7b;  */

void FUN_10b0b5f14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df910;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c010760();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b5f7c; end: 10b0b605f; +[SCScannableLensUnlocker _handleSuccessfulUnlock:dataWriter:completion:] */

void FUN_10b0b5f7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284f80(param_4);
    _objc_release(param_4);
    _objc_release(param_1);
    _objc_retain(param_3);
  }
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c022a20();
  (**(code **)(param_5 + 0x10))(param_5,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b6060; end: 10b0b60ab; +[SCScannableLensUnlocker _unlockResultWithError:description:] */

void FUN_10b0b6060(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be0b260();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c010760();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0b60ac; end: 10b0b6183; +[SCScannableLensUnlocker _errorWithCode:description:] */

void FUN_10b0b60ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10b0b6184; end: 10b0b61e3; -[SCScannableLensUnlocker .cxx_destruct] */

void FUN_10b0b6184(long param_1)

{
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



/* Entry: 10b0b61e4; end: 10b0b63b7; -[SCLens backfilledWithUnlockInfo:] */

void FUN_10b0b61e4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0820;
  func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = param_1;
    func_0x00010c2813a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2813a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf13c00(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar3);
    func_0x00010c2bbf60(puVar1,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  lVar2 = param_3;
  func_0x00010c093a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c093a40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c093a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    if (param_1 != (undefined *)0x0) {
      puVar4 = param_1;
    }
    func_0x00010bef7f60(puVar3,param_2,puVar4);
    _objc_release(param_1);
    func_0x00010c2b2840(puVar1,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  lVar2 = param_3;
  func_0x00010c27dd80();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c2bbd20(puVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0b63b8; end: 10b0b657f; -[SCLensUnlockableUnlockerImpl performAction:] */

void FUN_10b0b63b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c271ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b0b64bc;
  puStack_40 = &UNK_110857858;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8060(param_1,param_2,uVar2,&puStack_58,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0b6580; end: 10b0b676b; -[SCLensUnlockableUnlockerImpl performAction:completion:completionQueue:] */

void FUN_10b0b6580(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
    lVar3 = param_5;
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b0b676c;
  puStack_90 = &UNK_11084a9e8;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(lVar2);
  lStack_88 = lVar2;
  _objc_retain(lVar3);
  ppuVar4 = &puStack_a8;
  lStack_80 = lVar3;
  _objc_retainBlock();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10b0b6918;
    puStack_d8 = &UNK_11084e180;
    lStack_d0 = param_1;
    _objc_retain(param_3);
    lStack_c8 = param_3;
    _objc_retain(param_4);
    uStack_b8 = param_4;
    _objc_retain(lVar3);
    lStack_c0 = lVar3;
    _objc_retain(ppuVar4);
    ppuStack_b0 = ppuVar4;
    func_0x00010c0f88c0(uVar6,param_2,&puStack_f0);
    _objc_release(ppuStack_b0);
    _objc_release(lStack_c0);
    _objc_release(uStack_b8);
    _objc_release(lStack_c8);
  }
  _objc_release(ppuVar4);
  _objc_release(lStack_80);
  _objc_release(lStack_88);
  _objc_release(uStack_78);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b676c; end: 10b0b68cb;  */

void FUN_10b0b676c(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  if (*(long *)(param_1 + 0x30) != 0) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f5d618);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b0b68cc;
    puStack_60 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    puStack_58 = puVar3;
    uStack_50 = uVar2;
    _objc_retain(puVar3);
    func_0x000107c27d8c(uVar1,&puStack_78);
    _objc_release(puStack_58);
    _objc_release(uStack_50);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar4 + 0x28);
  puVar4 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c010760();
  (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b0b68cc; end: 10b0b6917;  */

void FUN_10b0b68cc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c010760();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b6918; end: 10b0b692b;  */

void FUN_10b0b6918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performAction_completion_callba_112579ea0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10b0b692c; end: 10b0b6b33; -[SCLensUnlockableUnlockerImpl _performAction:completion:callbackQueue:defaultErrorHandler:] */

void FUN_10b0b692c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  lVar1 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010be71420(param_1,param_2);
  }
  else {
    _objc_initWeak(auStack_78,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0952e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_4);
    uStack_80 = param_1;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c297280(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0b6b34; end: 10b0b6bfb;  */

void FUN_10b0b6b34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c094fa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf13c00(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be71420(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0b6bfc; end: 10b0b7103; -[SCLensUnlockableUnlockerImpl _performAction:existingLens:startTime:completion:callbackQueue:defaultErrorHandler:] */

void FUN_10b0b6bfc(long param_1,undefined8 param_2,long param_3,long param_4,undefined *param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010beef1e0();
  if (lVar2 == 1) {
    puVar6 = PTR_PTR_1126c0d58;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010bf9c720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c025a00();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126bbee0;
    _objc_alloc();
    func_0x00010c024fa0();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c280e20();
    lVar2 = param_3;
    func_0x00010c281320();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = 0;
      puVar9 = PTR_PTR_1126c0328;
      func_0x00010c0f40e0(PTR_PTR_1126c0328);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010befc720(uVar4);
    _objc_release(puVar9);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(puVar3);
  }
  else {
    lVar2 = param_3;
    func_0x00010beef1e0();
    if ((param_4 == 0) || (lVar2 == 2)) {
      puVar6 = PTR_PTR_1126c0d58;
      _objc_alloc(PTR_PTR_1126c0d58);
      lVar2 = param_3;
      func_0x00010bf9c720(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c025a00(puVar6);
      _objc_release(lVar2);
      lVar7 = param_3;
      func_0x00010c280dc0();
      lVar2 = 0x10;
      if (lVar7 != 10) {
        lVar2 = 8;
      }
      uVar8 = *(undefined8 *)(param_1 + lVar2);
      _objc_retain(uVar8);
      uVar4 = uVar8;
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c280e20();
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010bfa8ae0(uVar4);
      _objc_release(uVar4);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_release(uVar8);
    }
    else {
      if (param_5 == (undefined *)0x0) goto LAB_10b0b70b8;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10b0b7104;
      puStack_a0 = &UNK_11084a9e8;
      _objc_retain(param_5);
      puStack_88 = param_5;
      _objc_retain(param_4);
      lStack_98 = param_4;
      _objc_retain(param_3);
      lStack_90 = param_3;
      func_0x000107c27d8c(param_6,&puStack_b8);
      _objc_release(lStack_90);
      _objc_release(lStack_98);
      puVar6 = puStack_88;
    }
  }
  _objc_release(puVar6);
LAB_10b0b70b8:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0b7104; end: 10b0b716f;  */

void FUN_10b0b7104(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c280e20(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c022a20(puVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b7170; end: 10b0b71db;  */

void FUN_10b0b7170(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010be90f40(param_1 - *(double *)(param_2 + 0x40),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b71dc; end: 10b0b7287;  */

void FUN_10b0b71dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b0b7288;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x000107c27d8c(uVar2,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b0b7288; end: 10b0b72d3;  */

void FUN_10b0b7288(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c010760();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b72d4; end: 10b0b733f;  */

void FUN_10b0b72d4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010be90f40(param_1 - *(double *)(param_2 + 0x40),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b7340; end: 10b0b73eb;  */

void FUN_10b0b7340(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b0b73ec;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x000107c27d8c(uVar2,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b0b73ec; end: 10b0b7437;  */

void FUN_10b0b73ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126df910;
  _objc_alloc(PTR_PTR_1126df910);
  func_0x00010c010760();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0b7438; end: 10b0b768b; -[SCLensUnlockableUnlockerImpl _requestDidSucceedWithStatusCode:action:metadata:shouldAddToUnlockStore:duration:completion:callbackQueue:] */

void FUN_10b0b7438(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  int param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b0b768c;
  puStack_90 = &UNK_11085b7b0;
  _objc_retain(param_7);
  lStack_80 = param_7;
  lStack_78 = param_3;
  _objc_retain(param_8);
  ppuVar2 = &puStack_a8;
  uStack_88 = param_8;
  _objc_retainBlock();
  if (param_3 == 200) {
    _objc_retain(param_5);
    lVar3 = param_4;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = param_5;
    if (lVar3 != 0) {
      lVar3 = param_4;
      func_0x00010c094fa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf13c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      _objc_release(lVar3);
    }
    _objc_retain(lVar4);
    if (lVar4 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      if (param_6 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c284f80(uVar5);
        _objc_release(param_1);
      }
      if (param_7 != 0) {
        puStack_e0 = puVar1;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_10b0b7838;
        puStack_c8 = &UNK_11084a9e8;
        _objc_retain(param_7);
        lStack_b0 = param_7;
        _objc_retain(lVar4);
        lStack_c0 = lVar4;
        _objc_retain(param_4);
        lStack_b8 = param_4;
        func_0x000107c27d8c(param_8,&puStack_e0);
        _objc_release(lStack_b8);
        _objc_release(lStack_c0);
        _objc_release(lStack_b0);
      }
    }
    _objc_release(lVar4);
    _objc_release(lVar4);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(lStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}


