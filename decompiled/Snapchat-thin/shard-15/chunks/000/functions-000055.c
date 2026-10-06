/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7d34a4; end: 10b7d3507; -[PINDiskCache willRemoveAllObjectsBlock] */

void FUN_10b7d34a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
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



/* Entry: 10b7d3508; end: 10b7d3627; -[PINDiskCache setWillRemoveAllObjectsBlock:] */

void FUN_10b7d3508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d3628; end: 10b7d3693;  */

void FUN_10b7d3628(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d3694; end: 10b7d36f7; -[PINDiskCache didAddObjectBlock] */

void FUN_10b7d3694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
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



/* Entry: 10b7d36f8; end: 10b7d3817; -[PINDiskCache setDidAddObjectBlock:] */

void FUN_10b7d36f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d3818; end: 10b7d3883;  */

void FUN_10b7d3818(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d3884; end: 10b7d38e7; -[PINDiskCache didRemoveObjectBlock] */

void FUN_10b7d3884(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
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



/* Entry: 10b7d38e8; end: 10b7d394b; -[PINDiskCache didRemoveAllObjectsBlock] */

void FUN_10b7d38e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
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



/* Entry: 10b7d394c; end: 10b7d3a6b; -[PINDiskCache setDidRemoveAllObjectsBlock:] */

void FUN_10b7d394c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d3a6c; end: 10b7d3ad7;  */

void FUN_10b7d3a6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d3ad8; end: 10b7d3b4b; -[PINDiskCache evictPolicyBlock] */

void FUN_10b7d3ad8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf51e00(uVar1);
  func_0x00010c280b40(param_1);
  uVar2 = uVar1;
  _objc_retainBlock(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7d3b4c; end: 10b7d3b7b; -[PINDiskCache byteLimit] */

undefined8 FUN_10b7d3b4c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d3b7c; end: 10b7d3bb3; -[PINDiskCache ageLimit] */

undefined8 FUN_10b7d3b7c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d3bb4; end: 10b7d3ca3; -[PINDiskCache setAgeLimit:] */

void FUN_10b7d3bb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  func_0x00010c0ebaa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010befa360(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b7d3ca4; end: 10b7d3d07;  */

void FUN_10b7d3ca4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c280b40(lVar1);
    func_0x00010c27c720(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d3d08; end: 10b7d3d37; -[PINDiskCache isTTLCache] */

undefined1 FUN_10b7d3d08(long param_1)

{
  undefined1 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d3d38; end: 10b7d3e23; -[PINDiskCache setTtlCache:] */

void FUN_10b7d3d38(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b7d3e24; end: 10b7d3e7f;  */

void FUN_10b7d3e24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(param_1 + 0x28);
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d3e80; end: 10b7d3eaf; -[PINDiskCache writingProtectionOption] */

undefined8 FUN_10b7d3e80(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d3eb0; end: 10b7d3f9b; -[PINDiskCache setWritingProtectionOption:] */

void FUN_10b7d3eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b7d3f9c; end: 10b7d3ffb;  */

void FUN_10b7d3f9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c09faa0(lVar1);
    *(ulong *)(lVar1 + 0x70) = uVar2 & 0xf0000000;
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d3ffc; end: 10b7d413b; -[PINDiskCache setMetadata:toURL:] */

undefined * FUN_10b7d3ffc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c0f5800(param_4);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    puVar4 = puVar2;
    func_0x00010c1894a0(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110f83578,lVar3
                        ,&uStack_48);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b7d413c; end: 10b7d426f; -[PINDiskCache metadataForKey:] */

void FUN_10b7d413c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_3 == 0) {
    uVar2 = 0;
    goto LAB_10b7d4204;
  }
  func_0x00010c09faa0(param_1);
  if ((*(char *)(param_1 + 0x20) != '\x01') || (dVar3 = *(double *)(param_1 + 0x60), dVar3 <= 0.0))
  {
LAB_10b7d41d8:
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c0dff20(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c0dff20(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar4 = *(double *)(param_1 + 0x60);
    _objc_release(uVar2);
    if (ABS(dVar3) < dVar4) goto LAB_10b7d41d8;
    uVar2 = 0;
  }
  func_0x00010c280b40(param_1);
LAB_10b7d4204:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7d4270; end: 10b7d42a7; -[PINDiskCache count] */

undefined8 FUN_10b7d4270(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf529e0(uVar1);
  func_0x00010c280b40(param_1);
  return uVar1;
}



/* Entry: 10b7d42a8; end: 10b7d42b3; -[PINDiskCache prefix] */

void FUN_10b7d42a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 10b7d42b4; end: 10b7d42bb; -[PINDiskCache cacheURL] */

undefined8 FUN_10b7d42b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b7d42bc; end: 10b7d42eb; -[PINDiskCache setCacheURL:] */

void FUN_10b7d42bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b7d42ec; end: 10b7d42f3; -[PINDiskCache byteCount] */

undefined8 FUN_10b7d42ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b7d42f4; end: 10b7d42fb; -[PINDiskCache name] */

undefined8 FUN_10b7d42f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b7d42fc; end: 10b7d4303; -[PINDiskCache setName:] */

void FUN_10b7d42fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b7d4304; end: 10b7d4333; -[PINDiskCache setOperationQueue:] */

void FUN_10b7d4304(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b7d4334; end: 10b7d433b; -[PINDiskCache dates] */

undefined8 FUN_10b7d4334(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b7d433c; end: 10b7d436b; -[PINDiskCache setDates:] */

void FUN_10b7d433c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b7d436c; end: 10b7d4373; -[PINDiskCache sizes] */

undefined8 FUN_10b7d436c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b7d4374; end: 10b7d43a3; -[PINDiskCache setSizes:] */

void FUN_10b7d4374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d43a4; end: 10b7d43ab; -[PINDiskCache metadata] */

undefined8 FUN_10b7d43a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b7d43ac; end: 10b7d43db; -[PINDiskCache setMetadata:] */

void FUN_10b7d43ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7d43dc; end: 10b7d43e3; -[PINDiskCache deadFiles] */

undefined8 FUN_10b7d43dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b7d43e4; end: 10b7d44df; -[PINDiskCache .cxx_destruct] */

void FUN_10b7d43e4(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7d44e0; end: 10b7d4557; -[PINMemoryCache dealloc] */

void FUN_10b7d44e0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _pthread_mutex_destroy(param_1 + 0xb0);
  puStack_28 = PTR_PTR_11270af60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b7d4558; end: 10b7d464b; -[PINMemoryCache didReceiveMemoryWarningNotification:] */

void FUN_10b7d4558(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  func_0x00010c12aea0();
  if ((int)uVar1 != 0) {
    func_0x00010c12ade0(param_1);
  }
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10b7d464c; end: 10b7d46db;  */

void FUN_10b7d464c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c09faa0(param_1);
    lVar1 = *(long *)(param_1 + 0x60);
    _objc_retainBlock();
    func_0x00010c280b40(param_1);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7d46dc; end: 10b7d47cf; -[PINMemoryCache didReceiveEnterBackgroundNotification:] */

void FUN_10b7d46dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  func_0x00010c12ae80();
  if ((int)uVar1 != 0) {
    func_0x00010c12ade0(param_1);
  }
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10b7d47d0; end: 10b7d485f;  */

void FUN_10b7d47d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c09faa0(param_1);
    lVar1 = *(long *)(param_1 + 0x68);
    _objc_retainBlock();
    func_0x00010c280b40(param_1);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7d4860; end: 10b7d4bc7; -[PINMemoryCache removeObjectAndExecuteBlocksForKey:] */

void FUN_10b7d4860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x38);
  _objc_retainBlock();
  lVar4 = *(long *)(param_1 + 0x50);
  _objc_retainBlock();
  func_0x00010c280b40(param_1);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_1,param_3,uVar1,uVar2);
  }
  func_0x00010c09faa0(param_1);
  lVar5 = *(long *)(param_1 + 0x88);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010c2827c0();
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar10;
    lVar10 = *(long *)(param_1 + 0xa0);
    uVar7 = uVar6;
    func_0x00010c087060(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar10 != 0) {
      func_0x00010c2827c0(lVar10);
      func_0x00010c0df840(puVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0xa0);
      uVar7 = uVar6;
      func_0x00010c087060(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9);
      _objc_release(uVar7);
      _objc_release(puVar8);
    }
    _objc_release(lVar10);
    _objc_release(uVar6);
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x90));
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar7 = uVar2;
  func_0x00010c087060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar6);
  _objc_release(uVar7);
  func_0x00010c280b40(param_1);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,param_1,param_3,uVar2,0);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d4bc8; end: 10b7d4ddb; -[PINMemoryCache trimMemoryToDate:] */

void FUN_10b7d4bc8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  double dVar20;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [8];
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c086f20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010bf51e00();
  func_0x00010c280b40(param_1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar1);
  lVar15 = lVar1;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar17 = *plStack_120;
    do {
      lVar19 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          lVar4 = lVar3;
          puVar11 = (undefined8 *)param_3;
          func_0x00010bf433a0();
          if (lVar4 != -1) {
            _objc_release(lVar3);
            goto LAB_10b7d4d14;
          }
          func_0x00010c12d3a0(param_1);
        }
        _objc_release(lVar3);
        lVar19 = lVar19 + 1;
      } while (lVar15 != lVar19);
      lVar15 = lVar1;
      puVar11 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
LAB_10b7d4d14:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar12 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09faa0();
  puVar13 = *(undefined1 **)(puVar5 + 0x28);
  puVar6 = *(undefined1 **)(puVar5 + 0x88);
  puVar8 = PTR_s_compare__1125ae690;
  func_0x00010c086f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(puVar5);
  if (puVar11 < puVar13) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    puVar13 = puVar6;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010bf52a60();
    if (puVar7 != (undefined1 *)0x0) {
      lVar15 = *plStack_250;
      do {
        puVar16 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar15) {
            _objc_enumerationMutation(puVar13);
          }
          puVar12 = *(undefined8 **)(lStack_258 + (long)puVar16 * 8);
          func_0x00010c12d3a0(puVar5);
          func_0x00010c09faa0(puVar5);
          puVar18 = *(undefined1 **)(puVar5 + 0x28);
          func_0x00010c280b40(puVar5);
          if (puVar18 <= puVar11) goto LAB_10b7d4ef8;
          puVar16 = puVar16 + 1;
        } while (puVar7 != puVar16);
        puVar7 = puVar13;
        puVar12 = &uStack_260;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10b7d4ef8:
    _objc_release(puVar13);
    puVar8 = (undefined *)puVar12;
  }
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  _objc_release(puVar6);
  __Unwind_Resume();
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09faa0();
  puVar14 = *(undefined **)(puVar5 + 0x28);
  lVar15 = *(long *)(puVar5 + 0x80);
  func_0x00010c086f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(puVar5);
  if (puVar8 < puVar14) {
    _objc_retain(lVar15);
    lVar2 = lVar15;
    func_0x00010bf52a60();
    lVar17 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar17) {
          _objc_enumerationMutation(lVar15);
        }
        func_0x00010c12d3a0(puVar5);
        func_0x00010c09faa0(puVar5);
        puVar14 = *(undefined **)(puVar5 + 0x28);
        func_0x00010c280b40(puVar5);
        if (puVar14 <= puVar8) goto LAB_10b7d508c;
        lVar19 = lVar19 + 1;
      } while (lVar2 != lVar19);
      lVar2 = lVar15;
      func_0x00010bf52a60();
    }
LAB_10b7d508c:
    _objc_release(lVar15);
  }
  lVar2 = lVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar15);
  _objc_release(lVar15);
  __Unwind_Resume();
  func_0x00010c09faa0();
  dVar20 = *(double *)(lVar2 + 0x18);
  func_0x00010c280b40(lVar2);
  if (dVar20 != 0.0) {
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c0523a0(-dVar20);
    func_0x00010c27c6a0(lVar2);
    _objc_initWeak(auStack_3c8,lVar2);
    uVar9 = 0;
    _dispatch_time(0,(long)(dVar20 * 1000000000.0));
    uVar10 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_3f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3e8 = 0xc2000000;
    pcStack_3e0 = FUN_10b7d5248;
    puStack_3d8 = &UNK_110876b10;
    _objc_copyWeak(auStack_3d0,auStack_3c8);
    func_0x000107c27d84(uVar9,uVar10,&puStack_3f0);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_3d0);
    _objc_destroyWeak(auStack_3c8);
    _objc_release(puVar8);
  }
  return;
}



