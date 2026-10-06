/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105809b04; end: 105809bfb;  */

void FUN_105809b04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105809bfc; end: 105809cbf;  */

void FUN_105809bfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be73440(uVar4);
  puVar3 = PTR_PTR_1126af5d0;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f4160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2619e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105809cc0; end: 105809d07;  */

void FUN_105809cc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105809d08; end: 105809dff; -[CTPSearchForYouImplementation _persistSearchForYouSectionData:hasCameo:] */

void FUN_105809d08(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bad40;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd46e0();
  func_0x00010c042da0(puVar1,param_3,1,&PTR____CFConstantStringClassReference_110daafd8,
                      (long)param_1,uVar4,param_5,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28f1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105809e00; end: 105809e8f; -[CTPSearchForYouImplementation _searchForYouSectionFromPersistedSearchSection:] */

void FUN_105809e00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = uVar3;
    func_0x00010c0f4160(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105809e90; end: 105809efb; -[CTPSearchForYouImplementation .cxx_destruct] */

void FUN_105809e90(long param_1)

{
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



/* Entry: 105809efc; end: 105809fff; -[CTPSearchSessionDefault initWithSuperSessionId:config:age:bitmojiAvatarProvider:locationProvider:] */

undefined1 *
FUN_105809efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126ea6f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    func_0x00010c180820(puVar1);
    func_0x00010c1395e0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10580a000; end: 10580a02f; -[CTPSearchSessionDefault setConfig:] */

void FUN_10580a000(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10580a030; end: 10580a057; -[CTPSearchSessionDefault superSessionId] */

void FUN_10580a030(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10580a058; end: 10580a07f; -[CTPSearchSessionDefault sessionId] */

void FUN_10580a058(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10580a080; end: 10580a0a7; -[CTPSearchSessionDefault config] */

void FUN_10580a080(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10580a0a8; end: 10580a0ab; -[CTPSearchSessionDefault userInfo] */

void FUN_10580a0a8(void)

{
  return;
}



/* Entry: 10580a0ac; end: 10580a0e7; -[CTPSearchSessionDefault resetSession] */

void FUN_10580a0ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10580a0e8; end: 10580a0ef; -[CTPSearchSessionDefault queryId] */

undefined8 FUN_10580a0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10580a0f0; end: 10580a0ff; -[CTPSearchSessionDefault incrementQueryId] */

void FUN_10580a0f0(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return;
}



/* Entry: 10580a100; end: 10580a103; -[CTPSearchSessionDefault updateWithConfig:] */

void FUN_10580a100(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c180830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setConfig__11263dc28);
  return;
}



/* Entry: 10580a104; end: 10580a10b; -[CTPSearchSessionDefault age] */

undefined4 FUN_10580a104(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10580a10c; end: 10580a157; -[CTPSearchSessionDefault countryCode] */

void FUN_10580a10c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10580a158; end: 10580a19f; -[CTPSearchSessionDefault location] */

void FUN_10580a158(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10580a1a0; end: 10580a1e7; -[CTPSearchSessionDefault bitmojiAvatarId] */

void FUN_10580a1a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10580a1e8; end: 10580a23b; -[CTPSearchSessionDefault .cxx_destruct] */

void FUN_10580a1e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10580a23c; end: 10580a307; -[CTPSearchSessionFactoryDefault initWithUserBirthdayProvider:bitmojiAvatarProvider:locationProvider:] */

undefined1 *
FUN_10580a23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ea6f8;
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



/* Entry: 10580a308; end: 10580a3d3; -[CTPSearchSessionFactoryDefault previewSearchSessionWithSuperSessionId:config:] */

void FUN_10580a308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010befe7e0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126bebe8;
  _objc_alloc(PTR_PTR_1126bebe8);
  func_0x00010c04f7e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10580a3d4; end: 10580a40f; -[CTPSearchSessionFactoryDefault .cxx_destruct] */

void FUN_10580a3d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10580a410; end: 10580a483; -[CTPSearchStrategyFactoryDefault initWithNetworkSearchClient:] */

undefined1 * FUN_10580a410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea700;
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



/* Entry: 10580a484; end: 10580a4b3; -[CTPSearchStrategyFactoryDefault createNetworkStrategy] */

void FUN_10580a484(void)

{
  _objc_alloc(PTR_PTR_1126bebf0);
  func_0x00010c02f4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10580a4b4; end: 10580a4bf; -[CTPSearchStrategyFactoryDefault .cxx_destruct] */

void FUN_10580a4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10580a4c0; end: 10580a533; -[CTPSearchStrategyNetwork initWithNetworkSearchClient:] */

undefined1 * FUN_10580a4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea708;
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



/* Entry: 10580a534; end: 10580a5ef; -[CTPSearchStrategyNetwork searchWithSession:query:] */

void FUN_10580a534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0b8600(param_4,param_2,&PTR___NSConcreteGlobalBlock_1108b5918);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1549a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108b5958);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10580a5f0; end: 10580a69f;  */

void FUN_10580a5f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bebf8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d4a0(param_2);
  uVar3 = param_2;
  func_0x00010c250f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c051460(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10580a6a0; end: 10580a8ab;  */

void FUN_10580a6a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10580a8ac;
  uStack_50 = 0x10580a8bc;
  uStack_48 = 0;
  uVar1 = param_2;
  func_0x00010c11d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126beba0;
  _objc_retain();
  _objc_alloc(puVar2);
  uVar3 = uVar1;
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ec0(uVar1);
  uVar4 = uVar1;
  func_0x00010c250f20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c051580(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126bec08;
  _objc_alloc(PTR_PTR_1126bec08);
  uVar1 = param_2;
  func_0x00010bf66180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fe80(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10580a8ac; end: 10580a8c3;  */

void FUN_10580a8ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10580a8c4; end: 10580ab73;  */

void FUN_10580a8c4(long param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_140;
  
  puVar5 = PTR_PTR_1126af5d0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar8 = param_2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  puVar10 = param_2;
  if (puVar8 != (undefined *)0x0) {
    bVar1 = false;
    puStack_140 = (undefined *)0x0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        lVar11 = *(long *)((long)puVar10 * 8);
        lVar9 = lVar11;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x00010bf529e0();
        _objc_release(lVar9);
        if (lVar3 != 0) {
          lVar9 = lVar11;
          func_0x00010c1554e0();
          puVar4 = PTR_PTR_1126bec00;
          _objc_alloc(PTR_PTR_1126bec00);
          func_0x00010c1554e0(lVar11);
          lVar3 = lVar11;
          func_0x00010c084fc0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2480a0(lVar11);
          func_0x00010c042d40(puVar4);
          _objc_release(lVar3);
          func_0x00010befa120(puVar2);
          func_0x00010c1554e0();
          if (lVar11 == 0x10) {
            puStack_140 = puVar2;
            func_0x00010bfecde0();
          }
          bVar1 = (bool)(lVar9 == 0x20 | bVar1);
          _objc_release(puVar4);
        }
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar10);
      puVar8 = param_2;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
    _objc_release(param_2);
    if (bVar1) {
      func_0x00010bf529e0(puVar2);
    }
    if (puStack_140 == (undefined *)0x0) goto LAB_10580aaec;
    puVar10 = puVar2;
    func_0x00010c0dfd20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(puVar2);
    func_0x00010c066b00(puVar2);
  }
  _objc_release(puVar10);
LAB_10580aaec:
  puVar8 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar7 = *(long *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 8);
    puVar8 = *(undefined **)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10580ab74; end: 10580abbb;  */

void FUN_10580ab74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10580abbc; end: 10580abc7; -[CTPSearchStrategyNetwork .cxx_destruct] */

void FUN_10580abbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10580abc8; end: 10580ae87; -[CTPCustomStickerServicesImpl initWithItemsPersistence:contentManager:customStickerClient:itemTransformer:userStorageServices:repositoryExperiments:grapheneRegistry:asyncQueueProvider:currentUserId:] */

undefined8 *
FUN_10580abc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ea710;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bec10;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126bec18;
    _objc_alloc();
    uVar2 = param_7;
    func_0x00010bf87660(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d980();
    uVar4 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[9];
    puVar1[9] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10580ae88; end: 10580af8b; -[CTPCustomStickerServicesImpl _localCustomStickerCTPItemWithCTId:imageDimensions:origin:isAnimated:] */

void FUN_10580ae88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010916182c(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf15d80(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126ba838;
  _objc_alloc(PTR_PTR_1126ba838);
  func_0x00010c007d00(param_1,param_2);
  puVar4 = PTR_PTR_1126baa60;
  _objc_alloc(PTR_PTR_1126baa60);
  func_0x00010c01fe20();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10580af8c; end: 10580affb; -[CTPCustomStickerServicesImpl _dimensionsForImageData:] */

undefined1  [16]
FUN_10580af8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c008240();
  _objc_release(param_5);
  func_0x00010c23d0a0(puVar1);
  _objc_release(puVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10580affc; end: 10580b15b; -[CTPCustomStickerServicesImpl _persistedItemForCTPItem:feedType:feedsTreeContext:] */

void FUN_10580affc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  func_0x00010c084c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1196a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  puVar4 = PTR_PTR_1126bacd0;
  _objc_alloc(PTR_PTR_1126bacd0);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126badb8;
  func_0x00010c11fd80(PTR_PTR_1126badb8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ffe0(puVar4,param_2,uVar1,puVar5,uVar6,0,puVar3,
                      &PTR____CFConstantStringClassReference_110db1158,0,0,0);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10580b15c; end: 10580b3df; -[CTPCustomStickerServicesImpl addCustomSticker:origin:isAnimated:] */

void FUN_10580b15c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x0001091615ec();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bdc2560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar5 = param_1;
    func_0x00010be11e60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      puVar7 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(puVar1);
      _objc_release(puVar7);
      _objc_retain(puVar1);
      _objc_release(lVar5);
      goto LAB_10580b368;
    }
  }
  _objc_initWeak(auStack_68,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  uStack_70 = param_4;
  uStack_6c = param_5;
  _objc_retain(uVar4);
  _objc_retain(puVar3);
  func_0x00010c126b60(uVar8);
  _objc_release(uVar8);
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
LAB_10580b368:
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10580b3e0; end: 10580b7fb;  */

void FUN_10580b3e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long unaff_x23;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_198 [8];
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  undefined4 *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)(param_3 + 0x48);
  lVar7 = param_4;
  _objc_loadWeakRetained();
  if (((int)param_4 == 0) || (ppuVar1 == (undefined **)0x0)) {
    lVar4 = param_3 + 0x48;
    _objc_loadWeakRetained(lVar4);
    func_0x00010be53020();
    _objc_release(lVar4);
    ppuVar8 = *(undefined ***)(param_3 + 0x20);
    ppuVar5 = (undefined **)PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar5;
    func_0x00010c0d9840(ppuVar8);
    _objc_release(ppuVar5);
    func_0x00010bf436e0(*(undefined8 *)(param_3 + 0x20));
  }
  else {
    puStack_100 = (undefined8 *)(param_3 + 0x28);
    func_0x00010be01a40(ppuVar1);
    puStack_108 = (undefined4 *)(param_3 + 0x50);
    puStack_110 = (undefined1 *)(param_3 + 0x54);
    ppuVar8 = ppuVar1;
    func_0x00010be4f280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c1067a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = (undefined8 *)(param_3 + 0x40);
    func_0x00010c1d0560();
    _objc_release(ppuVar5);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
    func_0x00010c1067a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(ppuVar5);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
    func_0x00010be73640();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010be73640();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar1;
    func_0x00010be73640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed51e0(ppuVar1);
    ppuVar3 = ppuVar1;
    func_0x00010c085200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = ppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = ppuVar2;
    func_0x00010bfa3dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_128 = ppuVar2;
    ppuStack_120 = ppuVar5;
    ppuStack_118 = unaff_x25;
    ppuStack_98 = ppuVar2;
    ppuStack_90 = ppuVar5;
    ppuStack_88 = unaff_x25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = unaff_x27;
    func_0x00010c28f160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(ppuVar3);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10580b7fc;
    puStack_e0 = &UNK_1108b5978;
    unaff_x26 = &puStack_f8;
    lVar7 = param_3 + 0x48;
    _objc_copyWeak(auStack_b8);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar9);
    uStack_d8 = uVar9;
    _objc_retain(ppuVar8);
    uVar9 = *unaff_x24;
    ppuStack_d0 = ppuVar8;
    _objc_retain(uVar9);
    uVar10 = *puStack_100;
    uStack_c8 = uVar9;
    _objc_retain(uVar10);
    uStack_a0 = *puStack_108;
    uStack_9c = *puStack_110;
    param_3 = param_3 + 0x48;
    uStack_c0 = uVar10;
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    _objc_loadWeakRetained();
    unaff_x23 = param_3;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &puStack_f8;
    func_0x00010c297260(ppuVar5);
    _objc_release(unaff_x23);
    _objc_release(param_3);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(ppuStack_d0);
    _objc_release(uStack_d8);
    _objc_destroyWeak(auStack_b8);
    _objc_release(ppuVar5);
    _objc_release(ppuStack_118);
    _objc_release(ppuStack_120);
    _objc_release(ppuStack_128);
    _objc_release(ppuVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 8);
  ppuVar3 = ppuVar1;
  __Unwind_Resume();
  pcStack_138 = FUN_10580b7fc;
  ppuStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  ppuStack_180 = unaff_x26;
  ppuStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  ppuStack_160 = ppuVar5;
  lStack_158 = param_3;
  ppuStack_150 = ppuVar8;
  ppuStack_148 = ppuVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar7);
  _objc_retain(ppuVar2);
  ppuVar1 = ppuVar3 + 8;
  _objc_loadWeakRetained(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010be59620();
    _objc_release(ppuVar1);
    puVar11 = ppuVar3[4];
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be53020();
    _objc_release(ppuVar1);
    puVar11 = ppuVar3[4];
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(puVar11);
  _objc_release(puVar6);
  ppuVar1 = ppuVar3 + 8;
  _objc_loadWeakRetained(ppuVar1);
  ppuVar5 = ppuVar1;
  func_0x00010c288ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_198,ppuVar3 + 8);
  puVar11 = ppuVar3[4];
  _objc_retain(puVar11);
  func_0x00010befa760(ppuVar3[9],ppuVar3[10],ppuVar5);
  _objc_release(uVar9);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_198);
  _objc_release(ppuVar2);
  _objc_release(lVar7);
  return;
}



/* Entry: 10580b7fc; end: 10580b9db;  */

void FUN_10580b7fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  if (param_3 == 0) {
    func_0x00010be59620();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be53020();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c288ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  func_0x00010befa760(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),lVar3);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10580b9dc; end: 10580ba33;  */

void FUN_10580b9dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c288ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43a60();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10580ba34; end: 10580bb77; -[CTPCustomStickerServicesImpl deleteCustomSticker:] */

void FUN_10580ba34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c085200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010bf87460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10580bb78; end: 10580bc83;  */

void FUN_10580bb78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10580bc84;
  puStack_68 = &UNK_1108b59d8;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10580bc84; end: 10580be77;  */

void FUN_10580bc84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar1;
      func_0x00010c1067a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c1067a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    func_0x00010be59620(lVar1);
    lVar2 = lVar1;
    func_0x00010c288ca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    func_0x00010befa720(lVar2);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10580be78; end: 10580beef;  */

void FUN_10580be78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c288ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43a60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10580bef0; end: 10580bf97; -[CTPCustomStickerServicesImpl triggerSyncJob] */

void FUN_10580bef0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10580bf98; end: 10580bfdb;  */

void FUN_10580bf98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c288ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43a60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10580bfdc; end: 10580c023; -[CTPCustomStickerServicesImpl _logSuccessOperation:] */

void FUN_10580bfdc(undefined8 param_1)

{
  func_0x00010bf61f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a44a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10580c024; end: 10580c0af; -[CTPCustomStickerServicesImpl _logFailureForOperation:errorType:] */

void FUN_10580c024(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  func_0x00010bf61f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a44a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10580c0b0; end: 10580c25b; -[CTPCustomStickerServicesImpl updateCustomStickerRankID:completion:] */

void FUN_10580c0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126badb8;
  func_0x00010c11fd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c085200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x00010c286c00(uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10580c25c; end: 10580c387;  */

void FUN_10580c25c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010580c2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  puVar3 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c085200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10580c388;
  puStack_60 = &UNK_11085a1b8;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uStack_58 = uVar7;
  func_0x00010c286c00(lVar6,param_2,uVar1,puVar3,uVar2,&puStack_78);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uStack_58);
  _objc_release(puVar3);
  return;
}



/* Entry: 10580c388; end: 10580c3ef;  */

void FUN_10580c388(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_10580c3dc;
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    lVar3 = param_3;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
    lVar3 = 0;
  }
  (*pcVar4)(lVar1,uVar2,lVar3);
LAB_10580c3dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10580c3f0; end: 10580c513; -[CTPCustomStickerServicesImpl _fetchItemForCTId:] */

void FUN_10580c3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  pcStack_48 = FUN_10580c514;
  uStack_40 = 0x10580c524;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0843a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10580c514; end: 10580c52b;  */

void FUN_10580c514(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10580c52c; end: 10580c60f;  */

void FUN_10580c52c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b0cb8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c084460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10580c610; end: 10580c72f; -[CTPCustomStickerServicesImpl _updateChatHometabFeedCacheIfNecessaryWithItem:] */

void FUN_10580c610(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be73640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa3dc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c28f160(uVar2,param_2,lVar3,puVar4,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10580c730; end: 10580c733;  */

void FUN_10580c730(void)

{
  return;
}



/* Entry: 10580c734; end: 10580c73b; -[CTPCustomStickerServicesImpl itemsPersistence] */

undefined8 FUN_10580c734(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10580c73c; end: 10580c76b; -[CTPCustomStickerServicesImpl setItemsPersistence:] */

void FUN_10580c73c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10580c76c; end: 10580c773; -[CTPCustomStickerServicesImpl contentManager] */

undefined8 FUN_10580c76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10580c774; end: 10580c7a3; -[CTPCustomStickerServicesImpl setContentManager:] */

void FUN_10580c774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580c7a4; end: 10580c7ab; -[CTPCustomStickerServicesImpl performer] */

undefined8 FUN_10580c7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10580c7ac; end: 10580c7db; -[CTPCustomStickerServicesImpl setPerformer:] */

void FUN_10580c7ac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10580c7dc; end: 10580c7e3; -[CTPCustomStickerServicesImpl itemTransformer] */

undefined8 FUN_10580c7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10580c7e4; end: 10580c813; -[CTPCustomStickerServicesImpl setItemTransformer:] */

void FUN_10580c7e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10580c814; end: 10580c81b; -[CTPCustomStickerServicesImpl updateProcessor] */

undefined8 FUN_10580c814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10580c81c; end: 10580c84b; -[CTPCustomStickerServicesImpl setUpdateProcessor:] */

void FUN_10580c81c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10580c84c; end: 10580c853; -[CTPCustomStickerServicesImpl repositoryExperiments] */

undefined8 FUN_10580c84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10580c854; end: 10580c883; -[CTPCustomStickerServicesImpl setRepositoryExperiments:] */

void FUN_10580c854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580c884; end: 10580c88b; -[CTPCustomStickerServicesImpl customStickerServicesLogger] */

undefined8 FUN_10580c884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10580c88c; end: 10580c8bb; -[CTPCustomStickerServicesImpl setCustomStickerServicesLogger:] */

void FUN_10580c88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580c8bc; end: 10580c8c3; -[CTPCustomStickerServicesImpl preferences] */

undefined8 FUN_10580c8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10580c8c4; end: 10580c8f3; -[CTPCustomStickerServicesImpl setPreferences:] */

void FUN_10580c8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580c8f4; end: 10580c8fb; -[CTPCustomStickerServicesImpl queue] */

undefined8 FUN_10580c8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10580c8fc; end: 10580c92b; -[CTPCustomStickerServicesImpl setQueue:] */

void FUN_10580c8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580c92c; end: 10580c933; -[CTPCustomStickerServicesImpl currentUserId] */

undefined8 FUN_10580c92c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10580c934; end: 10580c963; -[CTPCustomStickerServicesImpl setCurrentUserId:] */

void FUN_10580c934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580c964; end: 10580c9f3; -[CTPCustomStickerServicesImpl .cxx_destruct] */

void FUN_10580c964(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10580c9f4; end: 10580cbaf; -[CTPCustomStickerServicesImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10580c9f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b5a58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10580cbcc;
  puStack_60 = &UNK_1108b5a78;
  _objc_retain();
  puStack_58 = puVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126bec20;
  _objc_alloc_init(PTR_PTR_1126bec20);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(puVar2);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b860(puVar3);
  _objc_release(puVar4);
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11272a238);
  }
  _objc_retain(uVar5);
  func_0x00010bf9d660(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 10580cbb0; end: 10580cbcb;  */

void FUN_10580cbb0(void)

{
  _objc_alloc_init(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10580cbcc; end: 10580cc93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10580cbcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puStack_100;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bae10;
  _objc_alloc();
  puVar2 = PTR_PTR_1126bae28;
  _objc_alloc();
  func_0x00010c029100();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0553c0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126bec28;
    _objc_alloc();
    puVar3 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3 + _DAT_11272a218;
      _objc_loadWeakRetained();
    }
    puVar5 = puVar4;
    func_0x00010c085220();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    puVar7 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6 + _DAT_11272a224;
      _objc_loadWeakRetained();
    }
    puVar8 = puVar7;
    func_0x00010bf4ca20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    puVar10 = (undefined *)0x0;
    if (puVar9 != (undefined *)0x0) {
      puVar10 = puVar9 + _DAT_11272a220;
      _objc_loadWeakRetained();
    }
    puVar11 = puVar10;
    func_0x00010bf61ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar2 + 0x20);
    puVar12 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    if (puVar12 == (undefined *)0x0) {
      puStack_100 = (undefined *)0x0;
    }
    else {
      puStack_100 = puVar12 + _DAT_11272a22c;
      _objc_loadWeakRetained();
    }
    puVar13 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    puVar14 = (undefined *)0x0;
    if (puVar13 != (undefined *)0x0) {
      puVar14 = puVar13 + _DAT_11272a21c;
      _objc_loadWeakRetained();
    }
    puVar15 = puVar14;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    puVar17 = (undefined *)0x0;
    if (puVar16 != (undefined *)0x0) {
      puVar17 = puVar16 + _DAT_11272a230;
      _objc_loadWeakRetained();
    }
    puVar18 = puVar17;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    puVar20 = (undefined *)0x0;
    if (puVar19 != (undefined *)0x0) {
      puVar20 = puVar19 + _DAT_11272a234;
      _objc_loadWeakRetained();
    }
    puVar21 = puVar20;
    func_0x00010bf0c120();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar2 + 0x28;
    _objc_loadWeakRetained();
    if (puVar2 == (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = puVar2 + _DAT_11272a214;
      _objc_loadWeakRetained();
    }
    puVar22 = puVar25;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0205c0(puVar1,param_2,puVar5,puVar8,puVar11,uVar24,puStack_100,puVar15,puVar18,
                        puVar21,puVar23);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar25);
    _objc_release(puVar2);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puStack_100);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10580cc94; end: 10580cf97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10580cc94(long param_1,undefined8 param_2)

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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uStack_c0;
  
  puVar1 = PTR_PTR_1126bec28;
  _objc_alloc();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_11272a218;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar3;
  func_0x00010c085220();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = lVar5 + _DAT_11272a224;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar6;
  func_0x00010bf4ca20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = lVar8 + _DAT_11272a220;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar9;
  func_0x00010bf61ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  lVar11 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar11 == 0) {
    uStack_c0 = 0;
  }
  else {
    uStack_c0 = lVar11 + _DAT_11272a22c;
    _objc_loadWeakRetained();
  }
  lVar12 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + _DAT_11272a21c;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar13;
  func_0x00010bf9c660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar16 = 0;
  if (lVar15 != 0) {
    lVar16 = lVar15 + _DAT_11272a230;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar16;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar19 = 0;
  if (lVar18 != 0) {
    lVar19 = lVar18 + _DAT_11272a234;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar19;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_11272a214;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar24;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0205c0(puVar1,param_2,lVar4,lVar7,lVar10,uVar23,uStack_c0,lVar14,lVar17,lVar20,lVar22
                     );
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uStack_c0);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
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



/* Entry: 10580cf98; end: 10580d033; -[CTPCustomStickerServicesImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10580cf98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a238,0);
  _objc_destroyWeak(param_1 + _DAT_11272a234);
  _objc_destroyWeak(param_1 + _DAT_11272a230);
  _objc_destroyWeak(param_1 + _DAT_11272a22c);
  _objc_destroyWeak(param_1 + _DAT_11272a228);
  _objc_destroyWeak(param_1 + _DAT_11272a224);
  _objc_destroyWeak(param_1 + _DAT_11272a220);
  _objc_destroyWeak(param_1 + _DAT_11272a21c);
  _objc_destroyWeak(param_1 + _DAT_11272a218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a214);
  return;
}



/* Entry: 10580d034; end: 10580d07f; -[CTPCustomStickerServicesLogger initWithGrapheneRegistry:] */

long FUN_10580d034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10580d080; end: 10580d297; -[CTPCustomStickerServicesLogger logCustomStickerEvent:updateTarget:success:error:count:] */

void FUN_10580d080(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  ppuVar1 = (undefined **)PTR_PTR_1126bec30;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dac918;
  if (param_3 != 1) {
    ppuVar2 = (undefined **)0x0;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110e04f78;
  if (param_3 != 0) {
    ppuVar5 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de7698;
  if (param_4 != 1) {
    ppuVar2 = (undefined **)0x0;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110dea798;
  if (param_4 != 0) {
    ppuVar4 = ppuVar2;
  }
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar5);
  func_0x00010bf61f20(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar2;
  func_0x00010c2ac460(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110de3f98,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar5 = ppuVar1;
  if ((param_5 & 1) == 0) {
    uVar3 = param_6;
    func_0x00010bf3ec40(param_6);
    func_0x00010c0df780(ppuVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  else {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a20;
    func_0x00010bf6e340(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1a20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf63040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10580d298; end: 10580d2a3; -[CTPCustomStickerServicesLogger .cxx_destruct] */

void FUN_10580d298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10580d2a4; end: 10580d46f; -[CTPCustomStickerUpdateProcessor initWithDocObjectContext:customStickerClient:contentManager:persistenceService:logger:repositoryExperiments:] */

long FUN_10580d2a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_6;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
    _objc_release(uVar1);
    puVar2 = &UNK_10f2fd777;
    _dispatch_queue_create(&UNK_10f2fd777,0);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar1);
    puVar2 = &UNK_10f2fd796;
    _dispatch_queue_create(&UNK_10f2fd796,0);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_7;
    _objc_release(uVar1);
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_8;
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10580d470; end: 10580d7b7; -[CTPCustomStickerUpdateProcessor addPendingUpdateForCustomSticker:customStickerImageData:customStickerImageDimensions:customStickerOrigin:isAnimated:completionQueue:completion:] */

void FUN_10580d470(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7,undefined1 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  
  dVar8 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  auStack_90[0] = 0;
  uStack_98 = 0;
  func_0x00010c156d40(PTR_PTR_1126bec38,param_4,auStack_90,&uStack_98);
  uVar2 = auStack_90[0];
  _objc_retain(auStack_90[0]);
  uVar1 = uStack_98;
  _objc_retain(uStack_98);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126bec40;
  _objc_alloc();
  uVar6 = param_6;
  func_0x00010c156ce0(param_6,param_4,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf15d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf15d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006c20(puVar4,param_4,param_5,uVar6,uVar7,uVar5,0,(long)dVar8,(int)param_1,
                      (int)param_2,param_7,param_8);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10580d7b8;
  puStack_a8 = &UNK_11084f688;
  _objc_retain(puVar4);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  puStack_f0 = puVar3;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10580d844;
  puStack_d8 = &UNK_1108837b0;
  puStack_a0 = puVar4;
  _objc_retain(param_9);
  uStack_d0 = param_9;
  _objc_retain(param_10);
  uStack_c8 = param_10;
  func_0x00010c0f8500(uVar6,param_4,&puStack_c0,uVar7,&puStack_f0);
  _objc_release(uVar6);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_a0);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10580d7b8; end: 10580d843;  */

void FUN_10580d7b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105812394(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10580d844; end: 10580d8c3;  */

void FUN_10580d844(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10580d8c4;
  puStack_48 = &UNK_1108b5ae0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  uStack_38 = param_2;
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10580d8c4; end: 10580d8d7;  */

void FUN_10580d8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010580d8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10580d8d8; end: 10580daab; -[CTPCustomStickerUpdateProcessor addPendingDeleteForCustomSticker:completionQueue:completion:] */

void FUN_10580d8d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126bec48;
  _objc_alloc();
  func_0x00010c006c40();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10580daac;
  puStack_78 = &UNK_110897108;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10580de88;
  puStack_a8 = &UNK_1108837b0;
  puStack_68 = puVar2;
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(param_5);
  uStack_98 = param_5;
  func_0x00010c0f8500(uVar3,param_2,&puStack_90,uVar4,&puStack_c0);
  _objc_release(uVar3);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10580daac; end: 10580de87;  */

void FUN_10580daac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  undefined **appuStack_1f0 [9];
  undefined1 auStack_1a8 [24];
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bec40);
  if (param_2 == 0) {
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_180,param_2);
  }
  puVar4 = &uStack_1f1;
  FUN_1058117bc(puVar4);
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_210 = 0;
  puVar6 = puVar5;
  func_0x00010bf529e0(puVar5);
  func_0x0001004c2bb4(&uStack_210,puVar6);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar12 = *plStack_130;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(puVar5);
        }
        uVar11 = *(undefined8 *)(lStack_138 + (long)puVar13 * 8);
        _objc_retain(uVar11);
        uStack_f8 = uVar11;
        func_0x0001004c2d3c(&uStack_210,&uStack_f8);
        _objc_release(uStack_f8);
        puVar13 = puVar13 + 1;
      } while (puVar6 != puVar13);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  func_0x0001004c2e3c(appuStack_1f0,0xc,puVar4,&uStack_210);
  puStack_e8 = (undefined1 *)0x0;
  puStack_e0 = (undefined1 *)0x0;
  uStack_d8 = 0;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  puVar7 = &uStack_180;
  func_0x0001000e77a0(puVar7,appuStack_1f0,&puStack_e8,&uStack_140);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_e8 != (undefined1 *)0x0) {
    puStack_e0 = puStack_e8;
    __ZdlPv();
  }
  plVar3 = plStack_188;
  appuStack_1f0[0] = &PTR_FUN_110862700;
  plStack_188 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_e8 = auStack_1a8;
  func_0x000100105004(&puStack_e8);
  puStack_e8 = (undefined1 *)&uStack_210;
  func_0x000100105004(&puStack_e8);
  _objc_release(puVar5);
  func_0x0001000e76e0(&uStack_158);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126bec50;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8 = puVar7;
    func_0x00010bfb1920(puVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_105812320(puVar5,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = 0;
  FUN_105813590();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(puVar7);
  lVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(param_2);
  __Unwind_Resume(lVar12);
  lVar9 = lVar12;
  func_0x000104bd46a0();
  pcStack_218 = FUN_10580de88;
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_10580df08;
  puStack_258 = &UNK_1108b5ae0;
  uVar1 = *(undefined8 *)(lVar9 + 0x20);
  uVar2 = *(undefined8 *)(lVar9 + 0x28);
  uStack_240 = uVar11;
  puStack_238 = puVar7;
  lStack_230 = lVar12;
  lStack_228 = param_2;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(uVar2);
  uStack_250 = uVar2;
  uStack_248 = uVar10;
  func_0x00010007380c(uVar1,&puStack_270);
  _objc_release(uStack_250);
  return;
}



/* Entry: 10580de88; end: 10580df07;  */

void FUN_10580de88(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10580df08;
  puStack_48 = &UNK_1108b5ae0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  uStack_38 = param_2;
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10580df08; end: 10580df1b;  */

void FUN_10580df08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010580df18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10580df1c; end: 10580e08f; -[CTPCustomStickerUpdateProcessor completePendingTasks] */

void FUN_10580df1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 8) = 0x100;
    lVar2 = param_1;
    _dispatch_group_create();
    _dispatch_group_enter();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10580e090;
    puStack_50 = &UNK_110896ce8;
    _objc_retain(lVar2);
    lStack_48 = lVar2;
    func_0x00010bdd2f40(param_1);
    _dispatch_group_enter(lVar2);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10580e098;
    puStack_78 = &UNK_110896ce8;
    _objc_retain(lVar2);
    lStack_70 = lVar2;
    func_0x00010bdd2de0(param_1);
    _objc_initWeak(auStack_98,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10580e0a0;
    puStack_a8 = &UNK_110876b10;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x000100bc0718(lVar2,uVar3,&puStack_c0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 10580e090; end: 10580e09f;  */

void FUN_10580e090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10580e0a0; end: 10580e137;  */

void FUN_10580e0a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0e1380(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86d80();
    _objc_release(lVar1);
    func_0x00010c210c20(param_1,param_2,0);
    lVar1 = param_1;
    func_0x00010bf43a80();
    if ((int)lVar1 != 0) {
      func_0x00010bf43a60(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


