/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afabc80; end: 10afabc87; -[SCSpotlightReplyBuilder withIsFavoritedByCreator:] */

void FUN_10afabc80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 10afabc88; end: 10afabcbf; -[SCSpotlightReplyBuilder withGetRepliesRequestId:] */

long FUN_10afabc88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afabcc0; end: 10afabda3; -[SCSpotlightReplyBuilder .cxx_destruct] */

void FUN_10afabcc0(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 10afabda4; end: 10afabe4f; -[SCSpotlightSnapReply initWithSnaps:discoverMetadata:] */

undefined1 *
FUN_10afabda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127037a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afabe50; end: 10afabe73; -[SCSpotlightSnapReply copyWithZone:] */

undefined8 FUN_10afabe50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afabe74; end: 10afabee7; -[SCSpotlightSnapReply hash] */

undefined8 * FUN_10afabe74(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afabf68:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afabf74;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10afabf74;
        }
        goto LAB_10afabf68;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afabf74:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afabee8; end: 10afabf8f; -[SCSpotlightSnapReply isEqual:] */

long FUN_10afabee8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afabf68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afabf74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10afabf74;
        }
        goto LAB_10afabf68;
      }
    }
    lVar3 = 0;
  }
LAB_10afabf74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afabf90; end: 10afabf97; -[SCSpotlightSnapReply snaps] */

undefined8 FUN_10afabf90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afabf98; end: 10afabf9f; -[SCSpotlightSnapReply discoverMetadata] */

undefined8 FUN_10afabf98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afabfa0; end: 10afabfcf; -[SCSpotlightSnapReply .cxx_destruct] */

void FUN_10afabfa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afabfd0; end: 10afabfeb; +[SCSpotlightSnapReplyBuilder spotlightSnapReply] */

void FUN_10afabfd0(void)

