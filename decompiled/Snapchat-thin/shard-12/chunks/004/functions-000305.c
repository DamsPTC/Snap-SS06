/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109133d94; end: 109133d9b; -[SCDynamicGeoFilterResource setMinRefreshInterval:] */

void FUN_109133d94(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 109133d9c; end: 109133de3; -[SCDynamicGeoFilterResource .cxx_destruct] */

void FUN_109133d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109133de4; end: 109134203; -[SCDynamicGeoFilterTextResource hashableValuesFromDisplayParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ***
FUN_109133de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined **param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 in_x4;
  undefined1 in_w5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar20;
  undefined8 uVar21;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_112781d0c;
  if (*(long *)((long)param_9 + lVar20) == 0) {
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_109133fe4;
  }
  puVar2 = PTR__OBJC_CLASS___CIColor_1126c9738;
  _objc_alloc();
  uStack_f8 = 0;
  param_2 = 0;
  param_3 = 0;
  param_4 = 0;
  func_0x00010c03d7c0();
  uVar3 = *(ulong *)((long)param_9 + lVar20);
  func_0x00010c229f40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CIColor_1126c9738;
  _objc_opt_class(PTR__OBJC_CLASS___CIColor_1126c9738);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  _objc_release(uVar3);
  puVar5 = *(undefined **)((long)param_9 + lVar20);
  func_0x00010c229f40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  if ((uVar4 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_class(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar7);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___CIColor_1126c9738;
    if (((ulong)puVar6 & 1) != 0) {
      puVar7 = *(undefined **)((long)param_9 + lVar20);
      func_0x00010c229f40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
LAB_109133f3c:
      func_0x00010bf41520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      goto LAB_109133f58;
    }
    lVar8 = *(long *)((long)param_9 + lVar20);
    func_0x00010c229f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___CIColor_1126c9738;
    if (lVar8 != 0) {
      puVar7 = *(undefined **)((long)param_9 + lVar20);
      func_0x00010c229f40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109133f3c;
    }
  }
  else {
LAB_109133f58:
    _objc_release(puVar7);
    puVar2 = puVar5;
  }
  ppuStack_d0 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_100 = *(undefined8 *)((long)param_9 + lVar20);
  func_0x00010c229fe0();
  _NSStringFromCGSize();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229f20(*(undefined8 *)((long)param_9 + lVar20));
  puStack_f0 = puVar2;
  func_0x00010c25d6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_f0);
  _objc_release(uStack_100);
  _objc_release(puVar2);
LAB_109133fe4:
  puStack_b8 = PTR_PTR_1127007c8;
  pppuVar9 = &ppuStack_c0;
  ppuStack_c0 = param_9;
  _objc_msgSendSuper2(pppuVar9,PTR_s_hashableValuesFromDisplayParamet_1125d54a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)((long)param_9 + (long)_DAT_112781d10));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)((long)param_9 + (long)_DAT_112781d14);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar7;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CIColor_1126c9738;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (*(undefined ***)((long)param_9 + (long)_DAT_112781d18) != (undefined **)0x0) {
    ppuStack_a0 = *(undefined ***)((long)param_9 + (long)_DAT_112781d18);
  }
  lVar20 = *(long *)((long)param_9 + (long)_DAT_112781d1c);
  puStack_a8 = puVar10;
  func_0x00010bdc0fe0();
  if (lVar20 == 0) {
    puStack_e8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
  }
  func_0x00010bf41520();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010c25d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar11;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = ppuStack_d0;
  uVar19 = 6;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  pppuVar15 = pppuVar9;
  puVar18 = puVar14;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar5);
  if (lVar20 == 0) {
    _objc_release(puStack_e8);
  }
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(pppuVar9);
  ppuVar16 = ppuStack_d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar15);
    return pppuVar15;
  }
  ___stack_chk_fail();
  puVar5 = puStack_b0;
  ppuVar1 = ppuStack_c0;
  _objc_retain(puVar18);
  _objc_retain(uVar19);
  _objc_retain(in_x4);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uStack_100);
  _objc_retain(uStack_f8);
  _objc_retain(ppuStack_d0);
  _objc_retain(pppuVar9);
  _objc_retain(ppuVar1);
  puStack_1b0 = PTR_PTR_1127007c8;
  pppuVar15 = &ppuStack_1b8;
  ppuStack_1b8 = ppuVar16;
  _objc_msgSendSuper2(param_4,param_5,param_6,param_7,param_8,puVar7,pppuVar15,
                      PTR_s_initWithlayout_source_resourceId_1125f6848,puStack_f0,puStack_e8,puVar2,
                      puVar5);
  puVar5 = puStack_b8;
  if (pppuVar15 != (undefined ***)0x0) {
    *(undefined8 *)((long)pppuVar15 + (long)_DAT_112781d10) = uVar21;
    *(undefined8 *)((long)pppuVar15 + (long)_DAT_112781d14) = param_2;
    lVar20 = (long)_DAT_112781d18;
    _objc_retain(puVar18);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined **)((long)pppuVar15 + lVar20) = puVar18;
    _objc_release(uVar21);
    lVar20 = (long)_DAT_112781d24;
    _objc_retain(uVar19);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = uVar19;
    _objc_release(uVar21);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf414e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)pppuVar15 + (long)_DAT_112781d1c);
    *(undefined **)((long)pppuVar15 + (long)_DAT_112781d1c) = puVar7;
    _objc_release(uVar21);
    _objc_release(puVar2);
    *(undefined1 *)((long)pppuVar15 + (long)_DAT_112781d28) = in_w5;
    lVar20 = (long)_DAT_112781d0c;
    _objc_retain(in_x6);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = in_x6;
    _objc_release(uVar21);
    lVar20 = (long)_DAT_112781d2c;
    _objc_retain(in_x7);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = in_x7;
    _objc_release(uVar21);
    lVar20 = (long)_DAT_112781d30;
    _objc_retain(uStack_100);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = uStack_100;
    _objc_release(uVar21);
    pppuVar17 = pppuVar15;
    _objc_opt_class();
    func_0x00010becb360();
    *(undefined ****)((long)pppuVar15 + (long)_DAT_112781d20) = pppuVar17;
    lVar20 = (long)_DAT_112781d34;
    _objc_retain(ppuStack_d0);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined ***)((long)pppuVar15 + lVar20) = ppuStack_d0;
    _objc_release(uVar21);
    lVar20 = (long)_DAT_112781d38;
    _objc_retain(pppuVar9);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined ****)((long)pppuVar15 + lVar20) = pppuVar9;
    _objc_release(uVar21);
    lVar20 = (long)_DAT_112781d3c;
    _objc_retain(ppuVar1);
    uVar21 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined ***)((long)pppuVar15 + lVar20) = ppuVar1;
    _objc_release(uVar21);
    *(undefined **)((long)pppuVar15 + (long)_DAT_112781d40) = puVar5;
  }
  _objc_release(ppuVar1);
  _objc_release(pppuVar9);
  _objc_release(ppuStack_d0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x4);
  _objc_release(uVar19);
  _objc_release(puVar18);
  return pppuVar15;
}



/* Entry: 109134204; end: 10913452b; -[SCDynamicGeoFilterTextResource initWithfontSize:maxFontSize:fontURL:staticText:fontColor:fontColorAlpha:autoResizeEnabled:shadow:fallbackText:capitalization:alignment:layout:source:resourceId:rotation:minRefreshInterval:type:dynamicText:targetDatetime:targetDateTimeDirection:fallbackMethod:filterId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_109134204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_b0 = PTR_PTR_1127007c8;
  puVar1 = &uStack_b8;
  uStack_b8 = param_9;
  _objc_msgSendSuper2(param_4,param_5,param_6,param_7,param_8,param_21,puVar1,
                      PTR_s_initWithlayout_source_resourceId_1125f6848,param_19,param_20,param_22,
                      param_27);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d10) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d14) = param_2;
    lVar6 = (long)_DAT_112781d18;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112781d24;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d1c);
    *(undefined **)((long)puVar1 + (long)_DAT_112781d1c) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781d28) = param_14;
    lVar6 = (long)_DAT_112781d0c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_15;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112781d2c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112781d30;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_17;
    _objc_release(uVar2);
    puVar5 = puVar1;
    _objc_opt_class();
    func_0x00010becb360();
    *(undefined8 **)((long)puVar1 + (long)_DAT_112781d20) = puVar5;
    lVar6 = (long)_DAT_112781d34;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_23;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112781d38;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_24;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112781d3c;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_25;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d40) = param_26;
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 10913452c; end: 1091349d3; -[SCDynamicGeoFilterTextResource initWithDictionary:filterId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10913452c(float param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1127007c8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithDictionary_filterId__1125e0b40,param_4,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar12 = (double)param_1;
    *(double *)((long)puVar1 + (long)_DAT_112781d10) = dVar12;
    _objc_release(lVar3);
    fVar11 = SUB84(dVar12,0);
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar12 = (double)fVar11;
    *(double *)((long)puVar1 + (long)_DAT_112781d14) = dVar12;
    _objc_release(lVar3);
    fVar11 = SUB84(dVar12,0);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d18);
    *(long *)((long)puVar1 + (long)_DAT_112781d18) = lVar4;
    _objc_release(uVar9);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d24);
    *(long *)((long)puVar1 + (long)_DAT_112781d24) = lVar4;
    _objc_release(uVar9);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d34);
    *(long *)((long)puVar1 + (long)_DAT_112781d34) = lVar4;
    _objc_release(uVar9);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d38);
    *(long *)((long)puVar1 + (long)_DAT_112781d38) = lVar4;
    _objc_release(uVar9);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d3c);
    *(long *)((long)puVar1 + (long)_DAT_112781d3c) = lVar4;
    _objc_release(uVar9);
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf415c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      dVar12 = 1.0;
    }
    else {
      lVar4 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar12 = 1.0;
      if (0.0 < fVar11) {
        lVar6 = lVar2;
        func_0x00010c0e00e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar12 = (double)fVar11;
        _objc_release(lVar6);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    puVar7 = puVar5;
    func_0x00010bf414e0(dVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d1c);
    *(undefined **)((long)puVar1 + (long)_DAT_112781d1c) = puVar7;
    _objc_release(uVar9);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_112781d28) = (char)lVar4;
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar1;
    func_0x00010c0f45e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d0c);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112781d0c) = puVar8;
    _objc_release(uVar9);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d2c);
    *(long *)((long)puVar1 + (long)_DAT_112781d2c) = lVar3;
    _objc_release(uVar9);
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d30);
    *(long *)((long)puVar1 + (long)_DAT_112781d30) = lVar3;
    _objc_release(uVar9);
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010becb360();
    *(undefined1 **)((long)puVar1 + (long)_DAT_112781d20) = puVar8;
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010b781624();
    lVar10 = (long)_DAT_112781d40;
    *(long *)((long)puVar1 + lVar10) = lVar6;
    _objc_release(lVar4);
    if (*(long *)((long)puVar1 + lVar10) == 0) {
      *(undefined8 *)((long)puVar1 + lVar10) = 0xffffffffdd115c6a;
    }
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091349d4; end: 1091349f3; +[SCDynamicGeoFilterTextResource textAlignmentToString:] */

undefined * FUN_1091349d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    return (&PTR_PTR_110addbd0)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 1091349f4; end: 109134a6f; +[SCDynamicGeoFilterTextResource _textAlignmentFromString:] */

undefined8 FUN_1091349f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110db4498,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e8f278,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e8f298,param_2,param_3);
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 109134a70; end: 109134c0f; -[SCDynamicGeoFilterTextResource parseShadow:] */

void FUN_109134a70(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  
  puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_alloc_init(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110dbf658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf415c0(puVar2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(puVar4,param_3,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f23318);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar6 = (double)param_1;
    func_0x00010c1fe720(dVar6,puVar4);
    fVar5 = SUB84(dVar6,0);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f23338);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar6 = (double)fVar5;
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f23338);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar3 = lVar1;
    func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110dbf2b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c1fe7a0(dVar6,(double)fVar5,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109134c10; end: 109134ea3; -[SCDynamicGeoFilterTextResource initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109134c10(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127007c8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCoder__1125dd730,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d24);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d24) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d18);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d1c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d1c) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    dVar5 = (double)param_1;
    *(double *)((long)puVar1 + (long)_DAT_112781d10) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66f40();
    fVar4 = SUB84(dVar5,0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d20) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781d28) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d0c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d0c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d2c) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + (long)_DAT_112781d14) = (double)fVar4;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d44);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d44) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d34) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d38);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d3c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d3c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d30);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109134ea4; end: 109135067; -[SCDynamicGeoFilterTextResource encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109134ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_encodeWithCoder__1125c2658;
  puStack_38 = PTR_PTR_1127007c8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf92ee0((float)*(double *)(param_1 + _DAT_112781d10),param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf92fc0(param_3);
  func_0x00010bf92da0(param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf92ee0((float)*(double *)(param_1 + _DAT_112781d14),param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 109135068; end: 109135083; -[SCDynamicGeoFilterTextResource getUIImagesWithCanvasSize:completion:performerQueue:contextData:dynamicContextProperties:displayName:] */

void FUN_109135068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcb850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getUIImagesWithCanvasSize_preloa_1125d07b8,0,param_3,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 109135084; end: 10913541b; -[SCDynamicGeoFilterTextResource getUIImagesWithCanvasSize:preloadedText:completion:performerQueue:contextData:dynamicContextProperties:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109135084(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (*(long *)(param_3 + _DAT_112781d18) != 0) {
    if (lRam0000000113730ae8 != -1) {
      func_0x000107c27d9c(0x113730ae8,&PTR___NSConcreteGlobalBlock_110addbb0);
    }
    if ((bRam0000000113730ae0 & 1) == 0) {
      puVar1 = PTR_PTR_1126b1058;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010bfadea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b360();
      _objc_release(lVar2);
      func_0x000107c3121c();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bcff0);
      lVar3 = lVar2;
      func_0x00010beecc40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010bfe63a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_initWeak(auStack_78,param_3);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      _objc_copyWeak(auStack_90,auStack_78);
      _objc_retain(param_6);
      uStack_88 = param_1;
      uStack_80 = param_2;
      _objc_retain(param_5);
      _objc_retain(param_8);
      _objc_retain(param_9);
      _objc_retain(param_10);
      func_0x00010bfa6960(0x410fa40000000000,lVar4);
      _objc_release(puVar5);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_5);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_90);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_78);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(puVar1);
      goto LAB_10913538c;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(*(undefined8 *)(param_3 + _DAT_112781d10),PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be378e0(param_1,param_2,param_3);
  _objc_release(puVar1);
LAB_10913538c:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10913541c; end: 109135423;  */

void FUN_10913541c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 109135424; end: 1091355b7;  */

void FUN_109135424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be29ea0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    _objc_release(lVar1);
  }
  else {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1091355b8;
    puStack_98 = &UNK_110addae0;
    _objc_copyWeak(auStack_58,param_1 + 0x50);
    _objc_retain(param_2);
    uStack_90 = param_2;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uStack_88 = param_4;
    _objc_retain(uVar2);
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = uVar3;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = uVar3;
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    func_0x000107c27d8c(lVar1,&puStack_b0);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_60);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1091355b8; end: 109135607;  */

void FUN_1091355b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be29ea0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109135608; end: 1091357bf; -[SCDynamicGeoFilterTextResource renderCacheComponentKeyWithContextData:dynamicContextProperties:userName:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109135608(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined **param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined **ppuStack_f8;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_5;
  lVar11 = param_6;
  lVar12 = param_7;
  lVar13 = param_8;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar14 = *(long *)(param_3 + _DAT_112781d24);
  if (lVar14 == 0) {
    if (*(long *)(param_3 + _DAT_112781d34) == 0) {
      func_0x00010bfabc80(param_3);
      puVar15 = (undefined *)0x0;
      lVar14 = 0;
    }
    else {
      lVar14 = param_3;
      ppuVar10 = param_5;
      lVar11 = param_6;
      lVar12 = param_7;
      lVar13 = param_8;
      func_0x00010c25d080();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar14;
      func_0x00010c08fa60();
      if (lVar3 != 0) goto LAB_109135680;
      puVar15 = (undefined *)0x0;
    }
  }
  else {
    _objc_retain(lVar14);
LAB_109135680:
    puStack_70 = PTR_PTR_1127007c8;
    plVar1 = &lStack_78;
    lVar12 = param_7;
    lVar13 = param_8;
    lStack_78 = param_3;
    _objc_msgSendSuper2(plVar1,PTR_s_renderCacheComponentKeyWithConte_112629808,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = 2;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    plStack_68 = plVar1;
    lStack_60 = lVar14;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110e57298;
    puVar15 = puVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(plVar1);
  }
  _objc_release(lVar14);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(lVar12);
  _objc_retain(lVar13);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(uStack_80);
  if (lVar11 != 0) {
    (**(code **)(lVar12 + 0x10))(lVar12,0,0,lVar11);
    goto LAB_109135bb0;
  }
  ppuVar4 = ppuVar10;
  func_0x00010c08fa60();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53720(param_5);
    (**(code **)(lVar12 + 0x10))(lVar12,0,0,ppuVar9);
LAB_109135ba4:
    _objc_release(ppuVar9);
  }
  else {
    ppuVar4 = ppuVar10;
    _CGDataProviderCreateWithCFData();
    ppuVar5 = ppuVar4;
    _CGFontCreateWithDataProvider();
    if (ppuVar4 == (undefined **)0x0) {
      func_0x00010be53720(param_5);
    }
    else {
      _CFRelease(ppuVar4);
    }
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
      _CTFontManagerRegisterGraphicsFont(ppuVar5,&ppuStack_f8);
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar4 = ppuStack_f8;
        func_0x00010bf3ec40();
        if ((ppuVar4 != (undefined **)0x69) &&
           (ppuVar4 = ppuStack_f8, func_0x00010bf3ec40(), ppuVar4 != (undefined **)0x131)) {
          (**(code **)(lVar12 + 0x10))(lVar12,0,0,ppuStack_f8);
          _CGFontRelease(ppuVar5);
          ppuVar4 = ppuStack_f8;
          goto LAB_109135ba8;
        }
        _objc_release(ppuStack_f8);
      }
      ppuVar4 = ppuVar5;
      _CGFontCopyPostScriptName();
      ppuVar9 = ppuVar4;
      func_0x00010bf51e00();
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c06d500();
      if ((int)puVar15 == 0) {
        puVar15 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bfb41a0(*(undefined8 *)((long)param_5 + (long)_DAT_112781d10),
                            PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 == 0) {
          func_0x00010be378e0(param_1,param_2,param_5);
        }
        else {
          func_0x00010be37900();
        }
        _CGFontRelease(ppuVar5);
      }
      else {
        _CGFontRelease(ppuVar5);
        puVar2 = PTR_PTR_1126bcff8;
        func_0x00010bfadca0(PTR_PTR_1126bcff8);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar15;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar15 = puVar2;
        func_0x00010c2ac460(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        func_0x00010b256a70();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c281040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar12 + 0x10))(lVar12,0,0,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar6);
      }
      _objc_release(puVar15);
      goto LAB_109135ba4;
    }
    func_0x00010be53720(param_5);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar12 + 0x10))(lVar12,0,0,ppuVar4);
  }
LAB_109135ba8:
  _objc_release(ppuVar4);
LAB_109135bb0:
  _objc_release(uStack_80);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 1091357c0; end: 109135c27; -[SCDynamicGeoFilterTextResource _handleFontUrlFetchWithNSData:error:completion:canvasSize:preloadedText:contextData:dynamicContextProperties:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091357c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_6 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0,param_6);
    goto LAB_109135bb0;
  }
  puVar1 = param_5;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53720(param_3);
    (**(code **)(param_7 + 0x10))(param_7,0,0,puVar7);
