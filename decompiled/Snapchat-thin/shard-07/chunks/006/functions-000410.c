/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105788ebc; end: 105788f2f; -[UNISCBitmojiFashion initWithUnifiedGrpcService:] */

undefined1 * FUN_105788ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea290;
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



/* Entry: 105788f30; end: 105789013; -[UNISCBitmojiFashion claimDropItemWithRequest:callOptionsBuilder:handler:] */

void FUN_105788f30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bdf88;
  _objc_opt_class(PTR_PTR_1126bdf88);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dff138,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105789014; end: 1057890f7; -[UNISCBitmojiFashion getDropWithRequest:callOptionsBuilder:handler:] */

void FUN_105789014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bdf90;
  _objc_opt_class(PTR_PTR_1126bdf90);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dff158,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057890f8; end: 105789103; -[UNISCBitmojiFashion .cxx_destruct] */

void FUN_1057890f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105789104; end: 10578912f; +[SCGrapheneBitmojiFashionDropMetric getDropSuccess] */

void FUN_105789104(void)

{
  _objc_alloc(PTR_PTR_1126bdf80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105789130; end: 10578915b; +[SCGrapheneBitmojiFashionDropMetric getDropFailure] */

void FUN_105789130(void)

{
  _objc_alloc(PTR_PTR_1126bdf80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10578915c; end: 1057891fb; -[SCGrapheneBitmojiFashionDropMetric description] */

void FUN_10578915c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dff178;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dff178,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea298;
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



/* Entry: 1057891fc; end: 105789347; -[SCGrapheneRegistry bitmojiFashionDropGraphene] */

void FUN_1057891fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105789284;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfeb8 != -1) {
    func_0x00010002a2fc(0x1136bfeb8,&puStack_48);
  }
  uVar1 = uRam00000001136bfeb0;
  _objc_retain(uRam00000001136bfeb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105789348; end: 1057893bb; -[SCBitmojiFashionDropServices initWithFashionDropFetcher:] */

undefined1 * FUN_105789348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea2a0;
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



/* Entry: 1057893bc; end: 1057893c3; -[SCBitmojiFashionDropServices fashionDropFetcher] */

undefined8 FUN_1057893bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057893c4; end: 1057893cf; -[SCBitmojiFashionDropServices .cxx_destruct] */

void FUN_1057893c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057893d0; end: 10578950f; -[SCBitmojiFashionDrop initWithDropId:garments:assets:backgroundColor:startTime:endTime:creatorName:isSponsored:bannerEndTime:] */

undefined1 *
FUN_1057893d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ea2a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105789510; end: 105789533; -[SCBitmojiFashionDrop copyWithZone:] */

undefined8 FUN_105789510(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105789534; end: 1057895e3; -[SCBitmojiFashionDrop hash] */

undefined8 * FUN_105789534(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x48);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1057896e4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057896f0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
         (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) &&
        ((*(char *)((long)puVar3 + 8) == param_3[8] &&
         (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x40);
            if (puVar6 != *(undefined1 **)(param_3 + 0x40)) {
              func_0x00010c071ae0();
              goto LAB_1057896f0;
            }
            goto LAB_1057896e4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1057896f0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1057895e4; end: 10578970b; -[SCBitmojiFashionDrop isEqual:] */

long FUN_1057895e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057896e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057896f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
        ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != *(long *)(param_3 + 0x40)) {
              func_0x00010c071ae0();
              goto LAB_1057896f0;
            }
            goto LAB_1057896e4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1057896f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10578970c; end: 105789713; -[SCBitmojiFashionDrop dropId] */

undefined8 FUN_10578970c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105789714; end: 10578971b; -[SCBitmojiFashionDrop garments] */

undefined8 FUN_105789714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10578971c; end: 105789723; -[SCBitmojiFashionDrop assets] */

undefined8 FUN_10578971c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105789724; end: 10578972b; -[SCBitmojiFashionDrop backgroundColor] */

undefined8 FUN_105789724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10578972c; end: 105789733; -[SCBitmojiFashionDrop startTime] */

undefined8 FUN_10578972c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105789734; end: 10578973b; -[SCBitmojiFashionDrop endTime] */

undefined8 FUN_105789734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10578973c; end: 105789743; -[SCBitmojiFashionDrop creatorName] */

undefined8 FUN_10578973c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105789744; end: 10578974b; -[SCBitmojiFashionDrop isSponsored] */

undefined1 FUN_105789744(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10578974c; end: 105789753; -[SCBitmojiFashionDrop bannerEndTime] */

undefined8 FUN_10578974c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105789754; end: 10578979b; -[SCBitmojiFashionDrop .cxx_destruct] */

void FUN_105789754(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10578979c; end: 10578985f; -[SCBitmojiFashionGarment initWithOptionIds:garmentType:name:merchandisedGarmentId:] */

undefined1 *
FUN_10578979c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ea2b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105789860; end: 105789883; -[SCBitmojiFashionGarment copyWithZone:] */

undefined8 FUN_105789860(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105789884; end: 105789907; -[SCBitmojiFashionGarment hash] */

undefined8 * FUN_105789884(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1057899a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1057899b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[2] == param_3[2] && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_1057899b4;
        }
        goto LAB_1057899a8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1057899b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105789908; end: 1057899cf; -[SCBitmojiFashionGarment isEqual:] */

long FUN_105789908(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057899a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057899b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1057899b4;
        }
        goto LAB_1057899a8;
      }
    }
    lVar3 = 0;
  }
LAB_1057899b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1057899d0; end: 1057899d7; -[SCBitmojiFashionGarment optionIds] */

undefined8 FUN_1057899d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057899d8; end: 1057899df; -[SCBitmojiFashionGarment garmentType] */

undefined8 FUN_1057899d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057899e0; end: 1057899e7; -[SCBitmojiFashionGarment name] */

undefined8 FUN_1057899e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057899e8; end: 1057899ef; -[SCBitmojiFashionGarment merchandisedGarmentId] */

undefined8 FUN_1057899e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057899f0; end: 105789a1f; -[SCBitmojiFashionGarment .cxx_destruct] */

void FUN_1057899f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105789a20; end: 105789b2b; -[SCBitmojiFashionDropAssets initWithBannerImageUrl2x:bannerImageUrl3x:brandLogoUrl2x:brandLogoUrl3x:] */

undefined1 *
FUN_105789a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ea2b8;
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



/* Entry: 105789b2c; end: 105789b4f; -[SCBitmojiFashionDropAssets copyWithZone:] */

undefined8 FUN_105789b2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105789b50; end: 105789bdb; -[SCBitmojiFashionDropAssets hash] */

undefined8 * FUN_105789b50(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105789c8c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105789c98;
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
              goto LAB_105789c98;
            }
            goto LAB_105789c8c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105789c98:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105789bdc; end: 105789cb3; -[SCBitmojiFashionDropAssets isEqual:] */

long FUN_105789bdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105789c8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105789c98;
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
              goto LAB_105789c98;
            }
            goto LAB_105789c8c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105789c98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105789cb4; end: 105789cbb; -[SCBitmojiFashionDropAssets bannerImageUrl2x] */

undefined8 FUN_105789cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105789cbc; end: 105789cc3; -[SCBitmojiFashionDropAssets bannerImageUrl3x] */

undefined8 FUN_105789cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105789cc4; end: 105789ccb; -[SCBitmojiFashionDropAssets brandLogoUrl2x] */

undefined8 FUN_105789cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105789ccc; end: 105789cd3; -[SCBitmojiFashionDropAssets brandLogoUrl3x] */

undefined8 FUN_105789ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105789cd4; end: 105789d1b; -[SCBitmojiFashionDropAssets .cxx_destruct] */

void FUN_105789cd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105789d1c; end: 105789e1f; -[SCComposerAvatarBuilderPresenter initWithBitmojiAvatarProvider:bitmojiAvatarBuilderScopeExposer:notificationServices:linkPage:uiContainer:] */

undefined1 *
FUN_105789d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ea2c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105789e20; end: 105789e83; -[SCComposerAvatarBuilderPresenter presentAvatarBuilderWithCallback:] */

void FUN_105789e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105789e84; end: 105789edf; -[SCComposerAvatarBuilderPresenter bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_105789e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105789ee0; end: 105789eeb; -[SCComposerAvatarBuilderPresenter pushToValdiMarshaller:] */

undefined * FUN_105789ee0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1990;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b897da8();
  func_0x00010b897da0();
  return puVar1;
}



/* Entry: 105789eec; end: 105789f3f; -[SCComposerAvatarBuilderPresenter .cxx_destruct] */

void FUN_105789eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105789f40; end: 10578a00b; -[SCComposerAvatarBuilderPresenterFactoryImpl initWithBitmojiAvatarProvider:bitmojiAvatarBuilderScopeExposer:notificationServices:] */

undefined1 *
FUN_105789f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ea2c8;
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



/* Entry: 10578a00c; end: 10578a09f; -[SCComposerAvatarBuilderPresenterFactoryImpl presenterWithLinkPage:uiContainer:] */

void FUN_10578a00c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bdf98;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7ce0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),param_3,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578a0a0; end: 10578a0db; -[SCComposerAvatarBuilderPresenterFactoryImpl .cxx_destruct] */

void FUN_10578a0a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10578a0dc; end: 10578a1fb; -[SCComposerBitmojiAvatarBuilderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578a0dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bdfa0;
  _objc_alloc(PTR_PTR_1126bdfa0);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127294e4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bf13100(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar5 = 0;
    lVar6 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127294ec);
    _objc_retain(uVar5);
    lVar6 = param_1 + _DAT_1127294e8;
    _objc_loadWeakRetained(lVar6);
  }
  func_0x00010bff7cc0(puVar1,param_2,lVar2,uVar5,lVar6);
  _objc_release(uVar5);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126bdfa8;
  _objc_alloc(PTR_PTR_1126bdfa8);
  func_0x00010c0006a0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_1127294dc),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10578a1fc; end: 10578a25f; -[SCComposerBitmojiAvatarBuilderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578a1fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127294dc,0);
  _objc_storeStrong(param_1 + _DAT_1127294ec,0);
  _objc_destroyWeak(param_1 + _DAT_1127294e8);
  _objc_destroyWeak(param_1 + _DAT_1127294e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127294e0);
  return;
}



/* Entry: 10578a260; end: 10578a2c7; +[AiStoryReplyClientConfig descriptor] */

void FUN_10578a260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a62ab0,
                        &PTR____CFConstantStringClassReference_110dff1d8,&PTR_DAT_1130faca8,
                        &PTR_DAT_1130facc0,7,0x10,0x1c);
    puRam00000001136bfec0 = puVar1;
  }
  return;
}