{
  _objc_alloc_init(PTR_PTR_1126df290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afabfec; end: 10afac0bf; +[SCSpotlightSnapReplyBuilder spotlightSnapReplyFromExistingSpotlightSnapReply:] */

void FUN_10afabfec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126df290;
  _objc_retain(param_3);
  func_0x00010c24c360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b9a60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf82560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c2ac6a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10afac0c0; end: 10afac0ef; -[SCSpotlightSnapReplyBuilder build] */

void FUN_10afac0c0(void)

{
  _objc_alloc(PTR_PTR_1126c0f98);
  func_0x00010c04a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afac0f0; end: 10afac127; -[SCSpotlightSnapReplyBuilder withSnaps:] */

long FUN_10afac0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afac128; end: 10afac15f; -[SCSpotlightSnapReplyBuilder withDiscoverMetadata:] */

long FUN_10afac128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afac160; end: 10afac18f; -[SCSpotlightSnapReplyBuilder .cxx_destruct] */

void FUN_10afac160(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afac190; end: 10afac1fb; +[SCSpotlightReplyAttachment ctItemInstanceWithItemInstance:sectionName:] */

void FUN_10afac190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5ff8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afac1fc; end: 10afac377; -[SCSpotlightReplyAttachment initWithCoder:] */

undefined8 * FUN_10afac1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1127037b0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) goto LAB_10afac304;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf66f40();
    puVar1[3] = uVar2;
    puVar1[1] = 0;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10afac304:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10afac378; end: 10afac39b; -[SCSpotlightReplyAttachment copyWithZone:] */

undefined8 FUN_10afac378(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afac39c; end: 10afac41f; -[SCSpotlightReplyAttachment encodeWithCoder:] */

void FUN_10afac39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f40fd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f40ff8);
  func_0x00010c14cb00(param_3,param_2,&PTR____CFConstantStringClassReference_110f40fb8,
                      &PTR____CFConstantStringClassReference_110db7018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afac420; end: 10afac497; -[SCSpotlightReplyAttachment hash] */

void FUN_10afac420(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1127037b0;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afac498; end: 10afac4db; -[SCSpotlightReplyAttachment internalInit] */

void FUN_10afac498(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127037b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afac4dc; end: 10afac58b; -[SCSpotlightReplyAttachment isEqual:] */

long FUN_10afac4dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afac570;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10afac570;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afac570;
    }
  }
  lVar3 = 1;
LAB_10afac570:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afac58c; end: 10afac5af; -[SCSpotlightReplyAttachment matchCtItemInstance:] */

void FUN_10afac58c(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010afac5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



/* Entry: 10afac5b0; end: 10afac5bb; -[SCSpotlightReplyAttachment .cxx_destruct] */

void FUN_10afac5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afac5bc; end: 10afac6c7; -[SCSpotlightReplyMention initWithCoder:] */

undefined1 * FUN_10afac5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127037b8;
  puVar3 = PTR_s_init_1125d9248;
  uStack_40 = param_1;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    _NSRangeFromString();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afac6c8; end: 10afac7b3; -[SCSpotlightReplyMention initWithUserId:displayName:publicProfileId:range:] */

undefined1 *
FUN_10afac6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127037b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afac7b4; end: 10afac7d7; -[SCSpotlightReplyMention copyWithZone:] */

undefined8 FUN_10afac7b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afac7d8; end: 10afac87b; -[SCSpotlightReplyMention encodeWithCoder:] */

void FUN_10afac7d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3);
  func_0x00010c14cb00(param_3);
  func_0x00010c14cb00(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _NSStringFromRange(uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10afac87c; end: 10afac903; -[SCSpotlightReplyMention hash] */

undefined8 * FUN_10afac87c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afac9c0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afac9cc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      puVar6 = (undefined1 *)0x0;
      if ((*(long *)((long)puVar3 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)((long)puVar3 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_10afac9cc;
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afac9cc;
          }
          goto LAB_10afac9c0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afac9cc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afac904; end: 10afac9e7; -[SCSpotlightReplyMention isEqual:] */

long FUN_10afac904(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afac9c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afac9cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = 0;
      if ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20)) ||
         (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) goto LAB_10afac9cc;
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afac9cc;
          }
          goto LAB_10afac9c0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afac9cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afac9e8; end: 10afac9ef; -[SCSpotlightReplyMention userId] */

undefined8 FUN_10afac9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afac9f0; end: 10afac9f7; -[SCSpotlightReplyMention displayName] */

undefined8 FUN_10afac9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afac9f8; end: 10afac9ff; -[SCSpotlightReplyMention publicProfileId] */

undefined8 FUN_10afac9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afaca00; end: 10afaca0b; -[SCSpotlightReplyMention range] */

undefined1  [16] FUN_10afaca00(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10afaca0c; end: 10afaca47; -[SCSpotlightReplyMention .cxx_destruct] */

void FUN_10afaca0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afaca48; end: 10afaca63; +[SCSpotlightReplyMentionBuilder spotlightReplyMention] */

void FUN_10afaca48(void)

{
  _objc_alloc_init(PTR_PTR_1126c0ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afaca64; end: 10afacbb7; +[SCSpotlightReplyMentionBuilder spotlightReplyMentionFromExistingSpotlightReplyMention:] */

void FUN_10afaca64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126c0ed8;
  _objc_retain(param_3);
  func_0x00010c24bfe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bc360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac7a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c11a720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b63e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f2a0(param_3);
  _objc_release(param_3);
  puVar8 = puVar7;
  func_0x00010c2b66e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10afacbb8; end: 10afacbef; -[SCSpotlightReplyMentionBuilder build] */

void FUN_10afacbb8(void)

{
  _objc_alloc(PTR_PTR_1126c9038);
  func_0x00010c05b140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afacbf0; end: 10afacc27; -[SCSpotlightReplyMentionBuilder withUserId:] */

long FUN_10afacbf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afacc28; end: 10afacc5f; -[SCSpotlightReplyMentionBuilder withDisplayName:] */

long FUN_10afacc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afacc60; end: 10afacc97; -[SCSpotlightReplyMentionBuilder withPublicProfileId:] */

long FUN_10afacc60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afacc98; end: 10afacc9f; -[SCSpotlightReplyMentionBuilder withRange:] */

void FUN_10afacc98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  return;
}



/* Entry: 10afacca0; end: 10afaccdb; -[SCSpotlightReplyMentionBuilder .cxx_destruct] */

void FUN_10afacca0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afaccdc; end: 10afacd97; -[SCSpotlightReplySuggestedSearch initWithCoder:] */

undefined1 * FUN_10afaccdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127037c0;
  puVar3 = PTR_s_init_1125d9248;
  uStack_40 = param_1;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    _NSRangeFromString();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afacd98; end: 10aface23; -[SCSpotlightReplySuggestedSearch initWithSearchQueryText:range:] */

undefined1 *
FUN_10afacd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127037c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aface24; end: 10aface47; -[SCSpotlightReplySuggestedSearch copyWithZone:] */

undefined8 FUN_10aface24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aface48; end: 10afacec3; -[SCSpotlightReplySuggestedSearch encodeWithCoder:] */

void FUN_10aface48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _NSStringFromRange(uVar1,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10afacec4; end: 10afacf33; -[SCSpotlightReplySuggestedSearch hash] */

undefined8 * FUN_10afacec4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afacfc4;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    puVar4 = (undefined1 *)0x0;
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) goto LAB_10afacfc4;
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afacfc4;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10afacfc4:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10afacf34; end: 10afacfdf; -[SCSpotlightReplySuggestedSearch isEqual:] */

long FUN_10afacf34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afacfc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    lVar3 = 0;
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) goto LAB_10afacfc4;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afacfc4;
    }
  }
  lVar3 = 1;
LAB_10afacfc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afacfe0; end: 10afacfe7; -[SCSpotlightReplySuggestedSearch searchQueryText] */

undefined8 FUN_10afacfe0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afacfe8; end: 10afacff3; -[SCSpotlightReplySuggestedSearch range] */

undefined1  [16] FUN_10afacfe8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10afacff4; end: 10afacfff; -[SCSpotlightReplySuggestedSearch .cxx_destruct] */

void FUN_10afacff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afad000; end: 10afad01b; +[SCSpotlightReplySuggestedSearchBuilder spotlightReplySuggestedSearch] */

void FUN_10afad000(void)

{
  _objc_alloc_init(PTR_PTR_1126c0ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afad01c; end: 10afad0e7; +[SCSpotlightReplySuggestedSearchBuilder spotlightReplySuggestedSearchFromExistingSpotlightReplySuggestedSearch:] */

void FUN_10afad01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c0ee0;
  _objc_retain(param_3);
  func_0x00010c24c040(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c153fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b7be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f2a0(param_3);
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c2b66e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10afad0e8; end: 10afad11b; -[SCSpotlightReplySuggestedSearchBuilder build] */

void FUN_10afad0e8(void)

{
  _objc_alloc(PTR_PTR_1126df298);
  func_0x00010c042a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afad11c; end: 10afad153; -[SCSpotlightReplySuggestedSearchBuilder withSearchQueryText:] */

long FUN_10afad11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afad154; end: 10afad15b; -[SCSpotlightReplySuggestedSearchBuilder withRange:] */

void FUN_10afad154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}



/* Entry: 10afad15c; end: 10afad167; -[SCSpotlightReplySuggestedSearchBuilder .cxx_destruct] */

void FUN_10afad15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afad168; end: 10afad1db; -[SCSpotlightRepliesSectionContentDataModel initWithCoder:] */

undefined1 * FUN_10afad168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127037c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afad1dc; end: 10afad223; -[SCSpotlightRepliesSectionContentDataModel initWithDataSourceFetchType:] */

void FUN_10afad1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127037c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10afad224; end: 10afad247; -[SCSpotlightRepliesSectionContentDataModel copyWithZone:] */

undefined8 FUN_10afad224(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afad248; end: 10afad25f; -[SCSpotlightRepliesSectionContentDataModel encodeWithCoder:] */

void FUN_10afad248(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeInteger_forKey__1125c2598,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f41078);
  return;
}



/* Entry: 10afad260; end: 10afad26f; -[SCSpotlightRepliesSectionContentDataModel hash] */

long FUN_10afad260(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10afad270; end: 10afad2f7; -[SCSpotlightRepliesSectionContentDataModel isEqual:] */

bool FUN_10afad270(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afad2f8; end: 10afad2ff; -[SCSpotlightRepliesSectionContentDataModel dataSourceFetchType] */

undefined8 FUN_10afad2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afad300; end: 10afad387; -[SCSpotlightReplyReactionCount initWithCoder:] */

undefined1 * FUN_10afad300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127037d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afad388; end: 10afad3d3; -[SCSpotlightReplyReactionCount initWithReactionTypeId:reactionCount:] */

void FUN_10afad388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127037d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10afad3d4; end: 10afad3f7; -[SCSpotlightReplyReactionCount copyWithZone:] */

undefined8 FUN_10afad3d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afad3f8; end: 10afad457; -[SCSpotlightReplyReactionCount encodeWithCoder:] */

void FUN_10afad3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f41098);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f410b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afad458; end: 10afad4b7; -[SCSpotlightReplyReactionCount hash] */

undefined8 * FUN_10afad458(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)(ulong)(puVar2[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10afad4b8; end: 10afad54f; -[SCSpotlightReplyReactionCount isEqual:] */

bool FUN_10afad4b8(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10afad550; end: 10afad557; -[SCSpotlightReplyReactionCount reactionTypeId] */

undefined8 FUN_10afad550(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afad558; end: 10afad55f; -[SCSpotlightReplyReactionCount reactionCount] */

undefined8 FUN_10afad558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afad560; end: 10afad5e7; -[SCSpotlightReplyRequestQuery initWithCoder:] */

undefined1 * FUN_10afad560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127037d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afad5e8; end: 10afad633; -[SCSpotlightReplyRequestQuery initWithQueryType:approvalState:] */

void FUN_10afad5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127037d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10afad634; end: 10afad657; -[SCSpotlightReplyRequestQuery copyWithZone:] */

undefined8 FUN_10afad634(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afad658; end: 10afad6b7; -[SCSpotlightReplyRequestQuery encodeWithCoder:] */

void FUN_10afad658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f410d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f410f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afad6b8; end: 10afad713; -[SCSpotlightReplyRequestQuery hash] */

undefined8 * FUN_10afad6b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10afad714; end: 10afad7ab; -[SCSpotlightReplyRequestQuery isEqual:] */

bool FUN_10afad714(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10afad7ac; end: 10afad7b3; -[SCSpotlightReplyRequestQuery queryType] */

undefined8 FUN_10afad7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afad7b4; end: 10afad7bb; -[SCSpotlightReplyRequestQuery approvalState] */

undefined8 FUN_10afad7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afad7bc; end: 10afad84b; -[SCCommentsSnapReplyLoggingInfo initWithLoggingSourceLocation:triggeringItemId:triggeringSection:] */

undefined1 *
FUN_10afad7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127037e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afad84c; end: 10afad86f; -[SCCommentsSnapReplyLoggingInfo copyWithZone:] */

undefined8 FUN_10afad84c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afad870; end: 10afad8e7; -[SCCommentsSnapReplyLoggingInfo hash] */

undefined8 * FUN_10afad870(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afad97c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10afad97c;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afad97c;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10afad97c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10afad8e8; end: 10afad997; -[SCCommentsSnapReplyLoggingInfo isEqual:] */

long FUN_10afad8e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afad97c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10afad97c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afad97c;
    }
  }
  lVar3 = 1;
LAB_10afad97c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afad998; end: 10afad99f; -[SCCommentsSnapReplyLoggingInfo loggingSourceLocation] */

undefined8 FUN_10afad998(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afad9a0; end: 10afad9a7; -[SCCommentsSnapReplyLoggingInfo triggeringItemId] */

undefined8 FUN_10afad9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afad9a8; end: 10afad9af; -[SCCommentsSnapReplyLoggingInfo triggeringSection] */

undefined8 FUN_10afad9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afad9b0; end: 10afad9bb; -[SCCommentsSnapReplyLoggingInfo .cxx_destruct] */

void FUN_10afad9b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afad9bc; end: 10afad9c3; -[SCDiscoverFeedLoggingServices lazyDiscoverFeedEventsController] */

undefined8 FUN_10afad9bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afad9c4; end: 10afad9cb; -[SCDiscoverFeedLoggingServices eventsAnnouncer] */

undefined8 FUN_10afad9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afad9cc; end: 10afad9d3; -[SCDiscoverFeedLoggingServices lazyDiscoverFeedLoggingCreator] */

undefined8 FUN_10afad9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afad9d4; end: 10afad9db; -[SCDiscoverFeedLoggingServices discoverLogger] */

undefined8 FUN_10afad9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afad9dc; end: 10afad9e3; -[SCDiscoverFeedLoggingServices discoverPerformanceLogger] */

undefined8 FUN_10afad9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afad9e4; end: 10afad9eb; -[SCDiscoverFeedLoggingServices lensPlayTimeProviderController] */

undefined8 FUN_10afad9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afad9ec; end: 10afada4b; -[SCDiscoverFeedLoggingServices .cxx_destruct] */

void FUN_10afad9ec(long param_1)

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



/* Entry: 10afada4c; end: 10afadfe7; +[SCAFullScreenContentViewSession newObjectWithData:] */

undefined * FUN_10afada4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7070;
  _objc_opt_new(PTR_PTR_1126d7070);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41b38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c1983e0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c1d8800(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42e78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d56e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e5f1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8620(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29c38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c196b80(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29c38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c19b040(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41b18);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c196880(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c78);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c21a480(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9360(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f418b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1d8500(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c19d360(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c19d2c0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1c75c0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f419b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c1b8a20(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41e38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8a40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f419d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  func_0x00010c1983c0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b200(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f419f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  func_0x00010c198480(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41a18);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  func_0x00010c198460(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41938);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c19d640(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d660(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e1fbd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4fe0();
  func_0x00010c205c00(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f426d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4ca0();
  func_0x00010c1d85a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e724b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c215780(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d5e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f427b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f427b8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c1c7440(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f427d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f427d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c1c4180(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afadfe8; end: 10afae057; -[SCDiscoverFeedEventsConfiguration initWithRankingMinimumVisibleFraction:rankingImpressionTimeInterval:adsMinimumVisibleFraction:adsFullyVisibleFraction:adsImpressionTimeInterval:] */

void FUN_10afadfe8(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127037f0;
  uStack_50 = param_6;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined4 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
  }
  return;
}



/* Entry: 10afae058; end: 10afae07b; -[SCDiscoverFeedEventsConfiguration copyWithZone:] */

undefined8 FUN_10afae058(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