LAB_109135ba4:
    _objc_release(puVar7);
  }
  else {
    puVar1 = param_5;
    _CGDataProviderCreateWithCFData();
    puVar2 = puVar1;
    _CGFontCreateWithDataProvider();
    if (puVar1 == (undefined *)0x0) {
      func_0x00010be53720(param_3);
    }
    else {
      _CFRelease(puVar1);
    }
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
      _CTFontManagerRegisterGraphicsFont(puVar2,&puStack_78);
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = puStack_78;
        func_0x00010bf3ec40();
        if ((puVar1 != (undefined *)0x69) &&
           (puVar1 = puStack_78, func_0x00010bf3ec40(), puVar1 != (undefined *)0x131)) {
          (**(code **)(param_7 + 0x10))(param_7,0,0,puStack_78);
          _CGFontRelease(puVar2);
          puVar1 = puStack_78;
          goto LAB_109135ba8;
        }
        _objc_release(puStack_78);
      }
      puVar1 = puVar2;
      _CGFontCopyPostScriptName();
      puVar7 = puVar1;
      func_0x00010bf51e00();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c06d500();
      if ((int)puVar3 == 0) {
        puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bfb41a0(*(undefined8 *)(param_3 + _DAT_112781d10),
                            PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        if (param_8 == 0) {
          func_0x00010be378e0(param_1,param_2,param_3);
        }
        else {
          func_0x00010be37900();
        }
        _CGFontRelease(puVar2);
      }
      else {
        _CGFontRelease(puVar2);
        puVar2 = PTR_PTR_1126bcff8;
        func_0x00010bfadca0(PTR_PTR_1126bcff8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar2;
        func_0x00010c2ac460(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        func_0x00010b256a70();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c281040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_7 + 0x10))(param_7,0,0,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      goto LAB_109135ba4;
    }
    func_0x00010be53720(param_3);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,0,0,puVar1);
  }
LAB_109135ba8:
  _objc_release(puVar1);
LAB_109135bb0:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 109135c28; end: 109135d1b; -[SCDynamicGeoFilterTextResource _logFilterResourceDataNilMetricForReason:] */

void FUN_109135c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bcff8;
  _objc_retain(param_3);
  func_0x00010bfae300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf558,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c281040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109135d1c; end: 10913617f; -[SCDynamicGeoFilterTextResource _imageWithCanvasSize:font:completion:contextData:dynamicContextProperties:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109135d1c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = *(undefined **)(param_3 + _DAT_112781d24);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0720c0();
    func_0x00010c193080(param_3);
    func_0x00010be37900(param_1,param_2,param_3);
    goto LAB_1091360cc;
  }
  if (*(long *)(param_3 + _DAT_112781d34) == 0) {
    func_0x00010c193080(param_3);
    puVar1 = param_3;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010c247520(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x000107c3121c();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bcff0);
      puVar2 = puVar1;
      func_0x00010beecc40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar2;
      func_0x00010bfe63a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_initWeak(auStack_78,param_3);
      _objc_copyWeak(auStack_90,auStack_78);
      uStack_88 = param_1;
      uStack_80 = param_2;
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010c0cd920(param_3);
      func_0x00010bfa6940(puVar3);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_78);
      goto LAB_1091360b4;
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,0,puVar4);
  }
  else {
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b88d8);
    puVar4 = puVar1;
    func_0x00010beecc40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar4;
    func_0x00010bfe63a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar3 = param_3;
    func_0x00010c25d080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c08fa60();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,0,0,puVar1);
    }
    else {
      puVar1 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010be37900(param_1,param_2,param_3);
    }
    _objc_release(puVar1);
LAB_1091360b4:
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
LAB_1091360cc:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 109136180; end: 10913618f;  */

void FUN_109136180(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2946f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_usernameProvider_112682be0);
  return;
}



/* Entry: 109136190; end: 109136297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109136190(long param_1,undefined **param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10913626c;
  if ((param_4 != 0) || (ppuVar3 = param_2, func_0x00010c08fa60(), ppuVar3 == (undefined **)0x0)) {
    lVar5 = (long)_DAT_112781d44;
    lVar2 = *(long *)(lVar1 + lVar5);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar5 = (long)_DAT_112781d2c;
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010c08fa60();
      if (lVar2 != 0) goto LAB_1091361f8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110db2d98;
    }
    else {
LAB_1091361f8:
      ppuVar3 = *(undefined ***)(lVar1 + lVar5);
    }
    func_0x00010bf64920(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    param_2 = ppuVar3;
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010be37900(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar1);
  _objc_release(puVar4);
LAB_10913626c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109136298; end: 109136a4b; -[SCDynamicGeoFilterTextResource stringBySubstitutingDynamicTextWithContextData:dynamicContextProperties:userName:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109136298(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *apuStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar2 = *(undefined ***)((long)param_1 + (long)_DAT_112781d34);
  func_0x00010bf51e00();
  lVar3 = *(long *)((long)param_1 + (long)_DAT_112781d38);
  func_0x00010bf51e00();
  ppuVar4 = *(undefined ***)((long)param_1 + (long)_DAT_112781d3c);
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)((long)param_1 + (long)_DAT_112781d30);
  func_0x00010bf51e00();
  ppuVar6 = *(undefined ***)((long)param_1 + (long)_DAT_112781d2c);
  func_0x00010bf51e00();
  ppuVar7 = param_3;
  func_0x00010c243620();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar9 = ppuVar2;
  func_0x00010c08fa60();
  puVar10 = puVar8;
  func_0x00010c0c1b40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar10);
  puVar12 = puVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar12 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar10);
      }
      func_0x00010c11f2c0(*(undefined8 *)((long)puVar22 * 8));
      ppuVar13 = ppuVar2;
      func_0x00010c260c80(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar11);
      _objc_release(ppuVar13);
      puVar22 = puVar22 + 1;
    } while (puVar12 != puVar22);
    puVar12 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  _objc_retain(puVar11);
  ppuVar13 = apuStack_170;
  ppuVar20 = (undefined **)0x10;
  puVar12 = puVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar17 = ppuVar2, puVar12 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar11);
      }
      ppuVar21 = *(undefined ***)((long)puVar22 * 8);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar21;
      func_0x00010c0720c0();
      ppuVar16 = param_1;
      if ((int)ppuVar2 == 0) {
        ppuVar2 = ppuVar21;
        func_0x00010c0720c0();
        if ((int)ppuVar2 != 0) {
          ppuVar9 = param_6;
          func_0x00010bf44740(param_6);
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar9;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          goto LAB_1091365f8;
        }
        ppuVar2 = ppuVar21;
        func_0x00010c0720c0();
        if ((int)ppuVar2 != 0) {
          _objc_retain(param_6);
          ppuVar21 = param_6;
          goto LAB_1091365f8;
        }
        ppuVar2 = ppuVar21;
        func_0x00010bfda7c0();
        if ((int)ppuVar2 != 0) {
          if (ppuVar7 == (undefined **)0x0) goto LAB_1091369e0;
          ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
          _objc_alloc_init();
          ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
          func_0x00010c25cfc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bf540(ppuVar2);
          ppuVar16 = ppuVar2;
          func_0x00010c25d400();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar21);
          _objc_release(ppuVar2);
          goto LAB_109136634;
        }
        ppuVar2 = ppuVar21;
        func_0x00010bfda7c0();
        if ((int)ppuVar2 != 0) {
          if (ppuVar7 == (undefined **)0x0) goto LAB_1091369e0;
          ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
          func_0x00010c25cfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = param_4;
          func_0x00010c0e00e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar3;
          func_0x00010c08fa60();
          if (lVar15 == 0) {
            ppuVar19 = (undefined **)0x0;
            func_0x00010bea3920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            _objc_release(ppuVar21);
            goto LAB_1091369f4;
          }
          _objc_opt_class();
          ppuVar13 = ppuVar4;
          ppuVar20 = ppuVar21;
          ppuVar9 = ppuVar7;
          func_0x00010be220e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          goto LAB_109136630;
        }
        func_0x00010bfda7c0();
        if ((int)ppuVar21 == 0) {
LAB_1091369e0:
          ppuVar19 = (undefined **)0x0;
          func_0x00010bea3920();
          _objc_retainAutoreleasedReturnValue();
LAB_1091369f4:
          ppuVar16 = &PTR____CFConstantStringClassReference_110daafd8;
          goto LAB_1091368b4;
        }
        ppuVar2 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        if (ppuVar16 != (undefined **)0x0) goto LAB_109136634;
        ppuVar19 = (undefined **)0x0;
        func_0x00010bea3920();
        _objc_retainAutoreleasedReturnValue();
LAB_1091368b8:
        _objc_release(puVar14);
        _objc_release(puVar11);
        goto LAB_109136928;
      }
      ppuVar21 = (undefined **)PTR_PTR_1126b2c18;
      func_0x00010bfb1120(PTR_PTR_1126b2c18);
      _objc_retainAutoreleasedReturnValue();
LAB_1091365f8:
      _objc_opt_class();
      ppuVar13 = param_1;
      func_0x00010bfa04c0();
      ppuVar20 = ppuVar6;
      ppuVar9 = param_5;
      func_0x00010bec8a40();
      _objc_retainAutoreleasedReturnValue();
LAB_109136630:
      _objc_release(ppuVar21);
LAB_109136634:
      ppuVar2 = ppuVar16;
      func_0x00010c08fa60();
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar19 = (undefined **)0x0;
        func_0x00010bea3920();
        _objc_retainAutoreleasedReturnValue();
LAB_1091368b4:
        _objc_release(ppuVar16);
        goto LAB_1091368b8;
      }
      ppuVar2 = ppuVar17;
      ppuVar13 = ppuVar16;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar17);
      _objc_release(puVar14);
      _objc_release(ppuVar16);
      puVar22 = puVar22 + 1;
      ppuVar17 = ppuVar2;
    } while (puVar12 != puVar22);
    ppuVar13 = apuStack_170;
    ppuVar20 = (undefined **)0x10;
    puVar12 = puVar11;
    func_0x00010bf52a60();
  }
  _objc_release(puVar11);
  func_0x00010c25cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  uVar18 = uVar5;
  func_0x00010c0720c0();
  ppuVar2 = ppuVar17;
  if ((int)uVar18 == 0) {
    uVar18 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar18 != 0) {
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109136904;
    }
  }
  else {
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
LAB_109136904:
    _objc_release(ppuVar17);
    ppuVar17 = ppuVar2;
  }
  ppuVar19 = ppuVar17;
  func_0x00010bea3920();
  _objc_retainAutoreleasedReturnValue();
LAB_109136928:
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(0);
  _objc_release(ppuVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(lVar3);
  _objc_release(ppuVar17);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar19);
  _objc_retain(ppuVar20);
  _objc_retain(ppuVar9);
  puVar12 = PTR_PTR_1126d3fd0;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar19;
  func_0x00010c08fa60();
  if ((ppuVar2 == (undefined **)0x0) ||
     (puVar11 = puVar12, func_0x00010c0e19a0(), (int)puVar11 != 0)) {
    _objc_retain(ppuVar9);
    _objc_release(ppuVar19);
    ppuVar2 = ppuVar9;
    func_0x00010c08fa60();
    ppuVar19 = ppuVar9;
    if (ppuVar2 != (undefined **)0x0) goto LAB_109136adc;
    param_1 = (undefined **)0x0;
  }
  else {
LAB_109136adc:
    puVar11 = puVar12;
    func_0x00010c0e19a0();
    if ((int)puVar11 != 0) {
      if (ppuVar13 != (undefined **)0xffffffffdd115c6a) {
        param_1 = (undefined **)0x0;
        goto LAB_109136b5c;
      }
      _objc_retain(ppuVar20);
      _objc_release(ppuVar19);
      ppuVar19 = ppuVar20;
    }
    puVar11 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc2f80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    param_1 = ppuVar19;
    func_0x00010c25cda0(ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
  }
LAB_109136b5c:
  _objc_release(puVar12);
  _objc_release(ppuVar9);
  _objc_release(ppuVar20);
  _objc_release(ppuVar19);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109136a4c; end: 109136b93; +[SCDynamicGeoFilterTextResource _substituteUsernameWhenEmpty:fallbackMethod:fallbackText:userName:] */

