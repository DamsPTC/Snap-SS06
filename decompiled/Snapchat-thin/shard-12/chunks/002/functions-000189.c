/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f49930; end: 108f499cb;  */

undefined ** FUN_108f49930(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108f499cc; end: 108f49cb7;  */

void FUN_108f499cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0be8;
  func_0x00010c067fc0();
  puVar7 = (undefined *)0x0;
  if ((long)ppuVar1 < 3) {
    if (ppuVar1 == (undefined **)0x1) {
      puVar7 = PTR_PTR_1126b52b8;
      _objc_alloc(PTR_PTR_1126b52b8);
    }
    else {
      if (ppuVar1 != (undefined **)0x2) goto LAB_108f49c8c;
      puVar7 = PTR_PTR_1126b52b8;
      _objc_alloc(PTR_PTR_1126b52b8);
    }
LAB_108f49c84:
    func_0x00010c000ca0();
  }
  else {
    if (ppuVar1 == (undefined **)0x3) {
      puVar7 = PTR_PTR_1126b52b8;
      _objc_alloc(PTR_PTR_1126b52b8);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                          &PTR____CFConstantStringClassReference_110f0b0f8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                          &PTR____CFConstantStringClassReference_110f0b118);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110f0b0b8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110f0b0d8;
    }
    else {
      if (ppuVar1 != (undefined **)0x4) {
        if (ppuVar1 != (undefined **)0x5) goto LAB_108f49c8c;
        puVar7 = PTR_PTR_1126b52b8;
        _objc_alloc(PTR_PTR_1126b52b8);
        func_0x00010c067fc0();
        func_0x00010c067fc0();
        goto LAB_108f49c84;
      }
      puVar7 = PTR_PTR_1126b52b8;
      _objc_alloc(PTR_PTR_1126b52b8);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                          &PTR____CFConstantStringClassReference_110f0b178);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                          &PTR____CFConstantStringClassReference_110f0b0f8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110f0b138;
      ppuVar4 = &PTR____CFConstantStringClassReference_110f0b158;
    }
    func_0x00010c000ca0(puVar7,param_2,0,ppuVar1,0,ppuVar4,puVar2,puVar3,0,0,0,0,1,0,1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
LAB_108f49c8c:
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108f49cb8; end: 108f49ce3;  */

undefined ** FUN_108f49cb8(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108f49ce4; end: 108f49ea7; -[SCSendToCOFSpotlightCellViewModel initWithCompressed:title:subtitle:iconType:iconTint:iconBackgroundTint:iconHeight:iconWidth:insetLeftRight:insetTopBottom:cellStyle:fontStyle:removeSubtitle:autoApprovedComment:] */

undefined8 *
FUN_108f49ce4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126ff500;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
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
    puVar1[7] = param_9;
    puVar1[8] = param_10;
    puVar1[9] = param_11;
    puVar1[10] = param_12;
    puVar1[0xb] = param_13;
    puVar1[0xc] = param_14;
    *(undefined1 *)((long)puVar1 + 9) = param_15;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108f49ea8; end: 108f49ecb; -[SCSendToCOFSpotlightCellViewModel copyWithZone:] */

undefined8 FUN_108f49ea8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f49ecc; end: 108f49f97; -[SCSendToCOFSpotlightCellViewModel hash] */

ulong * FUN_108f49ecc(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_98;
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
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_98;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f4a0f8:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_108f4a104;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         (((((char)puVar3[1] == (char)param_3[1] && (puVar3[7] == param_3[7])) &&
           (puVar3[8] == param_3[8])) && ((puVar3[9] == param_3[9] && (puVar3[10] == param_3[10]))))
         )) && (puVar3[0xb] == param_3[0xb])) &&
       ((puVar3[0xc] == param_3[0xc] &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      uVar5 = puVar3[2];
      if ((uVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        uVar5 = puVar3[3];
        if ((uVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
          uVar5 = puVar3[4];
          if ((uVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
            uVar5 = puVar3[5];
            if ((uVar5 == param_3[5]) || (func_0x00010c071c60(), (int)uVar5 != 0)) {
              uVar5 = puVar3[6];
              if ((uVar5 == param_3[6]) || (func_0x00010c071c60(), (int)uVar5 != 0)) {
                puVar6 = (ulong *)puVar3[0xd];
                if (puVar6 != (ulong *)param_3[0xd]) {
                  func_0x00010c071ae0();
                  goto LAB_108f4a104;
                }
                goto LAB_108f4a0f8;
              }
            }
          }
        }
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_108f4a104:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f49f98; end: 108f4a11f; -[SCSendToCOFSpotlightCellViewModel isEqual:] */

long FUN_108f49f98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f4a0f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f4a104;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
        (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
       ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071c60(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x68);
                if (lVar3 != *(long *)(param_3 + 0x68)) {
                  func_0x00010c071ae0();
                  goto LAB_108f4a104;
                }
                goto LAB_108f4a0f8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f4a104:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f4a120; end: 108f4a127; -[SCSendToCOFSpotlightCellViewModel compressed] */

undefined1 FUN_108f4a120(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f4a128; end: 108f4a12f; -[SCSendToCOFSpotlightCellViewModel title] */

undefined8 FUN_108f4a128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f4a130; end: 108f4a137; -[SCSendToCOFSpotlightCellViewModel subtitle] */

undefined8 FUN_108f4a130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f4a138; end: 108f4a13f; -[SCSendToCOFSpotlightCellViewModel iconType] */

undefined8 FUN_108f4a138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f4a140; end: 108f4a147; -[SCSendToCOFSpotlightCellViewModel iconTint] */

undefined8 FUN_108f4a140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f4a148; end: 108f4a14f; -[SCSendToCOFSpotlightCellViewModel iconBackgroundTint] */

undefined8 FUN_108f4a148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f4a150; end: 108f4a157; -[SCSendToCOFSpotlightCellViewModel iconHeight] */

undefined8 FUN_108f4a150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f4a158; end: 108f4a15f; -[SCSendToCOFSpotlightCellViewModel iconWidth] */

undefined8 FUN_108f4a158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f4a160; end: 108f4a167; -[SCSendToCOFSpotlightCellViewModel insetLeftRight] */

undefined8 FUN_108f4a160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f4a168; end: 108f4a16f; -[SCSendToCOFSpotlightCellViewModel insetTopBottom] */

undefined8 FUN_108f4a168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f4a170; end: 108f4a177; -[SCSendToCOFSpotlightCellViewModel cellStyle] */

undefined8 FUN_108f4a170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f4a178; end: 108f4a17f; -[SCSendToCOFSpotlightCellViewModel fontStyle] */

undefined8 FUN_108f4a178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f4a180; end: 108f4a187; -[SCSendToCOFSpotlightCellViewModel removeSubtitle] */

undefined1 FUN_108f4a180(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f4a188; end: 108f4a18f; -[SCSendToCOFSpotlightCellViewModel autoApprovedComment] */

undefined8 FUN_108f4a188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f4a190; end: 108f4a1ef; -[SCSendToCOFSpotlightCellViewModel .cxx_destruct] */

void FUN_108f4a190(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f4a1f0; end: 108f4a25f;  */

long FUN_108f4a1f0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e16b98,1,0);
    return param_1;
  }
  return 1;
}



/* Entry: 108f4a260; end: 108f4a297;  */

void FUN_108f4a260(int param_1)

{
  func_0x000107c2aa44(param_1,0);
  if (param_1 == 0) {
    func_0x000108f580cc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f5806c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f4a298; end: 108f4a2bb;  */

long FUN_108f4a298(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uVar5 = 1;
  lVar4 = param_1;
  func_0x000107c3ebd4();
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b1278;
    func_0x000107c4f600(PTR_PTR_1126b1278);
    func_0x000107c61180();
    lVar2 = param_2;
    func_0x000107c43680();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c426e0();
    uVar5 = (uint)lVar3;
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar1);
  }
  if ((((uint)lVar4 & uVar5) == 1) &&
     ((param_1 == 0 || (lVar4 = param_1, func_0x000107c3ebd4(), (int)lVar4 != 0)))) {
    lVar4 = param_1;
    func_0x000107c3ebd4(param_1);
  }
  else {
    lVar4 = 0;
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return lVar4;
}



/* Entry: 108f4a2bc; end: 108f4a443;  */

double FUN_108f4a2bc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain();
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a8f8,0,0);
  uVar2 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aa18,0,0);
  uVar3 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aad8,0,0);
  _objc_release(param_1);
  dVar4 = 0.0;
  if ((((uVar1 & 1) == 0) && ((uVar2 & 1) == 0)) && ((uVar3 & 1) == 0)) {
    if (param_1 == 0) {
      dVar4 = 5.0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c0b5020(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b1b8,5,0);
      dVar4 = (double)(long)uVar1 / 1000.0;
    }
  }
  _objc_release(param_1);
  return dVar4;
}



/* Entry: 108f4a444; end: 108f4a563;  */

undefined8 FUN_108f4a444(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b2d8,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4a564; end: 108f4a593;  */

void FUN_108f4a564(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3db851ec,param_1,PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110f0b4b8,0);
  return;
}



/* Entry: 108f4a594; end: 108f4a623;  */

long FUN_108f4a594(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b298,1,0);
  return (long)(int)param_1;
}



/* Entry: 108f4a624; end: 108f4a7bb;  */

void FUN_108f4a624(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_2 == 0x5a) {
LAB_108f4a660:
    puVar5 = PTR_PTR_1126dca00;
    _objc_alloc_init(PTR_PTR_1126dca00);
    func_0x00010c1b0b20();
  }
  else {
    if (param_1 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_108f4a78c;
    }
    if (param_3 != 0) {
      puVar5 = PTR_PTR_1126b1278;
      func_0x00010c1231a0(PTR_PTR_1126b1278);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bfb2400();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf926c0();
      _objc_release(uVar1);
      _objc_release(puVar5);
      if ((uVar2 & 1) == 0) goto LAB_108f4a660;
    }
    lVar3 = param_1;
    func_0x00010c1195e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126dca00;
    _objc_alloc(PTR_PTR_1126dca00);
    lVar4 = lVar3;
    func_0x00010c296d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar5);
    _objc_release(lVar4);
    _objc_retain(puVar5);
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
LAB_108f4a78c:
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f4a7bc; end: 108f4a8eb;  */

void FUN_108f4a7bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b518,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126dca08;
  _objc_alloc(PTR_PTR_1126dca08);
  uVar2 = uVar3;
  func_0x00010c296d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  func_0x00010c008360(puVar4,param_2,uVar2,&lStack_48);
  lVar1 = lStack_48;
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar1 == 0) {
    puVar5 = puVar4;
    func_0x00010bf92860(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f4a8ec; end: 108f4a8ff;  */

void FUN_108f4a8ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b538,0,0);
  return;
}



/* Entry: 108f4a900; end: 108f4a947;  */

undefined8 FUN_108f4a900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b318,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4a948; end: 108f4a953;  */

undefined ** FUN_108f4a948(void)

{
  return &PTR____CFConstantStringClassReference_110f0b558;
}



/* Entry: 108f4a954; end: 108f4a9db;  */

uint FUN_108f4a954(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 108f4a9dc; end: 108f4aa6b;  */

undefined8 FUN_108f4a9dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b338,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4aa6c; end: 108f4aa7f;  */

void FUN_108f4aa6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b598,0,0);
  return;
}



/* Entry: 108f4aa80; end: 108f4ac87;  */

undefined8 FUN_108f4aa80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  FUN_108f4b814();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b5b8,0,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4ac88; end: 108f4ad5f;  */

long FUN_108f4ac88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b358,0,0);
  _objc_release(param_1);
  return (long)(int)uVar1;
}



