/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e69dd0; end: 106e69dd7; -[SCCommerceCheckoutShippingOption title] */

undefined8 FUN_106e69dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e69dd8; end: 106e69ddf; -[SCCommerceCheckoutShippingOption totalTax] */

undefined8 FUN_106e69dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e69de0; end: 106e69de7; -[SCCommerceCheckoutShippingOption subtotalPrice] */

undefined8 FUN_106e69de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e69de8; end: 106e69def; -[SCCommerceCheckoutShippingOption totalPrice] */

undefined8 FUN_106e69de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e69df0; end: 106e69e4f; -[SCCommerceCheckoutShippingOption .cxx_destruct] */

void FUN_106e69df0(long param_1)

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



/* Entry: 106e69e50; end: 106e69ec3; -[SCCommerceCompositeImageServices initWithCompositeImageFetcher:] */

undefined1 * FUN_106e69e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7548;
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



/* Entry: 106e69ec4; end: 106e69ecb; -[SCCommerceCompositeImageServices compositeImageFetcher] */

undefined8 FUN_106e69ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e69ecc; end: 106e69efb; -[SCCommerceCompositeImageServices setCompositeImageFetcher:] */

void FUN_106e69ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e69efc; end: 106e69f07; -[SCCommerceCompositeImageServices .cxx_destruct] */

void FUN_106e69efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e69f08; end: 106e6a007; -[SCCompositeNetworkImageLayerModel initWithCoder:] */

undefined1 *
FUN_106e69f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_7);
  puStack_38 = PTR_PTR_1126f7550;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf67000(param_7);
    _objc_retainAutoreleasedReturnValue();
    _CGRectFromString();
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    fVar4 = (float)param_1;
    func_0x00010bf66e40(param_7);
    *(double *)((long)puVar1 + 0x18) = (double)fVar4;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6a008; end: 106e6a0e3; -[SCCompositeNetworkImageLayerModel initWithNetworkImage:identifier:frame:rotationAngle:] */

undefined1 *
FUN_106e6a008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f7550;
  uStack_70 = param_6;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6a0e4; end: 106e6a107; -[SCCompositeNetworkImageLayerModel copyWithZone:] */

undefined8 FUN_106e6a0e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6a108; end: 106e6a1b3; -[SCCompositeNetworkImageLayerModel encodeWithCoder:] */

void FUN_106e6a108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e89138);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e02c58);
  _NSStringFromCGRect(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02b58);
  _objc_release(uVar1);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e02b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e6a1b4; end: 106e6a2cb; -[SCCompositeNetworkImageLayerModel hash] */

undefined8 * FUN_106e6a1b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_38 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_30 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_58 = uVar5;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == (undefined8 *)param_3) {
LAB_106e6a398:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    puVar10 = (undefined1 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e6a3a4;
    puVar10 = (undefined1 *)puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    iVar3 = (int)puVar7;
    if ((((ulong)puVar7 & 1) != 0) &&
       (_CGRectEqualToRect(*(undefined8 *)((long)puVar6 + 0x20),*(undefined8 *)((long)puVar6 + 0x28)
                           ,*(undefined8 *)((long)puVar6 + 0x30),
                           *(undefined8 *)((long)puVar6 + 0x38),*(undefined8 *)(param_3 + 0x20),
                           *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
                           *(undefined8 *)(param_3 + 0x38)), iVar3 != 0)) {
      dVar12 = ABS(*(double *)((long)puVar6 + 0x18) - *(double *)(param_3 + 0x18));
      dVar11 = ABS(*(double *)((long)puVar6 + 0x18) + *(double *)(param_3 + 0x18)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar2 = false, !NAN(dVar12) && !NAN(dVar11))) {
        bVar2 = dVar12 < dVar11;
      }
      if ((bVar2) &&
         ((lVar8 = *(long *)((long)puVar6 + 8), lVar8 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
        puVar10 = *(undefined1 **)((long)puVar6 + 0x10);
        if (puVar10 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e6a3a4;
        }
        goto LAB_106e6a398;
      }
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_106e6a3a4:
  _objc_release(param_3);
  return (undefined8 *)puVar10;
}



/* Entry: 106e6a2cc; end: 106e6a3bf; -[SCCompositeNetworkImageLayerModel isEqual:] */

long FUN_106e6a2cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6a398:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6a3a4;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    iVar2 = (int)uVar4;
    if (((uVar4 & 1) != 0) &&
       (_CGRectEqualToRect(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                           *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                           *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28),
                           *(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38)),
       iVar2 != 0)) {
      dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar6 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar1 = dVar7 < dVar6;
      }
      if ((bVar1) &&
         ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e6a3a4;
        }
        goto LAB_106e6a398;
      }
    }
    lVar5 = 0;
  }
