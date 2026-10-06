/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bc700c; end: 107bc7013; -[SCDiscoverFeedSingleSectionRerankingManager rankedStories] */

undefined8 FUN_107bc700c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107bc7014; end: 107bc701b; -[SCDiscoverFeedSingleSectionRerankingManager setRankedStories:] */

void FUN_107bc7014(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bc701c; end: 107bc7023; -[SCDiscoverFeedSingleSectionRerankingManager rerankOnFeedPageOpen] */

undefined1 FUN_107bc701c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}



/* Entry: 107bc7024; end: 107bc702b; -[SCDiscoverFeedSingleSectionRerankingManager setRerankOnFeedPageOpen:] */

void FUN_107bc7024(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  return;
}



/* Entry: 107bc702c; end: 107bc70a3; -[SCDiscoverFeedSingleSectionRerankingManager .cxx_destruct] */

void FUN_107bc702c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bc70a4; end: 107bc7107;  */

undefined8 FUN_107bc70a4(long param_1)

{
  if (param_1 - 2U < 8) {
    return *(undefined8 *)(&UNK_10dee1ce8 + (param_1 - 2U) * 8);
  }
  return 2;
}



/* Entry: 107bc7108; end: 107bc735f;  */

undefined8 FUN_107bc7108(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b1d8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0xffffffffffffffff;
    goto LAB_107bc71d4;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb56f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb3678);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x20;
      goto LAB_107bc71d4;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb3638);
    if ((uVar1 & 1) != 0) {
      uVar2 = 1;
      goto LAB_107bc71d4;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5658);
    if ((uVar1 & 1) != 0) {
      uVar2 = 2;
      goto LAB_107bc71d4;
    }
    uVar1 = param_1;
    func_0x000108f54104();
    if ((uVar1 & 1) != 0) {
      uVar2 = 5;
      goto LAB_107bc71d4;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b238);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b258),
       (uVar1 & 1) != 0)) {
      uVar2 = 7;
      goto LAB_107bc71d4;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b298);
    if ((uVar1 & 1) != 0) {
      uVar2 = 9;
      goto LAB_107bc71d4;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e1c938);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ee1ab8);
      if ((((uVar1 & 1) == 0) &&
          (uVar1 = param_1,
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ee1ad8),
          (uVar1 & 1) == 0)) &&
         (uVar1 = param_1,
         func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b2b8),
         (uVar1 & 1) == 0)) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5758);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ee1bf8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b2f8);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5378);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_1;
                func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e1f9d8
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_1;
                  func_0x00010c0720c0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f4b458);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110f4b478);
                    uVar2 = 0x6d;
                    if ((int)uVar1 == 0) {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = 0x47;
                  }
                }
                else {
                  uVar2 = 0x30;
                }
              }
              else {
                uVar2 = 0x2a;
              }
            }
            else {
              uVar2 = 0x28;
            }
          }
          else {
            uVar2 = 0x23;
          }
        }
        else {
          uVar2 = 0x1b;
        }
      }
      else {
        uVar2 = 0x1c;
      }
      goto LAB_107bc71d4;
    }
  }
  uVar2 = 4;
LAB_107bc71d4:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107bc7360; end: 107bc7627;  */

ulong FUN_107bc7360(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  uVar7 = 0xffffffffffffffff;
  if ((param_1 != 0) && (param_2 != 0)) {
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar2 != 0) {
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar7 = *(ulong *)(lVar8 * 8);
          uVar3 = uVar7;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            func_0x00010c0c6c20();
            goto LAB_107bc7474;
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = param_2;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      uVar7 = 0xffffffffffffffff;
    }
LAB_107bc7474:
    _objc_release(param_2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar7 = 0xffffffffffffffff;
  if ((param_1 != 0) && (lVar5 != 0)) {
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar2 != 0) {
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          uVar7 = *(ulong *)(lVar8 * 8);
          uVar3 = uVar7;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            func_0x00010c25b820(uVar7);
            goto LAB_107bc75d8;
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      uVar7 = 0xffffffffffffffff;
    }
LAB_107bc75d8:
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar7;
  }
  ___stack_chk_fail();
  if (param_1 < 0x20) {
    if (param_1 == 0) {
      return 7;
    }
    if (param_1 == 0x1e) {
      return 2;
    }
    if (param_1 == 0x1f) {
      return 3;
    }
  }
  else if (param_1 < 0x22) {
    if (param_1 == 0x20) {
      return 4;
    }
    if (param_1 == 0x21) {
      return 7;
    }
  }
  else {
    if (param_1 == 0x22) {
      return 8;
    }
    if (param_1 == 0x23) {
      return 4;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 107bc7628; end: 107bc778b;  */

undefined8 FUN_107bc7628(long param_1)

{
  if (param_1 < 0x20) {
    if (param_1 == 0) {
      return 7;
    }
    if (param_1 == 0x1e) {
      return 2;
    }
    if (param_1 == 0x1f) {
      return 3;
    }
  }
  else if (param_1 < 0x22) {
    if (param_1 == 0x20) {
      return 4;
    }
    if (param_1 == 0x21) {
      return 7;
    }
  }
  else {
    if (param_1 == 0x22) {
      return 8;
    }
    if (param_1 == 0x23) {
      return 4;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 107bc778c; end: 107bc781b;  */

undefined ** FUN_107bc778c(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  lVar1 = lRam0000000113727780;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x113727780,&PTR___NSConcreteGlobalBlock_1109ffda8);
  }
  ppuVar2 = ppuRam0000000113727778;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbad0;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  func_0x00010c067fc0(ppuVar3);
  _objc_release(ppuVar2);
  return ppuVar3;
}



/* Entry: 107bc781c; end: 107bc78df;  */

undefined ** FUN_107bc781c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f41578;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f415f8;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cba88;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cba88;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f41538;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f41658;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cba88;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbaa0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f41838;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbab8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_68,5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuRam0000000113727778;
  ppuRam0000000113727778 = (undefined **)puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar5 = ppuVar3;
  func_0x000107cb6e48(ppuVar3,&PTR____CFConstantStringClassReference_110daf5b8,puVar2);
  if ((int)ppuVar5 == 0) {
    bVar1 = false;
  }
  else {
    ppuVar5 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x00010c0b4ca0();
    _objc_release(ppuVar5);
    bVar1 = ppuVar4 == (undefined **)0x0;
  }
  puVar2 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  ppuVar5 = ppuVar3;
  func_0x000107cb6e48(ppuVar3,&PTR____CFConstantStringClassReference_110f423f8,puVar2);
  if ((int)ppuVar5 == 0) {
    ppuVar5 = (undefined **)0x0;
    if (bVar1) goto LAB_107bc79c0;
  }
  else {
    ppuVar5 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1) &&
       ((ppuVar5 == (undefined **)0x0 ||
        (ppuVar4 = ppuVar5, func_0x00010c084c40(), ppuVar4 != (undefined **)0xa)))) {
LAB_107bc79c0:
      iVar7 = 0x10eb6078;
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (ppuVar4 == &PTR____CFConstantStringClassReference_110eb6078) {
        _objc_release(&PTR____CFConstantStringClassReference_110eb6078);
        _objc_release(&PTR____CFConstantStringClassReference_110eb6078);
      }
      else {
        ppuVar6 = (undefined **)0x0;
        if (ppuVar4 == (undefined **)0x0) goto LAB_107bc7a34;
        func_0x00010c071ae0();
        _objc_release(ppuVar4);
        _objc_release(ppuVar4);
        if (iVar7 == 0) {
          ppuVar6 = (undefined **)0x0;
          goto LAB_107bc7a34;
        }
      }
    }
  }
  ppuVar6 = (undefined **)0x3;
LAB_107bc7a34:
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  return ppuVar6;
}



/* Entry: 107bc78e0; end: 107bc7a5b;  */

undefined8 FUN_107bc78e0(undefined **param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  int iVar6;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar4 = param_1;
  func_0x000107cb6e48(param_1,&PTR____CFConstantStringClassReference_110daf5b8,puVar2);
  if ((int)ppuVar4 == 0) {
    bVar1 = false;
  }
  else {
    ppuVar4 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c0b4ca0();
    _objc_release(ppuVar4);
    bVar1 = ppuVar3 == (undefined **)0x0;
  }
  puVar2 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  ppuVar4 = param_1;
  func_0x000107cb6e48(param_1,&PTR____CFConstantStringClassReference_110f423f8,puVar2);
  if ((int)ppuVar4 == 0) {
    ppuVar4 = (undefined **)0x0;
    if (bVar1) goto LAB_107bc79c0;
  }
  else {
    ppuVar4 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1) &&
       ((ppuVar4 == (undefined **)0x0 ||
        (ppuVar3 = ppuVar4, func_0x00010c084c40(), ppuVar3 != (undefined **)0xa)))) {
LAB_107bc79c0:
      iVar6 = 0x10eb6078;
      ppuVar3 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (ppuVar3 == &PTR____CFConstantStringClassReference_110eb6078) {
        _objc_release(&PTR____CFConstantStringClassReference_110eb6078);
        _objc_release(&PTR____CFConstantStringClassReference_110eb6078);
      }
      else {
        uVar5 = 0;
        if (ppuVar3 == (undefined **)0x0) goto LAB_107bc7a34;
        func_0x00010c071ae0();
        _objc_release(ppuVar3);
        _objc_release(ppuVar3);
        if (iVar6 == 0) {
          uVar5 = 0;
          goto LAB_107bc7a34;
        }
      }
    }
  }
  uVar5 = 3;
