/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7d77d0; end: 10b7d782f; -[PINMemoryCache didEnterBackgroundBlock] */

void FUN_10b7d77d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retainBlock(uVar1);
  func_0x00010c280b40(param_1);
  uVar2 = uVar1;
  _objc_retainBlock(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7d7830; end: 10b7d7897; -[PINMemoryCache setDidEnterBackgroundBlock:] */

void FUN_10b7d7830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d7898; end: 10b7d78cf; -[PINMemoryCache ageLimit] */

undefined8 FUN_10b7d7898(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d78d0; end: 10b7d790b; -[PINMemoryCache setAgeLimit:] */

void FUN_10b7d78d0(undefined8 param_1,long param_2)

{
  func_0x00010c09faa0();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  func_0x00010c280b40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c27c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_trimToAgeLimitRecursively_11267cbf0);
  return;
}



/* Entry: 10b7d790c; end: 10b7d793b; -[PINMemoryCache costLimit] */

undefined8 FUN_10b7d790c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d793c; end: 10b7d7983; -[PINMemoryCache setCostLimit:] */

void FUN_10b7d793c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c09faa0();
  *(long *)(param_1 + 0x20) = param_3;
  func_0x00010c280b40(param_1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c27c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trimToCostLimitByDate__11267cc10,param_3);
    return;
  }
  return;
}



/* Entry: 10b7d7984; end: 10b7d79b3; -[PINMemoryCache totalCost] */

undefined8 FUN_10b7d7984(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d79b4; end: 10b7d7a5b; -[PINMemoryCache lastKnownCostByKind:] */

long FUN_10b7d79b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2827c0();
    _objc_release(lVar1);
  }
  func_0x00010c280b40(param_1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10b7d7a5c; end: 10b7d7a8b; -[PINMemoryCache isTTLCache] */

undefined1 FUN_10b7d7a5c(long param_1)

{
  undefined1 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined1 *)(param_1 + 8);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d7a8c; end: 10b7d7ab7; -[PINMemoryCache setTtlCache:] */

void FUN_10b7d7a8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010c09faa0();
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10b7d7ab8; end: 10b7d7abf; -[PINMemoryCache name] */

undefined8 FUN_10b7d7ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7d7ac0; end: 10b7d7ac7; -[PINMemoryCache setName:] */

void FUN_10b7d7ac0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b7d7ac8; end: 10b7d7ad3; -[PINMemoryCache removeAllObjectsOnMemoryWarning] */

byte FUN_10b7d7ac8(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 10b7d7ad4; end: 10b7d7adb; -[PINMemoryCache setRemoveAllObjectsOnMemoryWarning:] */

void FUN_10b7d7ad4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b7d7adc; end: 10b7d7ae7; -[PINMemoryCache removeAllObjectsOnEnteringBackground] */

byte FUN_10b7d7adc(long param_1)

{
  return *(byte *)(param_1 + 10) & 1;
}



/* Entry: 10b7d7ae8; end: 10b7d7aef; -[PINMemoryCache setRemoveAllObjectsOnEnteringBackground:] */

void FUN_10b7d7ae8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b7d7af0; end: 10b7d7b1f; -[PINMemoryCache setOperationQueue:] */

void FUN_10b7d7af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7b20; end: 10b7d7b33; -[PINMemoryCache mutex] */

void FUN_10b7d7b20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  param_1[1] = *(undefined8 *)(param_2 + 0xb8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[5] = *(undefined8 *)(param_2 + 0xd8);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  return;
}



/* Entry: 10b7d7b34; end: 10b7d7b47; -[PINMemoryCache setMutex:] */

void FUN_10b7d7b34(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar5 = param_3[4];
  uVar7 = param_3[7];
  uVar6 = param_3[6];
  *(undefined8 *)(param_1 + 0xd8) = param_3[5];
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 200) = uVar4;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  return;
}



/* Entry: 10b7d7b48; end: 10b7d7b4f; -[PINMemoryCache dictionary] */

undefined8 FUN_10b7d7b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b7d7b50; end: 10b7d7b7f; -[PINMemoryCache setDictionary:] */

void FUN_10b7d7b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7b80; end: 10b7d7b87; -[PINMemoryCache dates] */

undefined8 FUN_10b7d7b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b7d7b88; end: 10b7d7bb7; -[PINMemoryCache setDates:] */

void FUN_10b7d7b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7bb8; end: 10b7d7bbf; -[PINMemoryCache costs] */

undefined8 FUN_10b7d7bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b7d7bc0; end: 10b7d7bef; -[PINMemoryCache setCosts:] */

void FUN_10b7d7bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7bf0; end: 10b7d7bf7; -[PINMemoryCache metadata] */

undefined8 FUN_10b7d7bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b7d7bf8; end: 10b7d7c27; -[PINMemoryCache setMetadata:] */

void FUN_10b7d7bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7c28; end: 10b7d7c2f; -[PINMemoryCache keysByKind] */

undefined8 FUN_10b7d7c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b7d7c30; end: 10b7d7c5f; -[PINMemoryCache setKeysByKind:] */

void FUN_10b7d7c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7c60; end: 10b7d7c67; -[PINMemoryCache costsByKind] */

undefined8 FUN_10b7d7c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b7d7c68; end: 10b7d7c97; -[PINMemoryCache setCostsByKind:] */

void FUN_10b7d7c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7c98; end: 10b7d7c9f; -[PINMemoryCache costsByKindSnapshot] */

undefined8 FUN_10b7d7c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b7d7ca0; end: 10b7d7ccf; -[PINMemoryCache setCostsByKindSnapshot:] */

void FUN_10b7d7ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d7cd0; end: 10b7d7db3; -[PINMemoryCache .cxx_destruct] */

void FUN_10b7d7cd0(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7d7db4; end: 10b7d7ef3; -[PINOperationGroup initWithOperationQueue:] */

undefined1 * FUN_10b7d7db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270af68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _pthread_mutex_init((undefined1 *)((long)puVar1 + 8),0);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release();
    _dispatch_group_create();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7d7ef4; end: 10b7d7f6b; -[PINOperationGroup dealloc] */

void FUN_10b7d7ef4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _pthread_mutex_destroy(param_1 + 8);
  puStack_28 = PTR_PTR_11270af68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b7d7f6c; end: 10b7d7fc7; +[PINOperationGroup asyncOperationGroupWithQueue:] */

void FUN_10b7d7f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c031fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7d7fc8; end: 10b7d7fe3; -[PINOperationGroup locked_nextOperationReference] */

void FUN_10b7d7fc8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828);
  return;
}



