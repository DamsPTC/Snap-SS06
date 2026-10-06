/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af4ab3c; end: 10af4ac47;  */

undefined * FUN_10af4ab3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e8800(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e88c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = lVar1;
    func_0x00010c0e8560(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0e88e0(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lVar2,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c06bb60(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  return puVar6;
}



/* Entry: 10af4ac48; end: 10af4ace7; -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginFullOptedInUserIds] */

void FUN_10af4ac48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c31910();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10af4ace8; end: 10af4ad2f;  */

bool FUN_10af4ace8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e8800(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e8720();
  _objc_release(lVar1);
  return lVar2 != 9;
}



/* Entry: 10af4ad30; end: 10af4ae6f; -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginRespositoryForUserId:] */

void FUN_10af4ad30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e8840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0d3c80();
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010befa120(uVar5,param_2,param_3);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4a60();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  puVar7 = PTR_PTR_1126deb40;
  _objc_alloc(PTR_PTR_1126deb40);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b860(puVar7,param_2,param_3,uVar6,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10af4ae70; end: 10af4aeb3; -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginUsernameForOldestAccount] */

void FUN_10af4ae70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be6ccc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e8860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4aeb4; end: 10af4aee3; -[SCOneTapLoginMultiAccountRepositoriesImpl removeOldestOneTapLogin] */

void FUN_10af4aeb4(undefined8 param_1)

{
  func_0x00010be6ccc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af4aee4; end: 10af4b00b; -[SCOneTapLoginMultiAccountRepositoriesImpl persistOneTapLoginToKeychain:configResult:] */

void FUN_10af4aee4(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010c0e8800(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  ppuVar2 = ppuVar1;
  FUN_10af499ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar3,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar1;
  func_0x00010c0e88c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar2 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar2,&PTR____CFConstantStringClassReference_110e3ecf8);
  _objc_release(ppuVar4);
  ppuVar2 = ppuVar1;
  func_0x00010c0e8860(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be733c0(param_1,param_2,param_3,ppuVar2,param_4,puVar3,1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10af4b00c; end: 10af4b0c7; -[SCOneTapLoginMultiAccountRepositoriesImpl persistOneTapControlGroupToKeychain:configResult:] */

void FUN_10af4b00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0e8800(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e8860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010be733c0(param_1,param_2,param_3,uVar2,param_4,puVar3,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af4b0c8; end: 10af4b1df; -[SCOneTapLoginMultiAccountRepositoriesImpl persistV3DryModeGroupToPreferencesAndKeychain:username:configResult:] */

void FUN_10af4b0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0640();
  uVar2 = param_5;
  func_0x00010c25df20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f3a0d8);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf9c4e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f3a0f8);
  _objc_release(uVar2);
  func_0x00010be733c0(param_1,param_2,param_3,param_4,param_5,puVar1,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4b1e0; end: 10af4b2c3; -[SCOneTapLoginMultiAccountRepositoriesImpl containsUserIdInKeychain:] */

bool FUN_10af4b1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aef90;
  _objc_retain(param_3);
  func_0x00010bf63b00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e96358);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar3 = puVar2;
  func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar4 != (undefined *)0x0;
}



/* Entry: 10af4b2c4; end: 10af4b2d7; -[SCOneTapLoginMultiAccountRepositoriesImpl removeAllOneTapsInKeychain] */

void FUN_10af4b2c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aef90,PTR_s_removeDataForKey__112628948,
             &PTR____CFConstantStringClassReference_110e96358);
  return;
}



/* Entry: 10af4b2d8; end: 10af4b2eb; -[SCOneTapLoginMultiAccountRepositoriesImpl removeAllOneTapsInCloudKeychain] */

void FUN_10af4b2d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aef90,PTR_s_removeSynchronizableDataForKeyWi_112629448,
             &PTR____CFConstantStringClassReference_110f3a178);
  return;
}



/* Entry: 10af4b2ec; end: 10af4b57f; -[SCOneTapLoginMultiAccountRepositoriesImpl persistOneTapLoginToCloudKeychain:] */

void FUN_10af4b2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  func_0x00010c0e8800(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uVar1 = param_1;
  FUN_10af499ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0e8560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar1);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c1d0640(puVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110f3a078);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = param_1;
    func_0x00010c0e8860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    if (((ulong)puVar3 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010c0e8860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110daccd8);
      _objc_release(uVar4);
      puVar3 = PTR_PTR_1126aef90;
      func_0x00010c266b40(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110f3a178
                         );
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        _objc_alloc();
        func_0x00010bfeea60();
        func_0x00010c1ec620();
        puVar7 = puVar6;
        func_0x00010bf67000(puVar6,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518
                           );
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        if (puVar7 != (undefined *)0x0) {
          puVar8 = puVar7;
          func_0x00010c0d3c80(puVar7);
          _objc_release(puVar5);
        }
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar5 = puVar8;
      }
      func_0x00010c1d0640(puVar5,param_2,puVar2,param_3);
      puVar7 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      _objc_alloc(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
      func_0x00010bfef3a0();
      func_0x00010bf93020();
      puVar6 = PTR_PTR_1126aef90;
      puVar8 = puVar7;
      func_0x00010bf934c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210f60(puVar6,param_2,puVar8,&PTR____CFConstantStringClassReference_110f3a178);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af4b580; end: 10af4b6ab; -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginFromKeychain:] */

void FUN_10af4b580(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126aef90;
    func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e96358);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c0dff20(puVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c12d3e0(puVar3,param_2,param_3);
        puVar4 = PTR_PTR_1126aef90;
        puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar3,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ea80(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110e96358);
        _objc_release(puVar5);
      }
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af4b6ac; end: 10af4b6af; -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginWithUserId:] */

void FUN_10af4b6ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeOneTapLoginWithUserIdWitho_112628fd8);
  return;
}



/* Entry: 10af4b6b0; end: 10af4b743; -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginWithUserIdWithoutOptOut:] */

