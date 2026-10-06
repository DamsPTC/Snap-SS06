/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105409ec4; end: 105409ee7; -[SCUsernameSuggestionResult copyWithZone:] */

undefined8 FUN_105409ec4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105409ee8; end: 105409f9b; -[SCUsernameSuggestionResult hash] */

void FUN_105409ee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126e83a8;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105409f9c; end: 105409fdf; -[SCUsernameSuggestionResult internalInit] */

void FUN_105409f9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e83a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105409fe0; end: 10540a10f; -[SCUsernameSuggestionResult isEqual:] */

long FUN_105409fe0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10540a0e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10540a0f4;
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
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10540a0f4;
                  }
                  goto LAB_10540a0e8;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10540a0f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10540a110; end: 10540a20b; -[SCUsernameSuggestionResult matchSuccess:suggestions:unavailable:error:] */

void FUN_10540a110(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28));
      }
      goto LAB_10540a1dc;
    }
    if (param_3 == 0) goto LAB_10540a1dc;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else {
    if (lVar2 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_10540a1dc;
    }
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_10540a1dc;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10540a1dc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10540a20c; end: 10540a277; -[SCUsernameSuggestionResult .cxx_destruct] */

void FUN_10540a20c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10540a278; end: 10540a377;  */

void FUN_10540a278(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  func_0x00010c126100(param_1);
  ppuVar1 = param_1;
  func_0x00010c261d60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dadbd8;
  }
  else {
    ppuVar2 = param_1;
    func_0x00010c261d60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10540a378; end: 10540a383;  */

undefined ** FUN_10540a378(void)

{
  return &PTR____CFConstantStringClassReference_110dadbd8;
}



/* Entry: 10540a384; end: 10540a38f; -[SCRegHostnamesProdSegmentConfig studyExposureName] */

undefined ** FUN_10540a384(void)

{
  return &PTR____CFConstantStringClassReference_110dda278;
}



/* Entry: 10540a390; end: 10540a3a3; -[SCRegHostnamesProdSegmentConfig expirationTime] */

void FUN_10540a390(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x41d934259c000000,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10540a3a4; end: 10540a3af; -[SCRegHostnamesProdSegmentConfig seed] */

undefined ** FUN_10540a3a4(void)

{
  return &PTR____CFConstantStringClassReference_110dda298;
}



/* Entry: 10540a3b0; end: 10540a3b7; -[SCRegHostnamesProdSegmentConfig version] */

undefined8 FUN_10540a3b0(void)

{
  return 1;
}



/* Entry: 10540a3b8; end: 10540a3c3; -[SCRegHostnamesProdSegmentConfig userRange] */

undefined1  [16] FUN_10540a3b8(void)

{
  return ZEXT816(0x14) << 0x40;
}



/* Entry: 10540a3c4; end: 10540a587; -[SCRegHostnamesProdConfig treatments] */

undefined1 * FUN_10540a3c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b8ba8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8ba8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f940();
  func_0x00010c1e9740(puVar2);
  ppuVar9 = &puStack_78;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  puStack_70 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar10 = puVar3;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x2) {
    puVar4 = puVar3;
    func_0x00010c0dfd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x32;
    FUN_10540a8a4(0x32,&PTR____CFConstantStringClassReference_110db2d38,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_68 = puVar5;
    func_0x00010c0dfd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x32;
    FUN_10540a8a4(0x32,&PTR____CFConstantStringClassReference_110db04d8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &puStack_68;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_b0;
  pcStack_88 = FUN_10540a588;
  puStack_a0 = puVar2;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  puStack_a8 = PTR_PTR_1126e83b0;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined **)0x0) {
    _objc_retain(ppuVar9);
    uVar7 = *(undefined8 *)((long)ppuVar8 + 8);
    *(undefined ***)((long)ppuVar8 + 8) = ppuVar9;
    _objc_release(uVar7);
  }
  _objc_release(ppuVar9);
  return (undefined1 *)ppuVar8;
}



/* Entry: 10540a588; end: 10540a5fb; -[SCRegHostnameABRetriever initWithClientHardcodedABValueRetriever:] */

undefined1 * FUN_10540a588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e83b0;
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



/* Entry: 10540a5fc; end: 10540a68f; -[SCRegHostnameABRetriever registerConfigs] */

void FUN_10540a5fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8bb0;
  _objc_opt_new(PTR_PTR_1126b8bb0);
  puVar3 = PTR_PTR_1126b8bb0;
  _objc_opt_new(PTR_PTR_1126b8bb0);
  puVar4 = PTR_PTR_1126b8bb0;
  _objc_opt_new(PTR_PTR_1126b8bb0);
  func_0x00010c125e40(uVar1,param_2,&PTR____CFConstantStringClassReference_110dda258,puVar2,puVar3,
                      puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10540a690; end: 10540a6cb; -[SCRegHostnameABRetriever startUsingAB] */

void FUN_10540a690(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10540a6cc; end: 10540a707; -[SCRegHostnameABRetriever doneUsingAB] */

void FUN_10540a6cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10540a708; end: 10540a7cf; -[SCRegHostnameABRetriever suggestUsernameHostname] */

void FUN_10540a708(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b8ba8;
  _objc_alloc(PTR_PTR_1126b8ba8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010c261d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10540a7d0; end: 10540a897; -[SCRegHostnameABRetriever usernamePasswordHostname] */

void FUN_10540a7d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b8ba8;
  _objc_alloc(PTR_PTR_1126b8ba8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010c127760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10540a898; end: 10540a8a3; -[SCRegHostnameABRetriever .cxx_destruct] */

void FUN_10540a898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10540a8a4; end: 10540a9a3;  */

void FUN_10540a8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af9b0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126af7d0;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c220160(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126af9b8;
  _objc_opt_new(PTR_PTR_1126af9b8);
  func_0x00010c1685c0();
  _objc_release(puVar2);
  func_0x00010c055080(puVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10540a9a4; end: 10540aa0b; +[SCActivationPbRegistrationHostnames descriptor] */

void FUN_10540a9a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35dd0,
                        &PTR____CFConstantStringClassReference_110dda2b8,
                        &PTR_s_snapchat_activation_cof_1130d65a0,
                        &PTR_s_suggestUsernameServiceHostname_1130d65b8,4,0x28,0x1c);
    puRam00000001136bbb48 = puVar1;
  }
  return;
}



/* Entry: 10540aa0c; end: 10540aa7f; -[UNISCJanusLoginService initWithUnifiedGrpcService:] */

undefined1 * FUN_10540aa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e83b8;
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



/* Entry: 10540aa80; end: 10540ab63; -[UNISCJanusLoginService fetchLoginOptionsWithRequest:callOptionsBuilder:handler:] */

void FUN_10540aa80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8bb8;
  _objc_opt_class(PTR_PTR_1126b8bb8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda2d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540ab64; end: 10540ac47; -[UNISCJanusLoginService appLoginWithRequest:callOptionsBuilder:handler:] */

void FUN_10540ab64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8bc0;
  _objc_opt_class(PTR_PTR_1126b8bc0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db05b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540ac48; end: 10540ad2b; -[UNISCJanusLoginService appLoginAnswerChallengeWithRequest:callOptionsBuilder:handler:] */

void FUN_10540ac48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8bc8;
  _objc_opt_class(PTR_PTR_1126b8bc8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda2f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540ad2c; end: 10540ae0f; -[UNISCJanusLoginService loginWithPasswordWithRequest:callOptionsBuilder:handler:] */

void FUN_10540ad2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8bd0;
  _objc_opt_class(PTR_PTR_1126b8bd0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda318,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540ae10; end: 10540aef3; -[UNISCJanusLoginService loginWith1TLv1WithRequest:callOptionsBuilder:handler:] */

void FUN_10540ae10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8bd8;
  _objc_opt_class(PTR_PTR_1126b8bd8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda338,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540aef4; end: 10540afd7; -[UNISCJanusLoginService loginWith1TLv3WithRequest:callOptionsBuilder:handler:] */

void FUN_10540aef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8be0;
  _objc_opt_class(PTR_PTR_1126b8be0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda358,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540afd8; end: 10540b0bb; -[UNISCJanusLoginService sendLoginCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_10540afd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8be8;
  _objc_opt_class(PTR_PTR_1126b8be8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda378,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b0bc; end: 10540b19f; -[UNISCJanusLoginService sendODLVCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b0bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8bf0;
  _objc_opt_class(PTR_PTR_1126b8bf0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda398,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b1a0; end: 10540b283; -[UNISCJanusLoginService sendTwoFACodeWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b1a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8bf8;
  _objc_opt_class(PTR_PTR_1126b8bf8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda3b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b284; end: 10540b367; -[UNISCJanusLoginService sendChannelVerificationCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c00;
  _objc_opt_class(PTR_PTR_1126b8c00);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda3d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b368; end: 10540b44b; -[UNISCJanusLoginService verifyLoginCodeWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c08;
  _objc_opt_class(PTR_PTR_1126b8c08);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda3f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b44c; end: 10540b52f; -[UNISCJanusLoginService verifyODLVWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b44c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c10;
  _objc_opt_class(PTR_PTR_1126b8c10);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db0598,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b530; end: 10540b613; -[UNISCJanusLoginService verifyTwoFAWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c18;
  _objc_opt_class(PTR_PTR_1126b8c18);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda418,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b614; end: 10540b6f7; -[UNISCJanusLoginService verifyChannelWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c20;
  _objc_opt_class(PTR_PTR_1126b8c20);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda438,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b6f8; end: 10540b7db; -[UNISCJanusLoginService reactivateAccountWithRequest:callOptionsBuilder:handler:] */

void FUN_10540b6f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c28;
  _objc_opt_class(PTR_PTR_1126b8c28);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dda458,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540b7dc; end: 10540b7e7; -[UNISCJanusLoginService .cxx_destruct] */

void FUN_10540b7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10540b7e8; end: 10540b9a3;  */

void FUN_10540b7e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b8c30;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = param_1;
  func_0x00010bfdebe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20(puVar2);
  func_0x00010c1a7540(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = param_1;
  func_0x00010c085320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20(puVar2);
  func_0x00010c1b64c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c11a480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5720(puVar1);
  _objc_release(uVar3);
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  func_0x00010c220e20(puVar1);
  uVar3 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110886810);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b8c38;
  func_0x00010c0cb140(PTR_PTR_1126b8c38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80(uVar3);
  func_0x00010c1a7560(puVar2);
  _objc_release(uVar4);
  func_0x00010c212d60(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10540b9a4; end: 10540b9f3;  */

void FUN_10540b9a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff6b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10540b9f4; end: 10540baf7;  */

void FUN_10540b9f4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8c40;
  _objc_retain();
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193280();
  _objc_release(param_1);
  func_0x00010b88c2b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeaa0(puVar1);
  _objc_release(param_1);
  func_0x00010c1bd460(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10540baf8; end: 10540bb43;  */

undefined ** FUN_10540baf8(long param_1)

{
  if (param_1 - 8U < 0x19) {
    return (undefined **)(&PTR_PTR_110886830)[param_1 - 8U];
  }
  return &PTR____CFConstantStringClassReference_110db05b8;
}



/* Entry: 10540bb44; end: 10540bbd7;  */

void FUN_10540bb44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10540bbd8;
  puStack_30 = &UNK_1108868f8;
  uStack_28 = param_1;
  _objc_retain(param_1);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10540bbd8; end: 10540bd47;  */

void FUN_10540bbd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,30000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "com.snapchat.janus.loginServiceGRPCClient");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar2,param_2,puVar3,0x19,0,0x17);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcfa00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b8c48;
  _objc_alloc(PTR_PTR_1126b8c48);
  func_0x00010c058f80();
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10540bd48; end: 10540c8f3;  */

void FUN_10540bd48(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c16c6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c1eeba0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010befab20(puVar5,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dd9d18;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd9d38;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd9cb8;
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  param_1 = param_1 * 1000.0;
  dVar15 = param_1;
  func_0x00010c14de00(puVar10,param_3,&PTR____CFConstantStringClassReference_110dba0f8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = (undefined **)&ppuStack_88;
  uVar21 = 2;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_78,ppuVar19,2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0d3c80();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release();
  func_0x000106bfde08();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda4b8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde14();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde14();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda4d8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dd9d58;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde2c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde2c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dd9db8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde38();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde38();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dd9d78;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde44();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde44();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda4f8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde50();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde50();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda518;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde5c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde5c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda538;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde68();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde68();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda558;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde74();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde74();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda578;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda598;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde8c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde8c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda5b8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfde98();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfde98();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda5d8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfdea4();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfdea4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda5f8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfdeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000106bfdeb0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dda618;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release();
  }
  func_0x000106bfdebc();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c08fa60();
  _objc_release(puVar9);
  if (puVar10 != (undefined *)0x0) {
    func_0x000106bfdebc();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR____CFConstantStringClassReference_110dadcb8;
    func_0x00010c1d0640(puVar12,param_3,puVar9);
    _objc_release(puVar9);
  }
  puVar10 = puVar8;
  puVar9 = puVar12;
  func_0x00010bef9140(puVar8,param_3,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar2 = ppuStack_78;
    ppuVar1 = ppuStack_80;
    ppuVar20 = ppuStack_88;
    _objc_retain(puVar9);
    _objc_retain(in_x7);
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar1);
    _objc_retain(ppuVar20);
    _objc_retain(param_1);
    _objc_retain(in_x6);
    _objc_retain(in_x5);
    _objc_retain(uVar21);
    _objc_retain(ppuVar19);
    puVar4 = puVar3;
    FUN_10540baf8(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b8c50;
    func_0x00010c0cb140(PTR_PTR_1126b8c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171a40();
    _objc_release(ppuVar20);
    uVar13 = in_x5;
    func_0x00010c269d40(in_x5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_x5);
    uVar14 = uVar13;
    func_0x00010bfc74a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c08c0(puVar10,param_3,uVar14);
    _objc_release(uVar14);
    _objc_release(uVar13);
    uVar13 = in_x6;
    func_0x00010c269d40(in_x6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_x6);
    uVar14 = uVar13;
    func_0x00010c15ffa0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c8e0(puVar10,param_3,uVar14);
    _objc_release(uVar14);
    _objc_release(uVar13);
    uVar13 = uVar21;
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
    uVar21 = uVar13;
    func_0x00010c25d160(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17de60(puVar10,param_3,uVar21);
    _objc_release(uVar21);
    _objc_release(uVar13);
    func_0x00010c1aee20(puVar10,param_3,ppuVar19);
    _objc_release(ppuVar19);
    func_0x00010c1cc560(puVar10,param_3,ppuVar1);
    _objc_release(ppuVar1);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,puVar9);
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR_PTR_1126afab0;
      func_0x00010c0cb140(PTR_PTR_1126afab0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      func_0x00010c18cf20(puVar10,param_3,puVar5);
      _objc_release(puVar5);
    }
    uVar21 = in_x7;
    func_0x00010c269d40(in_x7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720(dVar15 * 1000.0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar21;
    func_0x00010bfbf000(uVar21,param_3,puVar5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(uVar21);
    func_0x00010c17ca60(puVar10,param_3,uVar13);
    dVar15 = param_1;
    func_0x00010bfca0e0(param_1,param_3,0x60);
    _objc_retainAutoreleasedReturnValue();
    dVar16 = param_1;
    func_0x00010bfca0e0(param_1,param_3,0x65);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar5 = PTR_PTR_1126b7828;
    dVar17 = dVar15;
    func_0x00010bf529e0(dVar15);
    dVar18 = dVar16;
    func_0x00010bf529e0(dVar16);
    func_0x00010bf0a0e0(puVar5,param_3,(long)dVar18 + (long)dVar17);
    _objc_retainAutoreleasedReturnValue();
    dVar17 = dVar15;
    func_0x00010bf529e0();
    if (dVar17 != 0.0) {
      func_0x00010befc860(puVar5,param_3,dVar15);
    }
    dVar17 = dVar16;
    func_0x00010bf529e0();
    if (dVar17 != 0.0) {
      func_0x00010befc860(puVar5,param_3,dVar16);
    }
    puVar6 = PTR_PTR_1126b7820;
    func_0x00010c0cb140(PTR_PTR_1126b7820);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcf40();
    func_0x00010c17de40(puVar10,param_3,puVar6);
    ppuVar19 = ppuVar2;
    func_0x00010c269d40(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    func_0x00010540bb20(puVar3);
    ppuVar20 = ppuVar19;
    func_0x00010bfc3c20(ppuVar19,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d780(puVar10,param_3,ppuVar20);
    _objc_release(ppuVar20);
    _objc_release(ppuVar19);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(dVar16);
    _objc_release(dVar15);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(in_x7);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10540c8f4; end: 10540c9db;  */

void FUN_10540c8f4(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  puVar3 = PTR_PTR_1126b8c58;
  _objc_retain();
  _objc_alloc(puVar3);
  uVar4 = param_1;
  func_0x00010c0ddda0(param_1);
  uVar5 = param_1;
  func_0x00010c1605e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c118940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf6d1e0();
  _objc_release(param_1);
  iVar8 = (int)uVar7;
  uVar1 = 3;
  if (iVar8 == 1) {
    uVar1 = 2;
  }
  uVar2 = 1;
  if (iVar8 != 0) {
    uVar2 = uVar1;
  }
  uVar1 = 0;
  if (iVar8 != -0x4524111) {
    uVar1 = uVar2;
  }
  func_0x00010c0303e0(puVar3,param_2,uVar4 & 0xffffffff,uVar5,uVar6,uVar1,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10540c9dc; end: 10540ca07; +[SCGrapheneJanusMetric janusRequest] */

void FUN_10540c9dc(void)

{
  _objc_alloc(PTR_PTR_1126af590);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10540ca08; end: 10540ca33; +[SCGrapheneJanusMetric janusResponse] */

void FUN_10540ca08(void)

{
  _objc_alloc(PTR_PTR_1126af590);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10540ca34; end: 10540cad3; -[SCGrapheneJanusMetric description] */

void FUN_10540ca34(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dda638;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dda638,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e83c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10540cad4; end: 10540cc9b; -[SCGrapheneRegistry janusGraphene] */

void FUN_10540cad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10540cb5c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bbb58 != -1) {
    func_0x00010002a2fc(0x1136bbb58,&puStack_48);
  }
  uVar1 = uRam00000001136bbb50;
  _objc_retain(uRam00000001136bbb50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10540cc9c; end: 10540ccb3;  */

uint FUN_10540cc9c(uint param_1)

{
  return (uint)(param_1 < 0xd) & 0x1e17U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540ccb4; end: 10540cd1b; +[SCJanusAppLoginAnswerChallengeRequest descriptor] */

void FUN_10540ccb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35f60,
                        &PTR____CFConstantStringClassReference_110dda6b8,
                        &PTR_s_snapchat_janus_api_1130d6640,&PTR_s_loginContext_1130d6658,5,0x30,
                        0x1c);
    puRam00000001136bbb68 = puVar1;
  }
  return;
}



/* Entry: 10540cd1c; end: 10540cda7; +[SCJanusAppLoginAnswerChallengeResponse descriptor] */

undefined * FUN_10540cd1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a35fb0,
                        &PTR____CFConstantStringClassReference_110dda6d8,
                        &PTR_s_snapchat_janus_api_1130d6640,&PTR_s_statusCode_1130d66f8,7,0x38,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbb70 = puVar1;
  }
  return puRam00000001136bbb70;
}



/* Entry: 10540cda8; end: 10540ce5b;  */

undefined * FUN_10540cda8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8bc8;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540ce5c; end: 10540ce73;  */

uint FUN_10540ce5c(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0x803U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540ce74; end: 10540cedb; +[SCJanusFetchLoginOptionsRequest descriptor] */

void FUN_10540ce74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36050,
                        &PTR____CFConstantStringClassReference_110dda718,
                        &PTR_s_snapchat_janus_api_1130d67d8,
                        &PTR_s_authenticationSessionPayload_1130d67f0,2,0x18,0x1c);
    puRam00000001136bbb80 = puVar1;
  }
  return;
}



/* Entry: 10540cedc; end: 10540cff7; +[SCJanusFetchLoginOptionsResponse descriptor] */

void FUN_10540cedc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbb88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a360a0,
                        &PTR____CFConstantStringClassReference_110dda738,
                        &PTR_s_snapchat_janus_api_1130d67d8,&PTR_s_statusCode_1130d6830,4,0x20,0x1c)
    ;
    puRam00000001136bbb88 = puVar1;
  }
  return;
}



/* Entry: 10540cff8; end: 10540d013;  */

uint FUN_10540cff8(uint param_1)

{
  return (uint)(param_1 < 0x11) & 0x1fc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540d014; end: 10540d08f;  */

undefined * FUN_10540d014(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbb98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda778,
                        &UNK_10dda9718,&UNK_10dda97a8,9,FUN_10540d090,0);
    do {
      if (puRam00000001136bbb98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbb98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbb98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbb98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbb98;
}



/* Entry: 10540d090; end: 10540d0a7;  */

uint FUN_10540d090(uint param_1)

{
  return (uint)(param_1 < 0x10) & 0xfc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540d0a8; end: 10540d10f; +[SCJanusSendChannelCodeData descriptor] */

void FUN_10540d0a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36140,
                        &PTR____CFConstantStringClassReference_110dda798,
                        &PTR_s_snapchat_janus_api_1130d68c8,0,0,4,0x1c);
    puRam00000001136bbba0 = puVar1;
  }
  return;
}



/* Entry: 10540d110; end: 10540d19b; +[SCJanusSendChannelVerificationCodeRequest descriptor] */

undefined * FUN_10540d110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36190,
                        &PTR____CFConstantStringClassReference_110dda7b8,
                        &PTR_s_snapchat_janus_api_1130d68c8,
                        &PTR_s_channelVerificationToken_1130d68e0,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bbba8 = puVar1;
  }
  return puRam00000001136bbba8;
}



/* Entry: 10540d19c; end: 10540d227; +[SCJanusSendChannelVerificationCodeResponse descriptor] */

undefined * FUN_10540d19c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbbb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a361e0,
                        &PTR____CFConstantStringClassReference_110dda7d8,
                        &PTR_s_snapchat_janus_api_1130d68c8,&PTR_s_statusCode_1130d6960,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbbb0 = puVar1;
  }
  return puRam00000001136bbbb0;
}



/* Entry: 10540d228; end: 10540d25f;  */

undefined * FUN_10540d228(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8c00;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540d260; end: 10540d2c7; +[SCJanusVerifyChannelRequest descriptor] */

void FUN_10540d260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbbb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36230,
                        &PTR____CFConstantStringClassReference_110dda7f8,
                        &PTR_s_snapchat_janus_api_1130d68c8,
                        &PTR_s_channelVerificationToken_1130d6a60,5,0x30,0x1c);
    puRam00000001136bbbb8 = puVar1;
  }
  return;
}



/* Entry: 10540d2c8; end: 10540d353; +[SCJanusVerifyChannelResponse descriptor] */

undefined * FUN_10540d2c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbbc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36280,
                        &PTR____CFConstantStringClassReference_110dda818,
                        &PTR_s_snapchat_janus_api_1130d68c8,&PTR_s_statusCode_1130d69e0,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbbc0 = puVar1;
  }
  return puRam00000001136bbbc0;
}



/* Entry: 10540d354; end: 10540d407;  */

undefined * FUN_10540d354(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8c20;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540d408; end: 10540d413;  */

bool FUN_10540d408(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10540d414; end: 10540d48f;  */

undefined * FUN_10540d414(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbbd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda858,
                        &UNK_10dda9804,&UNK_10dda98b4,10,FUN_10540d490,0);
    do {
      if (puRam00000001136bbbd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbbd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbbd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbbd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbbd0;
}



/* Entry: 10540d490; end: 10540d4ab;  */

uint FUN_10540d490(uint param_1)

{
  return (uint)(param_1 < 0x11) & 0x1fc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540d4ac; end: 10540d527;  */

undefined * FUN_10540d4ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbbd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda878,
                        &UNK_10dda98dc,&UNK_10dda996c,9,FUN_10540d528,0);
    do {
      if (puRam00000001136bbbd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbbd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbbd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbbd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbbd8;
}



/* Entry: 10540d528; end: 10540d53f;  */

uint FUN_10540d528(uint param_1)

{
  return (uint)(param_1 < 0x10) & 0xfc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540d540; end: 10540d5a7; +[SCJanusSendODLVCodeData descriptor] */

void FUN_10540d540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbbe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36320,
                        &PTR____CFConstantStringClassReference_110dda898,
                        &PTR_s_snapchat_janus_api_1130d6b10,&PTR_s_phoneDeliveryMethod_1130d6b28,1,8
                        ,0x1c);
    puRam00000001136bbbe0 = puVar1;
  }
  return;
}



/* Entry: 10540d5a8; end: 10540d60f; +[SCJanusSendODLVCodeRequest descriptor] */

void FUN_10540d5a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbbe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36370,
                        &PTR____CFConstantStringClassReference_110dda8b8,
                        &PTR_s_snapchat_janus_api_1130d6b10,&PTR_s_odlvToken_1130d6b48,4,0x18,0x1c);
    puRam00000001136bbbe8 = puVar1;
  }
  return;
}



/* Entry: 10540d610; end: 10540d69b; +[SCJanusSendODLVCodeResponse descriptor] */

undefined * FUN_10540d610(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbbf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a363c0,
                        &PTR____CFConstantStringClassReference_110dda8d8,
                        &PTR_s_snapchat_janus_api_1130d6b10,&PTR_s_statusCode_1130d6bc8,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbbf0 = puVar1;
  }
  return puRam00000001136bbbf0;
}



/* Entry: 10540d69c; end: 10540d6d3;  */

undefined * FUN_10540d69c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8bf0;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540d6d4; end: 10540d73b; +[SCJanusVerifyODLVRequest descriptor] */

void FUN_10540d6d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbbf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36410,
                        &PTR____CFConstantStringClassReference_110dda8f8,
                        &PTR_s_snapchat_janus_api_1130d6b10,&PTR_s_odlvToken_1130d6cc8,6,0x30,0x1c);
    puRam00000001136bbbf8 = puVar1;
  }
  return;
}



/* Entry: 10540d73c; end: 10540d7c7; +[SCJanusVerifyODLVResponse descriptor] */

undefined * FUN_10540d73c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36460,
                        &PTR____CFConstantStringClassReference_110dda918,
                        &PTR_s_snapchat_janus_api_1130d6b10,&PTR_s_statusCode_1130d6c48,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbc00 = puVar1;
  }
  return puRam00000001136bbc00;
}



/* Entry: 10540d7c8; end: 10540d87b;  */

undefined * FUN_10540d7c8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8c10;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540d87c; end: 10540d887;  */

bool FUN_10540d87c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10540d888; end: 10540d903;  */

undefined * FUN_10540d888(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbc10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda958,
                        &UNK_10dda99c8,&UNK_10dda9a78,10,FUN_10540d904,0);
    do {
      if (puRam00000001136bbc10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbc10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbc10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbc10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbc10;
}



/* Entry: 10540d904; end: 10540d91f;  */

uint FUN_10540d904(uint param_1)

{
  return (uint)(param_1 < 0x11) & 0x1fc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540d920; end: 10540d99b;  */

undefined * FUN_10540d920(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbc18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dda978,
                        &UNK_10dda9aa0,&UNK_10dda9b30,9,FUN_10540d99c,0);
    do {
      if (puRam00000001136bbc18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbc18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbc18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbc18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbc18;
}



/* Entry: 10540d99c; end: 10540d9b3;  */

uint FUN_10540d99c(uint param_1)

{
  return (uint)(param_1 < 0x10) & 0xfc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540d9b4; end: 10540da1b; +[SCJanusSendTwoFACodeData descriptor] */

void FUN_10540d9b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36550,
                        &PTR____CFConstantStringClassReference_110dda998,
                        &PTR_s_snapchat_janus_api_1130d6d98,&PTR_s_phoneDeliveryMethod_1130d6db0,1,8
                        ,0x1c);
    puRam00000001136bbc20 = puVar1;
  }
  return;
}



/* Entry: 10540da1c; end: 10540da83; +[SCJanusSendTwoFACodeRequest descriptor] */

void FUN_10540da1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a365a0,
                        &PTR____CFConstantStringClassReference_110dda9b8,
                        &PTR_s_snapchat_janus_api_1130d6d98,&PTR_s_twoFaToken_1130d6dd0,4,0x18,0x1c)
    ;
    puRam00000001136bbc28 = puVar1;
  }
  return;
}



/* Entry: 10540da84; end: 10540db0f; +[SCJanusSendTwoFACodeResponse descriptor] */

undefined * FUN_10540da84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a365f0,
                        &PTR____CFConstantStringClassReference_110dda9d8,
                        &PTR_s_snapchat_janus_api_1130d6d98,&PTR_s_statusCode_1130d6e50,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbc30 = puVar1;
  }
  return puRam00000001136bbc30;
}



/* Entry: 10540db10; end: 10540db47;  */

undefined * FUN_10540db10(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8bf8;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540db48; end: 10540dbaf; +[SCJanusVerifyTwoFARequest descriptor] */

void FUN_10540db48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36640,
                        &PTR____CFConstantStringClassReference_110dda9f8,
                        &PTR_s_snapchat_janus_api_1130d6d98,&PTR_s_twoFaToken_1130d6f70,7,0x30,0x1c)
    ;
    puRam00000001136bbc38 = puVar1;
  }
  return;
}



/* Entry: 10540dbb0; end: 10540dc3b; +[SCJanusVerifyTwoFAResponse descriptor] */

undefined * FUN_10540dbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36690,
                        &PTR____CFConstantStringClassReference_110ddaa18,
                        &PTR_s_snapchat_janus_api_1130d6d98,&PTR_s_statusCode_1130d6ed0,5,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbc40 = puVar1;
  }
  return puRam00000001136bbc40;
}



/* Entry: 10540dc3c; end: 10540dcef;  */

undefined * FUN_10540dc3c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8c18;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540dcf0; end: 10540dcfb;  */

bool FUN_10540dcf0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10540dcfc; end: 10540dd77;  */

undefined * FUN_10540dcfc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbc50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddaa58,
                        &UNK_10dda9ba0,&UNK_10dda9bb4,3,FUN_10540dd78,0);
    do {
      if (puRam00000001136bbc50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbc50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbc50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbc50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbc50;
}



/* Entry: 10540dd78; end: 10540dd83;  */

bool FUN_10540dd78(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10540dd84; end: 10540ddff;  */

undefined * FUN_10540dd84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbc58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddaa78,
                        &UNK_10dda9bc0,&UNK_10dda9bfc,5,FUN_10540de00,0);
    do {
      if (puRam00000001136bbc58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbc58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbc58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbc58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbc58;
}



/* Entry: 10540de00; end: 10540de17;  */

uint FUN_10540de00(uint param_1)

{
  return (uint)(param_1 < 7) & 0x67U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540de18; end: 10540de7f; +[SCAccountEmailServicePbConfirmEmailRequest descriptor] */

void FUN_10540de18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36780,
                        &PTR____CFConstantStringClassReference_110ddaa98,
                        &PTR_s_snapchat_activation_api_1130d7050,&PTR_s_token_1130d7088,7,0x38,0x1c)
    ;
    puRam00000001136bbc60 = puVar1;
  }
  return;
}



/* Entry: 10540de80; end: 10540df63; +[SCAccountEmailServicePbConfirmEmailResponse descriptor] */

void FUN_10540de80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a367d0,
                        &PTR____CFConstantStringClassReference_110ddaab8,
                        &PTR_s_snapchat_activation_api_1130d7050,&PTR_s_statusCode_1130d7068,1,8,
                        0x1c);
    puRam00000001136bbc68 = puVar1;
  }
  return;
}