/* Entry: 10b7d4ddc; end: 10b7d4f7b; -[PINMemoryCache trimToCostLimit:] */

void FUN_10b7d4ddc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09faa0();
  uVar10 = *(ulong *)(param_1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x88);
  puVar5 = PTR_s_compare__1125ae690;
  func_0x00010c086f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(param_1);
  if (param_3 < uVar10) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uVar10 = uVar2;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar12 = *plStack_120;
      do {
        uVar14 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(uVar10);
          }
          puVar8 = *(undefined8 **)(lStack_128 + uVar14 * 8);
          func_0x00010c12d3a0(param_1);
          func_0x00010c09faa0(param_1);
          uVar15 = *(ulong *)(param_1 + 0x28);
          func_0x00010c280b40(param_1);
          if (uVar15 <= param_3) goto LAB_10b7d4ef8;
          uVar14 = uVar14 + 1;
        } while (uVar3 != uVar14);
        uVar3 = uVar10;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
LAB_10b7d4ef8:
    _objc_release(uVar10);
    puVar5 = (undefined *)puVar8;
  }
  uVar3 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uVar10);
  _objc_release(uVar2);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09faa0();
  puVar11 = *(undefined **)(uVar3 + 0x28);
  lVar12 = *(long *)(uVar3 + 0x80);
  func_0x00010c086f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(uVar3);
  if (puVar5 < puVar11) {
    _objc_retain(lVar12);
    lVar4 = lVar12;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar12);
        }
        func_0x00010c12d3a0(uVar3);
        func_0x00010c09faa0(uVar3);
        puVar11 = *(undefined **)(uVar3 + 0x28);
        func_0x00010c280b40(uVar3);
        if (puVar11 <= puVar5) goto LAB_10b7d508c;
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = lVar12;
      func_0x00010bf52a60();
    }