void FUN_10af4b6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0e8800(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d840();
  _objc_release(uVar2);
  func_0x00010c12d660(param_1,param_2,param_3);
  func_0x00010be8cb80(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af4b744; end: 10af4b7bf; -[SCOneTapLoginMultiAccountRepositoriesImpl removeOneTapLoginTokenWithUserId:] */

void FUN_10af4b744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0e8800(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c400();
  func_0x00010c1d4ae0(uVar1,param_2,0);
  func_0x00010be8cba0(param_1,param_2,param_3);
  func_0x00010be8cb80(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af4b7c0; end: 10af4b983; -[SCOneTapLoginMultiAccountRepositoriesImpl _syncOneTapLoginToAuthNotificationExtensionUserDefaults] */

void FUN_10af4b7c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 in_x6;
  long lVar14;
  long lVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *puVar16;
  undefined *unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puVar17;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar15 = param_1;
  func_0x00010c27fa60();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar15;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x28 = &PTR_PTR_1126de000;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        lVar2 = param_1;
        func_0x00010c0e8800(param_1,param_2,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010c0e88e0();
        _objc_release(lVar2);
        unaff_x24 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf655e0((double)lVar6);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = PTR_PTR_1126deb48;
        _objc_alloc();
        func_0x00010c053f00();
        func_0x00010c1d0640(puVar1,param_2,unaff_x25,unaff_x23);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      lVar15 = lStack_138;
      func_0x00010bf52a60(lStack_138,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = 0;
    } while (lVar15 != 0);
  }
  _objc_release(lStack_138);
  puVar3 = PTR_PTR_1126deb50;
  _objc_alloc();
  func_0x00010c05f8c0();
  func_0x00010c1d4a40(*(undefined8 *)(param_1 + 0x48),param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10af4b984;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  ppuStack_1a0 = unaff_x28;
  ppuStack_198 = unaff_x27;
  lStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar3;
  lStack_160 = param_1;
  puStack_158 = puVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c0e85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar14 = *(long *)(puVar4 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0e86c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  puVar3 = puVar4;
  func_0x00010c0e85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf52a60();
  uVar13 = (undefined4)in_x6;
  if (puVar5 != (undefined *)0x0) {
    lVar14 = *plStack_260;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar14) {
          _objc_enumerationMutation(puVar3);
        }
        puVar16 = *(undefined **)(lStack_268 + (long)puVar17 * 8);
        lVar6 = *(long *)(puVar4 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar6;
        func_0x00010c0e86c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        uVar13 = (undefined4)in_x6;
        if (lVar2 == 0) {
          _objc_retain(puVar16);
          _objc_release(puVar1);
          _objc_release(lVar15);
          lVar15 = 0;
          puVar1 = puVar16;
          goto LAB_10af4bb38;
        }
        lVar6 = lVar2;
        func_0x00010bf433a0(lVar2,param_2,lVar15);
        if (lVar6 == -1) {
          _objc_retain(puVar16);
          _objc_release(puVar1);
          _objc_retain(lVar2);
          _objc_release(lVar15);
          puVar1 = puVar16;
          lVar15 = lVar2;
        }
        _objc_release(lVar2);
        puVar17 = puVar17 + 1;
      } while (puVar5 != puVar17);
      puVar5 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_270,auStack_230,0x10);
      uVar13 = (undefined4)in_x6;
    } while (puVar5 != (undefined *)0x0);
  }
LAB_10af4bb38:
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126deb40;
  _objc_alloc();
  uVar7 = *(undefined8 *)(puVar4 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(puVar4 + 0x28);
  uVar12 = *(undefined8 *)(puVar4 + 0x30);
  puVar4 = puVar1;
  uVar11 = uVar7;
  func_0x00010c05b860();
  _objc_release(uVar7);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    _objc_retain(uVar11);
    _objc_retain(puVar3);
    _objc_retain(uVar12);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010c25df20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = puVar3;
        func_0x00010bf9c4e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != (undefined *)0x0) {
          uVar7 = *(undefined8 *)(puVar1 + 0x20);
          puVar5 = puVar3;
          func_0x00010c25df20(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar3;
          func_0x00010bf9c4e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ad800(uVar7,param_2,puVar5,puVar17,puVar4);
          _objc_release(puVar17);
          _objc_release(puVar5);
          puVar5 = PTR_PTR_1126aef90;
          func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,
                              &PTR____CFConstantStringClassReference_110e96358);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
          _objc_alloc();
          func_0x00010bfeea60();
          func_0x00010c1ec620();
          puVar16 = puVar17;
          func_0x00010bf67000(puVar17,param_2,
                              *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
          _objc_retainAutoreleasedReturnValue();
          if (puVar16 == (undefined *)0x0) {
            puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
          }
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar11);
          if (((ulong)puVar8 & 1) == 0) {
            func_0x00010c1d0560(uVar12,param_2,uVar11,
                                &PTR____CFConstantStringClassReference_110daccd8);
          }
          puVar8 = puVar3;
          func_0x00010c25df20(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar12,param_2,puVar8,&PTR____CFConstantStringClassReference_110f3a0d8
                             );
          _objc_release(puVar8);
          puVar8 = puVar3;
          func_0x00010bf9c4e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar12,param_2,puVar8,&PTR____CFConstantStringClassReference_110f3a0f8
                             );
          _objc_release(puVar8);
          func_0x00010c1d0560(puVar16,param_2,uVar12,puVar4);
          puVar8 = PTR_PTR_1126aef90;
          puVar9 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
          func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar16,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16ea80(puVar8,param_2,puVar9,&PTR____CFConstantStringClassReference_110e96358
                             );
          _objc_release(puVar9);
          uVar7 = *(undefined8 *)(puVar1 + 0x20);
          if ((int)puVar8 == 0) {
            puVar1 = puVar16;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar1;
            func_0x00010bf529e0();
            puVar9 = puVar3;
            func_0x00010c25df20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar3;
            func_0x00010bf9c4e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ad840(uVar7,param_2,puVar8,puVar4,puVar9,puVar10,uVar13);
            _objc_release(puVar10);
            _objc_release(puVar9);
          }
          else {
            puVar1 = puVar3;
            func_0x00010bf9c4e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ad820(uVar7,param_2,puVar8,puVar4,puVar1,uVar13);
          }
          _objc_release(puVar1);
          _objc_release(puVar16);
          _objc_release(puVar17);
          _objc_release(puVar5);
        }
      }
    }
    _objc_release(uVar12);
    _objc_release(puVar3);
    _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10af4b984; end: 10af4bbd3; -[SCOneTapLoginMultiAccountRepositoriesImpl _oneTapLoginRepositoryForOldestAccount] */

void FUN_10af4b984(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 in_x6;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_1;
  func_0x00010c0e85e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010c0e86c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = param_1;
  func_0x00010c0e85e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  uVar17 = (undefined4)in_x6;
  if (lVar3 != 0) {
    lVar20 = *plStack_120;
    do {
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar20) {
          _objc_enumerationMutation(lVar2);
        }
        lVar19 = *(long *)(lStack_128 + lVar21 * 8);
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0e86c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        uVar17 = (undefined4)in_x6;
        if (lVar5 == 0) {
          _objc_retain(lVar19);
          _objc_release(lVar1);
          _objc_release(lVar18);
          lVar18 = 0;
          lVar1 = lVar19;
          goto LAB_10af4bb38;
        }
        lVar4 = lVar5;
        func_0x00010bf433a0(lVar5,param_2,lVar18);
        if (lVar4 == -1) {
          _objc_retain(lVar19);
          _objc_release(lVar1);
          _objc_retain(lVar5);
          _objc_release(lVar18);
          lVar1 = lVar19;
          lVar18 = lVar5;
        }
        _objc_release(lVar5);
        lVar21 = lVar21 + 1;
      } while (lVar3 != lVar21);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      uVar17 = (undefined4)in_x6;
    } while (lVar3 != 0);
  }
