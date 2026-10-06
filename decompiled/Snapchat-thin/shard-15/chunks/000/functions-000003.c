/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7488f0; end: 10b748913; -[CTPCameoCustomTextParameters copyWithZone:] */

undefined8 FUN_10b7488f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b748914; end: 10b7489eb; -[CTPCameoCustomTextParameters encodeWithCoder:] */

void FUN_10b748914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f793f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f79418);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f79438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f79458);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f79478);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f79498);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f794b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f794d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7489ec; end: 10b748a87; -[CTPCameoCustomTextParameters hash] */

undefined8 * FUN_10b7489ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = &uStack_68;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b748b70:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b748b7c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[3] == param_3[3] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) && (puVar3[6] == param_3[6])
         ))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[5];
          if (puVar6 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_10b748b7c;
          }
          goto LAB_10b748b70;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b748b7c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b748a88; end: 10b748b97; -[CTPCameoCustomTextParameters isEqual:] */

long FUN_10b748a88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b748b70:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b748b7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b748b7c;
          }
          goto LAB_10b748b70;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b748b7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b748b98; end: 10b748b9f; -[CTPCameoCustomTextParameters fontResourcesArray] */

undefined8 FUN_10b748b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b748ba0; end: 10b748ba7; -[CTPCameoCustomTextParameters fontResourcesArray_Count] */

undefined8 FUN_10b748ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b748ba8; end: 10b748baf; -[CTPCameoCustomTextParameters capitalize] */

undefined1 FUN_10b748ba8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b748bb0; end: 10b748bb7; -[CTPCameoCustomTextParameters defaultText] */

undefined8 FUN_10b748bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b748bb8; end: 10b748bbf; -[CTPCameoCustomTextParameters defaultTextOnly] */

undefined1 FUN_10b748bb8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b748bc0; end: 10b748bc7; -[CTPCameoCustomTextParameters isUniversal] */

undefined1 FUN_10b748bc0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b748bc8; end: 10b748bcf; -[CTPCameoCustomTextParameters textAreasArray] */

undefined8 FUN_10b748bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b748bd0; end: 10b748bd7; -[CTPCameoCustomTextParameters textAreasArray_Count] */

undefined8 FUN_10b748bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b748bd8; end: 10b748c13; -[CTPCameoCustomTextParameters .cxx_destruct] */

void FUN_10b748bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b748c14; end: 10b748ccf; -[SCDynamicCaptionBackgroundStyle initWithBackgroundColor:boxShadow:borderRadius:] */

undefined1 *
FUN_10b748c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270a6f0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b748cd0; end: 10b748d97; -[SCDynamicCaptionBackgroundStyle initWithCoder:] */

undefined1 * FUN_10b748cd0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a6f0;
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
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x18) = (double)param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b748d98; end: 10b748dbb; -[SCDynamicCaptionBackgroundStyle copyWithZone:] */

undefined8 FUN_10b748d98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b748dbc; end: 10b748e33; -[SCDynamicCaptionBackgroundStyle encodeWithCoder:] */

void FUN_10b748dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e02bd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f794f8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f79518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b748e34; end: 10b748ecb; -[SCDynamicCaptionBackgroundStyle hash] */

undefined8 * FUN_10b748e34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b748f80:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b748f8c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x10);
        if (puVar8 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b748f8c;
        }
        goto LAB_10b748f80;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b748f8c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b748ecc; end: 10b748fa7; -[SCDynamicCaptionBackgroundStyle isEqual:] */

long FUN_10b748ecc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b748f80:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b748f8c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b748f8c;
        }
        goto LAB_10b748f80;
      }
    }
    lVar4 = 0;
  }
LAB_10b748f8c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b748fa8; end: 10b748faf; -[SCDynamicCaptionBackgroundStyle backgroundColor] */

undefined8 FUN_10b748fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b748fb0; end: 10b748fb7; -[SCDynamicCaptionBackgroundStyle boxShadow] */

