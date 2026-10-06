/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6e51fc; end: 10b6e52db; -[SCFetchOptions encodeWithCoder:] */

void FUN_10b6e51fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar2,&PTR____CFConstantStringClassReference_110f711b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f711d8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f711f8);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f71218);
  _objc_release(puVar1);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f71238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e52dc; end: 10b6e52e3; -[SCFetchOptions preferFasterCoding] */

undefined8 FUN_10b6e52dc(void)

{
  return 1;
}



/* Entry: 10b6e52e4; end: 10b6e5357; -[SCFetchOptions encodeWithFasterCoder:] */

void FUN_10b6e52e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf93240(param_3,param_2,uVar1);
  func_0x00010bf93240(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e5358; end: 10b6e5403; -[SCFetchOptions decodeWithFasterDecoder:] */

void FUN_10b6e5358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf672a0();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_3;
  func_0x00010bf672a0();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6e5404; end: 10b6e54ab; -[SCFetchOptions setObject:forUInt64Key:] */

void FUN_10b6e5404(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x10099c5eab7e51) {
    lVar2 = 8;
  }
  else if (param_4 == 0x22c559786ad0f7) {
    lVar2 = 0x10;
  }
  else {
    if (param_4 != 0x9583d87b22ce4f) goto LAB_10b6e5498;
    lVar2 = 0x28;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6e5498:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e54ac; end: 10b6e54ef; -[SCFetchOptions setUInt64:forUInt64Key:] */

void FUN_10b6e54ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 == 0xc1c4632a7c948d) {
    lVar1 = 0x20;
  }
  else {
    if (param_4 != 0x7c3293946a85da) {
      return;
    }
    lVar1 = 0x18;
  }
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b6e54f0; end: 10b6e5503; +[SCFetchOptions fasterCodingVersion] */

undefined8 FUN_10b6e54f0(void)

{
  return 0x715a68e17c6bd794;
}



/* Entry: 10b6e5504; end: 10b6e550f; +[SCFetchOptions fasterCodingKeys] */

undefined8 FUN_10b6e5504(void)

{
  return 0x1133bbbf0;
}



/* Entry: 10b6e5510; end: 10b6e558f; -[SCFetchOptions isEqual:] */

bool FUN_10b6e5510(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1137f7980,0x1137f7988,5,3);
  if (((int)lVar2 == 0) || (*(long *)(param_3 + 0x18) != *(long *)(param_1 + 0x18))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_3 + 0x20) == *(long *)(param_1 + 0x20);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6e5590; end: 10b6e564b; -[SCFetchOptions hash] */

ulong FUN_10b6e5590(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  auStack_50[3] = *(undefined8 *)(param_1 + 0x20);
  auStack_50[2] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x28);
  auStack_50[1] = uVar2;
  func_0x00010bfde980();
  auStack_50[4] = lVar3;
  lVar4 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_50 + lVar4) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar3 + 8);
}



/* Entry: 10b6e564c; end: 10b6e5653; -[SCFetchOptions predicate] */

undefined8 FUN_10b6e564c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6e5654; end: 10b6e565b; -[SCFetchOptions sortDescriptors] */

undefined8 FUN_10b6e5654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6e565c; end: 10b6e5663; -[SCFetchOptions fetchOffset] */

undefined8 FUN_10b6e565c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6e5664; end: 10b6e566b; -[SCFetchOptions fetchLimit] */

undefined8 FUN_10b6e5664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6e566c; end: 10b6e5673; -[SCFetchOptions propertiesToFetch] */

undefined8 FUN_10b6e566c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6e5674; end: 10b6e56af; -[SCFetchOptions .cxx_destruct] */

void FUN_10b6e5674(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e56b0; end: 10b6e589f; -[SCCustomStickerData initWithObjectID:creationTime:encIv:encKey:isSynced:lastInteractionTime:numSyncFailed:originalSnapId:packId:stickerId:type:] */

undefined8 *
FUN_10b6e56b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112709d70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_9;
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
    *(undefined4 *)(puVar1 + 2) = param_14;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b6e58a0; end: 10b6e58c3; -[SCCustomStickerData copyWithZone:] */

undefined8 FUN_10b6e58a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e58c4; end: 10b6e5a9f; -[SCCustomStickerData initWithCoder:] */

undefined1 * FUN_10b6e58c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0xc) = (int)uVar2;
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
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x10) = (int)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e5aa0; end: 10b6e5bb3; -[SCCustomStickerData encodeWithCoder:] */