LAB_10af4bb38:
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126deb40;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = *(undefined **)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = lVar1;
  uVar14 = uVar7;
  func_0x00010c05b860();
  _objc_release(uVar7);
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(lVar2);
    _objc_retain(uVar14);
    _objc_retain(puVar15);
    _objc_retain(uVar16);
    if (lVar2 != 0) {
      puVar6 = puVar15;
      func_0x00010c25df20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = puVar15;
        func_0x00010bf9c4e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar6 != (undefined *)0x0) {
          uVar7 = *(undefined8 *)(lVar1 + 0x20);
          puVar6 = puVar15;
          func_0x00010c25df20(puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar15;
          func_0x00010bf9c4e0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ad800(uVar7,param_2,puVar6,puVar8,lVar2);
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126aef90;
          func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,
                              &PTR____CFConstantStringClassReference_110e96358);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
          _objc_alloc();
          func_0x00010bfeea60();
          func_0x00010c1ec620();
          puVar9 = puVar8;
          func_0x00010bf67000(puVar8,param_2,
                              *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 == (undefined *)0x0) {
            puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
          }
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar14);
          if (((ulong)puVar10 & 1) == 0) {
            func_0x00010c1d0560(uVar16,param_2,uVar14,
                                &PTR____CFConstantStringClassReference_110daccd8);
          }
          puVar10 = puVar15;
          func_0x00010c25df20(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar16,param_2,puVar10,
                              &PTR____CFConstantStringClassReference_110f3a0d8);
          _objc_release(puVar10);
          puVar10 = puVar15;
          func_0x00010bf9c4e0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar16,param_2,puVar10,
                              &PTR____CFConstantStringClassReference_110f3a0f8);
          _objc_release(puVar10);
          func_0x00010c1d0560(puVar9,param_2,uVar16,lVar2);
          puVar10 = PTR_PTR_1126aef90;
          puVar11 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
          func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar9,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16ea80(puVar10,param_2,puVar11,
                              &PTR____CFConstantStringClassReference_110e96358);
          _objc_release(puVar11);
          uVar7 = *(undefined8 *)(lVar1 + 0x20);
          if ((int)puVar10 == 0) {
            puVar11 = puVar9;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar11;
            func_0x00010bf529e0();
            puVar12 = puVar15;
            func_0x00010c25df20(puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar15;
            func_0x00010bf9c4e0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ad840(uVar7,param_2,puVar10,lVar2,puVar12,puVar13,uVar17);
            _objc_release(puVar13);
            _objc_release(puVar12);
          }
          else {
            puVar11 = puVar15;
            func_0x00010bf9c4e0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ad820(uVar7,param_2,puVar10,lVar2,puVar11,uVar17);
          }
          _objc_release(puVar11);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar6);
        }
      }
    }
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10af4bbd4; end: 10af4bf2f; -[SCOneTapLoginMultiAccountRepositoriesImpl _persistOneTapToKeychain:username:configResult:dict:hasToken:] */

void FUN_10af4bbd4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    puVar1 = param_5;
    func_0x00010c25df20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_5;
      func_0x00010bf9c4e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        puVar1 = param_5;
        func_0x00010c25df20(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_5;
        func_0x00010bf9c4e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad800(uVar8,param_2,puVar1,puVar2,param_3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126aef90;
        func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,
                            &PTR____CFConstantStringClassReference_110e96358);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        _objc_alloc();
        func_0x00010bfeea60();
        func_0x00010c1ec620();
        puVar3 = puVar2;
        func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518
                           );
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
        }
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
        if (((ulong)puVar4 & 1) == 0) {
          func_0x00010c1d0560(param_6,param_2,param_4,
                              &PTR____CFConstantStringClassReference_110daccd8);
        }
        puVar4 = param_5;
        func_0x00010c25df20(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(param_6,param_2,puVar4,&PTR____CFConstantStringClassReference_110f3a0d8)
        ;
        _objc_release(puVar4);
        puVar4 = param_5;
        func_0x00010bf9c4e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(param_6,param_2,puVar4,&PTR____CFConstantStringClassReference_110f3a0f8)
        ;
        _objc_release(puVar4);
        func_0x00010c1d0560(puVar3,param_2,param_6,param_3);
        puVar4 = PTR_PTR_1126aef90;
        puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar3,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ea80(puVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110e96358);
        _objc_release(puVar5);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        if ((int)puVar4 == 0) {
          puVar5 = puVar3;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar5;
          func_0x00010bf529e0();
          puVar6 = param_5;
          func_0x00010c25df20(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_5;
          func_0x00010bf9c4e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ad840(uVar8,param_2,puVar4,param_3,puVar6,puVar7,param_7);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        else {
          puVar5 = param_5;
          func_0x00010bf9c4e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ad820(uVar8,param_2,puVar4,param_3,puVar5,param_7);
        }
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af4bf30; end: 10af4bfeb; -[SCOneTapLoginMultiAccountRepositoriesImpl _isTokenValidWithToken:expiry:username:] */

undefined *
FUN_10af4bf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0((double)param_4,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c06bb60(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_10af4bfd0;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_10af4bfd0:
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 10af4bfec; end: 10af4c017; -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidTokens] */

void FUN_10af4bfec(undefined8 param_1)

{
  func_0x00010be8c580();
  func_0x00010be8c560(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeInvalidCloudKeychainToken_112580ae8);
  return;
}



/* Entry: 10af4c018; end: 10af4c313; -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidLocalTokens] */

void FUN_10af4c018(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar4);
      }
      lVar5 = param_1;
      func_0x00010c0e8800(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0e88c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e88e0(lVar5);
      lVar7 = lVar5;
      func_0x00010c0e8860(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010be44aa0();
      puVar9 = puVar1;
      if ((int)lVar8 == 0) {
        puVar9 = puVar2;
      }
      func_0x00010befa120(puVar9);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      lVar15 = lVar15 + 1;
    } while (lVar3 != lVar15);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_retain(puVar2);
  puVar9 = puVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar9 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar2);
      }
      lVar10 = param_1;
      func_0x00010c0e8800(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12a980();
      _objc_release(lVar10);
      puVar16 = puVar16 + 1;
    } while (puVar9 != puVar16);
    puVar9 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar9 = puVar1;
  func_0x00010bf529e0();
  puVar11 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar11;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar16;
  func_0x00010bf529e0();
  _objc_release(puVar16);
  _objc_release(puVar11);
  if (puVar9 != puVar12) {
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4a60();
    _objc_release(uVar13);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be8c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10af4c314; end: 10af4c31b; -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidKeychainV3Tokens] */

void FUN_10af4c314(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeInvalidKeychainTokensIsCl_112580af0,0)
  ;
  return;
}



/* Entry: 10af4c31c; end: 10af4c323; -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidCloudKeychainTokens] */

void FUN_10af4c31c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeInvalidKeychainTokensIsCl_112580af0,1)
  ;
  return;
}



/* Entry: 10af4c324; end: 10af4c7a7; -[SCOneTapLoginMultiAccountRepositoriesImpl _removeInvalidKeychainTokensIsCloud:] */