/* Entry: 10578a2c8; end: 10578a3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578a2c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bdfb8;
    _objc_alloc(PTR_PTR_1126bdfb8);
    lVar1 = param_1 + _DAT_1127294f8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127294fc;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112729500;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c011d60(puVar6,param_2,lVar2,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10578a3c4; end: 10578a4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578a3c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126bdfc0;
    _objc_alloc(PTR_PTR_1126bdfc0);
    lVar2 = lVar1 + _DAT_1127294fc;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_1127294f8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112729504;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe7a0(puVar8,param_2,lVar3,lVar5,lVar7,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10578a4e8; end: 10578a553; -[SCGenerativeAIDreamsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578a4e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729504);
  _objc_destroyWeak(param_1 + _DAT_112729500);
  _objc_destroyWeak(param_1 + _DAT_1127294fc);
  _objc_destroyWeak(param_1 + _DAT_1127294f8);
  _objc_destroyWeak(param_1 + _DAT_1127294f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127294f0,0);
  return;
}



/* Entry: 10578a554; end: 10578a65f; -[SCGenAIDreamsBadgeServiceImpl initWithCircumstanceEngine:featureSettingsService:userPreferences:dreamsService:] */

undefined1 *
FUN_10578a554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126ea2d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bdfc8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined1 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10578a660; end: 10578a6bf; -[SCGenAIDreamsBadgeServiceImpl shouldShowDreamsBadgeOnMemoriesButton:] */