LAB_107bc7a34:
  _objc_release(ppuVar4);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107bc7a5c; end: 107bc7b5f;  */

void FUN_107bc7a5c(double param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar2 = PTR_PTR_1126b8ca8;
  func_0x00010c0f0520();
  if ((int)puVar2 == 0) {
    lStack_28 = 1;
  }
  else {
    func_0x00010c26ee60(PTR_PTR_1126b8ca8);
    lStack_28 = (long)param_1;
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x107bc7b08;
  puStack_30 = &UNK_110848088;
  if (lRam0000000113727790 != -1) {
    func_0x00010002a2fc(0x113727790,&puStack_48);
  }
  uVar1 = uRam0000000113727788;
  _objc_retain(uRam0000000113727788);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bc7b60; end: 107bc7c13;  */

void FUN_107bc7b60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e60();
  uVar2 = param_1;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110eb35f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107bc7c14; end: 107bc7e6b;  */

void FUN_107bc7c14(ulong param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d6f40;
  _objc_retain();
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c084900();
  uVar9 = param_1;
  func_0x00010c07b4a0();
  uVar10 = param_1;
  func_0x00010c247520();
  uVar11 = param_1;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bfdb180();
  func_0x00010bfd4e60();
  uVar13 = param_1;
  func_0x00010c0f1ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e60();
  uVar14 = param_1;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010bf32a00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_107bc7b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e980();
  _objc_release(param_1);
  func_0x00010c01bae0(puVar1,param_2,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9 & 0xffffffff,uVar10,uVar11,
                      (char)uVar12);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bc7e6c; end: 107bc7e77; -[SCDiscoverFeedLoggingLongImpressionManager initWithMinimumVisibleFraction:minimumImpressionTimeInterval:logImpressionsImmediately:logImpressionsOnce:performer:storiesConfigProvider:] */

void FUN_107bc7e6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02c250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithMinimumVisibleFraction_m_1125e8a78);
  return;
}



/* Entry: 107bc7e78; end: 107bc7f9f; -[SCDiscoverFeedLoggingLongImpressionManager initWithMinimumVisibleFraction:minimumImpressionTimeInterval:logImpressionsImmediately:logImpressionsOnce:performer:allowDebugView:storiesConfigProvider:] */

undefined1 *
FUN_107bc7e78(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fa258;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(char *)((long)puVar1 + 0x21) = (char)param_6;
    if (param_6 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined **)((long)puVar1 + 0x28) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
      *(undefined **)((long)puVar1 + 0x30) = puVar2;
      _objc_release(uVar3);
    }
    *(byte *)((long)puVar1 + 0x20) = param_5;
    if ((param_5 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar3 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar2;
      _objc_release(uVar3);
    }
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107bc7fa0; end: 107bc8117; -[SCDiscoverFeedLoggingLongImpressionManager updateWithViewItems:impressionItems:date:viewPort:viewPortScreenPosition:] */

void FUN_107bc7fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = param_9;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_78,param_7);
    uVar2 = *(undefined8 *)(param_7 + 0x38);
    _objc_copyWeak(auStack_b0,auStack_78);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    uStack_a8 = param_1;
    uStack_a0 = param_2;
    uStack_98 = param_3;
    uStack_90 = param_4;
    uStack_88 = param_5;
    uStack_80 = param_6;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return;
}



/* Entry: 107bc8118; end: 107bc815b;  */

