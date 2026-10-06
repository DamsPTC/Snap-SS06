/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057952ec; end: 10579536b; -[SCCognacDataStorage leaderboardWithLeaderboardId:] */

void FUN_1057952ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c08dcc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10579536c; end: 1057954f3; -[SCCognacDataStorage updateLeaderboardScoreVisibilitiesWithAppScopeScoreVisibilities:leaderboardScopeScoreVisibilities:completionQueue:completionBlock:] */

void FUN_10579536c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 == 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    if ((param_5 != 0) && (param_6 != 0)) {
      func_0x00010007380c(param_5,param_6);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057954f4; end: 1057956fb;  */

void FUN_1057954f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_1057956dc;
  uVar2 = uVar1;
  func_0x00010bf05320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1057956fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf05320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c071d00();
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    uVar2 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010c168b00(uVar1);
    _objc_release(uVar2);
  }
  uVar2 = uVar1;
  func_0x00010c08dce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  FUN_1057956fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c071d00();
  _objc_release(uVar2);
  if ((uVar6 & 1) == 0) {
    uVar2 = uVar5;
    func_0x00010bf51e00(uVar5);
    func_0x00010c1b9f60(uVar1);
    _objc_release(uVar2);
LAB_105795624:
    _objc_retain(&PTR____CFConstantStringClassReference_110dff7b8);
    _objc_retain(0);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x105795b0c;
    puStack_70 = &UNK_110848ba8;
    uStack_68 = uVar1;
    _objc_retain(&PTR____CFConstantStringClassReference_110dff7b8);
    ppuStack_60 = &PTR____CFConstantStringClassReference_110dff7b8;
    _objc_retain(0);
    uStack_58 = 0;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(uStack_58);
    _objc_release(ppuStack_60);
    _objc_release(0);
    _objc_release(&PTR____CFConstantStringClassReference_110dff7b8);
  }
  else if ((uVar4 & 1) == 0) goto LAB_105795624;
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    func_0x00010007380c();
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
LAB_1057956dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057956fc; end: 10579581b;  */

