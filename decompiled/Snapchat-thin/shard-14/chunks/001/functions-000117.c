/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aff7ecc; end: 10aff7ed3; -[SCSuperFeedFriendStory thumbnail] */

undefined8 FUN_10aff7ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10aff7ed4; end: 10aff7edb; -[SCSuperFeedFriendStory totalNumSnaps] */

undefined8 FUN_10aff7ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10aff7edc; end: 10aff7ee3; -[SCSuperFeedFriendStory numOfUnviewedStories] */

undefined8 FUN_10aff7edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10aff7ee4; end: 10aff7eeb; -[SCSuperFeedFriendStory storyContentType] */

undefined8 FUN_10aff7ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10aff7eec; end: 10aff7f6f; -[SCSuperFeedFriendStory .cxx_destruct] */

void FUN_10aff7eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10aff7f70; end: 10aff801b; -[SCDiscoverFeedClientScoringParams initWithAstVersion:meanStoryScore:storyScoreVariance:ageDecayWeight:shouldReorderLocally:] */

undefined1 *
FUN_10aff7f70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112704118;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined4 *)((long)puVar1 + 0x10) = param_2;
    *(undefined4 *)((long)puVar1 + 0x14) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff801c; end: 10aff80f3; -[SCDiscoverFeedClientScoringParams initWithCoder:] */

undefined1 *
FUN_10aff801c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112704118;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0x14) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff80f4; end: 10aff8117; -[SCDiscoverFeedClientScoringParams copyWithZone:] */

undefined8 FUN_10aff80f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff8118; end: 10aff81b3; -[SCDiscoverFeedClientScoringParams encodeWithCoder:] */

void FUN_10aff8118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49898);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0xc),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f498b8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f498d8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x14),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f498f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f49918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff81b4; end: 10aff8297; -[SCDiscoverFeedClientScoringParams hash] */

undefined8 * FUN_10aff81b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar5 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_48 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar6 = (ulong)*(uint *)(param_1 + 0x14) * 0x200000 - 1;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_40 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  lStack_38 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aff8398:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aff83a4;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      fVar9 = ABS(*(float *)((long)puVar3 + 0xc) - *(float *)(param_3 + 0xc));
      fVar8 = ABS(*(float *)((long)puVar3 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar8))) {
        bVar1 = fVar9 < fVar8;
      }
      if (bVar1) {
        fVar9 = ABS(*(float *)((long)puVar3 + 0x10) - *(float *)(param_3 + 0x10));
        fVar8 = ABS(*(float *)((long)puVar3 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar8))) {
          bVar1 = fVar9 < fVar8;
        }
        if (bVar1) {
          fVar9 = ABS(*(float *)((long)puVar3 + 0x14) - *(float *)(param_3 + 0x14));
          fVar8 = ABS(*(float *)((long)puVar3 + 0x14) + *(float *)(param_3 + 0x14)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar8))) {
            bVar1 = fVar9 < fVar8;
          }
          if (bVar1) {
            puVar7 = *(undefined1 **)((long)puVar3 + 0x18);
            if (puVar7 != *(undefined1 **)(param_3 + 0x18)) {
              func_0x00010c071ae0();
              goto LAB_10aff83a4;
            }
            goto LAB_10aff8398;
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10aff83a4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10aff8298; end: 10aff83bf; -[SCDiscoverFeedClientScoringParams isEqual:] */

long FUN_10aff8298(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff8398:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff83a4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        fVar6 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
        fVar5 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
          bVar1 = fVar6 < fVar5;
        }
        if (bVar1) {
          fVar6 = ABS(*(float *)(param_1 + 0x14) - *(float *)(param_3 + 0x14));
          fVar5 = ABS(*(float *)(param_1 + 0x14) + *(float *)(param_3 + 0x14)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
            bVar1 = fVar6 < fVar5;
          }
          if (bVar1) {
            lVar4 = *(long *)(param_1 + 0x18);
            if (lVar4 != *(long *)(param_3 + 0x18)) {
              func_0x00010c071ae0();
              goto LAB_10aff83a4;
            }
            goto LAB_10aff8398;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10aff83a4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aff83c0; end: 10aff83c7; -[SCDiscoverFeedClientScoringParams astVersion] */

undefined8 FUN_10aff83c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff83c8; end: 10aff83cf; -[SCDiscoverFeedClientScoringParams meanStoryScore] */

undefined4 FUN_10aff83c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10aff83d0; end: 10aff83d7; -[SCDiscoverFeedClientScoringParams storyScoreVariance] */

undefined4 FUN_10aff83d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10aff83d8; end: 10aff83df; -[SCDiscoverFeedClientScoringParams ageDecayWeight] */

undefined4 FUN_10aff83d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10aff83e0; end: 10aff83e7; -[SCDiscoverFeedClientScoringParams shouldReorderLocally] */

undefined1 FUN_10aff83e0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aff83e8; end: 10aff83f3; -[SCDiscoverFeedClientScoringParams .cxx_destruct] */

void FUN_10aff83e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aff83f4; end: 10aff865b; -[SCDiscoverFeedPromotedSnap initWithCoder:] */

undefined1 *
FUN_10aff83f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112704120;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x58) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff865c; end: 10aff8913; -[SCDiscoverFeedPromotedSnap initWithSnapId:snapUrl:headline:brandName:requestId:serveItemId:adId:adKey:adPlacementId:adLineItemId:mediaDurationSecs:mediaType:adToLens:politicalAdPayingAdvertiserName:] */

undefined8 *
FUN_10aff865c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
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
  _objc_retain(param_15);
  _objc_retain();
  puStack_78 = PTR_PTR_112704120;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_1;
    puVar1[0xc] = param_14;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
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
  return puVar1;
}



/* Entry: 10aff8914; end: 10aff8937; -[SCDiscoverFeedPromotedSnap copyWithZone:] */

undefined8 FUN_10aff8914(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff8938; end: 10aff8a87; -[SCDiscoverFeedPromotedSnap encodeWithCoder:] */

void FUN_10aff8938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f49938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f49958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f49978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ead5b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e2ddb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e2ddf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f49998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f499b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f499d8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x58),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f49498);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f499f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f49a18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff8a88; end: 10aff8ba3; -[SCDiscoverFeedPromotedSnap hash] */