undefined8 FUN_10b748fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b748fb8; end: 10b748fbf; -[SCDynamicCaptionBackgroundStyle borderRadius] */

undefined8 FUN_10b748fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b748fc0; end: 10b748fef; -[SCDynamicCaptionBackgroundStyle .cxx_destruct] */

void FUN_10b748fc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b748ff0; end: 10b749257; -[SCDynamicCaptionFontStyle initWithCoder:] */

undefined1 * FUN_10b748ff0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a6f8;
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
    func_0x00010bf66e40(param_4);
    dVar5 = (double)param_1;
    *(double *)((long)puVar1 + 0x18) = dVar5;
    func_0x00010bf66e40(param_4);
    dVar5 = (double)SUB84(dVar5,0);
    *(double *)((long)puVar1 + 0x20) = dVar5;
    func_0x00010bf66e40(param_4);
    dVar5 = (double)SUB84(dVar5,0);
    *(double *)((long)puVar1 + 0x28) = dVar5;
    uVar2 = param_4;
    func_0x00010bf67000();
    fVar4 = SUB84(dVar5,0);
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    dVar5 = (double)fVar4;
    *(double *)((long)puVar1 + 0x68) = dVar5;
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x70) = (double)SUB84(dVar5,0);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b749258; end: 10b749487; -[SCDynamicCaptionFontStyle initWithFontName:fontURL:fontSize:minFontSize:fontBorderWidth:textColor:borderColor:textTransform:textDecoration:textAlignment:textShadows:textPadding:letterSpacing:lineHeight:backgroundImageURL:backgroundRepeat:mediaContent:] */

undefined8 *
FUN_10b749258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_19);
  puStack_98 = PTR_PTR_11270a6f8;
  puVar1 = &uStack_a0;
  uStack_a0 = param_6;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_12;
    puVar1[9] = param_13;
    puVar1[10] = param_14;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_4;
    puVar1[0xe] = param_5;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    puVar1[0x10] = param_18;
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 10b749488; end: 10b7494ab; -[SCDynamicCaptionFontStyle copyWithZone:] */

undefined8 FUN_10b749488(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7494ac; end: 10b74964b; -[SCDynamicCaptionFontStyle encodeWithCoder:] */

void FUN_10b7494ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f79558);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f79578);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f79598);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x28),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f795b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f795d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f795f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f79618);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f79638);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f79658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f79678);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f79698);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x68),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f796b8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x70),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f796d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f796f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f79718);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f79118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74964c; end: 10b7497cb; -[SCDynamicCaptionFontStyle hash] */

