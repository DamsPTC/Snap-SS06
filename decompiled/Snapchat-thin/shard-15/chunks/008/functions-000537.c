/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc735bc; end: 10bc73787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bc735bc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = (long)_DAT_112796260;
  puVar1 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar3 = *puVar1;
  uVar4 = uVar3 + 8;
  if (*(ulong *)(param_1 + lVar2) < uVar4) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    lVar2 = (long)_DAT_112796260;
    puVar1 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar3 = *puVar1;
    uVar4 = uVar3 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_112796258) + uVar3);
  *puVar1 = uVar4;
  if (*(ulong *)(param_1 + lVar2) < uVar4 + 8) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar1 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar4 = *puVar1;
    lVar2 = (long)_DAT_112796260;
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_10bc73674;
LAB_10bc73738:
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar1 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar4 = *puVar1;
    lVar2 = (long)_DAT_112796260;
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_10bc736bc;
  }
  else {
    *puVar1 = uVar4 + 8;
    uVar4 = uVar4 + 0x10;
    if (*(ulong *)(param_1 + lVar2) < uVar4) goto LAB_10bc73738;
LAB_10bc73674:
    *puVar1 = uVar4;
    uVar4 = uVar4 + 8;
    if (uVar4 <= *(ulong *)(param_1 + lVar2)) goto LAB_10bc736bc;
  }
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      &PTR____CFConstantStringClassReference_111026078,
                      &PTR____CFConstantStringClassReference_111026178);
  puVar1 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar4 = *puVar1 + 8;
LAB_10bc736bc:
  *puVar1 = uVar4;
  return uVar5;
}



/* Entry: 10bc73788; end: 10bc738ab;  */

undefined * FUN_10bc73788(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar4;
  ulong uVar5;
  uint uStack_64;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _class_copyPropertyList(param_1,&uStack_64);
  if (uStack_64 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + uVar5 * 8);
      _property_getName(lVar4);
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _property_copyAttributeValue(lVar4,&DAT_10f31a217);
      if (lVar4 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80();
        iVar1 = (int)puVar3;
        func_0x00010c0720c0();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc1338);
          func_0x00010c0720c0();
          if (iVar1 != 0) goto LAB_10bc737f0;
        }
        else {
LAB_10bc737f0:
          func_0x00010befa120(puVar2);
        }
        _free(lVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uStack_64);
  }
  _free(param_1);
  return puVar2;
}



/* Entry: 10bc738ac; end: 10bc73983;  */