void FUN_1057956fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  _objc_retain(param_1);
  func_0x00010bf97ce0(param_2);
  if ((*(byte *)(puStack_48 + 3) & 1) == 0) {
    _objc_retain(param_1);
    uVar2 = param_1;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0d3c80(param_1);
    func_0x00010bef7f60();
    uVar2 = uVar1;
    func_0x00010bf51e00(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10579581c; end: 1057958b3;  */

void FUN_10579581c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    uVar3 = param_3;
    func_0x00010bf1f3c0();
    if ((int)lVar2 == (int)uVar3) goto LAB_105795894;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  *param_4 = 1;
LAB_105795894:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057958b4; end: 105795933; -[SCCognacDataStorage leaderboardScoreVisibilityWithAppId:] */

void FUN_1057958b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf05320(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105795934; end: 1057959b3; -[SCCognacDataStorage leaderboardScoreVisibilityWithLeaderboardId:] */

void FUN_105795934(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c08dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057959b4; end: 105795a5b; -[SCCognacDataStorage cleanUp] */

void FUN_1057959b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105795a5c; end: 105795b67;  */

void FUN_105795a5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9f40(param_1,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168b00(param_1,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9f60(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105795b68; end: 105795b73; -[SCCognacDataStorage leaderboardIdToLeaderboard] */

void FUN_105795b68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 105795b74; end: 105795b7b; -[SCCognacDataStorage setLeaderboardIdToLeaderboard:] */

void FUN_105795b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105795b7c; end: 105795b87; -[SCCognacDataStorage appIdToLeaderboardScoreVisibility] */

void FUN_105795b7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 105795b88; end: 105795b8f; -[SCCognacDataStorage setAppIdToLeaderboardScoreVisibility:] */

void FUN_105795b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105795b90; end: 105795b9b; -[SCCognacDataStorage leaderboardIdToLeaderboardScoreVisibility] */

void FUN_105795b90(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 105795b9c; end: 105795ba3; -[SCCognacDataStorage setLeaderboardIdToLeaderboardScoreVisibility:] */

void FUN_105795b9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105795ba4; end: 105795bf7; -[SCCognacDataStorage .cxx_destruct] */

void FUN_105795ba4(long param_1)

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



/* Entry: 105795bf8; end: 105795c53; -[SCUserSession cognacDataStorage] */

void FUN_105795bf8(undefined8 param_1,undefined8 param_2)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105795c54; end: 105795c6f;  */

void FUN_105795c54(void)

{
  _objc_alloc_init(PTR_PTR_1126be178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105795c70; end: 105795d33; -[SCCognacUserAppPreferences initWithAppId:updateDate:acceptedContentAlert:acceptedLeaderboardAlert:] */

undefined1 *
FUN_105795c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ea348;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105795d34; end: 105795e0b; -[SCCognacUserAppPreferences initWithCoder:] */

undefined1 * FUN_105795d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea348;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105795e0c; end: 105795e2f; -[SCCognacUserAppPreferences copyWithZone:] */

undefined8 FUN_105795e0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105795e30; end: 105795eb7; -[SCCognacUserAppPreferences encodeWithCoder:] */

void FUN_105795e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dff7d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dff7f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110dff818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110dff838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105795eb8; end: 105795f37; -[SCCognacUserAppPreferences hash] */

undefined8 * FUN_105795eb8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105795fd8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105795fe4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_105795fe4;
        }
        goto LAB_105795fd8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105795fe4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105795f38; end: 105795fff; -[SCCognacUserAppPreferences isEqual:] */

long FUN_105795f38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105795fd8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105795fe4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105795fe4;
        }
        goto LAB_105795fd8;
      }
    }
    lVar3 = 0;
  }
LAB_105795fe4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105796000; end: 105796007; -[SCCognacUserAppPreferences appId] */

undefined8 FUN_105796000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105796008; end: 10579600f; -[SCCognacUserAppPreferences updateDate] */

undefined8 FUN_105796008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105796010; end: 105796017; -[SCCognacUserAppPreferences acceptedContentAlert] */

undefined1 FUN_105796010(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105796018; end: 10579601f; -[SCCognacUserAppPreferences acceptedLeaderboardAlert] */

undefined1 FUN_105796018(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105796020; end: 10579604f; -[SCCognacUserAppPreferences .cxx_destruct] */

void FUN_105796020(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105796050; end: 1057960b7; +[SCCognacAutosuggestKeywordConfiguration descriptor] */

void FUN_105796050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63230,
                        &PTR____CFConstantStringClassReference_110dff858,&PTR_DAT_1130fafe0,
                        &PTR_DAT_1130faff8,1,0x10,0x1c);
    puRam00000001136bfed8 = puVar1;
  }
  return;
}



/* Entry: 1057960b8; end: 105796133; +[SCCognacLocalhostPolicy descriptor] */

undefined * FUN_1057960b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a632d0,
                        &PTR____CFConstantStringClassReference_110dff878,&PTR_DAT_1130fb018,
                        &PTR_DAT_1130fb030,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfee0 = puVar1;
  }
  return puRam00000001136bfee0;
}



/* Entry: 105796134; end: 1057961af; +[SCCognacScoreShareMessage descriptor] */

undefined * FUN_105796134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63370,
                        &PTR____CFConstantStringClassReference_110dff898,&PTR_DAT_1130fb070,
                        &PTR_s_id_p_1130fb088,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfee8 = puVar1;
  }
  return puRam00000001136bfee8;
}



/* Entry: 1057961b0; end: 10579623b; +[SCCognacTalkSessionMessage descriptor] */

undefined * FUN_1057961b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63410,
                        &PTR____CFConstantStringClassReference_110dff8b8,&PTR_DAT_1130fb190,
                        &PTR_s_id_p_1130fb1e8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bfef0 = puVar1;
  }
  return puRam00000001136bfef0;
}



/* Entry: 10579623c; end: 1057962a3; +[SCCognacTalkSessionTextMessage descriptor] */

void FUN_10579623c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63460,
                        &PTR____CFConstantStringClassReference_110dff8d8,&PTR_DAT_1130fb190,
                        &PTR_s_content_1130fb1a8,1,0x10,0x1c);
    puRam00000001136bfef8 = puVar1;
  }
  return;
}



