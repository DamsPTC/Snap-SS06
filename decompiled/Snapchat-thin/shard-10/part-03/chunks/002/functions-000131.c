/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f8f59c; end: 107f8f6c3; -[SCSmartSwipeFilterView logSeenTotal] */

long FUN_107f8f59c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bfae580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_108 + lVar6 * 8);
        if ((lVar3 != 0) && (func_0x00010c29c5c0(), lVar3 != 0)) {
          lVar4 = lVar4 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar2 = lVar1;
    func_0x00010bf5ea60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar4 = -1;
    }
    else {
      func_0x00010bfad800(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c0a8940();
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
    return lVar4;
  }
  return lVar4;
}



/* Entry: 107f8f6c4; end: 107f8f737; -[SCSmartSwipeFilterView logIndexForCurrentFilterOfType:] */

long FUN_107f8f6c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf5ea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = -1;
  }
  else {
    func_0x00010bfad800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0a8940();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107f8f738; end: 107f8f7c7; -[SCSmartSwipeFilterView logIndexForFilterID:] */

undefined8 FUN_107f8f738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0a8940();
  _objc_release(param_1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107f8f7c8; end: 107f8f853; -[SCSmartSwipeFilterView filterSourceForCurrentFilterOfType:] */

long FUN_107f8f7c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5ea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = -1;
  }
  else {
    func_0x00010bfae580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfae3c0();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 107f8f854; end: 107f8f857; -[SCSmartSwipeFilterView logFirstSwipeDirection] */

void FUN_107f8f854(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_firstSwipeDirection_1125ca120);
  return;
}



/* Entry: 107f8f858; end: 107f8f927; -[SCSmartSwipeFilterView logFilterInfoValue] */

void FUN_107f8f858(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5ea60(param_1,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_1;
    func_0x00010bfae580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar2 != 0) {
      func_0x00010bfae580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfadfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_107f8f90c;
    }
  }
  lVar3 = 0;
LAB_107f8f90c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107f8f928; end: 107f8fa13; -[SCSmartSwipeFilterView logFilterStreakValue] */

void FUN_107f8f928(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bf5ea60(param_1,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfae580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 != 0) {
      func_0x00010bfae580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfae520();
      func_0x00010c0df780(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_107f8f9f4;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_107f8f9f4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f8fa14; end: 107f8fadb; -[SCSmartSwipeFilterView logFilterStreakType] */

long FUN_107f8fa14(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5ea60(param_1,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_1;
    func_0x00010bfae580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar2 != 0) {
      func_0x00010bfae580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfae500();
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_107f8fac0;
    }
  }
  lVar3 = -1;
LAB_107f8fac0:
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 107f8fadc; end: 107f8fc1b; -[SCSmartSwipeFilterView logSnapCreationEnded] */

void FUN_107f8fadc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276560();
  uVar2 = param_1;
  func_0x00010c281060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf42a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c281060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfadd80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95460(uVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c27e7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95480(uVar3,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f8fc1c; end: 107f8feff; -[SCSmartSwipeFilterView logCarouselFilterOrder] */

void FUN_107f8fc1c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar2 = param_1;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d8988;
  _objc_opt_new(PTR_PTR_1126d8988);
  lVar2 = param_1;
  func_0x00010c291500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a66e0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  if ((int)lVar6 == 0) goto LAB_107f8feb4;
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010befffe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f8ff00;
  puStack_50 = &UNK_110a15cb8;
  puStack_48 = puVar7;
  _objc_retain(puVar7);
  func_0x00010bf97e80(lVar5,param_2,&puStack_68);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c0c6c20();
  uVar1 = lVar2 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar1 == 8) {
        uVar8 = 5;
      }
      else {
        if (uVar1 != 10) goto LAB_107f8fef8;
        uVar8 = 0xe;
      }
    }
    else {
      uVar8 = 1;
      if ((lVar2 + 1U < 0x1c) && ((1L << (lVar2 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar2 + 1U < 0x1b) {
          uVar8 = *(undefined8 *)(&UNK_10deeb778 + (lVar2 + 1U) * 8);
        }
        else {
          uVar8 = 0;
        }
      }
    }
  }
  else {
LAB_107f8fef8:
    uVar8 = 2;
  }
  func_0x00010c1c5780(puVar4,param_2,uVar8);
  lVar2 = lVar3;
  func_0x00010bfb1de0(lVar3);
  func_0x00010c19d6a0(puVar4,param_2,lVar2);
  lVar2 = lVar3;
  func_0x00010c2b3080(lVar3);
  func_0x00010c1bf9a0(puVar4,param_2,lVar2);
  lVar2 = lVar3;
  func_0x00010c243340(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf31200(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c19c340(puVar4,param_2,puVar7);
  lVar2 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf32b40();
  func_0x00010c2056c0(puVar4,param_2,lVar5);
  _objc_release(lVar2);
  func_0x00010c291500(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puStack_48);
  _objc_release(puVar7);
LAB_107f8feb4:
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107f8ff00; end: 107f900f7;  */

void FUN_107f8ff00(float param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8990;
  _objc_opt_new(PTR_PTR_1126d8990);
  lVar2 = param_3;
  func_0x00010bfae5a0();
  puVar4 = PTR_PTR_1126b38b8;
  lVar3 = param_3;
  if (lVar2 == 0) {
    func_0x00010bfae180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc16a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c120(puVar1);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bfae180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c120(puVar1);
  }
  _objc_release(lVar3);
  lVar2 = param_3;
  func_0x00010bf32760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    func_0x00010c1a49a0(puVar1);
  }
  else {
    lVar5 = param_3;
    func_0x00010bf32760(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a49a0(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf32760(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf32a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar8 = (double)param_1;
  func_0x00010c19c480(dVar8,puVar1);
  fVar7 = SUB84(dVar8,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfae360(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  func_0x00010c1a3d00((double)fVar7,puVar1);
  _objc_release(lVar2);
  func_0x00010c1abfe0(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f900f8; end: 107f9028b; +[SCSmartSwipeFilterView _logNameForFilterName:filterView:] */

void FUN_107f900f8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27518);
  if ((int)puVar2 == 0) {
    puVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27558);
    if ((int)puVar2 == 0) {
      puVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27538);
      if ((int)puVar2 == 0) {
        puVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27618);
        if ((int)puVar2 == 0) {
          puVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f273f8);
          if ((int)puVar2 == 0) {
            puVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f274d8);
            if ((int)puVar2 == 0) {
              puVar2 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27638);
              if ((int)puVar2 != 0) {
                puVar2 = param_4;
                func_0x00010bf0ff80(param_4);
                func_0x000108edf4d4();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_107f90200;
              }
              puVar2 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27658);
              if ((int)puVar2 == 0) {
                _objc_retain(param_3);
                puVar2 = param_3;
                goto LAB_107f90200;
              }
              ppuVar1 = &PTR_PTR_110ade5c0;
            }
            else {
              ppuVar1 = &PTR_PTR_110ade5d0;
            }
          }
          else {
            ppuVar1 = &PTR_PTR_110ade5b8;
          }
        }
        else {
          ppuVar1 = &PTR_PTR_110ade5c8;
        }
      }
      else {
        ppuVar1 = &PTR_PTR_110ade588;
      }
    }
    else {
      ppuVar1 = &PTR_PTR_110ade580;
    }
  }
  else {
    ppuVar1 = &PTR_PTR_110ade578;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
LAB_107f90200:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f9028c; end: 107f903cb; -[SCSmartSwipeFilterView determineInitialSwipeDirectionForGeofilterMissLoggingIfNeeded] */

void FUN_107f9028c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bfc16e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c264740();
  if (uVar2 == 0xffffffffffffffff) {
    uVar2 = param_1;
    func_0x00010bfc16e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010beec3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return;
    }
    uVar2 = param_1;
    func_0x00010bf5fec0(param_1);
    uVar1 = param_1;
    func_0x00010bfae060(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c081ec0();
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bfc16e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220040();
      _objc_release(uVar2);
      func_0x00010c264d20(param_1);
      uVar2 = param_1;
      func_0x00010bfad800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5e9c0();
      _objc_release(uVar2);
      func_0x00010bfc16e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2105c0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f903cc; end: 107f904ef; -[SCSmartSwipeFilterView geofilterMissLoggingDetermineIfNewSession] */

void FUN_107f903cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf5fec0();
  uVar2 = param_1;
  func_0x00010bfae060(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c081ec0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfc16e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010beec3e0();
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfc16e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220040();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bfc16e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c15fbe0();
      if (uVar3 == 0) {
        _objc_release(uVar1);
      }
      else {
        uVar3 = param_1;
        func_0x00010bfc16e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c27fb00();
        _objc_release(uVar3);
        _objc_release(uVar1);
        if ((int)uVar4 == 0) goto LAB_107f904d8;
      }
      func_0x00010bfc16e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c15fbe0();
      func_0x00010c1fd8a0(param_1,param_2,uVar1 + 1);
      _objc_release(param_1);
    }
  }
LAB_107f904d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f904f0; end: 107f90547; -[SCSmartSwipeFilterView _fiterSwipeCameraType] */

ulong FUN_107f904f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bfbb160(uVar1);
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 107f90548; end: 107f9064b; -[SCSmartSwipeFilterView geofilterMissLoggingDetermineIfSessionOver:] */

void FUN_107f90548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfc16e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc1780();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfc16e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15fbe0();
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010bfc16e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27fb00();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (((int)lVar4 == 0) || (uVar5 = param_3, func_0x00010c081ec0(), (int)uVar5 == 0))
      goto LAB_107f90634;
      lVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bfc16e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c15fbe0();
      func_0x00010c264920(lVar1,param_2,param_1,lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_107f90634:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f9064c; end: 107f9069b; -[SCSmartSwipeFilterView logStartTTIMeasurement] */

void FUN_107f9064c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c292a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293a40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a63f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHasLoggedTTILatency__112647318,0);
  return;
}



/* Entry: 107f9069c; end: 107f90767; -[SCSmartSwipeFilterView geocellForLocation:] */

void FUN_107f9069c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b6598;
  puVar3 = (undefined *)0x0;
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010bfe4080(param_5);
    func_0x00010c098a40(puVar1,param_4,0xd,0x11);
    puVar1 = PTR_PTR_1126b6598;
    func_0x00010bf51c80(param_5);
    _objc_release(param_5);
    func_0x00010bf33ee0(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f3ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f90768; end: 107f907eb; -[SCPlaybackRateState initWithPlaybackRate:sourceSpeedFilterView:] */

undefined1 *
FUN_107f90768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbea0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107f907ec; end: 107f907f3; -[SCPlaybackRateState playbackRate] */

undefined8 FUN_107f907ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f907f4; end: 107f907fb; -[SCPlaybackRateState sourceSpeedFilterView] */

undefined8 FUN_107f907f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f907fc; end: 107f90807; -[SCPlaybackRateState .cxx_destruct] */

void FUN_107f907fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f90808; end: 107f90cab; -[SCSmartSwipeFilterView filterViewForItem:filterViewDict:unfilteredView:bounds:filterArranger:userSession:] */

void FUN_107f90808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9,undefined *param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar10 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = param_7;
  func_0x00010bfae180(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((puVar2 != (undefined *)0x0) &&
     (puVar1 = param_5, func_0x00010bdd9ee0(), ((ulong)puVar1 & 1) != 0)) goto LAB_107f909e4;
  puVar1 = param_7;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    puVar1 = param_7;
    func_0x00010c07a1a0();
    puVar3 = PTR_PTR_1126d8998;
    if (((int)puVar1 == 0) &&
       (puVar1 = param_7, func_0x00010bfae5a0(), puVar3 = PTR_PTR_1126b38b8,
       puVar1 != (undefined *)0x6)) {
      puVar1 = param_7;
      func_0x00010bfae5a0();
      if (puVar1 == (undefined *)0x7) {
        puVar1 = param_5;
        func_0x00010c27fec0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_7;
        func_0x00010bfae180();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_10;
        func_0x00010bf45e80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_7;
        func_0x00010bf32760();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfcef60();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_5;
        func_0x00010c264980(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1108e0();
        func_0x00010c27e780(param_5);
        puVar3 = puVar9;
        func_0x00010c0b7a60(param_1,param_2,param_3,param_4,uVar10,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar9);
        _objc_release(puVar1);
        func_0x00010c2bef80(param_5);
        puVar1 = puVar3;
        func_0x00010c08c0e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c227960((double)(long)param_5);
      }
      else {
        puVar3 = param_7;
        func_0x00010bfae180(param_7);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_10;
        func_0x00010bf45e80(param_10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar9 = param_7;
        func_0x00010bfae180(param_7);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_5;
        func_0x00010be6eb80(param_1,param_2,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar9);
        func_0x00010c2bef80(param_5);
        puVar2 = puVar3;
        func_0x00010c08c0e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c227960((double)(long)param_5);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126c3c88;
        _objc_opt_class(PTR_PTR_1126c3c88);
        puVar9 = puVar3;
        _objc_opt_isKindOfClass(puVar3,puVar2);
        if (((ulong)puVar9 & 1) == 0) {
          puVar2 = PTR_PTR_1126c3c80;
          _objc_opt_class(PTR_PTR_1126c3c80);
          puVar9 = puVar3;
          _objc_opt_isKindOfClass(puVar3,puVar2);
          if (((ulong)puVar9 & 1) == 0) goto LAB_107f909ac;
        }
        func_0x00010c18b5e0(puVar3);
      }
    }
    else {
      _objc_alloc(puVar3);
      puVar1 = param_7;
      func_0x00010bfae180(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_10;
      func_0x00010bf45e80(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c014080(param_1,param_2,param_3,param_4,puVar3);
      _objc_release(puVar2);
      _objc_release(puVar9);
    }
  }
  else {
    _objc_retain(param_9);
    puVar3 = param_9;
    puVar1 = puVar2;
  }
LAB_107f909ac:
  puVar2 = puVar3;
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010bfae180(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_8);
  _objc_release(puVar1);
LAB_107f909e4:
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f90cac; end: 107f90d07; -[SCSmartSwipeFilterView zPositionForFilterItem:view:] */

long FUN_107f90cac(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c22dba0();
  lVar1 = param_3;
  func_0x00010c2bef60(param_3);
  _objc_release(param_3);
  if (param_4 == 0) {
    lVar1 = lVar1 + 0x14;
  }
  return lVar1;
}



/* Entry: 107f90d08; end: 107f90db3; -[SCSmartSwipeFilterView removeViewOfFilterItem:filterViewDict:] */

void FUN_107f90d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(param_4,param_2,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f90db4; end: 107f90e0f; -[SCSmartSwipeFilterView geoFilterViewSponsoredSlugTapped:filterId:] */

void FUN_107f90db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ee80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f90e10; end: 107f90e87; -[SCSmartSwipeFilterView geoFilterViewNeedsUpdate:] */

void FUN_107f90e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfc13c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f90e88; end: 107f91007; -[SCSmartSwipeFilterView venueFilterView:geoFilterViewWithGeoFilterID:] */

void FUN_107f90e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126b38b8;
  func_0x00010bfe5de0(PTR_PTR_1126b38b8,param_6,&PTR____CFConstantStringClassReference_110f273f8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf4b780();
  _objc_release(uVar5);
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010bf20c00(param_5);
    uVar5 = param_5;
    func_0x00010bfad800(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c293740(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6eb80(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126c3c88;
    _objc_retain(param_5);
    _objc_opt_class(puVar4);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar4);
    uVar5 = param_5;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_5);
    _objc_release(param_5);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107f91008; end: 107f91057; -[SCSmartSwipeFilterView venueFilterViewDidUpdate:] */

void FUN_107f91008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297d80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f91058; end: 107f910a7; -[SCSmartSwipeFilterView venueFilterView:didChangeDisplayStatus:withBackgroundFilter:] */

void FUN_107f91058(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  func_0x00010bf5eb00(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1a7f60(param_1,param_2,param_4 & param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f910a8; end: 107f9114f; -[SCSmartSwipeFilterView venueFilterView:openPlacePickerTrayWithOnVenueTapped:suggestedVenuesFromFilter:venueIDToDistanceStringMap:] */

void FUN_107f910a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297d60();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f91150; end: 107f91303; -[SCSmartSwipeFilterView _overlayFilterViewForFilter:frame:config:userSession:] */

void FUN_107f91150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  )

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = param_8;
  func_0x00010c0e00e0(param_8,param_6,&PTR____CFConstantStringClassReference_110f27758);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_7;
  if (lVar2 != 0) {
    lVar3 = param_8;
    func_0x00010c0e00e0(param_8,param_6,&PTR____CFConstantStringClassReference_110f27758);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
  }
  _objc_opt_class();
  func_0x00010be16200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_5;
  func_0x00010c0e00e0();
  _objc_release(param_5);
  if (puVar6 == (undefined *)0x0) {
LAB_107f91284:
    iVar1 = 0x10f274f8;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f274f8,param_6,lVar3);
    if (iVar1 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126c3c80;
      _objc_alloc(PTR_PTR_1126c3c80);
      func_0x00010c014080(param_1,param_2,param_3,param_4);
    }
  }
  else {
    puVar4 = PTR_PTR_1126c3c88;
    _objc_opt_class(PTR_PTR_1126c3c88);
    puVar5 = puVar6;
    func_0x00010c080080(puVar6,param_6,puVar4);
    if ((int)puVar5 == 0) {
      puVar4 = PTR_PTR_1126b38c0;
      _objc_opt_class(PTR_PTR_1126b38c0);
      puVar5 = puVar6;
      func_0x00010c080080(puVar6,param_6,puVar4);
      if ((int)puVar5 == 0) goto LAB_107f91284;
    }
    _objc_alloc(puVar6);
    func_0x00010c0140e0(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f91304; end: 107f91357; +[SCSmartSwipeFilterView _filterNameToViewClassMap] */

void FUN_107f91304(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728998 != -1) {
    func_0x00010002a2fc(0x113728998,&PTR___NSConcreteGlobalBlock_110a15ce8);
  }
  uVar1 = uRam00000001137289a0;
  _objc_retain(uRam00000001137289a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f91358; end: 107f9148f;  */

undefined *** FUN_107f91358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f27458;
  puVar1 = PTR_PTR_1126b38c8;
  _objc_opt_class();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f27478;
  puVar2 = PTR_PTR_1126c3cd0;
  puStack_48 = puVar1;
  _objc_opt_class();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f27658;
  puVar1 = PTR_PTR_1126d89a0;
  puStack_40 = puVar2;
  _objc_opt_class();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f273f8;
  puVar2 = PTR_PTR_1126c3c88;
  puStack_38 = puVar1;
  _objc_opt_class();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f27638;
  puVar1 = PTR_PTR_1126d89a8;
  puStack_30 = puVar2;
  _objc_opt_class();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f274d8;
  puVar2 = PTR_PTR_1126d89b0;
  puStack_28 = puVar1;
  _objc_opt_class();
  ppuVar4 = &puStack_48;
  pppuVar5 = &ppuStack_78;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = pppuRam00000001137289a0;
  pppuRam00000001137289a0 = (undefined ***)puVar1;
  _objc_release(pppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar5);
  puVar1 = PTR_PTR_1126d8998;
  _objc_retain(ppuVar4);
  _objc_opt_class(puVar1);
  ppuVar3 = ppuVar4;
  _objc_opt_isKindOfClass(ppuVar4,puVar1);
  _objc_release(ppuVar4);
  if (((ulong)ppuVar3 & 1) == 0) {
    pppuVar6 = (undefined ***)0x1;
  }
  else {
    pppuVar6 = pppuVar5;
    func_0x00010c07a1a0(pppuVar5);
  }
  _objc_release(pppuVar5);
  return pppuVar6;
}



/* Entry: 107f91490; end: 107f91513; -[SCSmartSwipeFilterView _canReuseFilterView:filterItem:] */

undefined8 FUN_107f91490(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d8998;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = param_4;
    func_0x00010c07a1a0(param_4);
  }
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 107f91514; end: 107f915f7; -[SCSnapEditorUCOViewServiceProvider provide] */

void FUN_107f91514(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d89b8;
  _objc_alloc(PTR_PTR_1126d89b8);
  func_0x00010c061b60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f915f8; end: 107f91637;  */

void FUN_107f915f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107f91638; end: 107f91933; -[SCSnapEditorUCOViewServiceProvider _makeViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f91638(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127725a0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar15;
  func_0x00010c27e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f91934;
  puStack_70 = &UNK_110a15d38;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_68 = lVar1;
  _objc_retain(lVar1);
  ppuVar2 = &puStack_88;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126d89c0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11277258c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar15;
  func_0x00010c27e9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112772594;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar16;
  func_0x00010c24a320();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf5d680();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112772598;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar17;
  func_0x00010c0d6d60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11277259c;
    _objc_loadWeakRetained(lVar18);
  }
  lVar11 = lVar18;
  func_0x00010c095de0(lVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c095dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112772590;
    _objc_loadWeakRetained(param_1);
  }
  lVar14 = param_1;
  func_0x00010beec300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058140(puVar3,param_2,lVar5,lVar8,lVar10,lVar13,lVar14,1,ppuVar2);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(ppuVar2);
  _objc_release(lStack_68);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f91934; end: 107f9197b;  */

void FUN_107f91934(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c096640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f9197c; end: 107f919ef; -[SCSnapEditorUCOViewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9197c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127725a0);
  _objc_destroyWeak(param_1 + _DAT_11277259c);
  _objc_destroyWeak(param_1 + _DAT_112772598);
  _objc_destroyWeak(param_1 + _DAT_112772594);
  _objc_destroyWeak(param_1 + _DAT_112772590);
  _objc_destroyWeak(param_1 + _DAT_11277258c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112772588);
  return;
}



/* Entry: 107f919f0; end: 107f91a63; -[SCSnapEditorUCOViewServices initWithViewFactory:] */

undefined1 * FUN_107f919f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbea8;
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



/* Entry: 107f91a64; end: 107f91a6b; -[SCSnapEditorUCOViewServices viewFactory] */

undefined8 FUN_107f91a64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f91a6c; end: 107f91a9b; -[SCSnapEditorUCOViewServices setViewFactory:] */

void FUN_107f91a6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f91a9c; end: 107f91aa7; -[SCSnapEditorUCOViewServices .cxx_destruct] */

void FUN_107f91a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f91aa8; end: 107f91c07; -[SCUnifiedCameraObjectFilterViewFactoryImpl initWithUcoViewModelGenerator:sponsoredLensCTAViewProvider:sponsoredLensInfoActionSheetPreviewNavigator:lensPlusPreviewCTAProvider:previewABProvider:disableLoadingIndicator:lensReadyTrackerProvider:] */

undefined1 *
FUN_107f91aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fbeb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f91c08; end: 107f91cef; -[SCUnifiedCameraObjectFilterViewFactoryImpl makeUnifiedCameraObjectFilterViewWithFrame:config:filterCarouselGroupName:previewCarouselPadding:infoViewHidden:] */

void FUN_107f91c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d89c8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_alloc(puVar1);
  func_0x00010c0140c0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f91cf0; end: 107f91d4f; -[SCUnifiedCameraObjectFilterViewFactoryImpl .cxx_destruct] */

void FUN_107f91cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f91d50; end: 107f91e33; -[SCUnifiedCameraObjectFilterViewFactoryServiceProvider provide] */

void FUN_107f91d50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d89d0;
  _objc_alloc(PTR_PTR_1126d89d0);
  func_0x00010c058c60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f91e34; end: 107f91e73;  */

void FUN_107f91e34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107f91e74; end: 107f92113; -[SCUnifiedCameraObjectFilterViewFactoryServiceProvider _makeUnifiedCameraObjectFilterViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f91e74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127725c4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar13;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar11;
  func_0x00010c07e920();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar1 = 8;
    if ((int)lVar15 == 0) {
      lVar1 = 4;
    }
    lVar15 = param_1 + *(int *)(&DAT_1127725c4 + lVar1);
    _objc_loadWeakRetained();
  }
  lVar1 = lVar15;
  func_0x00010c27e9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar11);
  _objc_release(lVar13);
  puVar2 = PTR_PTR_1126d89c0;
  _objc_alloc(PTR_PTR_1126d89c0);
  lVar13 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127725d4;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar11;
  func_0x00010bf5d680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127725d0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar12;
  func_0x00010c0d6d60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_1127725d8;
    _objc_loadWeakRetained(lVar14);
  }
  lVar6 = lVar14;
  func_0x00010c095de0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c095dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = param_1 + _DAT_1127725dc;
    _objc_loadWeakRetained(lVar9);
  }
  lVar10 = lVar9;
  func_0x00010beec300(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058140(puVar2,param_2,lVar13,lVar3,lVar5,lVar8,lVar10,0,0);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(lVar11);
  _objc_release(lVar13);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f92114; end: 107f92187; -[SCUnifiedCameraObjectFilterViewFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f92114(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127725dc);
  _objc_destroyWeak(param_1 + _DAT_1127725d8);
  _objc_destroyWeak(param_1 + _DAT_1127725d4);
  _objc_destroyWeak(param_1 + _DAT_1127725d0);
  _objc_destroyWeak(param_1 + _DAT_1127725cc);
  _objc_destroyWeak(param_1 + _DAT_1127725c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127725c4);
  return;
}



/* Entry: 107f92188; end: 107f921fb; -[SCUnifiedCameraObjectFilterViewFactoryServices initWithUnifiedCameraObjectFilterViewFactory:] */

undefined1 * FUN_107f92188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbeb8;
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



/* Entry: 107f921fc; end: 107f92203; -[SCUnifiedCameraObjectFilterViewFactoryServices unifiedCameraObjectFilterViewFactory] */

undefined8 FUN_107f921fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f92204; end: 107f92233; -[SCUnifiedCameraObjectFilterViewFactoryServices setUnifiedCameraObjectFilterViewFactory:] */

void FUN_107f92204(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f92234; end: 107f9223f; -[SCUnifiedCameraObjectFilterViewFactoryServices .cxx_destruct] */

void FUN_107f92234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f92240; end: 107f9268b; -[SCSmartImageSwipeFilterView initWithFrame:filterArranger:commonLoggingParamsBuilder:geoFilterLogger:latencyLogger:userInteractionStateLogger:imagePlaybackLogger:spectaclesConfig:rectificationConfig:shouldScaleImage:isCameraRollMedia:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:isFromGallery:isDirectlyFromCamera:commandMapper:ucoCarouselConfigProvider:lazyLensIconRepository:unifiedCameraObjectFilterViewFactory:previewABProvider:ucoLogger:ucoInteractionTracker:lensCrashLogger:filterViewLayoutGuide:lensCTAHandler:locationProvider:userBlizzardLogger:lensTranscodingProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_107f92240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    ulong param_9,ulong param_10,undefined8 param_11,long param_12,ulong param_13,
                    undefined8 param_14,uint param_15,undefined4 param_16,undefined8 param_17,
                    undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                    uint param_22,undefined4 param_23,undefined8 param_24,undefined8 param_25,
                    undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
                    undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
                    undefined8 param_34,long param_35,undefined8 param_36)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  uStack_f8 = param_17;
  uStack_108 = param_19;
  uStack_110 = param_18;
  uStack_118 = param_20;
  uStack_120 = param_21;
  uStack_124 = param_22 & 0xff;
  uStack_138 = param_27;
  uStack_140 = param_26;
  uStack_148 = param_30;
  uStack_150 = param_29;
  uStack_158 = param_34;
  uStack_160 = param_33;
  uStack_130 = param_14;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = param_7;
  uStack_e8 = param_8;
  uStack_e0 = param_9;
  uStack_d8 = param_10;
  uStack_d0 = param_11;
  _objc_retain(param_12);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  uStack_c8 = param_36;
  _objc_retain(param_36);
  puStack_b8 = PTR_PTR_1126fbec0;
  lStack_170 = param_35;
  uStack_178 = uStack_158;
  uStack_180 = uStack_160;
  uStack_190 = param_32;
  uStack_188 = param_28;
  uStack_198 = param_31;
  uStack_1a0 = uStack_148;
  uStack_1a8 = uStack_150;
  uStack_1b0 = uStack_138;
  uStack_1b8 = uStack_140;
  plVar1 = &lStack_c0;
  uStack_1c0 = (undefined1)uStack_124;
  uStack_1d0 = uStack_118;
  uStack_1c8 = uStack_120;
  uStack_1d8 = uStack_108;
  uStack_1e0 = uStack_110;
  uStack_1f0 = uStack_130;
  uStack_1e8 = uStack_f8;
  lStack_c0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,plVar1,
                      PTR_s_initWithFrame_filterArranger_com_1125e2af8,uStack_f0,uStack_e8,uStack_e0
                      ,uStack_d8,uStack_d0,param_13 & 0xffffff);
  if (plVar1 != (long *)0x0) {
    uStack_e0 = CONCAT44(uStack_e0._4_4_,param_15 >> 8) & 0xffffffff000000ff;
    uStack_d8 = CONCAT44(uStack_d8._4_4_,param_15) & 0xffffffff000000ff;
    puVar2 = PTR_PTR_1126d8918;
    _objc_alloc();
    func_0x00010bf20c00(plVar1);
    func_0x00010c013de0();
    uStack_d0 = param_28;
    lVar8 = (long)_DAT_1127725f0;
    uVar7 = *(undefined8 *)((long)plVar1 + lVar8);
    *(undefined **)((long)plVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)plVar1 + lVar8);
    func_0x00010c29bc60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4c20();
    _objc_release(uVar7);
    uStack_b0 = *(undefined8 *)PTR__kEAGLDrawablePropertyRetainedBacking_11034b938;
    uStack_a8 = *(undefined8 *)PTR__kEAGLDrawablePropertyColorFormat_11034b930;
    uStack_98 = *(undefined8 *)PTR__kEAGLColorFormatRGBA8_11034b928;
    puStack_a0 = PTR____kCFBooleanFalse_11034ab60;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)plVar1 + lVar8);
    func_0x00010c29bc60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bfccde0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1917e0();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010c066fa0(plVar1);
    plVar4 = plVar1;
    func_0x00010bfe8540();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar4;
    func_0x00010bfe7180();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)plVar1 + (long)_DAT_1127725f4);
    *(long **)((long)plVar1 + (long)_DAT_1127725f4) = plVar5;
    _objc_release(uVar7);
    _objc_release(plVar4);
    param_5 = (long)_DAT_1127725f8;
    *(char *)((long)plVar1 + param_5) = (char)uStack_e0;
    *(undefined1 *)((long)plVar1 + (long)_DAT_1127725fc) = param_22._1_1_;
    *(char *)((long)plVar1 + (long)_DAT_112772600) = (char)uStack_d8;
    lVar8 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)plVar1 + (long)_DAT_112772604);
    *(long *)((long)plVar1 + (long)_DAT_112772604) = lVar8;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)plVar1 + (long)_DAT_112772608);
    *(undefined **)((long)plVar1 + (long)_DAT_112772608) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)plVar1 + (long)_DAT_11277260c);
    *(undefined **)((long)plVar1 + (long)_DAT_11277260c) = puVar2;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_112772610;
    _objc_retain(param_24);
    uVar7 = *(undefined8 *)((long)plVar1 + lVar8);
    *(undefined8 *)((long)plVar1 + lVar8) = param_24;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_112772614;
    _objc_retain(param_25);
    uVar7 = *(undefined8 *)((long)plVar1 + lVar8);
    *(undefined8 *)((long)plVar1 + lVar8) = param_25;
    _objc_release(uVar7);
    uVar7 = uStack_c8;
    param_28 = uStack_d0;
    param_35 = (long)_DAT_112772618;
    _objc_retain(uStack_c8);
    uVar3 = *(undefined8 *)((long)plVar1 + param_35);
    *(undefined8 *)((long)plVar1 + param_35) = uVar7;
    _objc_release(uVar3);
    uVar7 = param_28;
    func_0x00010bfe77c0();
    if ((int)uVar7 == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = *(byte *)((long)plVar1 + param_5) ^ 1;
    }
    *(byte *)((long)plVar1 + (long)_DAT_11277261c) = bVar6 & 1;
    func_0x00010c2878c0(plVar1);
  }
  _objc_release(uStack_c8);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar1 = &lStack_220;
  pcStack_1f8 = FUN_107f9268c;
  lStack_210 = param_35;
  lStack_208 = param_5;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010c12cf80(*(undefined8 *)(param_12 + _DAT_112772620));
  puStack_218 = PTR_PTR_1126fbec0;
  lStack_220 = param_12;
  _objc_msgSendSuper2(&lStack_220,PTR_s_dealloc_112525b20);
  return plVar1;
}



/* Entry: 107f9268c; end: 107f926df; -[SCSmartImageSwipeFilterView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9268c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + _DAT_112772620),param_2,param_1);
  puStack_28 = PTR_PTR_1126fbec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107f926e0; end: 107f92733; -[SCSmartImageSwipeFilterView updateMediaViewScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f926e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,param_1,param_1);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_1127725f0),param_3,&uStack_80);
  return;
}



/* Entry: 107f92734; end: 107f927d3; -[SCSmartImageSwipeFilterView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f92734(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fbec0;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  lVar1 = (long)_DAT_1127725f0;
  func_0x00010c17a6a0(param_1,uVar2,*(undefined8 *)(param_2 + lVar1));
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010bf20c00(param_2);
  func_0x00010c1739e0(uVar2,uVar3,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 107f927d4; end: 107f92a77; -[SCSmartImageSwipeFilterView _setupImageProcessSessionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f927d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [48];
  
  lVar8 = (long)_DAT_112772620;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126d89d8;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112772610);
    puVar2 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112772624);
    lVar5 = param_1;
    func_0x00010be5c5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffd60(puVar1,param_2,uVar4,puVar2,uVar6,PTR____NSArray0__struct_11034ab48,param_1,
                        lVar5);
    lVar7 = (long)_DAT_112772628;
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar4);
    _objc_release(lVar5);
    _objc_release(puVar2);
    lVar5 = param_1;
    func_0x00010c1308e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar3;
    func_0x00010bf55280(lVar3,param_2,*(undefined8 *)(param_1 + lVar7));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(long *)(param_1 + lVar8) = lVar5;
    _objc_release(uVar4);
    func_0x00010c169b40(*(undefined8 *)(param_1 + lVar8),param_2,
                        *(undefined1 *)(param_1 + _DAT_1127725fc));
    func_0x00010c200da0(*(undefined8 *)(param_1 + lVar8),param_2,
                        *(undefined1 *)(param_1 + _DAT_11277261c));
    func_0x00010bed5880(param_1);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf60ce0(auStack_80,param_1);
    func_0x00010c2235a0(uVar4,param_2,auStack_80);
    func_0x00010bef9980(*(undefined8 *)(param_1 + lVar8),param_2,param_1);
    lVar5 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar7 = (long)_DAT_11277262c;
      lVar5 = *(long *)(param_1 + lVar7);
      _objc_release();
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar8);
        lVar5 = param_1;
        func_0x00010bfe6ac0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa080(uVar4,param_2,lVar5,*(undefined8 *)(param_1 + lVar7));
        _objc_release(lVar5);
      }
    }
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127725f0);
    func_0x00010c29bc60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfccde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    func_0x00010c182d20(uVar4);
    _objc_release(puVar1);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    puVar1 = PTR_PTR_1126bf4e8;
    _objc_alloc(PTR_PTR_1126bf4e8);
    puVar2 = PTR_PTR_1126bf4b8;
    _objc_opt_new(PTR_PTR_1126bf4b8);
    func_0x00010c01cce0(puVar1,param_2,puVar2,uVar4);
    func_0x00010c1eaae0(uVar6,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 107f92a78; end: 107f92bd7; -[SCSmartImageSwipeFilterView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f92a78(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_5);
  lVar3 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_5 != lVar3) {
    lVar3 = (long)_DAT_112772630;
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    *(long *)(param_3 + lVar3) = param_5;
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112772604;
    uVar1 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c23d0a0(param_5);
    dVar5 = param_1;
    func_0x00010c14e120(param_5);
    param_1 = param_1 * dVar5;
    lVar3 = (long)param_1;
    func_0x00010c23d0a0(param_5);
    func_0x00010c14e120(param_5);
    func_0x00010c1f6160(uVar1,param_4,lVar3,(long)(param_2 * param_1));
    lVar3 = param_3;
    func_0x00010bf42a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar1 = *(undefined8 *)(param_3 + lVar4);
    lVar3 = lVar2;
    func_0x00010bf31200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa120(uVar1,param_4,lVar3);
    _objc_release(lVar3);
    func_0x00010c0a8040(*(undefined8 *)(param_3 + lVar4));
    lVar3 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedee80(param_3,param_4,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107f92bd8; end: 107f92d6b; -[SCSmartImageSwipeFilterView _updateScaledImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f92bd8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112772634;
  if (param_4 != *(long *)(param_2 + lVar4)) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + lVar4);
    *(long *)(param_2 + lVar4) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar3 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + _DAT_11277262c);
    *(undefined **)(param_2 + _DAT_11277262c) = puVar3;
    _objc_release(uVar1);
    func_0x00010c0c2a20(PTR_PTR_1126afee0);
    func_0x00010c1aa080(*(undefined8 *)(param_2 + _DAT_112772620));
    if (*(char *)(param_2 + _DAT_112772600) == '\x01') {
      uVar1 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107f92d6c;
      puStack_80 = &UNK_110876440;
      uStack_60 = 0;
      _objc_retain(param_4);
      lStack_78 = param_4;
      lStack_70 = param_2;
      uStack_58 = param_1;
      _objc_retain(puVar2);
      puStack_68 = puVar2;
      func_0x00010007380c(uVar1,&puStack_98);
      _objc_release(uVar1);
      _objc_release(puStack_68);
      _objc_release(lStack_78);
    }
    else {
      func_0x00010bf43d60(puVar2);
      func_0x00010c0a8060(*(undefined8 *)(param_2 + _DAT_112772604));
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107f92d6c; end: 107f92def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f92d6c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c14e300(*(undefined8 *)(param_1 + 0x40),lVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c1aaa60(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112772604),param_2,1,
                        &PTR____CFConstantStringClassReference_110ec9d98);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30),param_2,lVar1);
  func_0x00010c0a8060(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112772604));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f92df0; end: 107f9300f; -[SCSmartImageSwipeFilterView filteredImageWithCroppingAspectRatio:transcodingTaskId:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f92df0(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar4 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c2485a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c21d980(*(undefined8 *)(param_3 + (long)_DAT_112772628),param_4,1);
    uVar4 = *(undefined8 *)(param_3 + (long)_DAT_112772618);
    uVar1 = param_3;
    func_0x00010be4b0c0(param_3,param_4,*(undefined8 *)(param_3 + (long)_DAT_112772624));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6ea0(uVar4,param_4,uVar1);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_3 + (long)_DAT_112772620);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107f93010;
    puStack_68 = &UNK_1108cc7a8;
    uStack_60 = param_3;
    _objc_retain(param_6);
    uStack_58 = param_6;
    func_0x00010bfadf00(param_1,uVar4,param_4,param_5,1,&puStack_80);
    uVar1 = uStack_58;
  }
  else {
    uVar1 = param_3;
    func_0x00010bde2240(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar3 = param_3;
    uVar5 = uVar4;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar6 = param_2;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c2485a0();
    if (((uint)uVar2 >> 0x10 & 1) != 0) {
      uVar2 = param_3;
      func_0x00010bfe6ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      uVar3 = param_3;
      func_0x00010bfe6ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      param_2 = dVar6 * 0.5;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar4 = uVar5;
    }
    uVar2 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be16560(uVar4,param_2,param_3,param_4,uVar2,uVar1,0,param_6);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107f93010; end: 107f930a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f93010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772618);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf75ca0(uVar1);
  func_0x00010c21d980(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772628));
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f930a4; end: 107f9312f; -[SCSmartImageSwipeFilterView ucoImageWithCompletionHandler:] */

void FUN_107f930a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf5e9e0(param_1);
  uVar2 = param_1;
  func_0x00010bebf300(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be9aba0(param_1,param_2,uVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f93130; end: 107f93137;  */

void FUN_107f93130(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isUnifiedCameraObjectExportable_1125fe1e0);
  return;
}



/* Entry: 107f93138; end: 107f932ff; -[SCSmartImageSwipeFilterView _scaledImageWithAppliedCommands:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f93138(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_4 == 0) goto LAB_107f932d8;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,0,puVar3);
  }
  else {
    puVar3 = *(undefined **)(param_1 + _DAT_112772618);
    _objc_retain(puVar3);
    lVar1 = param_1;
    func_0x00010be4b0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6ea0(puVar3);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277262c);
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_retain(puVar3);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(puVar3);
    _objc_release(param_3);
  }
  _objc_release(puVar3);
LAB_107f932d8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f93300; end: 107f933eb;  */

void FUN_107f93300(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c23d0a0(param_4);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfe8380(param_4);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar2);
  func_0x00010be16560(param_1,param_2,uVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 107f933ec; end: 107f934df;  */

void FUN_107f933ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf75ca0(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107f934e0; end: 107f934f3;  */

void FUN_107f934e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f934f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f934f4; end: 107f9356f; -[SCSmartImageSwipeFilterView setViewportTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f934f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbec0;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setViewportTransform__112666790,&uStack_60);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  func_0x00010c2235a0(*(undefined8 *)(param_1 + _DAT_112772620));
  return;
}



/* Entry: 107f93570; end: 107f93573; -[SCSmartImageSwipeFilterView setCropBackgroundAnimating:] */

void FUN_107f93570(void)

{
  return;
}



/* Entry: 107f93574; end: 107f93637; -[SCSmartImageSwipeFilterView setBackgroundCommandWithColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f93574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfba8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c274320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf20040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0541c0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c2004e0(puVar1,param_2,1);
  func_0x00010c16e3c0(*(undefined8 *)(param_1 + _DAT_112772620),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f93638; end: 107f9376b; -[SCSmartImageSwipeFilterView selectFilterNames:forTypes:completion:] */

void FUN_107f93638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f9376c;
  puStack_68 = &UNK_110848378;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  uStack_58 = param_5;
  _objc_retain(param_3);
  puStack_88 = PTR_PTR_1126fbec0;
  uStack_90 = param_1;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_90,PTR_s_selectFilterNames_forTypes_compl_112633c98,param_3,param_4,
                      &puStack_80);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f9376c; end: 107f93827;  */

void FUN_107f9376c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010bfad800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c24d460();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf9cce0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar5 != 0) {
        func_0x00010c0bb400(lVar1);
      }
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f93828; end: 107f938b7; -[SCSmartImageSwipeFilterView updateMediaFiltersAndCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f93828(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_updateMediaFiltersAndCommands_11267f858);
  lVar1 = param_1;
  func_0x00010bf41b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be5be40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112772624);
  *(long *)(param_1 + _DAT_112772624) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  func_0x00010bed5880(param_1);
  return;
}



/* Entry: 107f938b8; end: 107f939cf; -[SCSmartImageSwipeFilterView areResourcesDownloadedForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107f938b8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bfae5a0();
  if (lVar4 == 7) {
    uVar3 = param_1;
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfae640();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf0a800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (uVar1 == 0) {
      uVar3 = param_1;
      func_0x00010c0c4f80(param_1,param_2,param_3);
      lVar4 = (long)_DAT_112772624;
      uVar2 = *(ulong *)(param_1 + lVar4);
      func_0x00010bf529e0();
      if (uVar3 < uVar2) {
        uVar2 = *(ulong *)(param_1 + lVar4);
        func_0x00010c0dfd40(uVar2,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c07c780();
        _objc_release(uVar2);
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = uVar1;
      func_0x00010c072d20(uVar1);
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107f939d0; end: 107f93a8f; -[SCSmartImageSwipeFilterView updateMediaFilterMaskForItem:relativeOffset:] */

/* WARNING: Possible PIC construction at 0x000107f93a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f93a78) */
/* WARNING: Removing unreachable block (ram,0x00010bed5880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f939d0(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_2;
  func_0x00010c0c4f80();
  lVar3 = (long)_DAT_112772628;
  func_0x00010c2090e0(*(undefined8 *)(param_2 + lVar3));
  if (lVar1 == 0x7fffffffffffffff) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112772620);
    param_1 = 0.0;
  }
  else {
    func_0x00010c1d6f00(*(undefined8 *)(param_2 + lVar3));
    if (1.0 <= ABS(param_1)) {
      param_1 = 0.0;
    }
    uVar2 = *(undefined8 *)(param_2 + _DAT_112772620);
    param_1 = (double)lVar1 - param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar2,PTR_s_setOffset__112651d18);
  return;
}



/* Entry: 107f93a90; end: 107f93bdb; -[SCSmartImageSwipeFilterView _makeMediaCommandsForCommandConfigurations:] */

void FUN_107f93a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107f93bdc;
  puStack_60 = &UNK_110a15db8;
  lStack_58 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b26e0;
  lVar1 = param_1;
  func_0x00010c1245e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0918e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0918c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8960(puVar4,param_2,param_3,lVar1 != 0,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bfe8540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29f920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107f93bdc; end: 107f93cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f93bdc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
  }
  _objc_retain(uVar4);
  uVar1 = uVar4;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfad800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b26d8;
    func_0x00010bf97920(PTR_PTR_1126b26d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar3 = PTR_PTR_1126b26d8;
    func_0x00010bf97940(PTR_PTR_1126b26d8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f93cc0; end: 107f940b7; -[SCSmartImageSwipeFilterView _updateCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f93cc0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedee80(param_1,param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = param_1;
  func_0x00010bf5f160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c720(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf41b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010be5be40(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c24d280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  if (uVar5 != 0) {
    uVar1 = param_1;
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfae180(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf11de0(uVar1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar12 = PTR_PTR_1126b26d8;
    uVar1 = uVar5;
    func_0x00010bfae180(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97920(puVar12,param_2,uVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar10 = PTR_PTR_1126b26e0;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c1245e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c0918e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c0918c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8960(puVar10,param_2,puVar8,uVar1 != 0,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(puVar8);
    uVar1 = param_1;
    func_0x00010bfe8540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c29f920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(puVar10);
    _objc_release(puVar12);
    _objc_release(uVar4);
    _objc_release(uVar7);
  }
  puVar12 = puVar2;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_1 + (long)_DAT_112772638);
  *(undefined **)(param_1 + (long)_DAT_112772638) = puVar12;
  _objc_release(uVar11);
  puVar12 = puVar2;
  func_0x00010c1c7980(*(undefined8 *)(param_1 + (long)_DAT_112772628),param_2,puVar2);
  uVar1 = param_1;
  func_0x00010c2485a0();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf5f160();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)(ulong)(uVar1 != 0);
    _objc_release();
    func_0x00010c200d60(*(undefined8 *)(param_1 + (long)_DAT_112772620),param_2,puVar12);
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  func_0x00010c2878c0(puVar2);
  func_0x00010c1d6f00(*(undefined8 *)(puVar2 + _DAT_112772628),param_2,
                      *(undefined8 *)(puVar2 + _DAT_112772624));
  func_0x00010c0dd220(*(undefined8 *)(puVar2 + _DAT_112772620));
  func_0x00010c23eea0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285c40();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107f940b8; end: 107f9413b; -[SCSmartImageSwipeFilterView updateMediaFiltersAndOutputCommandsWithFilterItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f940b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2878c0(param_1);
  func_0x00010c1d6f00(*(undefined8 *)(param_1 + _DAT_112772628),param_2,
                      *(undefined8 *)(param_1 + _DAT_112772624));
  func_0x00010c0dd220(*(undefined8 *)(param_1 + _DAT_112772620));
  func_0x00010c23eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285c40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f9413c; end: 107f94153; -[SCSmartImageSwipeFilterView stopDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9413c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112772620) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112772620),PTR_s_stopRunning_112673450);
    return;
  }
  return;
}



/* Entry: 107f94154; end: 107f941a3; -[SCSmartImageSwipeFilterView startDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94154(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c081740();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c07a3c0(), (int)uVar1 != 0)) {
    func_0x00010bead180(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + (long)_DAT_112772620),PTR_s_startRunning_112671b50);
    return;
  }
  return;
}



/* Entry: 107f941a4; end: 107f941b3; -[SCSmartImageSwipeFilterView markCurrentFrameAsDirty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f941a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772620),PTR_s_notifyInputCommandsChanged_112614ea0);
  return;
}



/* Entry: 107f941b4; end: 107f94203; -[SCSmartImageSwipeFilterView setShouldRenderContinuously:isExportMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f941b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c200d60(*(undefined8 *)(param_1 + _DAT_112772620));
                    /* WARNING: Could not recover jumptable at 0x00010c183930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772628),
             PTR_s_setContinuousRendering_isExportM_11263e868,param_3,param_4);
  return;
}



/* Entry: 107f94204; end: 107f94213; -[SCSmartImageSwipeFilterView pendingUnloadCommandCleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772628),PTR_s_pendingUnloadCommandCleanup_11261b8c0);
  return;
}



/* Entry: 107f94214; end: 107f94223; -[SCSmartImageSwipeFilterView releaseUnloadCommandCleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772628),PTR_s_releaseUnloadCommandCleanup_112627bf0);
  return;
}



/* Entry: 107f94224; end: 107f94293; -[SCSmartImageSwipeFilterView holdExistingLensCommandsExcept:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3f020();
  if ((int)lVar1 != 0) {
    func_0x00010bfe3c60(*(undefined8 *)(param_1 + _DAT_112772628),param_2,param_3);
    *(undefined1 *)(param_1 + _DAT_11277263c) = 1;
    func_0x00010c0dd220(*(undefined8 *)(param_1 + _DAT_112772620));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f94294; end: 107f942fb; -[SCSmartImageSwipeFilterView restorePreviousLensCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94294(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277263c;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010c13c600(*(undefined8 *)(param_1 + _DAT_112772628));
    *(undefined1 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0dd230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112772620),PTR_s_notifyInputCommandsChanged_112614ea0)
    ;
    return;
  }
  return;
}



/* Entry: 107f942fc; end: 107f9430b; -[SCSmartImageSwipeFilterView removeAllowlistedCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f942fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772628),PTR_s_removeAllowlistedCommand_112628690);
  return;
}



/* Entry: 107f9430c; end: 107f943c7; -[SCSmartImageSwipeFilterView _commandsForFilteredImageInLaguna] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9430c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772628);
  func_0x00010bfc3d60(uVar2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf418e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127725f4));
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f943c8; end: 107f945cb; -[SCSmartImageSwipeFilterView _filteredImageWithImage:outputSize:commands:orientation:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f943c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_8);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010be80a20(param_3,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  puVar3 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c03c6a0(param_1,param_2,puVar2,param_4,puVar3,param_5,0,lVar1,param_7,&uStack_90,
                      *(undefined8 *)(param_3 + _DAT_112772610),1);
  _objc_release(param_5);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_3 + _DAT_112772618);
  _objc_retain(uVar5);
  func_0x00010be4b0c0(param_3,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6ea0(uVar5,param_4,param_3);
  _objc_release(param_3);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107f945cc;
  puStack_a8 = &UNK_1108cc7a8;
  uStack_a0 = uVar5;
  uStack_98 = param_8;
  _objc_retain(param_8);
  _objc_retain(uVar5);
  ppuVar4 = &puStack_c0;
  _objc_retainBlock(ppuVar4);
  uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010c2505e0(puVar2,param_4,ppuVar4,&uStack_90);
  _objc_release(ppuVar4);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uVar5);
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107f945cc; end: 107f94633;  */

void FUN_107f945cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bf75ca0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f94634; end: 107f94707; -[SCSmartImageSwipeFilterView _stackedCommandsWithCommandAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94634(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_3 != 0x7fffffffffffffff) {
    lVar5 = (long)_DAT_112772624;
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf529e0();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (param_3 < uVar1) {
      lVar2 = *(long *)(param_1 + _DAT_112772638);
      func_0x00010bf529e0(lVar2);
      func_0x00010bf0a0e0(puVar4,param_2,lVar2 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0dfd40(uVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,uVar3);
      _objc_release(uVar3);
      goto LAB_107f946f0;
    }
  }
  puVar4 = *(undefined **)(param_1 + _DAT_112772638);
  _objc_retain(puVar4);
LAB_107f946f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f94708; end: 107f94717; -[SCSmartImageSwipeFilterView _lensIdsFromCommands:] */

void FUN_107f94708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_flatMap__1125ca340,&PTR___NSConcreteGlobalBlock_110a15e08);
  return;
}



/* Entry: 107f94718; end: 107f947ab;  */

void FUN_107f94718(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010c094660(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f947ac; end: 107f9483b; -[SCSmartImageSwipeFilterView _makeUCOCommandGenerationRulesProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f947ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d89e0;
  _objc_alloc(PTR_PTR_1126d89e0);
  lVar2 = param_1;
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012fe0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + _DAT_112772614));
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d89e8;
  _objc_alloc(PTR_PTR_1126d89e8);
  func_0x00010c058060();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f9483c; end: 107f9488b; -[SCSmartImageSwipeFilterView removeStackedFilterForType:filterName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9483c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_removeStackedFilterForType_filte_112629360);
  func_0x00010c0dd220(*(undefined8 *)(param_1 + _DAT_112772620));
  return;
}


