/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7ca370; end: 10b7ca4a3; -[SCTemporaryDatastore _executeCompletionBlock:withKey:object:] */

void FUN_10b7ca370(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7ca4a4; end: 10b7ca4e7;  */

void FUN_10b7ca4a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),lVar1,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7ca4e8; end: 10b7ca5c3; -[SCTemporaryDatastore _executeCompletionBlock:] */

void FUN_10b7ca4e8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b7ca5c4; end: 10b7ca603;  */

void FUN_10b7ca5c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7ca604; end: 10b7ca85f; -[SCTemporaryDatastore setObject:dataEncoding:forKey:expiration:block:] */

void FUN_10b7ca604(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 == 0) || (param_5 == 0)) {
    (**(code **)(param_7 + 0x10))(param_7,param_1,param_5,0);
    goto LAB_10b7ca7fc;
  }
  lVar1 = param_1;
  func_0x00010be15940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (param_4 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    if (uVar2 == 0) goto LAB_10b7ca7d4;
LAB_10b7ca6a8:
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar2);
    _objc_retain(lVar1);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    uVar2 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) goto LAB_10b7ca6a8;
LAB_10b7ca7d4:
    (**(code **)(param_7 + 0x10))(param_7,param_1,param_5,0);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
LAB_10b7ca7fc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7ca860; end: 10b7ca9b7;  */