/* Entry: 1057962a4; end: 105796387; +[SCCognacStatusStreamMessage descriptor] */

void FUN_1057962a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a634b0,
                        &PTR____CFConstantStringClassReference_110dff8f8,&PTR_DAT_1130fb190,
                        &PTR_s_data_p_1130fb1c8,1,0x10,0x1c);
    puRam00000001136bff00 = puVar1;
  }
  return;
}



/* Entry: 105796388; end: 105796393;  */

bool FUN_105796388(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105796394; end: 10579641f; +[SCCognacAppInstancesAppInstanceScope descriptor] */

undefined * FUN_105796394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63550,
                        &PTR____CFConstantStringClassReference_110dff938,&PTR_DAT_1130fb270,
                        &PTR_s_userId_1130fb528,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bff10 = puVar1;
  }
  return puRam00000001136bff10;
}



/* Entry: 105796420; end: 105796487; +[SCCognacAppInstancesAppInstance descriptor] */

void FUN_105796420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a635a0,
                        &PTR____CFConstantStringClassReference_110dff958,&PTR_DAT_1130fb270,
                        &PTR_s_id_p_1130fb648,5,0x28,0x1c);
    puRam00000001136bff18 = puVar1;
  }
  return;
}



/* Entry: 105796488; end: 1057964ef; +[SCCognacAppInstancesChatDockEntry descriptor] */

void FUN_105796488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a635f0,
                        &PTR____CFConstantStringClassReference_110dff978,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb6e8,5,0x28,0x1c);
    puRam00000001136bff20 = puVar1;
  }
  return;
}



/* Entry: 1057964f0; end: 105796557; +[SCCognacAppInstancesChatDock descriptor] */

void FUN_1057964f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63640,
                        &PTR____CFConstantStringClassReference_110dff998,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb588,3,0x20,0x1c);
    puRam00000001136bff28 = puVar1;
  }
  return;
}



/* Entry: 105796558; end: 1057965d3; +[SCCognacAppInstancesNotificationPayload descriptor] */

undefined * FUN_105796558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63690,
                        &PTR____CFConstantStringClassReference_110dff9b8,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb788,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bff30 = puVar1;
  }
  return puRam00000001136bff30;
}



/* Entry: 1057965d4; end: 10579663b; +[SCCognacAppInstancesLaunchAppInstanceRequest descriptor] */

void FUN_1057965d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a636e0,
                        &PTR____CFConstantStringClassReference_110dff9d8,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb5e8,3,0x18,0x1c);
    puRam00000001136bff38 = puVar1;
  }
  return;
}



/* Entry: 10579663c; end: 1057966a3; +[SCCognacAppInstancesLaunchAppInstanceResponse descriptor] */

void FUN_10579663c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63730,
                        &PTR____CFConstantStringClassReference_110dff9f8,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb3a8,2,0x18,0x1c);
    puRam00000001136bff40 = puVar1;
  }
  return;
}



/* Entry: 1057966a4; end: 10579670b; +[SCCognacAppInstancesTerminateAppInstanceRequest descriptor] */

void FUN_1057966a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63780,
                        &PTR____CFConstantStringClassReference_110dffa18,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb288,1,0x10,0x1c);
    puRam00000001136bff48 = puVar1;
  }
  return;
}



/* Entry: 10579670c; end: 105796773; +[SCCognacAppInstancesTerminateAppInstanceResponse descriptor] */

void FUN_10579670c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a637d0,
                        &PTR____CFConstantStringClassReference_110dffa38,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb3e8,2,0x18,0x1c);
    puRam00000001136bff50 = puVar1;
  }
  return;
}



/* Entry: 105796774; end: 1057967db; +[SCCognacAppInstancesGetAppInstanceAuthTokenRequest descriptor] */

void FUN_105796774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63820,
                        &PTR____CFConstantStringClassReference_110dffa58,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb2a8,1,0x10,0x1c);
    puRam00000001136bff58 = puVar1;
  }
  return;
}



/* Entry: 1057967dc; end: 105796843; +[SCCognacAppInstancesGetAppInstanceAuthTokenResponse descriptor] */

