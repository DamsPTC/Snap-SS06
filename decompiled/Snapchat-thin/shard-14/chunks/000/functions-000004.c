/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af00fc0; end: 10af00fc7; -[SCUcoCommandServices commandProvider] */

undefined8 FUN_10af00fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af00fc8; end: 10af00fd3; -[SCUcoCommandServices .cxx_destruct] */

void FUN_10af00fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af00fd4; end: 10af01077; -[SCUcoImageProcessServices initWithDefaultImageProcessCommandProvider:ucoImageProcessCommandProvider:] */

undefined1 *
FUN_10af00fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701e78;
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



/* Entry: 10af01078; end: 10af0107f; -[SCUcoImageProcessServices defaultImageProcessCommandProvider] */

undefined8 FUN_10af01078(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01080; end: 10af01087; -[SCUcoImageProcessServices ucoImageProcessCommandProvider] */

undefined8 FUN_10af01080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af01088; end: 10af010b7; -[SCUcoImageProcessServices .cxx_destruct] */

void FUN_10af01088(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af010b8; end: 10af01157; -[SCLensEffectRectangle initWithEffectId:rectangle:] */

undefined1 *
FUN_10af010b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112701e80;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10af01158; end: 10af0117b; -[SCLensEffectRectangle copyWithZone:] */

undefined8 FUN_10af01158(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af0117c; end: 10af01267; -[SCLensEffectRectangle hash] */

undefined8 * FUN_10af0117c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_50 = uVar3;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 != (undefined8 *)param_3) {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af012f4;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    iVar2 = (int)puVar5;
    if ((((ulong)puVar5 & 1) == 0) ||
       (_CGRectEqualToRect(*(undefined8 *)((long)puVar4 + 0x10),*(undefined8 *)((long)puVar4 + 0x18)
                           ,*(undefined8 *)((long)puVar4 + 0x20),
                           *(undefined8 *)((long)puVar4 + 0x28),*(undefined8 *)(param_3 + 0x10),
                           *(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),
                           *(undefined8 *)(param_3 + 0x28)), iVar2 == 0)) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_10af012f4;
    }
    puVar7 = *(undefined1 **)((long)puVar4 + 8);
    if (puVar7 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af012f4;
    }
  }
  puVar7 = (undefined1 *)0x1;
LAB_10af012f4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10af01268; end: 10af0130f; -[SCLensEffectRectangle isEqual:] */

long FUN_10af01268(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af012f4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    iVar1 = (int)uVar3;
    if (((uVar3 & 1) == 0) ||
       (_CGRectEqualToRect(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                           *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                           *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28)),
       iVar1 == 0)) {
      lVar4 = 0;
      goto LAB_10af012f4;
    }
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af012f4;
    }
  }
  lVar4 = 1;
LAB_10af012f4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af01310; end: 10af01317; -[SCLensEffectRectangle effectId] */

undefined8 FUN_10af01310(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01318; end: 10af01323; -[SCLensEffectRectangle rectangle] */

undefined8 FUN_10af01318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af01324; end: 10af0132f; -[SCLensEffectRectangle .cxx_destruct] */

void FUN_10af01324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01330; end: 10af013db; -[SCLensCommandEffectDescriptor initWithLens:launchMetadata:] */

undefined1 *
FUN_10af01330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701e88;
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



/* Entry: 10af013dc; end: 10af013ff; -[SCLensCommandEffectDescriptor copyWithZone:] */

undefined8 FUN_10af013dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af01400; end: 10af01473; -[SCLensCommandEffectDescriptor hash] */

undefined8 * FUN_10af01400(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10af014f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af01500;
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
          goto LAB_10af01500;
        }
        goto LAB_10af014f4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af01500:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af01474; end: 10af0151b; -[SCLensCommandEffectDescriptor isEqual:] */

long FUN_10af01474(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af014f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af01500;
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
          goto LAB_10af01500;
        }
        goto LAB_10af014f4;
      }
    }
    lVar3 = 0;
  }
LAB_10af01500:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af0151c; end: 10af01523; -[SCLensCommandEffectDescriptor lens] */

undefined8 FUN_10af0151c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01524; end: 10af0152b; -[SCLensCommandEffectDescriptor launchMetadata] */

undefined8 FUN_10af01524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af0152c; end: 10af0155b; -[SCLensCommandEffectDescriptor .cxx_destruct] */

