/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d77df0; end: 106d77ef3;  */

undefined * FUN_106d77df0(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
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
  func_0x00010c2978e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar9 = *plStack_100;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar1 = *(ulong *)(lStack_108 + (long)puVar10 * 8);
        func_0x00010bf125a0();
        if ((uVar1 & 1) != 0) {
          puVar8 = (undefined *)0x0;
          goto LAB_106d77eb4;
        }
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar10);
      puVar8 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (puVar8 != (undefined *)0x0);
  }
  puVar8 = (undefined *)0x1;
LAB_106d77eb4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar8 = param_1;
  func_0x00010bf20e60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c08fa60();
  puVar7 = param_1;
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  else {
    puVar10 = param_1;
    func_0x00010bf20e60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c0cab00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c0720c0(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010bf20e60();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      func_0x00010c0cab00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110e43378);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar10);
      goto LAB_106d78070;
    }
  }
  func_0x00010c0cab00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
LAB_106d78070:
  _objc_release(puVar7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 106d77ef4; end: 106d7809f;  */

void FUN_106d77ef4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf20e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar8 = param_1;
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  else {
    puVar2 = param_1;
    func_0x00010bf20e60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c0cab00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c0720c0(puVar3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00010bf20e60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010c0cab00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e43378);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_106d78070;
    }
  }
  func_0x00010c0cab00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