void FUN_109136a4c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d3fd0;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c08fa60();
  if ((lVar3 == 0) ||
     (puVar2 = puVar1, func_0x00010c0e19a0(puVar1,param_2,param_3), (int)puVar2 != 0)) {
    _objc_retain(param_6);
    _objc_release(param_3);
    lVar3 = param_6;
    func_0x00010c08fa60();
    param_3 = param_6;
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_109136b5c;
    }
  }
  puVar2 = puVar1;
  func_0x00010c0e19a0(puVar1,param_2,param_3);
  if ((int)puVar2 != 0) {
    if (param_4 != -0x22eea396) {
      lVar3 = 0;
      goto LAB_109136b5c;
    }
    _objc_retain(param_5);
    _objc_release(param_3);
    param_3 = param_5;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc2f80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c25cda0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_109136b5c:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109136b94; end: 109136bbb; -[SCDynamicGeoFilterTextResource _setDynamicTextWithSubstitutionAndReturn:] */

void FUN_109136b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 109136bbc; end: 10913723f; +[SCDynamicGeoFilterTextResource _getRelativeTime:direction:withFormat:fromCurrentTime:fallbackText:relativeTimeComponents:] */

void FUN_109136bbc(double param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined *param_7,undefined8 param_8,long param_9)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = param_5;
  func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110f23118);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_5;
    func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110f230f8);
    uVar11 = 0;
    if ((param_9 == 0) || ((uVar2 & 1) == 0)) goto LAB_1091371ec;
  }
  else if (param_9 == 0) {
    uVar11 = 0;
    goto LAB_1091371ec;
  }
  puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_alloc();
  func_0x00010bffabc0();
  puVar4 = puVar3;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a120(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,
                      &PTR____CFConstantStringClassReference_110f23538);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf4b900();
  puVar13 = puVar3;
  if ((int)puVar6 == 0) {
    lVar7 = param_4;
    func_0x00010bf87980(param_4,param_3,&PTR____CFConstantStringClassReference_110f23078);
    puVar6 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    if ((int)lVar7 == 0) {
      lVar7 = param_4;
      func_0x00010c08fa60();
      ppuVar1 = &PTR____CFConstantStringClassReference_110f230b8;
      if (lVar7 != 0x13) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f230d8;
      }
      func_0x00010c189b60(puVar6,param_3,ppuVar1);
      puVar13 = puVar6;
      func_0x00010bf65160(puVar6,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      if (puVar13 == (undefined *)0x0) {
        param_2 = 0;
      }
      else {
        uVar2 = param_5;
        func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110f230f8);
        puVar12 = puVar13;
        func_0x00010bf433a0(puVar13,param_3,param_7);
        if ((int)uVar2 == 0) {
          if (puVar12 != (undefined *)0xffffffffffffffff) goto LAB_1091370e8;
          _objc_opt_class(param_2);
          puVar12 = param_7;
          puVar8 = puVar13;
        }
        else {
          if (puVar12 != (undefined *)0x1) {
LAB_1091370e8:
            _objc_retain(param_8);
            param_2 = param_8;
            goto LAB_1091371b8;
          }
          _objc_opt_class(param_2);
          puVar12 = puVar13;
          puVar8 = param_7;
        }
        func_0x00010c26f380(puVar12,param_3,puVar8);
        func_0x00010be3d5a0(param_2,param_3,param_6,param_5,param_9);
        _objc_retainAutoreleasedReturnValue();
      }
LAB_1091371b8:
      _objc_release(puVar6);
      puVar12 = (undefined *)0x0;
    }
    else {
      func_0x00010c189b60();
      puVar8 = puVar6;
      func_0x00010bf65160(puVar6,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      if (puVar8 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        puVar13 = (undefined *)0x0;
        param_2 = 0;
      }
      else {
        puVar12 = puVar3;
        func_0x00010bf44640(puVar3,param_3,0xfc,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010c2bedc0(puVar4);
        func_0x00010c2278a0(puVar12,param_3,puVar9);
        puVar9 = puVar4;
        func_0x00010c0d0e40(puVar4);
        func_0x00010c1c8fc0(puVar12,param_3,puVar9);
        puVar9 = puVar4;
        func_0x00010bf65700(puVar4);
        func_0x00010c189d40(puVar12,param_3,puVar9);
        func_0x00010bf650e0(puVar3,param_3,puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        func_0x00010c26f380(param_7,param_3,puVar13);
        if ((3600.0 <= param_1) || (func_0x00010c26f380(param_7,param_3,puVar13), param_1 <= 0.0)) {
          uVar2 = param_5;
          func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110f230f8);
          puVar8 = puVar13;
          func_0x00010bf433a0(puVar13,param_3,param_7);
          if ((int)uVar2 == 0) {
            puVar9 = puVar13;
            if (puVar8 == (undefined *)0x1) {
              puVar9 = puVar3;
              func_0x00010bf64e60(puVar3,param_3,0x10,0xffffffffffffffff,puVar13,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
            }
            _objc_opt_class(param_2);
            puVar10 = param_7;
            puVar13 = puVar9;
          }
          else {
            puVar10 = puVar13;
            if (puVar8 == (undefined *)0xffffffffffffffff) {
              puVar10 = puVar3;
              func_0x00010bf64e60(puVar3,param_3,0x10,1,puVar13,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
            }
            _objc_opt_class(param_2);
            puVar9 = param_7;
            puVar13 = puVar10;
          }
          func_0x00010c26f380(puVar10,param_3,puVar9);
          func_0x00010be3d5a0(param_2,param_3,param_6,param_5,param_9);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(param_8);
          param_2 = param_8;
        }
      }
      _objc_release(puVar6);
    }
  }
  else {
    puVar6 = puVar5;
    func_0x00010bfecde0(puVar5,param_3,param_4);
    puVar12 = puVar4;
    func_0x00010c2a4a40();
    if (puVar12 == puVar6 + 1) {
      _objc_retain(param_8);
      param_2 = param_8;
      puVar12 = (undefined *)0x0;
      puVar13 = param_7;
    }
    else {
      _objc_retain(puVar4);
      func_0x00010c1a9320(puVar4,param_3,0);
      func_0x00010c1c8500(puVar4,param_3,0);
      func_0x00010c1f8e00(puVar4,param_3,0);
      puVar12 = puVar3;
      func_0x00010bf650e0(puVar3,param_3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      puVar8 = puVar4;
      func_0x00010c2a4a40(puVar4);
      func_0x00010bf64e60(puVar3,param_3,0x10,(long)(puVar6 + (8 - (long)puVar8)) % 7,puVar12,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      uVar2 = param_5;
      func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110f230f8);
      puVar12 = puVar4;
      if ((int)uVar2 == 0) {
        uVar2 = param_5;
        func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110f23118);
        if ((int)uVar2 == 0) {
          param_2 = 0;
          goto LAB_1091371c4;
        }
        puVar6 = puVar3;
        func_0x00010bf64e60(puVar3,param_3,0x10,0xfffffffffffffff9,puVar13,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_opt_class(param_2);
        puVar8 = param_7;
        puVar13 = puVar6;
      }
      else {
        _objc_opt_class(param_2);
        puVar8 = puVar13;
        puVar6 = param_7;
      }
      func_0x00010c26f380(puVar8,param_3,puVar6);
      func_0x00010be3d5a0(param_2,param_3,param_6,param_5,param_9);
      _objc_retainAutoreleasedReturnValue();
    }
  }
LAB_1091371c4:
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar11 = param_2;
LAB_1091371ec:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 109137240; end: 109137717; +[SCDynamicGeoFilterTextResource _intervalStringFrom:withFormat:targetDirection:relativeTimeComponents:] */

void FUN_109137240(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_6;
  func_0x00010bf529e0();
  if (uVar12 == 0) {
    dVar14 = 0.0;
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
    do {
      uVar3 = param_6;
      func_0x00010c0dfd20(param_6,param_3,uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4bb00();
      if ((int)uVar5 == 0) {
        uVar5 = uVar4;
        func_0x00010bf4bb00(uVar4,param_3,&PTR____CFConstantStringClassReference_110e13858);
        if ((int)uVar5 == 0) {
          uVar5 = uVar4;
          func_0x00010bf4bb00(uVar4,param_3,&PTR____CFConstantStringClassReference_110dbf978);
          if ((int)uVar5 == 0) {
            uVar5 = uVar4;
            func_0x00010bf4bb00(uVar4,param_3,&PTR____CFConstantStringClassReference_110e137d8);
            if ((int)uVar5 == 0) {
              uVar5 = uVar4;
              func_0x00010bf4bb00(uVar4,param_3,&PTR____CFConstantStringClassReference_110e192d8);
              if ((int)uVar5 == 0) {
                uVar5 = uVar4;
                func_0x00010bf4bb00(uVar4,param_3,&PTR____CFConstantStringClassReference_110ecc238);
                if ((int)uVar5 != 0) {
                  uVar13 = 1;
                }
              }
              else {
                uVar13 = 0x3c;
              }
            }
            else {
              uVar13 = 0xe10;
            }
          }
          else {
            uVar13 = 0x15180;
          }
        }
        else {
          uVar13 = 0x2819a0;
        }
      }
      else {
        uVar13 = 0x1e13380;
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar12 = uVar12 + 1;
      uVar3 = param_6;
      func_0x00010bf529e0();
    } while (uVar12 < uVar3);
    dVar14 = (double)uVar13;
  }
  uVar12 = param_5;
  func_0x00010c0720c0(param_5,param_3,&PTR____CFConstantStringClassReference_110f230f8);
  puVar6 = puVar2;
  if ((0.0 < param_1) && ((uVar12 & 1) != 0)) {
    func_0x00010bf64e40(dVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf44660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar12 = param_6;
  func_0x00010bf529e0();
  if (uVar12 != 0) {
    uVar12 = 0;
    uVar11 = param_4;
    do {
      uVar13 = param_6;
      func_0x00010c0dfd20(param_6,param_3,uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar11;
      func_0x00010bf4bb00(uVar11,param_3,uVar3);
      param_4 = uVar11;
      if ((int)uVar8 != 0) {
        lVar9 = param_2;
        _objc_opt_class();
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf35920(uVar3,param_3,0);
        func_0x00010c14de00(puVar2,param_3,&PTR____CFConstantStringClassReference_110f20b38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed13e0(lVar9,param_3,puVar2,puVar7);
        _objc_release(puVar2);
        if (lVar9 == -1) {
LAB_1091376a8:
          _objc_release(uVar3);
          _objc_release(uVar13);
          param_4 = 0;
          goto LAB_1091376c0;
        }
        lVar9 = param_2;
        _objc_opt_class();
        func_0x00010bed1380();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c08fa60();
        if (uVar4 == 1) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110dcfe58;
        }
        else {
          uVar4 = uVar3;
          func_0x00010c08fa60();
          if (uVar4 == 2) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110f23638;
          }
          else {
            uVar4 = uVar3;
            func_0x00010c08fa60();
            if (uVar4 == 3) {
              ppuVar10 = &PTR____CFConstantStringClassReference_110eaad18;
            }
            else {
              uVar4 = uVar3;
              func_0x00010c08fa60();
              if (uVar4 != 4) {
                _objc_release(lVar9);
                goto LAB_1091376a8;
              }
              ppuVar10 = &PTR____CFConstantStringClassReference_110f23658;
            }
          }
        }
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25cfc0(uVar11,param_3,uVar3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(puVar2);
        _objc_release(lVar9);
      }
      _objc_release(uVar3);
      _objc_release(uVar13);
      uVar12 = uVar12 + 1;
      uVar13 = param_6;
      func_0x00010bf529e0();
      uVar11 = param_4;
    } while (uVar12 < uVar13);
  }
  _objc_retain(param_4);
  uVar11 = param_4;
LAB_1091376c0:
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 109137718; end: 10913774f; +[SCDynamicGeoFilterTextResource _unitNameFromTimeComponent:withValue:] */

void FUN_109137718(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f23678;
  if (param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f23698;
  }
  func_0x00010c0e00e0(param_3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109137750; end: 109137863; +[SCDynamicGeoFilterTextResource _unitValueFromString:withDateComponents:] */

undefined8
FUN_109137750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf2b8);
  uVar2 = param_4;
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e13858);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf978);
      if ((int)uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e137d8);
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e192d8);
          if ((int)uVar1 == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecc238);
            if ((int)uVar1 == 0) {
              uVar2 = 0xffffffffffffffff;
            }
            else {
              func_0x00010c154b60(param_4);
            }
          }
          else {
            func_0x00010c0ce880(param_4);
          }
        }
        else {
          func_0x00010bfe4740(param_4);
        }
      }
      else {
        func_0x00010bf65700(param_4);
      }
    }
    else {
      func_0x00010c0d0e40(param_4);
    }
  }
  else {
    func_0x00010c2bedc0(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 109137864; end: 109138147; -[SCDynamicGeoFilterTextResource _imageWithCanvasSize:font:text:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109137864(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_1;
  dVar16 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  dStack_d8 = 0.0;
  if ((*(long *)(param_5 + _DAT_112781d24) == 0) && (*(long *)(param_5 + _DAT_112781d34) == 0)) {
    lVar9 = (long)_DAT_112781d44;
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_5 + lVar9);
    *(undefined8 *)(param_5 + lVar9) = param_8;
    _objc_release(uVar1);
  }
  func_0x00010c08c7c0(param_5);
  func_0x00010c08c7c0(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_alloc_init();
  func_0x00010c166c00();
  puVar13 = param_5;
  func_0x00010bfa04c0();
  if (puVar13 == (undefined *)0xffffffffb7fe94c9) {
    func_0x00010c1bdb00(puVar3);
  }
  param_3 = param_1 * param_3;
  param_4 = param_2 * param_4;
  uStack_e0 = 1;
  lVar9 = (long)_DAT_112781d28;
  uStack_148 = param_8;
  if (param_5[lVar9] == '\x01') {
    puVar13 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c166c00();
    func_0x00010c1bdb00(puVar13);
    func_0x00010c1a95e0(0x3f800000,puVar13);
    uStack_e8 = 0;
    puVar11 = param_5;
    dVar14 = param_3;
    dVar16 = param_4;
    func_0x00010bebc460();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_e8;
    uStack_150 = uStack_e8;
    _objc_retain();
    if (puVar11 == (undefined *)0x0) {
      puVar11 = param_5;
      func_0x00010bfa04c0();
      if (puVar11 == (undefined *)0xffffffffdd115c6a) {
        lVar10 = (long)_DAT_112781d2c;
        lVar4 = *(long *)(param_5 + lVar10);
        func_0x00010c08fa60();
        if (lVar4 != 0) {
          uStack_148 = *(undefined8 *)(param_5 + lVar10);
          _objc_retain();
          _objc_release(param_8);
          uStack_f0 = 0;
          puVar11 = param_5;
          dVar14 = param_3;
          dVar16 = param_4;
          func_0x00010bebc460();
          _objc_retainAutoreleasedReturnValue();
          uStack_150 = uStack_f0;
          _objc_retain(uStack_f0);
          _objc_release(uVar1);
          func_0x00010c193080(param_5);
          _objc_release(puVar13);
          if (puVar11 == (undefined *)0x0) goto LAB_109137b38;
          goto LAB_109137c2c;
        }
      }
      _objc_release(puVar13);
      goto LAB_109137b38;
    }
    _objc_release(puVar13);
  }
  else {
    uStack_150 = 0;
LAB_109137b38:
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    puVar11 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    func_0x00010c23d0a0();
    puVar13 = param_5;
    dVar20 = dVar14;
    func_0x00010bfa04c0();
    if ((puVar13 == (undefined *)0xffffffffb7fe94c9) || ((dVar14 <= param_3 && (dVar16 <= param_4)))
       ) {
      dStack_d8 = dVar16;
      if (puVar11 != (undefined *)0x0) goto LAB_109137c2c;
    }
    else {
      _objc_release(puVar11);
    }
    puVar13 = param_5;
    func_0x00010bfa04c0();
    if (puVar13 == (undefined *)0x760a3bed) {
      puVar8 = (undefined1 *)0x70;
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_9 + 0x10))(param_9,0,0,puVar11);
      puVar13 = (undefined *)0x0;
      goto LAB_10913809c;
    }
    puVar11 = (undefined *)0x0;
  }
LAB_109137c2c:
  dVar14 = param_4 - dStack_d8;
  dVar16 = 0.5;
  dVar18 = dVar14 * 0.5;
  if ((param_5[lVar9] == '\x01') &&
     (puVar13 = puVar11, func_0x00010c08fa60(), puVar13 != (undefined *)0x0)) {
    puVar13 = puVar11;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c0b5aa0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar13;
    func_0x00010c11f340();
    _objc_release(puVar12);
    _objc_release(puVar13);
    if (puVar5 == (undefined *)0x7fffffffffffffff) {
      puStack_108 = &uStack_110;
      uStack_110 = 0;
      uStack_100 = 0x2020000000;
      uStack_f8 = 0;
      func_0x00010bf97b00(puVar11);
      dVar16 = 0.5;
      dVar14 = (double)puStack_108[3] * 0.5;
      dVar18 = dVar18 + dVar14;
      __Block_object_dispose(&uStack_110,8);
    }
  }
  func_0x00010c08c7c0(param_5);
  func_0x00010c08c7c0(param_5);
  dVar19 = 0.0;
  if ((param_5[lVar9] == '\x01') &&
     (puVar13 = puVar11, func_0x00010c08fa60(), puVar13 != (undefined *)0x0)) {
    dVar14 = param_1 * dVar14;
    dVar16 = param_2 * dVar16;
    dVar19 = param_3 * 0.1;
    dVar20 = param_1 - (param_3 + dVar14);
    if (dVar19 + param_3 + dVar14 <= param_1) {
      dVar20 = dVar19;
    }
    if (dVar19 <= dVar14) {
      dVar14 = dVar19;
    }
    if (dVar14 <= dVar20) {
      dVar20 = dVar14;
    }
    dVar19 = param_4 * 0.1;
    dVar17 = dVar19 + param_4 + dVar16;
    dVar14 = param_2 - (param_4 + dVar16);
    if (dVar17 <= param_2) {
      dVar14 = dVar19;
    }
    dVar15 = dVar16;
    if (dVar19 <= dVar16) {
      dVar15 = dVar19;
    }
    dVar19 = dVar15;
    if (dVar14 <= dVar15) {
      dVar19 = dVar14;
    }
    if ((0.0 < dVar20) || (0.0 < dVar19)) {
      func_0x00010c08c7c0(param_5);
      func_0x00010c08c7c0(param_5);
      func_0x00010c08c7c0(param_5);
      func_0x00010c08c7c0(param_5);
      puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971a0(dVar15 - dVar20 / param_1,dVar16 - dVar19 / param_2,
                          (dVar20 + dVar20) / param_1 + dVar14,(dVar19 + dVar19) / param_2 + dVar17)
      ;
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar12 = (undefined *)0x0;
    }
  }
  else {
    puVar12 = (undefined *)0x0;
    dVar20 = 0.0;
  }
  dVar14 = param_3 + dVar20 * 2.0;
  if ((dVar14 <= 0.0) || (param_4 + dVar19 * 2.0 <= 0.0)) {
    puVar8 = (undefined1 *)0x71;
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,0,0,puVar5);
    dVar20 = dVar14;
LAB_109137f60:
    puVar13 = (undefined *)0x0;
  }
  else {
    _UIGraphicsBeginImageContext();
    puVar13 = puVar11;
    func_0x00010bf89d40(dVar20,(long)(dVar18 + dVar19),param_3,(long)(dVar18 + dStack_d8));
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    puVar6 = param_5;
    func_0x00010c13b320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar6 == (undefined *)0x0) {
      puVar8 = (undefined1 *)0x71;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_9 + 0x10))(param_9,0,0,puVar5);
    }
    else {
      if (puVar13 == (undefined *)0x0) {
        puVar8 = (undefined1 *)0x71;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_9 + 0x10))(param_9,0,0,puVar5);
        goto LAB_109137f60;
      }
      puVar5 = param_5;
      func_0x00010c13b320();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined1 *)0x1;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_c0 = puVar5;
      puStack_b8 = puVar13;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(param_9 + 0x10))(param_9,puVar6,0,0);
      }
      else {
        func_0x00010c13b320();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = (undefined1 *)0x1;
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_d0 = param_5;
        puStack_c8 = puVar12;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_9 + 0x10))(param_9,puVar6,puVar7,0);
        _objc_release(puVar7);
        _objc_release(param_5);
      }
      _objc_release(puVar6);
    }
  }
  _objc_release(puVar5);
  _objc_release(puVar12);
