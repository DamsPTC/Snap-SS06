/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f9f928; end: 108f9fabf; -[NBPhoneNumberUtil replaceStringByRegex:regex:withTemplate:] */

void FUN_108f9f928(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_3);
  uVar1 = param_1;
  func_0x00010c0c1b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_1;
  if (uVar2 == 1) {
    func_0x00010c08fa60(param_3);
    uVar2 = param_1;
    func_0x00010c11f400();
    if (uVar2 != 0x7fffffffffffffff) {
      uVar2 = param_3;
      func_0x00010c0d3c80(param_3);
      func_0x00010c25cfa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_108f9fa80;
    }
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (1 < uVar2) {
      func_0x00010c08fa60(param_3);
      func_0x00010c25cfa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108f9fa80;
    }
  }
  uVar3 = param_3;
  func_0x00010bf51e00(param_3);
LAB_108f9fa80:
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f9fac0; end: 108f9fb93; -[NBPhoneNumberUtil matchFirstByRegex:regex:] */

void FUN_108f9fac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010c127e80(param_1,param_2,param_4,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  lVar2 = param_1;
  func_0x00010c0c1b40(param_1,param_2,param_3,0,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c0dfd20(lVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108f9fb94; end: 108f9fc33; -[NBPhoneNumberUtil matchesByRegex:regex:] */

void FUN_108f9fb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010c127e80(param_1,param_2,param_4,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  uVar2 = param_1;
  func_0x00010c0c1b40(param_1,param_2,param_3,0,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f9fc34; end: 108f9fdab; -[NBPhoneNumberUtil matchedStringByRegex:regex:] */

undefined * FUN_108f9fc34(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0c1b00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c11f2a0(*(undefined8 *)(lStack_118 + lVar15 * 8));
        lVar16 = param_3;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar12);
        _objc_release(lVar16);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = param_1;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar8 = &uStack_240;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    uStack_200 = 0;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_200;
    _objc_retain(uStack_200);
    func_0x00010c08fa60(puVar7);
    lVar2 = param_3;
    func_0x00010c0c1b40();
    _objc_retainAutoreleasedReturnValue();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    _objc_retain();
    puVar9 = auStack_1f8;
    uVar11 = 0x10;
    lVar13 = lVar2;
    func_0x00010bf52a60();
    iVar10 = (int)uVar11;
    puVar12 = (undefined *)0x0;
    if (lVar13 != 0) {
      lVar15 = *plStack_230;
      do {
        lVar16 = 0;
        do {
          if (*plStack_230 != lVar15) {
            _objc_enumerationMutation(lVar2);
          }
          lVar3 = *(long *)(lStack_238 + lVar16 * 8);
          func_0x00010c11f2a0();
          iVar10 = (int)uVar11;
          if (lVar3 == 0) {
            puVar12 = (undefined *)0x1;
            goto LAB_108f9fed8;
          }
          lVar16 = lVar16 + 1;
        } while (lVar13 != lVar16);
        puVar9 = auStack_1f8;
        uVar11 = 0x10;
        lVar13 = lVar2;
        puVar8 = &uStack_240;
        func_0x00010bf52a60();
        iVar10 = (int)uVar11;
      } while (lVar13 != 0);
      puVar12 = (undefined *)0x0;
    }
LAB_108f9fed8:
    _objc_release(lVar2);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return puVar12;
    }
    ___stack_chk_fail();
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    puVar12 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    puVar4 = (undefined1 *)puVar8;
    func_0x00010c08fa60();
    if (puVar4 != (undefined1 *)0x0) {
      puVar14 = (undefined1 *)0x0;
      do {
        func_0x00010bf35920();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar9;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if ((iVar10 == 0) || (puVar6 != (undefined1 *)0x0)) {
          func_0x00010bf070e0(puVar12);
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 108f9fdac; end: 108f9ff3b; -[NBPhoneNumberUtil isStartingStringByRegex:regex:] */

undefined * FUN_108f9fdac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined2 uStack_182;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined auStack_d8 [128];
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_e0 = 0;
  func_0x00010c127e80(param_1,param_2,param_4,0,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uStack_e0;
  _objc_retain(uStack_e0);
  uVar13 = param_3;
  func_0x00010c08fa60(param_3);
  lVar3 = param_1;
  func_0x00010c0c1b40(param_1,param_2,param_3,0,0,uVar13);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  puVar11 = auStack_d8;
  uVar13 = 0x10;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  iVar12 = (int)uVar13;
  puVar14 = (undefined *)0x0;
  if (lVar4 != 0) {
    lVar15 = *plStack_110;
    do {
      lVar17 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(lVar3);
        }
        lVar5 = *(long *)(lStack_118 + lVar17 * 8);
        func_0x00010c11f2a0();
        iVar12 = (int)uVar13;
        if (lVar5 == 0) {
          puVar14 = (undefined *)0x1;
          goto LAB_108f9fed8;
        }
        lVar17 = lVar17 + 1;
      } while (lVar4 != lVar17);
      puVar11 = auStack_d8;
      uVar13 = 0x10;
      lVar4 = lVar3;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
      iVar12 = (int)uVar13;
    } while (lVar4 != 0);
    puVar14 = (undefined *)0x0;
  }
LAB_108f9fed8:
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puVar14 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  puVar6 = (undefined1 *)puVar10;
  func_0x00010c08fa60();
  if (puVar6 != (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x0;
    do {
      puVar7 = (undefined1 *)puVar10;
      func_0x00010bf35920(puVar10,param_2,puVar16);
      uStack_182 = SUB82(puVar7,0);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_182,1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010c0dff20(puVar11,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      if ((iVar12 == 0) || (puVar9 != (undefined *)0x0)) {
        puVar1 = puVar8;
        if (puVar9 != (undefined *)0x0) {
          puVar1 = puVar9;
        }
        func_0x00010bf070e0(puVar14,param_2,puVar1);
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar16 = puVar16 + 1;
    } while (puVar6 != puVar16);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 108f9ff3c; end: 108fa004b; -[NBPhoneNumberUtil stringByReplacingOccurrencesString:withMap:removeNonMatches:] */

void FUN_108f9ff3c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined2 uStack_62;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar7 = 0;
    do {
      lVar4 = param_3;
      func_0x00010bf35920(param_3,param_2,lVar7);
      uStack_62 = (undefined2)lVar4;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_62,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_4;
      func_0x00010c0dff20(param_4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      if ((param_5 == 0) || (puVar6 != (undefined *)0x0)) {
        puVar1 = puVar5;
        if (puVar6 != (undefined *)0x0) {
          puVar1 = puVar6;
        }
        func_0x00010bf070e0(puVar2,param_2,puVar1);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fa004c; end: 108fa00db; -[NBPhoneNumberUtil isAllDigits:] */

bool FUN_108fa004c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010bf66760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = param_3;
  func_0x00010c11f340(param_3,param_2,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  return lVar3 == 0x7fffffffffffffff;
}



/* Entry: 108fa00dc; end: 108fa0203; -[NBPhoneNumberUtil getNationalSignificantNumber:] */

void FUN_108fa00dc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0d55e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = param_3;
  func_0x00010c084000();
  if ((int)ppuVar1 == 0) {
    ppuVar1 = param_3;
    func_0x00010c0d55e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar4 = ppuVar1;
    func_0x00010c25d700(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar4 = param_3;
    func_0x00010c0def00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar3 = ppuVar4;
    func_0x00010c067fc0(ppuVar4);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010c25cf00(&PTR____CFConstantStringClassReference_110daafd8,param_2,ppuVar3,
                        &PTR____CFConstantStringClassReference_110db1158,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 108fa0204; end: 108fa024f; +[NBPhoneNumberUtil initialize] */

void FUN_108fa0204(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff9a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initialize_1125f6bd0);
  uVar1 = ppuRam00000001137304d0;
  ppuRam00000001137304d0 = &PTR__OBJC_CLASS___NSConstantArray_1111836f8;
  _objc_release(uVar1);
  return;
}



/* Entry: 108fa0250; end: 108fa02f7; -[NBPhoneNumberUtil init] */

undefined1 * FUN_108fa0250(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff9a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dcc78;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    func_0x00010bfef2e0(puVar1);
    func_0x00010bfeefe0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fa02f8; end: 108fa058f; -[NBPhoneNumberUtil initRegularExpressionSet] */

void FUN_108fa02f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f13b78);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar2;
    _objc_release(uVar3);
  }
  if (lRam00000001137304d8 != -1) {
    func_0x000107c27d9c(0x1137304d8,&PTR___NSConcreteGlobalBlock_110ad0fd0);
  }
  _objc_release(0);
  return;
}



/* Entry: 108fa0590; end: 108fa05e3; -[NBPhoneNumberUtil DIGIT_MAPPINGS] */

void FUN_108fa0590(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730530 != -1) {
    func_0x000107c27d9c(0x113730530,&PTR___NSConcreteGlobalBlock_110ad0ff0);
  }
  uVar1 = uRam0000000113730538;
  _objc_retain(uRam0000000113730538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fa05e4; end: 108fa0a07;  */

void FUN_108fa05e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730538;
  puRam0000000113730538 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fa0a08; end: 108fa0a2f; -[NBPhoneNumberUtil initNormalizationMappings] */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_108fa0a08(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001137304e0 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110ad1010;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110ad1010);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_110ad1010);
  func_0x000107c61180();
  (*pcVar3)(0x1137304e0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 108fa0a30; end: 108fa1407;  */

void FUN_108fa0a30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730540;
  puRam0000000113730540 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730548;
  puRam0000000113730548 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf720a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730550;
  puRam0000000113730550 = puVar2;
  _objc_release(uVar1);
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1770;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1788;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110db2d38;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e5f238;
  pppuVar4 = &ppuStack_80;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar4,&ppuStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuRam0000000113730558;
  ppuRam0000000113730558 = (undefined **)puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c25cfc0(pppuVar4,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar3;
  func_0x00010c25d660(ppuVar3,param_2,pppuVar4,uRam0000000113730500);
  if ((int)ppuVar7 < 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    pppuVar5 = pppuVar4;
    func_0x00010c260c00(pppuVar4,param_2,(ulong)ppuVar7 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010c131120(ppuVar3,param_2,pppuVar5,uRam0000000113730510,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar5);
    func_0x00010c25d660(ppuVar3,param_2,ppuVar6,uRam0000000113730508);
    ppuVar7 = ppuVar6;
    if (0 < (int)ppuVar3) {
      func_0x00010c260c80(ppuVar6,param_2,0,(ulong)ppuVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
    }
  }
  _objc_release(pppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 108fa1408; end: 108fa151b; -[NBPhoneNumberUtil extractPossibleNumber:] */

void FUN_108fa1408(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010c25d660(param_1,param_2,param_3,uRam0000000113730500);
  if ((int)ppuVar3 < 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar1 = param_3;
    func_0x00010c260c00(param_3,param_2,(ulong)ppuVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010c131120(param_1,param_2,uVar1,uRam0000000113730510,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c25d660(param_1,param_2,ppuVar2,uRam0000000113730508);
    ppuVar3 = ppuVar2;
    if (0 < (int)param_1) {
      func_0x00010c260c80(ppuVar2,param_2,0,(ulong)param_1 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108fa151c; end: 108fa159b; -[NBPhoneNumberUtil isViablePhoneNumber:] */

undefined8 FUN_108fa151c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 2) {
    param_1 = 0;
  }
  else {
    func_0x00010c0c1b20(param_1,param_2,uRam0000000113730528,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa159c; end: 108fa1623; -[NBPhoneNumberUtil normalize:] */

void FUN_108fa159c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c1b20(param_1,param_2,&PTR____CFConstantStringClassReference_110f13fb8,param_3);
  if ((int)uVar1 == 0) {
    func_0x00010c0db420(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0db480(param_1,param_2,param_3,uRam0000000113730548,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa1624; end: 108fa165b; -[NBPhoneNumberUtil normalizeSB:] */

void FUN_108fa1624(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 != (undefined8 *)0x0) {
    func_0x00010c0db3a0(param_1,param_2,*param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = param_1;
  }
  return;
}



/* Entry: 108fa165c; end: 108fa16f3; -[NBPhoneNumberUtil normalizeDigitsOnly:] */

void FUN_108fa165c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc13a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d000(param_1,param_2,param_3,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa16f4; end: 108fa176b; -[NBPhoneNumberUtil normalizeDiallableCharsOnly:] */

void FUN_108fa16f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d000(param_1,param_2,param_3,uRam0000000113730540,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa176c; end: 108fa17e3; -[NBPhoneNumberUtil convertAlphaCharactersInNumber:] */

void FUN_108fa176c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d000(param_1,param_2,param_3,uRam0000000113730548,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa17e4; end: 108fa1917; -[NBPhoneNumberUtil getLengthOfGeographicalAreaCode:error:] */

undefined8 FUN_108fa17e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfc6f00(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa1918; end: 108fa1a07; -[NBPhoneNumberUtil getLengthOfGeographicalAreaCode:] */

long FUN_108fa1918(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfc97e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe0aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc78a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010c0d5660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar4 = param_3;
      func_0x00010c084000();
      if ((uVar4 & 1) == 0) goto LAB_108fa19d4;
    }
    else {
      _objc_release();
    }
    lVar2 = param_1;
    func_0x00010c078e40(param_1,param_2,param_3);
    if ((int)lVar2 != 0) {
      func_0x00010bfc6f20(param_1,param_2,param_3);
      goto LAB_108fa19d8;
    }
  }
LAB_108fa19d4:
  param_1 = 0;
LAB_108fa19d8:
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa1a08; end: 108fa1b3b; -[NBPhoneNumberUtil getLengthOfNationalDestinationCode:error:] */

undefined8 FUN_108fa1a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfc6f20(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa1b3c; end: 108fa1e27; -[NBPhoneNumberUtil getLengthOfNationalDestinationCode:] */

undefined ** FUN_108fa1b3c(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dcc78;
  uVar1 = param_3;
  func_0x00010bf9dc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde360(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  if ((int)puVar2 == 0) {
    _objc_retain();
  }
  else {
    func_0x00010bf51e00();
    func_0x00010c1992c0();
  }
  ppuVar3 = param_1;
  func_0x00010bfb5840(param_1,param_2,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010bf44720(param_1,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110f13ef8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c0d3c80();
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar5;
  func_0x00010bf529e0();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar4 = ppuVar5;
    func_0x00010c0dfd20(ppuVar5,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar9 == (undefined **)0x0) {
      func_0x00010c12d3c0(ppuVar5,param_2,0);
    }
  }
  ppuVar4 = ppuVar5;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126dcc78;
  if (ppuVar4 < (undefined **)0x3) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    uVar6 = param_3;
    func_0x00010bf53280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125ac0(puVar2,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(puVar2);
    puVar7 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
    ppuVar4 = ppuVar5;
    if (puVar7 != (undefined *)0x0) {
      lVar10 = *plStack_120;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar8 = *(ulong *)(lStack_128 + (long)puVar11 * 8);
          func_0x00010c0720c0(uVar8,param_2,&PTR____CFConstantStringClassReference_110ec59f8);
          if ((uVar8 & 1) != 0) {
            _objc_release(puVar2);
            func_0x00010bfc8260(param_1,param_2,param_3);
            if (param_1 != (undefined **)0x1) goto LAB_108fa1d98;
            func_0x00010c0dfd20(ppuVar5,param_2,2);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar4;
            func_0x00010c08fa60();
            ppuVar9 = (undefined **)(ulong)((int)ppuVar9 + 1);
            goto LAB_108fa1db8;
          }
          puVar11 = puVar11 + 1;
        } while (puVar7 != puVar11);
        puVar7 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar2);
LAB_108fa1d98:
    func_0x00010c0dfd20(ppuVar5,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar4;
    func_0x00010c08fa60();
LAB_108fa1db8:
    _objc_release(ppuVar4);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  ppuVar3 = ppuRam0000000113730558;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(ppuVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(ppuVar3);
    ppuVar4 = ppuVar3;
  }
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return ppuVar4;
}



/* Entry: 108fa1e28; end: 108fa1ea7; -[NBPhoneNumberUtil getCountryMobileTokenFromCountryCode:] */

void FUN_108fa1e28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = ppuRam0000000113730558;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(ppuVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(ppuVar2);
    ppuVar3 = ppuVar2;
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108fa1ea8; end: 108fa1fb3; -[NBPhoneNumberUtil normalizeHelper:normalizationReplacements:removeNonMatches:] */

void FUN_108fa1ea8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  if (lVar1 != 0) {
    lVar6 = 0;
    do {
      lVar3 = param_3;
      func_0x00010c260c80(param_3,param_2,lVar6,1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010c0dff20(param_4,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if ((param_5 == 0) || (lVar5 != 0)) {
        lVar4 = lVar3;
        if (lVar5 != 0) {
          lVar4 = lVar5;
        }
        func_0x00010bf070e0(puVar2,param_2,lVar4);
      }
      _objc_release(lVar5);
      _objc_release(lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fa1fb4; end: 108fa201b; -[NBPhoneNumberUtil formattingRuleHasFirstGroupOnly:] */

bool FUN_108fa1fb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  _objc_retain(param_3);
  func_0x00010c25d660(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110f13f58);
  lVar4 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (lVar4 != 0) {
    iVar5 = (int)param_1;
    bVar3 = SCARRY4(iVar5,1);
    bVar1 = iVar5 + 1 < 0;
    bVar2 = iVar5 == -1;
  }
  return !bVar2 && bVar1 == bVar3;
}



/* Entry: 108fa201c; end: 108fa20ab; -[NBPhoneNumberUtil isNumberGeographical:] */

undefined4 FUN_108fa201c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  _objc_retain(param_3);
  func_0x00010bfc8260(param_1,param_2,param_3);
  uVar3 = uRam00000001137304d0;
  uVar2 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf4b900(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  uVar4 = 0;
  if (param_1 == 1) {
    uVar4 = (undefined4)uVar3;
  }
  uVar1 = 1;
  if ((param_1 & 0xfffffffffffffffd) != 0) {
    uVar1 = uVar4;
  }
  return uVar1;
}



/* Entry: 108fa20ac; end: 108fa2167; -[NBPhoneNumberUtil isValidRegionCode:] */

bool FUN_108fa20ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dcc78;
  func_0x00010bfde360(PTR_PTR_1126dcc78,param_2,param_3);
  if (((int)puVar2 == 0) || (uVar3 = param_3, FUN_108fa2168(), (int)uVar3 == 0)) {
    bVar1 = false;
  }
  else {
    func_0x00010bfe0aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c28ed80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfc78a0(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108fa2168; end: 108fa21d7;  */

bool FUN_108fa2168(long param_1)

{
  long lVar1;
  
  lVar1 = lRam0000000113730560;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x113730560,&PTR___NSConcreteGlobalBlock_110ad1050);
  }
  lVar1 = param_1;
  func_0x00010c11f340(param_1);
  _objc_release(param_1);
  return lVar1 != 0x7fffffffffffffff;
}



/* Entry: 108fa21d8; end: 108fa2213; -[NBPhoneNumberUtil hasValidCountryCallingCode:] */

bool FUN_108fa21d8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcc78;
  func_0x00010c125ac0(PTR_PTR_1126dcc78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return puVar1 != (undefined *)0x0;
}



/* Entry: 108fa2214; end: 108fa2357; -[NBPhoneNumberUtil format:numberFormat:error:] */

void FUN_108fa2214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bfb5840(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa2358; end: 108fa25af; -[NBPhoneNumberUtil format:numberFormat:] */

void FUN_108fa2358(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d55e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071f40();
  puVar3 = PTR_PTR_1126dcc78;
  if ((int)uVar2 == 0) {
LAB_108fa2414:
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_3;
    func_0x00010c1201e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde360(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)puVar3 != 0) {
      uVar1 = param_3;
      func_0x00010c1201e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126dcc78;
      func_0x00010bfde360(PTR_PTR_1126dcc78,param_2,uVar1);
      if (((ulong)puVar3 & 1) != 0) goto LAB_108fa2584;
      goto LAB_108fa2414;
    }
  }
  uVar1 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfc7de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c108500(param_1,param_2,uVar1,0,uVar2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = param_1;
    func_0x00010bfde2e0(param_1,param_2,uVar1);
    if ((uVar4 & 1) == 0) {
      _objc_retain(uVar2);
      param_1 = uVar2;
    }
    else {
      puVar3 = PTR_PTR_1126dcc78;
      func_0x00010c125ac0(PTR_PTR_1126dcc78,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bfc78e0(param_1,param_2,uVar1,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c0c3940(param_1,param_2,param_3,uVar4,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010bfb5c20(param_1,param_2,uVar2,uVar4,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c108500(param_1,param_2,uVar1,param_4,uVar7,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
LAB_108fa2584:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fa25b0; end: 108fa2713; -[NBPhoneNumberUtil formatByPattern:numberFormat:userDefinedFormats:error:] */

void FUN_108fa25b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfb5900(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa2714; end: 108fa2a07; -[NBPhoneNumberUtil formatByPattern:numberFormat:userDefinedFormats:] */

void FUN_108fa2714(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfc7de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010bfde2e0(param_1,param_2,uVar1);
  if (((ulong)ppuVar3 & 1) == 0) {
    _objc_retain(ppuVar2);
    param_1 = ppuVar2;
  }
  else {
    puVar4 = PTR_PTR_1126dcc78;
    func_0x00010c125ac0(PTR_PTR_1126dcc78,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((puVar4 == (undefined *)0x0) ||
       (puVar11 = puVar4, func_0x00010bf529e0(), puVar11 == (undefined *)0x0)) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar4;
      func_0x00010c0dfd20(puVar4,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar3 = param_1;
    func_0x00010bfc78e0(param_1,param_2,uVar1,puVar11);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_1;
    func_0x00010bf39020(param_1,param_2,param_5,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 == (undefined **)0x0) {
      _objc_retain(ppuVar2);
      ppuVar8 = ppuVar2;
    }
    else {
      ppuVar6 = ppuVar5;
      func_0x00010bf51e00();
      ppuVar7 = ppuVar5;
      func_0x00010c0d56c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c08fa60();
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar8 = ppuVar3;
        func_0x00010c0d5660();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c08fa60();
        if (ppuVar9 == (undefined **)0x0) {
          ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        else {
          ppuVar10 = param_1;
          func_0x00010c131120(param_1,param_2,ppuVar7,
                              &PTR____CFConstantStringClassReference_110f13f78,ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar7);
          ppuVar9 = param_1;
          func_0x00010c131120(param_1,param_2,ppuVar10,
                              &PTR____CFConstantStringClassReference_110f13f98,
                              &PTR____CFConstantStringClassReference_110f14b18);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          ppuVar7 = ppuVar9;
        }
        func_0x00010c1cb200(ppuVar6,param_2,ppuVar9);
        _objc_release(ppuVar8);
      }
      ppuVar8 = param_1;
      func_0x00010bfb5c40(param_1,param_2,ppuVar2,ppuVar6,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
    }
    ppuVar6 = param_1;
    func_0x00010c0c3940(param_1,param_2,param_3,ppuVar3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108500(param_1,param_2,uVar1,param_4,ppuVar8,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar8);
    _objc_release(ppuVar3);
    _objc_release(puVar11);
    _objc_release(puVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa2a08; end: 108fa2b63; -[NBPhoneNumberUtil formatNationalNumberWithCarrierCode:carrierCode:error:] */

void FUN_108fa2a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfb5be0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa2b64; end: 108fa2ce3; -[NBPhoneNumberUtil formatNationalNumberWithCarrierCode:carrierCode:] */

void FUN_108fa2b64(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfc7de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfde2e0(param_1,param_2,uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(uVar2);
    param_1 = uVar2;
  }
  else {
    uVar3 = param_1;
    func_0x00010bfc97c0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfc78e0(param_1,param_2,uVar1,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0c3940(param_1,param_2,param_3,uVar4,2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bfb5c20(param_1,param_2,uVar2,uVar4,2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108500(param_1,param_2,uVar1,2,uVar6,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa2ce4; end: 108fa2d97; -[NBPhoneNumberUtil getMetadataForRegionOrCallingCode:regionCode:] */

void FUN_108fa2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfe0aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f13dd8);
  uVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    func_0x00010bfc78a0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfc7880(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108fa2d98; end: 108fa2ef3; -[NBPhoneNumberUtil formatNationalNumberWithPreferredCarrierCode:fallbackCarrierCode:error:] */

void FUN_108fa2d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfb5be0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa2ef4; end: 108fa2fb3; -[NBPhoneNumberUtil formatNationalNumberWithPreferredCarrierCode:fallbackCarrierCode:] */

void FUN_108fa2ef4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c106a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_retain(param_4);
    lVar2 = param_4;
  }
  else {
    lVar2 = param_3;
    func_0x00010c106a20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  func_0x00010bfb5be0(param_1,param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa2fb4; end: 108fa3117; -[NBPhoneNumberUtil formatNumberForMobileDialing:regionCallingFrom:withFormatting:error:] */

void FUN_108fa2fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfb5ca0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa3118; end: 108fa342b; -[NBPhoneNumberUtil formatNumberForMobileDialing:regionCallingFrom:withFormatting:] */

void FUN_108fa3118(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  uint param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfde2e0(param_1,param_2,ppuVar1);
  puVar7 = PTR_PTR_1126dcc78;
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c1201e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde360(puVar7,param_2,ppuVar2);
    if ((int)puVar7 == 0) {
      param_1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      param_1 = param_3;
      func_0x00010c1201e0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_108fa33d4;
  }
  ppuVar3 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c1992c0();
  ppuVar4 = param_1;
  func_0x00010bfc97c0(param_1,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0720c0(param_4,param_2,ppuVar4);
  if ((int)uVar8 == 0) {
    ppuVar2 = param_1;
    func_0x00010bf2c520(param_1,param_2,ppuVar3);
    if ((int)ppuVar2 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
      goto joined_r0x000108fa32e8;
    }
    func_0x00010bfb5840(param_1,param_2,ppuVar3,(param_5 & 1) != 0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar5 = param_1;
    func_0x00010bfc8260(param_1,param_2,ppuVar3);
    ppuVar6 = ppuVar4;
    func_0x00010c0720c0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110ec5a78);
    ppuVar2 = param_1;
    if (((int)ppuVar6 == 0) || (ppuVar5 != (undefined **)0x0)) {
      ppuVar6 = ppuVar4;
      func_0x00010c0720c0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e75778);
      puVar7 = PTR_PTR_1126dcc78;
      if ((ppuVar5 < (undefined **)0x3) && ((int)ppuVar6 != 0)) {
        ppuVar5 = ppuVar3;
        func_0x00010c106a20(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfde360(puVar7,param_2,ppuVar5);
        if ((int)puVar7 == 0) {
          ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        else {
          func_0x00010bfb5c00(param_1,param_2,ppuVar3,
                              &PTR____CFConstantStringClassReference_110daafd8);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar5);
      }
      else {
        ppuVar6 = ppuVar1;
        func_0x00010c2827c0();
        if ((((ppuVar6 == (undefined **)0x1) ||
             (ppuVar6 = ppuVar4,
             func_0x00010c0720c0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110f13dd8),
             ((ulong)ppuVar6 & 1) != 0)) ||
            ((ppuVar6 = ppuVar4,
             func_0x00010c0720c0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110f14b38),
             ppuVar5 < (undefined **)0x3 && ((int)ppuVar6 != 0)))) &&
           (ppuVar5 = param_1, func_0x00010bf2c520(param_1,param_2,ppuVar3), (int)ppuVar5 != 0)) {
          uVar8 = 1;
        }
        else {
          uVar8 = 2;
        }
        func_0x00010bfb5840(param_1,param_2,ppuVar3,uVar8);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bfb5be0(param_1,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db04f8);
      _objc_retainAutoreleasedReturnValue();
    }
joined_r0x000108fa32e8:
    if (param_5 == 0) {
      func_0x00010c0db480(param_1,param_2,ppuVar2,uRam0000000113730540,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar2);
      param_1 = ppuVar2;
    }
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
LAB_108fa33d4:
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa342c; end: 108fa3587; -[NBPhoneNumberUtil formatOutOfCountryCallingNumber:regionCallingFrom:error:] */

void FUN_108fa342c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfb5cc0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa3588; end: 108fa3947; -[NBPhoneNumberUtil formatOutOfCountryCallingNumber:regionCallingFrom:] */

void FUN_108fa3588(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_1;
  func_0x00010c082ea0(param_1,param_2,param_4);
  if (((ulong)ppuVar1 & 1) == 0) {
    func_0x00010bfb5840(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108fa3914;
  }
  lVar2 = param_3;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  ppuVar1 = param_1;
  func_0x00010bfc7de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010bfde2e0(param_1,param_2,lVar3);
  if (((ulong)ppuVar4 & 1) == 0) {
    _objc_retain(ppuVar1);
    param_1 = ppuVar1;
  }
  else {
    lVar2 = lVar3;
    func_0x00010c2827c0();
    if (lVar2 == 1) {
      ppuVar5 = param_1;
      func_0x00010c0786a0(param_1,param_2,param_4);
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)ppuVar5 == 0) {
LAB_108fa3714:
        ppuVar4 = param_1;
        func_0x00010bfe0aa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010bfc78a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        ppuVar6 = ppuVar5;
        func_0x00010c069700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_1;
        func_0x00010c0c1b20(param_1,param_2,&PTR____CFConstantStringClassReference_110f13fd8,ppuVar6
                           );
        puVar7 = PTR_PTR_1126dcc78;
        if ((int)ppuVar4 == 0) {
          ppuVar4 = ppuVar5;
          func_0x00010c106ca0(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfde360(puVar7,param_2,ppuVar4);
          _objc_release(ppuVar4);
          if ((int)puVar7 == 0) {
            ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          else {
            ppuVar14 = ppuVar5;
            func_0x00010c106ca0();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          _objc_retain(ppuVar6);
          ppuVar14 = ppuVar6;
        }
        ppuVar8 = param_1;
        func_0x00010bfc97c0(param_1,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = param_1;
        func_0x00010bfc78e0(param_1,param_2,lVar3,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = param_1;
        func_0x00010bfb5c20(param_1,param_2,ppuVar1,ppuVar9,1,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_1;
        func_0x00010c0c3940(param_1,param_2,param_3,ppuVar9,1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar4 = ppuVar14;
        lVar2 = lVar3;
        ppuVar13 = ppuVar10;
        ppuVar15 = ppuVar11;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110f14b58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c108500(param_1,param_2,lVar3,1,ppuVar10,ppuVar11,param_7,param_8,ppuVar4,lVar2,
                            ppuVar13,ppuVar15);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar14;
        func_0x00010c08fa60();
        ppuVar4 = param_1;
        if (ppuVar13 != (undefined **)0x0) {
          ppuVar4 = ppuVar12;
        }
        _objc_retain(ppuVar4);
        _objc_release(param_1);
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(ppuVar14);
        _objc_release(ppuVar6);
      }
      else {
        func_0x00010bfb5840(param_1,param_2,param_3,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110db27b8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_1;
      }
      _objc_release(ppuVar5);
      param_1 = ppuVar4;
    }
    else {
      ppuVar4 = param_1;
      func_0x00010bfc4280(param_1,param_2,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c071f40(lVar3,param_2,ppuVar4);
      _objc_release(ppuVar4);
      if ((int)lVar2 == 0) goto LAB_108fa3714;
      func_0x00010bfb5840(param_1,param_2,param_3,2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(ppuVar1);
  _objc_release(lVar3);
LAB_108fa3914:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa3948; end: 108fa3a2f; -[NBPhoneNumberUtil prefixNumberWithCountryCallingCode:phoneNumberFormat:formattedNationalNumber:formattedExtension:] */

void FUN_108fa3948(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f14bb8;
  }
  else if (param_4 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f14b98;
  }
  else if (param_4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f14b78;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dae518;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fa3a30; end: 108fa3b8b; -[NBPhoneNumberUtil formatInOriginalFormat:regionCallingFrom:error:] */

void FUN_108fa3a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfb5b80(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa3b8c; end: 108fa40a7; -[NBPhoneNumberUtil formatInOriginalFormat:regionCallingFrom:] */

undefined **
FUN_108fa3b8c(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             undefined **param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar11 = (undefined **)PTR_PTR_1126dcc78;
  ppuVar2 = param_3;
  func_0x00010c1201e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)ppuVar11;
  func_0x00010bfde360(ppuVar11,param_2,ppuVar2);
  if ((int)puVar3 == 0) {
    _objc_release(ppuVar2);
  }
  else {
    ppuVar11 = param_1;
    ppuVar9 = param_3;
    func_0x00010bfd7400(param_1,param_2,param_3);
    _objc_release(ppuVar2);
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar4 = param_3;
      func_0x00010c1201e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108fa3ea0;
    }
  }
  ppuVar2 = param_3;
  func_0x00010bf53540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar4 = param_1;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar10 = (undefined **)0x2;
    ppuVar9 = param_3;
    func_0x00010bfb5840(param_1,param_2,param_3,2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)0x0;
    goto LAB_108fa3ea0;
  }
  ppuVar11 = param_3;
  func_0x00010bf53540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar11;
  func_0x00010c067fc0();
  _objc_release(ppuVar11);
  ppuVar5 = param_1;
  if (ppuVar2 == (undefined **)0xa) {
    ppuVar10 = (undefined **)0x1;
    func_0x00010bfb5840(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)0x1;
    ppuVar4 = ppuVar5;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
LAB_108fa3df4:
    _objc_release(ppuVar5);
  }
  else if (ppuVar2 == (undefined **)0x5) {
    ppuVar9 = param_3;
    ppuVar10 = param_4;
    func_0x00010bfb5cc0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (ppuVar2 != (undefined **)0x1) {
      ppuVar2 = param_3;
      func_0x00010bf53280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc97c0(param_1,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      ppuVar11 = param_1;
      func_0x00010bfc7ea0(param_1,param_2,ppuVar5,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = (undefined **)0x2;
      unaff_x24 = param_1;
      ppuVar9 = param_3;
      func_0x00010bfb5840(param_1,param_2,param_3,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = unaff_x24;
      if ((ppuVar11 == (undefined **)0x0) ||
         (ppuVar2 = ppuVar11, func_0x00010c08fa60(), ppuVar2 == (undefined **)0x0)) {
LAB_108fa3dd8:
        _objc_retain(unaff_x24);
      }
      else {
        unaff_x25 = param_3;
        func_0x00010c1201e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_1;
        ppuVar9 = unaff_x25;
        ppuVar10 = ppuVar11;
        param_5 = ppuVar5;
        func_0x00010c120200(param_1,param_2,unaff_x25,ppuVar11,ppuVar5);
        _objc_release(unaff_x25);
        if ((int)ppuVar2 != 0) goto LAB_108fa3dd8;
        ppuVar2 = param_1;
        func_0x00010bfe0aa0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = ppuVar2;
        func_0x00010bfc78a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        ppuVar2 = param_1;
        func_0x00010bfc7de0(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_78 = unaff_x25;
        func_0x00010c0de980();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_1;
        ppuVar9 = unaff_x25;
        ppuVar10 = ppuVar2;
        func_0x00010bf39020(param_1,param_2,unaff_x25,ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        if (ppuVar6 == (undefined **)0x0) {
          _objc_retain(unaff_x24);
        }
        else {
          unaff_x25 = ppuVar6;
          func_0x00010c0d56c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = &PTR____CFConstantStringClassReference_110f14bd8;
          ppuVar7 = unaff_x25;
          func_0x00010c11f420();
          if ((ppuVar7 == (undefined **)0x0) ||
             (ppuVar10 = ppuVar7, ppuVar7 == (undefined **)0x7fffffffffffffff)) {
LAB_108fa4064:
            _objc_retain(unaff_x24);
          }
          else {
            ppuVar10 = unaff_x25;
            func_0x00010c260c80(unaff_x25,param_2,0,ppuVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            unaff_x25 = param_1;
            ppuVar9 = ppuVar10;
            func_0x00010c0db420(param_1,param_2,ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar10);
            ppuVar8 = unaff_x25;
            func_0x00010c08fa60();
            ppuVar10 = ppuVar7;
            if (ppuVar8 == (undefined **)0x0) goto LAB_108fa4064;
            ppuVar10 = ppuVar6;
            func_0x00010bf51e00();
            ppuStack_80 = ppuVar10;
            func_0x00010c1cb200();
            param_5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            ppuStack_70 = ppuVar10;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = (undefined **)0x2;
            ppuVar4 = param_1;
            ppuVar9 = param_3;
            ppuStack_88 = param_5;
            func_0x00010bfb5900(param_1,param_2,param_3,2,param_5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuStack_88);
            _objc_release(ppuStack_80);
          }
          _objc_release(unaff_x25);
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar2);
        _objc_release(ppuStack_78);
      }
      _objc_release(unaff_x24);
      _objc_release(ppuVar11);
      goto LAB_108fa3df4;
    }
    ppuVar10 = (undefined **)0x1;
    ppuVar9 = param_3;
    func_0x00010bfb5840(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar2 = param_3;
  func_0x00010c1201e0();
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar4 != (undefined **)0x0) &&
     (ppuVar5 = ppuVar2, func_0x00010c08fa60(), ppuVar5 != (undefined **)0x0)) {
    unaff_x24 = (undefined **)0x113730000;
    ppuVar11 = param_1;
    func_0x00010c0db480(param_1,param_2,ppuVar4,ppuRam0000000113730540,1);
    _objc_retainAutoreleasedReturnValue();
    param_5 = (undefined **)0x1;
    ppuVar10 = ppuRam0000000113730540;
    func_0x00010c0db480(param_1,param_2,ppuVar2,ppuRam0000000113730540,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar11;
    ppuVar9 = param_1;
    func_0x00010c0720c0(ppuVar11,param_2,param_1);
    if (((ulong)ppuVar5 & 1) == 0) {
      _objc_retain(ppuVar2);
      _objc_release(ppuVar4);
      ppuVar4 = ppuVar2;
    }
    _objc_release(param_1);
    _objc_release(ppuVar11);
  }
  _objc_release(ppuVar2);
LAB_108fa3ea0:
  _objc_release(param_4);
  ppuVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_98 = FUN_108fa40a8;
    ppuStack_e0 = ppuVar4;
    ppuStack_d8 = unaff_x25;
    ppuStack_d0 = unaff_x24;
    ppuStack_c8 = ppuVar11;
    ppuStack_c0 = ppuVar2;
    ppuStack_b8 = param_1;
    ppuStack_b0 = param_4;
    ppuStack_a8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar10);
    _objc_retain(param_5);
    ppuVar2 = ppuVar5;
    func_0x00010c0db420(ppuVar5,param_2,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar5;
    func_0x00010c07f860(ppuVar5,param_2,ppuVar2,ppuVar10);
    if ((int)ppuVar11 == 0) {
      ppuVar11 = (undefined **)0x0;
    }
    else {
      ppuVar11 = ppuVar10;
      func_0x00010c08fa60(ppuVar10);
      ppuVar9 = ppuVar2;
      func_0x00010c260c00(ppuVar2,param_2,ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      lStack_e8 = 0;
      ppuVar11 = ppuVar5;
      func_0x00010c0f3dc0(ppuVar5,param_2,ppuVar9,param_5,&lStack_e8);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_e8;
      func_0x00010c082e20(ppuVar5,param_2,ppuVar11);
      _objc_release(ppuVar11);
      _objc_release(ppuVar9);
      ppuVar11 = (undefined **)(ulong)((uint)(lVar1 == 0) & (uint)ppuVar5);
    }
    _objc_release(ppuVar2);
    _objc_release(param_5);
    _objc_release(ppuVar10);
    return ppuVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return ppuVar4;
}



/* Entry: 108fa40a8; end: 108fa41c3; -[NBPhoneNumberUtil rawInputContainsNationalPrefix:nationalPrefix:regionCode:] */

uint FUN_108fa40a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010c0db420(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c07f860(param_1,param_2,uVar2,param_4);
  if ((int)uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_4;
    func_0x00010c08fa60(param_4);
    uVar4 = uVar2;
    func_0x00010c260c00(uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    uVar3 = param_1;
    func_0x00010c0f3dc0(param_1,param_2,uVar4,param_5,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_58;
    func_0x00010c082e20(param_1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar5 = (uint)(lVar1 == 0) & (uint)param_1;
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 108fa41c4; end: 108fa423f; -[NBPhoneNumberUtil hasUnexpectedItalianLeadingZero:] */

uint FUN_108fa41c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c084000();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf53280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076300(param_1,param_2,uVar1);
    uVar2 = (uint)param_1 ^ 1;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108fa4240; end: 108fa435f; -[NBPhoneNumberUtil hasFormattingPatternForNumber:] */

bool FUN_108fa4240(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfc97c0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfc78e0(param_1,param_2,uVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    lVar5 = param_1;
    func_0x00010bfc7de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0de980(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39020(param_1,param_2,lVar6,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    bVar1 = param_1 != 0;
    _objc_release(param_1);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108fa4360; end: 108fa44bb; -[NBPhoneNumberUtil formatOutOfCountryKeepingAlphaChars:regionCallingFrom:error:] */

void FUN_108fa4360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfb5ce0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa44bc; end: 108fa491b; -[NBPhoneNumberUtil formatOutOfCountryKeepingAlphaChars:regionCallingFrom:] */

void FUN_108fa44bc(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c1201e0();
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar1 == (undefined **)0x0) ||
     (ppuVar2 = ppuVar1, func_0x00010c08fa60(), ppuVar2 == (undefined **)0x0)) {
    func_0x00010bfb5cc0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108fa48e0;
  }
  ppuVar2 = param_3;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010bfde2e0(param_1,param_2,ppuVar2);
  if (((ulong)ppuVar3 & 1) == 0) {
    _objc_retain(ppuVar1);
    param_1 = ppuVar1;
  }
  else {
    ppuVar3 = param_1;
    func_0x00010c0db480(param_1,param_2,ppuVar1,uRam0000000113730550,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = param_1;
    func_0x00010bfc7de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010c08fa60();
    if ((undefined **)0x3 < ppuVar4) {
      ppuVar4 = ppuVar1;
      func_0x00010c260c80(ppuVar1,param_2,0,3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      func_0x00010bfecec0(param_1,param_2,ppuVar3,ppuVar4);
      _objc_release(ppuVar4);
      if ((int)ppuVar5 != -1) {
        ppuVar4 = ppuVar3;
        func_0x00010c260c00(ppuVar3,param_2,(long)(int)ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar3 = ppuVar4;
      }
    }
    ppuVar4 = param_1;
    func_0x00010bfe0aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bfc78a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar2;
    func_0x00010c2827c0();
    if (ppuVar4 == (undefined **)0x1) {
      ppuVar4 = param_1;
      func_0x00010c0786a0(param_1,param_2,param_4);
      if ((int)ppuVar4 == 0) {
        if (ppuVar5 == (undefined **)0x0) goto LAB_108fa47b0;
LAB_108fa4774:
        ppuVar6 = ppuVar5;
        func_0x00010c069700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_1;
        func_0x00010c0c1b20(param_1,param_2,&PTR____CFConstantStringClassReference_110f13fd8,ppuVar6
                           );
        if ((int)ppuVar4 == 0) {
          ppuVar4 = ppuVar5;
          func_0x00010c106ca0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(ppuVar6);
          ppuVar4 = ppuVar6;
        }
        _objc_release(ppuVar6);
LAB_108fa47e0:
        ppuVar6 = param_1;
        func_0x00010bfc97c0(param_1,param_2,ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = param_1;
        func_0x00010bfc78e0(param_1,param_2,ppuVar2,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = param_1;
        func_0x00010c0c3940(param_1,param_2,param_3,ppuVar7,1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar4;
        func_0x00010c08fa60();
        if (ppuVar9 == (undefined **)0x0) {
          func_0x00010c108500(param_1,param_2,ppuVar2,1,ppuVar3,ppuVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          param_1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110f14b58);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        _objc_release(ppuVar4);
      }
      else {
        param_1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110db27b8);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (ppuVar5 == (undefined **)0x0) {
LAB_108fa47b0:
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
        goto LAB_108fa47e0;
      }
      ppuVar4 = param_1;
      func_0x00010bfc4280(param_1,param_2,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar2;
      func_0x00010c071f40(ppuVar2,param_2,ppuVar4);
      _objc_release(ppuVar4);
      if ((int)ppuVar6 == 0) goto LAB_108fa4774;
      ppuVar4 = ppuVar5;
      func_0x00010c0de980(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = param_1;
      func_0x00010bf39020(param_1,param_2,ppuVar4,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      if (ppuVar6 == (undefined **)0x0) {
        _objc_retain(ppuVar3);
        param_1 = ppuVar3;
      }
      else {
        ppuVar4 = ppuVar6;
        func_0x00010bf51e00(ppuVar6);
        func_0x00010c1d98c0();
        func_0x00010c19ec40(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110f14c18);
        func_0x00010bfb5c40(param_1,param_2,ppuVar3,ppuVar4,2,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
      }
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar3;
  }
  _objc_release(ppuVar2);
LAB_108fa48e0:
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa491c; end: 108fa4a47; -[NBPhoneNumberUtil formatNsn:metadata:phoneNumberFormat:carrierCode:] */

void FUN_108fa491c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c0699a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if ((param_5 == 2) || (lVar2 == 0)) {
    lVar2 = param_4;
    func_0x00010c0de980(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  lVar3 = param_1;
  func_0x00010bf39020(param_1,param_2,lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_retain(param_3);
    param_1 = param_3;
  }
  else {
    func_0x00010bfb5c40(param_1,param_2,param_3,lVar3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa4a48; end: 108fa4c27; -[NBPhoneNumberUtil chooseFormattingPatternForNumber:nationalNumber:] */

void FUN_108fa4a48(ulong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar2 = auStack_f0;
  lVar8 = 0x10;
  puVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130);
  if (puVar1 != (undefined1 *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar9 = *(undefined1 **)(lStack_128 + (long)puVar11 * 8);
        puVar2 = puVar9;
        func_0x00010c08de80();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf529e0();
        _objc_release(puVar2);
        if (puVar3 == (undefined1 *)0x0) {
LAB_108fa4b64:
          puVar3 = puVar9;
          func_0x00010c0f5aa0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_1;
          puVar7 = (undefined8 *)puVar3;
          puVar2 = param_4;
          func_0x00010c0c1b20(param_1,param_2,puVar3);
          _objc_release(puVar3);
          if ((uVar4 & 1) != 0) {
            _objc_retain(puVar9);
            goto LAB_108fa4bd0;
          }
        }
        else {
          puVar2 = puVar9;
          func_0x00010c08de80();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_1;
          func_0x00010c25d660(param_1,param_2,param_4,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if ((int)uVar4 == 0) goto LAB_108fa4b64;
        }
        puVar11 = puVar11 + 1;
      } while (puVar1 != puVar11);
      puVar2 = auStack_f0;
      lVar8 = 0x10;
      puVar1 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130);
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar9 = (undefined1 *)0x0;
LAB_108fa4bd0:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  _objc_retain(param_6);
  puVar1 = puVar2;
  func_0x00010bfb5800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf87f80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (lVar8 == 2) {
    puVar5 = PTR_PTR_1126dcc78;
    func_0x00010bfde360(PTR_PTR_1126dcc78,param_2,param_6);
    if (((int)puVar5 == 0) || (puVar9 = puVar11, func_0x00010c08fa60(), puVar9 == (undefined1 *)0x0)
       ) {
      func_0x00010c0d56c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126dcc78;
      func_0x00010bfde360(PTR_PTR_1126dcc78,param_2,puVar3);
      if ((int)puVar5 == 0) goto LAB_108fa4e00;
      puVar9 = param_3;
      func_0x00010c130e40(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f13f38,
                          puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0f5aa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131120(param_3,param_2,puVar7,puVar6,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar9);
    }
    else {
      puVar3 = param_3;
      func_0x00010c131120(param_3,param_2,puVar11,&PTR____CFConstantStringClassReference_110f13f18,
                          param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_3;
      func_0x00010c130e40(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f13f38,
                          puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar2;
      func_0x00010c0f5aa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131120(param_3,param_2,puVar7,puVar1,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar9;
    }
LAB_108fa4ed0:
    _objc_release(puVar3);
    puVar9 = param_3;
  }
  else {
    func_0x00010c0d56c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
LAB_108fa4e00:
    puVar6 = puVar2;
    func_0x00010c0f5aa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c131120(param_3,param_2,puVar7,puVar6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    if (lVar8 == 3) {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f14c38);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010c131120(param_3,param_2,puVar9,puVar5,
                          &PTR____CFConstantStringClassReference_110daafd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar5);
      func_0x00010c131120(param_3,param_2,puVar3,uRam0000000113730520,
                          &PTR____CFConstantStringClassReference_110db3638);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108fa4ed0;
    }
  }
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108fa4c28; end: 108fa4f23; -[NBPhoneNumberUtil formatNsnUsingPattern:formattingPattern:numberFormat:carrierCode:] */

void FUN_108fa4c28(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bfb5800(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf87f80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  if (param_5 == 2) {
    puVar3 = PTR_PTR_1126dcc78;
    func_0x00010bfde360(PTR_PTR_1126dcc78,param_2,param_6);
    if (((int)puVar3 == 0) || (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 == 0)) {
      func_0x00010c0d56c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126dcc78;
      func_0x00010bfde360(PTR_PTR_1126dcc78,param_2,lVar5);
      if ((int)puVar3 == 0) goto LAB_108fa4e00;
      lVar4 = param_1;
      func_0x00010c130e40(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110f13f38,
                          lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c0f5aa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131120(param_1,param_2,param_3,lVar6,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar4);
    }
    else {
      lVar5 = param_1;
      func_0x00010c131120(param_1,param_2,lVar2,&PTR____CFConstantStringClassReference_110f13f18,
                          param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c130e40(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110f13f38,
                          lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_4;
      func_0x00010c0f5aa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131120(param_1,param_2,param_3,lVar1,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar4;
    }
  }
  else {
    func_0x00010c0d56c0(param_4);
    _objc_retainAutoreleasedReturnValue();
LAB_108fa4e00:
    lVar4 = param_4;
    func_0x00010c0f5aa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c131120(param_1,param_2,param_3,lVar4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar5);
    if (param_5 != 3) goto LAB_108fa4ed8;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f14c38);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c131120(param_1,param_2,lVar6,puVar3,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(puVar3);
    func_0x00010c131120(param_1,param_2,lVar5,uRam0000000113730520,
                        &PTR____CFConstantStringClassReference_110db3638);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  lVar6 = param_1;
LAB_108fa4ed8:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108fa4f24; end: 108fa4f2f; -[NBPhoneNumberUtil getExampleNumber:error:] */

void FUN_108fa4f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getExampleNumberForType_type_err_1125ceea8,param_3,0,param_4);
  return;
}



/* Entry: 108fa4f30; end: 108fa506b; -[NBPhoneNumberUtil getExampleNumberForType:type:error:] */

void FUN_108fa4f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c082ea0(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfe0aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfc78a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfc8220(param_1,param_2,uVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126dcc78;
    uVar1 = uVar3;
    func_0x00010bf9a720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde360(puVar4,param_2,uVar1);
    _objc_release(uVar1);
    if ((int)puVar4 == 0) {
      param_1 = 0;
    }
    else {
      uVar1 = uVar3;
      func_0x00010bf9a720(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f3dc0(param_1,param_2,uVar1,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa506c; end: 108fa5423; -[NBPhoneNumberUtil getExampleNumberForNonGeoEntity:error:] */

void FUN_108fa506c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfe0aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc7880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126dcc78;
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c0cf3c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf9a720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde360(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126dcc78;
    lVar1 = lVar2;
    if ((int)puVar4 == 0) {
      lVar3 = lVar2;
      func_0x00010c273480(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf9a720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfde360(puVar6,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar3);
      puVar4 = PTR_PTR_1126dcc78;
      if ((int)puVar6 == 0) {
        lVar3 = lVar2;
        func_0x00010c22b920(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf9a720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfde360(puVar4,param_2,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar3);
        puVar6 = PTR_PTR_1126dcc78;
        if ((int)puVar4 == 0) {
          lVar3 = lVar2;
          func_0x00010c2a0c60(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010bf9a720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfde360(puVar6,param_2,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar3);
          puVar4 = PTR_PTR_1126dcc78;
          if ((int)puVar6 == 0) {
            lVar3 = lVar2;
            func_0x00010c2a08c0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar3;
            func_0x00010bf9a720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfde360(puVar4,param_2,lVar5);
            _objc_release(lVar5);
            _objc_release(lVar3);
            puVar6 = PTR_PTR_1126dcc78;
            if ((int)puVar4 == 0) {
              lVar3 = lVar2;
              func_0x00010c27e4c0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar3;
              func_0x00010bf9a720();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfde360(puVar6,param_2,lVar5);
              _objc_release(lVar5);
              _objc_release(lVar3);
              puVar4 = PTR_PTR_1126dcc78;
              if ((int)puVar6 == 0) {
                lVar3 = lVar2;
                func_0x00010c108e60(lVar2);
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar3;
                func_0x00010bf9a720();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfde360(puVar4,param_2,lVar5);
                _objc_release(lVar5);
                _objc_release(lVar3);
                if ((int)puVar4 == 0) goto LAB_108fa53f0;
                func_0x00010c108e60();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010c27e4c0();
                _objc_retainAutoreleasedReturnValue();
              }
            }
            else {
              func_0x00010c2a08c0();
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            func_0x00010c2a0c60();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          func_0x00010c22b920();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010c273480();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c0cf3c0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = lVar1;
    func_0x00010bf9a720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f14c58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f3dc0(param_1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f13d78,
                          param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar3);
      goto LAB_108fa53f4;
    }
  }
LAB_108fa53f0:
  param_1 = 0;
LAB_108fa53f4:
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa5424; end: 108fa55cb; -[NBPhoneNumberUtil maybeGetFormattedExtension:metadata:numberFormat:] */

void FUN_108fa5424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126dcc78;
  uVar1 = param_3;
  func_0x00010bf9dc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde360(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126dcc78;
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar2 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_108fa55a0;
  }
  uVar1 = param_3;
  if (param_5 == 3) {
    func_0x00010bf9dc80();
    _objc_retainAutoreleasedReturnValue();
LAB_108fa5578:
    func_0x00010c14de00(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_4;
    func_0x00010c106a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde360(puVar4,param_2,uVar3);
    _objc_release(uVar3);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar4 == 0) {
      func_0x00010bf9dc80();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108fa5578;
    }
    uVar1 = param_4;
    func_0x00010c106a60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf9dc80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
LAB_108fa55a0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 108fa55cc; end: 108fa5733; -[NBPhoneNumberUtil getNumberDescByType:type:] */

void FUN_108fa55cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  switch(param_4) {
  case 0:
  case 2:
    lVar1 = param_3;
    func_0x00010bfb2240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bfb2240(param_3);
      _objc_retainAutoreleasedReturnValue();
      break;
    }
  default:
LAB_108fa5690:
    func_0x00010bfbec80(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    lVar1 = param_3;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c0cf3c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      break;
    }
    goto LAB_108fa5690;
  case 3:
    func_0x00010c273480(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x00010c108e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x00010c22b920(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x00010c2a0c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    func_0x00010c0fa660(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x00010c0f2640(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x00010c27e4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x00010c2a08c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108fa5734; end: 108fa5817; -[NBPhoneNumberUtil getNumberType:] */

long FUN_108fa5734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfc97e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfc78e0(param_1,param_2,uVar2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    param_1 = -1;
  }
  else {
    lVar4 = param_1;
    func_0x00010bfc7de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc8280(param_1,param_2,lVar4,lVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa5818; end: 108fa5b4f; -[NBPhoneNumberUtil getNumberTypeHelper:metadata:] */

undefined8 FUN_108fa5818(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfbec80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c078e80(param_1,param_2,param_3,uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c108e60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 4;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010c273480(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 3;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010c22b920(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 5;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010c2a0c60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 6;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010c0fa660(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 7;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010c0f2640(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 8;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010c27e4c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 9;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010c2a08c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 10;
      goto LAB_108fa5aa0;
    }
    uVar2 = param_4;
    func_0x00010bfb2240(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c078e80(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c149480();
    if ((int)uVar3 != 0) {
      if ((uVar2 & 1) == 0) {
        uVar2 = param_4;
        func_0x00010c0cf3c0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078e80(param_1,param_2,param_3,uVar2);
        _objc_release(uVar2);
        uVar4 = 2;
        if ((int)param_1 == 0) {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 2;
      }
      goto LAB_108fa5aa0;
    }
    if ((uVar2 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010c0cf3c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078e80(param_1,param_2,param_3,uVar2);
      _objc_release(uVar2);
      uVar4 = 0xffffffffffffffff;
      if ((param_1 & 1) != 0) {
        uVar4 = 1;
      }
      goto LAB_108fa5aa0;
    }
  }
  uVar4 = 0xffffffffffffffff;
LAB_108fa5aa0:
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108fa5b50; end: 108fa5c77; -[NBPhoneNumberUtil isNumberMatchingDesc:numberDesc:] */

undefined8 FUN_108fa5b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c104500();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    _objc_release(lVar3);
  }
  else {
    lVar4 = param_4;
    func_0x00010c104500();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfecde0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0x7fffffffffffffff) {
      param_1 = 0;
      goto LAB_108fa5c44;
    }
  }
  lVar3 = param_4;
  func_0x00010c0d5600(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1b20(param_1,param_2,lVar3,param_3);
  _objc_release(lVar3);
LAB_108fa5c44:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa5c78; end: 108fa5ce7; -[NBPhoneNumberUtil isValidNumber:] */

undefined8 FUN_108fa5c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfc97e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082e40(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fa5ce8; end: 108fa5e9f; -[NBPhoneNumberUtil isValidNumberForRegion:regionCode:] */

bool FUN_108fa5ce8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bfc78e0(param_1,param_2,uVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_108fa5e34:
    bVar1 = false;
  }
  else {
    uVar5 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f13dd8,param_2,param_4);
    if ((uVar5 & 1) == 0) {
      lVar6 = param_1;
      func_0x00010bfc4280(param_1,param_2,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c071f40(uVar3,param_2,lVar6);
      _objc_release(lVar6);
      if ((int)uVar2 == 0) goto LAB_108fa5e34;
    }
    lVar6 = lVar4;
    func_0x00010bfbec80(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bfc7de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126dcc78;
    lVar8 = lVar6;
    func_0x00010c0d5600(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde360(puVar9,param_2,lVar8);
    _objc_release(lVar8);
    if (((ulong)puVar9 & 1) == 0) {
      lVar8 = lVar7;
      func_0x00010c08fa60(lVar7);
      bVar1 = 0xd < lVar8 - 3U;
    }
    else {
      func_0x00010bfc8280(param_1,param_2,lVar7,lVar4);
      bVar1 = param_1 == -1;
    }
    bVar1 = !bVar1;
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108fa5ea0; end: 108fa5f87; -[NBPhoneNumberUtil getRegionCodeForNumber:] */

void FUN_108fa5ea0(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dcc78;
  if (param_3 == 0) {
    param_1 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf53280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125ac0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar3 = puVar2, func_0x00010bf529e0(), puVar3 == (undefined *)0x0)) {
      param_1 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010bf529e0();
      if (puVar3 == (undefined *)0x1) {
        param_1 = puVar2;
        func_0x00010c0dfd20(puVar2,param_2,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfc9800(param_1,param_2,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa5f88; end: 108fa611f; -[NBPhoneNumberUtil getRegionCodeForNumberFromRegionList:regionCodes:] */

void FUN_108fa5f88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfc7de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0();
  lVar3 = param_1;
  func_0x00010bfe0aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar9 = 0;
    do {
      lVar8 = param_4;
      func_0x00010c0dfd20(param_4,param_2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfc78a0(lVar3,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126dcc78;
      lVar5 = lVar4;
      func_0x00010c08de60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfde360(puVar6,param_2,lVar5);
      _objc_release(lVar5);
      if ((int)puVar6 == 0) {
        lVar5 = param_1;
        func_0x00010bfc8280(param_1,param_2,lVar1,lVar4);
        if (lVar5 != -1) goto LAB_108fa60d0;
      }
      else {
        lVar5 = lVar4;
        func_0x00010c08de60(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010c25d660(param_1,param_2,lVar1,lVar5);
        _objc_release(lVar5);
        if ((int)lVar7 == 0) {
LAB_108fa60d0:
          _objc_retain(lVar8);
          _objc_release(lVar4);
          _objc_release(lVar8);
          goto LAB_108fa60e8;
        }
      }
      _objc_release(lVar4);
      _objc_release(lVar8);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
  }
  lVar8 = 0;
LAB_108fa60e8:
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 108fa6120; end: 108fa618f; -[NBPhoneNumberUtil getRegionCodeForCountryCode:] */

void FUN_108fa6120(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = (undefined **)PTR_PTR_1126dcc78;
  func_0x00010c125ac0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f13d78;
    _objc_retain(&PTR____CFConstantStringClassReference_110f13d78);
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010c0dfd20(ppuVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108fa6190; end: 108fa619b; -[NBPhoneNumberUtil getRegionCodesForCountryCode:] */

void FUN_108fa6190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c125ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dcc78,PTR_s_regionCodeFromCountryCode__1126270d0);
  return;
}



/* Entry: 108fa619c; end: 108fa6243; -[NBPhoneNumberUtil getCountryCodeForRegion:] */

void FUN_108fa619c(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lStack_38;
  
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010c082ea0(param_1,param_2,param_3);
  if ((int)ppuVar1 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
  }
  else {
    lStack_38 = 0;
    func_0x00010bfc4280(param_1,param_2,param_3,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_38 == 0) {
      _objc_retain(param_1);
      ppuVar1 = param_1;
    }
    else {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108fa6244; end: 108fa637f; -[NBPhoneNumberUtil getCountryCodeForValidRegion:error:] */

void FUN_108fa6244(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010bfe0aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010bfc78a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  if (ppuVar1 == (undefined **)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f14c78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72040(puVar4,param_2,puVar3,
                        *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (param_4 != (undefined8 *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110f14c98,0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar3;
    }
    _objc_release(puVar4);
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17d0;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010bf53280(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108fa6380; end: 108fa646f; -[NBPhoneNumberUtil getNddPrefixForRegion:stripNonDigits:] */

void FUN_108fa6380(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bfe0aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfc78a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0d5660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      if (param_4 != 0) {
        func_0x00010c25cfc0(lVar2,param_2,&PTR____CFConstantStringClassReference_110dbdd98,
                            &PTR____CFConstantStringClassReference_110daafd8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      _objc_retain(lVar3);
      lVar2 = lVar3;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108fa6470; end: 108fa660f; -[NBPhoneNumberUtil isNANPACountry:] */

ulong FUN_108fa6470(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126dcc78;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125ac0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar2 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar3);
        }
        uVar6 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
        uVar5 = param_3;
        func_0x00010c28ed80(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar6,param_2,uVar5);
        _objc_release(uVar5);
        uVar7 = (uint)uVar6 | uVar7;
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar3;
      puVar4 = &uStack_130;
      func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  bVar1 = param_3 != 0;
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    uVar5 = param_3;
    func_0x00010bfc97c0(param_3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc78e0(param_3,param_2,puVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3;
      func_0x00010c08dfa0(param_3);
    }
    _objc_release(param_3);
    return uVar5;
  }
  return (ulong)(bVar1 & uVar7);
}



/* Entry: 108fa6610; end: 108fa66a7; -[NBPhoneNumberUtil isLeadingZeroPossible:] */

long FUN_108fa6610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfc97c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc78e0(param_1,param_2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c08dfa0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108fa66a8; end: 108fa678f; -[NBPhoneNumberUtil isAlphaNumber:] */

undefined8 FUN_108fa66a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c083080(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                        &PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uStack_38 = uVar3;
    func_0x00010c0c3a80(param_1,param_2,&uStack_38);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    _objc_release(uVar3);
    func_0x00010c0c1b20(param_1,param_2,&PTR____CFConstantStringClassReference_110f13fb8,uVar1);
    _objc_release(uVar1);
    param_3 = uVar2;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa6790; end: 108fa68c3; -[NBPhoneNumberUtil isPossibleNumber:error:] */

undefined8 FUN_108fa6790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c07a7a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa68c4; end: 108fa68df; -[NBPhoneNumberUtil isPossibleNumber:] */

bool FUN_108fa68c4(long param_1)

{
  func_0x00010c07a7c0();
  return param_1 == 1;
}



/* Entry: 108fa68e0; end: 108fa68e7; -[NBPhoneNumberUtil validateNumberLength:metadata:] */

void FUN_108fa68e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2969b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_validateNumberLength_metadata_ty_112683490,param_3,param_4,
             0xffffffffffffffff);
  return;
}



/* Entry: 108fa68e8; end: 108fa6d0f; -[NBPhoneNumberUtil validateNumberLength:metadata:type:] */

ulong FUN_108fa68e8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfc8220(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c104500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 == 0) {
    uVar3 = param_4;
    func_0x00010bfbec80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c104500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uVar4 = uVar1;
    func_0x00010c104500();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c104520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  if (param_5 == 2) {
    uVar5 = param_1;
    func_0x00010bfc8220(param_1,param_2,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf6e2e0(param_1,param_2,uVar5);
    _objc_release(uVar5);
    if ((int)uVar6 != 0) {
      func_0x00010c2969a0(param_1,param_2,param_3,param_4,1);
      goto LAB_108fa6cc8;
    }
    uVar5 = param_1;
    func_0x00010bfc8220(param_1,param_2,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e2e0(param_1,param_2,uVar5);
    if ((int)param_1 != 0) {
      uVar3 = uVar5;
      func_0x00010c104500();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf529e0();
      uVar8 = uVar4;
      if (uVar6 == 0) {
        uVar6 = param_4;
        func_0x00010bfbec80(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c104500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09f80(uVar4,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
      else {
        uVar6 = uVar5;
        func_0x00010c104500(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09f80(uVar4,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar6);
      _objc_release(uVar3);
      puVar10 = PTR_s_compare__1125ae690;
      uVar3 = uVar8;
      func_0x00010c246d00(uVar8,param_2,PTR_s_compare__1125ae690);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010bf529e0();
      uVar6 = uVar5;
      func_0x00010c104520();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      if (uVar4 != 0) {
        func_0x00010bf09f80(uVar2,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = uVar7;
        func_0x00010c246d00(uVar7,param_2,puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      }
      uVar2 = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
    _objc_release(uVar5);
  }
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c071f40();
  _objc_release(uVar4);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar5 & 1) == 0) {
    uVar9 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c0df840(puVar10,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4b900(uVar2,param_2,puVar10);
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf433a0();
      if (uVar5 == 0) {
        param_1 = 1;
      }
      else if (uVar5 == 1) {
        param_1 = 3;
      }
      else {
        uVar5 = uVar3;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf433a0();
        _objc_release(uVar5);
        if (uVar6 == 0xffffffffffffffff) {
          param_1 = 4;
        }
        else {
          uVar5 = uVar3;
          func_0x00010bf529e0(uVar3);
          uVar6 = uVar3;
          func_0x00010c25e980(uVar3,param_2,1,uVar5 - 1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010bf4b900();
          param_1 = 0xffffffffffffffff;
          if ((int)uVar5 != 0) {
            param_1 = 1;
          }
          _objc_release(uVar6);
        }
      }
      _objc_release(uVar4);
    }
    else {
      param_1 = 5;
    }
    _objc_release(puVar10);
  }
  else {
    param_1 = 0xffffffffffffffff;
  }
LAB_108fa6cc8:
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa6d10; end: 108fa6ecf; -[NBPhoneNumberUtil testNumberLength:desc:] */

undefined8 FUN_108fa6d10(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c104500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c104520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf4b900(uVar2,param_2,puVar4);
  _objc_release(puVar4);
  if ((uVar5 & 1) != 0) {
    uVar8 = 1;
    goto LAB_108fa6ea4;
  }
  uVar5 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2827c0();
  if (uVar6 == uVar3) {
    uVar8 = 1;
  }
  else {
    uVar6 = uVar5;
    func_0x00010c2827c0();
    if (uVar3 < uVar6) {
      uVar8 = 3;
    }
    else {
      uVar6 = uVar1;
      func_0x00010bf529e0();
      uVar7 = uVar1;
      func_0x00010bf529e0();
      if (uVar6 - 1 < uVar7) {
        uVar6 = uVar1;
        func_0x00010bf529e0(uVar1);
        uVar7 = uVar1;
        func_0x00010c0dfd40(uVar1,param_2,uVar6 - 1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c067fc0();
        _objc_release(uVar7);
        if (uVar6 < uVar3) {
          uVar8 = 4;
          goto LAB_108fa6e9c;
        }
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf4b900(uVar1,param_2,puVar4);
      uVar8 = 4;
      if ((int)uVar3 != 0) {
        uVar8 = 1;
      }
      _objc_release(puVar4);
    }
  }
LAB_108fa6e9c:
  _objc_release(uVar5);
LAB_108fa6ea4:
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar8;
}



/* Entry: 108fa6ed0; end: 108fa7003; -[NBPhoneNumberUtil isPossibleNumberWithReason:error:] */

undefined8 FUN_108fa6ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c07a7c0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa7004; end: 108fa710b; -[NBPhoneNumberUtil isPossibleNumberWithReason:] */

undefined8 FUN_108fa7004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfc7de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf53280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010bfde2e0(param_1,param_2,uVar2);
  if ((int)uVar3 == 0) {
    param_1 = 2;
  }
  else {
    uVar3 = param_1;
    func_0x00010bfc97c0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfc78e0(param_1,param_2,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfbec80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26b680(param_1,param_2,uVar1,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fa710c; end: 108fa71c3; -[NBPhoneNumberUtil isPossibleNumberString:regionDialingFrom:error:] */

undefined8
FUN_108fa710c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f3dc0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c07a7a0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa71c4; end: 108fa7313; -[NBPhoneNumberUtil truncateTooLongNumber:] */

undefined8 FUN_108fa71c4(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c082e20(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = param_3;
    func_0x00010bf51e00(param_3);
    puVar3 = param_3;
    func_0x00010c0d55e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    do {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = puVar3;
      func_0x00010c282800(puVar3);
      func_0x00010c0df7c0(puVar5,param_2,(long)(double)((ulong)puVar4 / 10));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c1cb1a0(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010c071f40(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8);
      if ((((ulong)puVar3 & 1) != 0) ||
         (uVar1 = param_1, func_0x00010c07a7c0(param_1,param_2,puVar2), uVar1 == 3)) {
        uVar6 = 0;
        goto LAB_108fa72e0;
      }
      uVar1 = param_1;
      func_0x00010c082e20(param_1,param_2,puVar2);
      puVar3 = puVar5;
    } while ((int)uVar1 == 0);
    func_0x00010c1cb1a0(param_3,param_2,puVar5);
    uVar6 = 1;
LAB_108fa72e0:
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  else {
    uVar6 = 1;
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 108fa7314; end: 108fa752b; -[NBPhoneNumberUtil extractCountryCode:nationalNumber:] */

void FUN_108fa7314(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c260c20(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c08fa60();
      uVar3 = param_3;
      func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918);
      if (uVar2 != 0) {
        uVar1 = 3;
        if ((int)uVar3 != 0) {
          uVar1 = 4;
        }
        if (uVar2 <= uVar1) {
          uVar1 = uVar2;
        }
        lVar9 = 1;
        ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
        do {
          uVar2 = param_3;
          func_0x00010c260c80(param_3,param_2,0,lVar9);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar3 = uVar2;
          func_0x00010c067fc0();
          func_0x00010c0df780(ppuVar4,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126dcc78;
          func_0x00010c125ac0(PTR_PTR_1126dcc78,param_2,ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          if ((puVar5 != (undefined *)0x0) &&
             (puVar6 = puVar5, func_0x00010bf529e0(), puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0,
             puVar6 != (undefined *)0x0)) {
            if (param_4 != (long *)0x0) {
              lVar10 = *param_4;
              uVar3 = param_3;
              func_0x00010c260c00(param_3,param_2,lVar9);
              _objc_retainAutoreleasedReturnValue();
              if (lVar10 == 0) {
                ppuVar8 = &PTR____CFConstantStringClassReference_110dc4658;
              }
              else {
                ppuVar8 = &PTR____CFConstantStringClassReference_110dae518;
              }
              func_0x00010c14de00(puVar7,param_2,ppuVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_4 = (long)puVar7;
              _objc_release(uVar3);
            }
            _objc_release(puVar5);
            _objc_release(uVar2);
            ppuVar8 = ppuVar4;
            break;
          }
          _objc_release(puVar5);
          _objc_release(ppuVar4);
          _objc_release(uVar2);
          lVar9 = lVar9 + 1;
        } while (lVar9 - uVar1 != 1);
        goto LAB_108fa7484;
      }
    }
  }
  ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
LAB_108fa7484:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 108fa752c; end: 108fa75c7; -[NBPhoneNumberUtil getSupportedRegions] */

void FUN_108fa752c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126dcc78;
  func_0x00010bdc0fa0(PTR_PTR_1126dcc78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR___NSConcreteGlobalBlock_110ad1030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfaea40(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108fa75c8; end: 108fa75cf;  */

bool FUN_108fa75c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = lRam0000000113730560;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x113730560,&PTR___NSConcreteGlobalBlock_110ad1050);
  }
  lVar1 = param_2;
  func_0x00010c11f340(param_2);
  _objc_release(param_2);
  return lVar1 != 0x7fffffffffffffff;
}



/* Entry: 108fa75d0; end: 108fa7abb; -[NBPhoneNumberUtil maybeExtractCountryCode:metadata:nationalNumber:keepRawInput:phoneNumber:error:] */

void FUN_108fa75d0(undefined **param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                  undefined8 *param_5,int param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
  if (((param_5 == (undefined8 *)0x0) || (param_7 == (undefined8 *)0x0)) ||
     (uVar2 = param_3, func_0x00010c08fa60(),
     ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8, uVar2 == 0))
  goto LAB_108fa7a88;
  uVar2 = param_3;
  func_0x00010bf51e00();
  if (param_4 == (undefined **)0x0) {
    ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = param_4;
    func_0x00010c069700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &PTR____CFConstantStringClassReference_110f14cb8;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar13 = ppuVar3;
    }
  }
  ppuVar3 = param_1;
  uStack_68 = uVar2;
  func_0x00010c0c3aa0(param_1,param_2,&uStack_68);
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  _objc_release(uVar2);
  if (param_6 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184a80(*param_7,param_2,puVar4);
    _objc_release(puVar4);
  }
  if (ppuVar3 == (undefined **)0x14) {
    if (param_4 != (undefined **)0x0) {
      ppuVar3 = param_4;
      func_0x00010bf53280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dc4658);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf51e00();
      uVar6 = uVar2;
      func_0x00010bfda7c0();
      if ((int)uVar6 != 0) {
        ppuVar7 = ppuVar5;
        func_0x00010c08fa60(ppuVar5);
        uVar8 = uVar2;
        func_0x00010c260c00(uVar2,param_2,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = param_4;
        func_0x00010bfbec80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        func_0x00010c0d5600();
        _objc_retainAutoreleasedReturnValue();
        uStack_70 = uVar8;
        func_0x00010c0c3ac0(param_1,param_2,&uStack_70,param_4,0);
        uVar6 = uStack_70;
        _objc_retain(uStack_70);
        _objc_release(uVar8);
        uVar8 = uVar6;
        func_0x00010bf51e00(uVar6);
        ppuVar10 = param_1;
        func_0x00010c0c1b20(param_1,param_2,ppuVar9,uVar1);
        if (((((ulong)ppuVar10 & 1) == 0) &&
            (ppuVar10 = param_1, func_0x00010c0c1b20(param_1,param_2,ppuVar9,uVar8),
            ((ulong)ppuVar10 & 1) != 0)) ||
           (func_0x00010c26b680(param_1,param_2,uVar1,ppuVar7), param_1 == (undefined **)0x4)) {
          uVar11 = *param_5;
          func_0x00010c25ce40(uVar11,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_5 = uVar11;
          if (param_6 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c184a80(*param_7,param_2,puVar4);
            _objc_release(puVar4);
          }
          func_0x00010c184960(*param_7,param_2,ppuVar3);
          _objc_release(uVar8);
          _objc_release(ppuVar9);
          _objc_release(ppuVar7);
          _objc_release(uVar6);
          _objc_release(uVar2);
          param_1 = ppuVar5;
          goto LAB_108fa7a20;
        }
        _objc_release(uVar8);
        _objc_release(ppuVar9);
        _objc_release(ppuVar7);
        _objc_release(uVar6);
      }
      _objc_release(uVar2);
      _objc_release(ppuVar5);
      _objc_release(ppuVar3);
    }
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
    func_0x00010c184960(*param_7,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c08fa60();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    if (uVar2 < 3) {
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f14cd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72040(puVar4,param_2,puVar12,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      if (param_8 != (undefined8 *)0x0) {
        puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110f14cf8,0,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_8 = puVar12;
      }
      _objc_release(puVar4);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
    }
    else {
      func_0x00010bf9ec60(param_1,param_2,uVar1,param_5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c071f40();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      if (((ulong)ppuVar3 & 1) == 0) {
        func_0x00010c184960(*param_7,param_2,param_1);
        _objc_retain(param_1);
        ppuVar3 = param_1;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110f14d18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf72040(puVar4,param_2,puVar12,
                            *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        if (param_8 != (undefined8 *)0x0) {
          puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                              &PTR____CFConstantStringClassReference_110f14d38,0,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_8 = puVar12;
        }
        _objc_release(puVar4);
        ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8;
      }
LAB_108fa7a20:
      _objc_release(param_1);
    }
  }
  _objc_release(ppuVar13);
  _objc_release(uVar1);
LAB_108fa7a88:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108fa7abc; end: 108fa7b6f; -[NBPhoneNumberUtil descHasPossibleNumberData:] */

uint FUN_108fa7abc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c104500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 1) {
    lVar2 = param_3;
    func_0x00010c104500(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c071f40();
    uVar5 = (uint)lVar4 ^ 1;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 108fa7b70; end: 108fa7d9b; -[NBPhoneNumberUtil parsePrefixAsIdd:sourceString:] */

undefined8 FUN_108fa7b70(ulong param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  uVar8 = 0;
  if (param_4 == (long *)0x0) goto LAB_108fa7d74;
  lVar1 = *param_4;
  func_0x00010bf51e00();
  uVar2 = param_1;
  func_0x00010c25d660();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010c0c1b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c11f2a0(uVar3);
    lVar4 = lVar1;
    func_0x00010c260c80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    lVar5 = lVar1;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    func_0x00010c0c1b40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar9 == 0) || (lVar6 = lVar9, func_0x00010bf529e0(), lVar6 == 0)) {
LAB_108fa7d38:
      lVar6 = lVar5;
      func_0x00010bf51e00();
      _objc_autorelease();
      *param_4 = lVar6;
      uVar8 = 1;
    }
    else {
      lVar6 = lVar9;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) goto LAB_108fa7d38;
      lVar6 = lVar9;
      func_0x00010c0dfd20(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2a0();
      lVar7 = lVar5;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar7;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
LAB_108fa7d30:
        _objc_release(lVar7);
        goto LAB_108fa7d38;
      }
      func_0x00010c0db420();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0720c0();
      _objc_release(param_1);
      if ((uVar2 & 1) == 0) goto LAB_108fa7d30;
      _objc_release(lVar7);
      uVar8 = 0;
    }
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  else {
    uVar8 = 0;
  }
  _objc_release(lVar1);
LAB_108fa7d74:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 108fa7d9c; end: 108fa7e9b; -[NBPhoneNumberUtil maybeStripInternationalPrefixAndNormalize:possibleIddPrefix:] */

undefined8 FUN_108fa7d9c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if (param_3 != (long *)0x0) {
    lVar1 = *param_3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c07f860(param_1,param_2,*param_3,uRam00000001137304f8);
      if ((int)lVar1 == 0) {
        uVar3 = param_4;
        func_0x00010bf51e00(param_4);
        func_0x00010c0db500(param_1,param_2,param_3);
        func_0x00010c0f43c0(param_1,param_2,uVar3,param_3);
        uVar4 = 5;
        if ((int)param_1 == 0) {
          uVar4 = 0x14;
        }
        _objc_release(uVar3);
      }
      else {
        lVar1 = param_1;
        func_0x00010c131120(param_1,param_2,*param_3,uRam00000001137304f8,
                            &PTR____CFConstantStringClassReference_110daafd8);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        _objc_autorelease();
        *param_3 = lVar2;
        func_0x00010c0db3a0(param_1,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = param_1;
        uVar4 = 1;
      }
      goto LAB_108fa7e80;
    }
  }
  uVar4 = 0x14;
LAB_108fa7e80:
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 108fa7e9c; end: 108fa8287; -[NBPhoneNumberUtil maybeStripNationalPrefixAndCarrierCode:metadata:carrierCode:] */

undefined8 FUN_108fa7e9c(ulong param_1,undefined8 param_2,ulong *param_3,long param_4,long *param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  ulong uStack_a0;
  
  _objc_retain(param_4);
  uVar16 = 0;
  if (param_3 == (ulong *)0x0) goto LAB_108fa824c;
  uVar2 = *param_3;
  func_0x00010bf51e00();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  lVar4 = param_4;
  func_0x00010c0d56a0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 == 0) || (puVar5 = PTR_PTR_1126dcc78, func_0x00010bfde360(), (int)puVar5 == 0)) {
    uVar16 = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar6 = uVar3;
    func_0x00010c0c1b40();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar6 == 0) || (uVar7 = uVar6, func_0x00010bf529e0(), uVar7 == 0)) {
      uVar16 = 0;
    }
    else {
      lVar8 = param_4;
      func_0x00010bfbec80();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0d5600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      uVar7 = uVar6;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2a0();
      uVar10 = uVar2;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010c0df1c0();
      lVar8 = param_4;
      func_0x00010c0d5700();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010c11f2c0();
      if ((uVar12 == 0x7fffffffffffffff) ||
         (uVar13 = uVar2, func_0x00010c08fa60(), uVar13 <= uVar12)) {
        uStack_a0 = 0;
      }
      else {
        uStack_a0 = uVar2;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
      }
      if (((lVar8 == 0) || (lVar15 = lVar8, func_0x00010c08fa60(), lVar15 == 0)) ||
         (puVar14 = PTR_PTR_1126dcc78, func_0x00010bfde360(), ((ulong)puVar14 & 1) == 0)) {
        func_0x00010c08fa60(uVar10);
        uVar12 = uVar2;
        func_0x00010c260c00();
        _objc_retainAutoreleasedReturnValue();
        bVar17 = true;
      }
      else {
        uVar12 = param_1;
        func_0x00010c130e40();
        _objc_retainAutoreleasedReturnValue();
        bVar17 = false;
      }
      puVar14 = PTR_PTR_1126dcc78;
      func_0x00010bfde360();
      if ((((int)puVar14 == 0) || (uVar13 = param_1, func_0x00010c0c1b20(), (int)uVar13 == 0)) ||
         (func_0x00010c0c1b20(), (int)param_1 != 0)) {
        bVar1 = false;
        if (uVar11 != 1) {
          bVar1 = bVar17;
        }
        if (bVar1) {
          puVar14 = PTR_PTR_1126dcc78;
          func_0x00010bfde360();
          if (((ulong)puVar14 & 1) == 0) {
            puVar14 = PTR_PTR_1126dcc78;
            func_0x00010bfde360();
            if ((param_5 != (long *)0x0) && ((int)puVar14 != 0)) {
              lVar15 = *param_5;
              goto joined_r0x000108fa81c0;
            }
          }
          else if (param_5 != (long *)0x0) goto LAB_108fa8194;
        }
        else {
          if (uVar11 - 1 < 2) {
            bVar17 = true;
          }
          if ((param_5 != (long *)0x0) && (!bVar17)) {
LAB_108fa8194:
            lVar15 = *param_5;
joined_r0x000108fa81c0:
            if (lVar15 != 0) {
              func_0x00010c25ce40();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_5 = lVar15;
            }
          }
        }
        _objc_retainAutorelease(uVar12);
        *param_3 = uVar12;
        uVar16 = 1;
      }
      else {
        uVar16 = 0;
      }
      _objc_release(uStack_a0);
      _objc_release(uVar12);
      _objc_release(lVar8);
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(lVar9);
    }
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(0);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
LAB_108fa824c:
  _objc_release(param_4);
  return uVar16;
}



/* Entry: 108fa8288; end: 108fa843f; -[NBPhoneNumberUtil maybeStripExtension:] */

void FUN_108fa8288(ulong param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  
  if (param_3 == (ulong *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_108fa8420;
  }
  uVar1 = *param_3;
  func_0x00010bf51e00();
  uVar2 = param_1;
  func_0x00010c25d660();
  if ((int)uVar2 < 0) {
LAB_108fa838c:
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c260c80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c083080();
    _objc_release(uVar2);
    if ((int)uVar7 == 0) goto LAB_108fa838c;
    func_0x00010c0bde00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0df1c0();
    if (uVar2 < 2) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      uVar7 = 1;
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      do {
        uVar3 = param_1;
        func_0x00010c11f2c0();
        if ((uVar3 != 0x7fffffffffffffff) && (uVar4 = uVar1, func_0x00010c08fa60(), uVar3 < uVar4))
        {
          ppuVar5 = (undefined **)*param_3;
          func_0x00010c260c80(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c260c80(uVar1);
          _objc_retainAutoreleasedReturnValue();
          *param_3 = (ulong)&PTR____CFConstantStringClassReference_110daafd8;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_3 = (ulong)ppuVar6;
          _objc_release(uVar2);
          ppuVar6 = ppuVar5;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    _objc_release(param_1);
  }
  _objc_release(uVar1);
LAB_108fa8420:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 108fa8440; end: 108fa84c7; -[NBPhoneNumberUtil checkRegionForParsing:defaultRegion:] */

ulong FUN_108fa8440(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c082ea0(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
      param_1 = 0;
    }
    else {
      func_0x00010c07f860(param_1,param_2,param_3,uRam00000001137304f8);
    }
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108fa84c8; end: 108fa8597; -[NBPhoneNumberUtil parse:defaultRegion:error:] */

/* WARNING: Removing unreachable block (ram,0x000108fa851c) */

void FUN_108fa84c8(undefined8 param_1)

{
  func_0x00010c0f4140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa8598; end: 108fa86e3; -[NBPhoneNumberUtil parseAndKeepRawInput:defaultRegion:error:] */

void FUN_108fa8598(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c082ea0(param_1,param_2,param_4);
  if ((((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c08fa60(), uVar1 != 0)) &&
     (uVar1 = param_3,
     func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918),
     puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670, (uVar1 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f14d58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72040(puVar3,param_2,puVar2,
                        *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (param_5 != (undefined8 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110f14d38,0,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar2;
    }
    _objc_release(puVar3);
  }
  func_0x00010c0f4140(param_1,param_2,param_3,param_4,1,1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108fa86e4; end: 108fa8807; -[NBPhoneNumberUtil setItalianLeadingZerosForPhoneNumber:phoneNumber:] */

void FUN_108fa86e4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  func_0x00010c08fa60();
  if ((1 < uVar4) &&
     (uVar4 = param_3,
     func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1158),
     (int)uVar4 != 0)) {
    func_0x00010c1b5ce0(param_4,param_2,1);
    uVar4 = param_3;
    func_0x00010c08fa60();
    if (uVar4 - 3 < 0xfffffffffffffffe) {
      uVar4 = 1;
      do {
        uVar1 = param_3;
        func_0x00010c260c80(param_3,param_2,uVar4,1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          if (uVar4 == 1) goto LAB_108fa87e8;
          break;
        }
        uVar4 = uVar4 + 1;
        uVar1 = param_3;
        func_0x00010c08fa60();
      } while (uVar4 < uVar1 - 1);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfca0(param_4,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
LAB_108fa87e8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fa8808; end: 108fa91af; -[NBPhoneNumberUtil parseHelper:defaultRegion:keepRawInput:checkRegion:error:] */

void FUN_108fa8808(undefined **param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                  ulong param_5,int param_6,ulong *param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int iVar13;
  undefined *puVar14;
  undefined **ppuStack_100;
  undefined *puStack_f0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **appuStack_70 [2];
  
  _objc_retain(param_4);
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0a4f8,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    if (param_7 != (ulong *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f14d78);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110f14d98;
LAB_108fa88e8:
      func_0x00010bf99420(param_1,param_2,puVar14,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = (ulong)param_1;
      _objc_release(puVar14);
    }
  }
  else {
    uVar3 = param_3;
    func_0x00010c08fa60();
    if (uVar3 < 0xfb) {
      appuStack_70[0] = &PTR____CFConstantStringClassReference_110daafd8;
      func_0x00010bf22480(param_1,param_2,param_3,appuStack_70);
      ppuVar6 = appuStack_70[0];
      _objc_retain(appuStack_70[0]);
      ppuVar4 = param_1;
      func_0x00010c083080(param_1,param_2,ppuVar6);
      if (((ulong)ppuVar4 & 1) == 0) {
        if (param_7 != (ulong *)0x0) {
          puStack_f0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110f14d78);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_110f14d98;
          goto LAB_108fa8c70;
        }
LAB_108fa8cdc:
        puVar14 = (undefined *)0x0;
      }
      else {
        if ((param_6 == 0) ||
           (ppuVar4 = param_1, func_0x00010bf38440(param_1,param_2,ppuVar6,param_4),
           ((ulong)ppuVar4 & 1) != 0)) {
          puVar14 = PTR_PTR_1126dcc98;
          _objc_alloc_init();
          iVar13 = (int)param_5;
          if (iVar13 != 0) {
            uVar3 = param_3;
            func_0x00010bf51e00(param_3);
            func_0x00010c1e7880(puVar14,param_2,uVar3);
            _objc_release(uVar3);
          }
          ppuStack_78 = ppuVar6;
          ppuVar5 = param_1;
          func_0x00010c0c3a80(param_1,param_2,&ppuStack_78);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuStack_78;
          _objc_retain(ppuStack_78);
          _objc_release(ppuVar6);
          ppuVar6 = ppuVar5;
          func_0x00010c08fa60();
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar6 = ppuVar5;
            func_0x00010bf51e00(ppuVar5);
            func_0x00010c1992c0(puVar14,param_2,ppuVar6);
            _objc_release(ppuVar6);
          }
          ppuVar6 = param_1;
          func_0x00010bfe0aa0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_c8 = ppuVar6;
          func_0x00010bfc78a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          ppuStack_100 = ppuVar4;
          func_0x00010bf51e00();
          ppuStack_80 = &PTR____CFConstantStringClassReference_110daafd8;
          ppuStack_90 = (undefined **)0x0;
          ppuVar7 = param_1;
          puStack_88 = puVar14;
          func_0x00010c0c38c0(param_1,param_2,ppuStack_100,ppuStack_c8,&ppuStack_80,param_5,
                              &puStack_88,&ppuStack_90);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuStack_80;
          _objc_retain(ppuStack_80);
          puVar2 = puStack_88;
          _objc_retain(puStack_88);
          _objc_release(puVar14);
          ppuVar12 = ppuStack_90;
          _objc_retain(ppuStack_90);
          ppuVar6 = ppuVar4;
          if (ppuVar12 == (undefined **)0x0) {
            puStack_f0 = puVar2;
            ppuVar8 = ppuVar11;
LAB_108fa8da0:
            _objc_release(ppuVar12);
            ppuVar12 = ppuVar7;
            func_0x00010c071f40(ppuVar7,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8
                               );
            ppuVar11 = ppuVar8;
            if (((ulong)ppuVar12 & 1) == 0) {
              ppuVar4 = param_1;
              func_0x00010bfc97c0(param_1,param_2,ppuVar7);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar4 != param_4) {
                ppuVar12 = param_1;
                func_0x00010bfc78e0(param_1,param_2,ppuVar7,ppuVar4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuStack_c8);
                ppuStack_c8 = ppuVar12;
              }
              _objc_release(ppuVar4);
            }
            else {
              ppuStack_b0 = ppuVar4;
              func_0x00010c0db500(param_1,param_2,&ppuStack_b0);
              ppuVar6 = ppuStack_b0;
              _objc_retain(ppuStack_b0);
              _objc_release(ppuVar4);
              func_0x00010c25ce40(ppuVar8,param_2,ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar8);
              if (param_4 == (undefined **)0x0) {
                if (iVar13 != 0) {
                  func_0x00010bf3b080(puStack_f0);
                }
              }
              else {
                ppuVar4 = ppuStack_c8;
                func_0x00010bf53280();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar7);
                func_0x00010c184960(puStack_f0,param_2,ppuVar4);
                ppuVar7 = ppuVar4;
              }
            }
            ppuVar4 = ppuVar11;
            func_0x00010c08fa60();
            if ((undefined **)0x1 < ppuVar4) {
              if (ppuStack_c8 != (undefined **)0x0) {
                ppuVar4 = ppuVar11;
                func_0x00010bf51e00();
                ppuStack_c0 = &PTR____CFConstantStringClassReference_110daafd8;
                ppuStack_b8 = ppuVar4;
                func_0x00010c0c3ac0(param_1,param_2,&ppuStack_b8,ppuStack_c8,&ppuStack_c0);
                ppuVar12 = ppuStack_b8;
                _objc_retain(ppuStack_b8);
                _objc_release(ppuVar4);
                ppuVar4 = ppuStack_c0;
                _objc_retain(ppuStack_c0);
                ppuVar8 = param_1;
                func_0x00010c296980(param_1,param_2,ppuVar12,ppuStack_c8);
                if ((6 < (long)ppuVar8 + 1U) || ((1L << ((long)ppuVar8 + 1U & 0x3f) & 0x51U) == 0))
                {
                  _objc_retain(ppuVar12);
                  _objc_release(ppuVar11);
                  ppuVar11 = ppuVar12;
                  if (iVar13 != 0) {
                    ppuVar8 = ppuVar4;
                    func_0x00010bf51e00(ppuVar4);
                    func_0x00010c1dff20(puStack_f0,param_2,ppuVar8);
                    _objc_release(ppuVar8);
                  }
                }
                _objc_release(ppuVar12);
                _objc_release(ppuVar4);
              }
              ppuVar12 = ppuVar11;
              func_0x00010bf51e00();
              ppuVar4 = ppuVar12;
              func_0x00010c08fa60();
              puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (ppuVar4 < (undefined **)0x2) {
                if (param_7 != (ulong *)0x0) {
                  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                      &PTR____CFConstantStringClassReference_110f14df8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar4 = &PTR____CFConstantStringClassReference_110f14e18;
LAB_108fa9068:
                  func_0x00010bf99420(param_1,param_2,puVar14,ppuVar4);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_autorelease();
                  *param_7 = (ulong)param_1;
                  _objc_release(puVar14);
                }
              }
              else {
                if (ppuVar4 < (undefined **)0x11) {
                  func_0x00010c1b5d00(param_1,param_2,ppuVar12,puStack_f0);
                  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  ppuVar4 = ppuVar12;
                  func_0x00010c0b4ca0(ppuVar12);
                  func_0x00010c0df7c0(puVar14,param_2,ppuVar4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1cb1a0(puStack_f0,param_2,puVar14);
                  _objc_release(puVar14);
                  _objc_retain(puStack_f0);
                  puVar14 = puStack_f0;
                  goto LAB_108fa90f4;
                }
                if (param_7 != (ulong *)0x0) {
                  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                      &PTR____CFConstantStringClassReference_110f14db8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar4 = &PTR____CFConstantStringClassReference_110f14dd8;
                  goto LAB_108fa9068;
                }
              }
              puVar14 = (undefined *)0x0;
              goto LAB_108fa90f4;
            }
            if (param_7 != (ulong *)0x0) {
              ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  &PTR____CFConstantStringClassReference_110f14df8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99420(param_1,param_2,ppuVar12,
                                  &PTR____CFConstantStringClassReference_110f14e18);
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_7 = (ulong)param_1;
              puVar14 = (undefined *)0x0;
              goto LAB_108fa90f4;
            }
            puVar14 = (undefined *)0x0;
          }
          else {
            ppuVar8 = ppuVar12;
            func_0x00010bf87dc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar8;
            func_0x00010c0720c0();
            if ((int)ppuVar9 == 0) {
              _objc_release(ppuVar8);
            }
            else {
              ppuVar9 = param_1;
              func_0x00010c25d660(param_1,param_2,ppuStack_100,uRam00000001137304f8);
              _objc_release(ppuVar8);
              if (-1 < (int)ppuVar9) {
                ppuVar9 = param_1;
                func_0x00010c131120(param_1,param_2,ppuStack_100,uRam00000001137304f8,
                                    &PTR____CFConstantStringClassReference_110daafd8);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuStack_100);
                puStack_a0 = puVar2;
                ppuStack_98 = ppuVar11;
                uStack_a8 = 0;
                ppuVar10 = param_1;
                func_0x00010c0c38c0(param_1,param_2,ppuVar9,ppuStack_c8,&ppuStack_98,
                                    param_5 & 0xffffffff,&puStack_a0,&uStack_a8);
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuStack_98;
                _objc_retain();
                _objc_release(ppuVar11);
                puStack_f0 = puStack_a0;
                _objc_retain();
                _objc_release(puVar2);
                uVar1 = uStack_a8;
                _objc_retain(uStack_a8);
                _objc_release(ppuVar7);
                ppuVar11 = ppuVar10;
                func_0x00010c071f40(ppuVar10,param_2,
                                    &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d17b8);
                ppuStack_100 = ppuVar9;
                ppuVar7 = ppuVar10;
                if ((int)ppuVar11 == 0) {
                  _objc_release(uVar1);
                  goto LAB_108fa8da0;
                }
                if (param_7 != (ulong *)0x0) {
                  ppuVar4 = ppuVar12;
                  func_0x00010bf6e340(ppuVar12);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar11 = ppuVar12;
                  func_0x00010bf87dc0(ppuVar12);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf99420(param_1,param_2,ppuVar4,ppuVar11);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_autorelease();
                  *param_7 = (ulong)param_1;
                  _objc_release(ppuVar11);
                  _objc_release(ppuVar4);
                }
                _objc_release(uVar1);
                puVar14 = (undefined *)0x0;
                ppuVar11 = ppuVar8;
                goto LAB_108fa90f4;
              }
            }
            puStack_f0 = puVar2;
            if (param_7 == (ulong *)0x0) {
              puVar14 = (undefined *)0x0;
            }
            else {
              ppuVar4 = ppuVar12;
              func_0x00010bf6e340(ppuVar12);
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = ppuVar12;
              func_0x00010bf87dc0(ppuVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99420(param_1,param_2,ppuVar4,ppuVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_7 = (ulong)param_1;
              _objc_release(ppuVar8);
              _objc_release(ppuVar4);
              puVar14 = (undefined *)0x0;
            }
LAB_108fa90f4:
            _objc_release(ppuVar12);
          }
          _objc_release(ppuStack_100);
          _objc_release(ppuVar7);
          _objc_release(ppuVar11);
          _objc_release(ppuStack_c8);
          _objc_release(ppuVar5);
        }
        else {
          if (param_7 == (ulong *)0x0) goto LAB_108fa8cdc;
          puStack_f0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110f14d18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_110f14d38;
LAB_108fa8c70:
          func_0x00010bf99420(param_1,param_2,puStack_f0,ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar14 = (undefined *)0x0;
          *param_7 = (ulong)param_1;
        }
        _objc_release(puStack_f0);
      }
      _objc_release(ppuVar6);
      goto LAB_108fa913c;
    }
    if (param_7 != (ulong *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f14db8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110f14dd8;
      goto LAB_108fa88e8;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_108fa913c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}


