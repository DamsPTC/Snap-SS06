/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0e8518; end: 10b0e851f; -[SCBitmojiSceneData avatars] */

undefined8 FUN_10b0e8518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e8520; end: 10b0e8527; -[SCBitmojiSceneData props] */

undefined8 FUN_10b0e8520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e8528; end: 10b0e852f; -[SCBitmojiSceneData payload] */

undefined8 FUN_10b0e8528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0e8530; end: 10b0e8583; -[SCBitmojiSceneData .cxx_destruct] */

void FUN_10b0e8530(long param_1)

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



/* Entry: 10b0e8584; end: 10b0e859f; +[SCBitmojiSceneDataBuilder bitmojiSceneData] */

void FUN_10b0e8584(void)

{
  _objc_alloc_init(PTR_PTR_1126dfaf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e85a0; end: 10b0e8743; +[SCBitmojiSceneDataBuilder bitmojiSceneDataFromExistingBitmojiSceneData:] */

void FUN_10b0e85a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_PTR_1126dfaf8;
  _objc_retain(param_3);
  func_0x00010bf1bfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c14fa80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b7a00(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c130260(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b6d60(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf133c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2a9000(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c118e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b6380(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0f6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar11 = puVar9;
  func_0x00010c2b5560(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10b0e8744; end: 10b0e877b; -[SCBitmojiSceneDataBuilder build] */

void FUN_10b0e8744(void)

{
  _objc_alloc(PTR_PTR_1126b9650);
  func_0x00010c041b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e877c; end: 10b0e87b3; -[SCBitmojiSceneDataBuilder withSceneId:] */

long FUN_10b0e877c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e87b4; end: 10b0e87eb; -[SCBitmojiSceneDataBuilder withRenderSurface:] */

long FUN_10b0e87b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e87ec; end: 10b0e8823; -[SCBitmojiSceneDataBuilder withAvatars:] */

long FUN_10b0e87ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e8824; end: 10b0e885b; -[SCBitmojiSceneDataBuilder withProps:] */

long FUN_10b0e8824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e885c; end: 10b0e8893; -[SCBitmojiSceneDataBuilder withPayload:] */

long FUN_10b0e885c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e8894; end: 10b0e88e7; -[SCBitmojiSceneDataBuilder .cxx_destruct] */

void FUN_10b0e8894(long param_1)

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



/* Entry: 10b0e88e8; end: 10b0e89f3; -[SCBitmojiGLBAssetPair initWithBaseAsset:animationAsset:avatarUrl:propUrl:] */

undefined1 *
FUN_10b0e88e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705bc8;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e89f4; end: 10b0e8af3; -[SCBitmojiGLBAssetPair initWithCoder:] */

undefined1 * FUN_10b0e89f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705bc8;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e8af4; end: 10b0e8b17; -[SCBitmojiGLBAssetPair copyWithZone:] */

undefined8 FUN_10b0e8af4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e8b18; end: 10b0e8b9f; -[SCBitmojiGLBAssetPair encodeWithCoder:] */

void FUN_10b0e8b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f5ea78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f5ea98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f5eab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f5ead8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e8ba0; end: 10b0e8c2b; -[SCBitmojiGLBAssetPair hash] */

undefined8 * FUN_10b0e8ba0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0e8cdc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0e8ce8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b0e8ce8;
            }
            goto LAB_10b0e8cdc;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0e8ce8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0e8c2c; end: 10b0e8d03; -[SCBitmojiGLBAssetPair isEqual:] */

long FUN_10b0e8c2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e8cdc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e8ce8;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b0e8ce8;
            }
            goto LAB_10b0e8cdc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e8ce8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e8d04; end: 10b0e8d0b; -[SCBitmojiGLBAssetPair baseAsset] */

undefined8 FUN_10b0e8d04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e8d0c; end: 10b0e8d13; -[SCBitmojiGLBAssetPair animationAsset] */

undefined8 FUN_10b0e8d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e8d14; end: 10b0e8d1b; -[SCBitmojiGLBAssetPair avatarUrl] */

undefined8 FUN_10b0e8d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e8d1c; end: 10b0e8d23; -[SCBitmojiGLBAssetPair propUrl] */

undefined8 FUN_10b0e8d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e8d24; end: 10b0e8d6b; -[SCBitmojiGLBAssetPair .cxx_destruct] */

void FUN_10b0e8d24(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e8d6c; end: 10b0e8d87; +[SCBitmojiGLBAssetPairBuilder bitmojiGLBAssetPair] */

void FUN_10b0e8d6c(void)

{
  _objc_alloc_init(PTR_PTR_1126dfb00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e8d88; end: 10b0e8ee3; +[SCBitmojiGLBAssetPairBuilder bitmojiGLBAssetPairFromExistingBitmojiGLBAssetPair:] */

void FUN_10b0e8d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_PTR_1126dfb00;
  _objc_retain(param_3);
  func_0x00010bf1b7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf15e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a9200(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf039c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a83e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf13240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2a8f60(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c118b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2b6340(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b0e8ee4; end: 10b0e8f17; -[SCBitmojiGLBAssetPairBuilder build] */

void FUN_10b0e8ee4(void)

{
  _objc_alloc(PTR_PTR_1126b9678);
  func_0x00010bff6b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e8f18; end: 10b0e8f4f; -[SCBitmojiGLBAssetPairBuilder withBaseAsset:] */

long FUN_10b0e8f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e8f50; end: 10b0e8f87; -[SCBitmojiGLBAssetPairBuilder withAnimationAsset:] */

long FUN_10b0e8f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e8f88; end: 10b0e8fbf; -[SCBitmojiGLBAssetPairBuilder withAvatarUrl:] */

long FUN_10b0e8f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e8fc0; end: 10b0e8ff7; -[SCBitmojiGLBAssetPairBuilder withPropUrl:] */

long FUN_10b0e8fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e8ff8; end: 10b0e903f; -[SCBitmojiGLBAssetPairBuilder .cxx_destruct] */

void FUN_10b0e8ff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e9040; end: 10b0e90a3; -[SCBitmojiGLBOptimizationParams initWithEnableMeshOpt:meshSimplifyRatio:textureQuality:enableKtx2:] */

void FUN_10b0e9040(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705bd0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined4 *)((long)puVar1 + 0x10) = param_2;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  return;
}



/* Entry: 10b0e90a4; end: 10b0e90c7; -[SCBitmojiGLBOptimizationParams copyWithZone:] */

undefined8 FUN_10b0e90a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e90c8; end: 10b0e9173; -[SCBitmojiGLBOptimizationParams hash] */

ulong * FUN_10b0e90c8(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  float fVar6;
  float fVar7;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_30 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  lStack_28 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  puVar2 = &uStack_38;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar5 = (ulong *)0x1;
  }
  else {
    puVar5 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar5 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) != 0) &&
         (((char)puVar2[1] == (char)param_3[1] &&
          (*(char *)((long)puVar2 + 9) == *(char *)((long)param_3 + 9))))) {
        fVar7 = ABS(*(float *)((long)puVar2 + 0xc) - *(float *)((long)param_3 + 0xc));
        fVar6 = ABS(*(float *)((long)puVar2 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
          bVar1 = fVar7 < fVar6;
        }
        if (bVar1) {
          fVar6 = ABS(*(float *)(puVar2 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07;
          if (fVar6 <= 1.1754944e-38) {
            fVar6 = 1.1754944e-38;
          }
          puVar5 = (ulong *)(ulong)(ABS(*(float *)(puVar2 + 2) - *(float *)(param_3 + 2)) < fVar6);
          goto LAB_10b0e924c;
        }
      }
      puVar5 = (ulong *)0x0;
    }
  }
LAB_10b0e924c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b0e9174; end: 10b0e9267; -[SCBitmojiGLBOptimizationParams isEqual:] */

bool FUN_10b0e9174(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
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
      if (((uVar3 & 1) != 0) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
        fVar5 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
        fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
          bVar1 = fVar5 < fVar4;
        }
        if (bVar1) {
          fVar4 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
          if (fVar4 <= 1.1754944e-38) {
            fVar4 = 1.1754944e-38;
          }
          bVar1 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10)) < fVar4;
          goto LAB_10b0e924c;
        }
      }
      bVar1 = false;
    }
  }
LAB_10b0e924c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0e9268; end: 10b0e926f; -[SCBitmojiGLBOptimizationParams enableMeshOpt] */

undefined1 FUN_10b0e9268(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0e9270; end: 10b0e9277; -[SCBitmojiGLBOptimizationParams meshSimplifyRatio] */

undefined4 FUN_10b0e9270(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b0e9278; end: 10b0e927f; -[SCBitmojiGLBOptimizationParams textureQuality] */

undefined4 FUN_10b0e9278(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b0e9280; end: 10b0e9287; -[SCBitmojiGLBOptimizationParams enableKtx2] */

undefined1 FUN_10b0e9280(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0e9288; end: 10b0e92a3; +[SCBitmojiGLBOptimizationParamsBuilder bitmojiGLBOptimizationParams] */

void FUN_10b0e9288(void)

{
  _objc_alloc_init(PTR_PTR_1126dfb08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e92a4; end: 10b0e939b; +[SCBitmojiGLBOptimizationParamsBuilder bitmojiGLBOptimizationParamsFromExistingBitmojiGLBOptimizationParams:] */

void FUN_10b0e92a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126dfb08;
  _objc_retain(param_3);
  func_0x00010bf1b800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf90ca0(param_3);
  puVar3 = puVar1;
  func_0x00010c2acf80(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb120(param_3);
  puVar4 = puVar3;
  func_0x00010c2b3e00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26cee0(param_3);
  puVar5 = puVar4;
  func_0x00010c2baea0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf909e0(param_3);
  _objc_release(param_3);
  puVar6 = puVar5;
  func_0x00010c2acf40(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b0e939c; end: 10b0e93d3; -[SCBitmojiGLBOptimizationParamsBuilder build] */

void FUN_10b0e939c(long param_1)

{
  _objc_alloc(PTR_PTR_1126b9690);
  func_0x00010c00f840(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e93d4; end: 10b0e93db; -[SCBitmojiGLBOptimizationParamsBuilder withEnableMeshOpt:] */

void FUN_10b0e93d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b0e93dc; end: 10b0e93e3; -[SCBitmojiGLBOptimizationParamsBuilder withMeshSimplifyRatio:] */

void FUN_10b0e93dc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 10b0e93e4; end: 10b0e93eb; -[SCBitmojiGLBOptimizationParamsBuilder withTextureQuality:] */

void FUN_10b0e93e4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10b0e93ec; end: 10b0e93f3; -[SCBitmojiGLBOptimizationParamsBuilder withEnableKtx2:] */

void FUN_10b0e93ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10b0e93f4; end: 10b0e941b; -[SCBitmojiFetchSelfieRequest initWithUserId:avatarId:selfieId:scale:modifier:type:willAcceptPriorAvatarVersion:] */

void FUN_10b0e93f4(void)

{
  func_0x00010c05ad00();
  return;
}



/* Entry: 10b0e941c; end: 10b0e9423; -[SCBitmojiSelfieServices selfiePackProvider] */

undefined8 FUN_10b0e941c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e9424; end: 10b0e945f; -[SCBitmojiSelfieServices .cxx_destruct] */

void FUN_10b0e9424(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e9460; end: 10b0e9597; -[SCBitmojiFetchSelfieRequest initWithUserId:avatarId:selfieId:scale:modifier:type:willAcceptPriorAvatarVersion:renderStyle:] */

undefined1 *
FUN_10b0e9460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112705be0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e9598; end: 10b0e95bb; -[SCBitmojiFetchSelfieRequest copyWithZone:] */

undefined8 FUN_10b0e9598(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e95bc; end: 10b0e9657; -[SCBitmojiFetchSelfieRequest hash] */

undefined8 * FUN_10b0e95bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b0e9748:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0e9754;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((puVar4[5] == param_3[5] && (puVar4[6] == param_3[6])) && (puVar4[7] == param_3[7])) &&
        (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[4];
          if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = (undefined8 *)puVar4[8];
            if (puVar7 != (undefined8 *)param_3[8]) {
              func_0x00010c071ae0();
              goto LAB_10b0e9754;
            }
            goto LAB_10b0e9748;
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b0e9754:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b0e9658; end: 10b0e976f; -[SCBitmojiFetchSelfieRequest isEqual:] */

long FUN_10b0e9658(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e9748:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e9754;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != *(long *)(param_3 + 0x40)) {
              func_0x00010c071ae0();
              goto LAB_10b0e9754;
            }
            goto LAB_10b0e9748;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e9754:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e9770; end: 10b0e9777; -[SCBitmojiFetchSelfieRequest userId] */

undefined8 FUN_10b0e9770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e9778; end: 10b0e977f; -[SCBitmojiFetchSelfieRequest avatarId] */

undefined8 FUN_10b0e9778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e9780; end: 10b0e9787; -[SCBitmojiFetchSelfieRequest selfieId] */

undefined8 FUN_10b0e9780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e9788; end: 10b0e978f; -[SCBitmojiFetchSelfieRequest scale] */

undefined8 FUN_10b0e9788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0e9790; end: 10b0e9797; -[SCBitmojiFetchSelfieRequest modifier] */

undefined8 FUN_10b0e9790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0e9798; end: 10b0e979f; -[SCBitmojiFetchSelfieRequest type] */

undefined8 FUN_10b0e9798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0e97a0; end: 10b0e97a7; -[SCBitmojiFetchSelfieRequest willAcceptPriorAvatarVersion] */

undefined1 FUN_10b0e97a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0e97a8; end: 10b0e97af; -[SCBitmojiFetchSelfieRequest renderStyle] */

undefined8 FUN_10b0e97a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0e97b0; end: 10b0e97f7; -[SCBitmojiFetchSelfieRequest .cxx_destruct] */

void FUN_10b0e97b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e97f8; end: 10b0e9813; +[SCBitmojiFetchSelfieRequestBuilder bitmojiFetchSelfieRequest] */

void FUN_10b0e97f8(void)

{
  _objc_alloc_init(PTR_PTR_1126afd38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e9814; end: 10b0e9a1f; +[SCBitmojiFetchSelfieRequestBuilder bitmojiFetchSelfieRequestFromExistingBitmojiFetchSelfieRequest:] */

void FUN_10b0e9814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126afd38;
  _objc_retain(param_3);
  func_0x00010bf1b4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bc360(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a8ea0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c15ade0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b8160(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c14e120(param_3);
  puVar9 = puVar7;
  func_0x00010c2b78c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0d0400(param_3);
  puVar10 = puVar9;
  func_0x00010c2b4100(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c27dd80(param_3);
  puVar11 = puVar10;
  func_0x00010c2bbd20(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c2a56c0(param_3);
  puVar12 = puVar11;
  func_0x00010c2bcea0(puVar11,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c130200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar13 = puVar12;
  func_0x00010c2b6d20(puVar12,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10b0e9a20; end: 10b0e9a6f; -[SCBitmojiFetchSelfieRequestBuilder build] */

void FUN_10b0e9a20(void)

{
  _objc_alloc(PTR_PTR_1126b4bc0);
  func_0x00010c05ad00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e9a70; end: 10b0e9aa7; -[SCBitmojiFetchSelfieRequestBuilder withUserId:] */

long FUN_10b0e9a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e9aa8; end: 10b0e9adf; -[SCBitmojiFetchSelfieRequestBuilder withAvatarId:] */

long FUN_10b0e9aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e9ae0; end: 10b0e9b17; -[SCBitmojiFetchSelfieRequestBuilder withSelfieId:] */

long FUN_10b0e9ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e9b18; end: 10b0e9b1f; -[SCBitmojiFetchSelfieRequestBuilder withScale:] */

void FUN_10b0e9b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b0e9b20; end: 10b0e9b27; -[SCBitmojiFetchSelfieRequestBuilder withModifier:] */

void FUN_10b0e9b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b0e9b28; end: 10b0e9b2f; -[SCBitmojiFetchSelfieRequestBuilder withType:] */

void FUN_10b0e9b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b0e9b30; end: 10b0e9b37; -[SCBitmojiFetchSelfieRequestBuilder withWillAcceptPriorAvatarVersion:] */

void FUN_10b0e9b30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b0e9b38; end: 10b0e9b6f; -[SCBitmojiFetchSelfieRequestBuilder withRenderStyle:] */

long FUN_10b0e9b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e9b70; end: 10b0e9bb7; -[SCBitmojiFetchSelfieRequestBuilder .cxx_destruct] */

void FUN_10b0e9b70(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e9bb8; end: 10b0e9bdb; -[SCBitmojiImageParams initWithTemplateId:avatarId:friendAvatarId:scale:imageType:isAnimated:customojiParams:] */

void FUN_10b0e9bb8(void)

{
  func_0x00010c050fc0();
  return;
}



/* Entry: 10b0e9bdc; end: 10b0e9be3; -[SCBitmojiFetchServices remoteVideoURLProvider] */

undefined8 FUN_10b0e9bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e9be4; end: 10b0e9c2b; -[SCBitmojiFetchServices .cxx_destruct] */

void FUN_10b0e9be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e9c2c; end: 10b0e9d83; -[SCBitmojiImageParams initWithTemplateId:avatarId:friendAvatarId:scale:imageType:isAnimated:customojiParams:renderStyleOverride:] */

undefined1 *
FUN_10b0e9c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112705bf0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e9d84; end: 10b0e9da7; -[SCBitmojiImageParams copyWithZone:] */

undefined8 FUN_10b0e9d84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e9da8; end: 10b0e9e4f; -[SCBitmojiImageParams hash] */

undefined8 * FUN_10b0e9da8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0e9f48:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0e9f54;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[5] == param_3[5] && (puVar3[6] == param_3[6])) &&
        (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[7];
            if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[8];
              if (puVar6 != (undefined8 *)param_3[8]) {
                func_0x00010c071ae0();
                goto LAB_10b0e9f54;
              }
              goto LAB_10b0e9f48;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0e9f54:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0e9e50; end: 10b0e9f6f; -[SCBitmojiImageParams isEqual:] */

long FUN_10b0e9e50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e9f48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e9f54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if (lVar3 != *(long *)(param_3 + 0x40)) {
                func_0x00010c071ae0();
                goto LAB_10b0e9f54;
              }
              goto LAB_10b0e9f48;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e9f54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e9f70; end: 10b0e9f77; -[SCBitmojiImageParams templateId] */

undefined8 FUN_10b0e9f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e9f78; end: 10b0e9f7f; -[SCBitmojiImageParams avatarId] */

undefined8 FUN_10b0e9f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e9f80; end: 10b0e9f87; -[SCBitmojiImageParams friendAvatarId] */

undefined8 FUN_10b0e9f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e9f88; end: 10b0e9f8f; -[SCBitmojiImageParams scale] */

undefined8 FUN_10b0e9f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0e9f90; end: 10b0e9f97; -[SCBitmojiImageParams imageType] */

undefined8 FUN_10b0e9f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0e9f98; end: 10b0e9f9f; -[SCBitmojiImageParams isAnimated] */

undefined1 FUN_10b0e9f98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0e9fa0; end: 10b0e9fa7; -[SCBitmojiImageParams customojiParams] */

undefined8 FUN_10b0e9fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0e9fa8; end: 10b0e9faf; -[SCBitmojiImageParams renderStyleOverride] */

undefined8 FUN_10b0e9fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0e9fb0; end: 10b0ea003; -[SCBitmojiImageParams .cxx_destruct] */

void FUN_10b0e9fb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0ea004; end: 10b0ea01f; +[SCBitmojiImageParamsBuilder bitmojiImageParams] */

void FUN_10b0ea004(void)

{
  _objc_alloc_init(PTR_PTR_1126b58e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ea020; end: 10b0ea23f; +[SCBitmojiImageParamsBuilder bitmojiImageParamsFromExistingBitmojiImageParams:] */

void FUN_10b0ea020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126b58e0;
  _objc_retain(param_3);
  func_0x00010bf1baa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bae20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a8ea0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ae6c0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c14e120(param_3);
  puVar9 = puVar7;
  func_0x00010c2b78c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfe8ee0(param_3);
  puVar10 = puVar9;
  func_0x00010c2afaa0(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c06c000(param_3);
  puVar11 = puVar10;
  func_0x00010c2b01a0(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf62f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2abc40(puVar11,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c130220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar14 = puVar12;
  func_0x00010c2b6d40(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10b0ea240; end: 10b0ea28b; -[SCBitmojiImageParamsBuilder build] */

void FUN_10b0ea240(void)

{
  _objc_alloc(PTR_PTR_1126b5938);
  func_0x00010c050fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ea28c; end: 10b0ea2c3; -[SCBitmojiImageParamsBuilder withTemplateId:] */

long FUN_10b0ea28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0ea2c4; end: 10b0ea2fb; -[SCBitmojiImageParamsBuilder withAvatarId:] */

long FUN_10b0ea2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0ea2fc; end: 10b0ea333; -[SCBitmojiImageParamsBuilder withFriendAvatarId:] */

long FUN_10b0ea2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0ea334; end: 10b0ea33b; -[SCBitmojiImageParamsBuilder withScale:] */

void FUN_10b0ea334(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b0ea33c; end: 10b0ea343; -[SCBitmojiImageParamsBuilder withImageType:] */

void FUN_10b0ea33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b0ea344; end: 10b0ea34b; -[SCBitmojiImageParamsBuilder withIsAnimated:] */

void FUN_10b0ea344(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}