undefined * FUN_10bc738ac(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  _objc_getAssociatedObject();
  if (puVar1 != (undefined *)0x0) {
    return puVar1;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = param_1;
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class();
  if (puVar2 != puVar3) {
    do {
      func_0x00010bfa0ca0(puVar2);
      func_0x00010befa160(puVar1);
      func_0x00010c262c40();
      puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
      _objc_opt_class();
    } while (puVar2 != puVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_setAssociatedObject(param_1,param_2,puVar1,0x301);
  return puVar1;
}



/* Entry: 10bc73984; end: 10bc73a03;  */

void FUN_10bc73984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_classForCoder_1125ac0c8);
  return;
}



/* Entry: 10bc73a04; end: 10bc73da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc73a04(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_48 = CONCAT71(uStack_48._1_7_,0x2d);
  func_0x00010bf06a40(*(undefined8 *)(param_3 + _DAT_112796278),param_2,&uStack_48,1);
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bf66840(&uStack_48,param_1);
  }
  uVar1 = *(ulong *)(param_3 + _DAT_112796278);
  func_0x00010c08fa60();
  if (uVar1 % 0x14 != 0) {
    func_0x00010bfec1e0(*(undefined8 *)(param_3 + _DAT_112796278),param_2,0x14 - uVar1 % 0x14);
  }
  func_0x00010bf06a40(*(undefined8 *)(param_3 + _DAT_112796278),param_2,&uStack_48,0x14);
  return;
}



/* Entry: 10bc73da4; end: 10bc73ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc73da4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uStack_11;
  
  uStack_11 = 1;
  func_0x00010bf06a40(*(undefined8 *)(param_3 + _DAT_112796278),param_2,&uStack_11,1);
  return;
}



/* Entry: 10bc73ddc; end: 10bc742bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc73ddc(uint *param_1,undefined8 param_2,uint *param_3)

{
  bool bVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 uVar10;
  uint *unaff_x21;
  uint *puVar11;
  uint *puVar12;
  uint *unaff_x22;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar13;
  uint *unaff_x28;
  long lVar14;
  long lVar15;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_304;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint auStack_244 [33];
  long lStack_1c0;
  uint *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  uint *puStack_198;
  uint *puStack_190;
  uint *puStack_188;
  uint *puStack_180;
  uint *puStack_178;
  uint *puStack_170;
  uint *puStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  uint *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint auStack_f4 [33];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  puVar5 = param_3;
  func_0x000107c31228(param_1,param_3);
  if (((ulong)puVar4 & 1) == 0) {
    unaff_x25 = param_1;
    func_0x00010bf39c80();
    unaff_x22 = (uint *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_class();
    if (unaff_x25 == unaff_x22) {
      lVar13 = *(long *)((long)param_3 + (long)_DAT_11279627c);
      lVar14 = lVar13;
      _CFDictionaryGetCount(lVar13);
      _CFDictionarySetValue(lVar13,param_1,lVar14 + 1);
      uVar10 = 0x1b;
    }
    else {
      uVar10 = 0xb;
    }
    unaff_x26 = &DAT_112796000;
    auStack_f4[0] = CONCAT31(auStack_f4[0]._1_3_,uVar10);
    func_0x00010bf06a40(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    uVar2 = *(ulong *)((long)param_3 + (long)_DAT_112796278);
    func_0x00010c08fa60();
    if ((uVar2 & 3) != 0) {
      func_0x00010bfec1e0(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    }
    unaff_x23 = param_1;
    func_0x00010bf529e0();
    auStack_f4[0] = (uint)unaff_x23;
    func_0x00010bf06a40(*(undefined8 *)((long)param_3 + (long)_DAT_112796278));
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar5 = (uint *)&uStack_140;
    puVar3 = param_1;
    func_0x00010bf52a60();
    if (puVar3 == (uint *)0x0) {
      unaff_x28 = (uint *)0x0;
      puVar11 = unaff_x23;
      if (unaff_x23 != (uint *)0x0) goto LAB_10bc73fb8;
      unaff_x21 = (uint *)0x0;
      puVar4 = (uint *)0x0;
    }
    else {
      lVar14 = 0;
      lVar13 = *plStack_130;
      puStack_148 = unaff_x25;
      do {
        puVar11 = (uint *)0x0;
        do {
          lVar15 = lVar14;
          if (*plStack_130 != lVar13) {
            _objc_enumerationMutation(param_1);
          }
          puVar4 = *(uint **)(lStack_138 + (long)puVar11 * 8);
          if (puVar4 == (uint *)0x0) {
            puVar4 = *(uint **)((long)param_3 + (long)_DAT_112796278);
            auStack_f4[0] = auStack_f4[0] & 0xffffff00;
            puVar5 = auStack_f4;
            func_0x00010bf06a40();
          }
          else {
            puVar5 = param_3;
            func_0x00010bdc14a0();
          }
          if (unaff_x23 <= (uint *)(lVar15 + 1U)) goto LAB_10bc73fa8;
          lVar14 = lVar15 + 1;
          puVar11 = (uint *)((long)puVar11 + 1);
        } while (puVar3 != puVar11);
        puVar5 = (uint *)&uStack_140;
        puVar3 = param_1;
        func_0x00010bf52a60();
      } while (puVar3 != (uint *)0x0);
      puVar4 = (uint *)0x0;
LAB_10bc73fa8:
      unaff_x28 = (uint *)(lVar15 + 1);
      unaff_x21 = (uint *)((long)unaff_x23 - (long)unaff_x28);
      puVar11 = unaff_x21;
      unaff_x24 = puVar3;
      unaff_x25 = puStack_148;
      if (unaff_x28 <= unaff_x23 && unaff_x21 != (uint *)0x0) {
LAB_10bc73fb8:
        do {
          puVar4 = *(uint **)((long)param_3 + (long)_DAT_112796278);
          auStack_f4[0] = auStack_f4[0] & 0xffffff00;
          puVar5 = auStack_f4;
          func_0x00010bf06a40();
          puVar11 = (uint *)((long)puVar11 + -1);
          unaff_x21 = (uint *)0x0;
        } while (puVar11 != (uint *)0x0);
      }
    }
    unaff_x27 = &DAT_112796000;
    if (unaff_x25 != unaff_x22) {
      param_3 = *(uint **)((long)param_3 + (long)_DAT_11279627c);
      puVar5 = param_3;
      _CFDictionaryGetCount();
      puVar5 = (uint *)((long)puVar5 + 1);
      puVar4 = param_3;
      _CFDictionarySetValue(param_3,param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_158 = 0x10bc7404c;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar4;
  puVar3 = puVar5;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  puStack_170 = param_3;
  puStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x000107c31228();
  if (((ulong)puVar11 & 1) != 0) goto LAB_10bc74270;
  puVar6 = puVar4;
  func_0x00010bf39c80();
  puVar7 = (uint *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_class();
  if (puVar6 == puVar7) {
    lVar13 = *(long *)((long)puVar5 + (long)_DAT_11279627c);
    lVar14 = lVar13;
    _CFDictionaryGetCount(lVar13);
    _CFDictionarySetValue(lVar13,puVar4,lVar14 + 1);
    uVar10 = 0x1c;
  }
  else {
    uVar10 = 0xc;
  }
  auStack_244[0] = CONCAT31(auStack_244[0]._1_3_,uVar10);
  func_0x00010bf06a40(*(undefined8 *)((long)puVar5 + (long)_DAT_112796278));
  uVar2 = *(ulong *)((long)puVar5 + (long)_DAT_112796278);
  func_0x00010c08fa60();
  if ((uVar2 & 3) != 0) {
    func_0x00010bfec1e0(*(undefined8 *)((long)puVar5 + (long)_DAT_112796278));
  }
  puVar8 = puVar4;
  func_0x00010bf529e0();
  auStack_244[0] = (uint)puVar8;
  func_0x00010bf06a40(*(undefined8 *)((long)puVar5 + (long)_DAT_112796278));
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puVar3 = (uint *)&uStack_290;
  puVar9 = puVar4;
  func_0x00010bf52a60();
  if (puVar9 == (uint *)0x0) {
    if (puVar8 != (uint *)0x0) goto LAB_10bc74228;
    puVar11 = (uint *)0x0;
  }
  else {
    lVar14 = 0;
    lVar13 = *plStack_280;
    do {
      puVar12 = (uint *)0x0;
      do {
        lVar15 = lVar14;
        if (*plStack_280 != lVar13) {
          _objc_enumerationMutation(puVar4);
        }
        puVar11 = *(uint **)(lStack_288 + (long)puVar12 * 8);
        if (puVar11 == (uint *)0x0) {
          puVar11 = *(uint **)((long)puVar5 + (long)_DAT_112796278);
          auStack_244[0] = auStack_244[0] & 0xffffff00;
          puVar3 = auStack_244;
          func_0x00010bf06a40();
        }
        else {
          puVar3 = puVar5;
          func_0x00010bdc14a0();
        }
        if (puVar8 <= (uint *)(lVar15 + 1U)) goto LAB_10bc74218;
        lVar14 = lVar15 + 1;
        puVar12 = (uint *)((long)puVar12 + 1);
      } while (puVar9 != puVar12);
      puVar3 = (uint *)&uStack_290;
      puVar9 = puVar4;
      func_0x00010bf52a60();
    } while (puVar9 != (uint *)0x0);
    puVar11 = (uint *)0x0;
LAB_10bc74218:
    bVar1 = (uint *)(lVar15 + 1) <= puVar8;
    puVar8 = (uint *)((long)puVar8 - (lVar15 + 1));
    if (bVar1 && puVar8 != (uint *)0x0) {
LAB_10bc74228:
      do {
        puVar11 = *(uint **)((long)puVar5 + (long)_DAT_112796278);
        auStack_244[0] = auStack_244[0] & 0xffffff00;
        puVar3 = auStack_244;
        func_0x00010bf06a40();
        puVar8 = (uint *)((long)puVar8 + -1);
      } while (puVar8 != (uint *)0x0);
    }
  }
  if (puVar6 != puVar7) {
    puVar11 = *(uint **)((long)puVar5 + (long)_DAT_11279627c);
    puVar3 = puVar11;
    _CFDictionaryGetCount();
    puVar3 = (uint *)((long)puVar3 + 1);
    _CFDictionarySetValue(puVar11,puVar4);
  }
LAB_10bc74270:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar11;
  func_0x000107c31228();
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar11;
    func_0x00010bf39c80();
    puVar4 = (uint *)PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_class();
    if (puVar5 == puVar4) {
      lVar13 = *(long *)((long)puVar3 + (long)_DAT_11279627c);
      lVar14 = lVar13;
      _CFDictionaryGetCount(lVar13);
      _CFDictionarySetValue(lVar13,puVar11,lVar14 + 1);
    }
    puStack_330 = &uStack_328;
    uStack_328 = 0;
    uStack_318 = 0x2020000000;
    uStack_310 = 0;
    puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_348 = 0xc2000000;
    pcStack_340 = FUN_10bc74550;
    puStack_338 = &UNK_110d95b78;
    puStack_320 = puStack_330;
    func_0x00010bf97fa0(puVar11);
    uVar10 = 0x2a;
    if (puVar5 != puVar4) {
      uVar10 = 0x2b;
    }
    uStack_370 = CONCAT71(uStack_370._1_7_,uVar10);
    func_0x00010bf06a40(*(undefined8 *)((long)puVar3 + (long)_DAT_112796278));
    uVar2 = *(ulong *)((long)puVar3 + (long)_DAT_112796278);
    func_0x00010c08fa60();
    if ((uVar2 & 3) != 0) {
      func_0x00010bfec1e0(*(undefined8 *)((long)puVar3 + (long)_DAT_112796278));
    }
    uStack_370 = CONCAT44(uStack_370._4_4_,*(undefined4 *)(puStack_320 + 3));
    func_0x00010bf06a40(*(undefined8 *)((long)puVar3 + (long)_DAT_112796278));
    uStack_370 = 0;
    uStack_360 = 0x2020000000;
    uStack_358 = 0;
    puStack_368 = &uStack_370;
    func_0x00010bf97fa0(puVar11);
    if ((ulong)puStack_368[3] < (ulong)*(uint *)(puStack_320 + 3)) {
      do {
        uStack_304 = 0;
        func_0x00010bf06a40(*(undefined8 *)((long)puVar3 + (long)_DAT_112796278));
        uStack_304 = 0;
        func_0x00010bf06a40(*(undefined8 *)((long)puVar3 + (long)_DAT_112796278));
        lVar14 = puStack_368[3];
        puStack_368[3] = lVar14 + 1U;
      } while (lVar14 + 1U < (ulong)*(uint *)(puStack_320 + 3));
    }
    if (puVar5 != puVar4) {
      lVar13 = *(long *)((long)puVar3 + (long)_DAT_11279627c);
      lVar14 = lVar13;
      _CFDictionaryGetCount(lVar13);
      _CFDictionarySetValue(lVar13,puVar11,lVar14 + 1);
    }
    __Block_object_dispose(&uStack_370,8);
    __Block_object_dispose(&uStack_328,8);
  }
  return;
}



/* Entry: 10bc742bc; end: 10bc7454f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc742bc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = param_1;
  func_0x000107c31228(param_1,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010bf39c80();
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_class();
    if (puVar1 == puVar2) {
      lVar6 = *(long *)(param_3 + _DAT_11279627c);
      lVar5 = lVar6;
      _CFDictionaryGetCount(lVar6);
      _CFDictionarySetValue(lVar6,param_1,lVar5 + 1);
    }
    puStack_90 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10bc74550;
    puStack_98 = &UNK_110d95b78;
    puStack_80 = puStack_90;
    func_0x00010bf97fa0(param_1);
    uVar4 = 0x2a;
    if (puVar1 != puVar2) {
      uVar4 = 0x2b;
    }
    uStack_d0 = CONCAT71(uStack_d0._1_7_,uVar4);
    func_0x00010bf06a40(*(undefined8 *)(param_3 + _DAT_112796278));
    uVar3 = *(ulong *)(param_3 + _DAT_112796278);
    func_0x00010c08fa60();
    if ((uVar3 & 3) != 0) {
      func_0x00010bfec1e0(*(undefined8 *)(param_3 + _DAT_112796278));
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,*(undefined4 *)(puStack_80 + 3));
    func_0x00010bf06a40(*(undefined8 *)(param_3 + _DAT_112796278));
    uStack_d0 = 0;
    uStack_c0 = 0x2020000000;
    uStack_b8 = 0;
    puStack_c8 = &uStack_d0;
    func_0x00010bf97fa0(param_1);
    if ((ulong)puStack_c8[3] < (ulong)*(uint *)(puStack_80 + 3)) {
      do {
        uStack_64 = 0;
        func_0x00010bf06a40(*(undefined8 *)(param_3 + _DAT_112796278));
        uStack_64 = 0;
        func_0x00010bf06a40(*(undefined8 *)(param_3 + _DAT_112796278));
        lVar5 = puStack_c8[3];
        puStack_c8[3] = lVar5 + 1U;
      } while (lVar5 + 1U < (ulong)*(uint *)(puStack_80 + 3));
    }
    if (puVar1 != puVar2) {
      lVar6 = *(long *)(param_3 + _DAT_11279627c);
      lVar5 = lVar6;
      _CFDictionaryGetCount(lVar6);
      _CFDictionarySetValue(lVar6,param_1,lVar5 + 1);
    }
    __Block_object_dispose(&uStack_d0,8);
    __Block_object_dispose(&uStack_88,8);
  }
  return;
}



/* Entry: 10bc74550; end: 10bc74567;  */

void FUN_10bc74550(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 10bc74568; end: 10bc74f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc74568(long param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = param_2;
  func_0x00010bf06a40(*(undefined8 *)(*(long *)(param_1 + 0x30) + (long)_DAT_112796278),param_2,
                      &uStack_38,4);
  uStack_34 = param_3;
  func_0x00010bf06a40(*(undefined8 *)(*(long *)(param_1 + 0x30) + (long)_DAT_112796278));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(long *)(lVar2 + 0x18) + 1;
  *(ulong *)(lVar2 + 0x18) = uVar1;
  if (*(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) <= uVar1) {
    *param_4 = 1;
  }
  return;
}



/* Entry: 10bc74f3c; end: 10bc74fc3;  */

void FUN_10bc74f3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  func_0x00010bf06a40(param_2,param_2,&uStack_28,8);
  uStack_28 = param_1[2];
  func_0x00010bf06a40(param_2);
  uStack_28._0_4_ = *(undefined4 *)(param_1 + 1);
  func_0x00010bf06a40(param_2);
  uStack_28 = CONCAT44(uStack_28._4_4_,*(undefined4 *)((long)param_1 + 0xc));
  func_0x00010bf06a40(param_2);
  return;
}



/* Entry: 10bc74fc4; end: 10bc75dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc74fc4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  ulong *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (((uint)param_3 & 0xff) < 0x17) {
    uVar13 = param_3 >> 8;
    switch(param_3 & 0xff) {
    case 0:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      bVar2 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar9);
      *puVar7 = uVar10;
      if ((bVar2 < 0x35) &&
         (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar2 * 8),
         pcVar8 != (code *)0x0)) {
        (*pcVar8)(param_1);
      }
      else {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        param_1 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setObject_forUInt64Key__112651bc0,param_1,uVar13);
      return;
    case 1:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      cVar5 = *(char *)(*(long *)(param_1 + _DAT_112796258) + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c173010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setBool_forUInt64Key__11263a620,cVar5 == '\r',uVar13);
      return;
    case 2:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      cVar5 = *(char *)(*(long *)(param_1 + _DAT_112796258) + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c1f5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setSInt8_forUInt64Key__11265ae30,(long)cVar5,uVar13);
      return;
    case 3:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar10 + 1;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 2;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 2;
      }
      sVar6 = *(short *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c1f4fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setSInt16_forUInt64Key__11265ae18,(long)sVar6,uVar13);
      return;
    case 4:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      uVar14 = *(undefined4 *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c1f4ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setSInt32_forUInt64Key__11265ae20,uVar14,uVar13);
      return;
    case 5:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c1f5010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setSInt64_forUInt64Key__11265ae28,uVar16,uVar13);
      return;
    case 6:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar9 = *puVar7;
      uVar10 = uVar9 + 1;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 1;
      }
      uVar3 = *(undefined1 *)(*(long *)(param_1 + _DAT_112796258) + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c21afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setUInt8_forUInt64Key__112664610,uVar3,uVar13);
      return;
    case 7:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar10 + 1;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 2;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 2;
      }
      uVar4 = *(undefined2 *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c21af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setUInt16_forUInt64Key__1126645f0,uVar4,uVar13);
      return;
    case 8:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      uVar14 = *(undefined4 *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c21af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setUInt32_forUInt64Key__112664600,uVar14,uVar13);
      return;
    case 9:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c21af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setUInt64_forUInt64Key__112664608,uVar16,uVar13);
      return;
    case 10:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      uVar14 = *(undefined4 *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c19de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar14,param_2,PTR_s_setFloat_forUInt64Key__1126451a8,uVar13);
      return;
    case 0xb:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      if (*(ulong *)(param_1 + _DAT_112796260) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      uVar16 = *(undefined8 *)(*(long *)(param_1 + _DAT_112796258) + uVar10);
      *puVar7 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010c191050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar16,param_2,PTR_s_setDouble_forUInt64Key__112641e30,uVar13);
      return;
    case 0xc:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      lVar11 = (long)_DAT_112796260;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        lVar11 = (long)_DAT_112796260;
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      lVar12 = *(long *)(param_1 + _DAT_112796258);
      uVar16 = *(undefined8 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 8;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 8;
        lVar12 = *(long *)(param_1 + _DAT_112796258);
      }
      uVar15 = *(undefined8 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c1de910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar16,uVar15,param_2,PTR_s_setPoint_forUInt64Key__112655468,uVar13);
      return;
    case 0xd:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      lVar11 = (long)_DAT_112796260;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        lVar11 = (long)_DAT_112796260;
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      lVar12 = *(long *)(param_1 + _DAT_112796258);
      uVar16 = *(undefined8 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 8;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 8;
        lVar12 = *(long *)(param_1 + _DAT_112796258);
      }
      uVar15 = *(undefined8 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c202cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar16,uVar15,param_2,PTR_s_setSize_forUInt64Key__11265e550,uVar13);
      return;
    case 0xe:
      uVar10 = **(ulong **)(param_1 + _DAT_11279625c);
      if ((uVar10 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_11279625c) = (uVar10 & 0xfffffffffffffff8) + 8;
      }
      FUN_10bc72774(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1e9130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setRect_forUInt64Key__112657e70,uVar13);
      return;
    case 0xf:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 3) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffffc) + 4;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 4;
      lVar11 = (long)_DAT_112796260;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        lVar11 = (long)_DAT_112796260;
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 4;
      }
      lVar12 = *(long *)(param_1 + _DAT_112796258);
      uVar14 = *(undefined4 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 4;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 4;
        lVar12 = *(long *)(param_1 + _DAT_112796258);
      }
      uVar1 = *(undefined4 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c1e6f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setRange_forUInt64Key__112657600,uVar14,uVar1,uVar13);
      return;
    case 0x10:
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar10 = *puVar7;
      if ((uVar10 & 7) != 0) {
        uVar10 = (uVar10 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar10;
      }
      uVar9 = uVar10 + 8;
      lVar11 = (long)_DAT_112796260;
      if (*(ulong *)(param_1 + lVar11) < uVar9) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                            &PTR____CFConstantStringClassReference_111026078,
                            &PTR____CFConstantStringClassReference_111026178);
        lVar11 = (long)_DAT_112796260;
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar10 = *puVar7;
        uVar9 = uVar10 + 8;
      }
      lVar12 = *(long *)(param_1 + _DAT_112796258);
      uVar16 = *(undefined8 *)(lVar12 + uVar10);
      *puVar7 = uVar9;
      uVar10 = uVar9 + 8;
      if (*(ulong *)(param_1 + lVar11) < uVar10) {
        func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
        puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
        uVar9 = *puVar7;
        uVar10 = uVar9 + 8;
        lVar12 = *(long *)(param_1 + _DAT_112796258);
      }
      uVar15 = *(undefined8 *)(lVar12 + uVar9);
      *puVar7 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010c220630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar16,uVar15,param_2,PTR_s_setVector_forUInt64Key__112665bb0,uVar13);
      return;
    case 0x11:
      uVar13 = **(ulong **)(param_1 + _DAT_11279625c);
      if ((uVar13 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_11279625c) = (uVar13 & 0xfffffffffffffff8) + 8;
      }
      FUN_10bc72b70(&uStack_100,param_1);
      func_0x00010c166460(param_2);
      break;
    case 0x12:
      uVar13 = **(ulong **)(param_1 + _DAT_11279625c);
      if ((uVar13 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_11279625c) = (uVar13 & 0xfffffffffffffff8) + 8;
      }
      FUN_10bc72dd0(&uStack_100,param_1);
      func_0x00010c1607c0(param_2);
      break;
    case 0x13:
      FUN_10bc7332c(&uStack_100,param_1);
      func_0x00010c174da0(param_2);
      break;
    case 0x14:
      FUN_10bc7332c(&uStack_100,param_1);
      FUN_10bc7332c(&uStack_e8,param_1);
      func_0x00010c174de0(param_2);
      break;
    case 0x15:
      FUN_10bc7332c(&uStack_80,param_1);
      FUN_10bc7332c(&uStack_68,param_1);
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      FUN_10bc7332c(&uStack_80,param_1);
      FUN_10bc7332c(&uStack_68,param_1);
      uStack_c8 = uStack_78;
      uStack_d0 = uStack_80;
      uStack_b8 = uStack_68;
      uStack_c0 = uStack_70;
      uStack_a8 = uStack_58;
      uStack_b0 = uStack_60;
      func_0x00010c174dc0(param_2);
      break;
    case 0x16:
      uVar10 = **(ulong **)(param_1 + _DAT_11279625c);
      if ((uVar10 & 7) != 0) {
        **(ulong **)(param_1 + _DAT_11279625c) = (uVar10 & 0xfffffffffffffff8) + 8;
      }
      FUN_10bc735bc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_setUIEdgeInsets_forUInt64Key__1126645d8,uVar13);
      return;
    }
  }
  return;
}



/* Entry: 10bc75dc0; end: 10bc75dc7; -[SCDataProvider isPlatformSafe] */

undefined1 FUN_10bc75dc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10bc75dc8; end: 10bc75e63; -[SCDataProvider subspan:len:] */

void FUN_10bc75dc8(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  if (-1 < (long)(param_4 | param_3)) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c08fa60();
    if (param_4 + param_3 <= uVar1) {
      _objc_alloc(PTR_PTR_1126d6338);
      func_0x00010c0084e0();
      _objc_alloc(PTR_PTR_1126dfd50);
      func_0x00010c0083e0();
      FUN_10bc75e64();
      goto LAB_10bc75e44;
    }
  }
  param_1 = 0;
LAB_10bc75e44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc75e64; end: 10bc75e6f;  */

void FUN_10bc75e64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bc75e70; end: 10bc75f4f; -[SCSubrangeData initWithData:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bc75e70(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270e150;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112796298;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(long *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    *(long *)((long)puVar1 + (long)_DAT_11279629c) = lVar3 + param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127962a0) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc75f50; end: 10bc75f5f; -[SCSubrangeData bytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bc75f50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279629c);
}



/* Entry: 10bc75f60; end: 10bc75f6f; -[SCSubrangeData length] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bc75f60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127962a0);
}



/* Entry: 10bc75f70; end: 10bc75f83; -[SCSubrangeData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc75f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796298,0);
  return;
}



/* Entry: 10bc75f84; end: 10bc76077;  */

bool FUN_10bc75f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retainAutorelease(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfad0c0();
  uVar1 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bdc3520();
  _objc_release(param_4);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  _setxattr(param_5,uVar1,uVar2,uVar3,0,1);
  if ((param_6 != (undefined8 *)0x0) && ((int)param_5 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_6 = puVar4;
  }
  return (int)param_5 == 0;
}



/* Entry: 10bc76078; end: 10bc760a7;  */

uint FUN_10bc76078(uint param_1)

{
  func_0x00010bfacc00();
  return param_1 & 1;
}



/* Entry: 10bc760a8; end: 10bc7612f;  */

void FUN_10bc760a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c3129c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfad300(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc76130; end: 10bc76237;  */

void FUN_10bc76130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c25ce20(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cc60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc76238; end: 10bc762c7; -[SCAbandonedDirectoryCheck _shouldIgnoreDirectory:toIgnore:] */

long FUN_10bc76238(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar2 = 0;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = 0;
      goto LAB_10bc762a4;
    }
  }
  uVar1 = param_3;
  func_0x00010bfad000(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf4b900(param_4,param_2,uVar1);
  _objc_release(uVar1);
LAB_10bc762a4:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10bc762c8; end: 10bc765bb; -[SCAbandonedDirectoryCheck sweepDirectoriesWhileIgnoring:dispatchGroup:] */

long FUN_10bc762c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  dVar14 = 6.81691147847594e-313;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puVar3 = PTR_PTR_1126e1468;
  _objc_alloc_init();
  puVar6 = PTR_PTR_1126b24e8;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f5800(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  uStack_80 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10bc765bc;
  puStack_f8 = &UNK_110d95c08;
  lStack_f0 = param_1;
  _objc_retain(param_3);
  puStack_d0 = &uStack_c8;
  lStack_e8 = param_3;
  _objc_retain(puVar2);
  puStack_e0 = puVar2;
  _objc_retain(puVar3);
  puStack_d8 = puVar3;
  func_0x00010c27b060(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dd1dd8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e6e198;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_98 = puVar6;
  puStack_90 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar5;
  _objc_release(uVar4);
  _objc_release(puVar6);
  if (param_4 == 0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    _dispatch_group_enter(param_4);
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10bc766e8;
    puStack_120 = &UNK_110849810;
    _objc_retain(param_4);
    ppuVar12 = &puStack_138;
    lStack_118 = param_4;
    _objc_retainBlock();
    _objc_release(lStack_118);
  }
  ppuVar10 = ppuVar12;
  func_0x00010bf3c460(puVar3);
  _objc_release(ppuVar12);
  _objc_release(puStack_d8);
  _objc_release(puStack_e0);
  _objc_release(lStack_e8);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar4 = 8;
  __Block_object_dispose(&uStack_c8,8);
  __Unwind_Resume();
  _objc_retain(uVar4);
  _objc_retain(ppuVar10);
  ppuVar12 = ppuVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar12;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar12);
  if ((int)ppuVar7 != 0) {
    ppuVar12 = ppuVar10;
    func_0x00010c0e00e0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    uVar8 = *(ulong *)(param_3 + 0x20);
    if ((dVar14 < -*(double *)(uVar8 + 0x10)) && (func_0x00010beb41e0(), (uVar8 & 1) == 0)) {
      lVar11 = *(long *)(*(long *)(param_3 + 0x40) + 8);
      *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      uVar13 = *(undefined8 *)(param_3 + 0x30);
      uVar9 = uVar4;
      func_0x00010c0899c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar13);
      _objc_release(uVar9);
      func_0x00010c0d1400(*(undefined8 *)(param_3 + 0x38));
    }
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar10);
  _objc_release(uVar4);
  return 1;
}



/* Entry: 10bc765bc; end: 10bc766e7;  */

undefined8 FUN_10bc765bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    uVar3 = *(ulong *)(param_2 + 0x20);
    if ((param_1 < -*(double *)(uVar3 + 0x10)) && (func_0x00010beb41e0(), (uVar3 & 1) == 0)) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 8);
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      uVar2 = param_3;
      func_0x00010c0899c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(uVar2);
      func_0x00010c0d1400(*(undefined8 *)(param_2 + 0x38));
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 10bc766e8; end: 10bc766ef;  */

void FUN_10bc766e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10bc766f0; end: 10bc7675f; -[SCAbandonedDirectoryCheck removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_10bc766f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_4);
  func_0x00010c1607a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264540(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc76760; end: 10bc76763; -[SCAbandonedDirectoryCheck removeAllUserSessionDataAsync] */

void FUN_10bc76760(void)

{
  return;
}



/* Entry: 10bc76764; end: 10bc76767; -[SCAbandonedDirectoryCheck handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_10bc76764(void)

{
  return;
}



/* Entry: 10bc76768; end: 10bc7678f; -[SCAbandonedDirectoryCheck reportMetrics] */

void FUN_10bc76768(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc76790; end: 10bc767bf; -[SCAbandonedDirectoryCheck .cxx_destruct] */

void FUN_10bc76790(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc767c0; end: 10bc768fb; -[SCDirectoryScrubMatcher initWithMatch:type:olderThan:lastModifiedRequired:policyPath:] */

undefined1 *
FUN_10bc767c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_11270e160;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be76c60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(-param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_6;
    if (param_7 == 0) {
      func_0x00010bea5a80(puVar1);
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_111026418;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
      *(undefined ***)((long)puVar1 + 0x30) = ppuVar5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc768fc; end: 10bc76923; -[SCDirectoryScrubMatcher pattern] */

void FUN_10bc768fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc76924; end: 10bc76b6b; -[SCDirectoryScrubMatcher _setMetricsIdentifier] */

void FUN_10bc76924(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ea2dd8);
  if ((int)uVar1 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_111026258);
    if ((int)uVar1 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_111026278);
      if ((int)uVar1 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_111026298);
        if ((int)uVar1 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_1110262b8);
          if ((int)uVar1 != 0) {
            uVar1 = *(undefined8 *)(param_1 + 0x30);
            *(undefined ***)(param_1 + 0x30) = &PTR____CFConstantStringClassReference_1110262b8;
            goto LAB_10bc769c4;
          }
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_1110262d8);
          if ((int)uVar1 == 0) {
            uVar1 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_1110262f8);
            if ((int)uVar1 == 0) {
              uVar1 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_111026318);
              if ((int)uVar1 == 0) {
                uVar1 = *(undefined8 *)(param_1 + 0x10);
                func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_111026338);
                if ((int)uVar1 == 0) {
                  uVar1 = *(undefined8 *)(param_1 + 0x10);
                  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_111026358
                                     );
                  if ((int)uVar1 == 0) {
                    uVar1 = *(undefined8 *)(param_1 + 0x10);
                    func_0x00010c0720c0(uVar1,param_2,
                                        &PTR____CFConstantStringClassReference_110ec7878);
                    if ((int)uVar1 == 0) {
                      uVar1 = *(undefined8 *)(param_1 + 0x10);
                      func_0x00010c0720c0(uVar1,param_2,
                                          &PTR____CFConstantStringClassReference_1110263b8);
                      if ((int)uVar1 == 0) {
                        uVar1 = *(undefined8 *)(param_1 + 0x10);
                        func_0x00010c0720c0(uVar1,param_2,
                                            &PTR____CFConstantStringClassReference_111026378);
                        if ((int)uVar1 == 0) {
                          uVar1 = *(undefined8 *)(param_1 + 0x10);
                          func_0x00010c0720c0(uVar1,param_2,
                                              &PTR____CFConstantStringClassReference_111026398);
                          if ((int)uVar1 == 0) {
                            uVar2 = *(undefined8 *)(param_1 + 0x10);
                            func_0x00010c0720c0(uVar2,param_2,
                                                &PTR____CFConstantStringClassReference_1110263d8);
                            uVar1 = *(undefined8 *)(param_1 + 0x30);
                            if ((int)uVar2 == 0) {
                              ppuVar3 = &PTR____CFConstantStringClassReference_111026578;
                            }
                            else {
                              ppuVar3 = &PTR____CFConstantStringClassReference_110f1d0f8;
                            }
                          }
                          else {
                            uVar1 = *(undefined8 *)(param_1 + 0x30);
                            ppuVar3 = &PTR____CFConstantStringClassReference_111026558;
                          }
                        }
                        else {
                          uVar1 = *(undefined8 *)(param_1 + 0x30);
                          ppuVar3 = &PTR____CFConstantStringClassReference_111026538;
                        }
                      }
                      else {
                        uVar1 = *(undefined8 *)(param_1 + 0x30);
                        ppuVar3 = &PTR____CFConstantStringClassReference_111026518;
                      }
                    }
                    else {
                      uVar1 = *(undefined8 *)(param_1 + 0x30);
                      ppuVar3 = &PTR____CFConstantStringClassReference_110dce338;
                    }
                  }
                  else {
                    uVar1 = *(undefined8 *)(param_1 + 0x30);
                    ppuVar3 = &PTR____CFConstantStringClassReference_1110264f8;
                  }
                }
                else {
                  uVar1 = *(undefined8 *)(param_1 + 0x30);
                  ppuVar3 = &PTR____CFConstantStringClassReference_1110264d8;
                }
              }
              else {
                uVar1 = *(undefined8 *)(param_1 + 0x30);
                ppuVar3 = &PTR____CFConstantStringClassReference_110de9e78;
              }
            }
            else {
              uVar1 = *(undefined8 *)(param_1 + 0x30);
              ppuVar3 = &PTR____CFConstantStringClassReference_1110264b8;
            }
          }
          else {
            uVar1 = *(undefined8 *)(param_1 + 0x30);
            ppuVar3 = &PTR____CFConstantStringClassReference_111026498;
          }
        }
        else {
          uVar1 = *(undefined8 *)(param_1 + 0x30);
          ppuVar3 = &PTR____CFConstantStringClassReference_111026478;
        }
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        ppuVar3 = &PTR____CFConstantStringClassReference_111026458;
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      ppuVar3 = &PTR____CFConstantStringClassReference_111026438;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dcc338;
  }
  *(undefined ***)(param_1 + 0x30) = ppuVar3;
LAB_10bc769c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc76b6c; end: 10bc76bdf; -[SCDirectoryScrubMatcher _predicateForType:parameter:] */

void FUN_10bc76b6c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *unaff_x20;
  
  _objc_retain(param_4);
  if (param_3 < 4) {
    unaff_x20 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        (&PTR_PTR_110d95cb8)[param_3]);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10bc76be0; end: 10bc76cc7; -[SCDirectoryScrubMatcher match:lastModified:] */

undefined8 FUN_10bc76be0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  if ((param_3 == 0) || ((param_4 == 0 && ((*(byte *)(param_1 + 0x28) & 1) != 0)))) {
    uVar4 = 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 1) {
      func_0x00010c0f58c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 != 3) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf99aa0(uVar4,param_2,lVar1);
      if ((int)uVar4 == 0) {
        uVar4 = 2;
        goto LAB_10bc76ca4;
      }
    }
    if (*(char *)(param_1 + 0x28) == '\x01') {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010c070260(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,param_4,
                          *(undefined8 *)(param_1 + 0x20));
      if ((int)puVar2 == 0) {
        uVar4 = 3;
        goto LAB_10bc76ca4;
      }
    }
    uVar4 = 0;
  }