void FUN_107bc8118(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee4fc0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bc815c; end: 107bc851f; -[SCDiscoverFeedLoggingLongImpressionManager _updateWithViewItems:impressionItems:date:viewPort:viewPortScreenPosition:] */

void FUN_107bc815c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 *param_7,long param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [16];
  undefined8 auStack_110 [16];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = param_2;
  uVar23 = param_3;
  uVar24 = param_4;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar14 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(param_7);
  puVar16 = &uStack_1d0;
  puVar12 = auStack_110;
  puVar2 = param_7;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar13 = *plStack_1c0;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if (*plStack_1c0 != lVar13) {
          _objc_enumerationMutation(param_7);
        }
        lVar19 = *(long *)(lStack_1c8 + (long)puVar16 * 8);
        lVar4 = lVar19;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          lVar4 = lVar19;
          FUN_107bc7b60(lVar19);
          _objc_retainAutoreleasedReturnValue();
          lVar17 = param_8;
          func_0x00010c0e00e0(param_8,param_6,lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          uVar3 = param_5;
          uVar14 = param_1;
          uVar22 = param_2;
          uVar23 = param_3;
          uVar24 = param_4;
          func_0x00010bed8680(param_1,param_2,param_3,param_4,param_5,param_6,lVar19,lVar17);
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 != 0) {
            func_0x00010befa120(puVar1,param_6,uVar3);
          }
          _objc_release(uVar3);
          _objc_release(lVar17);
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar2 != puVar16);
      puVar16 = &uStack_1d0;
      puVar12 = auStack_110;
      puVar2 = param_7;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(param_7);
  if ((*(byte *)(param_5 + 0x20) & 1) == 0) {
    lVar4 = *(long *)(param_5 + 8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = 0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    puVar16 = &uStack_210;
    puVar12 = auStack_190;
    lVar13 = lVar4;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      lVar19 = *plStack_200;
      do {
        lVar17 = 0;
        do {
          if (*plStack_200 != lVar19) {
            _objc_enumerationMutation(lVar4);
          }
          lVar20 = *(long *)(lStack_208 + lVar17 * 8);
          lVar5 = lVar20;
          func_0x00010c0b4c20();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bfeaa00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          lVar5 = lVar20;
          func_0x00010c0b4c20();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar5;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c08fa60();
          if (lVar8 == 0) {
            _objc_release(lVar7);
            _objc_release(lVar5);
          }
          else {
            lVar8 = param_8;
            func_0x00010c0e00e0(param_8,param_6,lVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar7);
            _objc_release(lVar5);
            if (lVar8 == 0) {
              func_0x00010befa120(puVar1,param_6,lVar20);
            }
          }
          _objc_release(lVar6);
          lVar17 = lVar17 + 1;
        } while (lVar13 != lVar17);
        puVar16 = &uStack_210;
        puVar12 = auStack_190;
        lVar13 = lVar4;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar4);
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = param_7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    puVar16 = puVar2;
    func_0x00010be3ed40();
    _objc_release(puVar2);
    if ((uVar3 & 1) == 0) {
      puVar16 = puVar1;
      puVar12 = param_9;
      func_0x00010be18220(param_5);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  _objc_retain(puVar12);
  func_0x00010bfb68e0(puVar16);
  func_0x00010be712e0(param_7);
  puVar1 = puVar16;
  uVar21 = uVar14;
  func_0x00010c07b4a0();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010bfb68e0(puVar16);
    puVar1 = param_7;
    func_0x00010bebc1a0();
    uVar15 = (uint)puVar1;
  }
  else {
    uVar15 = 1;
  }
  _objc_retain(puVar12);
  puVar1 = (undefined8 *)PTR_PTR_1126d6f48;
  _objc_alloc();
  puVar2 = puVar16;
  func_0x00010bf64de0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar16;
  func_0x00010c27c460(puVar16);
  puVar18 = puVar16;
  func_0x00010c27bc40(puVar16);
  func_0x00010bfb68e0(puVar16);
  puVar10 = puVar16;
  func_0x00010bf119c0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c027c00(uVar14,uVar21,uVar22,uVar23,uVar24,puVar1,param_6,puVar12,puVar2,puVar9,
                      puVar18,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar2);
  puVar2 = puVar16;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar2 == (undefined8 *)0x0) || ((*(byte *)(param_7 + 4) & uVar15 & 1) == 0)) {
LAB_107bc87f0:
    _objc_release(puVar2);
  }
  else {
    puVar9 = puVar16;
    func_0x00010bfe5ec0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar16;
    func_0x00010c0f1e60(puVar16);
    puVar18 = puVar16;
    func_0x00010c155f60(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_7;
    func_0x00010be34100(param_7,param_6,puVar9,puVar11,puVar18);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar2);
    if (((ulong)puVar10 & 1) == 0) {
      puVar2 = puVar16;
      func_0x00010bfe5ec0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010c0f1e60(puVar16);
      puVar18 = puVar16;
      func_0x00010c155f60(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedafa0(param_7,param_6,puVar2,puVar9,puVar18);
      _objc_release(puVar18);
      _objc_release(puVar2);
      puVar2 = param_7;
      func_0x00010bf6b020(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_2d0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_2d0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf64de0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf38ce0(puVar2,param_6,param_7,puVar9,puVar18,0);
      _objc_release(puVar18);
      _objc_release(puVar9);
      goto LAB_107bc87f0;
    }
  }
  puVar2 = param_7;
  func_0x00010be3ed40(param_7,param_6,puVar16);
  if ((int)puVar2 != 0) {
    puVar9 = puVar16;
    puVar11 = puVar12;
    func_0x00010bed51c0(param_7,param_6,puVar16,puVar12,puVar1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107bc891c;
  }
  puVar18 = (undefined8 *)param_7[1];
  puVar2 = puVar12;
  func_0x00010bfeaa00(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c0dff20(puVar18,param_6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar18 != (undefined8 *)0x0 && (uVar15 & 1) == 0) {
LAB_107bc88c0:
    _objc_retain(puVar18);
    param_7 = puVar18;
  }
  else {
    if ((puVar18 != (undefined8 *)0x0 & uVar15) == 1) {
      puVar2 = puVar18;
      func_0x00010c0b4c20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      puVar9 = puVar12;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      if (((ulong)puVar10 & 1) == 0) {
        puVar9 = puVar1;
        puVar11 = puVar12;
        func_0x00010bea49a0(param_7,param_6,puVar1,puVar12);
        goto LAB_107bc88c0;
      }
    }
    else if ((puVar18 == (undefined8 *)0x0 & uVar15) == 1) {
      puVar2 = puVar16;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 != (undefined8 *)0x0) {
        puVar9 = puVar1;
        puVar11 = puVar12;
        func_0x00010bea49a0(param_7,param_6,puVar1,puVar12);
      }
    }
    param_7 = (undefined8 *)0x0;
  }
  _objc_release(puVar18);
LAB_107bc891c:
  _objc_release(puVar1);
  _objc_release(puVar12);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_7);
    return;
  }
  ___stack_chk_fail();
  uVar14 = puVar16[1];
  _objc_retain(puVar9);
  func_0x00010bfeaa00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar14,param_6,puVar9,puVar11);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 107bc8520; end: 107bc8987; -[SCDiscoverFeedLoggingLongImpressionManager _updateFrameForViewItem:impressionItem:viewPort:] */

void FUN_107bc8520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined *param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bfb68e0(param_7);
  func_0x00010be712e0(param_5);
  puVar1 = param_7;
  uVar6 = param_1;
  func_0x00010c07b4a0();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010bfb68e0(param_7);
    puVar1 = param_5;
    func_0x00010bebc1a0();
    uVar7 = (uint)puVar1;
  }
  else {
    uVar7 = 1;
  }
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126d6f48;
  _objc_alloc();
  puVar2 = param_7;
  func_0x00010bf64de0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_7;
  func_0x00010c27c460(param_7);
  puVar8 = param_7;
  func_0x00010c27bc40(param_7);
  func_0x00010bfb68e0(param_7);
  puVar4 = param_7;
  func_0x00010bf119c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c027c00(param_1,uVar6,param_2,param_3,param_4,puVar1,param_6,param_8,puVar2,puVar3,
                      puVar8,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_7;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar2 == (undefined *)0x0) || (((byte)param_5[0x20] & uVar7 & 1) == 0)) {
LAB_107bc87f0:
    _objc_release(puVar2);
  }
  else {
    puVar3 = param_7;
    func_0x00010bfe5ec0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_7;
    func_0x00010c0f1e60(param_7);
    puVar8 = param_7;
    func_0x00010c155f60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_5;
    func_0x00010be34100(param_5,param_6,puVar3,puVar5,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = param_7;
      func_0x00010bfe5ec0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_7;
      func_0x00010c0f1e60(param_7);
      puVar8 = param_7;
      func_0x00010c155f60(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedafa0(param_5,param_6,puVar2,puVar3,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar2);
      puVar2 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_a0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_7;
      func_0x00010bf64de0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf38ce0(puVar2,param_6,param_5,puVar3,puVar8,0);
      _objc_release(puVar8);
      _objc_release(puVar3);
      goto LAB_107bc87f0;
    }
  }
  puVar2 = param_5;
  func_0x00010be3ed40(param_5,param_6,param_7);
  if ((int)puVar2 != 0) {
    puVar3 = param_7;
    puVar5 = param_8;
    func_0x00010bed51c0(param_5,param_6,param_7,param_8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107bc891c;
  }
  puVar8 = *(undefined **)(param_5 + 8);
  puVar2 = param_8;
  func_0x00010bfeaa00(param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20(puVar8,param_6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar8 != (undefined *)0x0 && (uVar7 & 1) == 0) {
LAB_107bc88c0:
    _objc_retain(puVar8);
    param_5 = puVar8;
  }
  else {
    if ((puVar8 != (undefined *)0x0 & uVar7) == 1) {
      puVar2 = puVar8;
      func_0x00010c0b4c20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      puVar3 = param_8;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = puVar1;
        puVar5 = param_8;
        func_0x00010bea49a0(param_5,param_6,puVar1,param_8);
        goto LAB_107bc88c0;
      }
    }
    else if ((puVar8 == (undefined *)0x0 & uVar7) == 1) {
      puVar2 = param_7;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 != (undefined *)0x0) {
        puVar3 = puVar1;
        puVar5 = param_8;
        func_0x00010bea49a0(param_5,param_6,puVar1,param_8);
      }
    }
    param_5 = (undefined *)0x0;
  }
  _objc_release(puVar8);
LAB_107bc891c:
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_7 + 8);
  _objc_retain(puVar3);
  func_0x00010bfeaa00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar6,param_6,puVar3,puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107bc8988; end: 107bc89eb; -[SCDiscoverFeedLoggingLongImpressionManager _setImpresionData:forImpressionItem:] */