/* Entry: 10b7d7fe4; end: 10b7d824b; -[PINOperationGroup start] */

void FUN_10b7d7fe4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  func_0x00010c09faa0();
  if (((*(byte *)(param_1 + 0x90) & 1) == 0) && ((*(byte *)(param_1 + 0x91) & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0x50);
    func_0x00010bf529e0();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      uVar8 = 0;
      do {
        _dispatch_group_enter(*(undefined8 *)(param_1 + 0x78));
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = puVar2;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_10b7d824c;
        puStack_88 = &UNK_1107d0af0;
        _objc_retain();
        ppuVar5 = &puStack_a0;
        lStack_80 = param_1;
        uStack_78 = uVar4;
        _objc_retainBlock(ppuVar5);
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        uVar6 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        func_0x00010befa360(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_1 + 0x60);
        uVar1 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar1);
        _objc_release(uVar6);
        _objc_release(uVar9);
        _objc_release(ppuVar5);
        _objc_release(uStack_78);
        _objc_release(uVar4);
        uVar8 = uVar8 + 1;
        uVar7 = *(ulong *)(param_1 + 0x50);
        func_0x00010bf529e0();
      } while (uVar8 < uVar7);
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar3 = *(long *)(param_1 + 0x88);
      if (lVar3 == 0) {
        lVar3 = 0x15;
        func_0x000107c312b8(0x15,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar3);
      }
      puStack_c8 = puVar2;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_10b7d827c;
      puStack_b0 = &UNK_11087bb00;
      lStack_a8 = param_1;
      func_0x000107c27d98(*(undefined8 *)(param_1 + 0x78),lVar3,&puStack_c8);
      _objc_release(lVar3);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar6);
  }
  func_0x00010c280b40(param_1);
  return;
}



/* Entry: 10b7d824c; end: 10b7d827b;  */

void FUN_10b7d824c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
  return;
}



/* Entry: 10b7d827c; end: 10b7d82f3;  */

void FUN_10b7d827c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80) = 0;
  _objc_release(uVar2);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d82f4; end: 10b7d845f; -[PINOperationGroup cancel] */

