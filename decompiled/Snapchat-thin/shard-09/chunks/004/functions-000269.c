/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ccdf38; end: 106ccdf63; -[SCCMapReactionEmojiSkinTones initWithLight:mediumLight:medium:mediumDark:dark:] */

void FUN_106ccdf38(void)

{
  func_0x000106cce020(PTR_PTR_1126f66b0);
  func_0x000106cce000();
  return;
}



/* Entry: 106ccdf64; end: 106ccdf77; +[SCCMapReactionEmojiSkinTones valdiMarshallableObjectDescriptor] */

void FUN_106ccdf64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_light_110973458;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdf78; end: 106ccdf9b; -[SCCNearMeReactionChatCardContext init] */

void FUN_106ccdf78(void)

{
  func_0x000106cce030(PTR_PTR_1126f66b8);
  return;
}



/* Entry: 106ccdf9c; end: 106ccdfaf; +[SCCNearMeReactionChatCardContext valdiMarshallableObjectDescriptor] */

void FUN_106ccdf9c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTap_1109734e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106ccdfb0; end: 106ccdfdb; -[SCCNearMeReactionChatCardViewModel initWithReactionsObservable:friendFirstName:locality:chatMediaData:] */

void FUN_106ccdfb0(void)

{
  func_0x000106cce020(PTR_PTR_1126f66c0);
  func_0x000106cce000();
  return;
}



/* Entry: 106ccdfdc; end: 106cce04b; +[SCCNearMeReactionChatCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_106ccdfdc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973518;
  param_1[1] = &PTR_s_SCBridgeObservable_1109735a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106cce04c; end: 106cce0bf; -[SCMapPlacesBasemapServices initWithLayer:] */

undefined1 * FUN_106cce04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f66c8;
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



/* Entry: 106cce0c0; end: 106cce0c7; -[SCMapPlacesBasemapServices placesBasemapLayer] */

undefined8 FUN_106cce0c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cce0c8; end: 106cce0d3; -[SCMapPlacesBasemapServices .cxx_destruct] */

void FUN_106cce0c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cce0d4; end: 106cce313; -[SCMapPlace initWithIdentifier:category:coordinate:isFavorite:name:annotations:thumbnail:layerId:loyaltyTier:originalProperties:groups:isPromoted:] */

undefined8 *
FUN_106cce0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
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
  puStack_78 = PTR_PTR_1126f66d0;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    puVar1[0xc] = param_1;
    puVar1[0xd] = param_2;
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
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_15;
  }
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
  return puVar1;
}



/* Entry: 106cce314; end: 106cce337; -[SCMapPlace copyWithZone:] */