/* Entry: 108f4ad60; end: 108f4ae23;  */

double FUN_108f4ad60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  FUN_108f4b814();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b678,0,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (double)(int)uVar2;
}



/* Entry: 108f4ae24; end: 108f4ae37;  */

void FUN_108f4ae24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b6b8,0,0);
  return;
}



/* Entry: 108f4ae38; end: 108f4aec7;  */

undefined8 FUN_108f4ae38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b398,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4aec8; end: 108f4aedb;  */

void FUN_108f4aec8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b6f8,0,0);
  return;
}



/* Entry: 108f4aedc; end: 108f4af23;  */

undefined8 FUN_108f4aedc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b718,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4af24; end: 108f4afab;  */

undefined8 FUN_108f4af24(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0b738;
  if (param_2 != 0x62) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0b758;
  }
  _objc_retain(ppuVar1);
  if (param_1 == 0) {
    uVar2 = 0x42700000;
  }
  else {
    uVar2 = 0x42700000;
    func_0x00010bfb2cc0(0x42700000,param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4afac; end: 108f4afd3;  */

void FUN_108f4afac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b778,0,0);
  return;
}



/* Entry: 108f4afd4; end: 108f4affb;  */

long FUN_108f4afd4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b3f8,4,0);
  return (long)(int)param_1;
}