LAB_106e6a3a4:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106e6a3c0; end: 106e6a3c7; -[SCCompositeNetworkImageLayerModel networkImage] */

undefined8 FUN_106e6a3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6a3c8; end: 106e6a3cf; -[SCCompositeNetworkImageLayerModel identifier] */

undefined8 FUN_106e6a3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6a3d0; end: 106e6a3db; -[SCCompositeNetworkImageLayerModel frame] */

undefined8 FUN_106e6a3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e6a3dc; end: 106e6a3e3; -[SCCompositeNetworkImageLayerModel rotationAngle] */

undefined8 FUN_106e6a3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6a3e4; end: 106e6a413; -[SCCompositeNetworkImageLayerModel .cxx_destruct] */

void FUN_106e6a3e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6a414; end: 106e6a573; -[SCCompositeNetworkImageModel initWithCoder:] */

undefined1 *
FUN_106e6a414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7558;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6a574; end: 106e6a697; -[SCCompositeNetworkImageModel initWithIdentifier:networkImageLayers:tintColor:originalSize:maxOutputSize:replaceAlphaLayerFillColor:] */

undefined1 *
FUN_106e6a574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f7558;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6a698; end: 106e6a6bb; -[SCCompositeNetworkImageModel copyWithZone:] */

undefined8 FUN_106e6a698(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6a6bc; end: 106e6a7a3; -[SCCompositeNetworkImageModel encodeWithCoder:] */

void FUN_106e6a6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e89158);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e89178);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e89198);
  _objc_release(uVar1);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e891b8);
  _objc_release(uVar1);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e891d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e6a7a4; end: 106e6a8b7; -[SCCompositeNetworkImageModel hash] */