void FUN_10b7d82f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  func_0x00010c09faa0();
  *(undefined1 *)(param_1 + 0x91) = 1;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010bf2e8a0(uVar3,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8));
        if ((int)uVar3 != 0) {
          _dispatch_group_leave(*(undefined8 *)(param_1 + 0x78));
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar3);
  func_0x00010c280b40(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  __Unwind_Resume(param_1);
  func_0x00010befa360();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7d8460; end: 10b7d847f; -[PINOperationGroup addOperation:] */

void FUN_10b7d8460(void)

{
  func_0x00010befa360();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7d8480; end: 10b7d85b7; -[PINOperationGroup addOperation:withPriority:] */

void FUN_10b7d8480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  if (((*(byte *)(param_1 + 0x90) & 1) == 0) && ((*(byte *)(param_1 + 0x91) & 1) == 0)) {
    lVar2 = param_1;
    func_0x00010c0a0060(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010befa120(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x60),param_2,lVar2);
  }
  else {
    lVar2 = 0;
  }
  func_0x00010c280b40(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b7d85b8; end: 10b7d862f; -[PINOperationGroup setCompletion:] */

void FUN_10b7d85b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  if (((*(byte *)(param_1 + 0x90) & 1) == 0) && ((*(byte *)(param_1 + 0x91) & 1) == 0)) {
    uVar1 = param_3;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    _objc_release(uVar2);
  }
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d8630; end: 10b7d8657; -[PINOperationGroup waitUntilComplete] */

void FUN_10b7d8630(long param_1)

{
  func_0x00010c24d960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_wait_11034c088)(*(undefined8 *)(param_1 + 0x78),0xffffffffffffffff);
  return;
}



/* Entry: 10b7d8658; end: 10b7d865f; -[PINOperationGroup lock] */

void FUN_10b7d8658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_lock_11034c908)(param_1 + 8);
  return;
}



/* Entry: 10b7d8660; end: 10b7d8667; -[PINOperationGroup unlock] */

void FUN_10b7d8660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 8);
  return;
}



/* Entry: 10b7d8668; end: 10b7d86df; -[PINOperationGroup .cxx_destruct] */

