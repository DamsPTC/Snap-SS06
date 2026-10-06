/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00632b34; end: 00632c27;  */

void FUN_00632b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_00ac32a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x00781c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00789700();
  _objc_release(puVar1);
  func_0x0078ebc0(puVar2,param_2,param_4);
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_00998fd0;
  uStack_50 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_00998fe8;
  puVar6 = &uStack_48;
  puVar7 = &uStack_58;
  uVar8 = 2;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  uStack_48 = param_3;
  puStack_40 = puVar2;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableParagraphStyle_00ac32a0;
    lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
    _objc_retain(puVar6);
    func_0x00781c60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00789700();
    _objc_release(ppuVar3);
    func_0x0078ebc0(ppuVar4,param_2,puVar7);
    func_0x0078cb00(ppuVar4,param_2,uVar8);
    uStack_c8 = *(undefined8 *)PTR__NSFontAttributeName_00998fd0;
    uStack_c0 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_00998fe8;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    puStack_b8 = puVar6;
    ppuStack_b0 = ppuVar4;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_2,&puStack_b8,&uStack_c8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_a8) {
      ___stack_chk_fail();
      ppuVar3 = ppuVar4;
      func_0x007882e0();
      if (ppuVar3 == (undefined **)0x0) {
LAB_00632dc4:
        ppuVar3 = &PTR____CFConstantStringClassReference_00a212a0;
      }
      else {
        ppuVar9 = (undefined **)0x0;
        ppuVar3 = &PTR____CFConstantStringClassReference_00a212a0;
        do {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
          func_0x00793aa0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00780140(ppuVar4,param_2,ppuVar9);
          puVar2 = puVar1;
          func_0x00780180(puVar1,param_2,ppuVar5);
          _objc_release(puVar1);
          if ((int)puVar2 == 0) {
            if (ppuVar9 == (undefined **)0x7fffffffffffffff) goto LAB_00632dc4;
            ppuVar3 = ppuVar4;
            func_0x0078adc0(ppuVar4,param_2,ppuVar9);
            func_0x00792440(ppuVar4,param_2,ppuVar3);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar4;
            break;
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          ppuVar5 = ppuVar4;
          func_0x007882e0();
        } while (ppuVar9 < ppuVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar3);
  return;
}



/* Entry: 00632c28; end: 00632e0b;  */

void FUN_00632c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableParagraphStyle_00ac32a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x00781c60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00789700();
  _objc_release(ppuVar1);
  func_0x0078ebc0(ppuVar2,param_2,param_4);
  func_0x0078cb00(ppuVar2,param_2,param_5);
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_00998fd0;
  uStack_60 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_00998fe8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  uStack_58 = param_3;
  ppuStack_50 = ppuVar2;
  func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_2,&uStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    ppuVar1 = ppuVar2;
    func_0x007882e0();
    if (ppuVar1 == (undefined **)0x0) {
LAB_00632dc4:
      ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
    }
    else {
      ppuVar6 = (undefined **)0x0;
      ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
      do {
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
        func_0x00793aa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar2;
        func_0x00780140(ppuVar2,param_2,ppuVar6);
        puVar5 = puVar3;
        func_0x00780180(puVar3,param_2,ppuVar4);
        _objc_release(puVar3);
        if ((int)puVar5 == 0) {
          if (ppuVar6 == (undefined **)0x7fffffffffffffff) goto LAB_00632dc4;
          ppuVar1 = ppuVar2;
          func_0x0078adc0(ppuVar2,param_2,ppuVar6);
          func_0x00792440(ppuVar2,param_2,ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar2;
          break;
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        ppuVar4 = ppuVar2;
        func_0x007882e0();
      } while (ppuVar6 < ppuVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar1);
  return;
}



/* Entry: 00632e0c; end: 00632ef7;  */

void FUN_00632e0c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x007882e0();
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = param_1;
      func_0x00780140(param_1,param_2,uVar2);
      if ((int)uVar1 - 0x80U < 0xffffff81 || (int)uVar1 - 0x41U < 0x1a) {
        func_0x00788bc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_00632e78;
      }
      uVar2 = uVar2 + 1;
      uVar1 = param_1;
      func_0x007882e0();
    } while (uVar2 < uVar1);
  }
  func_0x00780e20(param_1);
LAB_00632e78:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00632ef8; end: 00632f23;  */

void FUN_00632ef8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_00ac35f8;
  _objc_alloc_init();
  uVar1 = puRam0000000000b63618;
  puRam0000000000b63618 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00632f24; end: 00633143;  */

uint FUN_00632f24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *unaff_x20;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar5 = 1;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSDataDetector_00ac3600;
    func_0x007814e0(PTR__OBJC_CLASS___NSDataDetector_00ac3600,param_2,0x820,0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x007882e0(param_3);
    puVar1 = unaff_x20;
    func_0x00788f60(unaff_x20,param_2,param_3,0,0,lVar7);
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
    puVar2 = puVar1;
    func_0x00780ea0(puVar1,param_2,&uStack_120,auStack_d8,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_110;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          lVar6 = *(long *)(lStack_118 + (long)puVar8 * 8);
          lVar3 = lVar6;
          func_0x0078bb40();
          if ((lVar3 == 0x20) || (func_0x0078bb40(), lVar6 == 0x800)) {
            uVar5 = 0;
            puVar2 = puVar1;
            goto LAB_006330e8;
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = puVar1;
        func_0x00780ea0(puVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
    func_0x0078a7c0(PTR__OBJC_CLASS___NSPredicate_00ac2d08,param_2,
                    &PTR____CFConstantStringClassReference_00a482c0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00782ec0();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
      func_0x0078a7c0(PTR__OBJC_CLASS___NSPredicate_00ac2d08,param_2,
                      &PTR____CFConstantStringClassReference_00a482e0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00782ec0();
      if (((ulong)puVar4 & 1) == 0) {
        lVar7 = param_3;
        func_0x00780c40(param_3,param_2,&PTR____CFConstantStringClassReference_00a48300);
        uVar5 = (uint)lVar7 ^ 1;
      }
      else {
        uVar5 = 0;
      }
      _objc_release(puVar8);
    }
    else {
      uVar5 = 0;
    }
LAB_006330e8:
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(unaff_x20);
  }
  lVar7 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  pcVar10 = FUN_00633144;
  puVar1 = PTR__OBJC_CLASS___NSDataDetector_00ac3600;
  func_0x007814e0(PTR__OBJC_CLASS___NSDataDetector_00ac3600,param_2,0x20,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x007882e0(lVar7);
  puVar2 = puVar1;
  func_0x00789ba0(puVar1,param_2,lVar7,0,0,lVar3,in_x6,in_x7,unaff_x20,param_3,puVar9,pcVar10);
  _objc_release(puVar1);
  return (uint)(puVar2 != (undefined *)0x0);
}



/* Entry: 00633144; end: 006331b3;  */

bool FUN_00633144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDataDetector_00ac3600;
  func_0x007814e0(PTR__OBJC_CLASS___NSDataDetector_00ac3600,param_2,0x20,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x007882e0(param_1);
  puVar3 = puVar1;
  func_0x00789ba0(puVar1,param_2,param_1,0,0,uVar2);
  _objc_release(puVar1);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 006331b4; end: 0063339b;  */

void FUN_006331b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00789700();
  uVar2 = param_1;
  func_0x007882e0(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x633264;
  puStack_40 = &UNK_00a0b530;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00782ca0(param_1,param_2,0,uVar2,4,&puStack_58);
  uVar2 = uVar1;
  func_0x00780e20(uVar1);
  _objc_release(uStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0063339c; end: 006334bb;  */

void FUN_0063339c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x007815a0(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0077f740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006334bc; end: 006334c7;  */

void FUN_006334bc(void)

{
  uRam0000000000b635d4 = 0;
  return;
}



/* Entry: 006334c8; end: 0063352b; -[SCCancelableRequest init] */

undefined1 * FUN_006334c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4418;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2d40;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063352c; end: 00633533; -[SCCancelableRequest cancel] */

void FUN_0063352c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00784830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_increment_00abbf10);
  return;
}



/* Entry: 00633534; end: 00633553; -[SCCancelableRequest isCancelled] */

bool FUN_00633534(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00793580(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 00633554; end: 0063355f; -[SCCancelableRequest .cxx_destruct] */

void FUN_00633554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00633560; end: 006335f3; -[SCCancelableToken initWithCancelBlock:] */

undefined1 * FUN_00633560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_00ac3608;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 006335f4; end: 00633637; -[SCCancelableToken isCancelled] */

void FUN_006335f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00787520();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    (**(code **)(lVar2 + 0x10))();
    if ((int)lVar2 != 0) {
      func_0x0077ff80(*(undefined8 *)(param_1 + 0x10));
    }
  }
  return;
}



/* Entry: 00633638; end: 00633667; -[SCCancelableToken .cxx_destruct] */

void FUN_00633638(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00633668; end: 0063366b; -[SCClock currentMediaTime] */

void FUN_00633668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_00999810)();
  return;
}



/* Entry: 0063366c; end: 0063366f; +[SCClock currentMediaTime] */

void FUN_0063366c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_00999810)();
  return;
}



/* Entry: 00633670; end: 006336bf; -[SCInactiveComparisonChain initWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00633670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4428;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_00ac5bcc) = param_3;
  }
  return;
}



/* Entry: 006336c0; end: 006336db; +[SCInactiveComparisonChain greater] */

void FUN_006336c0(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00786660(param_1,param_2,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006336dc; end: 006336f7; +[SCInactiveComparisonChain less] */

void FUN_006336dc(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00786660(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006336f8; end: 00633707; -[SCInactiveComparisonChain result] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006336f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac5bcc);
}



/* Entry: 00633708; end: 0063370b; -[SCInactiveComparisonChain trueFirstWithLeft:right:] */

void FUN_00633708(void)

{
  return;
}



/* Entry: 0063370c; end: 0063370f; -[SCInactiveComparisonChain falseFirstWithLeft:right:] */

void FUN_0063370c(void)

{
  return;
}



/* Entry: 00633710; end: 00633713; -[SCInactiveComparisonChain compareNumbersWithLeft:right:] */

void FUN_00633710(void)

{
  return;
}



/* Entry: 00633714; end: 00633717; -[SCInactiveComparisonChain compareStringsWithLeft:right:] */

void FUN_00633714(void)

{
  return;
}



/* Entry: 00633718; end: 0063371b; -[SCInactiveComparisonChain compareLeft:right:comparator:] */

void FUN_00633718(void)

{
  return;
}



/* Entry: 0063371c; end: 0063371f; +[SCComparisonChain start] */

void FUN_0063371c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_active_00aba5e8);
  return;
}



/* Entry: 00633720; end: 0063373b; +[SCComparisonChain active] */

void FUN_00633720(void)

{
  _objc_opt_new(PTR_PTR_00ac3610);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063373c; end: 006337cf; -[SCComparisonChain trueFirstWithLeft:right:] */

void FUN_0063373c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x007806a0(puVar1,param_2,puVar2);
  func_0x00780280(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 006337d0; end: 0063385f; -[SCComparisonChain falseFirstWithLeft:right:] */

void FUN_006337d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x007806a0(puVar1,param_2,puVar2);
  func_0x00780280(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00633860; end: 0063388f; -[SCComparisonChain compareNumbersWithLeft:right:] */

void FUN_00633860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x007806a0(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00780290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_classify__00abad98,param_3);
  return;
}



/* Entry: 00633890; end: 006338bf; -[SCComparisonChain compareStringsWithLeft:right:] */

void FUN_00633890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x007806a0(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00780290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_classify__00abad98,param_3);
  return;
}



/* Entry: 006338c0; end: 006338f7; -[SCComparisonChain compareLeft:right:comparator:] */

void FUN_006338c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  (**(code **)(param_5 + 0x10))(param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00780290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_classify__00abad98,param_5);
  return;
}



/* Entry: 006338f8; end: 00633957; -[SCComparisonChain classify:] */

void FUN_006338f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00788360(PTR_PTR_00ac3618);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == -1) {
    func_0x00784180(PTR_PTR_00ac3618);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_opt_class();
    func_0x0077e3c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00633958; end: 0063395f; -[SCComparisonChain result] */

undefined8 FUN_00633958(void)

{
  return 0;
}



/* Entry: 00633960; end: 006339db;  */

void FUN_00633960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00789700(param_1);
  func_0x0078f4a0();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00780e20(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006339dc; end: 006339e7;  */

void FUN_006339dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0078f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setObject_forKey__00abea38);
    return;
  }
  return;
}



/* Entry: 006339e8; end: 00633aab;  */

void FUN_006339e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_00633aac;
  puStack_40 = &UNK_00a0b5a0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0078a7a0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x007836a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00633aac; end: 00633ab7;  */

void FUN_00633aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00633ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 00633ab8; end: 00633b13;  */

void FUN_00633ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00789700(param_1);
  func_0x00789480();
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00780e20(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00633b14; end: 00633b1f;  */

void FUN_00633b14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_addObject__00aba6c0);
    return;
  }
  return;
}



/* Entry: 00633b20; end: 00633b3f;  */

bool FUN_00633b20(long param_1)

{
  func_0x007848e0();
  return param_1 != 0x7fffffffffffffff;
}



/* Entry: 00633b40; end: 00633c7b;  */

void FUN_00633b40(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar2 = param_1;
  func_0x00780e80();
  if (param_3 < puVar2) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    func_0x0078c940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00780e80();
    puVar4 = param_1;
    func_0x00780e80();
    if (puVar3 + -(long)param_3 < puVar4) {
      uVar1 = (int)puVar3 - (int)param_3;
      puVar3 = puVar3 + -(long)param_3;
      do {
        uVar1 = uVar1 + 1;
        uVar7 = (ulong)uVar1;
        puVar4 = puVar3 + 1;
        _arc4random_uniform(uVar7);
        puVar5 = param_1;
        func_0x00789e20(param_1,param_2,(undefined *)(uVar7 & 0xffffffff));
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00780c20(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        if ((int)puVar6 == 0) {
          puVar3 = (undefined *)(uVar7 & 0xffffffff);
        }
        puVar5 = param_1;
        func_0x00789e20(param_1,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077e720(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        puVar5 = param_1;
        func_0x00780e80();
        puVar3 = puVar4;
      } while (puVar4 < puVar5);
    }
    param_1 = puVar2;
    func_0x0077eb00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00780e20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00633c7c; end: 00633d3f;  */

void FUN_00633c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_00633d40;
  puStack_40 = &UNK_00a0b5a0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0078a7a0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00783680(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00633d40; end: 00633d4f;  */

void FUN_00633d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00633d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 00633d50; end: 00633d8f;  */

undefined1 FUN_00633d50(void)

{
  if (lRam0000000000b6c608 != -1) {
    _dispatch_once(0xb6c608,&PTR___NSConcreteGlobalBlock_00a0b5d0);
  }
  return uRam0000000000b6c610;
}



/* Entry: 00633d90; end: 00633e07;  */

void FUN_00633d90(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (lRam0000000000b63630 != -1) {
    _dispatch_once(0xb63630,&PTR___NSConcreteGlobalBlock_00a0b5f0);
  }
  uVar1 = uRam0000000000b63638;
  _objc_retain(uRam0000000000b63638);
  uVar3 = uVar1;
  _objc_retainAutorelease();
  iVar2 = (int)uVar3;
  func_0x0077bcc0();
  _access();
  uRam0000000000b6c610 = iVar2 == 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00633e08; end: 00633e2b;  */

void FUN_00633e08(undefined8 param_1)

{
  _objc_retainAutorelease();
  func_0x0077bcc0();
  _fopen(param_1,&UNK_0090efc7);
                    /* WARNING: Could not recover jumptable at 0x0077a588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fclose_0099a218)();
  return;
}



/* Entry: 00633e2c; end: 00633ea3;  */

void FUN_00633e2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00788220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000000b63638;
  uRam0000000000b63638 = uVar4;
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00633ea4; end: 00633ed3; +[SCLocalizationUtils UIInterfaceLayoutOrientation:] */

void FUN_00633ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_00ac2db8;
  func_0x0078c5c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00793430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (puVar1,PTR_s_userInterfaceLayoutDirectionForS_00abfa18,param_3);
  return;
}



/* Entry: 00633ed4; end: 00633f37; +[SCLocalizationUtils localizedDecimalStringWithWesternNumerals:layoutDirection:] */

void FUN_00633ed4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a48340;
  if (0.0 <= param_1 || param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a3fd80;
  }
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00633f38; end: 00633fd7; +[SCLocalizationUtils stringWithDirectionMarkupForString:layoutDirection:] */

void FUN_00633f38(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x007882e0();
  if (puVar1 == (undefined *)0x0) {
LAB_00633f88:
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    if (param_4 == 1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_00a212e0;
    }
    else {
      if (param_4 != 0) goto LAB_00633f88;
      ppuVar2 = &PTR____CFConstantStringClassReference_00a21300;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00633fd8; end: 006342cf;  */

void FUN_00633fd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam0000000000b63640 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMapTable_00ac2d78;
    func_0x00793a60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puRam0000000000b63640;
    puRam0000000000b63640 = puVar1;
    _objc_release(puVar2);
  }
  puVar2 = puRam0000000000b63640;
  func_0x00789ea0(puRam0000000000b63640,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    func_0x0078c940(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puRam0000000000b63640,param_2,puVar2,param_1);
  }
  puVar1 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
  func_0x0077bce0(PTR__OBJC_CLASS___NSUUID_00ac2fe0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0077bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x0077e720(puVar2,param_2,puVar3);
  func_0x0078c0e0(param_1,param_2,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 006342d0; end: 00634363;  */

void FUN_006342d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a48360;
  FUN_00634988(&PTR____CFConstantStringClassReference_00a48360,
               &PTR____CFConstantStringClassReference_00a48380,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000000b63650 != -1) {
    _dispatch_once(0xb63650,&PTR___NSConcreteGlobalBlock_00a0b610);
  }
  ppuVar2 = ppuVar1;
  if ((bRam0000000000b63648 & 1) != 0) {
    FUN_00634930(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar2);
  return;
}



/* Entry: 00634364; end: 006343db;  */

void FUN_00634364(void)

{
  func_0x00783aa0(0x4024000000000000);
  return;
}



/* Entry: 006343dc; end: 006346bf;  */

void FUN_006343dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,int param_7,ulong param_8,int param_9,uint param_10
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  double dVar7;
  
  dVar7 = param_1;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00792900();
  uVar6 = (uint)dVar7;
  if ((double)(int)uVar6 <= param_1) {
    if (param_7 == 0) {
      if (param_9 == 0) {
        if ((param_8 & 1) == 0) {
          func_0x006348b8();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x006348a0();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else if ((param_8 & 1) == 0) {
        func_0x006348e8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x006348d0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00634888();
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_0063457c;
  }
  if (((param_10 & 0x100) == 0) && (0xe0f < (int)uVar6)) {
    if ((ulong)(param_6 * 0xe10) < (ulong)uVar6) {
      if (uVar6 < 0x15181) {
        puVar2 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
        func_0x00781280();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00787660();
        _objc_release(puVar2);
        puVar3 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
        if ((int)puVar4 == 0) {
          func_0x00781980(PTR__OBJC_CLASS___NSDateFormatter_00ac2f98);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x007916a0();
          _objc_retainAutoreleasedReturnValue();
        }
LAB_00634604:
        puVar2 = puVar3;
        func_0x00792080();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (uVar6 < 0x93a81) {
          puVar3 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
          func_0x007819a0(PTR__OBJC_CLASS___NSDateFormatter_00ac2f98);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_00634604;
        }
        puVar3 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
        func_0x00781280();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x007807e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00794560();
        _objc_release(puVar2);
        puVar5 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
        if ((long)puVar4 < 1) {
          func_0x00791620(PTR__OBJC_CLASS___NSDateFormatter_00ac2f98);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00791640();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar2 = puVar5;
        func_0x00792080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_release(puVar3);
      goto LAB_0063457c;
    }
    if ((char)param_10 != '\0') {
      puVar2 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
      func_0x00781280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x007876e0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
        func_0x00792f80(PTR__OBJC_CLASS___NSDateFormatter_00ac2f98);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_00634604;
      }
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077dc40(PTR__OBJC_CLASS___NSString_00ac2988,param_3,uVar6,param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_0063457c:
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 006346c0; end: 0063486f;  */

void FUN_006346c0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  
  puVar3 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00781420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00792800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00789f00(puVar4,param_2,&PTR____CFConstantStringClassReference_00a483c0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDateComponentsFormatter_00ac3628;
    _objc_alloc_init();
    puVar5 = PTR__OBJC_CLASS___NSCalendar_00ac35e8;
    func_0x00781280(PTR__OBJC_CLASS___NSCalendar_00ac35e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d260(puVar3,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00790e40(puVar3,param_2,1);
    func_0x0078f4e0(puVar4,param_2,puVar3,&PTR____CFConstantStringClassReference_00a483c0);
  }
  uVar8 = (uint)param_3;
  uVar1 = 0x10;
  if (0x93a7f < uVar8) {
    uVar1 = 0x1000;
  }
  uVar2 = 0x20;
  if (0x2a2 < ((uint)(param_3 >> 7) & 0x1ffffff)) {
    uVar2 = uVar1;
  }
  uVar1 = 0x40;
  if (0xe0f < uVar8) {
    uVar1 = uVar2;
  }
  uVar2 = 0x80;
  if (0x3b < (int)uVar8) {
    uVar2 = uVar1;
  }
  func_0x0078cb40(puVar3,param_2,uVar2);
  puVar6 = puVar3;
  func_0x007920e0((double)(int)uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  if ((param_4 & 1) == 0) {
    _objc_retain(puVar6);
    puVar5 = puVar6;
  }
  else {
    puVar7 = puVar6;
    FUN_00634870();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c100(puVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 00634870; end: 006348ff;  */

void FUN_00634870(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a483e0;
  FUN_00634988(&PTR____CFConstantStringClassReference_00a483e0,
               &PTR____CFConstantStringClassReference_00a48400,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000000b63650 != -1) {
    _dispatch_once(0xb63650,&PTR___NSConcreteGlobalBlock_00a0b610);
  }
  ppuVar2 = ppuVar1;
  if ((bRam0000000000b63648 & 1) != 0) {
    FUN_00634930(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar2);
  return;
}



/* Entry: 00634900; end: 0063490b; -[SCSentinel value] */

undefined4 FUN_00634900(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 0063490c; end: 00634923; -[SCSentinel increment] */

void FUN_0063490c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 00634924; end: 0063492f; -[SCSentinel reset] */

void FUN_00634924(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 00634930; end: 00634987;  */

void FUN_00634930(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a48460;
  func_0x00791ec0(&PTR____CFConstantStringClassReference_00a48460,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00791ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar2);
  return;
}



/* Entry: 00634988; end: 00634a53;  */

void FUN_00634988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = &UNK_0090f0d4;
  func_0x00634fc8(&UNK_0090f0d4);
  puVar2 = PTR_PTR_00ac3630;
  func_0x007915a0(PTR_PTR_00ac3630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x007885a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  FUN_00635084(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00634a54; end: 00634c73;  */

void _SCLocalizedString(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00634988(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000000b63650 != -1) {
    _dispatch_once(0xb63650,&PTR___NSConcreteGlobalBlock_00a0b610);
  }
  uVar1 = param_1;
  if ((bRam0000000000b63648 & 1) != 0) {
    FUN_00634930(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00634c74; end: 00634cc7; +[SCUncompressedLocalizedStringLookup sharedInstance] */

void FUN_00634c74(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63668 != -1) {
    _dispatch_once(0xb63668,&PTR___NSConcreteGlobalBlock_00a0b650);
  }
  uVar1 = uRam0000000000b63670;
  _objc_retain(uRam0000000000b63670);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00634cc8; end: 00634cf3;  */

void FUN_00634cc8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac3630;
  _objc_opt_new();
  uVar1 = puRam0000000000b63670;
  puRam0000000000b63670 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00634cf4; end: 00634ecb; -[SCUncompressedLocalizedStringLookup localizedStringForKey:table:fallbackValue:] */

void FUN_00634cf4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                 undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x007885c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x007878e0(puVar2,param_2,&PTR____CFConstantStringClassReference_00a484a0);
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  else {
    func_0x00634bb0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x007878e0();
    _objc_release(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00788c00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x0078a460();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
      func_0x0077fda0(PTR__OBJC_CLASS___NSBundle_00ac2c38,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x007885c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    else {
      _objc_retain(param_3);
      puVar1 = param_3;
    }
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_5;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  _objc_retain(puVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00634ecc; end: 00634f4f;  */

undefined * FUN_00634ecc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077f8c0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 00634f50; end: 00634f87;  */

void FUN_00634f50(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00634f88; end: 0063504b;  */

void FUN_00634f88(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782860();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0063504c; end: 00635083;  */

void FUN_0063504c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00635084; end: 006350c3;  */

void FUN_00635084(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782900();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 006350c4; end: 0063514b; +[SCAPIUserAgentHelper userAgentHeader] */

void FUN_006350c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_0063514c;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b63680 != -1) {
    _dispatch_once(0xb63680,&puStack_48);
  }
  uVar1 = uRam0000000000b63678;
  _objc_retain(uRam0000000000b63678);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0063514c; end: 0063525f;  */

void FUN_0063514c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_00ac3638;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x007937e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00784240();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x007926e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c100(puVar7,param_2,&PTR____CFConstantStringClassReference_00a48500);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b63678;
  puRam0000000000b63678 = puVar7;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 00635260; end: 006352b3; +[SCAPIUserAgentHelper appName] */

void FUN_00635260(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63690 != -1) {
    _dispatch_once(0xb63690,&PTR___NSConcreteGlobalBlock_00a0b690);
  }
  uVar1 = uRam0000000000b63688;
  _objc_retain(uRam0000000000b63688);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006352b4; end: 006353af;  */

void FUN_006352b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puRam0000000000b63688;
    puRam0000000000b63688 = puVar7;
    _objc_release(puVar1);
    _objc_release(puVar6);
  }
  else {
    _objc_retain(puVar4);
    puVar5 = puRam0000000000b63688;
    puRam0000000000b63688 = puVar4;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 006353b0; end: 00635403; +[SCAPIUserAgentHelper appVersion] */

void FUN_006353b0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b636a0 != -1) {
    _dispatch_once(0xb636a0,&PTR___NSConcreteGlobalBlock_00a0b6b0);
  }
  uVar1 = uRam0000000000b63698;
  _objc_retain(uRam0000000000b63698);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00635404; end: 006354af;  */

void FUN_00635404(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _CFBundleGetMainBundle();
  _CFBundleGetValueForInfoDictionaryKey();
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
    func_0x00788c00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puRam0000000000b63698;
    puRam0000000000b63698 = puVar4;
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  else {
    _objc_retain();
    puVar2 = puRam0000000000b63698;
    puRam0000000000b63698 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 006354b0; end: 006354d3; +[SCAPIUserAgentHelper schemeName] */

undefined ** FUN_006354b0(int param_1)

{
  undefined **ppuVar1;
  
  FUN_0076f2bc();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a48520;
  if (param_1 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 006354d4; end: 0063556f; +[SCAPIUserAgentHelper versionName] */

void FUN_006354d4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x0077ee60();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c3a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a2a380);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00635570; end: 006355db; +[SCNetworkErrorRawBody rawBodyWithData:] */

void FUN_00635570(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x007882e0();
  if ((uVar1 == 0) || (uVar1 = param_3, func_0x007882e0(), 0x20000 < uVar1)) {
    param_1 = 0;
  }
  else {
    _objc_alloc(param_1);
    func_0x007851c0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 006355dc; end: 00635653; -[SCNetworkErrorRawBody initWithData:] */

undefined1 * FUN_006355dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00635654; end: 006356cf; -[SCNetworkErrorRawBody description] */

void FUN_00635654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x007882e0();
  func_0x0078c100(puVar1,param_2,&PTR____CFConstantStringClassReference_00a488a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 006356d0; end: 006356d7; -[SCNetworkErrorRawBody data] */

undefined8 FUN_006356d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 006356d8; end: 006356e3; -[SCNetworkErrorRawBody .cxx_destruct] */

void FUN_006356d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 006356e4; end: 006359a3; +[SCNetworkTrafficDataStatistic calculate] */

undefined1 * FUN_006356e4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long *plStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar1 = (int)&plStack_d0;
  _getifaddrs();
  if (iVar1 == 0) {
    plVar13 = plStack_d0;
    if (plStack_d0 == (long *)0x0) {
      plStack_d0 = (long *)0x0;
    }
    else {
      do {
        if (*(char *)(plVar13[3] + 1) == '\x12') {
          lStack_e0 = plVar13[1];
          puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
          func_0x0078c100();
          _objc_retainAutoreleasedReturnValue();
          func_0x00784340();
          func_0x00784340();
          _objc_release(puVar2);
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    _freeifaddrs(plStack_d0);
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_00a48900;
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_00a48920;
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puStack_98 = puVar2;
  func_0x00789d20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_00a488c0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puStack_90 = puVar3;
  func_0x00789d20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_00a488e0;
  puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puStack_88 = puVar4;
  func_0x00789d20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_00a48940;
  puVar6 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puStack_80 = puVar5;
  func_0x00789d60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_00a48960;
  puVar7 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puStack_78 = puVar6;
  func_0x00789d60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_98;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  puStack_70 = puVar7;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_120;
    pcStack_e8 = FUN_006359a4;
    puStack_110 = puVar2;
    puStack_108 = puVar3;
    puStack_100 = puVar4;
    puStack_f8 = puVar8;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar11);
    puStack_118 = PTR_PTR_00ac4438;
    puStack_120 = puVar5;
    _objc_msgSendSuper2(&puStack_120,PTR_s_init_00abbf70);
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar10 = ppuVar11;
      func_0x00780e20();
      uVar12 = *(undefined8 *)((long)ppuVar9 + 8);
      *(undefined ***)((long)ppuVar9 + 8) = ppuVar10;
      _objc_release(uVar12);
    }
    _objc_release(ppuVar11);
    return (undefined1 *)ppuVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar8);
  return puVar8;
}



/* Entry: 006359a4; end: 00635a47; -[SCNNetworkTypesBandwidthThrottlingConfig initWithMediaContextTypeConfig:] */

undefined1 * FUN_006359a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac4438;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00635a48; end: 00635a4f; -[SCNNetworkTypesBandwidthThrottlingConfig mediaContextTypeConfig] */

undefined8 FUN_00635a48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00635a50; end: 00635a5b; -[SCNNetworkTypesBandwidthThrottlingConfig .cxx_destruct] */

void FUN_00635a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00635a5c; end: 00635b77; -[SCNNetworkTypesCertPins initWithHosts:pins:pinsBlob:pinsBlobLen:] */

undefined1 *
FUN_00635a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

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
  puStack_48 = PTR_PTR_00ac4440;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00635b78; end: 00635b7f; -[SCNNetworkTypesCertPins hosts] */

undefined8 FUN_00635b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00635b80; end: 00635b87; -[SCNNetworkTypesCertPins pins] */

undefined8 FUN_00635b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00635b88; end: 00635b8f; -[SCNNetworkTypesCertPins pinsBlob] */

undefined8 FUN_00635b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00635b90; end: 00635b97; -[SCNNetworkTypesCertPins pinsBlobLen] */

undefined4 FUN_00635b90(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 00635b98; end: 00635bd3; -[SCNNetworkTypesCertPins .cxx_destruct] */

void FUN_00635b98(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00635bd4; end: 00635c2f; -[SCNNetworkTypesCompressionConfig initWithAlgorithm:level:minRequestBodySize:] */

void FUN_00635bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  return;
}



/* Entry: 00635c30; end: 00635c53; -[SCNNetworkTypesCompressionConfig copyWithZone:] */

undefined8 FUN_00635c30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00635c54; end: 00635c5b; -[SCNNetworkTypesCompressionConfig algorithm] */

undefined8 FUN_00635c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00635c5c; end: 00635c63; -[SCNNetworkTypesCompressionConfig level] */

undefined4 FUN_00635c5c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