undefined8 * FUN_106e6a7a4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_38 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_58 = uVar5;
  func_0x00010bfde980();
  puVar6 = &uStack_68;
  uStack_30 = uVar3;
  func_0x000100505190(puVar6,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_106e6a9a8:
    puVar10 = (undefined8 *)0x1;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e6a9ac;
    puVar10 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if (((ulong)puVar7 & 1) != 0) {
      bVar2 = false;
      if (((double)puVar6[5] == (double)param_3[5]) &&
         (bVar2 = false, !NAN((double)puVar6[6]) && !NAN((double)param_3[6]))) {
        bVar2 = (double)puVar6[6] == (double)param_3[6];
      }
      if (bVar2) {
        puVar10 = (undefined8 *)0x0;
        if (((double)puVar6[7] != (double)param_3[7]) || ((double)puVar6[8] != (double)param_3[8]))
        goto LAB_106e6a9ac;
        lVar8 = puVar6[1];
        if ((((lVar8 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar8 != 0)) &&
            ((lVar8 = puVar6[2], lVar8 == param_3[2] || (func_0x00010c071ae0(), (int)lVar8 != 0))))
           && ((lVar8 = puVar6[3], lVar8 == param_3[3] || (func_0x00010c071c60(), (int)lVar8 != 0)))
           ) {
          puVar10 = (undefined8 *)puVar6[4];
          if (puVar10 != (undefined8 *)param_3[4]) {
            func_0x00010c071c60();
            goto LAB_106e6a9ac;
          }
          goto LAB_106e6a9a8;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_106e6a9ac:
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 106e6a8b8; end: 106e6a9c7; -[SCCompositeNetworkImageModel isEqual:] */

long FUN_106e6a8b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6a9a8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6a9ac;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x30)) && !NAN(*(double *)(param_3 + 0x30)))) {
        bVar1 = *(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30);
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
           (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_106e6a9ac;
        lVar4 = *(long *)(param_1 + 8);
        if ((((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071c60(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071c60();
            goto LAB_106e6a9ac;
          }
          goto LAB_106e6a9a8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_106e6a9ac:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e6a9c8; end: 106e6a9cf; -[SCCompositeNetworkImageModel identifier] */

undefined8 FUN_106e6a9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6a9d0; end: 106e6a9d7; -[SCCompositeNetworkImageModel networkImageLayers] */

undefined8 FUN_106e6a9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6a9d8; end: 106e6a9df; -[SCCompositeNetworkImageModel tintColor] */

undefined8 FUN_106e6a9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6a9e0; end: 106e6a9e7; -[SCCompositeNetworkImageModel originalSize] */

undefined1  [16] FUN_106e6a9e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 106e6a9e8; end: 106e6a9ef; -[SCCompositeNetworkImageModel maxOutputSize] */

undefined1  [16] FUN_106e6a9e8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 106e6a9f0; end: 106e6a9f7; -[SCCompositeNetworkImageModel replaceAlphaLayerFillColor] */

undefined8 FUN_106e6a9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e6a9f8; end: 106e6aa3f; -[SCCompositeNetworkImageModel .cxx_destruct] */

void FUN_106e6a9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6aa40; end: 106e6ab0b; +[SCCompositeNetworkImage bitmojiAvatarWithTemplateId:avatarId:friendAvatarId:] */

void FUN_106e6aa40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126be540;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e6ab0c; end: 106e6ab77; +[SCCompositeNetworkImage imageWithImage:] */

void FUN_106e6ab0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be540;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e6ab78; end: 106e6abdb; +[SCCompositeNetworkImage plainURLWithUrl:] */

void FUN_106e6ab78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be540;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e6abdc; end: 106e6adf3; -[SCCompositeNetworkImage initWithCoder:] */

undefined8 * FUN_106e6abdc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126f7560;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_106e6ad80;
        uVar5 = 2;
        lVar6 = 0x30;
      }
      else {
        uVar2 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[3];
        puVar1[3] = uVar2;
        _objc_release(uVar5);
        uVar2 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[4];
        puVar1[4] = uVar2;
        _objc_release(uVar5);
        uVar5 = 1;
        lVar6 = 0x28;
      }
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_106e6ad80:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
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



/* Entry: 106e6adf4; end: 106e6ae17; -[SCCompositeNetworkImage copyWithZone:] */

undefined8 FUN_106e6adf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6ae18; end: 106e6aeef; -[SCCompositeNetworkImage encodeWithCoder:] */

void FUN_106e6ae18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e891f8;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e89218;
  }
  else if (lVar2 == 2) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc6f98;
    lVar2 = 0x30;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e892b8;
  }
  else {
    if (lVar2 != 1) goto LAB_106e6aedc;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110e89258);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110e89278);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e89238;
    lVar2 = 0x28;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e89298;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_106e6aedc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e6aef0; end: 106e6af8b; -[SCCompositeNetworkImage hash] */

void FUN_106e6aef0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126f7560;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e6af8c; end: 106e6afcf; -[SCCompositeNetworkImage internalInit] */

void FUN_106e6af8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7560;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e6afd0; end: 106e6b0cf; -[SCCompositeNetworkImage isEqual:] */

long FUN_106e6afd0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6b0a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6b0b4;
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
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_106e6b0b4;
              }
              goto LAB_106e6b0a8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e6b0b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6b0d0; end: 106e6b187; -[SCCompositeNetworkImage matchPlainURL:bitmojiAvatar:image:] */

void FUN_106e6b0d0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_106e6b164;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28));
      }
      goto LAB_106e6b164;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_106e6b164;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106e6b164:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e6b188; end: 106e6b1db; -[SCCompositeNetworkImage .cxx_destruct] */

