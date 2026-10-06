/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a92074; end: 106a920f7; -[SCDiscoverFeedUpNextV2StoriesRequestMutator .cxx_destruct] */

void FUN_106a92074(long param_1)

{
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



/* Entry: 106a920f8; end: 106a9225f; -[SCStoriesRequestInteractionDataMutator initWithInteractionHistoryManager:circumstanceEngine:storiesConfigProvider:discoverFeedDataFetcher:rtusClientCacheManager:] */

undefined1 *
FUN_106a920f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f48d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a92260; end: 106a92747; -[SCStoriesRequestInteractionDataMutator modifyRequest:sequence:completionPerformer:completion:mixerEndpointSource:] */

void FUN_106a92260(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf90d20();
  if ((int)uVar8 == 0) {
    func_0x00010c2830c0();
  }
  else {
    func_0x00010c0ceea0();
  }
  _objc_release(uVar3);
  _objc_release();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_106a92748;
  uStack_98 = 0x106a92758;
  uStack_90 = 0;
  _dispatch_group_create();
  uVar12 = param_3;
  func_0x00010bfa43c0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar12 == 0) || (uVar4 = param_3, func_0x00010bfa43e0(), uVar4 == 0)) {
    _objc_release(uVar12);
  }
  else {
    uVar4 = param_3;
    func_0x00010bfa43e0();
    _objc_release(uVar12);
    if (1 < uVar4) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar12 = 0;
      while( true ) {
        uVar4 = param_3;
        func_0x00010bfa43c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (uVar5 <= uVar12) break;
        uVar4 = param_3;
        func_0x00010bfa43c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296de0();
        func_0x00010c0df760(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar7);
        _objc_release(uVar4);
        uVar12 = uVar12 + 1;
      }
      puVar7 = puVar6;
      func_0x00010bf51e00(puVar6);
      goto LAB_106a92480;
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_3);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
LAB_106a92480:
  _objc_release(puVar6);
  func_0x00010bfc9500(*(undefined8 *)(param_1 + 0x30));
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c2311a0();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfc9520();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106a92760;
  puStack_f0 = &UNK_11095a238;
  puStack_c8 = &uStack_b8;
  uStack_c0 = uVar1;
  _objc_retain(param_3);
  uStack_e8 = param_3;
  lStack_e0 = param_1;
  _objc_retain(uVar8);
  uStack_d8 = uVar8;
  _objc_retain(uVar2);
  ppuVar9 = &puStack_108;
  uStack_d0 = uVar2;
  _objc_retainBlock(ppuVar9);
  _dispatch_group_enter(uVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010c15bfa0();
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 8);
  lVar11 = param_5;
  if ((int)uVar3 == 0) {
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11de00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac60(uVar10);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11de00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcac80(uVar10);
  }
  _objc_release(lVar11);
  _objc_release(uVar10);
  lVar11 = param_5;
  func_0x00010c11de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar6;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_106a928b8;
  puStack_128 = &UNK_110883360;
  puStack_110 = &uStack_b8;
  uStack_120 = param_3;
  uStack_118 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x000100bc0718(uVar2,lVar11,&puStack_140);
  _objc_release(lVar11);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(ppuVar9);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 106a92748; end: 106a9275f;  */