void FUN_107bc8988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfeaa00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bc89ec; end: 107bc8b77; -[SCDiscoverFeedLoggingLongImpressionManager _updateChatFeedViewItem:impressionItem:impressionTrackingData:] */

void FUN_107bc89ec(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = param_4;
  func_0x00010bfeaa00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar3 == 0) {
    lVar2 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010bea49a0(param_1,param_2,param_5,param_4);
    }
  }
  else {
    uVar4 = uVar3;
    func_0x00010c0b4c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_4);
    if (uVar4 != param_4) {
      if (param_4 == 0) {
        _objc_release();
        _objc_release(uVar4);
      }
      else {
        uVar1 = uVar4;
        func_0x00010c071ae0(uVar4,param_2,param_4);
        _objc_release(param_4);
        _objc_release(uVar4);
        _objc_release(uVar4);
        if ((uVar1 & 1) != 0) goto LAB_107bc8b0c;
      }
      func_0x00010bea49a0(param_1,param_2,param_5,param_4);
      _objc_retain(uVar3);
      uVar4 = uVar3;
      goto LAB_107bc8b3c;
    }
    _objc_release(param_4);
    _objc_release(uVar4);
    _objc_release(uVar4);
  }
LAB_107bc8b0c:
  uVar4 = 0;
LAB_107bc8b3c:
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107bc8b78; end: 107bc8ba7; -[SCDiscoverFeedLoggingLongImpressionManager _significantlyVisible:viewPort:] */

bool FUN_107bc8b78(double param_1,long param_2)

{
  func_0x00010be712e0();
  return (double)*(float *)(param_2 + 0x10) <= param_1;
}



/* Entry: 107bc8ba8; end: 107bc8c1b; -[SCDiscoverFeedLoggingLongImpressionManager _percentVisibile:viewPort:] */

double FUN_107bc8ba8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5,undefined8 param_6,double param_7,double param_8,uint param_9
                    )

{
  double dVar1;
  
  _CGRectIntersection(param_5,param_6,param_7,param_8,param_1,param_2,param_3,param_4);
  _CGRectIsEmpty();
  dVar1 = 0.0;
  if ((param_9 & 1) == 0) {
    dVar1 = (param_7 * param_8) / (param_3 * param_4);
  }
  return dVar1;
}



/* Entry: 107bc8c1c; end: 107bc8c9b; -[SCDiscoverFeedLoggingLongImpressionManager _presentLongEnough:timestamp:] */

bool FUN_107bc8c1c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  _objc_retain(param_5);
  func_0x00010c24e820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_5,param_3,param_4);
  _objc_release(param_5);
  dVar1 = *(double *)(param_2 + 0x18);
  _objc_release(param_4);
  return dVar1 <= param_1;
}



/* Entry: 107bc8c9c; end: 107bc8dcb; -[SCDiscoverFeedLoggingLongImpressionManager flushWithDate:completion:extraData:] */

void FUN_107bc8c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bc8dcc; end: 107bc8e03;  */

void FUN_107bc8dcc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be183e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bc8e04; end: 107bc8ea7; -[SCDiscoverFeedLoggingLongImpressionManager _flushWithDate:completion:extraData:] */

void FUN_107bc8e04(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be18220(param_1,param_2,uVar1,param_3,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  (**(code **)(param_4 + 0x10))(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bc8ea8; end: 107bc9533; -[SCDiscoverFeedLoggingLongImpressionManager _flushItems:date:extraData:] */

void FUN_107bc8ea8(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar10 = param_5;
  puStack_218 = puVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1f8 = puVar10;
  _objc_opt_new();
  puVar10 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar11);
  puVar11 = puVar10;
  if (((ulong)puVar2 & 1) == 0) {
    puVar11 = (undefined *)0x0;
  }
  _objc_retain(puVar11);
  _objc_release(puVar10);
  puVar10 = puVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010be3ed40();
  _objc_release(puVar10);
  puStack_240 = param_5;
  puStack_238 = param_3;
  uStack_230 = param_4;
  puStack_228 = puVar6;
  puStack_220 = puVar11;
  if ((int)puVar2 == 0) {
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    puVar1 = param_3;
  }
  else {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(puVar11);
    puVar6 = puVar11;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar9 = *plStack_1a0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(puVar11);
          }
          puVar2 = *(undefined **)(lStack_1a8 + (long)puVar10 * 8);
          FUN_107bc7c14();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = *(long *)(param_1 + 8);
          puVar11 = puVar2;
          func_0x00010bfeaa00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          if (lVar8 != 0) {
            func_0x00010befa120(puVar1);
          }
          _objc_release(lVar8);
          _objc_release(puVar2);
          puVar11 = puStack_220;
          puVar10 = puVar10 + 1;
        } while (puVar6 != puVar10);
        puVar6 = puStack_220;
        func_0x00010bf52a60();
        puVar10 = (undefined *)0x0;
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar11);
    param_3 = puVar10;
  }
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar1);
  puVar11 = puVar1;
  func_0x00010bf52a60();
  puStack_200 = puVar11;
  if (puVar11 != (undefined *)0x0) {
    lStack_208 = *plStack_1e0;
    puStack_210 = puVar1;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lStack_208) {
          _objc_enumerationMutation(puStack_210);
        }
        param_3 = *(undefined **)(lStack_1e8 + (long)puVar11 * 8);
        puVar1 = param_3;
        func_0x00010c0b4c20(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_3;
        func_0x00010c0b4c20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f1e60();
        puVar2 = param_3;
        func_0x00010c0b4c20(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c155f60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_1;
        func_0x00010be34100();
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = param_3;
          func_0x00010c0b4c20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c07b4a0();
          if (((ulong)puVar5 & 1) == 0) {
            puVar5 = param_1;
            func_0x00010be7c480();
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar10);
            _objc_release(puVar6);
            _objc_release(puVar1);
            if (((ulong)puVar5 & 1) == 0) goto LAB_107bc932c;
          }
          else {
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar10);
            _objc_release(puVar6);
            _objc_release(puVar1);
          }
          puVar1 = param_3;
          func_0x00010c0b4c20(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = param_3;
          func_0x00010c0b4c20(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f1e60();
          puVar2 = param_3;
          func_0x00010c0b4c20(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c155f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bedafa0(param_1);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar10);
          _objc_release(puVar6);
          _objc_release(puVar1);
          func_0x00010befa120(puStack_228);
        }
        else {
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar10);
          _objc_release(puVar6);
          _objc_release(puVar1);
        }
