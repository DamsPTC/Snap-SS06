/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060f5d4c; end: 1060f5dcf; +[BTUILocalizedString PAYMENT_METHOD_TYPE_PAYPAL] */

void FUN_1060f5d4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3ffd8,
                      &PTR____CFConstantStringClassReference_110e3fff8,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5dd0; end: 1060f5e53; +[BTUILocalizedString PAYMENT_METHOD_TYPE_COINBASE] */

void FUN_1060f5dd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e40018,
                      &PTR____CFConstantStringClassReference_110e40038,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5e54; end: 1060f5ed7; +[BTUILocalizedString PAYMENT_METHOD_TYPE_VENMO] */

void FUN_1060f5e54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c09e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09e800(uVar1,param_2,&PTR____CFConstantStringClassReference_110e40058,
                      &PTR____CFConstantStringClassReference_110e40078,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060f5ed8; end: 1060f6093; +[BTUICardExpirationValidator month:year:validForDate:] */

bool FUN_1060f5ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_5);
  if (puRam00000001136c2ec8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    _objc_alloc();
    func_0x00010bffabc0();
    puVar3 = puRam00000001136c2ec8;
    puRam00000001136c2ec8 = puVar2;
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init();
  func_0x00010c175640();
  func_0x00010c2278a0(puVar3,param_2,param_4 % 2000 + 2000);
  func_0x00010c1c8fc0(puVar3,param_2,param_3);
  puVar2 = puVar3;
  func_0x00010c0d0e40();
  if ((long)puVar2 < 0xc) {
    func_0x00010c1c8fc0(puVar3);
  }
  else {
    func_0x00010c1c8fc0(puVar3,param_2,(ulong)(puVar2 + 1) % 0xc);
    puVar2 = puVar3;
    func_0x00010c2bedc0(puVar3);
    func_0x00010c2278a0(puVar3,param_2,puVar2 + 1);
  }
  puVar2 = puVar3;
  func_0x00010bf64de0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf433a0(param_5,param_2,puVar2);
  _objc_release(puVar2);
  if (lVar4 == -1) {
    lVar4 = param_5;
    func_0x00010bf64e40(0x41c2cf4ec0000000,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf64de0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf433a0(lVar4,param_2,puVar2);
    bVar1 = lVar5 == 1;
    _objc_release(puVar2);
    _objc_release(lVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 1060f6094; end: 1060f612f; -[BTUICardType initWithBrand:prefixes:] */

undefined8
FUN_1060f6094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfed300(puVar1,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9600(param_1,param_2,param_3,param_4,puVar1,3,
                      &PTR__OBJC_CLASS___NSConstantArray_11117ff90);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1060f6130; end: 1060f62fb; -[BTUICardType initWithBrand:prefixes:validNumberLengths:validCvvLength:formatSpaces:] */

undefined1 *
FUN_1060f6130(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar2 = &uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126efab0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x20) = param_6;
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    ppuVar6 = param_7;
    puVar4 = puVar5;
    func_0x00010c246cc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117ffa8;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6;
    }
    _objc_retain(ppuVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined ***)((long)puVar2 + 0x28) = ppuVar1;
    _objc_release(uVar3);
    _objc_release(ppuVar6);
    uVar3 = param_5;
    func_0x00010c088fa0();
    *(undefined8 *)((long)puVar2 + 0x30) = uVar3;
    _objc_release(puVar5);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_opt_class(param_3);
  func_0x00010bf32260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1060f62fc; end: 1060f636b; +[BTUICardType cardTypeForBrand:] */

void FUN_1060f62fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf32260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060f636c; end: 1060f65bb; +[BTUICardType cardTypeForNumber:] */

undefined8 * FUN_1060f636c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x21;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar14;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar15;
  long unaff_x27;
  long unaff_x28;
  long lVar16;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [256];
  long lStack_270;
  long lStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  _objc_retain(param_3);
  puVar13 = param_3;
  func_0x00010c08fa60();
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined8 *)0x0;
    _objc_opt_class();
    func_0x00010beffc60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &uStack_1b0;
    lVar10 = param_1;
    func_0x00010bf52a60();
    lStack_1f8 = lVar10;
    if (lVar10 != 0) {
      unaff_x21 = (undefined8 *)*puStack_1a0;
      puStack_200 = unaff_x21;
      do {
        unaff_x28 = 0;
        do {
          if ((undefined8 *)*puStack_1a0 != unaff_x21) {
            _objc_enumerationMutation(param_1);
          }
          puVar13 = *(undefined8 **)(lStack_1a8 + unaff_x28 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          unaff_x23 = puVar13;
          func_0x00010c296700();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = unaff_x23;
          func_0x00010bf52a60();
          if (puVar12 != (undefined8 *)0x0) {
            unaff_x27 = *plStack_1e0;
            unaff_x24 = puVar12;
            do {
              unaff_x21 = (undefined8 *)0x0;
              do {
                if (*plStack_1e0 != unaff_x27) {
                  _objc_enumerationMutation(unaff_x23);
                }
                unaff_x25 = *(undefined8 **)(lStack_1e8 + (long)unaff_x21 * 8);
                unaff_x26 = param_3;
                func_0x00010c08fa60();
                puVar12 = unaff_x25;
                func_0x00010c08fa60();
                if (puVar12 <= unaff_x26) {
                  puVar12 = unaff_x25;
                  func_0x00010c08fa60();
                  puVar1 = param_3;
                  func_0x00010c08fa60();
                  if (puVar1 <= puVar12) {
                    puVar12 = puVar1;
                  }
                  unaff_x26 = param_3;
                  func_0x00010c260c20(param_3,param_2,puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = unaff_x26;
                  puVar12 = unaff_x25;
                  func_0x00010c0720c0();
                  if (((ulong)puVar1 & 1) != 0) {
                    _objc_retain(puVar13);
                    _objc_release(unaff_x26);
                    _objc_release(unaff_x23);
                    goto LAB_1060f6564;
                  }
                  _objc_release(unaff_x26);
                }
                unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
              } while (unaff_x24 != unaff_x21);
              unaff_x24 = unaff_x23;
              func_0x00010bf52a60(unaff_x23,param_2,&uStack_1f0,auStack_170,0x10);
            } while (unaff_x24 != (undefined8 *)0x0);
          }
          _objc_release(unaff_x23);
          unaff_x21 = puStack_200;
          unaff_x28 = unaff_x28 + 1;
        } while (unaff_x28 != lStack_1f8);
        puVar12 = &uStack_1b0;
        lVar10 = param_1;
        func_0x00010bf52a60();
        lStack_1f8 = lVar10;
      } while (lVar10 != 0);
    }
    puVar13 = (undefined8 *)0x0;
LAB_1060f6564:
    _objc_release(param_1);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_208 = FUN_1060f65bc;
    lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = (undefined8 *)PTR_PTR_1126b0398;
    lStack_260 = unaff_x28;
    lStack_258 = unaff_x27;
    puStack_250 = unaff_x26;
    puStack_248 = unaff_x25;
    puStack_240 = unaff_x24;
    puStack_238 = unaff_x23;
    puStack_230 = puVar13;
    puStack_228 = unaff_x21;
    lStack_220 = param_1;
    puStack_218 = param_3;
    puStack_210 = &stack0xfffffffffffffff0;
    func_0x00010c25db60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010c08fa60();
    if (puVar13 == (undefined8 *)0x0) {
      _objc_opt_class();
      func_0x00010beffc60();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
    }
    else {
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      plStack_3a0 = (long *)0x0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      _objc_opt_class();
      func_0x00010beffc60();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = &uStack_3b0;
      puVar13 = puVar1;
      func_0x00010bf52a60();
      if (puVar13 != (undefined8 *)0x0) {
        lVar10 = *plStack_3a0;
        do {
          puVar12 = (undefined8 *)0x0;
          do {
            if (*plStack_3a0 != lVar10) {
              _objc_enumerationMutation(puVar1);
            }
            lVar14 = *(long *)(lStack_3a8 + (long)puVar12 * 8);
            lStack_3e8 = 0;
            uStack_3f0 = 0;
            uStack_3d8 = 0;
            plStack_3e0 = (long *)0x0;
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            uStack_3b8 = 0;
            uStack_3c0 = 0;
            lVar4 = lVar14;
            func_0x00010c296700();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf52a60();
            if (lVar5 != 0) {
              lVar11 = *plStack_3e0;
              do {
                lVar16 = 0;
                do {
                  if (*plStack_3e0 != lVar11) {
                    _objc_enumerationMutation(lVar4);
                  }
                  puVar15 = *(undefined8 **)(lStack_3e8 + lVar16 * 8);
                  puVar6 = puVar15;
                  func_0x00010c08fa60();
                  puVar7 = puVar2;
                  func_0x00010c08fa60();
                  if (puVar7 <= puVar6) {
                    puVar6 = puVar7;
                  }
                  func_0x00010c260c20(puVar15,param_2,puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar2;
                  func_0x00010c260c20(puVar2,param_2,puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar7;
                  func_0x00010c0720c0();
                  if ((int)puVar6 != 0) {
                    func_0x00010befa120(puVar3,param_2,lVar14);
                    _objc_release(puVar7);
                    _objc_release(puVar15);
                    goto LAB_1060f67ac;
                  }
                  _objc_release(puVar7);
                  _objc_release(puVar15);
                  lVar16 = lVar16 + 1;
                } while (lVar5 != lVar16);
                lVar5 = lVar4;
                func_0x00010bf52a60(lVar4,param_2,&uStack_3f0,auStack_370,0x10);
              } while (lVar5 != 0);
            }
LAB_1060f67ac:
            _objc_release(lVar4);
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          } while (puVar12 != puVar13);
          puVar12 = &uStack_3b0;
          puVar13 = puVar1;
          func_0x00010bf52a60();
        } while (puVar13 != (undefined8 *)0x0);
      }
      _objc_release(puVar1);
      puVar13 = puVar3;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
      ___stack_chk_fail();
      _objc_retain(puVar12);
      puVar13 = puVar12;
      func_0x00010c08fa60();
      func_0x00010c296680();
      if (puVar13 == puVar2) {
        puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                            &PTR____CFConstantStringClassReference_110dafed8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c06a520();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c11f340(puVar12,param_2,puVar9);
        puVar13 = (undefined8 *)(ulong)(puVar13 == (undefined8 *)0x7fffffffffffffff);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      else {
        puVar13 = (undefined8 *)0x0;
      }
      _objc_release(puVar12);
      return puVar13;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 1060f65bc; end: 1060f6867; +[BTUICardType possibleCardTypesForNumber:] */

undefined * FUN_1060f65bc(undefined *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)PTR_PTR_1126b0398;
  func_0x00010c25db60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined8 *)0x0) {
    _objc_opt_class();
    func_0x00010beffc60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_opt_class();
    func_0x00010beffc60();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_1b0;
    puVar3 = param_1;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar7 = *plStack_1a0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          lVar11 = *(long *)(lStack_1a8 + (long)puVar10 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lVar4 = lVar11;
          func_0x00010c296700();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf52a60();
          if (lVar5 != 0) {
            lVar8 = *plStack_1e0;
            do {
              lVar13 = 0;
              do {
                if (*plStack_1e0 != lVar8) {
                  _objc_enumerationMutation(lVar4);
                }
                puVar12 = *(undefined8 **)(lStack_1e8 + lVar13 * 8);
                puVar2 = puVar12;
                func_0x00010c08fa60();
                puVar6 = puVar1;
                func_0x00010c08fa60();
                if (puVar6 <= puVar2) {
                  puVar2 = puVar6;
                }
                func_0x00010c260c20(puVar12,param_2,puVar2);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar1;
                func_0x00010c260c20(puVar1,param_2,puVar2);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar6;
                func_0x00010c0720c0();
                if ((int)puVar2 != 0) {
                  func_0x00010befa120(puVar9,param_2,lVar11);
                  _objc_release(puVar6);
                  _objc_release(puVar12);
                  goto LAB_1060f67ac;
                }
                _objc_release(puVar6);
                _objc_release(puVar12);
                lVar13 = lVar13 + 1;
              } while (lVar5 != lVar13);
              lVar5 = lVar4;
              func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar5 != 0);
          }
LAB_1060f67ac:
          _objc_release(lVar4);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar3);
        param_3 = &uStack_1b0;
        puVar3 = param_1;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(param_1);
    param_1 = puVar9;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010c08fa60();
    func_0x00010c296680();
    if (puVar2 == puVar1) {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                          &PTR____CFConstantStringClassReference_110dafed8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010c11f340(param_3,param_2,puVar10);
      puVar9 = (undefined *)(ulong)(puVar1 == (undefined8 *)0x7fffffffffffffff);
      _objc_release(puVar10);
      _objc_release(puVar3);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    _objc_release(param_3);
    return puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 1060f6868; end: 1060f691f; -[BTUICardType validCvv:] */

bool FUN_1060f6868(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  func_0x00010c296680();
  if (lVar2 == param_1) {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110dafed8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c11f340(param_3,param_2,puVar4);
    bVar1 = lVar2 == 0x7fffffffffffffff;
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1060f6920; end: 1060f6983; -[BTUICardType description] */

void FUN_1060f6920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf20e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e400b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060f6984; end: 1060f69f7; +[BTUICardType maxNumberLength] */

undefined8 FUN_1060f6984(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1060f69f8;
  puStack_20 = &UNK_110848088;
  if (lRam00000001136c2ed0 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136c2ed0,&puStack_38);
  }
  return uRam00000001136c2ed8;
}



/* Entry: 1060f69f8; end: 1060f6b07;  */

void FUN_1060f69f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010beffc60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar2 = uRam00000001136c2ed8;
      uVar6 = *(ulong *)(lVar8 * 8);
      func_0x00010c0c27a0();
      uRam00000001136c2ed8 = uVar2;
      if (uVar2 <= uVar6) {
        uRam00000001136c2ed8 = uVar6;
      }
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c2ee0 != -1) {
    func_0x00010002a2fc(0x1136c2ee0,&PTR___NSConcreteGlobalBlock_11090e6f8);
  }
  uVar3 = uRam00000001136c2ee8;
  _objc_retain(uRam00000001136c2ee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060f6b08; end: 1060f6b5b; +[BTUICardType allCards] */

void FUN_1060f6b08(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c2ee0 != -1) {
    func_0x00010002a2fc(0x1136c2ee0,&PTR___NSConcreteGlobalBlock_11090e6f8);
  }
  uVar1 = uRam00000001136c2ee8;
  _objc_retain(uRam00000001136c2ee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060f6b5c; end: 1060f6f1f;  */

void FUN_1060f6b5c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b0750;
  func_0x00010bdc0f60(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff95e0();
  puStack_b8 = puVar2;
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b0750;
  func_0x00010bdc0f20(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff95e0();
  puStack_c0 = puVar2;
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0750;
  func_0x00010bdc0ec0(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff95e0();
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0750;
  func_0x00010bdc0ee0(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff95e0();
  _objc_release(puVar2);
  puVar6 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0750;
  func_0x00010bdc0e80(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9600();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar7 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0750;
  func_0x00010bdc0ea0(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9600();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar8 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0750;
  func_0x00010bdc0f00(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed320(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9600();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar9 = PTR_PTR_1126b06c0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b0750;
  func_0x00010bdc0f40(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed320(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9600();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = puStack_b8;
  puVar2 = puStack_c0;
  puStack_b0 = puStack_b8;
  puStack_a8 = puStack_c0;
  puStack_80 = puStack_c0;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar4;
  puStack_98 = puVar6;
  puStack_90 = puVar7;
  puStack_88 = puVar5;
  puStack_78 = puVar8;
  puStack_70 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c2ee8;
  puRam00000001136c2ee8 = puVar10;
  _objc_release(uVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_e0 = puVar2;
  puStack_d8 = puVar3;
  pcStack_c8 = FUN_1060f6f20;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc0000000;
  pcStack_f8 = FUN_1060f6fa8;
  puStack_f0 = &UNK_110848088;
  puStack_e8 = puVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (lRam00000001136c2ef0 != -1) {
    func_0x00010002a2fc(0x1136c2ef0,&puStack_108);
  }
  uVar1 = uRam00000001136c2ef8;
  _objc_retain(uRam00000001136c2ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060f6f20; end: 1060f6fa7; +[BTUICardType cardsByBrand] */

void FUN_1060f6f20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1060f6fa8;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c2ef0 != -1) {
    func_0x00010002a2fc(0x1136c2ef0,&puStack_48);
  }
  uVar1 = uRam00000001136c2ef8;
  _objc_retain(uRam00000001136c2ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060f6fa8; end: 1060f70f7;  */

void FUN_1060f6fa8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010beffc60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar11 = *(undefined8 *)(lVar12 * 8);
      func_0x00010bf20e60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar11);
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    lVar10 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar4 = puRam00000001136c2ef8;
  puRam00000001136c2ef8 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b0398;
  func_0x00010c25db60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  puVar6 = puVar2;
  func_0x00010c08fa60();
  puVar13 = puVar4;
  func_0x00010c0c27a0();
  if (puVar6 <= puVar13) {
    func_0x00010bfb5e20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        puVar7 = *(undefined **)((long)puVar13 * 8);
        func_0x00010c2827c0();
        puVar8 = puVar5;
        func_0x00010c08fa60();
        if (puVar8 <= puVar7) goto LAB_1060f72a0;
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b800(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar8);
        puVar13 = puVar13 + 1;
      } while (puVar6 != puVar13);
      puVar6 = puVar4;
      func_0x00010bf52a60();
    }
LAB_1060f72a0:
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfb5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x4020000000000000);
  return;
}



/* Entry: 1060f70f8; end: 1060f72f7; -[BTUICardType formatNumber:kerning:] */

void FUN_1060f70f8(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b0398;
  func_0x00010c25db60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  puVar4 = puVar2;
  func_0x00010c08fa60();
  puVar8 = param_2;
  func_0x00010c0c27a0();
  if (puVar4 <= puVar8) {
    func_0x00010bfb5e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        puVar5 = *(undefined **)((long)puVar8 * 8);
        func_0x00010c2827c0();
        puVar6 = puVar3;
        func_0x00010c08fa60();
        if (puVar6 <= puVar5) goto LAB_1060f72a0;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b800(puVar3);
        _objc_release(puVar5);
        _objc_release(puVar6);
        puVar8 = puVar8 + 1;
      } while (puVar4 != puVar8);
      puVar4 = param_2;
      func_0x00010bf52a60();
    }
LAB_1060f72a0:
    _objc_release(param_2);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfb5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x4020000000000000);
  return;
}



/* Entry: 1060f72f8; end: 1060f72ff; -[BTUICardType formatNumber:] */

void FUN_1060f72f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4020000000000000,param_1,PTR_s_formatNumber_kerning__1125cb0c8);
  return;
}



/* Entry: 1060f7300; end: 1060f738b; -[BTUICardType validAndNecessarilyCompleteNumber:] */

undefined * FUN_1060f7300(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  func_0x00010c2966e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c088fa0();
  if (lVar1 == lVar2) {
    puVar3 = PTR_PTR_1126b0398;
    func_0x00010c0b5c00(PTR_PTR_1126b0398,param_2,param_3);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1060f738c; end: 1060f73eb; -[BTUICardType validNumber:] */

undefined * FUN_1060f738c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf43a20(param_1,param_2,param_3);
  if ((int)param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b0398;
    func_0x00010c0b5c00(PTR_PTR_1126b0398,param_2,param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060f73ec; end: 1060f745f; -[BTUICardType completeNumber:] */

undefined8 FUN_1060f73ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c2966e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010bf4b800(param_1,param_2,uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1060f7460; end: 1060f7467; -[BTUICardType brand] */

undefined8 FUN_1060f7460(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060f7468; end: 1060f746f; -[BTUICardType validNumberPrefixes] */

undefined8 FUN_1060f7468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060f7470; end: 1060f7477; -[BTUICardType validNumberLengths] */

undefined8 FUN_1060f7470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060f7478; end: 1060f747f; -[BTUICardType validCvvLength] */

undefined8 FUN_1060f7478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060f7480; end: 1060f7487; -[BTUICardType formatSpaces] */

undefined8 FUN_1060f7480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060f7488; end: 1060f748f; -[BTUICardType maxNumberLength] */

undefined8 FUN_1060f7488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060f7490; end: 1060f74d7; -[BTUICardType .cxx_destruct] */

void FUN_1060f7490(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060f74d8; end: 1060f75c3; +[BTUIUtil luhnValid:] */

bool FUN_1060f74d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  lVar6 = param_3;
  func_0x00010c08fa60();
  if (lVar6 + -1 < 0) {
    bVar4 = true;
  }
  else {
    lVar8 = 0;
    bVar4 = true;
    lVar7 = 0;
    do {
      lVar10 = (long)*(char *)(lVar5 + -1 + lVar6) + -0x30;
      iVar9 = (int)lVar10;
      sVar2 = (short)((uint)(iVar9 * 0x6667) >> 0x10);
      sVar3 = (short)((uint)(iVar9 * 0xccce) >> 0x10);
      lVar1 = lVar7 + (short)(((sVar2 >> 1) - (sVar2 >> 0xf)) +
                              ((sVar3 >> 2) - (sVar3 >> 0xf)) * -10 + (short)(iVar9 << 1));
      if (bVar4) {
        lVar1 = lVar7;
        lVar8 = lVar10 + lVar8;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      lVar6 = lVar6 + -1;
      lVar7 = lVar1;
    } while (0 < lVar6);
    lVar5 = (lVar1 + lVar8) * -0x3333333333333333;
    bVar4 = (lVar5 + 0x1999999999999998U >> 1 | lVar5 << 0x3f) < 0x1999999999999999;
  }
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 1060f75c4; end: 1060f75d3; +[BTUIUtil stripNonDigits:] */

void FUN_1060f75c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25db90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stripPattern_input__112675108,
             &PTR____CFConstantStringClassReference_110e40518,param_3);
  return;
}



/* Entry: 1060f75d4; end: 1060f75e3; +[BTUIUtil stripNonExpiry:] */

void FUN_1060f75d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25db90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stripPattern_input__112675108,
             &PTR____CFConstantStringClassReference_110e40538,param_3);
  return;
}



/* Entry: 1060f75e4; end: 1060f769b; +[BTUIUtil stripPattern:input:] */

void FUN_1060f75e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uStack_38 = 0;
    _objc_retain(param_4);
    func_0x00010c127e80(puVar1,param_2,param_3,0,&uStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c08fa60(param_4);
    puVar3 = puVar1;
    func_0x00010c25cfa0(puVar1,param_2,param_4,0,0,lVar2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060f769c; end: 1060f7717; +[Checkout descriptor] */

undefined * FUN_1060f769c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7050,
                        &PTR____CFConstantStringClassReference_110e40558,&PTR_DAT_11313e248,
                        &PTR_s_id_p_11313e260,0x12,0x80,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2f00 = puVar1;
  }
  return puRam00000001136c2f00;
}



/* Entry: 1060f7718; end: 1060f777f; +[CheckoutLineItem descriptor] */

void FUN_1060f7718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac70f0,
                        &PTR____CFConstantStringClassReference_110e40578,&PTR_DAT_11313e4a0,
                        &PTR_DAT_11313e4b8,4,0x28,0x1c);
    puRam00000001136c2f08 = puVar1;
  }
  return;
}



/* Entry: 1060f7780; end: 1060f7863; +[BitmojiAssetInfo descriptor] */

void FUN_1060f7780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7190,
                        &PTR____CFConstantStringClassReference_110e40598,&PTR_DAT_11313e538,
                        &PTR_DAT_11313e550,2,0x18,0x1c);
    puRam00000001136c2f10 = puVar1;
  }
  return;
}



/* Entry: 1060f7864; end: 1060f786f;  */

bool FUN_1060f7864(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1060f7870; end: 1060f78eb;  */

undefined * FUN_1060f7870(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2f20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e405d8,
                        &UNK_10ddd8b9c,&UNK_10ddd8ba8,2,FUN_1060f78ec,0);
    do {
      if (puRam00000001136c2f20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2f20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2f20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2f20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2f20;
}



/* Entry: 1060f78ec; end: 1060f78f7;  */

bool FUN_1060f78ec(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1060f78f8; end: 1060f7993; +[Order descriptor] */

undefined * FUN_1060f78f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7230,
                        &PTR____CFConstantStringClassReference_110db2498,&PTR_DAT_11313e598,
                        &PTR_DAT_11313e5b0,0x1d,0xd8,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10ddd8bb0);
    puRam00000001136c2f28 = puVar1;
  }
  return puRam00000001136c2f28;
}



/* Entry: 1060f7994; end: 1060f7a77; +[ContactDetails descriptor] */

void FUN_1060f7994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac72d0,
                        &PTR____CFConstantStringClassReference_110db24d8,&PTR_DAT_11313e950,
                        &PTR_s_email_11313e968,2,0x18,0x1c);
    puRam00000001136c2f30 = puVar1;
  }
  return;
}



/* Entry: 1060f7a78; end: 1060f7a83;  */

bool FUN_1060f7a78(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1060f7a84; end: 1060f7c1f; +[ShippingAddress descriptor] */

void FUN_1060f7a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7370,
                        &PTR____CFConstantStringClassReference_110db25b8,&PTR_DAT_11313e9a8,
                        &PTR_s_addressId_11313e9c0,0xf,0x70,0x1c);
    puRam00000001136c2f40 = puVar1;
  }
  return;
}



/* Entry: 1060f7c20; end: 1060f7c2b;  */

bool FUN_1060f7c20(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1060f7c2c; end: 1060f7ca7;  */

undefined * FUN_1060f7c2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2f50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e40638,
                        &UNK_10ddd8c24,&UNK_10ddd8c50,4,FUN_1060f7ca8,0);
    do {
      if (puRam00000001136c2f50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2f50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2f50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2f50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2f50;
}



/* Entry: 1060f7ca8; end: 1060f7cb3;  */

bool FUN_1060f7ca8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1060f7cb4; end: 1060f7d1b; +[DiscountInfo descriptor] */

void FUN_1060f7cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7460,
                        &PTR____CFConstantStringClassReference_110e40658,&PTR_DAT_11313eba0,
                        &PTR_DAT_11313ebb8,5,0x18,0x1c);
    puRam00000001136c2f58 = puVar1;
  }
  return;
}



/* Entry: 1060f7d1c; end: 1060f7d97; +[OrderBillingItem descriptor] */

undefined * FUN_1060f7d1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7500,
                        &PTR____CFConstantStringClassReference_110e40678,&PTR_DAT_11313ec58,
                        &PTR_DAT_11313ec70,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2f60 = puVar1;
  }
  return puRam00000001136c2f60;
}



/* Entry: 1060f7d98; end: 1060f7e3f; +[ItemInfo descriptor] */

void FUN_1060f7d98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac75a0,
                        &PTR____CFConstantStringClassReference_110e04cb8,&PTR_DAT_11313ed10,
                        &PTR_s_productId_11313ed28,0xc,0x50,0x1c);
    puRam00000001136c2f68 = puVar1;
  }
  return;
}



/* Entry: 1060f7e40; end: 1060f7ebb; +[PrintingMetadata descriptor] */

undefined * FUN_1060f7e40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7640,
                        &PTR____CFConstantStringClassReference_110e40698,&PTR_DAT_11313eea8,
                        &PTR_s_snapId_11313eec0,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2f70 = puVar1;
  }
  return puRam00000001136c2f70;
}



