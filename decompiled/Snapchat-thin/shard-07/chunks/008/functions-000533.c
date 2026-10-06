/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059e7c38; end: 1059e7c6f;  */

void FUN_1059e7c38(void)

{
  _objc_alloc(PTR_PTR_1126c0d80);
  func_0x00010c05db00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059e7c70; end: 1059e7d2f;  */

void FUN_1059e7c70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126c0d88;
  _objc_alloc(PTR_PTR_1126c0d88);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b460(puVar4,param_2,uVar5,uVar1,uVar3,uVar2,uVar6,*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059e7d30; end: 1059e7dbf;  */

void FUN_1059e7d30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126c0d90;
  _objc_alloc(PTR_PTR_1126c0d90);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c360(puVar2,param_2,uVar1,uVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c0d98;
  _objc_alloc(PTR_PTR_1126c0d98);
  func_0x00010c0635c0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059e7dc0; end: 1059e7e13;  */

void FUN_1059e7dc0(void)

{
  _objc_alloc_init(PTR_PTR_1126c0da0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059e7e14; end: 1059e7ecb; -[SCSpotlightNetworkServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e7e14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272d2b8,0);
  _objc_storeStrong(param_1 + _DAT_11272d2b4,0);
  _objc_destroyWeak(param_1 + _DAT_11272d2b0);
  _objc_destroyWeak(param_1 + _DAT_11272d2ac);
  _objc_destroyWeak(param_1 + _DAT_11272d2a8);
  _objc_destroyWeak(param_1 + _DAT_11272d2a4);
  _objc_destroyWeak(param_1 + _DAT_11272d2a0);
  _objc_destroyWeak(param_1 + _DAT_11272d29c);
  _objc_destroyWeak(param_1 + _DAT_11272d298);
  _objc_destroyWeak(param_1 + _DAT_11272d294);
  _objc_destroyWeak(param_1 + _DAT_11272d290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d28c);
  return;
}



/* Entry: 1059e7ecc; end: 1059e807f; -[SCSpotlightShareFetcher initWithMixerNetworkRequester:adConfigProvider:clientInfoProvider:contentObjectResolver:] */

undefined1 *
FUN_1059e7ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eb400;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126c0dc8;
    func_0x00010bf9cea0(0x4000000000000000,PTR_PTR_1126c0dc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1edb40(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059e8080; end: 1059e80af; -[SCSpotlightShareFetcher setRetryPolicy:] */

void FUN_1059e8080(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1059e80b0; end: 1059e80ef; -[SCSpotlightShareFetcher _scheduleTimer:] */

void FUN_1059e80b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
  func_0x00010c150080(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059e80f0; end: 1059e81c7; -[SCSpotlightShareFetcher _cancelTimer:] */

void FUN_1059e80f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e81c8; end: 1059e81fb;  */

void FUN_1059e81c8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddaf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059e81fc; end: 1059e823b; -[SCSpotlightShareFetcher _cancelTimerInPerformer:] */

void FUN_1059e81fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c069d00(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059e823c; end: 1059e8433; -[SCSpotlightShareFetcher fetchSnapForCompositeStoryId:senderUserId:metadataCompletion:] */

void FUN_1059e823c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126c0dd0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1059e8434;
  puStack_a0 = &UNK_1108cca18;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(param_5);
  uStack_88 = param_5;
  func_0x00010c03ffe0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_c0,auStack_78);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e8434; end: 1059e849f;  */

void FUN_1059e8434(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010be13f80(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059e84a0; end: 1059e84d3;  */

void FUN_1059e84a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9b840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059e84d4; end: 1059e8757; -[SCSpotlightShareFetcher _fetchSnapForCompositeStoryId:senderUserId:retryTimer:metadataCompletion:] */

void FUN_1059e84d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = uVar4;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1059e8758;
  puStack_b0 = &UNK_1108cca48;
  _objc_retain(uVar4);
  uStack_a8 = uVar4;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  ppuVar2 = &puStack_c8;
  uStack_90 = param_6;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  _objc_retain(param_4);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfaa9e0(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e8758; end: 1059e8947;  */

void FUN_1059e8758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001084713b0(param_3,uVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffa80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059e8948; end: 1059e89c7; -[SCSpotlightShareFetcher _isStoryNotFoundError:] */

bool FUN_1059e8948(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf3ec40(param_3);
    bVar1 = lVar3 == 0x194;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1059e89c8; end: 1059e91fb; -[SCSpotlightShareFetcher _didReceiveStoryLookupResponse:compositeStoryId:retryTimer:error:metadataCompletion:] */

void FUN_1059e89c8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_4 == 0) {
    uVar7 = param_2;
    func_0x00010be44480();
    if (((uVar7 & 1) != 0) || (uVar7 = param_6, func_0x00010c150080(), (uVar7 & 1) == 0)) {
      func_0x00010bddaf00(param_2);
      (**(code **)(param_8 + 0x10))(param_8,param_5,0,0);
    }
  }
  else {
    func_0x00010bddaf00();
    lVar1 = param_4;
    func_0x00010c2592e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf31ee0();
    if ((int)lVar2 == 0x26) {
      lVar2 = lVar1;
      func_0x00010c23cdc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c259cc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x000108f097e0(lVar2,0,lVar3,*(undefined8 *)(param_2 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        (**(code **)(param_8 + 0x10))(param_8,param_5,0,0);
      }
      else {
        lVar3 = lVar2;
        func_0x00010c23cde0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lStack_b8 = lVar5;
        func_0x00010c08fa60();
        if (lStack_b8 == 0) {
          func_0x000108f5833c();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar6 = lVar2;
          func_0x00010c23cde0();
          _objc_retainAutoreleasedReturnValue();
          lStack_b8 = lVar6;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
        _objc_release(lVar3);
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c26f320();
        _objc_release(puVar8);
        lVar3 = lVar2;
        func_0x00010c2456a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        uStack_a0 = 0x1059e8ea4;
        puStack_98 = &UNK_1108ccaa8;
        uStack_80 = param_1;
        _objc_retain(lVar2);
        lStack_90 = lVar2;
        _objc_retain(param_5);
        lVar5 = lVar3;
        uStack_88 = param_5;
        func_0x000100504554(lVar3,&puStack_b0);
        _objc_release(lVar3);
        puVar9 = PTR_PTR_1126c0df0;
        _objc_alloc();
        lVar3 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c26d760();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        lVar10 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c26f2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2709c0();
        func_0x00010bf655e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar2;
        func_0x00010c2456a0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010c22c3a0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar1;
        func_0x000108f09284(lVar1,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2278);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar2;
        func_0x00010c23cde0();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar16;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar18;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07dce0();
        func_0x00010c000b20();
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(puVar8);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar6);
        _objc_release(lVar3);
        (**(code **)(param_8 + 0x10))(param_8,param_5,puVar9,1);
        _objc_release(puVar9);
        _objc_release(lVar5);
        _objc_release(uStack_88);
        _objc_release(lStack_90);
        _objc_release(lStack_b8);
      }
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    else {
      (**(code **)(param_8 + 0x10))(param_8,param_5,0,0);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059e91fc; end: 1059e9267; -[SCSpotlightShareFetcher .cxx_destruct] */

void FUN_1059e91fc(long param_1)

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



/* Entry: 1059e9268; end: 1059e935f;  */

void FUN_1059e9268(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf454e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f521b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x000108f51f98(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfd8280();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c085340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  puVar4 = PTR_PTR_1126c0df8;
  _objc_alloc(PTR_PTR_1126c0df8);
  func_0x00010c020020();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059e9360; end: 1059e965f; -[SCTopicPageNetworkRequester initWithUserId:httpMetadataService:httpRequestModifier:endpointManager:adConfigProvider:storiesCofExperimentServices:networkConnectivityMonitor:locationProvider:searchDeploymentProvider:] */

undefined8 *
FUN_1059e9360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126eb408;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_release(param_8);
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



/* Entry: 1059e9660; end: 1059e9777;  */

void FUN_1059e9660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e00;
  func_0x00010c275560(PTR_PTR_1126c0e00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059e9778; end: 1059e99af; -[SCTopicPageNetworkRequester fetchSnapsForTopic:topicStoryType:lastStreamToken:isCameosEnabled:suggestiveFilterMode:completion:] */

void FUN_1059e9778(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if (param_8 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar1 = (uint)uVar4 ^ 1;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (param_4 != 1) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) == 0) {
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1059e99b0;
      puStack_a8 = &UNK_1108a9e10;
      puVar3 = auStack_88;
      _objc_copyWeak(puVar3,auStack_68);
      _objc_retain(param_3);
      uStack_80 = 1;
      uStack_a0 = param_3;
      _objc_retain(param_5);
      uStack_98 = param_5;
      uStack_78 = param_7;
      uStack_70 = param_6;
      _objc_retain(param_8);
      lStack_90 = param_8;
      func_0x00010c0f7fc0(uVar4);
      _objc_release(lStack_90);
      _objc_release(uStack_98);
      uVar4 = uStack_a0;
    }
    else {
      puVar3 = auStack_e0;
      _objc_copyWeak(puVar3,auStack_68);
      _objc_retain(param_3);
      lStack_d8 = param_4;
      _objc_retain(param_5);
      uStack_d0 = param_7;
      uStack_c8 = param_6;
      _objc_retain(param_8);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(param_8);
      _objc_release(param_5);
      uVar4 = param_3;
    }
    _objc_release(uVar4);
    _objc_destroyWeak(puVar3);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e99b0; end: 1059e9a2f;  */

void FUN_1059e99b0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059e9a30; end: 1059e9f77; -[SCTopicPageNetworkRequester _fetchSnapsFromSearchForTopic:topicStoryType:lastStreamToken:isCameosEnabled:suggestiveFilterMode:completion:] */

void FUN_1059e9a30(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126c0e08;
  _objc_opt_new();
  func_0x00010c1e64e0();
  func_0x00010c1f9160(puVar1);
  func_0x00010c1f9600(puVar1);
  func_0x00010c1d64a0(puVar1);
  puVar2 = PTR_PTR_1126bb028;
  lVar11 = *(long *)(param_3 + 0x40);
  _objc_retain(lVar11);
  _objc_opt_new(puVar2);
  puVar12 = puVar2;
  func_0x00010059c064();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(puVar2);
  _objc_release(puVar12);
  lVar3 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar12 = PTR_PTR_1126bb020;
  if (lVar11 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    _objc_retain(lVar11);
    _objc_opt_new(puVar12);
    func_0x00010bf51c80(lVar11);
    func_0x00010c1b9520(puVar12);
    func_0x00010bf51c80(lVar11);
    func_0x00010c1c0e80(param_2,puVar12);
    func_0x00010bfe4080(lVar11);
    func_0x00010c1a9120(puVar12);
    lVar3 = lVar11;
    func_0x00010c2709c0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    func_0x00010c26f320(lVar3);
    func_0x00010c215e80(param_2 * 1000.0,puVar12);
    _objc_release(lVar3);
  }
  func_0x00010c1bf6c0(puVar2);
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar12;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216020(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(lVar11);
  func_0x00010c21e7c0(puVar1);
  _objc_release(puVar2);
  lVar11 = *(long *)(param_3 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c067fc0();
  _objc_release(lVar11);
  if (0 < lVar3) {
    func_0x00010c1cf620(puVar1);
  }
  lVar11 = *(long *)(param_3 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c154240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lVar3;
  func_0x00010bf16280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lVar3;
  func_0x00010c142020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
    lVar6 = lVar3;
    func_0x00010c142020();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_70 = lVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  _objc_release(lVar11);
  uVar13 = *(undefined8 *)(param_3 + 0x30);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar13,lVar5,&PTR____CFConstantStringClassReference_110e15978,puVar2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b5730;
  _objc_alloc();
  func_0x00010c01b560();
  _objc_initWeak(auStack_80,param_3);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1059e9f78;
  puStack_a8 = &UNK_11089ea10;
  _objc_retain(param_10);
  uStack_90 = param_10;
  _objc_retain(param_5);
  lStack_a0 = param_5;
  _objc_retain(puVar1);
  puStack_98 = puVar1;
  _objc_copyWeak(auStack_88,auStack_80);
  ppuVar10 = &puStack_c0;
  uVar9 = uVar8;
  func_0x00010c25f600(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_88);
  _objc_release(puStack_98);
  _objc_release(lStack_a0);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    __Unwind_Resume();
    _objc_retain(uVar9);
    if (ppuVar10 == (undefined **)0x0) {
      puVar12 = PTR_PTR_1126c0e10;
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain(0);
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*(long *)(param_5 + 0x30) + 0x10))
                  (*(long *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x20),0,0,0,0,0,0);
      }
      else {
        uVar13 = *(undefined8 *)(param_5 + 0x28);
        func_0x00010c15ffa0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        param_5 = param_5 + 0x38;
        _objc_loadWeakRetained(param_5);
        puVar2 = puVar12;
        func_0x00010c259300(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar12;
        func_0x00010c1568c0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94ea0(puVar12);
        func_0x00010be82200(param_5);
        _objc_release(puVar1);
        _objc_release(puVar2);
        _objc_release(param_5);
        _objc_release(uVar13);
      }
      _objc_release(puVar12);
      _objc_release(0);
    }
    else {
      (**(code **)(*(long *)(param_5 + 0x30) + 0x10))
                (*(long *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x20),0,0,0,0,0,0);
    }
    _objc_release(uVar9);
    return;
  }
  return;
}



/* Entry: 1059e9f78; end: 1059ea107;  */

void FUN_1059e9f78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x4;
  long in_x5;
  
  _objc_retain(in_x4);
  if (in_x5 == 0) {
    puVar1 = PTR_PTR_1126c0e10;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0,0,0,0,0,0);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c15ffa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      puVar3 = puVar1;
      func_0x00010c259300(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c1568c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94ea0(puVar1);
      func_0x00010be82200(param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_1);
      _objc_release(uVar2);
    }
    _objc_release(puVar1);
    _objc_release(0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0,0,0,0,0,0);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 1059ea108; end: 1059ea3f3; -[SCTopicPageNetworkRequester _fetchSnapsForTopic:topicStoryType:lastStreamToken:isCameosEnabled:suggestiveFilterMode:completion:] */

void FUN_1059ea108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001071d8b84(uVar1,param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  if (param_5 == 0) {
    func_0x00010bf17280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2588e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar7,uVar3,uVar2,uVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = param_5 != 0;
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010c25f600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ea3f4; end: 1059ea5eb;  */

void FUN_1059ea3f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x4;
  undefined *puVar5;
  
  puVar3 = PTR_PTR_1126b7608;
  puVar5 = PTR_PTR_1126b7600;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    _objc_retain(in_x4);
    _objc_alloc();
    func_0x00010c008360();
    _objc_release(in_x4);
    _objc_retain(0);
    puVar5 = PTR_PTR_1126b7608;
    _objc_retain(puVar3);
    _objc_opt_class(puVar5);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar5);
    puVar5 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) goto LAB_1059ea588;
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be81160();
  }
  else {
    _objc_retain(in_x4);
    _objc_alloc();
    func_0x00010c008360();
    _objc_release(in_x4);
    _objc_retain(0);
    puVar3 = PTR_PTR_1126b7600;
    _objc_retain(puVar5);
    _objc_opt_class(puVar3);
    puVar1 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar3);
    puVar4 = puVar5;
    if (((ulong)puVar1 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    if (puVar4 == (undefined *)0x0) {
LAB_1059ea588:
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
                 PTR____NSArray0__struct_11034ab48,0,0,0,0,0);
      puVar5 = (undefined *)0x0;
      goto LAB_1059ea5b4;
    }
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be80d20();
  }
  _objc_release(param_1);
  puVar5 = puVar3;
LAB_1059ea5b4:
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(0);
  return;
}



/* Entry: 1059ea5ec; end: 1059eabef; -[SCTopicPageNetworkRequester _processDeltaFetchResponse:topic:requestId:completion:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001059ea8ac */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1059ea5ec(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  uint uStack_604;
  long lStack_5e8;
  undefined *puStack_5d8;
  undefined *puStack_190;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar1 = param_3;
  func_0x00010bf98260();
  puVar29 = param_3;
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar29;
  func_0x00010bfdd7a0();
  if ((int)puVar32 == 0) {
    puVar32 = (undefined *)0x0;
LAB_1059ea730:
    _objc_release(puVar29);
  }
  else {
    puVar32 = param_3;
    func_0x00010bfa3f40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar32;
    func_0x00010c2754e0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar15;
    func_0x00010c25eca0();
    _objc_release(puVar15);
    _objc_release(puVar32);
    _objc_release(puVar29);
    puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar26 != (undefined *)0x0) {
      puVar29 = param_3;
      func_0x00010bfa3f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar29;
      func_0x00010c2754e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25eca0();
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      goto LAB_1059ea730;
    }
    puVar32 = (undefined *)0x0;
  }
  puVar29 = param_3;
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar29;
  func_0x00010bfdd7a0();
  if ((int)puVar15 == 0) {
    puStack_190 = (undefined *)0x0;
  }
  else {
    puVar15 = param_3;
    func_0x00010bfa3f40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar15;
    func_0x00010c2754e0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar26;
    func_0x00010c275240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar26);
    _objc_release(puVar15);
    _objc_release(puVar29);
    if (puVar31 == (undefined *)0x0) {
      puStack_190 = (undefined *)0x0;
      goto LAB_1059ea80c;
    }
    puVar29 = param_3;
    func_0x00010bfa3f40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar29;
    func_0x00010c2754e0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar15;
    func_0x00010c275240();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar26;
    FUN_1059eabf0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_release(puVar15);
  }
  _objc_release(puVar29);
LAB_1059ea80c:
  puVar29 = param_3;
  func_0x00010bfd9ca0();
  if ((int)puVar29 == 0) {
    puVar29 = (undefined *)0x0;
  }
  else {
    puVar15 = param_3;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar15;
    func_0x00010c25c6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = param_3;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar15;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar15 = puVar26;
    func_0x00010bf52a60();
    lVar22 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar31 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar22) {
          _objc_enumerationMutation(puVar26);
        }
        lVar25 = *(long *)((long)puVar31 * 8);
        lVar23 = lVar25;
        func_0x00010bf31ee0();
        if ((int)lVar23 == 0x26) {
          lVar23 = lVar25;
          func_0x00010c23cdc0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar25;
          func_0x00010bf454e0(lVar25);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x000108f52130();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          lVar2 = lVar25;
          func_0x00010c259cc0(lVar25);
          _objc_retainAutoreleasedReturnValue();
          lVar30 = lVar23;
          func_0x000108f097e0(lVar23,param_4,lVar2,*(undefined8 *)(param_1 + 0x20));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          lVar2 = lVar30;
          func_0x00010bf529e0();
          if (lVar2 != 0) {
            puVar4 = PTR_PTR_1126c0e18;
            _objc_alloc();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar5 = param_3;
            func_0x00010bfa3f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa4340();
            func_0x00010c0df760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar25;
            func_0x000108f09284(lVar25,puVar6);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar23;
            func_0x0001071d8d90(lVar23);
            _objc_retainAutoreleasedReturnValue();
            lVar28 = lVar23;
            func_0x00010c23cde0(lVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2753c0();
            FUN_1059e9268();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0545e0(puVar4);
            _objc_release(lVar25);
            _objc_release(lVar28);
            _objc_release(lVar7);
            _objc_release(lVar2);
            _objc_release(puVar6);
            _objc_release(puVar5);
            func_0x00010befa120(puVar24);
            _objc_release(puVar4);
          }
          _objc_release(lVar30);
          _objc_release(lVar3);
          _objc_release(lVar23);
        }
        puVar31 = puVar31 + 1;
      } while (puVar15 != puVar31);
      puVar15 = puVar26;
      func_0x00010bf52a60();
    }
    _objc_release(puVar26);
  }
  puVar15 = puVar24;
  func_0x00010bf529e0();
  puVar26 = puVar24;
  func_0x00010bf51e00();
  uVar17 = (ulong)((uint)(puVar15 != (undefined *)0x0) & ((uint)puVar1 ^ 1));
  uVar19 = 1;
  puVar1 = puVar26;
  puVar15 = puVar29;
  puVar31 = puVar32;
  puVar6 = puStack_190;
  (**(code **)(param_6 + 0x10))(param_6,param_4);
  uVar20 = (uint)puVar31;
  _objc_release(puVar26);
  _objc_release(puStack_190);
  _objc_release(puVar32);
  _objc_release(puVar29);
  _objc_release(puVar24);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar24 = param_3;
  func_0x00010c08fa60();
  if (puVar24 == (undefined *)0x10) {
    puVar15 = (undefined *)0x10;
    func_0x00010bfc3320(param_3);
    puVar29 = PTR_PTR_1126b0cd8;
    _objc_alloc();
    puVar1 = param_3;
    func_0x00010c01b1c0();
    puVar24 = puVar29;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
  }
  else {
    puVar24 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
    return;
  }
  ___stack_chk_fail();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar15);
  _objc_retain(uVar17);
  _objc_retain(uVar19);
  _objc_retain(puVar6);
  puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(puVar1);
  puVar24 = puVar1;
  func_0x00010bf52a60();
  lVar21 = lRam0000000000000000;
  while (puVar24 != (undefined *)0x0) {
    puVar32 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar21) {
        _objc_enumerationMutation(puVar1);
      }
      lVar25 = *(long *)((long)puVar32 * 8);
      lVar23 = lVar25;
      func_0x00010bf31ee0();
      if ((int)lVar23 == 0x26) {
        lVar23 = lVar25;
        func_0x00010c23cdc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar25;
        func_0x00010bf454e0(lVar25);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x000108f52130();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar25;
        func_0x00010c259cc0(lVar25);
        _objc_retainAutoreleasedReturnValue();
        lVar30 = lVar23;
        func_0x000108f097e0(lVar23,puVar15,lVar2,*(undefined8 *)(param_3 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar30;
        func_0x00010bf529e0();
        if (lVar2 != 0) {
          puVar26 = PTR_PTR_1126c0e18;
          _objc_alloc(PTR_PTR_1126c0e18);
          lVar2 = lVar25;
          func_0x000108f09284(lVar25,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2290);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar23;
          func_0x0001071d8d90(lVar23);
          _objc_retainAutoreleasedReturnValue();
          lVar28 = lVar23;
          func_0x00010c23cde0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2753c0();
          FUN_1059e9268();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0545e0(puVar26);
          _objc_release(lVar25);
          _objc_release(lVar28);
          _objc_release(lVar7);
          _objc_release(lVar2);
          func_0x00010befa120(puVar29);
          _objc_release(puVar26);
        }
        _objc_release(lVar30);
        _objc_release(lVar3);
        _objc_release(lVar23);
      }
      puVar32 = puVar32 + 1;
    } while (puVar24 != puVar32);
    puVar24 = puVar1;
    func_0x00010bf52a60();
  }
  _objc_release(puVar1);
  puVar24 = puVar29;
  func_0x00010bf51e00();
  uVar18 = (ulong)(uVar20 ^ 1);
  lVar21 = 1;
  puVar32 = puVar24;
  uVar16 = uVar19;
  (**(code **)(puVar6 + 0x10))(puVar6,puVar15);
  _objc_release(puVar24);
  _objc_release(puVar29);
  _objc_release(puVar6);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar32);
  _objc_retain(uVar16);
  _objc_retain(uVar18);
  _objc_retain(lVar21);
  puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar29 = puVar32;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  puStack_5d8 = puVar29;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  if (puStack_5d8 == (undefined *)0x0) {
    uStack_604 = 0;
    lStack_5e8 = 0;
    puVar15 = (undefined *)0x0;
    lVar25 = 0;
  }
  else {
    puVar15 = (undefined *)0x0;
    lVar25 = 0;
    lStack_5e8 = 0;
    uStack_604 = 1;
    do {
      puVar26 = (undefined *)0x0;
      lVar2 = lVar25;
      do {
        if (lRam0000000000000000 != lVar22) {
          _objc_enumerationMutation(puVar29);
        }
        lVar30 = *(long *)((long)puVar26 * 8);
        lVar25 = lVar30;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar25;
        func_0x00010bfdd7a0();
        if ((int)lVar3 == 0) {
LAB_1059eb204:
          _objc_release(lVar25);
        }
        else {
          lVar3 = lVar30;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar28 = lVar7;
          func_0x00010c275240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar7);
          _objc_release(lVar3);
          _objc_release(lVar25);
          if (lVar28 != 0) {
            lVar25 = lVar30;
            func_0x00010bfa3f40();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar25;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar3;
            func_0x00010c275240();
            _objc_retainAutoreleasedReturnValue();
            lVar28 = lVar7;
            FUN_1059eabf0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lStack_5e8);
            _objc_release(lVar7);
            _objc_release(lVar3);
            lStack_5e8 = lVar28;
            goto LAB_1059eb204;
          }
        }
        lVar25 = lVar30;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar25;
        func_0x00010bfdd7a0();
        puVar31 = puVar15;
        if ((int)lVar3 == 0) {
LAB_1059eb2dc:
          _objc_release(lVar25);
          puVar15 = puVar31;
        }
        else {
          lVar3 = lVar30;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar28 = lVar7;
          func_0x00010c25eca0();
          _objc_release(lVar7);
          _objc_release(lVar3);
          _objc_release(lVar25);
          puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar28 != 0) {
            lVar25 = lVar30;
            func_0x00010bfa3f40(lVar30);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar25;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25eca0();
            func_0x00010c0df7c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(lVar3);
            goto LAB_1059eb2dc;
          }
        }
        lVar3 = lVar30;
        func_0x00010bfd9ca0();
        lVar25 = lVar2;
        if ((int)lVar3 != 0) {
          lVar3 = lVar30;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010bfa4340();
          _objc_release(lVar3);
          if ((int)lVar7 == 0xeb) {
            lVar3 = lVar30;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar25 = lVar3;
            func_0x00010c25c6c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            _objc_release(lVar3);
            lVar2 = lVar30;
            func_0x00010bf98260();
            uStack_604 = (uint)lVar2;
            lVar2 = lVar30;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar2;
            func_0x00010bf32220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar7;
            func_0x00010bf52a60();
            lVar3 = lRam0000000000000000;
            while (lVar2 != 0) {
              lVar28 = 0;
              do {
                if (lRam0000000000000000 != lVar3) {
                  _objc_enumerationMutation(lVar7);
                }
                lVar27 = *(long *)(lVar28 * 8);
                lVar8 = lVar27;
                func_0x00010bf31ee0();
                if ((int)lVar8 == 0x26) {
                  lVar8 = lVar27;
                  func_0x00010c23cdc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar27;
                  func_0x00010bf454e0(lVar27);
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar9;
                  func_0x000108f52130();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar9);
                  lVar9 = lVar27;
                  func_0x00010c259cc0(lVar27);
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar8;
                  func_0x000108f097e0(lVar8,uVar16,lVar9,*(undefined8 *)(puVar1 + 0x20));
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar9);
                  lVar9 = lVar11;
                  func_0x00010bf529e0();
                  if (lVar9 != 0) {
                    puVar6 = PTR_PTR_1126c0e18;
                    _objc_alloc();
                    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    lVar9 = lVar30;
                    func_0x00010bfa3f40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfa4340();
                    func_0x00010c0df760(puVar31);
                    _objc_retainAutoreleasedReturnValue();
                    lVar12 = lVar27;
                    func_0x000108f09284(lVar27,puVar31);
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar8;
                    func_0x0001071d8d90(lVar8);
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar8;
                    func_0x00010c23cde0(lVar8);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2753c0();
                    FUN_1059e9268();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0545e0(puVar6);
                    _objc_release(lVar27);
                    _objc_release(lVar14);
                    _objc_release(lVar13);
                    _objc_release(lVar12);
                    _objc_release(puVar31);
                    _objc_release(lVar9);
                    func_0x00010befa120(puVar24);
                    _objc_release(puVar6);
                  }
                  _objc_release(lVar11);
                  _objc_release(lVar10);
                  _objc_release(lVar8);
                }
                lVar28 = lVar28 + 1;
              } while (lVar2 != lVar28);
              lVar2 = lVar7;
              func_0x00010bf52a60();
            }
            _objc_release(lVar7);
          }
        }
        puVar26 = puVar26 + 1;
        lVar2 = lVar25;
      } while (puVar26 != puStack_5d8);
      puStack_5d8 = puVar29;
      func_0x00010bf52a60();
    } while (puStack_5d8 != (undefined *)0x0);
    uStack_604 = uStack_604 ^ 1;
  }
  _objc_release(puVar29);
  puVar1 = puVar24;
  func_0x00010bf51e00();
  (**(code **)(lVar21 + 0x10))(lVar21,uVar16,puVar1,lVar25,uStack_604 & 1,1,puVar15,lStack_5e8);
  _objc_release(puVar1);
  _objc_release(lStack_5e8);
  _objc_release(puVar15);
  _objc_release(lVar25);
  _objc_release(puVar24);
  _objc_release(lVar21);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(puVar32);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar32 + 0x60,0);
  _objc_storeStrong(puVar32 + 0x58,0);
  _objc_storeStrong(puVar32 + 0x50,0);
  _objc_storeStrong(puVar32 + 0x48,0);
  _objc_storeStrong(puVar32 + 0x40,0);
  _objc_storeStrong(puVar32 + 0x38,0);
  _objc_storeStrong(puVar32 + 0x30,0);
  _objc_storeStrong(puVar32 + 0x28,0);
  _objc_storeStrong(puVar32 + 0x20,0);
  _objc_storeStrong(puVar32 + 0x18,0);
  _objc_storeStrong(puVar32 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar32 + 8,0);
  return;
}



/* Entry: 1059eabf0; end: 1059eacaf;  */

void FUN_1059eabf0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  uint uStack_454;
  long lStack_438;
  undefined *puStack_428;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar16 = param_1;
  func_0x00010c08fa60();
  if (lVar16 == 0x10) {
    param_4 = 0x10;
    func_0x00010bfc3320(param_1);
    puVar1 = PTR_PTR_1126b0cd8;
    _objc_alloc();
    param_3 = param_1;
    func_0x00010c01b1c0();
    puVar19 = puVar1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar19 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar16 = param_3;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (lVar16 != 0) {
    lVar26 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(param_3);
      }
      lVar23 = *(long *)(lVar26 * 8);
      lVar2 = lVar23;
      func_0x00010bf31ee0();
      if ((int)lVar2 == 0x26) {
        lVar2 = lVar23;
        func_0x00010c23cdc0();
        _objc_retainAutoreleasedReturnValue();
        lVar24 = lVar23;
        func_0x00010bf454e0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar24;
        func_0x000108f52130();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar24);
        lVar24 = lVar23;
        func_0x00010c259cc0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar2;
        func_0x000108f097e0(lVar2,param_4,lVar24,*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar24);
        lVar24 = lVar22;
        func_0x00010bf529e0();
        if (lVar24 != 0) {
          puVar1 = PTR_PTR_1126c0e18;
          _objc_alloc(PTR_PTR_1126c0e18);
          lVar24 = lVar23;
          func_0x000108f09284(lVar23,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2290);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          func_0x0001071d8d90(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar2;
          func_0x00010c23cde0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2753c0();
          FUN_1059e9268();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0545e0(puVar1);
          _objc_release(lVar23);
          _objc_release(lVar21);
          _objc_release(lVar4);
          _objc_release(lVar24);
          func_0x00010befa120(puVar19);
          _objc_release(puVar1);
        }
        _objc_release(lVar22);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      lVar26 = lVar26 + 1;
    } while (lVar16 != lVar26);
    lVar16 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar1 = puVar19;
  func_0x00010bf51e00();
  uVar15 = (ulong)(param_7 ^ 1);
  lVar16 = 1;
  puVar13 = puVar1;
  uVar14 = param_6;
  (**(code **)(param_8 + 0x10))(param_8,param_4);
  _objc_release(puVar1);
  _objc_release(puVar19);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(uVar14);
  _objc_retain(uVar15);
  _objc_retain(lVar16);
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar1 = puVar13;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  puStack_428 = puVar1;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  if (puStack_428 == (undefined *)0x0) {
    uStack_454 = 0;
    lStack_438 = 0;
    puVar25 = (undefined *)0x0;
    lVar26 = 0;
  }
  else {
    puVar25 = (undefined *)0x0;
    lVar26 = 0;
    lStack_438 = 0;
    uStack_454 = 1;
    do {
      puVar20 = (undefined *)0x0;
      lVar2 = lVar26;
      do {
        if (lRam0000000000000000 != lVar17) {
          _objc_enumerationMutation(puVar1);
        }
        lVar24 = *(long *)((long)puVar20 * 8);
        lVar26 = lVar24;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = lVar26;
        func_0x00010bfdd7a0();
        if ((int)lVar23 == 0) {
LAB_1059eb204:
          _objc_release(lVar26);
        }
        else {
          lVar23 = lVar24;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar23;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar3;
          func_0x00010c275240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          _objc_release(lVar23);
          _objc_release(lVar26);
          if (lVar22 != 0) {
            lVar26 = lVar24;
            func_0x00010bfa3f40();
            _objc_retainAutoreleasedReturnValue();
            lVar23 = lVar26;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar23;
            func_0x00010c275240();
            _objc_retainAutoreleasedReturnValue();
            lVar22 = lVar3;
            FUN_1059eabf0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lStack_438);
            _objc_release(lVar3);
            _objc_release(lVar23);
            lStack_438 = lVar22;
            goto LAB_1059eb204;
          }
        }
        lVar26 = lVar24;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = lVar26;
        func_0x00010bfdd7a0();
        puVar5 = puVar25;
        if ((int)lVar23 == 0) {
LAB_1059eb2dc:
          _objc_release(lVar26);
          puVar25 = puVar5;
        }
        else {
          lVar23 = lVar24;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar23;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar3;
          func_0x00010c25eca0();
          _objc_release(lVar3);
          _objc_release(lVar23);
          _objc_release(lVar26);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar22 != 0) {
            lVar26 = lVar24;
            func_0x00010bfa3f40(lVar24);
            _objc_retainAutoreleasedReturnValue();
            lVar23 = lVar26;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25eca0();
            func_0x00010c0df7c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar25);
            _objc_release(lVar23);
            goto LAB_1059eb2dc;
          }
        }
        lVar23 = lVar24;
        func_0x00010bfd9ca0();
        lVar26 = lVar2;
        if ((int)lVar23 != 0) {
          lVar23 = lVar24;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar23;
          func_0x00010bfa4340();
          _objc_release(lVar23);
          if ((int)lVar3 == 0xeb) {
            lVar23 = lVar24;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar26 = lVar23;
            func_0x00010c25c6c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            _objc_release(lVar23);
            lVar2 = lVar24;
            func_0x00010bf98260();
            uStack_454 = (uint)lVar2;
            lVar2 = lVar24;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010bf32220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar3;
            func_0x00010bf52a60();
            lVar23 = lRam0000000000000000;
            while (lVar2 != 0) {
              lVar22 = 0;
              do {
                if (lRam0000000000000000 != lVar23) {
                  _objc_enumerationMutation(lVar3);
                }
                lVar21 = *(long *)(lVar22 * 8);
                lVar4 = lVar21;
                func_0x00010bf31ee0();
                if ((int)lVar4 == 0x26) {
                  lVar4 = lVar21;
                  func_0x00010c23cdc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar21;
                  func_0x00010bf454e0(lVar21);
                  _objc_retainAutoreleasedReturnValue();
                  lVar7 = lVar6;
                  func_0x000108f52130();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar6);
                  lVar6 = lVar21;
                  func_0x00010c259cc0(lVar21);
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar4;
                  func_0x000108f097e0(lVar4,uVar14,lVar6,*(undefined8 *)(param_3 + 0x20));
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar6);
                  lVar6 = lVar8;
                  func_0x00010bf529e0();
                  if (lVar6 != 0) {
                    puVar9 = PTR_PTR_1126c0e18;
                    _objc_alloc();
                    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    lVar6 = lVar24;
                    func_0x00010bfa3f40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfa4340();
                    func_0x00010c0df760(puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    lVar10 = lVar21;
                    func_0x000108f09284(lVar21,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    lVar11 = lVar4;
                    func_0x0001071d8d90(lVar4);
                    _objc_retainAutoreleasedReturnValue();
                    lVar12 = lVar4;
                    func_0x00010c23cde0(lVar4);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2753c0();
                    FUN_1059e9268();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0545e0(puVar9);
                    _objc_release(lVar21);
                    _objc_release(lVar12);
                    _objc_release(lVar11);
                    _objc_release(lVar10);
                    _objc_release(puVar5);
                    _objc_release(lVar6);
                    func_0x00010befa120(puVar19);
                    _objc_release(puVar9);
                  }
                  _objc_release(lVar8);
                  _objc_release(lVar7);
                  _objc_release(lVar4);
                }
                lVar22 = lVar22 + 1;
              } while (lVar2 != lVar22);
              lVar2 = lVar3;
              func_0x00010bf52a60();
            }
            _objc_release(lVar3);
          }
        }
        puVar20 = puVar20 + 1;
        lVar2 = lVar26;
      } while (puVar20 != puStack_428);
      puStack_428 = puVar1;
      func_0x00010bf52a60();
    } while (puStack_428 != (undefined *)0x0);
    uStack_454 = uStack_454 ^ 1;
  }
  _objc_release(puVar1);
  puVar1 = puVar19;
  func_0x00010bf51e00();
  (**(code **)(lVar16 + 0x10))(lVar16,uVar14,puVar1,lVar26,uStack_454 & 1,1,puVar25,lStack_438);
  _objc_release(puVar1);
  _objc_release(lStack_438);
  _objc_release(puVar25);
  _objc_release(lVar26);
  _objc_release(puVar19);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar13 + 0x60,0);
  _objc_storeStrong(puVar13 + 0x58,0);
  _objc_storeStrong(puVar13 + 0x50,0);
  _objc_storeStrong(puVar13 + 0x48,0);
  _objc_storeStrong(puVar13 + 0x40,0);
  _objc_storeStrong(puVar13 + 0x38,0);
  _objc_storeStrong(puVar13 + 0x30,0);
  _objc_storeStrong(puVar13 + 0x28,0);
  _objc_storeStrong(puVar13 + 0x20,0);
  _objc_storeStrong(puVar13 + 0x18,0);
  _objc_storeStrong(puVar13 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar13 + 8,0);
  return;
}



/* Entry: 1059eacb0; end: 1059eb01f; -[SCTopicPageNetworkRequester _processSearchStoryCards:topic:requestId:streamToken:eof:completion:] */

void FUN_1059eacb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  uint uStack_404;
  long lStack_3e8;
  undefined *puStack_3d8;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar18 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar18 != 0) {
    lVar26 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar23 = *(long *)(lVar26 * 8);
      lVar3 = lVar23;
      func_0x00010bf31ee0();
      if ((int)lVar3 == 0x26) {
        lVar3 = lVar23;
        func_0x00010c23cdc0();
        _objc_retainAutoreleasedReturnValue();
        lVar24 = lVar23;
        func_0x00010bf454e0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar24;
        func_0x000108f52130();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar24);
        lVar24 = lVar23;
        func_0x00010c259cc0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar3;
        func_0x000108f097e0(lVar3,param_4,lVar24,*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar24);
        lVar24 = lVar22;
        func_0x00010bf529e0();
        if (lVar24 != 0) {
          puVar5 = PTR_PTR_1126c0e18;
          _objc_alloc(PTR_PTR_1126c0e18);
          lVar24 = lVar23;
          func_0x000108f09284(lVar23,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2290);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar3;
          func_0x0001071d8d90(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar3;
          func_0x00010c23cde0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2753c0();
          FUN_1059e9268();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0545e0(puVar5);
          _objc_release(lVar23);
          _objc_release(lVar21);
          _objc_release(lVar6);
          _objc_release(lVar24);
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
        }
        _objc_release(lVar22);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      lVar26 = lVar26 + 1;
    } while (lVar18 != lVar26);
    lVar18 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  uVar17 = (ulong)(param_7 ^ 1);
  lVar18 = 1;
  puVar15 = puVar5;
  uVar16 = param_6;
  (**(code **)(param_8 + 0x10))(param_8,param_4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar15);
  _objc_retain(uVar16);
  _objc_retain(uVar17);
  _objc_retain(lVar18);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = puVar15;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  puStack_3d8 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puStack_3d8 == (undefined *)0x0) {
    uStack_404 = 0;
    lStack_3e8 = 0;
    puVar25 = (undefined *)0x0;
    lVar26 = 0;
  }
  else {
    puVar25 = (undefined *)0x0;
    lVar26 = 0;
    lStack_3e8 = 0;
    uStack_404 = 1;
    do {
      puVar20 = (undefined *)0x0;
      lVar3 = lVar26;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        lVar24 = *(long *)((long)puVar20 * 8);
        lVar26 = lVar24;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = lVar26;
        func_0x00010bfdd7a0();
        if ((int)lVar23 == 0) {
LAB_1059eb204:
          _objc_release(lVar26);
        }
        else {
          lVar23 = lVar24;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar23;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar4;
          func_0x00010c275240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          _objc_release(lVar23);
          _objc_release(lVar26);
          if (lVar22 != 0) {
            lVar26 = lVar24;
            func_0x00010bfa3f40();
            _objc_retainAutoreleasedReturnValue();
            lVar23 = lVar26;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar23;
            func_0x00010c275240();
            _objc_retainAutoreleasedReturnValue();
            lVar22 = lVar4;
            FUN_1059eabf0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lStack_3e8);
            _objc_release(lVar4);
            _objc_release(lVar23);
            lStack_3e8 = lVar22;
            goto LAB_1059eb204;
          }
        }
        lVar26 = lVar24;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = lVar26;
        func_0x00010bfdd7a0();
        puVar7 = puVar25;
        if ((int)lVar23 == 0) {
LAB_1059eb2dc:
          _objc_release(lVar26);
          puVar25 = puVar7;
        }
        else {
          lVar23 = lVar24;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar23;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar4;
          func_0x00010c25eca0();
          _objc_release(lVar4);
          _objc_release(lVar23);
          _objc_release(lVar26);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar22 != 0) {
            lVar26 = lVar24;
            func_0x00010bfa3f40(lVar24);
            _objc_retainAutoreleasedReturnValue();
            lVar23 = lVar26;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25eca0();
            func_0x00010c0df7c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar25);
            _objc_release(lVar23);
            goto LAB_1059eb2dc;
          }
        }
        lVar23 = lVar24;
        func_0x00010bfd9ca0();
        lVar26 = lVar3;
        if ((int)lVar23 != 0) {
          lVar23 = lVar24;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar23;
          func_0x00010bfa4340();
          _objc_release(lVar23);
          if ((int)lVar4 == 0xeb) {
            lVar23 = lVar24;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar26 = lVar23;
            func_0x00010c25c6c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            _objc_release(lVar23);
            lVar3 = lVar24;
            func_0x00010bf98260();
            uStack_404 = (uint)lVar3;
            lVar3 = lVar24;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf32220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            lVar3 = lVar4;
            func_0x00010bf52a60();
            lVar23 = lRam0000000000000000;
            while (lVar3 != 0) {
              lVar22 = 0;
              do {
                if (lRam0000000000000000 != lVar23) {
                  _objc_enumerationMutation(lVar4);
                }
                lVar21 = *(long *)(lVar22 * 8);
                lVar6 = lVar21;
                func_0x00010bf31ee0();
                if ((int)lVar6 == 0x26) {
                  lVar6 = lVar21;
                  func_0x00010c23cdc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar21;
                  func_0x00010bf454e0(lVar21);
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x000108f52130();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar8);
                  lVar8 = lVar21;
                  func_0x00010c259cc0(lVar21);
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar6;
                  func_0x000108f097e0(lVar6,uVar16,lVar8,*(undefined8 *)(param_3 + 0x20));
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar8);
                  lVar8 = lVar10;
                  func_0x00010bf529e0();
                  if (lVar8 != 0) {
                    puVar11 = PTR_PTR_1126c0e18;
                    _objc_alloc();
                    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    lVar8 = lVar24;
                    func_0x00010bfa3f40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfa4340();
                    func_0x00010c0df760(puVar7);
                    _objc_retainAutoreleasedReturnValue();
                    lVar12 = lVar21;
                    func_0x000108f09284(lVar21,puVar7);
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar6;
                    func_0x0001071d8d90(lVar6);
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar6;
                    func_0x00010c23cde0(lVar6);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2753c0();
                    FUN_1059e9268();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0545e0(puVar11);
                    _objc_release(lVar21);
                    _objc_release(lVar14);
                    _objc_release(lVar13);
                    _objc_release(lVar12);
                    _objc_release(puVar7);
                    _objc_release(lVar8);
                    func_0x00010befa120(puVar2);
                    _objc_release(puVar11);
                  }
                  _objc_release(lVar10);
                  _objc_release(lVar9);
                  _objc_release(lVar6);
                }
                lVar22 = lVar22 + 1;
              } while (lVar3 != lVar22);
              lVar3 = lVar4;
              func_0x00010bf52a60();
            }
            _objc_release(lVar4);
          }
        }
        puVar20 = puVar20 + 1;
        lVar3 = lVar26;
      } while (puVar20 != puStack_3d8);
      puStack_3d8 = puVar5;
      func_0x00010bf52a60();
    } while (puStack_3d8 != (undefined *)0x0);
    uStack_404 = uStack_404 ^ 1;
  }
  _objc_release(puVar5);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  (**(code **)(lVar18 + 0x10))(lVar18,uVar16,puVar5,lVar26,uStack_404 & 1,1,puVar25,lStack_3e8);
  _objc_release(puVar5);
  _objc_release(lStack_3e8);
  _objc_release(puVar25);
  _objc_release(lVar26);
  _objc_release(puVar2);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar15 + 0x60,0);
  _objc_storeStrong(puVar15 + 0x58,0);
  _objc_storeStrong(puVar15 + 0x50,0);
  _objc_storeStrong(puVar15 + 0x48,0);
  _objc_storeStrong(puVar15 + 0x40,0);
  _objc_storeStrong(puVar15 + 0x38,0);
  _objc_storeStrong(puVar15 + 0x30,0);
  _objc_storeStrong(puVar15 + 0x28,0);
  _objc_storeStrong(puVar15 + 0x20,0);
  _objc_storeStrong(puVar15 + 0x18,0);
  _objc_storeStrong(puVar15 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar15 + 8,0);
  return;
}