void FUN_10af0152c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af0155c; end: 10af01607; -[SCLensCommandCompositeEffectDescriptor initWithDescriptors:rectangles:] */

undefined1 *
FUN_10af0155c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701e90;
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



/* Entry: 10af01608; end: 10af0162b; -[SCLensCommandCompositeEffectDescriptor copyWithZone:] */

undefined8 FUN_10af01608(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af0162c; end: 10af0169f; -[SCLensCommandCompositeEffectDescriptor hash] */

undefined8 * FUN_10af0162c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10af01720:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af0172c;
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
          goto LAB_10af0172c;
        }
        goto LAB_10af01720;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af0172c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af016a0; end: 10af01747; -[SCLensCommandCompositeEffectDescriptor isEqual:] */

long FUN_10af016a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af01720:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af0172c;
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
          goto LAB_10af0172c;
        }
        goto LAB_10af01720;
      }
    }
    lVar3 = 0;
  }
LAB_10af0172c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af01748; end: 10af0174f; -[SCLensCommandCompositeEffectDescriptor descriptors] */

undefined8 FUN_10af01748(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01750; end: 10af01757; -[SCLensCommandCompositeEffectDescriptor rectangles] */

undefined8 FUN_10af01750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af01758; end: 10af01787; -[SCLensCommandCompositeEffectDescriptor .cxx_destruct] */

void FUN_10af01758(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01788; end: 10af017f3; +[SCLensCommandEffectDescriptorContainer compositeDescriptorWithCompositeDescriptor:] */

void FUN_10af01788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de9d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af017f4; end: 10af01857; +[SCLensCommandEffectDescriptorContainer descriptorWithDescriptor:] */

void FUN_10af017f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de9d0;
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



/* Entry: 10af01858; end: 10af0187b; -[SCLensCommandEffectDescriptorContainer copyWithZone:] */

undefined8 FUN_10af01858(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af0187c; end: 10af018f3; -[SCLensCommandEffectDescriptorContainer hash] */

void FUN_10af0187c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112701e98;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af018f4; end: 10af01937; -[SCLensCommandEffectDescriptorContainer internalInit] */

void FUN_10af018f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701e98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af01938; end: 10af019ef; -[SCLensCommandEffectDescriptorContainer isEqual:] */

long FUN_10af01938(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af019c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af019d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af019d4;
        }
        goto LAB_10af019c8;
      }
    }
    lVar3 = 0;
  }
LAB_10af019d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af019f0; end: 10af01a73; -[SCLensCommandEffectDescriptorContainer matchDescriptor:compositeDescriptor:] */

void FUN_10af019f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10af01a58;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10af01a58;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10af01a58:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af01a74; end: 10af01aa3; -[SCLensCommandEffectDescriptorContainer .cxx_destruct] */

void FUN_10af01a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af01aa4; end: 10af01aab; -[SCUcoMemoriesServices ucoDataFetcher] */

undefined8 FUN_10af01aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01aac; end: 10af01ab3; -[SCUcoMemoriesServices ucoViewModelGenerator] */

undefined8 FUN_10af01aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af01ab4; end: 10af01ae3; -[SCUcoMemoriesServices .cxx_destruct] */

void FUN_10af01ab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01ae4; end: 10af01b13; -[SCUcoDefaultServices .cxx_destruct] */

void FUN_10af01ae4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01b14; end: 10af01bbf; -[SCUcoLoggingInfo initWithRankingId:itemPosition:] */

undefined1 *
FUN_10af01b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701eb0;
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



/* Entry: 10af01bc0; end: 10af01be3; -[SCUcoLoggingInfo copyWithZone:] */

undefined8 FUN_10af01bc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af01be4; end: 10af01c57; -[SCUcoLoggingInfo hash] */

undefined8 * FUN_10af01be4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10af01cd8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af01ce4;
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
          goto LAB_10af01ce4;
        }
        goto LAB_10af01cd8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af01ce4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af01c58; end: 10af01cff; -[SCUcoLoggingInfo isEqual:] */

long FUN_10af01c58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af01cd8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af01ce4;
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
          goto LAB_10af01ce4;
        }
        goto LAB_10af01cd8;
      }
    }
    lVar3 = 0;
  }
LAB_10af01ce4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af01d00; end: 10af01d07; -[SCUcoLoggingInfo rankingId] */