/* Entry: 1060f7ebc; end: 1060f7f23; +[ShippingOption descriptor] */

void FUN_1060f7ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac76e0,
                        &PTR____CFConstantStringClassReference_110db25d8,&PTR_DAT_11313ef60,
                        &PTR_s_handle_11313ef78,6,0x38,0x1c);
    puRam00000001136c2f78 = puVar1;
  }
  return;
}



/* Entry: 1060f7f24; end: 1060f7f8b; +[TaxItem descriptor] */

void FUN_1060f7f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7780,
                        &PTR____CFConstantStringClassReference_110e406b8,&PTR_DAT_11313f038,
                        &PTR_s_price_11313f050,3,0x20,0x1c);
    puRam00000001136c2f80 = puVar1;
  }
  return;
}



/* Entry: 1060f7f8c; end: 1060f8007; +[ProductInfo descriptor] */

undefined * FUN_1060f7f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7820,
                        &PTR____CFConstantStringClassReference_110e406d8,&PTR_DAT_11313f0b0,
                        &PTR_s_id_p_11313f1c8,0x11,0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2f88 = puVar1;
  }
  return puRam00000001136c2f88;
}



/* Entry: 1060f8008; end: 1060f8093; +[ProductInfo_UnlockableInfo descriptor] */

undefined * FUN_1060f8008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7870,
                        &PTR____CFConstantStringClassReference_110e406f8,&PTR_DAT_11313f0b0,
                        &PTR_s_unlockableId_11313f0c8,3,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ac7820);
    puRam00000001136c2f90 = puVar1;
  }
  return puRam00000001136c2f90;
}