void FUN_10578a660(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdde480();
  if ((uVar1 & 1) == 0) {
    func_0x00010bddd9a0(param_1);
  }
  else {
    param_1 = 1;
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10578a6c0; end: 10578a7d3; -[SCGenAIDreamsBadgeServiceImpl _checkGenerationReadyNotificationSeenState] */

bool FUN_10578a6c0(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    return false;
  }
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8a4c0();
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  func_0x00010bf885a0(uVar3);
  _objc_release(uVar3);
  dVar7 = 0.0;
  if (param_1 != 0.0) {
    dVar7 = param_1;
  }
  dVar8 = *(double *)(param_2 + 0x30);
  if (*(double *)(param_2 + 0x30) <= (double)(lVar2 / 1000)) {
    dVar8 = (double)(lVar2 / 1000);
  }
  return dVar8 < dVar7;
}



/* Entry: 10578a7d4; end: 10578a8af; -[SCGenAIDreamsBadgeServiceImpl _checkToShowNewPackBadgeOnMemoriesButton] */

bool FUN_10578a7d4(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(ulong *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  lVar5 = *(long *)(param_2 + 8);
  func_0x00010c269d40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf8a4c0();
  _objc_release(lVar5);
  return param_1 == 0.0 && lVar6 + 999U < 1999;
}



/* Entry: 10578a8b0; end: 10578a97b; -[SCGenAIDreamsBadgeServiceImpl updateDreamsTabLastSeenTimestamp] */

void FUN_10578a8b0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
  func_0x00010c22e9a0();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 0x30) = param_1;
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191be0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_next__112614028,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10578a97c; end: 10578aa3f; -[SCGenAIDreamsBadgeServiceImpl updateDreamsBadgeInMemoriesLastSeenTimestamp] */

void FUN_10578a97c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c22e9a0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10578aa40; end: 10578aa67; -[SCGenAIDreamsBadgeServiceImpl dreamsBadgeObservable] */

void FUN_10578aa40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10578aa68; end: 10578ab0f; -[SCGenAIDreamsBadgeServiceImpl didReceiveGenerationReadyNotification] */

void FUN_10578aa68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10578ab10; end: 10578ab5b; -[SCGenAIDreamsBadgeServiceImpl shouldShowDreamsBadgeOnDreamsTab:] */

void FUN_10578ab10(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c233380(param_1);
    (**(code **)(param_3 + 0x10))(param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10578ab5c; end: 10578ab5f; -[SCGenAIDreamsBadgeServiceImpl shouldShowBadgeOnAISnapsTab] */

void FUN_10578ab5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkGenerationReadyNotificatio_112555008);
  return;
}



/* Entry: 10578ab60; end: 10578ab67; -[SCGenAIDreamsBadgeServiceImpl setAISnapsTabFocused:] */

void FUN_10578ab60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10578ab68; end: 10578abbb; -[SCGenAIDreamsBadgeServiceImpl .cxx_destruct] */

void FUN_10578ab68(long param_1)

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



/* Entry: 10578abbc; end: 10578ace7; -[SCGenAIDreamsServiceImpl initWithFeatureSettingsService:circumstanceEngine:plusServices:] */

undefined1 *
FUN_10578abbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea2d8;
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
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bdfc8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10578ace8; end: 10578adcf; -[SCGenAIDreamsServiceImpl isDreamsFeatureAvailable] */

ulong FUN_10578ace8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c080120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfbe820();
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    func_0x000108c2bd8c();
    if (((uVar6 & 1) == 0) && ((((uint)uVar4 ^ 1) & 1) == 0)) {
      uVar6 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf1f440(uVar6,param_2,&PTR____CFConstantStringClassReference_110eef378,0,0);
    }
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar5);
  return uVar6;
}



