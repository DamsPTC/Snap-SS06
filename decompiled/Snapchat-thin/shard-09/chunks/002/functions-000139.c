/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a98a90; end: 106a98b0b; -[SCFriendingNearbyFriendsPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a98a90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127570e8,0);
  _objc_destroyWeak(param_1 + _DAT_1127570f8);
  _objc_storeStrong(param_1 + _DAT_1127570f4,0);
  _objc_storeStrong(param_1 + _DAT_1127570ec,0);
  _objc_storeStrong(param_1 + _DAT_1127570e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127570f0,0);
  return;
}



/* Entry: 106a98b0c; end: 106a98b17; +[SCComposerAddFriendsNearbyView componentPath] */

undefined ** FUN_106a98b0c(void)

{
  return &PTR____CFConstantStringClassReference_110e694f8;
}



/* Entry: 106a98b18; end: 106a98b4b; -[SCComposerAddFriendsNearbyView initWithViewModel:componentContext:runtime:] */

void FUN_106a98b18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f48f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106a98b4c; end: 106a98b9b; -[SCComposerAddFriendsNearbyView setViewModel:] */

void FUN_106a98b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a98b9c; end: 106a98bdf; -[SCComposerAddFriendsNearbyView viewModel] */

void FUN_106a98b9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a98be0; end: 106a98beb; +[SCComposerAddFriendsView componentPath] */

undefined ** FUN_106a98be0(void)

{
  return &PTR____CFConstantStringClassReference_110e69518;
}



/* Entry: 106a98bec; end: 106a98c1f; -[SCComposerAddFriendsView initWithViewModel:componentContext:runtime:] */

void FUN_106a98bec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4900;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106a98c20; end: 106a98c6f; -[SCComposerAddFriendsView setViewModel:] */

void FUN_106a98c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a98c70; end: 106a98cb3; -[SCComposerAddFriendsView viewModel] */

void FUN_106a98c70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a98cb4; end: 106a98e0f; -[SCComposerAddFriendsNearbyContext initWithOnToggleAddFriendsNearby:nearbyFriendsStore:friendStore:onPresentUserChat:onPresentUserSnap:onPresentUserProfile:onNearbyFriendImpressed:] */

undefined8 *
FUN_106a98cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar2 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  uVar3 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  uVar4 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  puStack_68 = PTR_PTR_1126f4908;
  puVar5 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106a98e10; end: 106a98e37; +[SCComposerAddFriendsNearbyContext valdiMarshallableObjectDescriptor] */

void FUN_106a98e10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11095a4c8;
  param_1[1] = &PTR_DAT_11095a5a0;
  param_1[2] = &PTR_DAT_11095a498;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a98e38; end: 106a98e5f;  */

undefined8 FUN_106a98e38(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1]);
  return 0;
}



/* Entry: 106a98e60; end: 106a98edf;  */