void FUN_106e6b188(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6b1dc; end: 106e6b1e3; -[SCCommerceServices storeInfoFetcher] */

undefined8 FUN_106e6b1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6b1e4; end: 106e6b1eb; -[SCCommerceServices pixelMetricsLogger] */

undefined8 FUN_106e6b1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6b1ec; end: 106e6b21b; -[SCCommerceServices .cxx_destruct] */

void FUN_106e6b1ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6b21c; end: 106e6b223; -[SCScreenshopServices persistenceService] */

undefined8 FUN_106e6b21c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6b224; end: 106e6b22b; -[SCScreenshopServices modelService] */

undefined8 FUN_106e6b224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6b22c; end: 106e6b233; -[SCScreenshopServices networkService] */

undefined8 FUN_106e6b22c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6b234; end: 106e6b26f; -[SCScreenshopServices .cxx_destruct] */

void FUN_106e6b234(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6b270; end: 106e6b373; -[SCScreenshopCategorizationResult initWithShoppable:categories:colors:patterns:modelVersion:] */

undefined1 *
FUN_106e6b270(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f7578;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6b374; end: 106e6b397; -[SCScreenshopCategorizationResult copyWithZone:] */

undefined8 FUN_106e6b374(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6b398; end: 106e6b39f; -[SCScreenshopCategorizationResult shoppable] */

undefined1 FUN_106e6b398(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6b3a0; end: 106e6b3a7; -[SCScreenshopCategorizationResult categories] */

undefined8 FUN_106e6b3a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6b3a8; end: 106e6b3af; -[SCScreenshopCategorizationResult colors] */

undefined8 FUN_106e6b3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6b3b0; end: 106e6b3b7; -[SCScreenshopCategorizationResult patterns] */

undefined8 FUN_106e6b3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e6b3b8; end: 106e6b3bf; -[SCScreenshopCategorizationResult modelVersion] */

undefined8 FUN_106e6b3b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e6b3c0; end: 106e6b407; -[SCScreenshopCategorizationResult .cxx_destruct] */

void FUN_106e6b3c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6b408; end: 106e6b58b; -[SCScreenshopAssetMetadata initWithLocalIdentifier:lastProcessed:tapped:localSimilarityScore:categories:colors:patterns:categorized:shoppabilityModelVersion:isShoppable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106e6b408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f7580;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff04) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff08) = param_1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275ff0c) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff10) = param_2;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff14) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff18);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff1c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ff1c) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275ff20) = param_10;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275ff24) = param_11;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275ff28) = param_12;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6b58c; end: 106e6b5af; -[SCScreenshopAssetMetadata copyWithZone:] */

undefined8 FUN_106e6b58c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6b5b0; end: 106e6b6bb; -[SCScreenshopAssetMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e6b5b0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  double dVar11;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275ff04);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_11275ff08) + *(ulong *)(param_1 + _DAT_11275ff08) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + _DAT_11275ff10) + *(ulong *)(param_1 + _DAT_11275ff10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (ulong)*(byte *)(param_1 + _DAT_11275ff0c);
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275ff14);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275ff18);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275ff1c);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_11275ff20);
  uStack_38 = (ulong)*(uint *)(param_1 + _DAT_11275ff24);
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_11275ff28);
  puVar4 = &uStack_78;
  uStack_48 = uVar3;
  func_0x000100505190(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_106e6b864:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e6b870;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(char *)((long)puVar4 + (long)_DAT_11275ff0c) ==
           *(char *)((long)param_3 + (long)_DAT_11275ff0c) &&
          (*(char *)((long)puVar4 + (long)_DAT_11275ff20) ==
           *(char *)((long)param_3 + (long)_DAT_11275ff20))) &&
         (*(int *)((long)puVar4 + (long)_DAT_11275ff24) ==
          *(int *)((long)param_3 + (long)_DAT_11275ff24))) &&
        (*(char *)((long)puVar4 + (long)_DAT_11275ff28) ==
         *(char *)((long)param_3 + (long)_DAT_11275ff28))))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11275ff08);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11275ff08);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)puVar4 + (long)_DAT_11275ff10);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_11275ff10);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if ((((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275ff04),
              lVar6 == *(long *)((long)param_3 + (long)_DAT_11275ff04) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275ff14),
             lVar6 == *(long *)((long)param_3 + (long)_DAT_11275ff14) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275ff18),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_11275ff18) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11275ff1c);
          if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11275ff1c)) {
            func_0x00010c071ae0();
            goto LAB_106e6b870;
          }
          goto LAB_106e6b864;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_106e6b870:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 106e6b6bc; end: 106e6b88b; -[SCScreenshopAssetMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106e6b6bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6b864:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6b870;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + (long)_DAT_11275ff0c) == *(char *)(param_3 + (long)_DAT_11275ff0c) &&
          (*(char *)(param_1 + (long)_DAT_11275ff20) == *(char *)(param_3 + (long)_DAT_11275ff20)))
         && (*(int *)(param_1 + (long)_DAT_11275ff24) == *(int *)(param_3 + (long)_DAT_11275ff24)))
        && (*(char *)(param_1 + (long)_DAT_11275ff28) == *(char *)(param_3 + (long)_DAT_11275ff28)))
       )) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11275ff08);
      dVar6 = *(double *)(param_3 + (long)_DAT_11275ff08);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11275ff10);
        dVar6 = *(double *)(param_3 + (long)_DAT_11275ff10);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_11275ff04),
              lVar4 == *(long *)(param_3 + (long)_DAT_11275ff04) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11275ff14),
             lVar4 == *(long *)(param_3 + (long)_DAT_11275ff14) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11275ff18),
            lVar4 == *(long *)(param_3 + (long)_DAT_11275ff18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11275ff1c);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11275ff1c)) {
            func_0x00010c071ae0();
            goto LAB_106e6b870;
          }
          goto LAB_106e6b864;
        }
      }
    }
    lVar4 = 0;
  }