/* Entry: 10578add0; end: 10578ae3b; -[SCGenAIDreamsServiceImpl isAiSnapsTabEnabled] */

undefined8 FUN_10578add0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbe820();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110eef518,0,0);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10578ae3c; end: 10578ae57; -[SCGenAIDreamsServiceImpl aiSnapsTabM4ShouldSuppressNotificationForCloudSync] */

void FUN_10578ae3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef558,0,0);
  return;
}



/* Entry: 10578ae58; end: 10578ae73; -[SCGenAIDreamsServiceImpl aiSnapsTabM4ShouldDismissPresentingOpera] */

void FUN_10578ae58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef578,0,0);
  return;
}



/* Entry: 10578ae74; end: 10578ae7b; -[SCGenAIDreamsServiceImpl aiSnapsTabM4DebugModeEnabled] */

void FUN_10578ae74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_aiSnapsM4EnableDebugMode_11259d588);
  return;
}



/* Entry: 10578ae7c; end: 10578aee7; -[SCGenAIDreamsServiceImpl isAiSnapsHideGenAISnapsInHomeTabEnabled] */

undefined8 FUN_10578ae7c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbe820();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110eef538,0,0);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10578aee8; end: 10578af03; -[SCGenAIDreamsServiceImpl aiSnapsM5SaveLensCarouselGenAISnapsDuringSharing] */