LAB_10913809c:
  _objc_release(puVar11);
  _objc_release(uStack_150);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(param_9);
  _objc_release(uStack_148);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_110);
  __Unwind_Resume();
  _objc_retain(lVar9);
  if (lVar9 != 0) {
    func_0x00010bf6e320(lVar9);
    dVar16 = -dVar20;
    func_0x00010bf0ab40(lVar9);
    dVar14 = dVar20;
    func_0x00010bf2f960(lVar9);
    *(double *)(*(long *)(*(long *)(param_7 + 0x20) + 8) + 0x18) = dVar16 - (dVar20 - dVar14);
  }
  *puVar8 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 109138148; end: 1091381c7;  */

void FUN_109138148(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 *param_6)

{
  double dVar1;
  double dVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bf6e320(param_3);
    dVar2 = -param_1;
    func_0x00010bf0ab40(param_3);
    dVar1 = param_1;
    func_0x00010bf2f960(param_3);
    *(double *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = dVar2 - (param_1 - dVar1);
  }
  *param_6 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091381c8; end: 1091382e7; -[SCDynamicGeoFilterTextResource _sizeFontAndFitWithText:boundingBox:attributes:font:singleLineParagraphStyle:multiLineParagraphStyle:returnHeight:stringDrawingOptions:stringDrawingContext:] */

void FUN_1091381c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010bdd1000(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bdd1020(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_10,
                        param_11,param_12);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091382e8; end: 10913854f; -[SCDynamicGeoFilterTextResource _attributedStringSizedToFitForText:boundingBox:attributes:font:paragraphStyle:returnHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091382e8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,double *param_9)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar12 = param_1;
  dVar13 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e840();
  uVar10 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar6 = puVar5;
  func_0x00010c08fa60();
  func_0x00010bef6f20(puVar5,param_4,uVar10,param_7,0,puVar6);
  uVar11 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar6 = puVar5;
  func_0x00010c08fa60(puVar5);
  func_0x00010bef6f20(puVar5,param_4,uVar11,param_8,0,puVar6);
  func_0x00010c23d0a0(puVar5);
  if ((dVar12 <= 0.0) || (dVar13 <= 0.0)) {
LAB_1091384ec:
    *param_9 = dVar13;
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  else {
    lVar1 = (long)_DAT_112781d10;
    dVar14 = *(double *)(param_3 + lVar1);
    uVar8 = (ulong)((param_1 / dVar12) * dVar14);
    uVar9 = (ulong)((param_2 / dVar13) * dVar14);
    dVar12 = *(double *)(param_3 + _DAT_112781d14);
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    dVar13 = 0.0;
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (dVar12 < (double)uVar8) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(dVar12)) {
        bVar2 = dVar12 < 0.0;
        bVar3 = dVar12 == 0.0;
        bVar4 = false;
      }
    }
    uVar9 = (long)dVar12;
    if (bVar3 || bVar2 != bVar4) {
      uVar9 = uVar8;
    }
    dVar12 = (double)uVar9;
    if (dVar14 <= dVar12) {
      do {
        puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
        uVar9 = uVar9 - 1;
        uVar11 = param_7;
        func_0x00010bfb3f20(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb41a0(puVar6,param_4,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c08fa60(puVar5);
        func_0x00010bef6f20(puVar5,param_4,uVar10,puVar6,0,puVar7);
        _objc_release(puVar6);
        _objc_release(uVar11);
        func_0x00010c23d0a0(puVar5);
        if ((dVar13 <= param_2) && (dVar12 <= param_1)) goto LAB_1091384ec;
        dVar12 = (double)uVar9;
      } while (*(double *)(param_3 + lVar1) <= dVar12);
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)0x0;
    }
  }
  _objc_release(puVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 109138550; end: 10913893f; -[SCDynamicGeoFilterTextResource _attributedStringSizedToFitMultilineForText:boundingBox:attributes:font:paragraphStyle:returnHeight:stringDrawingOptions:stringDrawingContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138550(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,double *param_11,undefined8 *param_12,undefined8 *param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  dVar13 = *(double *)(param_5 + _DAT_112781d14);
  if (dVar13 <= 0.0) {
    dVar13 = *(double *)(param_5 + _DAT_112781d10) * 5.0;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e840();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uVar9 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar2 = param_9;
  func_0x00010bfb3f20(param_9);
  _objc_retainAutoreleasedReturnValue();
  dVar13 = (double)NEON_ucvtf((long)dVar13);
  func_0x00010bfb41a0(dVar13,puVar3,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c08fa60(puVar1);
  func_0x00010bef6f20(puVar1,param_6,uVar9,puVar3,0,puVar7);
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar6 = param_5;
  func_0x00010bfa04c0();
  uVar2 = 0x21;
  if (lVar6 != -0x48016b37) {
    uVar2 = 1;
  }
  puVar3 = PTR__OBJC_CLASS___NSStringDrawingContext_1126bb2c8;
  _objc_alloc_init();
  lVar6 = (long)_DAT_112781d10;
  func_0x00010c1c83a0((*(double *)(param_5 + lVar6) / dVar13) * 0.5);
  dVar10 = param_1;
  func_0x00010bf20bc0(param_1,param_2,puVar1,param_6,uVar2,puVar3);
  func_0x00010bef1a80(puVar3);
  dVar13 = (double)NEON_ucvtf((long)(dVar10 * dVar13));
  if (dVar13 < *(double *)(param_5 + lVar6)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar7 = puVar1;
    func_0x00010c08fa60(puVar1);
    func_0x00010bef6f20(puVar1,param_6,uVar8,param_10,0,puVar7);
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    uVar8 = param_9;
    func_0x00010bfb3f20(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb41a0(dVar13,puVar7,param_6,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08fa60(puVar1);
    func_0x00010bef6f20(puVar1,param_6,uVar9,puVar7,0,puVar4);
    _objc_release(puVar7);
    _objc_release(uVar8);
    dVar10 = param_1;
    func_0x00010bf20bc0(param_1,param_2,puVar1,param_6,uVar2,puVar3);
    dVar11 = param_3;
    dVar12 = param_4;
    func_0x00010bef1a80(puVar3);
    if (((param_2 < param_4) || (param_1 < param_3)) ||
       ((double)(ulong)(long)(dVar10 * dVar13) < *(double *)(param_5 + lVar6))) {
      uVar5 = (long)(dVar10 * dVar13) - 1;
      do {
        puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
        if ((double)uVar5 < *(double *)(param_5 + lVar6)) {
          puVar7 = (undefined *)0x0;
          goto LAB_1091388e0;
        }
        uVar8 = param_9;
        func_0x00010bfb3f20(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb41a0((double)uVar5,puVar7,param_6,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c08fa60(puVar1);
        func_0x00010bef6f20(puVar1,param_6,uVar9,puVar7,0,puVar4);
        _objc_release(puVar7);
        _objc_release(uVar8);
        func_0x00010bf20bc0(param_1,param_2,puVar1,param_6,uVar2,puVar3);
        uVar5 = uVar5 - 1;
      } while ((param_2 < dVar12) || (param_4 = dVar12, param_1 < dVar11));
    }
    *param_11 = param_4;
    _objc_retainAutorelease(puVar3);
    *param_13 = puVar3;
    *param_12 = uVar2;
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
LAB_1091388e0:
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 109138940; end: 10913896f; -[SCDynamicGeoFilterTextResource fetchesTextDataFromServer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_109138940(long param_1)

{
  if (*(long *)(param_1 + _DAT_112781d24) != 0) {
    return false;
  }
  return *(long *)(param_1 + _DAT_112781d34) == 0;
}



/* Entry: 109138970; end: 10913897f; -[SCDynamicGeoFilterTextResource staticText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138970(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d24);
}



/* Entry: 109138980; end: 10913898b; -[SCDynamicGeoFilterTextResource setStaticText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138980(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10913898c; end: 10913899b; -[SCDynamicGeoFilterTextResource dynamicText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913898c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d34);
}



/* Entry: 10913899c; end: 1091389a7; -[SCDynamicGeoFilterTextResource setDynamicText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913899c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091389a8; end: 1091389b7; -[SCDynamicGeoFilterTextResource targetDateTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091389a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d38);
}



/* Entry: 1091389b8; end: 1091389c3; -[SCDynamicGeoFilterTextResource setTargetDateTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091389b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091389c4; end: 1091389d3; -[SCDynamicGeoFilterTextResource targetDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091389c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d3c);
}



/* Entry: 1091389d4; end: 1091389df; -[SCDynamicGeoFilterTextResource setTargetDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091389d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091389e0; end: 1091389ef; -[SCDynamicGeoFilterTextResource fallbackMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091389e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d40);
}



/* Entry: 1091389f0; end: 1091389ff; -[SCDynamicGeoFilterTextResource setFallbackMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091389f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112781d40) = param_3;
  return;
}



/* Entry: 109138a00; end: 109138a0f; -[SCDynamicGeoFilterTextResource fontColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138a00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d1c);
}



/* Entry: 109138a10; end: 109138a4f; -[SCDynamicGeoFilterTextResource setFontColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781d1c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109138a50; end: 109138a5f; -[SCDynamicGeoFilterTextResource fontSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138a50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d10);
}



/* Entry: 109138a60; end: 109138a6f; -[SCDynamicGeoFilterTextResource setFontSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138a60(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112781d10) = param_1;
  return;
}



/* Entry: 109138a70; end: 109138a7f; -[SCDynamicGeoFilterTextResource maxFontSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138a70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d14);
}



/* Entry: 109138a80; end: 109138a8f; -[SCDynamicGeoFilterTextResource setMaxFontSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138a80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112781d14) = param_1;
  return;
}



/* Entry: 109138a90; end: 109138a9f; -[SCDynamicGeoFilterTextResource fontURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138a90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d18);
}



/* Entry: 109138aa0; end: 109138adf; -[SCDynamicGeoFilterTextResource setFontURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781d18;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109138ae0; end: 109138aef; -[SCDynamicGeoFilterTextResource alignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138ae0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d20);
}



/* Entry: 109138af0; end: 109138aff; -[SCDynamicGeoFilterTextResource setAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112781d20) = param_3;
  return;
}



/* Entry: 109138b00; end: 109138b0f; -[SCDynamicGeoFilterTextResource shadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138b00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d0c);
}



/* Entry: 109138b10; end: 109138b4f; -[SCDynamicGeoFilterTextResource setShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781d0c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109138b50; end: 109138b5f; -[SCDynamicGeoFilterTextResource autoResizeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109138b50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781d28);
}



/* Entry: 109138b60; end: 109138b6f; -[SCDynamicGeoFilterTextResource setAutoResizeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138b60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112781d28) = param_3;
  return;
}



/* Entry: 109138b70; end: 109138b7f; -[SCDynamicGeoFilterTextResource fallbackText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138b70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d2c);
}



/* Entry: 109138b80; end: 109138bbf; -[SCDynamicGeoFilterTextResource setFallbackText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781d2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109138bc0; end: 109138bcf; -[SCDynamicGeoFilterTextResource capitalization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109138bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d30);
}



/* Entry: 109138bd0; end: 109138c0f; -[SCDynamicGeoFilterTextResource setCapitalization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781d30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109138c10; end: 109138c1f; -[SCDynamicGeoFilterTextResource lastRetrieved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138c10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112781d44,1);
  return;
}



/* Entry: 109138c20; end: 109138c2b; -[SCDynamicGeoFilterTextResource setLastRetrieved:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138c20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 109138c2c; end: 109138d4b; -[SCDynamicGeoFilterTextResource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109138c2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112781d44,0);
  _objc_storeStrong(param_1 + _DAT_112781d30,0);
  _objc_storeStrong(param_1 + _DAT_112781d2c,0);
  _objc_storeStrong(param_1 + _DAT_112781d0c,0);
  _objc_storeStrong(param_1 + _DAT_112781d18,0);
  _objc_storeStrong(param_1 + _DAT_112781d1c,0);
  _objc_storeStrong(param_1 + _DAT_112781d3c,0);
  _objc_storeStrong(param_1 + _DAT_112781d38,0);
  _objc_storeStrong(param_1 + _DAT_112781d34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781d24,0);
  return;
}



/* Entry: 109138d4c; end: 10913903b; -[SCGeoFilter appearanceSettings] */

void FUN_109138d4c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  puVar1 = PTR_PTR_1126dd748;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c07f200();
  uVar3 = param_3;
  func_0x00010bf11b40();
  uVar4 = param_3;
  func_0x00010c06d220();
  uVar5 = param_3;
  func_0x00010c06c000();
  uVar6 = param_3;
  func_0x00010c073640();
  uVar7 = param_3;
  func_0x00010c06b660();
  uVar8 = param_3;
  func_0x00010c06d3a0();
  func_0x00010c073720();
  func_0x00010bf8d420();
  func_0x00010c073cc0();
  uVar9 = param_3;
  func_0x00010c07eda0();
  uVar10 = param_3;
  func_0x00010bf11e00();
  uVar11 = param_3;
  func_0x00010c280f40();
  uVar12 = param_3;
  func_0x00010c280f20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c280f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11b60(param_3);
  uVar14 = param_3;
  func_0x00010c24a620();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf8b880();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf8b8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bfae260();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bfae360();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bf8d300();
  uVar21 = param_3;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf32720();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01f780(param_1,param_2,puVar1,param_4,uVar2 & 0xffffffff,uVar3 != 0,
                      uVar4 & 0xffffffff,uVar5 & 0xffffffff,uVar6 & 0xffffffff,uVar7 & 0xffffffff,
                      (char)uVar8,(char)uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,
                      uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,param_3);
  _objc_release(param_3);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10913903c; end: 109139043; +[SCGeoFilter geoFilterWithDictionary:isPreCached:] */

void FUN_10913903c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_geoFilterWithDictionary_isPreCac_1125cdeb0,param_3,param_4,0);
  return;
}



/* Entry: 109139044; end: 1091390eb; +[SCGeoFilter geoFilterWithDictionary:isPreCached:isUnifiedCameraObject:] */

void FUN_109139044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f23c98);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126d9168;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126b3898;
  }
  puVar4 = *ppuVar1;
  _objc_alloc(puVar4);
  func_0x00010c00c5e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091390ec; end: 10913918b; +[SCGeoFilter geoFilterWithCTPFilterEntity:requestId:] */

void FUN_1091390ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfad780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd6820();
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126d9168;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126b3898;
  }
  puVar4 = *ppuVar1;
  _objc_alloc(puVar4);
  func_0x00010bffa4e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10913918c; end: 10913b5d3; -[SCGeoFilter initWithCTPFilterEntity:requestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10913918c(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  int iVar30;
  undefined *puVar31;
  undefined *puVar32;
  float fVar33;
  double dVar34;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar3 = param_4;
  func_0x00010bfad780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar3;
  func_0x00010bf3d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bfc1560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bfc1880();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010bf3d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bfc1560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR_PTR_1127007d0;
  puVar26 = &uStack_110;
  puVar19 = PTR_s_initWithLocationId_geoFenceLocat_11253f7b0;
  uStack_110 = param_2;
  _objc_msgSendSuper2(puVar26,PTR_s_initWithLocationId_geoFenceLocat_11253f7b0,ppuVar5,ppuVar6);
  _objc_retain();
  _objc_release(puVar26);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar28);
  puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar26 == (undefined8 *)0x0) goto LAB_10913b560;
  *(undefined8 *)((long)puVar26 + (long)_DAT_112781d4c) = 0x410fa40000000000;
  func_0x00010bfadea0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781d50);
  *(undefined **)((long)puVar26 + (long)_DAT_112781d50) = puVar25;
  _objc_release(uVar20);
  ppuVar28 = ppuVar3;
  func_0x00010bfd7440();
  *(char *)((long)puVar26 + (long)_DAT_112781d54) = (char)ppuVar28;
  *(undefined8 *)((long)puVar26 + (long)_DAT_112781d58) = 0;
  ppuVar28 = ppuVar3;
  func_0x00010bf3d3c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c14e120();
  uVar1 = 2;
  if ((int)ppuVar4 != 3) {
    uVar1 = (ulong)((int)ppuVar4 == 2);
  }
  *(ulong *)((long)puVar26 + (long)_DAT_112781d5c) = uVar1;
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010bf3d3c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c104260();
  FUN_10913fa7c();
  *(undefined ***)((long)puVar26 + (long)_DAT_112781d60) = ppuVar4;
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010bf3d220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c113c80();
  *(long *)((long)puVar26 + (long)_DAT_112781d64) = (long)(int)ppuVar4;
  _objc_release(ppuVar28);
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar28 = ppuVar3;
  func_0x00010bf3d220(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bf327a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32a40();
  func_0x00010c0df740();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781d68);
  *(undefined **)((long)puVar26 + (long)_DAT_112781d68) = puVar25;
  _objc_release(uVar20);
  _objc_release(ppuVar4);
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010bf3d220(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bf32720();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar26;
  func_0x00010bddbc40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781d6c);
  *(undefined8 **)((long)puVar26 + (long)_DAT_112781d6c) = puVar7;
  _objc_release(uVar20);
  _objc_release(ppuVar4);
  _objc_release(ppuVar28);
  param_1 = 600.0;
  puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4082c00000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112781d70;
  uVar20 = *(undefined8 *)((long)puVar26 + lVar24);
  *(undefined **)((long)puVar26 + lVar24) = puVar25;
  _objc_release(uVar20);
  puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar26 + lVar24);
  *(undefined **)((long)puVar26 + lVar24) = puVar25;
  _objc_release(uVar20);
  ppuVar28 = ppuVar3;
  func_0x00010bfdc8e0();
  if ((int)ppuVar28 != 0) {
    *(undefined1 *)((long)puVar26 + (long)_DAT_112781d74) = 1;
    ppuVar28 = ppuVar3;
    func_0x00010c24a620();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c104260();
    func_0x00010913faa0();
    _objc_release(ppuVar28);
    puVar8 = PTR_PTR_1126dd750;
    _objc_alloc();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110daf598;
    func_0x00010b7958fc();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110dbf1d8;
    ppuVar28 = ppuVar3;
    ppuStack_98 = ppuVar4;
    func_0x00010c24a620();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar28;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuStack_90 = ppuVar5;
    }
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f23c78;
    ppuVar9 = ppuVar3;
    func_0x00010c24a620(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f100();
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar25;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033780();
    uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781d78);
    *(undefined **)((long)puVar26 + (long)_DAT_112781d78) = puVar8;
    _objc_release(uVar20);
    _objc_release(puVar10);
    _objc_release(puVar25);
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar28);
    _objc_release(ppuVar4);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfd4aa0();
  if ((int)ppuVar28 != 0) {
    *(undefined8 *)((long)puVar26 + (long)_DAT_112781d7c) = 0xffffffff88526409;
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfd6820();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010bf8b860();
    fVar33 = SUB84(param_1,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf4d520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c1257a0();
    *(ulong *)((long)puVar26 + (long)_DAT_112781d80) = (ulong)ppuVar5 & 0xffffffff;
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    lVar24 = (long)_DAT_112781d84;
    ppuVar28 = ppuVar3;
    func_0x00010bf8b860(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf4d520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125460();
    dVar34 = (double)fVar33;
    ppuVar5 = ppuVar3;
    func_0x00010bf8b860(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar5;
    func_0x00010bf4d520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1254a0();
    param_1 = (double)fVar33;
    *(double *)((long)puVar26 + lVar24) = dVar34;
    ((double *)((long)puVar26 + lVar24))[1] = param_1;
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    ppuVar28 = ppuVar3;
    func_0x00010bf8b860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf4d520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c125300();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781d88);
    *(undefined ***)((long)puVar26 + (long)_DAT_112781d88) = ppuVar5;
    _objc_release(uVar20);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    ppuVar28 = ppuVar3;
    func_0x00010bf8b860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf4d520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c28d860();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781d8c);
    *(undefined ***)((long)puVar26 + (long)_DAT_112781d8c) = ppuVar5;
    _objc_release(uVar20);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfde600();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010c2a1220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    FUN_109189508();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781d90);
    *(undefined ***)((long)puVar26 + (long)_DAT_112781d90) = ppuVar4;
    _objc_release(uVar20);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bf3d3c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bf19420();
  *(char *)((long)puVar26 + (long)_DAT_112781d94) = (char)ppuVar4;
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c06c000();
  *(char *)((long)puVar26 + (long)_DAT_112781d98) = (char)ppuVar4;
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010bfd6820();
  if ((int)ppuVar28 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    ppuVar28 = ppuVar3;
    func_0x00010bf8b860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf68760();
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar28 = ppuVar3;
      func_0x00010bf8b860(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar28;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf68740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar25);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar28);
    }
    ppuVar28 = ppuVar3;
    func_0x00010bf8b860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c128280();
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar28 = ppuVar3;
      func_0x00010bf8b860(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar28;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c128260();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar28);
      func_0x00010c1d0640(puVar25);
      _objc_release(ppuVar9);
    }
  }
  lVar24 = (long)_DAT_112781d9c;
  _objc_retain(puVar25);
  uVar20 = *(undefined8 *)((long)puVar26 + lVar24);
  *(undefined **)((long)puVar26 + lVar24) = puVar25;
  _objc_release(uVar20);
  puVar8 = PTR_PTR_1126dd760;
  _objc_alloc();
  func_0x00010bfc10e0(puVar26);
  func_0x00010c067fc0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d21a8);
  puVar7 = puVar26;
  func_0x00010bfc1760(puVar26);
  FUN_1091434dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013100(param_1);
  lVar24 = (long)_DAT_112781da8;
  uVar20 = *(undefined8 *)((long)puVar26 + lVar24);
  *(undefined **)((long)puVar26 + lVar24) = puVar8;
  _objc_release(uVar20);
  _objc_release(puVar7);
  ppuVar28 = ppuVar3;
  func_0x00010bfdd6e0();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010c272520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c104260();
    uVar23 = (int)ppuVar4 - 1;
    if (uVar23 < 3) {
      uVar20 = *(undefined8 *)(&UNK_10dfb7d30 + (ulong)uVar23 * 8);
    }
    else {
      uVar20 = 0;
    }
    _objc_release(ppuVar28);
    ppuStack_100 = &PTR____CFConstantStringClassReference_110dbf1d8;
    ppuVar28 = ppuVar3;
    func_0x00010c272520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuStack_d8 = ppuVar4;
    }
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110daf598;
    func_0x00010b781e3c();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110ef27d8;
    ppuVar5 = ppuVar3;
    uStack_d0 = uVar20;
    func_0x00010c272520(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9f700();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110ef27f8;
    ppuVar9 = ppuVar3;
    puStack_c8 = puVar8;
    func_0x00010c272520(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9f860();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110ef2818;
    ppuVar11 = ppuVar3;
    puStack_c0 = puVar10;
    func_0x00010c272520(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e6260();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b8 = puVar31;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781dac);
    *(undefined **)((long)puVar26 + (long)_DAT_112781dac) = puVar32;
    _objc_release(uVar21);
    _objc_release(puVar31);
    _objc_release(ppuVar11);
    _objc_release(puVar10);
    _objc_release(ppuVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar5);
    _objc_release(uVar20);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuVar28 = ppuVar3;
  func_0x00010c0c3fe0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781db0);
  *(undefined **)((long)puVar26 + (long)_DAT_112781db0) = puVar8;
  _objc_release(uVar20);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bdc3000();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781db4);
  *(undefined ***)((long)puVar26 + (long)_DAT_112781db4) = ppuVar4;
  _objc_release(uVar20);
  _objc_release(ppuVar28);
  ppuVar28 = ppuVar3;
  func_0x00010bf92c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar28 != (undefined **)0x0) {
    ppuVar28 = ppuVar3;
    func_0x00010bf92c00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar26;
    func_0x00010be09400();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781db8);
    *(undefined8 **)((long)puVar26 + (long)_DAT_112781db8) = puVar7;
    _objc_release(uVar20);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfdc940();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010c24ab00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar26;
    func_0x00010be09400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar28;
    func_0x00010bf93c40(ppuVar28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar26;
    func_0x00010be09400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar28;
    func_0x00010c11fa40(ppuVar28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar26;
    func_0x00010be09400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar28;
    func_0x00010bf93ca0(ppuVar28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar26;
    func_0x00010be09400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar28;
    func_0x00010c23d7c0(ppuVar28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar26;
    func_0x00010be09400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    puVar10 = PTR_PTR_1126c4d70;
    _objc_alloc();
    ppuVar4 = ppuVar28;
    func_0x00010bef4d80(ppuVar28);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c23e520(ppuVar28);
    func_0x00010c0df6e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar28;
    func_0x00010c11fae0(ppuVar28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar28;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1ea0();
    uVar20 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781dbc);
    *(undefined **)((long)puVar26 + (long)_DAT_112781dbc) = puVar10;
    _objc_release(uVar20);
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(puVar8);
    _objc_release(ppuVar4);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar7);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bf11da0();
  func_0x00010913faec();
  *(undefined ***)((long)puVar26 + (long)_DAT_112781dc0) = ppuVar28;
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  ppuVar28 = ppuVar3;
  func_0x00010bfb80a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c27be40();
  _objc_release(ppuVar28);
  if (ppuVar4 != (undefined **)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    ppuVar28 = ppuVar3;
    func_0x00010bfb80a0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c27be20();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.60807493534087e-314;
    _objc_retain(puVar10);
    func_0x00010bf980c0(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    puVar31 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(puVar31);
    _objc_release(puVar10);
    _objc_release(puVar10);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfb80a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bfb7f20();
  _objc_release(ppuVar28);
  if (ppuVar4 != (undefined **)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    ppuVar28 = ppuVar3;
    func_0x00010bfb80a0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bfb7f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.60807493534087e-314;
    _objc_retain(puVar10);
    func_0x00010bf980c0(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    puVar31 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(puVar31);
    _objc_release(puVar10);
    _objc_release(puVar10);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bf3d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010beef3a0();
  _objc_release(ppuVar28);
  if (ppuVar4 != (undefined **)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    ppuVar28 = ppuVar3;
    func_0x00010bf3d560(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010beef380();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.60807493534087e-314;
    _objc_retain(puVar10);
    func_0x00010bf980c0(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    func_0x00010c1d0640(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar10);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bf3d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bf292c0();
  _objc_release(ppuVar28);
  if (ppuVar4 != (undefined **)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    ppuVar28 = ppuVar3;
    func_0x00010bf3d560(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf292a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.60807493534087e-314;
    _objc_retain(puVar10);
    func_0x00010bf980c0(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    puVar31 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(puVar31);
    _objc_release(puVar10);
    _objc_release(puVar10);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bf3d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c0c6ca0();
  _objc_release(ppuVar28);
  if (ppuVar4 != (undefined **)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    ppuVar28 = ppuVar3;
    func_0x00010bf3d560(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c0c6c80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.60807493534087e-314;
    _objc_retain(puVar10);
    func_0x00010bf980c0(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    func_0x00010c1d0640(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar10);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bf3d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c2a03c0();
  _objc_release(ppuVar28);
  puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar28 = ppuVar3;
    func_0x00010bf3d560(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c2a03a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(puVar10);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  puVar10 = puVar8;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar31 = (undefined *)0x0;
  }
  else {
    puVar31 = puVar8;
    func_0x00010bf51e00();
  }
  lVar27 = (long)_DAT_112781d48;
  _objc_retain(puVar31);
  uVar20 = *(undefined8 *)((long)puVar26 + lVar27);
  *(undefined **)((long)puVar26 + lVar27) = puVar31;
  _objc_release(uVar20);
  if (puVar10 != (undefined *)0x0) {
    _objc_release(puVar31);
  }
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  ppuVar28 = ppuVar3;
  func_0x00010bfb80a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010c294a60();
  _objc_release(ppuVar28);
  if ((int)ppuVar4 != 0) {
    uVar20 = 0xffffffffec934f6f;
    func_0x00010b79d9b8(0xffffffffec934f6f);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar10);
    _objc_release(uVar20);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfd4300();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010bf09380();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c06d060();
    _objc_release(ppuVar28);
    ppuVar28 = ppuVar3;
    func_0x00010bf09380();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar28;
    func_0x00010bfae1e0();
    _objc_release(ppuVar28);
    uVar23 = (uint)ppuVar4;
    iVar30 = (int)ppuVar5;
    if ((uVar23 == 0) && (iVar30 == 3)) {
      uVar20 = 0xffffffffcf3a7d32;
    }
    else {
      uVar2 = uVar23;
      if (iVar30 == 3) {
        uVar2 = 1;
      }
      if (uVar2 == 1) {
        uVar20 = 0xffffffff8b615381;
        if ((uVar23 & iVar30 == 3) == 0) {
          uVar20 = 0x7c65291b;
        }
      }
      else {
        uVar20 = 0xffffffffdce7660a;
      }
    }
    func_0x00010b79d9b8(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar10);
    _objc_release(uVar20);
  }
  puVar31 = puVar10;
  func_0x00010bf529e0();
  if (puVar31 == (undefined *)0x0) {
    puVar32 = (undefined *)0x0;
  }
  else {
    puVar32 = puVar10;
    func_0x00010bf51e00();
  }
  lVar27 = (long)_DAT_112781dc4;
  _objc_retain(puVar32);
  uVar20 = *(undefined8 *)((long)puVar26 + lVar27);
  *(undefined **)((long)puVar26 + lVar27) = puVar32;
  _objc_release(uVar20);
  if (puVar31 != (undefined *)0x0) {
    _objc_release(puVar32);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfd74a0();
  if (((ulong)ppuVar28 & 1) == 0) {
    ppuVar28 = ppuVar3;
    func_0x00010bfd7440();
    if ((int)ppuVar28 != 0) {
      uVar20 = 0xffffffff87cc6aaa;
      goto LAB_10913a834;
    }
    uVar20 = 0;
  }
  else {
    uVar20 = 0xffffffffdd72b039;
LAB_10913a834:
    func_0x00010b79daf4();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar27 = (long)_DAT_112781dc8;
  _objc_retain(uVar20);
  uVar21 = *(undefined8 *)((long)puVar26 + lVar27);
  *(undefined8 *)((long)puVar26 + lVar27) = uVar20;
  _objc_release(uVar21);
  ppuVar28 = ppuVar3;
  func_0x00010bfd4300();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010bf09380();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bfae1e0();
    _objc_release(ppuVar28);
    if ((int)ppuVar4 == 4) {
      ppuVar28 = ppuVar3;
      func_0x00010bf09380(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar28;
      func_0x00010c104140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar28);
      puVar32 = PTR_PTR_1126d8bf8;
      _objc_alloc(PTR_PTR_1126d8bf8);
      puVar16 = puVar32;
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar28 = ppuVar4;
      func_0x00010bdc2b80(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf1ec80(ppuVar4);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05fa20(puVar32);
      puVar29 = (undefined *)0x0;
LAB_10913aaa4:
      _objc_release(puVar31);
      _objc_release(ppuVar28);
      _objc_release(puVar16);
      _objc_release(ppuVar4);
    }
    else {
      if ((int)ppuVar4 == 3) {
        ppuVar28 = ppuVar3;
        func_0x00010bf09380();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar28;
        func_0x00010c23e760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar28);
        ppuVar28 = ppuVar4;
        func_0x00010c23e780();
        uVar23 = (int)ppuVar28 - 1;
        if (uVar23 < 3) {
          ppuVar28 = *(undefined ***)(&UNK_10dfb7d48 + (ulong)uVar23 * 8);
        }
        else {
          ppuVar28 = (undefined **)0x0;
        }
        ppuVar5 = ppuVar4;
        func_0x00010c25dfa0();
        uVar23 = (int)ppuVar5 - 1;
        if (uVar23 < 3) {
          puVar31 = *(undefined **)(&UNK_10dfb7d60 + (ulong)uVar23 * 8);
        }
        else {
          puVar31 = (undefined *)0x0;
        }
        puVar29 = PTR_PTR_1126d8bf0;
        _objc_alloc();
        puVar16 = puVar29;
        func_0x000107c31920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b76fa54(ppuVar28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b76fb30(puVar31);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010c131380(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar4;
        func_0x00010bf1cc40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05fa00();
        _objc_release(ppuVar9);
        _objc_release(ppuVar5);
        puVar32 = (undefined *)0x0;
        goto LAB_10913aaa4;
      }
      puVar32 = (undefined *)0x0;
      puVar29 = (undefined *)0x0;
    }
    puVar16 = PTR_PTR_1126d8c00;
    _objc_alloc();
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar28 = ppuVar3;
    func_0x00010bf09380(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22fee0();
    func_0x00010c0df6e0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046c60();
    uVar21 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781dcc);
    *(undefined **)((long)puVar26 + (long)_DAT_112781dcc) = puVar16;
    _objc_release(uVar21);
    _objc_release(puVar31);
    _objc_release(ppuVar28);
    _objc_release(puVar32);
    _objc_release(puVar29);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bf3d220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bfd5260();
  _objc_release(ppuVar28);
  if ((int)ppuVar4 != 0) {
    puVar32 = PTR_PTR_1126b3890;
    _objc_alloc();
    ppuVar28 = ppuVar3;
    func_0x00010bf3d220(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf327a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar9 = ppuVar3;
    func_0x00010bf3d220(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar9;
    func_0x00010bf327a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32a40();
    func_0x00010c0df740(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0191e0();
    uVar21 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781dd0);
    *(undefined **)((long)puVar26 + (long)_DAT_112781dd0) = puVar32;
    _objc_release(uVar21);
    _objc_release(puVar31);
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    func_0x00010c179a20(*(undefined8 *)((long)puVar26 + lVar24));
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfdd760();
  if ((int)ppuVar28 != 0) {
    puVar32 = PTR_PTR_1126dd768;
    _objc_alloc();
    ppuVar28 = ppuVar3;
    func_0x00010c273d60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c09e600();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar5 = ppuVar3;
    func_0x00010c273d60(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51a40();
    func_0x00010c0df760(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b360();
    uVar21 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781dd4);
    *(undefined **)((long)puVar26 + (long)_DAT_112781dd4) = puVar32;
    _objc_release(uVar21);
    _objc_release(puVar31);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfd44a0();
  if ((int)ppuVar28 != 0) {
    puVar32 = PTR_PTR_1126d8be8;
    _objc_alloc();
    ppuVar28 = ppuVar3;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar5 = ppuVar3;
    func_0x00010bf0ed00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077280();
    func_0x00010c0df6e0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a0c0();
    uVar21 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781dd8);
    *(undefined **)((long)puVar26 + (long)_DAT_112781dd8) = puVar32;
    _objc_release(uVar21);
    _objc_release(puVar31);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
  }
  ppuVar28 = ppuVar3;
  func_0x00010bfd4380();
  if ((int)ppuVar28 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf4ce20();
    _objc_release(ppuVar28);
    puVar31 = (undefined *)0x0;
    iVar30 = (int)ppuVar4;
    if (iVar30 < 4) {
      if (iVar30 == 2) {
        ppuVar28 = ppuVar3;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar28;
        func_0x00010c0b4b40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar28);
        puVar31 = PTR_PTR_1126dd770;
        _objc_alloc();
        ppuVar5 = ppuVar4;
        func_0x00010c29a460(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0fe180();
        func_0x00010c0df780(ppuVar28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060e60();
        puStack_220 = (undefined *)0x0;
        puStack_218 = (undefined *)0x0;
        puVar32 = (undefined *)0x0;
        uVar21 = 0xffffffffd331d2c3;
        goto LAB_10913b2f0;
      }
      puStack_220 = (undefined *)0x0;
      puStack_218 = (undefined *)0x0;
      puVar32 = (undefined *)0x0;
      uVar21 = 0;
      if (iVar30 == 3) {
        ppuVar28 = ppuVar3;
        func_0x00010bf0cb60(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar28;
        func_0x00010c2a3bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar28);
        puStack_218 = PTR_PTR_1126dd778;
        _objc_alloc();
        ppuVar5 = ppuVar4;
        func_0x00010c2a4740(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar28 = ppuVar5;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf00f20(ppuVar4);
        func_0x00010c0df6e0(puVar31);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c062fa0();
        _objc_release(puVar31);
        puVar31 = (undefined *)0x0;
        puVar32 = (undefined *)0x0;
        puStack_220 = (undefined *)0x0;
        uVar21 = 0x596fcd0;
        goto LAB_10913b2f0;
      }
    }
    else {
      if (iVar30 == 4) {
        ppuVar28 = ppuVar3;
        func_0x00010bf0cb60(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar28;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar28);
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar28 = ppuVar4;
        func_0x00010bfe59a0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar28;
        func_0x00010c0c5800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar11;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340(ppuVar5);
        _objc_release(ppuVar17);
        _objc_release(ppuVar11);
        _objc_release(ppuVar9);
        _objc_release(ppuVar28);
        puVar32 = PTR_PTR_1126dd780;
        _objc_alloc(PTR_PTR_1126dd780);
        ppuVar28 = ppuVar4;
        func_0x00010c06af00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar4;
        func_0x00010c06aee0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff3520(puVar32);
        _objc_release(ppuVar9);
        puVar31 = (undefined *)0x0;
        puStack_220 = (undefined *)0x0;
        puStack_218 = (undefined *)0x0;
        uVar21 = 0xffffffffa670c53d;
      }
      else {
        puStack_220 = (undefined *)0x0;
        puStack_218 = (undefined *)0x0;
        puVar32 = (undefined *)0x0;
        uVar21 = 0;
        if (iVar30 != 5) goto LAB_10913b308;
        ppuVar28 = ppuVar3;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar28;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar28);
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar28 = ppuVar4;
        func_0x00010bfe59a0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar28;
        func_0x00010c0c5800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar11;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340(ppuVar5);
        _objc_release(ppuVar17);
        _objc_release(ppuVar11);
        _objc_release(ppuVar9);
        _objc_release(ppuVar28);
        ppuVar28 = (undefined **)PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
        _objc_alloc_init();
        func_0x00010c1d02e0();
        ppuVar9 = ppuVar4;
        func_0x00010c06aee0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar28;
        func_0x00010c0de9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar4;
        func_0x00010bf67dc0();
        uVar23 = (int)ppuVar9 - 1;
        if (uVar23 < 3) {
          uVar21 = *(undefined8 *)(&UNK_10dfb7d78 + (ulong)uVar23 * 8);
        }
        else {
          uVar21 = 0;
        }
        func_0x00010b78f7e4();
        _objc_retainAutoreleasedReturnValue();
        puStack_220 = PTR_PTR_1126dd788;
        _objc_alloc();
        ppuVar9 = ppuVar4;
        func_0x00010c06afc0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar4;
        func_0x00010c06af00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar4;
        func_0x00010bf68360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c059e40();
        _objc_release(ppuVar18);
        _objc_release(ppuVar17);
        _objc_release(ppuVar9);
        _objc_release(uVar21);
        _objc_release(ppuVar11);
        puVar31 = (undefined *)0x0;
        puStack_218 = (undefined *)0x0;
        puVar32 = (undefined *)0x0;
        uVar21 = 0x31ce9f6d;
      }
LAB_10913b2f0:
      _objc_release(ppuVar28);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
    }
LAB_10913b308:
    puVar16 = PTR_PTR_1126dd790;
    _objc_alloc();
    func_0x00010b79a8ec();
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = ppuVar3;
    func_0x00010bf0cb60(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010bf5d560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar5;
    func_0x00010bf5d560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4cc0();
    uVar22 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781ddc);
    *(undefined **)((long)puVar26 + (long)_DAT_112781ddc) = puVar16;
    _objc_release(uVar22);
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar28);
    _objc_release(uVar21);
    _objc_release(puStack_220);
    _objc_release(puVar32);
    _objc_release(puStack_218);
    _objc_release(puVar31);
  }
  ppuVar28 = ppuVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar28;
  func_0x00010bfdc180();
  _objc_release(ppuVar28);
  if ((int)ppuVar4 != 0) {
    ppuVar28 = ppuVar3;
    func_0x00010c0c3fe0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar28;
    func_0x00010c23d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar28);
    puVar16 = PTR_PTR_1126dd798;
    _objc_alloc();
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2a5040(ppuVar4);
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfe0640(ppuVar4);
    func_0x00010c0df820(puVar32);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0630e0();
    _objc_release(puVar32);
    _objc_release(puVar31);
    puVar31 = PTR_PTR_1126dd7a0;
    _objc_alloc();
    func_0x00010c01cee0();
    uVar21 = *(undefined8 *)((long)puVar26 + (long)_DAT_112781de0);
    *(undefined **)((long)puVar26 + (long)_DAT_112781de0) = puVar31;
    _objc_release(uVar21);
    _objc_release(puVar16);
    _objc_release(ppuVar4);
  }
  lVar24 = (long)_DAT_112781de8;
  _objc_retain(param_5);
  uVar21 = *(undefined8 *)((long)puVar26 + lVar24);
  *(undefined8 *)((long)puVar26 + lVar24) = param_5;
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar25);
LAB_10913b560:
  _objc_retain(puVar26);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar26);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar26;
  }
  ___stack_chk_fail();
  _objc_retain(puVar19);
  puVar25 = puVar19;
  func_0x00010bfc1500();
  if ((int)puVar25 == 1) {
    puVar26 = (undefined8 *)PTR__OBJC_CLASS___CLLocation_1126b30c8;
    _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
    puVar25 = puVar19;
    func_0x00010c102a80(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    puVar8 = puVar19;
    dVar34 = param_1;
    func_0x00010c102a80(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c021a60(param_1,dVar34,puVar26);
    _objc_release(puVar8);
    _objc_release(puVar25);
  }
  else {
    puVar26 = (undefined8 *)0x0;
  }
  _objc_release(puVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return puVar26;
}



/* Entry: 10913b5d4; end: 10913b693;  */

void FUN_10913b5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfc1500();
  if ((int)uVar1 == 1) {
    puVar3 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
    _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
    uVar1 = param_3;
    func_0x00010c102a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar2 = param_3;
    uVar4 = param_1;
    func_0x00010c102a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c021a60(param_1,uVar4,puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10913b694; end: 10913b76f;  */

void FUN_10913b694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126dd758;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c26fae0(param_2);
  func_0x00010913fac4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c23d000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c101e40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c052640(puVar1);
  puVar5 = puVar1;
  func_0x00010c271c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10913b770; end: 10913b8ff;  */

void FUN_10913b770(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 - 1U < 3) {
    uVar1 = *(undefined8 *)(&UNK_10dfb7d90 + (ulong)(param_2 - 1U) * 8);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b79d94c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913b900; end: 10913be13; -[SCGeoFilter initWithLocationId:geoFenceLocationPoints:filterId:displayName:isFromPostCaptureLensExplorer:expirationDate:scaleSetting:positionSetting:isSponsored:sponsoredSlug:targetingType:autoRefreshDelayInMilliseconds:autoRefreshLabelPosition:dynamicFilterRefreshHint:dynamicFilterUpdatingMessage:belowDrawingLayer:isAnimated:encryptedGeoData:unlockableContentType:isFrameFilter:unlockableTrackInfo:imageURL:imageURLParams:dynamicContextProperties:autoStacking:arSegmentation:carouselGroup:carouselGlobalScoreList:audio:isUnifiedCameraObject:isSnapchatPlusExclusive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10913b900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined4 param_35)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  uVar6 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_22);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  puStack_80 = PTR_PTR_1127007d0;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithLocationId_geoFenceLocat_11253f7b0,param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d50);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d50) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dec) = uVar2;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781df0) = param_9;
    lVar8 = (long)_DAT_112781d70;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d5c) = param_11;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d60) = param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781da0) = param_16;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781d74) = param_13;
    lVar8 = (long)_DAT_112781d78;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_15;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d80) = param_17;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d84) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_112781d84))[1] = param_2;
    lVar8 = (long)_DAT_112781d88;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_18;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112781d8c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_19;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781d94) = (undefined1)param_20;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781d98) = param_20._1_1_;
    lVar8 = (long)_DAT_112781db8;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_22;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d7c) = param_23;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781d54) = param_24;
    lVar8 = (long)_DAT_112781dbc;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_26;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112781db0;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_27;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112781db4;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_28;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_112781d9c;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_29;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dd760;
    _objc_alloc();
    func_0x00010bfc10e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bfc1760(puVar1);
    FUN_1091434dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013120(uVar6);
    lVar7 = (long)_DAT_112781da8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar4);
    lVar8 = (long)_DAT_112781dd0;
    func_0x00010c179a20(*(undefined8 *)((long)puVar1 + lVar7));
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc0) = param_30;
    lVar7 = (long)_DAT_112781dcc;
    _objc_retain(param_31);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_31;
    _objc_release(uVar6);
    _objc_retain(param_32);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_32;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112781d6c;
    _objc_retain(param_33);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_33;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112781dd8;
    _objc_retain(param_34);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_34;
    _objc_release(uVar6);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781df4) = (undefined1)param_35;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781df8) = param_35._1_1_;
  }
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_22);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 10913be14; end: 10913be1f; -[SCGeoFilter initWithDictionary:] */

void FUN_10913be14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDictionary_isPreCached_i_1125e0b48,param_3,0,0);
  return;
}



