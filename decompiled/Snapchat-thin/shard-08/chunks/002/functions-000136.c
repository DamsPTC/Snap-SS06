/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e61b2c; end: 105e61c3b;  */

void FUN_105e61b2c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c067fc0();
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  if (param_2 < 4) {
    if (param_2 < 2) {
      if ((param_2 != 0) && (param_2 != 1)) goto LAB_105e61c04;
    }
    else if ((param_2 != 2) && (param_2 != 3)) goto LAB_105e61c04;
LAB_105e61bf0:
    func_0x00010c1a9320(puVar1);
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 4) goto LAB_105e61bf0;
      if (param_2 != 5) goto LAB_105e61c04;
    }
    else if (param_2 != 6) {
      if (param_2 == 7) {
        func_0x00010c225420(puVar1);
      }
      goto LAB_105e61c04;
    }
    func_0x00010c189d40(puVar1);
  }
LAB_105e61c04:
  puVar2 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298;
  func_0x00010c09e860(PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e61c3c; end: 105e61d07;  */

void FUN_105e61c3c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105e61d08;
  puStack_58 = &UNK_1108484f8;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  uStack_38 = param_1;
  _objc_copyWeak(auStack_40,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_50);
  return;
}



/* Entry: 105e61d08; end: 105e61d93;  */

void FUN_105e61d08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar1,param_2,(long)*(double *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf83180();
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e61d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    return;
  }
  return;
}



/* Entry: 105e61d94; end: 105e61dc7;  */

void FUN_105e61d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentInUIContainer__112620bc8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105e61dc8; end: 105e61e87;  */

void FUN_105e61dc8(long param_1)

{
  undefined8 in_x7;
  
  func_0x00010bf62820();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_x7;
  return;
}



/* Entry: 105e61e88; end: 105e620bb; -[SCReplyRecipientObservableRepository initWithSnapchatterObservableRepository:groupObservableRepository:lastInteractionDataService:currentUserId:performer:timeProvider:replySectionMaxTimeThreshold:replyGroupsDisabled:] */

undefined8 *
FUN_105e61e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ed5c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    puVar1[5] = param_9;
    uVar2 = param_7;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = param_10;
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e620bc; end: 105e620fb;  */

void FUN_105e620bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be87140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e620fc; end: 105e62143; -[SCReplyRecipientObservableRepository recipientsToReplyObservable] */

void FUN_105e620fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e62144; end: 105e62417; -[SCReplyRecipientObservableRepository _recipientsToReplyBehaviorSubject] */

void FUN_105e62144(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c1225a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c089160();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c089160();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0ee960();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_retain(uVar2);
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puVar13 = puVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar13);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    puVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x0001006decbc(puVar4,puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar13);
    puVar1 = puVar13;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    if (puVar1 == (undefined *)0x0) {
      ppuVar21 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar21 = &PTR____CFConstantStringClassReference_110daafd8;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(puVar13);
          }
          ppuVar22 = *(undefined ***)((long)puVar20 * 8);
          ppuVar16 = ppuVar22;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar16;
          func_0x00010c0720c0();
          _objc_release(ppuVar16);
          if ((int)ppuVar17 != 0) {
            func_0x00010bf85d80(ppuVar22);
            _objc_retainAutoreleasedReturnValue();
            ppuVar21 = ppuVar22;
            goto LAB_105e625bc;
          }
          puVar20 = puVar20 + 1;
        } while (puVar1 != puVar20);
        puVar1 = puVar13;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
LAB_105e625bc:
    _objc_release(puVar13);
    puVar1 = puVar13;
    puVar20 = puVar14;
    FUN_105e63128(puVar13,puVar14,puVar15,*(undefined8 *)(puVar5 + 0x20),ppuVar21,
                  *(undefined8 *)(puVar5 + 0x28),*(undefined8 *)(puVar5 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar21);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_next__112614028,puVar20);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e62418; end: 105e62663;  */