LAB_10bc76ca4:
  _objc_release(param_4);
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 10bc76cc8; end: 10bc76ccf; -[SCDirectoryScrubMatcher metricsIdentifier] */

undefined8 FUN_10bc76cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10bc76cd0; end: 10bc76cd7; -[SCDirectoryScrubMatcher setMetricsIdentifier:] */

void FUN_10bc76cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10bc76cd8; end: 10bc76d1f; -[SCDirectoryScrubMatcher .cxx_destruct] */

void FUN_10bc76cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc76d20; end: 10bc76d53; -[SCDirectoryScrubber initWithDirectory:] */

void FUN_10bc76d20(void)

{
  func_0x00010c00caa0();
  return;
}



/* Entry: 10bc76d54; end: 10bc7704f; -[SCDirectoryScrubber initWithDirectory:fileMatchers:directoryMatchers:enforceUserScoping:maxDepth:maxMatchCount:isDryRun:enableSymlinkSplicing:] */

undefined8 *
FUN_10bc76d54(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined *param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = PTR_PTR_11270e168;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126e1400;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar4 = PTR_PTR_1126e1400;
    puStack_90 = puVar3;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar5 = PTR_PTR_1126e1400;
    puStack_88 = puVar4;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar6 = PTR_PTR_1126e1400;
    puStack_80 = puVar5;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar7 = PTR_PTR_1126e1400;
    puStack_78 = puVar6;
    _objc_alloc();
    func_0x00010c028b20(0);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR____NSArray0__struct_11034ab48;
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (param_4 != (undefined *)0x0) {
      puVar3 = param_4;
    }
    _objc_retain(puVar3);
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    if (param_5 != (undefined *)0x0) {
      puVar4 = param_5;
    }
    _objc_retain(puVar4);
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = param_6;
    puVar3 = PTR_PTR_1126e06d0;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = (undefined1)param_9;
    puVar1[0xb] = param_7;
    puVar1[0xc] = param_8;
    *(undefined1 *)(puVar1 + 0xd) = param_9._1_1_;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar9 = *(undefined8 *)(param_3 + 8);
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10bc77050; end: 10bc770d7; -[SCDirectoryScrubber kindName] */

void FUN_10bc77050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_1110265d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc770d8; end: 10bc777ab; -[SCDirectoryScrubber removeExpiredContentAsyncForReason:dispatchGroup:] */

/* WARNING: Removing unreachable block (ram,0x00010bc77354) */
/* WARNING: Removing unreachable block (ram,0x00010bc773fc) */

void FUN_10bc770d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x2020000000;
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  puStack_170 = &uStack_178;
  uStack_178 = 0;
  uStack_168 = 0x3032000000;
  pcStack_160 = FUN_10bc777ac;
  uStack_158 = 0x10bc777bc;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126e1468;
  puStack_150 = puVar1;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar3);
  uStack_a8 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  uStack_a0 = *(undefined8 *)PTR__NSURLFileSizeKey_11034ab08;
  uStack_98 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  uStack_90 = *(undefined8 *)PTR__NSURLCreationDateKey_11034ab00;
  uStack_88 = *(undefined8 *)PTR__NSURLContentAccessDateKey_11034aaf0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bad10;
  _objc_opt_new();
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x2020000000;
  uStack_180 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    ppuVar7 = *(undefined ***)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c0f5aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar7);
    if (*(long *)(param_1 + 0x58) == 1 &&
        ppuVar8 == &PTR____CFConstantStringClassReference_1110263f8) {
      puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar9;
      func_0x00010bf4dfe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(puVar9);
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c0ccd60();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar12;
      func_0x00010bf529e0(puVar12);
      FUN_10bc7ec08(uVar14,uVar3,puVar9);
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_retain(puVar12);
      puVar9 = puVar12;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(puVar12);
          }
          uVar3 = *(undefined8 *)((long)puVar13 * 8);
          func_0x00010c13b4c0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          _objc_release(0);
          if ((long)puStack_140[3] < 1) {
            _objc_release(uVar3);
            goto LAB_10bc7754c;
          }
          _objc_retainAutorelease(puVar5);
          puVar11 = puVar5;
          func_0x00010bed1e80(puVar5);
          _os_unfair_lock_lock();
          func_0x00010be8c140(param_1);
          _os_unfair_lock_unlock(puVar11);
          _objc_release(uVar3);
          puVar13 = puVar13 + 1;
        } while (puVar9 != puVar13);
        puVar9 = puVar12;
        func_0x00010bf52a60();
      }