void FUN_1057967dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63870,
                        &PTR____CFConstantStringClassReference_110dffa78,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb428,2,0x18,0x1c);
    puRam00000001136bff60 = puVar1;
  }
  return;
}



/* Entry: 105796844; end: 1057968ab; +[SCCognacAppInstancesGetChatDockRequest descriptor] */

void FUN_105796844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a638c0,
                        &PTR____CFConstantStringClassReference_110dffa98,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb468,2,0x18,0x1c);
    puRam00000001136bff68 = puVar1;
  }
  return;
}



/* Entry: 1057968ac; end: 105796913; +[SCCognacAppInstancesGetChatDockResponse descriptor] */

void FUN_1057968ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63910,
                        &PTR____CFConstantStringClassReference_110dffab8,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb2c8,1,0x10,0x1c);
    puRam00000001136bff70 = puVar1;
  }
  return;
}



/* Entry: 105796914; end: 10579697b; +[SCCognacAppInstancesBatchGetChatDockRequest descriptor] */

void FUN_105796914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63960,
                        &PTR____CFConstantStringClassReference_110dffad8,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb4a8,2,0x18,0x1c);
    puRam00000001136bff78 = puVar1;
  }
  return;
}



/* Entry: 10579697c; end: 1057969e3; +[SCCognacAppInstancesBatchGetChatDockResponse descriptor] */

void FUN_10579697c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a639b0,
                        &PTR____CFConstantStringClassReference_110dffaf8,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb2e8,1,0x10,0x1c);
    puRam00000001136bff80 = puVar1;
  }
  return;
}



/* Entry: 1057969e4; end: 105796a4b; +[SCCognacAppInstancesGetAppInstanceRequest descriptor] */

void FUN_1057969e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63a00,
                        &PTR____CFConstantStringClassReference_110dffb18,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb308,1,0x10,0x1c);
    puRam00000001136bff88 = puVar1;
  }
  return;
}



/* Entry: 105796a4c; end: 105796ac7; +[SCCognacAppInstancesGetAppInstanceResponse descriptor] */

undefined * FUN_105796a4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63a50,
                        &PTR____CFConstantStringClassReference_110dffb38,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb328,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bff90 = puVar1;
  }
  return puRam00000001136bff90;
}



/* Entry: 105796ac8; end: 105796b2f; +[SCCognacAppInstancesBatchGetAppInstanceRequest descriptor] */

void FUN_105796ac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bff98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63aa0,
                        &PTR____CFConstantStringClassReference_110dffb58,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb348,1,0x10,0x1c);
    puRam00000001136bff98 = puVar1;
  }
  return;
}



/* Entry: 105796b30; end: 105796bab; +[SCCognacAppInstancesBatchGetAppInstanceResponse descriptor] */

undefined * FUN_105796b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bffa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63af0,
                        &PTR____CFConstantStringClassReference_110dffb78,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb368,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bffa0 = puVar1;
  }
  return puRam00000001136bffa0;
}



/* Entry: 105796bac; end: 105796c13; +[SCCognacAppInstancesUpdateAppInstancePrivacyRequest descriptor] */

void FUN_105796bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bffa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63b40,
                        &PTR____CFConstantStringClassReference_110dffb98,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb4e8,2,0x10,0x1c);
    puRam00000001136bffa8 = puVar1;
  }
  return;
}



/* Entry: 105796c14; end: 105796d0b; +[SCCognacAppInstancesUpdateAppInstancePrivacyResponse descriptor] */

undefined * FUN_105796c14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bffb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63b90,
                        &PTR____CFConstantStringClassReference_110dffbb8,&PTR_DAT_1130fb270,
                        &PTR_DAT_1130fb388,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bffb0 = puVar1;
  }
  return puRam00000001136bffb0;
}



/* Entry: 105796d0c; end: 105796d17;  */

bool FUN_105796d0c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105796d18; end: 105796d93;  */

