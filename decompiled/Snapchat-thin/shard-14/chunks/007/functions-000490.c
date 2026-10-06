/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b609cd4; end: 10b609d23; -[SCStoriesCreatorEligibility initWithIsEligibleForAffiliateDeeplink:contentVisibility:] */

void FUN_10b609cd4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706898;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 10b609d24; end: 10b609d47; -[SCStoriesCreatorEligibility copyWithZone:] */

undefined8 FUN_10b609d24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b609d48; end: 10b609da7; -[SCStoriesCreatorEligibility encodeWithCoder:] */

void FUN_10b609d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f67df8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f67e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b609da8; end: 10b609e03; -[SCStoriesCreatorEligibility hash] */

ulong * FUN_10b609da8(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  lStack_20 = (long)*(int *)(param_1 + 0xc);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(int *)((long)puVar1 + 0xc) == *(int *)((long)param_3 + 0xc));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b609e04; end: 10b609e9b; -[SCStoriesCreatorEligibility isEqual:] */

bool FUN_10b609e04(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b609e9c; end: 10b609ea3; -[SCStoriesCreatorEligibility isEligibleForAffiliateDeeplink] */

undefined1 FUN_10b609e9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b609ea4; end: 10b609eab; -[SCStoriesCreatorEligibility contentVisibility] */

undefined4 FUN_10b609ea4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b609eac; end: 10b609f6f; -[SCStoriesSnapSponsorInfo initWithCoder:] */

undefined1 * FUN_10b609eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127068a0;
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
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b609f70; end: 10b60a023; -[SCStoriesSnapSponsorInfo initWithProfileId:displayName:sponsorStatus:] */

undefined1 *
FUN_10b609f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127068a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b60a024; end: 10b60a047; -[SCStoriesSnapSponsorInfo copyWithZone:] */

undefined8 FUN_10b60a024(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b60a048; end: 10b60a0bb; -[SCStoriesSnapSponsorInfo encodeWithCoder:] */

void FUN_10b60a048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ebcff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f12f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b60a0bc; end: 10b60a133; -[SCStoriesSnapSponsorInfo hash] */

undefined8 * FUN_10b60a0bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b60a1c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b60a1d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b60a1d0;
        }
        goto LAB_10b60a1c4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b60a1d0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b60a134; end: 10b60a1eb; -[SCStoriesSnapSponsorInfo isEqual:] */

long FUN_10b60a134(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b60a1c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b60a1d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b60a1d0;
        }
        goto LAB_10b60a1c4;
      }
    }
    lVar3 = 0;
  }
LAB_10b60a1d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b60a1ec; end: 10b60a1f3; -[SCStoriesSnapSponsorInfo profileId] */

undefined8 FUN_10b60a1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b60a1f4; end: 10b60a1fb; -[SCStoriesSnapSponsorInfo displayName] */

undefined8 FUN_10b60a1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b60a1fc; end: 10b60a203; -[SCStoriesSnapSponsorInfo sponsorStatus] */

undefined4 FUN_10b60a1fc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b60a204; end: 10b60a233; -[SCStoriesSnapSponsorInfo .cxx_destruct] */

void FUN_10b60a204(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b60a234; end: 10b60ab53; -[SCDiscoverFeedStorySnap initWithCoder:] */

undefined1 *
FUN_10b60a234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127068a8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x58) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined8 *)((long)puVar1 + 0xd0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined8 *)((long)puVar1 + 0xe0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe8);
    *(undefined8 *)((long)puVar1 + 0xe8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xf0);
    *(undefined8 *)((long)puVar1 + 0xf0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xf8);
    *(undefined8 *)((long)puVar1 + 0xf8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x100) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x108) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x110);
    *(undefined8 *)((long)puVar1 + 0x110) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x118) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x120);
    *(undefined8 *)((long)puVar1 + 0x120) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x128);
    *(undefined8 *)((long)puVar1 + 0x128) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x130);
    *(undefined8 *)((long)puVar1 + 0x130) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x138);
    *(undefined8 *)((long)puVar1 + 0x138) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x140);
    *(undefined8 *)((long)puVar1 + 0x140) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x148);
    *(undefined8 *)((long)puVar1 + 0x148) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x150);
    *(undefined8 *)((long)puVar1 + 0x150) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x158);
    *(undefined8 *)((long)puVar1 + 0x158) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x160);
    *(undefined8 *)((long)puVar1 + 0x160) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x168) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x170);
    *(undefined8 *)((long)puVar1 + 0x170) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x178);
    *(undefined8 *)((long)puVar1 + 0x178) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x180);
    *(undefined8 *)((long)puVar1 + 0x180) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x188);
    *(undefined8 *)((long)puVar1 + 0x188) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 400);
    *(undefined8 *)((long)puVar1 + 400) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x198);
    *(undefined8 *)((long)puVar1 + 0x198) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x1a0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1a8);
    *(undefined8 *)((long)puVar1 + 0x1a8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1b0);
    *(undefined8 *)((long)puVar1 + 0x1b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1b8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x1c0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1c8);
    *(undefined8 *)((long)puVar1 + 0x1c8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x1d0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1d8);
    *(undefined8 *)((long)puVar1 + 0x1d8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b60ab54; end: 10b60b56f; -[SCDiscoverFeedStorySnap initWithSnapId:sssId:mediaId:mediaKey:mediaIv:mediaURL:videoStreamingInfo:streamingFailureCode:duration:isZipped:isInfiniteDuration:attachmentUrl:mediaType:sourceType:title:subtitles:displayGeoInfo:creationTime:expirationTime:debugInfo:creatorInfo:pivotInfo:lensData:audioStitchData:hasLensFilter:contextHintData:encryptedGeoData:serializedUnlockablesSnapInfo:boltMedia:boltOverlay:boltAudioTranscription:boltFirstFrame:isAudioTranscriptionEncrypted:brandFriendliness:garmBrandSafety:contentCategories:sequence:boostMetadata:spotlightEngagementMetadata:spotlightStoryCardDisplayMetadata:rotationLocked:snapViewSignature:boltWatermarkedVideoUrl:flatNonWatermarkVideoUrl:snapDescription:sponsor:adsTracking:lastUpdatedAt:cameo:spotlightRepliesEnabledOnSnap:isOwnLocallyPostedContent:scanOnPublicContentEnabled:snapImageThumbnail:snapThumbnailMetadata:managementMetadata:multiSnapInfo:mediaOrigin:storyTypeVariant:inFeedSurvey:fromSnapchatCamera:suggestedSearchQueryCandidates:suggestedSearchType:poiEventEndTimeMs:storyShareProbability:fanPassSnapPlaceholderCount:isSharingDisabled:tileId:] */

undefined8 *
FUN_10b60ab54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28,
             undefined4 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined1 param_37,undefined4 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined1 param_46,undefined4 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined4 param_55,undefined4 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined1 param_64,
             undefined4 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined1 param_71,undefined4 param_72,
             undefined8 param_73)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_41);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_63);
  _objc_retain(param_66);
  _objc_retain(param_69);
  _objc_retain(param_73);
  puStack_80 = PTR_PTR_1127068a8;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_12;
    puVar1[0xb] = param_1;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 9) = param_13._1_1_;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_16;
    puVar1[0xe] = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_28;
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_33;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_34;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_36;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_37;
    puVar1[0x20] = param_39;
    puVar1[0x21] = param_40;
    uVar2 = param_41;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    _objc_release(uVar3);
    puVar1[0x23] = param_42;
    uVar2 = param_43;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_44;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_45;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_46;
    uVar2 = param_48;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_49;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_50;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x29];
    puVar1[0x29] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_51;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_52;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_53;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2c];
    puVar1[0x2c] = uVar2;
    _objc_release(uVar3);
    puVar1[0x2d] = param_2;
    uVar2 = param_54;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2e];
    puVar1[0x2e] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_55;
    *(undefined1 *)((long)puVar1 + 0xe) = param_55._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_55._2_1_;
    uVar2 = param_57;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2f];
    puVar1[0x2f] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_58;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x30];
    puVar1[0x30] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_59;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x31];
    puVar1[0x31] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_60;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x32];
    puVar1[0x32] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_61;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x33];
    puVar1[0x33] = uVar2;
    _objc_release(uVar3);
    puVar1[0x34] = param_62;
    uVar2 = param_63;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x35];
    puVar1[0x35] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 2) = param_64;
    uVar2 = param_66;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x36];
    puVar1[0x36] = uVar2;
    _objc_release(uVar3);
    puVar1[0x37] = param_67;
    puVar1[0x38] = param_68;
    uVar2 = param_69;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x39];
    puVar1[0x39] = uVar2;
    _objc_release(uVar3);
    puVar1[0x3a] = param_70;
    *(undefined1 *)((long)puVar1 + 0x11) = param_71;
    uVar2 = param_73;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3b];
    puVar1[0x3b] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_73);
  _objc_release(param_69);
  _objc_release(param_66);
  _objc_release(param_63);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_41);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b60b570; end: 10b60b593; -[SCDiscoverFeedStorySnap copyWithZone:] */