LAB_10bc7754c:
      _objc_release(puVar12);
      _objc_release(puVar12);
      _objc_release(0);
      goto LAB_10bc77564;
    }
  }
  puVar9 = PTR_PTR_1126b24e8;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  func_0x00010c27b060(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar5);
LAB_10bc77564:
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (lVar6 == 1) {
    puVar12 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0dfd40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010c0ccd60();
    _objc_retainAutoreleasedReturnValue();
    FUN_10bc7ea94(uVar3,puVar9,puStack_190[3]);
  }
  else {
    puVar12 = *(undefined **)(param_1 + 8);
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bc7ea94(uVar3,puVar9,puStack_190[3]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  uVar3 = puStack_170[5];
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar10);
  func_0x00010bf3c460(puVar2);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010be07ae0(param_1);
  }
  else {
    func_0x00010be07a40(param_1);
  }
  __Block_object_dispose(&uStack_198,8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_178,8);
  _objc_release(puStack_150);
  __Block_object_dispose(&uStack_148,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_198,8);
    __Block_object_dispose(&uStack_178,8);
    lVar6 = 8;
    __Block_object_dispose(&uStack_148);
    __Unwind_Resume();
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 10bc777ac; end: 10bc777c3;  */

void FUN_10bc777ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bc777c4; end: 10bc77947;  */