LAB_106e6b870:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e6b88c; end: 106e6b89b; -[SCScreenshopAssetMetadata localIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e6b88c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ff04);
}



/* Entry: 106e6b89c; end: 106e6b8ab; -[SCScreenshopAssetMetadata lastProcessed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e6b89c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ff08);
}



/* Entry: 106e6b8ac; end: 106e6b8bb; -[SCScreenshopAssetMetadata tapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e6b8ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275ff0c);
}



/* Entry: 106e6b8bc; end: 106e6b8cb; -[SCScreenshopAssetMetadata localSimilarityScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e6b8bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ff10);
}



/* Entry: 106e6b8cc; end: 106e6b8db; -[SCScreenshopAssetMetadata categories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e6b8cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ff14);
}



/* Entry: 106e6b8dc; end: 106e6b8eb; -[SCScreenshopAssetMetadata colors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e6b8dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ff18);
}



/* Entry: 106e6b8ec; end: 106e6b8fb; -[SCScreenshopAssetMetadata patterns] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e6b8ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ff1c);
}



/* Entry: 106e6b8fc; end: 106e6b90b; -[SCScreenshopAssetMetadata categorized] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e6b8fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275ff20);
}



/* Entry: 106e6b90c; end: 106e6b91b; -[SCScreenshopAssetMetadata shoppabilityModelVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106e6b90c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275ff24);
}



/* Entry: 106e6b91c; end: 106e6b92b; -[SCScreenshopAssetMetadata isShoppable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e6b91c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275ff28);
}



/* Entry: 106e6b92c; end: 106e6b98b; -[SCScreenshopAssetMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e6b92c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275ff1c,0);
  _objc_storeStrong(param_1 + _DAT_11275ff18,0);
  _objc_storeStrong(param_1 + _DAT_11275ff14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ff04,0);
  return;
}



/* Entry: 106e6b98c; end: 106e6b997; -[SCFriendsFeedUpdateServices .cxx_destruct] */

void FUN_106e6b98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6b998; end: 106e6baeb; -[SCChatMerlinServices initWithMerlinConversationManager:merlinOnboardingStatusManager:] */

undefined8 *
FUN_106e6b998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7590;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126d2e50;
    _objc_alloc();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c01ee80();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e6baec; end: 106e6bb53;  */

undefined8 FUN_106e6baec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06fda0();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106e6bb54; end: 106e6bb5b; -[SCChatMerlinServices merlinConversationManager] */

undefined8 FUN_106e6bb54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6bb5c; end: 106e6bb63; -[SCChatMerlinServices merlinOnboardingStatusManager] */

undefined8 FUN_106e6bb5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6bb64; end: 106e6bb6b; -[SCChatMerlinServices merlinComposerServices] */

undefined8 FUN_106e6bb64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6bb6c; end: 106e6bba7; -[SCChatMerlinServices .cxx_destruct] */

void FUN_106e6bb6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6bba8; end: 106e6bbf7; -[SCCMerlinBioPageContext initWithNavigator:userProvider:bioTextSetting:] */