undefined8 FUN_106cce314(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cce338; end: 106cce453; -[SCMapPlace hash] */

undefined8 * FUN_106cce338(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (undefined8 *)param_3) {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106cce5e4;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((((ulong)puVar4 & 1) == 0) ||
           ((((*(char *)((long)puVar3 + 8) != param_3[8] ||
              (2.220446049250313e-16 <
               ABS(*(double *)((long)puVar3 + 0x60) - *(double *)(param_3 + 0x60)))) ||
             (2.220446049250313e-16 <
              ABS(*(double *)((long)puVar3 + 0x68) - *(double *)(param_3 + 0x68)))) ||
            ((lVar5 = *(long *)((long)puVar3 + 0x10), lVar5 != *(long *)(param_3 + 0x10) &&
             (func_0x00010c071ae0(), (int)lVar5 == 0)))))) ||
          ((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 != *(long *)(param_3 + 0x18) &&
           (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
         ((((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 != *(long *)(param_3 + 0x20) &&
            (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
           ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 != *(long *)(param_3 + 0x28) &&
            (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
          ((lVar5 = *(long *)((long)puVar3 + 0x30), lVar5 != *(long *)(param_3 + 0x30) &&
           (func_0x00010c071ae0(), (int)lVar5 == 0)))))) ||
        ((lVar5 = *(long *)((long)puVar3 + 0x38), lVar5 != *(long *)(param_3 + 0x38) &&
         (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
       ((((lVar5 = *(long *)((long)puVar3 + 0x40), lVar5 != *(long *)(param_3 + 0x40) &&
          (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
         ((lVar5 = *(long *)((long)puVar3 + 0x48), lVar5 != *(long *)(param_3 + 0x48) &&
          (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
        ((lVar5 = *(long *)((long)puVar3 + 0x50), lVar5 != *(long *)(param_3 + 0x50) &&
         (func_0x00010c071ae0(), (int)lVar5 == 0)))))) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_106cce5e4;
    }
    puVar7 = *(undefined1 **)((long)puVar3 + 0x58);
    if (puVar7 != *(undefined1 **)(param_3 + 0x58)) {
      func_0x00010c071ae0();
      goto LAB_106cce5e4;
    }
  }
  puVar7 = (undefined1 *)0x1;
LAB_106cce5e4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 106cce454; end: 106cce5ff; -[SCMapPlace isEqual:] */

long FUN_106cce454(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cce5e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((((uVar2 & 1) == 0) ||
           ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
              (2.220446049250313e-16 <
               ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60)))) ||
             (2.220446049250313e-16 < ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68))
             )) || ((lVar3 = *(long *)(param_1 + 0x10), lVar3 != *(long *)(param_3 + 0x10) &&
                    (func_0x00010c071ae0(), (int)lVar3 == 0)))))) ||
          ((lVar3 = *(long *)(param_1 + 0x18), lVar3 != *(long *)(param_3 + 0x18) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
         ((((lVar3 = *(long *)(param_1 + 0x20), lVar3 != *(long *)(param_3 + 0x20) &&
            (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
           ((lVar3 = *(long *)(param_1 + 0x28), lVar3 != *(long *)(param_3 + 0x28) &&
            (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
          ((lVar3 = *(long *)(param_1 + 0x30), lVar3 != *(long *)(param_3 + 0x30) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)))))) ||
        ((lVar3 = *(long *)(param_1 + 0x38), lVar3 != *(long *)(param_3 + 0x38) &&
         (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
       ((((lVar3 = *(long *)(param_1 + 0x40), lVar3 != *(long *)(param_3 + 0x40) &&
          (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
         ((lVar3 = *(long *)(param_1 + 0x48), lVar3 != *(long *)(param_3 + 0x48) &&
          (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
        ((lVar3 = *(long *)(param_1 + 0x50), lVar3 != *(long *)(param_3 + 0x50) &&
         (func_0x00010c071ae0(), (int)lVar3 == 0)))))) {
      lVar3 = 0;
      goto LAB_106cce5e4;
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != *(long *)(param_3 + 0x58)) {
      func_0x00010c071ae0();
      goto LAB_106cce5e4;
    }
  }
  lVar3 = 1;
LAB_106cce5e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cce600; end: 106cce607; -[SCMapPlace identifier] */

undefined8 FUN_106cce600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cce608; end: 106cce60f; -[SCMapPlace category] */

undefined8 FUN_106cce608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cce610; end: 106cce617; -[SCMapPlace coordinate] */

undefined1  [16] FUN_106cce610(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



/* Entry: 106cce618; end: 106cce61f; -[SCMapPlace isFavorite] */

undefined8 FUN_106cce618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106cce620; end: 106cce627; -[SCMapPlace name] */

undefined8 FUN_106cce620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106cce628; end: 106cce62f; -[SCMapPlace annotations] */

undefined8 FUN_106cce628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106cce630; end: 106cce637; -[SCMapPlace thumbnail] */

undefined8 FUN_106cce630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106cce638; end: 106cce63f; -[SCMapPlace layerId] */

undefined8 FUN_106cce638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106cce640; end: 106cce647; -[SCMapPlace loyaltyTier] */

undefined8 FUN_106cce640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106cce648; end: 106cce64f; -[SCMapPlace originalProperties] */

undefined8 FUN_106cce648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106cce650; end: 106cce657; -[SCMapPlace groups] */

undefined8 FUN_106cce650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106cce658; end: 106cce65f; -[SCMapPlace isPromoted] */

undefined1 FUN_106cce658(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106cce660; end: 106cce6ef; -[SCMapPlace .cxx_destruct] */

void FUN_106cce660(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 106cce6f0; end: 106cce707; +[SCCPlaceProfileComponentsCallback valdiMarshallableObjectDescriptor] */

void FUN_106cce6f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109735f8;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1109735c8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106cce708; end: 106cce72f;  */

undefined8 FUN_106cce708(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000106ccf420();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 106cce730; end: 106cce77f;  */

void FUN_106cce730(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(FUN_106ccf114);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cce780; end: 106cce7c3;  */

undefined8 FUN_106cce780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d20f0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000106ccf450();
  func_0x000106ccf3a8();
  return param_1;
}



/* Entry: 106cce7c4; end: 106cce7e3; +[SCCVenueProfileV3ActionHandling valdiMarshallableObjectDescriptor] */

void FUN_106cce7c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109736a0;
  param_1[1] = &PTR_DAT_110973898;
  param_1[2] = &PTR_DAT_110973628;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106cce7e4; end: 106cce807;  */

undefined8 FUN_106cce7e4(void)

{
  code *extraout_x8;
  
  func_0x000106ccf420();
  (*extraout_x8)();
  return 0;
}



/* Entry: 106cce808; end: 106cce857;  */

void FUN_106cce808(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf13c);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cce858; end: 106cce87b;  */

undefined8 FUN_106cce858(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000106ccf3d0();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x20));
  return 0;
}



/* Entry: 106cce87c; end: 106cce8cb;  */

void FUN_106cce87c(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf15c);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cce8cc; end: 106cce8f3;  */

undefined8 FUN_106cce8cc(void)

{
  code *extraout_x8;
  
  func_0x000106ccf420();
  (*extraout_x8)();
  return 0;
}



/* Entry: 106cce8f4; end: 106cce943;  */

void FUN_106cce8f4(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf180);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cce944; end: 106cce96b;  */

undefined8 FUN_106cce944(void)

{
  code *extraout_x8;
  
  func_0x000106ccf3d0();
  (*extraout_x8)();
  return 0;
}



/* Entry: 106cce96c; end: 106cce9bb;  */

void FUN_106cce96c(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf1a0);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cce9bc; end: 106cce9f3; +[SCCVenueProfileV3DataProviding valdiMarshallableObjectDescriptor] */

void FUN_106cce9bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973920;
  param_1[1] = &PTR_DAT_110973a40;
  param_1[2] = &PTR_DAT_1109738f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106cce9f4; end: 106ccea43;  */

void FUN_106cce9f4(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf1c4);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccea44; end: 106ccea63; +[SCVenueProfileActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106ccea44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973b70;
  param_1[1] = &PTR_DAT_110973d98;
  param_1[2] = &PTR_DAT_110973a98;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccea64; end: 106ccea8b;  */

undefined8 FUN_106ccea64(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000106ccf3d0();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  return 0;
}



/* Entry: 106ccea8c; end: 106cceadb;  */

void FUN_106ccea8c(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf1ec);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cceadc; end: 106cceb0b;  */

undefined8 FUN_106cceadc(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000106ccf420();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  return 0;
}



/* Entry: 106cceb0c; end: 106cceb5b;  */

void FUN_106cceb0c(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf214);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cceb5c; end: 106cceb7f;  */

undefined8 FUN_106cceb5c(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000106ccf3d0();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  return 0;
}



/* Entry: 106cceb80; end: 106ccebcf;  */

void FUN_106cceb80(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf244);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccebd0; end: 106ccebf7;  */

undefined8 FUN_106ccebd0(void)

{
  code *extraout_x8;
  
  func_0x000106ccf3d0();
  (*extraout_x8)();
  return 0;
}



/* Entry: 106ccebf8; end: 106ccec47;  */

void FUN_106ccebf8(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf268);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccec48; end: 106ccec6b;  */

undefined8 FUN_106ccec48(void)

{
  code *extraout_x8;
  
  func_0x000106ccf3d0();
  (*extraout_x8)();
  return 0;
}



/* Entry: 106ccec6c; end: 106ccecbb;  */

void FUN_106ccec6c(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf294);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccecbc; end: 106ccece7; +[SCVenueProfileContextualInfoProvider valdiMarshallableObjectDescriptor] */

void FUN_106ccecbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973e20;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110973dd8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccece8; end: 106cced37;  */

void FUN_106ccece8(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf2b8);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cced38; end: 106cced5b;  */

undefined8 FUN_106cced38(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000106ccf420();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 106cced5c; end: 106ccedab;  */

void FUN_106cced5c(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf2dc);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccedac; end: 106ccedc7; +[SCVenueProfileExitCallback valdiMarshallableObjectDescriptor] */

void FUN_106ccedac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110973e80;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccedc8; end: 106ccede7; +[SCVenueProfileLoadStateCallback valdiMarshallableObjectDescriptor] */

void FUN_106ccedc8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973ef8;
  param_1[1] = &PTR_DAT_110973f70;
  param_1[2] = &PTR_DAT_110973eb0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccede8; end: 106ccee23;  */

undefined8 FUN_106ccede8(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000106ccf420();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  return 0;
}



/* Entry: 106ccee24; end: 106ccee73;  */

void FUN_106ccee24(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf2fc);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccee74; end: 106ccee93; +[SCVenueProfileMetricCallback valdiMarshallableObjectDescriptor] */

void FUN_106ccee74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110973fe0;
  param_1[1] = &PTR_DAT_110974028;
  param_1[2] = &PTR_s_oi_v_110973fb0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccee94; end: 106cceeb7;  */

undefined8 FUN_106ccee94(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 106cceeb8; end: 106ccef07;  */

void FUN_106cceeb8(void)

{
  func_0x000106ccf3e0();
  func_0x000106ccf398();
  func_0x000106ccf360(0x106ccf338);
  func_0x000106ccf3e8();
  func_0x000106ccf38c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccef08; end: 106ccef4b;  */

undefined8 FUN_106ccef08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d20f8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000106ccf450();
  func_0x000106ccf3a8();
  return param_1;
}



/* Entry: 106ccef4c; end: 106ccef57; +[SCCVenueProfileV3 componentPath] */

undefined ** FUN_106ccef4c(void)

{
  return &PTR____CFConstantStringClassReference_110e834b8;
}



/* Entry: 106ccef58; end: 106ccef77; -[SCCVenueProfileV3 initWithViewModel:componentContext:runtime:] */

void FUN_106ccef58(void)

{
  func_0x000106ccf3b4(PTR_PTR_1126f66d8);
  return;
}



/* Entry: 106ccef78; end: 106ccefab; -[SCCVenueProfileV3 setViewModel:] */

void FUN_106ccef78(void)

{
  func_0x000106ccf3f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccf42c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106ccefac; end: 106ccefe3; -[SCCVenueProfileV3 viewModel] */

void FUN_106ccefac(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccf3a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccefe4; end: 106ccefef; +[SCPlaceLinkFloatingButton componentPath] */

undefined ** FUN_106ccefe4(void)

{
  return &PTR____CFConstantStringClassReference_110e834d8;
}



/* Entry: 106cceff0; end: 106ccf00f; -[SCPlaceLinkFloatingButton initWithViewModel:componentContext:runtime:] */

void FUN_106cceff0(void)

{
  func_0x000106ccf3b4(PTR_PTR_1126f66e0);
  return;
}



/* Entry: 106ccf010; end: 106ccf043; -[SCPlaceLinkFloatingButton setViewModel:] */

void FUN_106ccf010(void)

{
  func_0x000106ccf3f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccf42c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106ccf044; end: 106ccf07b; -[SCPlaceLinkFloatingButton viewModel] */

void FUN_106ccf044(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccf3a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccf07c; end: 106ccf087; +[SCVenueProfileViewV2 componentPath] */

undefined ** FUN_106ccf07c(void)

{
  return &PTR____CFConstantStringClassReference_110e834f8;
}



/* Entry: 106ccf088; end: 106ccf0a7; -[SCVenueProfileViewV2 initWithViewModel:componentContext:runtime:] */

void FUN_106ccf088(void)

{
  func_0x000106ccf3b4(PTR_PTR_1126f66e8);
  return;
}



/* Entry: 106ccf0a8; end: 106ccf0db; -[SCVenueProfileViewV2 setViewModel:] */

void FUN_106ccf0a8(void)

{
  func_0x000106ccf3f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccf42c();
  func_0x000106ccf3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106ccf0dc; end: 106ccf113; -[SCVenueProfileViewV2 viewModel] */

void FUN_106ccf0dc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ccf3a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccf114; end: 106ccf35f;  */

void FUN_106ccf114(undefined8 param_1)

{
  code *extraout_x8;
  
  func_0x000106ccf480();
  (*extraout_x8)(param_1,0);
  return;
}



/* Entry: 106ccf360; end: 106ccf4af;  */

void FUN_106ccf360(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 106ccf4b0; end: 106ccf4bb; +[SCCAdMapsPromotedPlaceBanner componentPath] */

undefined ** FUN_106ccf4b0(void)

{
  return &PTR____CFConstantStringClassReference_110e83518;
}



/* Entry: 106ccf4bc; end: 106ccf4ef; -[SCCAdMapsPromotedPlaceBanner initWithViewModel:componentContext:runtime:] */

void FUN_106ccf4bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f66f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106ccf4f0; end: 106ccf53f; -[SCCAdMapsPromotedPlaceBanner setViewModel:] */

void FUN_106ccf4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ccf540; end: 106ccf583; -[SCCAdMapsPromotedPlaceBanner viewModel] */

void FUN_106ccf540(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ccf584; end: 106ccf58f; +[SCCDemoTrayView componentPath] */

undefined ** FUN_106ccf584(void)

{
  return &PTR____CFConstantStringClassReference_110e83538;
}



/* Entry: 106ccf590; end: 106ccf5c3; -[SCCDemoTrayView initWithViewModel:componentContext:runtime:] */

void FUN_106ccf590(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f66f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106ccf5c4; end: 106ccf613; -[SCCDemoTrayView setViewModel:] */

void FUN_106ccf5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ccf614; end: 106ccf657; -[SCCDemoTrayView viewModel] */

void FUN_106ccf614(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ccf658; end: 106ccf67b; +[SCCMapAnnotationManager valdiMarshallableObjectDescriptor] */

void FUN_106ccf658(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110974250;
  param_1[1] = &PTR_DAT_1109743a0;
  param_1[2] = &PTR_s_oob_v_110974220;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf67c; end: 106ccf6a7;  */

undefined8 FUN_106ccf67c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 106ccf6a8; end: 106ccf707;  */

void FUN_106ccf6a8(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106ccf990(FUN_106ccf900);
  _objc_retainBlock(&puStack_48);
  func_0x000106ccf9ac();
  func_0x000106ccf988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccf708; end: 106ccf71b; +[SCCMapConfigurator valdiMarshallableObjectDescriptor] */

void FUN_106ccf708(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109743d0;
  param_1[1] = &PTR_DAT_110974400;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf71c; end: 106ccf72f; +[SCCMapLayerCloseHandler valdiMarshallableObjectDescriptor] */

void FUN_106ccf71c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110974410;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf730; end: 106ccf753; +[SCCMapLayerInternalHandler valdiMarshallableObjectDescriptor] */

void FUN_106ccf730(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110974470;
  param_1[1] = &PTR_DAT_1109744a0;
  param_1[2] = &PTR_DAT_110974440;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf754; end: 106ccf783;  */

undefined8 FUN_106ccf754(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),*(uint *)(param_2 + 3) & 1);
  return 0;
}



/* Entry: 106ccf784; end: 106ccf7e3;  */

void FUN_106ccf784(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000106ccf990(0x106ccf930);
  _objc_retainBlock(&puStack_48);
  func_0x000106ccf9ac();
  func_0x000106ccf988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ccf7e4; end: 106ccf7f7; +[SCCMapLayerLifecycle valdiMarshallableObjectDescriptor] */

void FUN_106ccf7e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109744b0;
  param_1[1] = &PTR_s_SCBridgeObservable_1109744f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf7f8; end: 106ccf80b; +[SCCMapTileDataProvider valdiMarshallableObjectDescriptor] */

void FUN_106ccf7f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110974510;
  param_1[1] = &PTR_s_SCBridgeObservable_110974558;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf80c; end: 106ccf81f; +[SCCMapViewport valdiMarshallableObjectDescriptor] */

void FUN_106ccf80c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110974570;
  param_1[1] = &PTR_DAT_1109745e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf820; end: 106ccf833; +[SCCUserLocationManager valdiMarshallableObjectDescriptor] */

void FUN_106ccf820(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110974610;
  param_1[1] = &PTR_DAT_110974640;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106ccf834; end: 106ccf83f; +[SCCMapLayerLoader componentPath] */

undefined ** FUN_106ccf834(void)

{
  return &PTR____CFConstantStringClassReference_110e83558;
}



/* Entry: 106ccf840; end: 106ccf873; -[SCCMapLayerLoader initWithViewModel:componentContext:runtime:] */

void FUN_106ccf840(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6700;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}