/* Entry: 10913be20; end: 10913beb7; -[SCGeoFilter initWithFilterId:isUnifiedCameraObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10913be20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127007d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d50);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d50) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781df4) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10913beb8; end: 10913cdf3; -[SCGeoFilter initWithDictionary:isPreCached:isUnifiedCameraObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10913beb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             int param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  int iVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long lVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  puStack_78 = PTR_PTR_1127007d0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithDictionary__1125e0b28,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    *(char *)((long)puVar1 + (long)_DAT_112781da4) = (char)param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112781df4) = param_6;
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      *(undefined8 *)((long)puVar1 + (long)_DAT_112781d4c) = 0x410fa40000000000;
    }
    else {
      ppuVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      *(undefined8 *)((long)puVar1 + (long)_DAT_112781d4c) = param_1;
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar2);
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf51e00();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d50);
    *(undefined ***)((long)puVar1 + (long)_DAT_112781d50) = ppuVar3;
    _objc_release(uVar23);
    _objc_release(ppuVar2);
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_112781d54) = (char)ppuVar3;
    _objc_release(ppuVar2);
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_112781dfc) = (char)ppuVar3;
    _objc_release(ppuVar2);
    ppuVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c067fc0();
    if ((undefined **)0x3 < ppuVar2) {
      ppuVar2 = (undefined **)0x0;
    }
    *(undefined ***)((long)puVar1 + (long)_DAT_112781d58) = ppuVar2;
    _objc_release(ppuVar3);
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf529e0();
    ppuVar28 = (undefined **)0x0;
    ppuVar27 = (undefined **)0x0;
    if ((undefined **)0x1 < ppuVar3) {
      ppuVar27 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar28 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126d2508;
    func_0x00010c14e400();
    *(undefined **)((long)puVar1 + (long)_DAT_112781d5c) = puVar4;
    puVar4 = PTR_PTR_1126d2508;
    func_0x00010c1043a0();
    *(undefined **)((long)puVar1 + (long)_DAT_112781d60) = puVar4;
    ppuVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c067fc0();
    lVar29 = (long)_DAT_112781d64;
    *(undefined ***)((long)puVar1 + lVar29) = ppuVar5;
    _objc_release(ppuVar3);
    dVar31 = (double)*(long *)((long)puVar1 + lVar29);
    dVar32 = 1000.0;
    if (dVar31 <= 1000.0) {
      dVar32 = dVar31;
    }
    dVar31 = 0.0;
    if (0.0 <= dVar32) {
      dVar31 = dVar32;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d68);
    *(undefined **)((long)puVar1 + (long)_DAT_112781d68) = puVar4;
    _objc_release(uVar23);
    ppuVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    fVar30 = SUB84(dVar31,0);
    if (ppuVar3 != (undefined **)0x0) {
      lVar29 = 0;
      do {
        ppuVar5 = ppuVar3;
        func_0x00010bf32ee0();
        fVar30 = SUB84(dVar31,0);
        if (ppuVar5 == (undefined **)0x0) goto LAB_10913c1e4;
        lVar29 = lVar29 + 1;
      } while (lVar29 != 5);
      lVar29 = 0;
LAB_10913c1e4:
      *(long *)((long)puVar1 + (long)_DAT_112781da0) = lVar29;
    }
    ppuVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 == (undefined **)0x0) {
      dVar32 = 259200.0;
      if (param_5 == 0) {
        dVar32 = 600.0;
      }
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = *(undefined **)((long)puVar1 + (long)_DAT_112781d70);
      *(undefined **)((long)puVar1 + (long)_DAT_112781d70) = puVar4;
      iVar26 = _DAT_112781d70;
    }
    else {
      puVar24 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80(ppuVar5);
      dVar32 = (double)(fVar30 * 60.0);
      puVar4 = puVar24;
      func_0x00010bf64e40();
      _objc_retainAutoreleasedReturnValue();
      iVar26 = _DAT_112781d70;
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d70);
      *(undefined **)((long)puVar1 + (long)_DAT_112781d70) = puVar4;
      _objc_release(uVar23);
    }
    _objc_release(puVar24);
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 != (undefined **)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x00010c085d60();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar4;
      func_0x00010bf65160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010c070260();
      if ((int)puVar4 != 0) {
        _objc_retain(puVar24);
        uVar23 = *(undefined8 *)((long)puVar1 + (long)iVar26);
        *(undefined **)((long)puVar1 + (long)iVar26) = puVar24;
        _objc_release(uVar23);
      }
      _objc_release(puVar24);
    }
    ppuVar7 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_112781d74) = (char)ppuVar8;
    _objc_release(ppuVar7);
    ppuVar7 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126dd750;
      _objc_alloc();
      func_0x00010c033780();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d78);
      *(undefined **)((long)puVar1 + (long)_DAT_112781d78) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar9 = ppuVar8;
      func_0x00010c0e00e0();
      fVar30 = SUB84(dVar32,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c067fc0();
      *(undefined ***)((long)puVar1 + (long)_DAT_112781d80) = ppuVar10;
      _objc_release(ppuVar9);
      lVar29 = (long)_DAT_112781d84;
      ppuVar9 = ppuVar8;
      func_0x00010c0e00e0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar31 = (double)fVar30;
      ppuVar10 = ppuVar8;
      func_0x00010c0e00e0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar32 = (double)fVar30;
      *(double *)((long)puVar1 + lVar29) = dVar31;
      ((double *)((long)puVar1 + lVar29))[1] = dVar32;
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf51e00();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d88);
      *(undefined ***)((long)puVar1 + (long)_DAT_112781d88) = ppuVar10;
      _objc_release(uVar23);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf51e00();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d8c);
      *(undefined ***)((long)puVar1 + (long)_DAT_112781d8c) = ppuVar10;
      _objc_release(uVar23);
      _objc_release(ppuVar9);
    }
    ppuVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781db8);
    *(undefined ***)((long)puVar1 + (long)_DAT_112781db8) = ppuVar9;
    _objc_release(uVar23);
    ppuVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_112781d94) = (char)ppuVar10;
    _objc_release(ppuVar9);
    ppuVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_112781d98) = (char)ppuVar10;
    _objc_release(ppuVar9);
    ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d21a8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar9 = ppuVar5;
    }
    _objc_retain(ppuVar9);
    ppuVar10 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar11 = ppuVar10;
      func_0x00010b7997b0();
      *(undefined ***)((long)puVar1 + (long)_DAT_112781d7c) = ppuVar11;
    }
    ppuVar11 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d9c);
    *(undefined ***)((long)puVar1 + (long)_DAT_112781d9c) = ppuVar11;
    _objc_release(uVar23);
    puVar4 = PTR_PTR_1126dd760;
    _objc_alloc();
    func_0x00010bfc10e0(puVar1);
    func_0x00010c067fc0(ppuVar9);
    _objc_release(ppuVar9);
    puVar12 = puVar1;
    func_0x00010bfc1760(puVar1);
    FUN_1091434dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013100(dVar32);
    lVar29 = (long)_DAT_112781da8;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar4;
    _objc_release(uVar23);
    _objc_release(puVar12);
    ppuVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dac);
    *(undefined ***)((long)puVar1 + (long)_DAT_112781dac) = ppuVar9;
    _objc_release(uVar23);
    ppuVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (ppuVar9 == (undefined **)0x0) {
      lVar25 = (long)_DAT_112781db0;
    }
    else {
      ppuVar9 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = (long)_DAT_112781db0;
      uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
      *(undefined **)((long)puVar1 + lVar25) = puVar4;
      _objc_release(uVar23);
      _objc_release(ppuVar9);
    }
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (*(long *)((long)puVar1 + lVar25) == 0) {
      ppuVar9 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
      *(undefined **)((long)puVar1 + lVar25) = puVar4;
      _objc_release(uVar23);
      _objc_release(ppuVar9);
    }
    ppuVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781db4);
    *(undefined ***)((long)puVar1 + (long)_DAT_112781db4) = ppuVar9;
    _objc_release(uVar23);
    ppuVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar9 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126dd7a8;
      _objc_alloc(PTR_PTR_1126dd7a8);
      func_0x00010c0206e0();
      puVar24 = PTR_PTR_1126dd7b0;
      func_0x00010c14fe80();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e00);
      *(undefined **)((long)puVar1 + (long)_DAT_112781e00) = puVar24;
      _objc_release(uVar23);
      _objc_release(puVar4);
    }
    ppuVar11 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar11 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126c4d70;
      _objc_alloc();
      func_0x00010c0206e0();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dbc);
      *(undefined **)((long)puVar1 + (long)_DAT_112781dbc) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar13 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar13 != (undefined **)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e04);
      *(undefined **)((long)puVar1 + (long)_DAT_112781e04) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar14 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar14 != (undefined **)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e08);
      *(undefined **)((long)puVar1 + (long)_DAT_112781e08) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar15 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar15 = ppuVar16;
      func_0x00010b79aa68();
      *(undefined ***)((long)puVar1 + (long)_DAT_112781dc0) = ppuVar15;
    }
    ppuVar15 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c0ba360();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d48);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112781d48) = puVar12;
    _objc_release(uVar23);
    _objc_release(ppuVar15);
    ppuVar15 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar15;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_112781e0c) = (char)ppuVar17;
    _objc_release(ppuVar15);
    ppuVar15 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc4);
    *(undefined ***)((long)puVar1 + (long)_DAT_112781dc4) = ppuVar15;
    _objc_release(uVar23);
    ppuVar15 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc8);
    *(undefined ***)((long)puVar1 + (long)_DAT_112781dc8) = ppuVar15;
    _objc_release(uVar23);
    ppuVar15 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar15 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126d8c00;
      _objc_alloc();
      func_0x00010c0206e0();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dcc);
      *(undefined **)((long)puVar1 + (long)_DAT_112781dcc) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar17 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar17;
    func_0x00010bf529e0();
    if (ppuVar18 != (undefined **)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e10);
      *(undefined **)((long)puVar1 + (long)_DAT_112781e10) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar18 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar18 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126b3890;
      _objc_alloc();
      ppuVar18 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0206e0();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dd0);
      *(undefined **)((long)puVar1 + (long)_DAT_112781dd0) = puVar4;
      _objc_release(uVar23);
      _objc_release(ppuVar18);
      func_0x00010c179a20(*(undefined8 *)((long)puVar1 + lVar29));
    }
    ppuVar18 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar18 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126dd768;
      _objc_alloc();
      func_0x00010c0206e0();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dd4);
      *(undefined **)((long)puVar1 + (long)_DAT_112781dd4) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar19 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar19 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126d8be8;
      _objc_alloc();
      func_0x00010c0206e0();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dd8);
      *(undefined **)((long)puVar1 + (long)_DAT_112781dd8) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar20 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar20 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126dd790;
      _objc_alloc();
      func_0x00010c0206e0();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781ddc);
      *(undefined **)((long)puVar1 + (long)_DAT_112781ddc) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar21 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    func_0x00010c08fa60();
    if (ppuVar22 != (undefined **)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e14);
      *(undefined **)((long)puVar1 + (long)_DAT_112781e14) = puVar4;
      _objc_release(uVar23);
    }
    ppuVar22 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar22 != (undefined **)0x0) {
      puVar4 = PTR_PTR_1126dd7a0;
      _objc_alloc();
      func_0x00010c0206e0();
      uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781de0);
      *(undefined **)((long)puVar1 + (long)_DAT_112781de0) = puVar4;
      _objc_release(uVar23);
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    _objc_release(ppuVar20);
    _objc_release(ppuVar19);
    _objc_release(ppuVar18);
    _objc_release(ppuVar17);
    _objc_release(ppuVar15);
    _objc_release(ppuVar16);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
    _objc_release(ppuVar10);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    _objc_release(ppuVar28);
    _objc_release(ppuVar27);
    _objc_release(ppuVar2);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10913cdf4; end: 10913d033; -[SCGeoFilter mapUnlockablesContext:] */

