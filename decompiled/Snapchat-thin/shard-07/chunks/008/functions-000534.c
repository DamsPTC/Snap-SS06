/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059ee3f0; end: 1059ee3f7;  */

void FUN_1059ee3f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdedd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hashtag_1125d5530);
  return;
}



/* Entry: 1059ee3f8; end: 1059ee43f;  */

void FUN_1059ee3f8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0e58;
  _objc_alloc(PTR_PTR_1126c0e58);
  func_0x00010c04f280();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059ee440; end: 1059ee51f; -[SCTopicsCollection getSpotlightSubtextWithCompletionQueue:completion:] */

void FUN_1059ee440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  pcStack_60 = FUN_1059ee520;
  puStack_58 = &UNK_110848378;
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



/* Entry: 1059ee520; end: 1059ee553;  */

void FUN_1059ee520(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be22e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ee554; end: 1059ee707; -[SCTopicsCollection _getSpotlightSubtextWithCompletionQueue:completion:] */

void FUN_1059ee554(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1059ee708;
    puStack_50 = &UNK_110849530;
    puStack_48 = param_4;
    _objc_retain(param_4);
    func_0x00010007380c(param_3,&puStack_68);
    puVar3 = puStack_48;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    func_0x00010befa160(puVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010befa120(puVar2);
    }
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x000100504554(puVar3,&PTR___NSConcreteGlobalBlock_1108ccc48);
    func_0x00010befa160(puVar2);
    puVar4 = puVar2;
    func_0x00010c12c080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_1059ec4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1059ee720;
    puStack_80 = &UNK_11084aaa8;
    puStack_78 = puVar5;
    puStack_70 = param_4;
    _objc_retain(puVar5);
    _objc_retain(param_4);
    func_0x00010007380c(param_3,&puStack_98);
    _objc_release(puStack_78);
    _objc_release(puStack_70);
    _objc_release(puVar5);
    _objc_release(param_4);
    param_4 = puVar2;
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ee708; end: 1059ee72f;  */

void FUN_1059ee708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059ee714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1059ee730; end: 1059ee827; -[SCTopicsCollection isValidHashtag:] */

bool FUN_1059ee730(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c265a40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c12b740(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc1338);
  uVar4 = param_3;
  func_0x00010c08fa60();
  if (uVar4 < 0x65) {
    uVar4 = param_3;
    func_0x00010c11f340(param_3,param_2,puVar3);
    bVar1 = uVar4 == 0x7fffffffffffffff;
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1059ee828; end: 1059ee8db; -[SCTopicsCollection _asyncAnnounceUpdate] */

void FUN_1059ee828(undefined8 param_1)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc85e0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059ee8dc; end: 1059ee92b;  */

void FUN_1059ee8dc(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdcc760();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1059ee92c; end: 1059ee9b3; -[SCTopicsCollection _announceUpdateWithPostingHint:] */

void FUN_1059ee92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf51e00(uVar1);
  func_0x00010c0d9840(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059ee9b4; end: 1059ee9bb; -[SCTopicsCollection includeSelectedTopicsInOurStorySubtext] */

undefined1 FUN_1059ee9b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 1059ee9bc; end: 1059ee9c3; -[SCTopicsCollection setIncludeSelectedTopicsInOurStorySubtext:] */

void FUN_1059ee9bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1059ee9c4; end: 1059eea5f; -[SCTopicsCollection .cxx_destruct] */

void FUN_1059ee9c4(long param_1)

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



/* Entry: 1059eea60; end: 1059eeae3; +[SQLSpotlightUsageDB schema] */

void FUN_1059eea60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f31c008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059eeae4; end: 1059eeb0b; -[SQLSpotlightUsageDB getConn] */

void FUN_1059eeae4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059eeb0c; end: 1059eeb93; -[SQLSpotlightUsageDB initWithSqliteConnection:] */

undefined1 * FUN_1059eeb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb428;
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



/* Entry: 1059eeb94; end: 1059eec5f; -[SQLSpotlightUsageDB .cxx_destruct] */

void FUN_1059eeb94(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059eec60; end: 1059eec73; -[SQLSpotlightUsageDB .cxx_construct] */

void FUN_1059eec60(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1059eec74; end: 1059eed7f;  */

void FUN_1059eec74(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x10,*(undefined8 *)(param_1 + 8),&UNK_10ddc8638,0x1c);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059eed80; end: 1059eefb7;  */

void FUN_1059eed80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126c0e60;
  _objc_alloc(PTR_PTR_1126c0e60);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0001005ff748(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001005ff748(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001005ff748(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x0001005ff748(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x0001005ff748(param_1,5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x0001005fdab8(param_1,6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x0001005ff748(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005ff748(param_1,8);
  _objc_retainAutoreleasedReturnValue();
  FUN_1059ef9d4(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,param_1);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059eefb8; end: 1059ef167;  */

void FUN_1059eefb8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddc8655,0x2d,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1059eed80);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_1059ef088;
    }
  }
  plVar4 = (long *)0x0;
LAB_1059ef088:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1059ef168; end: 1059ef2cb;  */

void FUN_1059ef168(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8683,0xd0);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x00010b5eeb94(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ef2cc; end: 1059ef48f;  */

void FUN_1059ef2cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined4 uStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8754,0x93);
      uStack_54 = 1;
      func_0x00010b5eeb94();
      func_0x0001005fcac0(lVar1,&uStack_54,param_3);
      func_0x00010b5eeb94(lVar1,&uStack_54,param_4);
      func_0x0001005fcac0(lVar1,&uStack_54,param_5);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ef490; end: 1059ef5f3;  */

void FUN_1059ef490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc87e8,0x5d);
      uStack_44 = 1;
      func_0x00010b5eeb94();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ef5f4; end: 1059ef783;  */

void FUN_1059ef5f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x30;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8846,0x73);
      uStack_44 = 1;
      func_0x00010b5eeb94();
      func_0x00010b5eeb94(lVar1,&uStack_44,param_3);
      func_0x0001005fcac0(lVar1,&uStack_44,param_4);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ef784; end: 1059ef8e7;  */

void FUN_1059ef784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x38;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc88ba,0x57);
      uStack_44 = 1;
      func_0x00010b5eeb94();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ef8e8; end: 1059ef9d3;  */

void FUN_1059ef8e8(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0001005fc990(param_1 + 0x40,*(undefined8 *)(param_1 + 8),&UNK_10ddc8912,0x90);
      func_0x00010b5ef0d0();
    }
  }
  return;
}



/* Entry: 1059ef9d4; end: 1059efbcb;  */

undefined1 *
FUN_1059ef9d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126eb430;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_10;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1059efbcc; end: 1059efbef; -[SQLSpotlightUsage copyWithZone:] */

undefined8 FUN_1059efbcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059efbf0; end: 1059efcb7; -[SQLSpotlightUsage hash] */

undefined8 * FUN_1059efbf0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1059efde0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1059efdec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_1059efdec;
                      }
                      goto LAB_1059efde0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1059efdec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1059efcb8; end: 1059efe07; -[SQLSpotlightUsage isEqual:] */

long FUN_1059efcb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059efde0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059efdec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if (lVar3 != *(long *)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_1059efdec;
                      }
                      goto LAB_1059efde0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1059efdec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059efe08; end: 1059efe43;  */

undefined8 FUN_1059efe08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1059efe44; end: 1059efec7; -[SQLSpotlightUsage .cxx_destruct] */

void FUN_1059efe44(long param_1)

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



/* Entry: 1059efec8; end: 1059eff87; -[SCSpotlightRepliesDataServiceProvider provide] */

void FUN_1059efec8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126c0e68;
  _objc_alloc(PTR_PTR_1126c0e68);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03e3c0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059eff88; end: 1059f0057;  */

void FUN_1059eff88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0e70;
  _objc_alloc(PTR_PTR_1126c0e70);
  func_0x00010c03e420();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f0058; end: 1059f0097;  */

void FUN_1059f0058(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdecb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059f0098; end: 1059f01a7; -[SCSpotlightRepliesDataServiceProvider _createDataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f0098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c0e78;
  _objc_alloc(PTR_PTR_1126c0e78);
  lVar2 = param_1 + _DAT_11272d3a4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272d3a8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c131940();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d3ac;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bc00(puVar1,param_2,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
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



/* Entry: 1059f01a8; end: 1059f01eb; -[SCSpotlightRepliesDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f01a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d3ac);
  _objc_destroyWeak(param_1 + _DAT_11272d3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d3a4);
  return;
}



/* Entry: 1059f01ec; end: 1059f03d7; -[SCSpotlightRepliesDataStore initWithUserId:spotlightRepliesUpdateAnnouncer:storiesConfigProvider:] */

undefined1 *
FUN_1059f01ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb438;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c0e80;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + 0x58) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059f03d8; end: 1059f03ff; -[SCSpotlightRepliesDataStore snapRepliesDataProvider] */

void FUN_1059f03d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f0400; end: 1059f04ff; -[SCSpotlightRepliesDataStore spotlightReplyWithReplyId:] */

void FUN_1059f0400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  pcStack_48 = FUN_1059f0500;
  uStack_40 = 0x1059f0510;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f0500; end: 1059f0517;  */

void FUN_1059f0500(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1059f0518; end: 1059f059b;  */

void FUN_1059f0518(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010be38ca0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if (uVar1 != 0x7fffffffffffffff) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 1059f059c; end: 1059f0613; -[SCSpotlightRepliesDataStore _threadedRepliesBelowTopLevelCommentWithReplyId:] */

void FUN_1059f059c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e15a18);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfaea40(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059f0614; end: 1059f0717; -[SCSpotlightRepliesDataStore hiddenThreadedRepliesWithParentCommentId:] */

void FUN_1059f0614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  pcStack_48 = FUN_1059f0500;
  uStack_40 = 0x1059f0510;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f0718; end: 1059f075b;  */

void FUN_1059f0718(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059f075c; end: 1059f07e3; -[SCSpotlightRepliesDataStore threadedRepliesFetchStatusWithParentCommentId:] */

undefined8 FUN_1059f075c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1059f07e4; end: 1059f085b; -[SCSpotlightRepliesDataStore paginationCursorWithParentCommentId:] */

void FUN_1059f07e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f085c; end: 1059f0863; -[SCSpotlightRepliesDataStore firstPendingRepliesFetchTime] */

undefined8 FUN_1059f085c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1059f0864; end: 1059f093b; -[SCSpotlightRepliesDataStore fetchRepliesForPendingRepliesTab] */

void FUN_1059f0864(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1059f0500;
  uStack_30 = 0x1059f0510;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38));
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059f093c; end: 1059f097f;  */

void FUN_1059f093c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be13980(uVar1,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059f0980; end: 1059f0a57; -[SCSpotlightRepliesDataStore fetchRepliesForLiveRepliesTab] */

void FUN_1059f0980(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1059f0500;
  uStack_30 = 0x1059f0510;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38));
  uVar2 = puStack_48[5];
  func_0x00010bf51e00(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059f0a58; end: 1059f0c67;  */

undefined * FUN_1059f0a58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be13980(lVar1,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = lVar2;
    func_0x00010c131d20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becb960(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar5);
  }
  func_0x00010befa160(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  func_0x00010c12d500(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf529e0(puVar6);
  func_0x00010bfed320(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066b20(uVar5);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae5e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar6 + 0x20);
  func_0x00010be433a0(uVar5);
  return (undefined *)(ulong)((uint)uVar5 ^ 1);
}



/* Entry: 1059f0c68; end: 1059f0c87;  */

uint FUN_1059f0c68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be433a0(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1059f0c88; end: 1059f0d53; -[SCSpotlightRepliesDataStore fetchSpotlightSnapReplies] */

void FUN_1059f0c88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
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
  pcStack_38 = FUN_1059f0500;
  uStack_30 = 0x1059f0510;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059f0d54;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f0d54; end: 1059f0d8f;  */

void FUN_1059f0d54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059f0d90; end: 1059f0e87; -[SCSpotlightRepliesDataStore fetchTopReply] */

void FUN_1059f0d90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1059f0500;
  uStack_30 = 0x1059f0510;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38));
  lVar2 = puStack_48[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = puStack_48[5];
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059f0e88; end: 1059f0ecb;  */

void FUN_1059f0e88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be13980(uVar1,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059f0ecc; end: 1059f0fb3; -[SCSpotlightRepliesDataStore repliesCountWithFetchType:] */

undefined8 FUN_1059f0ecc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1059f0500;
  uStack_40 = 0x1059f0510;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_38 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38));
  uVar2 = puStack_58[5];
  func_0x00010bf529e0(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  return uVar2;
}



/* Entry: 1059f0fb4; end: 1059f1027;  */

void FUN_1059f0fb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  func_0x00010bdf1c80(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaea40(uVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059f1028; end: 1059f106f; -[SCSpotlightRepliesDataStore visibleRepliesCountInViewerExperience] */

long FUN_1059f1028(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c1317a0(param_1,param_2,3);
  lVar2 = param_1;
  func_0x00010c1317a0(param_1,param_2,4);
  func_0x00010c1317a0(param_1,param_2,5);
  return lVar2 + lVar1 + param_1;
}



/* Entry: 1059f1070; end: 1059f113f; -[SCSpotlightRepliesDataStore paginationTokenForFetchType:] */

void FUN_1059f1070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1059f0500;
  uStack_30 = 0x1059f0510;
  uStack_28 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059f1140;
  puStack_70 = &UNK_11084a858;
  lStack_68 = param_1;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_88);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f1140; end: 1059f11d3;  */

void FUN_1059f1140(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(ulong *)(param_1 + 0x30) < 6) {
    uVar2 = *(undefined8 *)(&UNK_10ddc89a8 + *(ulong *)(param_1 + 0x30) * 8);
  }
  else {
    uVar2 = 3;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059f11d4; end: 1059f143f; -[SCSpotlightRepliesDataStore _reactReply:reactionTypeId:reactOption:isCommentAdmin:] */

void FUN_1059f11d4(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  int param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar1 = param_3;
  func_0x00010c132080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_f0;
  uVar3 = uVar1;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar9 = *plStack_130;
    do {
      uVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(uVar1);
        }
        lVar8 = *(long *)(lStack_138 + uVar10 * 8);
        lVar2 = lVar8;
        func_0x00010c120d00();
        if (lVar2 == param_4) {
          func_0x00010c120aa0(lVar8);
          goto LAB_1059f12d0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
      puVar5 = auStack_f0;
      uVar3 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_140,puVar5,0x10);
    } while (uVar3 != 0);
  }
LAB_1059f12d0:
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bfecde0();
  uVar10 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (uVar3 < uVar10) {
    puVar4 = PTR_PTR_1126c0e88;
    func_0x00010c24bfc0(PTR_PTR_1126c0e88,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c0e90;
    _objc_alloc();
    func_0x00010c03cfa0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6fc0(puVar4,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    if ((param_4 == 1) && (param_6 != 0)) {
      func_0x00010c2b0780(puVar4,param_2,param_5 == 1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    puVar6 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c130f40(uVar7);
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04680();
    _objc_release(uVar7);
    _objc_release(puVar4);
    uVar1 = uVar3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (puVar5 == (undefined *)0x0) {
    func_0x00010bf09f80(uVar1,param_2,*(undefined8 *)(param_3 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0d3c80();
    uVar7 = *(undefined8 *)(param_3 + 8);
    *(ulong *)(param_3 + 8) = uVar3;
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  else {
    func_0x00010befa160(*(undefined8 *)(param_3 + 8));
  }
  uVar1 = param_3;
  func_0x00010bdf8be0(param_3,param_2,*(undefined8 *)(param_3 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0d3c80();
  uVar7 = *(undefined8 *)(param_3 + 8);
  *(ulong *)(param_3 + 8) = uVar3;
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1059f1440; end: 1059f14f3; -[SCSpotlightRepliesDataStore _addRepliesToDataStore:position:] */

void FUN_1059f1440(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_4 == 0) {
    func_0x00010bf09f80(param_3,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar4;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    func_0x00010befa160(*(undefined8 *)(param_1 + 8));
  }
  lVar1 = param_1;
  func_0x00010bdf8be0(param_1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar2;
  _objc_release(uVar4);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1059f14f4; end: 1059f1513; -[SCSpotlightRepliesDataStore _dedupSpotlightSnapRepliesWithCompositeId:] */

void FUN_1059f14f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bd86590(param_3,&PTR___NSConcreteGlobalBlock_1108ccd48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059f1514; end: 1059f15df;  */

void FUN_1059f1514(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_2;
    func_0x00010bf82560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    _objc_retain(lVar3);
    lVar5 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1059f15e0; end: 1059f18eb; -[SCSpotlightRepliesDataStore _addSnapRepliesToDataStore:position:] */

void FUN_1059f15e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_138;
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
  _objc_retain(param_3);
  if (param_4 == 0) {
    lVar9 = param_3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c0d3c80();
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar10;
    _objc_release(uVar8);
    _objc_release(lVar9);
  }
  else {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x60));
  }
  lVar9 = param_1;
  func_0x00010bdf8c00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0d3c80();
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar10;
  _objc_release(uVar8);
  _objc_release(lVar9);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar7 = &uStack_130;
  lStack_138 = param_3;
  func_0x00010bf52a60();
  if (lStack_138 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar8 = uVar11;
        func_0x00010c245680(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar11;
        func_0x00010bf82560(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf45460();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x000107a860e0(uVar8,uVar2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar8);
        uVar12 = *(undefined8 *)(param_1 + 0x68);
        uVar8 = uVar11;
        func_0x00010bf82560(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar8;
        func_0x00010bf45460();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar11;
        func_0x00010c245680(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf5b380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf82560(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066de0(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar8);
        _objc_release(uVar4);
        lVar10 = lVar10 + 1;
      } while (lStack_138 != lVar10);
      puVar7 = &uStack_130;
      lStack_138 = param_3;
      func_0x00010bf52a60();
    } while (lStack_138 != 0);
  }
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04580();
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar6 = puVar7;
  func_0x00010bf529e0();
  if (puVar6 != (undefined8 *)0x0) {
    func_0x00010c12d500(*(undefined8 *)(param_3 + 0x60));
    uVar8 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf045e0();
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1059f18ec; end: 1059f194f; -[SCSpotlightRepliesDataStore _removeSnapRepliesFromDataStore:] */

void FUN_1059f18ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c12d500(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf045e0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f1950; end: 1059f1b23; -[SCSpotlightRepliesDataStore _appendThreadedReplies:afterParentCommentId:] */

void FUN_1059f1950(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar9 = 0;
    uVar7 = 0x7fffffffffffffff;
    do {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c0dfd40(uVar2,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be433a0(param_1,param_2,uVar2);
      uVar10 = uVar7;
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar2;
        func_0x00010c131d20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c0720c0();
        uVar10 = uVar9;
        if ((int)uVar3 == 0) {
          uVar3 = uVar2;
          func_0x00010c0f3b40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          _objc_release(uVar5);
          if ((uVar4 & 1) == 0) {
            uVar10 = uVar7;
          }
        }
        else {
          _objc_release(uVar5);
        }
      }
      _objc_release(uVar2);
      uVar9 = uVar9 + 1;
      uVar5 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      uVar7 = uVar10;
    } while (uVar9 < uVar5);
    if (uVar10 != 0x7fffffffffffffff) {
      uVar9 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      puVar6 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      if (uVar10 < uVar9) {
        uVar8 = param_3;
        func_0x00010bf529e0(param_3);
        func_0x00010bfed320(puVar6,param_2,uVar10 + 1,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066b20(*(undefined8 *)(param_1 + 8),param_2,param_3,puVar6);
        uVar9 = param_1;
        func_0x00010bdf8be0(param_1,param_2,*(undefined8 *)(param_1 + 8));
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c0d3c80();
        uVar8 = *(undefined8 *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar7;
        _objc_release(uVar8);
        _objc_release(uVar9);
        uVar8 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04580();
        _objc_release(uVar8);
        _objc_release(puVar6);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f1b24; end: 1059f1b43; -[SCSpotlightRepliesDataStore _dedupSpotlightRepliesWithReplyId:] */

void FUN_1059f1b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bd86590(param_3,&PTR___NSConcreteGlobalBlock_1108ccd88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059f1b44; end: 1059f1b4b;  */

void FUN_1059f1b44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c131d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_replyId_11262a168);
  return;
}



/* Entry: 1059f1b4c; end: 1059f1c23; -[SCSpotlightRepliesDataStore _indexOfReplyWithReplyId:] */

undefined8 FUN_1059f1b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1059f1bdc;
  puStack_30 = &UNK_1108ccda8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1059f1c24; end: 1059f1dd7; -[SCSpotlightRepliesDataStore _rejectRepliesFromDataStore:] */

void FUN_1059f1c24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x24;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be9a680(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d500(*(undefined8 *)(param_1 + 8),param_2,lVar1);
    lVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c131a00();
    _objc_release(lVar2);
    if (lVar6 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf529e0();
      if (lVar2 == 1) {
        unaff_x24 = lVar1;
        func_0x00010bfb1920(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = unaff_x24;
        func_0x00010c131d20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar6 = 0;
      }
      lVar4 = lVar1;
      func_0x00010bf529e0();
      if (lVar4 == 1) {
        func_0x00010bf046a0(uVar3,param_2,lVar6,0,1);
      }
      else {
        lVar4 = lVar1;
        func_0x00010bfb1920(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf046a0(uVar3,param_2,lVar6,lVar5,1);
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      if (lVar2 == 1) {
        _objc_release(lVar6);
        _objc_release(unaff_x24);
      }
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf045e0();
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f1dd8; end: 1059f1f63; -[SCSpotlightRepliesDataStore _hasThreadedRepliesForSpotlightReply:] */

undefined **
FUN_1059f1dd8(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
             undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long lVar13;
  undefined **ppuVar14;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar15;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  long lStack_428;
  undefined1 auStack_420 [128];
  undefined1 auStack_3a0 [128];
  long lStack_320;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_e8 [16];
  long lStack_68;
  
  ppuVar6 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_4;
  _objc_retain(param_4);
  ppuVar10 = param_4;
  func_0x00010c26d4e0();
  if (ppuVar10 == (undefined **)0x0) {
    param_1 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    param_2 = (undefined **)param_2[1];
    _objc_retain(param_2);
    param_5 = apuStack_e8;
    param_6 = (undefined **)0x10;
    ppuVar2 = param_2;
    func_0x00010bf52a60();
    ppuVar10 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x25 = (undefined **)*puStack_120;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_120 != unaff_x25) {
            _objc_enumerationMutation(param_2);
          }
          ppuVar11 = *(undefined ***)(lStack_128 + (long)unaff_x26 * 8);
          ppuVar10 = ppuVar11;
          func_0x0001062687a4();
          if ((int)ppuVar10 != 0) {
            func_0x00010c0f3b40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = param_4;
            func_0x00010c131d20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = ppuVar11;
            ppuVar6 = unaff_x23;
            func_0x00010c0720c0();
            _objc_release(unaff_x23);
            _objc_release(ppuVar11);
            if (((ulong)unaff_x24 & 1) != 0) {
              ppuVar10 = (undefined **)0x1;
              goto LAB_1059f1f14;
            }
          }
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar2 != unaff_x26);
        param_5 = apuStack_e8;
        param_6 = (undefined **)0x10;
        ppuVar2 = param_2;
        ppuVar6 = &puStack_130;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
      ppuVar10 = (undefined **)0x0;
    }
LAB_1059f1f14:
    _objc_release(param_2);
  }
  else {
    ppuVar10 = (undefined **)0x1;
    ppuVar6 = ppuVar2;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1059f1f64;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar6;
  ppuVar11 = ppuVar6;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  ppuStack_2d8 = ppuVar10;
  ppuVar10 = ppuVar6;
  if (ppuVar6 == (undefined **)0x0) goto LAB_1059f23dc;
  unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  param_5 = (undefined **)0x1;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_1b8 = ppuVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_1b8);
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_4;
  ppuVar11 = ppuVar2;
  func_0x00010be9a680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = param_2;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar10 = ppuVar2;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar6 = ppuVar2;
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar10 = param_4;
      func_0x00010be348c0(param_4,param_3,ppuVar2);
      if ((int)ppuVar10 == 0) {
        ppuVar10 = (undefined **)param_4[1];
        param_5 = (undefined **)0x1;
        unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_1d0 = ppuVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_1d0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = unaff_x27;
        func_0x00010c12d500(ppuVar10);
      }
      else {
        ppuVar10 = ppuVar2;
        func_0x00010c131d20(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_4;
        func_0x00010be38ca0(param_4,param_3,ppuVar10);
        ppuStack_1d8 = ppuVar11;
        _objc_release(ppuVar10);
        ppuVar10 = (undefined **)PTR_PTR_1126c0e98;
        _objc_alloc();
        ppuVar11 = ppuVar2;
        ppuStack_1e8 = ppuVar10;
        func_0x00010c131d20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar2;
        ppuStack_1f8 = ppuVar11;
        func_0x00010c242640();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar2;
        ppuStack_1f0 = ppuVar10;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_210 = ppuVar11;
        func_0x000106268868();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_2b0 = ppuVar11;
        ppuStack_1e0 = ppuVar11;
        func_0x00010c14de00(ppuVar10,param_3,&PTR____CFConstantStringClassReference_110e15a38);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar2;
        ppuStack_200 = ppuVar10;
        func_0x00010c132080();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_208 = ppuVar11;
        func_0x000106268850();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_220 = ppuVar11;
        func_0x00010c1321a0(ppuVar2);
        ppuVar15 = ppuVar2;
        func_0x00010c132000();
        ppuVar14 = ppuVar2;
        func_0x00010c131fe0();
        ppuVar3 = ppuVar2;
        func_0x00010c0f3b40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar2;
        ppuStack_218 = ppuVar3;
        func_0x00010c26d4e0();
        ppuVar5 = ppuVar2;
        func_0x00010c07a860();
        ppuVar10 = ppuVar2;
        func_0x00010bfc9900();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = ppuStack_1f0;
        unaff_x24 = ppuStack_1f8;
        unaff_x23 = ppuStack_200;
        unaff_x25 = ppuStack_208;
        unaff_x28 = ppuStack_210;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_248 = SUB81(ppuVar5,0);
        uStack_260 = 0;
        uStack_270 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_290 = 1;
        uStack_2a0 = 0;
        uStack_2a8 = 0;
        ppuStack_2b0 = (undefined **)0x0;
        unaff_x27 = ppuStack_1e8;
        param_6 = ppuStack_210;
        ppuStack_298 = ppuVar11;
        ppuStack_288 = ppuVar15;
        ppuStack_268 = ppuVar14;
        ppuStack_258 = ppuVar3;
        ppuStack_250 = ppuVar4;
        ppuStack_230 = ppuVar10;
        func_0x00010c03e5c0(param_1,ppuStack_1e8,param_3,ppuStack_1f8,ppuStack_1f0,ppuStack_210,
                            ppuStack_200,0,ppuStack_208);
        _objc_release(ppuVar10);
        _objc_release(ppuStack_218);
        _objc_release(ppuStack_220);
        _objc_release(unaff_x25);
        _objc_release(unaff_x23);
        _objc_release(ppuStack_1e0);
        _objc_release(unaff_x28);
        _objc_release(unaff_x26);
        _objc_release(unaff_x24);
        ppuVar11 = ppuStack_1d8;
        param_5 = unaff_x27;
        func_0x00010c130f40(param_4[1]);
      }
LAB_1059f23a4:
      _objc_release(unaff_x27);
      param_4 = (undefined **)param_4[10];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf045e0();
      _objc_release(param_4);
    }
    else {
      puVar12 = param_4[1];
      param_5 = (undefined **)0x1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_1c0 = ppuVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_1c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d500(puVar12,param_3,puVar1);
      _objc_release(puVar1);
      ppuVar10 = ppuVar2;
      func_0x00010c07a860();
      if (((ulong)ppuVar10 & 1) == 0) {
        ppuVar10 = ppuVar2;
        func_0x00010c0f3b40(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdf89c0(param_4,param_3,ppuVar10);
        _objc_release(ppuVar10);
      }
      unaff_x23 = ppuVar2;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_4;
      ppuVar11 = unaff_x23;
      func_0x00010be38ca0();
      _objc_release(unaff_x23);
      if (ppuVar10 != (undefined **)0x7fffffffffffffff) {
        ppuVar2 = (undefined **)param_4[1];
        func_0x00010bf529e0();
        if (ppuVar10 < ppuVar2) {
          unaff_x27 = (undefined **)param_4[1];
          func_0x00010c0dfd40(unaff_x27,param_3,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = param_4;
          ppuVar11 = unaff_x27;
          func_0x00010be348c0();
          if ((((ulong)ppuVar2 & 1) == 0) &&
             (ppuVar2 = unaff_x27, func_0x00010c131a00(), ppuVar2 == (undefined **)0x1)) {
            ppuVar10 = (undefined **)param_4[1];
            param_5 = (undefined **)0x1;
            unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            ppuStack_1c8 = unaff_x27;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_1c8);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = unaff_x23;
            func_0x00010c12d500(ppuVar10);
            _objc_release(unaff_x23);
          }
          goto LAB_1059f23a4;
        }
      }
    }
  }
  _objc_release(param_2);
  ppuVar2 = ppuVar6;
  _objc_release();
  ppuStack_2d8 = ppuVar6;
LAB_1059f23dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_1059f241c;
  lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar11;
  ppuVar15 = param_5;
  ppuStack_310 = unaff_x28;
  ppuStack_308 = unaff_x27;
  ppuStack_300 = unaff_x26;
  ppuStack_2f8 = unaff_x25;
  ppuStack_2f0 = unaff_x24;
  ppuStack_2e8 = unaff_x23;
  ppuStack_2e0 = ppuVar10;
  ppuStack_2d0 = param_2;
  ppuStack_2c8 = param_4;
  ppuStack_2c0 = &puStack_140;
  _objc_retain(ppuVar11);
  ppuVar10 = ppuVar11;
  func_0x00010bf529e0();
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar10 = ppuVar2;
    func_0x00010be9a680(ppuVar2,param_3,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    ppuVar6 = ppuVar11;
    func_0x00010bf529e0(ppuVar11);
    func_0x00010bffc4a0(puVar1,param_3,ppuVar6);
    lStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    _objc_retain(ppuVar10);
    ppuVar6 = ppuVar10;
    func_0x00010bf52a60(ppuVar10,param_3,&uStack_470,auStack_3a0,0x10);
    if (ppuVar6 != (undefined **)0x0) {
      lVar8 = *plStack_460;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if (*plStack_460 != lVar8) {
            _objc_enumerationMutation(ppuVar10);
          }
          unaff_x25 = (undefined **)PTR_PTR_1126c0e88;
          func_0x00010c24bfc0(PTR_PTR_1126c0e88,param_3,
                              *(undefined8 *)(lStack_468 + (long)ppuVar15 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b6e40();
          _objc_unsafeClaimAutoreleasedReturnValue();
          ppuVar14 = unaff_x25;
          func_0x00010bf21f60(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_3,ppuVar14);
          _objc_release(ppuVar14);
          _objc_release(unaff_x25);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar6 != ppuVar15);
        ppuVar6 = ppuVar10;
        func_0x00010bf52a60(ppuVar10,param_3,&uStack_470,auStack_3a0,0x10);
      } while (ppuVar6 != (undefined **)0x0);
    }
    _objc_release(ppuVar10);
    func_0x00010c12d500(ppuVar2[1],param_3,ppuVar10);
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    _objc_retain(puVar1);
    puVar12 = puVar1;
    func_0x00010bf52a60(puVar1,param_3,&uStack_4b0,auStack_420,0x10);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *plStack_4a0;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_4a0 != lVar8) {
            _objc_enumerationMutation(puVar1);
          }
          lVar13 = *(long *)(lStack_4a8 + (long)puVar9 * 8);
          lVar7 = lVar13;
          func_0x00010c0f3b40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          if (lVar7 == 0) {
            lStack_428 = lVar13;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_428,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc8020(ppuVar2,param_3,unaff_x25,0);
          }
          else {
            lStack_430 = lVar13;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_430,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f3b40(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdcd5a0(ppuVar2,param_3,unaff_x25,lVar13);
            _objc_release(lVar13);
          }
          _objc_release(unaff_x25);
          puVar9 = puVar9 + 1;
        } while (puVar12 != puVar9);
        puVar12 = puVar1;
        func_0x00010bf52a60(puVar1,param_3,&uStack_4b0,auStack_420,0x10);
      } while (puVar12 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar12 = ppuVar2[10];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar10;
    func_0x00010bf529e0();
    if (ppuVar2 == (undefined **)0x1) {
      unaff_x25 = ppuVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = unaff_x25;
      func_0x00010c131d20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar14 = (undefined **)0x0;
    }
    ppuVar15 = ppuVar10;
    func_0x00010bf529e0();
    ppuVar6 = ppuVar14;
    if (ppuVar15 == (undefined **)0x1) {
      ppuVar15 = (undefined **)0x0;
      func_0x00010bf046a0(puVar12,param_3,ppuVar14,0);
      param_6 = param_5;
    }
    else {
      ppuVar3 = ppuVar10;
      func_0x00010bfb1920(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar4;
      func_0x00010bf046a0(puVar12,param_3,ppuVar14,ppuVar4);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      param_6 = param_5;
    }
    if (ppuVar2 == (undefined **)0x1) {
      _objc_release(ppuVar14);
      _objc_release(unaff_x25);
    }
    _objc_release(puVar12);
    _objc_release(puVar1);
    _objc_release(ppuVar10);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_320) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    _objc_retain(param_6);
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar10 = ppuVar6;
      func_0x00010c131d20(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar11;
      func_0x00010be38ca0(ppuVar11,param_3,ppuVar10);
      _objc_release(ppuVar10);
      if (ppuVar2 != (undefined **)0x7fffffffffffffff) {
        ppuVar10 = (undefined **)ppuVar11[1];
        func_0x00010bf529e0();
        puVar1 = PTR_PTR_1126c0e88;
        if (ppuVar2 < ppuVar10) {
          puVar12 = ppuVar11[1];
          func_0x00010c0dfd40(puVar12,param_3,ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c24bfc0(puVar1,param_3,puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          func_0x00010c2b6fa0(puVar1,param_3,ppuVar15);
          _objc_unsafeClaimAutoreleasedReturnValue();
          if (param_6 != (undefined **)0x0) {
            func_0x00010c2b6ea0(puVar1,param_3,param_6);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          puVar12 = puVar1;
          func_0x00010bf21f60(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(ppuVar11[1],param_3,puVar12,ppuVar2);
          _objc_release(puVar12);
          puVar12 = ppuVar11[10];
          func_0x00010c269d40(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf04660();
          _objc_release(puVar12);
          _objc_release(puVar1);
        }
      }
    }
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
    return ppuVar6;
  }
  return ppuVar11;
}



/* Entry: 1059f1f64; end: 1059f241b; -[SCSpotlightRepliesDataStore _deleteReplyFromDataStore:] */

void FUN_1059f1f64(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long lVar12;
  undefined **ppuVar13;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuVar14;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined1 auStack_2f0 [128];
  undefined1 auStack_270 [128];
  long lStack_1f0;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_4;
  ppuVar3 = param_4;
  _objc_retain();
  ppuStack_1a8 = unaff_x21;
  ppuVar11 = param_4;
  if (param_4 == (undefined **)0x0) goto LAB_1059f23dc;
  unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  param_5 = (undefined **)0x1;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_88 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_88);
  _objc_retainAutoreleasedReturnValue();
  unaff_x20 = param_2;
  ppuVar3 = ppuVar2;
  func_0x00010be9a680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = unaff_x20;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = unaff_x20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    ppuVar11 = ppuVar2;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_4 = ppuVar2;
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar11 = param_2;
      func_0x00010be348c0(param_2,param_3,ppuVar2);
      if ((int)ppuVar11 == 0) {
        ppuVar11 = (undefined **)param_2[1];
        param_5 = (undefined **)0x1;
        unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_a0 = ppuVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_a0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = unaff_x27;
        func_0x00010c12d500(ppuVar11);
      }
      else {
        ppuVar11 = ppuVar2;
        func_0x00010c131d20(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = param_2;
        func_0x00010be38ca0(param_2,param_3,ppuVar11);
        ppuStack_a8 = ppuVar3;
        _objc_release(ppuVar11);
        ppuVar11 = (undefined **)PTR_PTR_1126c0e98;
        _objc_alloc();
        ppuVar3 = ppuVar2;
        ppuStack_b8 = ppuVar11;
        func_0x00010c131d20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar2;
        ppuStack_c8 = ppuVar3;
        func_0x00010c242640();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        ppuStack_c0 = ppuVar11;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_e0 = ppuVar3;
        func_0x000106268868();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_180 = ppuVar3;
        ppuStack_b0 = ppuVar3;
        func_0x00010c14de00(ppuVar11,param_3,&PTR____CFConstantStringClassReference_110e15a38);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        ppuStack_d0 = ppuVar11;
        func_0x00010c132080();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_d8 = ppuVar3;
        func_0x000106268850();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_f0 = ppuVar3;
        func_0x00010c1321a0(ppuVar2);
        ppuVar4 = ppuVar2;
        func_0x00010c132000();
        ppuVar14 = ppuVar2;
        func_0x00010c131fe0();
        ppuVar13 = ppuVar2;
        func_0x00010c0f3b40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar2;
        ppuStack_e8 = ppuVar13;
        func_0x00010c26d4e0();
        ppuVar6 = ppuVar2;
        func_0x00010c07a860();
        ppuVar11 = ppuVar2;
        func_0x00010bfc9900();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = ppuStack_c0;
        unaff_x24 = ppuStack_c8;
        unaff_x23 = ppuStack_d0;
        unaff_x25 = ppuStack_d8;
        unaff_x28 = ppuStack_e0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_118 = SUB81(ppuVar6,0);
        uStack_130 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_160 = 1;
        uStack_170 = 0;
        uStack_178 = 0;
        ppuStack_180 = (undefined **)0x0;
        unaff_x27 = ppuStack_b8;
        param_6 = ppuStack_e0;
        ppuStack_168 = ppuVar3;
        ppuStack_158 = ppuVar4;
        ppuStack_138 = ppuVar14;
        ppuStack_128 = ppuVar13;
        ppuStack_120 = ppuVar5;
        ppuStack_100 = ppuVar11;
        func_0x00010c03e5c0(param_1,ppuStack_b8,param_3,ppuStack_c8,ppuStack_c0,ppuStack_e0,
                            ppuStack_d0,0,ppuStack_d8);
        _objc_release(ppuVar11);
        _objc_release(ppuStack_e8);
        _objc_release(ppuStack_f0);
        _objc_release(unaff_x25);
        _objc_release(unaff_x23);
        _objc_release(ppuStack_b0);
        _objc_release(unaff_x28);
        _objc_release(unaff_x26);
        _objc_release(unaff_x24);
        ppuVar3 = ppuStack_a8;
        param_5 = unaff_x27;
        func_0x00010c130f40(param_2[1]);
      }
LAB_1059f23a4:
      _objc_release(unaff_x27);
      param_2 = (undefined **)param_2[10];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf045e0();
      _objc_release(param_2);
    }
    else {
      puVar10 = param_2[1];
      param_5 = (undefined **)0x1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_90 = ppuVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d500(puVar10,param_3,puVar1);
      _objc_release(puVar1);
      ppuVar11 = ppuVar2;
      func_0x00010c07a860();
      if (((ulong)ppuVar11 & 1) == 0) {
        ppuVar11 = ppuVar2;
        func_0x00010c0f3b40(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdf89c0(param_2,param_3,ppuVar11);
        _objc_release(ppuVar11);
      }
      unaff_x23 = ppuVar2;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_2;
      ppuVar3 = unaff_x23;
      func_0x00010be38ca0();
      _objc_release(unaff_x23);
      if (ppuVar11 != (undefined **)0x7fffffffffffffff) {
        ppuVar2 = (undefined **)param_2[1];
        func_0x00010bf529e0();
        if (ppuVar11 < ppuVar2) {
          unaff_x27 = (undefined **)param_2[1];
          func_0x00010c0dfd40(unaff_x27,param_3,ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = param_2;
          ppuVar3 = unaff_x27;
          func_0x00010be348c0();
          if ((((ulong)ppuVar2 & 1) == 0) &&
             (ppuVar2 = unaff_x27, func_0x00010c131a00(), ppuVar2 == (undefined **)0x1)) {
            ppuVar11 = (undefined **)param_2[1];
            param_5 = (undefined **)0x1;
            unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            ppuStack_98 = unaff_x27;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_98);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = unaff_x23;
            func_0x00010c12d500(ppuVar11);
            _objc_release(unaff_x23);
          }
          goto LAB_1059f23a4;
        }
      }
    }
  }
  _objc_release(unaff_x20);
  ppuVar2 = param_4;
  _objc_release();
  ppuStack_1a8 = param_4;
LAB_1059f23dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1059f241c;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar3;
  ppuVar14 = param_5;
  ppuStack_1e0 = unaff_x28;
  ppuStack_1d8 = unaff_x27;
  ppuStack_1d0 = unaff_x26;
  ppuStack_1c8 = unaff_x25;
  ppuStack_1c0 = unaff_x24;
  ppuStack_1b8 = unaff_x23;
  ppuStack_1b0 = ppuVar11;
  ppuStack_1a0 = unaff_x20;
  ppuStack_198 = param_2;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  ppuVar11 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = ppuVar2;
    func_0x00010be9a680(ppuVar2,param_3,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    ppuVar4 = ppuVar3;
    func_0x00010bf529e0(ppuVar3);
    func_0x00010bffc4a0(puVar1,param_3,ppuVar4);
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    _objc_retain(ppuVar11);
    ppuVar4 = ppuVar11;
    func_0x00010bf52a60(ppuVar11,param_3,&uStack_340,auStack_270,0x10);
    if (ppuVar4 != (undefined **)0x0) {
      lVar8 = *plStack_330;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if (*plStack_330 != lVar8) {
            _objc_enumerationMutation(ppuVar11);
          }
          unaff_x25 = (undefined **)PTR_PTR_1126c0e88;
          func_0x00010c24bfc0(PTR_PTR_1126c0e88,param_3,
                              *(undefined8 *)(lStack_338 + (long)ppuVar14 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b6e40();
          _objc_unsafeClaimAutoreleasedReturnValue();
          ppuVar13 = unaff_x25;
          func_0x00010bf21f60(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_3,ppuVar13);
          _objc_release(ppuVar13);
          _objc_release(unaff_x25);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar4 != ppuVar14);
        ppuVar4 = ppuVar11;
        func_0x00010bf52a60(ppuVar11,param_3,&uStack_340,auStack_270,0x10);
      } while (ppuVar4 != (undefined **)0x0);
    }
    _objc_release(ppuVar11);
    func_0x00010c12d500(ppuVar2[1],param_3,ppuVar11);
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    _objc_retain(puVar1);
    puVar10 = puVar1;
    func_0x00010bf52a60(puVar1,param_3,&uStack_380,auStack_2f0,0x10);
    if (puVar10 != (undefined *)0x0) {
      lVar8 = *plStack_370;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_370 != lVar8) {
            _objc_enumerationMutation(puVar1);
          }
          lVar12 = *(long *)(lStack_378 + (long)puVar9 * 8);
          lVar7 = lVar12;
          func_0x00010c0f3b40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          if (lVar7 == 0) {
            lStack_2f8 = lVar12;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_2f8,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc8020(ppuVar2,param_3,unaff_x25,0);
          }
          else {
            lStack_300 = lVar12;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_300,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f3b40(lVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdcd5a0(ppuVar2,param_3,unaff_x25,lVar12);
            _objc_release(lVar12);
          }
          _objc_release(unaff_x25);
          puVar9 = puVar9 + 1;
        } while (puVar10 != puVar9);
        puVar10 = puVar1;
        func_0x00010bf52a60(puVar1,param_3,&uStack_380,auStack_2f0,0x10);
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar10 = ppuVar2[10];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar11;
    func_0x00010bf529e0();
    if (ppuVar2 == (undefined **)0x1) {
      unaff_x25 = ppuVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = unaff_x25;
      func_0x00010c131d20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar13 = (undefined **)0x0;
    }
    ppuVar14 = ppuVar11;
    func_0x00010bf529e0();
    ppuVar4 = ppuVar13;
    if (ppuVar14 == (undefined **)0x1) {
      ppuVar14 = (undefined **)0x0;
      func_0x00010bf046a0(puVar10,param_3,ppuVar13,0);
      param_6 = param_5;
    }
    else {
      ppuVar5 = ppuVar11;
      func_0x00010bfb1920(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar6;
      func_0x00010bf046a0(puVar10,param_3,ppuVar13,ppuVar6);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      param_6 = param_5;
    }
    if (ppuVar2 == (undefined **)0x1) {
      _objc_release(ppuVar13);
      _objc_release(unaff_x25);
    }
    _objc_release(puVar10);
    _objc_release(puVar1);
    _objc_release(ppuVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f0) {
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
    _objc_retain(param_6);
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar2 = ppuVar4;
      func_0x00010c131d20(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar3;
      func_0x00010be38ca0(ppuVar3,param_3,ppuVar2);
      _objc_release(ppuVar2);
      if (ppuVar11 != (undefined **)0x7fffffffffffffff) {
        ppuVar2 = (undefined **)ppuVar3[1];
        func_0x00010bf529e0();
        puVar1 = PTR_PTR_1126c0e88;
        if (ppuVar11 < ppuVar2) {
          puVar10 = ppuVar3[1];
          func_0x00010c0dfd40(puVar10,param_3,ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c24bfc0(puVar1,param_3,puVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          func_0x00010c2b6fa0(puVar1,param_3,ppuVar14);
          _objc_unsafeClaimAutoreleasedReturnValue();
          if (param_6 != (undefined **)0x0) {
            func_0x00010c2b6ea0(puVar1,param_3,param_6);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          puVar10 = puVar1;
          func_0x00010bf21f60(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(ppuVar3[1],param_3,puVar10,ppuVar11);
          _objc_release(puVar10);
          puVar10 = ppuVar3[10];
          func_0x00010c269d40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf04660();
          _objc_release(puVar10);
          _objc_release(puVar1);
        }
      }
    }
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
    return;
  }
  return;
}



/* Entry: 1059f241c; end: 1059f280f; -[SCSpotlightRepliesDataStore _moveRepliesInDataStore:toApprovalState:] */

void FUN_1059f241c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *unaff_x25;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_200;
  long lStack_1f8;
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
  long lStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar12 = param_4;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010be9a680(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0(puVar2,param_2,puVar3);
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_1c0,auStack_f0,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_1b0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar9) {
            _objc_enumerationMutation(puVar1);
          }
          unaff_x25 = PTR_PTR_1126c0e88;
          func_0x00010c24bfc0(PTR_PTR_1126c0e88,param_2,
                              *(undefined8 *)(lStack_1b8 + (long)puVar12 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b6e40();
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar8 = unaff_x25;
          func_0x00010bf21f60(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,puVar8);
          _objc_release(puVar8);
          _objc_release(unaff_x25);
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar3 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_1c0,auStack_f0,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    func_0x00010c12d500(*(undefined8 *)(param_1 + 8),param_2,puVar1);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_200,auStack_170,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_1f0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_1f0 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          lVar10 = *(long *)(lStack_1f8 + (long)puVar12 * 8);
          lVar4 = lVar10;
          func_0x00010c0f3b40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
          if (lVar4 == 0) {
            lStack_178 = lVar10;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_178,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc8020(param_1,param_2,unaff_x25,0);
          }
          else {
            lStack_180 = lVar10;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_180,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f3b40(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdcd5a0(param_1,param_2,unaff_x25,lVar10);
            _objc_release(lVar10);
          }
          _objc_release(unaff_x25);
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar3 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_200,auStack_170,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x1) {
      unaff_x25 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = unaff_x25;
      func_0x00010c131d20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    puVar12 = puVar1;
    func_0x00010bf529e0();
    puVar3 = puVar11;
    if (puVar12 == (undefined *)0x1) {
      puVar12 = (undefined *)0x0;
      func_0x00010bf046a0(uVar5,param_2,puVar11,0);
      param_5 = param_4;
    }
    else {
      puVar6 = puVar1;
      func_0x00010bfb1920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar7;
      func_0x00010bf046a0(uVar5,param_2,puVar11,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      param_5 = param_4;
    }
    if (puVar8 == (undefined *)0x1) {
      _objc_release(puVar11);
      _objc_release(unaff_x25);
    }
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(param_5);
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
    func_0x00010c131d20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010be38ca0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x7fffffffffffffff) {
      puVar8 = *(undefined **)(param_3 + 8);
      func_0x00010bf529e0();
      puVar1 = PTR_PTR_1126c0e88;
      if (puVar2 < puVar8) {
        uVar5 = *(undefined8 *)(param_3 + 8);
        func_0x00010c0dfd40(uVar5,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24bfc0(puVar1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c2b6fa0(puVar1,param_2,puVar12);
        _objc_unsafeClaimAutoreleasedReturnValue();
        if (param_5 != (undefined *)0x0) {
          func_0x00010c2b6ea0(puVar1,param_2,param_5);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        puVar12 = puVar1;
        func_0x00010bf21f60(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(*(undefined8 *)(param_3 + 8),param_2,puVar12,puVar2);
        _objc_release(puVar12);
        uVar5 = *(undefined8 *)(param_3 + 0x50);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04660();
        _objc_release(uVar5);
        _objc_release(puVar1);
      }
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1059f2810; end: 1059f2977; -[SCSpotlightRepliesDataStore _updateReply:postingState:serverGeneratedReplyId:] */

void FUN_1059f2810(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be38ca0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    if (uVar2 != 0x7fffffffffffffff) {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      puVar5 = PTR_PTR_1126c0e88;
      if (uVar2 < uVar3) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0dfd40(uVar4,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24bfc0(puVar5,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010c2b6fa0(puVar5,param_2,param_4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        if (param_5 != 0) {
          func_0x00010c2b6ea0(puVar5,param_2,param_5);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        puVar6 = puVar5;
        func_0x00010bf21f60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(*(undefined8 *)(param_1 + 8),param_2,puVar6,uVar2);
        _objc_release(puVar6);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04660();
        _objc_release(uVar4);
        _objc_release(puVar5);
      }
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f2978; end: 1059f2b37; -[SCSpotlightRepliesDataStore _scFetchExactRepliesFromDataStoreForReplies:] */

void FUN_1059f2978(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined **unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined **ppuStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = &uStack_130;
  lStack_138 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lVar7 = *plStack_120;
    unaff_x22 = &PTR____CFConstantStringClassReference_110e15a58;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lStack_138);
        }
        puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        uVar2 = *(undefined8 *)(lStack_128 + lVar5 * 8);
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c131d20();
        _objc_retainAutoreleasedReturnValue();
        uStack_140 = uVar2;
        func_0x00010c1063c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfaea40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(uVar2);
        func_0x00010befa160(puVar1);
        _objc_release(uVar6);
        lVar5 = lVar5 + 1;
      } while (param_3 != lVar5);
      puVar4 = &uStack_130;
      param_3 = lStack_138;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar7 = lStack_138;
  _objc_release(lStack_138);
  lVar5 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lStack_158 = lVar7;
  pcStack_148 = FUN_1059f2b38;
  ppuStack_170 = unaff_x22;
  puStack_168 = puVar1;
  lStack_160 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_initWeak(auStack_178,lVar5);
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  _objc_copyWeak(auStack_180,auStack_178);
  _objc_retain(puVar4);
  func_0x00010c0f9420(uVar2);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar4);
  return;
}



/* Entry: 1059f2b38; end: 1059f2c0f; -[SCSpotlightRepliesDataStore hideThreadedRepliesUnderParentComment:] */

void FUN_1059f2b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f2c10; end: 1059f2c43;  */

void FUN_1059f2c10(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f2c44; end: 1059f2cd3; -[SCSpotlightRepliesDataStore setThreadedRepliesFetchStatusWithParentCommentId:threadedRepliesFetchStatus:] */

void FUN_1059f2c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,param_3);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f2cd4; end: 1059f2d4f; -[SCSpotlightRepliesDataStore setPaginationCursorForParentCommentId:paginationCursor:] */

void FUN_1059f2cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x58);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_3);
  _os_unfair_lock_unlock(param_1 + 0x58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f2d50; end: 1059f2e43; -[SCSpotlightRepliesDataStore reactReply:reactionTypeId:reactOption:isCommentAdmin:] */

void FUN_1059f2d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_68,auStack_48);
  _objc_retain(param_3);
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f2e44; end: 1059f2e7f;  */

void FUN_1059f2e44(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f2e80; end: 1059f2f5f; -[SCSpotlightRepliesDataStore addReplies:position:] */

void FUN_1059f2e80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f2f60; end: 1059f2f97;  */

void FUN_1059f2f60(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f2f98; end: 1059f3097; -[SCSpotlightRepliesDataStore appendThreadedReplies:afterParentCommentId:] */

void FUN_1059f2f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f3098; end: 1059f30cb;  */

void FUN_1059f3098(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f30cc; end: 1059f31ab; -[SCSpotlightRepliesDataStore addPaginationToken:forApprovalState:] */

void FUN_1059f30cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f31ac; end: 1059f31e3;  */

void FUN_1059f31ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc7c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f31e4; end: 1059f321f; -[SCSpotlightRepliesDataStore paginationCursorForSnapReplies] */

void FUN_1059f31e4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f3220; end: 1059f325f; -[SCSpotlightRepliesDataStore updateSnapRepliesPaginationCursor:] */

void FUN_1059f3220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 1059f3260; end: 1059f333f; -[SCSpotlightRepliesDataStore moveReplies:toApprovalState:] */

void FUN_1059f3260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f3340; end: 1059f3377;  */

void FUN_1059f3340(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be613a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f3378; end: 1059f3487; -[SCSpotlightRepliesDataStore updateReply:postingState:serverGeneratedReplyId:] */

void FUN_1059f3378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f3488; end: 1059f34bf;  */

void FUN_1059f3488(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f34c0; end: 1059f3597; -[SCSpotlightRepliesDataStore rejectReplies:] */

void FUN_1059f34c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f3598; end: 1059f35cb;  */

void FUN_1059f3598(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f35cc; end: 1059f36a3; -[SCSpotlightRepliesDataStore deleteReply:] */

void FUN_1059f35cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