undefined8 FUN_10bc777c4(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (0 < *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18)) {
    if (param_3 != 0) {
      cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x68);
      lVar5 = param_2;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      if (cVar1 == '\x01') {
        func_0x00010c25d040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
      lVar3 = lVar2;
      func_0x00010c0f5860();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      uVar6 = 1;
      lVar5 = lVar5 - *(long *)(param_1 + 0x50);
      if ((-1 < lVar5) && (lVar5 <= *(long *)(*(long *)(param_1 + 0x20) + 0x58))) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        _objc_retainAutorelease(uVar4);
        func_0x00010bed1e80();
        _os_unfair_lock_lock();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010becf700(uVar6);
        _os_unfair_lock_unlock(uVar4);
      }
      goto LAB_10bc77904;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + 1;
  }
  lVar2 = 0;
  uVar6 = 1;
LAB_10bc77904:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 10bc77948; end: 10bc779db;  */

void FUN_10bc77948(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 != 0) {
    func_0x00010bf3ec40(param_2);
    func_0x00010c0df780(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10bc779dc; end: 10bc77b53; -[SCDirectoryScrubber removeAllUserSessionDataAsync] */

undefined * FUN_10bc779dc(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (param_1[0x38] == '\x01') {
    puVar2 = PTR_PTR_1126e1468;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126b24e8;
    param_3 = *(ulong *)(param_1 + 8);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    func_0x00010c27b060(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((uVar4 & 1) == 0) {
    func_0x00010c0d14a0(*(undefined8 *)(puVar2 + 0x20));
  }
  _objc_release(param_2);
  return (undefined *)0x1;
}



/* Entry: 10bc77b54; end: 10bc77bd7;  */

undefined8 FUN_10bc77b54(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c0d14a0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 10bc77bd8; end: 10bc77be3;  */

void FUN_10bc77bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearTrashAsync__1125acac0,0);
  return;
}



/* Entry: 10bc77be4; end: 10bc77be7; -[SCDirectoryScrubber handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_10bc77be4(void)

{
  return;
}



/* Entry: 10bc77be8; end: 10bc77c0f; -[SCDirectoryScrubber reportMetrics] */

void FUN_10bc77be8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc77c10; end: 10bc77c67; -[SCDirectoryScrubber _emitDeleteFilesMetrics] */

void FUN_10bc77c10(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bc77c68;
  puStack_20 = &UNK_110d61148;
  lStack_18 = param_1;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x40),param_2,&puStack_38);
  return;
}



/* Entry: 10bc77c68; end: 10bc77def;  */

void FUN_10bc77c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  FUN_10bc7e408(uVar4,&PTR____CFConstantStringClassReference_110dab0d8,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  FUN_10bc7e408(uVar4,&PTR____CFConstantStringClassReference_110de9cf8,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  FUN_10bc7e638(uVar4,param_2,uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc77df0; end: 10bc77e47; -[SCDirectoryScrubber _emitDryDeleteFilesMetrics] */

void FUN_10bc77df0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bc77e48;
  puStack_20 = &UNK_110d61148;
  lStack_18 = param_1;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 10bc77e48; end: 10bc77f1b;  */

void FUN_10bc77e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  FUN_10bc7e120(uVar3,param_2,uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c067fc0(uVar1);
  FUN_10bc7e294(uVar3,param_2,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc77f1c; end: 10bc78223; -[SCDirectoryScrubber _removeFileIfExpired:properties:fileTrasher:metrics:currentMaxCount:] */

void FUN_10bc77f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10bc780a0;
  puStack_a8 = &UNK_110d95d08;
  uStack_a0 = uVar2;
  uStack_98 = uVar1;
  uStack_90 = param_3;
  lStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  func_0x00010bf97e80(uVar3,param_2,&puStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bc78224; end: 10bc78587; -[SCDirectoryScrubber _removeDirectoryIfExpired:properties:fileTrasher:metrics:currentMaxCount:] */

void FUN_10bc78224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10bc783a8;
  puStack_a8 = &UNK_110d95d08;
  uStack_a0 = uVar2;
  uStack_98 = uVar1;
  lStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  func_0x00010bf97e80(uVar3,param_2,&puStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bc78588; end: 10bc787cf; -[SCDirectoryScrubber _updateMetricsDataForRealRun:incrementCountBy:incrementSizeBy:deletionResult:] */

void FUN_10bc78588(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_5;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dab0d8;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110de9cf8;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_78 = puVar2;
    _objc_opt_new();
    uVar8 = 2;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_88,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar4,param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dd1dd8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar2,param_2,lVar6 + param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dd1dd8);
  _objc_release(puVar2);
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar7 = &PTR____CFConstantStringClassReference_110fe72f8;
  lVar5 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110fe72f8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c282800();
  func_0x00010bde8fa0(param_1,param_2,param_5);
  func_0x00010c0df880(puVar2,param_2,param_1 + lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1d0640(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110fe72f8);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar1 = *(long *)(param_3 + 0x48);
  func_0x00010c0dff20(lVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x48),param_2,puVar2,puVar3);
    _objc_release(puVar2);
  }
  lVar6 = *(long *)(param_3 + 0x48);
  func_0x00010c0e00e0(lVar6,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar2,param_2,lVar5 + (long)ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_110dd1dd8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar6;
  func_0x00010c0e00e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110fe72f8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c282800();
  func_0x00010bde8fa0(param_3,param_2,uVar8);
  func_0x00010c0df880(puVar2,param_2,param_3 + lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_110fe72f8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10bc787d0; end: 10bc7895b; -[SCDirectoryScrubber _updateMetricsDataForDryRun:incrementCountBy:incrementSizeBy:] */

void FUN_10bc787d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar2,param_2,lVar4 + param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110dd1dd8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar3;
  func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110fe72f8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c282800();
  func_0x00010bde8fa0(param_1,param_2,param_5);
  func_0x00010c0df880(puVar2,param_2,param_1 + lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110fe72f8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc7895c; end: 10bc78973; -[SCDirectoryScrubber _convertByteToKB:] */

long FUN_10bc7895c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (long)((double)param_3 / 1000.0);
}



/* Entry: 10bc78974; end: 10bc78bc7; -[SCDirectoryScrubber _getFilesCountAndSizeInDirectory:] */

undefined * FUN_10bc78974(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b24e8;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  lVar7 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  uStack_58 = *(undefined8 *)PTR__NSURLFileSizeKey_11034ab08;
  uStack_50 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  uStack_48 = *(undefined8 *)PTR__NSURLCreationDateKey_11034ab00;
  uStack_40 = *(undefined8 *)PTR__NSURLContentAccessDateKey_11034aaf0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27b060(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar7);
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dd1dd8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110fe72f8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar2;
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_70;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  ppuVar4 = ppuVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar4);
  if (((ulong)ppuVar5 & 1) == 0) {
    lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 8);
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
    ppuVar4 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c282800();
    lVar7 = *(long *)(*(long *)(param_3 + 0x28) + 8);
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + (long)ppuVar5;
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar6);
  return (undefined *)0x1;
}



/* Entry: 10bc78bc8; end: 10bc78c8b;  */

undefined8 FUN_10bc78bc8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__NSURLFileSizeKey_11034ab08);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c282800();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + uVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10bc78c8c; end: 10bc78e7b; -[SCDirectoryScrubber _updateMetrics:fileUrl:properties:] */

void FUN_10bc78c8c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0899c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bdfbb60(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_3,&PTR____CFConstantStringClassReference_110ddcc18);
  uVar4 = param_5;
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  uVar3 = param_2;
  func_0x00010bed44e0(param_2,param_3,uVar2,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_3,uVar3,uVar1);
  _objc_release(uVar3);
  uVar4 = param_6;
  func_0x00010c0e00e0(param_6,param_3,*(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  if (-2678400.0 <= param_1) {
    func_0x00010c26f3a0(uVar4);
    if (-1814400.0 <= param_1) {
      func_0x00010c26f3a0(uVar4);
      if (-1209600.0 <= param_1) goto LAB_10bc78e34;
      ppuVar5 = &PTR____CFConstantStringClassReference_111026658;
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_111026638;
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_111026618;
  }
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_3,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed44e0(param_2,param_3,uVar3,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_3,param_2,ppuVar5);
  _objc_release(param_2);
  _objc_release(uVar3);
LAB_10bc78e34:
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10bc78e7c; end: 10bc7902b; -[SCDirectoryScrubber _determineMetricsBucketForFile:] */

void FUN_10bc78e7c(long param_1,undefined8 param_2,undefined ***param_3)

{
  long lVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined ****ppppuVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined *puStack_198;
  undefined ***pppuStack_190;
  long lStack_188;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar13 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar13);
  lVar11 = 0x10;
  lVar2 = lVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar13);
      ppuVar8 = &PTR____CFConstantStringClassReference_111026678;
      uVar10 = 0x400;
      pppuVar4 = param_3;
      func_0x00010c11f440();
      ppuVar14 = (undefined **)param_3;
      if (pppuVar4 == (undefined ***)0x7fffffffffffffff) {
        func_0x00010c0f58c0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar3 = (undefined ***)ppuVar14;
        func_0x00010c08fa60();
        pppuVar4 = (undefined ***)ppuVar8;
        if (pppuVar3 == (undefined ***)0x0) {
          _objc_release(ppuVar14);
          ppuVar14 = &PTR____CFConstantStringClassReference_110ddcc18;
          pppuVar4 = (undefined ***)ppuVar8;
        }
      }
      else {
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_2;
      }
LAB_10bc78fe8:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(pppuVar4);
        _objc_retain(lVar11);
        _objc_retain(uVar10);
        pppuVar3 = pppuVar4;
        func_0x00010c0e00e0(pppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        _objc_release(pppuVar3);
        pppuVar3 = pppuVar4;
        func_0x00010c0e00e0(pppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        _objc_release(pppuVar3);
        uVar5 = uVar10;
        func_0x00010c0e00e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        func_0x00010c282820(uVar5);
        _objc_release(uVar5);
        if (lVar11 == 0) {
          ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dd1dd8;
          param_3 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e62718;
          pppuVar7 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
          pppuStack_1c8 = param_3;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar9 = &pppuStack_1c8;
          pppuVar3 = &ppuStack_1d8;
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          pppuStack_1c0 = pppuVar7;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bdc6ca0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dd1dd8;
          pppuVar7 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e62718;
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          pppuStack_1a0 = pppuVar7;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e6e198;
          ppppuVar9 = &pppuStack_1a0;
          pppuVar3 = &ppuStack_1b8;
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_198 = puVar6;
          pppuStack_190 = param_3;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
        _objc_release(pppuVar7);
        _objc_release(param_3);
        _objc_release(lVar11);
        _objc_release(pppuVar4);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
          ___stack_chk_fail();
          _objc_retain(ppppuVar9);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar4 = (undefined ***)PTR____NSArray0__struct_11034ab48;
          if (pppuVar3 != (undefined ***)0x0) {
            pppuVar4 = pppuVar3;
          }
          pppuVar3 = pppuVar4;
          func_0x00010bf529e0();
          ppuVar14 = (undefined **)pppuVar4;
          if (pppuVar3 < (undefined ***)0xa) {
            func_0x00010bf09f60(pppuVar4);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(pppuVar4);
          }
          _objc_release(pppuVar4);
          _objc_release(ppppuVar9);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
      return;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar13);
      }
      ppuVar14 = *(undefined ***)(lVar15 * 8);
      uVar10 = 0;
      pppuVar3 = (undefined ***)ppuVar14;
      pppuVar4 = param_3;
      func_0x00010c0bc560();
      if (pppuVar3 == (undefined ***)0x0) {
        func_0x00010c0f5aa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        goto LAB_10bc78fe8;
      }
      lVar15 = lVar15 + 1;
    } while (lVar2 != lVar15);
    lVar11 = 0x10;
    lVar2 = lVar13;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10bc7902c; end: 10bc7927f; -[SCDirectoryScrubber _updateBucket:properties:filenameForDetails:] */

void FUN_10bc7902c(undefined *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined ***pppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1dd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2827c0();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e62718);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2827c0();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSURLFileSizeKey_11034ab08);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar5 = lVar2;
  func_0x00010c282820(lVar2);
  _objc_release(lVar2);
  if (param_5 == 0) {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dd1dd8;
    param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110e62718;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = param_1;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5 + lVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &puStack_a8;
    pppuVar9 = &ppuStack_b8;
    pppuVar8 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar10,pppuVar9,2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdc6ca0(param_1,param_2,param_5,param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dd1dd8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e62718;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar7;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5 + lVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e6e198;
    ppuVar10 = &puStack_80;
    pppuVar9 = &ppuStack_98;
    pppuVar8 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar6;
    puStack_70 = param_1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar10,pppuVar9,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar10);
    func_0x00010c0e00e0(pppuVar9,param_2,&PTR____CFConstantStringClassReference_110e6e198);
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = (undefined ***)PTR____NSArray0__struct_11034ab48;
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar1 = pppuVar9;
    }
    pppuVar9 = pppuVar1;
    func_0x00010bf529e0();
    pppuVar8 = pppuVar1;
    if (pppuVar9 < (undefined ***)0xa) {
      func_0x00010bf09f60(pppuVar1,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(pppuVar1);
    }
    _objc_release(pppuVar1);
    _objc_release(ppuVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar8);
  return;
}



/* Entry: 10bc79280; end: 10bc79327; -[SCDirectoryScrubber _addFilename:toBucket:] */

void FUN_10bc79280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e6e198);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = puVar1;
  if (puVar2 < (undefined *)0xa) {
    func_0x00010bf09f60(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc79328; end: 10bc793e7; -[SCDirectoryScrubber _addError:fileUrl:metrics:] */

void FUN_10bc79328(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2d58;
  if (param_3 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c0899c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf971a0(puVar1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bdc7860(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e3f818,
                        param_5);
    _objc_release(param_5);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 10bc793e8; end: 10bc794b3; -[SCDirectoryScrubber _addNewParameter:forKey:metrics:] */

void FUN_10bc793e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_5,param_2,puVar1,param_4);
  }
  func_0x00010befa120(puVar1,param_2,param_3);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if ((undefined *)0xa < puVar2) {
    func_0x00010c12d3c0(puVar1,param_2,0);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc794b4; end: 10bc795cf; -[SCDirectoryScrubber _traversalOperationForFile:withProperties:trasher:maxCount:reportingMetrics:] */

undefined8
FUN_10bc794b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010be8c140(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
    _objc_release(param_5);
    func_0x00010bedbaa0(param_1,param_2,param_7,param_3,param_4);
  }
  else {
    func_0x00010be8be00(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
    _objc_release(param_5);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 10bc795d0; end: 10bc79647; -[SCDirectoryScrubber .cxx_destruct] */

void FUN_10bc795d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10bc79648; end: 10bc796f3; -[SCDiskUsageMetric init:localSizeBytes:recursiveSizeBytes:fileCount:] */

undefined1 *
FUN_10bc79648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270e170;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    *(undefined8 *)((long)puVar2 + 0x30) = 0;
    puVar1 = PTR____NSArray0__struct_11034ab48;
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x20) = param_6;
    *(undefined **)((long)puVar2 + 0x28) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10bc796f4; end: 10bc7988b; -[SCDiskUsageMetric init:localSizeBytes:fileCount:reportLimit:subdirectories:] */

undefined8 *
FUN_10bc796f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  puVar5 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_7);
  puStack_e0 = PTR_PTR_11270e170;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    lVar3 = param_7;
    func_0x00010bf51e00();
    uVar2 = puVar1[5];
    puVar1[5] = lVar3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[6] = param_6;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_7);
    lVar3 = param_7;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_7);
          }
          lVar4 = *(long *)(lStack_128 + lVar11 * 8);
          func_0x00010c124740();
          puVar1[3] = puVar1[3] + lVar4;
          lVar11 = lVar11 + 1;
        } while (lVar3 != lVar11);
        lVar3 = param_7;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_7);
    puVar7 = puVar5;
  }
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    puVar5 = (undefined8 *)param_3[1];
    func_0x00010c25ce80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010c25ce80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar5);
    if ((puVar1 == puVar6) || (puVar5 = puVar1, func_0x00010c0720c0(), ((ulong)puVar5 & 1) != 0)) {
      puVar10 = (undefined8 *)param_3[3];
      puVar5 = puVar7;
      func_0x00010c124740();
      if (puVar10 == puVar5) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)param_3[3];
        puVar10 = puVar7;
        func_0x00010c124740();
        puVar5 = (undefined8 *)0x1;
        if (puVar10 < puVar8) {
          puVar5 = (undefined8 *)0xffffffffffffffff;
        }
      }
    }
    else {
      puVar5 = puVar6;
      if (puVar1 != (undefined8 *)0x0) {
        puVar5 = puVar1;
      }
      func_0x00010bf433a0(puVar5);
    }
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar7);
    return puVar5;
  }
  return puVar1;
}