void FUN_10913cdf4(undefined8 param_1,undefined *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar3 = param_3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        iVar12 = (int)*(undefined8 *)(uVar11 * 8);
        uVar4 = param_3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        uVar7 = uVar4;
        if (uVar5 != 0) {
          func_0x00010c0720c0();
          if (iVar12 != 0) {
            uVar5 = uVar4;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar6 = uVar5;
            _objc_opt_isKindOfClass(uVar5,param_2);
            _objc_release(uVar5);
            if ((uVar6 & 1) != 0) {
              func_0x00010c0b8620(uVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
            }
          }
          puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar10);
          _objc_release(puVar8);
        }
        _objc_release(uVar7);
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
      uVar2 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar10,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 10913d034; end: 10913d063;  */

void FUN_10913d034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 10913d064; end: 10913d6eb; -[SCGeoFilter initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10913d064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1127007d0;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithCoder__1125dd730,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781da4) = (char)uVar6;
    func_0x00010bf66da0(param_5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d4c) = param_1;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d50);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d50) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781db8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781db8) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d64) = uVar6;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d68);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d68) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d70);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d70) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d5c) = uVar6;
    uVar6 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d60) = uVar6;
    uVar6 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781da0) = uVar6;
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781d74) = (char)uVar6;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d78);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d78) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d80) = uVar6;
    lVar5 = (long)_DAT_112781d84;
    func_0x00010bf66d00(param_5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_1;
    ((undefined8 *)((long)puVar1 + lVar5))[1] = param_2;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d88);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d88) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d8c) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781d94) = (char)uVar6;
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781d98) = (char)uVar6;
    uVar6 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d7c) = uVar6;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781db0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781db0) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781db4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781db4) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e00);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781e00) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e08);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781e08) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e04);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781e04) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781d54) = (char)uVar6;
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781dfc) = (char)uVar6;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d48);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d48) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781e0c) = (char)uVar6;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc4) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc8) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dc0) = uVar6;
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781d9c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781d9c) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e10);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781e10) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dd0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dd0) = uVar6;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126dd760;
    _objc_alloc();
    func_0x00010bfc10e0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfc1760();
    FUN_1091434dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013140(param_1);
    lVar5 = (long)_DAT_112781da8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
    func_0x00010c179a20(*(undefined8 *)((long)puVar1 + lVar5));
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dcc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dcc) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781dd8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781dd8) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781e14);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781e14) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781de0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781de0) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_5;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112781df8) = (char)uVar6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10913d6ec; end: 10913dd43; -[SCGeoFilter encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913d6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_encodeWithCoder__1125c2658;
  puStack_38 = PTR_PTR_1127007d0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010c07a980(param_1);
  func_0x00010bf92da0(param_3);
  func_0x00010bf0b720(param_1);
  func_0x00010bf92e80(param_3);
  uVar2 = param_1;
  func_0x00010bfadea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf93ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  func_0x00010c113c80(param_1);
  func_0x00010bf92fc0(param_3);
  uVar2 = param_1;
  func_0x00010bfae360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9c720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  func_0x00010c14e3c0(param_1);
  func_0x00010bf92fc0(param_3);
  func_0x00010c104360(param_1);
  func_0x00010bf92fc0(param_3);
  func_0x00010c07f200(param_1);
  func_0x00010bf92da0(param_3);
  func_0x00010c073640(param_1);
  func_0x00010bf92da0(param_3);
  func_0x00010c077ba0(param_1);
  func_0x00010bf92da0(param_3);
  uVar2 = param_1;
  func_0x00010c24a620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  func_0x00010c26a4e0(param_1);
  func_0x00010bf92fc0(param_3);
  func_0x00010bf11b40(param_1);
  func_0x00010bf92fc0(param_3);
  func_0x00010bf11b60(param_1);
  func_0x00010bf92dc0(param_3);
  uVar2 = param_1;
  func_0x00010bf8b880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf8b8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  func_0x00010bf92da0(param_3);
  func_0x00010bf92da0(param_3);
  func_0x00010c280f40(param_1);
  func_0x00010bf92fc0(param_3);
  uVar2 = param_1;
  func_0x00010bfe8f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfe8f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c14fe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9ac80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9ad40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c280fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  func_0x00010bf8d420(param_1);
  func_0x00010bf92da0(param_3);
  uVar2 = param_1;
  func_0x00010c280f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c280f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  func_0x00010bf11e00(param_1);
  func_0x00010bf92fc0(param_3);
  uVar2 = param_1;
  func_0x00010bf8b6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf09360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0cc0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf0ed00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf5c860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9e8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(uVar2);
  func_0x00010c07eda0(param_1);
  func_0x00010bf92da0(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10913dd44; end: 10913de87; -[SCGeoFilter geoFilterImageWithCompletion:contextData:unifiedCameraObjectDataFetcher:userSession:bitmojiImageFetcher:bitmojiAvatarProvider:displayName:skipLensContent:] */

void FUN_10913dd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10913de88;
  puStack_80 = &UNK_110addcf0;
  uStack_78 = param_2;
  uStack_70 = param_4;
  uStack_68 = param_1;
  _objc_retain(param_4);
  func_0x00010c1098e0(param_2,param_3,&puStack_98,param_5,param_6,param_7,param_8,param_9,param_10,
                      param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_70);
  _objc_release(param_4);
  return;
}



/* Entry: 10913de88; end: 10913dfab;  */

void FUN_10913de88(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf93ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195a40(param_3);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c09d160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c1bede0(param_3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _CACurrentMediaTime();
    dVar3 = *(double *)(param_2 + 0x30);
    uVar1 = param_3;
    func_0x00010c09d160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191280(param_1 - dVar3);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c09d160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cda0();
    _objc_release(uVar1);
  }
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10913dfac; end: 10913e05f; -[SCGeoFilter prepareGeoFilterImageWithCompletion:contextData:unifiedCameraObjectDataFetcher:userSession:bitmojiImageFetcher:bitmojiAvatarProvider:displayName:skipLensContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913dfac(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  uVar9 = param_4;
  puVar10 = param_5;
  lVar11 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(puVar7);
  _objc_retain(uVar9);
  _objc_retain(puVar10);
  _objc_retain(lVar11);
  puVar15 = puVar1;
  func_0x00010bfe8f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar15 == (undefined *)0x0) {
    puVar16 = PTR_PTR_1126dd7b8;
    func_0x00010bf991a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = (undefined *)0x0;
    puVar13 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    puVar8 = puVar16;
    if (puVar16 == (undefined *)0x0) goto LAB_10913e240;
LAB_10913e4c8:
    puVar16 = puVar8;
    if (lVar11 == 0) goto LAB_10913e4e0;
    pcVar12 = *(code **)(lVar11 + 0x10);
  }
  else {
    lVar2 = *(long *)(puVar1 + _DAT_112781db4);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar16 = PTR_PTR_1126dd7b8;
      func_0x00010bf991a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 == (undefined *)0x0) {
        puVar16 = PTR_PTR_1126dd7b8;
        func_0x00010bf991a0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = (undefined *)0x0;
        puVar13 = (undefined *)0x0;
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar13 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar15);
        puVar15 = puVar16;
        if (((ulong)puVar13 & 1) == 0) {
          puVar15 = (undefined *)0x0;
        }
        _objc_retain(puVar15);
        _objc_release(puVar16);
        puVar16 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar4 = puVar16;
        _objc_opt_isKindOfClass(puVar16,puVar13);
        puVar5 = puVar16;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
        }
        _objc_retain(puVar5);
        _objc_release(puVar16);
        puVar16 = puVar5;
        func_0x00010c08fa60();
        if (puVar16 == (undefined *)0x0) {
          puVar13 = puVar10;
          func_0x00010bf12ea0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar14 == (undefined *)0x0) goto LAB_10913e47c;
LAB_10913e20c:
          puVar16 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar5);
          puVar13 = puVar5;
          if (puVar14 != (undefined *)0x0) goto LAB_10913e20c;
LAB_10913e47c:
          puVar16 = PTR_PTR_1126dd7b8;
          func_0x00010bf991a0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar8);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar8 = puVar16;
    if (puVar16 != (undefined *)0x0) goto LAB_10913e4c8;