void FUN_10b7ca860(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c14e020(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),1);
    if ((int)uVar2 == 0) {
      func_0x00010be0b980(lVar1,param_2,*(undefined8 *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x30),0);
    }
    else {
      puVar3 = PTR_PTR_1126e13f8;
      _objc_alloc_init(PTR_PTR_1126e13f8);
      func_0x00010c1b6b40();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1b7000(puVar3,param_2,*(undefined8 *)(lVar1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (*(long *)(param_1 + 0x38) == 0) {
        dVar5 = (double)NEON_ucvtf(*(undefined8 *)(lVar1 + 0x48));
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf65600(dVar5 * 24.0 * 60.0 * 60.0,PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c198b80(puVar3,param_2,puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      else {
        func_0x00010c198b80(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar4 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x30),param_2,puVar4,
                          *(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar4);
      func_0x00010be18240(lVar1,param_2,*(undefined8 *)(param_1 + 0x30));
      func_0x00010be0b980(lVar1,param_2,*(undefined8 *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7ca9b8; end: 10b7ca9cb; -[SCTemporaryDatastore objectForKey:dataDecoding:block:] */

void FUN_10b7ca9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f8,param_3,param_4,0,param_5,1)
  ;
  return;
}



/* Entry: 10b7ca9cc; end: 10b7ca9d3; -[SCTemporaryDatastore objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:] */

void FUN_10b7ca9cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f8);
  return;
}



/* Entry: 10b7ca9d4; end: 10b7cab6b; -[SCTemporaryDatastore objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:] */

void FUN_10b7ca9d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,param_2,0,0);
  }
  else {
    _objc_initWeak(auStack_68,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_70 = param_8;
    _objc_retain(param_7);
    uStack_78 = param_1;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7cab6c; end: 10b7cad23;  */

void FUN_10b7cab6c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be15940(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_2 + 0x30);
    if (puVar4 != (undefined *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar4,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
    }
    if (puVar3 == (undefined *)0x0) {
      func_0x00010be0b980(lVar1);
    }
    else {
      lVar5 = *(long *)(lVar1 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        lVar6 = lVar1;
        func_0x00010be15940(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010be96980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      lVar6 = lVar5;
      func_0x00010bf9c720(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(lVar6);
      if (((lVar5 != 0) &&
          (((*(long *)(param_2 + 0x28) != 0 || (0.0 <= param_1)) && (*(long *)(param_2 + 0x28) != 0)
           ))) && (param_1 < *(double *)(param_2 + 0x48))) {
        func_0x00010bed7ac0(lVar1);
      }
      func_0x00010be0b980(lVar1);
      _objc_release(lVar5);
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cad24; end: 10b7cae27; -[SCTemporaryDatastore _updateExpiration:forMetadata:] */

void FUN_10b7cad24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e13f8;
  _objc_retain(param_4);
  func_0x00010c2a9c00(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = param_4;
  func_0x00010c086560(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = param_4;
  func_0x00010c086560(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be18240(param_1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7cae28; end: 10b7caf27; -[SCTemporaryDatastore decreaseExpirationTo:forKey:] */

void FUN_10b7cae28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7caf28; end: 10b7cb027;  */

void FUN_10b7caf28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10b7cb00c;
  lVar2 = lVar1;
  func_0x00010be15940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be96980(lVar1,param_2,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      lVar4 = lVar3;
      func_0x00010bf9c720(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c070260(puVar5,param_2,uVar6,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      if ((int)puVar5 == 0) goto LAB_10b7cb004;
    }
    func_0x00010bed7ac0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),lVar3);
  }
LAB_10b7cb004:
  _objc_release(lVar3);
LAB_10b7cb00c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cb028; end: 10b7cb127; -[SCTemporaryDatastore increaseExpirationTo:forKey:] */

void FUN_10b7cb028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cb128; end: 10b7cb227;  */

void FUN_10b7cb128(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be15940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010be96980(lVar1,param_2,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      if (lVar2 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        lVar4 = lVar3;
        func_0x00010bf9c720(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c070240(puVar5,param_2,uVar6,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar2);
        if ((int)puVar5 != 0) {
          func_0x00010bed7ac0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),lVar3);
        }
      }
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cb228; end: 10b7cb22b; -[SCTemporaryDatastore invalidate] */

void FUN_10b7cb228(void)

{
  return;
}



/* Entry: 10b7cb22c; end: 10b7cb4a3; -[SCTemporaryDatastore _executeRemoveExpiredContentSync] */

undefined * FUN_10b7cb22c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  puVar1 = PTR_PTR_1126e1468;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126b24e8;
  uStack_78 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  uStack_70 = *(undefined8 *)PTR__NSURLFileSizeKey_11034ab08;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c27b060(puVar3);
  _objc_release(puVar2);
  puStack_98 = PTR_PTR_1133e0d58;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0dea00();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR_PTR_1133e0d60;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar3;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_88;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_d8,8);
  puVar5 = &uStack_b8;
  uVar9 = 8;
  __Block_object_dispose(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(uVar9);
  _objc_retain(ppuVar10);
  ppuVar6 = ppuVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar6);
  if (((ulong)ppuVar7 & 1) != 0) goto LAB_10b7cb66c;
  *(long *)(*(long *)(puVar5[6] + 8) + 0x18) = *(long *)(*(long *)(puVar5[6] + 8) + 0x18) + 1;
  ppuVar6 = ppuVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c282800();
  *(long *)(*(long *)(puVar5[7] + 8) + 0x18) =
       *(long *)(*(long *)(puVar5[7] + 8) + 0x18) + (long)ppuVar7;
  _objc_release(ppuVar6);
  lVar12 = puVar5[4];
  uVar13 = uVar9;
  func_0x00010c0f5800(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be96980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  if (lVar12 == 0) {
LAB_10b7cb638:
    uVar11 = puVar5[4];
    uVar13 = uVar9;
    func_0x00010c0f5800(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddb860(uVar11);
    _objc_release(uVar13);
  }
  else {
    lVar8 = lVar12;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 == 0) goto LAB_10b7cb638;
    lVar8 = lVar12;
    func_0x00010c072440();
    if ((int)lVar8 != 0) {
      uVar13 = *(undefined8 *)(puVar5[4] + 0x30);
      lVar8 = lVar12;
      func_0x00010c086560(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar13);
      _objc_release(lVar8);
      uVar13 = *(undefined8 *)(puVar5[4] + 0x38);
      lVar8 = lVar12;
      func_0x00010c086560(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar13);
      _objc_release(lVar8);
      func_0x00010c0d14a0(puVar5[5]);
    }
  }
  _objc_release(lVar12);
LAB_10b7cb66c:
  _objc_release(ppuVar10);
  _objc_release(uVar9);
  return (undefined *)0x1;
}



/* Entry: 10b7cb4a4; end: 10b7cb693;  */

undefined8 FUN_10b7cb4a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) goto LAB_10b7cb66c;
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282800();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  *(ulong *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + uVar2;
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar6 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be96980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar4 == 0) {
LAB_10b7cb638:
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddb860(uVar5);
    _objc_release(uVar6);
  }
  else {
    lVar3 = lVar4;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_10b7cb638;
    lVar3 = lVar4;
    func_0x00010c072440();
    if ((int)lVar3 != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      lVar3 = lVar4;
      func_0x00010c086560(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar6);
      _objc_release(lVar3);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      lVar3 = lVar4;
      func_0x00010c086560(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar6);
      _objc_release(lVar3);
      func_0x00010c0d14a0(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(lVar4);
LAB_10b7cb66c:
  _objc_release(param_3);
  _objc_release(param_2);
  return 1;
}



/* Entry: 10b7cb694; end: 10b7cb69f;  */

void FUN_10b7cb694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearTrashAsync__1125acac0,0);
  return;
}



/* Entry: 10b7cb6a0; end: 10b7cb777; -[SCTemporaryDatastore removeExpiredContentWithBlock:] */

void FUN_10b7cb6a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b7cb778; end: 10b7cb7c3;  */

void FUN_10b7cb778(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be0bd80(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be0b960(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cb7c4; end: 10b7cb89b; -[SCTemporaryDatastore removeAllObjectsWithBlock:] */

void FUN_10b7cb7c4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b7cb89c; end: 10b7cb997;  */

void FUN_10b7cb89c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126e1468;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126b24e8;
    uVar4 = *(undefined8 *)(lVar2 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b7cb998;
    puStack_50 = &UNK_110d61240;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10b7cb9bc;
    puStack_78 = &UNK_110842e18;
    lStack_70 = lVar2;
    puStack_48 = puVar3;
    _objc_retain();
    func_0x00010c27b060(puVar1,param_2,uVar4,0,0,&puStack_68,&puStack_90);
    func_0x00010bf3c460(puVar3,param_2,0);
    func_0x00010be0b960(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(puStack_48);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b7cb998; end: 10b7cb9bb;  */

undefined8 FUN_10b7cb998(long param_1,undefined8 param_2)

{
  func_0x00010c0d14a0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,0);
  return 1;
}



/* Entry: 10b7cb9bc; end: 10b7cba23;  */

void FUN_10b7cb9bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x30) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b7cba24; end: 10b7cba3b; -[SCTemporaryDatastore removeAllObjectsFromMemoryWithBlock:] */

void FUN_10b7cba24(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7cba34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    return;
  }
  return;
}



/* Entry: 10b7cba3c; end: 10b7cbb8b; -[SCTemporaryDatastore removeAllObjectsExceptKeys:block:] */

void FUN_10b7cba3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c086a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cbb8c; end: 10b7cbc87;  */

void FUN_10b7cbb8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126e1468;
    _objc_alloc_init();
    puVar1 = PTR_PTR_1126b24e8;
    uVar4 = *(undefined8 *)(lVar2 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b7cbc88;
    puStack_60 = &UNK_110d61270;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uStack_58 = uVar5;
    puStack_50 = puVar3;
    lStack_48 = lVar2;
    _objc_retain(puVar3);
    func_0x00010c27b060(puVar1,param_2,uVar4,0,0,&puStack_78,0);
    func_0x00010bf3c460(puVar3,param_2,0);
    func_0x00010be0b960(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_release(puStack_50);
    _objc_release(uStack_58);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b7cbc88; end: 10b7cbd33;  */

undefined8 FUN_10b7cbc88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c0899c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c0d14a0(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8c900(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 10b7cbd34; end: 10b7cbe33; -[SCTemporaryDatastore removeObjectsForKeys:block:] */

void FUN_10b7cbd34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 10b7cbe34; end: 10b7cbff7;  */

void FUN_10b7cbe34(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *unaff_x21;
  long unaff_x22;
  undefined **ppuVar5;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar6;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    unaff_x21 = PTR_PTR_1126e1468;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    unaff_x22 = *(long *)(param_1 + 0x20);
    lStack_138 = param_1;
    _objc_retain(unaff_x22);
    param_4 = auStack_f0;
    lVar2 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_120;
      do {
        param_1 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(unaff_x22);
          }
          puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
          unaff_x24 = *(undefined8 *)(lStack_128 + param_1 * 8);
          lVar3 = lVar1;
          func_0x00010be15940(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfad320(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d14a0(unaff_x21);
          _objc_release(puVar4);
          _objc_release(lVar3);
          func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x30));
          func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x38));
          param_1 = param_1 + 1;
        } while (lVar2 != param_1);
        param_4 = auStack_f0;
        lVar2 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x22);
    func_0x00010bf3c460(unaff_x21);
    param_3 = *(undefined8 *)(lStack_138 + 0x28);
    func_0x00010be0b960(lVar1);
    _objc_release(unaff_x21);
  }
  lVar2 = lVar1;
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_1c0;
  pcStack_148 = FUN_10b7cbff8;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  puStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = lVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined1 *)0x0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(auStack_188,lVar2);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_10b7cc128;
    puStack_1a8 = &UNK_110d60af8;
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(param_4);
    puStack_198 = param_4;
    _objc_retain(param_3);
    uStack_1a0 = param_3;
    _objc_retainBlock(&puStack_1c0);
    _objc_release(uStack_1a0);
    _objc_release(puStack_198);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
  }
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d4c0(lVar2);
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cbff8; end: 10b7cc127; -[SCTemporaryDatastore removeObjectForKey:block:] */

void FUN_10b7cbff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b7cc128;
    puStack_68 = &UNK_110d60af8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    lStack_58 = param_4;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retainBlock(&puStack_80);
    _objc_release(uStack_60);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d4c0(param_1);
  _objc_release(puVar1);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cc128; end: 10b7cc16b;  */

void FUN_10b7cc128(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),lVar1,*(undefined8 *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cc16c; end: 10b7cc267; -[SCTemporaryDatastore contains:] */

undefined1 FUN_10b7cc16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar2 = param_3;
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  _objc_retain(uVar2);
  func_0x00010bf4b4e0(param_1);
  _dispatch_group_wait(uVar2,0xffffffffffffffff);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(uVar2);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b7cc268; end: 10b7cc27b;  */

void FUN_10b7cc268(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7cc27c; end: 10b7cc3ef; -[SCTemporaryDatastore contains:block:] */

void FUN_10b7cc27c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10b7cc33c;
    puStack_50 = &UNK_11084a9e8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cc3f0; end: 10b7cc5c7; -[SCTemporaryDatastore restoreAllKeys] */

undefined * FUN_10b7cc3f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b24e8;
  uStack_60 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b7cc5c8;
  puStack_78 = &UNK_110d611e0;
  lStack_70 = param_1;
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  func_0x00010c27b060(puVar1);
  _objc_release(puVar3);
  _objc_initWeak(auStack_98,param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  puStack_c8 = puVar4;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b7cc6cc;
  puStack_b0 = &UNK_110841fb0;
  puVar9 = auStack_98;
  _objc_copyWeak(auStack_a0,puVar9);
  _objc_retain(puVar2);
  ppuVar5 = &puStack_c8;
  puStack_a8 = puVar2;
  func_0x00010c0f7fc0(uVar10);
  puVar4 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(puStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(puVar9);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar5);
  if (((ulong)ppuVar6 & 1) == 0) {
    lVar11 = *(long *)(puVar2 + 0x20);
    puVar7 = puVar9;
    func_0x00010c0f5800(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be969a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (lVar11 != 0) {
      lVar8 = lVar11;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 != 0) {
        uVar10 = *(undefined8 *)(puVar2 + 0x28);
        lVar8 = lVar11;
        func_0x00010c086560(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(lVar8);
      }
    }
    _objc_release(lVar11);
  }
  _objc_release(puVar9);
  return (undefined *)0x1;
}



/* Entry: 10b7cc5c8; end: 10b7cc6cb;  */

undefined8 FUN_10b7cc5c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar3 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be969a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        lVar2 = lVar4;
        func_0x00010c086560(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar3);
        _objc_release(lVar2);
      }
    }
    _objc_release(lVar4);
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 10b7cc6cc; end: 10b7cc73f;  */

void FUN_10b7cc6cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b7cc740;
    puStack_30 = &UNK_110d612a0;
    lStack_28 = lVar1;
    func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cc740; end: 10b7cc7bf;  */

void FUN_10b7cc740(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7cc7c0; end: 10b7cc7e7; -[SCTemporaryDatastore kindName] */

void FUN_10b7cc7c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7cc7e8; end: 10b7cc8cb; -[SCTemporaryDatastore removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_10b7cc7e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _dispatch_group_enter(param_4);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7cc8cc; end: 10b7cc92f;  */

void FUN_10b7cc8cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be0bd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(long *)(lVar1 + 0x40) = lVar2;
    _objc_release(uVar3);
    func_0x00010be18160(lVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _dispatch_group_leave();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cc930; end: 10b7cc933; -[SCTemporaryDatastore removeAllUserSessionDataAsync] */

void FUN_10b7cc930(void)

{
  return;
}



/* Entry: 10b7cc934; end: 10b7cc937; -[SCTemporaryDatastore handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_10b7cc934(void)

{
  return;
}



/* Entry: 10b7cc938; end: 10b7cc95f; -[SCTemporaryDatastore reportMetrics] */

void FUN_10b7cc938(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7cc960; end: 10b7cca63; -[SCTemporaryDatastore _captureUnmanagedFile:] */

void FUN_10b7cc960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  func_0x00010c0899c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126e13f8;
  _objc_alloc_init(PTR_PTR_1126e13f8);
  func_0x00010c1b7000();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  dVar3 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(dVar3 * 24.0 * 60.0 * 60.0,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198b80(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar2,param_3);
  _objc_release(puVar2);
  func_0x00010be18240(param_1,param_2,param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7cca64; end: 10b7cca6b; -[SCTemporaryDatastore underExperiment] */

undefined1 FUN_10b7cca64(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 10b7cca6c; end: 10b7cca73; -[SCTemporaryDatastore setUnderExperiment:] */

void FUN_10b7cca6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b7cca74; end: 10b7ccaeb; -[SCTemporaryDatastore .cxx_destruct] */

void FUN_10b7cca74(long param_1)

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



/* Entry: 10b7ccaec; end: 10b7ccc5f; -[SCUserSession temporaryDatastoreNamed:type:defaultDaysForExpiry:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b7ccaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long alStack_50 [2];
  long *plVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  if (param_4 == 0) {
    alStack_50[1] = 0;
    plVar4 = alStack_50 + 1;
    func_0x00010bf878e0(param_1,param_2,param_3,alStack_50 + 1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f833b8;
  }
  else {
    alStack_50[0] = 0;
    plVar4 = alStack_50;
    func_0x00010bf26680(param_1,param_2,param_3,alStack_50);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f833d8;
  }
  lVar3 = *plVar4;
  _objc_retain(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b7ccc60;
    puStack_70 = &UNK_110d612d0;
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    _objc_retain(puVar2);
    puStack_60 = puVar2;
    uStack_58 = param_5;
    func_0x00010c0e0000(param_1,param_2,puVar2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_60);
    _objc_release(uStack_68);
  }
  else {
    param_1 = 0;
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7ccc60; end: 10b7ccc93;  */

void FUN_10b7ccc60(void)

{
  _objc_alloc(PTR_PTR_1126b33c8);
  func_0x00010bfee2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ccc94; end: 10b7ccca7; -[SCUserSession cacheWithNoEviction:] */

void FUN_10b7ccc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cache_metricsName_diskSizeLimitC_1125a7280,param_3,0,0,1,1);
  return;
}



/* Entry: 10b7ccca8; end: 10b7cccb7; -[SCUserSession cache:diskSizeLimitConfig:useMemoryCache:] */

void FUN_10b7ccca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cache_metricsName_diskSizeLimitC_1125a7278,param_3,0,param_4,param_5);
  return;
}



/* Entry: 10b7cccb8; end: 10b7ccd0f; -[PINCache init] */

void FUN_10b7cccb8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      &PTR____CFConstantStringClassReference_110f83458,
                      &PTR____CFConstantStringClassReference_110f83478,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b7cccfc);
  (*pcVar1)();
}



/* Entry: 10b7ccd10; end: 10b7ccd17; -[PINCache initWithName:] */

void FUN_10b7ccd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_fileExtension__1125e8fb0,param_3,0);
  return;
}



/* Entry: 10b7ccd18; end: 10b7ccdc3; -[PINCache initWithName:fileExtension:] */

undefined8
FUN_10b7ccd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02da40(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7ccdc4; end: 10b7ccdd3; -[PINCache initWithName:rootPath:fileExtension:] */

void FUN_10b7ccdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_rootPath_serializer_1125e9080,param_3,param_4,0,0,param_5);
  return;
}



/* Entry: 10b7ccdd4; end: 10b7ccfbb; -[PINCache initWithName:rootPath:serializer:deserializer:fileExtension:] */

undefined8 ***
FUN_10b7ccdd4(undefined8 ***param_1,undefined8 param_2,undefined8 **param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == (undefined8 **)0x0) {
    pppuVar3 = (undefined8 ***)0x0;
  }
  else {
    puStack_58 = PTR_PTR_11270af50;
    pppuVar3 = &ppuStack_60;
    ppuStack_60 = param_1;
    _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
    if (pppuVar3 != (undefined8 ***)0x0) {
      ppuVar1 = param_3;
      func_0x00010bf51e00();
      ppuVar2 = pppuVar3[3];
      pppuVar3[3] = ppuVar1;
      _objc_release(ppuVar2);
      ppuVar1 = (undefined8 **)PTR_PTR_1126e1420;
      _objc_alloc();
      func_0x00010c028c20();
      ppuVar2 = pppuVar3[4];
      pppuVar3[4] = ppuVar1;
      _objc_release(ppuVar2);
      ppuVar1 = (undefined8 **)PTR_PTR_1126e1418;
      _objc_alloc();
      func_0x00010c02d940();
      ppuVar2 = pppuVar3[1];
      pppuVar3[1] = ppuVar1;
      _objc_release(ppuVar2);
      ppuVar1 = (undefined8 **)PTR_PTR_1126e13e0;
      _objc_alloc();
      func_0x00010c031fc0();
      ppuVar2 = pppuVar3[2];
      pppuVar3[2] = ppuVar1;
      _objc_release(ppuVar2);
    }
    _objc_retain(pppuVar3);
    param_1 = pppuVar3;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return pppuVar3;
}



/* Entry: 10b7ccfbc; end: 10b7cd00f; +[PINCache sharedCache] */

void FUN_10b7ccfbc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f9db8 != -1) {
    func_0x000107c27d9c(0x1137f9db8,&PTR___NSConcreteGlobalBlock_110d61338);
  }
  uVar1 = uRam00000001137f9db0;
  _objc_retain(uRam00000001137f9db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7cd010; end: 10b7cd047;  */

void FUN_10b7cd010(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1470;
  _objc_alloc();
  func_0x00010c02d480();
  uVar1 = puRam00000001137f9db0;
  puRam00000001137f9db0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7cd048; end: 10b7cd1ab; -[PINCache containsObjectForKeyAsync:completion:] */

void FUN_10b7cd048(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010befa340(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cd1ac; end: 10b7cd203;  */

void FUN_10b7cd1ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4b920();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cd204; end: 10b7cd367; -[PINCache objectForKeyAsync:completion:] */

void FUN_10b7cd204(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0ebaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010befa340(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cd368; end: 10b7cd44b;  */

void FUN_10b7cd368(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0e00a0(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7cd44c; end: 10b7cd67b;  */

void FUN_10b7cd44c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    if (param_5 == 0) {
      puVar2 = auStack_a0;
      _objc_copyWeak(puVar2,param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      func_0x00010c0e00a0(uVar3);
    }
    else {
      func_0x00010bfad260(uVar3);
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10b7cd680;
      puStack_80 = &UNK_1108a5c48;
      puVar2 = auStack_58;
      _objc_copyWeak(puVar2,param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uStack_60 = uVar3;
      _objc_retain(param_3);
      uStack_78 = param_3;
      _objc_retain(param_4);
      uStack_70 = param_4;
      _objc_retain(param_5);
      lStack_68 = param_5;
      func_0x00010befa340(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      uVar4 = uStack_60;
    }
    _objc_release(uVar4);
    _objc_destroyWeak(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cd67c; end: 10b7cd67f;  */

void FUN_10b7cd67c(void)

{
  return;
}



/* Entry: 10b7cd680; end: 10b7cd6d7;  */

void FUN_10b7cd680(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),lVar1,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cd6d8; end: 10b7cd88b;  */

void FUN_10b7cd6d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1d06a0(*(undefined8 *)(lVar1 + 0x10));
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010befa340(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cd88c; end: 10b7cd8e3;  */

void FUN_10b7cd88c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),lVar1,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7cd8e4; end: 10b7cd967; -[PINCache updateMetadataAsync:forKey:] */

void FUN_10b7cd8e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c287c40(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  func_0x00010c287c40(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7cd968; end: 10b7cd977; -[PINCache setObjectAsync:forKey:metadata:completion:] */

void FUN_10b7cd968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObjectAsync_forKey_cost_metad_112651bc8,param_3,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 10b7cd978; end: 10b7cdc5f; -[PINCache setObjectAsync:forKey:cost:metadata:completion:] */

void FUN_10b7cd978(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar2 = PTR_PTR_1126e1478;
    func_0x00010bf0c0c0(PTR_PTR_1126e1478,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10b7cdc60;
    puStack_a0 = &UNK_110c73f38;
    lStack_98 = param_1;
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_4);
    lStack_88 = param_4;
    uStack_78 = param_5;
    _objc_retain(param_6);
    uStack_80 = param_6;
    func_0x00010befa340(puVar2,param_2,&puStack_b8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x10b7cdc78;
    puStack_e0 = &UNK_110c73008;
    lStack_d8 = param_1;
    _objc_retain(param_3);
    lStack_d0 = param_3;
    _objc_retain(param_4);
    lStack_c8 = param_4;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    func_0x00010befa340(puVar2,param_2,&puStack_f8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_7 != 0) {
      puStack_140 = puVar1;
      uStack_138 = 0xc2000000;
      uStack_130 = 0x10b7cdc8c;
      puStack_128 = &UNK_110d25410;
      _objc_retain(param_7);
      lStack_120 = param_1;
      lStack_100 = param_7;
      _objc_retain(param_4);
      lStack_118 = param_4;
      _objc_retain(param_6);
      uStack_110 = param_6;
      _objc_retain(param_3);
      lStack_108 = param_3;
      func_0x00010c17fb20(puVar2,param_2,&puStack_140);
      _objc_release(lStack_108);
      _objc_release(uStack_110);
      _objc_release(lStack_118);
      _objc_release(lStack_100);
    }
    func_0x00010c24d960(puVar2);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_release(lStack_d0);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cdc60; end: 10b7cdca3;  */

void FUN_10b7cdc60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setObject_forKey_cost_metadata__112651b90,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10b7cdca4; end: 10b7cde87; -[PINCache removeObjectForKeyAsync:completion:] */

void FUN_10b7cdca4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126e1478;
    func_0x00010bf0c0c0(PTR_PTR_1126e1478,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b7cde88;
    puStack_68 = &UNK_110883780;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x00010befa340(puVar2,param_2,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10b7cde94;
    puStack_98 = &UNK_110883780;
    lStack_90 = param_1;
    _objc_retain(param_3);
    lStack_88 = param_3;
    func_0x00010befa340(puVar2,param_2,&puStack_b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_4 != 0) {
      puStack_e8 = puVar1;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x10b7cdea0;
      puStack_d0 = &UNK_1108a5ee8;
      _objc_retain(param_4);
      lStack_c8 = param_1;
      lStack_b8 = param_4;
      _objc_retain(param_3);
      lStack_c0 = param_3;
      func_0x00010c17fb20(puVar2,param_2,&puStack_e8);
      _objc_release(lStack_c0);
      _objc_release(lStack_b8);
    }
    func_0x00010c24d960(puVar2);
    _objc_release(lStack_88);
    _objc_release(lStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7cde88; end: 10b7cdebb;  */

void FUN_10b7cde88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b7cdebc; end: 10b7ce077; -[PINCache removeObjectsForKeysAsync:completion:] */

void FUN_10b7cdebc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126e1478;
    func_0x00010bf0c0c0(PTR_PTR_1126e1478,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b7ce078;
    puStack_68 = &UNK_110883780;
    _objc_retain(param_3);
    lStack_60 = param_3;
    lStack_58 = param_1;
    func_0x00010befa340(puVar2,param_2,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10b7ce198;
    puStack_98 = &UNK_110883780;
    _objc_retain(param_3);
    lStack_90 = param_3;
    lStack_88 = param_1;
    func_0x00010befa340(puVar2,param_2,&puStack_b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_4 != 0) {
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10b7ce2b8;
      puStack_c8 = &UNK_1107d0af0;
      _objc_retain(param_4);
      lStack_c0 = param_1;
      lStack_b8 = param_4;
      func_0x00010c17fb20(puVar2,param_2,&puStack_e0);
      _objc_release(lStack_b8);
    }
    func_0x00010c24d960(puVar2);
    _objc_release(lStack_90);
    _objc_release(lStack_60);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7ce078; end: 10b7ce197;  */

void FUN_10b7ce078(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  lVar1 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  __Unwind_Resume();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(lVar1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c12d3e0(*(undefined8 *)(*(long *)(lVar1 + 0x28) + 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  lVar1 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010b7ce2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x28) + 0x10))
            (*(long *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x20));
  return;
}



/* Entry: 10b7ce198; end: 10b7ce2b7;  */

void FUN_10b7ce198(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  lVar2 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010b7ce2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x28) + 0x10))
            (*(long *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x20));
  return;
}



/* Entry: 10b7ce2b8; end: 10b7ce2c7;  */

void FUN_10b7ce2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b7ce2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7ce2c8; end: 10b7ce42b; -[PINCache removeAllObjectsAsync:] */

void FUN_10b7ce2c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e1478;
  func_0x00010bf0c0c0(PTR_PTR_1126e1478,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b7ce42c;
  puStack_60 = &UNK_11087bb00;
  lStack_58 = param_1;
  func_0x00010befa340();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b7ce438;
  puStack_88 = &UNK_11087bb00;
  lStack_80 = param_1;
  func_0x00010befa340(puVar2,param_2,&puStack_a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 != 0) {
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10b7ce444;
    puStack_b8 = &UNK_1107d0af0;
    _objc_retain(param_3);
    lStack_b0 = param_1;
    lStack_a8 = param_3;
    func_0x00010c17fb20(puVar2,param_2,&puStack_d0);
    _objc_release(lStack_a8);
  }
  func_0x00010c24d960(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7ce42c; end: 10b7ce453;  */

void FUN_10b7ce42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b7ce454; end: 10b7ce617; -[PINCache trimToDateAsync:completion:] */

void FUN_10b7ce454(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126e1478;
    func_0x00010bf0c0c0(PTR_PTR_1126e1478,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b7ce618;
    puStack_68 = &UNK_110883780;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x00010befa340(puVar2,param_2,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10b7ce624;
    puStack_98 = &UNK_110883780;
    lStack_90 = param_1;
    _objc_retain(param_3);
    lStack_88 = param_3;
    func_0x00010befa340(puVar2,param_2,&puStack_b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_4 != 0) {
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x10b7ce630;
      puStack_c8 = &UNK_1107d0af0;
      _objc_retain(param_4);
      lStack_c0 = param_1;
      lStack_b8 = param_4;
      func_0x00010c17fb20(puVar2,param_2,&puStack_e0);
      _objc_release(lStack_b8);
    }
    func_0x00010c24d960(puVar2);
    _objc_release(lStack_88);
    _objc_release(lStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7ce618; end: 10b7ce63f;  */

void FUN_10b7ce618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_trimToDate__11267cc18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b7ce640; end: 10b7ce6e3; -[PINCache diskByteCount] */

undefined8 FUN_10b7ce640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b7ce6e4;
  puStack_50 = &UNK_110d613f8;
  puStack_38 = puStack_48;
  func_0x00010c266ca0(*(undefined8 *)(param_1 + 8),param_2,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10b7ce6e4; end: 10b7ce737;  */

void FUN_10b7ce6e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf25e20();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7ce738; end: 10b7ce7b3; -[PINCache containsObjectForKey:] */

undefined8 FUN_10b7ce738(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf4b920(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf4b920(uVar2,param_2,param_3);
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b7ce7b4; end: 10b7ce7df; -[PINCache objectForKey:] */

void FUN_10b7ce7b4(void)

{
  func_0x00010c0e0040();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ce7e0; end: 10b7ce8c3; -[PINCache objectForKey:metadata:] */

void FUN_10b7ce7e0(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0e0040(lVar1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 8);
    if (lVar1 == 0) {
      func_0x00010c0e0040(lVar2,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d05e0(*(undefined8 *)(param_1 + 0x10),param_2,lVar2,param_3,*param_4);
    }
    else {
      func_0x00010bfad260(lVar2,param_2,param_3,&PTR___NSConcreteGlobalBlock_110d61428);
      lVar2 = lVar1;
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b7ce8c4; end: 10b7ce8c7;  */

void FUN_10b7ce8c4(void)

{
  return;
}



/* Entry: 10b7ce8c8; end: 10b7ce8d3; -[PINCache setObject:forKey:metadata:] */

void FUN_10b7ce8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey_cost_metadata__112651b90,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b7ce8d4; end: 10b7ce9af; -[PINCache setObject:forKey:cost:metadata:] */

undefined8
FUN_10b7ce8d4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c1d05a0(uVar1,param_2,param_3,param_4,param_5,param_6);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c1d05e0(uVar1,param_2,param_3,param_4,param_6);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b7ce9b0; end: 10b7ce9cb; -[PINCache objectForKeyedSubscript:metadata:] */

void FUN_10b7ce9b0(void)

{
  func_0x00010c0e0040();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ce9cc; end: 10b7cea73; -[PINCache setObject:forKeyedSubscript:metadata:] */

void FUN_10b7ce9cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    func_0x00010c12d3e0(param_1,param_2,param_4);
  }
  else {
    func_0x00010c1d05e0(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7cea74; end: 10b7ceacf; -[PINCache removeObjectForKey:] */

void FUN_10b7cea74(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7cead0; end: 10b7ceb2b; -[PINCache trimToDate:] */

void FUN_10b7cead0(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c27c7c0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    func_0x00010c27c7c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7ceb2c; end: 10b7ceb53; -[PINCache removeAllObjects] */

/* WARNING: Possible PIC construction at 0x00010b7ceb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b7ceb44) */

void FUN_10b7ceb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10b7ceb54; end: 10b7ceb5f; -[PINCache diskCache] */

void FUN_10b7ceb54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10b7ceb60; end: 10b7ceb6b; -[PINCache memoryCache] */

void FUN_10b7ceb60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 10b7ceb6c; end: 10b7ceb73; -[PINCache name] */

undefined8 FUN_10b7ceb6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