void FUN_10af4c324(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined **unaff_x24;
  undefined *puVar21;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_5f0;
  undefined8 uStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_460;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  ulong uStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined1 **ppuStack_400;
  code *pcStack_3f8;
  undefined **ppuStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  long lStack_3a0;
  undefined **ppuStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  int iStack_344;
  long lStack_2c0;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  ulong uStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  uint uStack_244;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  ulong uStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = (uint)param_3 == 0;
  ppuVar5 = &PTR____CFConstantStringClassReference_110f3a178;
  if (bVar2) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e96358;
  }
  ppuVar4 = &PTR_PTR_110c98238;
  if (bVar2) {
    ppuVar4 = &PTR_PTR_110c98230;
  }
  ppuVar17 = &PTR____CFConstantStringClassReference_110f3a1d8;
  if (bVar2) {
    ppuVar17 = &PTR____CFConstantStringClassReference_110f3a1f8;
  }
  uStack_208 = param_1;
  _objc_retain(ppuVar5);
  puStack_200 = *ppuVar4;
  _objc_retain();
  _objc_retain(ppuVar17);
  ppuVar3 = (undefined **)PTR_PTR_1126aef90;
  if ((param_3 & 1) == 0) {
    func_0x00010bf63b00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c266b40();
    _objc_retainAutoreleasedReturnValue();
  }
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    ppuVar4 = unaff_x24;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar4;
    func_0x00010c0d3c80();
    _objc_release(ppuVar4);
    if (unaff_x25 != (undefined **)0x0) {
      unaff_x26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      uStack_244 = (uint)param_3;
      ppuStack_240 = unaff_x24;
      ppuStack_238 = ppuVar3;
      ppuStack_230 = ppuVar17;
      ppuStack_228 = ppuVar5;
      _objc_opt_new();
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      ppuVar5 = unaff_x25;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_220 = ppuVar5;
      func_0x00010bf52a60();
      if (ppuVar5 != (undefined **)0x0) {
        lStack_1f8 = *plStack_1a0;
        ppuStack_210 = &PTR____CFConstantStringClassReference_110f3a058;
        ppuStack_218 = &PTR____CFConstantStringClassReference_110daccd8;
        do {
          ppuVar17 = (undefined **)0x0;
          do {
            if (*plStack_1a0 != lStack_1f8) {
              _objc_enumerationMutation(ppuStack_220);
            }
            param_3 = *(ulong *)(lStack_1a8 + (long)ppuVar17 * 8);
            ppuVar6 = unaff_x25;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            ppuVar15 = ppuVar6;
            _objc_opt_isKindOfClass(ppuVar6,puVar7);
            ppuVar3 = ppuVar6;
            if (((ulong)ppuVar15 & 1) == 0) {
              ppuVar3 = (undefined **)0x0;
            }
            _objc_retain(ppuVar3);
            _objc_release(ppuVar6);
            if (ppuVar3 == (undefined **)0x0) {
              func_0x00010befa120(unaff_x26);
            }
            else {
              unaff_x27 = ppuVar6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = ppuVar6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b4ca0();
              _objc_release(unaff_x28);
              func_0x00010c0e00e0(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uStack_208;
              func_0x00010be44aa0();
              if ((uVar8 & 1) == 0) {
                func_0x00010befa120(unaff_x26);
              }
              _objc_release(ppuVar6);
              _objc_release(unaff_x27);
              ppuVar4 = unaff_x25;
            }
            _objc_release(ppuVar3);
            ppuVar17 = (undefined **)((long)ppuVar17 + 1);
          } while (ppuVar5 != ppuVar17);
          ppuVar5 = ppuStack_220;
          func_0x00010bf52a60();
        } while (ppuVar5 != (undefined **)0x0);
      }
      _objc_release(ppuStack_220);
      puVar7 = unaff_x26;
      func_0x00010bf529e0();
      ppuVar3 = ppuStack_238;
      if (puVar7 != (undefined *)0x0) {
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        _objc_retain(unaff_x26);
        puVar7 = unaff_x26;
        func_0x00010bf52a60();
        uVar1 = uStack_244;
        param_3 = (ulong)uStack_244;
        if (puVar7 != (undefined *)0x0) {
          lVar16 = *plStack_1e0;
          do {
            puVar18 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lVar16) {
                _objc_enumerationMutation(unaff_x26);
              }
              func_0x00010c12d3e0(unaff_x25);
              puVar18 = puVar18 + 1;
            } while (puVar7 != puVar18);
            puVar7 = unaff_x26;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined *)0x0);
        }
        _objc_release(unaff_x26);
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780();
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 == 0) {
          func_0x00010c16ea80(PTR_PTR_1126aef90);
        }
        else {
          func_0x00010c210f60();
        }
        _objc_release(ppuVar4);
      }
      _objc_release(unaff_x26);
      ppuVar5 = ppuStack_228;
      ppuVar17 = ppuStack_230;
      unaff_x24 = ppuStack_240;
    }
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar17);
  _objc_release(puStack_200);
  ppuVar6 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  pcStack_258 = FUN_10af4c7a8;
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = ppuVar6;
  ppuStack_2b0 = unaff_x28;
  ppuStack_2a8 = unaff_x27;
  puStack_2a0 = unaff_x26;
  ppuStack_298 = unaff_x25;
  ppuStack_290 = unaff_x24;
  ppuStack_288 = ppuVar3;
  uStack_280 = param_3;
  ppuStack_278 = ppuVar17;
  ppuStack_270 = ppuVar5;
  ppuStack_268 = ppuVar4;
  puStack_260 = &stack0xfffffffffffffff0;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_3c0 = puVar7;
  _objc_release(ppuVar15);
  func_0x00010c0ad780(ppuVar6[4]);
  puVar7 = PTR_PTR_1126aef90;
  func_0x00010bf63b20();
  _objc_retainAutoreleasedReturnValue();
  if (iStack_344 != 0) {
    func_0x00010c0ad7a0(ppuVar6[4]);
  }
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  uStack_350 = 0;
  puStack_3d8 = puVar7;
  func_0x00010bfeea60();
  uStack_3e0 = uStack_350;
  _objc_retain();
  func_0x00010c1ec620(ppuVar5);
  ppuStack_3e8 = ppuVar5;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)ppuVar6[4];
  ppuVar4 = ppuVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0ad7c0(ppuVar15);
  _objc_release(ppuVar4);
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  ppuVar17 = ppuVar5;
  ppuStack_398 = ppuVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3c8 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    lStack_3a0 = *plStack_380;
    ppuStack_3a8 = &PTR____CFConstantStringClassReference_110f3a0d8;
    ppuStack_3b0 = &PTR____CFConstantStringClassReference_110f3a0f8;
    ppuStack_3b8 = &PTR____CFConstantStringClassReference_110e3ecf8;
    ppuStack_3d0 = &PTR____CFConstantStringClassReference_110f3a0b8;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if (*plStack_380 != lStack_3a0) {
          _objc_enumerationMutation(ppuStack_3c8);
        }
        param_3 = *(ulong *)(lStack_388 + (long)unaff_x24 * 8);
        ppuVar15 = ppuStack_398;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        ppuVar9 = ppuVar15;
        _objc_opt_isKindOfClass(ppuVar15,puVar7);
        ppuVar3 = ppuVar15;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar15);
        if (ppuVar3 != (undefined **)0x0) {
          unaff_x25 = (undefined **)ppuVar6[4];
          ppuVar5 = ppuVar15;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar15;
          func_0x00010c0e00e0(ppuVar15);
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = ppuVar15;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ad7e0(unaff_x25);
          _objc_release(unaff_x28);
          _objc_release(ppuVar4);
          _objc_release(ppuVar5);
          puVar7 = puStack_3c0;
          func_0x00010bf4b900();
          ppuVar4 = ppuVar6;
          if (((ulong)puVar7 & 1) == 0) {
            unaff_x25 = ppuVar15;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            ppuVar5 = unaff_x25;
            _objc_opt_isKindOfClass(unaff_x25,puVar7);
            _objc_release(unaff_x25);
            if ((((ulong)ppuVar5 & 1) != 0) && (unaff_x25 != (undefined **)0x0)) {
              ppuVar5 = ppuVar6;
              func_0x00010c0e8800();
              _objc_retainAutoreleasedReturnValue();
              FUN_10af49788();
              unaff_x25 = (undefined **)ppuVar6[4];
              ppuVar9 = ppuVar15;
              func_0x00010c0e00e0(ppuVar15);
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = ppuVar15;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ad760(unaff_x25);
              _objc_release(ppuVar15);
              _objc_release(unaff_x28);
              _objc_release(ppuVar9);
              _objc_release(ppuVar5);
            }
          }
        }
        _objc_release(ppuVar3);
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar17 != unaff_x24);
      ppuVar17 = ppuStack_3c8;
      func_0x00010bf52a60();
      unaff_x27 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuStack_3c8);
  _objc_release(ppuStack_398);
  _objc_release(ppuStack_3e8);
  _objc_release(uStack_3e0);
  _objc_release(puStack_3d8);
  puVar7 = puStack_3c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3f8 = FUN_10af4cbfc;
  lStack_460 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  plStack_590 = (long *)0x0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  puVar18 = puVar7;
  ppuStack_450 = unaff_x28;
  ppuStack_448 = unaff_x27;
  ppuStack_440 = ppuVar6;
  ppuStack_438 = unaff_x25;
  ppuStack_430 = unaff_x24;
  ppuStack_428 = ppuVar3;
  uStack_420 = param_3;
  ppuStack_418 = ppuVar4;
  ppuStack_410 = ppuVar5;
  ppuStack_408 = ppuVar15;
  ppuStack_400 = &puStack_260;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar18;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar16 = *plStack_590;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_590 != lVar16) {
          _objc_enumerationMutation(puVar18);
        }
        puVar11 = puVar7;
        func_0x00010c0e8800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4900();
        _objc_release(puVar11);
        puVar21 = puVar21 + 1;
      } while (puVar10 != puVar21);
      puVar10 = puVar18;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar18);
  ppuVar5 = &PTR____CFConstantStringClassReference_110f3a178;
  ppuVar4 = (undefined **)PTR_PTR_1126aef90;
  func_0x00010c266b40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 != (undefined **)0x0) {
    puVar18 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    lStack_5a8 = 0;
    ppuVar5 = ppuVar4;
    func_0x00010bfeea60();
    lVar16 = lStack_5a8;
    _objc_retain(lStack_5a8);
    if (lVar16 == 0) {
      func_0x00010c1ec620(puVar18);
      puVar21 = puVar18;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar11 = puVar7;
      func_0x00010c0e8840(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5e8 = 0;
      puStack_5f0 = (undefined *)0x0;
      uStack_5d8 = 0;
      plStack_5e0 = (long *)0x0;
      puVar11 = puVar21;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &puStack_5f0;
      puVar12 = puVar11;
      func_0x00010bf52a60();
      if (puVar12 != (undefined *)0x0) {
        lVar20 = *plStack_5e0;
        do {
          puVar19 = (undefined *)0x0;
          do {
            if (*plStack_5e0 != lVar20) {
              _objc_enumerationMutation(puVar11);
            }
            puVar13 = puVar21;
            func_0x00010c0e00e0(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar10;
            func_0x00010bf4b900();
            if (((ulong)puVar14 & 1) == 0) {
              puVar14 = puVar7;
              func_0x00010c0e8800(puVar7);
              _objc_retainAutoreleasedReturnValue();
              FUN_10af49788();
              _objc_release(puVar14);
            }
            _objc_release(puVar13);
            puVar19 = puVar19 + 1;
          } while (puVar12 != puVar19);
          ppuVar5 = &puStack_5f0;
          puVar12 = puVar11;
          func_0x00010bf52a60();
        } while (puVar12 != (undefined *)0x0);
      }
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar21);
    }
    _objc_release(puVar18);
    _objc_release(lVar16);
  }
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_460) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  if (ppuVar5 != (undefined **)0x0) {
    puVar7 = PTR_PTR_1126aef90;
    func_0x00010bf63b00(PTR_PTR_1126aef90);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar10 = puVar18;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 != (undefined *)0x0) {
      puVar21 = puVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar21;
      func_0x00010c0d3c80();
      _objc_release(puVar21);
      if (puVar11 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar11);
        func_0x00010c1d0640(puVar11);
        func_0x00010c1d0560(puVar10);
        puVar21 = PTR_PTR_1126aef90;
        puVar12 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ea80(puVar21);
        _objc_release(puVar12);
      }
      _objc_release(puVar11);
    }
    _objc_release(puVar10);
    _objc_release(puVar18);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 10af4c7a8; end: 10af4cbfb; -[SCOneTapLoginMultiAccountRepositoriesImpl _copyV3TokenFromKeychainIfNecessary] */