undefined8 FUN_10af01d00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01d08; end: 10af01d0f; -[SCUcoLoggingInfo itemPosition] */

undefined8 FUN_10af01d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af01d10; end: 10af01d3f; -[SCUcoLoggingInfo .cxx_destruct] */

void FUN_10af01d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01d40; end: 10af01d47; -[SCLegacyImageProcessServices defaultImageProcessCommandProvider] */

undefined8 FUN_10af01d40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01d48; end: 10af01d4f; -[SCLegacyImageProcessServices snapEditorPlaybackCommandProvider] */

undefined8 FUN_10af01d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af01d50; end: 10af01d57; -[SCLegacyImageProcessServices bundledVisualFilterImageProcessCommandProvider] */

undefined8 FUN_10af01d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af01d58; end: 10af01d93; -[SCLegacyImageProcessServices .cxx_destruct] */

void FUN_10af01d58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01d94; end: 10af01dcf; -[SCLegacyLensDataFetcherServices .cxx_destruct] */

void FUN_10af01d94(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01dd0; end: 10af01dd7; -[SCLensContentDataFetcherService lensContentDataFetcher] */

undefined8 FUN_10af01dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01dd8; end: 10af01de3; -[SCLensContentDataFetcherService .cxx_destruct] */

void FUN_10af01dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01de4; end: 10af01e13; -[SCLensPickerMetadataStoreServices setLensPickerMetadataStore:] */

void FUN_10af01de4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af01e14; end: 10af01e1f; -[SCLensPickerMetadataStoreServices .cxx_destruct] */

void FUN_10af01e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01e20; end: 10af01e2b; -[SCLensRemovalServices .cxx_destruct] */

void FUN_10af01e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01e2c; end: 10af01e33; -[SCLensScheduleMetadataStoreServices liveCameraScheduleV3Service] */

undefined8 FUN_10af01e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01e34; end: 10af01e3b; -[SCLensScheduleMetadataStoreServices ucoScheduleService] */

undefined8 FUN_10af01e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af01e3c; end: 10af01e43; -[SCLensScheduleMetadataStoreServices replyCameraScheduleService] */

undefined8 FUN_10af01e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af01e44; end: 10af01e4b; -[SCLensScheduleMetadataStoreServices cheeriosScheduleService] */

undefined8 FUN_10af01e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af01e4c; end: 10af01e53; -[SCLensScheduleMetadataStoreServices directorModeScheduleService] */

undefined8 FUN_10af01e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af01e54; end: 10af01e5b; -[SCLensScheduleMetadataStoreServices directorModeScheduleMetadataStoreCreator] */

undefined8 FUN_10af01e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10af01e5c; end: 10af01e63; -[SCLensScheduleMetadataStoreServices cameraRollScheduleService] */

undefined8 FUN_10af01e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10af01e64; end: 10af01e6b; -[SCLensScheduleMetadataStoreServices cameraRollScheduleMetadataStoreCreator] */

undefined8 FUN_10af01e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10af01e6c; end: 10af01e73; -[SCLensScheduleMetadataStoreServices newportMetadataStoreCreator] */

undefined8 FUN_10af01e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10af01e74; end: 10af01e7b; -[SCLensScheduleMetadataStoreServices callingCarouselMetadataStoreCreator] */

undefined8 FUN_10af01e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10af01e7c; end: 10af01f47; -[SCLensScheduleMetadataStoreServices .cxx_destruct] */

void FUN_10af01e7c(long param_1)

{
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



/* Entry: 10af01f48; end: 10af01f53; -[SCLensesStudySettingsProviderServices .cxx_destruct] */

void FUN_10af01f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01f54; end: 10af01f5f; -[SCPerceptionFeatureSettingsServices .cxx_destruct] */

void FUN_10af01f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01f60; end: 10af01f6b; -[SCVoiceMLLensLoggingServices .cxx_destruct] */

void FUN_10af01f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af01f6c; end: 10af01f73; -[SCLegacyMapNetworkingServices checkinMapSnapTokenService] */

undefined8 FUN_10af01f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af01f74; end: 10af01f7b; -[SCLegacyMapNetworkingServices exploreMapSnapTokenService] */

undefined8 FUN_10af01f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af01f7c; end: 10af01f83; -[SCLegacyMapNetworkingServices friendsFinderMapSnapTokenService] */

undefined8 FUN_10af01f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af01f84; end: 10af01f8b; -[SCLegacyMapNetworkingServices mapSnapTokenServiceFSNProxy] */

undefined8 FUN_10af01f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af01f8c; end: 10af01f93; -[SCLegacyMapNetworkingServices placesMapSnapTokenService] */

undefined8 FUN_10af01f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af01f94; end: 10af02063; -[SCLegacyMapNetworkingServices .cxx_destruct] */

void FUN_10af01f94(long param_1)

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



/* Entry: 10af02064; end: 10af0206f;  */

bool FUN_10af02064(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af02070; end: 10af020eb;  */

undefined * FUN_10af02070(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ee050 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f31998,
                        &UNK_10e535ca4,&UNK_10e535d1c,8,FUN_10af020ec,0);
    do {
      if (puRam00000001137ee050 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ee050;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ee050,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ee050 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ee050;
}



/* Entry: 10af020ec; end: 10af020f7;  */

bool FUN_10af020ec(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af020f8; end: 10af02173;  */

undefined * FUN_10af020f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ee058 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f319b8,
                        &UNK_10e535d3c,&UNK_10e535d78,9,FUN_10af02174,0);
    do {
      if (puRam00000001137ee058 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ee058;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ee058,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ee058 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ee058;
}



/* Entry: 10af02174; end: 10af0217f;  */

bool FUN_10af02174(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10af02180; end: 10af021e7; +[KalmanData descriptor] */

void FUN_10af02180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04440,
                        &PTR____CFConstantStringClassReference_110f319d8,&PTR_DAT_113317050,
                        &PTR_s_lat_113317928,7,0x20,0x1c);
    puRam00000001137ee060 = puVar1;
  }
  return;
}



/* Entry: 10af021e8; end: 10af0224f; +[BatchCalculateActionStickerRequest descriptor] */

void FUN_10af021e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04490,
                        &PTR____CFConstantStringClassReference_110f319f8,&PTR_DAT_113317050,
                        &PTR_DAT_113317068,1,0x10,0x1c);
    puRam00000001137ee068 = puVar1;
  }
  return;
}