void FUN_106e6bba8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7598;
  uStack_20 = param_1;
  func_0x000106e6be9c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106e6bbf8; end: 106e6bc0b; +[SCCMerlinBioPageContext valdiMarshallableObjectDescriptor] */

void FUN_106e6bbf8(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110980ce8;
  param_1[1] = &PTR_s_SCValdiINavigator_110980df0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bc0c; end: 106e6bc2b; -[SCCMerlinBioPageViewModel init] */

void FUN_106e6bc0c(void)

{
  func_0x000106e6be50(PTR_PTR_1126f75a0);
  return;
}



/* Entry: 106e6bc2c; end: 106e6bc3b; +[SCCMerlinBioPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_106e6bc2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddf0128;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bc3c; end: 106e6bc6f; -[SCCMerlinFriendProfileCardContext initWithPresentBioPage:] */

void FUN_106e6bc3c(void)

{
  func_0x000106e6beb8();
  func_0x000106e6be80(PTR_PTR_1126f75a8);
  func_0x000106e6bec4();
  return;
}



/* Entry: 106e6bc70; end: 106e6bc7f; +[SCCMerlinFriendProfileCardContext valdiMarshallableObjectDescriptor] */

void FUN_106e6bc70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110980e48;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bc80; end: 106e6bcb7; -[SCCMerlinFriendProfileCardViewModel initWithMerlinUserDisplayName:] */

void FUN_106e6bc80(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f75b0;
  uStack_20 = param_1;
  func_0x000106e6be9c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106e6bcb8; end: 106e6bcc7; +[SCCMerlinFriendProfileCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_106e6bcb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110980e78;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bcc8; end: 106e6bcfb; -[SCCMerlinServices initWithIsCurrentUserOnboardedToMerlin:] */

void FUN_106e6bcc8(void)

{
  func_0x000106e6beb8();
  func_0x000106e6be80(PTR_PTR_1126f75b8);
  func_0x000106e6bec4();
  return;
}



/* Entry: 106e6bcfc; end: 106e6bd0b; +[SCCMerlinServices valdiMarshallableObjectDescriptor] */

void FUN_106e6bcfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110980ec0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bd0c; end: 106e6bd4f; -[SCCMerlinSponsoredWelcomeCardContext initWithActionHandler:] */

void FUN_106e6bd0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f75c0;
  uStack_20 = param_1;
  func_0x000106e6be9c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106e6bd50; end: 106e6bd63; +[SCCMerlinSponsoredWelcomeCardContext valdiMarshallableObjectDescriptor] */

void FUN_106e6bd50(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110980ef0;
  param_1[1] = &PTR_DAT_110980f80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bd64; end: 106e6bd83; -[SCCMerlinSponsoredWelcomeCardViewModel init] */

void FUN_106e6bd64(void)

{
  func_0x000106e6be50(PTR_PTR_1126f75c8);
  return;
}



/* Entry: 106e6bd84; end: 106e6bd93; +[SCCMerlinSponsoredWelcomeCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_106e6bd84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110980fb0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bd94; end: 106e6bddb; -[SCCMerlinWelcomeCardContext initWithMerlinUser:merlinFriendmoji:actionHandler:billboardStringsService:alertPresenter:notificationPresenter:blizzardLogger:] */

void FUN_106e6bd94(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f75d0;
  uStack_20 = param_1;
  func_0x000106e6be9c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106e6bddc; end: 106e6bdef; +[SCCMerlinWelcomeCardContext valdiMarshallableObjectDescriptor] */

void FUN_106e6bddc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980fe0;
  param_1[1] = &PTR_s_SCBridgeObservable_1109810b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6bdf0; end: 106e6be0f; -[SCCMerlinWelcomeCardSponsoredSnapMetadata init] */

void FUN_106e6bdf0(void)

{
  func_0x000106e6be50(PTR_PTR_1126f75d8);
  return;
}



/* Entry: 106e6be10; end: 106e6be1f; +[SCCMerlinWelcomeCardSponsoredSnapMetadata valdiMarshallableObjectDescriptor] */

void FUN_106e6be10(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110981100;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106e6be20; end: 106e6be3f; -[SCCMerlinWelcomeCardViewModel init] */

void FUN_106e6be20(void)

{
  func_0x000106e6be50(PTR_PTR_1126f75e0);
  return;
}