void FUN_105e62418(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x0001006decbc(lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  lVar6 = lVar3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  if (lVar6 == 0) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar12 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        ppuVar13 = *(undefined ***)(lVar11 * 8);
        ppuVar7 = ppuVar13;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c0720c0();
        _objc_release(ppuVar7);
        if ((int)ppuVar8 != 0) {
          func_0x00010bf85d80(ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar13;
          goto LAB_105e625bc;
        }
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
LAB_105e625bc:
  _objc_release(lVar3);
  lVar9 = lVar3;
  lVar6 = lVar4;
  FUN_105e63128(lVar3,lVar4,lVar5,*(undefined8 *)(param_1 + 0x20),ppuVar12,
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_next__112614028,lVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 105e62664; end: 105e6266f;  */

void FUN_105e62664(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 105e62670; end: 105e626e7; -[SCReplyRecipientObservableRepository .cxx_destruct] */

void FUN_105e62670(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e626e8; end: 105e62787;  */

ulong FUN_105e626e8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  func_0x00010c08a160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c08a160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if ((param_1 == 0) || (uVar1 == 0)) {
    uVar2 = (ulong)(uVar1 != 0);
    if (param_1 != 0) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf433a0(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105e62788; end: 105e6289b;  */

bool FUN_105e62788(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08a160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c08a0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c088500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (((lVar2 == 0) || (func_0x00010c26f380(param_3), (double)param_4 < param_1 / 60.0)) ||
     ((lVar3 != 0 && (lVar5 = lVar2, func_0x00010bf433a0(), lVar5 != 1)))) {
    bVar1 = false;
  }
  else if (lVar4 == 0) {
    bVar1 = true;
  }
  else {
    lVar5 = lVar2;
    func_0x00010bf433a0(lVar2);
    bVar1 = lVar5 == 1;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105e6289c; end: 105e62a17;  */

void FUN_105e6289c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105e62a18;
  puStack_70 = &UNK_1108ed610;
  _objc_retain(param_2);
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x0001006372a4(param_1,&puStack_88);
  _objc_release(param_1);
  _objc_retain(param_2);
  uVar2 = uVar1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = uVar2;
  if (uVar3 < 0x4c) {
    _objc_retain(uVar2);
  }
  else {
    func_0x00010c25e980(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e62a18; end: 105e62bfb;  */

ulong FUN_105e62a18(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar3 != 0) {
    uVar4 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((uVar1 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        puVar2 = PTR_PTR_1126b2970;
        _objc_opt_class(PTR_PTR_1126b2970);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar3;
          FUN_105e62788(uVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
          goto LAB_105e62afc;
        }
      }
    }
  }
  uVar4 = 0;
LAB_105e62afc:
  _objc_release(uVar3);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105e62bfc; end: 105e62d77;  */

void FUN_105e62bfc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105e62d78;
  puStack_70 = &UNK_1108ed670;
  _objc_retain(param_2);
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x0001006372a4(param_1,&puStack_88);
  _objc_release(param_1);
  _objc_retain(param_2);
  uVar2 = uVar1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = uVar2;
  if (uVar3 < 0x4c) {
    _objc_retain(uVar2);
  }
  else {
    func_0x00010c25e980(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e62d78; end: 105e62f37;  */

undefined8 FUN_105e62d78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if ((lVar3 == 0) || (uVar2 = param_2, func_0x00010c0dca60(), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    FUN_105e62788(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105e62f38; end: 105e6304f;  */

void FUN_105e62f38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e63050;
  uStack_30 = 0x105e63060;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e63050; end: 105e63067;  */

void FUN_105e63050(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e63068; end: 105e63127;  */

void FUN_105e63068(long param_1,undefined8 param_2)

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



/* Entry: 105e63128; end: 105e632e7;  */

void FUN_105e63128(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_2);
  FUN_105e6289c(param_1,param_3,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_105e62bfc(param_2,param_3,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_2);
  uVar2 = param_1;
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_1108ed6d0);
  uVar3 = uVar1;
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1108ed6f0);
  uVar4 = uVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  uVar7 = uVar5;
  if (uVar6 < 0x4c) {
    _objc_retain(uVar5);
  }
  else {
    func_0x00010c25e980(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105e632e8; end: 105e63307;  */

void FUN_105e632e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5438,PTR_s_snapchatterWithSnapchatter_story_11266ec48,param_2,0,0,0,0);
  return;
}



/* Entry: 105e63308; end: 105e63363;  */

void FUN_105e63308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5438;
  _objc_retain(param_2);
  func_0x00010c07be00(param_2);
  func_0x00010c15a700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e63364; end: 105e6343b;  */

undefined8 FUN_105e63364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  FUN_105e62f38(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  FUN_105e62f38(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  FUN_105e626e8(uVar4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105e6343c; end: 105e634af; -[SCSendToTooltipsServices initWithSendToTooltipsService:] */

undefined1 * FUN_105e6343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed5c8;
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



/* Entry: 105e634b0; end: 105e634b7; -[SCSendToTooltipsServices sendToTooltipsService] */

undefined8 FUN_105e634b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e634b8; end: 105e634c3; -[SCSendToTooltipsServices .cxx_destruct] */

void FUN_105e634b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e634c4; end: 105e634cf; -[SCFeatureSettingsService hasShouldOverrideRemixToggleBehavior] */

void FUN_105e634c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e2ca58);
  return;
}



/* Entry: 105e634d0; end: 105e634db; -[SCFeatureSettingsService shouldOverrideRemixToggleBehaviorServerParam] */

undefined ** FUN_105e634d0(void)

{
  return &PTR____CFConstantStringClassReference_110e2ca58;
}



/* Entry: 105e634dc; end: 105e634eb; -[SCFeatureSettingsService setShouldOverrideRemixToggleBehavior:] */

void FUN_105e634dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e2ca58,param_3);
  return;
}



/* Entry: 105e634ec; end: 105e634f3; -[SCFeatureSettingsService remix_spotlight_toggle_client_value:] */

undefined * FUN_105e634ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105e634f4; end: 105e634fb; -[SCFeatureSettingsService remix_spotlight_toggle_server_value:] */

void FUN_105e634f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105e634fc; end: 105e6350b; -[SCFeatureSettingsService shouldOverrideRemixToggleBehavior] */

void FUN_105e634fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e2ca58,0);
  return;
}



/* Entry: 105e6350c; end: 105e63757; -[SCSendToDataServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6350c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  lVar3 = param_1 + _DAT_112738214;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c246c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112738218;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010bfb1c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c52a8;
  _objc_alloc(PTR_PTR_1126c52a8);
  func_0x00010c021840();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273821c));
  puVar8 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 105e63758; end: 105e637cf;  */

void FUN_105e63758(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be470e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e637d0; end: 105e6395b; -[SCSendToDataServicesEntryPoint _lastSnapDataCoordinatorWithTimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e637d0(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar9 = (long)_DAT_112738220;
  _objc_retain(param_3);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar2 = PTR_PTR_1126c52b0;
  _objc_alloc(PTR_PTR_1126c52b0);
  lVar9 = param_1 + _DAT_112738224;
  _objc_loadWeakRetained();
  lVar3 = lVar9;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112738228;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273822c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112738230;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038280(puVar2,param_2,lVar1,param_3,lVar3,lVar5,lVar7,lVar8);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e6395c; end: 105e639eb; -[SCSendToDataServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e6395c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738228);
  _objc_destroyWeak(param_1 + _DAT_11273822c);
  _objc_destroyWeak(param_1 + _DAT_112738230);
  _objc_storeStrong(param_1 + _DAT_11273821c,0);
  _objc_destroyWeak(param_1 + _DAT_112738224);
  _objc_destroyWeak(param_1 + _DAT_112738218);
  _objc_destroyWeak(param_1 + _DAT_112738214);
  _objc_destroyWeak(param_1 + _DAT_112738220);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738234);
  return;
}



/* Entry: 105e639ec; end: 105e63a8f;  */

void FUN_105e639ec(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108424ed4();
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (((int)uVar1 != 0) &&
     (puVar2 = param_1, func_0x00010bf529e0(), puVar3 = PTR____NSArray0__struct_11034ab48,
     puVar2 != (undefined *)0x0)) {
    puVar3 = param_1;
    func_0x0001006372a4(param_1,&PTR___NSConcreteGlobalBlock_1108ed770);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e63a90; end: 105e63b37;  */

ulong FUN_105e63a90(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b3568;
    _objc_opt_class(PTR_PTR_1126b3568);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = param_2, _objc_opt_respondsToSelector(param_2,PTR_s_recipient_1126264c0),
       (uVar3 & 1) != 0)) {
      uVar2 = param_2;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = param_2;
        func_0x000108425a5c();
        if ((uVar3 & 1) == 0) {
          uVar3 = param_2;
          func_0x000108425b30(param_2);
        }
        else {
          uVar3 = 1;
        }
      }
      goto LAB_105e63b10;
    }
  }
  uVar3 = 0;
LAB_105e63b10:
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105e63b38; end: 105e63d07; -[SCSendToLastSnapDataCoordinatorImpl initWithPreferences:timeProvider:snapchattersDataFetcher:valdiRuntimeProvider:circumstanceEngine:sendToExperimentConfiguration:] */

undefined8 *
FUN_105e63b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ed5d0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x000108f3dda8();
    *(char *)(puVar1 + 4) = (char)uVar2;
    uVar2 = param_7;
    func_0x000108f3ddbc();
    *(char *)((long)puVar1 + 0x21) = (char)uVar2;
    uVar2 = param_7;
    func_0x000108f3ddf8();
    puVar1[5] = uVar2;
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    puVar1[8] = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e63d08; end: 105e63d37;  */

void FUN_105e63d08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f3e244(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105e63d38; end: 105e63dbf; -[SCSendToLastSnapDataCoordinatorImpl shouldShowLastSnapSection] */

bool FUN_105e63d38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_105e639ec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010bf529e0(lVar3);
  _objc_release(lVar3);
  return lVar2 != 0;
}



/* Entry: 105e63dc0; end: 105e63e47; -[SCSendToLastSnapDataCoordinatorImpl lastSnapTitle] */

void FUN_105e63dc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105e639ec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108424a10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e63e48; end: 105e63ecf; -[SCSendToLastSnapDataCoordinatorImpl lastSnapItems] */

void FUN_105e63e48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105e639ec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010c1b8860(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e63ed0; end: 105e63fd3; -[SCSendToLastSnapDataCoordinatorImpl lastSnapPreselectionItems] */

void FUN_105e63ed0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (*(char *)(param_1 + 0x21) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108424fc0();
    _objc_release(uVar1);
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if ((int)uVar2 != 0) {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c089fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010bf529e0();
      puVar7 = PTR____NSArray0__struct_11034ab48;
      if (lVar3 != 0) {
        puVar5 = *(undefined **)(param_1 + 8);
        func_0x00010c269d40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c089fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        FUN_105e639ec();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105e63fd4; end: 105e64063; -[SCSendToLastSnapDataCoordinatorImpl setLastSnapInfoWithSelectedItems:] */

void FUN_105e63fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar2 = param_3;
  FUN_105e639ec(param_3,uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec40a0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108425168();
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e64064; end: 105e6432b; -[SCSendToLastSnapDataCoordinatorImpl _storeLastSnapItemsInComposer:] */

void FUN_105e64064(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if (((int)uVar10 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(ulong *)(lVar9 * 8);
        uVar4 = uVar11;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = uVar11;
        func_0x000108425a5c();
        if (((uVar4 & 1) != 0) || (func_0x000108425b30(), (int)uVar11 != 0)) {
          puVar6 = PTR_PTR_1126c52b8;
          _objc_alloc();
          uVar4 = uVar5;
          func_0x00010c122b80(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b1a0();
          _objc_release(uVar4);
          func_0x00010befa120(puVar3);
          _objc_release(puVar6);
        }
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar6 = puVar3;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar10);
      func_0x00010bde3da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_retain(uVar10);
      func_0x00010c297280(param_1);
      _objc_release(param_1);
      _objc_release(uVar10);
      _objc_release(puVar3);
      _objc_release(uVar10);
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x00010c257960();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    (**(code **)(param_2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar2 = lVar8;
    func_0x00010c272160(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c25ff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  return;
}



/* Entry: 105e6432c; end: 105e643f7;  */

void FUN_105e6432c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    func_0x00010c257960();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    (**(code **)(param_2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar2 = lVar1;
    func_0x00010c272160(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25ff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105e643f8; end: 105e643fb;  */

void FUN_105e643f8(void)

{
  return;
}



/* Entry: 105e643fc; end: 105e64577; -[SCSendToLastSnapDataCoordinatorImpl _composerLastSnapDataStore] */

void FUN_105e643fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = *(undefined **)(param_1 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105e644f4;
    puStack_40 = &UNK_110847628;
    _objc_retain(puVar2);
    puStack_38 = puVar2;
    func_0x00010bfc69a0(uVar3,param_2,&puStack_58);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    puVar1 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e64578; end: 105e645e3; -[SCSendToLastSnapDataCoordinatorImpl .cxx_destruct] */

void FUN_105e64578(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e645e4; end: 105e64687; -[SCSendToSnapchatterObservableRepositoryImpl initWithSortableSnapchatterObservableRepository:firstSnapSectionProvider:] */

undefined1 *
FUN_105e645e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed5d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e64688; end: 105e646f3; -[SCSendToSnapchatterObservableRepositoryImpl firstSnapSectionSnapchattersObservableWithQueue:] */

void FUN_105e64688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb1c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e646f4; end: 105e6481b; -[SCSendToSnapchatterObservableRepositoryImpl allFriendsObservableWithQueue:] */

void FUN_105e646f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22f240();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf000c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    _objc_release(uVar3);
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105e6481c;
    puStack_50 = &UNK_110854bd0;
    _objc_retain(uVar4);
    uVar2 = uVar1;
    uStack_48 = uVar4;
    func_0x00010c0b8600(uVar1,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_48);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar1 = uVar2;
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e6481c; end: 105e64897;  */

void FUN_105e6481c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e64898;
  puStack_30 = &UNK_1108ed7e0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105e64898; end: 105e6491b;  */

uint FUN_105e64898(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c22fbe0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105e6491c; end: 105e649f3; -[SCSendToSnapchatterObservableRepositoryImpl friendsObservableForLetterKey:queue:] */

void FUN_105e6491c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c2442c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105e649f4;
  puStack_40 = &UNK_1108b2f88;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e649f4; end: 105e64a47;  */

void FUN_105e649f4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  _objc_retain(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e64a48; end: 105e64a93; -[SCSendToSnapchatterObservableRepositoryImpl snapchatterAToZMapObservableWithQueue:] */

void FUN_105e64a48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf000c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e64a94; end: 105e64a9b;  */

undefined ** FUN_105e64a94(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c246f60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar4 == (undefined **)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2);
        _objc_release(puVar5);
      }
      ppuVar4 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(ppuVar4);
      _objc_release(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e2ca98;
}



/* Entry: 105e64a9c; end: 105e64acb; -[SCSendToSnapchatterObservableRepositoryImpl .cxx_destruct] */

void FUN_105e64a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e64acc; end: 105e64b3f; -[SCSendToFirstSnapSectionServices initWithFirstSnapSectionProvider:] */

undefined1 * FUN_105e64acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed5e0;
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



/* Entry: 105e64b40; end: 105e64b47; -[SCSendToFirstSnapSectionServices firstSnapSectionProvider] */

undefined8 FUN_105e64b40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e64b48; end: 105e64b53; -[SCSendToFirstSnapSectionServices .cxx_destruct] */

void FUN_105e64b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e64b54; end: 105e64bf7; -[SCSendToDataServices initWithLastSnapDataCoordinator:sendToSnapchatterObservableRepository:] */

undefined1 *
FUN_105e64b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed5e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e64bf8; end: 105e64bff; -[SCSendToDataServices lastSnapDataCoordinator] */

undefined8 FUN_105e64bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e64c00; end: 105e64c07; -[SCSendToDataServices sendToSnapchatterObservableRepository] */

undefined8 FUN_105e64c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e64c08; end: 105e64c37; -[SCSendToDataServices .cxx_destruct] */

void FUN_105e64c08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e64c38; end: 105e64da7;  */

ulong FUN_105e64c38(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c246f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c246f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = (ulong)(uVar1 != 0 || uVar2 != 0);
  if ((uVar1 != 0) && (uVar5 = 0xffffffffffffffff, uVar2 != 0)) {
    uVar5 = uVar1;
    func_0x00010c0720c0();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if (((uVar5 & 1) == 0) && ((uVar3 & 1) != 0)) {
      uVar5 = 0xffffffffffffffff;
    }
    else if ((((uint)uVar5 ^ 1 | (uint)uVar3) & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar1;
      func_0x00010c09e740();
      if (uVar5 == 0) {
        uVar3 = param_2;
        func_0x00010c1499e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c1499e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = (ulong)(uVar3 != 0 || uVar4 != 0);
        if ((uVar3 != 0) && (uVar5 = 0xffffffffffffffff, uVar4 != 0)) {
          uVar5 = uVar3;
          func_0x00010c09e440(uVar3);
        }
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 105e64da8; end: 105e64f5f;  */

undefined ** FUN_105e64da8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
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
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        func_0x00010c246f60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar1;
        func_0x00010c0e00e0(ppuVar1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar3 == (undefined **)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar1,param_2,puVar4,uVar5);
          _objc_release(puVar4);
        }
        ppuVar3 = ppuVar1;
        func_0x00010c0e00e0(ppuVar1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(ppuVar3);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e2ca98;
}



/* Entry: 105e64f60; end: 105e64f6b; +[SCCCreateSendToLastSnapDataStore modulePath] */

undefined ** FUN_105e64f60(void)

{
  return &PTR____CFConstantStringClassReference_110e2ca98;
}



/* Entry: 105e64f6c; end: 105e64f73; +[SCCCreateSendToLastSnapDataStore asyncStrictMode] */

undefined8 FUN_105e64f6c(void)

{
  return 0;
}



/* Entry: 105e64f74; end: 105e64fb7; -[SCCCreateSendToLastSnapDataStore createComposerLastSnapDataStore] */

void FUN_105e64f74(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e64fb8; end: 105e65067; +[SCCCreateSendToLastSnapDataStore invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_105e64fb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105e65068;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  func_0x000105e65770();
  _objc_release(param_3);
  return;
}



/* Entry: 105e65068; end: 105e650ef;  */

void FUN_105e65068(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c52c0;
  func_0x00010bfbc0e0(PTR_PTR_1126c52c0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e650f0; end: 105e65113; +[SCCCreateSendToLastSnapDataStore valdiMarshallableObjectDescriptor] */

void FUN_105e650f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ed890;
  param_1[1] = &PTR_DAT_1108ed8c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105e65114; end: 105e6512f; +[SCCSendToNativeOnboardingPresenter valdiMarshallableObjectDescriptor] */

void FUN_105e65114(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ed918;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_1108ed8d0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65130; end: 105e65157;  */

undefined8 FUN_105e65130(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105e65158; end: 105e651a7;  */

void FUN_105e65158(void)

{
  func_0x000105e65778();
  func_0x000105e65760();
  func_0x000105e65738(FUN_105e65600);
  func_0x000105e65780();
  func_0x000105e65754();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e651a8; end: 105e651df;  */

undefined8 FUN_105e651a8(void)

{
  code *extraout_x8;
  
  func_0x000105e65790();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105e651e0; end: 105e6522f;  */

void FUN_105e651e0(void)

{
  func_0x000105e65778();
  func_0x000105e65760();
  func_0x000105e65738(0x105e6562c);
  func_0x000105e65780();
  func_0x000105e65754();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e65230; end: 105e65253; +[SCCSendToPageCallbacks valdiMarshallableObjectDescriptor] */

void FUN_105e65230(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ed9f0;
  param_1[1] = &PTR_DAT_1108edb88;
  param_1[2] = &PTR_DAT_1108ed978;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65254; end: 105e6527b;  */

undefined8 FUN_105e65254(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000105e65790();
  (*extraout_x8)(*(undefined8 *)(param_2 + 0x18));
  return 0;
}



/* Entry: 105e6527c; end: 105e652cb;  */

void FUN_105e6527c(void)

{
  func_0x000105e65778();
  func_0x000105e65760();
  func_0x000105e65738(0x105e65668);
  func_0x000105e65780();
  func_0x000105e65754();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e652cc; end: 105e652ef;  */

undefined8 FUN_105e652cc(void)

{
  code *extraout_x8;
  
  func_0x000105e65790();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105e652f0; end: 105e6533f;  */

void FUN_105e652f0(void)

{
  func_0x000105e65778();
  func_0x000105e65760();
  func_0x000105e65738(0x105e65694);
  func_0x000105e65780();
  func_0x000105e65754();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e65340; end: 105e65367;  */

undefined8 FUN_105e65340(void)

{
  code *extraout_x8;
  
  func_0x000105e65790();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105e65368; end: 105e653b7;  */

void FUN_105e65368(void)

{
  func_0x000105e65778();
  func_0x000105e65760();
  func_0x000105e65738(0x105e656c0);
  func_0x000105e65780();
  func_0x000105e65754();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e653b8; end: 105e653e3;  */

undefined8 FUN_105e653b8(void)

{
  code *extraout_x8;
  
  func_0x000105e65790();
  (*extraout_x8)();
  return 0;
}



/* Entry: 105e653e4; end: 105e65433;  */

void FUN_105e653e4(void)

{
  func_0x000105e65778();
  func_0x000105e65760();
  func_0x000105e65738(0x105e656ec);
  func_0x000105e65780();
  func_0x000105e65754();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e65434; end: 105e65447; +[SCCSendToPostAttribution valdiMarshallableObjectDescriptor] */

void FUN_105e65434(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108edbe8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65448; end: 105e6545b; +[SCCSendToPostMetadata valdiMarshallableObjectDescriptor] */

void FUN_105e65448(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108edc48;
  param_1[1] = &PTR_DAT_1108edcc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e6545c; end: 105e6546f; +[SCCSendToReplyDataStore valdiMarshallableObjectDescriptor] */

void FUN_105e6545c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108edce0;
  param_1[1] = &PTR_s_SCBridgeObservable_1108edd10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65470; end: 105e65483; +[SCCSendToRootDependencies valdiMarshallableObjectDescriptor] */

void FUN_105e65470(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1210;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65484; end: 105e65497; +[SCCSendToSessionVisibilityLogger valdiMarshallableObjectDescriptor] */

void FUN_105e65484(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108edd28;
  param_1[1] = &PTR_DAT_1108edd58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65498; end: 105e654ab; +[SCCSendToSessionVisibilityPayload valdiMarshallableObjectDescriptor] */

void FUN_105e65498(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108edd68;
  param_1[1] = &PTR_s_SCCSendToSessionVisibilitySelect_1108edde0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e654ac; end: 105e654bf; +[SCCSendToSessionVisibilityResultOnScreen valdiMarshallableObjectDescriptor] */

void FUN_105e654ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108eddf8;
  param_1[1] = &PTR_DAT_1108edea0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e654c0; end: 105e654d3; +[SCCSendToSessionVisibilitySelectionAction valdiMarshallableObjectDescriptor] */

void FUN_105e654c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108edeb0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e654d4; end: 105e654e7; +[SCCSendToShareDestinationFetcher valdiMarshallableObjectDescriptor] */

void FUN_105e654d4(undefined8 *param_1)

{
  *param_1 = &PTR_s_fetch_1108edf40;
  param_1[1] = &PTR_s_SCBridgeObservable_1108edf70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