void FUN_10af4c7a8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 unaff_x22;
  long lVar11;
  undefined *unaff_x23;
  long lVar12;
  undefined *unaff_x24;
  undefined *puVar13;
  undefined *unaff_x25;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_210;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f4;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_1;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar1;
  _objc_release(puVar13);
  func_0x00010c0ad780(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b20();
  _objc_retainAutoreleasedReturnValue();
  if (iStack_f4 != 0) {
    func_0x00010c0ad7a0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar13 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  uStack_100 = 0;
  puStack_188 = puVar1;
  func_0x00010bfeea60();
  uStack_190 = uStack_100;
  _objc_retain();
  func_0x00010c1ec620(puVar13);
  puStack_198 = puVar13;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined **)(param_1 + 0x20);
  puVar1 = puVar13;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0ad7c0(puVar9);
  _objc_release(puVar1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar2 = puVar13;
  puStack_148 = puVar13;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar2;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lStack_150 = *plStack_130;
    ppuStack_158 = &PTR____CFConstantStringClassReference_110f3a0d8;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110f3a0f8;
    ppuStack_168 = &PTR____CFConstantStringClassReference_110e3ecf8;
    ppuStack_180 = &PTR____CFConstantStringClassReference_110f3a0b8;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if (*plStack_130 != lStack_150) {
          _objc_enumerationMutation(puStack_178);
        }
        unaff_x22 = *(undefined8 *)(lStack_138 + (long)unaff_x24 * 8);
        puVar9 = puStack_148;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        puVar4 = puVar9;
        _objc_opt_isKindOfClass(puVar9,puVar3);
        unaff_x23 = puVar9;
        if (((ulong)puVar4 & 1) == 0) {
          unaff_x23 = (undefined *)0x0;
        }
        _objc_retain(unaff_x23);
        _objc_release(puVar9);
        if (unaff_x23 != (undefined *)0x0) {
          unaff_x25 = *(undefined **)(param_1 + 0x20);
          puVar13 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar9;
          func_0x00010c0e00e0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ad7e0(unaff_x25);
          _objc_release(unaff_x28);
          _objc_release(puVar1);
          _objc_release(puVar13);
          puVar3 = puStack_170;
          func_0x00010bf4b900();
          puVar1 = param_1;
          if (((ulong)puVar3 & 1) == 0) {
            unaff_x25 = puVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            puVar13 = unaff_x25;
            _objc_opt_isKindOfClass(unaff_x25,puVar3);
            _objc_release(unaff_x25);
            if ((((ulong)puVar13 & 1) != 0) && (unaff_x25 != (undefined *)0x0)) {
              puVar13 = param_1;
              func_0x00010c0e8800();
              _objc_retainAutoreleasedReturnValue();
              FUN_10af49788();
              unaff_x25 = *(undefined **)(param_1 + 0x20);
              puVar3 = puVar9;
              func_0x00010c0e00e0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = puVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ad760(unaff_x25);
              _objc_release(puVar9);
              _objc_release(unaff_x28);
              _objc_release(puVar3);
              _objc_release(puVar13);
            }
          }
        }
        _objc_release(unaff_x23);
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = puStack_178;
      func_0x00010bf52a60();
      unaff_x27 = 0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puStack_178);
  _objc_release(puStack_148);
  _objc_release(puStack_198);
  _objc_release(uStack_190);
  _objc_release(puStack_188);
  puVar2 = puStack_170;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_10af4cbfc;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  puVar3 = puVar2;
  puStack_200 = unaff_x28;
  uStack_1f8 = unaff_x27;
  puStack_1f0 = param_1;
  puStack_1e8 = unaff_x25;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  uStack_1d0 = unaff_x22;
  puStack_1c8 = puVar1;
  puStack_1c0 = puVar13;
  puStack_1b8 = puVar9;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar12 = *plStack_340;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_340 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        puVar9 = puVar2;
        func_0x00010c0e8800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4900();
        _objc_release(puVar9);
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar1 = puVar3;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  ppuVar8 = &PTR____CFConstantStringClassReference_110f3a178;
  ppuVar5 = (undefined **)PTR_PTR_1126aef90;
  func_0x00010c266b40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    lStack_358 = 0;
    ppuVar8 = ppuVar5;
    func_0x00010bfeea60();
    lVar12 = lStack_358;
    _objc_retain(lStack_358);
    if (lVar12 == 0) {
      func_0x00010c1ec620(puVar1);
      puVar9 = puVar1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar3 = puVar2;
      func_0x00010c0e8840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_398 = 0;
      puStack_3a0 = (undefined *)0x0;
      uStack_388 = 0;
      plStack_390 = (long *)0x0;
      puVar3 = puVar9;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &puStack_3a0;
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar11 = *plStack_390;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_390 != lVar11) {
              _objc_enumerationMutation(puVar3);
            }
            puVar6 = puVar9;
            func_0x00010c0e00e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar13;
            func_0x00010bf4b900();
            if (((ulong)puVar7 & 1) == 0) {
              puVar7 = puVar2;
              func_0x00010c0e8800(puVar2);
              _objc_retainAutoreleasedReturnValue();
              FUN_10af49788();
              _objc_release(puVar7);
            }
            _objc_release(puVar6);
            puVar10 = puVar10 + 1;
          } while (puVar4 != puVar10);
          ppuVar8 = &puStack_3a0;
          puVar4 = puVar3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      _objc_release(puVar13);
      _objc_release(puVar9);
    }
    _objc_release(puVar1);
    _objc_release(lVar12);
  }
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  if (ppuVar8 != (undefined **)0x0) {
    puVar1 = PTR_PTR_1126aef90;
    func_0x00010bf63b00(PTR_PTR_1126aef90);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar2 = puVar13;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar9 = puVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar3);
        func_0x00010c1d0640(puVar3);
        func_0x00010c1d0560(puVar2);
        puVar9 = PTR_PTR_1126aef90;
        puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ea80(puVar9);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 10af4cbfc; end: 10af4cefb; -[SCOneTapLoginMultiAccountRepositoriesImpl _copyCloudTokenFromKeychainIfNecessary] */