/* Entry: 1059eb020; end: 1059eb737; -[SCTopicPageNetworkRequester _processFetchResponse:topic:requestId:completion:] */

void FUN_1059eb020(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  uint uStack_274;
  long lStack_258;
  long lStack_248;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lStack_248 == 0) {
    uStack_274 = 0;
    lStack_258 = 0;
    puVar21 = (undefined *)0x0;
    lVar22 = 0;
  }
  else {
    puVar21 = (undefined *)0x0;
    lVar22 = 0;
    lStack_258 = 0;
    uStack_274 = 1;
    do {
      lVar17 = 0;
      lVar7 = lVar22;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar20 = *(long *)(lVar17 * 8);
        lVar22 = lVar20;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar22;
        func_0x00010bfdd7a0();
        if ((int)lVar4 == 0) {
LAB_1059eb204:
          _objc_release(lVar22);
        }
        else {
          lVar4 = lVar20;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar5;
          func_0x00010c275240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar22);
          if (lVar19 != 0) {
            lVar22 = lVar20;
            func_0x00010bfa3f40();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar22;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c275240();
            _objc_retainAutoreleasedReturnValue();
            lVar19 = lVar5;
            FUN_1059eabf0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lStack_258);
            _objc_release(lVar5);
            _objc_release(lVar4);
            lStack_258 = lVar19;
            goto LAB_1059eb204;
          }
        }
        lVar22 = lVar20;
        func_0x00010bfa3f40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar22;
        func_0x00010bfdd7a0();
        puVar6 = puVar21;
        if ((int)lVar4 == 0) {
LAB_1059eb2dc:
          _objc_release(lVar22);
          puVar21 = puVar6;
        }
        else {
          lVar4 = lVar20;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c2754e0();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar5;
          func_0x00010c25eca0();
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar22);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar19 != 0) {
            lVar22 = lVar20;
            func_0x00010bfa3f40(lVar20);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar22;
            func_0x00010c2754e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25eca0();
            func_0x00010c0df7c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar21);
            _objc_release(lVar4);
            goto LAB_1059eb2dc;
          }
        }
        lVar4 = lVar20;
        func_0x00010bfd9ca0();
        lVar22 = lVar7;
        if ((int)lVar4 != 0) {
          lVar4 = lVar20;
          func_0x00010bfa3f40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bfa4340();
          _objc_release(lVar4);
          if ((int)lVar5 == 0xeb) {
            lVar4 = lVar20;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar22 = lVar4;
            func_0x00010c25c6c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            _objc_release(lVar4);
            lVar7 = lVar20;
            func_0x00010bf98260();
            uStack_274 = (uint)lVar7;
            lVar7 = lVar20;
            func_0x00010c0ece40();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar7;
            func_0x00010bf32220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            lVar7 = lVar5;
            func_0x00010bf52a60();
            lVar4 = lRam0000000000000000;
            while (lVar7 != 0) {
              lVar19 = 0;
              do {
                if (lRam0000000000000000 != lVar4) {
                  _objc_enumerationMutation(lVar5);
                }
                lVar18 = *(long *)(lVar19 * 8);
                lVar8 = lVar18;
                func_0x00010bf31ee0();
                if ((int)lVar8 == 0x26) {
                  lVar8 = lVar18;
                  func_0x00010c23cdc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar18;
                  func_0x00010bf454e0(lVar18);
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar9;
                  func_0x000108f52130();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar9);
                  lVar9 = lVar18;
                  func_0x00010c259cc0(lVar18);
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar8;
                  func_0x000108f097e0(lVar8,param_4,lVar9,*(undefined8 *)(param_1 + 0x20));
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar9);
                  lVar9 = lVar11;
                  func_0x00010bf529e0();
                  if (lVar9 != 0) {
                    puVar12 = PTR_PTR_1126c0e18;
                    _objc_alloc();
                    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    lVar9 = lVar20;
                    func_0x00010bfa3f40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfa4340();
                    func_0x00010c0df760(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar18;
                    func_0x000108f09284(lVar18,puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar8;
                    func_0x0001071d8d90(lVar8);
                    _objc_retainAutoreleasedReturnValue();
                    lVar15 = lVar8;
                    func_0x00010c23cde0(lVar8);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2753c0();
                    FUN_1059e9268();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0545e0(puVar12);
                    _objc_release(lVar18);
                    _objc_release(lVar15);
                    _objc_release(lVar14);
                    _objc_release(lVar13);
                    _objc_release(puVar6);
                    _objc_release(lVar9);
                    func_0x00010befa120(puVar2);
                    _objc_release(puVar12);
                  }
                  _objc_release(lVar11);
                  _objc_release(lVar10);
                  _objc_release(lVar8);
                }
                lVar19 = lVar19 + 1;
              } while (lVar7 != lVar19);
              lVar7 = lVar5;
              func_0x00010bf52a60();
            }
            _objc_release(lVar5);
          }
        }
        lVar17 = lVar17 + 1;
        lVar7 = lVar22;
      } while (lVar17 != lStack_248);
      lStack_248 = lVar3;
      func_0x00010bf52a60();
    } while (lStack_248 != 0);
    uStack_274 = uStack_274 ^ 1;
  }
  _objc_release(lVar3);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  (**(code **)(param_6 + 0x10))(param_6,param_4,puVar6,lVar22,uStack_274 & 1,1,puVar21,lStack_258);
  _objc_release(puVar6);
  _objc_release(lStack_258);
  _objc_release(puVar21);
  _objc_release(lVar22);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1059eb738; end: 1059eb7df; -[SCTopicPageNetworkRequester .cxx_destruct] */