/* Entry: 10bc7988c; end: 10bc799bf; -[SCDiskUsageMetric compare:] */

ulong FUN_10bc7988c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c25ce80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c25ce80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  if ((uVar2 == uVar3) ||
     (uVar1 = uVar2, func_0x00010c0720c0(uVar2,param_2,uVar3), (uVar1 & 1) != 0)) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar1 = param_3;
    func_0x00010c124740();
    if (uVar5 == uVar1) {
      uVar1 = 0;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x18);
      uVar5 = param_3;
      func_0x00010c124740();
      uVar1 = 1;
      if (uVar5 < uVar4) {
        uVar1 = 0xffffffffffffffff;
      }
    }
  }
  else {
    uVar1 = uVar2;
    uVar5 = uVar3;
    if (uVar2 == 0) {
      uVar1 = uVar3;
      uVar5 = 0;
    }
    func_0x00010bf433a0(uVar1,param_2,uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10bc799c0; end: 10bc79b43; -[SCDiskUsageMetric isEqual:] */

bool FUN_10bc799c0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
    goto LAB_10bc79b24;
  }
  lVar2 = param_1;
  _objc_opt_class(param_1);
  lVar4 = param_3;
  func_0x00010c077980(param_3,param_2,lVar2);
  if ((int)lVar4 == 0) {
    bVar1 = false;
    goto LAB_10bc79b24;
  }
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar2 == lVar4) {
    lVar3 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(lVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 == 0) goto LAB_10bc79b18;
    lVar2 = param_3;
    func_0x00010c25eae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar2 != lVar4) goto LAB_10bc79a2c;
    lVar3 = param_3;
    func_0x00010c25eae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071b60(lVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 == 0) goto LAB_10bc79b18;
    lVar2 = param_3;
    func_0x00010c09df00();
    if (lVar2 != *(long *)(param_1 + 0x10)) goto LAB_10bc79b18;
    lVar2 = param_3;
    func_0x00010c124740();
    if (lVar2 != *(long *)(param_1 + 0x18)) goto LAB_10bc79b18;
    lVar2 = param_3;
    func_0x00010bfacaa0(param_3);
    bVar1 = lVar2 == *(long *)(param_1 + 0x20);
  }
  else {
LAB_10bc79a2c:
    _objc_release(lVar2);
LAB_10bc79b18:
    bVar1 = false;
  }
  _objc_release(param_3);