undefined8 FUN_10b60b570(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b60b594; end: 10b60bb07; -[SCDiscoverFeedStorySnap encodeWithCoder:] */

void FUN_10b60b594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f67e38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ebbe58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4aa78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f67e58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f67bf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f67e78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f67e98);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x58),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f67eb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f17698);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f67ed8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110e287d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f48ef8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110dbb078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110df3318);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f4ad78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110e2dbf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f67ef8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110edcf38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f67f18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110f67f38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110f67f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xc0),
                      &PTR____CFConstantStringClassReference_110f67f78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f67f98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 200),
                      &PTR____CFConstantStringClassReference_110f67fb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd0),
                      &PTR____CFConstantStringClassReference_110f55eb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd8),
                      &PTR____CFConstantStringClassReference_110f67fd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xe0),
                      &PTR____CFConstantStringClassReference_110f67ff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xe8),
                      &PTR____CFConstantStringClassReference_110f68018);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xf0),
                      &PTR____CFConstantStringClassReference_110f68038);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xf8),
                      &PTR____CFConstantStringClassReference_110f4a2f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f68058);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x100),
                      &PTR____CFConstantStringClassReference_110f4afd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x108),
                      &PTR____CFConstantStringClassReference_110ed3738);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x110),
                      &PTR____CFConstantStringClassReference_110f68078);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x118),
                      &PTR____CFConstantStringClassReference_110f4a2b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x120),
                      &PTR____CFConstantStringClassReference_110ed36b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x128),
                      &PTR____CFConstantStringClassReference_110ed36d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x130),
                      &PTR____CFConstantStringClassReference_110f68098);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f680b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x138),
                      &PTR____CFConstantStringClassReference_110f680d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x140),
                      &PTR____CFConstantStringClassReference_110f680f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x148),
                      &PTR____CFConstantStringClassReference_110f68118);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x150),
                      &PTR____CFConstantStringClassReference_110f4b098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x158),
                      &PTR____CFConstantStringClassReference_110f68138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x160),
                      &PTR____CFConstantStringClassReference_110f68158);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x168),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f68178);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x170),
                      &PTR____CFConstantStringClassReference_110e55138);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f68198);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f681b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110f681d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x178),
                      &PTR____CFConstantStringClassReference_110f681f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x180),
                      &PTR____CFConstantStringClassReference_110f68218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x188),
                      &PTR____CFConstantStringClassReference_110f68238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 400),
                      &PTR____CFConstantStringClassReference_110f68258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x198),
                      &PTR____CFConstantStringClassReference_110f68278);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x1a0),
                      &PTR____CFConstantStringClassReference_110f49438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1a8),
                      &PTR____CFConstantStringClassReference_110f68298);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f682b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1b0),
                      &PTR____CFConstantStringClassReference_110f682d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1b8),
                      &PTR____CFConstantStringClassReference_110f682f8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x1c0),
                      &PTR____CFConstantStringClassReference_110f68318);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1c8),
                      &PTR____CFConstantStringClassReference_110f68338);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x1d0),
                      &PTR____CFConstantStringClassReference_110f68358);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                      &PTR____CFConstantStringClassReference_110f68378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1d8),
                      &PTR____CFConstantStringClassReference_110f49158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b60bb08; end: 10b60be5f; -[SCDiscoverFeedStorySnap hash] */

