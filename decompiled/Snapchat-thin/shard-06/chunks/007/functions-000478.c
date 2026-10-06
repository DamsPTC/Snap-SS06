/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d1f9bc; end: 104d1fa2b; -[SCRegistrationUsernameSuggestionLogger logRegistrationNetworkRequestWithEndpoint:requestId:] */

void FUN_104d1f9bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d1fa2c; end: 104d1facb; -[SCRegistrationUsernameSuggestionLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:] */

void FUN_104d1fa2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adac0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d1facc; end: 104d1fad7; -[SCRegistrationUsernameSuggestionLogger .cxx_destruct] */

void FUN_104d1facc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d1fad8; end: 104d1fccb; -[SCRegistrationUsernameSuggestionServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1fad8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d1fccc;
  puStack_78 = &UNK_11084b0e0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_c0 = puVar3;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104d1fd0c;
  puStack_a8 = &UNK_11084b110;
  _objc_copyWeak(auStack_98,auStack_68);
  puStack_a0 = puVar1;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c8,auStack_68);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af800;
  _objc_alloc(PTR_PTR_1126af800);
  func_0x00010c05f840();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11271156c));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104d1fccc; end: 104d1fd9b;  */

void FUN_104d1fccc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d1fd9c; end: 104d1ff2b; -[SCRegistrationUsernameSuggestionServicesEntryPoint _createUsernameSuggestionFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1fd9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af808;
  _objc_alloc(PTR_PTR_1126af808);
  lVar3 = param_1 + _DAT_112711570;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c2623c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112711574;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f800(puVar2);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d1ff2c; end: 104d1ff6b;  */

void FUN_104d1ff2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d1ff6c; end: 104d20003; -[SCRegistrationUsernameSuggestionServicesEntryPoint _createUsernameAvailabilityChecker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1ff6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af810;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_112711570;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c2623c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f820(puVar1,param_2,lVar2,param_3);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d20004; end: 104d2007f; -[SCRegistrationUsernameSuggestionServicesEntryPoint _createUsernameSuggestionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d20004(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af818;
  _objc_alloc(PTR_PTR_1126af818);
  param_1 = param_1 + _DAT_112711578;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03db20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d20080; end: 104d200fb; -[SCRegistrationUsernameSuggestionServicesEntryPoint _createClientUsernameSuggester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d20080(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126af820;
  _objc_alloc(PTR_PTR_1126af820);
  param_1 = param_1 + _DAT_11271157c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d200fc; end: 104d20167; -[SCRegistrationUsernameSuggestionServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d200fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271156c,0);
  _objc_destroyWeak(param_1 + _DAT_112711574);
  _objc_destroyWeak(param_1 + _DAT_11271157c);
  _objc_destroyWeak(param_1 + _DAT_112711578);
  _objc_destroyWeak(param_1 + _DAT_112711570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711580);
  return;
}



/* Entry: 104d20168; end: 104d201ff; +[SCClientUsernameAlgorithm initialsWithBirthMonthWithRandomCharsWithEmojiWithRandomChars:emoji:] */

void FUN_104d20168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af7b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d20200; end: 104d2026b; +[SCClientUsernameAlgorithm initialsWithBirthMonthWithRandomCharsWithRandomChars:] */

void FUN_104d20200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af7b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d2026c; end: 104d202d7; +[SCClientUsernameAlgorithm initialsWithRandomCharsWithRandomChars:] */

void FUN_104d2026c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af7b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d202d8; end: 104d2031f; +[SCClientUsernameAlgorithm none] */

void FUN_104d202d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af7b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d20320; end: 104d203b3; +[SCClientUsernameAlgorithm prefixWithRandomCharsWithPrefix:randomChars:] */

void FUN_104d20320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af7b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d203b4; end: 104d203d7; -[SCClientUsernameAlgorithm copyWithZone:] */

undefined8 FUN_104d203b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d203d8; end: 104d2047f; -[SCClientUsernameAlgorithm hash] */

void FUN_104d203d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126e3e78;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d20480; end: 104d204c3; -[SCClientUsernameAlgorithm internalInit] */

void FUN_104d20480(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3e78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d204c4; end: 104d205db; -[SCClientUsernameAlgorithm isEqual:] */

long FUN_104d204c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d205b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d205c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_104d205c0;
                }
                goto LAB_104d205b4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104d205c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d205dc; end: 104d206ff; -[SCClientUsernameAlgorithm matchNone:prefixWithRandomChars:initialsWithRandomChars:initialsWithBirthMonthWithRandomChars:initialsWithBirthMonthWithRandomCharsWithEmoji:] */

void FUN_104d205dc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_104d206c8;
    }
    if ((lVar3 != 1) || (param_4 == 0)) goto LAB_104d206c8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
LAB_104d20684:
    (*pcVar4)(lVar3,uVar1,uVar2);
  }
  else {
    if (lVar3 == 2) {
      if (param_5 == 0) goto LAB_104d206c8;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
    else {
      if (lVar3 != 3) {
        if ((lVar3 != 4) || (param_7 == 0)) goto LAB_104d206c8;
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        pcVar4 = *(code **)(param_7 + 0x10);
        lVar3 = param_7;
        goto LAB_104d20684;
      }
      if (param_6 == 0) goto LAB_104d206c8;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    (*pcVar4)(lVar3,uVar1);
  }
LAB_104d206c8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d20700; end: 104d2075f; -[SCClientUsernameAlgorithm .cxx_destruct] */

void FUN_104d20700(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d20760; end: 104d207ab; -[SCClientUsernameRandomChars initWithNumberOfRandomChar:randomCharStrategy:] */

void FUN_104d20760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3e80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 104d207ac; end: 104d207cf; -[SCClientUsernameRandomChars copyWithZone:] */

undefined8 FUN_104d207ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d207d0; end: 104d2082f; -[SCClientUsernameRandomChars hash] */

long * FUN_104d207d0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  plVar2 = &lStack_28;
  func_0x000100505190(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar4 = (long *)0x1;
  }
  else {
    plVar4 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar4 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar4);
      if ((((ulong)plVar3 & 1) == 0) || (plVar2[1] != param_3[1])) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(ulong)(plVar2[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 104d20830; end: 104d208c7; -[SCClientUsernameRandomChars isEqual:] */

bool FUN_104d20830(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104d208c8; end: 104d208cf; -[SCClientUsernameRandomChars numberOfRandomChar] */

undefined8 FUN_104d208c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d208d0; end: 104d208d7; -[SCClientUsernameRandomChars randomCharStrategy] */

undefined8 FUN_104d208d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d208d8; end: 104d20953;  */

undefined * FUN_104d208d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8ab8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110daff38,
                        &UNK_10dd8b288,&UNK_10dd8b2cc,4,FUN_104d20954,0);
    do {
      if (puRam00000001136b8ab8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8ab8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8ab8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8ab8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8ab8;
}



/* Entry: 104d20954; end: 104d2095f;  */

bool FUN_104d20954(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104d20960; end: 104d209c7; +[SCClientUsernameSuggestionConfigPbClientUsernameSuggestionConfig descriptor] */

void FUN_104d20960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f6540,
                        &PTR____CFConstantStringClassReference_110daff58,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,
                        &PTR_s_uiBlockingTimeInMillisecond_1130ae648,2,0x10,0x1c);
    puRam00000001136b8ac0 = puVar1;
  }
  return;
}



/* Entry: 104d209c8; end: 104d20a53; +[SCClientUsernameSuggestionConfigPbClientUsernameSuggestionAlgorithm descriptor] */

undefined * FUN_104d209c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f6590,
                        &PTR____CFConstantStringClassReference_110daff78,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,
                        &PTR_s_noClientUsernameSuggestion_1130ae748,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136b8ac8 = puVar1;
  }
  return puRam00000001136b8ac8;
}



/* Entry: 104d20a54; end: 104d20abb; +[SCClientUsernameSuggestionConfigPbNoClientUsernameSuggestion descriptor] */

void FUN_104d20a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f65e0,
                        &PTR____CFConstantStringClassReference_110daff98,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,0,0,4,0x1c);
    puRam00000001136b8ad0 = puVar1;
  }
  return;
}



/* Entry: 104d20abc; end: 104d20b23; +[SCClientUsernameSuggestionConfigPbPrefixWithRandomChars descriptor] */

void FUN_104d20abc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f6630,
                        &PTR____CFConstantStringClassReference_110daffb8,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,&PTR_s_prefix_1130ae688,2,0x18,0x1c
                       );
    puRam00000001136b8ad8 = puVar1;
  }
  return;
}