undefined8 * FUN_10aff8a88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x60);
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_98;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10aff8d58:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aff8d64;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[0xc] == param_3[0xc])) {
      dVar10 = ABS((double)puVar4[0xb] - (double)param_3[0xb]);
      dVar9 = ABS((double)puVar4[0xb] + (double)param_3[0xb]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((((bVar1) &&
             ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            && ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))
               )) && ((((lVar6 = puVar4[3], lVar6 == param_3[3] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                       ((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                      ((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
          ((lVar6 = puVar4[6], lVar6 == param_3[6] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = puVar4[7], lVar6 == param_3[7] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = puVar4[8], lVar6 == param_3[8] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((((lVar6 = puVar4[9], lVar6 == param_3[9] || (func_0x00010c071ae0(), (int)lVar6 != 0))
               && ((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
              ((lVar6 = puVar4[0xd], lVar6 == param_3[0xd] ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) {
        puVar8 = (undefined8 *)puVar4[0xe];
        if (puVar8 != (undefined8 *)param_3[0xe]) {
          func_0x00010c071ae0();
          goto LAB_10aff8d64;
        }
        goto LAB_10aff8d58;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10aff8d64:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10aff8ba4; end: 10aff8d7f; -[SCDiscoverFeedPromotedSnap isEqual:] */

long FUN_10aff8ba4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff8d58:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff8d64;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) {
      dVar6 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
      dVar5 = ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x68), lVar4 == *(long *)(param_3 + 0x68) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) {
        lVar4 = *(long *)(param_1 + 0x70);
        if (lVar4 != *(long *)(param_3 + 0x70)) {
          func_0x00010c071ae0();
          goto LAB_10aff8d64;
        }
        goto LAB_10aff8d58;
      }
    }
    lVar4 = 0;
  }
LAB_10aff8d64:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aff8d80; end: 10aff8d87; -[SCDiscoverFeedPromotedSnap snapId] */

undefined8 FUN_10aff8d80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aff8d88; end: 10aff8d8f; -[SCDiscoverFeedPromotedSnap snapUrl] */

undefined8 FUN_10aff8d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aff8d90; end: 10aff8d97; -[SCDiscoverFeedPromotedSnap headline] */

undefined8 FUN_10aff8d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff8d98; end: 10aff8d9f; -[SCDiscoverFeedPromotedSnap brandName] */

undefined8 FUN_10aff8d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aff8da0; end: 10aff8da7; -[SCDiscoverFeedPromotedSnap requestId] */

undefined8 FUN_10aff8da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aff8da8; end: 10aff8daf; -[SCDiscoverFeedPromotedSnap serveItemId] */

undefined8 FUN_10aff8da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aff8db0; end: 10aff8db7; -[SCDiscoverFeedPromotedSnap adId] */

undefined8 FUN_10aff8db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aff8db8; end: 10aff8dbf; -[SCDiscoverFeedPromotedSnap adKey] */

undefined8 FUN_10aff8db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aff8dc0; end: 10aff8dc7; -[SCDiscoverFeedPromotedSnap adPlacementId] */

undefined8 FUN_10aff8dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aff8dc8; end: 10aff8dcf; -[SCDiscoverFeedPromotedSnap adLineItemId] */

undefined8 FUN_10aff8dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10aff8dd0; end: 10aff8dd7; -[SCDiscoverFeedPromotedSnap mediaDurationSecs] */

undefined8 FUN_10aff8dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10aff8dd8; end: 10aff8ddf; -[SCDiscoverFeedPromotedSnap mediaType] */

undefined8 FUN_10aff8dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10aff8de0; end: 10aff8de7; -[SCDiscoverFeedPromotedSnap adToLens] */

undefined8 FUN_10aff8de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10aff8de8; end: 10aff8def; -[SCDiscoverFeedPromotedSnap politicalAdPayingAdvertiserName] */

undefined8 FUN_10aff8de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10aff8df0; end: 10aff8e97; -[SCDiscoverFeedPromotedSnap .cxx_destruct] */

void FUN_10aff8df0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 10aff8e98; end: 10aff919f; -[SCDiscoverFeedPromotedStory initWithCoder:] */

undefined1 * FUN_10aff8e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704128;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff91a0; end: 10aff9517; -[SCDiscoverFeedPromotedStory initWithHeadline:snaps:iconURL:thumbnailURL:requestId:serveItemId:brandName:adId:adResponse:trackUrl:protoTrackUrl:rawUserData:rawAdData:thirdPartyImpressionTrackUrls:thirdPartyImpressionClickUrls:tileCtaConfig:brandSafetyInventoryType:adjacentStoriesGarmBrandSafety:] */

undefined8 *
FUN_10aff91a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_112704128;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    puVar1[0x11] = param_19;
    puVar1[0x12] = param_20;
  }
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10aff9518; end: 10aff953b; -[SCDiscoverFeedPromotedStory copyWithZone:] */

undefined8 FUN_10aff9518(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff953c; end: 10aff96db; -[SCDiscoverFeedPromotedStory encodeWithCoder:] */

void FUN_10aff953c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f49798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f2c098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e44c98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ead5b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e2ddb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f49978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e2ddf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f49a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110eeaa58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f49a58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110eeaaf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f49a78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f49a98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f49ab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f49ad8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f49af8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f49b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff96dc; end: 10aff9803; -[SCDiscoverFeedPromotedStory hash] */

undefined8 * FUN_10aff96dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  puVar3 = &uStack_b8;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aff99f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aff9a00;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[0x11] == param_3[0x11] && (puVar3[0x12] == param_3[0x12])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[8];
                    if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[9];
                      if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[10];
                        if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xb];
                          if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xc];
                            if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              lVar5 = puVar3[0xd];
                              if ((lVar5 == param_3[0xd]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = puVar3[0xe];
                                if ((lVar5 == param_3[0xe]) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = puVar3[0xf];
                                  if ((lVar5 == param_3[0xf]) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    puVar6 = (undefined8 *)puVar3[0x10];
                                    if (puVar6 != (undefined8 *)param_3[0x10]) {
                                      func_0x00010c071ae0();
                                      goto LAB_10aff9a00;
                                    }
                                    goto LAB_10aff99f4;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aff9a00:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aff9804; end: 10aff9a1b; -[SCDiscoverFeedPromotedStory isEqual:] */

long FUN_10aff9804(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff99f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff9a00;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
        (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))))) {
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
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x58);
                          if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x60);
                            if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x68);
                              if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x70);
                                if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x78);
                                  if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x80);
                                    if (lVar3 != *(long *)(param_3 + 0x80)) {
                                      func_0x00010c071ae0();
                                      goto LAB_10aff9a00;
                                    }
                                    goto LAB_10aff99f4;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
LAB_10aff9a00:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff9a1c; end: 10aff9a23; -[SCDiscoverFeedPromotedStory headline] */

undefined8 FUN_10aff9a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aff9a24; end: 10aff9a2b; -[SCDiscoverFeedPromotedStory snaps] */

undefined8 FUN_10aff9a24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aff9a2c; end: 10aff9a33; -[SCDiscoverFeedPromotedStory iconURL] */

undefined8 FUN_10aff9a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff9a34; end: 10aff9a3b; -[SCDiscoverFeedPromotedStory thumbnailURL] */

undefined8 FUN_10aff9a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aff9a3c; end: 10aff9a43; -[SCDiscoverFeedPromotedStory requestId] */

undefined8 FUN_10aff9a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aff9a44; end: 10aff9a4b; -[SCDiscoverFeedPromotedStory serveItemId] */

undefined8 FUN_10aff9a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aff9a4c; end: 10aff9a53; -[SCDiscoverFeedPromotedStory brandName] */

undefined8 FUN_10aff9a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aff9a54; end: 10aff9a5b; -[SCDiscoverFeedPromotedStory adId] */

undefined8 FUN_10aff9a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aff9a5c; end: 10aff9a63; -[SCDiscoverFeedPromotedStory adResponse] */

undefined8 FUN_10aff9a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aff9a64; end: 10aff9a6b; -[SCDiscoverFeedPromotedStory trackUrl] */

undefined8 FUN_10aff9a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10aff9a6c; end: 10aff9a73; -[SCDiscoverFeedPromotedStory protoTrackUrl] */

undefined8 FUN_10aff9a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10aff9a74; end: 10aff9a7b; -[SCDiscoverFeedPromotedStory rawUserData] */

undefined8 FUN_10aff9a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10aff9a7c; end: 10aff9a83; -[SCDiscoverFeedPromotedStory rawAdData] */

undefined8 FUN_10aff9a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10aff9a84; end: 10aff9a8b; -[SCDiscoverFeedPromotedStory thirdPartyImpressionTrackUrls] */

undefined8 FUN_10aff9a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10aff9a8c; end: 10aff9a93; -[SCDiscoverFeedPromotedStory thirdPartyImpressionClickUrls] */

undefined8 FUN_10aff9a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10aff9a94; end: 10aff9a9b; -[SCDiscoverFeedPromotedStory tileCtaConfig] */

undefined8 FUN_10aff9a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10aff9a9c; end: 10aff9aa3; -[SCDiscoverFeedPromotedStory brandSafetyInventoryType] */

undefined8 FUN_10aff9a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10aff9aa4; end: 10aff9aab; -[SCDiscoverFeedPromotedStory adjacentStoriesGarmBrandSafety] */

undefined8 FUN_10aff9aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10aff9aac; end: 10aff9b83; -[SCDiscoverFeedPromotedStory .cxx_destruct] */

void FUN_10aff9aac(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aff9b84; end: 10aff9b9f; +[SCDiscoverFeedPromotedStoryBuilder discoverFeedPromotedStory] */

void FUN_10aff9b84(void)

{
  _objc_alloc_init(PTR_PTR_1126d7208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aff9ba0; end: 10affa05b; +[SCDiscoverFeedPromotedStoryBuilder discoverFeedPromotedStoryFromExistingDiscoverFeedPromotedStory:] */

void FUN_10aff9ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
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
  undefined *puVar36;
  
  puVar1 = PTR_PTR_1126d7208;
  _objc_retain(param_3);
  func_0x00010bf81bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af6c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b9a60(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2af940(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bb060(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b70c0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b8440(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2a98c0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2a7840(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2a7c40(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c278ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2bbae0(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c119580();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2b63c0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c120400();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2b6820(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c11ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2b6800(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c26d2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c2baee0(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c26d2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010c2baec0(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_3;
  func_0x00010c26ea40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar31;
  func_0x00010c2bb120(puVar31,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010bf21060(param_3);
  puVar35 = puVar33;
  func_0x00010c2a98e0(puVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010befd800(param_3);
  _objc_release(param_3);
  puVar36 = puVar35;
  func_0x00010c2a7fc0(puVar35,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar35);
  _objc_release(puVar33);
  _objc_release(uVar32);
  _objc_release(puVar31);
  _objc_release(uVar30);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar36);
  return;
}



/* Entry: 10affa05c; end: 10affa0c3; -[SCDiscoverFeedPromotedStoryBuilder build] */

void FUN_10affa05c(void)

{
  _objc_alloc(PTR_PTR_1126d9810);
  func_0x00010c01a340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10affa0c4; end: 10affa0fb; -[SCDiscoverFeedPromotedStoryBuilder withHeadline:] */

long FUN_10affa0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa0fc; end: 10affa133; -[SCDiscoverFeedPromotedStoryBuilder withSnaps:] */

long FUN_10affa0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa134; end: 10affa16b; -[SCDiscoverFeedPromotedStoryBuilder withIconURL:] */

long FUN_10affa134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa16c; end: 10affa1a3; -[SCDiscoverFeedPromotedStoryBuilder withThumbnailURL:] */

long FUN_10affa16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa1a4; end: 10affa1db; -[SCDiscoverFeedPromotedStoryBuilder withRequestId:] */

long FUN_10affa1a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa1dc; end: 10affa213; -[SCDiscoverFeedPromotedStoryBuilder withServeItemId:] */

long FUN_10affa1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa214; end: 10affa24b; -[SCDiscoverFeedPromotedStoryBuilder withBrandName:] */

long FUN_10affa214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa24c; end: 10affa283; -[SCDiscoverFeedPromotedStoryBuilder withAdId:] */

long FUN_10affa24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa284; end: 10affa2bb; -[SCDiscoverFeedPromotedStoryBuilder withAdResponse:] */

long FUN_10affa284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa2bc; end: 10affa2f3; -[SCDiscoverFeedPromotedStoryBuilder withTrackUrl:] */

long FUN_10affa2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa2f4; end: 10affa32b; -[SCDiscoverFeedPromotedStoryBuilder withProtoTrackUrl:] */

long FUN_10affa2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa32c; end: 10affa363; -[SCDiscoverFeedPromotedStoryBuilder withRawUserData:] */

long FUN_10affa32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa364; end: 10affa39b; -[SCDiscoverFeedPromotedStoryBuilder withRawAdData:] */

long FUN_10affa364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa39c; end: 10affa3d3; -[SCDiscoverFeedPromotedStoryBuilder withThirdPartyImpressionTrackUrls:] */

long FUN_10affa39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa3d4; end: 10affa40b; -[SCDiscoverFeedPromotedStoryBuilder withThirdPartyImpressionClickUrls:] */

long FUN_10affa3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa40c; end: 10affa443; -[SCDiscoverFeedPromotedStoryBuilder withTileCtaConfig:] */

long FUN_10affa40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affa444; end: 10affa44b; -[SCDiscoverFeedPromotedStoryBuilder withBrandSafetyInventoryType:] */

void FUN_10affa444(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10affa44c; end: 10affa453; -[SCDiscoverFeedPromotedStoryBuilder withAdjacentStoriesGarmBrandSafety:] */

void FUN_10affa44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10affa454; end: 10affa52b; -[SCDiscoverFeedPromotedStoryBuilder .cxx_destruct] */

void FUN_10affa454(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10affa52c; end: 10affa627; -[SCDiscoverFeedPromotedStoryTileCtaConfig initWithCoder:] */

undefined1 *
FUN_10affa52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_7);
  puStack_38 = PTR_PTR_112704130;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_7;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_7;
    func_0x00010bf67000(param_7);
    _objc_retainAutoreleasedReturnValue();
    _UIEdgeInsetsFromString();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10affa628; end: 10affa6ef; -[SCDiscoverFeedPromotedStoryTileCtaConfig initWithEnabled:displayCta:tapAreaInsets:showTapAreaVisualOverlay:tileCtaOverrides:] */

undefined1 *
FUN_10affa628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112704130;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 10affa6f0; end: 10affa713; -[SCDiscoverFeedPromotedStoryTileCtaConfig copyWithZone:] */

undefined8 FUN_10affa6f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10affa714; end: 10affa7cf; -[SCDiscoverFeedPromotedStoryTileCtaConfig encodeWithCoder:] */

void FUN_10affa714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49b38);
  uVar2 = param_3;
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f49b58);
  _NSStringFromUIEdgeInsets
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar2,&PTR____CFConstantStringClassReference_110f49b78);
  _objc_release(uVar2);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f49b98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f49bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10affa7d0; end: 10affa8c7; -[SCDiscoverFeedPromotedStoryTileCtaConfig hash] */

ulong * FUN_10affa7d0(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ushort uVar7;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_48 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar4 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_28 = (ulong)*(byte *)(param_1 + 10);
  func_0x00010bfde980();
  puVar2 = &uStack_58;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_10affa994:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10affa998;
    puVar6 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((((char)puVar2[1] == (char)param_3[1] &&
         (*(char *)((long)puVar2 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar2 + 10) == *(char *)((long)param_3 + 10))))) {
      uVar7 = NEON_uminv(CONCAT26(-(ushort)((double)puVar2[6] == (double)param_3[6]),
                                  CONCAT24(-(ushort)((double)puVar2[5] == (double)param_3[5]),
                                           CONCAT22(-(ushort)((double)puVar2[4] ==
                                                             (double)param_3[4]),
                                                    -(ushort)((double)puVar2[3] ==
                                                             (double)param_3[3])))),2);
      if ((uVar7 & 1) != 0) {
        puVar6 = (ulong *)puVar2[2];
        if (puVar6 != (ulong *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10affa998;
        }
        goto LAB_10affa994;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10affa998:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10affa8c8; end: 10affa9b3; -[SCDiscoverFeedPromotedStoryTileCtaConfig isEqual:] */

long FUN_10affa8c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10affa994:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10affa998;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x30) ==
                                           *(double *)(param_3 + 0x30)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x28) ==
                                                    *(double *)(param_3 + 0x28)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x20) ==
                                                             *(double *)(param_3 + 0x20)),
                                                    -(ushort)(*(double *)(param_1 + 0x18) ==
                                                             *(double *)(param_3 + 0x18))))),2);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10affa998;
        }
        goto LAB_10affa994;
      }
    }
    lVar3 = 0;
  }
LAB_10affa998:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10affa9b4; end: 10affa9bb; -[SCDiscoverFeedPromotedStoryTileCtaConfig enabled] */

undefined1 FUN_10affa9b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10affa9bc; end: 10affa9c3; -[SCDiscoverFeedPromotedStoryTileCtaConfig displayCta] */

undefined1 FUN_10affa9bc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10affa9c4; end: 10affa9cf; -[SCDiscoverFeedPromotedStoryTileCtaConfig tapAreaInsets] */

undefined8 FUN_10affa9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10affa9d0; end: 10affa9d7; -[SCDiscoverFeedPromotedStoryTileCtaConfig showTapAreaVisualOverlay] */

undefined1 FUN_10affa9d0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10affa9d8; end: 10affa9df; -[SCDiscoverFeedPromotedStoryTileCtaConfig tileCtaOverrides] */

undefined8 FUN_10affa9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10affa9e0; end: 10affa9eb; -[SCDiscoverFeedPromotedStoryTileCtaConfig .cxx_destruct] */

void FUN_10affa9e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10affa9ec; end: 10affaa73; -[SCDiscoverFeedAdToLens initWithCoder:] */

undefined1 * FUN_10affa9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affaa74; end: 10affaaeb; -[SCDiscoverFeedAdToLens initWithLensItems:] */

undefined1 * FUN_10affaa74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affaaec; end: 10affab0f; -[SCDiscoverFeedAdToLens copyWithZone:] */

undefined8 FUN_10affaaec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