LAB_106d78070:
  _objc_release(puVar8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d780a0; end: 106d7829f;  */

void FUN_106d780a0(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = param_1;
      func_0x00010c112a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar2;
      FUN_106d785f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      goto LAB_106d78110;
    }
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_106d78110:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106d782a0; end: 106d78413;  */

void FUN_106d782a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bf5de60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf5de60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b05a0;
    _objc_alloc(PTR_PTR_1126b05a0);
    uVar1 = param_1;
    func_0x00010bf5de60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_1;
    func_0x00010bf02460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar3 = param_2;
    func_0x00010bf02460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ee0(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106d78414; end: 106d785f3;  */

void FUN_106d78414(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bf66840(&uStack_68,puVar1);
  }
  func_0x00010bf667c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  lVar3 = param_1;
  func_0x00010bf02460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf667a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
  func_0x00010c1c8280();
  func_0x00010c1c8260(puVar1);
  lVar3 = param_1;
  func_0x000106d781b4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar5 = puVar4;
    func_0x00010c25d700(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1bf3e0(puVar1);
    puVar5 = puVar1;
    func_0x00010c25d4c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126b05a0;
  _objc_alloc(PTR_PTR_1126b05a0);
  lVar7 = param_1;
  func_0x00010bf5de60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006ee0(puVar6);
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d785f4; end: 106d7872f;  */

void FUN_106d785f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010bf02460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d500(puVar5,param_2,lVar1);
  _objc_release(lVar1);
  if (((ulong)puVar5 & 1) == 0) {
    lVar1 = param_1;
    func_0x000106d781b4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf5de60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined *)0x0;
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
      _objc_alloc_init(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
      func_0x00010c1d02e0();
      func_0x00010c1bf3e0(puVar3,param_2,lVar1);
      puVar4 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
      lVar2 = param_1;
      func_0x00010bf02460(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66800(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c25d4c0(puVar3,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar2);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106d78730; end: 106d787bf;  */

void FUN_106d78730(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db3738,
                      &PTR____CFConstantStringClassReference_110e859d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106d787c0; end: 106d788db; +[SCCommerceProductImpressionHelpers significantlyVisible:collectionView:] */

bool FUN_106d787c0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_8);
  func_0x00010bfb68e0(param_7);
  uVar1 = param_8;
  func_0x00010c262ca0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_8,param_6,uVar1);
  uVar2 = param_1;
  uVar3 = param_2;
  dVar4 = param_3;
  dVar5 = param_4;
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_8);
  _objc_release();
  _CGRectIntersection(uVar2,uVar3,dVar4,dVar5,param_1,param_2,param_3,param_4);
  _CGRectIsNull();
  return (param_8 & 1) == 0 && 0.25 <= (dVar4 * dVar5) / (param_3 * param_4);
}



/* Entry: 106d788dc; end: 106d789eb; -[SCCommerceProductImpressionTracker initWithEventLogger:] */

undefined1 * FUN_106d788dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f6d30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d789ec; end: 106d78af7; -[SCCommerceProductImpressionTracker updateTrackingImpressionWithViewSnapshot:] */

void FUN_106d789ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106d78af8; end: 106d78b2b;  */

void FUN_106d78af8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d78b2c; end: 106d78c03; -[SCCommerceProductImpressionTracker startTrackingImpressionWithViewItem:] */

void FUN_106d78b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d78c04; end: 106d78c37;  */

void FUN_106d78c04(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d78c38; end: 106d78d47; -[SCCommerceProductImpressionTracker endTrackingImpressionWithViewItemId:] */

void FUN_106d78c38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d78d48; end: 106d78d7b;  */

void FUN_106d78d48(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8df00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d78d7c; end: 106d78e53; -[SCCommerceProductImpressionTracker convertImpressionWithViewItemId:] */

void FUN_106d78d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d78e54; end: 106d78e87;  */

void FUN_106d78e54(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde9180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d78e88; end: 106d79037; -[SCCommerceProductImpressionTracker _constructNewViewItemsMap:] */

void FUN_106d78e88(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar9;
  long lVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = auStack_e8;
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(long *)(lStack_128 + lVar10 * 8);
        unaff_x23 = *(long *)(param_1 + 0x10);
        lVar3 = unaff_x24;
        func_0x00010c115e60(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(unaff_x23,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = unaff_x23;
        if ((unaff_x23 != 0) ||
           (lVar4 = unaff_x24, func_0x00010c07e0c0(), lVar3 = unaff_x24, (int)lVar4 != 0)) {
          func_0x00010c115e60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,lVar3,unaff_x24);
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x23);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar8 = auStack_e8;
      lVar2 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar8,0x10);
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106d79038;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = puVar1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  lVar9 = lVar2;
  func_0x00010bde6d20(lVar2,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010bf002e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_106d79140;
  puStack_180 = &UNK_110856a28;
  lStack_178 = lVar9;
  _objc_retain(lVar9);
  uVar6 = uVar5;
  func_0x00010bfaea20(uVar5,param_2,&puStack_198);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010be181e0(lVar2,param_2,uVar6,puVar8);
  _objc_release(puVar8);
  func_0x00010c12adc0(*(undefined8 *)(lVar2 + 0x10));
  func_0x00010bef7f60(*(undefined8 *)(lVar2 + 0x10),param_2,lVar9);
  _objc_release(uVar6);
  _objc_release(lStack_178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 106d79038; end: 106d7913f; -[SCCommerceProductImpressionTracker _updateImpressionDictionaryWithSnapshot:endTimestamp:] */

void FUN_106d79038(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bde6d20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf002e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106d79140;
  puStack_50 = &UNK_110856a28;
  lStack_48 = lVar1;
  _objc_retain(lVar1);
  uVar3 = uVar2;
  func_0x00010bfaea20(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be181e0(param_1,param_2,uVar3,param_4);
  _objc_release(param_4);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
  _objc_release(uVar3);
  _objc_release(lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d79140; end: 106d7917b;  */

bool FUN_106d79140(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 == 0;
}



/* Entry: 106d7917c; end: 106d792cf; -[SCCommerceProductImpressionTracker _addViewItem:] */

void FUN_106d7917c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c115e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  uVar1 = param_3;
  if (lVar4 == 0) {
    uVar3 = param_3;
    func_0x00010c07e0c0();
    if ((int)uVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = param_3;
      func_0x00010c115e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,param_3,uVar3);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,param_3,uVar1);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = param_3;
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,uVar5,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d792d0; end: 106d79323; -[SCCommerceProductImpressionTracker _removeViewItem:endTimestamp:] */

void FUN_106d792d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010be18200(param_1,param_2,param_3,param_4);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d79324; end: 106d7943b; -[SCCommerceProductImpressionTracker _flushImpressionEventForItemIds:endTimestamp:] */

void FUN_106d79324(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
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
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  dVar12 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar9 = auStack_d8;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar9,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be18200(param_1,param_2,*(undefined8 *)(lStack_118 + lVar11 * 8),param_4);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar9 = auStack_d8;
      lVar1 = param_3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar9,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  lVar1 = *(long *)(param_3 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar10 = lVar1;
    func_0x00010c2510e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar9,param_2,lVar10);
    _objc_release(lVar10);
    if (1.2 <= dVar12) {
      puVar2 = PTR_PTR_1126d2618;
      _objc_alloc();
      lVar10 = lVar1;
      func_0x00010c115e60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010c084640(lVar1);
      lVar3 = lVar1;
      func_0x00010c247980(lVar1);
      lVar4 = lVar1;
      func_0x00010bf33480(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c278ec0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c1563e0(lVar1);
      lVar7 = lVar1;
      func_0x00010c156360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03a7a0(dVar12,puVar2,param_2,lVar10,lVar11,lVar3,lVar4,lVar5,lVar6,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar10);
      func_0x00010c0acd60(*(undefined8 *)(param_3 + 8),param_2,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106d7943c; end: 106d795df; -[SCCommerceProductImpressionTracker _flushImpressionForItemId:endTimestamp:] */

void FUN_106d7943c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c2510e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(param_5,param_3,lVar2);
    _objc_release(lVar2);
    if (1.2 <= param_1) {
      puVar3 = PTR_PTR_1126d2618;
      _objc_alloc();
      lVar2 = lVar1;
      func_0x00010c115e60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c084640(lVar1);
      lVar5 = lVar1;
      func_0x00010c247980(lVar1);
      lVar6 = lVar1;
      func_0x00010bf33480(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c278ec0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010c1563e0(lVar1);
      lVar9 = lVar1;
      func_0x00010c156360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03a7a0(param_1,puVar3,param_3,lVar2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
      func_0x00010c0acd60(*(undefined8 *)(param_2 + 8),param_3,puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d795e0; end: 106d79777; -[SCCommerceProductImpressionTracker _convertImpressionWithViewItemId:] */

void FUN_106d795e0(undefined8 param_1,long param_2,undefined8 param_3)

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
  
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c2510e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2,param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d2618;
    _objc_alloc(PTR_PTR_1126d2618);
    lVar3 = lVar1;
    func_0x00010c115e60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c084640(lVar1);
    lVar5 = lVar1;
    func_0x00010c247980(lVar1);
    lVar6 = lVar1;
    func_0x00010bf33480(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c278ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c1563e0(lVar1);
    lVar9 = lVar1;
    func_0x00010c156360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03a7a0(param_1,puVar2,param_3,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
    func_0x00010c0ace00(*(undefined8 *)(param_2 + 8),param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d79778; end: 106d7977f; -[SCCommerceProductImpressionTracker productIdToImpressionViewItemMap] */

undefined8 FUN_106d79778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d79780; end: 106d797af; -[SCCommerceProductImpressionTracker setProductIdToImpressionViewItemMap:] */

void FUN_106d79780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d797b0; end: 106d797b7; -[SCCommerceProductImpressionTracker productIdToImpressionViewItemHistoryMap] */

undefined8 FUN_106d797b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d797b8; end: 106d797e7; -[SCCommerceProductImpressionTracker setProductIdToImpressionViewItemHistoryMap:] */

void FUN_106d797b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106d797e8; end: 106d797ef; -[SCCommerceProductImpressionTracker impressionPerformer] */

undefined8 FUN_106d797e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d797f0; end: 106d7981f; -[SCCommerceProductImpressionTracker setImpressionPerformer:] */

void FUN_106d797f0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106d79820; end: 106d79867; -[SCCommerceProductImpressionTracker .cxx_destruct] */

void FUN_106d79820(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d79868; end: 106d799b7; -[SCCommerceProductImpressionViewItem initWithProductId:startTimestamp:itemIndex:isSignificantlyVisible:sourcePage:categoryId:trackingId:sectionPos:sectionName:] */

undefined1 *
FUN_106d79868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f6d38;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d799b8; end: 106d799db; -[SCCommerceProductImpressionViewItem copyWithZone:] */

undefined8 FUN_106d799b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d799dc; end: 106d79a9b; -[SCCommerceProductImpressionViewItem hash] */

undefined8 * FUN_106d799dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  lStack_60 = -lVar6;
  if (-1 < lVar6) {
    lStack_60 = lVar6;
  }
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  lStack_50 = -lVar1;
  if (-1 < lVar1) {
    lStack_50 = lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  lStack_38 = -lVar6;
  if (-1 < lVar6) {
    lStack_38 = lVar6;
  }
  uStack_40 = uVar3;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106d79ba4:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106d79bb0;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(char *)((long)puVar4 + 8) == param_3[8])) &&
         (*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)((long)puVar4 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x30);
          if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x38);
            if ((lVar6 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              puVar7 = *(undefined1 **)((long)puVar4 + 0x48);
              if (puVar7 != *(undefined1 **)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_106d79bb0;
              }
              goto LAB_106d79ba4;
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_106d79bb0:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 106d79a9c; end: 106d79bcb; -[SCCommerceProductImpressionViewItem isEqual:] */

long FUN_106d79a9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d79ba4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d79bb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if (lVar3 != *(long *)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_106d79bb0;
              }
              goto LAB_106d79ba4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106d79bb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d79bcc; end: 106d79bd3; -[SCCommerceProductImpressionViewItem productId] */

undefined8 FUN_106d79bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d79bd4; end: 106d79bdb; -[SCCommerceProductImpressionViewItem startTimestamp] */

undefined8 FUN_106d79bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d79bdc; end: 106d79be3; -[SCCommerceProductImpressionViewItem itemIndex] */

undefined8 FUN_106d79bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d79be4; end: 106d79beb; -[SCCommerceProductImpressionViewItem isSignificantlyVisible] */

undefined1 FUN_106d79be4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d79bec; end: 106d79bf3; -[SCCommerceProductImpressionViewItem sourcePage] */

undefined8 FUN_106d79bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d79bf4; end: 106d79bfb; -[SCCommerceProductImpressionViewItem categoryId] */

undefined8 FUN_106d79bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d79bfc; end: 106d79c03; -[SCCommerceProductImpressionViewItem trackingId] */

undefined8 FUN_106d79bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d79c04; end: 106d79c0b; -[SCCommerceProductImpressionViewItem sectionPos] */

undefined8 FUN_106d79c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d79c0c; end: 106d79c13; -[SCCommerceProductImpressionViewItem sectionName] */

undefined8 FUN_106d79c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d79c14; end: 106d79c67; -[SCCommerceProductImpressionViewItem .cxx_destruct] */

void FUN_106d79c14(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d79c68; end: 106d79d3b; -[SCCommerceShowcaseTracker initWithShowcaseInteractionHistoryTracker:grapheneRegistry:eventLogger:] */

undefined1 *
FUN_106d79c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f6d40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1399e0(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    puVar2 = PTR_PTR_1126b0490;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d79d3c; end: 106d79e43; -[SCCommerceShowcaseTracker addProductCellTapped:column:index:productId:commerceOrigin:] */

void FUN_106d79d3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  lVar1 = param_1;
  func_0x00010bfcdee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acd20();
  _objc_release(in_x6);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0acd40();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c115fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2620;
  _objc_alloc(PTR_PTR_1126d2620);
  func_0x00010c01d780();
  _objc_release(in_x5);
  func_0x00010befa120(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedfeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateShowcaseInteractionHistor_112595950);
  return;
}



/* Entry: 106d79e44; end: 106d79e7f; -[SCCommerceShowcaseTracker shopButtonTapped] */

void FUN_106d79e44(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a1d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d79e80; end: 106d79ebb; -[SCCommerceShowcaseTracker calloutBarTapped] */

void FUN_106d79e80(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a1d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d79ebc; end: 106d79edf; -[SCCommerceShowcaseTracker updateProductsViewed:] */

void FUN_106d79ebc(undefined8 param_1)

{
  func_0x00010c1e3ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bedfeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateShowcaseInteractionHistor_112595950);
  return;
}



/* Entry: 106d79ee0; end: 106d79ee7; -[SCCommerceShowcaseTracker productWebviewOpened] */

void FUN_106d79ee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForNewActiveView__112593ad0,2);
  return;
}



/* Entry: 106d79ee8; end: 106d79f5f; -[SCCommerceShowcaseTracker storeWebviewOpenedWithSource:] */

void FUN_106d79ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfcdee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1ce0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForNewActiveView__112593ad0,3);
  return;
}



/* Entry: 106d79f60; end: 106d79f67; -[SCCommerceShowcaseTracker catalogViewOpened] */

void FUN_106d79f60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForNewActiveView__112593ad0,1);
  return;
}



/* Entry: 106d79f68; end: 106d79ff3; -[SCCommerceShowcaseTracker showcasePresented] */

/* WARNING: Possible PIC construction at 0x000106d79fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d79fcc) */
/* WARNING: Removing unreachable block (ram,0x00010c222ac0) */

void FUN_106d79f68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfcdee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abbe0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29dfa0();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c29dfa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForNewActiveView__112593ad0,lVar1);
  return;
}



/* Entry: 106d79ff4; end: 106d7a027; -[SCCommerceShowcaseTracker showcaseDismissed] */

void FUN_106d79ff4(undefined8 param_1)

{
  func_0x00010bef1340();
  func_0x00010c222ac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForNewActiveView__112593ad0,0);
  return;
}



/* Entry: 106d7a028; end: 106d7a243; -[SCCommerceShowcaseTracker _updateForNewActiveView:] */

void FUN_106d7a028(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  func_0x00010bef1340();
  func_0x00010bdd4d40(param_2);
  lVar1 = param_2;
  func_0x00010bef1340();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  lVar3 = param_2;
  if (lVar1 == 3) {
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2);
    dVar4 = param_1;
    func_0x00010c257ce0(param_2);
    func_0x00010c20c2e0(param_1 + dVar4,param_2);
  }
  else if (lVar1 == 2) {
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2);
    dVar4 = param_1;
    func_0x00010c2a4960(param_2);
    func_0x00010c2253a0(param_1 + dVar4,param_2);
  }
  else {
    if (lVar1 != 1) goto LAB_106d7a17c;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2);
    dVar4 = param_1;
    func_0x00010bf32fe0(param_2);
    func_0x00010c179f80(param_1 + dVar4,param_2);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
LAB_106d7a17c:
  lVar1 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar1);
  if (param_4 == 0) {
    func_0x00010bef1340(param_2);
    func_0x00010bdd4d40(param_2);
    func_0x00010bdd4d40(param_2);
    func_0x00010c0abb20(lVar1);
  }
  else {
    func_0x00010bdd4d40();
    func_0x00010c0abc20(lVar1);
  }
  _objc_release(lVar1);
  func_0x00010c162ce0(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8fa0(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bedfeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateShowcaseInteractionHistor_112595950);
  return;
}



/* Entry: 106d7a244; end: 106d7a267; -[SCCommerceShowcaseTracker _blizzardPageForView:] */

undefined8 FUN_106d7a244(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10ddee018 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 106d7a268; end: 106d7a337; -[SCCommerceShowcaseTracker _updateShowcaseInteractionHistory] */

void FUN_106d7a268(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d2628;
  _objc_alloc(PTR_PTR_1126d2628);
  func_0x00010bf32fe0(param_2);
  uVar4 = param_1;
  func_0x00010c2a4960(param_2);
  uVar5 = uVar4;
  func_0x00010c257ce0(param_2);
  lVar2 = param_2;
  func_0x00010c116460(param_2);
  lVar3 = param_2;
  func_0x00010c115fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054860(param_1,uVar4,uVar5,puVar1,param_3,lVar2,lVar3);
  _objc_release(lVar3);
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0e6780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d7a338; end: 106d7a39f; -[SCCommerceShowcaseTracker resetTracker] */

void FUN_106d7a338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c179f80(0);
  func_0x00010c2253a0(0,param_1);
  func_0x00010c20c2e0(0,param_1);
  func_0x00010c1e3ea0(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d7a3a0; end: 106d7a3ff; -[SCCommerceShowcaseTracker productsViewedWithMaxScrolled:metricType:] */

void FUN_106d7a3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bfcdee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acee0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d7a400; end: 106d7a44b; -[SCCommerceShowcaseTracker showcaseWebviewTime:] */

void FUN_106d7a400(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfcdee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af8e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d7a44c; end: 106d7a497; -[SCCommerceShowcaseTracker showcaseOverallSessionTime:] */

void FUN_106d7a44c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfcdee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af8c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d7a498; end: 106d7a49f; -[SCCommerceShowcaseTracker grapheneLogger] */

undefined8 FUN_106d7a498(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d7a4a0; end: 106d7a4cf; -[SCCommerceShowcaseTracker setGrapheneLogger:] */

void FUN_106d7a4a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106d7a4d0; end: 106d7a4e7; -[SCCommerceShowcaseTracker historyTracker] */

void FUN_106d7a4d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d7a4e8; end: 106d7a4f3; -[SCCommerceShowcaseTracker setHistoryTracker:] */

void FUN_106d7a4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106d7a4f4; end: 106d7a50b; -[SCCommerceShowcaseTracker eventLogger] */

void FUN_106d7a4f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d7a50c; end: 106d7a517; -[SCCommerceShowcaseTracker setEventLogger:] */

void FUN_106d7a50c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106d7a518; end: 106d7a51f; -[SCCommerceShowcaseTracker productInteractions] */

undefined8 FUN_106d7a518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d7a520; end: 106d7a54f; -[SCCommerceShowcaseTracker setProductInteractions:] */

void FUN_106d7a520(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106d7a550; end: 106d7a557; -[SCCommerceShowcaseTracker lastViewOpenDate] */

undefined8 FUN_106d7a550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d7a558; end: 106d7a587; -[SCCommerceShowcaseTracker setLastViewOpenDate:] */

void FUN_106d7a558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d7a588; end: 106d7a58f; -[SCCommerceShowcaseTracker productsViewed] */

undefined8 FUN_106d7a588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d7a590; end: 106d7a597; -[SCCommerceShowcaseTracker setProductsViewed:] */

void FUN_106d7a590(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106d7a598; end: 106d7a59f; -[SCCommerceShowcaseTracker catalogTimeSpent] */

undefined8 FUN_106d7a598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d7a5a0; end: 106d7a5a7; -[SCCommerceShowcaseTracker setCatalogTimeSpent:] */

void FUN_106d7a5a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 106d7a5a8; end: 106d7a5af; -[SCCommerceShowcaseTracker webviewTimeSpent] */

undefined8 FUN_106d7a5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d7a5b0; end: 106d7a5b7; -[SCCommerceShowcaseTracker setWebviewTimeSpent:] */

void FUN_106d7a5b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 106d7a5b8; end: 106d7a5bf; -[SCCommerceShowcaseTracker storeTimeSpent] */

undefined8 FUN_106d7a5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d7a5c0; end: 106d7a5c7; -[SCCommerceShowcaseTracker setStoreTimeSpent:] */

void FUN_106d7a5c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 106d7a5c8; end: 106d7a5cf; -[SCCommerceShowcaseTracker activeView] */

undefined8 FUN_106d7a5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d7a5d0; end: 106d7a5d7; -[SCCommerceShowcaseTracker setActiveView:] */

void FUN_106d7a5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106d7a5d8; end: 106d7a5df; -[SCCommerceShowcaseTracker viewOnDismissal] */

undefined8 FUN_106d7a5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106d7a5e0; end: 106d7a5e7; -[SCCommerceShowcaseTracker setViewOnDismissal:] */

void FUN_106d7a5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 106d7a5e8; end: 106d7a633; -[SCCommerceShowcaseTracker .cxx_destruct] */

void FUN_106d7a5e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d7a634; end: 106d7a697; -[SCShowcaseInteractionHistoryTracker init] */

undefined1 * FUN_106d7a634(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6d48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d7a698; end: 106d7a6c7; -[SCShowcaseInteractionHistoryTracker adShow:] */

void FUN_106d7a698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d7a6c8; end: 106d7a70b; -[SCShowcaseInteractionHistoryTracker onShowcaseTrackingUpdate:] */

void FUN_106d7a6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,*(undefined8 *)(param_1 + 0x10)
                       );
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d7a70c; end: 106d7a713; -[SCShowcaseInteractionHistoryTracker adTrackInfoForAdIdentifier:] */

void FUN_106d7a70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 106d7a714; end: 106d7a71b; -[SCShowcaseInteractionHistoryTracker invalidate] */

void FUN_106d7a714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106d7a71c; end: 106d7a74b; -[SCShowcaseInteractionHistoryTracker .cxx_destruct] */

void FUN_106d7a71c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d7a74c; end: 106d7a8b7;  */

undefined ** FUN_106d7a74c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  undefined *in_x5;
  undefined *in_x6;
  undefined *in_x7;
  undefined *puVar15;
  undefined *puVar16;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x29;
  undefined *unaff_x30;
  undefined *unaff_d8;
  undefined *unaff_d9;
  undefined *in_stack_00000000;
  undefined *in_stack_00000008;
  undefined *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined *in_stack_00000020;
  undefined *in_stack_00000028;
  undefined *in_stack_00000030;
  undefined *in_stack_00000038;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined *in_stack_00000050;
  undefined *in_stack_00000058;
  undefined *in_stack_00000060;
  undefined *in_stack_00000068;
  undefined *in_stack_00000070;
  undefined *in_stack_00000078;
  undefined *in_stack_00000080;
  undefined *in_stack_00000088;
  undefined *in_stack_00000090;
  undefined *in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = *(undefined **)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dba818;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dba838;
  puStack_70 = param_3;
  _objc_retain();
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dba858;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar3;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_70;
  pppuVar13 = &ppuStack_88;
  puVar14 = (undefined *)0x3;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar7 = &PTR____CFConstantStringClassReference_110dba7f8;
  func_0x000108543d00(&PTR____CFConstantStringClassReference_110dba7f8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(undefined **)PTR____stack_chk_guard_11034bdc0 == puStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  puVar6 = puStack_58;
  puVar5 = puStack_60;
  puVar4 = puStack_68;
  puVar3 = puStack_70;
  ppuVar2 = ppuStack_78;
  ppuVar1 = ppuStack_80;
  ppuVar7 = ppuStack_88;
  _objc_retain(ppuVar12);
  _objc_retain(pppuVar13);
  _objc_retain(puVar14);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uStack_90);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(unaff_d9);
  _objc_retain(unaff_d8);
  _objc_retain(unaff_x24);
  _objc_retain(unaff_x23);
  _objc_retain(unaff_x22);
  _objc_retain(unaff_x21);
  _objc_retain(unaff_x20);
  _objc_retain(unaff_x19);
  _objc_retain(unaff_x29);
  _objc_retain(unaff_x30);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain();
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000a0);
  puStack_100 = PTR_PTR_1126f6d50;
  ppuVar8 = &puStack_108;
  puStack_108 = puVar9;
  _objc_msgSendSuper2(ppuVar8,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined **)0x0) {
    _objc_retain(ppuVar12);
    puVar9 = ppuVar8[2];
    ppuVar8[2] = (undefined *)ppuVar12;
    _objc_release(puVar9);
    _objc_retain(pppuVar13);
    puVar9 = ppuVar8[3];
    ppuVar8[3] = (undefined *)pppuVar13;
    _objc_release(puVar9);
    _objc_retain(puVar14);
    puVar9 = ppuVar8[4];
    ppuVar8[4] = puVar14;
    _objc_release(puVar9);
    _objc_retain(in_x5);
    puVar9 = ppuVar8[5];
    ppuVar8[5] = in_x5;
    _objc_release(puVar9);
    _objc_retain(in_x6);
    puVar9 = ppuVar8[1];
    ppuVar8[1] = in_x6;
    _objc_release(puVar9);
    _objc_storeWeak(ppuVar8 + 0x15,uStack_90);
    _objc_retain(ppuVar7);
    puVar9 = ppuVar8[0x16];
    ppuVar8[0x16] = (undefined *)ppuVar7;
    _objc_release(puVar9);
    _objc_retain(ppuVar1);
    puVar9 = ppuVar8[0x17];
    ppuVar8[0x17] = (undefined *)ppuVar1;
    _objc_release(puVar9);
    _objc_retain(ppuVar2);
    puVar9 = ppuVar8[0xc];
    ppuVar8[0xc] = (undefined *)ppuVar2;
    _objc_release(puVar9);
    _objc_retain(puVar3);
    puVar9 = ppuVar8[0xf];
    ppuVar8[0xf] = puVar3;
    _objc_release(puVar9);
    _objc_retain(puVar4);
    puVar9 = ppuVar8[0x18];
    ppuVar8[0x18] = puVar4;
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = ppuVar8[0x19];
    ppuVar8[0x19] = puVar5;
    _objc_release(puVar9);
    _objc_retain(puVar6);
    puVar9 = ppuVar8[0x1a];
    ppuVar8[0x1a] = puVar6;
    _objc_release(puVar9);
    _objc_retain(unaff_d9);
    puVar9 = ppuVar8[0x1b];
    ppuVar8[0x1b] = unaff_d9;
    _objc_release(puVar9);
    _objc_retain(unaff_d8);
    puVar9 = ppuVar8[0x1c];
    ppuVar8[0x1c] = unaff_d8;
    _objc_release(puVar9);
    _objc_retain(unaff_x24);
    puVar9 = ppuVar8[6];
    ppuVar8[6] = unaff_x24;
    _objc_release(puVar9);
    _objc_retain(unaff_x23);
    puVar9 = ppuVar8[0x1d];
    ppuVar8[0x1d] = unaff_x23;
    _objc_release(puVar9);
    _objc_retain(unaff_x22);
    puVar9 = ppuVar8[0x21];
    ppuVar8[0x21] = unaff_x22;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000058);
    puVar9 = ppuVar8[0x20];
    ppuVar8[0x20] = in_stack_00000058;
    _objc_release(puVar9);
    _objc_retain(unaff_x21);
    puVar9 = ppuVar8[0x22];
    ppuVar8[0x22] = unaff_x21;
    _objc_release(puVar9);
    _objc_retain(unaff_x20);
    puVar9 = ppuVar8[0x26];
    ppuVar8[0x26] = unaff_x20;
    _objc_release(puVar9);
    _objc_retain(in_x7);
    puVar9 = ppuVar8[0x1e];
    ppuVar8[0x1e] = in_x7;
    _objc_release(puVar9);
    _objc_retain(unaff_x19);
    puVar9 = ppuVar8[0x28];
    ppuVar8[0x28] = unaff_x19;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000018);
    puVar9 = ppuVar8[0x29];
    ppuVar8[0x29] = in_stack_00000018;
    _objc_release(puVar9);
    _objc_retain(unaff_x30);
    puVar9 = ppuVar8[0x2a];
    ppuVar8[0x2a] = unaff_x30;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000000);
    puVar9 = ppuVar8[0x2b];
    ppuVar8[0x2b] = in_stack_00000000;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000008);
    puVar9 = ppuVar8[0x2c];
    ppuVar8[0x2c] = in_stack_00000008;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000010);
    puVar9 = ppuVar8[0x2d];
    ppuVar8[0x2d] = in_stack_00000010;
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126ae810;
    _objc_opt_new();
    puVar15 = ppuVar8[0x23];
    ppuVar8[0x23] = puVar9;
    _objc_release(puVar15);
    _objc_retain(in_stack_00000020);
    puVar9 = ppuVar8[0x2e];
    ppuVar8[0x2e] = in_stack_00000020;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000028);
    puVar9 = ppuVar8[0x2f];
    ppuVar8[0x2f] = in_stack_00000028;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000030);
    puVar9 = ppuVar8[0x30];
    ppuVar8[0x30] = in_stack_00000030;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000038);
    puVar9 = ppuVar8[0x31];
    ppuVar8[0x31] = in_stack_00000038;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000040);
    puVar9 = ppuVar8[0x32];
    ppuVar8[0x32] = in_stack_00000040;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000048);
    puVar9 = ppuVar8[0x33];
    ppuVar8[0x33] = in_stack_00000048;
    _objc_release(puVar9);
    puVar9 = in_stack_00000050;
    func_0x00010c2bd4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = ppuVar8[0x34];
    ppuVar8[0x34] = puVar15;
    _objc_release(puVar16);
    _objc_release(puVar9);
    _objc_retain(in_stack_00000060);
    puVar9 = ppuVar8[0x36];
    ppuVar8[0x36] = in_stack_00000060;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000068);
    puVar9 = ppuVar8[0x37];
    ppuVar8[0x37] = in_stack_00000068;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000070);
    puVar9 = ppuVar8[0x38];
    ppuVar8[0x38] = in_stack_00000070;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000078);
    puVar9 = ppuVar8[0x39];
    ppuVar8[0x39] = in_stack_00000078;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000080);
    puVar9 = ppuVar8[0x27];
    ppuVar8[0x27] = in_stack_00000080;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000088);
    puVar9 = ppuVar8[0x12];
    ppuVar8[0x12] = in_stack_00000088;
    _objc_release(puVar9);
    _objc_retain(in_stack_00000090);
    puVar9 = ppuVar8[0x1f];
    ppuVar8[0x1f] = in_stack_00000090;
    _objc_release(puVar9);
    puVar9 = in_stack_00000098;
    func_0x00010c0c9680();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = ppuVar8[0x3a];
    ppuVar8[0x3a] = puVar9;
    _objc_release(puVar15);
    puVar9 = in_stack_000000a0;
    func_0x00010c242b20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = ppuVar8[0x3b];
    ppuVar8[0x3b] = puVar9;
    _objc_release(puVar15);
    _objc_initWeak(auStack_110,ppuVar8);
    uVar10 = unaff_x29;
    func_0x00010bf75dc0(unaff_x29);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_118,auStack_110);
    uVar11 = uVar10;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    puVar9 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    puVar16 = ppuVar8[0x13];
    ppuVar8[0x13] = puVar9;
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_110);
  }
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(unaff_x30);
  _objc_release(unaff_x29);
  _objc_release(unaff_x19);
  _objc_release(unaff_x20);
  _objc_release(unaff_x21);
  _objc_release(unaff_x22);
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(unaff_d8);
  _objc_release(unaff_d9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(uStack_90);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(puVar14);
  _objc_release(pppuVar13);
  _objc_release(ppuVar12);
  return ppuVar8;
}



/* Entry: 106d7a8b8; end: 106d7b2b7; -[SCGalleryPreviewController initWithBlizzardLogger:cachingMediaManager:dataObjectContext:encryptedContentManager:userSession:memoriesEngagementLogger:previewScopeExposer:previewScopeBuilderServices:ucoMemoriesServices:spectaclesAuxiliaryContentServices:videoImportServices:snapDocManager:circumstanceEngine:complianceEngine:activeVideoPaths:previewVideoProviderServices:musicSelectionLoader:memoriesMediaRetriever:ucoServices:cameraConfiguration:stickerInjector:mediaImportEditorScopeExposer:applicationLifecycleEvents:previewABProvider:snapEditorTweakServices:snapEditorScopeExposer:snapEditorScopeServices:snapDocEditorFactory:snapchatterFetcher:memoriesExperimentService:memoriesSnapDocEncryptionManager:memoriesCloudFSServices:deckServices:checkInOptionFetcher:contentPostSendUpsellServices:ucoDataStore:userLocationPermissionManager:locationProvider:memoriesEncryptedDatabase:tinsel:creativeToolsABProvider:imageProcessRenderingSessionFactory:memoriesMergedDataSource:memoriesSaveServices:previewRewriteSnapRendererServices:] */

undefined8 *
FUN_106d7a8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain();
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  puStack_70 = PTR_PTR_1126f6d50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[6];
    puVar1[6] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_29;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_36;
    _objc_release(uVar2);
    uVar2 = param_37;
    func_0x00010c2bd4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x34];
    puVar1[0x34] = uVar6;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_45;
    _objc_release(uVar2);
    uVar2 = param_46;
    func_0x00010c0c9680();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x3a];
    puVar1[0x3a] = uVar2;
    _objc_release(uVar6);
    uVar2 = param_47;
    func_0x00010c242b20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x3b];
    puVar1[0x3b] = uVar2;
    _objc_release(uVar6);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = param_25;
    func_0x00010bf75dc0(param_25);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d7b2b8; end: 106d7b2e3;  */