LAB_10bc79b24:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10bc79b44; end: 10bc79bff; -[SCDiskUsageMetric hash] */

ulong FUN_10bc79b44(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  ulong auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bfde980();
  auStack_50[1] = lVar2;
  auVar4 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x10),*(undefined1 (*) [16])(param_1 + 0x10),8,
                    1);
  auStack_50[3] = auVar4._8_8_;
  auStack_50[2] = auVar4._0_8_;
  auStack_50[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_50 + lVar3) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar2 + 8);
}



/* Entry: 10bc79c00; end: 10bc79c07; -[SCDiskUsageMetric path] */

undefined8 FUN_10bc79c00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc79c08; end: 10bc79c0f; -[SCDiskUsageMetric localSizeBytes] */

undefined8 FUN_10bc79c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bc79c10; end: 10bc79c17; -[SCDiskUsageMetric recursiveSizeBytes] */

undefined8 FUN_10bc79c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bc79c18; end: 10bc79c1f; -[SCDiskUsageMetric fileCount] */

undefined8 FUN_10bc79c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bc79c20; end: 10bc79c27; -[SCDiskUsageMetric reportLimit] */

undefined8 FUN_10bc79c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10bc79c28; end: 10bc79c2f; -[SCDiskUsageMetric subdirectories] */

undefined8 FUN_10bc79c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10bc79c30; end: 10bc79c5f; -[SCDiskUsageMetric .cxx_destruct] */