void FUN_10af4cbfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_1;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar14 = *plStack_1a0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1a0 != lVar14) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = param_1;
        func_0x00010c0e8800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4900();
        _objc_release(lVar2);
        lVar15 = lVar15 + 1;
      } while (lVar13 != lVar15);
      lVar13 = lVar1;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar1);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f3a178;
  ppuVar3 = (undefined **)PTR_PTR_1126aef90;
  func_0x00010c266b40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    lStack_1b8 = 0;
    ppuVar11 = ppuVar3;
    func_0x00010bfeea60();
    lVar1 = lStack_1b8;
    _objc_retain(lStack_1b8);
    if (lVar1 == 0) {
      func_0x00010c1ec620(puVar4);
      puVar5 = puVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
      lVar13 = param_1;
      func_0x00010c0e8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1f8 = 0;
      puStack_200 = (undefined *)0x0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      puVar7 = puVar5;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &puStack_200;
      puVar8 = puVar7;
      func_0x00010bf52a60();
      if (puVar8 != (undefined *)0x0) {
        lVar13 = *plStack_1f0;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_1f0 != lVar13) {
              _objc_enumerationMutation(puVar7);
            }
            puVar9 = puVar5;
            func_0x00010c0e00e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar6;
            func_0x00010bf4b900();
            if (((ulong)puVar10 & 1) == 0) {
              lVar14 = param_1;
              func_0x00010c0e8800(param_1);
              _objc_retainAutoreleasedReturnValue();
              FUN_10af49788();
              _objc_release(lVar14);
            }
            _objc_release(puVar9);
            puVar12 = puVar12 + 1;
          } while (puVar8 != puVar12);
          ppuVar11 = &puStack_200;
          puVar8 = puVar7;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  if (ppuVar11 != (undefined **)0x0) {
    puVar4 = PTR_PTR_1126aef90;
    func_0x00010bf63b00(PTR_PTR_1126aef90);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar5 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar7 = puVar5;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d3c80();
      _objc_release(puVar7);
      if (puVar8 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar8);
        func_0x00010c1d0640(puVar8);
        func_0x00010c1d0560(puVar5);
        puVar7 = PTR_PTR_1126aef90;
        puVar12 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ea80(puVar7);
        _objc_release(puVar12);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 10af4cefc; end: 10af4d07f; -[SCOneTapLoginMultiAccountRepositoriesImpl _removeOneTapLoginTokenFromKeychain:] */

void FUN_10af4cefc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126aef90;
    func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e96358);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c0dff20(puVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0d3c80();
      _objc_release(puVar4);
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                            &PTR____CFConstantStringClassReference_110e3ecf8);
        func_0x00010c1d0640(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2628,
                            &PTR____CFConstantStringClassReference_110f3a058);
        func_0x00010c1d0560(puVar3,param_2,puVar5,param_3);
        puVar4 = PTR_PTR_1126aef90;
        puVar6 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar3,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16ea80(puVar4,param_2,puVar6,&PTR____CFConstantStringClassReference_110e96358);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af4d080; end: 10af4d1bf; -[SCOneTapLoginMultiAccountRepositoriesImpl _removeOneTapLoginFromCloudKeychain:] */