/* Entry: 108f4affc; end: 108f4b023;  */

void FUN_108f4affc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b418,0,0);
  return;
}



/* Entry: 108f4b024; end: 108f4b06b;  */

undefined8 FUN_108f4b024(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b798,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4b06c; end: 108f4b07f;  */

void FUN_108f4b06c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b7d8,0,0);
  return;
}



/* Entry: 108f4b080; end: 108f4b10f;  */

undefined8 FUN_108f4b080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b7f8,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4b110; end: 108f4b123;  */

void FUN_108f4b110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b838,0,0);
  return;
}



/* Entry: 108f4b124; end: 108f4b223;  */

undefined8 FUN_108f4b124(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b12d0;
  func_0x00010c24bca0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108f4b224; end: 108f4b25f;  */

void FUN_108f4b224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b858,0,0);
  return;
}



/* Entry: 108f4b260; end: 108f4b3e3;  */

undefined8 FUN_108f4b260(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b8d8,0,0);
  uVar2 = param_1;
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b8f8,
                      &PTR____CFConstantStringClassReference_110e2f618,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b918,
                      &PTR____CFConstantStringClassReference_110eb9858,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if ((int)uVar1 != 0) {
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e2f618);
    if (((int)uVar1 == 0) ||
       (uVar1 = uVar3,
       func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110eb9858),
       (uVar1 & 1) == 0)) {
      uVar1 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e2f618);
      if (((int)uVar1 == 0) ||
         (uVar1 = uVar3,
         func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110eb9838),
         (uVar1 & 1) == 0)) {
        uVar1 = uVar2;
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f0b8b8);
        if (((int)uVar1 == 0) ||
           (uVar1 = uVar3,
           func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110eb9858),
           (uVar1 & 1) == 0)) {
          uVar1 = uVar2;
          func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f0b8b8);
          if (((int)uVar1 == 0) ||
             (uVar1 = uVar3,
             func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110eb9838),
             (uVar1 & 1) == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 108f4b3e4; end: 108f4b42b;  */

undefined8 FUN_108f4b3e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b938,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4b42c; end: 108f4b453;  */

long FUN_108f4b42c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b958,500,0);
  return (long)(int)param_1;
}