/* Entry: 10af02250; end: 10af022b7; +[BatchCalculateActionStickerResponse descriptor] */

void FUN_10af02250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c044e0,
                        &PTR____CFConstantStringClassReference_110f31a18,&PTR_DAT_113317050,
                        &PTR_DAT_113317088,1,0x10,0x1c);
    puRam00000001137ee070 = puVar1;
  }
  return;
}



/* Entry: 10af022b8; end: 10af0231f; +[BatchCalculateActionStickerForUserRequest descriptor] */

void FUN_10af022b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04530,
                        &PTR____CFConstantStringClassReference_110f31a38,&PTR_DAT_113317050,
                        &PTR_DAT_1133172a8,3,0x20,0x1c);
    puRam00000001137ee078 = puVar1;
  }
  return;
}



/* Entry: 10af02320; end: 10af02387; +[BatchCalculateActionStickerForUserResponse descriptor] */

void FUN_10af02320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04580,
                        &PTR____CFConstantStringClassReference_110f31a58,&PTR_DAT_113317050,
                        &PTR_DAT_1133170a8,1,0x10,0x1c);
    puRam00000001137ee080 = puVar1;
  }
  return;
}



/* Entry: 10af02388; end: 10af023f3; +[CalculateActionStickerRequest descriptor] */

void FUN_10af02388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c045d0,
                        &PTR____CFConstantStringClassReference_110f31a78,&PTR_DAT_113317050,
                        &PTR_DAT_113316e30,0x11,0x70,0x1c);
    puRam00000001137ee088 = puVar1;
  }
  return;
}



/* Entry: 10af023f4; end: 10af0245b; +[CalculateActionStickerResponse descriptor] */

void FUN_10af023f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04620,
                        &PTR____CFConstantStringClassReference_110f31a98,&PTR_DAT_113317050,
                        &PTR_DAT_113317308,3,0x20,0x1c);
    puRam00000001137ee090 = puVar1;
  }
  return;
}



/* Entry: 10af0245c; end: 10af024c3; +[LoggedAction descriptor] */