void FUN_10af4d080(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126aef90;
    func_0x00010c266b40(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110f3a178);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      func_0x00010bfeea60();
      func_0x00010c1ec620();
      puVar3 = puVar2;
      func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d3c80();
      _objc_release(puVar3);
      if (puVar4 != (undefined *)0x0) {
        puVar3 = puVar4;
        func_0x00010c0dff20(puVar4,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c12d3e0(puVar4,param_2,param_3);
          puVar3 = PTR_PTR_1126aef90;
          puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
          func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar4,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c210f60(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110f3a178
                             );
          _objc_release(puVar5);
        }
      }
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af4d1c0; end: 10af4d317; -[SCOneTapLoginMultiAccountRepositoriesImpl _logExposureForUserId:username:studyName:expId:hasToken:] */

void FUN_10af4d1c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7880;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c20ea40();
  func_0x00010c198a80(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180840(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9c4c0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f160();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4d318; end: 10af4d3a7; -[SCOneTapLoginMultiAccountRepositoriesImpl .cxx_destruct] */

void FUN_10af4d318(long param_1)

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



/* Entry: 10af4d3a8; end: 10af4d40b; -[SCPreferences isSharedDevice] */

void FUN_10af4d3a8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f3a238);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d40c; end: 10af4d417; -[SCPreferences setIsSharedDevice:] */

void FUN_10af4d40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110f3a238);
  return;
}



/* Entry: 10af4d418; end: 10af4d47b; -[SCPreferences oneTapLoginUserIds] */

void FUN_10af4d418(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f3a258);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d47c; end: 10af4d487; -[SCPreferences setOneTapLoginUserIds:] */

void FUN_10af4d47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110f3a258);
  return;
}



/* Entry: 10af4d488; end: 10af4d52f; -[SCPreferences oneTapLoginUsernameForUserId:] */