LAB_10b7d508c:
    _objc_release(lVar12);
  }
  lVar4 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar12);
  _objc_release(lVar12);
  __Unwind_Resume();
  func_0x00010c09faa0();
  dVar16 = *(double *)(lVar4 + 0x18);
  func_0x00010c280b40(lVar4);
  if (dVar16 != 0.0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c0523a0(-dVar16);
    func_0x00010c27c6a0(lVar4);
    _objc_initWeak(auStack_298,lVar4);
    uVar6 = 0;
    _dispatch_time(0,(long)(dVar16 * 1000000000.0));
    uVar7 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b8 = 0xc2000000;
    pcStack_2b0 = FUN_10b7d5248;
    puStack_2a8 = &UNK_110876b10;
    _objc_copyWeak(auStack_2a0,auStack_298);
    func_0x000107c27d84(uVar6,uVar7,&puStack_2c0);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_2a0);
    _objc_destroyWeak(auStack_298);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 10b7d4f7c; end: 10b7d5107; -[PINMemoryCache trimToCostLimitByDate:] */

void FUN_10b7d4f7c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09faa0();
  uVar8 = *(ulong *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010c086f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(param_1);
  if (param_3 < uVar8) {
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c12d3a0(param_1);
        func_0x00010c09faa0(param_1);
        uVar8 = *(ulong *)(param_1 + 0x28);
        func_0x00010c280b40(param_1);
        if (uVar8 <= param_3) goto LAB_10b7d508c;
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
LAB_10b7d508c:
    _objc_release(lVar2);
  }
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  _objc_release(lVar2);
  __Unwind_Resume();
  func_0x00010c09faa0();
  dVar10 = *(double *)(lVar3 + 0x18);
  func_0x00010c280b40(lVar3);
  if (dVar10 != 0.0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c0523a0(-dVar10);
    func_0x00010c27c6a0(lVar3);
    _objc_initWeak(auStack_168,lVar3);
    uVar5 = 0;
    _dispatch_time(0,(long)(dVar10 * 1000000000.0));
    uVar6 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_10b7d5248;
    puStack_178 = &UNK_110876b10;
    _objc_copyWeak(auStack_170,auStack_168);
    func_0x000107c27d84(uVar5,uVar6,&puStack_190);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 10b7d5108; end: 10b7d5247; -[PINMemoryCache trimToAgeLimitRecursively] */

void FUN_10b7d5108(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c09faa0();
  dVar4 = *(double *)(param_1 + 0x18);
  func_0x00010c280b40(param_1);
  if (dVar4 != 0.0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c0523a0(-dVar4);
    func_0x00010c27c6a0(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = 0;
    _dispatch_time(0,(long)(dVar4 * 1000000000.0));
    uVar3 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b7d5248;
    puStack_58 = &UNK_110876b10;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000107c27d84(uVar2,uVar3,&puStack_70);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10b7d5248; end: 10b7d5327;  */

void FUN_10b7d5248(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ebaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010befa360(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7d5328; end: 10b7d536f;  */

void FUN_10b7d5328(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c27c720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7d5370; end: 10b7d54d7; -[PINMemoryCache containsObjectForKeyAsync:completion:] */

void FUN_10b7d5370(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010befa360(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d54d8; end: 10b7d5537;  */

void FUN_10b7d54d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf4b920(lVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d5538; end: 10b7d569b; -[PINMemoryCache updateMetadataAsync:forKey:] */

void FUN_10b7d5538(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010befa340(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d569c; end: 10b7d5723;  */

void FUN_10b7d569c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c09faa0(lVar1);
    lVar2 = *(long *)(lVar1 + 0x78);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x90),param_2,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010c280b40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d5724; end: 10b7d5733; -[PINMemoryCache setObjectAsync:forKey:metadata:completion:] */

void FUN_10b7d5724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObjectAsync_forKey_cost_metad_112651bc8,param_3,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 10b7d5734; end: 10b7d5893; -[PINMemoryCache removeObjectForKeyAsync:completion:] */

void FUN_10b7d5734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d5894; end: 10b7d5903;  */

void FUN_10b7d5894(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1,*(undefined8 *)(param_1 + 0x20),0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d5904; end: 10b7d5a63; -[PINMemoryCache removeObjectsForKeysAsync:completion:] */

void FUN_10b7d5904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d5a64; end: 10b7d5bc3;  */

void FUN_10b7d5a64(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    unaff_x21 = *(long *)(param_1 + 0x20);
    _objc_retain(unaff_x21);
    param_4 = auStack_d8;
    lVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      unaff_x23 = *plStack_110;
      do {
        unaff_x24 = 0;
        do {
          if (*plStack_110 != unaff_x23) {
            _objc_enumerationMutation(unaff_x21);
          }
          func_0x00010c12d3e0(lVar1);
          unaff_x24 = unaff_x24 + 1;
        } while (lVar2 != unaff_x24);
        param_4 = auStack_d8;
        lVar2 = unaff_x21;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    unaff_x22 = 0;
    _objc_release(unaff_x21);
    lVar2 = *(long *)(param_1 + 0x28);
    param_3 = (undefined1 *)puVar4;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
      param_3 = (undefined1 *)puVar4;
    }
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  lVar3 = lVar2;
  __Unwind_Resume(lVar2);
  pcStack_128 = FUN_10b7d5bc4;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  lStack_140 = lVar2;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_168,lVar3);
  func_0x00010c0ebaa0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d5bc4; end: 10b7d5d23; -[PINMemoryCache trimToDateAsync:completion:] */

void FUN_10b7d5bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d5d24; end: 10b7d5d87;  */

void FUN_10b7d5d24(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c27c7c0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d5d88; end: 10b7d5eab; -[PINMemoryCache trimToCostAsync:completion:] */

void FUN_10b7d5d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7d5eac; end: 10b7d5f0f;  */

void FUN_10b7d5eac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c27c740(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d5f10; end: 10b7d6033; -[PINMemoryCache trimToCostByDateAsync:completion:] */

void FUN_10b7d5f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7d6034; end: 10b7d6097;  */

void FUN_10b7d6034(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c27c760(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d6098; end: 10b7d61b7; -[PINMemoryCache removeAllObjectsAsync:] */

void FUN_10b7d6098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d61b8; end: 10b7d6217;  */

void FUN_10b7d61b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12adc0(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d6218; end: 10b7d6377; -[PINMemoryCache removeAllObjectsAsyncForKind:completion:] */

void FUN_10b7d6218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d6378; end: 10b7d63db;  */

void FUN_10b7d6378(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12ae20(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d63dc; end: 10b7d653b; -[PINMemoryCache enumerateObjectsWithBlockAsync:completionBlock:] */

void FUN_10b7d63dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0ebaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010befa360(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d653c; end: 10b7d659f;  */

void FUN_10b7d653c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf97ea0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d65a0; end: 10b7d673f; -[PINMemoryCache enumerateObjectsAsyncForKind:block:completionBlock:] */

void FUN_10b7d65a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010befa360(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7d6740; end: 10b7d67a3;  */

void FUN_10b7d6740(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf97e60(lVar1);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d67a4; end: 10b7d6837; -[PINMemoryCache containsObjectForKey:] */

bool FUN_10b7d67a4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c09faa0(param_1);
    lVar2 = *(long *)(param_1 + 0x78);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c280b40(param_1);
    bVar1 = lVar2 != 0;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b7d6838; end: 10b7d696b; -[PINMemoryCache metadataForKey:] */

void FUN_10b7d6838(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_3 == 0) {
    uVar2 = 0;
    goto LAB_10b7d6900;
  }
  func_0x00010c09faa0(param_1);
  if ((*(char *)(param_1 + 8) != '\x01') || (dVar3 = *(double *)(param_1 + 0x18), dVar3 <= 0.0)) {
LAB_10b7d68d4:
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c0dff20(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c0dff20(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar4 = *(double *)(param_1 + 0x18);
    _objc_release(uVar2);
    if (ABS(dVar3) < dVar4) goto LAB_10b7d68d4;
    uVar2 = 0;
  }
  func_0x00010c280b40(param_1);
LAB_10b7d6900:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7d696c; end: 10b7d698b; -[PINMemoryCache objectForKey:] */

void FUN_10b7d696c(void)

{
  func_0x00010c0e0040();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7d698c; end: 10b7d6997; -[PINMemoryCache setObject:forKey:metadata:] */

void FUN_10b7d698c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey_cost_metadata__112651b90,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b7d6998; end: 10b7d69e7; -[PINMemoryCache removeObjectForKey:] */

void FUN_10b7d6998(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c12d3a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d69e8; end: 10b7d6a8f; -[PINMemoryCache trimToDate:] */

void FUN_10b7d69e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c071ce0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)lVar2 == 0) {
      func_0x00010c27c6a0(param_1,param_2,param_3);
    }
    else {
      func_0x00010c12adc0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d6a90; end: 10b7d6a93; -[PINMemoryCache trimToCost:] */

void FUN_10b7d6a90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trimToCostLimit__11267cc08);
  return;
}



/* Entry: 10b7d6a94; end: 10b7d6a97; -[PINMemoryCache trimToCostByDate:] */

void FUN_10b7d6a94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trimToCostLimitByDate__11267cc10);
  return;
}



/* Entry: 10b7d6a98; end: 10b7d6b8b; -[PINMemoryCache removeAllObjects] */

void FUN_10b7d6a98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c09faa0();
  lVar1 = *(long *)(param_1 + 0x40);
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x58);
  _objc_retainBlock();
  func_0x00010c280b40(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  }
  func_0x00010c09faa0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  _objc_release(uVar4);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x00010c280b40(param_1);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7d6b8c; end: 10b7d6ce7; -[PINMemoryCache removeAllObjectsByKind:] */

void FUN_10b7d6b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xa0);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c2827c0();
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar3;
    }
    lVar3 = lVar1;
    func_0x00010bf00560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x78),param_2,lVar3);
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x80),param_2,lVar3);
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x88),param_2,lVar3);
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x90),param_2,lVar3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x98),param_2,param_3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c280b40(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d6ce8; end: 10b7d6f7b; -[PINMemoryCache enumerateObjectsWithBlock:] */

void FUN_10b7d6ce8(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    func_0x00010c09faa0(param_1);
    unaff_x20 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc_init();
    unaff_x21 = *(undefined **)(param_1 + 0x80);
    func_0x00010c086f20();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain();
    param_4 = auStack_f0;
    puVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar12 = *plStack_120;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar11 = *(undefined8 *)(lStack_128 + (long)puVar13 * 8);
          if ((*(char *)(param_1 + 8) != '\x01') ||
             (dVar14 = *(double *)(param_1 + 0x18), dVar14 <= 0.0)) {
LAB_10b7d6e0c:
            uVar3 = *(undefined8 *)(param_1 + 0x90);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(param_1 + 0x78);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(param_3 + 0x10))(param_3,param_1,uVar11,uVar3,uVar4);
            _objc_release(uVar4);
            _objc_release(uVar3);
          }
          else {
            uVar3 = *(undefined8 *)(param_1 + 0x80);
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            dVar15 = *(double *)(param_1 + 0x18);
            _objc_release(uVar3);
            if (ABS(dVar14) < dVar15) goto LAB_10b7d6e0c;
          }
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
        param_4 = auStack_f0;
        puVar2 = unaff_x21;
        puVar9 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(unaff_x21);
    func_0x00010c280b40(param_1);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    puVar8 = (undefined1 *)puVar9;
  }
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
  _objc_release(param_3);
  puVar6 = puVar5;
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(param_4);
  if ((puVar8 != (undefined1 *)0x0) && (param_4 != (undefined1 *)0x0)) {
    func_0x00010c09faa0(puVar6);
    unaff_x21 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar7 = *(undefined1 **)(puVar6 + 0x98);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf51e00();
    _objc_release(puVar7);
    if (puVar5 != (undefined1 *)0x0) {
      _objc_retain(puVar5);
      puVar7 = puVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar7 != (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar5);
          }
          uVar11 = *(undefined8 *)((long)puVar10 * 8);
          if ((puVar6[8] != '\x01') || (dVar14 = *(double *)(puVar6 + 0x18), dVar14 <= 0.0)) {
LAB_10b7d70c8:
            uVar3 = *(undefined8 *)(puVar6 + 0x90);
            func_0x00010c0e00e0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(puVar6 + 0x78);
            func_0x00010c0e00e0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(param_4 + 0x10))(param_4,puVar6,uVar11,uVar3,uVar4);
            _objc_release(uVar4);
            _objc_release(uVar3);
          }
          else {
            uVar3 = *(undefined8 *)(puVar6 + 0x80);
            func_0x00010c0dff20(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            dVar15 = *(double *)(puVar6 + 0x18);
            _objc_release(uVar3);
            if (ABS(dVar14) < dVar15) goto LAB_10b7d70c8;
          }
          puVar10 = puVar10 + 1;
        } while (puVar7 != puVar10);
        puVar7 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
    }
    func_0x00010c280b40(puVar6);
    _objc_release(puVar5);
    _objc_release(unaff_x21);
  }
  _objc_release(param_4);
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(unaff_x21);
  _objc_release(param_4);
  _objc_release(puVar8);
  __Unwind_Resume();
  func_0x00010c09faa0();
  uVar3 = *(undefined8 *)(puVar6 + 0x30);
  _objc_retainBlock(uVar3);
  func_0x00010c280b40(puVar6);
  uVar11 = uVar3;
  _objc_retainBlock(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 10b7d6f7c; end: 10b7d7257; -[PINMemoryCache enumerateObjectsForKind:block:] */

void FUN_10b7d6f7c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010c09faa0(param_1);
    unaff_x21 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar2 = *(long *)(param_1 + 0x98);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar2;
    func_0x00010bf51e00();
    _objc_release(lVar2);
    if (unaff_x22 != 0) {
      _objc_retain(unaff_x22);
      lVar2 = unaff_x22;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(unaff_x22);
          }
          uVar7 = *(undefined8 *)(lVar6 * 8);
          if ((*(char *)(param_1 + 8) != '\x01') ||
             (dVar8 = *(double *)(param_1 + 0x18), dVar8 <= 0.0)) {
LAB_10b7d70c8:
            uVar3 = *(undefined8 *)(param_1 + 0x90);
            func_0x00010c0e00e0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(param_1 + 0x78);
            func_0x00010c0e00e0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(param_4 + 0x10))(param_4,param_1,uVar7,uVar3,uVar4);
            _objc_release(uVar4);
            _objc_release(uVar3);
          }
          else {
            uVar3 = *(undefined8 *)(param_1 + 0x80);
            func_0x00010c0dff20(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            dVar9 = *(double *)(param_1 + 0x18);
            _objc_release(uVar3);
            if (ABS(dVar8) < dVar9) goto LAB_10b7d70c8;
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = unaff_x22;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x22);
    }
    func_0x00010c280b40(param_1);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  _objc_release(unaff_x22);
  _objc_release(unaff_x21);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  func_0x00010c09faa0();
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  _objc_retainBlock(uVar3);
  func_0x00010c280b40(lVar2);
  uVar7 = uVar3;
  _objc_retainBlock(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10b7d7258; end: 10b7d72b7; -[PINMemoryCache willAddObjectBlock] */

void FUN_10b7d7258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 10b7d72b8; end: 10b7d731f; -[PINMemoryCache setWillAddObjectBlock:] */

void FUN_10b7d72b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d7320; end: 10b7d737f; -[PINMemoryCache willRemoveObjectBlock] */

void FUN_10b7d7320(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
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



/* Entry: 10b7d7380; end: 10b7d73e7; -[PINMemoryCache setWillRemoveObjectBlock:] */

void FUN_10b7d7380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d73e8; end: 10b7d7447; -[PINMemoryCache willRemoveAllObjectsBlock] */

void FUN_10b7d73e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
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



/* Entry: 10b7d7448; end: 10b7d74af; -[PINMemoryCache setWillRemoveAllObjectsBlock:] */

void FUN_10b7d7448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d74b0; end: 10b7d750f; -[PINMemoryCache didAddObjectBlock] */

void FUN_10b7d74b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
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



/* Entry: 10b7d7510; end: 10b7d7577; -[PINMemoryCache setDidAddObjectBlock:] */

void FUN_10b7d7510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d7578; end: 10b7d75d7; -[PINMemoryCache didRemoveObjectBlock] */

void FUN_10b7d7578(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
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



/* Entry: 10b7d75d8; end: 10b7d763f; -[PINMemoryCache setDidRemoveObjectBlock:] */

void FUN_10b7d75d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d7640; end: 10b7d769f; -[PINMemoryCache didRemoveAllObjectsBlock] */

void FUN_10b7d7640(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
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



/* Entry: 10b7d76a0; end: 10b7d7707; -[PINMemoryCache setDidRemoveAllObjectsBlock:] */

void FUN_10b7d76a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7d7708; end: 10b7d7767; -[PINMemoryCache didReceiveMemoryWarningBlock] */

void FUN_10b7d7708(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
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



/* Entry: 10b7d7768; end: 10b7d77cf; -[PINMemoryCache setDidReceiveMemoryWarningBlock:] */

void FUN_10b7d7768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