void FUN_10af0245c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04670,
                        &PTR____CFConstantStringClassReference_110f31ab8,&PTR_DAT_113317050,
                        &PTR_DAT_1133175a8,4,0x28,0x1c);
    puRam00000001137ee098 = puVar1;
  }
  return;
}



/* Entry: 10af024c4; end: 10af0252b; +[AnchorData descriptor] */

void FUN_10af024c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c046c0,
                        &PTR____CFConstantStringClassReference_110f31ad8,&PTR_DAT_113317050,
                        &PTR_s_timestamp_113317368,3,0x18,0x1c);
    puRam00000001137ee0a0 = puVar1;
  }
  return;
}



/* Entry: 10af0252c; end: 10af02593; +[S2CellTiming descriptor] */

void FUN_10af0252c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04710,
                        &PTR____CFConstantStringClassReference_110f31af8,&PTR_DAT_113317050,
                        &PTR_DAT_1133173c8,3,0x20,0x1c);
    puRam00000001137ee0a8 = puVar1;
  }
  return;
}



/* Entry: 10af02594; end: 10af025fb; +[S2CellData descriptor] */

void FUN_10af02594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04760,
                        &PTR____CFConstantStringClassReference_110f31b18,&PTR_DAT_113317050,
                        &PTR_DAT_113317628,4,0x20,0x1c);
    puRam00000001137ee0b0 = puVar1;
  }
  return;
}



/* Entry: 10af025fc; end: 10af02663; +[CampusData descriptor] */

void FUN_10af025fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c047b0,
                        &PTR____CFConstantStringClassReference_110f31b38,&PTR_DAT_113317050,
                        &PTR_s_id_p_113317428,3,0x18,0x1c);
    puRam00000001137ee0b8 = puVar1;
  }
  return;
}



/* Entry: 10af02664; end: 10af026cb; +[UserPermanentLocations descriptor] */

void FUN_10af02664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04800,
                        &PTR____CFConstantStringClassReference_110f31b58,&PTR_DAT_113317050,
                        &PTR_s_user_113317128,2,0x18,0x1c);
    puRam00000001137ee0c0 = puVar1;
  }
  return;
}



/* Entry: 10af026cc; end: 10af02733; +[PermanentLocations descriptor] */

void FUN_10af026cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04850,
                        &PTR____CFConstantStringClassReference_110f31b78,&PTR_DAT_113317050,
                        &PTR_DAT_113317dc8,0xb,0x50,0x1c);
    puRam00000001137ee0c8 = puVar1;
  }
  return;
}



/* Entry: 10af02734; end: 10af0279b; +[UserData descriptor] */

void FUN_10af02734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c048a0,
                        &PTR____CFConstantStringClassReference_110e332f8,&PTR_DAT_113317050,
                        &PTR_DAT_113317a08,10,0x58,0x1c);
    puRam00000001137ee0d0 = puVar1;
  }
  return;
}



/* Entry: 10af0279c; end: 10af02803; +[SpectaclesInfo descriptor] */

void FUN_10af0279c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c048f0,
                        &PTR____CFConstantStringClassReference_110f31b98,&PTR_DAT_113317050,
                        &PTR_DAT_113317488,3,0x10,0x1c);
    puRam00000001137ee0d8 = puVar1;
  }
  return;
}



/* Entry: 10af02804; end: 10af0286b; +[LocationHistoryEntry descriptor] */

void FUN_10af02804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04940,
                        &PTR____CFConstantStringClassReference_110f31bb8,&PTR_DAT_113317050,
                        &PTR_s_timestamp_113317868,6,0x38,0x1c);
    puRam00000001137ee0e0 = puVar1;
  }
  return;
}



/* Entry: 10af0286c; end: 10af028d3; +[LocationHistoryRow descriptor] */

void FUN_10af0286c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c04990,
                        &PTR____CFConstantStringClassReference_110f31bd8,&PTR_DAT_113317050,
                        &PTR_DAT_113317168,2,0x18,0x1c);
    puRam00000001137ee0e8 = puVar1;
  }
  return;
}



/* Entry: 10af028d4; end: 10af0293b; +[TopLocation descriptor] */

void FUN_10af028d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ee0f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c049e0,
                        &PTR____CFConstantStringClassReference_110f31bf8,&PTR_DAT_113317050,
                        &PTR_DAT_113317728,5,0x18,0x1c);
    puRam00000001137ee0f0 = puVar1;
  }
  return;
}