undefined * FUN_105796d18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bffc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffbf8,
                        &UNK_10ddbd22c,&UNK_10ddbd24c,3,FUN_105796d94,0);
    do {
      if (puRam00000001136bffc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bffc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bffc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bffc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bffc0;
}



/* Entry: 105796d94; end: 105796d9f;  */

bool FUN_105796d94(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105796da0; end: 105796e1b;  */

undefined * FUN_105796da0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bffd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffc38,
                        &UNK_10ddbd3ee,&UNK_10ddbd414,3,FUN_105796e1c,0);
    do {
      if (puRam00000001136bffd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bffd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bffd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bffd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bffd0;
}



/* Entry: 105796e1c; end: 105796e27;  */

bool FUN_105796e1c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105796e28; end: 105796ea3;  */

undefined * FUN_105796e28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bffd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffc58,
                        &UNK_10ddbd420,&UNK_10ddbd43c,4,FUN_105796ea4,0);
    do {
      if (puRam00000001136bffd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bffd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bffd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bffd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bffd8;
}



/* Entry: 105796ea4; end: 105796eaf;  */

bool FUN_105796ea4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105796eb0; end: 105796f2b;  */

undefined * FUN_105796eb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bffe0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffc78,
                        &UNK_10ddbd44c,&UNK_10ddbd474,3,FUN_105796f2c,0);
    do {
      if (puRam00000001136bffe0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bffe0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bffe0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bffe0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bffe0;
}



/* Entry: 105796f2c; end: 105796f37;  */

bool FUN_105796f2c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105796f38; end: 105796fb3;  */

undefined * FUN_105796f38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bffe8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffc98,
                        &UNK_10ddbd480,&UNK_10ddbd49c,4,FUN_105796fb4,0);
    do {
      if (puRam00000001136bffe8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bffe8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bffe8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bffe8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bffe8;
}



/* Entry: 105796fb4; end: 105796fbf;  */

bool FUN_105796fb4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105796fc0; end: 10579703b;  */

undefined * FUN_105796fc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfff0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffcb8,
                        &UNK_10ddbd4ac,&UNK_10ddbd56c,0x14,FUN_10579703c,0);
    do {
      if (puRam00000001136bfff0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfff0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfff0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfff0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfff0;
}



/* Entry: 10579703c; end: 105797047;  */

bool FUN_10579703c(uint param_1)

{
  return param_1 < 0x14;
}



/* Entry: 105797048; end: 1057970c3;  */

undefined * FUN_105797048(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfff8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffcd8,
                        &UNK_10ddbd5bc,&UNK_10ddbd5d8,3,FUN_1057970c4,0);
    do {
      if (puRam00000001136bfff8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfff8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfff8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfff8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfff8;
}



/* Entry: 1057970c4; end: 1057970cf;  */

bool FUN_1057970c4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1057970d0; end: 10579714b;  */

undefined * FUN_1057970d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0000 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffcf8,
                        &UNK_10ddbd5e4,&UNK_10ddbd61c,4,FUN_10579714c,0);
    do {
      if (puRam00000001136c0000 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0000;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0000,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0000 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0000;
}



/* Entry: 10579714c; end: 105797157;  */

bool FUN_10579714c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105797158; end: 1057971bf; +[SCCognacAppsPublisher descriptor] */

void FUN_105797158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63c30,
                        &PTR____CFConstantStringClassReference_110dffd18,&PTR_DAT_1130fbbf0,
                        &PTR_s_id_p_1130fc248,3,0x18,0x1c);
    puRam00000001136c0008 = puVar1;
  }
  return;
}



/* Entry: 1057971c0; end: 10579723b; +[SCCognacAppsImageResources descriptor] */

undefined * FUN_1057971c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63c80,
                        &PTR____CFConstantStringClassReference_110dffd38,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fc468,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0010 = puVar1;
  }
  return puRam00000001136c0010;
}



/* Entry: 10579723c; end: 1057972a3; +[SCCognacAppsPlayerLimits descriptor] */

void FUN_10579723c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63cd0,
                        &PTR____CFConstantStringClassReference_110dffd58,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbec8,2,0x18,0x1c);
    puRam00000001136c0018 = puVar1;
  }
  return;
}



/* Entry: 1057972a4; end: 10579731f; +[SCCognacAppsBuild descriptor] */