void FUN_10b7d8668(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 10b7d86e0; end: 10b7d870f; -[PINOperation setCompletions:] */

void FUN_10b7d86e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d8710; end: 10b7d8787; -[PINOperationQueue dealloc] */

void FUN_10b7d8710(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _pthread_mutex_destroy(param_1 + 8);
  puStack_28 = PTR_PTR_11270af70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b7d8788; end: 10b7d87a7; -[PINOperationQueue addOperation:] */

void FUN_10b7d8788(void)

{
  func_0x00010befa360();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7d87a8; end: 10b7d8a1f; -[PINOperationQueue addOperation:withPriority:identifier:coalescingData:dataCoalescingBlock:completion:] */

void FUN_10b7d87a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c09faa0(param_1);
  if (param_5 != 0) {
    puVar2 = *(undefined **)(param_1 + 0xb0);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      if (param_7 != 0) {
        puVar3 = puVar2;
        func_0x00010bf63640(puVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_7;
        (**(code **)(param_7 + 0x10))(param_7,puVar3,param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189480(puVar2);
        _objc_release(lVar4);
        _objc_release(puVar3);
      }
      func_0x00010bef78c0(puVar2);
      bVar1 = false;
      goto LAB_10b7d8918;
    }
  }
  puVar2 = PTR_PTR_1126e1490;
  lVar4 = param_1;
  func_0x00010c0d9bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ebb80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010c09ffe0(param_1);
  bVar1 = true;
LAB_10b7d8918:
  puVar3 = puVar2;
  func_0x00010c124de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(param_1);
  if (bVar1) {
    func_0x00010c1500c0(param_1);
  }
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7d8a20; end: 10b7d8ba3; -[PINOperationQueue cancelAllOperations] */

long FUN_10b7d8a20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09faa0();
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010bf51e00();
  lVar2 = lVar1;
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010c124de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0000(param_1,param_2,uVar3);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c280b40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  __Unwind_Resume(param_1);
  _objc_retain(puVar4);
  func_0x00010c09faa0(param_1);
  lVar2 = param_1;
  func_0x00010c0a0000(param_1,param_2,puVar4);
  func_0x00010c280b40(param_1);
  _objc_release(puVar4);
  return lVar2;
}



/* Entry: 10b7d8ba4; end: 10b7d8c17; -[PINOperationQueue cancelOperation:] */

undefined8 FUN_10b7d8ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_1;
  func_0x00010c0a0000(param_1,param_2,param_3);
  func_0x00010c280b40(param_1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b7d8c18; end: 10b7d8c47; -[PINOperationQueue maxConcurrentOperations] */

undefined8 FUN_10b7d8c18(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d8c48; end: 10b7d8d0f; -[PINOperationQueue setMaxConcurrentOperations:] */

void FUN_10b7d8c48(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010c09faa0();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  lStack_28 = param_3 - *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = param_3;
  func_0x00010c280b40(param_1);
  if (puStack_38[3] != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b7d8d10;
    puStack_58 = &UNK_110a14000;
    puStack_48 = &uStack_40;
    lStack_50 = param_1;
    func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x80),&puStack_70);
  }
  __Block_object_dispose(&uStack_40,8);
  return;
}



/* Entry: 10b7d8d10; end: 10b7d8d87;  */

void FUN_10b7d8d10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  while (lVar1 != 0) {
    if (lVar1 < 1) {
      _dispatch_semaphore_wait(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),0xffffffffffffffff)
      ;
      lVar1 = 1;
    }
    else {
      _dispatch_semaphore_signal();
      lVar1 = -1;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  }
  return;
}



/* Entry: 10b7d8d88; end: 10b7d8e53; -[PINOperationQueue locked_cancelOperation:] */

long FUN_10b7d8d88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c113c80(lVar1);
    lVar2 = param_1;
    func_0x00010c0ebac0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    if ((int)lVar3 != 0) {
      func_0x00010c12d360(lVar2,param_2,lVar1);
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x88),param_2,lVar1);
      _dispatch_group_leave(*(undefined8 *)(param_1 + 0x58));
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 10b7d8e54; end: 10b7d8f8b; -[PINOperationQueue setOperationPriority:withReference:] */

void FUN_10b7d8e54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010c09faa0(param_1);
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c113c80(), lVar2 != param_3)) {
    lVar2 = lVar1;
    func_0x00010c113c80(lVar1);
    lVar3 = param_1;
    func_0x00010c0ebac0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    func_0x00010c1e3380(lVar1,param_2,param_3);
    lVar2 = param_1;
    func_0x00010c0ebac0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  func_0x00010c280b40(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b7d8f8c; end: 10b7d8fb7; -[PINOperationQueue waitUntilAllOperationsAreFinished] */

void FUN_10b7d8f8c(long param_1,undefined8 param_2)

{
  func_0x00010c1500c0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_wait_11034c088)(*(undefined8 *)(param_1 + 0x58),0xffffffffffffffff);
  return;
}



/* Entry: 10b7d8fb8; end: 10b7d9053; -[PINOperationQueue .cxx_destruct] */

void FUN_10b7d8fb8(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 10b7d9054; end: 10b7d9077; -[SCCacheKeyKindEntry copyWithZone:] */

undefined8 FUN_10b7d9054(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7d9078; end: 10b7d911b; -[SCCacheKeyKindEntry encodeWithCoder:] */

void FUN_10b7d9078(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dc1758);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dd6038);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f83098);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f83658);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f83678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d911c; end: 10b7d9123; -[SCCacheKeyKindEntry preferFasterCoding] */

undefined8 FUN_10b7d911c(void)

{
  return 1;
}



/* Entry: 10b7d9124; end: 10b7d919f; -[SCCacheKeyKindEntry encodeWithFasterCoder:] */