/* Entry: 108f4b454; end: 108f4b46b;  */

void FUN_108f4b454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b978,0,0);
  return;
}



/* Entry: 108f4b46c; end: 108f4b527;  */

uint FUN_108f4b46c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  func_0x00010bf1f440(param_1);
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b1278;
    func_0x00010c24af60(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bfb2400(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf926c0();
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return ((uint)param_1 | uVar4) & 1;
}



/* Entry: 108f4b528; end: 108f4b56f;  */

undefined8 FUN_108f4b528(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b9b8,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4b570; end: 108f4b60b;  */

undefined8 FUN_108f4b570(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  if ((param_2 == 0x65) || (param_2 == 0x62)) {
    uVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b12d0;
    func_0x00010c0eb160(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f320(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108f4b60c; end: 108f4b633;  */

long FUN_108f4b60c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0b9d8,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f4b634; end: 108f4b647;  */

void FUN_108f4b634(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b9f8,0,0);
  return;
}



/* Entry: 108f4b648; end: 108f4b6d7;  */

undefined8 FUN_108f4b648(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ba18,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4b6d8; end: 108f4b6ff;  */

void FUN_108f4b6d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0ba58,0,0);
  return;
}



/* Entry: 108f4b700; end: 108f4b787;  */

long FUN_108f4b700(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ba78,0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_2 != 0) {
    func_0x00010bf9d480(param_1);
  }
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 108f4b788; end: 108f4b7af;  */

void FUN_108f4b788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f800000,param_1,PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110f0ba98,0);
  return;
}



/* Entry: 108f4b7b0; end: 108f4b7d7;  */

long FUN_108f4b7b0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0bad8,0xffffffff,0)
  ;
  return (long)(int)param_1;
}



/* Entry: 108f4b7d8; end: 108f4b813;  */

void FUN_108f4b7d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b438,0,0);
  return;
}



/* Entry: 108f4b814; end: 108f4b903;  */

void FUN_108f4b814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  puVar2 = PTR_PTR_1126c99b8;
  _objc_alloc_init(PTR_PTR_1126c99b8);
  func_0x00010c1d5760(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0eb4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182be0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f4b904; end: 108f4b90f;  */

bool FUN_108f4b904(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f4b910; end: 108f4b977; +[SCSpotlightSwipeUpTeachingAnimationConfiguration descriptor] */

void FUN_108f4b910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd98d0,
                        &PTR____CFConstantStringClassReference_110f0bb18,&PTR_DAT_1132b0a88,
                        &PTR_s_isEnabled_1132b0aa0,7,0x1c,0x1c);
    puRam0000000113730328 = puVar1;
  }
  return;
}



/* Entry: 108f4b978; end: 108f4b9eb;  */

undefined8 FUN_108f4b978(long param_1)

{
  if (((0x29 < param_1 - 0x42U) || ((1L << (param_1 - 0x42U & 0x3f) & 0x3c9a1bc0f91U) == 0)) &&
     (param_1 != 0x17)) {
    return 0;
  }
  return 1;
}



/* Entry: 108f4b9ec; end: 108f4bab3;  */

undefined8 FUN_108f4b9ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = 1;
  uVar2 = param_1 - 0x17;
  if (uVar2 < 0x40) {
    if ((1L << (uVar2 & 0x3f) & 0xc000880000000041U) != 0) goto LAB_108f4ba98;
    if (uVar2 == 7) {
      puVar1 = PTR_PTR_1126c2a20;
      func_0x00010c24b800(PTR_PTR_1126c2a20);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010bf1f320(param_2);
      _objc_release(puVar1);
      goto LAB_108f4ba98;
    }
  }
  if ((5 < param_1 - 0x65U) || ((1L << (param_1 - 0x65U & 0x3f) & 0x31U) == 0)) {
    uVar3 = 0;
  }
LAB_108f4ba98:
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 108f4bab4; end: 108f4bad7;  */

undefined ** FUN_108f4bab4(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111833c8;
  if (param_1 != 0x107 && param_1 != 0x102) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111833e0;
  }
  return ppuVar1;
}