/* Entry: 1060f8094; end: 1060f819b; +[ProductInfo_ImageDetails descriptor] */

undefined * FUN_1060f8094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac78c0,
                        &PTR____CFConstantStringClassReference_110e40718,&PTR_DAT_11313f0b0,
                        &PTR_DAT_11313f128,5,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ac7820);
    puRam00000001136c2f98 = puVar1;
  }
  return puRam00000001136c2f98;
}



/* Entry: 1060f819c; end: 1060f81a7;  */

bool FUN_1060f819c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1060f81a8; end: 1060f820f; +[CustomBitmojiInfo descriptor] */

void FUN_1060f81a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac79b0,
                        &PTR____CFConstantStringClassReference_110e40758,&PTR_DAT_11313f3e8,
                        &PTR_DAT_11313f520,6,0x30,0x1c);
    puRam00000001136c2fa8 = puVar1;
  }
  return;
}



/* Entry: 1060f8210; end: 1060f828b; +[CustomBitmojiInfo_CustomImageInfo descriptor] */

undefined * FUN_1060f8210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7a00,
                        &PTR____CFConstantStringClassReference_110e40778,&PTR_DAT_11313f3e8,
                        &PTR_DAT_11313f480,5,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136c2fb0 = puVar1;
  }
  return puRam00000001136c2fb0;
}