void FUN_1059eb738(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1059eb7e0; end: 1059eb96b; -[SCSuggestedTopicsRequester initWithUserSession:httpMetadataService:httpRequestModifier:endpointManager:usernameProvider:] */

undefined1 *
FUN_1059eb7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eb410;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059eb96c; end: 1059eba6f; -[SCSuggestedTopicsRequester fetchSuggestedTopicsWithQuery:completion:] */

void FUN_1059eb96c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059eba70; end: 1059ebaa3;  */

void FUN_1059eba70(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ebaa4; end: 1059ebbe3; -[SCSuggestedTopicsRequester _delayFetchSuggestedTopicsWithQuery:completion:] */

void FUN_1059ebaa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = 0;
  _dispatch_time(0,300000000);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059ebbe4;
  puStack_68 = &UNK_110848378;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010058c530(uVar1,uVar2,&puStack_80);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1059ebbe4; end: 1059ebc17;  */

void FUN_1059ebbe4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ebc18; end: 1059ebf9b; -[SCSuggestedTopicsRequester _fetchSuggestedTopicsIfValidOriginalQuery:completion:] */

void FUN_1059ebc18(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3,PTR____NSArray0__struct_11034ab48,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf95de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c0e20;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    _objc_opt_new(puVar4);
    uVar8 = uVar7;
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010bf60aa0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ecc0(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar8);
    uVar7 = uVar2;
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c21e620(puVar4);
    _objc_release(uVar7);
    func_0x00010c184960(puVar4);
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_11117f180;
    func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_11117f180);
    func_0x00010c1b7520(puVar4);
    _objc_release(ppuVar5);
    func_0x00010c1bf3e0(puVar4);
    puVar6 = PTR_PTR_1126c0e28;
    _objc_opt_new(PTR_PTR_1126c0e28);
    func_0x00010c1e6360();
    _objc_release(param_3);
    func_0x00010c17cd40(puVar6);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = puVar6;
    func_0x00010bf63640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f4ca84(uVar2,uVar3,&PTR____CFConstantStringClassReference_110e15998,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b5730;
    _objc_alloc(PTR_PTR_1126b5730);
    func_0x00010c01b560();
    _objc_initWeak(auStack_68,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c25f600(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ebf9c; end: 1059ec0a3;  */

void FUN_1059ebf9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126c0e30;
  _objc_retain(in_x4);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(in_x4);
  _objc_retain(0);
  puVar2 = PTR_PTR_1126c0e30;
  _objc_retain(puVar1);
  _objc_opt_class(puVar2);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
               PTR____NSArray0__struct_11034ab48,0);
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be82000();
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 1059ec0a4; end: 1059ec2a7; -[SCSuggestedTopicsRequester _processReponse:query:completion:] */

void FUN_1059ec0a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = param_3;
  func_0x00010c262320();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      puVar5 = PTR_PTR_1126c0e38;
      _objc_alloc(PTR_PTR_1126c0e38);
      func_0x00010c2711a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c261d20();
      func_0x00010c019f00(puVar5);
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      _objc_release(uVar8);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  (**(code **)(param_5 + 0x10))(param_5,param_4,puVar5,1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1059ec2a8; end: 1059ec313; -[SCSuggestedTopicsRequester .cxx_destruct] */

void FUN_1059ec2a8(long param_1)

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



/* Entry: 1059ec314; end: 1059ec35f; -[SCTopicSendToDelegateCreatorImpl createDelegateWithContainingScrollView:] */

void FUN_1059ec314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0e40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c002aa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059ec360; end: 1059ec3d7; -[SCTopicSendToManager initWithContainingScrollView:] */

undefined1 *
FUN_1059ec360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_5);
  puStack_28 = PTR_PTR_1126eb418;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
    func_0x00010bf4cdc0(param_5);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1059ec3d8; end: 1059ec41b; -[SCTopicSendToManager verticalOffsetForTopicSearchPresentationWithContainerCell:] */

double FUN_1059ec3d8(undefined8 param_1,double param_2,long param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_3 + 0x18);
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf4cdc0();
  _objc_release(param_3);
  return dVar1 - param_2;
}



/* Entry: 1059ec41c; end: 1059ec45f; -[SCTopicSendToManager topicSendToWillPresentSearchWithContainerCell:] */

void FUN_1059ec41c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c182300(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b5170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsTopicSearchPresented__11264ae80,1);
  return;
}



/* Entry: 1059ec460; end: 1059ec463; -[SCTopicSendToManager topicsUpdated] */

void FUN_1059ec460(void)

{
  return;
}



/* Entry: 1059ec464; end: 1059ec46b; -[SCTopicSendToManager topicSendToWillDismissSearch] */

void FUN_1059ec464(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b5170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsTopicSearchPresented__11264ae80,0);
  return;
}



/* Entry: 1059ec46c; end: 1059ec473; -[SCTopicSendToManager isTopicSearchPresented] */

undefined1 FUN_1059ec46c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1059ec474; end: 1059ec47b; -[SCTopicSendToManager setIsTopicSearchPresented:] */

void FUN_1059ec474(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1059ec47c; end: 1059ec483; -[SCTopicSendToManager .cxx_destruct] */

void FUN_1059ec47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1059ec484; end: 1059ec49f; -[SCTopicTrackerCreatorImpl createTopicTracker] */

void FUN_1059ec484(void)

{
  _objc_alloc_init(PTR_PTR_1126c0e48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059ec4a0; end: 1059ec67f;  */

void FUN_1059ec4a0(undefined *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar5 = param_1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = param_1;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x1) {
      puVar5 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_1;
      func_0x00010bf529e0();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar3 = param_1;
      puVar4 = param_1;
      if (puVar1 == (undefined *)0x2) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e159b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e159b8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar1 = param_1;
        func_0x00010bf529e0();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar1 != (undefined *)0x3) {
          puVar5 = param_1;
          func_0x00010bf446e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1059ec640;
        }
        ppuVar2 = &PTR____CFConstantStringClassReference_110e159d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e159d8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(ppuVar2);
    }
  }
LAB_1059ec640:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1059ec680; end: 1059ec7bb; -[SCTopicsCollection init] */

undefined1 * FUN_1059ec680(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = &UNK_10f31bf23;
    _dispatch_queue_create(&UNK_10f31bf23,0);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1059ec7bc; end: 1059ec80b; -[SCTopicsCollection availablePlaceTags] */

void FUN_1059ec7bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059ec80c; end: 1059ec813;  */

void FUN_1059ec80c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shouldDisplayAsTag_1126696e0);
  return;
}



/* Entry: 1059ec814; end: 1059ec86b; -[SCTopicsCollection getPlaceTagForSource:] */

void FUN_1059ec814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059ec86c; end: 1059ec92b; -[SCTopicsCollection addPlaceTag:] */

void FUN_1059ec86c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1059ec92c;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059ec92c; end: 1059ec95f;  */

void FUN_1059ec92c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc7d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ec960; end: 1059eca8f; -[SCTopicsCollection _addPlaceTag:] */

void FUN_1059ec960(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x58);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_3;
    func_0x00010c27dd80();
    if (lVar4 == 5) {
      bVar1 = true;
    }
    else {
      lVar4 = param_3;
      func_0x00010c27dd80();
      bVar1 = lVar4 == 4;
    }
    lVar4 = param_3;
    func_0x00010c22f2e0();
    if (((int)lVar4 != 0) && (bVar1)) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c22a8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d4a0(uVar6,param_2,puVar5);
      _objc_release(puVar5);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    lVar4 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c0df840(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar6,param_2,param_3,puVar5);
    _objc_release(puVar5);
    func_0x00010bdcfcc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059eca90; end: 1059ecbbf; -[SCTopicsCollection updatePlaceTagDisplayStateForSource:shouldDisplayAsTag:] */

void FUN_1059eca90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(lVar6,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((lVar6 != 0) && (lVar2 = lVar6, func_0x00010c22f2e0(), (int)param_4 != (int)lVar2)) {
    puVar1 = PTR_PTR_1126c0e50;
    _objc_alloc(PTR_PTR_1126c0e50);
    lVar2 = lVar6;
    func_0x00010c0fd0e0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c0fd260(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c27dd80(lVar6);
    lVar5 = lVar6;
    func_0x00010c0fd640(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036540(puVar1,param_2,lVar2,lVar3,lVar4,param_4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befa940(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1059ecbc0; end: 1059ecc7f; -[SCTopicsCollection removePlaceTag:] */

void FUN_1059ecbc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1059ecc80;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059ecc80; end: 1059eccb3;  */

void FUN_1059ecc80(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059eccb4; end: 1059ecddf; -[SCTopicsCollection _removePlaceTag:] */

void FUN_1059eccb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = *(long *)(param_1 + 0x58);
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(lVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar5 != 0) {
    lVar3 = lVar5;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0fd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0(lVar3,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uVar1 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0df840(puVar2,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar6,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010bdcfcc0(param_1);
    }
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059ecde0; end: 1059ecf5b; -[SCTopicsCollection taggedPlace] */

void FUN_1059ecde0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar6 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    _objc_retain(lVar1);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar2 = lVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar2);
          }
          uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
          uVar4 = uVar7;
          func_0x00010c22f2e0();
          if ((int)uVar4 != 0) {
            if (uVar6 != 0) {
              uVar4 = uVar6;
              func_0x00010c27dd80();
              uVar5 = uVar7;
              func_0x00010c27dd80();
              if (uVar4 <= uVar5) goto LAB_1059eced4;
            }
            _objc_retain(uVar7);
            _objc_release(uVar6);
            uVar6 = uVar7;
          }
LAB_1059eced4:
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar6 = *(ulong *)(lVar1 + 0x50);
    _objc_retain(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1059ecf5c; end: 1059ecf83; -[SCTopicsCollection placesTaggedObservable] */

void FUN_1059ecf5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059ecf84; end: 1059ecfab; -[SCTopicsCollection selectedTopicsObservable] */

void FUN_1059ecf84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059ecfac; end: 1059ecfb3; -[SCTopicsCollection ourStorySubtextAndPlaceTagObservable] */

void FUN_1059ecfac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1059ecfb4; end: 1059ecfbb; -[SCTopicsCollection spotlightDescriptionObservable] */

void FUN_1059ecfb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1059ecfbc; end: 1059ed007; -[SCTopicsCollection ourStorySubtextObservable] */

void FUN_1059ecfbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ee460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059ed008; end: 1059ed00f;  */

void FUN_1059ed008(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c260cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_subtext_112675d50);
  return;
}



/* Entry: 1059ed010; end: 1059ed0cf; -[SCTopicsCollection addTopic:] */

void FUN_1059ed010(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1059ed0d0;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059ed0d0; end: 1059ed103;  */

void FUN_1059ed0d0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ed104; end: 1059ed10f; -[SCTopicsCollection notifyObservablesIfSpotlightDescriptionDidUpdate] */

void FUN_1059ed104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 1059ed110; end: 1059ed13f; -[SCTopicsCollection setSpotlightDescription:] */

void FUN_1059ed110(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1059ed140; end: 1059ed157; -[SCTopicsCollection spotlightDescription] */

void FUN_1059ed140(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059ed158; end: 1059ed1bb; -[SCTopicsCollection _addTopic:] */

void FUN_1059ed158(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (uVar1 < 100) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010c066b00(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
      func_0x00010bdcfcc0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059ed1bc; end: 1059ed27b; -[SCTopicsCollection removeTopic:] */

void FUN_1059ed1bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1059ed27c;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059ed27c; end: 1059ed2af;  */

void FUN_1059ed27c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8db60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ed2b0; end: 1059ed2ff; -[SCTopicsCollection _removeTopic:] */

void FUN_1059ed2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
    func_0x00010bdcfcc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059ed300; end: 1059ed3bb; -[SCTopicsCollection updateCaptionTopicsWithNewTopics:] */

void FUN_1059ed300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1059ed3bc;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059ed3bc; end: 1059ed3ef;  */

void FUN_1059ed3bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ed3f0; end: 1059ed69b; -[SCTopicsCollection _updateCaptionTopicsWithNewTopics:] */

void FUN_1059ed3f0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1108ccba8);
  uVar3 = param_3;
  func_0x000100817178(param_3,&PTR___NSConcreteGlobalBlock_1108ccbe8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(uVar2);
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar5 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      uVar12 = *(undefined8 *)(uVar10 * 8);
      func_0x00010bfdedc0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010bf4b900();
      _objc_release(uVar12);
      if ((uVar11 & 1) == 0) {
        func_0x00010befa120(puVar4);
      }
      uVar10 = uVar10 + 1;
    } while (uVar5 != uVar10);
    uVar5 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  func_0x00010c12d500(*(undefined8 *)(param_1 + 8));
  ppuVar7 = &PTR___NSConcreteGlobalBlock_1108ccc08;
  uVar10 = uVar2;
  func_0x000100817178();
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar5 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar12 = *(undefined8 *)(uVar11 * 8);
      func_0x00010bfdedc0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010bf4b900();
      _objc_release(uVar12);
      if ((uVar6 & 1) == 0) {
        func_0x00010c066b00(*(undefined8 *)(param_1 + 8));
      }
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
    uVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010bdcfcc0(param_1);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  ppuVar9 = ppuVar7;
  func_0x00010c247520();
  if (ppuVar9 == (undefined **)0x1) {
    _objc_retain(ppuVar7);
    ppuVar9 = ppuVar7;
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 1059ed69c; end: 1059ed6ef;  */

void FUN_1059ed69c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c247520();
  if (lVar1 == 1) {
    _objc_retain(param_2);
    lVar1 = param_2;
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059ed6f0; end: 1059ed6ff;  */

void FUN_1059ed6f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdedd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hashtag_1125d5530);
  return;
}



/* Entry: 1059ed700; end: 1059ed7e7; -[SCTopicsCollection getSelectedTopicsWithCompletion:completionQueue:] */

void FUN_1059ed700(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1059ed7e8;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ed7e8; end: 1059ed81b;  */

void FUN_1059ed7e8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde99c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ed81c; end: 1059ed937; -[SCTopicsCollection _copyAndReturnTopicsAsyncWithCompletion:completionQueue:] */

void FUN_1059ed81c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010bf51e00();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar4 = lVar1;
  if (lVar3 != 0) {
    lVar4 = lVar2;
    func_0x0001062cfa1c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059ed938;
  puStack_60 = &UNK_11084a9e8;
  lStack_58 = lVar4;
  lStack_50 = lVar2;
  uStack_48 = param_3;
  _objc_retain(lVar2);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_78);
  _objc_release(lStack_50);
  _objc_release(lStack_58);
  _objc_release(uStack_48);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1059ed938; end: 1059ed94b;  */

void FUN_1059ed938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059ed948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059ed94c; end: 1059eda5b; -[SCTopicsCollection setTopicStickers:venueStickers:selectedVenueFilterName:] */

void FUN_1059ed94c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059eda5c;
  puStack_70 = &UNK_110850cf8;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1059eda5c; end: 1059eda93;  */

void FUN_1059eda5c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059eda94; end: 1059edb73; -[SCTopicsCollection updatePlaceTagsWithVenueStickers:venueFilter:] */

void FUN_1059eda94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1059edb74;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059edb74; end: 1059edba7;  */

void FUN_1059edb74(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059edba8; end: 1059edc47; -[SCTopicsCollection _setTopicStickers:venueStickers:selectedVenueFilterName:] */

void FUN_1059edba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdcfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__asyncAnnounceUpdate_1125518d0);
  return;
}



/* Entry: 1059edc48; end: 1059ede0b; -[SCTopicsCollection _setTaggedPlacesWithVenueStickers:venueFilter:] */

void FUN_1059edc48(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c22a8);
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c0dff20(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c22c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (lVar1 == 0) {
LAB_1059edcf8:
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c22c0);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c247be0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 3) goto LAB_1059edcf8;
    }
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      lVar1 = param_4;
      func_0x00010c27dd80(param_4);
      func_0x00010c0df840(puVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar5,param_2,param_4,puVar4);
      _objc_release(puVar4);
      goto LAB_1059edd68;
    }
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c22d8);
LAB_1059edd68:
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c22f0);
  }
  else {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = lVar1;
    func_0x00010c27dd80();
    func_0x00010c0df840(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar5,param_2,lVar1,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  func_0x00010bdcfcc0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059ede0c; end: 1059edefb; -[SCTopicsCollection getOurStorySubtextWithCompletionQueue:completion:] */

void FUN_1059ede0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059edefc;
  puStack_70 = &UNK_110849230;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_50 = uVar1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar2,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1059edefc; end: 1059edf33;  */

void FUN_1059edefc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be213a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059edf34; end: 1059ee023; -[SCTopicsCollection getOurStorySubtextIncludingTopics:completionQueue:completion:] */

void FUN_1059edf34(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059ee024;
  puStack_70 = &UNK_110849230;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_50 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1059ee024; end: 1059ee05b;  */

void FUN_1059ee024(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be213a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ee05c; end: 1059ee3ef; -[SCTopicsCollection _getOurStorySubtextIncludingTopics:completionQueue:completion:] */

void FUN_1059ee05c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar13 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar13);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = lVar13;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    lVar12 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        uVar14 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar14;
        func_0x00010c22f2e0();
        if ((int)uVar3 != 0) {
          if (uVar11 != 0) {
            uVar3 = uVar11;
            func_0x00010c27dd80();
            uVar4 = uVar14;
            func_0x00010c27dd80();
            if (uVar3 <= uVar4) goto LAB_1059ee160;
          }
          _objc_retain(uVar14);
          _objc_release(uVar11);
          uVar11 = uVar14;
        }
LAB_1059ee160:
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar13);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  func_0x00010befa160(puVar5);
  func_0x00010befa140(puVar5);
  if (uVar11 != 0) {
    uVar3 = uVar11;
    func_0x00010c0fd260();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar14 = uVar11;
      func_0x00010c27dd80();
      _objc_release(uVar3);
      if (uVar14 != 5) {
        uVar3 = uVar11;
        func_0x00010c0fd260(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf4b900();
        _objc_release(uVar3);
        if (((ulong)puVar6 & 1) == 0) {
          uVar3 = uVar11;
          func_0x00010c0fd260(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa140(puVar5);
          _objc_release(uVar3);
        }
      }
    }
  }
  if (param_3 == 0) {
    puVar6 = puVar5;
    func_0x00010c12c080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c099060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = *(undefined **)(param_1 + 8);
    func_0x000100504554(puVar6,&PTR___NSConcreteGlobalBlock_1108ccc28);
    func_0x00010befa160(puVar5);
    puVar7 = puVar5;
    func_0x00010c12c080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = puVar7;
  FUN_1059ec4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar3 = uVar11;
  func_0x00010c0fd260();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1059ee3f8;
  puStack_150 = &UNK_11084a9e8;
  puStack_148 = puVar8;
  uStack_140 = uVar14;
  uStack_138 = param_5;
  _objc_retain(param_5);
  _objc_retain(uVar14);
  _objc_retain(puVar8);
  ppuVar9 = &puStack_168;
  func_0x00010007380c(param_4,ppuVar9);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(puStack_148);
  _objc_release(uVar14);
  _objc_release(puVar5);
  _objc_release(uVar11);
  _objc_release(param_5);
  _objc_release(puVar8);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfdedd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(ppuVar9,PTR_s_hashtag_1125d5530);
    return;
  }
  return;
}