void FUN_106d7b2b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d7b2e4; end: 106d7b577; -[SCGalleryPreviewController presentPreviewWithGalleryEntry:gallerySnap:cloudFile:assetCloudFiles:fromViewController:transitioningDelegate:animated:userContext:musicSelection:replyConfiguration:triggeringSection:] */

void FUN_106d7b2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_6;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    func_0x00010be7d8a0(param_1);
  }
  else {
    uVar4 = param_4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7d8a0(param_1);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be7d8a0();
  return;
}



/* Entry: 106d7b578; end: 106d7b62b; -[SCGalleryPreviewController presentPreviewWithGalleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:shouldShowSaveChangesPrompt:fromViewController:shouldShowPostStorySelection:transitioningDelegate:animated:userContext:snapDoc:preselectedPreviewTool:musicSelection:shouldUseRegularPreview:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:replyConfiguration:triggeringSection:] */

void FUN_106d7b578(void)

{
  func_0x00010be7d8a0();
  return;
}



/* Entry: 106d7b62c; end: 106d7b8ab; -[SCGalleryPreviewController presentPreviewWithSnapDoc:shouldShowSaveChangesPrompt:fromViewController:shouldShowPostStorySelection:quickCutConfig:transitioningDelegate:animated:userContext:preselectedPreviewTool:snapPageSource:triggeringSection:] */