/* Entry: 1060f828c; end: 1060f8383; +[CustomBitmojiInfo_CustomImageFrame descriptor] */

undefined * FUN_1060f828c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7a50,
                        &PTR____CFConstantStringClassReference_110e40798,&PTR_DAT_11313f3e8,
                        &PTR_DAT_11313f400,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001136c2fb8 = puVar1;
  }
  return puRam00000001136c2fb8;
}



/* Entry: 1060f8384; end: 1060f838f;  */

bool FUN_1060f8384(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1060f8390; end: 1060f83f7; +[ProductVariant descriptor] */

void FUN_1060f8390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2fc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7b40,
                        &PTR____CFConstantStringClassReference_110e407d8,&PTR_DAT_11313f5e0,
                        &PTR_s_id_p_11313f638,0xb,0x48,0x1c);
    puRam00000001136c2fc8 = puVar1;
  }
  return;
}



/* Entry: 1060f83f8; end: 1060f8473; +[ProductVariant_VariantCategoryPair descriptor] */

undefined * FUN_1060f83f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2fd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7b90,
                        &PTR____CFConstantStringClassReference_110e407f8,&PTR_DAT_11313f5e0,
                        &PTR_DAT_11313f5f8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c2fd0 = puVar1;
  }
  return puRam00000001136c2fd0;
}