/* Entry: 104d20b24; end: 104d20b8b; +[SCClientUsernameSuggestionConfigPbInitialsWithRandomChars descriptor] */

void FUN_104d20b24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f6680,
                        &PTR____CFConstantStringClassReference_110daffd8,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,&PTR_s_randomChars_1130ae608,1,0x10
                        ,0x1c);
    puRam00000001136b8ae0 = puVar1;
  }
  return;
}



/* Entry: 104d20b8c; end: 104d20bf3; +[SCClientUsernameSuggestionConfigPbInitialsWithBirthMonthWithRandomChars descriptor] */

void FUN_104d20b8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f66d0,
                        &PTR____CFConstantStringClassReference_110dafff8,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,&PTR_s_randomChars_1130ae628,1,0x10
                        ,0x1c);
    puRam00000001136b8ae8 = puVar1;
  }
  return;
}



/* Entry: 104d20bf4; end: 104d20c5b; +[SCClientUsernameSuggestionConfigPbInitialsWithBirthMonthWithRandomCharsWithEmoji descriptor] */

void FUN_104d20bf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f6720,
                        &PTR____CFConstantStringClassReference_110db0018,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,&PTR_s_randomChars_1130ae6c8,2,0x18
                        ,0x1c);
    puRam00000001136b8af0 = puVar1;
  }
  return;
}



/* Entry: 104d20c5c; end: 104d20cc3; +[SCClientUsernameSuggestionConfigPbRandomChars descriptor] */

void FUN_104d20c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8af8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f6770,
                        &PTR____CFConstantStringClassReference_110db0038,
                        &PTR_s_snapchat_activation_cof_1130ae5f0,&PTR_s_numberOfRandomChar_1130ae708
                        ,2,0xc,0x1c);
    puRam00000001136b8af8 = puVar1;
  }
  return;
}