void FUN_10bc79c30(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc79c60; end: 10bc7a053; -[SCDiskUsageResult _scanRoot:] */

void FUN_10bc79c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc34e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bdc34e0(puVar1,param_2,0xd,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bdc34e0(puVar1,param_2,5,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfad000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010befa120(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  puVar7 = puVar4;
  func_0x00010bfad000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010befa120(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010bfad000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010befa120(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  puVar7 = puVar11;
  func_0x00010bfad000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010befa120(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  _objc_retain(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar6;
  _objc_release(uVar8);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bdfbbc0(param_1,param_2,puVar3,0x14,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x00010befa120(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bdfbbc0(param_1,param_2,puVar4,0x14,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x00010befa120(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bdfbbc0(param_1,param_2,puVar5,10,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x00010befa120(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bdfbbc0(param_1,param_2,puVar11,10,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x00010befa120(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  puVar10 = PTR_PTR_1126ba528;
  func_0x00010bf078e0(PTR_PTR_1126ba528);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bdfbba0(param_1,param_2,puVar10,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (lVar9 != 0) {
    func_0x00010befa120(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  uVar8 = param_3;
  func_0x00010c06e0e0();
  if ((int)uVar8 == 0) {
    _objc_retain(puVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar7;
    _objc_release(uVar8);
    func_0x00010be9ac80(param_1,param_2,param_3);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc7a054; end: 10bc7a09b; +[SCDiskUsageResult scan:] */

void FUN_10bc7a054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc_init(param_1);
  func_0x00010be9ac20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc7a09c; end: 10bc7a247; -[SCDiskUsageResult _scan:] */

void FUN_10bc7a09c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be9aca0(param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  _objc_opt_class();
  func_0x00010be0d8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        lVar7 = param_1;
        func_0x00010bdfbbc0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar13 * 8),10,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar7);
        }
        _objc_release(lVar7);
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      lVar11 = lVar2;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar2);
  uVar3 = param_3;
  func_0x00010c06e0e0();
  puVar10 = PTR____NSArray0__struct_11034ab48;
  if ((uVar3 & 1) == 0) {
    _objc_retain(puVar1);
    puVar10 = puVar1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar10;
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)puVar8;
  puVar10 = (undefined *)puVar8;
  _objc_retain();
  func_0x000107c31290();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    puVar10 = puVar5;
    func_0x00010bdfbba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (uVar3 != 0) {
      uVar6 = uVar3;
      func_0x00010bfacaa0();
      *(ulong *)(param_3 + 0x20) = uVar6;
      uVar6 = uVar3;
      func_0x00010c09df00();
      *(ulong *)(param_3 + 0x28) = uVar6;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lVar11 = *(long *)(param_3 + 0x10);
      _objc_retain(lVar11);
      lVar2 = lVar11;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar12 = *plStack_250;
        do {
          lVar13 = 0;
          do {
            if (*plStack_250 != lVar12) {
              _objc_enumerationMutation(lVar11);
            }
            lVar7 = *(long *)(lStack_258 + lVar13 * 8);
            func_0x00010c124740();
            *(long *)(param_3 + 0x28) = *(long *)(param_3 + 0x28) + lVar7;
            lVar13 = lVar13 + 1;
          } while (lVar2 != lVar13);
          lVar2 = lVar11;
          puVar9 = &uStack_260;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar11);
      puVar10 = (undefined *)puVar9;
    }
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b24e8;
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      func_0x00010c25ce00(puVar10,param_2,&PTR____CFConstantStringClassReference_111026698);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7f9a0(puVar1,param_2,&PTR____CFConstantStringClassReference_1110266d8,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      if (puVar1 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  return;
}



/* Entry: 10bc7a248; end: 10bc7a3eb; -[SCDiskUsageResult _scanHome:] */

void FUN_10bc7a248(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar7 = param_3;
  _objc_retain();
  func_0x000107c31290();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    puVar7 = puVar2;
    func_0x00010bdfbba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00010bfacaa0();
      *(long *)(param_1 + 0x20) = lVar4;
      lVar4 = lVar3;
      func_0x00010c09df00();
      *(long *)(param_1 + 0x28) = lVar4;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar8 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar8);
      lVar4 = lVar8;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar9 = *plStack_120;
        do {
          lVar10 = 0;
          do {
            if (*plStack_120 != lVar9) {
              _objc_enumerationMutation(lVar8);
            }
            lVar5 = *(long *)(lStack_128 + lVar10 * 8);
            func_0x00010c124740();
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar5;
            lVar10 = lVar10 + 1;
          } while (lVar4 != lVar10);
          lVar4 = lVar8;
          puVar6 = &uStack_130;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar8);
      puVar7 = (undefined *)puVar6;
    }
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b24e8;
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010c25ce00(puVar7,param_2,&PTR____CFConstantStringClassReference_111026698);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7f9a0(puVar1,param_2,&PTR____CFConstantStringClassReference_1110266d8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar1 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10bc7a3ec; end: 10bc7a493; +[SCDiskUsageResult _userScopedURLForDirectoryPath:] */

void FUN_10bc7a3ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b24e8;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c25ce00(param_3,param_2,&PTR____CFConstantStringClassReference_111026698);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7f9a0(puVar1,param_2,&PTR____CFConstantStringClassReference_1110266d8,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc7a494; end: 10bc7a503; +[SCDiskUsageResult _globalScopedURLForDirectoryPath:] */

void FUN_10bc7a494(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c25ce00(param_3,param_2,&PTR____CFConstantStringClassReference_1110266b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bc7a504; end: 10bc7a663; +[SCDiskUsageResult _extraDirectoriesToDeepScan] */

void FUN_10bc7a504(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be241c0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar3);
  }
  _objc_release(lVar3);
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be241c0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar4);
  }
  _objc_release(lVar4);
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bee7060(param_1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar3);
  }
  _objc_release(lVar3);
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee7060(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (param_1 != 0) {
    func_0x00010befa120(puVar1,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bc7a664; end: 10bc7aa2f; -[SCDiskUsageResult _determineMetricsForDirectoryAndSubdirectories:reportLimit:cancelationToken:] */

undefined *
FUN_10bc7a664(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             ulong param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar9 = (undefined *)0x0;
  if (param_3 != (undefined8 *)0x0) {
    uVar12 = param_5;
    func_0x00010c06e0e0();
    if ((uVar12 & 1) == 0) {
      puStack_118 = &uStack_120;
      uStack_120 = 0;
      uStack_110 = 0x2020000000;
      uStack_108 = 0;
      puStack_138 = &uStack_140;
      uStack_140 = 0;
      uStack_130 = 0x2020000000;
      uStack_128 = 0;
      puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b24e8;
      uStack_80 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
      uStack_78 = *(undefined8 *)PTR__NSURLFileSizeKey_11034ab08;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_10bc7aa30;
      puStack_168 = &UNK_110d95d68;
      puStack_150 = &uStack_120;
      _objc_retain(puVar1);
      puStack_148 = &uStack_140;
      puStack_160 = puVar1;
      _objc_retain(param_5);
      uStack_158 = param_5;
      func_0x00010c27b080(puVar9);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(puVar1);
      func_0x00010bf0a0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      _objc_retain(puVar1);
      puVar5 = &uStack_1c0;
      puVar3 = puVar1;
      func_0x00010bf52a60();
      if (puVar3 != (undefined8 *)0x0) {
        lVar10 = *plStack_1b0;
        do {
          puVar8 = (undefined8 *)0x0;
          do {
            if (*plStack_1b0 != lVar10) {
              _objc_enumerationMutation(puVar1);
            }
            puVar11 = *(undefined8 **)(lStack_1b8 + (long)puVar8 * 8);
            uVar12 = param_5;
            func_0x00010c06e0e0();
            if ((uVar12 & 1) != 0) {
              puVar9 = (undefined *)0x0;
              puVar3 = puVar1;
              goto LAB_10bc7a960;
            }
            uVar12 = param_1[1];
            puVar4 = puVar11;
            func_0x00010bfad000();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010bf4b900();
            _objc_release(puVar4);
            if ((uVar12 & 1) == 0) {
              puVar4 = param_1;
              func_0x00010bdfbba0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar11;
              if (puVar4 != (undefined8 *)0x0) {
                puVar5 = puVar4;
                func_0x00010befa120(puVar2);
              }
              _objc_release(puVar4);
            }
            puVar8 = (undefined8 *)((long)puVar8 + 1);
          } while (puVar3 != puVar8);
          puVar5 = &uStack_1c0;
          puVar3 = puVar1;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined8 *)0x0);
      }
      _objc_release(puVar1);
      uVar12 = param_5;
      func_0x00010c06e0e0();
      if ((uVar12 & 1) == 0) {
        puVar9 = PTR_PTR_1126e2d60;
        _objc_alloc();
        puVar3 = param_3;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfee240();
LAB_10bc7a960:
        _objc_release(puVar3);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      _objc_release(uStack_158);
      _objc_release(puStack_160);
      _objc_release(puVar1);
      __Block_object_dispose(&uStack_140,8);
      __Block_object_dispose(&uStack_120,8);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_140,8);
  uVar7 = 8;
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume();
  _objc_retain(uVar7);
  _objc_retain(puVar5);
  puVar1 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2827c0();
  *(undefined **)(*(long *)(param_3[6] + 8) + 0x18) =
       (undefined *)(*(long *)(*(long *)(param_3[6] + 8) + 0x18) + (long)puVar3);
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x00010bf1f3c0();
  _objc_release(puVar1);
  if ((int)puVar5 == 0) {
    *(long *)(*(long *)(param_3[7] + 8) + 0x18) = *(long *)(*(long *)(param_3[7] + 8) + 0x18) + 1;
  }
  else {
    func_0x00010befa120(param_3[4]);
  }
  uVar6 = param_3[5];
  func_0x00010c06e0e0(uVar6);
  _objc_release(uVar7);
  return (undefined *)(ulong)((uint)uVar6 ^ 1);
}



/* Entry: 10bc7aa30; end: 10bc7ab2b;  */

uint FUN_10bc7aa30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c2827c0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar1;
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lVar4;
  func_0x00010bf1f3c0();
  _objc_release(lVar4);
  if ((int)lVar1 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c06e0e0(uVar2);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10bc7ab2c; end: 10bc7ad7f; -[SCDiskUsageResult _determineMetricsForDirectory:cancelationToken:] */

undefined * FUN_10bc7ab2c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_3;
  uVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) ||
     (uVar1 = param_4, func_0x00010c06e0e0(), puVar9 = PTR_PTR_1126b24e8, (uVar1 & 1) != 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x2020000000;
    uStack_90 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x2020000000;
    uStack_b0 = 0;
    uStack_68 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    uStack_60 = *(undefined8 *)PTR__NSURLFileSizeKey_11034ab08;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    uVar7 = 1;
    uVar6 = param_3;
    func_0x00010c27b080(puVar9);
    _objc_release(puVar2);
    uVar1 = param_4;
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      puVar9 = PTR_PTR_1126e2d60;
      _objc_alloc();
      uVar1 = param_3;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_80[3];
      uVar6 = uVar1;
      func_0x00010bfee260();
      _objc_release(uVar1);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    _objc_release(param_4);
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_a8,8);
    __Block_object_dispose(&uStack_88,8);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_a8,8);
    uVar5 = 8;
    __Block_object_dispose(&uStack_88,8);
    __Unwind_Resume();
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    if ((uVar7 == 0) || (uVar1 = uVar7, func_0x00010c098a00(), uVar1 == 1)) {
      uVar1 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c2827c0();
      lVar8 = *(long *)(*(long *)(param_3 + 0x28) + 8);
      *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar3;
      _objc_release(uVar1);
      uVar1 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        lVar8 = *(long *)(*(long *)(param_3 + 0x30) + 8);
        *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
      }
    }
    uVar1 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2827c0();
    lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar3;
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c06e0e0(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    return (undefined *)(ulong)((uint)uVar4 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 10bc7ad80; end: 10bc7aee7;  */

uint FUN_10bc7ad80(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar4 = param_4, func_0x00010c098a00(), lVar4 == 1)) {
    uVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2827c0();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + uVar2;
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
    }
  }
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  *(ulong *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + uVar2;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return (uint)uVar3 ^ 1;
}



/* Entry: 10bc7aee8; end: 10bc7b20f; -[SCDiskUsageResult enumerateMetrics:] */

void FUN_10bc7aee8(long param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_200;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 != 0) && (puVar12 = (undefined8 *)0x0, *(long *)(param_1 + 0x18) != 0)) {
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lVar3 = param_1;
    func_0x00010bdfbbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &uStack_1b0;
    param_4 = (int)auStack_f0;
    param_5 = (undefined8 *)0x10;
    lStack_200 = lVar3;
    func_0x00010bf52a60();
    if (lStack_200 != 0) {
      lVar13 = *plStack_1a0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1a0 != lVar13) {
            _objc_enumerationMutation(lVar3);
          }
          puVar5 = PTR_PTR_1126b24e8;
          uVar16 = *(undefined8 *)(lStack_1a8 + lVar15 * 8);
          uVar4 = uVar16;
          func_0x00010c0f5800(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c22d3e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)param_3[2])(param_3,uVar16,puVar5);
          _objc_release(puVar5);
          _objc_release(uVar4);
          puVar5 = PTR_PTR_1126b24e8;
          uVar4 = uVar16;
          func_0x00010c0f5800(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c22d3e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uVar4 = uVar16;
          func_0x00010c25eae0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c133200(uVar16);
          lVar6 = param_1;
          func_0x00010bdfbbe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          lVar7 = lVar6;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar7 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar6);
              }
              uVar17 = *(undefined8 *)(lVar14 * 8);
              uVar4 = uVar17;
              func_0x00010c0f5800(uVar17);
              _objc_retainAutoreleasedReturnValue();
              uVar16 = uVar4;
              func_0x00010c0899c0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar5;
              func_0x00010c25ce00();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)param_3[2])(param_3,uVar17,puVar8);
              _objc_release(puVar8);
              _objc_release(uVar16);
              _objc_release(uVar4);
              lVar14 = lVar14 + 1;
            } while (lVar7 != lVar14);
            lVar7 = lVar6;
            func_0x00010bf52a60();
          }
          _objc_release(lVar6);
          _objc_release(puVar5);
          lVar15 = lVar15 + 1;
        } while (lVar15 != lStack_200);
        puVar12 = &uStack_1b0;
        param_4 = (int)auStack_f0;
        param_5 = (undefined8 *)0x10;
        lStack_200 = lVar3;
        func_0x00010bf52a60();
      } while (lStack_200 != 0);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(puVar12);
  puVar9 = puVar12;
  if (param_4 != 0) {
    func_0x00010c246d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  puVar11 = puVar9;
  if (((long)param_5 < 1) || (puVar10 = puVar9, func_0x00010bf529e0(), puVar10 <= param_5)) {
    _objc_retain(puVar9);
  }
  else {
    func_0x00010c25e980(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10bc7b210; end: 10bc7b2cf; -[SCDiskUsageResult _determineOrdering:sort:limit:] */

void FUN_10bc7b210(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (param_4 != 0) {
    func_0x00010c246d00(param_3,param_2,PTR_s_compare__1125ae690);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar3 = uVar1;
  if (((long)param_5 < 1) || (uVar2 = uVar1, func_0x00010bf529e0(), uVar2 <= param_5)) {
    _objc_retain(uVar1);
  }
  else {
    func_0x00010c25e980(uVar1,param_2,0,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10bc7b2d0; end: 10bc7b2d7; -[SCDiskUsageResult rootFileCount] */

undefined8 FUN_10bc7b2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bc7b2d8; end: 10bc7b2df; -[SCDiskUsageResult rootRecursiveSizeBytes] */

undefined8 FUN_10bc7b2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10bc7b2e0; end: 10bc7b31b; -[SCDiskUsageResult .cxx_destruct] */

void FUN_10bc7b2e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc7b31c; end: 10bc7b3a3; -[SCFileIOErrorMetric initWithFileIOType:fileIOCount:fileIOErrorCount:] */

undefined1 *
FUN_10bc7b31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e178;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}