/* Entry: 1060f8474; end: 1060f8597; +[CurrencyAmount descriptor] */

void FUN_1060f8474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2fd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7c30,
                        &PTR____CFConstantStringClassReference_110e40818,&PTR_DAT_11313f798,
                        &PTR_DAT_11313f7b0,3,0x18,0x1c);
    puRam00000001136c2fd8 = puVar1;
  }
  return;
}



/* Entry: 1060f8598; end: 1060f85a3;  */

bool FUN_1060f8598(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1060f85a4; end: 1060f860b; +[ImageMap descriptor] */

void FUN_1060f85a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2fe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7cd0,
                        &PTR____CFConstantStringClassReference_110e40858,&PTR_DAT_11313f810,
                        &PTR_DAT_11313f828,1,0x10,0x1c);
    puRam00000001136c2fe8 = puVar1;
  }
  return;
}



/* Entry: 1060f860c; end: 1060f8687; +[StoreInfo descriptor] */

undefined * FUN_1060f860c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7d70,
                        &PTR____CFConstantStringClassReference_110db2558,&PTR_DAT_11313f848,
                        &PTR_s_id_p_11313f860,0x11,0x78,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2ff0 = puVar1;
  }
  return puRam00000001136c2ff0;
}



/* Entry: 1060f8688; end: 1060f876b; +[StoreCategory descriptor] */