void FUN_10b7d9124(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d91a0; end: 10b7d926b; -[SCCacheKeyKindEntry decodeWithFasterDecoder:] */

void FUN_10b7d91a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d926c; end: 10b7d934b; -[SCCacheKeyKindEntry setObject:forUInt64Key:] */

void FUN_10b7d926c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x78d0792b359055) {
    if (param_4 == 0x33e79e5c4c811) {
      lVar2 = 0x10;
    }
    else {
      if (param_4 != 0x75676573c52ad8) goto LAB_10b7d9338;
      lVar2 = 0x18;
    }
  }
  else if (param_4 == 0x78d0792b359055) {
    lVar2 = 0x28;
  }
  else {
    if (param_4 != 0x7d61f9cbd76312) goto LAB_10b7d9338;
    lVar2 = 0x20;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b7d9338:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d934c; end: 10b7d936b; -[SCCacheKeyKindEntry setBool:forUInt64Key:] */

void FUN_10b7d934c(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  if (param_4 == 0x13bee29776551e) {
    *(undefined1 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b7d936c; end: 10b7d937f; +[SCCacheKeyKindEntry fasterCodingVersion] */

undefined8 FUN_10b7d936c(void)

{
  return 0x864a061748e351be;
}



/* Entry: 10b7d9380; end: 10b7d938b; +[SCCacheKeyKindEntry fasterCodingKeys] */

undefined8 FUN_10b7d9380(void)

{
  return 0x1133e0f80;
}



/* Entry: 10b7d938c; end: 10b7d940f; -[SCCacheKeyKindEntry isEqual:] */

bool FUN_10b7d938c(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  FUN_10bc85c34(param_1,param_3,0x1137f9e08,0x1137f9e10,5,4);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_3 + 8) == *(char *)(param_1 + 8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b7d9410; end: 10b7d94d3; -[SCCacheKeyKindEntry hash] */

ulong FUN_10b7d9410(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfde980(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  auStack_50[1] = uVar2;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x28);
  auStack_50[2] = uVar3;
  func_0x00010bfde980();
  auStack_50[3] = lVar4;
  auStack_50[4] = (ulong)*(byte *)(param_1 + 8);
  lVar5 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_50 + lVar5) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar4 + 0x10);
}



/* Entry: 10b7d94d4; end: 10b7d94db; -[SCCacheKeyKindEntry key] */

undefined8 FUN_10b7d94d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7d94dc; end: 10b7d94e3; -[SCCacheKeyKindEntry referenceCount] */

undefined8 FUN_10b7d94dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7d94e4; end: 10b7d952b; -[SCCacheKeyKindEntry .cxx_destruct] */

void FUN_10b7d94e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7d952c; end: 10b7d9693; -[SCCacheKeyKindEntry isExpired] */

long FUN_10b7d952c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *unaff_x20;
  long unaff_x21;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar1 == 0) {
LAB_10b7d95a4:
    lVar3 = param_1;
    func_0x00010c124e00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x00010c124e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c071f40();
      _objc_release(param_1);
      _objc_release(lVar3);
    }
    if (lVar1 == 0) goto LAB_10b7d9604;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
    func_0x00010bf9c720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070240(puVar2,param_2,unaff_x20,unaff_x21);
    if (((ulong)puVar2 & 1) == 0) goto LAB_10b7d95a4;
    lVar4 = 1;
  }
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
LAB_10b7d9604:
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 10b7d9694; end: 10b7d97b7; -[SCCacheKeyKindEntry adjustReferenceCount:expiration:] */

void FUN_10b7d9694(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e13f8;
  func_0x00010c2a9c00(PTR_PTR_1126e13f8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2827c0();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      lVar2 + param_3 & (lVar2 + param_3 >> 0x3f ^ 0xffffffffffffffffU));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9400(puVar1,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (param_4 != 0) {
    func_0x00010c198b80(puVar1,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7d97b8; end: 10b7d990f; +[SCCacheKeyKindEntryBuilder withCacheKeyKindEntry:] */

void FUN_10b7d97b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e13f8;
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c124e00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c082260();
  puVar1[0x28] = (char)uVar2;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7d9910; end: 10b7d996f; -[SCCacheKeyKindEntryBuilder setReferenceCount:] */

long FUN_10b7d9910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7d9970; end: 10b7d998f;  */

undefined8 FUN_10b7d9970(ulong param_1)

{
  if (param_1 < 0x40) {
    return *(undefined8 *)(&UNK_10e5db918 + param_1 * 8);
  }
  return 0;
}



/* Entry: 10b7d9990; end: 10b7d99e3; +[EventsRoot extensionRegistry] */

undefined * FUN_10b7d9990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137f9e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e1498;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126e14a0;
    puRam00000001137f9e30 = puVar1;
    func_0x00010bf9dda0(PTR_PTR_1126e14a0);
    func_0x00010bef8160(puVar1,param_2,puVar2);
  }
  return puRam00000001137f9e30;
}



/* Entry: 10b7d99e4; end: 10b7d9a37; +[ParentEventRoot extensionRegistry] */

undefined * FUN_10b7d99e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137f9e40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e1498;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126e14a0;
    puRam00000001137f9e40 = puVar1;
    func_0x00010bf9dda0(PTR_PTR_1126e14a0);
    func_0x00010bef8160(puVar1,param_2,puVar2);
  }
  return puRam00000001137f9e40;
}



/* Entry: 10b7d9a38; end: 10b7d9ac3; +[ASMParentEvent descriptor] */

undefined * FUN_10b7d9a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3a60,
                        &PTR____CFConstantStringClassReference_110f84158,&PTR_DAT_1133e11f8,
                        &PTR_DAT_1133e1210,0x14,0x80,0x1c);
    func_0x00010c229040();
    puRam00000001137f9e48 = puVar1;
  }
  return puRam00000001137f9e48;
}



