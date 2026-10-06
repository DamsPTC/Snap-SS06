/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105932410; end: 10593246f;  */

void FUN_105932410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c26cfc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105932470; end: 105932507; -[SCFideliusIdentityService _batchHandshake:forUser:] */

void FUN_105932470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105932508;
  puStack_48 = &UNK_1108c0a30;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105932508; end: 1059325cb;  */

void FUN_105932508(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c298be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c0388;
  if (lVar2 < 9) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be61be0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3660(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059325cc; end: 105932663; -[SCFideliusIdentityService _batchHandshakeV2:forUser:] */

void FUN_1059325cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105932664;
  puStack_48 = &UNK_1108c0a60;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105932664; end: 1059327a3;  */

void FUN_105932664(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c298be0();
  puVar5 = PTR_PTR_1126c0388;
  if (uVar1 < 9) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c11a480(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8420(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126c03f8;
    _objc_alloc(PTR_PTR_1126c03f8);
    func_0x00010c298be0(param_2);
    func_0x00010c0326c0(puVar3);
    puVar5 = PTR_PTR_1126c0388;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be61be0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3680(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1059327a4; end: 10593287f; -[SCFideliusIdentityService hasKeysForFriendUserId:] */

undefined1 FUN_1059327a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105932880; end: 105932927;  */

void FUN_105932880(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c291b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb7fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb8040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105932928; end: 10593299b; -[SCFideliusIdentityService _removeFriendId:] */

void FUN_105932928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c291b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf659e0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10593299c; end: 1059329c3; -[SCFideliusIdentityService _myBeta] */

void FUN_10593299c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059329c4; end: 105932cd3; -[SCFideliusIdentityService _processFriendKeysV2:] */

void FUN_1059329c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_3);
  lStack_238 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_f0,0x10);
  lVar11 = 0;
  if (lStack_238 != 0) {
    lVar8 = *plStack_1e0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1e0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_1e8 + lVar9 * 8);
        lVar2 = lVar13;
        func_0x00010bfb8020(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf529e0();
        _objc_release(lVar2);
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        lStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        plStack_220 = (long *)0x0;
        func_0x00010bfb8020();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar10 = *plStack_220;
          do {
            lVar12 = 0;
            do {
              if (*plStack_220 != lVar10) {
                _objc_enumerationMutation(lVar13);
              }
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              uVar4 = *(undefined8 *)(lStack_228 + lVar12 * 8);
              func_0x00010c298be0(uVar4);
              func_0x00010c0df880(puVar5,param_2,uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1,param_2,puVar5);
              _objc_release(puVar5);
              lVar12 = lVar12 + 1;
            } while (lVar2 != lVar12);
            lVar2 = lVar13;
            func_0x00010bf52a60(lVar13,param_2,&uStack_230,auStack_170,0x10);
          } while (lVar2 != 0);
        }
        lVar11 = lVar3 + lVar11;
        _objc_release(lVar13);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lStack_238);
      lStack_238 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_f0,0x10);
    } while (lStack_238 != 0);
  }
  _objc_release(param_3);
  func_0x00010bdd2e60(param_1,param_2,param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_190 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110dab0d8;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e0f198;
  lVar8 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c0df840(puVar5,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e0f1b8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_188 = puVar5;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e0f1d8;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_180 = puVar6;
  puStack_178 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_190,&ppuStack_1b0,4)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x00010be61a20(*(undefined8 *)(param_3 + 0x20),param_2,*(undefined8 *)(param_3 + 0x28));
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010be81280(uVar4,param_2,*(undefined8 *)(param_3 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar11 = *(long *)(param_3 + 0x20);
  func_0x00010be61be0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar1,param_2,lVar11 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,puVar1,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_release(puVar1);
  _objc_release(lVar11);
  func_0x00010c0a92a0(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18),param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105932cd4; end: 105932d9b;  */

void FUN_105932cd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010be61a20(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be81280(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010be61be0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar3,param_2,lVar2 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010c0a92a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105932d9c; end: 105932f47; -[SCFideliusIdentityService processKeysFromSync:completion:] */

void FUN_105932d9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
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
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07bc60();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if ((int)lVar2 == 0) {
    puVar3 = auStack_88;
    _objc_copyWeak(puVar3,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_4);
    uVar4 = param_3;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105932f48;
    puStack_68 = &UNK_110848378;
    puVar3 = auStack_50;
    _objc_copyWeak(puVar3,auStack_48);
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uStack_58);
    uVar4 = uStack_60;
  }
  _objc_release(uVar4);
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105932f48; end: 105932faf;  */

void FUN_105932f48(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be810e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105932fb0; end: 105933007; -[SCFideliusIdentityService deleteAllFriends] */

void FUN_105932fb0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105933008;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x60),param_2,&puStack_38);
  return;
}



/* Entry: 105933008; end: 10593306b;  */

void FUN_105933008(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c291b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf659a0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10593306c; end: 10593307b;  */

void FUN_10593306c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be810f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processFetchFriendKeysFromSync__11257ddd8,
             param_2,param_3);
  return;
}



/* Entry: 10593307c; end: 10593320b; -[SCFideliusIdentityService _mutateSnapchatters:] */

void FUN_10593307c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105933164;
  puStack_40 = &UNK_1108c0ac0;
  _objc_retain(param_3);
  lVar2 = lVar1;
  lStack_38 = param_3;
  func_0x000100504554(lVar1,&puStack_58);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b740();
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(lStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10593320c; end: 105933273; -[SCFideliusIdentityService _mutateSnapchattersV2:] */

void FUN_10593320c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c0b10);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b740();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105933274; end: 105933283;  */

void FUN_105933274(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010becc870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c04a8,PTR_s__toSCFideliusFriendMetadata__112590bc0,param_2);
  return;
}



/* Entry: 105933284; end: 10593336f; -[SCFideliusIdentityService _processFetchFriendKeysFromSync:completion:] */

void FUN_105933284(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be81280(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010be61be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar3,param_2,lVar2 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e0f218);
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010c0a92a0(*(undefined8 *)(param_1 + 0x18),param_2,lVar1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105933370; end: 1059333ff; -[SCFideliusIdentityService processFideliusFriendMetadataUpdateData:] */

void FUN_105933370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105933400;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105933400; end: 10593340b;  */

void FUN_105933400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be811f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processFideliusFriendMetadataUp_11257de18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10593340c; end: 105933543; -[SCFideliusIdentityService _processFideliusFriendMetadataUpdateData:] */

void FUN_10593340c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30f2a3;
  func_0x0001000ba800(&UNK_10f30f2a3);
  uVar3 = param_3;
  func_0x00010c244b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105933544;
  puStack_68 = &UNK_1108c0b30;
  _objc_retain(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10593357c;
  puStack_98 = &UNK_1108c0b60;
  uStack_90 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_1;
  _objc_retain(param_3);
  uStack_88 = param_3;
  func_0x00010c0bdd00(uVar3,param_2,&puStack_80,&puStack_b0,&PTR___NSConcreteGlobalBlock_1108c0bb0,
                      &PTR___NSConcreteGlobalBlock_1108c0bf0);
  _objc_release(uVar3);
  _objc_release(uStack_88);
  _objc_release(uStack_60);
  func_0x0001000e2a84(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105933544; end: 10593357b;  */

void FUN_105933544(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c074080();
  if ((uVar1 & 1) == 0) {
    func_0x00010be5d740(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be810d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__processFetchFideliusFriendMetad_11257ddd0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10593357c; end: 105933607;  */

void FUN_10593357c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf0a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010bf0a620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010be80cc0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    func_0x00010be5d740(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be80420(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105933608; end: 10593360f;  */

void FUN_105933608(void)

{
  return;
}



/* Entry: 105933610; end: 1059337b3; -[SCFideliusIdentityService _processFetchFideliusFriendMetadataUpdateData:] */

void FUN_105933610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30f33a;
  func_0x0001000ba800(&UNK_10f30f33a);
  _objc_initWeak(auStack_48,param_1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c07bc60();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if ((int)lVar3 == 0) {
    _objc_copyWeak(auStack_80,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1059337b4;
    puStack_60 = &UNK_110841fb0;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_58);
  }
  _objc_destroyWeak(auStack_48);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1059337b4; end: 1059338a3;  */

void FUN_1059337b4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244b00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf0a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf0a6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf7ec60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c074080();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (iVar1 == 0) {
    func_0x00010be811c0();
  }
  else {
    func_0x00010be87300();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1059338a4; end: 1059338d7;  */

void FUN_1059338a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059338d8; end: 105933a3f; -[SCFideliusIdentityService _processAddFideliusFriendMetadataUpdateData:] */

void FUN_1059338d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07bc60();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if ((int)lVar2 == 0) {
    puVar3 = auStack_70;
    _objc_copyWeak(puVar3,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar4);
    uVar4 = param_3;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105933a40;
    puStack_50 = &UNK_110841fb0;
    puVar3 = auStack_40;
    _objc_copyWeak(puVar3,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c0f7fc0(uVar4);
    uVar4 = uStack_48;
  }
  _objc_release(uVar4);
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105933a40; end: 105933acf;  */

void FUN_105933a40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf7ec60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be811c0(lVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e0f2f8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105933ad0; end: 105933c97; -[SCFideliusIdentityService _processDeleteFideliusFriendMetadataUpdateData:] */

void FUN_105933ad0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf7ec60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c07bc60();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    if ((int)lVar2 == 0) {
      puVar4 = auStack_80;
      _objc_copyWeak(puVar4,auStack_48);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(uVar5);
      lVar1 = param_3;
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105933c98;
      puStack_60 = &UNK_110841fb0;
      puVar4 = auStack_50;
      _objc_copyWeak(puVar4,auStack_48);
      _objc_retain(lVar3);
      lStack_58 = lVar3;
      func_0x00010c0f7fc0(uVar5);
      lVar1 = lStack_58;
    }
    _objc_release(lVar1);
    _objc_destroyWeak(puVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105933c98; end: 105933cff;  */

void FUN_105933c98(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105933d00; end: 105933d07; -[SCFideliusIdentityService _addUnProcessedFideliusFriendMetadataUpdateData:] */

void FUN_105933d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 105933d08; end: 105933d63; -[SCFideliusIdentityService _addUnProcessedGrpcFriendsKeys:completion:] */

void FUN_105933d08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  _objc_retainBlock(param_4);
  func_0x00010c1d0560(uVar1,param_2,param_4,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105933d64; end: 105933de7; -[SCFideliusIdentityService _markProcessFriendMetadataUpdateInProgress:] */

void FUN_105933d64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000ba800(&UNK_10f30f3ae);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b7e0();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105933de8; end: 105933f3f;  */

void FUN_105933de8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfac660();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010befffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010be864e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = PTR_PTR_1126c0388;
    func_0x00010bf7ed40(PTR_PTR_1126c0388,param_2,uVar3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    puVar7 = puVar6;
    func_0x00010bf529e0();
    func_0x00010c0a6f20(uVar2,param_2,puVar7);
    lVar4 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar8 = lVar4;
    func_0x00010c07bc60();
    _objc_release(lVar4);
    if ((int)lVar8 != 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be811c0();
      _objc_release(param_1);
    }
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105933f40; end: 1059343cb;  */

void FUN_105933f40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar16 = lVar1;
    func_0x00010c07bc60();
    _objc_release(lVar1);
    if ((int)lVar16 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010befffa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar1 = param_1;
      func_0x00010be864e0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR_PTR_1126c0388;
      func_0x00010bf7ed40(PTR_PTR_1126c0388,param_2,uVar3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      _objc_retain(puVar19);
      puVar5 = puVar19;
      func_0x00010bf52a60(puVar19,param_2,&uStack_1b0,auStack_f0,0x10);
      if (puVar5 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar20 = (undefined *)0x0;
        lVar16 = *plStack_1a0;
        do {
          puVar18 = (undefined *)0x0;
          do {
            if (*plStack_1a0 != lVar16) {
              _objc_enumerationMutation(puVar19);
            }
            puVar6 = puVar19;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010bf71280();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf529e0();
            _objc_release(puVar7);
            puVar7 = puVar4;
            func_0x00010bf529e0();
            if (puVar7 < (undefined *)0x5) {
              puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              lStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1d8 = 0;
              plStack_1e0 = (long *)0x0;
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1b8 = 0;
              uStack_1c0 = 0;
              puVar9 = puVar6;
              func_0x00010bf71280();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010bf52a60();
              if (puVar10 != (undefined *)0x0) {
                lVar21 = *plStack_1e0;
                do {
                  puVar22 = (undefined *)0x0;
                  do {
                    if (*plStack_1e0 != lVar21) {
                      _objc_enumerationMutation(puVar9);
                    }
                    puVar11 = PTR_PTR_1126c0388;
                    uVar2 = *(undefined8 *)(lStack_1e8 + (long)puVar22 * 8);
                    func_0x00010c0ee500(uVar2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c12c580(puVar11,param_2,uVar2);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar2);
                    puVar12 = PTR_PTR_1126c0388;
                    func_0x00010bff6b40(PTR_PTR_1126c0388,param_2,puVar11,
                                        &PTR____CFConstantStringClassReference_110e0f378);
                    _objc_retainAutoreleasedReturnValue();
                    puVar13 = PTR_PTR_1126c0480;
                    func_0x00010c272440(PTR_PTR_1126c0480,param_2,puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0b4ca0();
                    _objc_release(puVar13);
                    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                        &PTR____CFConstantStringClassReference_110db3bb8);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar7,param_2,puVar13);
                    _objc_release(puVar13);
                    _objc_release(puVar12);
                    _objc_release(puVar11);
                    puVar22 = puVar22 + 1;
                  } while (puVar10 != puVar22);
                  puVar10 = puVar9;
                  func_0x00010bf52a60(puVar9,param_2,&uStack_1f0,auStack_170,0x10);
                } while (puVar10 != (undefined *)0x0);
              }
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c04a0;
              _objc_opt_new(PTR_PTR_1126c04a0);
              func_0x00010c21e620();
              puVar10 = puVar7;
              func_0x00010bf446e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1dc140(puVar9,param_2,puVar10);
              _objc_release(puVar10);
              func_0x00010befa120(puVar4,param_2,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar7);
            }
            puVar20 = puVar8 + (long)puVar20;
            _objc_release(puVar6);
            puVar18 = puVar18 + 1;
          } while (puVar18 != puVar5);
          puVar5 = puVar19;
          func_0x00010bf52a60(puVar19,param_2,&uStack_1b0,auStack_f0,0x10);
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar19);
      uVar17 = *(undefined8 *)(param_1 + 0x18);
      puVar5 = puVar19;
      func_0x00010bf529e0();
      uVar2 = uVar3;
      func_0x00010bf529e0();
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bfac660();
      func_0x00010c0a6d60(uVar17,param_2,puVar5,uVar2,puVar20,uVar15,puVar4);
      _objc_release(uVar14);
      _objc_release(puVar4);
      _objc_release(puVar19);
      _objc_release(lVar1);
      _objc_release(uVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      lVar1 = param_1;
      func_0x00010c291b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar1;
      func_0x00010bfb7fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar16;
      func_0x00010bf000a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      _objc_release(lVar1);
      puVar19 = PTR_PTR_1126c0388;
      func_0x00010bfb8000(PTR_PTR_1126c0388,param_2,lVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar21);
    }
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return;
  }
  return;
}



/* Entry: 1059343cc; end: 105934477; -[SCFideliusIdentityService _readFriendKeysFromFideliusDb] */

void FUN_1059343cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c291b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb7fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf000a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c0388;
    func_0x00010bfb8000(PTR_PTR_1126c0388,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105934478; end: 10593461f; -[SCFideliusIdentityService _diffMapFromComparingFriendDb:withFideliusDb:] */

void FUN_105934478(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      if ((uVar6 & 1) == 0) {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(lVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x68,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + 8);
  return;
}



/* Entry: 105934620; end: 1059346cf; -[SCFideliusIdentityService .cxx_destruct] */

void FUN_105934620(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1059346d0; end: 105934797; -[SCFideliusLocalKVStore initWithDelegate:maxCapacity:] */

undefined1 * FUN_1059346d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eaf58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c04c8;
    _objc_alloc(PTR_PTR_1126c04c8);
    func_0x00010c028d80();
    func_0x00010c1b7180(puVar1);
    _objc_release(puVar2);
    func_0x00010c220e20(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0874a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105934798; end: 105934817; -[SCFideliusLocalKVStore encodeWithCoder:] */

void FUN_105934798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0874a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e0f398);
  _objc_release(uVar1);
  func_0x00010c298be0(param_1);
  func_0x00010bf92fc0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110dd8fd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105934818; end: 105934823; -[SCFideliusLocalKVStore .cxx_destruct] */

void FUN_105934818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105934824; end: 1059348a7; -[SCFideliusLocalKVStoreData initWithTimestamp:encryptedIdentity:] */

undefined1 *
FUN_105934824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaf60;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1059348a8; end: 10593491b; -[SCFideliusLocalKVStoreData encodeWithCoder:] */

void FUN_1059348a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2709c0(param_1);
  func_0x00010bf92e80(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1558);
  func_0x00010bf93b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e0f3b8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10593491c; end: 105934a0f; -[SCFideliusLocalKVStoreData isEqual:] */

ulong FUN_10593491c(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  if (param_2 == param_4) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126c0490;
    _objc_opt_class(PTR_PTR_1126c0490);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      _objc_retain(param_4);
      func_0x00010c2709c0(param_2);
      dVar4 = param_1;
      func_0x00010c2709c0(param_4);
      if (param_1 == dVar4) {
        func_0x00010bf93b20(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010bf93b20(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_2;
        func_0x00010c071cc0(param_2);
        _objc_release(uVar2);
        _objc_release(param_2);
      }
      else {
        uVar3 = 0;
      }
      _objc_release(param_4);
    }
  }
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 105934a10; end: 105934a8b; -[SCFideliusLocalKVStoreData hash] */

ulong FUN_105934a10(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2709c0();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  func_0x00010bf93b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  _objc_release(puVar1);
  return uVar3 ^ (ulong)puVar2;
}



/* Entry: 105934a8c; end: 105934a93; -[SCFideliusLocalKVStoreData timestamp] */

undefined8 FUN_105934a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105934a94; end: 105934a9b; -[SCFideliusLocalKVStoreData encryptedIdentity] */

undefined8 FUN_105934a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105934a9c; end: 105934aa7; -[SCFideliusLocalKVStoreData .cxx_destruct] */

void FUN_105934a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105934aa8; end: 105934adb; -[SCFideliusLocalKVStoreDictionary initWithMaxSize:] */

void FUN_105934aa8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf68;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithMaxSize__1125e7d48);
  return;
}



/* Entry: 105934adc; end: 105934b23; -[SCFideliusLocalKVStoreDictionary onAdd:countBefore:] */

void FUN_105934adc(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e26e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105934b24; end: 105934b73; -[SCFideliusLocalKVStoreDictionary onPurge:] */

void FUN_105934b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5d20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105934b74; end: 105934ba3; -[SCFideliusLocalKVStoreDictionary onOrderUpdated] */

void FUN_105934b74(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105934ba4; end: 105934bd7; -[SCFideliusLocalKVStoreDictionary encodeWithCoder:] */

void FUN_105934ba4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf68;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_encodeWithCoder__1125c2658);
  return;
}



/* Entry: 105934bd8; end: 105934bf7; -[SCFideliusLocalKVStoreDictionary delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105934bd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272c578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105934bf8; end: 105934c07; -[SCFideliusLocalKVStoreDictionary .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105934bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272c578);
  return;
}



/* Entry: 105934c08; end: 105934dcf; -[SCFideliusLocalKVStoreManager ubiquitousKeyValueStoreDidChange:] */

void FUN_105934c08(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010beb5260();
  if ((int)lVar2 == 0) goto LAB_105934db8;
  lVar2 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,
                        *(undefined8 *)PTR__NSUbiquitousKeyValueStoreChangeReasonKey_110345648);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = lVar2;
      func_0x00010c0e00e0(lVar2,param_2,
                          *(undefined8 *)PTR__NSUbiquitousKeyValueStoreChangedKeysKey_110345650);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c067ec0();
      iVar1 = (int)lVar5;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a3140();
          _objc_release(uVar6);
          lVar5 = lVar4;
          func_0x00010bf4b900(lVar4,param_2,&PTR____CFConstantStringClassReference_110e0f3f8);
          if ((int)lVar5 != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e0f458;
LAB_105934d6c:
            func_0x00010be862e0(param_1,param_2,ppuVar7);
          }
        }
        else if (iVar1 == 1) {
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a3140();
          _objc_release(uVar6);
          lVar5 = lVar4;
          func_0x00010bf4b900(lVar4,param_2,&PTR____CFConstantStringClassReference_110e0f3f8);
          if ((int)lVar5 != 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e0f438;
            goto LAB_105934d6c;
          }
        }
      }
      else {
        if (iVar1 == 2) {
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (iVar1 != 3) goto LAB_105934da0;
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c0a3140();
        _objc_release(uVar6);
      }
LAB_105934da0:
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_105934db8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105934dd0; end: 105934ff7; -[SCFideliusLocalKVStoreManager putUserIdentityWithEncryption:] */

bool FUN_105934dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  uVar7 = param_3;
  func_0x00010c085320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20(puVar2,param_2,uVar7,0);
  _objc_release(uVar7);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x20) {
    puVar3 = puVar2;
    func_0x00010c25eac0(puVar2,param_2,0,0x10);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be09420(param_1,param_2,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0874a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      func_0x00010c0a9240(uVar5,param_2,0,&PTR____CFConstantStringClassReference_110e0f4f8,
                          &PTR____CFConstantStringClassReference_110e0f4d8,uVar7);
      _objc_release(uVar6);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 8);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105934ff8;
      puStack_70 = &UNK_110848ba8;
      lStack_68 = param_1;
      _objc_retain(param_3);
      uStack_60 = param_3;
      _objc_retain(lVar4);
      lStack_58 = lVar4;
      func_0x00010c0f7fc0(uVar7,param_2,&puStack_88);
      _objc_release(lStack_58);
      uVar5 = uStack_60;
    }
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0874a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf529e0();
    func_0x00010c0a9240(uVar5,param_2,0,&PTR____CFConstantStringClassReference_110e0f4b8,
                        &PTR____CFConstantStringClassReference_110e0f4d8,uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    bVar1 = false;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105934ff8; end: 1059350d3;  */

void FUN_105934ff8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c0490;
  _objc_alloc(PTR_PTR_1126c0490);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c052920(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09dac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0874a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdebe0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be994f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveLocalKVStore_112583ed8);
  return;
}



/* Entry: 1059350d4; end: 105935203; -[SCFideliusLocalKVStoreManager getUserIdentityWithHashedKey:Iwek:] */

void FUN_1059350d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  puStack_58 = &UNK_1007987e4;
  puStack_50 = &UNK_1007989a4;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105935204; end: 105935463;  */

void FUN_105935204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09dac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0874a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c08fa60();
  if (lVar3 == 0x20) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c25eac0(uVar1,param_2,0,0x10);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = uVar2;
    func_0x00010bf93b20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf89e0(uVar7,param_2,uVar5,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar5);
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar8 != 0) {
      func_0x00010c09dac0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010c0874a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010bf529e0();
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      func_0x00010c298be0(uVar5);
      func_0x00010c0a7e20(uVar7,param_2,1,9999,lVar4,
                          &PTR____CFConstantStringClassReference_110e0f558,uVar5,10);
      _objc_release(lVar8);
      _objc_release(lVar3);
      _objc_release(uVar7);
      func_0x00010c220e20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),param_2,
                          10);
      goto LAB_105935440;
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x38);
    func_0x00010c0874a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf529e0();
    func_0x00010c0a9200(uVar7,param_2,0,&PTR____CFConstantStringClassReference_110e0f538,
                        &PTR____CFConstantStringClassReference_110e0f518,uVar5);
    _objc_release(uVar6);
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c0874a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf529e0();
    func_0x00010c0a9200(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e0f4b8,
                        &PTR____CFConstantStringClassReference_110e0f518,uVar5);
  }
  _objc_release(uVar7);
LAB_105935440:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105935464; end: 10593548f; -[SCFideliusLocalKVStoreManager latestHashedPublicKeys] */

void FUN_105935464(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be862e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f578);
                    /* WARNING: Could not recover jumptable at 0x00010bfded90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hashedPublicKeys_1125d5520);
  return;
}



/* Entry: 105935490; end: 1059354d3; -[SCFideliusLocalKVStoreManager _encodeKVStore:] */

void FUN_105935490(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010b7392a8();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    _objc_retain(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1059354d4; end: 10593553b; -[SCFideliusLocalKVStoreManager _decodeKVStore:] */

void FUN_1059354d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000100408474();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c0488;
  _objc_opt_class(PTR_PTR_1126c0488);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar2 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10593553c; end: 1059356e3; -[SCFideliusLocalKVStoreManager _readAndMergeKVStoreFromCloudFromSource:] */

void FUN_10593553c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1059355cc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059356e4; end: 1059358f7; -[SCFideliusLocalKVStoreManager _mergeKVStoreFromCloud:] */

void FUN_1059356e4(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *unaff_x21;
  undefined8 uVar8;
  undefined1 *unaff_x22;
  long lVar9;
  undefined1 *puVar10;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  puVar2 = param_3;
  func_0x00010bde1860();
  if ((uVar1 & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x22 = param_3;
    func_0x00010c0874a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x22;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    puVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(unaff_x21);
          }
          uVar1 = param_1;
          func_0x00010c09dac0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c0874a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar3);
          _objc_release(uVar1);
          if (uVar4 == 0) {
            puVar5 = param_3;
            func_0x00010c0874a0(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            uVar1 = param_1;
            func_0x00010c09dac0(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar1;
            func_0x00010c0874a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640();
            _objc_release(uVar3);
            _objc_release(uVar1);
            _objc_release(puVar6);
          }
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = unaff_x21;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x22 = (undefined1 *)0x0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(unaff_x21);
    func_0x00010be994e0(param_1);
    puVar2 = (undefined1 *)puVar7;
  }
  puVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1059358f8;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  uStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  uVar8 = *(undefined8 *)(puVar10 + 8);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_105935988;
  puStack_178 = &UNK_110841f80;
  puStack_170 = puVar2;
  puStack_168 = puVar10;
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar8,param_2,&puStack_190);
  _objc_release(puStack_170);
  _objc_release(puVar2);
  return;
}



/* Entry: 1059358f8; end: 105935987; -[SCFideliusLocalKVStoreManager _mergeKVStoreFromLocalBackfill:] */

void FUN_1059358f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105935988;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105935988; end: 105935b77;  */

void FUN_105935988(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x22;
  long lVar11;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0874a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar8 = lVar2;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar1 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        unaff_x22 = *(undefined8 *)(lStack_128 + lVar1 * 8);
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x00010c09dac0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0874a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar5 == 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0874a0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c09dac0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010c0874a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(uVar6);
          _objc_release(uVar7);
          _objc_release(uVar10);
        }
        lVar1 = lVar1 + 1;
      } while (lVar8 != lVar1);
      lVar8 = lVar2;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
      lVar1 = 0;
    } while (lVar8 != 0);
  }
  _objc_release(lVar2);
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010be994e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105935b78;
  uStack_160 = unaff_x22;
  lStack_158 = lVar1;
  lStack_150 = lVar2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  uVar10 = *(undefined8 *)(lVar8 + 8);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_105935c08;
  puStack_178 = &UNK_110841f80;
  lStack_170 = lVar8;
  puStack_168 = (undefined1 *)puVar9;
  _objc_retain(puVar9);
  func_0x00010c0f7fc0(uVar10,param_2,&puStack_190);
  _objc_release(puStack_168);
  _objc_release(puVar9);
  return;
}



/* Entry: 105935b78; end: 105935c07; -[SCFideliusLocalKVStoreManager _uploadCloudKVStoreFromSource:] */

void FUN_105935b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105935c08;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105935c08; end: 105935ddf;  */

void FUN_105935c08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c09dac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c0874a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar2 < 1) {
    lVar9 = *(long *)(lVar9 + 0x18);
    func_0x00010c269d40(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a9220();
  }
  else {
    lVar2 = lVar9;
    func_0x00010c09dac0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be09360(lVar9,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar9 == 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c09dac0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0874a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      ppuVar8 = &PTR____CFConstantStringClassReference_110e0f5f8;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8;
      func_0x00010bf6a580(PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1894c0();
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c09dac0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0874a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      ppuVar8 = (undefined **)0x0;
    }
    func_0x00010c0a9220(uVar4,param_2,lVar9 != 0,ppuVar8,uVar10,uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 105935de0; end: 105935ebb; -[SCFideliusLocalKVStoreManager userEncryptedDataExistsForHashedPublicKey:] */

undefined1 FUN_105935de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105935ebc; end: 105935f3f;  */

void FUN_105935ebc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c09dac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0874a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = lVar3 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105935f40; end: 105935faf; -[SCFideliusLocalKVStoreManager updateOnNewIdentity:kvStoreForBackfill:] */

void FUN_105935f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  
  _objc_retain(param_4);
  func_0x00010c11ca20(param_1,param_2,param_3);
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e0f678;
  }
  else {
    func_0x00010be5f920(param_1,param_2,param_4);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e0f658;
  }
  func_0x00010bee5740(param_1,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105935fb0; end: 105935fc7; -[SCFideliusLocalKVStoreManager _shouldReadKVStoreFromNotification] */

void FUN_105935fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e0f418,1,0);
  return;
}



/* Entry: 105935fc8; end: 10593609f; -[SCFideliusLocalKVStoreManager _cloudKVStoreHashedKeysMatch:] */

undefined * FUN_105935fc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010be34b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c09dac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be34b40(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c072060(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
  return puVar5;
}



/* Entry: 1059360a0; end: 10593614b; -[SCFideliusLocalKVStoreManager _encrypt:key:] */

void FUN_1059360a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0x10) {
    lVar1 = param_3;
    func_0x00010b7392a8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_4;
      func_0x00010bcb41bc(param_4,lVar1,0,0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10593614c; end: 105936237; -[SCFideliusLocalKVStoreManager _decrypt:key:] */

void FUN_10593614c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010c08fa60();
  if (uVar4 == 0x10) {
    uVar1 = param_4;
    func_0x00010bcb4460(param_4,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x000100408474();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c03c8;
      _objc_opt_class(PTR_PTR_1126c03c8);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        _objc_retain(uVar2);
        uVar4 = uVar2;
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105936238; end: 1059362e3; -[SCFideliusLocalKVStoreManager _initFields] */

long FUN_105936238(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0488;
  _objc_alloc(PTR_PTR_1126c0488);
  func_0x00010c00aa20();
  lVar2 = param_1;
  func_0x00010bee7a60(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e0ed38);
  if ((int)lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7580();
    _objc_release(uVar3);
  }
  else {
    func_0x00010c1bf180(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  return lVar2;
}



/* Entry: 1059362e4; end: 105936397; -[SCFideliusLocalKVStoreManager _deleteLocalKVStore] */

void FUN_1059362e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd030;
  func_0x00010bfac520(PTR_PTR_1126bd030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c12c5e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b23c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105936398; end: 1059364a7; -[SCFideliusLocalKVStoreManager _saveLocalKVStore] */

undefined8 FUN_105936398(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010c09dac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bee7a60(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110e0ebf8);
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126b85c8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c09dac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd030;
    func_0x00010bfac520(PTR_PTR_1126bd030);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c14aa80(puVar3,param_2,lVar1,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
      return 1;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
    _objc_release(uVar6);
  }
  return 0;
}



/* Entry: 1059364a8; end: 1059364ff; -[SCFideliusLocalKVStoreManager forceSave] */

void FUN_1059364a8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105936500;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 105936500; end: 105936507;  */

void FUN_105936500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be994f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveLocalKVStore_112583ed8);
  return;
}



/* Entry: 105936508; end: 10593655f; -[SCFideliusLocalKVStoreManager forceLoad] */

void FUN_105936508(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105936560;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 105936560; end: 105936593;  */

void FUN_105936560(long param_1,undefined8 param_2)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  func_0x00010c1bf180(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be4dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__loadLocal_1125710d8)
  ;
  return;
}



/* Entry: 105936594; end: 1059365eb; -[SCFideliusLocalKVStoreManager forceDelete] */

void FUN_105936594(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1059365ec;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1059365ec; end: 1059365f3;  */

void FUN_1059365ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteLocalKVStore_11255c258);
  return;
}



/* Entry: 1059365f4; end: 10593664b; -[SCFideliusLocalKVStoreManager forceUpload] */

void FUN_1059365f4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10593664c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10593664c; end: 10593674f;  */

void FUN_10593664c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar6;
  func_0x00010c09dac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be09360(uVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8;
  func_0x00010bf6a580(PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1894c0();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09dac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0874a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf529e0();
  func_0x00010c0a9220(uVar3,param_2,1,0,&PTR____CFConstantStringClassReference_110e0f738,uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105936750; end: 105936753; -[SCFideliusLocalKVStoreManager onAdd:countBefore:] */

void FUN_105936750(void)

{
  return;
}



/* Entry: 105936754; end: 105936757; -[SCFideliusLocalKVStoreManager onPurge:] */

void FUN_105936754(void)

{
  return;
}



/* Entry: 105936758; end: 10593675b; -[SCFideliusLocalKVStoreManager onOrderUpdated] */

void FUN_105936758(void)

{
  return;
}



/* Entry: 10593675c; end: 1059367af; -[SCFideliusLocalKVStoreManager .cxx_destruct] */

void FUN_10593675c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059367b0; end: 10593696b; -[SCFideliusLoggedOutManager initWithDeviceGraphManager:identityArchiveManager:tempIdentityManager:circumstanceEngine:appStartExperimentReader:logger:] */

undefined1 *
FUN_1059367b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = &UNK_10f30f684;
  func_0x0001000ba800(&UNK_10f30f684);
  puStack_68 = PTR_PTR_1126eaf78;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126bd038;
    func_0x00010c0b3720();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_8;
    _objc_release(uVar4);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10593696c; end: 105936a5b; -[SCFideliusLoggedOutManager clientInitInfo] */

void FUN_10593696c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = &UNK_10f30f6ba;
  func_0x0001000ba800(&UNK_10f30f6ba);
  uVar2 = param_1;
  func_0x00010be34b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  func_0x00010becb0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfdebe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c04d0;
  _objc_alloc(PTR_PTR_1126c04d0);
  func_0x00010c050f20();
  _objc_release(param_1);
  _objc_release(uVar3);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105936a5c; end: 105936aeb; -[SCFideliusLoggedOutManager _hashedKeys] */

void FUN_105936a5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10f30f6e4;
  func_0x0001000ba800(&UNK_10f30f6e4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdeda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105936aec; end: 105936ce7; -[SCFideliusLoggedOutManager _tempIdentity] */

void FUN_105936aec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = &UNK_10f30f70a;
  func_0x0001000ba800(&UNK_10f30f70a);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf59620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1d8e0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1d900();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c085320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c298be0();
  puVar7 = PTR_PTR_1126c0480;
  uVar6 = uVar3;
  func_0x00010c0ee500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272440(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0b4ca0();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf706a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7e00(uVar4,param_2,2,1,0,0,0,uVar2,uVar5,puVar8,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = uVar3;
  FUN_105949cfc(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105936ce8; end: 105936d77; -[SCFideliusLoggedOutManager deviceIDBytes] */

void FUN_105936ce8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10f30f732;
  func_0x0001000ba800(&UNK_10f30f732);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf70640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105936d78; end: 105936de3; -[SCFideliusLoggedOutManager .cxx_destruct] */

void FUN_105936d78(long param_1)

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