void FUN_1060f8688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7e10,
                        &PTR____CFConstantStringClassReference_110e40878,&PTR_DAT_11313fa80,
                        &PTR_s_id_p_11313fa98,3,0x20,0x1c);
    puRam00000001136c2ff8 = puVar1;
  }
  return;
}



/* Entry: 1060f876c; end: 1060f8777;  */

bool FUN_1060f876c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1060f8778; end: 1060f87f3; +[HeroImageInfo descriptor] */

undefined * FUN_1060f8778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7eb0,
                        &PTR____CFConstantStringClassReference_110e408b8,&PTR_DAT_11313faf8,
                        &PTR_s_URL_11313fb10,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3008 = puVar1;
  }
  return puRam00000001136c3008;
}



/* Entry: 1060f87f4; end: 1060f886f; +[SnapCommercePolicy descriptor] */

undefined * FUN_1060f87f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7f50,
                        &PTR____CFConstantStringClassReference_110e408d8,&PTR_DAT_11313fb90,
                        &PTR_DAT_11313fba8,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3010 = puVar1;
  }
  return puRam00000001136c3010;
}



/* Entry: 1060f8870; end: 1060f88eb; +[SnapCodeInfo descriptor] */

undefined * FUN_1060f8870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac7ff0,
                        &PTR____CFConstantStringClassReference_110e408f8,&PTR_DAT_11313fbe8,
                        &PTR_DAT_11313fc00,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3018 = puVar1;
  }
  return puRam00000001136c3018;
}