void FUN_10b6e5aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f71258);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ef1318);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f6def8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f6df18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110db9358);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f6df38);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f6deb8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f6df58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110efe458);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110efdc78);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dad058);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e5bb4; end: 10b6e5bbb; -[SCCustomStickerData preferFasterCoding] */

undefined8 FUN_10b6e5bb4(void)

{
  return 1;
}



/* Entry: 10b6e5bbc; end: 10b6e5c77; -[SCCustomStickerData encodeWithFasterCoder:] */

void FUN_10b6e5bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0xc));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e5c78; end: 10b6e5dd7; -[SCCustomStickerData decodeWithFasterDecoder:] */

void FUN_10b6e5c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 0xc) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67120();
  _objc_release(param_3);
  *(int *)(param_1 + 0x10) = (int)uVar1;
  return;
}



/* Entry: 10b6e5dd8; end: 10b6e5f67; -[SCCustomStickerData setObject:forUInt64Key:] */

void FUN_10b6e5dd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x7a5d62ed8c606e) {
    if (param_4 < 0x50dd40ccba7ea1) {
      if (param_4 == 0x3c1d802e831cc5) {
        lVar2 = 0x28;
      }
      else {
        if (param_4 != 0x50c90ca0725ee6) goto LAB_10b6e5f54;
        lVar2 = 0x50;
      }
    }
    else if (param_4 == 0x50dd40ccba7ea1) {
      lVar2 = 0x38;
    }
    else {
      if (param_4 != 0x6eb336ef7e7403) goto LAB_10b6e5f54;
      lVar2 = 0x30;
    }
  }
  else if (param_4 < 0xde06b1fd60508f) {
    if (param_4 == 0x7a5d62ed8c606e) {
      lVar2 = 0x18;
    }
    else {
      if (param_4 != 0xcb5067992bf749) goto LAB_10b6e5f54;
      lVar2 = 0x48;
    }
  }
  else if (param_4 == 0xde06b1fd60508f) {
    lVar2 = 0x20;
  }
  else {
    if (param_4 != 0xecd07a761758a0) goto LAB_10b6e5f54;
    lVar2 = 0x40;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6e5f54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e5f68; end: 10b6e5f87; -[SCCustomStickerData setBool:forUInt64Key:] */

void FUN_10b6e5f68(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  if (param_4 == 0x473f4e1d7bbe57) {
    *(undefined1 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b6e5f88; end: 10b6e5fcb; -[SCCustomStickerData setSInt32:forUInt64Key:] */

void FUN_10b6e5f88(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 == 0x4147482bc94066) {
    lVar1 = 0xc;
  }
  else {
    if (param_4 != 0x98dcccaf9f53d0) {
      return;
    }
    lVar1 = 0x10;
  }
  *(undefined4 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b6e5fcc; end: 10b6e5fdf; +[SCCustomStickerData fasterCodingVersion] */

undefined8 FUN_10b6e5fcc(void)

{
  return 0xa868722e6ab5c5b7;
}



/* Entry: 10b6e5fe0; end: 10b6e5feb; +[SCCustomStickerData fasterCodingKeys] */

undefined8 FUN_10b6e5fe0(void)

{
  return 0x1133bbc80;
}



/* Entry: 10b6e5fec; end: 10b6e6093; -[SCCustomStickerData isEqual:] */

bool FUN_10b6e5fec(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1137f79a0,0x1137f79a8,0xb,8);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    if ((*(char *)(param_3 + 8) == *(char *)(param_1 + 8)) &&
       (*(int *)(param_3 + 0xc) == *(int *)(param_1 + 0xc))) {
      bVar1 = *(int *)(param_3 + 0x10) == *(int *)(param_1 + 0x10);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6e6094; end: 10b6e618f; -[SCCustomStickerData hash] */

undefined * FUN_10b6e6094(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong auStack_80 [11];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  auStack_80[1] = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  auStack_80[2] = uVar3;
  func_0x00010bfde980();
  auStack_80[4] = (ulong)*(byte *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  auStack_80[3] = uVar2;
  func_0x00010bfde980();
  auStack_80[6] = (ulong)*(int *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  auStack_80[5] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  auStack_80[7] = uVar2;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x50);
  auStack_80[8] = uVar3;
  func_0x00010bfde980();
  auStack_80[9] = lVar4;
  auStack_80[10] = (long)*(int *)(param_1 + 0x10);
  lVar7 = 8;
  do {
    uVar8 = *(ulong *)((long)auStack_80 + lVar7) | (long)puVar1 << 0x20;
    uVar8 = ~uVar8 + uVar8 * 0x40000;
    uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
    uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
    puVar1 = (undefined *)(uVar8 ^ uVar8 >> 0x16);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71298);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f712b8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f712d8);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(lVar4 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f712f8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71318);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar4 + 0xc));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71338);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71358);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar4 + 0x48);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71378);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71398);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar4 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f713b8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 10b6e6190; end: 10b6e6477; -[SCCustomStickerData description] */