void FUN_106a98e60(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106a98f2c;
  puStack_30 = &UNK_1108d0ce0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a98ee0; end: 106a98f13; -[SCComposerAddFriendsNearbyViewModel init] */

void FUN_106a98ee0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4910;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106a98f14; end: 106a98f2b; +[SCComposerAddFriendsNearbyViewModel valdiMarshallableObjectDescriptor] */

void FUN_106a98f14(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dde3c10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a98f2c; end: 106a98f5b;  */

void FUN_106a98f2c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106a98f5c; end: 106a98f7b; -[SCComposerAddFriendsContext init] */

void FUN_106a98f5c(void)

{
  FUN_106a991a4(PTR_PTR_1126f4918);
  return;
}



/* Entry: 106a98f7c; end: 106a98fb3; +[SCComposerAddFriendsContext valdiMarshallableObjectDescriptor] */

void FUN_106a98f7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11095a608;
  param_1[1] = &PTR_s_SCBridgeObservable_11095ab30;
  param_1[2] = &PTR_DAT_11095a5c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a98fb4; end: 106a99017;  */

void FUN_106a98fb4(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106a991c0(FUN_106a99148);
  _objc_retainBlock(&puStack_48);
  func_0x000106a991e4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a99018; end: 106a9903f;  */

undefined8 FUN_106a99018(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3]);
  return 0;
}



/* Entry: 106a99040; end: 106a990a3;  */

void FUN_106a99040(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106a991c0(0x106a99174);
  _objc_retainBlock(&puStack_48);
  func_0x000106a991e4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a990a4; end: 106a990c3; -[SCComposerAddFriendsHooks init] */

void FUN_106a990a4(void)

{
  FUN_106a991a4(PTR_PTR_1126f4920);
  return;
}



/* Entry: 106a990c4; end: 106a990df; +[SCComposerAddFriendsHooks valdiMarshallableObjectDescriptor] */

void FUN_106a990c4(undefined8 *param_1)

{
  *param_1 = &PTR_s_onPageScroll_11095ac18;
  param_1[1] = &PTR_DAT_11095ae10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a990e0; end: 106a990ff; -[SCComposerAddFriendsTweaks init] */

void FUN_106a990e0(void)

{
  FUN_106a991a4(PTR_PTR_1126f4928);
  return;
}



/* Entry: 106a99100; end: 106a99113; +[SCComposerAddFriendsTweaks valdiMarshallableObjectDescriptor] */

void FUN_106a99100(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11095ae50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a99114; end: 106a99133; -[SCComposerAddFriendsViewModel init] */

void FUN_106a99114(void)

{
  FUN_106a991a4(PTR_PTR_1126f4930);
  return;
}



/* Entry: 106a99134; end: 106a99147; +[SCComposerAddFriendsViewModel valdiMarshallableObjectDescriptor] */

void FUN_106a99134(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dde3c28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106a99148; end: 106a991a3;  */

void FUN_106a99148(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106a991a4; end: 106a991ef;  */

void FUN_106a991a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 106a991f0; end: 106a99263; -[SCFriendingNearbyFriendsComposerStoreServices initWithFindNearbyFriendsStore:] */

undefined1 * FUN_106a991f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4938;
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



/* Entry: 106a99264; end: 106a9926b; -[SCFriendingNearbyFriendsComposerStoreServices nearbyFriendsStore] */

undefined8 FUN_106a99264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a9926c; end: 106a99277; -[SCFriendingNearbyFriendsComposerStoreServices .cxx_destruct] */

void FUN_106a9926c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a99278; end: 106a99313; -[SCFriendingNearbyFriendsScope initWithUiContainer:scopeDelegate:] */

undefined1 *
FUN_106a99278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a99314; end: 106a9931b; -[SCFriendingNearbyFriendsScope uiContainer] */

undefined8 FUN_106a99314(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a9931c; end: 106a99333; -[SCFriendingNearbyFriendsScope delegate] */

void FUN_106a9931c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a99334; end: 106a9935f; -[SCFriendingNearbyFriendsScope .cxx_destruct] */

void FUN_106a99334(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a99360; end: 106a9943b; -[SCImageToVideoWriter initWithImageArray:temporaryFileWriter:] */

undefined1 *
FUN_106a99360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4948;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a9943c; end: 106a9947f; -[SCImageToVideoWriter dealloc] */

void FUN_106a9943c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3a200();
  puStack_28 = PTR_PTR_1126f4948;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a99480; end: 106a9954f; -[SCImageToVideoWriter _generateOutputMovieURL] */

void FUN_106a99480(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e69578);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfacf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a99550; end: 106a996df; -[SCImageToVideoWriter writeToVideoURLWithSize:duration:maximumEdgeResolution:progress:completion:] */

void FUN_106a99550(double param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  double dStack_50;
  double dStack_48;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = SUB84(param_1,0);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_6 == 0) {
    uVar3 = 0;
    uVar4 = 0x409e0000;
  }
  else {
    func_0x00010bf885a0(param_6);
  }
  dVar6 = param_1 / param_2;
  if (param_2 == (double)CONCAT44(uVar4,uVar3) || param_2 < (double)CONCAT44(uVar4,uVar3)) {
    if (param_1 != (double)CONCAT44(uVar4,uVar3) && (double)CONCAT44(uVar4,uVar3) <= param_1) {
      param_1 = (double)CONCAT44(uVar4,uVar3);
      param_2 = (double)CONCAT44(uVar4,uVar3) / dVar6;
    }
  }
  else {
    param_1 = dVar6 * (double)CONCAT44(uVar4,uVar3);
    param_2 = (double)CONCAT44(uVar4,uVar3);
  }
  *(undefined1 *)(param_4 + 0x20) = 1;
  *(undefined8 *)(param_4 + 0x28) = param_3;
  uVar7 = NEON_fmov(0x41800000,4);
  dVar6 = (double)((float)(int)(param_1 * 0.0625) * (float)uVar7);
  dVar5 = (double)((float)(int)(param_2 * 0.0625) * (float)((ulong)uVar7 >> 0x20));
  *(double *)(param_4 + 0x38) = dVar5;
  *(double *)(param_4 + 0x30) = dVar6;
  uVar7 = param_7;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_4 + 0x68);
  *(undefined8 *)(param_4 + 0x68) = uVar7;
  _objc_release(uVar2);
  uVar7 = param_8;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_4 + 0x60);
  *(undefined8 *)(param_4 + 0x60) = uVar7;
  _objc_release(uVar2);
  lVar1 = param_4;
  func_0x00010be1b800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + 0x40);
  *(long *)(param_4 + 0x40) = lVar1;
  _objc_release(uVar7);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a996e0;
  puStack_60 = &UNK_110858dc0;
  lStack_58 = param_4;
  dStack_50 = dVar6;
  dStack_48 = dVar5;
  func_0x00010c0f7fc0(*(undefined8 *)(param_4 + 0x18),param_5,&puStack_78);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 106a996e0; end: 106a99a7b;  */

void FUN_106a996e0(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
  _objc_alloc();
  lStack_b0 = 0;
  func_0x00010c057a20();
  lVar1 = lStack_b0;
  _objc_retain(lStack_b0);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar9 = *(undefined **)(param_1 + 0x20);
  if (*(long *)(puVar9 + 0x48) == 0) {
    func_0x00010bf764a0(puVar9);
    goto LAB_106a99a40;
  }
  if ((*(double *)(param_1 + 0x28) <= 0.0) || (*(double *)(param_1 + 0x30) <= 0.0)) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e69598;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf764a0(puVar9);
    _objc_release(puVar2);
    param_1 = puVar2;
    unaff_x22 = puVar5;
  }
  else {
    uStack_88 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
    uStack_70 = *(undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
    uStack_80 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_68 = puVar2;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar9;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    func_0x00010bf0ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
    func_0x00010bf0ba60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x58) = puVar2;
    _objc_release(uVar3);
    unaff_x22 = *(undefined **)(param_1 + 0x20);
    puVar9 = puVar5;
    if (*(long *)(unaff_x22 + 0x50) == 0) {
      uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110e695b8;
    }
    else {
      uVar4 = *(ulong *)(unaff_x22 + 0x48);
      func_0x00010bf2c460();
      unaff_x22 = *(undefined **)(param_1 + 0x20);
      if ((uVar4 & 1) != 0) {
        func_0x00010bef93a0(*(undefined8 *)(unaff_x22 + 0x48));
        func_0x00010c251d20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
        uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        func_0x00010c2508a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
        func_0x00010c2bde20(*(undefined8 *)(param_1 + 0x20));
        goto LAB_106a99a3c;
      }
      uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e695d8;
    }
    param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf764a0(unaff_x22);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
LAB_106a99a3c:
  _objc_release(puVar5);
LAB_106a99a40:
  lVar6 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_150;
  lStack_e8 = lVar1;
  pcStack_d8 = FUN_106a99a7c;
  puStack_128 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0xffffffffffffffff;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_106a99b74;
  puStack_138 = &UNK_11084b9d0;
  lStack_130 = lVar6;
  puStack_118 = puStack_128;
  puStack_100 = unaff_x22;
  puStack_f8 = puVar9;
  puStack_f0 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retainBlock(&puStack_150);
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  func_0x00010bf0ba40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar6 + 0x18);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135d80(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(ppuVar7);
  __Block_object_dispose(&uStack_120,8);
  return;
}



/* Entry: 106a99a7c; end: 106a99b73; -[SCImageToVideoWriter writeFrames] */

void FUN_106a99a7c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_80;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106a99b74;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf0ba40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135d80(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 106a99b74; end: 106a99e8f;  */

void FUN_106a99b74(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010bf0ba40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c07bca0();
  _objc_release(uVar3);
  puVar1 = PTR__kCMTimeZero_110348670;
  if ((int)uVar6 != 0) {
    do {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010bf529e0();
      if (lVar8 == lVar4) {
        iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
        func_0x00010bf529e0();
        dVar10 = *(double *)(*(long *)(param_1 + 0x20) + 0x28);
        uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
        func_0x00010bf529e0();
        dVar9 = *(double *)(*(long *)(param_1 + 0x20) + 0x28) * 30.0 + -1.0;
        if ((dVar10 / (double)uVar5) * (double)(iVar2 + -1) * 30.0 != (double)(int)dVar9) {
          _CMTimeMake(&uStack_70,(long)dVar9,0x1e);
          lVar4 = *(long *)(param_1 + 0x20);
          uVar6 = *(undefined8 *)(lVar4 + 8);
          func_0x00010c089820(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uStack_88 = uStack_68;
          uStack_90 = uStack_70;
          uStack_80 = uStack_60;
          func_0x00010c2bdf00();
          _objc_release(uVar6);
          if ((int)lVar4 == 0) {
            return;
          }
        }
      }
      else {
        lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        func_0x00010bf529e0();
        if (lVar8 == lVar4 + 1) {
          _CMTimeMake(&uStack_70,(long)(*(double *)(*(long *)(param_1 + 0x20) + 0x28) * 30.0),0x1e);
          lVar4 = *(long *)(param_1 + 0x20);
          uVar6 = *(undefined8 *)(lVar4 + 8);
          func_0x00010c089820(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uStack_88 = uStack_68;
          uStack_90 = uStack_70;
          uStack_80 = uStack_60;
          func_0x00010c2bdf00();
          _objc_release(uVar6);
          if ((int)lVar4 == 0) {
            return;
          }
          func_0x00010bf76620(*(undefined8 *)(param_1 + 0x20));
          return;
        }
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        if (lVar4 == 0) {
          _CMTimeMake(&uStack_70,1,0x1e);
          dVar9 = *(double *)(*(long *)(param_1 + 0x20) + 0x28);
          uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010bf529e0();
          if ((int)((dVar9 / (double)uVar5) * 30.0) == 1) goto LAB_106a99dc0;
        }
        else if (lVar4 == -1) {
          uStack_68 = *(undefined8 *)(puVar1 + 8);
          uStack_70 = *(undefined8 *)puVar1;
          uStack_60 = *(undefined8 *)(puVar1 + 0x10);
        }
        else {
          dVar9 = *(double *)(*(long *)(param_1 + 0x20) + 0x28);
          uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010bf529e0(uVar5);
          _CMTimeMake(&uStack_90,(long)((dVar9 / (double)uVar5) * (double)lVar4 * 30.0),0x1e);
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          uStack_60 = uStack_80;
        }
        uVar5 = *(ulong *)(param_1 + 0x20);
        uVar6 = *(undefined8 *)(uVar5 + 8);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uStack_88 = uStack_68;
        uStack_90 = uStack_70;
        uStack_80 = uStack_60;
        func_0x00010c2bdf00();
        _objc_release(uVar6);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
LAB_106a99dc0:
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x58);
      func_0x00010bf0ba40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c07bca0();
      _objc_release(uVar7);
    } while ((uVar5 & 1) != 0);
  }
  return;
}



/* Entry: 106a99e90; end: 106a9a12f; -[SCImageToVideoWriter writeImage:at:] */

undefined8 FUN_106a99e90(long param_1,undefined8 param_2,long param_3,double *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e695f8;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
LAB_106a9a02c:
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf764a0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    func_0x00010bfe8380(param_3);
    lVar1 = param_1;
    func_0x00010bf54e80(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar1 == 0) {
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e69618;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a9a02c;
    }
    uVar2 = *(ulong *)(param_1 + 0x58);
    dStack_88 = param_4[1];
    dStack_90 = *param_4;
    dStack_80 = param_4[2];
    func_0x00010bf06f60();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) != 0) {
        dStack_88 = param_4[1];
        dVar6 = *param_4;
        dStack_80 = param_4[2];
        dStack_90 = dVar6;
        _CMTimeGetSeconds(&dStack_90);
        if ((!NAN(dVar6)) && (0.0 < *(double *)(param_1 + 0x28))) {
          (**(code **)(*(long *)(param_1 + 0x68) + 0x10))
                    ((float)(dVar6 / *(double *)(param_1 + 0x28)));
        }
      }
      _CVBufferRelease(lVar1);
      uVar5 = 1;
      goto LAB_106a9a0f0;
    }
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e69638;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf764a0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _CVBufferRelease(lVar1);
  }
  uVar5 = 0;
LAB_106a9a0f0:
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_98 = FUN_106a9a130;
    uStack_b0 = uVar5;
    lStack_a8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010c0bb0a0(*(undefined8 *)(lVar1 + 0x50));
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    _CMTimeMake(auStack_c8,(long)(*(double *)(lVar1 + 0x28) * 30.0),0x1e);
    func_0x00010bf95400(uVar5);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010bfaff80(uVar5);
    return uVar5;
  }
  return uVar5;
}



/* Entry: 106a9a130; end: 106a9a1f3; -[SCImageToVideoWriter didFinish] */

void FUN_106a9a130(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x00010c0bb0a0(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _CMTimeMake(auStack_38,(long)(*(double *)(param_1 + 0x28) * 30.0),0x1e);
  func_0x00010bf95400(uVar1);
  func_0x00010bfaff80(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106a9a1f4; end: 106a9a237; -[SCImageToVideoWriter didFailWithError:] */

void FUN_106a9a1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf3a200(param_1);
  func_0x00010bf43d40(param_1,param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9a238; end: 106a9a26f; -[SCImageToVideoWriter completeWithURL:error:] */

void FUN_106a9a238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_1 + 0x60) + 0x10))(*(long *)(param_1 + 0x60),param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a9a270; end: 106a9a2bb; -[SCImageToVideoWriter cleanup] */

void FUN_106a9a270(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a9a2bc; end: 106a9a593; -[SCImageToVideoWriter createCVPixelBufferFromCGImage:orientation:andSize:] */

undefined *
FUN_106a9a2bc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = (undefined *)0x0;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CVPixelBufferCreate(uVar2,(long)param_1,(long)param_2,0x20,puVar1,&puStack_c8);
  if ((int)uVar2 == 0 && puStack_c8 != (undefined *)0x0) {
    _CVPixelBufferLockBaseAddress(puStack_c8,0);
    puVar6 = puStack_c8;
    _CVPixelBufferGetBaseAddress();
    if (puVar6 != (undefined *)0x0) {
      puVar3 = puVar6;
      _CGColorSpaceCreateDeviceRGB();
      _CGBitmapContextCreate(puVar6,(long)param_1,(long)param_2,8,(long)(param_1 * 4.0),puVar3,6);
      if (puVar6 != (undefined *)0x0) {
        uVar4 = param_5;
        _CGImageGetWidth();
        uVar5 = param_5;
        _CGImageGetHeight();
        dVar10 = param_2;
        if (uVar4 == 0) {
          dVar11 = 0.0;
        }
        else if (uVar5 == 0) {
          dVar10 = 0.0;
          dVar11 = param_1;
        }
        else {
          dVar7 = (double)uVar4 / (double)uVar5;
          dVar11 = 0.0;
          if (((dVar7 != 0.0) && (dVar10 = 0.0, dVar11 = param_1, dVar7 != INFINITY)) &&
             (dVar10 = param_2, dVar11 = param_2 * dVar7, param_1 <= param_2 * dVar7)) {
            dVar10 = param_1 / dVar7;
            dVar11 = param_1;
          }
        }
        dVar12 = (param_1 - dVar11) * 0.5;
        dVar7 = (param_2 - dVar10) * 0.5;
        func_0x00010b690f98(&uStack_c0,param_1,param_2,param_6);
        _CGContextConcatCTM(puVar6,&uStack_c0);
        if ((dVar12 != 0.0) || (dVar7 != 0.0)) {
          uStack_b8 = 0x3ff0000000000000;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          _CGContextSetFillColor(puVar6,&uStack_c0);
          _CGContextFillRect(0,0,param_1,param_2,puVar6);
        }
        dVar8 = dVar12;
        dVar9 = dVar11;
        if ((param_6 < 8) && ((1L << (param_6 & 0x3f) & 0xccU) != 0)) {
          dVar8 = dVar7;
          dVar9 = dVar10;
          dVar10 = dVar11;
          dVar7 = dVar12;
        }
        _CGContextDrawImage(dVar8,dVar7,dVar9,dVar10,puVar6,param_5);
        _CGColorSpaceRelease(puVar3);
        _CGContextRelease(puVar6);
        _CVPixelBufferUnlockBaseAddress(puStack_c8,0);
        puVar6 = puStack_c8;
        goto LAB_106a9a448;
      }
      _CGColorSpaceRelease(puVar3);
    }
  }
  puVar6 = (undefined *)0x0;
LAB_106a9a448:
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x68,0);
  _objc_storeStrong(puVar1 + 0x60,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x40,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
  puVar1 = puVar1 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1,0);
  return puVar1;
}



/* Entry: 106a9a594; end: 106a9a617; -[SCImageToVideoWriter .cxx_destruct] */

void FUN_106a9a594(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a9a618; end: 106a9a827; -[SCImageToVideoWriterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9a618(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126d0118;
  _objc_alloc(PTR_PTR_1126d0118);
  lVar6 = (long)_DAT_112757138;
  lVar2 = param_3 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfe6b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3 + _DAT_11275713c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c520(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_78,param_3);
  lVar2 = param_3 + lVar6;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c23d0a0();
  lVar4 = param_3 + lVar6;
  uVar7 = param_1;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf8b160();
  lVar3 = param_3 + lVar6;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c0c3440();
  _objc_retainAutoreleasedReturnValue();
  param_3 = param_3 + lVar6;
  _objc_loadWeakRetained(param_3);
  lVar6 = param_3;
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c2be5c0(param_1,param_2,uVar7,puVar1);
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a9a828; end: 106a9a923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9a828(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_112757138;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150620();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a9a924; end: 106a9a95b; -[SCImageToVideoWriterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9a924(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275713c);
  return;
}



/* Entry: 106a9a95c; end: 106a9ac53; -[SCInSettingReportUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9a95c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  func_0x00010be56d00();
  lVar19 = (long)_DAT_112757140;
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cfd40();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 6) {
    puVar4 = PTR_PTR_1126d0120;
    _objc_alloc(PTR_PTR_1126d0120);
    lVar1 = param_1 + lVar19;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00a2c0(puVar4,param_2,lVar5);
  }
  else {
    puVar4 = PTR_PTR_1126d0128;
    _objc_alloc(PTR_PTR_1126d0128);
    lVar1 = param_1 + lVar19;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010c22a440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0cfd40();
    puVar7 = PTR_PTR_1126d0130;
    func_0x00010c22b6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112757144;
    _objc_loadWeakRetained();
    lVar9 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112757148;
    _objc_loadWeakRetained();
    lVar10 = lVar3;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + lVar19;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11275714c;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11095af70);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_112757150;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf054a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_112757154;
    _objc_loadWeakRetained();
    func_0x00010c02c560(puVar4,param_2,lVar6,puVar8,lVar9,lVar10,lVar12,lVar14,puVar15,lVar17,lVar18
                       );
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
  param_1 = param_1 + lVar19;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106a9ac54; end: 106a9ac5f;  */

void FUN_106a9ac54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb598,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 106a9ac60; end: 106a9ad1f; -[SCInSettingReportUIEntryPoint _logPageOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9ac60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_112757158;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126cfe38;
  _objc_alloc_init(PTR_PTR_1126cfe38);
  func_0x00010be22880(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bb165c4();
  _objc_release(param_1);
  func_0x00010c20fec0(puVar3,param_2,lVar1);
  lVar1 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a9ad20; end: 106a9ad9f; -[SCInSettingReportUIEntryPoint _getSettingItemStringFromMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_106a9ad20(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  param_1 = param_1 + _DAT_112757140;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cfd40();
  _objc_release(lVar1);
  _objc_release(param_1);
  if (lVar2 - 1U < 6) {
    ppuVar3 = (undefined **)(&PTR_PTR_11095af90)[lVar2 - 1U];
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  return ppuVar3;
}



/* Entry: 106a9ada0; end: 106a9ae67; -[SCInSettingReportUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9ada0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757154);
  _objc_destroyWeak(param_1 + _DAT_112757150);
  _objc_destroyWeak(param_1 + _DAT_112757158);
  _objc_destroyWeak(param_1 + _DAT_112757148);
  _objc_destroyWeak(param_1 + _DAT_11275714c);
  _objc_destroyWeak(param_1 + _DAT_112757144);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757140);
  return;
}



/* Entry: 106a9ae68; end: 106a9ae83;  */

void FUN_106a9ae68(void)

{
  _objc_opt_new(PTR_PTR_1126b02d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a9ae84; end: 106a9af13; -[SCShakeToReportAuthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9ae84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757178,0);
  _objc_destroyWeak(param_1 + _DAT_112757170);
  _objc_destroyWeak(param_1 + _DAT_112757164);
  _objc_destroyWeak(param_1 + _DAT_112757168);
  _objc_destroyWeak(param_1 + _DAT_112757160);
  _objc_destroyWeak(param_1 + _DAT_11275716c);
  _objc_destroyWeak(param_1 + _DAT_11275715c);
  _objc_destroyWeak(param_1 + _DAT_112757174);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275717c);
  return;
}



/* Entry: 106a9af14; end: 106a9af77; -[SCShakeToReportFeatureSettingsProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9af14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d0160;
  param_1 = param_1 + _DAT_112757180;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064fe0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9af78; end: 106a9afcf; -[SCShakeToReportFeatureSettingsProviderEntryPoint end] */

void FUN_106a9af78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c064fe0(PTR_PTR_1126d0160,param_2,0);
  puStack_28 = PTR_PTR_1126f4950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a9afd0; end: 106a9b007; -[SCShakeToReportFeatureSettingsProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9afd0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757184);
  return;
}



/* Entry: 106a9b008; end: 106a9b07f; -[SCShakeToReportPostRegistrationEntryPoint end] */

void FUN_106a9b008(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(0);
  uVar1 = uRam0000000113824538;
  uRam0000000113824538 = 0;
  _objc_release(uVar1);
  _objc_retain(0);
  uVar1 = uRam0000000113824540;
  uRam0000000113824540 = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f4958;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a9b080; end: 106a9b137; -[SCShakeToReportPostRegistrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9b080(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127571a4,0);
  _objc_destroyWeak(param_1 + _DAT_1127571a8);
  _objc_destroyWeak(param_1 + _DAT_1127571b4);
  _objc_destroyWeak(param_1 + _DAT_11275719c);
  _objc_destroyWeak(param_1 + _DAT_112757190);
  _objc_destroyWeak(param_1 + _DAT_11275718c);
  _objc_destroyWeak(param_1 + _DAT_112757194);
  _objc_destroyWeak(param_1 + _DAT_112757198);
  _objc_destroyWeak(param_1 + _DAT_112757188);
  _objc_destroyWeak(param_1 + _DAT_1127571b0);
  _objc_destroyWeak(param_1 + _DAT_1127571a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127571ac,0);
  return;
}



/* Entry: 106a9b138; end: 106a9b13b; +[SCShakeToReportPromptHelper setTripleTapIntervalForTest:] */

void FUN_106a9b138(void)

{
  return;
}



/* Entry: 106a9b13c; end: 106a9b13f; +[SCShakeToReportPromptHelper setDebounceTapIntervalForTest:] */

void FUN_106a9b13c(void)

{
  return;
}



/* Entry: 106a9b140; end: 106a9b187;  */

void FUN_106a9b140(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32620();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9b188; end: 106a9b1ab;  */

void FUN_106a9b188(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106a9b1ac; end: 106a9b29f; -[SCShakeToReportPromptHelper _tryBeginS2RHelper:] */

undefined8 FUN_106a9b1ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07db40();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf1f440(uVar3,param_3,&PTR____CFConstantStringClassReference_110e696b8,0,0);
    if ((int)uVar3 == 0) {
      uVar3 = 3;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x10);
      uRam00000001136c48a8 = param_1;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_2 + 0x10));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010bf240c0(uVar3,param_3,*(undefined8 *)(param_2 + 0x38),0,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x10),param_3,uVar3);
      _objc_release(uVar3);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 106a9b2a0; end: 106a9b35f; -[SCShakeToReportPromptHelper _tryBeginS2R:] */

void FUN_106a9b2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bed02e0();
  puVar2 = PTR_PTR_1126d0168;
  func_0x00010c1430a0(PTR_PTR_1126d0168);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x50),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106a9b360; end: 106a9b3d3; -[SCShakeToReportPromptHelper _handleUiEvent:] */

void FUN_106a9b360(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if ((((*(byte *)(param_2 + 0x30) & 1) == 0) &&
      (lVar1 = param_4, func_0x00010c261400(), lVar1 == 1)) &&
     (func_0x00010bf604c0(PTR_PTR_1126afec0), 1500.0 < param_1 - dRam00000001136c48a8)) {
    func_0x00010bed02c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a9b3d4; end: 106a9b41b; -[SCShakeToReportPromptHelper shakeReportDidComplete] */

void FUN_106a9b3d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a9b41c; end: 106a9b423; -[SCShakeToReportPromptHelper plusExternalShakeToReportEnabled] */

undefined1 FUN_106a9b41c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



/* Entry: 106a9b424; end: 106a9b4cf; -[SCShakeToReportPromptHelper .cxx_destruct] */

void FUN_106a9b424(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a9b4d0; end: 106a9b623; -[SCShakeToReportShakeEventEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9b4d0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(0);
  uVar1 = uRam0000000113824538;
  uRam0000000113824538 = 0;
  _objc_release(uVar1);
  _objc_retain(0);
  uVar1 = uRam0000000113824540;
  uRam0000000113824540 = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0(PTR_PTR_1126d0130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f2c0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0(PTR_PTR_1126d0130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194180();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0(PTR_PTR_1126d0130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce160();
  _objc_release(puVar2);
  lVar3 = param_1 + _DAT_1127571e4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0b46c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073500();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0(PTR_PTR_1126d0160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1720();
  _objc_release(puVar2);
  puStack_38 = PTR_PTR_1126f4968;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a9b624; end: 106a9b65b; -[SCShakeToReportShakeEventEntryPoint _onIdle] */

void FUN_106a9b624(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0(PTR_PTR_1126d0160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a9b65c; end: 106a9b707; -[SCShakeToReportShakeEventEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9b65c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127571f8,0);
  _objc_destroyWeak(param_1 + _DAT_1127571fc);
  _objc_destroyWeak(param_1 + _DAT_1127571ec);
  _objc_destroyWeak(param_1 + _DAT_112757208);
  _objc_destroyWeak(param_1 + _DAT_1127571f4);
  _objc_destroyWeak(param_1 + _DAT_112757200);
  _objc_destroyWeak(param_1 + _DAT_1127571e8);
  _objc_destroyWeak(param_1 + _DAT_1127571e4);
  _objc_destroyWeak(param_1 + _DAT_11275720c);
  _objc_destroyWeak(param_1 + _DAT_1127571f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757204,0);
  return;
}



/* Entry: 106a9b708; end: 106a9b9bb; -[SCShakeToReportUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9b708(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = param_1 + _DAT_112757210;
  _objc_loadWeakRetained(lVar11);
  lVar1 = lVar11;
  func_0x00010c22a220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar11);
  puVar3 = PTR_PTR_1126d0168;
  func_0x00010c1430c0(PTR_PTR_1126d0168);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112757214;
  _objc_loadWeakRetained(lVar11);
  lVar1 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c143020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar11);
  lVar11 = param_1 + _DAT_112757218;
  _objc_loadWeakRetained();
  lVar1 = lVar11;
  func_0x00010c0da640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar11);
  if (lVar4 != 0) {
    puVar6 = PTR_PTR_1126d0170;
    _objc_alloc_init(PTR_PTR_1126d0170);
    func_0x00010c1af5a0();
    func_0x00010c226d00(puVar6);
    puVar7 = PTR_PTR_1126d0178;
    _objc_alloc_init(PTR_PTR_1126d0178);
    func_0x00010c1fe900();
    func_0x00010c0b2800(lVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  lVar11 = (long)_DAT_11275721c;
  uVar8 = param_1 + lVar11;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  _objc_opt_respondsToSelector();
  _objc_release(uVar9);
  _objc_release(uVar8);
  if ((uVar10 & 1) != 0) {
    lVar1 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1021c0();
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c239e00();
  _objc_release(lVar1);
  if ((int)lVar5 == 0) {
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar1 = lVar11;
    func_0x00010c22a440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c075c00();
    _objc_release(lVar1);
    _objc_release(lVar11);
    if ((int)lVar5 == 0) {
      func_0x00010be7b420(param_1);
    }
    else {
      func_0x00010be7bf80();
    }
  }
  else {
    func_0x00010be7e780(param_1);
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a9b9bc; end: 106a9be3f; -[SCShakeToReportUIEntryPoint _presentShakePromptWithShakeInfoHolder:plusExternalShakeToReportEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9b9bc(long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar36;
  long lVar37;
  long lVar38;
  
  puVar1 = PTR_PTR_1126d0180;
  _objc_retain(param_3);
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11275721c;
  _objc_loadWeakRetained();
  lVar37 = (long)_DAT_112757210;
  lVar3 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c08d520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112757220;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112757224;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf06440();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = (long)_DAT_112757228;
  lVar10 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11275722c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar14 = lVar37;
  func_0x00010c082640();
  lVar15 = param_1;
  FUN_106a9be40();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar16 = lVar38;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112757238;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11275723c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bfac9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112757240;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf3f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112757214;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c143020();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112757244;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112757248;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c0695a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11275724c;
  _objc_loadWeakRetained();
  lVar34 = param_1 + _DAT_112757250;
  _objc_loadWeakRetained();
  lVar35 = param_1 + _DAT_112757254;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112757218;
  _objc_loadWeakRetained();
  lVar36 = param_1;
  func_0x00010c0da640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239e20(puVar1,param_2,lVar2,param_3,lVar4,lVar7,lVar9,lVar11,lVar13,(char)lVar14);
  _objc_release(param_3);
  _objc_release(lVar36);
  _objc_release(param_1);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar38);
  _objc_release(lVar15);
  _objc_release(lVar37);
  _objc_release(lVar13);
  _objc_release(lVar12);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a9be40; end: 106a9be63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9be40(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757258);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a9be64; end: 106a9c31b; -[SCShakeToReportUIEntryPoint _presentExternalReportScreenWithShakeInfoHolder:plusExternalShakeToReportEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9be64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  long lStack_120;
  long lStack_118;
  undefined *puStack_78;
  
  puVar27 = (undefined *)(param_1 + _DAT_11275721c);
  puVar1 = puVar27;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfa2900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126d0188;
  _objc_alloc();
  puVar4 = puVar27;
  _objc_loadWeakRetained();
  puVar5 = puVar4;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c22a160();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d0190;
  puStack_78 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    lStack_118 = param_1 + _DAT_11275722c;
    _objc_loadWeakRetained();
    lStack_120 = lStack_118;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf198c0(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar1;
  }
  puVar1 = puVar27;
  _objc_loadWeakRetained();
  puVar7 = puVar1;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0cfd40();
  puVar9 = puVar27;
  _objc_loadWeakRetained();
  puVar10 = puVar9;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c247520();
  puVar12 = puVar27;
  _objc_loadWeakRetained();
  puVar13 = puVar12;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c22a1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126d0198;
  _objc_alloc(PTR_PTR_1126d0198);
  lVar16 = param_1 + _DAT_11275722c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112757228;
  lVar18 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11095b030);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112757244;
  _objc_loadWeakRetained(lVar21);
  lVar22 = lVar21;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffea60(puVar15,param_2,lVar17,lVar19,puVar20,lVar22);
  lVar23 = param_1 + _DAT_11275724c;
  _objc_loadWeakRetained();
  puVar24 = puVar27;
  _objc_loadWeakRetained();
  puVar25 = puVar24;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c10a9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffca80(puVar2,param_2,puVar6,puStack_78,puVar8,puVar11,puVar14,puVar15,lVar23,puVar26
                     );
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(lVar23);
  _objc_release(puVar15);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(puVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puStack_78);
    _objc_release(lStack_120);
    _objc_release(lStack_118);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar1 = puVar27;
  _objc_loadWeakRetained(puVar27);
  puVar4 = puVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe8a0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar27;
  _objc_loadWeakRetained(puVar27);
  puVar4 = puVar1;
  func_0x00010c22a440();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c151320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7460(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  param_1 = param_1 + lVar28;
  _objc_loadWeakRetained(param_1);
  lVar16 = param_1;
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179e00(puVar2,param_2,lVar16);
  _objc_release(lVar16);
  _objc_release(param_1);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe8e0(puVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_loadWeakRetained(puVar27);
  puVar1 = puVar27;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(puVar1);
  _objc_release(puVar27);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106a9c31c; end: 106a9c327;  */

void FUN_106a9c31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb598,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 106a9c328; end: 106a9c6f7; -[SCShakeToReportUIEntryPoint _presentInternalReportScreenWithShakeInfoHolder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9c328(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
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
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  puVar1 = PTR_PTR_1126d0180;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_11275721c;
  lVar2 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar32 = (long)_DAT_112757210;
  uVar3 = param_1 + lVar32;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010c082640();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar5 = lVar32;
  func_0x00010c08d520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112757220;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112757228;
  lVar9 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11275722c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  FUN_106a9be40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar14 = lVar33;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112757238;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112757214;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c143020();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112757244;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112757248;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0695a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11275724c;
  _objc_loadWeakRetained();
  lVar26 = param_1 + _DAT_112757250;
  _objc_loadWeakRetained();
  lVar27 = param_1 + _DAT_112757254;
  _objc_loadWeakRetained();
  lVar28 = param_1 + _DAT_112757218;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0da640();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar1;
  func_0x00010c237da0(puVar1,param_2,lVar2,uVar4 & 0xffffffff,lVar5,lVar8,lVar10,lVar12,lVar13,
                      lVar14,lVar16,lVar20,lVar22,lVar24,lVar25,lVar26,lVar27,lVar29);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar33);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar32);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  if (((ulong)puVar30 & 1) != 0) {
    return;
  }
  param_1 = param_1 + lVar31;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a260();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9c6f8; end: 106a9c803; -[SCShakeToReportUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9c6f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757218);
  _objc_destroyWeak(param_1 + _DAT_112757254);
  _objc_destroyWeak(param_1 + _DAT_112757250);
  _objc_storeStrong(param_1 + _DAT_112757234,0);
  _objc_destroyWeak(param_1 + _DAT_112757240);
  _objc_destroyWeak(param_1 + _DAT_11275723c);
  _objc_destroyWeak(param_1 + _DAT_11275724c);
  _objc_destroyWeak(param_1 + _DAT_112757244);
  _objc_destroyWeak(param_1 + _DAT_112757214);
  _objc_destroyWeak(param_1 + _DAT_112757238);
  _objc_destroyWeak(param_1 + _DAT_112757248);
  _objc_destroyWeak(param_1 + _DAT_112757228);
  _objc_storeStrong(param_1 + _DAT_112757230,0);
  _objc_destroyWeak(param_1 + _DAT_112757258);
  _objc_destroyWeak(param_1 + _DAT_11275722c);
  _objc_destroyWeak(param_1 + _DAT_11275721c);
  _objc_destroyWeak(param_1 + _DAT_112757210);
  _objc_destroyWeak(param_1 + _DAT_112757224);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757220);
  return;
}



/* Entry: 106a9c804; end: 106a9c9d3; -[SCShakeToReportUnauthenticatedWorkflow initWithSystemScope:systemNetworkServices:applicationCircumstanceEngineServices:spectrumServices:grapheneServices:appInsightsMetadataServices:shakeToReportScopeServices:shakeToReportServicesExposer:shakeToReportScopeExposer:] */

undefined1 *
FUN_106a9c804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f4970;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
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
  return (undefined1 *)puVar1;
}



/* Entry: 106a9c9d4; end: 106a9cec7; -[SCShakeToReportUnauthenticatedWorkflow begin] */

void FUN_106a9c9d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0(PTR_PTR_1126d0130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f2c0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d0130;
  func_0x00010c22b6e0(PTR_PTR_1126d0130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194180();
  _objc_release(puVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7498;
  puVar1 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126b74a0;
  func_0x00010c250d80(PTR_PTR_1126b74a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a3c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf05460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010c0b5920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106a9cec8;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c2a14e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0140;
  _objc_alloc(PTR_PTR_1126d0140);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c249b40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcdfa0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c143020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf398e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb598;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0198e0(puVar2);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(puVar3);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c1cc5c0(PTR_PTR_1126d0148);
  puVar3 = PTR_PTR_1126d0150;
  _objc_alloc(PTR_PTR_1126d0150);
  func_0x00010c045900();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + 0x40));
  puVar5 = PTR_PTR_1126ce2e0;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcdfa0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf398e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ffc0();
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar5;
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar13);
  uVar12 = uRam0000000113824538;
  uRam0000000113824538 = uVar13;
  _objc_release(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar13);
  uVar12 = uRam0000000113824540;
  uRam0000000113824540 = uVar13;
  _objc_release(uVar12);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106a9cec8; end: 106a9cf3f;  */

void FUN_106a9cec8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a9cf40; end: 106a9cf5b;  */

void FUN_106a9cf40(void)

{
  _objc_opt_new(PTR_PTR_1126b02d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a9cf5c; end: 106a9cf97; -[SCShakeToReportUnauthenticatedWorkflow end] */

void FUN_106a9cf5c(void)

{
  undefined8 uVar1;
  
  _objc_retain(0);
  uVar1 = uRam0000000113824538;
  uRam0000000113824538 = 0;
  _objc_release(uVar1);
  _objc_retain(0);
  uVar1 = uRam0000000113824540;
  uRam0000000113824540 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a9cf98; end: 106a9cfcf; -[SCShakeToReportUnauthenticatedWorkflow _onIdle] */

void FUN_106a9cf98(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0160;
  func_0x00010c22b6e0(PTR_PTR_1126d0160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a9cfd0; end: 106a9d05f; -[SCShakeToReportUnauthenticatedWorkflow .cxx_destruct] */

void FUN_106a9cfd0(long param_1)

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



/* Entry: 106a9d060; end: 106a9d14f; -[SCStartupCompleteTimeProviderEntryPoint begin] */

void FUN_106a9d060(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010c252340(PTR_PTR_1126d0180);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a9d0d0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x00010c28be40(PTR_PTR_1126d01a0,param_2,&puStack_48);
  return;
}



/* Entry: 106a9d150; end: 106a9d247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9d150(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  puVar1 = PTR_PTR_1126d01a0;
  func_0x00010bfcc0e0(PTR_PTR_1126d01a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  dVar6 = param_1;
  func_0x00010c28d1a0(puVar1);
  puVar2 = PTR_PTR_1126d01a8;
  _objc_alloc(PTR_PTR_1126d01a8);
  func_0x00010c01f300(param_1 - dVar6);
  lVar3 = *(long *)(param_2 + 0x20) + (long)_DAT_112757284;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268c0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a9d248; end: 106a9d27f; -[SCStartupCompleteTimeProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a9d248(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112757284);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757288);
  return;
}



/* Entry: 106a9d280; end: 106a9d287; +[SCShakeConfigCoordinator isUserGodModeFromCache] */

undefined8 FUN_106a9d280(void)

{
  return 0;
}



/* Entry: 106a9d288; end: 106a9d2db; +[SCShakeInfoHolderImpl sharedInstance] */

void FUN_106a9d288(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c48b0 != -1) {
    func_0x00010002a2fc(0x1136c48b0,&PTR___NSConcreteGlobalBlock_11095b070);
  }
  uVar1 = uRam00000001136c48b8;
  _objc_retain(uRam00000001136c48b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a9d2dc; end: 106a9d307;  */

void FUN_106a9d2dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d0138;
  _objc_alloc_init();
  uVar1 = puRam00000001136c48b8;
  puRam00000001136c48b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a9d308; end: 106a9d35f; -[SCShakeInfoHolderImpl init] */

undefined1 * FUN_106a9d308(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),0);
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a9d360; end: 106a9d377; -[SCShakeInfoHolderImpl externalImageAttachmentProvider] */

void FUN_106a9d360(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