void FUN_106a92748(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a92760; end: 106a928b7;  */

void FUN_106a92760(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x000107bf2ff8(param_2,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf3d0c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c0e20;
    _objc_opt_new(PTR_PTR_1126c0e20);
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  func_0x00010c1e8040(puVar4);
  func_0x00010c1ae2e0(puVar4);
  func_0x00010c17cd40(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107bf38a4(param_2,uVar2,uVar1);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a928b8; end: 106a928d3;  */

void FUN_106a928b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a928d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 106a928d4; end: 106a92933; -[SCStoriesRequestInteractionDataMutator .cxx_destruct] */

void FUN_106a928d4(long param_1)

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



/* Entry: 106a92934; end: 106a92bb3; -[SCStoriesRequestUserInfoMutator initWithUserSegmentsProvider:bitmojiAvatarProvider:userRegistrationInfoProvider:snapchattersDataFetcher:circumstanceEngine:audioSession:adsClientInfoProvider:adConfigProvider:networkConnectivityMonitor:dpaConfigProvider:locationProvider:] */

undefined8 *
FUN_106a92934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f48d8;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
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
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 106a92bb4; end: 106a92f0f; -[SCStoriesRequestUserInfoMutator modifyRequest:sequence:completionPerformer:completion:mixerEndpointSource:] */

void FUN_106a92bb4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf3d0c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c0e20;
    _objc_opt_new(PTR_PTR_1126c0e20);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  func_0x000108f1337c(puVar2,*(undefined8 *)(param_1 + 0x58));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar2);
  _objc_release(uVar3);
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar2);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078a60();
  func_0x00010c1b2d80(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd46e0();
  func_0x00010c1a5a60(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x000108f136bc(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180e80(puVar2);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x00010c26f320(uVar4);
  func_0x00010c21e160(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d42e0();
  func_0x00010c170020(puVar2);
  _objc_release(uVar3);
  func_0x00010c175f00(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c118120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000108487704(uVar3,uVar6,0,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166000(param_3);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 106a92f10; end: 106a92f23;  */

void FUN_106a92f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a92f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106a92f24; end: 106a92fbf; -[SCStoriesRequestUserInfoMutator .cxx_destruct] */

void FUN_106a92f24(long param_1)

{
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



/* Entry: 106a92fc0; end: 106a9349f; -[SCDiscoverFeedUpNextV2NetworkRequester initWithUserSession:pageType:snapTokenProvider:mixerEndpointManager:storiesMetricServices:storiesConfigProvider:networkConnectivityMonitor:requestMutators:bitmojiAvatarProvider:circumstanceEngine:adConfigProvider:bitmojiFriendAvatarProvider:snapchattersDataFetcher:performer:dataBuffer:interactionHistoryModifier:readReceiptCoordinator:rtusClientCacheManager:adRenderDataParser:] */

undefined8 *
FUN_106a92fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f48e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bfcdf20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010c283040();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c135d00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar5 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2830e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x17];
    puVar1[0x17] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a934a0; end: 106a937cb; -[SCDiscoverFeedUpNextV2NetworkRequester sendUpNextRequestWithRequestMutators:pageSessionId:triggeringStoryId:defaultPlaylistStories:upNextTriggeringAction:upNextTriggeringSource:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:] */

void FUN_106a934a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  long param_13)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if ((param_12 != 0) && (param_13 != 0)) {
    _CACurrentMediaTime();
    _objc_initWeak(auStack_80,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106a937cc;
    puStack_c8 = &UNK_11095a268;
    _objc_copyWeak(auStack_a0,auStack_80);
    _objc_retain(param_4);
    uStack_98 = param_10;
    uStack_c0 = param_4;
    uStack_88 = param_8;
    _objc_retain(param_11);
    uStack_b0 = param_11;
    _objc_retain(param_12);
    lStack_b8 = param_12;
    _objc_retain(param_13);
    lStack_a8 = param_13;
    ppuVar2 = &puStack_e0;
    uStack_90 = param_1;
    _objc_retainBlock();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_106a9383c;
    puStack_f0 = &UNK_110859a38;
    _objc_retain(param_13);
    lStack_e8 = param_13;
    ppuVar3 = &puStack_108;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106e80();
    _objc_release(uVar4);
    func_0x00010c1d8620(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c21a4c0(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c18b160(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c21a400(*(undefined8 *)(param_2 + 0x88));
    func_0x00010c21a4a0(*(undefined8 *)(param_2 + 0x88));
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa48e0(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(ppuVar3);
    _objc_release(lStack_e8);
    _objc_release(ppuVar2);
    _objc_release(lStack_a8);
    _objc_release(lStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106a937cc; end: 106a9383b;  */

void FUN_106a937cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdeac40(*(undefined8 *)(param_1 + 0x50));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9383c; end: 106a93853;  */

void FUN_106a9383c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106a93850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2,0);
  return;
}



/* Entry: 106a93854; end: 106a93d63; -[SCDiscoverFeedUpNextV2NetworkRequester _createAndSendRequestWithAdditionalRequestMutators:snapToken:upNextTriggeringAction:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:requestStartTime:] */

void FUN_106a93854(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  double dStack_1c8;
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar11 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar11 - param_1) * 1000.0),uVar1);
  _objc_release(uVar1);
  func_0x00010bf90d20();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2588e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c0f90;
  _objc_opt_new();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_106a93d64;
  uStack_118 = 0x106a93d74;
  uStack_110 = 0;
  puVar5 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar4);
  _objc_release();
  _dispatch_group_create();
  lVar6 = *(long *)(param_2 + 0x50);
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar8 = *plStack_170;
    do {
      lVar10 = 0;
      do {
        if (*plStack_170 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar9 = *(undefined8 *)(lStack_178 + lVar10 * 8);
        _dispatch_group_enter(puVar5);
        uVar3 = *(undefined8 *)(param_2 + 0x58);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_106a93d7c;
        puStack_198 = &UNK_11095a298;
        puStack_188 = &uStack_138;
        _objc_retain(puVar5);
        puStack_190 = puVar5;
        func_0x00010c0d0540(uVar9);
        _objc_release(uVar3);
        _objc_release(puStack_190);
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  _objc_initWeak(auStack_1b8,param_2);
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_106a93de0;
  puStack_220 = &UNK_11095a2c8;
  _objc_copyWeak(auStack_1d8,auStack_1b8);
  puStack_1e0 = &uStack_138;
  uStack_1e8 = param_10;
  puStack_218 = puVar4;
  uStack_210 = param_5;
  uStack_208 = uVar1;
  uStack_200 = uVar2;
  uStack_1f8 = param_9;
  uStack_1f0 = param_8;
  uStack_1d0 = param_7;
  dStack_1c8 = param_1;
  uStack_1c0 = param_6;
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(puVar4);
  func_0x000100bc0718(puVar5,uVar3,&puStack_238);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_200);
  _objc_release(uStack_208);
  _objc_release(uStack_210);
  _objc_release(puStack_218);
  _objc_destroyWeak(auStack_1d8);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(lVar6);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 106a93d64; end: 106a93d7b;  */

void FUN_106a93d64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a93d7c; end: 106a93ddf;  */

void FUN_106a93d7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a93de0; end: 106a93f2b;  */

void FUN_106a93de0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea0020(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a93f2c; end: 106a941cf; -[SCDiscoverFeedUpNextV2NetworkRequester _sendRetriableUpNextV2RequestWithStoriesRequest:snapToken:baseUrl:path:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:upNextTriggeringAction:interactionHistories:requestStartTime:] */

void FUN_106a93f2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_initWeak(auStack_80,*(undefined8 *)(param_2 + 0x90));
  _objc_initWeak(auStack_88,param_2);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106a941d0;
  puStack_f0 = &UNK_11095a2f8;
  _objc_copyWeak(auStack_a8,auStack_88);
  _objc_retain(param_4);
  uStack_e8 = param_4;
  _objc_retain(param_5);
  uStack_e0 = param_5;
  _objc_retain(param_6);
  uStack_d8 = param_6;
  _objc_retain(param_7);
  uStack_d0 = param_7;
  uStack_a0 = param_8;
  _objc_retain(param_9);
  uStack_b8 = param_9;
  _objc_retain(param_10);
  uStack_c8 = param_10;
  _objc_retain(param_11);
  uStack_b0 = param_11;
  uStack_90 = param_12;
  _objc_retain(param_14);
  uStack_c0 = param_14;
  ppuVar1 = &puStack_108;
  uStack_98 = param_1;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_80;
  _objc_loadWeakRetained(puVar3);
  func_0x00010846e648(0x3ff0000000000000,5,2,uVar2,ppuVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106a941d0; end: 106a9428b;  */

void FUN_106a941d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  _objc_retain(param_2);
  func_0x00010bea1060(*(undefined8 *)(param_1 + 0x70),lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9428c; end: 106a946e7; -[SCDiscoverFeedUpNextV2NetworkRequester _sendUpNextV2RequestWithStoriesRequest:snapToken:baseUrl:path:sequence:responseStoryMutatingBlock:completionPerformer:completionBlock:retryTimer:upNextTriggeringAction:interactionHistories:requestStartTime:] */

void FUN_106a9428c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  double dStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar11 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  lVar2 = param_4;
  func_0x00010bf51e00();
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  dVar11 = dVar11 * 1000.0;
  func_0x00010c1ec1a0(lVar2);
  _objc_release(puVar10);
  iVar1 = (int)*(undefined8 *)(param_2 + 0xb8);
  func_0x00010bf90d20();
  if (iVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c2320;
    func_0x00010c0cee60(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25d300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      ppuStack_90 = &PTR____CFConstantStringClassReference_110dadcb8;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_88 = lVar4;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
  }
  lVar4 = lVar2;
  func_0x00010059c104(lVar2,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90d20(*(undefined8 *)(param_2 + 0xb8));
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar11 - param_1) * 1000.0),uVar5);
  _objc_release(uVar5);
  _objc_initWeak(auStack_98,param_2);
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106a946e8;
  puStack_f0 = &UNK_11095a328;
  _objc_copyWeak(auStack_b8,auStack_98);
  _objc_retain(lVar2);
  lStack_e8 = lVar2;
  _objc_retain(param_9);
  uStack_c8 = param_9;
  _objc_retain(param_10);
  uStack_e0 = param_10;
  _objc_retain(param_11);
  uStack_c0 = param_11;
  _objc_retain(param_12);
  uStack_d8 = param_12;
  uStack_a0 = param_13;
  _objc_retain(param_15);
  uStack_d0 = param_15;
  ppuVar8 = &puStack_108;
  lVar3 = lVar4;
  uVar7 = uVar5;
  dStack_b0 = param_1;
  uStack_a8 = param_8;
  func_0x00010c25f5e0(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_c0);
  _objc_release(uStack_e0);
  _objc_release(uStack_c8);
  _objc_release(lStack_e8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar4);
  _objc_release(puVar10);
  _objc_release(lVar2);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(ppuVar8);
  _objc_retain(uVar7);
  _objc_retain(lVar3);
  lVar2 = param_4 + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be70580(*(undefined8 *)(param_4 + 0x58));
  _objc_release(ppuVar8);
  _objc_release(uVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a946e8; end: 106a9479b;  */

void FUN_106a946e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be70580(*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9479c; end: 106a94c7b; -[SCDiscoverFeedUpNextV2NetworkRequester _parseStoriesResponse:data:error:responseStoryMutatingBlock:completionPerformer:completionBlock:retryTimer:upNextTriggeringAction:interactionHistories:response:requestStartTime:sequence:] */

void FUN_106a9479c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13,
                  long param_14,undefined8 param_15)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  if (param_6 != 0) {
    lVar1 = param_14;
    func_0x00010c252ee0();
    if (99 < lVar1 - 400U) {
      func_0x00010c150080(param_10);
    }
  }
  puVar2 = PTR_PTR_1126b7600;
  _objc_alloc();
  lStack_98 = 0;
  func_0x00010c008360();
  lVar1 = lStack_98;
  _objc_retain(lStack_98);
  if (lVar1 != 0) {
    func_0x00010c150080(param_10);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2500();
  _objc_release(uVar3);
  if (lVar1 == 0 && param_6 == 0) {
    lVar4 = param_4;
    func_0x00010bfa4340();
    if ((int)lVar4 != 0) {
      puVar5 = puVar2;
      func_0x00010bfdb540();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar5 != 0) {
        uVar3 = *(undefined8 *)(param_2 + 0xb0);
        func_0x00010bfa4340(param_4);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc9500(uVar3);
        _objc_release(puVar5);
        _objc_release(puVar6);
        uVar3 = *(undefined8 *)(param_2 + 0xb0);
        puVar6 = puVar2;
        func_0x00010c142580(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11bea0(uVar3);
        _objc_release(puVar6);
      }
    }
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c08fa60(param_5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2540();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c0b24e0((double)(long)((dVar8 - param_1) * 1000.0),uVar3);
    _objc_release(uVar3);
    _objc_initWeak(auStack_a0,param_2);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x000107b19070();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_106a94c7c;
    puStack_f0 = &UNK_11095a358;
    _objc_copyWeak(auStack_c0,auStack_a0);
    _objc_retain(puVar2);
    puStack_e8 = puVar2;
    _objc_retain(param_7);
    uStack_d0 = param_7;
    _objc_retain(param_8);
    uStack_e0 = param_8;
    _objc_retain(param_9);
    uStack_a8 = param_11;
    uStack_c8 = param_9;
    _objc_retain(param_13);
    uStack_d8 = param_13;
    uStack_b0 = param_15;
    param_3 = uVar3;
    dStack_b8 = param_1;
    func_0x00010846e1c0(puVar5,uVar3,&puStack_108,*(undefined8 *)(param_2 + 0x80));
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(uStack_d8);
    _objc_release(uStack_c8);
    _objc_release(uStack_e0);
    _objc_release(uStack_d0);
    _objc_release(puStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(param_3);
  lVar1 = param_4 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be31080(*(undefined8 *)(param_4 + 0x50));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a94c7c; end: 106a94cef;  */

void FUN_106a94c7c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be31080(*(undefined8 *)(param_1 + 0x50));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a94cf0; end: 106a94fa7; -[SCDiscoverFeedUpNextV2NetworkRequester _handleStoriesResponse:snapchatterByUserId:responseStoryMutatingBlock:completionPerformer:completionBlock:upNextTriggeringAction:interactionHistories:requestStartTime:sequence:] */

void FUN_106a94cf0(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar6 - param_1) * 1000.0),uVar1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_90,param_2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106a94fa8;
  puStack_e8 = &UNK_11095a3a8;
  _objc_copyWeak(auStack_b0,auStack_90);
  _objc_retain(param_4);
  lStack_e0 = param_4;
  _objc_retain(param_5);
  uStack_d8 = param_5;
  _objc_retain(param_6);
  uStack_c0 = param_6;
  _objc_retain(param_7);
  uStack_d0 = param_7;
  _objc_retain(param_8);
  uStack_b8 = param_8;
  uStack_98 = param_9;
  _objc_retain(param_10);
  uStack_c8 = param_10;
  uStack_a0 = param_11;
  uVar1 = uVar3;
  dStack_a8 = param_1;
  func_0x00010847021c(puVar2,uVar3,uVar5,&puStack_100);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(uStack_d8);
  _objc_release(lStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  func_0x00010bd869d0(uVar1,0,&PTR___NSConcreteGlobalBlock_11095a388);
  lVar4 = param_4 + 0x50;
  _objc_loadWeakRetained(lVar4);
  func_0x00010be310a0(*(undefined8 *)(param_4 + 0x58));
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a94fa8; end: 106a95027;  */

void FUN_106a94fa8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bd869d0(param_2,0,&PTR___NSConcreteGlobalBlock_11095a388);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be310a0(*(undefined8 *)(param_1 + 0x58));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a95028; end: 106a9502f;  */

void FUN_106a95028(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126dca38;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c11b1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c25e5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e5e0(param_3);
    func_0x00010bf08ca0(param_3);
    func_0x00010c270aa0(param_3);
    _objc_release(param_3);
    func_0x00010c010740(param_1,puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a95030; end: 106a9522f; -[SCDiscoverFeedUpNextV2NetworkRequester _handleStoriesResponse:snapchatterByUserId:responseStoryMutatingBlock:completionPerformer:completionBlock:upNextTriggeringAction:interactionHistories:watchStatesByEditionId:requestStartTime:sequence:] */

void FUN_106a95030(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  dVar6 = param_1;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar6 - param_1) * 1000.0),uVar5,param_3,
                      &PTR____CFConstantStringClassReference_110e69478,param_12);
  _objc_release(uVar5);
  iVar1 = (int)*(undefined8 *)(param_2 + 0xb8);
  func_0x00010bf90d20();
  uVar3 = 0x105;
  if (iVar1 == 0) {
    uVar3 = 3;
  }
  lVar2 = param_2;
  func_0x00010be705a0(param_1,param_2,param_3,param_4,param_5,param_9,param_11,uVar3,param_6,
                      param_12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf529e0(lVar2);
  uVar5 = param_4;
  func_0x00010bfa3f40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfa4340(uVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2580();
  _objc_release(uVar4);
  _objc_release(uVar5);
  func_0x00010be82460(param_1,param_2,param_3,lVar2,param_10,0,param_7,param_8,param_12);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a95230; end: 106a956b3; -[SCDiscoverFeedUpNextV2NetworkRequester _parseStoriesResponse:snapchatterByUserId:upNextTriggeringAction:watchStatesByEditionId:expectedFeedType:responseStoryMutatingBlock:requestStartTime:sequence:] */

void FUN_106a95230(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  dVar17 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar14 = param_9;
  _objc_retain();
  func_0x00010afb7960();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010bfa3f40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4340();
  uVar2 = uVar14;
  func_0x00010bf979e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar14);
  puVar1 = param_4;
  func_0x00010bfa3f40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfa4340();
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar5 == param_8) {
    uVar3 = *(ulong *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c283160();
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = *(undefined **)(param_2 + 0x88);
      func_0x00010c1605c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
    puVar1 = param_4;
    func_0x00010c0ece40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c25c6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8480(*(undefined8 *)(param_2 + 0x88));
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar6 = PTR_PTR_1126b0ef8;
    _objc_alloc();
    puVar1 = param_4;
    func_0x00010c135700(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010bfa3f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4340();
    func_0x00010c125a80();
    func_0x0001084710b0();
    func_0x00010c03ef40();
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x78);
    puVar9 = param_4;
    func_0x00010bfa3f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfa4340();
    uVar11 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010c255720(uVar11);
    uVar15 = *(undefined8 *)(param_2 + 0x20);
    uVar12 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    func_0x000108482d58(puVar7,puVar6,uVar14,0,uVar16,param_5,puVar10,uVar11,uVar15,uVar12,
                        *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0xc0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(puVar9);
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    dVar17 = 1.60807493534087e-314;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106a956b4;
    puStack_90 = &UNK_11095a3d8;
    _objc_retain(param_9);
    uStack_80 = param_9;
    _objc_retain(param_4);
    puVar1 = puVar13;
    puStack_88 = param_4;
    func_0x000100504554(puVar13,&puStack_a8);
    _objc_release(puVar13);
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010c283160();
    _objc_release(uVar8);
    if ((int)uVar14 != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x88);
      func_0x00010bf529e0(puVar1);
      func_0x00010c255720(uVar14);
      func_0x00010c20bee0(uVar14);
    }
    _objc_release(puStack_88);
    _objc_release(uStack_80);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar17 - param_1) * 1000.0),uVar14);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a956b4; end: 106a9572f;  */

void FUN_106a956b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c135700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106a95730; end: 106a95953; -[SCDiscoverFeedUpNextV2NetworkRequester _processStories:interactionHistories:debugHtml:completionPerformer:completionBlock:requestStartTime:sequence:] */

void FUN_106a95730(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar4 = *(long *)(param_2 + 0x98);
  _objc_retain(param_7);
  func_0x00010c0d0580(lVar4,param_3,param_4,param_5,0,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  dVar5 = 1.60807493534087e-314;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106a95954;
  puStack_80 = &UNK_11084a9e8;
  _objc_retain(param_8);
  uStack_68 = param_8;
  _objc_retain(lVar4);
  lStack_78 = lVar4;
  _objc_retain(param_6);
  uStack_70 = param_6;
  func_0x00010c0f7fc0(param_7,param_3,&puStack_98);
  _objc_release(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  lVar2 = lVar4;
  func_0x00010bf529e0();
  if (0 < lVar1 - lVar2) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2520();
    _objc_release(uVar3);
  }
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bf529e0();
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2480();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar5 - param_1) * 1000.0),uVar3,param_3,
                      &PTR____CFConstantStringClassReference_110e694b8,param_9);
  _objc_release(uVar3);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_release(uStack_68);
  _objc_release(lVar4);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 106a95954; end: 106a959a3;  */

void FUN_106a95954(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a959a4; end: 106a95acf; -[SCDiscoverFeedUpNextV2NetworkRequester .cxx_destruct] */

void FUN_106a959a4(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a95ad0; end: 106a95ad7; -[SCDiscoverFeedUpNextV2RequesterDataBuffer pageSessionId] */

undefined8 FUN_106a95ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a95ad8; end: 106a95adf; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setPageSessionId:] */

void FUN_106a95ad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a95ae0; end: 106a95ae7; -[SCDiscoverFeedUpNextV2RequesterDataBuffer lastPageStreamToken] */

undefined8 FUN_106a95ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a95ae8; end: 106a95b17; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setLastPageStreamToken:] */

void FUN_106a95ae8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106a95b18; end: 106a95b1f; -[SCDiscoverFeedUpNextV2RequesterDataBuffer triggeringStoryId] */

undefined8 FUN_106a95b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a95b20; end: 106a95b27; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setTriggeringStoryId:] */

void FUN_106a95b20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a95b28; end: 106a95b2f; -[SCDiscoverFeedUpNextV2RequesterDataBuffer defaultPlaylistStories] */

undefined8 FUN_106a95b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a95b30; end: 106a95b37; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setDefaultPlaylistStories:] */

void FUN_106a95b30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a95b38; end: 106a95b3f; -[SCDiscoverFeedUpNextV2RequesterDataBuffer triggeringAction] */

undefined4 FUN_106a95b38(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106a95b40; end: 106a95b47; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setTriggeringAction:] */

void FUN_106a95b40(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106a95b48; end: 106a95b4f; -[SCDiscoverFeedUpNextV2RequesterDataBuffer triggeringSource] */

undefined4 FUN_106a95b48(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106a95b50; end: 106a95b57; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setTriggeringSource:] */

void FUN_106a95b50(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106a95b58; end: 106a95b5f; -[SCDiscoverFeedUpNextV2RequesterDataBuffer sessionTimestamp] */

undefined8 FUN_106a95b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106a95b60; end: 106a95b67; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setSessionTimestamp:] */

void FUN_106a95b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a95b68; end: 106a95b6f; -[SCDiscoverFeedUpNextV2RequesterDataBuffer stitchOffset] */

undefined8 FUN_106a95b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106a95b70; end: 106a95b77; -[SCDiscoverFeedUpNextV2RequesterDataBuffer setStitchOffset:] */

void FUN_106a95b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 106a95b78; end: 106a95bcb; -[SCDiscoverFeedUpNextV2RequesterDataBuffer .cxx_destruct] */

void FUN_106a95b78(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106a95bcc; end: 106a95caf; -[SCDiscoverFeedUpNextV2RequestingServiceProvider provide] */

void FUN_106a95bcc(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d00c0;
  _objc_alloc(PTR_PTR_1126d00c0);
  func_0x00010c059740();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a95cb0; end: 106a95cef;  */

void FUN_106a95cb0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a95cf0; end: 106a967ff; -[SCDiscoverFeedUpNextV2RequestingServiceProvider _createUpNextV2NetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a95cf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lStack_228;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d00c8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fdea0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d00d0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112757018;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar33;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_106a96800();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar3;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112757020;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar25;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x000106a96824();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar4;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000106a96848();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112757010;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar26;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112757044;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar27;
  func_0x00010c136300();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000106a9686c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106a96890();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11275705c;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar31;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_112757058;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar34;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cdc0(puVar2,param_2,lVar28,lVar29,lVar30,lVar35,lVar32,lVar6);
  _objc_release(lVar13);
  _objc_release(lVar34);
  _objc_release(lVar12);
  _objc_release(lVar31);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar27);
  _objc_release(lVar6);
  _objc_release(lVar26);
  _objc_release(lVar32);
  _objc_release(lVar5);
  _objc_release(lVar35);
  _objc_release(lVar4);
  _objc_release(lVar30);
  _objc_release(lVar25);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar28);
  _objc_release(lVar33);
  puVar14 = PTR_PTR_1126d00d8;
  _objc_alloc();
  lVar33 = param_1;
  func_0x000106a968b4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar33;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106a968d8;
  puStack_a8 = &UNK_11095a438;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106a968e0;
  puStack_d0 = &UNK_110847450;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x106a968e8;
  puStack_f8 = &UNK_110855710;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x106a968f0;
  puStack_120 = &UNK_1108474b0;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x106a968f8;
  puStack_148 = &UNK_1108474b0;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x106a96900;
  puStack_170 = &UNK_110855710;
  lVar3 = param_1;
  puStack_168 = puVar1;
  puStack_140 = puVar1;
  puStack_118 = puVar1;
  puStack_f0 = puVar1;
  puStack_c8 = puVar1;
  puStack_a0 = puVar1;
  func_0x000106a96890();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar3;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cf40(puVar14,param_2,lVar28,&puStack_c0,&puStack_e8,&puStack_110,&puStack_138,
                      &puStack_160);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar28);
  _objc_release(lVar33);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112757048;
    _objc_loadWeakRetained();
  }
  puStack_1b0 = puVar15;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_106a96908;
  puStack_198 = &UNK_1108545f0;
  puVar15 = PTR_PTR_1126ae720;
  lStack_190 = lVar33;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_1b0);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126d00e0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11275704c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar28;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x000106a96848(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar29;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x000106a968b4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar30;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_112757054;
    _objc_loadWeakRetained(lVar35);
  }
  lVar26 = lVar35;
  func_0x00010c08d400(lVar35);
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112757004;
  lVar5 = param_1 + lVar32;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e680(puVar16,param_2,lVar3,lVar25,lVar4,lVar26,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar26);
  _objc_release(lVar35);
  _objc_release(lVar4);
  _objc_release(lVar30);
  _objc_release(lVar25);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar28);
  puVar17 = PTR_PTR_1126cec38;
  _objc_alloc();
  lVar28 = param_1;
  FUN_106a96984(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar28;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x000106a968b4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar29;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cca0(puVar17,param_2,0,lVar3,lVar25);
  _objc_release(lVar25);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar28);
  puVar18 = PTR_PTR_1126d00e8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112757014;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar28;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112757028;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar29;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11275702c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar30;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_228 = 0;
  }
  else {
    lStack_228 = param_1 + _DAT_112757030;
    _objc_loadWeakRetained();
  }
  lVar35 = param_1;
  func_0x000106a968b4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar35;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x000106a96890();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar26;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  puStack_90 = puVar14;
  puStack_88 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  FUN_106a96800();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar27;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000106a96848();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106a9686c();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112757040;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar31;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x000106a96824();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar34;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  FUN_106a96984();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + lVar32;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar32;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = 0;
  if (param_1 != 0) {
    lVar23 = param_1 + _DAT_112757060;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar23;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e080(puVar18,param_2,lVar3,0,lVar25,lVar4,lStack_228,lVar5);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar32);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar13);
  _objc_release(lVar34);
  _objc_release(lVar12);
  _objc_release(lVar31);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar27);
  _objc_release(puVar19);
  _objc_release(lVar6);
  _objc_release(lVar26);
  _objc_release(lVar5);
  _objc_release(lVar35);
  _objc_release(lStack_228);
  _objc_release(lVar4);
  _objc_release(lVar30);
  _objc_release(lVar25);
  _objc_release(lVar29);
  _objc_release(lVar3);
  _objc_release(lVar28);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar33);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) &&
     (___stack_chk_fail(), puVar1 != (undefined *)0x0)) {
    _objc_loadWeakRetained(puVar1 + _DAT_11275701c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a96800; end: 106a968d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a96800(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275701c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a968d8; end: 106a96907;  */

void FUN_106a968d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c089910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lastPageStreamToken_112600050);
  return;
}



/* Entry: 106a96908; end: 106a96983;  */

void FUN_106a96908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f98e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a96984; end: 106a969a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a96984(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757050);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a969a8; end: 106a96ae7; -[SCDiscoverFeedUpNextV2RequestingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a969a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757060);
  _objc_destroyWeak(param_1 + _DAT_11275705c);
  _objc_destroyWeak(param_1 + _DAT_112757058);
  _objc_destroyWeak(param_1 + _DAT_112757004);
  _objc_destroyWeak(param_1 + _DAT_112757054);
  _objc_destroyWeak(param_1 + _DAT_112757050);
  _objc_destroyWeak(param_1 + _DAT_11275704c);
  _objc_destroyWeak(param_1 + _DAT_112757048);
  _objc_destroyWeak(param_1 + _DAT_112757044);
  _objc_destroyWeak(param_1 + _DAT_112757040);
  _objc_destroyWeak(param_1 + _DAT_11275703c);
  _objc_destroyWeak(param_1 + _DAT_112757038);
  _objc_destroyWeak(param_1 + _DAT_112757034);
  _objc_destroyWeak(param_1 + _DAT_112757030);
  _objc_destroyWeak(param_1 + _DAT_11275702c);
  _objc_destroyWeak(param_1 + _DAT_112757028);
  _objc_destroyWeak(param_1 + _DAT_112757024);
  _objc_destroyWeak(param_1 + _DAT_112757020);
  _objc_destroyWeak(param_1 + _DAT_11275701c);
  _objc_destroyWeak(param_1 + _DAT_112757018);
  _objc_destroyWeak(param_1 + _DAT_112757014);
  _objc_destroyWeak(param_1 + _DAT_112757010);
  _objc_destroyWeak(param_1 + _DAT_11275700c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757008);
  return;
}



/* Entry: 106a96ae8; end: 106a96e17; -[SCFriendingNearbyFriendsPageWorkflow initWithNearbyFriendsInteractor:nearbyFriendsRepository:friendStore:circumstanceEngine:scopeDelegate:locationPermissionPromptDelegate:composerNearbyFriendsStore:chatScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:friendProfileScopeExposer:presentingVC:snapchattersDataFetcher:webBrowsingScopeExposer:chatScopeServices:] */

undefined8 *
FUN_106a96ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f48e8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_storeWeak(puVar1 + 6,param_8);
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
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_14);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 106a96e18; end: 106a970c7; -[SCFriendingNearbyFriendsPageWorkflow nearbyFriendsPageContext] */

void FUN_106a96e18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar2 = PTR_PTR_1126d00f0;
  _objc_opt_new(PTR_PTR_1126d00f0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbb40(puVar2);
  _objc_release(uVar3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106a970c8;
  puStack_78 = &UNK_110855260;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c1d2f80(puVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106a97110;
  puStack_a0 = &UNK_110855260;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c1d2fc0(puVar2);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x106a97158;
  puStack_c8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010c1d4020(puVar2);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106a97184;
  puStack_f0 = &UNK_110855200;
  _objc_copyWeak(auStack_e8,auStack_68);
  func_0x00010c1d2fa0(puVar2);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106a971ec;
  puStack_118 = &UNK_11095a468;
  _objc_copyWeak(auStack_110,auStack_68);
  func_0x00010c1d2ba0(puVar2);
  _objc_copyWeak(auStack_138,auStack_68);
  func_0x00010c1d2880(puVar2);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a970c8; end: 106a97183;  */

void FUN_106a970c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a97184; end: 106a971eb;  */

void FUN_106a97184(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a7a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a971ec; end: 106a97243;  */

void FUN_106a971ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010be6a3c0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a97244; end: 106a9728b;  */

void FUN_106a97244(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9728c; end: 106a972ff; -[SCFriendingNearbyFriendsPageWorkflow _onUserToggledAddFriendsNearby] */

void FUN_106a9728c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e7720(uVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a97300; end: 106a97447; -[SCFriendingNearbyFriendsPageWorkflow _onUserOpenChat:] */

void FUN_106a97300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126b01c0;
  if (lVar1 == 0) {
    uVar5 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b3520;
    _objc_alloc(PTR_PTR_1126b3520);
    func_0x00010bffdd20();
    puVar4 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar4,param_2,lVar1,1);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf22b00(uVar5,param_2,puVar2,puVar3,param_1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,uVar5);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a97448; end: 106a97663; -[SCFriendingNearbyFriendsPageWorkflow _onUserOpenChatCamera:] */

void FUN_106a97448(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae6c0;
  lVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294300(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  lVar6 = param_3;
  if (lVar5 == 0) {
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c03e6c0(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar8 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106a97664;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_68 = puVar8;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106a97664; end: 106a9772b;  */

void FUN_106a97664(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x48);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x50);
      lVar2 = lVar1 + 0x68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf23680(uVar3,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),lVar1,1,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x48),param_2,uVar3);
      *(long *)(lVar1 + 0x88) = *(long *)(lVar1 + 0x88) + 1;
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a9772c; end: 106a97803; -[SCFriendingNearbyFriendsPageWorkflow _onOpenUserProfile:source:] */

void FUN_106a9772c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be141c0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a97804; end: 106a9784b;  */

void FUN_106a97804(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9784c; end: 106a97947; -[SCFriendingNearbyFriendsPageWorkflow _onOpenUserProfile:] */

void FUN_106a9784c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c0159e0();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x58),param_2,puVar3);
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106a97948; end: 106a979f7; -[SCFriendingNearbyFriendsPageWorkflow _onNearbyFriendImpressed:index:] */

void FUN_106a97948(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7700(param_1,uVar3,param_3,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a979f8; end: 106a97aeb; -[SCFriendingNearbyFriendsPageWorkflow _fetchSnapchatterFromSCCUser:completionBlock:] */

void FUN_106a979f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a97aec;
  puStack_48 = &UNK_1108553d0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1,param_2,uVar2,PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a97aec; end: 106a97b43;  */

void FUN_106a97aec(long param_1,undefined *param_2)

{
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_PTR_1126b15c8;
    _objc_alloc(PTR_PTR_1126b15c8);
    func_0x00010c040e60();
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a97b44; end: 106a97d43; -[SCFriendingNearbyFriendsPageWorkflow _onUserOpenWebUrl:] */

void FUN_106a97b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
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
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar5 = puVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106a97d44;
    puStack_60 = &UNK_110842308;
    puVar6 = puVar2;
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar5,param_2,&puStack_78,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar5,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    puVar7 = puVar6;
    func_0x00010bf22ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puStack_58);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a97d44; end: 106a97d5b;  */

void FUN_106a97d44(long param_1,long param_2,long param_3)

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



/* Entry: 106a97d5c; end: 106a97da3; -[SCFriendingNearbyFriendsPageWorkflow webBrowserDidDismiss:] */

void FUN_106a97d5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a97da4; end: 106a97e07; -[SCFriendingNearbyFriendsPageWorkflow nearbyFriendsPageViewControllerDidDismiss] */

void FUN_106a97da4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292c00();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0d6f40();
  _objc_release(lVar2);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 106a97e08; end: 106a97e3b; -[SCFriendingNearbyFriendsPageWorkflow nearbyFriendsPageViewControllerDidAppear] */

void FUN_106a97e08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a97e3c; end: 106a97e83; -[SCFriendingNearbyFriendsPageWorkflow chatScopeDidDismiss:] */

void FUN_106a97e3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a97e84; end: 106a97ecb; -[SCFriendingNearbyFriendsPageWorkflow dismissCameraScope:] */

void FUN_106a97e84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a97ecc; end: 106a97eeb; -[SCFriendingNearbyFriendsPageWorkflow friendProfileDidDismiss:] */

void FUN_106a97ecc(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a97eec; end: 106a97fab; -[SCFriendingNearbyFriendsPageWorkflow .cxx_destruct] */

void FUN_106a97eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a97fac; end: 106a982a7; -[SCFriendingNearbyFriendsPageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a97fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126d00f8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127570ac;
  _objc_loadWeakRetained(lVar2);
  lVar19 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05fd00(puVar1,param_2,lVar19);
  _objc_release(lVar19);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d0100;
  _objc_alloc();
  lVar19 = (long)_DAT_1127570b0;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bfaf400();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar5 = lVar19;
  func_0x00010c0d6fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bde3d80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127570b4;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127570b8;
  lVar9 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_1127570bc;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0d6fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + _DAT_1127570c0);
  uVar18 = *(undefined8 *)(param_1 + _DAT_1127570c4);
  lVar13 = param_1 + _DAT_1127570c8;
  _objc_loadWeakRetained();
  uVar21 = *(undefined8 *)(param_1 + _DAT_1127570cc);
  lVar14 = param_1 + _DAT_1127570d0;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_1127570d4);
  lVar16 = param_1 + _DAT_1127570d8;
  _objc_loadWeakRetained();
  func_0x00010c02efa0(puVar3,param_2,lVar4,lVar5,lVar6,lVar8,lVar10,puVar1,lVar12,uVar20,uVar18,
                      lVar13,uVar21,puVar1,lVar15,uVar22,lVar16);
  lVar23 = (long)_DAT_1127570dc;
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar3;
  _objc_release(uVar18);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar18 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c0d6f20(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d40(puVar1,param_2,uVar18);
  func_0x00010c18b5e0(puVar1,param_2,*(undefined8 *)(param_1 + lVar23));
  param_1 = param_1 + lVar17;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ea60(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a982a8; end: 106a9833b; -[SCFriendingNearbyFriendsPageEntryPoint _composerFriendStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a982a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc(PTR_PTR_1126b0c98);
  func_0x00010c0368e0();
  param_1 = param_1 + _DAT_1127570e0;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106a9833c; end: 106a98417; -[SCFriendingNearbyFriendsPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9833c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127570d4,0);
  _objc_storeStrong(param_1 + _DAT_1127570c4,0);
  _objc_storeStrong(param_1 + _DAT_1127570cc,0);
  _objc_storeStrong(param_1 + _DAT_1127570c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127570c8);
  _objc_destroyWeak(param_1 + _DAT_1127570d8);
  _objc_destroyWeak(param_1 + _DAT_1127570d0);
  _objc_destroyWeak(param_1 + _DAT_1127570b4);
  _objc_destroyWeak(param_1 + _DAT_1127570ac);
  _objc_destroyWeak(param_1 + _DAT_1127570e0);
  _objc_destroyWeak(param_1 + _DAT_1127570bc);
  _objc_destroyWeak(param_1 + _DAT_1127570b0);
  _objc_destroyWeak(param_1 + _DAT_1127570b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127570dc,0);
  return;
}



/* Entry: 106a98418; end: 106a9849b; -[SCFriendingNearbyFriendsPageViewController initWithValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106a98418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f48f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127570e4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a9849c; end: 106a987eb; -[SCFriendingNearbyFriendsPageViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9849c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f48f0;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126d0108;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127570e4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar18 = (long)_DAT_1127570ec;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  lStack_88 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar17 = (long)_DAT_1127570f0;
  uVar16 = *(undefined8 *)(lVar3 + lVar17);
  *(undefined **)(lVar3 + lVar17) = puVar1;
  _objc_release(uVar16);
  func_0x00010c219e20(*(undefined8 *)(lVar3 + lVar17));
  func_0x00010c219c20(*(undefined8 *)(lVar3 + lVar17));
  func_0x00010c10c720(0x3fee666666666666,*(undefined8 *)(lVar3 + lVar17));
  uVar16 = *(undefined8 *)(lVar3 + _DAT_1127570f4);
  *(undefined **)(lVar3 + _DAT_1127570f4) = puVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 106a987ec; end: 106a9888b; -[SCFriendingNearbyFriendsPageViewController presentTrayInContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a987ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar3 = (long)_DAT_1127570f0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c219c20(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c10c720(0x3fee666666666666,*(undefined8 *)(param_1 + lVar3),param_2,param_3,0,8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127570f4);
  *(undefined8 *)(param_1 + _DAT_1127570f4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a9888c; end: 106a98927; -[SCFriendingNearbyFriendsPageViewController _onTrayDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9888c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_1127570f8;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127570f0);
  *(undefined8 *)(param_1 + _DAT_1127570f0) = 0;
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a98928;
  puStack_40 = &UNK_110842e18;
  lStack_38 = lVar1;
  func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_1127570f4),param_2,&puStack_58);
  _objc_release(lVar1);
  return;
}



/* Entry: 106a98928; end: 106a9892f;  */

void FUN_106a98928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_nearbyFriendsPageViewControllerD_1126135f8);
  return;
}



/* Entry: 106a98930; end: 106a9898f; -[SCFriendingNearbyFriendsPageViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a98930(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_1127570f8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0d6f80();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126f48f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a98990; end: 106a989ef; -[SCFriendingNearbyFriendsPageViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a98990(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f48f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  param_1 = param_1 + _DAT_1127570f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d6f60();
  _objc_release(param_1);
  return;
}



/* Entry: 106a989f0; end: 106a989ff; -[SCFriendingNearbyFriendsPageViewController tray:positionDidChange:] */

void FUN_106a989f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be6c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onTrayDismissed_1125789f0);
    return;
  }
  return;
}



/* Entry: 106a98a00; end: 106a98a0b; -[SCFriendingNearbyFriendsPageViewController permissionsManagerWantsToPresentPermissionsPrompt:] */

void FUN_106a98a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated_c_112621588,param_3,1,0);
  return;
}



/* Entry: 106a98a0c; end: 106a98a2b; -[SCFriendingNearbyFriendsPageViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a98a0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127570f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a98a2c; end: 106a98a3f; -[SCFriendingNearbyFriendsPageViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a98a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127570f8,param_3);
  return;
}



/* Entry: 106a98a40; end: 106a98a4f; -[SCFriendingNearbyFriendsPageViewController context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a98a40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127570e8);
}



/* Entry: 106a98a50; end: 106a98a8f; -[SCFriendingNearbyFriendsPageViewController setContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a98a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127570e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