void FUN_10b6e6190(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71298);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f712b8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f712d8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f712f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71318);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0xc));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71338);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71358);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71378);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71398);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f713b8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6e6478; end: 10b6e647f; -[SCCustomStickerData objectID] */

undefined8 FUN_10b6e6478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6e6480; end: 10b6e6487; -[SCCustomStickerData creationTime] */

undefined8 FUN_10b6e6480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6e6488; end: 10b6e648f; -[SCCustomStickerData encIv] */

undefined8 FUN_10b6e6488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6e6490; end: 10b6e6497; -[SCCustomStickerData encKey] */

undefined8 FUN_10b6e6490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6e6498; end: 10b6e649f; -[SCCustomStickerData isSynced] */

undefined1 FUN_10b6e6498(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6e64a0; end: 10b6e64a7; -[SCCustomStickerData lastInteractionTime] */

undefined8 FUN_10b6e64a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b6e64a8; end: 10b6e64af; -[SCCustomStickerData numSyncFailed] */

undefined4 FUN_10b6e64a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b6e64b0; end: 10b6e64b7; -[SCCustomStickerData originalSnapId] */

undefined8 FUN_10b6e64b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6e64b8; end: 10b6e64bf; -[SCCustomStickerData packId] */

undefined8 FUN_10b6e64b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6e64c0; end: 10b6e64c7; -[SCCustomStickerData stickerId] */

undefined8 FUN_10b6e64c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b6e64c8; end: 10b6e64cf; -[SCCustomStickerData type] */

undefined4 FUN_10b6e64c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b6e64d0; end: 10b6e6547; -[SCCustomStickerData .cxx_destruct] */

void FUN_10b6e64d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10b6e6548; end: 10b6e673b; +[SCCustomStickerDataBuilder withCustomStickerData:] */

void FUN_10b6e6548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e0590;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf92c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf92c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c080740();
  puVar1[0x28] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c089180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0de780();
  *(int *)(puVar1 + 0x38) = (int)uVar2;
  uVar2 = param_3;
  func_0x00010c0ed940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f0a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x48);
  *(undefined8 *)(puVar1 + 0x48) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x50);
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  *(int *)(puVar1 + 0x58) = (int)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6e673c; end: 10b6e679f; -[SCCustomStickerDataBuilder build] */

void FUN_10b6e673c(void)