/* Entry: 108f4bad8; end: 108f4bc07;  */

void FUN_108f4bad8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar4 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = param_1;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar2 == 0) {
      lVar4 = param_1;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar3;
        func_0x00010c245680(lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar3);
    }
    else {
      lVar4 = lVar2;
      func_0x00010c245680(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  else {
    lVar4 = lVar1;
    func_0x00010c245680(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108f4bc08; end: 108f4bc5b;  */

void FUN_108f4bc08(long param_1)

{
  long lVar1;
  
  FUN_108f4bad8();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c31908(param_1,&PTR___NSConcreteGlobalBlock_110acdae0);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f4bc5c; end: 108f4bc63;  */

void FUN_108f4bc5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 108f4bc64; end: 108f4be57;  */

void FUN_108f4bc64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_108f4be58;
  uStack_60 = 0x108f4be68;
  uStack_58 = 0;
  lVar1 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0bf680(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  if (puStack_78[5] != 0) {
    lVar1 = puStack_78[5];
  }
  _objc_retain(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f4be58; end: 108f4be6f;  */

void FUN_108f4be58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f4be70; end: 108f4c1cf;  */

void FUN_108f4be70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c6d78;
  _objc_retain(param_2);
  func_0x00010bf82080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d80;
  func_0x00010bf81c20(PTR_PTR_1126c6d80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2b9a60(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c6d88;
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11abc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba3c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f4c1d0; end: 108f4c3cf;  */

void FUN_108f4c1d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  lVar7 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c245680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x000107c31908();
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar7;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010c245680(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x000107c31908();
    _objc_release(lVar7);
    _objc_release(lVar4);
  }
  lVar7 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar2;
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x00010c245680(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x000107c31908();
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  lVar2 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010afefd10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar7;
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x00010c245680(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x000107c31908();
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108f4c3d0; end: 108f4c3ef;  */

void FUN_108f4c3d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 108f4c3f0; end: 108f4ca83;  */

void FUN_108f4c3f0(undefined *param_1,long param_2,undefined *param_3,undefined8 param_4,
                  uint param_5,undefined *param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auStack_1f8 [384];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  _objc_retain(param_2);
  puVar12 = auStack_1f8;
  uVar13 = 0x10;
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      _objc_release(param_2);
      puVar6 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_retain(uVar13);
        _objc_retain(puVar12);
        _objc_retain(param_1);
        func_0x00010c14de00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = param_1;
        func_0x00010c269d40(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        puVar6 = puVar4;
        func_0x00010bf225e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        _objc_release(puVar12);
        _objc_release(puVar4);
        _objc_release(puVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
      return;
    }
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      puVar18 = *(undefined **)(lVar16 * 8);
      puVar6 = puVar18;
      func_0x00010c259740();
      puVar7 = param_1;
      func_0x00010c282800();
      if (puVar6 == puVar7) {
        func_0x00010befa120(puVar4);
      }
      else {
        puVar6 = puVar18;
        FUN_108f4c1d0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar18);
        _objc_retain(puVar6);
        _objc_retain(param_3);
        if ((puVar6 == (undefined *)0x0) ||
           (puVar7 = puVar6, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) {
          puVar7 = puVar18;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010afefbe8();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          if (puVar8 == (undefined *)0x0) {
            puVar7 = param_3;
            func_0x00010c121820();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar6;
            if (((long)param_6 < 1) || (puVar9 = puVar6, func_0x00010bf529e0(), puVar9 <= param_6))
            {
              uVar19 = 0;
              uVar20 = 0;
              uVar21 = 0;
              uVar22 = 0;
              uVar23 = 0;
              uVar24 = 0;
              uVar25 = 0;
              uVar26 = 0;
              _objc_retain(puVar6);
              puVar9 = puVar6;
              func_0x00010bf52a60();
              lVar2 = lRam0000000000000000;
              if (puVar9 == (undefined *)0x0) {
                puVar17 = (undefined *)0x1;
              }
              else {
                do {
                  puVar15 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar2) {
                      _objc_enumerationMutation(puVar6);
                    }
                    puVar11 = puVar7;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar17 = puVar11;
                    func_0x00010c29ea60();
                    _objc_release(puVar11);
                    if ((int)puVar17 == 0) goto LAB_108f4c8dc;
                    puVar15 = puVar15 + 1;
                  } while (puVar9 != puVar15);
                  puVar9 = puVar6;
                  func_0x00010bf52a60();
                } while (puVar9 != (undefined *)0x0);
                puVar17 = (undefined *)0x1;
              }
            }
            else {
              uVar19 = 0;
              uVar20 = 0;
              uVar21 = 0;
              uVar22 = 0;
              uVar23 = 0;
              uVar24 = 0;
              uVar25 = 0;
              uVar26 = 0;
              _objc_retain(puVar6);
              puVar9 = puVar6;
              func_0x00010bf52a60();
              lVar2 = lRam0000000000000000;
              if (puVar9 == (undefined *)0x0) {
                puVar17 = (undefined *)0x0;
              }
              else {
                lVar14 = 0;
                do {
                  puVar17 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar2) {
                      _objc_enumerationMutation(puVar6);
                    }
                    puVar15 = puVar7;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar15;
                    func_0x00010c29ea60();
                    _objc_release(puVar15);
                    if (((int)puVar11 != 0) && (lVar14 = lVar14 + 1, (long)param_6 <= lVar14)) {
                      puVar17 = (undefined *)0x1;
                      goto LAB_108f4c8dc;
                    }
                    puVar17 = puVar17 + 1;
                  } while (puVar9 != puVar17);
                  puVar9 = puVar6;
                  func_0x00010bf52a60();
                } while (puVar9 != (undefined *)0x0);
                puVar17 = (undefined *)0x0;
              }
            }
LAB_108f4c8dc:
            _objc_release(puVar10);
            _objc_release(puVar7);
          }
          else {
            puVar7 = puVar18;
            func_0x00010c0741a0();
            if (((ulong)puVar7 & 1) == 0) {
              puVar7 = puVar8;
              func_0x00010c2a2900();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar7;
              func_0x00010c29ae20();
              _objc_release(puVar7);
              if (puVar10 == (undefined *)0x0) {
                puVar7 = puVar8;
                func_0x00010c2a2900();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar7;
                func_0x00010c08ac00();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar10;
                func_0x00010c08fa60();
                _objc_release(puVar10);
                _objc_release(puVar7);
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                if (puVar9 == (undefined *)0x0) {
                  func_0x00010bf8c980(puVar8);
                  func_0x00010c0df7c0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar10;
                  func_0x00010c25d700();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar10);
                  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  puStack_78 = puVar7;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = param_3;
                  func_0x00010c121860();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar9);
                  puVar9 = puVar10;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar9 == (undefined *)0x0) {
LAB_108f4c8d0:
                    puVar17 = (undefined *)0x0;
                  }
                  else {
                    func_0x00010c270aa0(puVar9);
                    bVar3 = false;
                    if (!NAN((double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23
                                                  ,CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))))))))) {
                      bVar3 = (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(
                                                  uVar23,CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(
                                                  uVar20,uVar19))))))) == 0.0;
                    }
                    if (((bVar3) && (puVar17 = puVar9, func_0x00010c25e5e0(), (int)puVar17 == 0)) &&
                       (puVar17 = puVar9, func_0x00010bf08ca0(), (int)puVar17 == 0))
                    goto LAB_108f4c8d0;
                    puVar17 = (undefined *)0x1;
                  }
                  _objc_release(puVar9);
                  goto LAB_108f4c8dc;
                }
              }
              puVar17 = (undefined *)0x1;
            }
            else {
              puVar17 = (undefined *)0x1;
            }
          }
          _objc_release(puVar8);
          _objc_release(param_3);
          _objc_release(puVar6);
          _objc_release(puVar18);
          if ((param_5 & 1) != 0) {
            if ((int)puVar17 != 0) goto LAB_108f4c920;
LAB_108f4c968:
            puVar8 = puVar18;
            func_0x00010c0741a0();
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if ((int)puVar8 != 0) {
              func_0x00010c259740(puVar18);
              func_0x00010c0df880(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4b900(param_4);
              _objc_release(puVar7);
            }
          }
          if ((((ulong)puVar17 & 1) == 0) && (func_0x00010c0741a0(), ((ulong)puVar18 & 1) == 0)) {
            func_0x00010befa120(puVar4);
          }
        }
        else {
          _objc_release(param_3);
          _objc_release(puVar6);
          _objc_release(puVar18);
          if ((param_5 & 1) != 0) {
LAB_108f4c920:
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c259740(puVar18);
            func_0x00010c0df880(puVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = param_4;
            func_0x00010bf4b900();
            _objc_release(puVar7);
            if ((int)uVar13 != 0) {
              puVar17 = (undefined *)0x1;
              goto LAB_108f4c968;
            }
          }
        }
        _objc_release(puVar6);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar5);
    puVar12 = auStack_1f8;
    uVar13 = 0x10;
    lVar5 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108f4ca84; end: 108f4cba3;  */