void FUN_10af4d488(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d530; end: 10af4d5d7; -[SCPreferences oneTapLoginBitmojiAvatarIdForUserId:] */

void FUN_10af4d530(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d5d8; end: 10af4d67f; -[SCPreferences oneTapLoginBitmojiSelfieIdForUserId:] */

void FUN_10af4d5d8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d680; end: 10af4d723; -[SCPreferences oneTapLoginBitmojiAvatarForUserId:] */

void FUN_10af4d680(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d724; end: 10af4d7e7; -[SCPreferences oneTapLoginV3TokenExpiryForUserId:] */

ulong FUN_10af4d724(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
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
    func_0x00010c0b4ca0(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af4d7e8; end: 10af4d88b; -[SCPreferences oneTapLoginLastLogoutTimestampForUserId:] */

void FUN_10af4d7e8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d88c; end: 10af4d92f; -[SCPreferences oneTapLoginLastEmitTimestampForUserId:] */

void FUN_10af4d88c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4d930; end: 10af4d9f3; -[SCPreferences oneTapLoginOptInSourceForUserId:] */

long FUN_10af4d930(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    lVar4 = -1;
  }
  else {
    func_0x00010c067ec0(param_1);
    lVar4 = (long)(int)param_1;
  }
  _objc_release(uVar1);
  return lVar4;
}



/* Entry: 10af4d9f4; end: 10af4da9b; -[SCPreferences oneTapLoginBitmojiUsernameStudyNameForUserId:] */

void FUN_10af4d9f4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4da9c; end: 10af4db43; -[SCPreferences oneTapLoginBitmojiUsernameExperimentIdForUserId:] */

void FUN_10af4da9c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4db44; end: 10af4dbcb; -[SCPreferences setOneTapLoginUsername:forUserId:] */

void FUN_10af4db44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4dbcc; end: 10af4dc53; -[SCPreferences setOneTapLoginBitmojiAvatarId:forUserId:] */

void FUN_10af4dbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4dc54; end: 10af4dcdb; -[SCPreferences setOneTapLoginBitmojiSelfieId:forUserId:] */

void FUN_10af4dc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4dcdc; end: 10af4dd63; -[SCPreferences setOneTapLoginBitmojiAvatar:forUserId:] */

void FUN_10af4dcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4dd64; end: 10af4de0f; -[SCPreferences setOneTapLoginV3TokenExpiry:forUserId:] */

void FUN_10af4dd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df7c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d0640(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4de10; end: 10af4de97; -[SCPreferences setOneTapLoginLastLogoutTimestamp:forUserId:] */

void FUN_10af4de10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4de98; end: 10af4df1f; -[SCPreferences setOneTapLoginLastEmitTimestamp:forUserId:] */

void FUN_10af4de98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4df20; end: 10af4dfcb; -[SCPreferences setOneTapLoginOptInSource:forUserId:] */

void FUN_10af4df20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c0df760(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d0640(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4dfcc; end: 10af4e053; -[SCPreferences setOneTapLoginBitmojiUsernameStudyName:forUserId:] */

void FUN_10af4dfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4e054; end: 10af4e0db; -[SCPreferences setOneTapLoginBitmojiUsernameExperimentId:forUserId:] */

void FUN_10af4e054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4e0dc; end: 10af4e1d7; -[SCOneTapLoginDefaultRepository initWithUserId:preferences:oneTapLoginV3TokenManager:oneTapLoginCloudTokenManager:] */

undefined1 *
FUN_10af4e0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112702b30;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af4e1d8; end: 10af4e1e3; -[SCOneTapLoginDefaultRepository oneTapLoginBitmojiAvatar] */

void FUN_10af4e1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginBitmojiAvatarForUserI_112617b28,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e1e4; end: 10af4e1ef; -[SCOneTapLoginDefaultRepository setOneTapLoginBitmojiAvatar:] */

void FUN_10af4e1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d47f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginBitmojiAvatar_forU_112652c20,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e1f0; end: 10af4e217; -[SCOneTapLoginDefaultRepository oneTapLoginUserId] */

void FUN_10af4e1f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4e218; end: 10af4e223; -[SCOneTapLoginDefaultRepository oneTapLoginBitmojiSelfieId] */

void FUN_10af4e218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e84d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginBitmojiSelfieIdForUse_112617b48,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e224; end: 10af4e22f; -[SCOneTapLoginDefaultRepository setOneTapLoginBitmojiSelfieId:] */

void FUN_10af4e224(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginBitmojiSelfieId_fo_112652c40,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e230; end: 10af4e23b; -[SCOneTapLoginDefaultRepository oneTapLoginBitmojiAvatarId] */

void FUN_10af4e230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginBitmojiAvatarIdForUse_112617b38,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e23c; end: 10af4e247; -[SCOneTapLoginDefaultRepository setOneTapLoginBitmojiAvatarId:] */

void FUN_10af4e23c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginBitmojiAvatarId_fo_112652c30,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e248; end: 10af4e253; -[SCOneTapLoginDefaultRepository oneTapLoginUsername] */

void FUN_10af4e248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e88b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginUsernameForUserId__112617c40,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e254; end: 10af4e25f; -[SCOneTapLoginDefaultRepository setOneTapLoginUsername:] */

void FUN_10af4e254(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginUsername_forUserId_112652cd0,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e260; end: 10af4e2af; -[SCOneTapLoginDefaultRepository oneTapLoginV3Token] */

void FUN_10af4e260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2730a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af4e2b0; end: 10af4e30f; -[SCOneTapLoginDefaultRepository setOneTapLoginV3Token:] */

void FUN_10af4e2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af4e310; end: 10af4e31b; -[SCOneTapLoginDefaultRepository oneTapLoginV3TokenExpiry] */

void FUN_10af4e310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginV3TokenExpiryForUserI_112617c58,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e31c; end: 10af4e327; -[SCOneTapLoginDefaultRepository setOneTapLoginV3TokenExpiry:] */

void FUN_10af4e31c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginV3TokenExpiry_forU_112652ce8,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e328; end: 10af4e377; -[SCOneTapLoginDefaultRepository oneTapLoginCloudToken] */

void FUN_10af4e328(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2730a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af4e378; end: 10af4e3d7; -[SCOneTapLoginDefaultRepository setOneTapLoginCloudToken:] */

void FUN_10af4e378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af4e3d8; end: 10af4e3e3; -[SCOneTapLoginDefaultRepository oneTapLoginLastLogoutTimestamp] */

void FUN_10af4e3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e86d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginLastLogoutTimestampFo_112617bc8,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e3e4; end: 10af4e3ef; -[SCOneTapLoginDefaultRepository setOneTapLoginLastLogoutTimestamp:] */

void FUN_10af4e3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginLastLogoutTimestam_112652c88,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e3f0; end: 10af4e3fb; -[SCOneTapLoginDefaultRepository oneTapLoginLastEmitTimestamp] */

void FUN_10af4e3f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginLastEmitTimestampForU_112617bb8,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e3fc; end: 10af4e407; -[SCOneTapLoginDefaultRepository setOneTapLoginLastEmitTimestamp:] */

void FUN_10af4e3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginLastEmitTimestamp__112652c78,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e408; end: 10af4e413; -[SCOneTapLoginDefaultRepository oneTapLoginOptInSource] */

void FUN_10af4e408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginOptInSourceForUserId__112617be8,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e414; end: 10af4e41f; -[SCOneTapLoginDefaultRepository setOneTapLoginOptInSource:] */

void FUN_10af4e414(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginOptInSource_forUse_112652c98,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e420; end: 10af4e42b; -[SCOneTapLoginDefaultRepository oneTapLoginBitmojiUsernameStudyName] */

void FUN_10af4e420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginBitmojiUsernameStudyN_112617b68,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e42c; end: 10af4e437; -[SCOneTapLoginDefaultRepository setOneTapLoginBitmojiUsernameStudyName:] */

void FUN_10af4e42c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d48f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginBitmojiUsernameStu_112652c60,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e438; end: 10af4e443; -[SCOneTapLoginDefaultRepository oneTapLoginBitmojiUsernameExperimentId] */

void FUN_10af4e438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_oneTapLoginBitmojiUsernameExperi_112617b58,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e444; end: 10af4e44f; -[SCOneTapLoginDefaultRepository setOneTapLoginBitmojiUsernameExperimentId:] */

void FUN_10af4e444(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d48b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setOneTapLoginBitmojiUsernameExp_112652c50,
             param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af4e450; end: 10af4e517; -[SCOneTapLoginDefaultRepository removeAccount] */

void FUN_10af4e450(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1d4a80(param_1,param_2,0);
  func_0x00010c1d47c0(param_1);
  func_0x00010c1d4800(param_1);
  func_0x00010c1d4840(param_1);
  func_0x00010bf3c400(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e8840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c31910();
  func_0x00010c1d4a60(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af4e518; end: 10af4e53b;  */

uint FUN_10af4e518(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return (uint)param_2 ^ 1;
}



/* Entry: 10af4e53c; end: 10af4e5a7; -[SCOneTapLoginDefaultRepository clearToken] */

void FUN_10af4e53c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c420();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c420();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d4af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setOneTapLoginV3TokenExpiry__112652ce0,0);
  return;
}



/* Entry: 10af4e5a8; end: 10af4e5ef; -[SCOneTapLoginDefaultRepository .cxx_destruct] */

void FUN_10af4e5a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4e5f0; end: 10af4e71f; -[SCOneTapLoginArchiveTokenManager initWithArchiveUtils:archivePath:] */

undefined1 *
FUN_10af4e5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112702b38;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c187d60(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af4e720; end: 10af4e877; -[SCOneTapLoginArchiveTokenManager tokenForUserId:] */

void FUN_10af4e720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf60660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  func_0x00010bf60660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10af4e878; end: 10af4e8ab;  */

void FUN_10af4e878(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af4e8ac; end: 10af4ea23; -[SCOneTapLoginArchiveTokenManager setWithNewToken:userId:] */

void FUN_10af4e8ac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf60660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = param_3;
      func_0x00010bf51e00();
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_4);
      _objc_retain(uVar5);
      func_0x00010c0f8240(uVar6);
      _objc_release(uVar5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar5);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af4ea24; end: 10af4ea9b;  */

void FUN_10af4ea24(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf60660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af4ea9c; end: 10af4eb73; -[SCOneTapLoginArchiveTokenManager clearTokenForUserId:] */

void FUN_10af4ea9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10af4eb74; end: 10af4ebe7;  */

void FUN_10af4eb74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf60660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af4ebe8; end: 10af4ebf3; -[SCOneTapLoginArchiveTokenManager token] */

void FUN_10af4ebe8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2730b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_tokenForUserId__11267a650,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10af4ebf4; end: 10af4ebff; -[SCOneTapLoginArchiveTokenManager clearToken] */

void FUN_10af4ebf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_clearTokenForUserId__1125acab0,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10af4ec00; end: 10af4ecc7; -[SCOneTapLoginArchiveTokenManager _loadAuthTokenWithUserId:] */

void FUN_10af4ec00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf60660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_1;
    func_0x00010be86500(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af4ecc8; end: 10af4ed83; -[SCOneTapLoginArchiveTokenManager _readFromArchiveWithUserId:] */

void FUN_10af4ecc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf200(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09bd60(uVar2,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af4ed84; end: 10af4ee57; -[SCOneTapLoginArchiveTokenManager _writeCurrentTokenToArchiveWithUserId:] */

undefined * FUN_10af4ed84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf200(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010c14aa80(puVar1,param_2,uVar3,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10af4ee58; end: 10af4ef03; -[SCOneTapLoginArchiveTokenManager _archiveUtilsStoragePathWithUserId:] */

void FUN_10af4ee58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    _objc_retain(puVar2);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f5a40(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af4ef04; end: 10af4ef0f; -[SCOneTapLoginArchiveTokenManager currentTokenForUserId] */

void FUN_10af4ef04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}