undefined * FUN_1057972a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63d20,
                        &PTR____CFConstantStringClassReference_110dffd78,&PTR_DAT_1130fbbf0,
                        &PTR_s_id_p_1130fc668,0x14,0xa0,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0020 = puVar1;
  }
  return puRam00000001136c0020;
}



/* Entry: 105797320; end: 105797387; +[SCCognacAppsDevMetadata descriptor] */

void FUN_105797320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64c48,
                        &PTR____CFConstantStringClassReference_110dffd98,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbc08,1,0x10,0x1c);
    puRam00000001136c0028 = puVar1;
  }
  return;
}



/* Entry: 105797388; end: 10579741b; +[SCCognacAppsDevMetadata_PlayCanvasMetadata descriptor] */

undefined * FUN_105797388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64c70,
                        &PTR____CFConstantStringClassReference_110dffdb8,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbc28,1,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a64c48);
    puRam00000001136c0030 = puVar1;
  }
  return puRam00000001136c0030;
}



/* Entry: 10579741c; end: 105797483; +[SCCognacAppsLensMetadata descriptor] */

void FUN_10579741c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63dc0,
                        &PTR____CFConstantStringClassReference_110dffdd8,&PTR_DAT_1130fbbf0,
                        &PTR_s_lensId_1130fbc48,1,0x10,0x1c);
    puRam00000001136c0038 = puVar1;
  }
  return;
}



/* Entry: 105797484; end: 1057974eb; +[SCCognacAppsBuildLocalization descriptor] */

void FUN_105797484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63e10,
                        &PTR____CFConstantStringClassReference_110dffdf8,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbc68,1,0x10,0x1c);
    puRam00000001136c0040 = puVar1;
  }
  return;
}



/* Entry: 1057974ec; end: 105797567; +[SCCognacAppsBuildLocalizationContent descriptor] */

undefined * FUN_1057974ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63e60,
                        &PTR____CFConstantStringClassReference_110dffe18,&PTR_DAT_1130fbbf0,
                        &PTR_s_locale_1130fc368,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0048 = puVar1;
  }
  return puRam00000001136c0048;
}



/* Entry: 105797568; end: 1057975cf; +[SCCognacAppsLeaderboardInfo descriptor] */

void FUN_105797568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63eb0,
                        &PTR____CFConstantStringClassReference_110dffe38,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbc88,1,4,0x1c);
    puRam00000001136c0050 = puVar1;
  }
  return;
}



/* Entry: 1057975d0; end: 10579764f; +[SCCognacAppsApp descriptor] */

undefined * FUN_1057975d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63f00,
                        &PTR____CFConstantStringClassReference_110dffe58,&PTR_DAT_1130fbbf0,
                        &PTR_s_id_p_1130fb828,0x1e,0xe0,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0058 = puVar1;
  }
  return puRam00000001136c0058;
}



/* Entry: 105797650; end: 1057976b7; +[SCCognacAppsSnapCanvasSDKInfo descriptor] */

void FUN_105797650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63f50,
                        &PTR____CFConstantStringClassReference_110dffe78,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbca8,1,4,0x1c);
    puRam00000001136c0060 = puVar1;
  }
  return;
}



/* Entry: 1057976b8; end: 10579771f; +[SCCognacAppsDiscoverApp descriptor] */

void FUN_1057976b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63fa0,
                        &PTR____CFConstantStringClassReference_110dffe98,&PTR_DAT_1130fbbf0,
                        &PTR_s_app_1130fbf08,2,0x18,0x1c);
    puRam00000001136c0068 = puVar1;
  }
  return;
}



/* Entry: 105797720; end: 105797787; +[SCCognacAppsContentUpdateAlert descriptor] */

void FUN_105797720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a63ff0,
                        &PTR____CFConstantStringClassReference_110dffeb8,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fc3e8,4,0x18,0x1c);
    puRam00000001136c0070 = puVar1;
  }
  return;
}



/* Entry: 105797788; end: 1057977ef; +[SCCognacAppsGetAppRequest descriptor] */

void FUN_105797788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64040,
                        &PTR____CFConstantStringClassReference_110dffed8,&PTR_DAT_1130fbbf0,
                        &PTR_s_appId_1130fbf48,2,0x10,0x1c);
    puRam00000001136c0078 = puVar1;
  }
  return;
}