/* Entry: 104d20cc4; end: 104d20d27; -[SCResumeRegistrationStorageLoggerImpl init] */

undefined1 * FUN_104d20cc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3e88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126af828;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d20d28; end: 104d20d37; -[SCResumeRegistrationStorageLoggerImpl logMigrateToNewModel:] */

undefined1 ** FUN_104d20d28(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    unaff_x20 = *(long **)(*(long *)(param_1 + 8) + 8);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_11084b1d0,&uStack_70,1);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_a0;
  pcStack_78 = FUN_104d21a7c;
  puStack_98 = PTR_PTR_1126e3ea0;
  ppuStack_a0 = ppuVar3;
  plStack_90 = unaff_x20;
  ppuStack_88 = ppuVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_a0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    ppuVar2 = (undefined1 **)pppuVar4;
    (*(code *)PTR_DAT_113403208)();
    pppuVar4[1] = ppuVar2;
  }
  return (undefined1 **)pppuVar4;
}



/* Entry: 104d20d38; end: 104d20d43; -[SCResumeRegistrationStorageLoggerImpl .cxx_destruct] */

void FUN_104d20d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d20d44; end: 104d20da7; -[SCPreferences unverifiedBootstrapData] */

void FUN_104d20d44(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db0058);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af830;
  _objc_opt_class(PTR_PTR_1126af830);
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



/* Entry: 104d20da8; end: 104d20db3; -[SCPreferences setUnverifiedBootstrapData:] */

void FUN_104d20da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db0058);
  return;
}



/* Entry: 104d20db4; end: 104d20e17; -[SCPreferences resumeUserVerificationData] */

void FUN_104d20db4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db0078);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af838;
  _objc_opt_class(PTR_PTR_1126af838);
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



/* Entry: 104d20e18; end: 104d20e23; -[SCPreferences setResumeUserVerificationData:] */

void FUN_104d20e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db0078);
  return;
}



/* Entry: 104d20e24; end: 104d20e87; -[SCPreferences resumeRegistrationData] */

void FUN_104d20e24(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db0098);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af840;
  _objc_opt_class(PTR_PTR_1126af840);
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



/* Entry: 104d20e88; end: 104d20e93; -[SCPreferences setResumeRegistrationData:] */

void FUN_104d20e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db0098);
  return;
}



/* Entry: 104d20e94; end: 104d20ef7; -[SCPreferences exitRegistrationDate] */

void FUN_104d20e94(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db00b8);
  _objc_retainAutoreleasedReturnValue();
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



/* Entry: 104d20ef8; end: 104d20f03; -[SCPreferences setExitRegistrationDate:] */

void FUN_104d20ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db00b8);
  return;
}



/* Entry: 104d20f04; end: 104d20fe7; -[SCResumeRegistrationStorageImpl initWithUnauthenticatedStorageServices:timeProvider:resumeRegistrationExpireTimeout:logger:] */