/* Entry: 1060f88ec; end: 1060f8953; +[StorePixelInfo descriptor] */

void FUN_1060f88ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8090,
                        &PTR____CFConstantStringClassReference_110e40918,&PTR_DAT_11313fc80,
                        &PTR_DAT_11313fc98,1,0x10,0x1c);
    puRam00000001136c3020 = puVar1;
  }
  return;
}



/* Entry: 1060f8954; end: 1060f89cf; +[StorePolicy descriptor] */

undefined * FUN_1060f8954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8130,
                        &PTR____CFConstantStringClassReference_110e40938,&PTR_DAT_11313fcb8,
                        &PTR_s_returnPolicyURL_11313fcd0,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3028 = puVar1;
  }
  return puRam00000001136c3028;
}



/* Entry: 1060f89d0; end: 1060f8a37; +[AdsStoreExperienceContext descriptor] */

void FUN_1060f89d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac81d0,
                        &PTR____CFConstantStringClassReference_110e40958,&PTR_DAT_11313fd90,
                        &PTR_s_storeId_11313fda8,4,0x28,0x1c);
    puRam00000001136c3030 = puVar1;
  }
  return;
}



/* Entry: 1060f8a38; end: 1060f8a9f; +[AttachmentToolContext descriptor] */

void FUN_1060f8a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8270,
                        &PTR____CFConstantStringClassReference_110e40978,&PTR_DAT_11313fe28,
                        &PTR_s_storeId_11313fe40,2,0x18,0x1c);
    puRam00000001136c3038 = puVar1;
  }
  return;
}



/* Entry: 1060f8aa0; end: 1060f8b07; +[FavoritesContext descriptor] */

void FUN_1060f8aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8310,
                        &PTR____CFConstantStringClassReference_110e40998,&PTR_DAT_11313fe80,
                        &PTR_DAT_11313fe98,1,0x10,0x1c);
    puRam00000001136c3040 = puVar1;
  }
  return;
}



/* Entry: 1060f8b08; end: 1060f8b6f; +[ItemVariantContext descriptor] */

void FUN_1060f8b08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac83b0,
                        &PTR____CFConstantStringClassReference_110e409b8,&PTR_DAT_11313feb8,
                        &PTR_DAT_11313fed0,2,0x18,0x1c);
    puRam00000001136c3048 = puVar1;
  }
  return;
}



/* Entry: 1060f8b70; end: 1060f8bd7; +[LegacyItemDeeplinkContext descriptor] */

void FUN_1060f8b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8450,
                        &PTR____CFConstantStringClassReference_110e409d8,&PTR_DAT_11313ff10,
                        &PTR_s_snapItemId_11313ff28,1,0x10,0x1c);
    puRam00000001136c3050 = puVar1;
  }
  return;
}



/* Entry: 1060f8bd8; end: 1060f8c3f; +[LensContext descriptor] */

void FUN_1060f8bd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac84f0,
                        &PTR____CFConstantStringClassReference_110e409f8,&PTR_DAT_11313ff48,
                        &PTR_DAT_11313ff60,2,0x18,0x1c);
    puRam00000001136c3058 = puVar1;
  }
  return;
}



/* Entry: 1060f8c40; end: 1060f8ca7; +[ScanContext descriptor] */

void FUN_1060f8c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8590,
                        &PTR____CFConstantStringClassReference_110e37178,&PTR_DAT_11313ffa0,
                        &PTR_s_payload_11313ffb8,1,0x10,0x1c);
    puRam00000001136c3060 = puVar1;
  }
  return;
}



/* Entry: 1060f8ca8; end: 1060f8d0f; +[ScreenshopContext descriptor] */

void FUN_1060f8ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8630,
                        &PTR____CFConstantStringClassReference_110e40a18,&PTR_DAT_11313ffd8,
                        &PTR_s_payload_11313fff0,1,0x10,0x1c);
    puRam00000001136c3068 = puVar1;
  }
  return;
}



/* Entry: 1060f8d10; end: 1060f8d77; +[SharingContext descriptor] */

void FUN_1060f8d10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac86d0,
                        &PTR____CFConstantStringClassReference_110e40a38,&PTR_DAT_113140010,
                        &PTR_s_snapItemId_113140028,4,0x28,0x1c);
    puRam00000001136c3070 = puVar1;
  }
  return;
}



/* Entry: 1060f8d78; end: 1060f8ddf; +[ShowcaseAdContext descriptor] */

void FUN_1060f8d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8770,
                        &PTR____CFConstantStringClassReference_110e40a58,&PTR_DAT_1131400a8,
                        &PTR_DAT_1131400c0,1,0x10,0x1c);
    puRam00000001136c3078 = puVar1;
  }
  return;
}



/* Entry: 1060f8de0; end: 1060f8e47; +[StoreExperienceContext descriptor] */

void FUN_1060f8de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8810,
                        &PTR____CFConstantStringClassReference_110e40a78,&PTR_DAT_1131400e0,
                        &PTR_s_storeId_1131400f8,4,0x28,0x1c);
    puRam00000001136c3080 = puVar1;
  }
  return;
}



/* Entry: 1060f8e48; end: 1060f8eaf; +[TopicExperienceContext descriptor] */