void FUN_10578aee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef598,0,0);
  return;
}



/* Entry: 10578af04; end: 10578af1f; -[SCGenAIDreamsServiceImpl genAIWatermarkWithSnapDocEnabled] */

void FUN_10578af04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef6d8,0,0);
  return;
}



/* Entry: 10578af20; end: 10578af3b; -[SCGenAIDreamsServiceImpl genAIWatermarkMultiSnapCameraRollExportEnabled] */

void FUN_10578af20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef6f8,0,0);
  return;
}



/* Entry: 10578af3c; end: 10578afb3; -[SCGenAIDreamsServiceImpl isDreamsFeatureEarlyAccess] */

undefined8 FUN_10578af3c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbe820();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x000108c2bd8c();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110eef378,0,0);
      goto LAB_10578af9c;
    }
  }
  uVar3 = 0;
LAB_10578af9c:
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10578afb4; end: 10578afcf; -[SCGenAIDreamsServiceImpl dreamsFollowSuggestedOperaPlaylistLimit] */

void FUN_10578afb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef4d8,0,0);
  return;
}



/* Entry: 10578afd0; end: 10578afeb; -[SCGenAIDreamsServiceImpl dreamsOperaShouldLaunchProvidingGalleryModels] */

void FUN_10578afd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef4f8,0,0);
  return;
}



/* Entry: 10578afec; end: 10578b013; -[SCGenAIDreamsServiceImpl dreamsContextCardTapSubject] */

void FUN_10578afec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10578b014; end: 10578b03b; -[SCGenAIDreamsServiceImpl aiSnapsAutoSaveObservable] */

void FUN_10578b014(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10578b03c; end: 10578b043; -[SCGenAIDreamsServiceImpl genAiSnapFeedDidAutoSaveDuringSendingToChatsOrPostingToStories:] */

void FUN_10578b03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028);
  return;
}



/* Entry: 10578b044; end: 10578b0a3; -[SCGenAIDreamsServiceImpl .cxx_destruct] */