undefined8 * FUN_10b74964c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_98 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_90 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uStack_a8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  lVar7 = *(long *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  lStack_68 = -lVar7;
  if (-1 < lVar7) {
    lStack_68 = lVar7;
  }
  uStack_80 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x80);
  uStack_30 = *(undefined8 *)(param_1 + 0x88);
  lStack_38 = -lVar7;
  if (-1 < lVar7) {
    lStack_38 = lVar7;
  }
  uStack_40 = uVar4;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10b749a28:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b749a34;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((((*(long *)((long)puVar5 + 0x40) == *(long *)(param_3 + 0x40) &&
          (*(long *)((long)puVar5 + 0x48) == *(long *)(param_3 + 0x48))) &&
         (*(long *)((long)puVar5 + 0x50) == *(long *)(param_3 + 0x50))) &&
        (*(long *)((long)puVar5 + 0x80) == *(long *)(param_3 + 0x80))))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x18) - *(double *)(param_3 + 0x18));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x18) + *(double *)(param_3 + 0x18)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x20) - *(double *)(param_3 + 0x20));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x20) + *(double *)(param_3 + 0x20)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar10 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
          if ((dVar10 < 2.2250738585072014e-308) ||
             (dVar10 < ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
                       2.220446049250313e-16)) {
            dVar10 = ABS(*(double *)((long)puVar5 + 0x68) - *(double *)(param_3 + 0x68));
            if ((dVar10 < 2.2250738585072014e-308) ||
               (dVar10 < ABS(*(double *)((long)puVar5 + 0x68) + *(double *)(param_3 + 0x68)) *
                         2.220446049250313e-16)) {
              dVar10 = ABS(*(double *)((long)puVar5 + 0x70) - *(double *)(param_3 + 0x70));
              if ((((((dVar10 < 2.2250738585072014e-308) ||
                     (dVar10 < ABS(*(double *)((long)puVar5 + 0x70) + *(double *)(param_3 + 0x70)) *
                               2.220446049250313e-16)) &&
                    ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
                     (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                   ((((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                     ((lVar7 = *(long *)((long)puVar5 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
                      (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                    ((lVar7 = *(long *)((long)puVar5 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
                     (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0x58), lVar7 == *(long *)(param_3 + 0x58) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                 (((lVar7 = *(long *)((long)puVar5 + 0x60), lVar7 == *(long *)(param_3 + 0x60) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                  ((lVar7 = *(long *)((long)puVar5 + 0x78), lVar7 == *(long *)(param_3 + 0x78) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) {
                puVar9 = *(undefined1 **)((long)puVar5 + 0x88);
                if (puVar9 != *(undefined1 **)(param_3 + 0x88)) {
                  func_0x00010c071ae0();
                  goto LAB_10b749a34;
                }
                goto LAB_10b749a28;
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b749a34:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10b7497cc; end: 10b749a4f; -[SCDynamicCaptionFontStyle isEqual:] */

long FUN_10b7497cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b749a28:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b749a34;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
         (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
        (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                      2.220446049250313e-16)) {
            dVar5 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
              if ((((((dVar5 < 2.2250738585072014e-308) ||
                     (dVar5 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                              2.220446049250313e-16)) &&
                    ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
                     (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                   ((((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                     ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                    ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
                     (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
                  ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                 (((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                  ((lVar4 = *(long *)(param_1 + 0x78), lVar4 == *(long *)(param_3 + 0x78) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
                lVar4 = *(long *)(param_1 + 0x88);
                if (lVar4 != *(long *)(param_3 + 0x88)) {
                  func_0x00010c071ae0();
                  goto LAB_10b749a34;
                }
                goto LAB_10b749a28;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b749a34:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b749a50; end: 10b749a57; -[SCDynamicCaptionFontStyle fontName] */

undefined8 FUN_10b749a50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b749a58; end: 10b749a5f; -[SCDynamicCaptionFontStyle fontURL] */

undefined8 FUN_10b749a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b749a60; end: 10b749a67; -[SCDynamicCaptionFontStyle fontSize] */

undefined8 FUN_10b749a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b749a68; end: 10b749a6f; -[SCDynamicCaptionFontStyle minFontSize] */

undefined8 FUN_10b749a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b749a70; end: 10b749a77; -[SCDynamicCaptionFontStyle fontBorderWidth] */

undefined8 FUN_10b749a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b749a78; end: 10b749a7f; -[SCDynamicCaptionFontStyle textColor] */

undefined8 FUN_10b749a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b749a80; end: 10b749a87; -[SCDynamicCaptionFontStyle borderColor] */

undefined8 FUN_10b749a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b749a88; end: 10b749a8f; -[SCDynamicCaptionFontStyle textTransform] */

undefined8 FUN_10b749a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b749a90; end: 10b749a97; -[SCDynamicCaptionFontStyle textDecoration] */

undefined8 FUN_10b749a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b749a98; end: 10b749a9f; -[SCDynamicCaptionFontStyle textAlignment] */

undefined8 FUN_10b749a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b749aa0; end: 10b749aa7; -[SCDynamicCaptionFontStyle textShadows] */

undefined8 FUN_10b749aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b749aa8; end: 10b749aaf; -[SCDynamicCaptionFontStyle textPadding] */

undefined8 FUN_10b749aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b749ab0; end: 10b749ab7; -[SCDynamicCaptionFontStyle letterSpacing] */

undefined8 FUN_10b749ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b749ab8; end: 10b749abf; -[SCDynamicCaptionFontStyle lineHeight] */

undefined8 FUN_10b749ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b749ac0; end: 10b749ac7; -[SCDynamicCaptionFontStyle backgroundImageURL] */

undefined8 FUN_10b749ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b749ac8; end: 10b749acf; -[SCDynamicCaptionFontStyle backgroundRepeat] */

undefined8 FUN_10b749ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b749ad0; end: 10b749ad7; -[SCDynamicCaptionFontStyle mediaContent] */

undefined8 FUN_10b749ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b749ad8; end: 10b749b4f; -[SCDynamicCaptionFontStyle .cxx_destruct] */

void FUN_10b749ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b749b50; end: 10b749c4f; -[SCDynamicCaptionMediaContent initWithCoder:] */

undefined1 * FUN_10b749b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a700;
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



/* Entry: 10b749c50; end: 10b749d5b; -[SCDynamicCaptionMediaContent initWithContentURL:thumbnailURL:thumbnailBoltObject:contentBoltObject:] */

undefined1 *
FUN_10b749c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270a700;
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



/* Entry: 10b749d5c; end: 10b749d7f; -[SCDynamicCaptionMediaContent copyWithZone:] */

undefined8 FUN_10b749d5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b749d80; end: 10b749e07; -[SCDynamicCaptionMediaContent encodeWithCoder:] */

void FUN_10b749d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110df2698);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e44c98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f79738);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f79758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b749e08; end: 10b749e93; -[SCDynamicCaptionMediaContent hash] */

undefined8 * FUN_10b749e08(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b749f44:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b749f50;
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
              goto LAB_10b749f50;
            }
            goto LAB_10b749f44;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b749f50:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b749e94; end: 10b749f6b; -[SCDynamicCaptionMediaContent isEqual:] */

long FUN_10b749e94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b749f44:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b749f50;
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
              goto LAB_10b749f50;
            }
            goto LAB_10b749f44;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b749f50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b749f6c; end: 10b749f73; -[SCDynamicCaptionMediaContent contentURL] */

undefined8 FUN_10b749f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b749f74; end: 10b749f7b; -[SCDynamicCaptionMediaContent thumbnailURL] */

undefined8 FUN_10b749f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b749f7c; end: 10b749f83; -[SCDynamicCaptionMediaContent thumbnailBoltObject] */

undefined8 FUN_10b749f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b749f84; end: 10b749f8b; -[SCDynamicCaptionMediaContent contentBoltObject] */

undefined8 FUN_10b749f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b749f8c; end: 10b749fd3; -[SCDynamicCaptionMediaContent .cxx_destruct] */

void FUN_10b749f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b749fd4; end: 10b74a0ab; -[SCDynamicCaptionStyle initWithCoder:] */

undefined1 * FUN_10b749fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a708;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74a0ac; end: 10b74a183; -[SCDynamicCaptionStyle initWithPrimaryStyle:additionalStyles:filterId:] */

undefined1 *
FUN_10b74a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270a708;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74a184; end: 10b74a1a7; -[SCDynamicCaptionStyle copyWithZone:] */

undefined8 FUN_10b74a184(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74a1a8; end: 10b74a21b; -[SCDynamicCaptionStyle encodeWithCoder:] */

void FUN_10b74a1a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79778);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f79798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f53ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74a21c; end: 10b74a29b; -[SCDynamicCaptionStyle hash] */

undefined8 * FUN_10b74a21c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b74a334:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b74a340;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b74a340;
          }
          goto LAB_10b74a334;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b74a340:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b74a29c; end: 10b74a35b; -[SCDynamicCaptionStyle isEqual:] */

long FUN_10b74a29c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74a334:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74a340;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b74a340;
          }
          goto LAB_10b74a334;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b74a340:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74a35c; end: 10b74a363; -[SCDynamicCaptionStyle primaryStyle] */

undefined8 FUN_10b74a35c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74a364; end: 10b74a36b; -[SCDynamicCaptionStyle additionalStyles] */

undefined8 FUN_10b74a364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74a36c; end: 10b74a373; -[SCDynamicCaptionStyle filterId] */

undefined8 FUN_10b74a36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74a374; end: 10b74a3af; -[SCDynamicCaptionStyle .cxx_destruct] */

void FUN_10b74a374(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74a3b0; end: 10b74a4b3; -[SCDynamicCaptionTextColor initWithCoder:] */

undefined1 * FUN_10b74a3b0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a710;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x28) = (double)param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74a4b4; end: 10b74a5ab; -[SCDynamicCaptionTextColor initWithColors:colorStops:colorTransform:colorTransformParameter:colorGradientAngleDegree:] */

undefined1 *
FUN_10b74a4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_11270a710;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74a5ac; end: 10b74a5cf; -[SCDynamicCaptionTextColor copyWithZone:] */

undefined8 FUN_10b74a5ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74a5d0; end: 10b74a66f; -[SCDynamicCaptionTextColor encodeWithCoder:] */

void FUN_10b74a5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f797b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f797d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f797f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f79818);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x28),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f79838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74a670; end: 10b74a71f; -[SCDynamicCaptionTextColor hash] */

undefined8 * FUN_10b74a670(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b74a7fc:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b74a808;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
        if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b74a808;
        }
        goto LAB_10b74a7fc;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b74a808:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b74a720; end: 10b74a823; -[SCDynamicCaptionTextColor isEqual:] */

long FUN_10b74a720(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74a7fc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74a808;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b74a808;
        }
        goto LAB_10b74a7fc;
      }
    }
    lVar4 = 0;
  }
LAB_10b74a808:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b74a824; end: 10b74a82b; -[SCDynamicCaptionTextColor colors] */

undefined8 FUN_10b74a824(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74a82c; end: 10b74a833; -[SCDynamicCaptionTextColor colorStops] */

undefined8 FUN_10b74a82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74a834; end: 10b74a83b; -[SCDynamicCaptionTextColor colorTransform] */

undefined8 FUN_10b74a834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74a83c; end: 10b74a843; -[SCDynamicCaptionTextColor colorTransformParameter] */

undefined8 FUN_10b74a83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b74a844; end: 10b74a84b; -[SCDynamicCaptionTextColor colorGradientAngleDegree] */

undefined8 FUN_10b74a844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b74a84c; end: 10b74a887; -[SCDynamicCaptionTextColor .cxx_destruct] */

void FUN_10b74a84c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74a888; end: 10b74a947; -[SCDynamicCaptionTextPadding initWithCoder:] */

undefined1 * FUN_10b74a888(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a718;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66e40(param_4);
    dVar2 = (double)param_1;
    *(double *)((long)puVar1 + 8) = dVar2;
    func_0x00010bf66e40(param_4);
    dVar2 = (double)SUB84(dVar2,0);
    *(double *)((long)puVar1 + 0x10) = dVar2;
    func_0x00010bf66e40(param_4);
    dVar2 = (double)SUB84(dVar2,0);
    *(double *)((long)puVar1 + 0x18) = dVar2;
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x20) = (double)SUB84(dVar2,0);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74a948; end: 10b74a9a7; -[SCDynamicCaptionTextPadding initWithTopPadding:leftPadding:rightPadding:bottomPadding:] */

void FUN_10b74a948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a718;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 10b74a9a8; end: 10b74a9cb; -[SCDynamicCaptionTextPadding copyWithZone:] */

undefined8 FUN_10b74a9a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74a9cc; end: 10b74aa63; -[SCDynamicCaptionTextPadding encodeWithCoder:] */

void FUN_10b74a9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92ee0((float)dVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110f79858)
  ;
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f79878);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f79898);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f798b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74aa64; end: 10b74ab37; -[SCDynamicCaptionTextPadding hash] */

ulong * FUN_10b74aa64(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
            dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              if (dVar7 <= 2.2250738585072014e-308) {
                dVar7 = 2.2250738585072014e-308;
              }
              puVar6 = (ulong *)(ulong)(ABS((double)puVar3[4] - (double)param_3[4]) < dVar7);
              goto LAB_10b74ac64;
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10b74ac64:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b74ab38; end: 10b74ac7f; -[SCDynamicCaptionTextPadding isEqual:] */

bool FUN_10b74ab38(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
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
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              if (dVar4 <= 2.2250738585072014e-308) {
                dVar4 = 2.2250738585072014e-308;
              }
              bVar1 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
              goto LAB_10b74ac64;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10b74ac64:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b74ac80; end: 10b74ac87; -[SCDynamicCaptionTextPadding topPadding] */

undefined8 FUN_10b74ac80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74ac88; end: 10b74ac8f; -[SCDynamicCaptionTextPadding leftPadding] */

undefined8 FUN_10b74ac88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74ac90; end: 10b74ac97; -[SCDynamicCaptionTextPadding rightPadding] */

undefined8 FUN_10b74ac90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74ac98; end: 10b74ac9f; -[SCDynamicCaptionTextPadding bottomPadding] */

undefined8 FUN_10b74ac98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b74aca0; end: 10b74ad6f; -[SCDynamicCaptionTextShadow initWithCoder:] */

undefined1 * FUN_10b74aca0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a720;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    dVar4 = (double)param_1;
    *(double *)((long)puVar1 + 0x10) = dVar4;
    func_0x00010bf66e40(param_4);
    dVar4 = (double)SUB84(dVar4,0);
    *(double *)((long)puVar1 + 0x18) = dVar4;
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x20) = (double)SUB84(dVar4,0);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74ad70; end: 10b74ae0b; -[SCDynamicCaptionTextShadow initWithColor:xOffset:yOffset:radius:] */

undefined1 *
FUN_10b74ad70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270a720;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74ae0c; end: 10b74ae2f; -[SCDynamicCaptionTextShadow copyWithZone:] */

undefined8 FUN_10b74ae0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74ae30; end: 10b74aec3; -[SCDynamicCaptionTextShadow encodeWithCoder:] */

void FUN_10b74ae30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de8258);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f798d8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f798f8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f79918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b74aec4; end: 10b74af8f; -[SCDynamicCaptionTextShadow hash] */

undefined8 * FUN_10b74aec4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_48;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b74b094:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b74b0a0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
        dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar1 = dVar8 < dVar7;
        }
        if (bVar1) {
          dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
          dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar1 = dVar8 < dVar7;
          }
          if (bVar1) {
            puVar6 = (undefined8 *)puVar3[1];
            if (puVar6 != (undefined8 *)param_3[1]) {
              func_0x00010c071ae0();
              goto LAB_10b74b0a0;
            }
            goto LAB_10b74b094;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b74b0a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b74af90; end: 10b74b0bb; -[SCDynamicCaptionTextShadow isEqual:] */

long FUN_10b74af90(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74b094:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74b0a0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            lVar4 = *(long *)(param_1 + 8);
            if (lVar4 != *(long *)(param_3 + 8)) {
              func_0x00010c071ae0();
              goto LAB_10b74b0a0;
            }
            goto LAB_10b74b094;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b74b0a0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b74b0bc; end: 10b74b0c3; -[SCDynamicCaptionTextShadow color] */

undefined8 FUN_10b74b0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74b0c4; end: 10b74b0cb; -[SCDynamicCaptionTextShadow xOffset] */

undefined8 FUN_10b74b0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74b0cc; end: 10b74b0d3; -[SCDynamicCaptionTextShadow yOffset] */

undefined8 FUN_10b74b0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74b0d4; end: 10b74b0db; -[SCDynamicCaptionTextShadow radius] */

undefined8 FUN_10b74b0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