LAB_107bc932c:
        puVar1 = param_3;
        func_0x00010c0b4c20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bfeaa00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar6 = *(undefined **)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010c0b4c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if ((puVar1 == (undefined *)0x0) || (puStack_1f8 == (undefined *)0x0)) {
          func_0x00010c0b4c20();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010c071ae0();
          _objc_release(param_3);
          if ((int)puVar6 != 0) goto LAB_107bc93f8;
        }
        else {
          param_3 = puVar1;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puStack_1f8;
          func_0x00010bf4b900();
          _objc_release(param_3);
          if (((ulong)puVar6 & 1) != 0) {
LAB_107bc93f8:
            func_0x00010befa120(puStack_218);
          }
        }
        _objc_release(puVar1);
        _objc_release(puVar2);
        puVar1 = puStack_210;
        puVar11 = puVar11 + 1;
      } while (puStack_200 != puVar11);
      puVar11 = puStack_210;
      func_0x00010bf52a60();
      puStack_200 = puVar11;
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  func_0x00010c12d4a0(*(undefined8 *)(param_1 + 8));
  puVar6 = puStack_228;
  puVar10 = puStack_228;
  func_0x00010bf529e0();
  uVar7 = uStack_230;
  puVar11 = puStack_240;
  if (puVar10 != (undefined *)0x0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf51e00();
    func_0x00010bf38ce0(param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
    param_3 = param_1;
  }
  _objc_release(puStack_220);
  _objc_release(puVar1);
  _objc_release(puStack_1f8);
  _objc_release(puStack_218);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(uVar7);
  puVar11 = puStack_238;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_248 = FUN_107bc9534;
    puStack_260 = puVar2;
    puStack_258 = param_3;
    puStack_250 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_268,puVar11);
    uVar7 = *(undefined8 *)(puVar11 + 0x38);
    _objc_copyWeak(auStack_270,auStack_268);
    func_0x00010c0f7fc0(uVar7);
    _objc_destroyWeak(auStack_270);
    _objc_destroyWeak(auStack_268);
    return;
  }
  return;
}



/* Entry: 107bc9534; end: 107bc95db; -[SCDiscoverFeedLoggingLongImpressionManager resetLoggedDict] */

void FUN_107bc9534(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107bc95dc; end: 107bc9607;  */

void FUN_107bc95dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be932a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bc9608; end: 107bc965f; -[SCDiscoverFeedLoggingLongImpressionManager _resetLoggedDict] */

void FUN_107bc9608(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107bc9660; end: 107bc97c7; -[SCDiscoverFeedLoggingLongImpressionManager _hasLoggedImpressionForItemWithIdentifier:pageType:sectionIdentifier:] */

long FUN_107bc9660(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 == 0x16) && (lVar2 = param_5, func_0x00010c08fa60(), lVar2 != 0)) {
    puVar1 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0e00e0(puVar1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      lVar5 = 0;
      goto LAB_107bc978c;
    }
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0(lVar2,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf4b900();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x28);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf4b900();
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar2);
LAB_107bc978c:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 107bc97c8; end: 107bc998b; -[SCDiscoverFeedLoggingLongImpressionManager _updateLoggedImpressionsForItemWithIdentifier:pageType:sectionIdentifier:] */

void FUN_107bc97c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4,param_2,puVar1,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar4);
    _objc_release(puVar1);
    if ((param_4 == 0x16) && (lVar3 = param_5, func_0x00010c08fa60(), lVar3 != 0)) {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010c0e00e0(lVar3,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar1,param_5);
        _objc_release(puVar1);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar4,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar4);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bc998c; end: 107bc9997; -[SCDiscoverFeedLoggingLongImpressionManager getMinimumVisibleFraction] */

double FUN_107bc998c(long param_1)

{
  return (double)*(float *)(param_1 + 0x10);
}



/* Entry: 107bc9998; end: 107bc9a17; -[SCDiscoverFeedLoggingLongImpressionManager _isChatCellImpression:] */