void FUN_10578b044(long param_1)

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



/* Entry: 10578b0a4; end: 10578b147; -[SCGenAIDreamsNewPackBottomBannerSUPWrapper initWithFeatureSettings:dreamsTweak:] */

undefined1 *
FUN_10578b0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea2e0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10578b148; end: 10578b1c7; -[SCGenAIDreamsNewPackBottomBannerSUPWrapper supString] */

void FUN_10578b148(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c22e9e0();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((uVar1 & 1) == 0) {
    ppuVar2 = *(undefined ***)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf8a700();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10578b1c8; end: 10578b237; -[SCGenAIDreamsNewPackBottomBannerSUPWrapper setSupString:] */

void FUN_10578b1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c22e9e0();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191d80();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10578b238; end: 10578b267; -[SCGenAIDreamsNewPackBottomBannerSUPWrapper .cxx_destruct] */

void FUN_10578b238(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10578b268; end: 10578b30b; -[SCGenAIDreamsNewPackTopBannerSUPWrapper initWithFeatureSettings:dreamsTweak:] */

undefined1 *
FUN_10578b268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea2e8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10578b30c; end: 10578b38b; -[SCGenAIDreamsNewPackTopBannerSUPWrapper supString] */

void FUN_10578b30c(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c22e9c0();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((uVar1 & 1) == 0) {
    ppuVar2 = *(undefined ***)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf8a6e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10578b38c; end: 10578b3fb; -[SCGenAIDreamsNewPackTopBannerSUPWrapper setSupString:] */

void FUN_10578b38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c22e9c0();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191d60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10578b3fc; end: 10578b46b; -[SCGenAIDreamsNewPackTopBannerSUPWrapper .cxx_destruct] */

void FUN_10578b3fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10578b46c; end: 10578b68f; -[SCNetworkImageEntryPoint _imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578b46c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar1 = param_1 + _DAT_112729550;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112729554;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112729558;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272955c;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112729560;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126b18f0;
  _objc_alloc(PTR_PTR_1126b18f0);
  lVar11 = (long)_DAT_112729564;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff80e0(puVar7,param_2,lVar2,lVar3,lVar8,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126bdfd8;
  _objc_alloc(PTR_PTR_1126bdfd8);
  func_0x00010c04d3a0();
  puVar10 = PTR_PTR_1126b18f8;
  _objc_alloc(PTR_PTR_1126b18f8);
  func_0x00010c03f140();
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10578b690; end: 10578b713; -[SCNetworkImageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578b690(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272954c,0);
  _objc_destroyWeak(param_1 + _DAT_112729560);
  _objc_destroyWeak(param_1 + _DAT_112729558);
  _objc_destroyWeak(param_1 + _DAT_112729564);
  _objc_destroyWeak(param_1 + _DAT_112729554);
  _objc_destroyWeak(param_1 + _DAT_112729550);
  _objc_destroyWeak(param_1 + _DAT_11272955c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729568);
  return;
}



/* Entry: 10578b714; end: 10578b71b; -[SCCacheManagerUserAvailabilityEntryPoint begin] */

void FUN_10578b714(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3448;
  func_0x00010c22b6a0(PTR_PTR_1126c3448);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10578b71c; end: 10578b7ab; -[SCCacheManagerUserAvailabilityEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578b71c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010b7c2534(0);
  lVar1 = param_1 + _DAT_11272956c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7c2574();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ea2f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10578b7ac; end: 10578b7e3; -[SCCacheManagerUserAvailabilityEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578b7ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272956c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729570);
  return;
}



/* Entry: 10578b7e4; end: 10578b86b; -[SCStorageManagementEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10578b7e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea2f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729574) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112729578) = 0;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272957c);
    *(undefined **)((long)puVar1 + (long)_DAT_11272957c) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112729580) = 0;
  }
  return (undefined1 *)puVar1;
}