{
  _objc_alloc(PTR_PTR_1126e04e8);
  func_0x00010c030880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6e67a0; end: 10b6e67d7; -[SCCustomStickerDataBuilder setObjectID:] */

long FUN_10b6e67a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e67d8; end: 10b6e680f; -[SCCustomStickerDataBuilder setCreationTime:] */

long FUN_10b6e67d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e6810; end: 10b6e6847; -[SCCustomStickerDataBuilder setEncIv:] */

long FUN_10b6e6810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e6848; end: 10b6e687f; -[SCCustomStickerDataBuilder setEncKey:] */

long FUN_10b6e6848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e6880; end: 10b6e6887; -[SCCustomStickerDataBuilder setIsSynced:] */

void FUN_10b6e6880(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b6e6888; end: 10b6e68bf; -[SCCustomStickerDataBuilder setLastInteractionTime:] */

long FUN_10b6e6888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e68c0; end: 10b6e68c7; -[SCCustomStickerDataBuilder setNumSyncFailed:] */

void FUN_10b6e68c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b6e68c8; end: 10b6e68ff; -[SCCustomStickerDataBuilder setOriginalSnapId:] */

long FUN_10b6e68c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e6900; end: 10b6e6937; -[SCCustomStickerDataBuilder setPackId:] */

long FUN_10b6e6900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e6938; end: 10b6e696f; -[SCCustomStickerDataBuilder setStickerId:] */

long FUN_10b6e6938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e6970; end: 10b6e6977; -[SCCustomStickerDataBuilder setType:] */

void FUN_10b6e6970(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b6e6978; end: 10b6e69ef; -[SCCustomStickerDataBuilder .cxx_destruct] */

void FUN_10b6e6978(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e69f0; end: 10b6e6aa3; -[SCCustomStickerDeletion initWithObjectID:numSyncFailed:stickerId:] */

undefined1 *
FUN_10b6e69f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112709d78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e6aa4; end: 10b6e6ac7; -[SCCustomStickerDeletion copyWithZone:] */

undefined8 FUN_10b6e6aa4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e6ac8; end: 10b6e6b8b; -[SCCustomStickerDeletion initWithCoder:] */

undefined1 * FUN_10b6e6ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d78;
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
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e6b8c; end: 10b6e6bff; -[SCCustomStickerDeletion encodeWithCoder:] */

void FUN_10b6e6b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f71258);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f6deb8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110efdc78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e6c00; end: 10b6e6c07; -[SCCustomStickerDeletion preferFasterCoding] */

undefined8 FUN_10b6e6c00(void)

{
  return 1;
}



/* Entry: 10b6e6c08; end: 10b6e6c63; -[SCCustomStickerDeletion encodeWithFasterCoder:] */

void FUN_10b6e6c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf930e0(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e6c64; end: 10b6e6ce3; -[SCCustomStickerDeletion decodeWithFasterDecoder:] */

void FUN_10b6e6c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(int *)(param_1 + 8) = (int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6e6ce4; end: 10b6e6d6b; -[SCCustomStickerDeletion setObject:forUInt64Key:] */

void FUN_10b6e6ce4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x7a5d62ed8c606e) {
    lVar2 = 0x10;
  }
  else {
    if (param_4 != 0x50c90ca0725ee6) goto LAB_10b6e6d58;
    lVar2 = 0x18;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6e6d58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e6d6c; end: 10b6e6d8b; -[SCCustomStickerDeletion setSInt32:forUInt64Key:] */

void FUN_10b6e6d6c(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  if (param_4 == 0x4147482bc94066) {
    *(undefined4 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b6e6d8c; end: 10b6e6d9f; +[SCCustomStickerDeletion fasterCodingVersion] */

undefined8 FUN_10b6e6d8c(void)

{
  return 0xd551d1426467ce64;
}



/* Entry: 10b6e6da0; end: 10b6e6dab; +[SCCustomStickerDeletion fasterCodingKeys] */

undefined8 FUN_10b6e6da0(void)

{
  return 0x1133bbce0;
}



/* Entry: 10b6e6dac; end: 10b6e6e1b; -[SCCustomStickerDeletion isEqual:] */

bool FUN_10b6e6dac(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1137f79e8,0x1137f79f0,3,2);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_3 + 8) == *(int *)(param_1 + 8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6e6e1c; end: 10b6e6ecb; -[SCCustomStickerDeletion hash] */

undefined * FUN_10b6e6e1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong auStack_40 [4];
  
  auStack_40[3] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010bfde980();
  auStack_40[1] = (ulong)*(int *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfde980();
  auStack_40[2] = lVar2;
  lVar6 = 8;
  do {
    uVar7 = *(ulong *)((long)auStack_40 + lVar6) | (long)puVar1 << 0x20;
    uVar7 = ~uVar7 + uVar7 * 0x40000;
    uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
    uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
    puVar1 = (undefined *)(uVar7 ^ uVar7 >> 0x16);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_40[3]) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(lVar2 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71338);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71398);
  _objc_release(uVar3);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10b6e6ecc; end: 10b6e6ff3; -[SCCustomStickerDeletion description] */

void FUN_10b6e6ecc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71278);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71338);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f71398);
  _objc_release(uVar2);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59558);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b6e6ff4; end: 10b6e6ffb; -[SCCustomStickerDeletion objectID] */

undefined8 FUN_10b6e6ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6e6ffc; end: 10b6e7003; -[SCCustomStickerDeletion numSyncFailed] */

undefined4 FUN_10b6e6ffc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6e7004; end: 10b6e700b; -[SCCustomStickerDeletion stickerId] */

undefined8 FUN_10b6e7004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6e700c; end: 10b6e703b; -[SCCustomStickerDeletion .cxx_destruct] */

void FUN_10b6e700c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6e703c; end: 10b6e70f7; +[SCCustomStickerDeletionBuilder withCustomStickerDeletion:] */

void FUN_10b6e703c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e0598;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0de780();
  *(int *)(puVar1 + 0x10) = (int)uVar2;
  uVar2 = param_3;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6e70f8; end: 10b6e712f; -[SCCustomStickerDeletionBuilder build] */

void FUN_10b6e70f8(void)

{
  _objc_alloc(PTR_PTR_1126e04f0);
  func_0x00010c030900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6e7130; end: 10b6e7167; -[SCCustomStickerDeletionBuilder setObjectID:] */

long FUN_10b6e7130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e7168; end: 10b6e716f; -[SCCustomStickerDeletionBuilder setNumSyncFailed:] */

void FUN_10b6e7168(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6e7170; end: 10b6e71a7; -[SCCustomStickerDeletionBuilder setStickerId:] */

long FUN_10b6e7170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b6e71a8; end: 10b6e71d7; -[SCCustomStickerDeletionBuilder .cxx_destruct] */

void FUN_10b6e71a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e71d8; end: 10b6e7283; -[SCCustomStickerOwner initWithObjectID:userId:] */

undefined1 *
FUN_10b6e71d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709d80;
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



/* Entry: 10b6e7284; end: 10b6e72a7; -[SCCustomStickerOwner copyWithZone:] */

undefined8 FUN_10b6e7284(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e72a8; end: 10b6e7357; -[SCCustomStickerOwner initWithCoder:] */

undefined1 * FUN_10b6e72a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d80;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e7358; end: 10b6e73b7; -[SCCustomStickerOwner encodeWithCoder:] */

void FUN_10b6e7358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f71258);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110db1318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e73b8; end: 10b6e73bf; -[SCCustomStickerOwner preferFasterCoding] */

undefined8 FUN_10b6e73b8(void)

{
  return 1;
}



/* Entry: 10b6e73c0; end: 10b6e740f; -[SCCustomStickerOwner encodeWithFasterCoder:] */

void FUN_10b6e73c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e7410; end: 10b6e7483; -[SCCustomStickerOwner decodeWithFasterDecoder:] */

void FUN_10b6e7410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b6e7484; end: 10b6e750b; -[SCCustomStickerOwner setObject:forUInt64Key:] */

void FUN_10b6e7484(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x7a5d62ed8c606e) {
    lVar2 = 8;
  }
  else {
    if (param_4 != 0xbefd6c8dd318b) goto LAB_10b6e74f8;
    lVar2 = 0x10;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b6e74f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6e750c; end: 10b6e751f; +[SCCustomStickerOwner fasterCodingVersion] */

undefined8 FUN_10b6e750c(void)

{
  return 0x804d2b670bd4f569;
}



/* Entry: 10b6e7520; end: 10b6e752b; +[SCCustomStickerOwner fasterCodingKeys] */

undefined8 FUN_10b6e7520(void)

{
  return 0x1133bbd00;
}



/* Entry: 10b6e752c; end: 10b6e7547; -[SCCustomStickerOwner isEqual:] */

undefined8 * FUN_10b6e752c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x1137f7a08;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 2;
  lVar5 = 2;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam00000001137f7a00 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x1137f7a08) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam00000001137f7a00 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 10b6e7548; end: 10b6e755b; -[SCCustomStickerOwner hash] */

ulong FUN_10b6e7548(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x1137f7a08;
  if ((bRam00000001137f7a00 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 2;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x1137f7a08) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam00000001137f7a00 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam00000001137f7a08);
  func_0x00010bfde980(uVar3);
  lVar7 = 1;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 10b6e755c; end: 10b6e755f; -[SCCustomStickerOwner description] */

void FUN_10b6e755c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  uint uStack_54;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  func_0x00010bf070e0();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = (code *)&UNK_10bc85bf0;
  puStack_68 = &UNK_110d96578;
  lVar2 = param_1;
  puStack_60 = puVar1;
  _objc_opt_class();
  _class_copyIvarList();
  if (uStack_54 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)(lVar2 + uVar6 * 8);
      lVar3 = lVar4;
      _ivar_getOffset();
      uVar5 = *(undefined8 *)(param_1 + lVar3);
      _ivar_getName(lVar4);
      (*pcStack_70)(&puStack_80,uVar5,lVar4,lVar3);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uStack_54);
  }
  _free(lVar2);
  func_0x00010bf070e0(puVar1);
  func_0x00010bf51e00(puVar1);
  _objc_autorelease();
  return;
}



/* Entry: 10b6e7560; end: 10b6e7567; -[SCCustomStickerOwner objectID] */

undefined8 FUN_10b6e7560(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6e7568; end: 10b6e756f; -[SCCustomStickerOwner userId] */

undefined8 FUN_10b6e7568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6e7570; end: 10b6e759f; -[SCCustomStickerOwner .cxx_destruct] */

void FUN_10b6e7570(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e75a0; end: 10b6e764f; +[SCCustomStickerOwnerBuilder withCustomStickerOwner:] */

void FUN_10b6e75a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e05a0;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6e7650; end: 10b6e767f; -[SCCustomStickerOwnerBuilder build] */

void FUN_10b6e7650(void)

{
  _objc_alloc(PTR_PTR_1126dbc30);
  func_0x00010c030960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6e7680; end: 10b6e76b7; -[SCCustomStickerOwnerBuilder setObjectID:] */

long FUN_10b6e7680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}