undefined8 * FUN_10b60bb08(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_250;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_250 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_248 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_240 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_238 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_230 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_228 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x50);
  lStack_218 = -lVar5;
  if (-1 < lVar5) {
    lStack_218 = lVar5;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_210 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_210 = uStack_210 ^ uStack_210 >> 0x16;
  uStack_208 = (ulong)*(byte *)(param_1 + 8);
  uStack_200 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = uVar1;
  func_0x00010bfde980();
  uStack_1f0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_1e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_1f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_1e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_1d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_1d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1a0 = uVar1;
  func_0x00010bfde980();
  uStack_190 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 200);
  uStack_198 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_188 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_180 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uStack_178 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uStack_170 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uStack_168 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = uVar2;
  func_0x00010bfde980();
  uStack_150 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_148 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x100));
  uStack_140 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x108));
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  uStack_158 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x118);
  uStack_128 = *(undefined8 *)(param_1 + 0x120);
  lStack_130 = -lVar5;
  if (-1 < lVar5) {
    lStack_130 = lVar5;
  }
  uStack_138 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uStack_120 = uVar1;
  func_0x00010bfde980();
  uStack_110 = (ulong)*(byte *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  uStack_118 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  uStack_108 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  uStack_f8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  uVar6 = ~*(ulong *)(param_1 + 0x168) + *(ulong *)(param_1 + 0x168) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_d8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uStack_c8 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_c0 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_b8 = (ulong)*(byte *)(param_1 + 0xf);
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 400);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x198);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x1a0);
  uStack_80 = *(undefined8 *)(param_1 + 0x1a8);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010bfde980();
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1b8));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1c0));
  uVar2 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x1d0);
  uStack_40 = *(undefined8 *)(param_1 + 0x1d8);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_48 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_250,0x43);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b60c498:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b60c4a4;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50) &&
            (*(char *)((long)puVar3 + 8) == param_3[8])) &&
           (*(char *)((long)puVar3 + 9) == param_3[9])) &&
          ((*(long *)((long)puVar3 + 0x68) == *(long *)(param_3 + 0x68) &&
           (*(long *)((long)puVar3 + 0x70) == *(long *)(param_3 + 0x70))))))) &&
        (*(char *)((long)puVar3 + 10) == param_3[10])) &&
       ((((*(char *)((long)puVar3 + 0xb) == param_3[0xb] &&
          (*(long *)((long)puVar3 + 0x100) == *(long *)(param_3 + 0x100))) &&
         ((*(long *)((long)puVar3 + 0x108) == *(long *)(param_3 + 0x108) &&
          (((*(long *)((long)puVar3 + 0x118) == *(long *)(param_3 + 0x118) &&
            (*(char *)((long)puVar3 + 0xc) == param_3[0xc])) &&
           (*(char *)((long)puVar3 + 0xd) == param_3[0xd])))))) &&
        (((*(char *)((long)puVar3 + 0xe) == param_3[0xe] &&
          (*(char *)((long)puVar3 + 0xf) == param_3[0xf])) &&
         ((*(long *)((long)puVar3 + 0x1a0) == *(long *)(param_3 + 0x1a0) &&
          (((*(char *)((long)puVar3 + 0x10) == param_3[0x10] &&
            (*(long *)((long)puVar3 + 0x1b8) == *(long *)(param_3 + 0x1b8))) &&
           ((*(long *)((long)puVar3 + 0x1c0) == *(long *)(param_3 + 0x1c0) &&
            ((*(long *)((long)puVar3 + 0x1d0) == *(long *)(param_3 + 0x1d0) &&
             (*(char *)((long)puVar3 + 0x11) == param_3[0x11])))))))))))))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x58) - *(double *)(param_3 + 0x58));
      if ((dVar8 < 2.2250738585072014e-308) ||
         (dVar8 < ABS(*(double *)((long)puVar3 + 0x58) + *(double *)(param_3 + 0x58)) *
                  2.220446049250313e-16)) {
        dVar8 = ABS(*(double *)((long)puVar3 + 0x168) - *(double *)(param_3 + 0x168));
        if ((((((dVar8 < 2.2250738585072014e-308) ||
               (dVar8 < ABS(*(double *)((long)puVar3 + 0x168) + *(double *)(param_3 + 0x168)) *
                        2.220446049250313e-16)) &&
              ((((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                (((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 == *(long *)(param_3 + 0x20) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                 ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
               ((((lVar5 = *(long *)((long)puVar3 + 0x30), lVar5 == *(long *)(param_3 + 0x30) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                 ((lVar5 = *(long *)((long)puVar3 + 0x38), lVar5 == *(long *)(param_3 + 0x38) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                ((lVar5 = *(long *)((long)puVar3 + 0x40), lVar5 == *(long *)(param_3 + 0x40) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)))))))) &&
             ((lVar5 = *(long *)((long)puVar3 + 0x48), lVar5 == *(long *)(param_3 + 0x48) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
            ((((((lVar5 = *(long *)((long)puVar3 + 0x60), lVar5 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                ((lVar5 = *(long *)((long)puVar3 + 0x78), lVar5 == *(long *)(param_3 + 0x78) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
               ((lVar5 = *(long *)((long)puVar3 + 0x80), lVar5 == *(long *)(param_3 + 0x80) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
              ((lVar5 = *(long *)((long)puVar3 + 0x88), lVar5 == *(long *)(param_3 + 0x88) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((((lVar5 = *(long *)((long)puVar3 + 0x90), lVar5 == *(long *)(param_3 + 0x90) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
               ((lVar5 = *(long *)((long)puVar3 + 0x98), lVar5 == *(long *)(param_3 + 0x98) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
              (((lVar5 = *(long *)((long)puVar3 + 0xa0), lVar5 == *(long *)(param_3 + 0xa0) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
               (((lVar5 = *(long *)((long)puVar3 + 0xa8), lVar5 == *(long *)(param_3 + 0xa8) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                (((((((lVar5 = *(long *)((long)puVar3 + 0xb0), lVar5 == *(long *)(param_3 + 0xb0) ||
                      (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                     ((lVar5 = *(long *)((long)puVar3 + 0xb8), lVar5 == *(long *)(param_3 + 0xb8) ||
                      (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                    ((lVar5 = *(long *)((long)puVar3 + 0xc0), lVar5 == *(long *)(param_3 + 0xc0) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                   ((lVar5 = *(long *)((long)puVar3 + 200), lVar5 == *(long *)(param_3 + 200) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  (((lVar5 = *(long *)((long)puVar3 + 0xd0), lVar5 == *(long *)(param_3 + 0xd0) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0xd8), lVar5 == *(long *)(param_3 + 0xd8) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
                 ((lVar5 = *(long *)((long)puVar3 + 0xe0), lVar5 == *(long *)(param_3 + 0xe0) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))))))))))))) &&
           ((((lVar5 = *(long *)((long)puVar3 + 0xe8), lVar5 == *(long *)(param_3 + 0xe8) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
             (((((((lVar5 = *(long *)((long)puVar3 + 0xf0), lVar5 == *(long *)(param_3 + 0xf0) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                  ((lVar5 = *(long *)((long)puVar3 + 0xf8), lVar5 == *(long *)(param_3 + 0xf8) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                 (((lVar5 = *(long *)((long)puVar3 + 0x110), lVar5 == *(long *)(param_3 + 0x110) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                  ((lVar5 = *(long *)((long)puVar3 + 0x120), lVar5 == *(long *)(param_3 + 0x120) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
                ((((((lVar5 = *(long *)((long)puVar3 + 0x128), lVar5 == *(long *)(param_3 + 0x128)
                     || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                    ((lVar5 = *(long *)((long)puVar3 + 0x130), lVar5 == *(long *)(param_3 + 0x130)
                     || (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x138), lVar5 == *(long *)(param_3 + 0x138) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  ((lVar5 = *(long *)((long)puVar3 + 0x140), lVar5 == *(long *)(param_3 + 0x140) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                 ((((lVar5 = *(long *)((long)puVar3 + 0x148), lVar5 == *(long *)(param_3 + 0x148) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x150), lVar5 == *(long *)(param_3 + 0x150) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  (((lVar5 = *(long *)((long)puVar3 + 0x158), lVar5 == *(long *)(param_3 + 0x158) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   (((lVar5 = *(long *)((long)puVar3 + 0x160), lVar5 == *(long *)(param_3 + 0x160)
                     || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                    ((((lVar5 = *(long *)((long)puVar3 + 0x170), lVar5 == *(long *)(param_3 + 0x170)
                       || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                      ((lVar5 = *(long *)((long)puVar3 + 0x178), lVar5 == *(long *)(param_3 + 0x178)
                       || (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                     ((lVar5 = *(long *)((long)puVar3 + 0x180), lVar5 == *(long *)(param_3 + 0x180)
                      || (func_0x00010c071ae0(), (int)lVar5 != 0)))))))))))))) &&
               ((lVar5 = *(long *)((long)puVar3 + 0x188), lVar5 == *(long *)(param_3 + 0x188) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
              (((((lVar5 = *(long *)((long)puVar3 + 400), lVar5 == *(long *)(param_3 + 400) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                 ((lVar5 = *(long *)((long)puVar3 + 0x198), lVar5 == *(long *)(param_3 + 0x198) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                ((lVar5 = *(long *)((long)puVar3 + 0x1a8), lVar5 == *(long *)(param_3 + 0x1a8) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
               ((lVar5 = *(long *)((long)puVar3 + 0x1b0), lVar5 == *(long *)(param_3 + 0x1b0) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))))))) &&
            ((lVar5 = *(long *)((long)puVar3 + 0x1c8), lVar5 == *(long *)(param_3 + 0x1c8) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)))))) {
          puVar7 = *(undefined1 **)((long)puVar3 + 0x1d8);
          if (puVar7 != *(undefined1 **)(param_3 + 0x1d8)) {
            func_0x00010c071ae0();
            goto LAB_10b60c4a4;
          }
          goto LAB_10b60c498;
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b60c4a4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b60be60; end: 10b60c4bf; -[SCDiscoverFeedStorySnap isEqual:] */

long FUN_10b60be60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b60c498:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b60c4a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
           (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       ((((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(long *)(param_1 + 0x100) == *(long *)(param_3 + 0x100))) &&
         ((*(long *)(param_1 + 0x108) == *(long *)(param_3 + 0x108) &&
          (((*(long *)(param_1 + 0x118) == *(long *)(param_3 + 0x118) &&
            (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
           (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))))))) &&
        (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
          (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
         ((*(long *)(param_1 + 0x1a0) == *(long *)(param_3 + 0x1a0) &&
          (((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x1b8) == *(long *)(param_3 + 0x1b8))) &&
           ((*(long *)(param_1 + 0x1c0) == *(long *)(param_3 + 0x1c0) &&
            ((*(long *)(param_1 + 0x1d0) == *(long *)(param_3 + 0x1d0) &&
             (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))))))))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x168) - *(double *)(param_3 + 0x168));
        if ((((((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x168) + *(double *)(param_3 + 0x168)) *
                        2.220446049250313e-16)) &&
              ((((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                (((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
               ((((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
             ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((((((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              (((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               (((lVar3 = *(long *)(param_1 + 0xa8), lVar3 == *(long *)(param_3 + 0xa8) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                (((((((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
                      (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                     ((lVar3 = *(long *)(param_1 + 0xb8), lVar3 == *(long *)(param_3 + 0xb8) ||
                      (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                    ((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 200), lVar3 == *(long *)(param_3 + 200) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  (((lVar3 = *(long *)(param_1 + 0xd0), lVar3 == *(long *)(param_3 + 0xd0) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0xd8), lVar3 == *(long *)(param_3 + 0xd8) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                 ((lVar3 = *(long *)(param_1 + 0xe0), lVar3 == *(long *)(param_3 + 0xe0) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))))) &&
           ((((lVar3 = *(long *)(param_1 + 0xe8), lVar3 == *(long *)(param_3 + 0xe8) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             (((((((lVar3 = *(long *)(param_1 + 0xf0), lVar3 == *(long *)(param_3 + 0xf0) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((lVar3 = *(long *)(param_1 + 0xf8), lVar3 == *(long *)(param_3 + 0xf8) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 (((lVar3 = *(long *)(param_1 + 0x110), lVar3 == *(long *)(param_3 + 0x110) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((lVar3 = *(long *)(param_1 + 0x120), lVar3 == *(long *)(param_3 + 0x120) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                ((((((lVar3 = *(long *)(param_1 + 0x128), lVar3 == *(long *)(param_3 + 0x128) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                    ((lVar3 = *(long *)(param_1 + 0x130), lVar3 == *(long *)(param_3 + 0x130) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 0x138), lVar3 == *(long *)(param_3 + 0x138) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x140), lVar3 == *(long *)(param_3 + 0x140) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((((lVar3 = *(long *)(param_1 + 0x148), lVar3 == *(long *)(param_3 + 0x148) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x150), lVar3 == *(long *)(param_3 + 0x150) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  (((lVar3 = *(long *)(param_1 + 0x158), lVar3 == *(long *)(param_3 + 0x158) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   (((lVar3 = *(long *)(param_1 + 0x160), lVar3 == *(long *)(param_3 + 0x160) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                    ((((lVar3 = *(long *)(param_1 + 0x170), lVar3 == *(long *)(param_3 + 0x170) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                      ((lVar3 = *(long *)(param_1 + 0x178), lVar3 == *(long *)(param_3 + 0x178) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                     ((lVar3 = *(long *)(param_1 + 0x180), lVar3 == *(long *)(param_3 + 0x180) ||
                      (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))))) &&
               ((lVar3 = *(long *)(param_1 + 0x188), lVar3 == *(long *)(param_3 + 0x188) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              (((((lVar3 = *(long *)(param_1 + 400), lVar3 == *(long *)(param_3 + 400) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x198), lVar3 == *(long *)(param_3 + 0x198) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((lVar3 = *(long *)(param_1 + 0x1a8), lVar3 == *(long *)(param_3 + 0x1a8) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x1b0), lVar3 == *(long *)(param_3 + 0x1b0) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
            ((lVar3 = *(long *)(param_1 + 0x1c8), lVar3 == *(long *)(param_3 + 0x1c8) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
          lVar3 = *(long *)(param_1 + 0x1d8);
          if (lVar3 != *(long *)(param_3 + 0x1d8)) {
            func_0x00010c071ae0();
            goto LAB_10b60c4a4;
          }
          goto LAB_10b60c498;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b60c4a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b60c4c0; end: 10b60c4c7; -[SCDiscoverFeedStorySnap snapId] */

undefined8 FUN_10b60c4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b60c4c8; end: 10b60c4cf; -[SCDiscoverFeedStorySnap sssId] */

undefined8 FUN_10b60c4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b60c4d0; end: 10b60c4d7; -[SCDiscoverFeedStorySnap mediaId] */

undefined8 FUN_10b60c4d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b60c4d8; end: 10b60c4df; -[SCDiscoverFeedStorySnap mediaKey] */

undefined8 FUN_10b60c4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b60c4e0; end: 10b60c4e7; -[SCDiscoverFeedStorySnap mediaIv] */

undefined8 FUN_10b60c4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b60c4e8; end: 10b60c4ef; -[SCDiscoverFeedStorySnap mediaURL] */

undefined8 FUN_10b60c4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b60c4f0; end: 10b60c4f7; -[SCDiscoverFeedStorySnap videoStreamingInfo] */

undefined8 FUN_10b60c4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b60c4f8; end: 10b60c4ff; -[SCDiscoverFeedStorySnap streamingFailureCode] */

undefined8 FUN_10b60c4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b60c500; end: 10b60c507; -[SCDiscoverFeedStorySnap duration] */

undefined8 FUN_10b60c500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b60c508; end: 10b60c50f; -[SCDiscoverFeedStorySnap isZipped] */

undefined1 FUN_10b60c508(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b60c510; end: 10b60c517; -[SCDiscoverFeedStorySnap isInfiniteDuration] */

undefined1 FUN_10b60c510(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b60c518; end: 10b60c51f; -[SCDiscoverFeedStorySnap attachmentUrl] */

undefined8 FUN_10b60c518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b60c520; end: 10b60c527; -[SCDiscoverFeedStorySnap mediaType] */

undefined8 FUN_10b60c520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b60c528; end: 10b60c52f; -[SCDiscoverFeedStorySnap sourceType] */

undefined8 FUN_10b60c528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b60c530; end: 10b60c537; -[SCDiscoverFeedStorySnap title] */

undefined8 FUN_10b60c530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b60c538; end: 10b60c53f; -[SCDiscoverFeedStorySnap subtitles] */

undefined8 FUN_10b60c538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b60c540; end: 10b60c547; -[SCDiscoverFeedStorySnap displayGeoInfo] */

undefined8 FUN_10b60c540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b60c548; end: 10b60c54f; -[SCDiscoverFeedStorySnap creationTime] */

undefined8 FUN_10b60c548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b60c550; end: 10b60c557; -[SCDiscoverFeedStorySnap expirationTime] */

undefined8 FUN_10b60c550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b60c558; end: 10b60c55f; -[SCDiscoverFeedStorySnap debugInfo] */

undefined8 FUN_10b60c558(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b60c560; end: 10b60c567; -[SCDiscoverFeedStorySnap creatorInfo] */

undefined8 FUN_10b60c560(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b60c568; end: 10b60c56f; -[SCDiscoverFeedStorySnap pivotInfo] */

undefined8 FUN_10b60c568(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b60c570; end: 10b60c577; -[SCDiscoverFeedStorySnap lensData] */

undefined8 FUN_10b60c570(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b60c578; end: 10b60c57f; -[SCDiscoverFeedStorySnap audioStitchData] */

undefined8 FUN_10b60c578(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b60c580; end: 10b60c587; -[SCDiscoverFeedStorySnap hasLensFilter] */

undefined1 FUN_10b60c580(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b60c588; end: 10b60c58f; -[SCDiscoverFeedStorySnap contextHintData] */

undefined8 FUN_10b60c588(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b60c590; end: 10b60c597; -[SCDiscoverFeedStorySnap encryptedGeoData] */

undefined8 FUN_10b60c590(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b60c598; end: 10b60c59f; -[SCDiscoverFeedStorySnap serializedUnlockablesSnapInfo] */

undefined8 FUN_10b60c598(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b60c5a0; end: 10b60c5a7; -[SCDiscoverFeedStorySnap boltMedia] */

undefined8 FUN_10b60c5a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b60c5a8; end: 10b60c5af; -[SCDiscoverFeedStorySnap boltOverlay] */

undefined8 FUN_10b60c5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b60c5b0; end: 10b60c5b7; -[SCDiscoverFeedStorySnap boltAudioTranscription] */

undefined8 FUN_10b60c5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10b60c5b8; end: 10b60c5bf; -[SCDiscoverFeedStorySnap boltFirstFrame] */

undefined8 FUN_10b60c5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10b60c5c0; end: 10b60c5c7; -[SCDiscoverFeedStorySnap isAudioTranscriptionEncrypted] */

undefined1 FUN_10b60c5c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b60c5c8; end: 10b60c5cf; -[SCDiscoverFeedStorySnap brandFriendliness] */

undefined8 FUN_10b60c5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10b60c5d0; end: 10b60c5d7; -[SCDiscoverFeedStorySnap garmBrandSafety] */

undefined8 FUN_10b60c5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10b60c5d8; end: 10b60c5df; -[SCDiscoverFeedStorySnap contentCategories] */

undefined8 FUN_10b60c5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10b60c5e0; end: 10b60c5e7; -[SCDiscoverFeedStorySnap sequence] */

undefined8 FUN_10b60c5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10b60c5e8; end: 10b60c5ef; -[SCDiscoverFeedStorySnap boostMetadata] */

undefined8 FUN_10b60c5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 10b60c5f0; end: 10b60c5f7; -[SCDiscoverFeedStorySnap spotlightEngagementMetadata] */

undefined8 FUN_10b60c5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10b60c5f8; end: 10b60c5ff; -[SCDiscoverFeedStorySnap spotlightStoryCardDisplayMetadata] */

undefined8 FUN_10b60c5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10b60c600; end: 10b60c607; -[SCDiscoverFeedStorySnap rotationLocked] */

undefined1 FUN_10b60c600(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b60c608; end: 10b60c60f; -[SCDiscoverFeedStorySnap snapViewSignature] */

undefined8 FUN_10b60c608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10b60c610; end: 10b60c617; -[SCDiscoverFeedStorySnap boltWatermarkedVideoUrl] */

undefined8 FUN_10b60c610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10b60c618; end: 10b60c61f; -[SCDiscoverFeedStorySnap flatNonWatermarkVideoUrl] */

undefined8 FUN_10b60c618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10b60c620; end: 10b60c627; -[SCDiscoverFeedStorySnap snapDescription] */

undefined8 FUN_10b60c620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10b60c628; end: 10b60c62f; -[SCDiscoverFeedStorySnap sponsor] */

undefined8 FUN_10b60c628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 10b60c630; end: 10b60c637; -[SCDiscoverFeedStorySnap adsTracking] */

undefined8 FUN_10b60c630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10b60c638; end: 10b60c63f; -[SCDiscoverFeedStorySnap lastUpdatedAt] */

undefined8 FUN_10b60c638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 10b60c640; end: 10b60c647; -[SCDiscoverFeedStorySnap cameo] */

undefined8 FUN_10b60c640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 10b60c648; end: 10b60c64f; -[SCDiscoverFeedStorySnap spotlightRepliesEnabledOnSnap] */

undefined1 FUN_10b60c648(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b60c650; end: 10b60c657; -[SCDiscoverFeedStorySnap isOwnLocallyPostedContent] */

undefined1 FUN_10b60c650(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b60c658; end: 10b60c65f; -[SCDiscoverFeedStorySnap scanOnPublicContentEnabled] */

undefined1 FUN_10b60c658(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b60c660; end: 10b60c667; -[SCDiscoverFeedStorySnap snapImageThumbnail] */

undefined8 FUN_10b60c660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 10b60c668; end: 10b60c66f; -[SCDiscoverFeedStorySnap snapThumbnailMetadata] */

undefined8 FUN_10b60c668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10b60c670; end: 10b60c677; -[SCDiscoverFeedStorySnap managementMetadata] */

undefined8 FUN_10b60c670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 10b60c678; end: 10b60c67f; -[SCDiscoverFeedStorySnap multiSnapInfo] */

undefined8 FUN_10b60c678(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 10b60c680; end: 10b60c687; -[SCDiscoverFeedStorySnap mediaOrigin] */

undefined8 FUN_10b60c680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 10b60c688; end: 10b60c68f; -[SCDiscoverFeedStorySnap storyTypeVariant] */

undefined8 FUN_10b60c688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 10b60c690; end: 10b60c697; -[SCDiscoverFeedStorySnap inFeedSurvey] */

undefined8 FUN_10b60c690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 10b60c698; end: 10b60c69f; -[SCDiscoverFeedStorySnap fromSnapchatCamera] */

undefined1 FUN_10b60c698(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b60c6a0; end: 10b60c6a7; -[SCDiscoverFeedStorySnap suggestedSearchQueryCandidates] */

undefined8 FUN_10b60c6a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 10b60c6a8; end: 10b60c6af; -[SCDiscoverFeedStorySnap suggestedSearchType] */

undefined8 FUN_10b60c6a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 10b60c6b0; end: 10b60c6b7; -[SCDiscoverFeedStorySnap poiEventEndTimeMs] */

undefined8 FUN_10b60c6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 10b60c6b8; end: 10b60c6bf; -[SCDiscoverFeedStorySnap storyShareProbability] */

undefined8 FUN_10b60c6b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 10b60c6c0; end: 10b60c6c7; -[SCDiscoverFeedStorySnap fanPassSnapPlaceholderCount] */

undefined8 FUN_10b60c6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 10b60c6c8; end: 10b60c6cf; -[SCDiscoverFeedStorySnap isSharingDisabled] */

undefined1 FUN_10b60c6c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b60c6d0; end: 10b60c6d7; -[SCDiscoverFeedStorySnap tileId] */

undefined8 FUN_10b60c6d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 10b60c6d8; end: 10b60c90b; -[SCDiscoverFeedStorySnap .cxx_destruct] */

void FUN_10b60c6d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
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
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b60c90c; end: 10b60c927; +[SCDiscoverFeedStorySnapBuilder discoverFeedStorySnap] */

void FUN_10b60c90c(void)

{
  _objc_alloc_init(PTR_PTR_1126cf330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b60c928; end: 10b60d883; +[SCDiscoverFeedStorySnapBuilder discoverFeedStorySnapFromExistingDiscoverFeedStorySnap:] */

void FUN_10b60c928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined *puVar54;
  undefined8 uVar55;
  undefined *puVar56;
  undefined8 uVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined8 uVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined8 uVar65;
  undefined *puVar66;
  undefined8 uVar67;
  undefined *puVar68;
  undefined8 uVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined8 uVar72;
  undefined *puVar73;
  undefined8 uVar74;
  undefined *puVar75;
  undefined8 uVar76;
  undefined *puVar77;
  undefined8 uVar78;
  undefined *puVar79;
  undefined8 uVar80;
  undefined *puVar81;
  undefined8 uVar82;
  undefined *puVar83;
  undefined *puVar84;
  undefined8 uVar85;
  undefined *puVar86;
  undefined *puVar87;
  undefined *puVar88;
  undefined *puVar89;
  undefined8 uVar90;
  undefined *puVar91;
  undefined8 uVar92;
  undefined *puVar93;
  undefined8 uVar94;
  undefined *puVar95;
  undefined8 uVar96;
  undefined *puVar97;
  undefined8 uVar98;
  undefined *puVar99;
  undefined *puVar100;
  undefined8 uVar101;
  undefined *puVar102;
  undefined *puVar103;
  undefined8 uVar104;
  undefined *puVar105;
  undefined *puVar106;
  undefined *puVar107;
  undefined8 uVar108;
  undefined *puVar109;
  undefined8 uVar110;
  undefined *puVar111;
  undefined *puVar112;
  undefined *puVar113;
  
  puVar1 = PTR_PTR_1126cf330;
  _objc_retain(param_3);
  func_0x00010bf82180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b93a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c24cfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b9ea0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b3860(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b38a0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b3880(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b3b20(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c29b560();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2bc7c0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c25c7c0(param_3);
  puVar17 = puVar15;
  func_0x00010c2ba840(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160(param_3);
  puVar18 = puVar17;
  func_0x00010c2acb40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c083e00(param_3);
  puVar19 = puVar18;
  func_0x00010c2b1a00(puVar18,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c075780(param_3);
  puVar20 = puVar19;
  func_0x00010c2b0c20(puVar19,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2a8a40(puVar20,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c0c6c20(param_3);
  puVar23 = puVar21;
  func_0x00010c2b3b00(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c247d20(param_3);
  puVar24 = puVar23;
  func_0x00010c2b9be0(puVar23,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c2bb3c0(puVar24,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c261180();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2baa20(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bf85780();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c2ac780(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010c2ab3a0(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_3;
  func_0x00010bf9c800();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar31;
  func_0x00010c2ad800(puVar31,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar33;
  func_0x00010c2abd20(puVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar35;
  func_0x00010c2ab580(puVar35,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_3;
  func_0x00010c0fc8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar37;
  func_0x00010c2b5600(puVar37,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar39;
  func_0x00010c2b27c0(puVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_3;
  func_0x00010bf10000();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar41;
  func_0x00010c2a8cc0(puVar41,param_2,uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = param_3;
  func_0x00010bfd8560(param_3);
  puVar45 = puVar43;
  func_0x00010c2af340(puVar43,param_2,uVar44);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = param_3;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar45;
  func_0x00010c2ab000(puVar45,param_2,uVar44);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = param_3;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar46;
  func_0x00010c2ad240(puVar46,param_2,uVar47);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = param_3;
  func_0x00010c15ece0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar48;
  func_0x00010c2b8420(puVar48,param_2,uVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar51 = param_3;
  func_0x00010bf1f000();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar50;
  func_0x00010c2a9660(puVar50,param_2,uVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = param_3;
  func_0x00010bf1f0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar52;
  func_0x00010c2a9680(puVar52,param_2,uVar53);
  _objc_retainAutoreleasedReturnValue();
  uVar55 = param_3;
  func_0x00010bf1ee40();
  _objc_retainAutoreleasedReturnValue();
  puVar56 = puVar54;
  func_0x00010c2a9620(puVar54,param_2,uVar55);
  _objc_retainAutoreleasedReturnValue();
  uVar57 = param_3;
  func_0x00010bf1ef80();
  _objc_retainAutoreleasedReturnValue();
  puVar58 = puVar56;
  func_0x00010c2a9640(puVar56,param_2,uVar57);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c06c9e0(param_3);
  puVar59 = puVar58;
  func_0x00010c2b0220(puVar58,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010bf20ec0(param_3);
  puVar60 = puVar59;
  func_0x00010c2a98a0(puVar59,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010bfbe4e0(param_3);
  puVar61 = puVar60;
  func_0x00010c2aed20(puVar60,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar62 = param_3;
  func_0x00010bf4bf60();
  _objc_retainAutoreleasedReturnValue();
  puVar63 = puVar61;
  func_0x00010c2aad60(puVar61,param_2,uVar62);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c15e560();
  puVar64 = puVar63;
  func_0x00010c2b8300(puVar63,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar65 = param_3;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  puVar66 = puVar64;
  func_0x00010c2a9720(puVar64,param_2,uVar65);
  _objc_retainAutoreleasedReturnValue();
  uVar67 = param_3;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  puVar68 = puVar66;
  func_0x00010c2b9d60(puVar66,param_2,uVar67);
  _objc_retainAutoreleasedReturnValue();
  uVar69 = param_3;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  puVar70 = puVar68;
  func_0x00010c2b9e60(puVar68,param_2,uVar69);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c141c40(param_3);
  puVar71 = puVar70;
  func_0x00010c2b7640(puVar70,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar72 = param_3;
  func_0x00010c243cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar73 = puVar71;
  func_0x00010c2b98e0(puVar71,param_2,uVar72);
  _objc_retainAutoreleasedReturnValue();
  uVar74 = param_3;
  func_0x00010bf1f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar75 = puVar73;
  func_0x00010c2a96c0(puVar73,param_2,uVar74);
  _objc_retainAutoreleasedReturnValue();
  uVar76 = param_3;
  func_0x00010bfb26c0();
  _objc_retainAutoreleasedReturnValue();
  puVar77 = puVar75;
  func_0x00010c2ae3c0(puVar75,param_2,uVar76);
  _objc_retainAutoreleasedReturnValue();
  uVar78 = param_3;
  func_0x00010c23fd60();
  _objc_retainAutoreleasedReturnValue();
  puVar79 = puVar77;
  func_0x00010c2b9280(puVar77,param_2,uVar78);
  _objc_retainAutoreleasedReturnValue();
  uVar80 = param_3;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar81 = puVar79;
  func_0x00010c2b9c60(puVar79,param_2,uVar80);
  _objc_retainAutoreleasedReturnValue();
  uVar82 = param_3;
  func_0x00010befe1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar83 = puVar81;
  func_0x00010c2a8080(puVar81,param_2,uVar82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08a7a0(param_3);
  puVar84 = puVar83;
  func_0x00010c2b23e0();
  _objc_retainAutoreleasedReturnValue();
  uVar85 = param_3;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  puVar86 = puVar84;
  func_0x00010c2a9ca0(puVar84,param_2,uVar85);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c24be20(param_3);
  puVar87 = puVar86;
  func_0x00010c2b9e20(puVar86,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c079800();
  puVar88 = puVar87;
  func_0x00010c2b10a0(puVar87,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c14ede0();
  puVar89 = puVar88;
  func_0x00010c2b7900(puVar88,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar90 = param_3;
  func_0x00010c241560();
  _objc_retainAutoreleasedReturnValue();
  puVar91 = puVar89;
  func_0x00010c2b93c0(puVar89,param_2,uVar90);
  _objc_retainAutoreleasedReturnValue();
  uVar92 = param_3;
  func_0x00010c2436c0();
  _objc_retainAutoreleasedReturnValue();
  puVar93 = puVar91;
  func_0x00010c2b97c0(puVar91,param_2,uVar92);
  _objc_retainAutoreleasedReturnValue();
  uVar94 = param_3;
  func_0x00010c0b8260();
  _objc_retainAutoreleasedReturnValue();
  puVar95 = puVar93;
  func_0x00010c2b3520(puVar93,param_2,uVar94);
  _objc_retainAutoreleasedReturnValue();
  uVar96 = param_3;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  puVar97 = puVar95;
  func_0x00010c2b41c0(puVar95,param_2,uVar96);
  _objc_retainAutoreleasedReturnValue();
  uVar98 = param_3;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  puVar99 = puVar97;
  func_0x00010c2b39a0(puVar97,param_2,uVar98);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c25b820(param_3);
  puVar100 = puVar99;
  func_0x00010c2ba740(puVar99,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar101 = param_3;
  func_0x00010bfeb4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar102 = puVar100;
  func_0x00010c2afbe0(puVar100,param_2,uVar101);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010bfbafa0(param_3);
  puVar103 = puVar102;
  func_0x00010c2ae880(puVar102,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar104 = param_3;
  func_0x00010c262160();
  _objc_retainAutoreleasedReturnValue();
  puVar105 = puVar103;
  func_0x00010c2baa80(puVar103,param_2,uVar104);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c2621c0(param_3);
  puVar106 = puVar105;
  func_0x00010c2baaa0(puVar105,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c1029e0(param_3);
  puVar107 = puVar106;
  func_0x00010c2b5800(puVar106,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar108 = param_3;
  func_0x00010c25b0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar109 = puVar107;
  func_0x00010c2ba640(puVar107,param_2,uVar108);
  _objc_retainAutoreleasedReturnValue();
  uVar110 = param_3;
  func_0x00010bfa0a00(param_3);
  puVar111 = puVar109;
  func_0x00010c2ada40(puVar109,param_2,uVar110);
  _objc_retainAutoreleasedReturnValue();
  uVar110 = param_3;
  func_0x00010c07dce0(param_3);
  puVar112 = puVar111;
  func_0x00010c2b14e0(puVar111,param_2,uVar110);
  _objc_retainAutoreleasedReturnValue();
  uVar110 = param_3;
  func_0x00010c26ebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar113 = puVar112;
  func_0x00010c2bb160(puVar112,param_2,uVar110);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar110);
  _objc_release(puVar112);
  _objc_release(puVar111);
  _objc_release(puVar109);
  _objc_release(uVar108);
  _objc_release(puVar107);
  _objc_release(puVar106);
  _objc_release(puVar105);
  _objc_release(uVar104);
  _objc_release(puVar103);
  _objc_release(puVar102);
  _objc_release(uVar101);
  _objc_release(puVar100);
  _objc_release(puVar99);
  _objc_release(uVar98);
  _objc_release(puVar97);
  _objc_release(uVar96);
  _objc_release(puVar95);
  _objc_release(uVar94);
  _objc_release(puVar93);
  _objc_release(uVar92);
  _objc_release(puVar91);
  _objc_release(uVar90);
  _objc_release(puVar89);
  _objc_release(puVar88);
  _objc_release(puVar87);
  _objc_release(puVar86);
  _objc_release(uVar85);
  _objc_release(puVar84);
  _objc_release(puVar83);
  _objc_release(uVar82);
  _objc_release(puVar81);
  _objc_release(uVar80);
  _objc_release(puVar79);
  _objc_release(uVar78);
  _objc_release(puVar77);
  _objc_release(uVar76);
  _objc_release(puVar75);
  _objc_release(uVar74);
  _objc_release(puVar73);
  _objc_release(uVar72);
  _objc_release(puVar71);
  _objc_release(puVar70);
  _objc_release(uVar69);
  _objc_release(puVar68);
  _objc_release(uVar67);
  _objc_release(puVar66);
  _objc_release(uVar65);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(uVar62);
  _objc_release(puVar61);
  _objc_release(puVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(uVar57);
  _objc_release(puVar56);
  _objc_release(uVar55);
  _objc_release(puVar54);
  _objc_release(uVar53);
  _objc_release(puVar52);
  _objc_release(uVar51);
  _objc_release(puVar50);
  _objc_release(uVar49);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(puVar46);
  _objc_release(uVar44);
  _objc_release(puVar45);
  _objc_release(puVar43);
  _objc_release(uVar42);
  _objc_release(puVar41);
  _objc_release(uVar40);
  _objc_release(puVar39);
  _objc_release(uVar38);
  _objc_release(puVar37);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(puVar33);
  _objc_release(uVar32);
  _objc_release(puVar31);
  _objc_release(uVar30);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar22);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(uVar16);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar113);
  return;
}



/* Entry: 10b60d884; end: 10b60da33; -[SCDiscoverFeedStorySnapBuilder build] */

void FUN_10b60d884(long param_1)

{
  _objc_alloc(PTR_PTR_1126cbc90);
  func_0x00010c047dc0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b60da34; end: 10b60da6b; -[SCDiscoverFeedStorySnapBuilder withSnapId:] */

long FUN_10b60da34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b60da6c; end: 10b60daa3; -[SCDiscoverFeedStorySnapBuilder withSssId:] */

long FUN_10b60da6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b60daa4; end: 10b60dadb; -[SCDiscoverFeedStorySnapBuilder withMediaId:] */

long FUN_10b60daa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b60dadc; end: 10b60db13; -[SCDiscoverFeedStorySnapBuilder withMediaKey:] */

long FUN_10b60dadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b60db14; end: 10b60db4b; -[SCDiscoverFeedStorySnapBuilder withMediaIv:] */

long FUN_10b60db14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b60db4c; end: 10b60db83; -[SCDiscoverFeedStorySnapBuilder withMediaURL:] */

long FUN_10b60db4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}