LAB_10913e240:
    puVar8 = puVar13;
    func_0x00010c08fa60();
    if (puVar8 != (undefined *)0x0) {
      func_0x00010c073720();
      puVar8 = puVar15;
      if (((int)puVar1 != 0) &&
         (puVar1 = puVar15, func_0x00010c08fa60(), puVar1 == (undefined *)0x0)) {
        puVar1 = puVar7;
        func_0x00010bfb9b80(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = puVar5;
        func_0x00010bf1bae0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        _objc_release(puVar1);
        _objc_release(puVar5);
      }
      puVar1 = PTR_PTR_1126b58e0;
      _objc_opt_new();
      func_0x00010c2bae20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ae6c0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar15 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x15;
      func_0x000107c312b8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar11);
      _objc_retain(puVar15);
      func_0x00010bfa5460(uVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(lVar11);
      _objc_release(puVar15);
      _objc_release(puVar15);
      _objc_release(puVar1);
      puVar15 = puVar8;
      goto LAB_10913e4e0;
    }
    if (lVar11 == 0) goto LAB_10913e4e0;
    pcVar12 = *(code **)(lVar11 + 0x10);
    puVar8 = (undefined *)0x0;
  }
  (*pcVar12)(lVar11,0,puVar8);
LAB_10913e4e0:
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar16);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar7);
  return;
}