undefined1 *
FUN_104d20f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e3e90;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    func_0x00010be60580(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104d20fe8; end: 104d2110f; -[SCResumeRegistrationStorageImpl _migrateUnverifiedBootstrapDataToResumeUserVerificationDataIfNeeded] */

void FUN_104d20fe8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c282c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    func_0x00010c0aa4a0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  }
  else {
    puVar4 = PTR_PTR_1126af838;
    _objc_alloc(PTR_PTR_1126af838);
    puVar5 = PTR_PTR_1126af848;
    func_0x00010bf69c80(PTR_PTR_1126af848);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0596c0(puVar4,param_2,lVar3,puVar5);
    _objc_release(puVar5);
    func_0x00010c1ed6e0(param_1,param_2,puVar4);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1067a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21c060();
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c0aa4a0(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104d21110; end: 104d21177; -[SCResumeRegistrationStorageImpl resumeUserVerificationData] */

void FUN_104d21110(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13dac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104d21178; end: 104d211e7; -[SCResumeRegistrationStorageImpl setResumeUserVerificationData:] */

void FUN_104d21178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1067a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed6e0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d211e8; end: 104d2130f; -[SCResumeRegistrationStorageImpl resumeRegistrationData] */

void FUN_104d211e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010be3de80();
    if ((int)lVar2 == 0) {
      _objc_retain(lVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar3;
      goto LAB_104d212e4;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1067a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed660();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1067a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1984c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
LAB_104d212e4:
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104d21310; end: 104d2141b; -[SCResumeRegistrationStorageImpl setResumeRegistrationData:] */

void FUN_104d21310(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be988c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1;
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed660();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1067a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1984c0();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf5e5e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c1067a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1984c0();
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d2141c; end: 104d2152b; -[SCResumeRegistrationStorageImpl context] */

void FUN_104d2141c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c13dac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c282c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c13d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar4 = PTR_PTR_1126af850;
      func_0x00010c0d8e80();
    }
    else {
      lVar1 = param_1;
      func_0x00010c13d700();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c127d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126af850;
      if (lVar2 == 0) {
        func_0x00010c105ec0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c127b40();
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  else {
    puVar4 = PTR_PTR_1126af850;
    func_0x00010c298340();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104d2152c; end: 104d21627; -[SCResumeRegistrationStorageImpl _isAccountCreationDataExpired] */

bool FUN_104d2152c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf9ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c1067a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed660();
    bVar1 = true;
  }
  else {
    lVar2 = lVar3;
    func_0x00010bf64e40(*(undefined8 *)(param_1 + 0x18),lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010bf5e5e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf433a0(lVar2,param_2,lVar4);
    bVar1 = lVar5 == -1;
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 104d21628; end: 104d216c3; -[SCResumeRegistrationStorageImpl _sanitized:] */

void FUN_104d21628(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c127d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d216c4; end: 104d21717; -[SCResumeRegistrationStorageImpl .cxx_destruct] */

void FUN_104d216c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d21718; end: 104d217fb; -[SCResumeRegistrationStorageServiceProvider provide] */

void FUN_104d21718(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126af860;
  _objc_alloc(PTR_PTR_1126af860);
  func_0x00010c03fea0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d217fc; end: 104d2183b;  */

void FUN_104d217fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be222e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d2183c; end: 104d218df; -[SCResumeRegistrationStorageServiceProvider _getResumeRegistrationStorage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d2183c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126af868;
  _objc_opt_new(PTR_PTR_1126af868);
  puVar2 = PTR_PTR_1126af870;
  _objc_alloc(PTR_PTR_1126af870);
  param_1 = param_1 + _DAT_1127115c4;
  _objc_loadWeakRetained(param_1);
  puVar3 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c058b40(0x40f5180000000000,puVar2,param_2,param_1,puVar3,puVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d218e0; end: 104d218ef; -[SCResumeRegistrationStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d218e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127115c4);
  return;
}



/* Entry: 104d218f0; end: 104d21963; -[SCGrapheneResumeRegistrationStorageMetric2 init] */

undefined1 * FUN_104d218f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3e98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d21964; end: 104d21a7b;  */

undefined1 ** FUN_104d21964(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_11084b1d0,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_a0;
  pcStack_78 = FUN_104d21a7c;
  puStack_98 = PTR_PTR_1126e3ea0;
  ppuStack_a0 = ppuVar3;
  plStack_90 = unaff_x20;
  ppuStack_88 = ppuVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_a0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    ppuVar2 = (undefined1 **)pppuVar4;
    (*(code *)PTR_DAT_113403208)();
    pppuVar4[1] = ppuVar2;
  }
  return (undefined1 **)pppuVar4;
}



/* Entry: 104d21a7c; end: 104d21aef; -[SCGrapheneSystemNotificationPermissionMetric2 init] */

undefined1 * FUN_104d21a7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3ea0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d21af0; end: 104d21c63;  */

char * FUN_104d21af0(long param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  char *unaff_x23;
  undefined1 *unaff_x24;
  char *pcStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  undefined1 *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = puVar8;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar8;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_104d21c64;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  puVar8 = puVar7;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puVar14 = (undefined1 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = pcVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,unaff_x23);
    pcVar2 = "true";
    if ((int)puVar7 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    pcVar6 = "";
    puVar7 = &uStack_118;
    puVar8 = &uStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_100 = puVar7;
    func_0x00010007e5dc(&puStack_100);
    lVar12 = 0;
    puVar14 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_104d21e4c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  puVar11 = puVar10;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar7;
  puStack_148 = puVar14;
  pcStack_140 = pcVar2;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar6);
  puVar14 = (undefined1 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_198,pcVar1);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar8 = &uStack_1b8;
    puVar9 = &uStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11084b2d0);
    puStack_1a0 = puVar8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar12 = 0;
    puVar14 = auStack_198;
    puVar11 = puVar10;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar4 = &pcStack_200;
  pcStack_1c8 = FUN_104d22034;
  puStack_1f0 = puVar8;
  puStack_1e8 = puVar14;
  pcStack_1e0 = pcVar1;
  pcStack_1d8 = pcVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  _objc_retain(param_5);
  puStack_1f8 = PTR_PTR_1126e3ea8;
  pcStack_200 = pcVar2;
  _objc_msgSendSuper2(&pcStack_200,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(puVar9);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined8 **)((long)ppcVar4 + 8) = puVar9;
    _objc_release(uVar5);
    _objc_retain(puVar11);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 **)((long)ppcVar4 + 0x10) = puVar11;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(puVar11);
  _objc_release(puVar9);
  return (char *)ppcVar4;
}



/* Entry: 104d21c64; end: 104d21e4b;  */

char * FUN_104d21c64(long param_1,char *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  char *unaff_x23;
  undefined1 *unaff_x24;
  char *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined1 *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_2;
  puVar6 = param_3;
  uVar4 = param_4;
  _objc_retain(param_2);
  puVar11 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    pcVar5 = "true";
    if ((int)param_3 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar5);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar5 = "";
    param_3 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    uVar4 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_104d21e4c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  uVar8 = uVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar11;
  pcStack_c0 = pcVar1;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  puVar11 = (undefined1 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_118,pcVar1);
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_100,pcVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &uStack_138;
    puVar7 = &uStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11084b2d0);
    puStack_120 = puVar6;
    func_0x00010007e5dc(&puStack_120);
    lVar9 = 0;
    puVar11 = auStack_118;
    uVar8 = uVar4;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_180;
  pcStack_148 = FUN_104d22034;
  puStack_170 = puVar6;
  puStack_168 = puVar11;
  pcStack_160 = pcVar1;
  pcStack_158 = pcVar5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_5);
  puStack_178 = PTR_PTR_1126e3ea8;
  pcStack_180 = pcVar2;
  _objc_msgSendSuper2(&pcStack_180,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar7);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined8 **)((long)ppcVar3 + 8) = puVar7;
    _objc_release(uVar4);
    _objc_retain(uVar8);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined8 *)((long)ppcVar3 + 0x10) = uVar8;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(uVar8);
  _objc_release(puVar7);
  return (char *)ppcVar3;
}



/* Entry: 104d21e4c; end: 104d22033;  */

char * FUN_104d21e4c(long param_1,char *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  puVar9 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    param_3 = &uStack_98;
    puVar5 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11084b2d0);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_e0;
  pcStack_a8 = FUN_104d22034;
  puStack_d0 = param_3;
  puStack_c8 = puVar9;
  pcStack_c0 = pcVar1;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126e3ea8;
  pcStack_e0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined8 **)((long)ppcVar3 + 8) = puVar5;
    _objc_release(uVar4);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined8 *)((long)ppcVar3 + 0x10) = uVar6;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(puVar5);
  return (char *)ppcVar3;
}



/* Entry: 104d22034; end: 104d220ff; -[SCRegistrationPrivacyPolicyViewFactoryImpl initWithCircumstanceEngine:multiSourceCountryProvider:webBrowsingScopeExposer:] */

undefined1 *
FUN_104d22034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3ea8;
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



/* Entry: 104d22100; end: 104d22197; -[SCRegistrationPrivacyPolicyViewFactoryImpl privacyPolicyViewWithPresentingViewController:] */

void FUN_104d22100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126af878;
  _objc_alloc(PTR_PTR_1126af878);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010be22020(param_1);
  func_0x00010c0575c0(puVar2,param_2,puVar1,uVar3,param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d22198; end: 104d22237; -[SCRegistrationPrivacyPolicyViewFactoryImpl privacyPolicyViewWithPresentingViewController:context:] */

void FUN_104d22198(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
  if (param_4 == 0) {
    func_0x00010be22020(param_1);
  }
  puVar2 = PTR_PTR_1126af878;
  _objc_alloc(PTR_PTR_1126af878);
  func_0x00010c0575c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d22238; end: 104d22347; -[SCRegistrationPrivacyPolicyViewFactoryImpl _getRegisionSpecificConfig] */

undefined8 FUN_104d22238(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x00010beb97a0();
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar5);
    lVar1 = lRam00000001136b8b00;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104d223f8;
    puStack_40 = &UNK_110842e18;
    uStack_38 = uVar5;
    _objc_retain(uVar5);
    uVar4 = uVar5;
    if (lVar1 != -1) {
      func_0x00010002a2fc(0x1136b8b00,&puStack_58);
      uVar4 = uStack_38;
    }
    uVar2 = uRam00000001136b8b08;
    _objc_retain(uRam00000001136b8b08);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar2;
      func_0x00010c0720c0();
      uVar4 = 3;
      if ((int)uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 2;
    }
    _objc_release(uVar2);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 104d22348; end: 104d223bb; -[SCRegistrationPrivacyPolicyViewFactoryImpl _showKoreanPrivacyPolicy] */

bool FUN_104d22348(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c083f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = lVar3;
    func_0x00010bf32ee0(lVar3,param_2,&PTR____CFConstantStringClassReference_110dafdb8);
    bVar1 = lVar2 == 0;
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 104d223bc; end: 104d223f7; -[SCRegistrationPrivacyPolicyViewFactoryImpl .cxx_destruct] */

void FUN_104d223bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d223f8; end: 104d2243b;  */

void FUN_104d223f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25d780(uVar2,param_2,&PTR____CFConstantStringClassReference_110db00d8,
                      &PTR____CFConstantStringClassReference_110db00f8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136b8b08;
  uRam00000001136b8b08 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2243c; end: 104d2250b; -[SCRegistrationPrivacyPolicyViewImpl initWithUIContainer:webBrowsingScopeExposer:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d2243c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3eb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127115dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127115e0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127115e4) = param_5;
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d2250c; end: 104d22523; -[SCRegistrationPrivacyPolicyViewImpl hasLongText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d2250c(long param_1)

{
  return 1 < *(ulong *)(param_1 + _DAT_1127115e4);
}



/* Entry: 104d22524; end: 104d2258b; -[SCRegistrationPrivacyPolicyViewImpl _textFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d22524(long param_1)

{
  long unaff_x19;
  
  if (*(ulong *)(param_1 + _DAT_1127115e4) < 5) {
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = param_1;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 104d2258c; end: 104d225f3; -[SCRegistrationPrivacyPolicyViewImpl _textLinkFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d2258c(long param_1)

{
  long unaff_x19;
  
  if (*(ulong *)(param_1 + _DAT_1127115e4) < 5) {
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = param_1;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 104d225f4; end: 104d22a03; -[SCRegistrationPrivacyPolicyViewImpl _setup] */

/* WARNING: Possible PIC construction at 0x000104d22740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104d22744) */
/* WARNING: Removing unreachable block (ram,0x000104d22a00) */
/* WARNING: Removing unreachable block (ram,0x000104d229e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d225f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126af058;
  _objc_opt_new();
  lVar6 = (long)_DAT_1127115e8;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  lVar2 = param_1;
  func_0x00010becb5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6));
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010becb680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1bde90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar6),PTR_s_setLinkTextAttributes__11264d1c8,puVar4);
  return;
}



/* Entry: 104d22a04; end: 104d22a13; -[SCRegistrationPrivacyPolicyViewImpl setLinkTextAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d22a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bde90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127115e8),PTR_s_setLinkTextAttributes__11264d1c8);
  return;
}



/* Entry: 104d22a14; end: 104d22a23; -[SCRegistrationPrivacyPolicyViewImpl setTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d22a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127115e8),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 104d22a24; end: 104d22e6f; -[SCRegistrationPrivacyPolicyViewImpl _setupLinkedTextViewString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104d22a24(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + _DAT_1127115e4);
  if (lVar7 < 2) {
    if (lVar7 == 0) {
      unaff_x23 = *(undefined8 *)(param_1 + _DAT_1127115e8);
      func_0x00010537c39c();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = param_1;
      func_0x00010537c414();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = unaff_x20;
      puStack_108 = unaff_x20;
      func_0x00010537c3fc();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = unaff_x21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,2);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_118 = &PTR____CFConstantStringClassReference_110db01b8;
      ppuStack_110 = &PTR____CFConstantStringClassReference_110db0158;
      pppuVar6 = &ppuStack_118;
    }
    else {
      if (lVar7 != 1) goto LAB_104d22e34;
      unaff_x23 = *(undefined8 *)(param_1 + _DAT_1127115e8);
      func_0x00010537c39c();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = param_1;
      func_0x00010537c414();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = unaff_x20;
      puStack_78 = unaff_x20;
      func_0x00010537c3fc();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = unaff_x21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = &PTR____CFConstantStringClassReference_110db01b8;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110db0178;
      pppuVar6 = &ppuStack_88;
    }
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar6,2);
    _objc_retainAutoreleasedReturnValue();
    param_4 = unaff_x22;
    func_0x00010c212fe0(unaff_x23,param_2,param_1,unaff_x22,unaff_x24);
    unaff_x19 = param_1;
LAB_104d22e0c:
    _objc_release(unaff_x24);
  }
  else {
    if (lVar7 == 2) {
      unaff_x23 = *(undefined8 *)(param_1 + _DAT_1127115e8);
      func_0x00010537c3cc();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = param_1;
      func_0x00010537c45c();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = unaff_x20;
      puStack_a0 = unaff_x20;
      func_0x00010537c414();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x21;
      puStack_98 = unaff_x21;
      func_0x00010537c3fc();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = unaff_x22;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,3);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110db0198;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110db01b8;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110db0158;
      unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_b8,3);
      _objc_retainAutoreleasedReturnValue();
      param_4 = unaff_x24;
      func_0x00010c212fe0(unaff_x23,param_2,param_1,unaff_x24,unaff_x25);
LAB_104d22d58:
      _objc_release(unaff_x25);
      unaff_x19 = param_1;
      goto LAB_104d22e0c;
    }
    if (lVar7 == 3) {
      unaff_x23 = *(undefined8 *)(param_1 + _DAT_1127115e8);
      func_0x00010537c3e4();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = param_1;
      func_0x00010537c414();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = unaff_x20;
      puStack_d8 = unaff_x20;
      func_0x00010537c3fc();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x21;
      puStack_d0 = unaff_x21;
      func_0x00010537c42c();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x22;
      puStack_c8 = unaff_x22;
      func_0x00010537c444();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = unaff_x24;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,4);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110db01b8;
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110db0158;
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110db01d8;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110db01f8;
      unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_f8,4);
      _objc_retainAutoreleasedReturnValue();
      param_4 = unaff_x25;
      func_0x00010c212fe0(unaff_x23,param_2,param_1,unaff_x25,unaff_x26);
      _objc_release(unaff_x26);
      goto LAB_104d22d58;
    }
    if (lVar7 != 4) goto LAB_104d22e34;
    unaff_x23 = *(undefined8 *)(param_1 + _DAT_1127115e8);
    func_0x00010537c3b4();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = param_1;
    func_0x00010537c3fc();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110db0158;
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_128,1);
    _objc_retainAutoreleasedReturnValue();
    param_4 = unaff_x21;
    func_0x00010c212fe0(unaff_x23,param_2,param_1,unaff_x21,unaff_x22);
    unaff_x19 = param_1;
  }
  _objc_release(unaff_x22);
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
  param_1 = unaff_x19;
  _objc_release();
LAB_104d22e34:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104d22e70;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  puStack_150 = unaff_x20;
  puStack_148 = unaff_x19;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar4 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_104d23010;
  puStack_190 = &UNK_110842308;
  puVar5 = param_4;
  _objc_retain(param_4);
  puStack_188 = param_4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4,param_2,&puStack_1a8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar5 = puVar4;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar7 = (long)_DAT_1127115e0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c071800();
  if (iVar1 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puStack_188);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  return (undefined *)0x0;
}



/* Entry: 104d22e70; end: 104d2300f; -[SCRegistrationPrivacyPolicyViewImpl textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d22e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar4 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d23010;
  puStack_60 = &UNK_110842308;
  uVar5 = param_4;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4,param_2,&puStack_78,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar6 = puVar4;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar7 = (long)_DAT_1127115e0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c071800();
  if (iVar1 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,puVar6);
  }
  _objc_release(puVar6);
  _objc_release(uStack_58);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  return 0;
}



/* Entry: 104d23010; end: 104d23027;  */

void FUN_104d23010(long param_1,long param_2,long param_3)

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



/* Entry: 104d23028; end: 104d2304f; -[SCRegistrationPrivacyPolicyViewImpl webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d23028(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_1127115e0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d23050; end: 104d2309f; -[SCRegistrationPrivacyPolicyViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d23050(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127115e8,0);
  _objc_storeStrong(param_1 + _DAT_1127115e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127115dc,0);
  return;
}



/* Entry: 104d230a0; end: 104d23183; -[SCRegistrationPrivacyPolicyViewServiceProvider provide] */

void FUN_104d230a0(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126af880;
  _objc_alloc(PTR_PTR_1126af880);
  func_0x00010c03a1a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d23184; end: 104d231c3;  */

void FUN_104d23184(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be21ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d231c4; end: 104d2328f; -[SCRegistrationPrivacyPolicyViewServiceProvider _getPrivacyPolicyViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d231c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126af888;
  _objc_alloc(PTR_PTR_1126af888);
  lVar2 = param_1 + _DAT_1127115ec;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127115f0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe9e0(puVar1,param_2,lVar3,lVar5,*(undefined8 *)(param_1 + _DAT_1127115f4));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d23290; end: 104d232d7; -[SCRegistrationPrivacyPolicyViewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d23290(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127115f4,0);
  _objc_destroyWeak(param_1 + _DAT_1127115f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127115ec);
  return;
}



/* Entry: 104d232d8; end: 104d23e2f; -[SCUnauthenticatedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d232d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
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
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  long lVar49;
  long lVar50;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x00010099c218(1);
  lVar49 = (long)_DAT_1127115f8;
  lVar46 = param_1 + lVar49;
  _objc_loadWeakRetained(lVar46);
  lVar1 = lVar46;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d79e0();
  _objc_release(lVar1);
  _objc_release(lVar46);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = param_1 + _DAT_11271169c;
    _objc_loadWeakRetained(lVar46);
  }
  lVar1 = lVar46;
  func_0x00010bfa2bc0(lVar46);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar46);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126af890;
  _objc_alloc();
  lVar46 = param_1 + lVar49;
  _objc_loadWeakRetained(lVar46);
  lVar1 = lVar46;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063220();
  _objc_release(lVar1);
  _objc_release(lVar46);
  puVar4 = PTR_PTR_1126af108;
  _objc_opt_new();
  func_0x00010bf0c980(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  puVar5 = puVar4;
  func_0x00010c29bf00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7560(puVar2);
  _objc_release(puVar5);
  puVar6 = PTR_PTR_1126af8a0;
  _objc_alloc();
  lVar50 = (long)_DAT_1127115fc;
  lVar46 = param_1 + lVar50;
  _objc_loadWeakRetained(lVar46);
  lVar1 = lVar46;
  func_0x00010c2970e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffeee0();
  _objc_release(lVar1);
  _objc_release(lVar46);
  puVar7 = PTR_PTR_1126af000;
  _objc_alloc();
  lVar46 = param_1 + lVar50;
  _objc_loadWeakRetained(lVar46);
  lVar8 = lVar46;
  func_0x00010c2970e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112711600;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010bf9c540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffef00();
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar46);
  puVar10 = PTR_PTR_1126af8a8;
  _objc_alloc();
  lVar46 = param_1 + _DAT_11271160c;
  _objc_loadWeakRetained();
  lVar11 = lVar46;
  func_0x00010c113f20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112711614;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112711620;
  _objc_loadWeakRetained();
  uVar48 = *(undefined8 *)(param_1 + _DAT_1127116ac);
  _objc_retain(uVar48);
  lVar9 = param_1 + _DAT_112711630;
  _objc_loadWeakRetained();
  lVar12 = lVar9;
  func_0x00010bf06440();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112711634;
  _objc_loadWeakRetained();
  lVar45 = lVar13;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112711638;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112711640;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0b3f20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112711644;
  _objc_loadWeakRetained();
  func_0x00010c058b60();
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar45);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(uVar48);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar11);
  _objc_release(lVar46);
  puVar19 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar5 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d23e30;
  puStack_90 = &UNK_11084b3a0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_112711648;
  _objc_loadWeakRetained();
  lVar20 = lVar46;
  func_0x00010bf4a320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar46);
  lVar46 = param_1 + _DAT_11271164c;
  _objc_loadWeakRetained();
  lVar21 = lVar46;
  func_0x00010c121b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar46);
  puVar22 = PTR_PTR_1126ae720;
  puStack_d0 = puVar2;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104d23e70;
  puStack_b8 = &UNK_11084b3d0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + _DAT_112711650);
  *(undefined **)(param_1 + _DAT_112711650) = puVar22;
  _objc_release(uVar48);
  puVar2 = PTR_PTR_1126af8b0;
  _objc_alloc();
  lVar46 = param_1 + _DAT_112711654;
  _objc_loadWeakRetained();
  lVar23 = lVar46;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112711658;
  _objc_loadWeakRetained();
  lVar24 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271165c;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_112711660;
  _objc_loadWeakRetained();
  lVar25 = lVar9;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112711664;
  _objc_loadWeakRetained();
  lVar26 = lVar13;
  func_0x00010c13d740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112711668;
  _objc_loadWeakRetained();
  lVar27 = lVar14;
  func_0x00010c0e86e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271166c;
  _objc_loadWeakRetained();
  lVar29 = lVar16;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar30 = lVar49;
  func_0x00010c08ec00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112711670;
  _objc_loadWeakRetained();
  lVar31 = lVar18;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112711674;
  _objc_loadWeakRetained();
  lVar32 = lVar11;
  func_0x00010c124ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_80);
  lVar45 = (long)_DAT_112711678;
  lVar12 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar33 = lVar12;
  func_0x00010c127ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar34 = lVar45;
  func_0x00010c127d60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271167c;
  _objc_loadWeakRetained();
  lVar35 = lVar15;
  func_0x00010c0f5400();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar36 = lVar50;
  func_0x00010c2970e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112711680;
  _objc_loadWeakRetained();
  lVar37 = lVar17;
  func_0x00010bf8b100();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_112711684;
  _objc_loadWeakRetained();
  lVar39 = param_1 + _DAT_112711688;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf118c0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_11271168c;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c0ec980();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_112711690;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010befe8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be42960();
  func_0x00010c040560();
  lVar47 = (long)_DAT_112711694;
  uVar48 = *(undefined8 *)(param_1 + lVar47);
  *(undefined **)(param_1 + lVar47) = puVar2;
  _objc_release(uVar48);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar17);
  _objc_release(lVar36);
  _objc_release(lVar50);
  _objc_release(lVar35);
  _objc_release(lVar15);
  _objc_release(lVar34);
  _objc_release(lVar45);
  _objc_release(lVar33);
  _objc_release(lVar12);
  _objc_release(lVar32);
  _objc_release(lVar11);
  _objc_release(lVar31);
  _objc_release(lVar18);
  _objc_release(lVar30);
  _objc_release(lVar49);
  _objc_release(lVar29);
  _objc_release(lVar16);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar14);
  _objc_release(lVar26);
  _objc_release(lVar13);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(lVar1);
  _objc_release(lVar23);
  _objc_release(lVar46);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar47));
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar19);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 104d23e30; end: 104d23ee7;  */

void FUN_104d23e30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf52c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d23ee8; end: 104d2408f; -[SCUnauthenticatedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d23ee8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar7 = param_1 + _DAT_112711654;
  _objc_loadWeakRetained();
  lVar2 = lVar7;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar7);
  if (lVar3 == 0) {
    lVar7 = param_1 + _DAT_112711638;
    _objc_loadWeakRetained(lVar7);
    lVar2 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c067f00();
    lVar6 = (long)(int)lVar6;
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  else {
    lVar6 = lVar3;
    func_0x00010c067fc0(lVar3);
  }
  func_0x00010099c218(lVar6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d24090;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  lVar7 = (long)_DAT_112711650;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar4);
  }
  puStack_70 = PTR_PTR_1126e3eb8;
  plVar5 = &lStack_78;
  lStack_78 = param_1;
  _objc_msgSendSuper2(plVar5,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 104d24090; end: 104d240ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d24090(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127115f8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d79e0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d24100; end: 104d2415f; -[SCUnauthenticatedEntryPoint _isPhoneEmailFirstEnabled] */

bool FUN_104d24100(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_104d24160();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106bfda74();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 1;
}



/* Entry: 104d24160; end: 104d24183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d24160(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112711638);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d24184; end: 104d241f7; -[SCUnauthenticatedEntryPoint _isNGORegistrationEnabled] */

ulong FUN_104d24184(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010be42960();
  if ((uVar1 & 1) == 0) {
    FUN_104d24160(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010537bad4();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 104d241f8; end: 104d242d7; -[SCUnauthenticatedEntryPoint _createUnauthenticatedFeatureLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d241f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126af8b8;
  _objc_alloc(PTR_PTR_1126af8b8);
  lVar2 = param_1 + _DAT_112711698;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112711670;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_1127116a8;
    _objc_loadWeakRetained(lVar6);
  }
  func_0x00010c03dc80(puVar1,param_2,lVar3,lVar5,lVar6);
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