/* Entry: 10b7d9ac4; end: 10b7d9b53;  */

undefined * FUN_10b7d9ac4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9e50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84178,
                        &UNK_10e5dbb18,&UNK_10e5dbb4c,3,FUN_10b7d9b54,0,&UNK_10e5dbb58);
    do {
      if (puRam00000001137f9e50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9e50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9e50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9e50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9e50;
}



/* Entry: 10b7d9b54; end: 10b7d9b5f;  */

bool FUN_10b7d9b54(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7d9b60; end: 10b7d9beb; +[SCAdsDebugEvent descriptor] */

undefined * FUN_10b7d9b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9e58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3b00,
                        &PTR____CFConstantStringClassReference_110f84198,&PTR_DAT_1133e1498,
                        &PTR_s_eventType_1133e14b0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f9e58 = puVar1;
  }
  return puRam00000001137f9e58;
}



/* Entry: 10b7d9bec; end: 10b7d9c67;  */

undefined * FUN_10b7d9bec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9e60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f841b8,
                        &UNK_10e5dbb60,&UNK_10e5dbc88,0x13,FUN_10b7d9c68,0);
    do {
      if (puRam00000001137f9e60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9e60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9e60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9e60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9e60;
}



/* Entry: 10b7d9c68; end: 10b7d9c73;  */

bool FUN_10b7d9c68(uint param_1)

{
  return param_1 < 0x13;
}



/* Entry: 10b7d9c74; end: 10b7d9cef;  */

undefined * FUN_10b7d9c74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9e68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f841d8,
                        &UNK_10e5dbcd4,&UNK_10e5dbcf8,3,FUN_10b7d9cf0,0);
    do {
      if (puRam00000001137f9e68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9e68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9e68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9e68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9e68;
}



/* Entry: 10b7d9cf0; end: 10b7d9cfb;  */

bool FUN_10b7d9cf0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7d9cfc; end: 10b7d9d77;  */

undefined * FUN_10b7d9cfc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9e70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f841f8,
                        &UNK_10e5dbd04,&UNK_10e5dbd70,0xc,FUN_10b7d9d78,0);
    do {
      if (puRam00000001137f9e70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9e70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9e70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9e70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9e70;
}



/* Entry: 10b7d9d78; end: 10b7d9d83;  */

bool FUN_10b7d9d78(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7d9d84; end: 10b7d9dff;  */

undefined * FUN_10b7d9d84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9e78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84218,
                        &UNK_10e5dbda0,&UNK_10e5dbde0,4,FUN_10b7d9e00,0);
    do {
      if (puRam00000001137f9e78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9e78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9e78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9e78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9e78;
}



/* Entry: 10b7d9e00; end: 10b7d9e0b;  */

bool FUN_10b7d9e00(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7d9e0c; end: 10b7d9eef; +[SCAdsWebviewAutofillEvent descriptor] */

void FUN_10b7d9e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd3ba0,
                        &PTR____CFConstantStringClassReference_110f84238,&PTR_DAT_1133e14f0,
                        &PTR_DAT_1133e1508,7,0x28,0x1c);
    puRam00000001137f9e80 = puVar1;
  }
  return;
}



/* Entry: 10b7d9ef0; end: 10b7d9efb;  */

bool FUN_10b7d9ef0(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b7d9efc; end: 10b7d9f77;  */

undefined * FUN_10b7d9efc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9e90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84278,
                        &UNK_10e5dbffc,&UNK_10e5dc080,8,FUN_10b7d9f78,0);
    do {
      if (puRam00000001137f9e90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9e90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9e90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9e90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9e90;
}



/* Entry: 10b7d9f78; end: 10b7d9f83;  */

bool FUN_10b7d9f78(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7d9f84; end: 10b7d9fff;  */

undefined * FUN_10b7d9f84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9e98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84298,
                        &UNK_10e5dc0a0,&UNK_10e5dc144,0xc,FUN_10b7da000,0);
    do {
      if (puRam00000001137f9e98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9e98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9e98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9e98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9e98;
}