/* Entry: 1057977f0; end: 105797857; +[SCCognacAppsBatchGetAppRequest descriptor] */

void FUN_1057977f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64090,
                        &PTR____CFConstantStringClassReference_110dffef8,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbcc8,1,0x10,0x1c);
    puRam00000001136c0080 = puVar1;
  }
  return;
}



/* Entry: 105797858; end: 1057978bf; +[SCCognacAppsBatchGetAppResponse descriptor] */

void FUN_105797858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a640e0,
                        &PTR____CFConstantStringClassReference_110dfff18,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbce8,1,0x10,0x1c);
    puRam00000001136c0088 = puVar1;
  }
  return;
}



/* Entry: 1057978c0; end: 105797927; +[SCCognacAppsListAppsRequest descriptor] */

void FUN_1057978c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64130,
                        &PTR____CFConstantStringClassReference_110dfff38,&PTR_DAT_1130fbbf0,0,0,4,
                        0x1c);
    puRam00000001136c0090 = puVar1;
  }
  return;
}



/* Entry: 105797928; end: 10579798f; +[SCCognacAppsListAppsResponse descriptor] */

void FUN_105797928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64180,
                        &PTR____CFConstantStringClassReference_110dfff58,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbf88,2,0x10,0x1c);
    puRam00000001136c0098 = puVar1;
  }
  return;
}



/* Entry: 105797990; end: 1057979f7; +[SCCognacAppsListDiscoverAppsResponse descriptor] */

void FUN_105797990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c00a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a641d0,
                        &PTR____CFConstantStringClassReference_110dfff78,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbd08,1,0x10,0x1c);
    puRam00000001136c00a0 = puVar1;
  }
  return;
}



/* Entry: 1057979f8; end: 105797a5f; +[SCCognacAppsListDestinationAppsRequest descriptor] */

void FUN_1057979f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c00a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64220,
                        &PTR____CFConstantStringClassReference_110dfff98,&PTR_DAT_1130fbbf0,0,0,4,
                        0x1c);
    puRam00000001136c00a8 = puVar1;
  }
  return;
}



/* Entry: 105797a60; end: 105797ac7; +[SCCognacAppsListDestinationAppsResponse descriptor] */

void FUN_105797a60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c00b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64270,
                        &PTR____CFConstantStringClassReference_110dfffb8,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbd28,1,0x10,0x1c);
    puRam00000001136c00b0 = puVar1;
  }
  return;
}



/* Entry: 105797ac8; end: 105797b2f; +[SCCognacAppsListSearchAppsRequest descriptor] */

void FUN_105797ac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c00b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a642c0,
                        &PTR____CFConstantStringClassReference_110dfffd8,&PTR_DAT_1130fbbf0,0,0,4,
                        0x1c);
    puRam00000001136c00b8 = puVar1;
  }
  return;
}



/* Entry: 105797b30; end: 105797b97; +[SCCognacAppsListSearchAppsResponse descriptor] */

void FUN_105797b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c00c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64310,
                        &PTR____CFConstantStringClassReference_110dffff8,&PTR_DAT_1130fbbf0,
                        &PTR_DAT_1130fbd48,1,0x10,0x1c);
    puRam00000001136c00c0 = puVar1;
  }
  return;
}



/* Entry: 105797b98; end: 105797bff; +[SCCognacAppsUpdatedApp descriptor] */

void FUN_105797b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c00c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64360,
                        &PTR____CFConstantStringClassReference_110e00018,&PTR_DAT_1130fbbf0,
                        &PTR_s_id_p_1130fbfc8,2,0x18,0x1c);
    puRam00000001136c00c8 = puVar1;
  }
  return;
}



/* Entry: 105797c00; end: 105797c67; +[SCCognacAppsListUpdatedAppsRequest descriptor] */

void FUN_105797c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c00d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a643b0,
                        &PTR____CFConstantStringClassReference_110e00038,&PTR_DAT_1130fbbf0,0,0,4,
                        0x1c);
    puRam00000001136c00d0 = puVar1;
  }
  return;
}