void FUN_108f4ca84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010bf225e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f4cba4; end: 108f4cbdf;  */

void FUN_108f4cba4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f4cbe0; end: 108f4d2a3;  */

void FUN_108f4cbe0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  ulong uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  ulong uStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1bc;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined4 uStack_1a4;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126dca10;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010bf454e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  FUN_108f51d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bf82560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82a80();
  puVar4 = param_1;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c080120();
  ppuStack_230 = (undefined **)0x0;
  puStack_238 = (undefined *)((ulong)puStack_238 & 0xffffffffffffff00);
  uStack_240 = 0;
  puStack_248 = (undefined *)((ulong)puStack_248 & 0xffffffffffff0000);
  ppuStack_250 = (undefined **)0x2;
  uStack_258 = CONCAT71((int7)(uStack_258 >> 8),(char)puVar5) & 0xffffffffff0000ff;
  puStack_260 = (undefined *)0x0;
  puStack_278 = (undefined *)0x0;
  uStack_280 = 0;
  ppuStack_268 = (undefined **)0x0;
  puStack_270 = (undefined *)0x0;
  func_0x00010c000c40();
  puStack_148 = puVar1;
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_150 = param_1;
  func_0x00010bf82200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar15 = *plStack_130;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(param_1);
        }
        uVar14 = *(undefined8 *)(lStack_138 + (long)puVar13 * 8);
        puVar3 = PTR_PTR_1126d50b8;
        _objc_alloc(PTR_PTR_1126d50b8);
        uVar6 = uVar14;
        func_0x00010c241220(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20(uVar14);
        func_0x00010bf8b160(uVar14);
        func_0x00010c047c20(puVar3);
        _objc_release(uVar6);
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar2 = param_1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126d50c0;
  _objc_alloc();
  puVar4 = puStack_150;
  puVar13 = puStack_150;
  puStack_160 = puVar2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  puStack_178 = puVar13;
  func_0x00010bf82200();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar2;
  func_0x00010bf529e0();
  puVar13 = puVar4;
  puStack_180 = puVar2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar13;
  func_0x00010c0822a0();
  puVar3 = puVar4;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c1057a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf82200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c0ed760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_178;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0xffffffffffffffff;
  uVar6 = 0;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puStack_208 = (undefined *)0x0;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_220 = uStack_220 & 0xffffffffffffff00;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110daafd8;
  uStack_228 = 0;
  uStack_240 = uStack_240 & 0xffffffffffffff00;
  ppuStack_250 = &PTR____CFConstantStringClassReference_110daafd8;
  uStack_258 = (ulong)CONCAT61(uStack_258._2_6_,(char)puVar13) << 8;
  ppuStack_268 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0c78;
  puStack_260 = puStack_148;
  puStack_270 = puStack_180;
  uStack_280 = uStack_280 & 0xffffffffffffff00;
  puStack_278 = puVar1;
  puStack_248 = puVar3;
  puStack_238 = puVar5;
  puStack_1e8 = puVar11;
  func_0x00010c01ff00();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_158);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c2098;
  _objc_alloc();
  puVar13 = puVar4;
  puStack_180 = puVar2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar13;
  FUN_108f51d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  puStack_188 = puVar13;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar2;
  func_0x00010bf82a80();
  puVar13 = puVar4;
  puStack_198 = puVar2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar13;
  func_0x00010c080120();
  uStack_1a4 = SUB84(puVar13,0);
  puVar5 = PTR_PTR_1126c6d88;
  func_0x00010c24c2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar2;
  func_0x00010c07d8e0();
  uStack_1bc = SUB84(puVar2,0);
  puVar7 = puVar4;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar7;
  func_0x00010c11ce20();
  puVar2 = puVar4;
  func_0x00010bf82200();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar2;
  func_0x00010c08a7a0();
  puVar8 = puVar4;
  func_0x00010bf82200();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c24be20();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar10 = puVar4;
  func_0x00010bf82200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24b580();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_160;
  puVar13 = puStack_188;
  uStack_1e0 = 0;
  puStack_1e8 = (undefined *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffffffffff00;
  uStack_1f8 = 0;
  uStack_200 = uStack_200 & 0xffffffffffffff00;
  uStack_210 = CONCAT71(uStack_210._1_7_,(char)puVar9);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_228 = uStack_228 & 0xffffffffffff0000;
  ppuStack_230 = (undefined **)0x0;
  puStack_238 = (undefined *)0x0;
  uStack_240 = 0;
  puStack_248 = (undefined *)
                ((ulong)(CONCAT41((int)((ulong)puStack_248 >> 0x20),(char)puVar7) & 0xffffff00ff) <<
                0x18);
  ppuStack_250 = (undefined **)0x0;
  uStack_258 = 0;
  puStack_270 = (undefined *)0x0;
  puStack_278 = (undefined *)0x0;
  puStack_248 = (undefined *)((ulong)CONCAT61(puStack_248._2_6_,(char)uStack_1bc) << 8);
  puStack_260 = puStack_160;
  uStack_280 = uStack_280 & 0xffffffffffffff00;
  ppuStack_268 = (undefined **)puVar5;
  puStack_208 = puVar2;
  func_0x00010c000c60(0,0,uVar6,0);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a0);
  _objc_release(puStack_190);
  _objc_release(puStack_178);
  _objc_release(puVar5);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puVar13);
  _objc_release(puStack_158);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puStack_148);
  puVar2 = puVar4;
  _objc_release();
  puVar13 = puStack_180;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puStack_2a0 = puVar3;
    puStack_298 = puVar4;
    pcStack_288 = FUN_108f4d2a4;
    puStack_2c0 = puVar11;
    puStack_2b8 = puVar10;
    puStack_2b0 = puVar12;
    puStack_2a8 = puVar1;
    puStack_290 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar1 = puVar2;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c08fa60();
    _objc_release(puVar13);
    _objc_release(puVar1);
    if (puVar3 == (undefined *)0x0) {
      puStack_2e8 = &uStack_2f0;
      uStack_2f0 = 0;
      uStack_2e0 = 0x3032000000;
      pcStack_2d8 = FUN_108f4be58;
      uStack_2d0 = 0x108f4be68;
      puStack_2c8 = (undefined *)0x0;
      puVar1 = puVar2;
      func_0x00010c259560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf680();
      _objc_release(puVar1);
      puVar13 = (undefined *)puStack_2e8[5];
      _objc_retain(puVar13);
      __Block_object_dispose(&uStack_2f0,8);
      puVar1 = puStack_2c8;
    }
    else {
      puVar1 = puVar2;
      func_0x00010c25a160(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108f4d2a4; end: 108f4d4a3;  */

void FUN_108f4d2a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_108f4be58;
    uStack_50 = 0x108f4be68;
    lStack_48 = 0;
    lVar1 = param_1;
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf680();
    _objc_release(lVar1);
    lVar3 = puStack_68[5];
    _objc_retain(lVar3);
    __Block_object_dispose(&uStack_70,8);
    lVar1 = lStack_48;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108f4d4a4; end: 108f4d4e3;  */

void FUN_108f4d4a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f4d4e4; end: 108f4d88b;  */

void FUN_108f4d4e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f4d88c; end: 108f4d8d3;  */

void FUN_108f4d88c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0bb38);
  if ((int)param_1 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e12b38;
    _objc_retain(&PTR____CFConstantStringClassReference_110e12b38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108f4d8d4; end: 108f4daff;  */

void FUN_108f4d8d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108f4be58;
  uStack_50 = 0x108f4be68;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar2 = param_1;
  puStack_48 = puVar1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar5 = puStack_68[5];
    lVar2 = param_1;
    func_0x00010c25a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(lVar2);
  uVar5 = puStack_68[5];
  func_0x00010bf51e00(uVar5);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108f4db00; end: 108f4db47;  */

void FUN_108f4db00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f4db48; end: 108f4dccb;  */

void FUN_108f4db48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar9 = *(long *)(lVar11 * 8);
      lVar3 = lVar9;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
        func_0x00010bf5b480();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar10);
        _objc_release(lVar3);
        _objc_release(lVar9);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  func_0x00010c11af80(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b1e0();
  func_0x00010c0df7c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 108f4dccc; end: 108f4ddf3;  */

void FUN_108f4dccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c11af80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b1e0();
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f4ddf4; end: 108f4df77;  */

void FUN_108f4ddf4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf82200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar9 = *(long *)(lVar11 * 8);
      lVar3 = lVar9;
      func_0x00010bf5b480();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
        func_0x00010bf5b480();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar10);
        _objc_release(lVar3);
        _objc_release(lVar9);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010c2a4bc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c25d0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(lVar2);
  puVar6 = puVar5;
  func_0x00010c25cfa0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c08fa60(puVar6);
  puVar7 = puVar6;
  func_0x00010c25cfe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108f4df78; end: 108f4e18f;  */

void FUN_108f4df78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010c2a4bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110f0bb58,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60(uVar2);
  puVar4 = puVar1;
  func_0x00010c25cfa0(puVar1,param_2,uVar2,0,0,uVar3,
                      &PTR____CFConstantStringClassReference_110db2db8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = puVar4;
  func_0x00010c08fa60(puVar4);
  puVar6 = puVar4;
  func_0x00010c25cfe0(puVar4,param_2,&PTR____CFConstantStringClassReference_110f0bb78,
                      &PTR____CFConstantStringClassReference_110db2db8,0x400,0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f4e190; end: 108f4e203; -[SCOperaDictionaryBackedPageProperties initWithDictionary:] */

undefined1 * FUN_108f4e190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff508;
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



/* Entry: 108f4e204; end: 108f4e28b; -[SCOperaDictionaryBackedPageProperties pageId] */

void FUN_108f4e204(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b2368;
  func_0x00010c086280(PTR_PTR_1126b2368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4e28c; end: 108f4e313; -[SCOperaDictionaryBackedPageProperties pageAccessibilityLabel] */

void FUN_108f4e28c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b2368;
  func_0x00010c086260(PTR_PTR_1126b2368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