uint FUN_107bc9998(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f1e60();
  if (lVar1 == 0x16) {
    lVar1 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(lVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107bc9a18; end: 107bc9a2f; -[SCDiscoverFeedLoggingLongImpressionManager delegate] */

void FUN_107bc9a18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bc9a30; end: 107bc9a3b; -[SCDiscoverFeedLoggingLongImpressionManager setDelegate:] */

void FUN_107bc9a30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 107bc9a3c; end: 107bc9a97; -[SCDiscoverFeedLoggingLongImpressionManager .cxx_destruct] */

void FUN_107bc9a3c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bc9a98; end: 107bc9c3f; -[SCDiscoverFeedLoggingCreator initSnapTokenProvider:requestManager:registrationInfoProvider:grapheneRegistry:spectrumLogger:blizzardLogger:circumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_107bc9a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fa260;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bc9c40; end: 107bc9cc7; -[SCDiscoverFeedLoggingCreator creatingRankingEventLoggingWithFlushTimeSecs:maxEvents:queue:] */

void FUN_107bc9c40(void)

{
  undefined *puVar1;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126d6f50;
  _objc_retain(in_x4);
  _objc_alloc(puVar1);
  func_0x00010c0139e0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bc9cc8; end: 107bc9d43; -[SCDiscoverFeedLoggingCreator creatingDiscoverFeedBlizzardLoggingWithPerformer:] */

void FUN_107bc9cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6f58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c035080();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bc9d44; end: 107bc9dbb; -[SCDiscoverFeedLoggingCreator .cxx_destruct] */

void FUN_107bc9d44(long param_1)

{
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



/* Entry: 107bc9dbc; end: 107bca02b; -[SCDiscoverFeedLogger initWithPerformer:snapTokenProvider:requestManager:registrationInfoProvider:grapheneRegistry:spectrumLogger:blizzardLogger:circumstanceEngine:storiesConfigProvider:] */

undefined8 *
FUN_107bc9dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fa268;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d6f50;
    _objc_alloc();
    uVar3 = param_3;
    func_0x00010c11de00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0139e0();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d6f60;
    _objc_alloc_init();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    uVar3 = param_10;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 7) = (char)uVar3;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107bca02c; end: 107bca047;  */

void FUN_107bca02c(void)

{
  _objc_opt_new(PTR_PTR_1126d6f68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bca048; end: 107bca147; -[SCDiscoverFeedLogger logEvent:data:] */

void FUN_107bca048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bca148; end: 107bca17b;  */

void FUN_107bca148(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bca17c; end: 107bca66f; -[SCDiscoverFeedLogger _logEvent:data:] */

void FUN_107bca17c(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010be5b9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42cf8,puVar2);
  if ((int)uVar5 == 0) {
    uVar5 = 3;
  }
  else {
    uVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c067fc0();
    _objc_release(uVar3);
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  FUN_107bc778c();
  _objc_release(uVar1);
  if ((uVar3 & uVar5 & 1) != 0) {
    func_0x00010c0a5a00(*(undefined8 *)(param_2 + 8));
  }
  if (((uint)(uVar3 & uVar5) >> 1 & 1) != 0) {
    uVar5 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar5 == 0) {
      uVar5 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar5 == 0) {
        uVar5 = uVar1;
        func_0x00010c0720c0();
        if ((int)uVar5 == 0) {
          uVar5 = uVar1;
          func_0x00010c0720c0();
          if ((int)uVar5 == 0) {
            uVar5 = uVar1;
            func_0x00010c0720c0();
            if ((int)uVar5 == 0) {
              uVar5 = uVar1;
              func_0x00010c0720c0();
              if ((int)uVar5 == 0) {
                uVar5 = uVar1;
                func_0x00010c0720c0();
                if ((int)uVar5 == 0) {
                  uVar5 = uVar1;
                  func_0x00010c0720c0();
                  if ((int)uVar5 == 0) {
                    uVar5 = uVar1;
                    func_0x00010c0720c0();
                    if ((int)uVar5 == 0) {
                      uVar5 = uVar1;
                      func_0x00010c0720c0();
                      if ((int)uVar5 == 0) {
                        uVar5 = uVar1;
                        func_0x00010c0720c0();
                        if ((int)uVar5 == 0) {
                          uVar5 = uVar1;
                          func_0x00010c0720c0();
                          if ((int)uVar5 == 0) {
                            uVar5 = uVar1;
                            func_0x00010c0720c0();
                            if ((int)uVar5 == 0) {
                              uVar5 = uVar1;
                              func_0x00010c0720c0();
                              if ((int)uVar5 == 0) {
                                uVar5 = uVar1;
                                func_0x00010c0720c0();
                                if ((int)uVar5 == 0) {
                                  uVar5 = uVar1;
                                  func_0x00010c0720c0();
                                  if ((int)uVar5 == 0) {
                                    uVar5 = uVar1;
                                    func_0x00010c0720c0();
                                    if ((int)uVar5 == 0) {
                                      uVar5 = uVar1;
                                      func_0x00010c0720c0();
                                      if ((int)uVar5 == 0) {
                                        uVar5 = uVar1;
                                        func_0x00010c0720c0();
                                        if ((int)uVar5 == 0) {
                                          uVar5 = uVar1;
                                          func_0x00010c0720c0();
                                          if ((int)uVar5 == 0) {
                                            uVar5 = uVar1;
                                            func_0x00010c0720c0();
                                            if ((int)uVar5 != 0) {
                                              func_0x00010c0a3dc0(PTR_PTR_1126d6f70);
                                            }
                                          }
                                          else {
                                            func_0x00010c0b1040(PTR_PTR_1126d6f70);
                                          }
                                        }
                                        else {
                                          func_0x00010c0a3d80(PTR_PTR_1126d6f70);
                                        }
                                      }
                                      else {
                                        func_0x00010c0a3e80(PTR_PTR_1126d6f70);
                                      }
                                    }
                                    else {
                                      func_0x00010c0a3da0(PTR_PTR_1126d6f70);
                                    }
                                  }
                                  else {
                                    func_0x00010c0a5240(PTR_PTR_1126d6f70);
                                  }
                                }
                                else {
                                  func_0x00010c0ac6e0(PTR_PTR_1126d6f70);
                                }
                              }
                              else {
                                func_0x00010c0a6360(PTR_PTR_1126d6f70);
                              }
                            }
                            else {
                              func_0x00010c0a6200(PTR_PTR_1126d6f70);
                            }
                          }
                          else {
                            func_0x00010c0a6220(PTR_PTR_1126d6f70);
                          }
                        }
                        else {
                          func_0x00010c0a6240(PTR_PTR_1126d6f70);
                        }
                      }
                      else {
                        func_0x000108f5479c(*(undefined8 *)(param_2 + 0x20));
                        uVar4 = *(undefined8 *)(param_2 + 0x28);
                        func_0x00010c269d40(uVar4);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf908e0();
                        _objc_release(uVar4);
                        func_0x00010c0a6260(PTR_PTR_1126d6f70);
                      }
                    }
                    else {
                      uVar5 = param_5;
                      func_0x00010c0e00e0(param_5);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf885a0();
                      _objc_release(uVar5);
                      if (0.0 < param_1) {
                        func_0x000108f5479c(*(undefined8 *)(param_2 + 0x20));
                        uVar4 = *(undefined8 *)(param_2 + 0x28);
                        func_0x00010c269d40(uVar4);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf908e0();
                        _objc_release(uVar4);
                        func_0x00010c0a6280(PTR_PTR_1126d6f70);
                      }
                    }
                  }
                  else {
                    func_0x00010c0a61e0(PTR_PTR_1126d6f70);
                  }
                }
                else {
                  func_0x00010c0a61c0(PTR_PTR_1126d6f70);
                }
              }
              else {
                func_0x00010c0a6300(PTR_PTR_1126d6f70);
              }
            }
            else {
              func_0x00010c0a70a0(PTR_PTR_1126d6f70);
            }
          }
          else {
            func_0x00010c0a6320(PTR_PTR_1126d6f70);
          }
        }
        else {
          func_0x00010c0a62e0(PTR_PTR_1126d6f70);
        }
      }
      else {
        func_0x00010c0a62c0(PTR_PTR_1126d6f70);
      }
    }
    else {
      func_0x00010c0a62a0(PTR_PTR_1126d6f70);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bca670; end: 107bca78b; -[SCDiscoverFeedLogger flushWithDate:completion:extraData:] */

void FUN_107bca670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bca78c; end: 107bca7bf;  */

void FUN_107bca78c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be183c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bca7c0; end: 107bca803; -[SCDiscoverFeedLogger _flushWithDate:completion:] */

void FUN_107bca7c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010bfb31e0(*(undefined8 *)(param_1 + 8));
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bca804; end: 107bca9ab; -[SCDiscoverFeedLogger _makeEventCriticalIfNecessary:data:] */

void FUN_107bca804(undefined8 param_1,undefined8 param_2,undefined **param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c0720c0();
  ppuVar6 = param_3;
  if ((int)ppuVar1 == 0) {
LAB_107bca8f8:
    ppuVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar3 = param_4;
      func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42658,puVar2);
      if ((int)uVar3 != 0) {
        uVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0b4ca0();
        _objc_release(uVar3);
        if (uVar5 == 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110f41578;
          _objc_retain(&PTR____CFConstantStringClassReference_110f41578);
          goto LAB_107bca984;
        }
      }
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = param_4;
    func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110daf5b8,puVar2);
    if ((int)uVar3 == 0) goto LAB_107bca8f8;
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0b4ca0();
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar5 == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) != 0)) {
LAB_107bca8e4:
      _objc_retain(ppuVar6);
      _objc_release(uVar3);
      goto LAB_107bca984;
    }
    FUN_107cb77bc();
    if ((int)uVar5 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f41538;
      goto LAB_107bca8e4;
    }
    _objc_release(uVar3);
  }
  _objc_retain(param_3);
LAB_107bca984:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 107bca9ac; end: 107bcaa17; -[SCDiscoverFeedLogger .cxx_destruct] */

void FUN_107bca9ac(long param_1)

{
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



/* Entry: 107bcaa18; end: 107bcaab3; -[SCDiscoverFeedRankingEventLogger initWithFlushTimeSecs:maxEvents:queue:snapTokenProvider:requestManager:registrationInfoProvider:grapheneRegistry:spectrumLogger:] */

undefined1 * FUN_107bcaa18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  undefined8 in_stack_00000008;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(in_x4);
  _objc_retain(in_stack_00000008);
  puStack_38 = PTR_PTR_1126fa270;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(in_x4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = in_x4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),in_stack_00000008);
  }
  _objc_release(in_stack_00000008);
  _objc_release(in_x4);
  return (undefined1 *)puVar1;
}



/* Entry: 107bcaab4; end: 107bcab93; -[SCDiscoverFeedRankingEventLogger logEvent:data:] */

void FUN_107bcaab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107bcab94;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107bcab94; end: 107bcabc7;  */

void FUN_107bcab94(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bcabc8; end: 107bcb00f; -[SCDiscoverFeedRankingEventLogger _logEvent:data:] */

void FUN_107bcabc8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  
  puVar1 = PTR_PTR_1126d6f78;
  func_0x00010c11faa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) goto LAB_107bcaff4;
  puVar2 = puVar1;
  func_0x00010bf9a0a0();
  puVar3 = PTR_PTR_1126d6f80;
  _objc_opt_new(PTR_PTR_1126d6f80);
  iVar7 = (int)puVar2;
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  if (iVar7 < 5) {
    if (iVar7 == 3) {
      _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      puVar4 = puVar1;
      func_0x00010c259ac0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09780(puVar5,param_3,puVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60(puVar2,param_3,puVar5,0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1ec620(puVar2,param_3,0);
      puVar5 = puVar2;
      func_0x00010bf67000(puVar2,param_3,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ab1c0(puVar3,param_3,puVar5);
      goto LAB_107bcaef0;
    }
    if (iVar7 == 4) {
      _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      puVar4 = puVar1;
      func_0x00010c259aa0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09780(puVar5,param_3,puVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60(puVar2,param_3,puVar5,0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1ec620(puVar2,param_3,0);
      puVar5 = puVar2;
      func_0x00010bf67000(puVar2,param_3,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20d0a0(puVar3,param_3,puVar5);
      goto LAB_107bcaef0;
    }
  }
  else {
    if (iVar7 == 5) {
      _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      puVar4 = puVar1;
      func_0x00010c259ae0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09780(puVar5,param_3,puVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60(puVar2,param_3,puVar5,0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1ec620(puVar2,param_3,0);
      puVar5 = puVar2;
      func_0x00010bf67000(puVar2,param_3,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20d100(puVar3,param_3,puVar5);
    }
    else {
      if (iVar7 != 0xb) goto LAB_107bcafec;
      _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      puVar4 = puVar1;
      func_0x00010c091ca0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09780(puVar5,param_3,puVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60(puVar2,param_3,puVar5,0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1ec620(puVar2,param_3,0);
      puVar5 = puVar2;
      func_0x00010bf67000(puVar2,param_3,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb3c0(puVar3,param_3,puVar5);
    }
LAB_107bcaef0:
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c270ae0(puVar1);
    func_0x00010c215e80(puVar3,param_3,puVar5);
    puVar5 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010beec480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216020(puVar3,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b86e8;
    _objc_opt_new(PTR_PTR_1126b86e8);
    func_0x00010c1adb00();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    func_0x00010c197720(puVar5,param_3,(long)(param_1 * 1000.0));
    param_2 = param_2 + 0x10;
    _objc_loadWeakRetained(param_2);
    lVar6 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25c500();
    _objc_release(lVar6);
    _objc_release(param_2);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
LAB_107bcafec:
  _objc_release(puVar3);
LAB_107bcaff4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bcb010; end: 107bcb013; -[SCDiscoverFeedRankingEventLogger flushRankingEvents] */

void FUN_107bcb010(void)

{
  return;
}



/* Entry: 107bcb014; end: 107bcb03f; -[SCDiscoverFeedRankingEventLogger .cxx_destruct] */

void FUN_107bcb014(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bcb040; end: 107bcb12f; -[SCDiscoverSignleFPV initWithPageSessionId:data:pageType:pageTypeSpecific:] */

undefined1 *
FUN_107bcb040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fa278;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1d8620(puVar1);
    func_0x00010c1d8800(puVar1);
    func_0x00010c1d8820(puVar1);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    func_0x00010be3e7e0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bcb130; end: 107bcb23f; -[SCDiscoverSignleFPV _isBounced] */

undefined8 FUN_107bcb130(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb3638);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb3658);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110eb3678);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be3e800(param_1,param_2,uVar1);
  func_0x00010c1b0d40(param_1,param_2,uVar4);
  uVar4 = param_1;
  func_0x00010be3e800(param_1,param_2,uVar2);
  func_0x00010c1b2bc0(param_1,param_2,uVar4);
  uVar4 = param_1;
  func_0x00010be3e800(param_1,param_2,uVar3);
  func_0x00010c1af900(param_1,param_2,uVar4);
  uVar4 = param_1;
  func_0x00010c0727c0();
  if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c0786c0(), (uVar4 & 1) == 0)) {
    uVar4 = param_1;
    func_0x00010c06d520(param_1);
  }
  else {
    uVar4 = 1;
  }
  func_0x00010c1afa20(param_1,param_2,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 107bcb240; end: 107bcb31f; -[SCDiscoverSignleFPV _isBouncedFromSectionData:] */

ulong FUN_107bcb240(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar4 = 1;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb3698);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c067ec0();
    if ((int)uVar4 == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb36b8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf1f3c0();
      if ((uVar4 & 1) == 0) {
        uVar3 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb36d8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c067ec0();
        uVar4 = uVar4 >> 0x1f & 1;
        _objc_release(uVar3);
      }
      else {
        uVar4 = 0;
      }
      _objc_release(uVar2);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107bcb320; end: 107bcb383; -[SCDiscoverSignleFPV getLoggingPageType] */

void FUN_107bcb320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bcb384; end: 107bcb3db; -[SCDiscoverSignleFPV getLoggingBounced] */

void FUN_107bcb384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d840();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  return;
}



/* Entry: 107bcb3dc; end: 107bcb433; -[SCDiscoverSignleFPV getLoggingFSBounced] */

void FUN_107bcb3dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0727c0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  return;
}



/* Entry: 107bcb434; end: 107bcb48b; -[SCDiscoverSignleFPV getLoggingNFSBounced] */

void FUN_107bcb434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0786c0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  return;
}



/* Entry: 107bcb48c; end: 107bcb4e3; -[SCDiscoverSignleFPV getLoggingBlendedBounced] */

void FUN_107bcb48c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d520();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  return;
}



/* Entry: 107bcb4e4; end: 107bcb4eb; -[SCDiscoverSignleFPV pageSessionId] */

undefined8 FUN_107bcb4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107bcb4ec; end: 107bcb4f3; -[SCDiscoverSignleFPV setPageSessionId:] */

void FUN_107bcb4ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bcb4f4; end: 107bcb4fb; -[SCDiscoverSignleFPV pageType] */

undefined8 FUN_107bcb4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107bcb4fc; end: 107bcb52b; -[SCDiscoverSignleFPV setPageType:] */

void FUN_107bcb4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bcb52c; end: 107bcb533; -[SCDiscoverSignleFPV pageTypeSpecific] */

undefined8 FUN_107bcb52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107bcb534; end: 107bcb53b; -[SCDiscoverSignleFPV setPageTypeSpecific:] */

void FUN_107bcb534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bcb53c; end: 107bcb543; -[SCDiscoverSignleFPV isFSBounced] */

undefined1 FUN_107bcb53c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107bcb544; end: 107bcb54b; -[SCDiscoverSignleFPV setIsFSBounced:] */

void FUN_107bcb544(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107bcb54c; end: 107bcb553; -[SCDiscoverSignleFPV isNFSBounced] */

undefined1 FUN_107bcb54c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107bcb554; end: 107bcb55b; -[SCDiscoverSignleFPV setIsNFSBounced:] */

void FUN_107bcb554(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 107bcb55c; end: 107bcb563; -[SCDiscoverSignleFPV isBlendedBounced] */

undefined1 FUN_107bcb55c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107bcb564; end: 107bcb56b; -[SCDiscoverSignleFPV setIsBlendedBounced:] */

void FUN_107bcb564(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 107bcb56c; end: 107bcb573; -[SCDiscoverSignleFPV isBounced] */

undefined1 FUN_107bcb56c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107bcb574; end: 107bcb57b; -[SCDiscoverSignleFPV setIsBounced:] */

void FUN_107bcb574(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 107bcb57c; end: 107bcb5c3; -[SCDiscoverSignleFPV .cxx_destruct] */

void FUN_107bcb57c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bcb5c4; end: 107bcb68b; -[SCDiscoverFPVGroup initWithPageSessionId:logger:] */

undefined1 *
FUN_107bcb5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa280;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1d8620(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ef80(puVar1);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bcb68c; end: 107bcba3f; -[SCDiscoverFPVGroup logFpvWithData:pageType:pageTypeSpecific:] */

void FUN_107bcb68c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfb6760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d6f88;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c0f1c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0332a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar4 = puVar3;
    func_0x00010c0f1c40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0f1c40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    _objc_release(puVar4);
    if ((int)puVar5 != 0) {
      lVar1 = lVar2;
      func_0x00010c06d840();
      puVar4 = puVar3;
      func_0x00010c06d840();
      if ((int)lVar1 != (int)puVar4) {
        uVar7 = *(undefined8 *)(param_1 + 8);
        puVar4 = puVar3;
        func_0x00010bfc7460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0f1ea0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfc73e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_107bf0300(uVar7,&PTR____CFConstantStringClassReference_110db6c78,puVar4,puVar5,puVar6,1)
        ;
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      lVar1 = lVar2;
      func_0x00010c0727c0();
      puVar4 = puVar3;
      func_0x00010c0727c0();
      if ((int)lVar1 != (int)puVar4) {
        uVar7 = *(undefined8 *)(param_1 + 8);
        puVar4 = puVar3;
        func_0x00010bfc7460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0f1ea0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfc7400(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_107bf0300(uVar7,&PTR____CFConstantStringClassReference_110db6c78,puVar4,puVar5,puVar6,1)
        ;
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      lVar1 = lVar2;
      func_0x00010c0786c0();
      puVar4 = puVar3;
      func_0x00010c0786c0();
      if ((int)lVar1 != (int)puVar4) {
        uVar7 = *(undefined8 *)(param_1 + 8);
        puVar4 = puVar3;
        func_0x00010bfc7460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0f1ea0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfc7440(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_107bf0300(uVar7,&PTR____CFConstantStringClassReference_110db6c78,puVar4,puVar5,puVar6,1)
        ;
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      lVar1 = lVar2;
      func_0x00010c06d520();
      puVar4 = puVar3;
      func_0x00010c06d520();
      if ((int)lVar1 != (int)puVar4) {
        uVar7 = *(undefined8 *)(param_1 + 8);
        puVar4 = puVar3;
        func_0x00010bfc7460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0f1ea0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfc73c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_107bf0300(uVar7,&PTR____CFConstantStringClassReference_110db6c78,puVar4,puVar5,puVar6,1)
        ;
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
    }
  }
  func_0x00010bfb6760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107bcba40; end: 107bcba47; -[SCDiscoverFPVGroup pageSessionId] */

undefined8 FUN_107bcba40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107bcba48; end: 107bcba4f; -[SCDiscoverFPVGroup setPageSessionId:] */

void FUN_107bcba48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bcba50; end: 107bcba57; -[SCDiscoverFPVGroup fpvs] */

undefined8 FUN_107bcba50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107bcba58; end: 107bcba87; -[SCDiscoverFPVGroup setFpvs:] */

void FUN_107bcba58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bcba88; end: 107bcbac3; -[SCDiscoverFPVGroup .cxx_destruct] */

void FUN_107bcba88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bcbac4; end: 107bcbb4f; -[SCDiscoverInternalFPVTracker init] */

undefined1 * FUN_107bcbac4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa288;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d6f60;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107bcbb50; end: 107bcbd1f; -[SCDiscoverInternalFPVTracker logFpvWithData:] */

void FUN_107bcbb50(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e5f1f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb3738);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb3758);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((lVar2 != 0) && (lVar5 != 0)) {
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar6,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      puVar7 = PTR_PTR_1126d6f90;
      _objc_alloc(PTR_PTR_1126d6f90);
      func_0x00010c0332e0();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar7,lVar2);
      _objc_release(puVar7);
    }
    lVar6 = lVar5;
    func_0x00010bf64920(lVar5,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = 0;
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar6,4,&uStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_58;
    _objc_retain(uStack_58);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6d00();
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar1);
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 107bcbd20; end: 107bcbd5b; -[SCDiscoverInternalFPVTracker .cxx_destruct] */

void FUN_107bcbd20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bcbd5c; end: 107bcbde3; +[SCDiscoverLogger shared] */

void FUN_107bcbd5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107bcbde4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113727798 != -1) {
    func_0x00010002a2fc(0x113727798,&puStack_48);
  }
  uVar1 = uRam00000001137277a0;
  _objc_retain(uRam00000001137277a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bcbde4; end: 107bcbe0b;  */

void FUN_107bcbde4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137277a0;
  uRam00000001137277a0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bcbe0c; end: 107bcbedf; -[SCDiscoverLogger init] */

undefined1 * FUN_107bcbe0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa290;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c197ac0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c197980(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010c197b60(puVar1);
    _objc_release(puVar2);
    func_0x00010c232700(0x4024000000000000,PTR__OBJC_CLASS___UIDevice_1126aeb10);
    func_0x00010c200f20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107bcbee0; end: 107bcbf0f; -[SCDiscoverLogger setSystemBlizzardLogger:] */

void FUN_107bcbee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bcbf10; end: 107bcbf3f; -[SCDiscoverLogger setUserBlizzardLogger:] */

void FUN_107bcbf10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bcbf40; end: 107bcbf6f; -[SCDiscoverLogger setCircumstanceEngine:] */

void FUN_107bcbf40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bcbf70; end: 107bcbff3; -[SCDiscoverLogger didConsumeSnapcode] */

void FUN_107bcbf70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6f98;
  _objc_opt_new(PTR_PTR_1126d6f98);
  func_0x00010c1e5b60();
  func_0x00010c193c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1921a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1f6220(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010ba603d8(uVar2);
  func_0x00010c18bcc0(puVar1,param_2,uVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
  *(undefined1 *)(param_1 + 0x30) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