/* Entry: 10913e060; end: 10913e53f; -[SCGeoFilter fetchBitmojiImageWithContextData:bitmojiImageFetcher:bitmojiAvatarProvider:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913e060(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bfe8f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar11 = PTR_PTR_1126dd7b8;
    func_0x00010bf991a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
    puVar6 = puVar11;
    if (puVar11 == (undefined *)0x0) goto LAB_10913e240;
LAB_10913e4c8:
    puVar11 = puVar6;
    if (param_6 == 0) goto LAB_10913e4e0;
    pcVar7 = *(code **)(param_6 + 0x10);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112781db4);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar11 = PTR_PTR_1126dd7b8;
      func_0x00010bf991a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == (undefined *)0x0) {
        puVar11 = PTR_PTR_1126dd7b8;
        func_0x00010bf991a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = (undefined *)0x0;
        puVar8 = (undefined *)0x0;
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar8 = puVar11;
        _objc_opt_isKindOfClass(puVar11,puVar10);
        puVar10 = puVar11;
        if (((ulong)puVar8 & 1) == 0) {
          puVar10 = (undefined *)0x0;
        }
        _objc_retain(puVar10);
        _objc_release(puVar11);
        puVar11 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar3 = puVar11;
        _objc_opt_isKindOfClass(puVar11,puVar8);
        puVar4 = puVar11;
        if (((ulong)puVar3 & 1) == 0) {
          puVar4 = (undefined *)0x0;
        }
        _objc_retain(puVar4);
        _objc_release(puVar11);
        puVar11 = puVar4;
        func_0x00010c08fa60();
        if (puVar11 == (undefined *)0x0) {
          puVar8 = param_5;
          func_0x00010bf12ea0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 == (undefined *)0x0) goto LAB_10913e47c;
LAB_10913e20c:
          puVar11 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar4);
          puVar8 = puVar4;
          if (puVar9 != (undefined *)0x0) goto LAB_10913e20c;
LAB_10913e47c:
          puVar11 = PTR_PTR_1126dd7b8;
          func_0x00010bf991a0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar6);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
    puVar6 = puVar11;
    if (puVar11 != (undefined *)0x0) goto LAB_10913e4c8;
LAB_10913e240:
    puVar6 = puVar8;
    func_0x00010c08fa60();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c073720();
      puVar6 = puVar10;
      if (((int)param_1 != 0) &&
         (puVar4 = puVar10, func_0x00010c08fa60(), puVar4 == (undefined *)0x0)) {
        puVar6 = param_3;
        func_0x00010bfb9b80(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar3 = puVar4;
        func_0x00010bf1bae0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar3);
        _objc_release(puVar4);
      }
      puVar10 = PTR_PTR_1126b58e0;
      _objc_opt_new();
      func_0x00010c2bae20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ae6c0(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x15;
      func_0x000107c312b8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      _objc_retain(puVar4);
      func_0x00010bfa5460(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(param_6);
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
      puVar10 = puVar6;
      goto LAB_10913e4e0;
    }
    if (param_6 == 0) goto LAB_10913e4e0;
    pcVar7 = *(code **)(param_6 + 0x10);
    puVar6 = (undefined *)0x0;
  }
  (*pcVar7)(param_6,0,puVar6);
LAB_10913e4e0:
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10913e540; end: 10913e5a3;  */

bool FUN_10913e540(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 10913e5a4; end: 10913e67b;  */

void FUN_10913e5a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x30);
  if (param_2 == 0) {
    if (lVar2 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
      _objc_release(puVar1);
    }
  }
  else if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10913e67c; end: 10913e72f; -[SCGeoFilter imageLoadingKey:] */

void FUN_10913e67c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10913e730; end: 10913e877; -[SCGeoFilter loadContextFilterInputWithGroup:userSession:fetchErrors:contextFilterInputWrapper:] */

void FUN_10913e730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar2 = param_1;
    func_0x00010bf09360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      _dispatch_group_enter(param_3);
      puVar1 = PTR_PTR_1126dd710;
      func_0x00010bf09360(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10913e878;
      puStack_60 = &UNK_110addd70;
      _objc_retain(param_5);
      uStack_58 = param_5;
      _objc_retain(param_6);
      lStack_50 = param_6;
      _objc_retain(param_3);
      uStack_48 = param_3;
      func_0x00010bfa63c0(puVar1,param_2,param_1,&puStack_78);
      _objc_release(param_1);
      _objc_release(uStack_48);
      _objc_release(lStack_50);
      _objc_release(uStack_58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10913e878; end: 10913e8ef;  */

void FUN_10913e878(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,0,
                        &PTR____CFConstantStringClassReference_110f273f8,
                        &PTR____CFConstantStringClassReference_110f23f18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10913e8f0; end: 10913ea37; -[SCGeoFilter loadAudioInputWithGroup:userSession:fetchErrors:audioInputWrapper:] */

void FUN_10913e8f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar2 = param_1;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      _dispatch_group_enter(param_3);
      puVar1 = PTR_PTR_1126dd700;
      func_0x00010bf0ed00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10913ea38;
      puStack_60 = &UNK_110addda0;
      _objc_retain(param_5);
      uStack_58 = param_5;
      _objc_retain(param_6);
      lStack_50 = param_6;
      _objc_retain(param_3);
      uStack_48 = param_3;
      func_0x00010bfa63e0(puVar1,param_2,param_1,&puStack_78);
      _objc_release(param_1);
      _objc_release(uStack_48);
      _objc_release(lStack_50);
      _objc_release(uStack_58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10913ea38; end: 10913eaaf;  */

void FUN_10913ea38(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,0,
                        &PTR____CFConstantStringClassReference_110f273f8,
                        &PTR____CFConstantStringClassReference_110f23f18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10913eab0; end: 10913ed83; -[SCGeoFilter loadUCODataWithGroup:unifiedCameraObjectDataFetcher:fetchErrors:] */

void FUN_10913eab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c081f00();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar1 != 0) {
    if (param_4 == 0) {
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110f23f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar4,param_2,&PTR____CFConstantStringClassReference_110f273f8,puVar3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(param_1);
      func_0x00010befa120(param_5,param_2,puVar4);
    }
    else {
      _dispatch_group_enter(param_3);
      uVar1 = param_1;
      func_0x00010bfadea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x10913ec70;
      puStack_70 = &UNK_110adddd0;
      _objc_retain(param_5);
      uVar2 = param_3;
      puStack_68 = param_5;
      uStack_60 = param_1;
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfab0c0(param_4,param_2,uVar1,&puStack_88,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uStack_58);
      puVar4 = puStack_68;
    }
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10913ed84; end: 10913f057; -[SCGeoFilter loadUCOIconWithGroup:UCODataFetcher:fetchErrors:] */

void FUN_10913ed84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c081f00();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar1 != 0) {
    if (param_4 == 0) {
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110f23f78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar4,param_2,&PTR____CFConstantStringClassReference_110f273f8,puVar3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(param_1);
      func_0x00010befa120(param_5,param_2,puVar4);
    }
    else {
      _dispatch_group_enter(param_3);
      uVar1 = param_1;
      func_0x00010bfadea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x10913ef44;
      puStack_70 = &UNK_110adddd0;
      _objc_retain(param_5);
      uVar2 = param_3;
      puStack_68 = param_5;
      uStack_60 = param_1;
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfab0a0(param_4,param_2,uVar1,&puStack_88,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uStack_58);
      puVar4 = puStack_68;
    }
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10913f058; end: 10913f063; -[SCGeoFilter isEqual:] */

bool FUN_10913f058(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == param_1;
}



/* Entry: 10913f064; end: 10913f067; -[SCGeoFilter hash] */

void FUN_10913f064(void)

{
  return;
}



/* Entry: 10913f068; end: 10913f0bb; -[SCGeoFilter geofilterMissLoggingType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913f068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  uVar2 = *(undefined8 *)(puVar1 + _DAT_112781d9c);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10913f0bc; end: 10913f11b; -[SCGeoFilter urlAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913f0bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112781d9c);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110def0f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10913f11c; end: 10913f183; -[SCGeoFilter isActionmoji] */

bool FUN_10913f11c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c280fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 10913f184; end: 10913f1ef; -[SCGeoFilter isFriendFilter] */

undefined8 FUN_10913f184(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c280f20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0xffffffffdd72b039;
  func_0x00010b79daf4(0xffffffffdd72b039);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}