void FUN_1060f8e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac88b0,
                        &PTR____CFConstantStringClassReference_110e40a98,&PTR_DAT_113140178,
                        &PTR_DAT_1131401d0,4,0x28,0x1c);
    puRam00000001136c3088 = puVar1;
  }
  return;
}



/* Entry: 1060f8eb0; end: 1060f8f17; +[TopicInteractedItem descriptor] */

void FUN_1060f8eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8900,
                        &PTR____CFConstantStringClassReference_110e40ab8,&PTR_DAT_113140178,
                        &PTR_s_snapItemId_113140190,2,0x18,0x1c);
    puRam00000001136c3090 = puVar1;
  }
  return;
}



/* Entry: 1060f8f18; end: 1060f8f7f; +[CommerceTopic descriptor] */

void FUN_1060f8f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac89a0,
                        &PTR____CFConstantStringClassReference_110e40ad8,&PTR_DAT_113140250,
                        &PTR_DAT_113140268,2,0x18,0x1c);
    puRam00000001136c3098 = puVar1;
  }
  return;
}



/* Entry: 1060f8f80; end: 1060f8ffb; +[ViewingContextInternal descriptor] */

undefined * FUN_1060f8f80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac89f0,
                        &PTR____CFConstantStringClassReference_110e40af8,&PTR_DAT_113140250,
                        &PTR_DAT_1131402e8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c30a0 = puVar1;
  }
  return puRam00000001136c30a0;
}



/* Entry: 1060f8ffc; end: 1060f9077; +[ScreenshotUrl descriptor] */

undefined * FUN_1060f8ffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8a40,
                        &PTR____CFConstantStringClassReference_110e40b18,&PTR_DAT_113140250,
                        &PTR_s_URL_1131402a8,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c30a8 = puVar1;
  }
  return puRam00000001136c30a8;
}



/* Entry: 1060f9078; end: 1060f9103; +[GetItemDetailPageResponse descriptor] */

undefined * FUN_1060f9078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8ae0,
                        &PTR____CFConstantStringClassReference_110e40b38,&PTR_DAT_113140358,
                        &PTR_s_requestId_113140370,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c30b0 = puVar1;
  }
  return puRam00000001136c30b0;
}



/* Entry: 1060f9104; end: 1060f919f; +[GetItemDetailPageResponse_CallToAction descriptor] */

undefined * FUN_1060f9104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8b30,
                        &PTR____CFConstantStringClassReference_110e40b58,&PTR_DAT_113140358,
                        &PTR_DAT_1131403d0,4,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ac8ae0);
    puRam00000001136c30b8 = puVar1;
  }
  return puRam00000001136c30b8;
}



/* Entry: 1060f91a0; end: 1060f921b; +[GetItemDetailPageResponse_DetailsPage descriptor] */

undefined * FUN_1060f91a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8b80,
                        &PTR____CFConstantStringClassReference_110e40b78,&PTR_DAT_113140358,
                        &PTR_s_item_113140450,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136c30c0 = puVar1;
  }
  return puRam00000001136c30c0;
}



/* Entry: 1060f921c; end: 1060f92a7; +[ItemDetailPageWidget descriptor] */

undefined * FUN_1060f921c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8c20,
                        &PTR____CFConstantStringClassReference_110e40b98,&PTR_DAT_1131404d8,
                        &PTR_DAT_1131404f0,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001136c30c8 = puVar1;
  }
  return puRam00000001136c30c8;
}



/* Entry: 1060f92a8; end: 1060f938b; +[ARTryOnWidget descriptor] */

void FUN_1060f92a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8cc0,
                        &PTR____CFConstantStringClassReference_110e40bb8,&PTR_DAT_1131405d0,
                        &PTR_DAT_1131405e8,1,0x10,0x1c);
    puRam00000001136c30d0 = puVar1;
  }
  return;
}



/* Entry: 1060f938c; end: 1060f9397;  */

bool FUN_1060f938c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1060f9398; end: 1060f93ff; +[ItemRecommendationWidgetQueryContext descriptor] */

void FUN_1060f9398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8db0,
                        &PTR____CFConstantStringClassReference_110e40bf8,&PTR_DAT_113140608,
                        &PTR_DAT_113140620,1,0x10,0x1c);
    puRam00000001136c30e0 = puVar1;
  }
  return;
}



/* Entry: 1060f9400; end: 1060f9467; +[ItemRecommendationWidget descriptor] */

void FUN_1060f9400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8e00,
                        &PTR____CFConstantStringClassReference_110e40c18,&PTR_DAT_113140608,
                        &PTR_DAT_113140640,1,0x10,0x1c);
    puRam00000001136c30e8 = puVar1;
  }
  return;
}



/* Entry: 1060f9468; end: 1060f94cf; +[ShopOnStoreWidget descriptor] */

void FUN_1060f9468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8ea0,
                        &PTR____CFConstantStringClassReference_110e40c38,&PTR_DAT_113140660,
                        &PTR_s_storeId_113140678,3,0x20,0x1c);
    puRam00000001136c30f0 = puVar1;
  }
  return;
}



/* Entry: 1060f94d0; end: 1060f9537; +[SizeRecommendationWidget descriptor] */

void FUN_1060f94d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c30f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8f40,
                        &PTR____CFConstantStringClassReference_110e40c58,&PTR_DAT_1131406d8,0,0,4,
                        0x1c);
    puRam00000001136c30f8 = puVar1;
  }
  return;
}



/* Entry: 1060f9538; end: 1060f959f; +[VariantWidget descriptor] */

void FUN_1060f9538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac8fe0,
                        &PTR____CFConstantStringClassReference_110e40c78,&PTR_DAT_1131406f0,
                        &PTR_DAT_113140728,2,0x18,0x1c);
    puRam00000001136c3100 = puVar1;
  }
  return;
}