void FUN_106d7b62c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    _objc_retain(param_7);
    func_0x00010be7ffe0(param_1);
    *(undefined8 *)(param_1 + 0x38) = param_9;
    puVar1 = PTR_PTR_1126afee0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3d6c04);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004180(puVar1,param_2,puVar2,*(undefined8 *)(param_1 + 200));
    _objc_release(puVar2);
    *(undefined1 *)(param_1 + 0x40) = 1;
    func_0x00010c201280(puVar1,param_2,param_6);
    func_0x00010c1e0c00(puVar1,param_2,param_11);
    lVar3 = param_1;
    func_0x00010be42f00(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    func_0x00010c167e00(puVar1,param_2,lVar3);
    func_0x00010c204fa0(puVar1,param_2,param_12);
    func_0x00010c1e69c0(puVar1,param_2,param_7);
    _objc_release(param_7);
    func_0x0001008e4748();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbc40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c242400(puVar1);
    func_0x00010c2b9b80(param_7,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010bf21f60(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f520(puVar1,param_2,uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106d7b8ac;
    puStack_b0 = &UNK_1108ba0d8;
    lStack_a8 = param_1;
    puStack_a0 = puVar1;
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(param_8);
    uStack_80 = param_9;
    uStack_78 = param_10;
    uStack_90 = param_8;
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_c8);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(puStack_a0);
    _objc_release(puVar1);
    _objc_release(param_7);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d7b8ac; end: 106d7b8e7;  */

void FUN_106d7b8ac(long param_1,undefined8 param_2)

{
  func_0x00010be7da00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),0,
                      *(undefined1 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106d7b8e8; end: 106d7bc7f; -[SCGalleryPreviewController presentPreviewWithSnapDoc:shouldShowSaveChangesPrompt:fromViewController:shouldShowPostStorySelection:replyConfiguration:musicSelection:transitioningDelegate:animated:userContext:preselectedPreviewTool:snapPageSource:triggeringSection:] */

void FUN_106d7b8e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    _objc_retain(param_8);
    func_0x00010be7ffe0(param_1);
    *(undefined8 *)(param_1 + 0x38) = param_10;
    puVar1 = PTR_PTR_1126afee0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3d6cfb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004180(puVar1,param_2,puVar2,*(undefined8 *)(param_1 + 200));
    _objc_release(puVar2);
    *(undefined1 *)(param_1 + 0x40) = 0;
    func_0x00010c201280(puVar1,param_2,param_6);
    func_0x00010c1e0c00(puVar1,param_2,param_12);
    lVar3 = param_1;
    func_0x00010be42f00(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    func_0x00010c167e00(puVar1,param_2,lVar3);
    func_0x00010c204fa0(puVar1,param_2,param_13);
    if (param_11 == 0xe) {
      puVar2 = PTR_PTR_1126b1010;
      _objc_alloc(PTR_PTR_1126b1010);
      func_0x00010c02ec80();
      func_0x00010c1eb140(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010c131e40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165620();
    }
    else {
      puVar2 = param_7;
      func_0x00010c2720a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb140(puVar1,param_2,puVar2);
    }
    _objc_release(puVar2);
    func_0x00010c1c9fc0(puVar1,param_2,param_8);
    _objc_release(param_8);
    func_0x00010bdceb40(param_1,param_2,param_7,puVar1);
    uVar5 = 0x22;
    if (param_11 != 0xf) {
      uVar5 = 7;
    }
    func_0x00010c2056c0(puVar1,param_2,uVar5);
    puVar2 = PTR_PTR_1126b5fa8;
    _objc_alloc_init(PTR_PTR_1126b5fa8);
    func_0x00010c205d00(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c2440e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e120();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c2440e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2012e0();
    _objc_release(puVar2);
    func_0x0001008e4748();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbc40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c242400(puVar1);
    func_0x00010c2b9b80(puVar2,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f520(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106d7bc80;
    puStack_98 = &UNK_110891e80;
    lStack_90 = param_1;
    _objc_retain(param_3);
    uStack_88 = param_3;
    puStack_80 = puVar1;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_9);
    uStack_70 = param_9;
    lStack_68 = param_11;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_b0);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


